// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433c8cd0 findFontInSlot body=79 status=ok
// SIG undefined findFontInSlot(void)

longlong * Scaleform::Render::GlyphQueue::findFontInSlot(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  while( true ) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if (*param_1 == param_2) break;
    plVar1 = (longlong *)findFontInSlot(param_1[4],param_2);
    if (plVar1 != (longlong *)0x0) {
      return plVar1;
    }
    param_1 = (longlong *)param_1[5];
  }
  return param_1;
}



// FUNCTION 1433c8d20 FUN_1433c8d20 body=378 status=ok
// SIG undefined FUN_1433c8d20(void)

ulonglong FUN_1433c8d20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar3 = (ulonglong *)*param_2;
  uVar4 = *puVar3;
  uVar7 = ((ulonglong)(ushort)puVar3[2] * 2 ^ uVar4 >> 6 ^ (ulonglong)(ushort)puVar3[1] ^
           (ulonglong)*(ushort *)((longlong)puVar3 + 10) ^
           (ulonglong)*(ushort *)((longlong)puVar3 + 0xc) ^
           (ulonglong)*(ushort *)((longlong)puVar3 + 0xe) ^
           (ulonglong)*(ushort *)((longlong)puVar3 + 0x12) ^ uVar4) & *(ulonglong *)(lVar2 + 8);
  puVar6 = (ulonglong *)(uVar7 * 0x20);
  puVar9 = (ulonglong *)(lVar2 + 0x10 + (longlong)puVar6);
  if ((*puVar9 != 0xfffffffffffffffe) && (puVar9[1] == uVar7)) {
    uVar5 = uVar7;
    uVar10 = 0xffffffffffffffff;
    while( true ) {
      uVar8 = uVar5;
      if (((((puVar9[1] == uVar7) && (puVar6 = (ulonglong *)puVar9[2], *puVar6 == uVar4)) &&
           ((ushort)puVar6[1] == (ushort)puVar3[1])) &&
          ((*(ushort *)((longlong)puVar6 + 10) == *(ushort *)((longlong)puVar3 + 10) &&
           (*(ushort *)((longlong)puVar6 + 0xc) == *(ushort *)((longlong)puVar3 + 0xc))))) &&
         ((*(ushort *)((longlong)puVar6 + 0xe) == *(ushort *)((longlong)puVar3 + 0xe) &&
          (((ushort)puVar6[2] == (ushort)puVar3[2] &&
           (*(ushort *)((longlong)puVar6 + 0x12) == *(ushort *)((longlong)puVar3 + 0x12))))))) {
        uVar4 = *puVar9;
        if (uVar7 == uVar8) {
          if (uVar4 != 0xffffffffffffffff) {
            *puVar9 = 0xfffffffffffffffe;
            lVar1 = uVar4 * 0x20 + lVar2;
            *puVar9 = *(ulonglong *)(uVar4 * 0x20 + 0x10 + lVar2);
            puVar9[1] = *(ulonglong *)(lVar1 + 0x18);
            puVar9[2] = *(ulonglong *)(lVar1 + 0x20);
            puVar9[3] = *(ulonglong *)(lVar1 + 0x28);
            puVar9 = (ulonglong *)(lVar1 + 0x10);
          }
        }
        else {
          *(ulonglong *)(uVar10 * 0x20 + 0x10 + lVar2) = uVar4;
        }
        *puVar9 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar5 = *puVar9;
      if (uVar5 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(uVar5 * 0x20);
      puVar9 = (ulonglong *)(lVar2 + 0x10 + (longlong)puVar6);
      uVar10 = uVar8;
    }
  }
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}



// FUNCTION 1433c8ea0 FUN_1433c8ea0 body=295 status=ok
// SIG undefined FUN_1433c8ea0(void)

void FUN_1433c8ea0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_1433c9280();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar5;
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = uVar10;
    *(undefined4 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0x2c) = uVar12;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 1433c8fd0 FUN_1433c8fd0 body=389 status=ok
// SIG undefined FUN_1433c8fd0(void)

void FUN_1433c8fd0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1433c9024;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_1433c9760(param_1,param_2,lVar5);
LAB_1433c9024:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar7 = uVar6 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
    }
    else {
      puVar4 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar5 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar4 = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 1433c9160 FUN_1433c9160 body=165 status=ok
// SIG undefined FUN_1433c9160(void)

longlong FUN_1433c9160(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar3 != -2) && (lVar4 = param_3, plVar3[1] == param_3)) {
    while( true ) {
      if (plVar3[1] == param_3) {
        plVar1 = (longlong *)*param_2;
        plVar2 = (longlong *)plVar3[2];
        if ((((*plVar2 == *plVar1) && ((short)plVar2[1] == (short)plVar1[1])) &&
            (*(short *)((longlong)plVar2 + 10) == *(short *)((longlong)plVar1 + 10))) &&
           (((*(short *)((longlong)plVar2 + 0xc) == *(short *)((longlong)plVar1 + 0xc) &&
             (*(short *)((longlong)plVar2 + 0xe) == *(short *)((longlong)plVar1 + 0xe))) &&
            (((short)plVar2[2] == (short)plVar1[2] &&
             (*(short *)((longlong)plVar2 + 0x12) == *(short *)((longlong)plVar1 + 0x12))))))) {
          return lVar4;
        }
      }
      lVar4 = *plVar3;
      if (lVar4 == -1) break;
      plVar3 = (longlong *)(*param_1 + 0x10 + lVar4 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 1433c9210 Alloc body=99 status=ok
// SIG undefined Alloc(void)

undefined8 *
Scaleform::
ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>_>
::Alloc(undefined8 param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1433c9410();
  uVar2 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[5] = param_2[5];
  puVar3[6] = param_2[6];
  uVar1 = *(undefined2 *)((longlong)param_2 + 0x3a);
  *(undefined2 *)(puVar3 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((longlong)puVar3 + 0x3a) = uVar1;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  return puVar3;
}



// FUNCTION 1433c9280 FUN_1433c9280 body=67 status=ok
// SIG undefined FUN_1433c9280(void)

void FUN_1433c9280(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433c9760(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433c9760(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 1433c92d0 FUN_1433c92d0 body=134 status=ok
// SIG undefined FUN_1433c92d0(void)

undefined8 FUN_1433c92d0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return 1;
  }
  if (((((param_2 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 == 0)) ||
       ((*(char *)(lVar1 + 0x18) != '\0' &&
        ((*(longlong *)(lVar1 + 0x10) != 0 &&
         (cVar2 = FUN_1432c1cc0(*(longlong *)(lVar1 + 0x10),1), cVar2 == '\0')))))) &&
      (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 != 0)) &&
     (((*(char *)(lVar1 + 0x18) != '\0' && (*(longlong *)(lVar1 + 0x10) != 0)) &&
      (cVar2 = FUN_1432c1c90(*(longlong *)(lVar1 + 0x10),1), cVar2 != '\0')))) {
    return 1;
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 0;
}



// FUNCTION 1433c9360 FUN_1433c9360 body=170 status=ok
// SIG undefined FUN_1433c9360(void)

void FUN_1433c9360(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (param_2 <= (ulonglong)param_1[2]) {
    param_1[1] = 0;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  param_3 = param_2 + param_3;
  param_1[2] = param_3;
  if (param_3 != 0) {
    local_res8[0] = 0x4b;
    uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_3 * 0x70,local_res8);
    *param_1 = uVar1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1433c9410 FUN_1433c9410 body=179 status=ok
// SIG undefined FUN_1433c9410(void)

longlong * FUN_1433c9410(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x40 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 0x4b;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0x1fc8,local_res8);
  plVar2[0x3f8] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0x1fc0) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1433c94d0 FUN_1433c94d0 body=178 status=ok
// SIG undefined FUN_1433c94d0(void)

longlong * FUN_1433c94d0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x68 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 0x4b;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0x33a0,local_res8);
  plVar2[0x673] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0x3398) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1433c9590 FUN_1433c9590 body=179 status=ok
// SIG undefined FUN_1433c9590(void)

longlong * FUN_1433c9590(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x20 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 0x4b;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0xfe8,local_res8);
  plVar2[0x1fc] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0xfe0) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1433c9650 FUN_1433c9650 body=272 status=ok
// SIG undefined FUN_1433c9650(void)

longlong FUN_1433c9650(undefined8 param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_4 + 0x10);
  if ((*plVar3 == 0) && (param_2 * 2 < (uint)*(ushort *)(param_4 + 0x44))) {
    if (plVar3[4] == 0) {
      if (plVar3[5] == 0) {
        FUN_1433c8140(param_1,param_4,param_2);
      }
    }
    else if ((((plVar3[5] == 0) &&
              (*(short *)((longlong)plVar3 + 0x36) == *(short *)(*(longlong *)(param_4 + 0x38) + 4))
              ) && (param_2 < *(ushort *)((longlong)plVar3 + 0x34))) &&
            (uVar2 = *(ushort *)(plVar3 + 6), uVar1 = *(ushort *)(param_4 + 0x42),
            (uVar2 == uVar1) !=
            ((uint)uVar2 + (uint)*(ushort *)((longlong)plVar3 + 0x34) ==
            (uint)uVar1 + (uint)*(ushort *)(param_4 + 0x44)))) {
      FUN_1433c81f0(param_1,param_4,uVar2 == uVar1,param_2);
    }
  }
  lVar4 = FUN_1433c7bc0(param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x10));
  if (lVar4 == 0) {
    *(short *)(param_4 + 0x46) = *(short *)(param_4 + 0x46) + 1;
  }
  uVar2 = *(ushort *)(param_4 + 0x46);
  if (uVar2 < 0x11) {
    if ((uVar2 != 0) && (lVar4 != 0)) {
      *(ushort *)(param_4 + 0x46) = uVar2 - 1;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x30) = *(undefined8 *)(param_4 + 0x30);
    *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(ushort *)(param_4 + 0x40) = *(ushort *)(param_4 + 0x40) | 0x8000;
  }
  return lVar4;
}



// FUNCTION 1433c9760 FUN_1433c9760 body=364 status=ok
// SIG undefined FUN_1433c9760(void)

void FUN_1433c9760(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143388800();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x4b;
  lVar4 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar1 = lVar4;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        plVar6 = (longlong *)(lVar1 + 0x20 + lVar4);
        puVar2 = (ulonglong *)*plVar6;
        FUN_1433c8ea0(&local_res20,param_2,plVar6,
                      (ulonglong)(ushort)puVar2[2] * 2 ^
                      (ulonglong)*(ushort *)((longlong)puVar2 + 0x12) ^
                      (ulonglong)*(ushort *)((longlong)puVar2 + 0xe) ^
                      (ulonglong)*(ushort *)((longlong)puVar2 + 0xc) ^
                      (ulonglong)*(ushort *)((longlong)puVar2 + 10) ^ (ulonglong)(ushort)puVar2[1] ^
                      *puVar2 >> 6 ^ *puVar2);
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433c98d0 FUN_1433c98d0 body=219 status=ok
// SIG undefined FUN_1433c98d0(void)

undefined8 * FUN_1433c98d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__145b05f60;
  puVar1 = param_1 + 2;
  *puVar1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0x2000;
  param_1[7] = puVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = puVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = puVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = puVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1433c9a40 FUN_1433c9a40 body=232 status=ok
// SIG undefined FUN_1433c9a40(void)

void FUN_1433c9a40(longlong param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(ulonglong *)(param_1 + 0x40) >> 2;
  if (*(ulonglong *)(param_1 + 0x48) <= uVar2) {
    FUN_143324790(param_1 + 0x38,uVar2);
  }
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar2 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x40) & 3) * 8) = CONCAT44(1,uVar1);
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  uVar2 = *(ulonglong *)(param_1 + 0x68) >> 4;
  if (*(ulonglong *)(param_1 + 0x70) <= uVar2) {
    FUN_143343dc0(param_1 + 0x60,uVar2);
  }
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + uVar2 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x68) & 0xf) * 4) =
       CONCAT22((short)(int)param_3,(short)(int)param_2);
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
  *(float *)(param_1 + 0x110) = param_2;
  *(float *)(param_1 + 0x114) = param_3;
  *(float *)(param_1 + 0x118) = param_2;
  *(float *)(param_1 + 0x11c) = param_3;
  return;
}



// FUNCTION 1433c9b30 FUN_1433c9b30 body=220 status=ok
// SIG undefined FUN_1433c9b30(void)

void FUN_1433c9b30(longlong param_1,float param_2,float param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(longlong *)(param_1 + 0x68) - 1;
  uVar4 = (ulonglong)((uint)uVar3 & 0xf);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (uVar3 >> 4) * 8);
  if (((short)(int)param_2 != *(short *)(lVar2 + uVar4 * 4)) ||
     ((short)(int)param_3 != *(short *)(lVar2 + 2 + uVar4 * 4))) {
    uVar3 = *(ulonglong *)(param_1 + 0x68) >> 4;
    if (*(ulonglong *)(param_1 + 0x70) <= uVar3) {
      FUN_143343dc0(param_1 + 0x60,uVar3);
    }
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + uVar3 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x68) & 0xf) * 4) =
         CONCAT22((short)(int)param_3,(short)(int)param_2);
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
    uVar3 = *(longlong *)(param_1 + 0x40) - 1;
    piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar3 >> 2) * 8) + 4 +
                    (ulonglong)((uint)uVar3 & 3) * 8);
    *piVar1 = *piVar1 + 1;
  }
  *(float *)(param_1 + 0x11c) = param_3;
  *(float *)(param_1 + 0x118) = param_2;
  return;
}



// FUNCTION 1433c9c60 FUN_1433c9c60 body=346 status=ok
// SIG undefined FUN_1433c9c60(void)

void FUN_1433c9c60(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) / param_3;
  }
  *(int *)(param_1 + 0x104) = iVar1;
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) / param_2;
  }
  *(int *)(param_1 + 0x108) = iVar1;
  *(int *)(param_1 + 0x10c) = (*(int *)(param_1 + 8) / iVar1) * iVar1;
  if ((param_2 != 0) || (param_3 != 0)) {
    FUN_1433c9dc0(param_1,(longlong)*(int *)(param_1 + 8) % (longlong)iVar1 & 0xffffffff);
    FUN_1433c9e70(param_1);
    if ((param_2 != 0) && (*(short *)(param_1 + 0xfa) < *(short *)(param_1 + 0xfe))) {
      FUN_1433ca030(param_1,2);
      FUN_1433ca290(param_1,2,*(undefined4 *)(param_1 + 0x108),
                    ((int)*(short *)(param_1 + 0xfe) - (int)*(short *)(param_1 + 0xfa)) / 3 +
                    (int)*(short *)(param_1 + 0xfa),param_4,param_5);
    }
    if ((param_3 != 0) && (*(short *)(param_1 + 0xfa) < *(short *)(param_1 + 0xfe))) {
      FUN_1433ca030(param_1,1);
      FUN_1433ca290(param_1,1,*(undefined4 *)(param_1 + 0x104),
                    ((int)*(short *)(param_1 + 0xfc) - (int)*(short *)(param_1 + 0xf8)) / 3 +
                    (int)*(short *)(param_1 + 0xf8),0,0);
    }
  }
  return;
}



// FUNCTION 1433c9dc0 FUN_1433c9dc0 body=163 status=ok
// SIG undefined FUN_1433c9dc0(void)

void FUN_1433c9dc0(longlong param_1)

{
  uint *puVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    do {
      uVar6 = (ulonglong)((uint)uVar7 & 3);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar7 >> 2) * 8);
      uVar3 = *(uint *)(lVar4 + 4 + uVar6 * 8);
      puVar1 = (uint *)(lVar4 + uVar6 * 8);
      if (2 < uVar3) {
        uVar5 = *puVar1;
        psVar2 = (short *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar5 >> 4) * 8) +
                          (ulonglong)(uVar5 & 0xf) * 4);
        uVar5 = (uVar5 - 1) + uVar3;
        uVar6 = (ulonglong)(uVar5 & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar5 >> 4) * 8);
        if ((*psVar2 == *(short *)(lVar4 + uVar6 * 4)) &&
           (psVar2[1] == *(short *)(lVar4 + uVar6 * 4 + 2))) {
          puVar1[1] = uVar3 - 1;
        }
      }
      uVar7 = (ulonglong)((uint)uVar7 + 1);
    } while (uVar7 < *(ulonglong *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1433c9e70 FUN_1433c9e70 body=430 status=ok
// SIG undefined FUN_1433c9e70(void)

void FUN_1433c9e70(longlong param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0x7fff7fff;
  sVar9 = 0x7fff;
  *(undefined4 *)(param_1 + 0xfc) = 0x80018001;
  sVar11 = -0x7fff;
  sVar8 = 0x7fff;
  sVar10 = -0x7fff;
  if (*(ulonglong *)(param_1 + 0x40) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x58);
    do {
      uVar15 = (ulonglong)((uint)uVar16 & 3);
      lVar12 = *(longlong *)(lVar12 + (uVar16 >> 2) * 8);
      uVar3 = *(uint *)(lVar12 + 4 + uVar15 * 8);
      if (2 < uVar3) {
        uVar4 = *(uint *)(lVar12 + uVar15 * 8);
        iVar14 = 0;
        uVar6 = (uVar3 - 1) + uVar4;
        uVar15 = (ulonglong)uVar3;
        uVar7 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar6 >> 4) * 8) +
                 (ulonglong)(uVar6 & 0xf) * 4);
        if (uVar3 != 0) {
          uVar17 = (ulonglong)uVar4;
          do {
            uVar13 = (ulonglong)((uint)uVar17 & 0xf);
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (uVar17 >> 4) * 8);
            sVar1 = *(short *)(lVar12 + uVar13 * 4);
            sVar2 = *(short *)(lVar12 + 2 + uVar13 * 4);
            if (sVar1 < sVar9) {
              sVar9 = sVar1;
            }
            if (sVar2 < sVar8) {
              sVar8 = sVar2;
            }
            if (sVar11 < sVar1) {
              sVar11 = sVar1;
            }
            if (sVar10 < sVar2) {
              sVar10 = sVar2;
            }
            uVar3 = (uint)uVar7 >> 0x10;
            uVar17 = uVar17 + 1;
            sVar5 = (short)uVar7;
            uVar7 = *(undefined4 *)(lVar12 + uVar13 * 4);
            iVar14 = iVar14 + ((int)sVar2 * (int)sVar5 - (int)(short)uVar3 * (int)sVar1);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if ((((sVar9 < *(short *)(param_1 + 0xf8)) || (sVar8 < *(short *)(param_1 + 0xfa))) ||
            (*(short *)(param_1 + 0xfc) < sVar11)) || (*(short *)(param_1 + 0xfe) < sVar10)) {
          *(short *)(param_1 + 0xf8) = sVar9;
          *(short *)(param_1 + 0xfa) = sVar8;
          *(short *)(param_1 + 0xfc) = sVar11;
          *(short *)(param_1 + 0xfe) = sVar10;
          *(uint *)(param_1 + 0x100) = (0 < iVar14) + 1;
        }
      }
      lVar12 = *(longlong *)(param_1 + 0x58);
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ulonglong *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1433ca030 FUN_1433ca030 body=602 status=ok
// SIG undefined FUN_1433ca030(void)

void FUN_1433ca030(longlong param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  bool bVar16;
  short sVar17;
  uint uVar18;
  short local_res8;
  short local_res10;
  short local_res18;
  
  if (param_2 == 1) {
    sVar2 = *(short *)(param_1 + 0xf8);
  }
  else {
    sVar2 = *(short *)(param_1 + 0xfa);
  }
  FUN_1433ca790(param_1 + 0x88);
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x98),0,*(size_t *)(param_1 + 0x90));
  uVar18 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar18 >> 2) * 8);
      piVar1 = (int *)(lVar6 + (ulonglong)(uVar18 & 3) * 8);
      if (2 < *(uint *)(lVar6 + 4 + (ulonglong)(uVar18 & 3) * 8)) {
        uVar12 = 0;
        **(undefined1 **)(param_1 + 0x98) = 3;
        uVar10 = piVar1[1];
        if (uVar10 != 0) {
          do {
            iVar14 = *piVar1;
            lVar6 = *(longlong *)(param_1 + 0x80);
            uVar3 = *(undefined4 *)
                     (*(longlong *)(lVar6 + (ulonglong)(iVar14 + uVar12 >> 4) * 8) +
                     (ulonglong)(iVar14 + uVar12 & 0xf) * 4);
            uVar9 = (uVar12 + 1) % uVar10 + iVar14;
            uVar10 = (uVar12 + 2) % uVar10 + iVar14;
            uVar4 = *(undefined4 *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar9 >> 4) * 8) +
                     (ulonglong)(uVar9 & 0xf) * 4);
            uVar5 = *(undefined4 *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar10 >> 4) * 8) +
                     (ulonglong)(uVar10 & 0xf) * 4);
            local_res10 = (short)uVar3;
            local_res8 = (short)uVar4;
            local_res18 = (short)uVar5;
            sVar13 = (short)((uint)uVar3 >> 0x10);
            sVar17 = (short)((uint)uVar4 >> 0x10);
            sVar7 = (short)((uint)uVar5 >> 0x10);
            sVar8 = local_res18;
            if (param_2 == 1) {
              sVar15 = -sVar13;
              sVar8 = -sVar17;
              sVar13 = local_res10;
              sVar17 = local_res8;
              local_res10 = sVar15;
              local_res8 = sVar8;
              sVar8 = -sVar7;
              sVar7 = local_res18;
            }
            bVar16 = false;
            if (sVar13 < sVar17) {
LAB_1433ca1bf:
              if (sVar17 < sVar7) {
LAB_1433ca209:
                if (sVar13 == sVar17) {
                  iVar14 = (int)sVar17 - (int)sVar2;
                  if (local_res10 < local_res8) {
                    pbVar11 = (byte *)((longlong)iVar14 + *(longlong *)(param_1 + 0x98));
                    *pbVar11 = *pbVar11 | (*(int *)(param_1 + 0x100) == 1) + 1U;
                  }
                  if (local_res8 < local_res10) goto LAB_1433ca23e;
                }
              }
              else {
LAB_1433ca1c5:
                iVar14 = (int)sVar17 - (int)sVar2;
                if (local_res10 <= local_res8) {
                  if (local_res8 <= sVar8) {
                    pbVar11 = (byte *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14);
                    *pbVar11 = *pbVar11 | (*(int *)(param_1 + 0x100) == 1) + 1U;
                  }
                  bVar16 = local_res8 <= sVar8;
                  if (local_res8 <= local_res10) goto LAB_1433ca1fa;
LAB_1433ca204:
                  if (bVar16) goto LAB_1433ca253;
                  goto LAB_1433ca209;
                }
LAB_1433ca1fa:
                if (local_res8 < sVar8) goto LAB_1433ca204;
LAB_1433ca23e:
                pbVar11 = (byte *)((longlong)iVar14 + *(longlong *)(param_1 + 0x98));
                *pbVar11 = *pbVar11 | (*(int *)(param_1 + 0x100) != 1) + 1U;
              }
            }
            else {
              if (sVar17 <= sVar7) goto LAB_1433ca1c5;
              if (sVar13 <= sVar17) goto LAB_1433ca1bf;
            }
LAB_1433ca253:
            uVar10 = piVar1[1];
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar10);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1433ca290 FUN_1433ca290 body=1145 status=ok
// SIG undefined FUN_1433ca290(void)

void FUN_1433ca290(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  void *_Dst;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 local_res18;
  ulonglong local_50;
  
  lVar5 = param_1 + 0xa0;
  sVar3 = *(short *)(param_1 + 0x10c) * -4;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar13 = *(ulonglong *)(param_1 + 0xa8) >> 4;
  local_50 = 0;
  local_res18 = CONCAT22(sVar3,sVar3);
  if (*(ulonglong *)(param_1 + 0xb0) <= uVar13) {
    FUN_143343dc0(lVar5,uVar13);
  }
  uVar7 = 0;
  iVar9 = -0x7fff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0xa8) & 0xf) * 4) = local_res18;
  *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
  iVar10 = *(int *)(param_1 + 0x10c);
  iVar15 = iVar10 + param_3 + param_5;
  iVar17 = iVar10 + param_3 + param_6;
  iVar17 = (iVar17 - iVar17 % param_3) - iVar10;
  if (param_2 == 1) {
    sVar3 = *(short *)(param_1 + 0xf8);
  }
  else {
    sVar3 = *(short *)(param_1 + 0xfa);
  }
  iVar18 = param_3 + 1;
  iVar8 = (int)sVar3;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    iVar11 = iVar8;
    do {
      bVar2 = *(byte *)(uVar7 + *(longlong *)(param_1 + 0x98));
      if ((param_4 < iVar11) && (param_2 != 1)) {
        if ((bVar2 & 2) != 0) {
          if (param_6 == 0) {
LAB_1433ca497:
            iVar16 = *(int *)(param_1 + 0x10c) + iVar11 + param_3;
            iVar16 = (iVar16 - iVar16 % param_3) - *(int *)(param_1 + 0x10c);
          }
          else {
            if ((param_6 <= iVar11) && (iVar11 < iVar18 + param_6)) {
              if (((iVar11 <= iVar18 + iVar9) ||
                  (uVar13 = *(longlong *)(param_1 + 0xa8) - 1,
                  iVar17 <= *(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xc0) + (uVar13 >> 4) * 8) + 2 +
                                      (ulonglong)((uint)uVar13 & 0xf) * 4) + param_3)) &&
                 (*(longlong *)(param_1 + 0xa8) != 0)) {
                *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -1;
              }
              local_res18._2_2_ = (undefined2)iVar17;
              goto LAB_1433ca519;
            }
            if ((iVar11 < param_5) ||
               (iVar16 = (iVar15 - iVar15 % param_3) - iVar10, iVar18 + param_5 <= iVar11))
            goto LAB_1433ca497;
          }
          if (((iVar11 <= iVar18 + iVar9) ||
              (uVar13 = *(longlong *)(param_1 + 0xa8) - 1,
              iVar16 <= *(short *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (uVar13 >> 4) * 8)
                                   + 2 + (ulonglong)((uint)uVar13 & 0xf) * 4) + param_3)) &&
             (*(longlong *)(param_1 + 0xa8) != 0)) {
            *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -1;
          }
          local_res18._2_2_ = (undefined2)iVar16;
LAB_1433ca519:
          uVar13 = *(ulonglong *)(param_1 + 0xa8) >> 4;
          local_res18 = CONCAT22(local_res18._2_2_,(short)iVar11);
          if (*(ulonglong *)(param_1 + 0xb0) <= uVar13) {
            FUN_143343dc0(lVar5,uVar13);
          }
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0xa8) & 0xf) * 4) = local_res18;
          *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
          iVar9 = iVar11;
        }
      }
      else if (((bVar2 & 1) != 0) &&
              ((iVar18 + iVar9 < iVar11 &&
               (iVar9 = *(int *)(param_1 + 0x10c) + param_3 / 2 + 1 + iVar11,
               uVar13 = *(longlong *)(param_1 + 0xa8) - 1,
               iVar16 = (iVar9 - iVar9 % param_3) - *(int *)(param_1 + 0x10c), iVar9 = iVar11,
               *(short *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (uVar13 >> 4) * 8) + 2 +
                         (ulonglong)((uint)uVar13 & 0xf) * 4) != iVar16)))) {
        local_res18._2_2_ = (undefined2)iVar16;
        goto LAB_1433ca519;
      }
      iVar11 = iVar11 + 1;
      uVar7 = (ulonglong)(uint)(iVar11 - iVar8);
    } while (uVar7 < *(ulonglong *)(param_1 + 0x90));
  }
  sVar4 = *(short *)(param_1 + 0x10c) << 2;
  uVar13 = *(ulonglong *)(param_1 + 0xa8) >> 4;
  local_res18 = CONCAT22(sVar4,sVar4);
  if (*(ulonglong *)(param_1 + 0xb0) <= uVar13) {
    FUN_143343dc0(lVar5,uVar13);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0xa8) & 0xf) * 4) = local_res18;
  *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
  uVar13 = *(ulonglong *)(param_1 + 0x90);
  lVar5 = 0xe0;
  if (param_2 == 1) {
    lVar5 = 200;
  }
  puVar1 = (undefined8 *)(lVar5 + param_1);
  if (*(ulonglong *)(lVar5 + 8 + param_1) < uVar13) {
    _Dst = (void *)FUN_1433245e0(*puVar1);
    _guard_xfg_dispatch_icall_nop(_Dst,0,uVar13 * 2);
    if (((void *)puVar1[2] != (void *)0x0) && (puVar1[1] != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)puVar1[2],puVar1[1] * 2);
    }
    puVar1[2] = _Dst;
  }
  puVar1[1] = uVar13;
  uVar13 = 2;
  uVar14 = *(undefined4 *)**(undefined8 **)(param_1 + 0xc0);
  uVar6 = ((undefined4 *)**(undefined8 **)(param_1 + 0xc0))[1];
  if (*(longlong *)(param_1 + 0x90) != 0) {
    iVar10 = iVar8;
    do {
      if (((short)uVar6 <= iVar10) &&
         (uVar12 = (uint)uVar13, uVar13 < *(ulonglong *)(param_1 + 0xa8))) {
        uVar7 = uVar13 >> 4;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar6;
        uVar6 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar7 * 8) +
                 (ulonglong)(uVar12 & 0xf) * 4);
      }
      sVar4 = (short)((uint)uVar14 >> 0x10);
      iVar9 = iVar10 - (short)uVar14;
      iVar10 = iVar10 + 1;
      *(short *)(puVar1[2] + local_50 * 2) =
           ((short)((((int)(short)((uint)uVar6 >> 0x10) - (int)sVar4) * iVar9) /
                   ((int)(short)uVar6 - (int)(short)uVar14)) - sVar3) + sVar4;
      local_50 = (ulonglong)(uint)(iVar10 - iVar8);
    } while (local_50 < *(ulonglong *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 1433ca710 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),FAsyncPathFindingQuery>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 2);
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1433ca790 FUN_1433ca790 body=116 status=ok
// SIG undefined FUN_1433ca790(void)

void FUN_1433ca790(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  
  if ((ulonglong)param_1[1] < param_2) {
    _Dst = (void *)FUN_1433245e0(*param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2);
    if (((void *)param_1[2] != (void *)0x0) && (param_1[1] != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[2],param_1[1]);
    }
    param_1[2] = _Dst;
    param_1[1] = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 1433ca810 FUN_1433ca810 body=295 status=ok
// SIG undefined FUN_1433ca810(void)

undefined8 * FUN_1433ca810(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145b05fe0;
  param_1[1] = param_2;
  puVar1 = param_1 + 1;
  param_1[2] = 0x2000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x48] = puVar1;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = puVar1;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = puVar1;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x56) = 0x80000001;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x80000001;
  *(undefined4 *)(param_1 + 0x53) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x7fffffff;
  FUN_1433cb190(param_1,0,0x3f800000);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  FUN_1433cb190(param_1,1,0x3f800000);
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return param_1;
}



// FUNCTION 1433ca940 FUN_1433ca940 body=43 status=ok
// SIG undefined FUN_1433ca940(void)

void FUN_1433ca940(longlong param_1,undefined4 param_2)

{
  FUN_1433cb190(param_1,0,param_2);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// FUNCTION 1433ca980 FUN_1433ca980 body=46 status=ok
// SIG undefined FUN_1433ca980(void)

void FUN_1433ca980(longlong param_1,undefined4 param_2)

{
  FUN_1433cb190(param_1,1,param_2);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 1433ca9c0 FUN_1433ca9c0 body=179 status=ok
// SIG undefined FUN_1433ca9c0(void)

void FUN_1433ca9c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 8);
  *(undefined4 *)(param_1 + 0x298) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x29c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2ac) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2b0) = 0x80000001;
  *(undefined4 *)(param_1 + 0x2b4) = 0x80000001;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  return;
}



// FUNCTION 1433caa80 MoveTo body=65 status=ok
// SIG undefined MoveTo(void)

void Scaleform::Render::Rasterizer::MoveTo(longlong param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0x2c8) = param_2;
  *(float *)(param_1 + 0x2cc) = param_3;
  *(int *)(param_1 + 0x2c0) = (int)(param_2 * 256.0);
  *(int *)(param_1 + 0x2b8) = (int)(param_2 * 256.0);
  *(int *)(param_1 + 0x2c4) = (int)(param_3 * 256.0);
  *(int *)(param_1 + 700) = (int)(param_3 * 256.0);
  return;
}



// FUNCTION 1433caad0 FUN_1433caad0 body=111 status=ok
// SIG undefined FUN_1433caad0(void)

void FUN_1433caad0(longlong param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0x2c8) = param_2;
  *(float *)(param_1 + 0x2cc) = param_3;
  FUN_1433cb240(param_1,*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),
                (int)(param_2 * 256.0),(int)(param_3 * 256.0));
  *(int *)(param_1 + 0x2c4) = (int)(param_3 * 256.0);
  *(int *)(param_1 + 0x2c0) = (int)(param_2 * 256.0);
  return;
}



// FUNCTION 1433cab50 FUN_1433cab50 body=93 status=ok
// SIG undefined FUN_1433cab50(void)

void FUN_1433cab50(longlong param_1)

{
  if ((*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x2b8)) ||
     (*(int *)(param_1 + 0x2c4) != *(int *)(param_1 + 700))) {
    FUN_1433cb240(param_1,*(int *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),
                  *(int *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700));
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 700);
  }
  return;
}



// FUNCTION 1433cabc0 FUN_1433cabc0 body=572 status=ok
// SIG undefined FUN_1433cabc0(void)

undefined8 FUN_1433cabc0(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_18;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x2a0) != 0 || *(int *)(param_1 + 0x2a4) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x248) >> 4;
    if (*(ulonglong *)(param_1 + 0x250) <= uVar9) {
      FUN_143329d20(param_1 + 0x240,uVar9);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x29c);
    uVar6 = *(undefined4 *)(param_1 + 0x2a0);
    uVar7 = *(undefined4 *)(param_1 + 0x2a4);
    puVar1 = (undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x260) + uVar9 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x248) & 0xf) * 0x10);
    *puVar1 = *(undefined4 *)(param_1 + 0x298);
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(longlong *)(param_1 + 0x248) = *(longlong *)(param_1 + 0x248) + 1;
  }
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x298) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x29c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    if (*(longlong *)(param_1 + 0x288) == 0) {
      FUN_1433cbb50(param_1 + 0x268);
      FUN_1433cbb50(param_1 + 0x280);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x290),0,*(longlong *)(param_1 + 0x288) << 3);
      uVar8 = uVar9;
      if (*(longlong *)(param_1 + 0x248) != 0) {
        do {
          uVar10 = (ulonglong)((uint)uVar8 + 1);
          piVar2 = (int *)(*(longlong *)(param_1 + 0x290) +
                          (longlong)
                          (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + (uVar8 >> 4) * 8)
                                    + 4 + (ulonglong)((uint)uVar8 & 0xf) * 0x10) -
                          *(int *)(param_1 + 0x2ac)) * 8);
          *piVar2 = *piVar2 + 1;
          uVar8 = uVar10;
        } while (uVar10 < *(ulonglong *)(param_1 + 0x248));
      }
      uVar8 = uVar9;
      uVar10 = uVar9;
      if (*(longlong *)(param_1 + 0x288) != 0) {
        do {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x290) + uVar10 * 8);
          *(int *)(*(longlong *)(param_1 + 0x290) + uVar10 * 8) = (int)uVar8;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = (ulonglong)(uint)((int)uVar8 + iVar3);
        } while (uVar10 < *(ulonglong *)(param_1 + 0x288));
      }
      uVar8 = uVar9;
      if (*(longlong *)(param_1 + 0x248) != 0) {
        do {
          uVar10 = (ulonglong)((uint)uVar8 + 1);
          lVar11 = (ulonglong)((uint)uVar8 & 0xf) * 0x10 +
                   *(longlong *)(*(longlong *)(param_1 + 0x260) + (uVar8 >> 4) * 8);
          piVar2 = (int *)(*(longlong *)(param_1 + 0x290) +
                          (longlong)(*(int *)(lVar11 + 4) - *(int *)(param_1 + 0x2ac)) * 8);
          *(longlong *)(*(longlong *)(param_1 + 0x278) + (ulonglong)(uint)(*piVar2 + piVar2[1]) * 8)
               = lVar11;
          piVar2[1] = piVar2[1] + 1;
          uVar8 = uVar10;
        } while (uVar10 < *(ulonglong *)(param_1 + 0x248));
      }
      if (*(longlong *)(param_1 + 0x288) != 0) {
        do {
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x290) + 4 + uVar9 * 8);
          local_10 = (ulonglong)uVar4;
          if (uVar4 != 0) {
            local_18 = *(longlong *)(param_1 + 0x278) +
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x290) + uVar9 * 8) * 8;
            FUN_1433cb810(&local_18,0,uVar4,&LAB_1433cbbf0);
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < *(ulonglong *)(param_1 + 0x288));
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1433cae10 FUN_1433cae10 body=443 status=ok
// SIG undefined FUN_1433cae10(void)

void FUN_1433cae10(longlong param_1,ulonglong param_2,longlong param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 < *(ulonglong *)(param_1 + 0x288)) {
    iVar9 = 0;
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x290) + 4 + param_2 * 8);
    puVar8 = (undefined8 *)
             (*(longlong *)(param_1 + 0x278) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x290) + param_2 * 8) * 8);
    if (iVar10 != 0) {
LAB_1433cae80:
      piVar7 = (int *)*puVar8;
      iVar9 = iVar9 + piVar7[2];
      iVar12 = *piVar7;
      iVar4 = piVar7[3];
      while (iVar10 = iVar10 + -1, iVar10 != 0) {
        piVar7 = (int *)puVar8[1];
        puVar8 = puVar8 + 1;
        if (*piVar7 != iVar12) break;
        iVar4 = iVar4 + piVar7[3];
        iVar9 = iVar9 + piVar7[2];
      }
      if (iVar4 != 0) {
        uVar3 = iVar9 * 0x200 - iVar4 >> 9;
        uVar5 = -uVar3;
        if (-1 < (int)uVar3) {
          uVar5 = uVar3;
        }
        if ((*(int *)(param_1 + 0x30) == 1) && (uVar5 = uVar5 & 0x1ff, 0x100 < uVar5)) {
          uVar5 = 0x200 - uVar5;
        }
        if (0xff < (int)uVar5) {
          uVar5 = 0xff;
        }
        puVar11 = (undefined1 *)
                  ((ulonglong)((iVar12 - *(int *)(param_1 + 0x2a8)) * param_4) + param_3);
        uVar1 = *(undefined1 *)((longlong)(int)uVar5 + 0x3c + (longlong)param_5 * 0x100 + param_1);
        uVar6 = (ulonglong)param_4;
        if (param_4 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = uVar1;
            puVar11 = puVar11 + 1;
          }
        }
        iVar12 = iVar12 + 1;
      }
      if (iVar10 != 0) {
        if (iVar12 < *piVar7) {
          uVar3 = (iVar9 << 9) >> 9;
          uVar5 = -uVar3;
          if (-1 < (int)uVar3) {
            uVar5 = uVar3;
          }
          if ((*(int *)(param_1 + 0x30) == 1) && (uVar5 = uVar5 & 0x1ff, 0x100 < uVar5)) {
            uVar5 = 0x200 - uVar5;
          }
          if (0xff < (int)uVar5) {
            uVar5 = 0xff;
          }
          bVar2 = *(byte *)((longlong)(int)uVar5 + 0x3c + (longlong)param_5 * 0x100 + param_1);
          if (bVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)((iVar12 - *(int *)(param_1 + 0x2a8)) * param_4) +
                               param_3),(uint)bVar2,(ulonglong)((*piVar7 - iVar12) * param_4));
          }
        }
        goto LAB_1433cae80;
      }
    }
  }
  return;
}



// FUNCTION 1433cafe0 FUN_1433cafe0 body=416 status=ok
// SIG undefined FUN_1433cafe0(void)

void FUN_1433cafe0(longlong param_1,uint param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  
  uVar4 = (ulonglong)param_2;
  if (uVar4 < *(ulonglong *)(param_1 + 0x288)) {
    iVar7 = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x290) + 4 + uVar4 * 8);
    puVar6 = (undefined8 *)
             (*(longlong *)(param_1 + 0x278) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x290) + uVar4 * 8) * 8);
    if (iVar8 != 0) {
LAB_1433cb050:
      piVar5 = (int *)*puVar6;
      iVar7 = iVar7 + piVar5[2];
      iVar10 = *piVar5;
      iVar2 = piVar5[3];
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        piVar5 = (int *)puVar6[1];
        puVar6 = puVar6 + 1;
        if (*piVar5 != iVar10) break;
        iVar2 = iVar2 + piVar5[3];
        iVar7 = iVar7 + piVar5[2];
      }
      if (iVar2 != 0) {
        uVar1 = iVar7 * 0x200 - iVar2 >> 9;
        uVar3 = -uVar1;
        if (-1 < (int)uVar1) {
          uVar3 = uVar1;
        }
        if ((*(int *)(param_1 + 0x30) == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < uVar3)) {
          uVar3 = 0x200 - uVar3;
        }
        iVar2 = 0xff;
        if ((int)uVar3 <= param_5) {
          iVar2 = 0;
        }
        if ((iVar2 != 0) &&
           (puVar9 = (undefined1 *)
                     ((ulonglong)((iVar10 - *(int *)(param_1 + 0x2a8)) * param_4) + param_3),
           uVar4 = (ulonglong)param_4, param_4 != 0)) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = (char)iVar2;
            puVar9 = puVar9 + 1;
          }
        }
        iVar10 = iVar10 + 1;
      }
      if (iVar8 != 0) {
        if (iVar10 < *piVar5) {
          uVar1 = (iVar7 << 9) >> 9;
          uVar3 = -uVar1;
          if (-1 < (int)uVar1) {
            uVar3 = uVar1;
          }
          if ((*(int *)(param_1 + 0x30) == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < uVar3)) {
            uVar3 = 0x200 - uVar3;
          }
          iVar2 = 0xff;
          if ((int)uVar3 <= param_5) {
            iVar2 = 0;
          }
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)((iVar10 - *(int *)(param_1 + 0x2a8)) * param_4) +
                               param_3),iVar2,(ulonglong)((*piVar5 - iVar10) * param_4));
          }
        }
        goto LAB_1433cb050;
      }
    }
  }
  return;
}



// FUNCTION 1433cb190 FUN_1433cb190 body=169 status=ok
// SIG undefined FUN_1433cb190(void)

void FUN_1433cb190(longlong param_1,int param_2,float param_3)

{
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  
  iVar1 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x3c + (longlong)param_2 * 0x100);
  do {
    dVar3 = _guard_xfg_dispatch_icall_nop((double)((float)iVar1 / 255.0),(double)param_3);
    iVar1 = iVar1 + 1;
    *puVar2 = (char)(longlong)(dVar3 * 255.0 + 0.5);
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x100);
  return;
}



// FUNCTION 1433cb240 FUN_1433cb240 body=967 status=ok
// SIG undefined FUN_1433cb240(void)

void FUN_1433cb240(longlong param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint local_res8;
  int local_res10;
  
  uVar15 = param_3 & 0xff;
  iVar13 = (int)param_5 >> 8;
  iVar8 = param_4 >> 8;
  iVar10 = param_4 - param_2;
  uVar6 = param_5 & 0xff;
  iVar14 = param_2 >> 8;
  iVar16 = param_5 - param_3;
  iVar12 = (int)param_3 >> 8;
  if (iVar14 < *(int *)(param_1 + 0x2a8)) {
    *(int *)(param_1 + 0x2a8) = iVar14;
  }
  if (*(int *)(param_1 + 0x2b0) < iVar14) {
    *(int *)(param_1 + 0x2b0) = iVar14;
  }
  if (iVar12 < *(int *)(param_1 + 0x2ac)) {
    *(int *)(param_1 + 0x2ac) = iVar12;
  }
  if (*(int *)(param_1 + 0x2b4) < iVar12) {
    *(int *)(param_1 + 0x2b4) = iVar12;
  }
  if (iVar8 < *(int *)(param_1 + 0x2a8)) {
    *(int *)(param_1 + 0x2a8) = iVar8;
  }
  if (*(int *)(param_1 + 0x2b0) < iVar8) {
    *(int *)(param_1 + 0x2b0) = iVar8;
  }
  if (iVar13 < *(int *)(param_1 + 0x2ac)) {
    *(int *)(param_1 + 0x2ac) = iVar13;
  }
  if (*(int *)(param_1 + 0x2b4) < iVar13) {
    *(int *)(param_1 + 0x2b4) = iVar13;
  }
  FUN_1433cbc00(param_1,iVar14,iVar12);
  if (iVar12 != iVar13) {
    param_5 = 1;
    if (iVar10 == 0) {
      iVar9 = (param_2 + iVar14 * -0x100) * 2;
      iVar7 = (iVar16 >> 0x1f & 0xffffff00U) + 0x100;
      *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + (iVar7 - uVar15);
      iVar8 = (iVar16 >> 0x1f & 0xfffffffeU) + 1;
      iVar12 = iVar12 + iVar8;
      *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + (iVar7 - uVar15) * iVar9;
      FUN_1433cbc00(param_1,iVar14,iVar12);
      iVar10 = iVar7 * 2 + -0x100;
      while (iVar12 != iVar13) {
        iVar12 = iVar12 + iVar8;
        *(int *)(param_1 + 0x2a0) = iVar10;
        *(int *)(param_1 + 0x2a4) = iVar10 * iVar9;
        if (*(int *)(param_1 + 0x298) != iVar14 || *(int *)(param_1 + 0x29c) != iVar12) {
          if (iVar10 * iVar9 != 0 || iVar10 != 0) {
            uVar11 = *(ulonglong *)(param_1 + 0x248) >> 4;
            if (*(ulonglong *)(param_1 + 0x250) <= uVar11) {
              FUN_143329d20(param_1 + 0x240,uVar11);
            }
            uVar3 = *(undefined4 *)(param_1 + 0x29c);
            uVar4 = *(undefined4 *)(param_1 + 0x2a0);
            uVar5 = *(undefined4 *)(param_1 + 0x2a4);
            puVar1 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x260) + uVar11 * 8) +
                     (ulonglong)(*(uint *)(param_1 + 0x248) & 0xf) * 0x10);
            *puVar1 = *(undefined4 *)(param_1 + 0x298);
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            *(longlong *)(param_1 + 0x248) = *(longlong *)(param_1 + 0x248) + 1;
          }
          *(int *)(param_1 + 0x298) = iVar14;
          *(int *)(param_1 + 0x29c) = iVar12;
          *(undefined8 *)(param_1 + 0x2a0) = 0;
        }
      }
      iVar7 = iVar7 + (uVar6 - 0x100);
      *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + iVar7;
      *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + iVar7 * iVar9;
      return;
    }
    iVar8 = 0x100;
    uVar2 = 0x100 - uVar15;
    if (iVar16 < 0) {
      param_5 = -1;
      iVar8 = 0;
      iVar16 = -iVar16;
      uVar2 = uVar15;
    }
    iVar14 = (int)(uVar2 * iVar10) / iVar16;
    iVar9 = (int)(uVar2 * iVar10) % iVar16;
    if (iVar9 < 0) {
      iVar14 = iVar14 + -1;
      iVar9 = iVar9 + iVar16;
    }
    iVar14 = iVar14 + param_2;
    FUN_1433cb610(param_1,iVar12,param_2,uVar15,iVar14,iVar8);
    iVar12 = iVar12 + param_5;
    FUN_1433cbc00(param_1,iVar14 >> 8,iVar12);
    if (iVar12 != iVar13) {
      iVar7 = (iVar10 * 0x100) / iVar16;
      uVar11 = (longlong)(iVar10 * 0x100) % (longlong)iVar16;
      local_res8 = (uint)uVar11;
      uVar11 = uVar11 & 0xffffffff;
      if ((int)local_res8 < 0) {
        iVar7 = iVar7 + -1;
        local_res8 = local_res8 + iVar16;
        uVar11 = (ulonglong)local_res8;
      }
      iVar9 = iVar9 - iVar16;
      local_res10 = iVar14;
      do {
        iVar9 = iVar9 + (int)uVar11;
        iVar14 = iVar7;
        if (-1 < iVar9) {
          iVar9 = iVar9 - iVar16;
          iVar14 = iVar7 + 1;
        }
        iVar14 = local_res10 + iVar14;
        FUN_1433cb610(param_1,iVar12,local_res10,0x100 - iVar8,iVar14,iVar8);
        iVar12 = iVar12 + param_5;
        FUN_1433cbc00(param_1,iVar14 >> 8,iVar12);
        uVar11 = (ulonglong)local_res8;
        local_res10 = iVar14;
      } while (iVar12 != iVar13);
    }
    uVar15 = 0x100 - iVar8;
    param_2 = iVar14;
  }
  FUN_1433cb610(param_1,iVar12,param_2,uVar15,param_4,uVar6);
  return;
}



// FUNCTION 1433cb610 FUN_1433cb610 body=498 status=ok
// SIG undefined FUN_1433cb610(void)

void FUN_1433cb610(longlong param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_res18;
  int local_res20;
  
  uVar7 = param_5 & 0xff;
  iVar8 = (int)param_5 >> 8;
  uVar6 = param_3 & 0xff;
  if (param_4 == param_6) {
    FUN_1433cbc00(param_1,iVar8,param_2);
    return;
  }
  if ((int)param_3 >> 8 != iVar8) {
    uVar1 = 0x100 - uVar6;
    iVar5 = 1;
    iVar4 = param_5 - param_3;
    param_5 = 0x100;
    local_res20 = 1;
    if (iVar4 < 0) {
      iVar5 = -1;
      iVar9 = 0;
      param_5 = 0;
      iVar4 = -iVar4;
      local_res20 = -1;
      uVar1 = uVar6;
    }
    else {
      iVar9 = 0x100;
    }
    iVar2 = (param_6 - param_4) * uVar1;
    iVar3 = iVar2 / iVar4;
    iVar2 = iVar2 % iVar4;
    if (iVar2 < 0) {
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + iVar4;
    }
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + iVar3;
    iVar5 = ((int)param_3 >> 8) + iVar5;
    *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + (iVar9 + uVar6) * iVar3;
    FUN_1433cbc00(param_1,iVar5,param_2);
    param_4 = param_4 + iVar3;
    if (iVar5 != iVar8) {
      local_res18 = ((iVar3 - param_4) + param_6) * 0x100;
      iVar9 = local_res18 / iVar4;
      local_res18 = local_res18 % iVar4;
      if (local_res18 < 0) {
        iVar9 = iVar9 + -1;
        local_res18 = local_res18 + iVar4;
      }
      iVar2 = iVar2 - iVar4;
      do {
        iVar2 = iVar2 + local_res18;
        iVar3 = iVar9;
        if (-1 < iVar2) {
          iVar2 = iVar2 - iVar4;
          iVar3 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + iVar3;
        iVar5 = iVar5 + local_res20;
        param_4 = param_4 + iVar3;
        *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + iVar3 * 0x100;
        FUN_1433cbc00(param_1,iVar5,param_2);
      } while (iVar5 != iVar8);
    }
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + (param_6 - param_4);
    *(int *)(param_1 + 0x2a4) =
         *(int *)(param_1 + 0x2a4) + ((uVar7 - param_5) + 0x100) * (param_6 - param_4);
    return;
  }
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + (param_6 - param_4);
  *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + (uVar7 + uVar6) * (param_6 - param_4);
  return;
}



// FUNCTION 1433cb810 FUN_1433cb810 body=604 status=ok
// SIG undefined FUN_1433cb810(void)

void FUN_1433cb810(longlong *param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_2a8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar9 = local_2a8;
LAB_1433cb860:
    while (lVar7 = param_2, 9 < param_3 - param_2) {
      lVar1 = *param_1;
      lVar7 = param_2 + 1;
      lVar8 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar4 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
      *(undefined8 *)(lVar1 + lVar4 * 8) = uVar2;
      cVar3 = (*param_4)(*(undefined8 *)(*param_1 + lVar8 * 8),*(undefined8 *)(*param_1 + lVar7 * 8)
                        );
      if (cVar3 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + lVar8 * 8);
        *(undefined8 *)(lVar1 + lVar8 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      cVar3 = (*param_4)(*(undefined8 *)(*param_1 + param_2 * 8),
                         *(undefined8 *)(*param_1 + lVar7 * 8));
      if (cVar3 != '\0') {
        lVar1 = *param_1;
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      cVar3 = (*param_4)(*(undefined8 *)(*param_1 + lVar8 * 8),
                         *(undefined8 *)(*param_1 + param_2 * 8));
      if (cVar3 == '\0') goto LAB_1433cb920;
      puVar6 = (undefined8 *)(*param_1 + param_2 * 8);
      puVar5 = (undefined8 *)(*param_1 + lVar8 * 8);
      while( true ) {
        uVar2 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar2;
LAB_1433cb920:
        do {
          lVar7 = lVar7 + 1;
          cVar3 = (*param_4)(*(undefined8 *)(*param_1 + lVar7 * 8),
                             *(undefined8 *)(*param_1 + param_2 * 8));
        } while (cVar3 != '\0');
        do {
          lVar8 = lVar8 + -1;
          cVar3 = (*param_4)(*(undefined8 *)(*param_1 + param_2 * 8),
                             *(undefined8 *)(*param_1 + lVar8 * 8));
        } while (cVar3 != '\0');
        lVar1 = *param_1;
        puVar6 = (undefined8 *)(lVar1 + lVar8 * 8);
        if (lVar8 < lVar7) break;
        puVar5 = (undefined8 *)(lVar1 + lVar7 * 8);
      }
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      *(undefined8 *)(lVar1 + param_2 * 8) = *puVar6;
      *puVar6 = uVar2;
      if (param_3 - lVar7 < lVar8 - param_2) {
        *plVar9 = param_2;
        plVar9[1] = lVar8;
        plVar9 = plVar9 + 2;
        param_2 = lVar7;
      }
      else {
        plVar9[1] = param_3;
        *plVar9 = lVar7;
        plVar9 = plVar9 + 2;
        param_3 = lVar8;
      }
    }
joined_r0x0001433cb9bc:
    lVar8 = lVar7 + 1;
    if (lVar8 < param_3) {
      lVar1 = lVar7 * 8;
      cVar3 = (*param_4)(*(undefined8 *)(*param_1 + 8 + lVar1),*(undefined8 *)(*param_1 + lVar1));
      lVar4 = lVar7;
      while (lVar7 = lVar8, cVar3 != '\0') {
        puVar6 = (undefined8 *)(*param_1 + lVar1);
        uVar2 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar2;
        if (lVar4 == param_2) break;
        lVar4 = lVar4 + -1;
        lVar1 = lVar4 * 8;
        cVar3 = (*param_4)(*(undefined8 *)(*param_1 + 8 + lVar1),*(undefined8 *)(*param_1 + lVar1));
      }
      goto joined_r0x0001433cb9bc;
    }
    if (local_2a8 < plVar9) {
      param_2 = plVar9[-2];
      param_3 = plVar9[-1];
      plVar9 = plVar9 + -2;
      goto LAB_1433cb860;
    }
  }
  return;
}



// FUNCTION 1433cba70 `scalar_deleting_destructor' body=66 status=ok
// SIG void * `scalar_deleting_destructor'(_AsyncTaskCollection * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::_AsyncTaskCollection::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  Scaleform::Render::LinearHeap::ClearAndRelease(this + 8);
  *(undefined ***)this = &PTR_FUN_145af86a8;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x2d0);
  }
  return this;
}



// FUNCTION 1433cbaf0 FUN_1433cbaf0 body=87 status=ok
// SIG undefined FUN_1433cbaf0(void)

void FUN_1433cbaf0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 8) >> 4;
  if (*(ulonglong *)(param_1 + 0x10) <= uVar3) {
    FUN_143329d20(param_1,uVar3);
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) +
           (ulonglong)(*(uint *)(param_1 + 8) & 0xf) * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 1433cbb50 FUN_1433cbb50 body=145 status=ok
// SIG undefined FUN_1433cbb50(void)

void FUN_1433cbb50(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  
  if ((ulonglong)param_1[1] < param_2) {
    _Dst = (void *)FUN_1433245e0(*param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2 * 8);
    if (((void *)param_1[2] != (void *)0x0) && (param_1[1] != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[2],param_1[1] * 8);
    }
    param_1[2] = _Dst;
    param_1[1] = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 1433cbc00 FUN_1433cbc00 body=127 status=ok
// SIG undefined FUN_1433cbc00(void)

void FUN_1433cbc00(longlong param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x298) != param_2 || *(int *)(param_1 + 0x29c) != param_3) {
    if (*(int *)(param_1 + 0x2a0) != 0 || *(int *)(param_1 + 0x2a4) != 0) {
      FUN_1433cbaf0(param_1 + 0x240,param_1 + 0x298);
    }
    *(int *)(param_1 + 0x298) = param_2;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(int *)(param_1 + 0x29c) = param_3;
  }
  return;
}



// FUNCTION 1433cbc80 FUN_1433cbc80 body=43 status=ok
// SIG undefined FUN_1433cbc80(void)

undefined8 * FUN_1433cbc80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b06068;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1433cbcb0 FUN_1433cbcb0 body=112 status=ok
// SIG undefined FUN_1433cbcb0(void)

undefined8 FUN_1433cbcb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20),param_1,param_3)
  ;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x28);
    if (this[0x30] != (RefCountNTSImpl)0x0) {
      FUN_1433cc0f0(this,param_2,param_1);
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return 1;
}



// FUNCTION 1433cbd60 StripChainsByDepth body=124 status=ok
// SIG undefined StripChainsByDepth(void)

void Scaleform::Render::BundleEntryRange::StripChainsByDepth(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    while( true ) {
      if (puVar3[5] != 0) {
        *(undefined1 *)(puVar3[5] + 0x30) = 1;
      }
      lVar1 = puVar3[1];
      puVar2 = puVar3;
      while ((lVar1 != 0 &&
             ((uint)*(ushort *)(puVar2 + 2) <= (uint)*(ushort *)(puVar2[7] + 0x48) - param_2))) {
        puVar2 = (undefined8 *)puVar2[1];
        lVar1 = puVar2[1];
      }
      puVar2[1] = 0;
      *(undefined2 *)(puVar2 + 2) = 0;
      if (puVar3 == (undefined8 *)param_1[1]) break;
      puVar3 = (undefined8 *)*puVar3;
    }
  }
  return;
}



// FUNCTION 1433cbe30 FUN_1433cbe30 body=685 status=ok
// SIG undefined FUN_1433cbe30(void)

bool FUN_1433cbe30(longlong *param_1,longlong *param_2,short *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong local_80 [8];
  
  if ((*(uint *)(param_1 + 2) & 0x7fffffff) < (*(uint *)(param_2 + 2) & 0x7fffffff)) {
    return false;
  }
  puVar12 = (undefined8 *)*param_2;
  puVar17 = (undefined8 *)*param_1;
  if ((puVar17 != (undefined8 *)0x0) && (puVar12 != (undefined8 *)0x0)) {
    plVar13 = param_1 + 3;
    uVar10 = 0;
    uVar8 = uVar10;
    uVar15 = uVar10;
    do {
      puVar11 = (undefined8 *)0x0;
      bVar3 = false;
      iVar7 = (int)uVar8;
      iVar14 = (int)uVar15;
      if (iVar14 == iVar7) {
        uVar4 = *(uint *)(puVar17[3] + 0xc);
        if (((((uVar4 >> 0xf & 1) == 0) && (puVar17[4] == puVar12[4])) && (puVar17[3] == puVar12[3])
            ) && ((uVar4 >> 0xd & 1) != 0)) {
          if (param_3 != (short *)0x0) {
            if (((ulonglong)param_1[0xb] <= uVar10) ||
               (puVar6 = (undefined8 *)*plVar13, (undefined8 *)*plVar13 == (undefined8 *)0x0)) {
              puVar6 = puVar17;
            }
            lVar1 = puVar6[1];
            while (lVar1 != 0) {
              puVar6 = (undefined8 *)puVar6[1];
              lVar1 = puVar6[1];
            }
            puVar6[1] = puVar12;
            *(short *)(puVar6 + 2) = *(short *)(puVar6[7] + 0x48) - *param_3;
            uVar16 = param_1[0xb];
            if (uVar16 <= uVar10) {
              if (7 < uVar10) goto LAB_1433cbf8a;
              while (uVar16 < uVar10) {
                param_1[param_1[0xb] + 3] = 0;
                param_1[0xb] = param_1[0xb] + 1;
                uVar16 = param_1[0xb];
              }
              param_1[0xb] = param_1[0xb] + 1;
            }
            *plVar13 = (longlong)puVar12;
          }
LAB_1433cbf8a:
          if (puVar12 != (undefined8 *)param_2[1]) {
            puVar11 = (undefined8 *)*puVar12;
          }
          bVar3 = true;
          puVar12 = puVar11;
        }
      }
      puVar11 = puVar17 + 3;
      uVar16 = uVar15;
      if ((*(uint *)(puVar17[3] + 0xc) >> 0xc & 1) == 0) {
        uVar9 = uVar8;
        if (iVar7 != 0) {
          uVar4 = iVar7 - 1;
          plVar2 = *(longlong **)local_80[uVar4];
          iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,((undefined8 *)local_80[uVar4])[1],puVar11);
          if (iVar5 != 0) {
            if ((iVar14 == iVar7) && (!bVar3)) {
              return false;
            }
            if (iVar5 == 2) {
              uVar9 = (ulonglong)uVar4;
              uVar16 = (ulonglong)(iVar14 - 1);
              if (iVar14 != iVar7) {
                uVar16 = uVar15;
              }
            }
            else {
              local_80[uVar4] = (longlong)puVar11;
            }
          }
        }
      }
      else {
        if (iVar7 == 6) {
          return false;
        }
        uVar9 = (ulonglong)(iVar7 + 1);
        local_80[uVar8] = (longlong)puVar11;
        uVar16 = (ulonglong)(iVar14 + 1);
        if (!bVar3) {
          uVar16 = uVar15;
        }
      }
      if (puVar17 == (undefined8 *)param_1[1]) break;
      puVar17 = (undefined8 *)*puVar17;
      plVar13 = plVar13 + 1;
      uVar10 = uVar10 + 1;
      uVar8 = uVar9;
      uVar15 = uVar16;
    } while (puVar12 != (undefined8 *)0x0);
  }
  return puVar12 == (undefined8 *)0x0;
}



// FUNCTION 1433cc0f0 FUN_1433cc0f0 body=252 status=ok
// SIG undefined FUN_1433cc0f0(void)

void FUN_1433cc0f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar2 = param_3;
  do {
    if (lVar2 == 0) {
      if (uVar4 < (ulonglong)param_1[3]) {
        (**(code **)(*param_1 + 0x10))(param_1,uVar4,param_1[3] - uVar4);
      }
      param_1[5] = param_3;
      return;
    }
    uVar1 = param_1[3];
    if ((uVar1 <= uVar4) || (lVar2 != *(longlong *)(param_1[2] + uVar4 * 8))) {
      if (*(longlong **)(lVar2 + 0x28) == param_1) {
        if (uVar4 < uVar1) {
          plVar3 = (longlong *)(param_1[2] + uVar4 * 8);
          uVar5 = uVar4;
          do {
            if (*plVar3 == lVar2) break;
            uVar5 = uVar5 + 1;
            plVar3 = plVar3 + 1;
          } while (uVar5 < uVar1);
          if (uVar4 < uVar5) {
            (**(code **)(*param_1 + 0x10))(param_1,uVar4,uVar5 - uVar4);
          }
        }
        if ((uVar4 < (ulonglong)param_1[3]) && (lVar2 == *(longlong *)(param_1[2] + uVar4 * 8)))
        goto LAB_1433cc1a5;
      }
      FUN_1433cc4b0(lVar2,param_1,uVar4);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar4,lVar2);
    }
LAB_1433cc1a5:
    lVar2 = *(longlong *)(lVar2 + 8);
    uVar4 = uVar4 + 1;
  } while( true );
}



// FUNCTION 1433cc200 FUN_1433cc200 body=112 status=ok
// SIG undefined FUN_1433cc200(void)

void FUN_1433cc200(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1433cc430(plVar1,*(longlong *)(param_1 + 0x18) + 1);
  if (param_3 < *(longlong *)(param_1 + 0x18) - 1U) {
    _Src = (void *)(*plVar1 + param_3 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(*(longlong *)(param_1 + 0x18) - param_3) * 8 - 8);
  }
  puVar2 = (undefined8 *)(*plVar1 + param_3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_4;
  }
  return;
}



// FUNCTION 1433cc280 FUN_1433cc280 body=246 status=ok
// SIG undefined FUN_1433cc280(void)

void FUN_1433cc280(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar2 + param_2) * 8);
      if (*(RefCountNTSImpl **)(lVar1 + 0x28) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar1 + 0x28));
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined2 *)(lVar1 + 0x12) = 0;
    } while (uVar2 < param_3);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (uVar2 != param_3) {
    memmove((void *)(*(longlong *)(param_1 + 0x10) + param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x10) + (param_2 + param_3) * 8),
            ((uVar2 - param_2) - param_3) * 8);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) - param_3;
    return;
  }
  if (((uVar2 != 0) && ((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x20) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1433cc390 RemoveEntry body=74 status=ok
// SIG undefined RemoveEntry(void)

void Scaleform::Render::Bundle::RemoveEntry(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[3];
  uVar3 = (ulonglong)*(ushort *)(param_2 + 0x12);
  if ((uVar1 <= uVar3) || (*(longlong *)(param_1[2] + uVar3 * 8) != param_2)) {
    uVar3 = 0;
    if (uVar1 == 0) {
      return;
    }
    plVar2 = (longlong *)param_1[2];
    while (*plVar2 != param_2) {
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
      if (uVar1 <= uVar3) {
        return;
      }
    }
    *(short *)(param_2 + 0x12) = (short)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433cc3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,uVar3,1);
  return;
}



// FUNCTION 1433cc3e0 findEntryIndex body=79 status=ok
// SIG undefined findEntryIndex(void)

ulonglong Scaleform::Render::Bundle::findEntryIndex
                    (longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = (ulonglong)*(ushort *)(param_3 + 0x12);
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if ((uVar3 < uVar1) &&
     (lVar2 = *(longlong *)(param_1 + 0x10), *(longlong *)(lVar2 + uVar3 * 8) == param_3)) {
    *param_2 = uVar3;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x10);
    do {
      if (*plVar4 == param_3) {
        *(short *)(param_3 + 0x12) = (short)uVar3;
        *param_2 = uVar3;
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 < uVar1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433cc430 FUN_1433cc430 body=114 status=ok
// SIG undefined FUN_1433cc430(void)

void FUN_1433cc430(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1432cfd30(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1432cfd30(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1433cc4b0 FUN_1433cc4b0 body=193 status=ok
// SIG undefined FUN_1433cc4b0(void)

void FUN_1433cc4b0(longlong param_1,longlong param_2,undefined2 param_3)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar1 != param_2)) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    uVar4 = (ulonglong)*(ushort *)(param_1 + 0x12);
    this = *(RefCountNTSImpl **)(param_1 + 0x28);
    uVar2 = *(ulonglong *)(this + 0x18);
    if ((uVar4 < uVar2) && (*(longlong *)(*(longlong *)(this + 0x10) + uVar4 * 8) == param_1)) {
LAB_1433cc527:
      (**(code **)(*(longlong *)this + 0x10))(this,uVar4,1);
    }
    else {
      uVar4 = 0;
      if (uVar2 != 0) {
        plVar3 = *(longlong **)(this + 0x10);
        do {
          if (*plVar3 == param_1) {
            *(short *)(param_1 + 0x12) = (short)uVar4;
            goto LAB_1433cc527;
          }
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 < uVar2);
      }
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x28) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x28));
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x12) = param_3;
  return;
}



// FUNCTION 1433cc5c0 FUN_1433cc5c0 body=44 status=ok
// SIG undefined FUN_1433cc5c0(void)

void FUN_1433cc5c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[1];
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 1433cc600 FUN_1433cc600 body=376 status=ok
// SIG undefined FUN_1433cc600(void)

ulonglong FUN_1433cc600(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (*(longlong *)(param_3 + 0x28) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar5 = FUN_1432cd220();
  plVar7 = (longlong *)*param_1;
  if ((plVar7 == (longlong *)0x0) && (*(longlong *)(uVar5 + 0x40) == 0)) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    uVar8 = 0;
    do {
      if (plVar7 == (longlong *)0x0) {
LAB_1433cc703:
        if ((((*(uint *)((longlong)&DAT_1467ce654 + uVar8) & param_4) != 0) &&
            (lVar6 = FUN_143321150(uVar5 + 0x40,*(undefined4 *)((longlong)&DAT_1467ce650 + uVar8)),
            lVar6 != 0)) &&
           (lVar6 = (**(code **)(uVar8 + 0x1467ce658))(param_2,param_3,lVar6,plVar7), lVar6 != 0)) {
          *param_1 = lVar6;
          param_1 = (longlong *)(lVar6 + 8);
        }
      }
      else {
        iVar1 = *(int *)((longlong)&DAT_1467ce650 + uVar8);
        iVar4 = (**(code **)(*plVar7 + 8))(plVar7);
        if (iVar4 != iVar1) goto LAB_1433cc703;
        plVar2 = (longlong *)plVar7[1];
        if ((*(uint *)((longlong)&DAT_1467ce654 + uVar8) & param_4) == 0) {
LAB_1433cc6e5:
          param_1 = plVar7 + 1;
          plVar7 = plVar2;
        }
        else {
          lVar6 = FUN_143321150(uVar5 + 0x40,iVar1);
          if (lVar6 != 0) {
            bVar3 = (*(code *)((undefined8 *)*plVar7)[3])(plVar7,param_2,lVar6);
            bVar9 = bVar9 | bVar3;
            goto LAB_1433cc6e5;
          }
          (**(code **)*plVar7)(plVar7,1);
          *param_1 = (longlong)plVar2;
          bVar9 = 1;
          plVar7 = plVar2;
        }
      }
      uVar8 = uVar8 + 0x10;
    } while (uVar8 < 0x60);
    uVar5 = (ulonglong)bVar9;
  }
  return uVar5;
}



// FUNCTION 1433cc780 FUN_1433cc780 body=69 status=ok
// SIG undefined FUN_1433cc780(void)

void FUN_1433cc780(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2[1] != 0) {
    FUN_1433cc780();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433cc7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4);
  return;
}



// FUNCTION 1433cc7d0 FUN_1433cc7d0 body=417 status=ok
// SIG undefined FUN_1433cc7d0(void)

undefined8 *
FUN_1433cc7d0(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *local_18;
  undefined8 local_10;
  
  param_1[1] = param_5;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_145b060c8;
  lVar3 = FUN_1432cd220(*(undefined8 *)(param_2 + 0x28));
  *(byte *)(param_1 + 3) = (byte)((ushort)*(undefined2 *)(lVar3 + 10) >> 0xf);
  puVar4 = (undefined8 *)FUN_1433d9860(&local_18,0);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar1 = (longlong *)*puVar4;
  param_1[7] = plVar1;
  param_1[8] = puVar4[1];
  (**(code **)(*plVar1 + 8))();
  param_1[9] = 0;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar4 = (undefined8 *)FUN_1433d9860(&local_18,1,0);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  plVar1 = (longlong *)*puVar4;
  param_1[0xf] = plVar1;
  param_1[0x10] = puVar4[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x11] = 0;
  param_1[0x13] = param_2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar4 = (undefined8 *)FUN_1433d9860(&local_18,2,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  plVar1 = (longlong *)*puVar4;
  param_1[0x17] = plVar1;
  param_1[0x18] = puVar4[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x19] = 0;
  param_1[0x1b] = param_2;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  ppuVar2 = (undefined **)*param_4;
  param_1[0x1d] = ppuVar2;
  if (ppuVar2 != &PTR_LOOP_1467cd040) {
    *(int *)(*ppuVar2 + 8) = *(int *)(*ppuVar2 + 8) + 1;
  }
  return param_1;
}



// FUNCTION 1433cc980 FUN_1433cc980 body=50 status=ok
// SIG undefined FUN_1433cc980(void)

bool FUN_1433cc980(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_1432c0490(param_1 + 0xe8,param_3);
  return param_2 != *(int *)(param_1 + 0xe0);
}



// FUNCTION 1433cc9d0 FUN_1433cc9d0 body=405 status=ok
// SIG undefined FUN_1433cc9d0(void)

ulonglong FUN_1433cc9d0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    uStack_c = 0;
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_b8 = 0x3f800000;
    local_a8 = 0x3f80000000000000;
    local_90 = 0x3f800000;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_58 = 0;
    local_88 = 0x3f800000;
    local_78 = 0x3f80000000000000;
    local_60 = 0x3f800000;
    local_50 = 0x3f80000000000000;
    FUN_14334ff70(lVar1,&local_b8,&local_88);
    uVar2 = FUN_14334f460(lVar1,&local_38,&local_28,&local_b8,&local_88,
                          *(undefined1 *)(param_1 + 0x18));
    bVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + 8) != 4;
    if (bVar5) {
      FUN_14337dfb0(param_1 + 0x20);
      puVar4 = (undefined8 *)FUN_1433d9860(&local_48,0,0);
      (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,puVar4[1]);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = *puVar4;
      *(undefined8 *)(param_1 + 0x40) = puVar4[1];
      (**(code **)(*local_48 + 0x10))(local_48,local_40);
    }
    uVar3 = (ulonglong)bVar5;
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
    FUN_1432c0490(param_1 + 0xe8,&local_28);
  }
  return uVar3;
}



// FUNCTION 1433ccb70 FUN_1433ccb70 body=199 status=ok
// SIG undefined FUN_1433ccb70(void)

void FUN_1433ccb70(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0xe0) != 0) && (param_3 != (undefined8 *)0x0)) &&
     ((*(uint *)(param_3 + 2) & 0x7fffffff) != 0)) {
    *(undefined8 *)(param_1 + 0x20) = *param_3;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(longlong **)param_3[1] = (longlong *)(param_1 + 0x60);
    lVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(longlong *)(param_1 + 0x60) = lVar1;
    *(longlong *)param_2[1] = param_1 + 0xa0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    iVar2 = (*(uint *)(param_3 + 2) & 0x7fffffff) + 3 + (*(uint *)(param_2 + 2) & 0x7fffffff);
    *(int *)(param_1 + 0x10) = iVar2;
    *param_2 = param_1 + 0x20;
    param_2[1] = param_1 + 0xa0;
    *(int *)(param_2 + 2) = iVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 0x60) = *param_2;
  *(longlong *)(param_1 + 0xa0) = param_2[1];
  *(uint *)(param_1 + 0x10) = *(uint *)(param_2 + 2) & 0x7fffffff;
  return;
}



// FUNCTION 1433ccc90 FUN_1433ccc90 body=393 status=ok
// SIG undefined FUN_1433ccc90(void)

undefined8 FUN_1433ccc90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined **local_res10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = FUN_1432cd220(*(undefined8 *)(param_2 + 0x28));
  uVar1 = *(undefined2 *)(lVar3 + 10);
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  local_b8 = 0x3f800000;
  local_a8 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  local_88 = 0x3f800000;
  local_78 = 0x3f80000000000000;
  local_60 = 0x3f800000;
  local_50 = 0x3f80000000000000;
  local_38 = 0x3f800000;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  FUN_14334ff70(param_2,&local_b8,&local_88);
  uVar2 = FUN_14334f460(param_2,&local_48,&local_38,&local_b8,&local_88,(byte)((ushort)uVar1 >> 0xf)
                       );
  uVar4 = (**(code **)(*param_1 + 0x100))(param_1);
  FUN_1432c0ac0(uVar4,&local_res10,&local_38,0);
  local_res8[0] = 0x47;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0xf0,local_res8);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1433cc7d0(lVar3,param_2,uVar2,&local_res10,param_4);
  }
  if (local_res10 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res10);
  }
  return uVar4;
}



// FUNCTION 1433cce20 FUN_1433cce20 body=176 status=ok
// SIG undefined FUN_1433cce20(void)

undefined8 * FUN_1433cce20(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_1[1] = param_3;
  *param_1 = &PTR_FUN_145b060f8;
  *(undefined4 *)(param_1 + 2) = 0;
  ppuVar1 = (undefined **)*param_2;
  param_1[3] = ppuVar1;
  if (ppuVar1 != &PTR_LOOP_1467cd040) {
    *(int *)(*ppuVar1 + 8) = *(int *)(*ppuVar1 + 8) + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1432c0630(param_1 + 3,&local_28,1);
  FUN_1432c0800(param_1 + 3,
                ((ulonglong)
                 (byte)(&DAT_1467ccff4)
                       [(ulonglong)(*(byte *)(*(longlong *)*param_2 + 0xf) & 0xf) * 5] + 1) * 0x10 +
                *(longlong *)*param_2,0x20);
  return param_1;
}



// FUNCTION 1433ccee0 FUN_1433ccee0 body=1376 status=ok
// SIG undefined FUN_1433ccee0(void)

bool FUN_1433ccee0(longlong *param_1,float *param_2,Matrix2x4<float> *param_3,char param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  float *pfVar11;
  undefined8 *puVar12;
  byte bVar13;
  float *pfVar14;
  byte bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte local_res20;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  plVar1 = param_1 + 3;
  cVar9 = '\0';
  pfVar11 = (float *)FUN_1432c08f0(plVar1,1);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if ((param_4 == '\0') && (lVar4 = *(longlong *)*plVar1, (*(byte *)(lVar4 + 0xf) & 4) != 0)) {
    iVar10 = _guard_xfg_dispatch_icall_nop(pfVar11,&local_b8,0x20);
    if (iVar10 != 0) {
      if ((*(float *)(param_3 + 0xc) + 0.0001 < pfVar11[3]) ||
         (pfVar11[3] < *(float *)(param_3 + 0xc) - 0.0001)) {
LAB_1433ccfdc:
        local_res20 = 1;
      }
      else if ((*(float *)(param_3 + 0x1c) + 0.0001 < pfVar11[7]) ||
              (local_res20 = 0, pfVar11[7] < *(float *)(param_3 + 0x1c) - 0.0001))
      goto LAB_1433ccfdc;
      fVar18 = pfVar11[4];
      fVar19 = *pfVar11;
      fVar16 = _guard_xfg_dispatch_icall_nop(fVar19 * fVar19 + fVar18 * fVar18);
      fVar2 = *(float *)(param_3 + 0x10);
      fVar3 = *(float *)param_3;
      fVar17 = _guard_xfg_dispatch_icall_nop(fVar3 * fVar3 + fVar2 * fVar2);
      if ((fVar17 + 0.0001 < fVar16) || (fVar16 < fVar17 - 0.0001)) {
LAB_1433cd0a9:
        bVar15 = 1;
      }
      else {
        fVar16 = _guard_xfg_dispatch_icall_nop(pfVar11[1] * pfVar11[1] + pfVar11[5] * pfVar11[5]);
        fVar17 = _guard_xfg_dispatch_icall_nop
                           (*(float *)(param_3 + 4) * *(float *)(param_3 + 4) +
                            *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14));
        if ((fVar17 + 0.0001 < fVar16) || (fVar16 < fVar17 - 0.0001)) goto LAB_1433cd0a9;
        bVar15 = 0;
      }
      fVar18 = _guard_xfg_dispatch_icall_nop(fVar18,fVar19);
      fVar19 = _guard_xfg_dispatch_icall_nop(fVar2,fVar3);
      pfVar11 = (float *)0x0;
      if ((fVar19 + 0.0001 < fVar18) || (bVar5 = true, fVar18 < fVar19 - 0.0001)) {
        bVar5 = false;
      }
      pfVar14 = (float *)(((ulonglong)
                           (byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5] + 1
                          ) * 0x10 + lVar4);
      bVar6 = 0;
      if ((param_2[3] + 0.0001 < pfVar14[3]) || (pfVar14[3] < param_2[3] - 0.0001)) {
LAB_1433cd150:
        bVar7 = 1;
      }
      else if ((param_2[7] + 0.0001 < pfVar14[7]) ||
              (bVar7 = bVar6, pfVar14[7] < param_2[7] - 0.0001)) goto LAB_1433cd150;
      fVar18 = pfVar14[4];
      fVar19 = *pfVar14;
      fVar16 = _guard_xfg_dispatch_icall_nop(fVar19 * fVar19 + fVar18 * fVar18);
      fVar2 = param_2[4];
      fVar3 = *param_2;
      fVar17 = _guard_xfg_dispatch_icall_nop(fVar3 * fVar3 + fVar2 * fVar2);
      if ((fVar17 + 0.0001 < fVar16) || (fVar16 < fVar17 - 0.0001)) {
LAB_1433cd213:
        bVar8 = 1;
      }
      else {
        fVar16 = _guard_xfg_dispatch_icall_nop(pfVar14[1] * pfVar14[1] + pfVar14[5] * pfVar14[5]);
        fVar17 = _guard_xfg_dispatch_icall_nop(param_2[1] * param_2[1] + param_2[5] * param_2[5]);
        if ((fVar17 + 0.0001 < fVar16) || (bVar8 = bVar6, fVar16 < fVar17 - 0.0001))
        goto LAB_1433cd213;
      }
      fVar18 = _guard_xfg_dispatch_icall_nop(fVar18,fVar19);
      fVar19 = _guard_xfg_dispatch_icall_nop(fVar2,fVar3);
      if (fVar19 + 0.0001 < fVar18) {
LAB_1433cd276:
        bVar13 = bVar6;
      }
      else {
        bVar13 = 1;
        if (fVar18 < fVar19 - 0.0001) goto LAB_1433cd276;
      }
      cVar9 = (**(code **)(*param_1 + 0x30))
                        (param_1,local_res20 | bVar7,bVar13 == 0 || !bVar5,bVar15 | bVar8);
      if (cVar9 != '\0') {
        lVar4 = *(longlong *)*plVar1;
        if ((*(byte *)(lVar4 + 0xf) & 8) != 0) {
          pfVar11 = (float *)(((ulonglong)
                               (byte)(&DAT_1467ccff3)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5]
                              + 1) * 0x10 + lVar4);
        }
        local_d8 = *pfVar11;
        local_d4 = pfVar11[1];
        local_d0 = pfVar11[2];
        local_cc = pfVar11[3];
        local_c8 = pfVar11[4];
        local_c4 = pfVar11[5];
        local_c0 = pfVar11[6];
        local_bc = pfVar11[7];
        puVar12 = (undefined8 *)FUN_1432c08f0(plVar1,1);
        local_f8 = *(undefined4 *)puVar12;
        local_f4 = *(undefined4 *)((longlong)puVar12 + 4);
        local_b8 = *puVar12;
        local_f0 = *(undefined4 *)(puVar12 + 1);
        local_ec = *(undefined4 *)((longlong)puVar12 + 0xc);
        uStack_b0 = puVar12[1];
        local_e8 = *(undefined4 *)(puVar12 + 2);
        local_e4 = *(undefined4 *)((longlong)puVar12 + 0x14);
        local_a8 = puVar12[2];
        local_e0 = *(undefined4 *)(puVar12 + 3);
        local_dc = *(undefined4 *)((longlong)puVar12 + 0x1c);
        uStack_a0 = puVar12[3];
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)&local_f8,(Matrix2x4<float> *)&local_b8);
        Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_f8,param_3);
        Scaleform::Render::Matrix2x4<float>::Append
                  ((Matrix2x4<float> *)&local_d8,(Matrix2x4<float> *)&local_f8);
        pfVar11 = &local_d8;
        goto LAB_1433cd3ff;
      }
    }
  }
  FUN_1432c0630(plVar1,param_3,1);
  FUN_1432c0800(plVar1,param_2,0x20);
  pfVar11 = param_2;
LAB_1433cd3ff:
  FUN_1432c0490(plVar1,pfVar11);
  FUN_1432c0630(plVar1,param_2,0);
  return cVar9 == '\0';
}



// FUNCTION 1433cd450 FUN_1433cd450 body=9 status=ok
// SIG undefined FUN_1433cd450(void)

void FUN_1433cd450(longlong param_1)

{
  FUN_1432c0590(param_1 + 0x18);
  return;
}



// FUNCTION 1433cd460 FUN_1433cd460 body=266 status=ok
// SIG undefined FUN_1433cd460(void)

undefined8 *
FUN_1433cd460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,char param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_1433cce20(param_1,param_3,param_5);
  *param_1 = &PTR_FUN_145b06130;
  puVar2 = (undefined8 *)FUN_1433d98b0(&local_18,6,*(undefined4 *)(param_4 + 8),param_6);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[7] = plVar1;
  param_1[8] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[9] = 0;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d98b0(&local_18,7,(param_6 != '\0') + '\x14',param_6);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[0xf] = plVar1;
  param_1[0x10] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x11] = 0;
  param_1[0x13] = param_2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return param_1;
}



// FUNCTION 1433cd580 FUN_1433cd580 body=414 status=ok
// SIG undefined FUN_1433cd580(void)

undefined8 FUN_1433cd580(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  RefCountNTSImpl *pRVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *local_28;
  undefined8 local_20;
  
  cVar3 = FUN_1432d0100(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_2 + 0x54));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = *(RefCountNTSImpl **)(param_1 + 0x48);
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0x20);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x48) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = *(RefCountNTSImpl **)(param_1 + 0x88);
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0x60);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0;
  puVar4 = (undefined8 *)FUN_1433d98b0(&local_28,6,*(undefined4 *)(param_3 + 8),cVar3);
  (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,puVar4[1]);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
            (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x38) = *puVar4;
  *(undefined8 *)(param_1 + 0x40) = puVar4[1];
  (**(code **)(*local_28 + 0x10))(local_28,local_20);
  puVar4 = (undefined8 *)FUN_1433d98b0(&local_28,7,(cVar3 != '\0') + '\x14',cVar3);
  (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,puVar4[1]);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))
            (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x78) = *puVar4;
  *(undefined8 *)(param_1 + 0x80) = puVar4[1];
  (**(code **)(*local_28 + 0x10))(local_28,local_20);
  return 1;
}



// FUNCTION 1433cd7a0 FUN_1433cd7a0 body=482 status=ok
// SIG undefined FUN_1433cd7a0(void)

undefined8 FUN_1433cd7a0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined **local_res10;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = 0x3f800000;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e8 = 0x3f800000;
  local_d8 = 0x3f80000000000000;
  local_c0 = 0x3f800000;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_b8 = 0x3f800000;
  local_a8 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  local_80 = 0x3f80000000000000;
  local_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  lVar3 = FUN_1432cd220(*(undefined8 *)(param_2 + 0x28));
  local_48 = *(undefined4 *)(lVar3 + 0x50);
  uStack_44 = *(undefined4 *)(lVar3 + 0x54);
  uStack_40 = *(undefined4 *)(lVar3 + 0x58);
  uStack_3c = *(undefined4 *)(lVar3 + 0x5c);
  local_38 = *(undefined4 *)(lVar3 + 0x60);
  uStack_34 = *(undefined4 *)(lVar3 + 100);
  uStack_30 = *(undefined4 *)(lVar3 + 0x68);
  uStack_2c = *(undefined4 *)(lVar3 + 0x6c);
  FUN_14334ff70(param_2,&local_e8,&local_b8);
  uVar5 = 0;
  iVar2 = FUN_14334fa80(param_2,&local_78,&local_68,&local_e8,&local_b8,0);
  if (iVar2 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_54 = 0x3f800000;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = 0x3f800000;
    uStack_60 = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x100))(param_1);
  FUN_1432c0ac0(uVar4,&local_res10,&local_68,0);
  cVar1 = FUN_1432d0100(*(undefined4 *)(param_3 + 8),*(undefined4 *)((longlong)param_1 + 0x54));
  if (cVar1 != '\0') {
    FUN_1433501c0(param_2,&local_48);
  }
  FUN_1432c0590(&local_res10,&local_48);
  local_res8[0] = 0x47;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0xa0,local_res8);
  if (lVar3 != 0) {
    uVar5 = FUN_1433cd460(lVar3,param_2,&local_res10,param_3,param_4,cVar1);
  }
  if (local_res10 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res10);
  }
  return uVar5;
}



// FUNCTION 1433cd990 FUN_1433cd990 body=392 status=ok
// SIG undefined FUN_1433cd990(void)

undefined8 *
FUN_1433cd990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_1433cce20(param_1,param_4,param_6);
  *param_1 = &PTR_FUN_145b06168;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
          ::GetRawUserObject(param_5);
  puVar3 = (undefined8 *)FUN_1433d9930(&local_38,8,uVar2);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  plVar1 = (longlong *)*puVar3;
  param_1[8] = plVar1;
  param_1[9] = puVar3[1];
  (**(code **)(*plVar1 + 8))();
  param_1[10] = 0;
  param_1[0xc] = param_3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  (**(code **)(*local_38 + 0x10))(local_38,local_30);
  puVar3 = (undefined8 *)FUN_1433d9930(&local_38,9,0);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  plVar1 = (longlong *)*puVar3;
  param_1[0x10] = plVar1;
  param_1[0x11] = puVar3[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x12] = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  (**(code **)(*local_38 + 0x10))(local_38,local_30);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1432c0630(param_1 + 3,&local_28,1);
  FUN_1432c0800(param_1 + 3,
                ((ulonglong)
                 (byte)(&DAT_1467ccff4)
                       [(ulonglong)(*(byte *)(*(longlong *)*param_4 + 0xf) & 0xf) * 5] + 1) * 0x10 +
                *(longlong *)*param_4,0x20);
  FUN_1433cdf40(param_1,param_2,param_5);
  return param_1;
}



// FUNCTION 1433cdb30 FUN_1433cdb30 body=288 status=ok
// SIG undefined FUN_1433cdb30(void)

undefined8 FUN_1433cdb30(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_14337dfb0(param_1 + 0x28);
  FUN_14337dfb0(param_1 + 0x68);
  uVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
          ::GetRawUserObject(param_3);
  puVar2 = (undefined8 *)FUN_1433d9930(&local_18,8,uVar1);
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
            (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x40) = *puVar2;
  *(undefined8 *)(param_1 + 0x48) = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d9930(&local_18,9);
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
            (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x80) = *puVar2;
  *(undefined8 *)(param_1 + 0x88) = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  FUN_1433cdf40(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 1433cdc60 FUN_1433cdc60 body=168 status=ok
// SIG undefined FUN_1433cdc60(void)

void FUN_1433cdc60(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar1 = Scaleform::Render::FilterSet::IsContributing();
    cVar2 = '\x01';
    if (cVar1 != '\0') goto LAB_1433cdc8e;
  }
  cVar2 = '\0';
LAB_1433cdc8e:
  *(char *)(param_1 + 0x20) = cVar2;
  if (cVar2 != '\0') {
    *(longlong *)(param_1 + 0x28) = *param_2;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(longlong *)param_2[1] = param_1 + 0x68;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x78) = 0;
    iVar3 = (*(uint *)(param_2 + 2) & 0x7fffffff) + 2;
    *(int *)(param_1 + 0x10) = iVar3;
    *param_2 = param_1 + 0x28;
    param_2[1] = param_1 + 0x68;
    *(int *)(param_2 + 2) = iVar3;
    return;
  }
  *(longlong *)(param_1 + 0x28) = *param_2;
  *(longlong *)(param_1 + 0x68) = param_2[1];
  *(uint *)(param_1 + 0x10) = *(uint *)(param_2 + 2) & 0x7fffffff;
  return;
}



// FUNCTION 1433cdd60 FUN_1433cdd60 body=459 status=ok
// SIG undefined FUN_1433cdd60(void)

undefined8 FUN_1433cdd60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined **local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  uStack_44 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  local_58 = 0x3f800000;
  uStack_50 = 0;
  FUN_1432bfaf0(local_38);
  local_d8 = 0x3f800000;
  local_c8 = 0x3f80000000000000;
  local_b0 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_98 = 0x3f80000000000000;
  local_80 = 0x3f800000;
  local_70 = 0x3f80000000000000;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  FUN_14334ff70(param_2,&local_d8,&local_a8);
  FUN_1433501c0(param_2,local_38);
  uVar4 = 0;
  iVar1 = FUN_14334fa80(param_2,&local_68,&local_58,&local_d8,&local_a8,0);
  if (iVar1 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    uStack_44 = 0x3f800000;
    uStack_40 = 0;
    uStack_3c = 0;
    local_58 = 0x3f800000;
    uStack_50 = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
  FUN_1432c0ac0(uVar2,local_e8,&local_58,0);
  FUN_1432c0590(local_e8,local_38);
  local_res8[0] = 0x47;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0xa8,local_res8);
  if (lVar3 != 0) {
    uVar4 = FUN_1433cd990(lVar3,param_1,param_2,local_e8,param_3,param_4);
  }
  if (local_e8[0] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_e8[0]);
  }
  return uVar4;
}



// FUNCTION 1433cdf40 FUN_1433cdf40 body=135 status=ok
// SIG undefined FUN_1433cdf40(void)

void FUN_1433cdf40(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  lVar1 = Scaleform::Render::FilterState::GetFilterCount(param_3);
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      lVar1 = Scaleform::Render::FilterState::GetFilter(param_3,uVar5);
      if (*(int *)(lVar1 + 0x10) - 4U < 2) {
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2);
        FUN_1432d08c0(lVar1,uVar2);
      }
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = Scaleform::Render::FilterState::GetFilterCount(param_3);
    } while (uVar5 < uVar3);
  }
  return;
}



// FUNCTION 1433cdfe0 FUN_1433cdfe0 body=221 status=ok
// SIG undefined FUN_1433cdfe0(void)

undefined8 *
FUN_1433cdfe0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  param_1[1] = param_4;
  *param_1 = &PTR_FUN_145b061a0;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)FUN_1433d9990(&local_18,10,*(undefined8 *)(param_3 + 8));
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[6] = plVar1;
  param_1[7] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[8] = 0;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d9990(&local_18,0xb,0);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[0xe] = plVar1;
  param_1[0xf] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x10] = 0;
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return param_1;
}



// FUNCTION 1433ce0e0 FUN_1433ce0e0 body=201 status=ok
// SIG undefined FUN_1433ce0e0(void)

undefined8 FUN_1433ce0e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x40);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0x18);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  puVar2 = (undefined8 *)FUN_1433d9990(&local_18,10,*(undefined8 *)(param_3 + 8));
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = *puVar2;
  *(undefined8 *)(param_1 + 0x38) = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return 1;
}



// FUNCTION 1433ce220 FUN_1433ce220 body=110 status=ok
// SIG undefined FUN_1433ce220(void)

void FUN_1433ce220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x47;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0x98,local_res18);
  if (lVar1 != 0) {
    FUN_1433cdfe0(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1433ce2a0 FUN_1433ce2a0 body=221 status=ok
// SIG undefined FUN_1433ce2a0(void)

undefined8 *
FUN_1433ce2a0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  param_1[1] = param_4;
  *param_1 = &PTR_FUN_145b061d0;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)FUN_1433d99f0(&local_18,0xc,*(undefined8 *)(param_3 + 8));
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[6] = plVar1;
  param_1[7] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[8] = 0;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d99f0(&local_18,0xd,0);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[0xe] = plVar1;
  param_1[0xf] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x10] = 0;
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return param_1;
}



// FUNCTION 1433ce3a0 FUN_1433ce3a0 body=201 status=ok
// SIG undefined FUN_1433ce3a0(void)

undefined8 FUN_1433ce3a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x40);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0x18);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  puVar2 = (undefined8 *)FUN_1433d99f0(&local_18,0xc,*(undefined8 *)(param_3 + 8));
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = *puVar2;
  *(undefined8 *)(param_1 + 0x38) = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return 1;
}



// FUNCTION 1433ce4e0 FUN_1433ce4e0 body=110 status=ok
// SIG undefined FUN_1433ce4e0(void)

void FUN_1433ce4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x47;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0x98,local_res18);
  if (lVar1 != 0) {
    FUN_1433ce2a0(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1433ce560 FUN_1433ce560 body=313 status=ok
// SIG undefined FUN_1433ce560(void)

undefined8 *
FUN_1433ce560(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_145b06200;
  puVar2 = (undefined8 *)FUN_1433d9a50(&local_18,0xe,0);
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[6] = plVar1;
  param_1[7] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[8] = 0;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d9a50(&local_18,0xf,0);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar1 = (longlong *)*puVar2;
  param_1[0xe] = plVar1;
  param_1[0xf] = puVar2[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x10] = 0;
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  puVar2 = (undefined8 *)FUN_1433d9a50(&local_18,0xe,*(undefined8 *)(param_3 + 8));
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],param_1[7]);
  param_1[6] = *puVar2;
  param_1[7] = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return param_1;
}



// FUNCTION 1433ce6b0 FUN_1433ce6b0 body=201 status=ok
// SIG undefined FUN_1433ce6b0(void)

undefined8 FUN_1433ce6b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  undefined8 *puVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x40);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0x18);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  puVar2 = (undefined8 *)FUN_1433d9a50(&local_18,0xe,*(undefined8 *)(param_3 + 8));
  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,puVar2[1]);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = *puVar2;
  *(undefined8 *)(param_1 + 0x38) = puVar2[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return 1;
}



// FUNCTION 1433ce7f0 FUN_1433ce7f0 body=110 status=ok
// SIG undefined FUN_1433ce7f0(void)

void FUN_1433ce7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x47;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0x98,local_res18);
  if (lVar1 != 0) {
    FUN_1433ce560(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1433ce870 FUN_1433ce870 body=106 status=ok
// SIG undefined FUN_1433ce870(void)

void FUN_1433ce870(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)FUN_1433d9a50(&local_18,0xe,*(undefined8 *)(param_2 + 8));
  (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,puVar1[1]);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = *puVar1;
  *(undefined8 *)(param_1 + 0x38) = puVar1[1];
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return;
}



// FUNCTION 1433ce8e0 FUN_1433ce8e0 body=236 status=ok
// SIG undefined FUN_1433ce8e0(void)

void FUN_1433ce8e0(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *pRVar2;
  
  if (param_1[0x11] != 0) {
    if (param_1[0x11] != 0) {
      piVar1 = (int *)(param_1[0x11] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[0x11];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0xc);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x11] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x11]);
  }
  (**(code **)(*(longlong *)param_1[0xf] + 0x10))((longlong *)param_1[0xf],param_1[0x10]);
  if (param_1[9] != 0) {
    if (param_1[9] != 0) {
      piVar1 = (int *)(param_1[9] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[9];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 4);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[9] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[9]);
  }
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[8]);
  if ((undefined **)param_1[3] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[3]);
  }
  *param_1 = &PTR_FUN_145b06098;
  return;
}



// FUNCTION 1433ce9d0 FUN_1433ce9d0 body=239 status=ok
// SIG undefined FUN_1433ce9d0(void)

void FUN_1433ce9d0(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *pRVar2;
  
  if (param_1[0x12] != 0) {
    if (param_1[0x12] != 0) {
      piVar1 = (int *)(param_1[0x12] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[0x12];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0xd);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x12] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x12]);
  }
  (**(code **)(*(longlong *)param_1[0x10] + 0x10))((longlong *)param_1[0x10],param_1[0x11]);
  if (param_1[10] != 0) {
    if (param_1[10] != 0) {
      piVar1 = (int *)(param_1[10] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[10];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 5);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[10] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[10]);
  }
  (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],param_1[9]);
  if ((undefined **)param_1[3] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[3]);
  }
  *param_1 = &PTR_FUN_145b06098;
  return;
}



// FUNCTION 1433ceac0 FUN_1433ceac0 body=320 status=ok
// SIG undefined FUN_1433ceac0(void)

void FUN_1433ceac0(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *pRVar2;
  
  if ((undefined **)param_1[0x1d] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[0x1d]);
  }
  if (param_1[0x19] != 0) {
    if (param_1[0x19] != 0) {
      piVar1 = (int *)(param_1[0x19] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[0x19];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0x14);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x19] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x19]);
  }
  (**(code **)(*(longlong *)param_1[0x17] + 0x10))((longlong *)param_1[0x17],param_1[0x18]);
  if (param_1[0x11] != 0) {
    if (param_1[0x11] != 0) {
      piVar1 = (int *)(param_1[0x11] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[0x11];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0xc);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x11] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x11]);
  }
  (**(code **)(*(longlong *)param_1[0xf] + 0x10))((longlong *)param_1[0xf],param_1[0x10]);
  if (param_1[9] != 0) {
    if (param_1[9] != 0) {
      piVar1 = (int *)(param_1[9] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[9];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 4);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[9] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[9]);
  }
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[8]);
  *param_1 = &PTR_FUN_145b06098;
  return;
}



// FUNCTION 1433cec00 FUN_1433cec00 body=208 status=ok
// SIG undefined FUN_1433cec00(void)

void FUN_1433cec00(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *pRVar2;
  
  if (param_1[0x10] != 0) {
    if (param_1[0x10] != 0) {
      piVar1 = (int *)(param_1[0x10] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[0x10];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 0xb);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x10] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x10]);
  }
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))((longlong *)param_1[0xe],param_1[0xf]);
  if (param_1[8] != 0) {
    if (param_1[8] != 0) {
      piVar1 = (int *)(param_1[8] + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar2 = (RefCountNTSImpl *)param_1[8];
    Scaleform::Render::Bundle::RemoveEntry(pRVar2,param_1 + 3);
    if (pRVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar2);
    }
  }
  if ((RefCountNTSImpl *)param_1[8] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[8]);
  }
  (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],param_1[7]);
  *param_1 = &PTR_FUN_145b06098;
  return;
}



// FUNCTION 1433cecd0 FUN_1433cecd0 body=89 status=ok
// SIG undefined FUN_1433cecd0(void)

undefined8 FUN_1433cecd0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433ce8e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1433ced30 FUN_1433ced30 body=73 status=ok
// SIG undefined FUN_1433ced30(void)

undefined8 * FUN_1433ced30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b06098;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1433ced80 FUN_1433ced80 body=118 status=ok
// SIG undefined FUN_1433ced80(void)

undefined8 * FUN_1433ced80(undefined8 *param_1,ulonglong param_2)

{
  if ((undefined **)param_1[3] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[3]);
  }
  *param_1 = &PTR_FUN_145b06098;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1433cee00 FUN_1433cee00 body=89 status=ok
// SIG undefined FUN_1433cee00(void)

undefined8 FUN_1433cee00(undefined8 param_1,ulonglong param_2)

{
  FUN_1433ce9d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1433cee60 FUN_1433cee60 body=89 status=ok
// SIG undefined FUN_1433cee60(void)

undefined8 FUN_1433cee60(undefined8 param_1,ulonglong param_2)

{
  FUN_1433ceac0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1433ceec0 FUN_1433ceec0 body=89 status=ok
// SIG undefined FUN_1433ceec0(void)

undefined8 FUN_1433ceec0(undefined8 param_1,ulonglong param_2)

{
  FUN_1433cec00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1433cef20 FUN_1433cef20 body=121 status=ok
// SIG undefined FUN_1433cef20(void)

undefined8 *
FUN_1433cef20(undefined8 *param_1,RefCountImpl *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b06230;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[4] = param_2;
  param_1[6] = param_4;
  uVar1 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 1433cefa0 FUN_1433cefa0 body=46 status=ok
// SIG undefined FUN_1433cefa0(void)

void FUN_1433cefa0(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06230;
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433cefe0 FUN_1433cefe0 body=53 status=ok
// SIG undefined FUN_1433cefe0(void)

undefined8 FUN_1433cefe0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x28),0);
    if (lVar2 == *(longlong *)(param_1 + 0x28)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433cf020 FUN_1433cf020 body=286 status=ok
// SIG undefined FUN_1433cf020(void)

undefined8 *
FUN_1433cf020(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6,longlong param_7,ulonglong param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = param_5;
  *param_1 = &PTR_FUN_145b062a0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 6) = param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1432c5250(param_1 + 10);
  if (param_6 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    if (param_8 == 0) {
      lVar3 = (**(code **)(*param_6 + 0x38))(param_6);
      param_8 = lVar3 - param_7;
    }
    FUN_143333590(param_1 + 7,param_8);
    if (param_1[8] == param_8) {
      (**(code **)(*param_6 + 0x78))(param_6,param_7,0);
      iVar2 = (**(code **)(*param_6 + 0x50))(param_6,param_1[7],param_8 & 0xffffffff);
      if ((int)param_8 <= iVar2) {
        uVar4 = (**(code **)(*param_6 + 8))(param_6);
        Scaleform::String::operator=(param_1 + 10,uVar4);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return param_1;
}



// FUNCTION 1433cf150 FUN_1433cf150 body=164 status=ok
// SIG undefined FUN_1433cf150(void)

undefined8 *
FUN_1433cf150(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,void *param_6,size_t param_7)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = param_5;
  *param_1 = &PTR_FUN_145b062a0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 6) = param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1432c5250(param_1 + 10);
  FUN_143333590(param_1 + 7,param_7);
  _guard_xfg_dispatch_icall_nop((void *)param_1[7],param_6,param_7);
  return param_1;
}



// FUNCTION 1433cf200 FUN_1433cf200 body=137 status=ok
// SIG undefined FUN_1433cf200(void)

undefined8 FUN_1433cf200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x10);
    }
    if (plVar2 == param_2) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar3 = (**(code **)(*param_2 + 0x10))
                    (param_2,*(undefined4 *)(param_1 + 0x28),1,param_1 + 0x2c,
                     *(undefined4 *)(param_1 + 0x34),param_1,0);
  FStringTable::SetOwnerAsset(param_1,uVar3);
  return uVar3;
}



// FUNCTION 1433cf290 FUN_1433cf290 body=200 status=ok
// SIG undefined FUN_1433cf290(void)

longlong *
FUN_1433cf290(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
             longlong param_5,byte param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2), cVar1 != '\0')) {
    if ((param_3 == 0) || (param_4 < param_6)) {
      uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
      iVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_5,(uint)param_6);
      (**(code **)(*param_2 + 0x78))(param_2,uVar3,0);
      if ((int)(uint)param_6 <= iVar2) {
        *param_1 = param_5;
      }
    }
    else {
      *param_1 = param_3;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1433cf360 FUN_1433cf360 body=225 status=ok
// SIG undefined FUN_1433cf360(void)

int * FUN_1433cf360(int *param_1,int param_2,int param_3,int param_4,longlong param_5,
                   ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  iVar1 = param_2;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = iVar1;
  iVar1 = FUN_1432c86e0(param_2,0);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ulonglong *)(param_1 + 8) = (ulonglong)((uint)(iVar1 * param_3) >> 3);
  if (*param_1 != param_1[1]) {
    iVar1 = FUN_1432c86e0(param_1[1],0);
    *(ulonglong *)(param_1 + 10) = (ulonglong)((uint)(iVar1 * param_3) >> 3);
    lVar2 = FUN_1432fa1f0(param_1[1],*param_1);
    *(longlong *)(param_1 + 0xc) = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
  }
  uVar4 = *(longlong *)(param_1 + 8) + 0x10U & 0xfffffffffffffff0;
  uVar3 = *(longlong *)(param_1 + 10) + uVar4;
  if (param_6 < uVar3) {
    param_5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar3,0);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(longlong *)(param_1 + 4) = param_5;
  if (*(longlong *)(param_1 + 0xc) != 0) {
    *(ulonglong *)(param_1 + 6) = param_5 + uVar4;
  }
  return param_1;
}



// FUNCTION 1433cf450 ~ImageScanlineBufferImpl body=28 status=ok
// SIG undefined ~ImageScanlineBufferImpl(void)

void Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001433cf467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 1433cf480 FUN_1433cf480 body=94 status=ok
// SIG undefined FUN_1433cf480(void)

void FUN_1433cf480(longlong param_1,undefined8 param_2,undefined8 param_3,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x18),uVar1,uVar2,param_3,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    param_3 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001433cf4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,uVar1,uVar2,param_3);
  return;
}



// FUNCTION 1433cf4e0 FUN_1433cf4e0 body=116 status=ok
// SIG undefined FUN_1433cf4e0(void)

RefCountImplCore * FUN_1433cf4e0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06230;
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1433cf560 FUN_1433cf560 body=70 status=ok
// SIG undefined FUN_1433cf560(void)

longlong FUN_1433cf560(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x48))(DAT_146b62f28,0x100,0x20);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xa8),0,200);
  return param_1;
}



// FUNCTION 1433cf5b0 ~JpegErrorHandler body=21 status=ok
// SIG undefined ~JpegErrorHandler(void)

void Scaleform::Render::JPEG::JpegErrorHandler::~JpegErrorHandler(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433cf5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x170));
  return;
}



// FUNCTION 1433cf5d0 FUN_1433cf5d0 body=60 status=ok
// SIG undefined FUN_1433cf5d0(void)

void FUN_1433cf5d0(longlong *param_1)

{
  longlong lVar1;
  char local_d8 [208];
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x18))(param_1,local_d8);
  strcpy_s((char *)(lVar1 + 0xa8),200,local_d8);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(*(_JBTYPE **)(lVar1 + 0x170),1);
}



// FUNCTION 1433cf620 SetupJpegErr body=30 status=ok
// SIG undefined SetupJpegErr(void)

void Scaleform::Render::JPEG::SetupJpegErr(undefined8 *param_1)

{
  FUN_143660ce0();
  *param_1 = FUN_1433cf5d0;
  return;
}



// FUNCTION 1433cf640 FUN_1433cf640 body=569 status=ok
// SIG undefined FUN_1433cf640(void)

undefined8 * FUN_1433cf640(undefined8 *param_1,longlong param_2,Matrix2x4<float> *param_3)

{
  Matrix2x4<float> *pMVar1;
  Matrix2x4<float> *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this = (Matrix2x4<float> *)(param_1 + 0x10);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06370;
  param_1[2] = 0;
  pMVar1 = (Matrix2x4<float> *)(param_1 + 4);
  param_1[3] = 0;
  puVar5 = param_1 + 0x14;
  *(undefined8 *)pMVar1 = 0x3f800000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  lVar6 = 9;
  *(undefined8 *)this = 0x3f800000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  do {
    *puVar5 = 0x3f800000;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    puVar5 = puVar5 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)pMVar1 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_48,pMVar1);
  *(undefined8 *)this = local_48;
  param_1[0x11] = uStack_40;
  param_1[0x12] = local_38;
  param_1[0x13] = uStack_30;
  local_28 = 0x3f800000;
  uStack_20 = 0;
  local_18 = 0x3f80000000000000;
  uStack_10 = 0;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_28,(Matrix2x4<float> *)(param_1 + 8));
  Scaleform::Render::Matrix2x4<float>::Append(this,(Matrix2x4<float> *)&local_28);
  Scaleform::Render::Matrix2x4<float>::Append(this,param_3);
  FUN_1433d01c0(param_1);
  return param_1;
}



// FUNCTION 1433cf880 FUN_1433cf880 body=549 status=ok
// SIG undefined FUN_1433cf880(void)

undefined8 *
FUN_1433cf880(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  Matrix2x4<float> *pMVar1;
  Matrix2x4<float> *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this = (Matrix2x4<float> *)(param_1 + 0x10);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  pMVar1 = (Matrix2x4<float> *)(param_1 + 4);
  *param_1 = &PTR_FUN_145b06370;
  puVar5 = param_1 + 0x14;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)pMVar1 = 0x3f800000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  lVar6 = 9;
  *(undefined8 *)this = 0x3f800000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  do {
    *puVar5 = 0x3f800000;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    puVar5 = puVar5 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = *param_2;
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)pMVar1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 5) = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_3[3];
  *(undefined4 *)(param_1 + 6) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x34) = param_3[5];
  *(undefined4 *)(param_1 + 7) = param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3[7];
  *(undefined4 *)(param_1 + 8) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4[1];
  *(undefined4 *)(param_1 + 9) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4[3];
  *(undefined4 *)(param_1 + 10) = param_4[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4[5];
  *(undefined4 *)(param_1 + 0xb) = param_4[6];
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_4[7];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  uVar4 = *param_5;
  *(undefined4 *)((longlong)param_1 + 100) = param_5[1];
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  local_48 = 0x3f800000;
  uStack_40 = 0;
  local_38 = 0x3f80000000000000;
  uStack_30 = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_48,pMVar1);
  *(undefined8 *)this = local_48;
  param_1[0x11] = uStack_40;
  param_1[0x12] = local_38;
  param_1[0x13] = uStack_30;
  local_28 = 0x3f800000;
  uStack_20 = 0;
  local_18 = 0x3f80000000000000;
  uStack_10 = 0;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_28,(Matrix2x4<float> *)(param_1 + 8));
  Scaleform::Render::Matrix2x4<float>::Append(this,(Matrix2x4<float> *)&local_28);
  FUN_1433d01c0(param_1);
  return param_1;
}



// FUNCTION 1433cfab0 FUN_1433cfab0 body=304 status=ok
// SIG undefined FUN_1433cfab0(void)

ulonglong FUN_1433cfab0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar7 = *param_3;
  *param_2 = fVar7 * *(float *)(param_1 + 0x44) + fVar1 * *(float *)(param_1 + 0x40) +
             *(float *)(param_1 + 0x4c);
  fVar7 = fVar7 * *(float *)(param_1 + 0x54) + fVar1 * *(float *)(param_1 + 0x50) +
          *(float *)(param_1 + 0x5c);
  *param_3 = fVar7;
  fVar1 = *param_2;
  uVar2 = 0;
  if (*(float *)(param_1 + 0x7c) <= fVar7 && fVar7 != *(float *)(param_1 + 0x7c)) {
    uVar2 = 2;
  }
  uVar3 = 0;
  if (fVar7 < *(float *)(param_1 + 0x74)) {
    uVar3 = 8;
  }
  uVar4 = 0;
  if (fVar1 < *(float *)(param_1 + 0x70)) {
    uVar4 = 4;
  }
  uVar6 = (ulonglong)
          (uVar2 | uVar3 |
           (uint)(*(float *)(param_1 + 0x78) <= fVar1 && fVar1 != *(float *)(param_1 + 0x78)) |
          uVar4);
  pfVar5 = (float *)(((ulonglong)(byte)(&DAT_145b06378)[uVar6] + 5) * 0x20 + param_1);
  *param_2 = fVar7 * pfVar5[1] + fVar1 * *pfVar5 + pfVar5[3];
  fVar7 = fVar7 * pfVar5[5] + fVar1 * pfVar5[4] + pfVar5[7];
  *param_3 = fVar7;
  fVar1 = *param_2;
  *param_2 = fVar7 * *(float *)(param_1 + 0x84) + fVar1 * *(float *)(param_1 + 0x80) +
             *(float *)(param_1 + 0x8c);
  *param_3 = fVar7 * *(float *)(param_1 + 0x94) + fVar1 * *(float *)(param_1 + 0x90) +
             *(float *)(param_1 + 0x9c);
  return uVar6;
}



// FUNCTION 1433cfbf0 FUN_1433cfbf0 body=753 status=ok
// SIG undefined FUN_1433cfbf0(void)

float FUN_1433cfbf0(longlong param_1)

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
  
  fVar2 = *(float *)(param_1 + 0xa4) * 0.70710677 + *(float *)(param_1 + 0xa0) * 0.70710677;
  fVar1 = *(float *)(param_1 + 0xb4) * 0.70710677 + *(float *)(param_1 + 0xb0) * 0.70710677;
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 + fVar2 * fVar2);
  fVar3 = *(float *)(param_1 + 0xc4) * 0.70710677 + *(float *)(param_1 + 0xc0) * 0.70710677;
  fVar2 = *(float *)(param_1 + 0xd4) * 0.70710677 + *(float *)(param_1 + 0xd0) * 0.70710677;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar2 * fVar2 + fVar3 * fVar3);
  fVar4 = *(float *)(param_1 + 0xe4) * 0.70710677 + *(float *)(param_1 + 0xe0) * 0.70710677;
  fVar3 = *(float *)(param_1 + 0xf4) * 0.70710677 + *(float *)(param_1 + 0xf0) * 0.70710677;
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3 * fVar3 + fVar4 * fVar4);
  fVar5 = *(float *)(param_1 + 0x104) * 0.70710677 + *(float *)(param_1 + 0x100) * 0.70710677;
  fVar4 = *(float *)(param_1 + 0x114) * 0.70710677 + *(float *)(param_1 + 0x110) * 0.70710677;
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4 * fVar4 + fVar5 * fVar5);
  fVar6 = *(float *)(param_1 + 0x124) * 0.70710677 + *(float *)(param_1 + 0x120) * 0.70710677;
  fVar5 = *(float *)(param_1 + 0x134) * 0.70710677 + *(float *)(param_1 + 0x130) * 0.70710677;
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar6 * fVar6);
  fVar7 = *(float *)(param_1 + 0x144) * 0.70710677 + *(float *)(param_1 + 0x140) * 0.70710677;
  fVar6 = *(float *)(param_1 + 0x154) * 0.70710677 + *(float *)(param_1 + 0x150) * 0.70710677;
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * fVar6 + fVar7 * fVar7);
  fVar8 = *(float *)(param_1 + 0x164) * 0.70710677 + *(float *)(param_1 + 0x160) * 0.70710677;
  fVar7 = *(float *)(param_1 + 0x174) * 0.70710677 + *(float *)(param_1 + 0x170) * 0.70710677;
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar7 * fVar7 + fVar8 * fVar8);
  fVar9 = *(float *)(param_1 + 0x184) * 0.70710677 + *(float *)(param_1 + 0x180) * 0.70710677;
  fVar8 = *(float *)(param_1 + 0x194) * 0.70710677 + *(float *)(param_1 + 400) * 0.70710677;
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * fVar8 + fVar9 * fVar9);
  fVar10 = *(float *)(param_1 + 0x1a4) * 0.70710677 + *(float *)(param_1 + 0x1a0) * 0.70710677;
  fVar9 = *(float *)(param_1 + 0x1b4) * 0.70710677 + *(float *)(param_1 + 0x1b0) * 0.70710677;
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9 * fVar9 + fVar10 * fVar10);
  return (fVar1 + 0.0 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7 + fVar8 + fVar9) / 9.0;
}



// FUNCTION 1433cfef0 FUN_1433cfef0 body=153 status=ok
// SIG undefined FUN_1433cfef0(void)

float FUN_1433cfef0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _guard_xfg_dispatch_icall_nop
                    (*(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
                     *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb0));
  fVar2 = _guard_xfg_dispatch_icall_nop
                    (*(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xd0) +
                     *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0xc0));
  fVar3 = _guard_xfg_dispatch_icall_nop
                    (*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xf0) +
                     *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0));
  return (fVar1 + 0.0 + fVar2 + fVar3) / 3.0;
}



// FUNCTION 1433cff90 FUN_1433cff90 body=99 status=ok
// SIG undefined FUN_1433cff90(void)

float FUN_1433cff90(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_1 + 0xa4);
  fVar4 = 0.0;
  lVar2 = 3;
  do {
    fVar3 = _guard_xfg_dispatch_icall_nop(pfVar1[4] * pfVar1[4] + *pfVar1 * *pfVar1);
    pfVar1 = pfVar1 + 0x18;
    fVar4 = fVar4 + fVar3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return fVar4 / 3.0;
}



// FUNCTION 1433d0060 FUN_1433d0060 body=334 status=ok
// SIG undefined FUN_1433d0060(void)

float * FUN_1433d0060(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68 [20];
  
  local_74 = param_3[1];
  local_res10[0] = *param_3;
  local_res18[0] = param_3[2];
  local_6c = param_3[3];
  local_res20[0] = local_res18[0];
  local_78 = local_res10[0];
  local_70 = local_74;
  local_68[0] = local_6c;
  FUN_1433cfab0(local_res18[0],local_res10,&local_70);
  FUN_1433cfab0(param_1,local_res18,&local_74);
  FUN_1433cfab0(param_1,local_res20,&local_6c);
  FUN_1433cfab0(param_1,&local_78,local_68);
  fVar1 = local_res18[0];
  if (local_res10[0] <= local_res18[0]) {
    fVar1 = local_res10[0];
  }
  if (local_res18[0] <= local_res10[0]) {
    local_res18[0] = local_res10[0];
  }
  fVar3 = local_74;
  if (local_74 <= local_70) {
    fVar3 = local_70;
  }
  fVar2 = local_res20[0];
  if (fVar1 <= local_res20[0]) {
    fVar2 = fVar1;
  }
  if (local_70 <= local_74) {
    local_74 = local_70;
  }
  if (local_res20[0] <= local_res18[0]) {
    local_res20[0] = local_res18[0];
  }
  fVar1 = local_78;
  if (fVar2 <= local_78) {
    fVar1 = fVar2;
  }
  fVar2 = local_6c;
  if (local_6c <= fVar3) {
    fVar2 = fVar3;
  }
  if (local_74 <= local_6c) {
    local_6c = local_74;
  }
  if (local_78 <= local_res20[0]) {
    local_78 = local_res20[0];
  }
  *param_2 = fVar1;
  fVar1 = local_68[0];
  if (local_68[0] <= fVar2) {
    fVar1 = fVar2;
  }
  if (local_6c <= local_68[0]) {
    local_68[0] = local_6c;
  }
  param_2[2] = local_78;
  param_2[3] = fVar1;
  param_2[1] = local_68[0];
  return param_2;
}



// FUNCTION 1433d01c0 FUN_1433d01c0 body=2636 status=ok
// SIG undefined FUN_1433d01c0(void)

void FUN_1433d01c0(longlong param_1)

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
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
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
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 100);
  fVar6 = *(float *)(param_1 + 0x68);
  fVar8 = *(float *)(param_1 + 0x6c);
  fVar10 = *(float *)(param_1 + 0x60);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x10);
  if (fVar4 <= fVar10) {
    fVar10 = fVar4 - 0.9;
  }
  if (fVar3 <= fVar5) {
    fVar5 = fVar3 - 0.9;
  }
  if (fVar6 <= fVar1) {
    fVar6 = fVar4 + 0.9;
  }
  if (fVar8 <= fVar2) {
    fVar8 = fVar3 + 0.9;
  }
  local_108 = fVar5 * *(float *)(param_1 + 0x24) + fVar10 * *(float *)(param_1 + 0x20) +
              *(float *)(param_1 + 0x2c);
  local_120 = fVar5 * *(float *)(param_1 + 0x34) + fVar10 * *(float *)(param_1 + 0x30) +
              *(float *)(param_1 + 0x3c);
  fVar15 = fVar5 * *(float *)(param_1 + 0x24) + fVar6 * *(float *)(param_1 + 0x20) +
           *(float *)(param_1 + 0x2c);
  fVar13 = fVar6 * *(float *)(param_1 + 0x30) + fVar5 * *(float *)(param_1 + 0x34) +
           *(float *)(param_1 + 0x3c);
  fVar14 = fVar8 * *(float *)(param_1 + 0x24) + fVar6 * *(float *)(param_1 + 0x20) +
           *(float *)(param_1 + 0x2c);
  fVar17 = fVar8 * *(float *)(param_1 + 0x34) + fVar6 * *(float *)(param_1 + 0x30) +
           *(float *)(param_1 + 0x3c);
  local_fc = fVar8 * *(float *)(param_1 + 0x24) + fVar10 * *(float *)(param_1 + 0x20) +
             *(float *)(param_1 + 0x2c);
  local_11c = fVar8 * *(float *)(param_1 + 0x34) + fVar10 * *(float *)(param_1 + 0x30) +
              *(float *)(param_1 + 0x3c);
  local_128 = fVar15 - local_108;
  local_124 = fVar13 - local_120;
  local_118 = fVar10;
  local_104 = fVar5;
  local_100 = fVar6;
  local_f8 = fVar14;
  local_f4 = fVar17;
  local_e8 = fVar13;
  local_e4 = fVar8;
  local_dc = fVar15;
  local_10c = _guard_xfg_dispatch_icall_nop(local_124 * local_124 + local_128 * local_128);
  local_ec = fVar17 - fVar13;
  local_f0 = fVar14 - fVar15;
  fVar14 = _guard_xfg_dispatch_icall_nop(local_ec * local_ec + local_f0 * local_f0);
  if (local_10c == 0.0) {
    local_10c = 0.001;
  }
  if (fVar14 == 0.0) {
    fVar14 = 0.001;
  }
  local_c4 = (fVar6 - fVar1) / local_10c;
  local_10c = (fVar4 - fVar10) / local_10c;
  fVar5 = (fVar3 - fVar5) / fVar14;
  fVar14 = (fVar8 - fVar2) / fVar14;
  if (1.0 < local_c4 + local_10c) {
    fVar6 = local_c4 + local_10c + 0.05;
    local_10c = local_10c / fVar6;
    local_c4 = local_c4 / fVar6;
  }
  if (1.0 < fVar14 + fVar5) {
    fVar6 = fVar14 + fVar5 + 0.05;
    fVar5 = fVar5 / fVar6;
    fVar14 = fVar14 / fVar6;
  }
  fVar10 = local_128 * local_10c + local_108;
  fVar8 = local_124 * local_10c + local_120;
  local_e0 = fVar15 - local_128 * local_c4;
  fVar13 = fVar13 - local_124 * local_c4;
  local_d0 = local_ec * fVar14;
  local_ec = local_ec * fVar5 + local_e8;
  local_d0 = local_f4 - local_d0;
  local_d4 = local_f0 * fVar14;
  local_f0 = local_f0 * fVar5 + fVar15;
  local_d4 = local_f8 - local_d4;
  fVar9 = (local_fc - local_108) * fVar5 + local_108;
  local_cc = local_fc - (local_fc - local_108) * fVar14;
  local_148 = local_128 * local_10c + fVar9;
  fVar11 = local_f0 - local_128 * local_c4;
  fVar17 = (local_11c - local_120) * fVar5 + local_120;
  local_c8 = local_11c - (local_11c - local_120) * fVar14;
  fVar7 = local_ec - local_124 * local_c4;
  local_144 = local_124 * local_10c + fVar17;
  local_128 = (local_f8 - local_fc) * local_c4;
  local_124 = local_d4 - local_128;
  local_c4 = (local_f4 - local_11c) * local_c4;
  local_114 = local_d0 - local_c4;
  local_110 = (local_f8 - local_fc) * local_10c;
  fVar18 = (local_f4 - local_11c) * local_10c;
  fVar16 = local_110 + local_cc;
  local_158 = local_108;
  local_154 = local_120;
  fVar12 = fVar18 + local_c8;
  local_140 = local_118;
  local_13c = local_104;
  local_134 = local_104;
  local_150 = fVar10;
  local_14c = fVar8;
  local_138 = fVar4;
  local_130 = fVar4;
  local_12c = fVar3;
  local_10c = local_148;
  local_d8 = local_144;
  FUN_143326520(param_1 + 0xa0,&local_140,&local_158);
  fVar6 = local_e0;
  fVar5 = local_104;
  local_150 = local_e0;
  local_13c = local_104;
  local_134 = local_104;
  local_158 = fVar10;
  local_154 = fVar8;
  local_14c = fVar13;
  local_148 = fVar11;
  local_144 = fVar7;
  local_140 = fVar4;
  local_138 = fVar1;
  local_130 = fVar1;
  local_12c = fVar3;
  FUN_143326520(param_1 + 0xc0,&local_140,&local_158);
  fVar15 = local_ec;
  fVar14 = local_f0;
  fVar10 = local_100;
  local_150 = local_dc;
  local_14c = local_e8;
  local_13c = fVar5;
  local_134 = fVar5;
  local_138 = local_100;
  local_158 = fVar6;
  local_148 = local_f0;
  local_144 = local_ec;
  local_130 = local_100;
  local_154 = fVar13;
  local_140 = fVar1;
  local_12c = fVar3;
  FUN_143326520(param_1 + 0xe0,&local_140,&local_158);
  fVar13 = local_d8;
  fVar8 = local_10c;
  local_150 = local_10c;
  local_14c = local_d8;
  local_140 = local_118;
  local_158 = fVar9;
  local_154 = fVar17;
  local_148 = fVar16;
  local_144 = fVar12;
  local_13c = fVar3;
  local_138 = fVar4;
  local_134 = fVar3;
  local_130 = fVar4;
  local_12c = fVar2;
  FUN_143326520(param_1 + 0x100,&local_140,&local_158);
  fVar6 = local_114;
  fVar5 = local_124;
  local_158 = fVar8;
  local_154 = fVar13;
  local_148 = local_124;
  local_144 = local_114;
  local_150 = fVar11;
  local_14c = fVar7;
  local_140 = fVar4;
  local_13c = fVar3;
  local_138 = fVar1;
  local_134 = fVar3;
  local_130 = fVar1;
  local_12c = fVar2;
  FUN_143326520(param_1 + 0x120,&local_140,&local_158);
  fVar9 = local_d0;
  fVar17 = local_d4;
  local_150 = fVar14;
  local_14c = fVar15;
  local_148 = local_d4;
  local_144 = local_d0;
  local_138 = fVar10;
  local_130 = fVar10;
  local_158 = fVar11;
  local_154 = fVar7;
  local_140 = fVar1;
  local_13c = fVar3;
  local_134 = fVar3;
  local_12c = fVar2;
  FUN_143326520(param_1 + 0x140,&local_140,&local_158);
  fVar13 = local_e4;
  local_144 = fVar18 + local_11c;
  local_158 = local_cc;
  local_154 = local_c8;
  local_148 = local_110 + local_fc;
  local_140 = local_118;
  local_12c = local_e4;
  local_150 = fVar16;
  local_14c = fVar12;
  local_13c = fVar2;
  local_138 = fVar4;
  local_134 = fVar2;
  local_130 = fVar4;
  FUN_143326520(param_1 + 0x160,&local_140,&local_158);
  fVar14 = local_f4;
  fVar8 = local_f8;
  local_144 = local_f4 - local_c4;
  local_150 = fVar5;
  local_148 = local_f8 - local_128;
  local_14c = fVar6;
  local_12c = fVar13;
  local_158 = fVar16;
  local_154 = fVar12;
  local_140 = fVar4;
  local_13c = fVar2;
  local_138 = fVar1;
  local_134 = fVar2;
  local_130 = fVar1;
  FUN_143326520(param_1 + 0x180,&local_140,&local_158);
  local_154 = fVar6;
  local_14c = fVar9;
  local_158 = fVar5;
  local_150 = fVar17;
  local_148 = fVar8;
  local_144 = fVar14;
  local_138 = fVar10;
  local_130 = fVar10;
  local_12c = fVar13;
  local_140 = fVar1;
  local_13c = fVar2;
  local_134 = fVar2;
  FUN_143326520(param_1 + 0x1a0,&local_140,&local_158);
  *(float *)(param_1 + 0x70) = fVar4;
  *(float *)(param_1 + 0x74) = fVar3;
  *(float *)(param_1 + 0x78) = fVar1;
  *(float *)(param_1 + 0x7c) = fVar2;
  return;
}



// FUNCTION 1433d0c20 FUN_1433d0c20 body=7321 status=ok
// SIG undefined FUN_1433d0c20(void)

longlong FUN_1433d0c20(longlong param_1,undefined8 param_2,longlong param_3,float *param_4,
                      undefined8 *param_5,float *param_6)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
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
  undefined8 in_stack_fffffffffffffa90;
  undefined8 uVar35;
  undefined4 uVar36;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  float local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  undefined4 local_47c;
  float local_478;
  float local_474;
  float local_470;
  undefined4 local_46c;
  float local_468 [8];
  undefined8 local_448;
  ulonglong local_440;
  undefined8 local_438;
  undefined1 local_430 [864];
  undefined1 *local_d0;
  
  uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffa90 >> 0x20);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = param_2;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0x48;
  *(longlong *)(param_1 + 0x230) = param_1 + 0x1a0;
  fVar9 = param_4[1];
  fVar12 = *param_4;
  fVar11 = param_4[2];
  fVar13 = param_4[3];
  local_4a8 = fVar9 * *(float *)(param_3 + 0x44) + fVar12 * *(float *)(param_3 + 0x40) +
              *(float *)(param_3 + 0x4c);
  local_4a4 = fVar12 * *(float *)(param_3 + 0x50) + fVar9 * *(float *)(param_3 + 0x54) +
              *(float *)(param_3 + 0x5c);
  fVar17 = fVar9 * *(float *)(param_3 + 0x44) + fVar11 * *(float *)(param_3 + 0x40) +
           *(float *)(param_3 + 0x4c);
  fVar9 = fVar11 * *(float *)(param_3 + 0x50) + fVar9 * *(float *)(param_3 + 0x54) +
          *(float *)(param_3 + 0x5c);
  fVar10 = fVar13 * *(float *)(param_3 + 0x44) + fVar11 * *(float *)(param_3 + 0x40) +
           *(float *)(param_3 + 0x4c);
  fVar20 = fVar11 * *(float *)(param_3 + 0x50) + fVar13 * *(float *)(param_3 + 0x54) +
           *(float *)(param_3 + 0x5c);
  fVar11 = fVar13 * *(float *)(param_3 + 0x44) + fVar12 * *(float *)(param_3 + 0x40) +
           *(float *)(param_3 + 0x4c);
  local_4d0 = fVar13 * *(float *)(param_3 + 0x54) + fVar12 * *(float *)(param_3 + 0x50) +
              *(float *)(param_3 + 0x5c);
  local_508 = *param_5;
  uStack_500 = param_5[1];
  local_468[0] = 1.0;
  local_468[1] = 0.0;
  local_468[2] = 0.0;
  local_4f8 = param_5[2];
  uStack_4f0 = param_5[3];
  local_468[4] = 0.0;
  local_468[5] = 1.0;
  local_468[6] = 0.0;
  local_480 = param_6[2];
  local_488 = *param_6;
  local_484 = param_6[1];
  local_478 = param_6[4];
  local_474 = param_6[5];
  local_470 = param_6[6];
  if (-1e-05 < local_488) {
    if (1e-05 <= local_488) {
      local_488 = 1.0;
    }
  }
  else {
    local_488 = -1.0;
  }
  if (-1e-05 < local_474) {
    if (1e-05 <= local_474) {
      local_474 = 1.0;
    }
  }
  else {
    local_474 = -1.0;
  }
  if (-1e-05 < local_484) {
    if (1e-05 <= local_484) {
      local_484 = 1.0;
    }
  }
  else {
    local_484 = -1.0;
  }
  if (-1e-05 < local_478) {
    if (1e-05 <= local_478) {
      local_478 = 1.0;
    }
  }
  else {
    local_478 = -1.0;
  }
  local_47c = 0;
  local_46c = 0;
  local_468[3] = -0.5;
  local_468[7] = -0.5;
  local_4a0 = fVar17;
  local_49c = fVar9;
  local_498 = fVar10;
  local_494 = fVar20;
  local_490 = fVar11;
  local_48c = local_4d0;
  Scaleform::Render::Matrix2x4<float>::Append
            ((Matrix2x4<float> *)local_468,(Matrix2x4<float> *)&local_488);
  fVar12 = local_508._4_4_ * local_468[4];
  local_468[3] = local_468[3] + 0.5;
  local_4d8 = 0x3f800000;
  local_4d4 = 0x3f800000;
  local_468[7] = local_468[7] + 0.5;
  fVar13 = local_4f8._4_4_ * local_468[4];
  fVar24 = local_508._4_4_ * local_468[7];
  local_508._4_4_ = local_508._4_4_ * local_468[5] + (float)local_508 * local_468[1];
  fVar27 = local_4f8._4_4_ * local_468[7];
  local_4f8._4_4_ = local_4f8._4_4_ * local_468[5] + (float)local_4f8 * local_468[1];
  uStack_500._4_4_ =
       (float)((ulonglong)uStack_500 >> 0x20) + fVar24 + (float)local_508 * local_468[3];
  local_4b8 = 0;
  uStack_4b4 = 0x3f800000;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_500._0_4_ = 0;
  uStack_4f0._4_4_ =
       (float)((ulonglong)uStack_4f0 >> 0x20) + fVar27 + (float)local_4f8 * local_468[3];
  uStack_4f0._0_4_ = 0;
  local_4c8 = 0x3f800000;
  uStack_4c0 = 0;
  local_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e0 = 0x3f800000;
  uStack_4dc = 0;
  local_4f8._0_4_ = fVar13 + (float)local_4f8 * local_468[0];
  local_508._0_4_ = fVar12 + (float)local_508 * local_468[0];
  FUN_143326520(&local_4c8,&local_4a8,&local_4e8);
  Scaleform::Render::Matrix2x4<float>::Append
            ((Matrix2x4<float> *)&local_4c8,(Matrix2x4<float> *)&local_508);
  fVar12 = *(float *)(param_3 + 0x70);
  fVar13 = *(float *)(param_3 + 0x7c);
  fVar24 = *(float *)(param_3 + 0x74);
  fVar27 = *(float *)(param_3 + 0x78);
  local_440 = 0;
  local_438 = 0x48;
  local_d0 = local_430;
  uStack_4e0 = 0;
  fVar30 = local_4f8._4_4_ + (float)local_4f8 + uStack_4f0._4_4_;
  fVar31 = local_508._4_4_ + (float)local_508 + uStack_500._4_4_;
  fVar28 = (float)local_4f8 + local_4f8._4_4_ * 0.0 + uStack_4f0._4_4_;
  fVar33 = (float)local_4f8 * 0.0 + local_4f8._4_4_ + uStack_4f0._4_4_;
  fVar34 = (float)local_508 * 0.0 + local_508._4_4_ + uStack_500._4_4_;
  fVar25 = (float)local_4f8 * 0.0 + local_4f8._4_4_ * 0.0 + uStack_4f0._4_4_;
  fVar29 = (float)local_508 + local_508._4_4_ * 0.0 + uStack_500._4_4_;
  fVar26 = (float)local_508 * 0.0 + local_508._4_4_ * 0.0 + uStack_500._4_4_;
  local_4e8 = (((uint)(local_4a4 < fVar24) * 2 | (uint)(local_4a8 < fVar12)) * 2 |
              (uint)(fVar13 < local_4a4)) * 2 | (uint)(fVar27 < local_4a8);
  uStack_4e4 = *(undefined4 *)(param_1 + 0x180);
  local_448 = param_2;
  FUN_1433d3910(&local_448,&local_4e8);
  pfVar1 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  *pfVar1 = local_4a8;
  pfVar1[1] = local_4a4;
  pfVar1[2] = fVar26;
  pfVar1[3] = fVar25;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  uStack_4e4 = *(undefined4 *)(param_1 + 0x180);
  uStack_4e0 = 0;
  local_4e8 = (((uint)(fVar9 < fVar24) * 2 | (uint)(fVar17 < fVar12)) * 2 | (uint)(fVar13 < fVar9))
              * 2 | (uint)(fVar27 < fVar17);
  FUN_1433d3910(&local_448,&local_4e8);
  pfVar1 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  uStack_4e0 = 0;
  *pfVar1 = fVar17;
  pfVar1[2] = fVar29;
  pfVar1[3] = fVar28;
  pfVar1[1] = fVar9;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  uStack_4e4 = *(undefined4 *)(param_1 + 0x180);
  local_4e8 = (((uint)(fVar20 < fVar24) * 2 | (uint)(fVar10 < fVar12)) * 2 | (uint)(fVar13 < fVar20)
              ) * 2 | (uint)(fVar27 < fVar10);
  FUN_1433d3910(&local_448,&local_4e8);
  fVar25 = local_4d0;
  pfVar1 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  pfVar1[1] = fVar20;
  pfVar1[3] = fVar30;
  *pfVar1 = fVar10;
  pfVar1[2] = fVar31;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  uStack_4e4 = *(undefined4 *)(param_1 + 0x180);
  uStack_4e0 = 0;
  local_4e8 = (((uint)(local_4d0 < fVar24) * 2 | (uint)(fVar11 < fVar12)) * 2 |
              (uint)(fVar13 < local_4d0)) * 2 | (uint)(fVar27 < fVar11);
  FUN_1433d3910(&local_448,&local_4e8);
  fVar28 = local_4a4;
  fVar26 = local_4a8;
  fVar31 = fVar24 - fVar24;
  fVar32 = fVar27 - fVar12;
  pfVar1 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  pfVar1[1] = fVar25;
  fVar25 = fVar17 - local_4a8;
  *pfVar1 = fVar11;
  fVar29 = fVar9 - local_4a4;
  pfVar1[2] = fVar34;
  fVar34 = (fVar27 - fVar12) * 0.5;
  fVar22 = (fVar13 - fVar24) * 0.5;
  fVar30 = fVar31 * fVar25 - fVar32 * fVar29;
  pfVar1[3] = fVar33;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((local_4a4 - fVar24) * fVar32 - (local_4a8 - fVar12) * fVar31) / fVar30,
      -1e-05 <= fVar30)) && (fVar30 <= 1.00001)) {
    fVar33 = fVar30 * fVar29 + local_4a4;
    fVar30 = fVar30 * fVar25 + local_4a8;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar33 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar33 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar33,uVar35,
                  (((uint)(fVar33 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar33 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar33 = fVar13 - fVar24;
  fVar23 = fVar27 - fVar27;
  fVar30 = fVar33 * fVar25 - fVar23 * fVar29;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar28 - fVar24) * fVar23 - (fVar26 - fVar27) * fVar33) / fVar30, -1e-05 <= fVar30
      )) && (fVar30 <= 1.00001)) {
    fVar18 = fVar30 * fVar25 + fVar26;
    fVar14 = fVar30 * fVar29 + fVar28;
    fVar30 = fVar18 - fVar34;
    fVar18 = fVar18 + fVar34;
    uVar2 = (uint)(fVar14 < fVar24) * 2;
    uVar6 = ((fVar30 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar14)) * 2 | (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,((fVar18 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar14)) * 2 |
                             (uint)(fVar27 < fVar18));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar14,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar18 = fVar13 - fVar13;
  fVar14 = fVar12 - fVar27;
  fVar30 = fVar18 * fVar25 - fVar14 * fVar29;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar28 - fVar13) * fVar14 - (fVar26 - fVar27) * fVar18) / fVar30, -1e-05 <= fVar30
      )) && (fVar30 <= 1.00001)) {
    fVar15 = fVar30 * fVar29 + fVar28;
    fVar30 = fVar30 * fVar25 + fVar26;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar15 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar15 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar15,uVar35,
                  (((uint)(fVar15 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar15 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar15 = fVar24 - fVar13;
  fVar21 = fVar12 - fVar12;
  fVar30 = fVar15 * fVar25 - fVar21 * fVar29;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar28 - fVar13) * fVar21 - (fVar26 - fVar12) * fVar15) / fVar30, -1e-05 <= fVar30
      )) && (fVar30 <= 1.00001)) {
    fVar19 = fVar30 * fVar25 + fVar26;
    fVar29 = fVar30 * fVar29 + fVar28;
    fVar25 = fVar19 - fVar34;
    fVar19 = fVar19 + fVar34;
    uVar2 = (uint)(fVar29 < fVar24) * 2;
    uVar6 = ((fVar25 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar29)) * 2 | (uint)(fVar27 < fVar25);
    uVar35 = CONCAT44(uVar36,((fVar19 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar29)) * 2 |
                             (uint)(fVar27 < fVar19));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar29,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar25 = fVar10 - fVar17;
  fVar29 = fVar20 - fVar9;
  fVar30 = fVar25 * fVar31 - fVar29 * fVar32;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar9 - fVar24) * fVar32 - (fVar17 - fVar12) * fVar31) / fVar30, -1e-05 <= fVar30)
      ) && (fVar30 <= 1.00001)) {
    fVar19 = fVar30 * fVar29 + fVar9;
    fVar30 = fVar30 * fVar25 + fVar17;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar19 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar19 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar19,uVar35,
                  (((uint)(fVar19 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar19 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar30 = fVar25 * fVar33 - fVar29 * fVar23;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar9 - fVar24) * fVar23 - (fVar17 - fVar27) * fVar33) / fVar30, -1e-05 <= fVar30)
      ) && (fVar30 <= 1.00001)) {
    fVar19 = fVar30 * fVar25 + fVar17;
    fVar16 = fVar30 * fVar29 + fVar9;
    fVar30 = fVar19 - fVar34;
    fVar19 = fVar19 + fVar34;
    uVar2 = (uint)(fVar16 < fVar24) * 2;
    uVar6 = ((fVar30 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar16)) * 2 | (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,((fVar19 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar16)) * 2 |
                             (uint)(fVar27 < fVar19));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar16,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar30 = fVar25 * fVar18 - fVar29 * fVar14;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar9 - fVar13) * fVar14 - (fVar17 - fVar27) * fVar18) / fVar30, -1e-05 <= fVar30)
      ) && (fVar30 <= 1.00001)) {
    fVar19 = fVar30 * fVar29 + fVar9;
    fVar30 = fVar30 * fVar25 + fVar17;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar19 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar19 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar19,uVar35,
                  (((uint)(fVar19 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar19 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar30 = fVar25 * fVar15 - fVar29 * fVar21;
  if (((0.001 <= ABS(fVar30)) &&
      (fVar30 = ((fVar9 - fVar13) * fVar21 - (fVar17 - fVar12) * fVar15) / fVar30, -1e-05 <= fVar30)
      ) && (fVar30 <= 1.00001)) {
    fVar17 = fVar30 * fVar25 + fVar17;
    fVar9 = fVar30 * fVar29 + fVar9;
    fVar25 = fVar17 - fVar34;
    fVar17 = fVar17 + fVar34;
    uVar2 = (uint)(fVar9 < fVar24) * 2;
    uVar6 = ((fVar25 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar9)) * 2 | (uint)(fVar27 < fVar25);
    uVar35 = CONCAT44(uVar36,((fVar17 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar9)) * 2 |
                             (uint)(fVar27 < fVar17));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar9,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar9 = local_4d0;
  fVar29 = local_4d0 - fVar20;
  fVar25 = fVar11 - fVar10;
  fVar17 = fVar25 * fVar31 - fVar29 * fVar32;
  if (((0.001 <= ABS(fVar17)) &&
      (fVar17 = ((fVar20 - fVar24) * fVar32 - (fVar10 - fVar12) * fVar31) / fVar17, -1e-05 <= fVar17
      )) && (fVar17 <= 1.00001)) {
    fVar30 = fVar25 * fVar17 + fVar10;
    fVar17 = fVar29 * fVar17 + fVar20;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar17 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar17 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar17,uVar35,
                  (((uint)(fVar17 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar17 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar17 = fVar25 * fVar33 - fVar29 * fVar23;
  if (((0.001 <= ABS(fVar17)) &&
      (fVar17 = ((fVar20 - fVar24) * fVar23 - (fVar10 - fVar27) * fVar33) / fVar17, -1e-05 <= fVar17
      )) && (fVar17 <= 1.00001)) {
    fVar30 = fVar25 * fVar17 + fVar10;
    fVar19 = fVar29 * fVar17 + fVar20;
    fVar17 = fVar30 - fVar34;
    fVar30 = fVar30 + fVar34;
    uVar2 = (uint)(fVar19 < fVar24) * 2;
    uVar6 = ((fVar17 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar19)) * 2 | (uint)(fVar27 < fVar17);
    uVar35 = CONCAT44(uVar36,((fVar30 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar19)) * 2 |
                             (uint)(fVar27 < fVar30));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar19,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar17 = fVar25 * fVar18 - fVar29 * fVar14;
  if (((0.001 <= ABS(fVar17)) &&
      (fVar17 = ((fVar20 - fVar13) * fVar14 - (fVar10 - fVar27) * fVar18) / fVar17, -1e-05 <= fVar17
      )) && (fVar17 <= 1.00001)) {
    fVar30 = fVar25 * fVar17 + fVar10;
    fVar17 = fVar29 * fVar17 + fVar20;
    uVar2 = (uint)(fVar27 < fVar30);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar17 + fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar17 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar30,fVar17,uVar35,
                  (((uint)(fVar17 - fVar22 < fVar24) * 2 | (uint)(fVar30 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar17 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar17 = fVar25 * fVar15 - fVar29 * fVar21;
  if (((0.001 <= ABS(fVar17)) &&
      (fVar17 = ((fVar20 - fVar13) * fVar21 - (fVar10 - fVar12) * fVar15) / fVar17, -1e-05 <= fVar17
      )) && (fVar17 <= 1.00001)) {
    fVar10 = fVar25 * fVar17 + fVar10;
    fVar20 = fVar29 * fVar17 + fVar20;
    uVar2 = (uint)(fVar20 < fVar24) * 2;
    uVar35 = CONCAT44(uVar36,((fVar10 + fVar34 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar20)) * 2
                             | (uint)(fVar27 < fVar10 + fVar34));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar10,fVar20,uVar35,
                  ((fVar10 - fVar34 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar20)) * 2 |
                  (uint)(fVar27 < fVar10 - fVar34));
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar28 = fVar28 - fVar9;
  fVar26 = fVar26 - fVar11;
  fVar10 = fVar26 * fVar31 - fVar28 * fVar32;
  if (((0.001 <= ABS(fVar10)) &&
      (fVar10 = ((fVar9 - fVar24) * fVar32 - (fVar11 - fVar12) * fVar31) / fVar10, -1e-05 <= fVar10)
      ) && (fVar10 <= 1.00001)) {
    fVar17 = fVar26 * fVar10 + fVar11;
    fVar10 = fVar28 * fVar10 + fVar9;
    uVar2 = (uint)(fVar27 < fVar17);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar10 + fVar22 < fVar24) * 2 | (uint)(fVar17 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar10 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar17,fVar10,uVar35,
                  (((uint)(fVar10 - fVar22 < fVar24) * 2 | (uint)(fVar17 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar10 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar10 = fVar26 * fVar33 - fVar28 * fVar23;
  if (((0.001 <= ABS(fVar10)) &&
      (fVar10 = ((fVar9 - fVar24) * fVar23 - (fVar11 - fVar27) * fVar33) / fVar10, -1e-05 <= fVar10)
      ) && (fVar10 <= 1.00001)) {
    fVar17 = fVar26 * fVar10 + fVar11;
    fVar20 = fVar28 * fVar10 + fVar9;
    fVar10 = fVar17 - fVar34;
    fVar17 = fVar17 + fVar34;
    uVar2 = (uint)(fVar20 < fVar24) * 2;
    uVar6 = ((fVar10 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar20)) * 2 | (uint)(fVar27 < fVar10);
    uVar35 = CONCAT44(uVar36,((fVar17 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar20)) * 2 |
                             (uint)(fVar27 < fVar17));
    FUN_1433d29c0(param_1,&local_448,&local_4c8,uVar6,fVar20,uVar35,uVar6);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar10 = fVar26 * fVar18 - fVar28 * fVar14;
  if (((0.001 <= ABS(fVar10)) &&
      (fVar10 = ((fVar9 - fVar13) * fVar14 - (fVar11 - fVar27) * fVar18) / fVar10, -1e-05 <= fVar10)
      ) && (fVar10 <= 1.00001)) {
    fVar17 = fVar26 * fVar10 + fVar11;
    fVar10 = fVar28 * fVar10 + fVar9;
    uVar2 = (uint)(fVar27 < fVar17);
    uVar35 = CONCAT44(uVar36,(((uint)(fVar10 + fVar22 < fVar24) * 2 | (uint)(fVar17 < fVar12)) * 2 |
                             (uint)(fVar13 < fVar10 + fVar22)) * 2 | uVar2);
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar27 < fVar17,fVar10,uVar35,
                  (((uint)(fVar10 - fVar22 < fVar24) * 2 | (uint)(fVar17 < fVar12)) * 2 |
                  (uint)(fVar13 < fVar10 - fVar22)) * 2 | uVar2);
    uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
  }
  fVar10 = fVar26 * fVar15 - fVar28 * fVar21;
  if (((0.001 <= ABS(fVar10)) &&
      (fVar10 = ((fVar9 - fVar13) * fVar21 - (fVar11 - fVar12) * fVar15) / fVar10, -1e-05 <= fVar10)
      ) && (fVar10 <= 1.00001)) {
    fVar11 = fVar26 * fVar10 + fVar11;
    fVar9 = fVar28 * fVar10 + fVar9;
    uVar2 = (uint)(fVar9 < fVar24) * 2;
    FUN_1433d29c0(param_1,&local_448,&local_4c8,fVar11,fVar9,
                  CONCAT44(uVar36,((fVar11 + fVar34 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar9))
                                  * 2 | (uint)(fVar27 < fVar11 + fVar34)),
                  ((fVar11 - fVar34 < fVar12 | uVar2) * 2 | (uint)(fVar13 < fVar9)) * 2 |
                  (uint)(fVar27 < fVar11 - fVar34));
  }
  FUN_1433d2ae0(param_1,&local_448,&local_4a8,fVar12,fVar24,&local_4c8,0,4,0xc,8);
  uVar4 = 1;
  FUN_1433d2ae0(param_1,&local_448,&local_4a8,fVar27,fVar24,&local_4c8,1,0,8,9);
  FUN_1433d2ae0(param_1,&local_448,&local_4a8,fVar27,fVar13,&local_4c8,3,2,0,1);
  FUN_1433d2ae0(param_1,&local_448,&local_4a8,fVar12,fVar13,&local_4c8,2,6,4,0);
  FUN_1433d33f0(&local_448,0,local_440,&LAB_1433d3aa0);
  uVar5 = uVar3;
  puVar7 = local_d0;
  uVar8 = local_440;
  if (1 < local_440) {
    do {
      if (*(int *)(puVar7 + uVar4 * 0xc) != *(int *)(puVar7 + uVar5 * 0xc)) {
        FUN_1433d2e90(param_1,&local_448,uVar5,uVar4);
        uVar5 = uVar4;
        puVar7 = local_d0;
        uVar8 = local_440;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar8);
  }
  FUN_1433d2e90(param_1,&local_448,uVar5,uVar4);
  if (*(int *)(param_1 + 0x180) != 0) {
    do {
      FUN_1433d2d90(param_1,param_3,uVar3 * 0x10 + param_1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x180));
  }
  if (local_d0 != local_430) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return param_1;
}



// FUNCTION 1433d2920 FUN_1433d2920 body=143 status=ok
// SIG undefined FUN_1433d2920(void)

void FUN_1433d2920(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_38 = param_7;
  local_34 = *(undefined4 *)(param_1 + 0x180);
  local_30 = 0;
  FUN_1433d3910(param_2,&local_38);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  return;
}



// FUNCTION 1433d29c0 FUN_1433d29c0 body=268 status=ok
// SIG undefined FUN_1433d29c0(void)

void FUN_1433d29c0(longlong param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
                  undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  fVar1 = *param_3;
  local_64 = *(undefined4 *)(param_1 + 0x180);
  fVar2 = param_3[4];
  local_68 = param_6;
  fVar3 = param_3[1];
  local_60 = 0;
  local_58 = param_7;
  fVar4 = param_3[5];
  local_50 = 0;
  fVar5 = param_3[3];
  fVar6 = param_3[7];
  local_54 = local_64;
  FUN_1433d3910(param_2,&local_68);
  FUN_1433d3910(param_2,&local_58);
  pfVar7 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
  *pfVar7 = param_4;
  pfVar7[1] = param_5;
  pfVar7[2] = param_5 * fVar3 + param_4 * fVar1 + fVar5;
  pfVar7[3] = param_4 * fVar2 + param_5 * fVar4 + fVar6;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  return;
}



// FUNCTION 1433d2ae0 FUN_1433d2ae0 body=679 status=ok
// SIG undefined FUN_1433d2ae0(void)

void FUN_1433d2ae0(longlong param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
                  float *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  fVar7 = param_3[3];
  fVar8 = param_3[2];
  fVar1 = param_3[4];
  fVar2 = *param_3;
  fVar3 = param_3[5];
  fVar4 = param_3[7];
  fVar10 = (fVar7 - param_3[1]) * (param_4 - fVar8) - (fVar8 - fVar2) * (param_5 - fVar7);
  fVar5 = param_3[6];
  fVar9 = (fVar3 - fVar7) * (param_4 - fVar1) - (fVar1 - fVar8) * (param_5 - fVar3);
  fVar8 = (fVar4 - fVar3) * (param_4 - fVar5) - (fVar5 - fVar1) * (param_5 - fVar4);
  fVar7 = (param_3[1] - fVar4) * (param_4 - fVar2) - (fVar2 - fVar5) * (param_5 - param_3[1]);
  if ((((fVar10 <= 0.0 == fVar9 <= 0.0) && (fVar9 <= 0.0 == fVar8 <= 0.0)) &&
      (fVar8 <= 0.0 == fVar7 <= 0.0)) ||
     (((0.0 <= fVar10 == 0.0 <= fVar9 && (0.0 <= fVar9 == 0.0 <= fVar8)) &&
      (0.0 <= fVar8 == 0.0 <= fVar7)))) {
    local_a4 = *(undefined4 *)(param_1 + 0x180);
    fVar7 = *param_6;
    fVar8 = param_6[1];
    fVar1 = param_6[4];
    local_a0 = 0;
    local_90 = 0;
    local_80 = 0;
    fVar2 = param_6[5];
    local_70 = 0;
    fVar3 = param_6[3];
    fVar4 = param_6[7];
    local_a8 = param_7;
    local_98 = param_8;
    local_88 = param_9;
    local_78 = param_10;
    local_94 = local_a4;
    local_84 = local_a4;
    local_74 = local_a4;
    FUN_1433d3910(param_2,&local_a8);
    FUN_1433d3910(param_2,&local_98);
    FUN_1433d3910(param_2,&local_88);
    FUN_1433d3910(param_2,&local_78);
    pfVar6 = (float *)((ulonglong)*(uint *)(param_1 + 0x180) * 0x10 + param_1);
    *pfVar6 = param_4;
    pfVar6[1] = param_5;
    pfVar6[2] = param_5 * fVar8 + param_4 * fVar7 + fVar3;
    pfVar6[3] = param_4 * fVar1 + param_5 * fVar2 + fVar4;
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  }
  return;
}



// FUNCTION 1433d2d90 FUN_1433d2d90 body=250 status=ok
// SIG undefined FUN_1433d2d90(void)

void FUN_1433d2d90(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  
  fVar1 = *param_3;
  uVar4 = 0;
  fVar2 = param_3[1];
  uVar6 = uVar4;
  if (fVar1 < *(float *)(param_2 + 0x70)) {
    uVar6 = 4;
  }
  uVar3 = uVar4;
  if (*(float *)(param_2 + 0x7c) <= fVar2 && fVar2 != *(float *)(param_2 + 0x7c)) {
    uVar3 = 2;
  }
  if (fVar2 < *(float *)(param_2 + 0x74)) {
    uVar4 = 8;
  }
  pfVar5 = (float *)(((ulonglong)
                      (byte)(&DAT_145b06388)
                            [uVar6 | uVar3 | uVar4 |
                             (ulonglong)
                             (*(float *)(param_2 + 0x78) <= fVar1 &&
                             fVar1 != *(float *)(param_2 + 0x78))] + 5) * 0x20 + param_2);
  *param_3 = fVar2 * pfVar5[1] + fVar1 * *pfVar5 + pfVar5[3];
  param_3[1] = fVar2 * pfVar5[5] + fVar1 * pfVar5[4] + pfVar5[7];
  fVar1 = *param_3;
  *param_3 = param_3[1] * *(float *)(param_2 + 0x84) + fVar1 * *(float *)(param_2 + 0x80) +
             *(float *)(param_2 + 0x8c);
  param_3[1] = param_3[1] * *(float *)(param_2 + 0x94) + fVar1 * *(float *)(param_2 + 0x90) +
               *(float *)(param_2 + 0x9c);
  return;
}



// FUNCTION 1433d2e90 FUN_1433d2e90 body=1232 status=ok
// SIG undefined FUN_1433d2e90(void)

void FUN_1433d2e90(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined2 local_res18 [4];
  
  uVar9 = (ulonglong)param_3;
  if (param_3 + 3 <= param_4) {
    fVar13 = 0.0;
    fVar14 = 0.0;
    if (param_3 < param_4) {
      uVar5 = param_3;
      if (3 < param_4 - param_3) {
        uVar5 = ((param_4 - param_3) - 4 >> 2) + 1;
        puVar11 = (uint *)(*(longlong *)(param_2 + 0x378) + 4 + uVar9 * 0xc);
        puVar10 = (uint *)(*(longlong *)(param_2 + 0x378) + (uVar9 * 3 + 7) * 4);
        uVar7 = (ulonglong)uVar5;
        uVar5 = param_3 + uVar5 * 4;
        do {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 0xc;
          puVar1 = puVar10 + -3;
          uVar4 = *puVar10;
          puVar2 = puVar10 + 3;
          puVar10 = puVar10 + 0xc;
          fVar13 = fVar13 + *(float *)(param_1 + (ulonglong)uVar3 * 0x10) +
                   *(float *)(param_1 + (ulonglong)*puVar1 * 0x10) +
                   *(float *)(param_1 + (ulonglong)uVar4 * 0x10) +
                   *(float *)(param_1 + (ulonglong)*puVar2 * 0x10);
          fVar14 = fVar14 + *(float *)(param_1 + 4 + (ulonglong)uVar3 * 0x10) +
                   *(float *)(param_1 + 4 + (ulonglong)*puVar1 * 0x10) +
                   *(float *)(param_1 + 4 + (ulonglong)uVar4 * 0x10) +
                   *(float *)(param_1 + 4 + (ulonglong)*puVar2 * 0x10);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 < param_4) {
        uVar7 = (ulonglong)(param_4 - uVar5);
        puVar11 = (uint *)(*(longlong *)(param_2 + 0x378) + (ulonglong)uVar5 * 0xc + 4);
        do {
          uVar5 = *puVar11;
          puVar11 = puVar11 + 3;
          fVar13 = fVar13 + *(float *)(param_1 + (ulonglong)uVar5 * 0x10);
          fVar14 = fVar14 + *(float *)(param_1 + 4 + (ulonglong)uVar5 * 0x10);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    fVar12 = (float)(param_4 - param_3);
    fVar13 = fVar13 / fVar12;
    fVar14 = fVar14 / fVar12;
    if (param_3 < param_4) {
      uVar5 = param_3;
      if (3 < param_4 - param_3) {
        lVar8 = uVar9 * 0xc;
        uVar5 = ((param_4 - param_3) - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar5;
        uVar5 = param_3 + uVar5 * 4;
        do {
          uVar6 = (ulonglong)*(uint *)(lVar8 + 4 + *(longlong *)(param_2 + 0x378));
          fVar15 = *(float *)(param_1 + uVar6 * 0x10) - fVar13;
          fVar16 = *(float *)(param_1 + 4 + uVar6 * 0x10) - fVar14;
          fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
          fVar12 = fVar12 + fVar12;
          if (fVar12 == 0.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (fVar15 * fVar15) / fVar12;
            if (fVar15 < 0.0) {
              fVar12 = -fVar12;
            }
            if (0.0 < fVar16) {
              fVar12 = 1.0 - fVar12;
            }
            fVar12 = fVar12 - 0.5;
          }
          *(float *)(lVar8 + 8 + *(longlong *)(param_2 + 0x378)) = fVar12;
          uVar6 = (ulonglong)*(uint *)(lVar8 + 0x10 + *(longlong *)(param_2 + 0x378));
          fVar15 = *(float *)(param_1 + uVar6 * 0x10) - fVar13;
          fVar16 = *(float *)(param_1 + 4 + uVar6 * 0x10) - fVar14;
          fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
          fVar12 = fVar12 + fVar12;
          if (fVar12 == 0.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (fVar15 * fVar15) / fVar12;
            if (fVar15 < 0.0) {
              fVar12 = -fVar12;
            }
            if (0.0 < fVar16) {
              fVar12 = 1.0 - fVar12;
            }
            fVar12 = fVar12 - 0.5;
          }
          *(float *)(lVar8 + 0x14 + *(longlong *)(param_2 + 0x378)) = fVar12;
          uVar6 = (ulonglong)*(uint *)(lVar8 + 0x1c + *(longlong *)(param_2 + 0x378));
          fVar15 = *(float *)(param_1 + uVar6 * 0x10) - fVar13;
          fVar16 = *(float *)(param_1 + 4 + uVar6 * 0x10) - fVar14;
          fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
          fVar12 = fVar12 + fVar12;
          if (fVar12 == 0.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (fVar15 * fVar15) / fVar12;
            if (fVar15 < 0.0) {
              fVar12 = -fVar12;
            }
            if (0.0 < fVar16) {
              fVar12 = 1.0 - fVar12;
            }
            fVar12 = fVar12 - 0.5;
          }
          *(float *)(lVar8 + 0x20 + *(longlong *)(param_2 + 0x378)) = fVar12;
          uVar6 = (ulonglong)*(uint *)(lVar8 + 0x28 + *(longlong *)(param_2 + 0x378));
          fVar15 = *(float *)(param_1 + uVar6 * 0x10) - fVar13;
          fVar16 = *(float *)(param_1 + 4 + uVar6 * 0x10) - fVar14;
          fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
          fVar12 = fVar12 + fVar12;
          if (fVar12 == 0.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (fVar15 * fVar15) / fVar12;
            if (fVar15 < 0.0) {
              fVar12 = -fVar12;
            }
            if (0.0 < fVar16) {
              fVar12 = 1.0 - fVar12;
            }
            fVar12 = fVar12 - 0.5;
          }
          *(float *)(lVar8 + 0x2c + *(longlong *)(param_2 + 0x378)) = fVar12;
          lVar8 = lVar8 + 0x30;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 < param_4) {
        lVar8 = (ulonglong)uVar5 * 0xc;
        uVar7 = (ulonglong)(param_4 - uVar5);
        do {
          uVar6 = (ulonglong)*(uint *)(lVar8 + 4 + *(longlong *)(param_2 + 0x378));
          fVar15 = *(float *)(param_1 + uVar6 * 0x10) - fVar13;
          fVar16 = *(float *)(param_1 + 4 + uVar6 * 0x10) - fVar14;
          fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
          fVar12 = fVar12 + fVar12;
          if (fVar12 == 0.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (fVar15 * fVar15) / fVar12;
            if (fVar15 < 0.0) {
              fVar12 = -fVar12;
            }
            if (0.0 < fVar16) {
              fVar12 = 1.0 - fVar12;
            }
            fVar12 = fVar12 - 0.5;
          }
          *(float *)(lVar8 + 8 + *(longlong *)(param_2 + 0x378)) = fVar12;
          lVar8 = lVar8 + 0xc;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    FUN_1433d33f0(param_2,uVar9,param_4,&LAB_143344430);
    uVar7 = (ulonglong)(param_3 + 2);
    if (param_3 + 2 < param_4) {
      param_1 = param_1 + 0x188;
      lVar8 = uVar7 * 0xc;
      do {
        local_res18[0] = *(undefined2 *)(*(longlong *)(param_2 + 0x378) + 4 + uVar9 * 0xc);
        FUN_1433d37f0(param_1,local_res18);
        local_res18[0] =
             *(undefined2 *)(*(longlong *)(param_2 + 0x378) + 4 + (ulonglong)((int)uVar7 - 1) * 0xc)
        ;
        FUN_1433d37f0(param_1,local_res18);
        local_res18[0] = *(undefined2 *)(lVar8 + 4 + *(longlong *)(param_2 + 0x378));
        FUN_1433d37f0(param_1,local_res18);
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
        lVar8 = lVar8 + 0xc;
      } while (uVar5 < param_4);
    }
  }
  return;
}



// FUNCTION 1433d3370 FUN_1433d3370 body=118 status=ok
// SIG undefined FUN_1433d3370(void)

void FUN_1433d3370(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  param_2[4] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = *(undefined4 *)(param_1 + 0x24);
  param_2[6] = *(undefined4 *)(param_1 + 0x28);
  param_2[7] = *(undefined4 *)(param_1 + 0x2c);
  FUN_143324990(param_1 + 0x70,param_2 + 8,0);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x3c);
  FUN_143324990(param_1 + 0x50,param_2 + 0xc,0);
  param_2[0xf] = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1433d33f0 FUN_1433d33f0 body=925 status=ok
// SIG undefined FUN_1433d33f0(void)

void FUN_1433d33f0(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res10;
  longlong local_2b8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar10 = local_2b8;
    local_res10 = param_3;
LAB_1433d3439:
    while (lVar12 = param_2, 9 < local_res10 - param_2) {
      lVar9 = *(longlong *)(param_1 + 0x378);
      lVar12 = param_2 + 1;
      lVar7 = (local_res10 - param_2) / 2 + param_2;
      puVar8 = (undefined8 *)(lVar9 + lVar7 * 0xc);
      lVar11 = local_res10 + -1;
      lVar2 = param_2 * 0xc;
      uVar4 = *(undefined4 *)(lVar2 + 8 + lVar9);
      uVar3 = *(undefined8 *)(lVar2 + lVar9);
      *(undefined8 *)(lVar2 + lVar9) = *(undefined8 *)(lVar9 + lVar7 * 0xc);
      *(undefined4 *)(lVar2 + 8 + lVar9) = *(undefined4 *)(puVar8 + 1);
      *puVar8 = uVar3;
      lVar9 = lVar12 * 0xc;
      *(undefined4 *)(puVar8 + 1) = uVar4;
      lVar7 = lVar11 * 0xc;
      cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar7,
                         *(longlong *)(param_1 + 0x378) + lVar9);
      if (cVar6 != '\0') {
        lVar5 = *(longlong *)(param_1 + 0x378);
        puVar8 = (undefined8 *)(lVar5 + lVar9);
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
        puVar1 = (undefined8 *)(lVar5 + lVar7);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(lVar5 + lVar9);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar8 = uVar3;
        *(undefined4 *)(puVar8 + 1) = uVar4;
      }
      cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar2,
                         *(longlong *)(param_1 + 0x378) + lVar9);
      if (cVar6 != '\0') {
        lVar5 = *(longlong *)(param_1 + 0x378);
        puVar8 = (undefined8 *)(lVar5 + lVar9);
        uVar3 = *(undefined8 *)(lVar5 + lVar2);
        puVar1 = (undefined8 *)(lVar5 + lVar2);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(lVar5 + lVar9);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar8 = uVar3;
        *(undefined4 *)(puVar8 + 1) = uVar4;
      }
      cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar7,
                         *(longlong *)(param_1 + 0x378) + lVar2);
      if (cVar6 != '\0') {
        lVar5 = *(longlong *)(param_1 + 0x378);
        puVar8 = (undefined8 *)(lVar5 + lVar2);
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
        puVar1 = (undefined8 *)(lVar5 + lVar7);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(lVar5 + lVar2);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar8 = uVar3;
        *(undefined4 *)(puVar8 + 1) = uVar4;
      }
      while( true ) {
        do {
          lVar9 = lVar9 + 0xc;
          lVar12 = lVar12 + 1;
          cVar6 = (*param_4)(lVar9 + *(longlong *)(param_1 + 0x378),
                             *(longlong *)(param_1 + 0x378) + lVar2);
        } while (cVar6 != '\0');
        do {
          lVar7 = lVar7 + -0xc;
          lVar11 = lVar11 + -1;
          cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar2,
                             lVar7 + *(longlong *)(param_1 + 0x378));
        } while (cVar6 != '\0');
        lVar5 = *(longlong *)(param_1 + 0x378);
        if (lVar11 < lVar12) break;
        lVar7 = lVar11 * 0xc;
        uVar3 = *(undefined8 *)(lVar5 + lVar12 * 0xc);
        lVar9 = lVar12 * 0xc;
        uVar4 = *(undefined4 *)(lVar5 + 8 + lVar9);
        *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar5 + lVar11 * 0xc);
        *(undefined4 *)(lVar5 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar7);
        *(undefined8 *)(lVar5 + lVar7) = uVar3;
        *(undefined4 *)(lVar5 + 8 + lVar7) = uVar4;
      }
      uVar4 = *(undefined4 *)(lVar5 + 8 + lVar2);
      puVar8 = (undefined8 *)(lVar5 + lVar11 * 0xc);
      uVar3 = *(undefined8 *)(lVar5 + lVar2);
      *(undefined8 *)(lVar5 + lVar2) = *puVar8;
      *(undefined4 *)(lVar5 + 8 + lVar2) = *(undefined4 *)(puVar8 + 1);
      *puVar8 = uVar3;
      *(undefined4 *)(puVar8 + 1) = uVar4;
      if (local_res10 - lVar12 < lVar11 - param_2) {
        *plVar10 = param_2;
        plVar10[1] = lVar11;
        plVar10 = plVar10 + 2;
        param_2 = lVar12;
      }
      else {
        *plVar10 = lVar12;
        plVar10[1] = local_res10;
        plVar10 = plVar10 + 2;
        local_res10 = lVar11;
      }
    }
joined_r0x0001433d36b5:
    lVar9 = lVar12;
    lVar12 = lVar9 + 1;
    if (lVar12 < local_res10) {
      lVar7 = lVar9 * 0xc;
      cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar7 + 0xc);
      while (cVar6 != '\0') {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x378) + lVar7);
        uVar3 = *(undefined8 *)((longlong)puVar8 + 0xc);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x14);
        *(undefined8 *)((longlong)puVar8 + 0xc) = *puVar8;
        *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(puVar8 + 1);
        *puVar8 = uVar3;
        *(undefined4 *)(puVar8 + 1) = uVar4;
        if (lVar9 == param_2) break;
        lVar9 = lVar9 + -1;
        lVar7 = lVar9 * 0xc;
        cVar6 = (*param_4)(*(longlong *)(param_1 + 0x378) + lVar7 + 0xc);
      }
      goto joined_r0x0001433d36b5;
    }
    if (local_2b8 < plVar10) {
      local_res10 = plVar10[-1];
      plVar10 = plVar10 + -2;
      param_2 = *plVar10;
      goto LAB_1433d3439;
    }
  }
  return;
}



// FUNCTION 1433d3790 FUN_1433d3790 body=89 status=ok
// SIG undefined FUN_1433d3790(void)

RefCountImplCore * FUN_1433d3790(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1433d37f0 FUN_1433d37f0 body=275 status=ok
// SIG undefined FUN_1433d37f0(void)

void FUN_1433d37f0(longlong *param_1,undefined2 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = param_1[1];
  if (uVar1 < 0x48) {
    *(undefined2 *)((longlong)param_1 + uVar1 * 2 + 0x18) = *param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  uVar2 = param_1[2];
  if (uVar1 == 0x48) {
    plVar3 = (longlong *)*param_1;
    param_1[2] = uVar2 * 2;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar2 * 4,0);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,uVar2 << 2,0);
    }
    lVar4 = param_1[4];
    param_1[0x15] = (longlong)plVar3;
    *plVar3 = param_1[3];
    plVar3[1] = lVar4;
    lVar4 = param_1[6];
    plVar3[2] = param_1[5];
    plVar3[3] = lVar4;
    lVar4 = param_1[8];
    plVar3[4] = param_1[7];
    plVar3[5] = lVar4;
    lVar4 = param_1[10];
    plVar3[6] = param_1[9];
    plVar3[7] = lVar4;
    lVar4 = param_1[0xc];
    plVar3[8] = param_1[0xb];
    plVar3[9] = lVar4;
    lVar4 = param_1[0xe];
    plVar3[10] = param_1[0xd];
    plVar3[0xb] = lVar4;
    lVar4 = param_1[0x10];
    plVar3[0xc] = param_1[0xf];
    plVar3[0xd] = lVar4;
    lVar4 = param_1[0x12];
    plVar3[0xe] = param_1[0x11];
    plVar3[0xf] = lVar4;
    lVar4 = param_1[0x14];
    plVar3[0x10] = param_1[0x13];
    plVar3[0x11] = lVar4;
  }
  else if (uVar2 <= uVar1) {
    param_1[2] = uVar2 * 2;
    lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x15],uVar2 * 4);
    param_1[0x15] = lVar4;
  }
  *(undefined2 *)(param_1[0x15] + param_1[1] * 2) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1433d3910 FUN_1433d3910 body=393 status=ok
// SIG undefined FUN_1433d3910(void)

void FUN_1433d3910(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar2 = param_1[1];
  if (uVar2 < 0x48) {
    puVar1 = (undefined8 *)((longlong)param_1 + (uVar2 * 3 + 6) * 4);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    param_1[1] = param_1[1] + 1;
    return;
  }
  if (uVar2 == 0x48) {
    lVar9 = param_1[2];
    param_1[2] = lVar9 * 2;
    plVar6 = (longlong *)*param_1;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,lVar9 * 0x18,0);
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,lVar9 * 0x18,0);
    }
    param_1[0x6f] = (longlong)plVar6;
    lVar9 = 6;
    plVar5 = param_1 + 3;
    do {
      plVar8 = plVar5;
      plVar7 = plVar6;
      lVar4 = plVar8[1];
      *plVar7 = *plVar8;
      plVar7[1] = lVar4;
      lVar4 = plVar8[3];
      plVar7[2] = plVar8[2];
      plVar7[3] = lVar4;
      lVar4 = plVar8[5];
      plVar7[4] = plVar8[4];
      plVar7[5] = lVar4;
      lVar4 = plVar8[7];
      plVar7[6] = plVar8[6];
      plVar7[7] = lVar4;
      lVar4 = plVar8[9];
      plVar7[8] = plVar8[8];
      plVar7[9] = lVar4;
      lVar4 = plVar8[0xb];
      plVar7[10] = plVar8[10];
      plVar7[0xb] = lVar4;
      lVar4 = plVar8[0xd];
      plVar7[0xc] = plVar8[0xc];
      plVar7[0xd] = lVar4;
      lVar4 = plVar8[0xf];
      plVar7[0xe] = plVar8[0xe];
      plVar7[0xf] = lVar4;
      lVar9 = lVar9 + -1;
      plVar6 = plVar7 + 0x10;
      plVar5 = plVar8 + 0x10;
    } while (lVar9 != 0);
    lVar9 = plVar8[0x11];
    plVar7[0x10] = plVar8[0x10];
    plVar7[0x11] = lVar9;
    lVar9 = plVar8[0x13];
    plVar7[0x12] = plVar8[0x12];
    plVar7[0x13] = lVar9;
    lVar9 = plVar8[0x15];
    plVar7[0x14] = plVar8[0x14];
    plVar7[0x15] = lVar9;
    lVar9 = plVar8[0x17];
    plVar7[0x16] = plVar8[0x16];
    plVar7[0x17] = lVar9;
    lVar9 = plVar8[0x19];
    plVar7[0x18] = plVar8[0x18];
    plVar7[0x19] = lVar9;
    lVar9 = plVar8[0x1b];
    plVar7[0x1a] = plVar8[0x1a];
    plVar7[0x1b] = lVar9;
  }
  else {
    uVar3 = param_1[2];
    if (uVar3 <= uVar2) {
      param_1[2] = uVar3 * 2;
      lVar9 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x6f],uVar3 * 0x18);
      param_1[0x6f] = lVar9;
    }
  }
  lVar9 = param_1[1];
  lVar4 = param_1[0x6f];
  *(undefined8 *)(lVar4 + lVar9 * 0xc) = *param_2;
  *(undefined4 *)(lVar4 + lVar9 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1433d3ab0 FUN_1433d3ab0 body=1267 status=ok
// SIG undefined FUN_1433d3ab0(void)

void FUN_1433d3ab0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  int local_res8;
  
  plVar14 = (longlong *)(*param_1 + param_3 * 0x10);
  if (*(short *)(*plVar14 + 0x6a) < 0) {
    FUN_1432edb10(*(undefined8 *)(param_2[4] + 0x10),*plVar14,param_2);
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x230))(param_2);
  lVar13 = *plVar14;
  lVar5 = FUN_14336b350(lVar13);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 1;
  }
  bVar3 = false;
  if (param_3 == 0) {
    *(undefined4 *)(plVar14 + 1) = 0;
  }
  else {
    uVar8 = param_1[1] - 1U;
    if (param_3 - 1U < param_1[1] - 1U) {
      uVar8 = param_3 - 1U;
    }
    if (-1 < (longlong)uVar8) {
      lVar7 = *param_1;
      piVar11 = (int *)(lVar7 + 8 + uVar8 * 0x10);
      do {
        if (*piVar11 != -1) {
          if (-1 < (longlong)uVar8) {
            iVar19 = 0;
            lVar17 = uVar8 * 0x10;
            if ((*(short *)(*(longlong *)(lVar7 + lVar17) + 0x68) == 0) &&
               (*(int *)(lVar7 + lVar17 + 0xc) == -1)) goto LAB_1433d3f25;
            if (uVar8 == 0) goto LAB_1433d3def;
            piVar11 = (int *)(lVar7 + 8 + lVar17);
            iVar19 = 0;
            goto LAB_1433d3dd0;
          }
          break;
        }
        piVar11 = piVar11 + -4;
        uVar8 = uVar8 - 1;
      } while (-1 < (longlong)uVar8);
    }
    *(undefined4 *)(plVar14 + 1) = 0;
  }
  goto LAB_1433d3bbb;
LAB_1433d3dd0:
  do {
    if (piVar11[1] == -1) {
      if (*piVar11 != -1) break;
    }
    else if (*piVar11 != -1) {
      iVar19 = iVar19 + 1;
    }
    piVar11 = piVar11 + -4;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
LAB_1433d3def:
  iVar18 = *(int *)(lVar13 + 0x2c);
  plVar20 = (longlong *)(uVar8 * 0x10 + lVar7);
  if (((int)(uint)*(ushort *)(*plVar20 + 0x68) < iVar18) ||
     ((iVar18 <= *(int *)(*plVar20 + 0x2c) && (iVar18 != -1)))) {
LAB_1433d3f25:
    *(int *)(plVar14 + 1) = *(int *)(lVar7 + lVar17 + 8) + 1;
  }
  else {
    lVar7 = plVar20[1];
    *(int *)((longlong)plVar14 + 0xc) = iVar19;
    *(int *)(plVar14 + 1) = (int)lVar7;
    uVar6 = FUN_1433d64d0(uVar4,(int)plVar20[1]);
    if (*(short *)(lVar13 + 0x68) == 0) {
      FUN_143364100(uVar6,*(undefined4 *)((longlong)plVar14 + 0xc),lVar5);
    }
    else {
      uVar10 = Scaleform::GFx::DisplayObjectBase::GetRenderContext(param_2);
      lVar7 = FUN_1432edef0(uVar10);
      FUN_143362c90(lVar7,lVar5);
      FUN_143364100(uVar6,*(undefined4 *)((longlong)plVar14 + 0xc),lVar7);
      if (lVar7 != 0) {
        plVar12 = (longlong *)(lVar7 + 0x18);
        *plVar12 = *plVar12 + -1;
        if (*plVar12 == 0) {
          FUN_1432ccf00(lVar7);
        }
      }
    }
    uVar8 = param_3 + 1;
    if (uVar8 < (ulonglong)param_1[1]) {
      lVar7 = uVar8 * 0x10;
      do {
        plVar12 = (longlong *)(*param_1 + lVar7);
        iVar19 = *(int *)(*plVar12 + 0x2c);
        if (((int)(uint)*(ushort *)(*plVar20 + 0x68) < iVar19) ||
           ((iVar19 <= *(int *)(*plVar20 + 0x2c) && (iVar19 != -1)))) break;
        if ((int)plVar12[1] != -1) {
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar8 < (ulonglong)param_1[1]);
    }
    bVar3 = true;
  }
  if (bVar3) goto LAB_1433d3f70;
LAB_1433d3bbb:
  iVar19 = 0;
  local_res8 = 1;
  iVar18 = 1;
  uVar8 = param_3 + 1;
  if (*(short *)(lVar13 + 0x68) == 0) {
    FUN_143364100(uVar4,(int)plVar14[1],lVar5);
  }
  else {
    uVar6 = Scaleform::GFx::DisplayObjectBase::GetRenderContext(param_2);
    lVar7 = FUN_1432edef0(uVar6);
    FUN_143362c90(lVar7,lVar5);
    uVar2 = param_1[1];
    uVar15 = uVar8;
    if (uVar8 < uVar2) {
      piVar11 = (int *)(*param_1 + 0x18 + param_3 * 0x10);
      iVar16 = *piVar11;
      if (iVar16 == -1) {
        do {
          uVar15 = uVar15 + 1;
          piVar11 = piVar11 + 4;
          param_3 = param_3 + 1;
          uVar8 = uVar8 + 1;
          if (uVar2 <= uVar8) break;
          iVar16 = *piVar11;
        } while (iVar16 == -1);
        if (iVar16 == -1) goto LAB_1433d3d56;
      }
      uVar8 = param_3 + 1;
      if (uVar8 < uVar2) {
        lVar17 = uVar8 * 0x10;
        do {
          plVar20 = (longlong *)(*param_1 + lVar17);
          iVar1 = *(int *)(*plVar20 + 0x2c);
          if ((((int)(uint)*(ushort *)(lVar13 + 0x68) < iVar1) || (iVar1 <= *(int *)(lVar13 + 0x2c))
              ) || (*(short *)(*plVar20 + 0x68) != 0)) break;
          uVar15 = uVar15 + 1;
          if ((int)plVar20[1] != -1) {
            lVar9 = FUN_1433d64d0(uVar4,iVar16);
            if (lVar9 != 0) {
              *(longlong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x18) + 1;
            }
            FUN_143364170(uVar4,iVar16,1);
            *(int *)(plVar20 + 1) = (int)plVar14[1];
            *(int *)((longlong)plVar20 + 0xc) = iVar19;
            FUN_143364100(lVar7,iVar19,lVar9);
            iVar19 = iVar19 + 1;
            iVar18 = local_res8 + -1;
            local_res8 = iVar18;
            if (lVar9 != 0) {
              plVar20 = (longlong *)(lVar9 + 0x18);
              *plVar20 = *plVar20 + -1;
              if (*plVar20 == 0) {
                FUN_1432ccf00(lVar9);
              }
            }
          }
          uVar8 = uVar8 + 1;
          lVar17 = lVar17 + 0x10;
        } while (uVar8 < (ulonglong)param_1[1]);
      }
    }
LAB_1433d3d56:
    FUN_143364100(uVar4,(int)plVar14[1],lVar7);
    uVar8 = uVar15;
    if (lVar7 != 0) {
      plVar14 = (longlong *)(lVar7 + 0x18);
      *plVar14 = *plVar14 + -1;
      if (*plVar14 == 0) {
        FUN_1432ccf00(lVar7);
      }
    }
  }
  if (uVar8 < (ulonglong)param_1[1]) {
    lVar13 = uVar8 << 4;
    do {
      iVar19 = *(int *)(*param_1 + 8 + lVar13);
      if (iVar19 != -1) {
        *(int *)(*param_1 + 8 + lVar13) = iVar19 + iVar18;
      }
      uVar8 = uVar8 + 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar8 < (ulonglong)param_1[1]);
  }
LAB_1433d3f70:
  if (lVar5 != 0) {
    plVar14 = (longlong *)(lVar5 + 0x18);
    *plVar14 = *plVar14 + -1;
    if (*plVar14 == 0) {
      FUN_1432ccf00(lVar5);
    }
  }
  return;
}



// FUNCTION 1433d3fb0 FUN_1433d3fb0 body=690 status=ok
// SIG undefined FUN_1433d3fb0(void)

void FUN_1433d3fb0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar14 = (longlong *)(param_3 * 0x10 + *param_1);
  if ((int)plVar14[1] == -1) {
    if (*(short *)(*plVar14 + 0x6a) < 0) {
      FUN_1432edb10(*(undefined8 *)(param_2[4] + 0x10),*plVar14,0);
      return;
    }
  }
  else {
    lVar7 = (**(code **)(*(longlong *)*plVar14 + 0x218))();
    lVar8 = (**(code **)(*param_2 + 0x218))(param_2);
    if (lVar7 != lVar8) {
      uVar10 = *(undefined8 *)(((longlong *)*plVar14)[4] + 0x10);
      uVar9 = (**(code **)(*(longlong *)*plVar14 + 0x218))();
      FUN_1432ec7d0(uVar10,uVar9);
    }
    uVar10 = (**(code **)(*param_2 + 0x230))(param_2);
    uVar3 = *(uint *)(plVar14 + 1);
    if (*(int *)((longlong)plVar14 + 0xc) == -1) {
      lVar7 = FUN_1432cd1e0(uVar10);
      puVar11 = (ulonglong *)(lVar7 + 0x90);
      if ((*(byte *)puVar11 & 1) != 0) {
        puVar11 = (ulonglong *)((*puVar11 & 0xfffffffffffffffe) + 0x10);
      }
      uVar13 = puVar11[uVar3];
      iVar15 = -1;
      lVar7 = FUN_1432cd1e0(uVar13);
      iVar6 = iVar15;
      if (((*(byte *)(lVar7 + 10) >> 4 & 1) != 0) &&
         (uVar16 = param_3 + 1, iVar6 = -1, uVar16 < (ulonglong)param_1[1])) {
        lVar7 = uVar16 * 0x10;
        do {
          lVar8 = *param_1 + lVar7;
          iVar4 = *(int *)(lVar8 + 8);
          if (((iVar4 != (int)plVar14[1]) || (*(int *)(lVar8 + 0xc) == -1)) &&
             (iVar6 = iVar15, iVar4 != -1)) break;
          param_3 = param_3 + 1;
          if (iVar4 != -1) {
            lVar12 = FUN_1432cd1e0(uVar13);
            puVar11 = (ulonglong *)(lVar12 + 0x90);
            if ((*(byte *)puVar11 & 1) != 0) {
              puVar11 = (ulonglong *)((*puVar11 & 0xfffffffffffffffe) + 0x10);
            }
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              *(longlong *)(uVar5 + 0x18) = *(longlong *)(uVar5 + 0x18) + 1;
            }
            FUN_143364170(uVar13,0,1);
            iVar6 = *(int *)(lVar8 + 0xc) + (int)plVar14[1];
            *(int *)(lVar8 + 8) = iVar6;
            *(undefined4 *)(lVar8 + 0xc) = 0xffffffff;
            FUN_143364100(uVar10,iVar6,uVar5);
            iVar15 = iVar15 + 1;
            if (uVar5 != 0) {
              plVar1 = (longlong *)(uVar5 + 0x18);
              *plVar1 = *plVar1 + -1;
              if (*plVar1 == 0) {
                FUN_1432ccf00(uVar5);
              }
            }
          }
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 0x10;
          iVar6 = iVar15;
        } while (uVar16 < (ulonglong)param_1[1]);
      }
      FUN_143364170(uVar10,(int)plVar14[1] + 1 + iVar6,1);
      uVar13 = param_3 + 1;
      if (uVar13 < (ulonglong)param_1[1]) {
        lVar7 = uVar13 * 0x10;
        do {
          iVar15 = *(int *)(*param_1 + 8 + lVar7);
          if (iVar15 != -1) {
            *(int *)(*param_1 + 8 + lVar7) = iVar15 + iVar6;
          }
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar13 < (ulonglong)param_1[1]);
      }
    }
    else {
      lVar7 = FUN_1432cd1e0(uVar10);
      puVar11 = (ulonglong *)(lVar7 + 0x90);
      if ((*(byte *)puVar11 & 1) != 0) {
        puVar11 = (ulonglong *)((*puVar11 & 0xfffffffffffffffe) + 0x10);
      }
      FUN_143364170(puVar11[uVar3],*(undefined4 *)((longlong)plVar14 + 0xc),1);
      uVar13 = param_3 + 1;
      if (uVar13 < (ulonglong)param_1[1]) {
        lVar7 = uVar13 * 0x10;
        do {
          iVar6 = *(int *)(lVar7 + 8 + *param_1);
          if (iVar6 != -1) {
            if (iVar6 != (int)plVar14[1]) break;
            piVar2 = (int *)(lVar7 + 0xc + *param_1);
            *piVar2 = *piVar2 + -1;
          }
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar13 < (ulonglong)param_1[1]);
      }
    }
    plVar14[1] = -1;
  }
  return;
}



// FUNCTION 1433d4270 FUN_1433d4270 body=343 status=ok
// SIG undefined FUN_1433d4270(void)

void FUN_1433d4270(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar11 = (longlong *)(param_3 * 0x10 + *param_1);
  if (*(short *)(*plVar11 + 0x6a) < 0) {
    FUN_1432edb10(*(undefined8 *)(param_2[4] + 0x10),*plVar11,param_2);
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x230))(param_2);
  plVar3 = (longlong *)*plVar11;
  lVar5 = (**(code **)(*param_2 + 0x218))(param_2);
  lVar6 = (**(code **)(*plVar3 + 0x218))(plVar3);
  if (lVar6 != lVar5) {
    uVar9 = *(undefined8 *)(((longlong *)*plVar11)[4] + 0x10);
    uVar7 = (**(code **)(*(longlong *)*plVar11 + 0x218))();
    FUN_1432ec7d0(uVar9,uVar7);
  }
  uVar1 = *(uint *)(plVar11 + 1);
  lVar5 = FUN_1432cd1e0(uVar4);
  puVar8 = (ulonglong *)(lVar5 + 0x90);
  if ((*(byte *)puVar8 & 1) != 0) {
    puVar8 = (ulonglong *)((*puVar8 & 0xfffffffffffffffe) + 0x10);
  }
  uVar10 = puVar8[uVar1];
  if (*(int *)((longlong)plVar11 + 0xc) == -1) {
    lVar5 = FUN_1432cd1e0();
    if ((*(byte *)(lVar5 + 10) >> 4 & 1) != 0) {
      uVar9 = FUN_14336b350(*plVar11);
      FUN_143362c90(uVar10,uVar9);
      return;
    }
    FUN_143364170(uVar4,(int)plVar11[1],1);
    uVar9 = FUN_14336b350(*plVar11);
    uVar2 = (undefined4)plVar11[1];
    uVar10 = uVar4;
  }
  else {
    FUN_143364170(uVar10,*(int *)((longlong)plVar11 + 0xc),1);
    uVar9 = FUN_14336b350(*plVar11);
    uVar2 = *(undefined4 *)((longlong)plVar11 + 0xc);
  }
  FUN_143364100(uVar10,uVar2,uVar9);
  return;
}



// FUNCTION 1433d43d0 FUN_1433d43d0 body=520 status=ok
// SIG undefined FUN_1433d43d0(void)

undefined8 FUN_1433d43d0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar11 = (longlong *)(param_3 * 0x10 + *param_1);
  plVar9 = (longlong *)(param_4 * 0x10 + *param_1);
  if (*(short *)(*plVar11 + 0x6a) < 0) {
    return 0;
  }
  if (*(short *)(*plVar9 + 0x6a) < 0) {
    return 0;
  }
  lVar3 = FUN_14336b350();
  uVar5 = *(uint *)((longlong)plVar11 + 0xc);
  if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(plVar11 + 1);
  }
  lVar6 = *(longlong *)(lVar3 + 0x30);
  uVar8 = (ulonglong)uVar5;
  lVar4 = FUN_14336b350(*plVar9);
  uVar5 = *(uint *)((longlong)plVar9 + 0xc);
  if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(plVar9 + 1);
  }
  lVar2 = *(longlong *)(lVar4 + 0x30);
  uVar10 = (ulonglong)uVar5;
  if ((*(short *)(*plVar11 + 0x68) != 0) || (*(short *)(*plVar9 + 0x68) != 0)) {
    lVar3 = plVar11[1];
    *(int *)(plVar11 + 1) = (int)plVar9[1];
    *(int *)(plVar9 + 1) = (int)lVar3;
    uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
    *(undefined4 *)((longlong)plVar11 + 0xc) = *(undefined4 *)((longlong)plVar9 + 0xc);
    *(undefined4 *)((longlong)plVar9 + 0xc) = uVar1;
    FUN_1433d3fb0(param_1,param_2,param_3);
    FUN_1433d3fb0(param_1,param_2,param_4);
    FUN_1433d3ab0(param_1,param_2,param_3);
    FUN_1433d3ab0(param_1,param_2,param_4);
    return 1;
  }
  if (lVar6 == lVar2) {
    if (uVar10 <= uVar8) {
      FUN_143364170(lVar2,uVar10,1);
      FUN_143364170(lVar6,uVar8 - 1,1);
      FUN_143364100(lVar2,uVar10,lVar3);
      goto LAB_1433d451b;
    }
    FUN_143364170(lVar6,uVar8,1);
    uVar7 = uVar10 - 1;
  }
  else {
    FUN_143364170(lVar6,uVar8,1);
    uVar7 = uVar10;
  }
  FUN_143364170(lVar2,uVar7,1);
  FUN_143364100(lVar6,uVar8,lVar4);
  lVar6 = lVar2;
  uVar8 = uVar10;
  lVar4 = lVar3;
LAB_1433d451b:
  FUN_143364100(lVar6,uVar8,lVar4);
  lVar3 = plVar11[1];
  *(int *)(plVar11 + 1) = (int)plVar9[1];
  *(int *)(plVar9 + 1) = (int)lVar3;
  uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
  *(undefined4 *)((longlong)plVar11 + 0xc) = *(undefined4 *)((longlong)plVar9 + 0xc);
  *(undefined4 *)((longlong)plVar9 + 0xc) = uVar1;
  return 1;
}



// FUNCTION 1433d45e0 FObjectThumbnail body=32 status=ok
// SIG undefined FObjectThumbnail(void)

undefined8 * FObjectThumbnail::FObjectThumbnail(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 1433d4610 FUN_1433d4610 body=317 status=ok
// SIG undefined FUN_1433d4610(void)

void FUN_1433d4610(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  byte param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_3 + 0x4c);
  uVar2 = param_1[1];
  uVar3 = FUN_1433d54d0(param_1,iVar1);
  param_1[4] = 0;
  if ((((param_5 & 1) != 0) && (uVar3 < uVar2)) &&
     (*(int *)(*(longlong *)(*param_1 + uVar3 * 0x10) + 0x2c) == iVar1)) {
    FUN_1433d51f0(param_1,param_2,uVar3);
    uVar3 = FUN_1433d54d0(param_1,iVar1);
  }
  *(int *)((longlong)param_4 + 0x2c) = iVar1;
  FUN_1433679d0(param_4,param_3);
  (**(code **)(*param_4 + 0x18))(param_4,param_3 + 0x20);
  (**(code **)(*param_4 + 0x90))(param_4,*(undefined4 *)(param_3 + 0x48));
  *(undefined2 *)(param_4 + 0xd) = *(undefined2 *)(param_3 + 0x60);
  (**(code **)(*param_4 + 0x80))(param_4,*(undefined1 *)(param_3 + 100));
  (**(code **)(*param_4 + 0x1c0))(param_4,*(undefined8 *)(param_3 + 0x40));
  if ((*(ushort *)(param_3 + 0x62) >> 9 & 1) != 0) {
    (**(code **)(*param_4 + 0x1d0))(param_4,*(char *)(param_3 + 0x65) != '\0');
  }
  *(short *)(param_1 + 5) = (short)param_1[5] + 1;
  FUN_1433d47a0(param_1,param_2,uVar3,param_4);
  *(ushort *)((longlong)param_4 + 0x6a) = *(ushort *)((longlong)param_4 + 0x6a) & 0xefef;
                    /* WARNING: Could not recover jumptable at 0x0001433d4746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x250))(param_4);
  return;
}



// FUNCTION 1433d4760 FUN_1433d4760 body=45 status=ok
// SIG undefined FUN_1433d4760(void)

void FUN_1433d4760(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  FUN_1433d47a0();
  *(ushort *)((longlong)param_4 + 0x6a) = *(ushort *)((longlong)param_4 + 0x6a) & 0xefef;
                    /* WARNING: Could not recover jumptable at 0x0001433d4786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x250))(param_4);
  return;
}



// FUNCTION 1433d47a0 FUN_1433d47a0 body=133 status=ok
// SIG undefined FUN_1433d47a0(void)

void FUN_1433d47a0(longlong param_1,undefined8 param_2,undefined8 param_3,RefCountNTSImpl *param_4)

{
  RefCountNTSImpl *local_18;
  undefined8 local_10;
  
  local_10 = 0xffffffffffffffff;
  if (param_4 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  }
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  local_18 = param_4;
  FUN_1433d6510(param_1,param_3,&local_18);
  FUN_1433d3ab0(param_1,param_2,param_3);
  if ((*(byte *)(param_1 + 0x2a) & 2) != 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
  }
  if (param_4 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(param_4);
  }
  return;
}



// FUNCTION 1433d4830 FUN_1433d4830 body=335 status=ok
// SIG undefined FUN_1433d4830(void)

void FUN_1433d4830(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  iVar1 = *(int *)(param_3 + 0x4c);
  uVar2 = param_1[1];
  uVar5 = FUN_1433d54d0(param_1,iVar1);
  if (uVar5 < uVar2) {
    plVar6 = (longlong *)(uVar5 * 0x10 + *param_1);
    plVar3 = (longlong *)*plVar6;
    if (*(int *)((longlong)plVar3 + 0x2c) == iVar1) {
      *(short *)(param_1 + 5) = (short)param_1[5] + 1;
      *(ushort *)(*plVar6 + 0x6a) = *(ushort *)(*plVar6 + 0x6a) & 0xffbf;
      if ((int)plVar6[1] == -1) {
        FUN_1433d3ab0(param_1,param_2,uVar5);
      }
      cVar4 = (**(code **)(*plVar3 + 0x198))(plVar3);
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*plVar3 + 0x1a0))(plVar3);
        if (cVar4 == '\0') {
          return;
        }
        (**(code **)(*plVar3 + 0x1a8))(plVar3,1);
      }
      if ((*(byte *)(param_3 + 0x62) >> 3 & 1) != 0) {
        FUN_1433679d0(plVar3,param_3);
      }
      if ((*(byte *)(param_3 + 0x62) >> 2 & 1) != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_3 + 0x20);
      }
      if (*(char *)(param_3 + 0x62) < '\0') {
        (**(code **)(*plVar3 + 0x80))(plVar3,*(undefined1 *)(param_3 + 100));
      }
      if ((*(ushort *)(param_3 + 0x62) >> 9 & 1) != 0) {
        (**(code **)(*plVar3 + 0x1d0))(plVar3,*(char *)(param_3 + 0x65) != '\0');
      }
      (**(code **)(*plVar3 + 0x1c0))(plVar3,*(undefined8 *)(param_3 + 0x40));
      (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined4 *)(param_3 + 0x48));
    }
  }
  return;
}



// FUNCTION 1433d4990 FUN_1433d4990 body=516 status=ok
// SIG undefined FUN_1433d4990(void)

void FUN_1433d4990(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar1 = *(int *)(param_3 + 0x4c);
  uVar2 = param_1[1];
  uVar5 = FUN_1433d54d0(param_1,iVar1);
  if ((uVar5 < uVar2) &&
     (plVar7 = (longlong *)(uVar5 * 0x10 + *param_1), *(int *)(*plVar7 + 0x2c) == iVar1)) {
    *(short *)(param_1 + 5) = (short)param_1[5] + 1;
    this = (RefCountNTSImpl *)*plVar7;
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    *(int *)((longlong)param_4 + 0x2c) = iVar1;
    (**(code **)(*param_4 + 0x238))(param_4);
    *(ushort *)(*plVar7 + 0x6a) = *(ushort *)(*plVar7 + 0x6a) & 0xffbf;
    if ((int)plVar7[1] == -1) {
      FUN_1433d3ab0(param_1,param_2,uVar5);
    }
    if ((RefCountNTSImpl *)*plVar7 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar7);
    }
    *plVar7 = (longlong)param_4;
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    lVar6 = param_3;
    if ((*(byte *)(param_3 + 0x62) >> 3 & 1) == 0) {
      lVar6 = FUN_1433679a0(this);
    }
    FUN_1433679d0(param_4,lVar6);
    if ((*(byte *)(param_3 + 0x62) >> 2 & 1) == 0) {
      lVar6 = (**(code **)(*(longlong *)this + 0x10))(this);
    }
    else {
      lVar6 = param_3 + 0x20;
    }
    (**(code **)(*param_4 + 0x18))(param_4,lVar6);
    if (*(char *)(param_3 + 0x62) < '\0') {
      uVar4 = (uint)*(byte *)(param_3 + 100);
    }
    else {
      uVar4 = (**(code **)(*(longlong *)this + 0x78))(this);
    }
    (**(code **)(*param_4 + 0x80))(param_4,uVar4);
    (**(code **)(*param_4 + 0x90))(param_4,*(undefined4 *)(param_3 + 0x48));
    *(undefined2 *)(param_4 + 0xd) = *(undefined2 *)(param_3 + 0x60);
    (**(code **)(*param_4 + 0x1c0))(param_4,*(undefined8 *)(param_3 + 0x40));
    if ((*(ushort *)(param_3 + 0x62) >> 9 & 1) == 0) {
      lVar6 = *param_4;
      uVar3 = (**(code **)(*(longlong *)this + 0x1d8))(this);
      (**(code **)(lVar6 + 0x1d0))(param_4,uVar3);
    }
    else {
      (**(code **)(*param_4 + 0x1d0))(param_4,*(char *)(param_3 + 0x65) != '\0');
    }
    FUN_1433d4270(param_1,param_2,uVar5);
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
    }
    param_1[4] = 0;
    (**(code **)(*(longlong *)this + 0x260))(this);
    (**(code **)(*param_4 + 0x250))(param_4);
    Scaleform::RefCountNTSImpl::Release(this);
  }
  else {
    FUN_1433d4610(param_1,param_2,param_3,param_4,1);
  }
  return;
}



// FUNCTION 1433d4ba0 FUN_1433d4ba0 body=157 status=ok
// SIG undefined FUN_1433d4ba0(void)

void FUN_1433d4ba0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  
  if (param_3 < (ulonglong)param_1[1]) {
    *(short *)(param_1 + 5) = (short)param_1[5] + 1;
    plVar1 = (longlong *)(param_3 * 0x10 + *param_1);
    param_1[4] = 0;
    if ((RefCountNTSImpl *)*plVar1 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar1);
    }
    *plVar1 = param_4;
    if (param_4 != 0) {
      *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    }
    if ((int)plVar1[1] == -1) {
      FUN_1433d3ab0(param_1,param_2,param_3);
    }
    else {
      FUN_1433d4270();
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
    }
  }
  return;
}



// FUNCTION 1433d4c50 RemoveDisplayObject body=210 status=ok
// SIG undefined RemoveDisplayObject(void)

void Scaleform::GFx::DisplayList::RemoveDisplayObject
               (longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar2 = param_1[1];
  uVar4 = FUN_1433d54d0(param_1,param_3);
  if (uVar4 < uVar2) {
    this = *(RefCountNTSImpl **)(*param_1 + uVar4 * 0x10);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if (*(int *)(this + 0x2c) == param_3) {
      *(short *)(param_1 + 5) = (short)param_1[5] + 1;
      param_1[4] = 0;
      if (*param_4 != 0x40000) {
        lVar3 = *param_1;
        plVar5 = (longlong *)(lVar3 + uVar4 * 0x10);
        iVar1 = *(int *)(*(longlong *)(lVar3 + uVar4 * 0x10) + 0x28);
        while (iVar1 != *param_4) {
          uVar4 = uVar4 + 1;
          if ((uVar2 <= uVar4) || (*(int *)(plVar5[2] + 0x2c) != param_3)) goto LAB_1433d4d01;
          plVar5 = (longlong *)(uVar4 * 0x10 + lVar3);
          iVar1 = *(int *)(*plVar5 + 0x28);
        }
      }
      FUN_1433d51f0(param_1,param_2,uVar4);
    }
LAB_1433d4d01:
    RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1433d4d30 FUN_1433d4d30 body=87 status=ok
// SIG undefined FUN_1433d4d30(void)

ulonglong FUN_1433d4d30(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *in_RAX;
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    in_RAX = (longlong *)*param_1;
    while (*in_RAX != param_3) {
      uVar1 = uVar1 + 1;
      in_RAX = in_RAX + 2;
      if ((ulonglong)param_1[1] <= uVar1) {
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
    }
    if (-1 < (longlong)uVar1) {
      *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 1;
      in_RAX = (longlong *)FUN_1433d51f0();
      param_1[4] = 0;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433d4d90 RemoveEntryAtIndex body=68 status=ok
// SIG undefined RemoveEntryAtIndex(void)

void Scaleform::GFx::DisplayList::RemoveEntryAtIndex
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1433d3fb0();
  FUN_1433d6610(param_1,param_3);
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(byte *)(param_1 + 0x2a) & 2) != 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
  }
  return;
}



// FUNCTION 1433d4de0 FUN_1433d4de0 body=221 status=ok
// SIG undefined FUN_1433d4de0(void)

void FUN_1433d4de0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2[4] + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x218))(param_2);
  FUN_1432ec7d0(uVar1,uVar4);
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 1;
    plVar3 = (longlong *)*param_1;
    param_1[4] = 0;
    (**(code **)(*(longlong *)*plVar3 + 0x260))();
    FUN_1433d3fb0(param_1,param_2,0);
    *(undefined8 *)(*plVar3 + 0x38) = 0;
    if (param_1[1] == 1) {
      FUN_1433a65a0(param_1,param_1);
    }
    else {
      if (*(RefCountNTSImpl **)*param_1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)*param_1);
      }
      memmove((void *)*param_1,(void *)((longlong)*param_1 + 0x10),param_1[1] * 0x10 - 0x10);
      param_1[1] = param_1[1] + -1;
    }
    lVar2 = param_1[1];
  }
  param_1[4] = 0;
  FUN_1433a65a0(param_1,param_1,0);
  return;
}



// FUNCTION 1433d4ed0 FUN_1433d4ed0 body=432 status=ok
// SIG undefined FUN_1433d4ed0(void)

undefined8 FUN_1433d4ed0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  RefCountNTSImpl *this;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  RefCountNTSImpl *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar6 = 0;
  uVar7 = 1;
  param_1[4] = 0;
  uVar8 = uVar6;
  if (param_1[1] != 0) {
    do {
      *(short *)(param_1 + 5) = (short)param_1[5] + 1;
      plVar1 = (longlong *)(uVar8 + *param_1);
      FUN_1433d3fb0(param_1,param_2,uVar6);
      plVar2 = (longlong *)*plVar1;
      if ((*(byte *)((longlong)plVar2 + 0x6a) >> 6 & 1) == 0) {
        if (plVar2 != (longlong *)0x0) {
          if (((*(ushort *)((longlong)plVar2 + 0x6a) & 0x1000) == 0) &&
             (-2 < *(int *)((longlong)plVar2 + 0x2c))) {
            cVar3 = (**(code **)(*plVar2 + 600))(plVar2);
            *(ushort *)((longlong)plVar2 + 0x6a) = *(ushort *)((longlong)plVar2 + 0x6a) | 0x1000;
            if (cVar3 == '\0') {
              this = (RefCountNTSImpl *)*plVar1;
              if (-1 < (int)*(uint *)(this + 0x2c)) {
                uVar5 = ~*(uint *)(this + 0x2c);
                if (this != (RefCountNTSImpl *)0x0) {
                  *(int *)(this + 8) = *(int *)(this + 8) + 1;
                }
                local_30 = (undefined4)plVar1[1];
                local_2c = *(undefined4 *)((longlong)plVar1 + 0xc);
                local_38 = this;
                FUN_1433d6610(param_1,uVar6);
                *(uint *)(this + 0x2c) = uVar5;
                uVar4 = FUN_1433d54d0(param_1,uVar5);
                FUN_1433d6510(param_1,uVar4,&local_38);
                Scaleform::RefCountNTSImpl::Release(this);
              }
            }
            else {
              (**(code **)(*plVar2 + 0x260))(plVar2);
              if (*(longlong *)(uVar8 + *param_1) != 0) {
                *(undefined8 *)(*(longlong *)(uVar8 + *param_1) + 0x38) = 0;
              }
              FUN_1433d6610(param_1,uVar6);
            }
            param_1[4] = 0;
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
              *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
            }
            if (cVar3 != '\0') goto LAB_1433d501b;
          }
          goto LAB_1433d5011;
        }
        if (*(longlong *)(uVar8 + *param_1) != 0) {
          *(undefined8 *)(*(longlong *)(uVar8 + *param_1) + 0x38) = 0;
        }
        FUN_1433d6610(param_1,uVar6);
        param_1[4] = 0;
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
          *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
        }
      }
      else {
LAB_1433d5011:
        uVar6 = uVar6 + 1;
        uVar8 = uVar8 + 0x10;
        uVar7 = 0;
      }
LAB_1433d501b:
    } while (uVar6 < (ulonglong)param_1[1]);
  }
  return uVar7;
}



// FUNCTION 1433d5090 FUN_1433d5090 body=156 status=ok
// SIG undefined FUN_1433d5090(void)

void FUN_1433d5090(longlong *param_1,undefined8 param_2,uint param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[1];
  uVar4 = 0;
  uVar5 = uVar4;
  if (uVar2 != 0) {
    do {
      lVar3 = *param_1;
      this = *(RefCountNTSImpl **)(uVar4 + lVar3);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      if ((*(uint *)(this + 0x2c) < 0x4000) && (param_3 < *(uint *)(this + 0x30))) {
        puVar1 = (ushort *)(*(longlong *)(uVar4 + lVar3) + 0x6a);
        *puVar1 = *puVar1 | 0x40;
        FUN_1433d3fb0(param_1,param_2,uVar5);
      }
      Scaleform::RefCountNTSImpl::Release(this);
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 0x10;
    } while (uVar5 < uVar2);
  }
  return;
}



// FUNCTION 1433d5140 FUN_1433d5140 body=163 status=ok
// SIG undefined FUN_1433d5140(void)

void FUN_1433d5140(longlong *param_1,undefined8 param_2)

{
  ushort *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  param_1[4] = 0;
  if (param_1[1] != 0) {
    lVar4 = 0;
    do {
      if ((*(byte *)(*(longlong *)(lVar4 + *param_1) + 0x6a) >> 6 & 1) != 0) {
        puVar1 = (ushort *)(*(longlong *)(lVar4 + *param_1) + 0x6a);
        *puVar1 = *puVar1 & 0xffbf;
        cVar2 = FUN_1433d51f0(param_1,param_2,uVar3);
        if (cVar2 != '\0') {
          uVar3 = uVar3 - 1;
          lVar4 = lVar4 + -0x10;
        }
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  *(short *)(param_1 + 5) = (short)param_1[5] + 1;
  param_1[4] = 0;
  return;
}



// FUNCTION 1433d51f0 FUN_1433d51f0 body=408 status=ok
// SIG undefined FUN_1433d51f0(void)

char FUN_1433d51f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  RefCountNTSImpl *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar1 = (longlong *)(*param_1 + param_3 * 0x10);
  FUN_1433d3fb0();
  plVar2 = (longlong *)*plVar1;
  if ((*(byte *)((longlong)plVar2 + 0x6a) >> 6 & 1) != 0) {
    return '\0';
  }
  if (plVar2 == (longlong *)0x0) {
    lVar3 = *(longlong *)(*param_1 + param_3 * 0x10);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    FUN_1433d6610(param_1,param_3);
    param_1[4] = 0;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
    }
    return '\x01';
  }
  if (((*(ushort *)((longlong)plVar2 + 0x6a) & 0x1000) == 0) &&
     (-2 < *(int *)((longlong)plVar2 + 0x2c))) {
    cVar4 = (**(code **)(*plVar2 + 600))(plVar2);
    *(ushort *)((longlong)plVar2 + 0x6a) = *(ushort *)((longlong)plVar2 + 0x6a) | 0x1000;
    if (cVar4 == '\0') {
      this = (RefCountNTSImpl *)*plVar1;
      if (-1 < (int)*(uint *)(this + 0x2c)) {
        uVar6 = ~*(uint *)(this + 0x2c);
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        local_30 = (undefined4)plVar1[1];
        local_2c = *(undefined4 *)((longlong)plVar1 + 0xc);
        local_38 = this;
        FUN_1433d6610(param_1,param_3);
        *(uint *)(this + 0x2c) = uVar6;
        uVar5 = FUN_1433d54d0(param_1,uVar6);
        FUN_1433d6510(param_1,uVar5,&local_38);
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    else {
      (**(code **)(*plVar2 + 0x260))(plVar2);
      lVar3 = *(longlong *)(*param_1 + param_3 * 0x10);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x38) = 0;
      }
      FUN_1433d6610(param_1,param_3);
    }
    param_1[4] = 0;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
    }
    return cVar4;
  }
  return '\0';
}



// FUNCTION 1433d5390 FUN_1433d5390 body=139 status=ok
// SIG undefined FUN_1433d5390(void)

void FUN_1433d5390(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = param_1[1];
  while (lVar2 = lVar2 + -1, -1 < lVar2) {
    plVar1 = *(longlong **)(*param_1 + lVar2 * 0x10);
    cVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1);
    if (cVar3 != '\0') {
      if (*(char *)((longlong)plVar1 + 0x6a) < '\0') {
        (**(code **)(*plVar1 + 800))(plVar1,param_2);
      }
      if (param_1[1] <= lVar2) {
        lVar2 = param_1[1];
      }
    }
  }
  return;
}



// FUNCTION 1433d5430 FUN_1433d5430 body=154 status=ok
// SIG undefined FUN_1433d5430(void)

void FUN_1433d5430(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  RefCountNTSImpl *this;
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = uVar2;
  if (param_1[1] != 0) {
    do {
      this = *(RefCountNTSImpl **)(uVar2 + *param_1);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      cVar1 = (**(code **)(*(longlong *)this + 0x1d8))(this);
      if ((cVar1 != '\0') && ((char)this[0x6a] < '\0')) {
        (**(code **)(*(longlong *)this + 0x330))(this,param_2,param_3);
      }
      Scaleform::RefCountNTSImpl::Release(this);
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x10;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1433d54d0 FUN_1433d54d0 body=550 status=ok
// SIG undefined FUN_1433d54d0(void)

undefined8 * FUN_1433d54d0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 local_res8 [2];
  
  puVar7 = (undefined8 *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 1) != 0) {
    puVar8 = (undefined8 *)&DAT_ffffffffffffffff;
    if ((ulonglong)param_1[1] < 0xb) {
      if (param_1[3] != 0) {
        FUN_1433d6690(param_1[3],0);
      }
    }
    else {
      if (param_1[3] == 0) {
        local_res8[0] = 0x142;
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,local_res8);
        puVar4 = puVar7;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar4 = puVar3;
        }
        param_1[3] = (longlong)puVar4;
      }
      puVar4 = (undefined8 *)param_1[1];
      puVar3 = puVar7;
      puVar9 = puVar7;
      puVar10 = puVar7;
      if (puVar4 != (undefined8 *)0x0) {
        do {
          if ((puVar8 == (undefined8 *)&DAT_ffffffffffffffff) &&
             (param_2 <= *(int *)(*(longlong *)(*param_1 + (longlong)puVar10) + 0x2c))) {
            puVar8 = puVar3;
          }
          iVar1 = *(int *)(*(longlong *)(*param_1 + (longlong)puVar10) + 0x2c);
          if (iVar1 != -1) {
            FUN_1433d6720(param_1[3],puVar9,iVar1,(ulonglong)puVar3 & 0xffffffff);
            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
          }
          puVar3 = (undefined8 *)((longlong)puVar3 + 1);
          puVar10 = puVar10 + 2;
        } while (puVar3 < puVar4);
      }
      FUN_1433d6690(param_1[3],puVar9);
    }
    *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0xfe;
    if (puVar8 != (undefined8 *)&DAT_ffffffffffffffff) {
      return puVar8;
    }
  }
  puVar8 = puVar7;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    if (0 < param_1[1]) {
      lVar5 = param_1[1];
      do {
        lVar6 = lVar5 >> 1;
        if (*(int *)(*(longlong *)(*param_1 + (lVar6 + (longlong)puVar8) * 0x10) + 0x2c) < param_2)
        {
          puVar8 = (undefined8 *)(lVar6 + (longlong)puVar8 + 1);
          lVar6 = lVar5 + (-1 - lVar6);
        }
        lVar5 = lVar6;
      } while (0 < lVar6);
    }
  }
  else {
    plVar2 = (longlong *)param_1[3];
    if ((plVar2 != (longlong *)0x0) && ((undefined8 *)0xa < (undefined8 *)param_1[1])) {
      if (0 < plVar2[1]) {
        lVar5 = plVar2[1];
        do {
          lVar6 = lVar5 >> 1;
          if (*(int *)(*plVar2 + (lVar6 + (longlong)puVar7) * 8) < param_2) {
            puVar7 = (undefined8 *)(lVar6 + (longlong)puVar7 + 1);
            lVar6 = lVar5 + (-1 - lVar6);
          }
          lVar5 = lVar6;
        } while (0 < lVar6);
      }
      if (puVar7 != (undefined8 *)plVar2[1]) {
        return (undefined8 *)(ulonglong)*(uint *)(*plVar2 + 4 + (longlong)puVar7 * 8);
      }
      return (undefined8 *)param_1[1];
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      param_1 = (longlong *)*param_1;
      puVar8 = puVar7;
      while (*(int *)(*param_1 + 0x2c) < param_2) {
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
        param_1 = param_1 + 2;
        if (puVar4 <= puVar8) {
          return puVar4;
        }
      }
    }
  }
  return puVar8;
}



// FUNCTION 1433d5700 FindDisplayIndex body=38 status=ok
// SIG undefined FindDisplayIndex(void)

ulonglong Scaleform::GFx::DisplayList::FindDisplayIndex(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    plVar2 = (longlong *)*param_1;
    do {
      if (*plVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 2;
    } while (uVar1 < (ulonglong)param_1[1]);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433d5730 GetDisplayIndex body=60 status=ok
// SIG undefined GetDisplayIndex(void)

ulonglong Scaleform::GFx::DisplayList::GetDisplayIndex(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1433d54d0();
  if (((ulonglong)param_1[1] <= uVar1) ||
     (*(int *)(*(longlong *)(*param_1 + uVar1 * 0x10) + 0x2c) != param_2)) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



// FUNCTION 1433d5780 FUN_1433d5780 body=487 status=ok
// SIG undefined FUN_1433d5780(void)

undefined8 FUN_1433d5780(longlong *param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  RefCountNTSImpl *this;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  RefCountNTSImpl *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_3 != param_4) {
    uVar2 = FUN_1433d54d0(param_1,param_3);
    if (((uVar2 < (ulonglong)param_1[1]) &&
        (lVar6 = uVar2 * 0x10, *(int *)(*(longlong *)(lVar6 + *param_1) + 0x2c) == param_3)) &&
       (uVar2 != 0xffffffffffffffff)) {
      uVar3 = FUN_1433d54d0(param_1,param_4);
      uVar1 = param_1[1];
      if (((uVar2 < uVar1) && (*(short *)(*(longlong *)(lVar6 + *param_1) + 0x6a) < 0)) ||
         ((uVar3 < uVar1 && (*(short *)(*(longlong *)(*param_1 + uVar3 * 0x10) + 0x6a) < 0)))) {
        uVar4 = 0;
      }
      else {
        param_1[4] = 0;
        if ((uVar3 < uVar1) && (*(int *)(*(longlong *)(uVar3 * 0x10 + *param_1) + 0x2c) == param_4))
        {
          FUN_1433d6430(*param_1 + lVar6);
          FUN_1433d43d0(param_1,param_2,uVar2,uVar3);
          lVar6 = *(longlong *)(lVar6 + *param_1);
          if (lVar6 != 0) {
            *(int *)(lVar6 + 0x2c) = param_3;
            *(int *)(lVar6 + 0x30) = param_5 + 1;
          }
        }
        else {
          puVar5 = (undefined8 *)(*param_1 + lVar6);
          this = (RefCountNTSImpl *)*puVar5;
          if (this != (RefCountNTSImpl *)0x0) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
          }
          local_30 = *(undefined4 *)(puVar5 + 1);
          local_2c = *(undefined4 *)((longlong)puVar5 + 0xc);
          local_38 = this;
          FUN_1433d3fb0(param_1,param_2,uVar2);
          FUN_1433d6610(param_1,uVar2);
          if (uVar2 < uVar3) {
            uVar3 = uVar3 - 1;
          }
          FUN_1433d6510(param_1,uVar3,&local_38);
          FUN_1433d3ab0(param_1,param_2,uVar3);
          if (this != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(this);
          }
        }
        lVar6 = *(longlong *)(*param_1 + uVar3 * 0x10);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 0x2c) = param_4;
          *(int *)(lVar6 + 0x30) = param_5 + 1;
        }
        *(short *)(param_1 + 5) = (short)param_1[5] + 1;
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
          *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 1;
        }
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  return 1;
}



// FUNCTION 1433d5970 FUN_1433d5970 body=332 status=ok
// SIG undefined FUN_1433d5970(void)

undefined1 FUN_1433d5970(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  RefCountNTSImpl *this_00;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (param_3 == param_4) {
    return 1;
  }
  lVar4 = *param_1;
  this = *(RefCountNTSImpl **)(lVar4 + param_3 * 0x10);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  uVar2 = *(undefined4 *)(lVar4 + 8 + param_3 * 0x10);
  uVar3 = *(undefined4 *)(lVar4 + 0xc + param_3 * 0x10);
  if ((*(short *)(this + 0x6a) < 0) ||
     ((param_4 < (ulonglong)param_1[1] &&
      (*(short *)(*(longlong *)(*param_1 + param_4 * 0x10) + 0x6a) < 0)))) {
    uVar6 = 0;
  }
  else {
    *(short *)(param_1 + 5) = (short)param_1[5] + 1;
    lVar4 = *param_1;
    this_00 = *(RefCountNTSImpl **)(lVar4 + param_3 * 0x10);
    lVar7 = param_4 * 0x10;
    lVar5 = *(longlong *)(lVar7 + lVar4);
    plVar1 = (longlong *)(lVar4 + param_3 * 0x10);
    if (this_00 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
    *plVar1 = lVar5;
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar7 + lVar4 + 8);
    *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(lVar7 + lVar4 + 0xc);
    puVar8 = (undefined8 *)(*param_1 + lVar7);
    if ((RefCountNTSImpl *)*puVar8 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar8);
    }
    *puVar8 = this;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(undefined4 *)(puVar8 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xc) = uVar3;
    uVar6 = FUN_1433d43d0(param_1,param_2,param_3,param_4);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return uVar6;
}



// FUNCTION 1433d5ad0 GetLargestDepthInUse body=31 status=ok
// SIG undefined GetLargestDepthInUse(void)

undefined4 Scaleform::GFx::DisplayList::GetLargestDepthInUse(longlong *param_1)

{
  if (param_1[1] != 0) {
    return *(undefined4 *)(*(longlong *)(*param_1 + -0x10 + param_1[1] * 0x10) + 0x2c);
  }
  return 0xffffffff;
}



// FUNCTION 1433d5b00 GetCharacterAtDepth body=183 status=ok
// SIG undefined GetCharacterAtDepth(void)

RefCountNTSImpl *
Scaleform::GFx::DisplayList::GetCharacterAtDepth
          (longlong *param_1,int param_2,int *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  RefCountNTSImpl *this;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1433d54d0();
  uVar1 = param_1[1];
  if (((uVar2 < uVar1) &&
      (lVar3 = uVar2 * 0x10, *(int *)(*(longlong *)(lVar3 + *param_1) + 0x2c) == param_2)) &&
     (uVar2 != 0xffffffffffffffff)) {
    do {
      this = *(RefCountNTSImpl **)(lVar3 + *param_1);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      if ((*(int *)(this + 0x2c) == param_2) && (*(int *)(this + 0x28) == *param_3)) {
        if (param_4 != (ulonglong *)0x0) {
          *param_4 = uVar2;
        }
        RefCountNTSImpl::Release(this);
        return this;
      }
      RefCountNTSImpl::Release(this);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < uVar1);
  }
  return (RefCountNTSImpl *)0x0;
}



// FUNCTION 1433d5bc0 GetDisplayObjectAtDepth body=117 status=ok
// SIG undefined GetDisplayObjectAtDepth(void)

longlong Scaleform::GFx::DisplayList::GetDisplayObjectAtDepth
                   (longlong *param_1,int param_2,byte *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1433d54d0();
  if (uVar2 < (ulonglong)param_1[1]) {
    lVar1 = *(longlong *)(*param_1 + uVar2 * 0x10);
    if (((*(int *)(lVar1 + 0x2c) == param_2) && (uVar2 != 0xffffffffffffffff)) &&
       (*(int *)(lVar1 + 0x2c) == param_2)) {
      if (param_3 == (byte *)0x0) {
        return lVar1;
      }
      *param_3 = *(byte *)(lVar1 + 0x6a) >> 6 & 1;
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1433d5c40 FUN_1433d5c40 body=154 status=ok
// SIG undefined FUN_1433d5c40(void)

longlong FUN_1433d5c40(longlong *param_1,undefined8 param_2,int param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1433d54d0(param_1,param_3);
  if ((((uVar2 < (ulonglong)param_1[1]) &&
       (lVar3 = *(longlong *)(*param_1 + uVar2 * 0x10), *(int *)(lVar3 + 0x2c) == param_3)) &&
      (uVar2 != 0xffffffffffffffff)) && (*(int *)(lVar3 + 0x2c) == param_3)) {
    if ((*(byte *)(lVar3 + 0x6a) >> 6 & 1) != 0) {
      FUN_1433d3ab0(param_1,param_2,uVar2);
      puVar1 = (ushort *)(*(longlong *)(*param_1 + uVar2 * 0x10) + 0x6a);
      *puVar1 = *puVar1 & 0xffbf;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1433d5ce0 FUN_1433d5ce0 body=573 status=ok
// SIG undefined FUN_1433d5ce0(void)

longlong FUN_1433d5ce0(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  bVar4 = false;
  bVar3 = false;
  local_res10 = 0;
  if (*(int *)(*param_2 + 0x20) == 0) {
    return 0;
  }
  if (param_3 == '\0') {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (param_1[4] == 0) {
LAB_1433d5e59:
      bVar3 = false;
    }
    else {
      plVar5 = (longlong *)Scaleform::GFx::DisplayObject::GetName(param_1[4],&local_res10);
      if (*(longlong *)(*plVar5 + 0x10) == 0) {
        FUN_14335f970();
      }
      bVar4 = true;
      if (*(longlong *)(*param_2 + 0x10) != *(longlong *)(*plVar5 + 0x10)) goto LAB_1433d5e59;
      bVar3 = true;
    }
    if (bVar4) {
      piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    bVar4 = false;
    if (bVar3) goto LAB_1433d5de8;
    uVar2 = param_1[1];
    uVar6 = 0;
    if (uVar2 != 0) {
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(lVar8 + *param_1);
        bVar3 = bVar4;
        if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x6b) & 1) == 0)) {
LAB_1433d5eda:
          bVar4 = bVar3;
          bVar3 = false;
        }
        else {
          bVar4 = true;
          plVar5 = (longlong *)Scaleform::GFx::DisplayObject::GetName(lVar7,&local_res10);
          if (*(longlong *)(*plVar5 + 0x10) == 0) {
            FUN_14335f970();
          }
          bVar3 = true;
          if (*(longlong *)(*param_2 + 0x10) != *(longlong *)(*plVar5 + 0x10)) goto LAB_1433d5eda;
          bVar3 = true;
        }
        if (bVar4) {
          bVar4 = false;
          piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        if (bVar3) goto LAB_1433d5f0b;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar6 < uVar2);
    }
  }
  else {
    if (param_1[4] == 0) {
LAB_1433d5d52:
      bVar4 = false;
    }
    else {
      plVar5 = (longlong *)Scaleform::GFx::DisplayObject::GetName(param_1[4],&local_res10);
      bVar3 = true;
      if (*plVar5 != *param_2) goto LAB_1433d5d52;
      bVar4 = true;
    }
    if (bVar3) {
      piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    bVar3 = false;
    if (bVar4) goto LAB_1433d5de8;
    uVar2 = param_1[1];
    uVar6 = 0;
    if (uVar2 != 0) {
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(lVar8 + *param_1);
        bVar4 = bVar3;
        if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x6b) & 1) == 0)) {
LAB_1433d5db0:
          bVar3 = bVar4;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          plVar5 = (longlong *)Scaleform::GFx::DisplayObject::GetName(lVar7,&local_res10);
          bVar4 = true;
          if (*plVar5 != *param_2) goto LAB_1433d5db0;
          bVar4 = true;
        }
        if (bVar3) {
          bVar3 = false;
          piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        if (bVar4) goto LAB_1433d5f0b;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar6 < uVar2);
    }
  }
LAB_1433d5de0:
  param_1[4] = 0;
LAB_1433d5de8:
  return param_1[4];
LAB_1433d5f0b:
  if (lVar7 != 0) {
    param_1[4] = lVar7;
    goto LAB_1433d5de8;
  }
  goto LAB_1433d5de0;
}



// FUNCTION 1433d5f30 FUN_1433d5f30 body=153 status=ok
// SIG undefined FUN_1433d5f30(void)

void FUN_1433d5f30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + *param_1);
      if (*(char *)(lVar2 + 0x6a) < '\0') {
        Scaleform::GFx::DisplayObject::GetName(lVar2,&local_res8);
        if (*(int *)(local_res8 + 0x20) != 0) {
          (**(code **)(*param_2 + 8))(param_2,&local_res8,lVar2);
        }
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1433d5fd0 FUN_1433d5fd0 body=550 status=ok
// SIG undefined FUN_1433d5fd0(void)

float * FUN_1433d5fd0(longlong *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  
  lVar6 = param_1[1];
  lVar5 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    plVar2 = *(longlong **)(lVar5 + *param_1);
    if (plVar2 != (longlong *)0x0) {
      local_78 = *param_3;
      lStack_70 = param_3[1];
      local_68 = *(float *)(param_3 + 2);
      fStack_64 = *(float *)((longlong)param_3 + 0x14);
      uStack_60._0_4_ = *(undefined4 *)(param_3 + 3);
      uStack_60._4_4_ = *(float *)((longlong)param_3 + 0x1c);
      pfVar4 = (float *)(**(code **)(*plVar2 + 0x10))(plVar2);
      fVar1 = fStack_64;
      fVar9 = local_68;
      fVar10 = (float)local_78;
      fVar7 = local_78._4_4_;
      local_78 = CONCAT44((float)local_78 * pfVar4[1] + local_78._4_4_ * pfVar4[5],
                          (float)local_78 * *pfVar4 + local_78._4_4_ * pfVar4[4]);
      _local_68 = CONCAT44(local_68 * pfVar4[1] + fStack_64 * pfVar4[5],
                           local_68 * *pfVar4 + fStack_64 * pfVar4[4]);
      lStack_70 = (ulonglong)
                  (uint)((float)((ulonglong)lStack_70 >> 0x20) +
                        fVar10 * pfVar4[3] + fVar7 * pfVar4[7]) << 0x20;
      uStack_60 = (ulonglong)(uint)(uStack_60._4_4_ + fVar9 * pfVar4[3] + fVar1 * pfVar4[7]) << 0x20
      ;
      pfVar4 = (float *)(**(code **)(*plVar2 + 0x1f0))(plVar2,local_88,&local_78);
      fVar10 = *pfVar4;
      fVar7 = pfVar4[2];
      fVar9 = pfVar4[1];
      fVar1 = pfVar4[3];
      if ((fVar10 < fVar7) && (fVar9 < fVar1)) {
        cVar3 = Scaleform::Render::Rect<float>::IsEmpty(param_2);
        if (cVar3 == '\0') {
          fVar8 = param_2[2];
          if (param_2[2] <= fVar7) {
            fVar8 = fVar7;
          }
          if (*param_2 <= fVar10) {
            fVar10 = *param_2;
          }
          if (param_2[1] <= fVar9) {
            fVar9 = param_2[1];
          }
          fVar7 = param_2[3];
          if (param_2[3] <= fVar1) {
            fVar7 = fVar1;
          }
          param_2[2] = fVar8;
          param_2[3] = fVar7;
        }
        else {
          param_2[2] = fVar7;
          param_2[3] = fVar1;
        }
        param_2[1] = fVar9;
        *param_2 = fVar10;
      }
    }
    lVar5 = lVar5 + 0x10;
  }
  return param_2;
}



// FUNCTION 1433d6200 FUN_1433d6200 body=550 status=ok
// SIG undefined FUN_1433d6200(void)

float * FUN_1433d6200(longlong *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  
  lVar6 = param_1[1];
  lVar5 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    plVar2 = *(longlong **)(lVar5 + *param_1);
    if (plVar2 != (longlong *)0x0) {
      local_78 = *param_3;
      lStack_70 = param_3[1];
      local_68 = *(float *)(param_3 + 2);
      fStack_64 = *(float *)((longlong)param_3 + 0x14);
      uStack_60._0_4_ = *(undefined4 *)(param_3 + 3);
      uStack_60._4_4_ = *(float *)((longlong)param_3 + 0x1c);
      pfVar4 = (float *)(**(code **)(*plVar2 + 0x10))(plVar2);
      fVar1 = fStack_64;
      fVar9 = local_68;
      fVar10 = (float)local_78;
      fVar7 = local_78._4_4_;
      local_78 = CONCAT44((float)local_78 * pfVar4[1] + local_78._4_4_ * pfVar4[5],
                          (float)local_78 * *pfVar4 + local_78._4_4_ * pfVar4[4]);
      _local_68 = CONCAT44(local_68 * pfVar4[1] + fStack_64 * pfVar4[5],
                           local_68 * *pfVar4 + fStack_64 * pfVar4[4]);
      lStack_70 = (ulonglong)
                  (uint)((float)((ulonglong)lStack_70 >> 0x20) +
                        fVar10 * pfVar4[3] + fVar7 * pfVar4[7]) << 0x20;
      uStack_60 = (ulonglong)(uint)(uStack_60._4_4_ + fVar9 * pfVar4[3] + fVar1 * pfVar4[7]) << 0x20
      ;
      pfVar4 = (float *)(**(code **)(*plVar2 + 0x1f8))(plVar2,local_88,&local_78);
      fVar10 = *pfVar4;
      fVar7 = pfVar4[2];
      fVar9 = pfVar4[1];
      fVar1 = pfVar4[3];
      if ((fVar10 < fVar7) && (fVar9 < fVar1)) {
        cVar3 = Scaleform::Render::Rect<float>::IsEmpty(param_2);
        if (cVar3 == '\0') {
          fVar8 = param_2[2];
          if (param_2[2] <= fVar7) {
            fVar8 = fVar7;
          }
          if (*param_2 <= fVar10) {
            fVar10 = *param_2;
          }
          if (param_2[1] <= fVar9) {
            fVar9 = param_2[1];
          }
          fVar7 = param_2[3];
          if (param_2[3] <= fVar1) {
            fVar7 = fVar1;
          }
          param_2[2] = fVar8;
          param_2[3] = fVar7;
        }
        else {
          param_2[2] = fVar7;
          param_2[3] = fVar1;
        }
        param_2[1] = fVar9;
        *param_2 = fVar10;
      }
    }
    lVar5 = lVar5 + 0x10;
  }
  return param_2;
}



// FUNCTION 1433d6430 FUN_1433d6430 body=158 status=ok
// SIG undefined FUN_1433d6430(void)

void FUN_1433d6430(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  RefCountNTSImpl *this;
  longlong lVar2;
  longlong lVar3;
  
  this = (RefCountNTSImpl *)*param_1;
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  lVar3 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar2 = *param_2;
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  if ((RefCountNTSImpl *)*param_2 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_2);
  }
  *param_2 = (longlong)this;
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  *(int *)(param_2 + 1) = (int)lVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1433d64d0 FUN_1433d64d0 body=59 status=ok
// SIG undefined FUN_1433d64d0(void)

undefined8 FUN_1433d64d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd1e0();
  if ((*(byte *)(lVar1 + 0x90) & 1) != 0) {
    return *(undefined8 *)((*(ulonglong *)(lVar1 + 0x90) & 0xfffffffffffffffe) + 0x10 + param_2 * 8)
    ;
  }
  return *(undefined8 *)(lVar1 + 0x90 + param_2 * 8);
}



// FUNCTION 1433d6510 FUN_1433d6510 body=215 status=ok
// SIG undefined FUN_1433d6510(void)

void FUN_1433d6510(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = param_1[1];
  uVar1 = uVar2 + 1;
  FUN_1433a65a0(param_1,param_1,uVar1);
  if (uVar2 < uVar1) {
    puVar3 = (undefined8 *)(uVar2 * 0x10 + *param_1);
    for (lVar5 = uVar1 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0xffffffffffffffff;
      }
      puVar3 = puVar3 + 2;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(param_2 * 0x10 + *param_1);
    memmove((void *)((longlong)_Src + 0x10),_Src,(param_1[1] - param_2) * 0x10 - 0x10);
  }
  plVar4 = (longlong *)(param_2 * 0x10 + *param_1);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    lVar5 = *param_3;
    *plVar4 = lVar5;
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    *(int *)(plVar4 + 1) = (int)param_3[1];
    *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  }
  return;
}



// FUNCTION 1433d65f0 IsEmpty body=27 status=ok
// SIG undefined IsEmpty(void)

undefined1 Scaleform::Render::Rect<float>::IsEmpty(float *param_1)

{
  if ((*param_1 < param_1[2]) && (param_1[1] < param_1[3])) {
    return 0;
  }
  return 1;
}



// FUNCTION 1433d6610 FUN_1433d6610 body=124 status=ok
// SIG undefined FUN_1433d6610(void)

void FUN_1433d6610(longlong *param_1,longlong param_2)

{
  RefCountNTSImpl *this;
  void *_Dst;
  
  if (param_1[1] == 1) {
    FUN_1433a65a0(param_1,param_1,0);
    return;
  }
  this = *(RefCountNTSImpl **)(param_2 * 0x10 + *param_1);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  _Dst = (void *)(*param_1 + param_2 * 0x10);
  memmove(_Dst,(void *)((longlong)_Dst + 0x10),(param_1[1] - param_2) * 0x10 - 0x10);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1433d6690 FUN_1433d6690 body=134 status=ok
// SIG undefined FUN_1433d6690(void)

void FUN_1433d6690(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1433d66d7;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1433d66d7;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432cfd30(param_1,param_1,uVar4);
LAB_1433d66d7:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(*param_1 + uVar1 * 8);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0xffffffffffffffff;
      }
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



// FUNCTION 1433d6720 FUN_1433d6720 body=139 status=ok
// SIG undefined FUN_1433d6720(void)

void FUN_1433d6720(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    *(ulonglong *)(*param_1 + param_2 * 8) = CONCAT44(param_4,param_3);
    return;
  }
  uVar1 = uVar3 + 1;
  if (uVar1 < uVar3) {
    uVar4 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1433d6785;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1433d6785;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432cfd30(param_1,param_1,uVar4);
LAB_1433d6785:
  param_1[1] = uVar1;
  puVar2 = (undefined8 *)(*param_1 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = CONCAT44(param_4,param_3);
  }
  return;
}



// FUNCTION 1433d67b0 GetWorldPoint body=46 status=ok
// SIG undefined GetWorldPoint(void)

void Scaleform::Render::ScreenToWorld::GetWorldPoint(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_1433d67f0(param_1,&local_18);
  *param_2 = local_18;
  param_2[1] = local_14;
  return;
}



// FUNCTION 1433d67f0 FUN_1433d67f0 body=1235 status=ok
// SIG undefined FUN_1433d67f0(void)

void FUN_1433d67f0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  if ((*param_1 != 3.4028235e+38) && (param_1[1] != 3.4028235e+38)) {
    puVar11 = (undefined8 *)FUN_1433d6f10(param_1 + 4,&local_128);
    pfVar1 = param_1 + 0x2c;
    uVar10 = puVar11[1];
    *(undefined8 *)pfVar1 = *puVar11;
    *(undefined8 *)(param_1 + 0x2e) = uVar10;
    uVar10 = puVar11[3];
    *(undefined8 *)(param_1 + 0x30) = puVar11[2];
    *(undefined8 *)(param_1 + 0x32) = uVar10;
    uVar10 = puVar11[5];
    *(undefined8 *)(param_1 + 0x34) = puVar11[4];
    *(undefined8 *)(param_1 + 0x36) = uVar10;
    uVar10 = puVar11[7];
    *(undefined8 *)(param_1 + 0x38) = puVar11[6];
    *(undefined8 *)(param_1 + 0x3a) = uVar10;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              ((Matrix3x4<float> *)&local_168,(Matrix3x4<float> *)(param_1 + 0x14),
               (Matrix3x4<float> *)(param_1 + 0x20));
    local_128 = local_168;
    uStack_120 = uStack_160;
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0x3f800000;
    puVar11 = (undefined8 *)FUN_1433d6f10(&local_168,&local_128);
    fVar13 = param_1[0xe];
    local_d8 = *puVar11;
    uStack_d0 = puVar11[1];
    fVar2 = *(float *)(puVar11 + 2);
    fVar3 = *(float *)((longlong)puVar11 + 0x14);
    fVar4 = *(float *)(puVar11 + 3);
    fVar5 = *(float *)((longlong)puVar11 + 0x1c);
    fVar6 = *(float *)(puVar11 + 4);
    fVar7 = *(float *)((longlong)puVar11 + 0x24);
    fVar8 = *(float *)(puVar11 + 5);
    fVar9 = *(float *)((longlong)puVar11 + 0x2c);
    fVar12 = param_1[1];
    fVar14 = *param_1;
    fVar18 = param_1[0xd] * 0.0 + param_1[0xc] * 0.0;
    fVar16 = param_1[0xf];
    fVar17 = param_1[0x11] * 0.0 + param_1[0x10] * 0.0;
    fVar15 = (fVar17 - param_1[0x12] * 0.5) + param_1[0x13];
    fVar17 = (fVar17 - param_1[0x12] * 100.0) + param_1[0x13];
    FUN_1433d6cd0(param_1,&local_178,pfVar1,fVar14 * fVar15,fVar12 * fVar15,
                  fVar15 * ((fVar18 - fVar13 * 0.5) + param_1[0xf]),fVar15);
    FUN_1433d6cd0(param_1,&local_188,pfVar1,fVar14 * fVar17,fVar12 * fVar17,
                  fVar17 * ((fVar18 - fVar13 * 100.0) + fVar16),fVar17);
    local_178 = local_178 * local_16c;
    local_174 = local_174 * local_16c;
    local_170 = local_170 * local_16c;
    local_188 = local_188 * fStack_17c;
    fStack_184 = fStack_184 * fStack_17c;
    fStack_180 = fStack_180 * fStack_17c;
    fVar13 = (float)local_d8 * local_178 + local_d8._4_4_ * local_174 + (float)uStack_d0 * local_170
             + uStack_d0._4_4_;
    fVar12 = fVar3 * local_174 + fVar2 * local_178 + fVar4 * local_170 + fVar5;
    fVar15 = fVar6 * local_178 + fVar7 * local_174 + fVar8 * local_170 + fVar9;
    fVar16 = (fVar7 * fStack_184 + fVar6 * local_188 + fVar8 * fStack_180 + fVar9) - fVar15;
    fVar14 = 0.0;
    if (fVar16 != 0.0) {
      fVar14 = -(fVar15 / fVar16);
    }
    fVar13 = fVar14 * (((float)local_d8 * local_188 + local_d8._4_4_ * fStack_184 +
                        (float)uStack_d0 * fStack_180 + uStack_d0._4_4_) - fVar13) + fVar13;
    fVar12 = fVar14 * ((fVar3 * fStack_184 + fVar2 * local_188 + fVar4 * fStack_180 + fVar5) -
                      fVar12) + fVar12;
    *param_2 = fVar13;
    param_1[2] = fVar13;
    param_2[1] = fVar12;
    param_1[3] = fVar12;
    param_2[2] = fVar14 * fVar16 + fVar15;
  }
  return;
}



// FUNCTION 1433d6cd0 FUN_1433d6cd0 body=243 status=ok
// SIG undefined FUN_1433d6cd0(void)

void FUN_1433d6cd0(undefined8 param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  *param_2 = param_5 * param_3[1] + param_4 * *param_3 + param_6 * param_3[2] + param_7 * param_3[3]
  ;
  param_2[1] = param_4 * param_3[4] + param_5 * param_3[5] + param_6 * param_3[6] +
               param_7 * param_3[7];
  param_2[2] = param_4 * param_3[8] + param_5 * param_3[9] + param_6 * param_3[10] +
               param_7 * param_3[0xb];
  param_2[3] = param_4 * param_3[0xc] + param_5 * param_3[0xd] + param_6 * param_3[0xe] +
               param_7 * param_3[0xf];
  return;
}



// FUNCTION 1433d6f10 FUN_1433d6f10 body=1740 status=ok
// SIG undefined FUN_1433d6f10(void)

float * FUN_1433d6f10(float *param_1,float *param_2)

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
  ulonglong uStack_e0;
  ulonglong uStack_d0;
  undefined8 uStack_c0;
  
  fVar20 = param_1[8];
  fVar22 = param_1[0xf];
  fVar1 = param_1[6];
  fVar2 = *param_1;
  fVar3 = param_1[7];
  fVar25 = param_1[0xc];
  fVar29 = param_1[9];
  fVar4 = param_1[3];
  fVar32 = param_1[0xd];
  fVar38 = param_1[10];
  fVar24 = param_1[0xb];
  fVar19 = fVar32 * fVar20 - fVar25 * fVar29;
  fVar36 = param_1[0xe] * fVar20 - fVar25 * fVar38;
  fVar37 = fVar22 * fVar20 - fVar25 * fVar24;
  fVar34 = param_1[0xe] * fVar29 - fVar32 * fVar38;
  fVar29 = fVar22 * fVar29 - fVar32 * fVar24;
  fVar32 = fVar22 * fVar38 - param_1[0xe] * fVar24;
  fVar22 = (fVar32 * param_1[5] - fVar29 * fVar1) + fVar34 * fVar3;
  fVar38 = -((fVar32 * param_1[4] - fVar37 * fVar1) + fVar36 * fVar3);
  fVar25 = (fVar29 * param_1[4] - fVar37 * param_1[5]) + fVar19 * fVar3;
  fVar39 = -((fVar34 * param_1[4] - fVar36 * param_1[5]) + fVar19 * param_1[6]);
  fVar20 = fVar38 * param_1[1] + fVar22 * *param_1 + fVar25 * param_1[2] + fVar39 * fVar4;
  if (fVar20 == 0.0) {
    uStack_e0 = (ulonglong)(uint)fVar4 << 0x20 ^ 0x8000000000000000;
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    *(ulonglong *)(param_2 + 2) = uStack_e0;
    uStack_d0 = (ulonglong)(uint)fVar3 << 0x20 ^ 0x8000000000000000;
    param_2[4] = 0.0;
    param_2[5] = 1.0;
    *(ulonglong *)(param_2 + 6) = uStack_d0;
    uStack_c0 = CONCAT44(-fVar24,0x3f800000);
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    *(undefined8 *)(param_2 + 10) = uStack_c0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 1.0;
  }
  else {
    fVar5 = *param_1;
    fVar6 = param_1[2];
    fVar7 = param_1[1];
    fVar20 = 1.0 / fVar20;
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    fVar27 = param_1[0xf];
    fVar10 = param_1[4];
    fVar11 = param_1[0xc];
    fVar26 = param_1[0xd] * fVar10 - fVar11 * param_1[5];
    fVar21 = fVar27 * fVar10 - fVar11 * fVar3;
    fVar23 = param_1[0xe] * fVar10 - fVar11 * param_1[6];
    fVar35 = param_1[0xe] * param_1[5] - param_1[0xd] * param_1[6];
    fVar33 = fVar27 * param_1[5] - param_1[0xd] * fVar3;
    fVar18 = fVar27 * fVar1 - param_1[0xe] * fVar3;
    fVar1 = param_1[2];
    fVar27 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = param_1[1];
    fVar12 = *param_1;
    fVar13 = *param_1;
    param_2[1] = -(((fVar32 * param_1[1] - fVar29 * param_1[2]) + fVar34 * fVar4) * fVar20);
    fVar14 = param_1[3];
    fVar15 = param_1[5];
    fVar16 = param_1[1];
    param_2[2] = ((fVar18 * fVar27 - fVar33 * fVar1) + fVar35 * fVar4) * fVar20;
    fVar1 = param_1[8];
    fVar27 = param_1[4];
    fVar17 = param_1[2];
    fVar31 = param_1[9] * fVar27 - fVar1 * fVar15;
    fVar30 = param_1[10] * fVar27 - fVar1 * param_1[6];
    fVar27 = fVar24 * fVar27 - fVar1 * fVar3;
    fVar28 = param_1[10] * fVar15 - param_1[9] * param_1[6];
    fVar40 = fVar24 * param_1[6] - param_1[10] * param_1[7];
    fVar24 = fVar24 * fVar15 - param_1[9] * param_1[7];
    *param_2 = fVar20 * fVar22;
    fVar22 = param_1[1];
    fVar1 = param_1[2];
    param_2[4] = fVar20 * fVar38;
    param_2[5] = ((fVar32 * fVar5 - fVar37 * fVar6) + fVar36 * fVar4) * fVar20;
    param_2[3] = -(((fVar40 * fVar22 - fVar24 * fVar1) + fVar28 * fVar14) * fVar20);
    fVar22 = *param_1;
    fVar1 = param_1[2];
    fVar3 = param_1[1];
    param_2[6] = -(((fVar18 * fVar2 - fVar21 * fVar10) + fVar23 * fVar4) * fVar20);
    fVar2 = param_1[1];
    param_2[10] = ((fVar33 * fVar13 - fVar21 * fVar11) + fVar26 * fVar4) * fVar20;
    param_2[0xe] = -(((fVar35 * fVar12 - fVar23 * fVar16) + fVar26 * fVar17) * fVar20);
    param_2[8] = fVar20 * fVar25;
    fVar25 = param_1[2];
    param_2[9] = -(((fVar29 * fVar5 - fVar37 * fVar7) + fVar19 * fVar4) * fVar20);
    param_2[7] = ((fVar40 * fVar22 - fVar27 * fVar1) + fVar30 * fVar14) * fVar20;
    param_2[0xc] = fVar20 * fVar39;
    param_2[0xb] = -(((fVar24 * fVar22 - fVar27 * fVar3) + fVar31 * fVar14) * fVar20);
    param_2[0xd] = ((fVar34 * fVar5 - fVar36 * fVar8) + fVar19 * fVar9) * fVar20;
    param_2[0xf] = ((fVar28 * fVar22 - fVar30 * fVar2) + fVar31 * fVar25) * fVar20;
  }
  return param_2;
}



// FUNCTION 1433d75e0 FUN_1433d75e0 body=163 status=ok
// SIG undefined FUN_1433d75e0(void)

uint FUN_1433d75e0(uint param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,
                  undefined4 param_9)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = param_7;
  uVar3 = param_2;
  if (param_7 < param_3) {
    fVar2 = param_3;
    param_3 = param_7;
    uVar3 = param_6;
    param_6 = param_2;
  }
  cVar1 = FUN_1433d8200(uVar3,param_3,param_4,param_5,param_6,fVar2,param_8,param_9);
  if (cVar1 != '\0') {
    param_1 = param_1 ^ 1;
  }
  return param_1;
}



// FUNCTION 1433d7690 FUN_1433d7690 body=499 status=ok
// SIG undefined FUN_1433d7690(void)

uint FUN_1433d7690(uint param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  longlong *local_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined1 local_270 [512];
  undefined1 *local_70;
  
  local_288 = DAT_146b62f28;
  local_70 = local_270;
  local_280 = 0;
  local_278 = 0x20;
  FUN_1433d8470(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_288);
  puVar3 = local_70;
  if ((int)local_280 != 0) {
    puVar6 = (undefined4 *)(local_70 + 8);
    uVar5 = local_280 & 0xffffffff;
    do {
      fVar1 = (float)puVar6[1];
      uVar2 = *puVar6;
      uVar7 = uVar2;
      fVar8 = fVar1;
      if (fVar1 < param_3) {
        uVar7 = param_2;
        fVar8 = param_3;
        param_3 = fVar1;
        param_2 = uVar2;
      }
      cVar4 = FUN_1433d8200(param_2,param_3,puVar6[-2],puVar6[-1],uVar7,fVar8,param_10,param_11);
      if (cVar4 != '\0') {
        param_1 = param_1 ^ 1;
      }
      puVar6 = puVar6 + 4;
      uVar5 = uVar5 - 1;
      param_3 = fVar1;
      param_2 = uVar2;
    } while (uVar5 != 0);
  }
  if (puVar3 != local_270) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar3);
  }
  return param_1;
}



// FUNCTION 1433d7890 FUN_1433d7890 body=659 status=ok
// SIG undefined FUN_1433d7890(void)

undefined8 FUN_1433d7890(longlong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar8 = *(ulonglong *)(param_1 + 0x38);
  uVar10 = 0;
  param_2 = param_2 * 0.5;
  if (uVar8 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    uVar11 = uVar10;
    while( true ) {
      uVar7 = (ulonglong)((uint)uVar11 & 3);
      lVar6 = *(longlong *)(lVar6 + (uVar11 >> 2) * 8);
      uVar3 = *(uint *)(lVar6 + 4 + uVar7 * 8);
      if (1 < uVar3) {
        iVar4 = *(int *)(lVar6 + uVar7 * 8);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar9 = iVar4 + 1;
        do {
          uVar7 = (ulonglong)(uVar9 - 1 & 0xf);
          lVar5 = *(longlong *)(lVar6 + (ulonglong)(uVar9 - 1 >> 4) * 8);
          fVar12 = *(float *)(lVar5 + uVar7 * 8);
          fVar13 = *(float *)(lVar5 + 4 + uVar7 * 8);
          lVar5 = *(longlong *)(lVar6 + (ulonglong)(uVar9 >> 4) * 8);
          fVar1 = *(float *)(lVar5 + (ulonglong)(uVar9 & 0xf) * 8);
          fVar2 = *(float *)(lVar5 + 4 + (ulonglong)(uVar9 & 0xf) * 8);
          fVar14 = fVar13 + (fVar1 - fVar12);
          fVar15 = fVar12 - (fVar2 - fVar13);
          fVar16 = fVar1 - (fVar2 - fVar13);
          fVar17 = fVar2 + (fVar1 - fVar12);
          if (((0.0 <= (fVar14 - fVar13) * (param_3 - fVar15) -
                       (fVar15 - fVar12) * (param_4 - fVar14)) &&
              ((fVar17 - fVar2) * (param_3 - fVar16) - (fVar16 - fVar1) * (param_4 - fVar17) <= 0.0)
              ) && (FUN_143343950(fVar12,fVar13,fVar1,fVar2,param_3,param_4),
                   ABS(extraout_XMM0_Da) <= param_2)) {
            return 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 - iVar4 < uVar3);
      }
      uVar11 = (ulonglong)((uint)uVar11 + 1);
      if (uVar8 <= uVar11) break;
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
  }
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    do {
      uVar8 = (ulonglong)((uint)uVar10 & 0xf);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar10 >> 4) * 8);
      fVar12 = param_4 - *(float *)(lVar6 + 4 + uVar8 * 8);
      fVar13 = param_3 - *(float *)(lVar6 + uVar8 * 8);
      if (fVar12 * fVar12 + fVar13 * fVar13 <= param_2 * param_2) {
        return 1;
      }
      uVar10 = (ulonglong)((uint)uVar10 + 1);
    } while (uVar10 < *(ulonglong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 1433d7b30 FUN_1433d7b30 body=1102 status=ok
// SIG undefined FUN_1433d7b30(void)

bool FUN_1433d7b30(longlong param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res20;
  float fStackX_24;
  float local_78;
  float fStack_74;
  
  iVar9 = 0;
  uVar15 = 0;
  if (*(ulonglong *)(param_1 + 0x38) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x50);
    uVar10 = 0;
    do {
      uVar6 = 1;
      uVar11 = (ulonglong)((uint)uVar10 & 3);
      lVar12 = *(longlong *)(lVar12 + (uVar10 >> 2) * 8);
      uVar2 = *(uint *)(lVar12 + 4 + uVar11 * 8);
      if (1 < uVar2) {
        if (3 < uVar2 - 1) {
          lVar3 = *(longlong *)(param_1 + 0x28);
          uVar14 = *(int *)(lVar12 + uVar11 * 8) + 1;
          uVar6 = (uVar2 - 5 >> 2) + 1;
          uVar10 = (ulonglong)uVar6;
          uVar6 = uVar6 * 4 + 1;
          do {
            uVar13 = (ulonglong)(uVar14 & 0xf);
            uVar8 = (ulonglong)(uVar14 - 1 & 0xf);
            lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar14 - 1 >> 4) * 8);
            fVar18 = *(float *)(lVar4 + 4 + uVar8 * 8);
            fVar19 = *(float *)(lVar4 + uVar8 * 8);
            lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar14 >> 4) * 8);
            uVar1 = *(undefined8 *)(lVar5 + uVar13 * 8);
            fStackX_24 = (float)((ulonglong)uVar1 >> 0x20);
            if (fVar18 != fStackX_24) {
              iVar7 = 1;
              local_res20 = (float)uVar1;
              fStack_74 = fStackX_24;
              local_78 = local_res20;
              if (fStackX_24 < fVar18) {
                uVar1 = *(undefined8 *)(lVar4 + uVar8 * 8);
                iVar7 = -1;
                local_78 = (float)uVar1;
                fStack_74 = (float)((ulonglong)uVar1 >> 0x20);
                fVar18 = fStackX_24;
                fVar19 = local_res20;
              }
              if (((fVar18 <= param_3) && (param_3 < fStack_74)) &&
                 (0.0 < (fStack_74 - fVar18) * (param_2 - local_78) -
                        (local_78 - fVar19) * (param_3 - fStack_74))) {
                iVar9 = iVar9 + iVar7;
              }
            }
            fVar18 = *(float *)(lVar5 + 4 + uVar13 * 8);
            fVar19 = *(float *)(lVar5 + uVar13 * 8);
            uVar8 = (ulonglong)(uVar14 + 1 & 0xf);
            lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar14 + 1 >> 4) * 8);
            uVar1 = *(undefined8 *)(lVar4 + uVar8 * 8);
            fStackX_24 = (float)((ulonglong)uVar1 >> 0x20);
            if (fVar18 != fStackX_24) {
              iVar7 = 1;
              local_res20 = (float)uVar1;
              fVar16 = fStackX_24;
              fVar17 = local_res20;
              if (fStackX_24 < fVar18) {
                iVar7 = -1;
                fVar16 = fVar18;
                fVar17 = fVar19;
                fVar18 = fStackX_24;
                fVar19 = local_res20;
              }
              if (((fVar18 <= param_3) && (param_3 < fVar16)) &&
                 (0.0 < (fVar16 - fVar18) * (param_2 - fVar17) -
                        (fVar17 - fVar19) * (param_3 - fVar16))) {
                iVar9 = iVar9 + iVar7;
              }
            }
            fVar18 = *(float *)(lVar4 + 4 + uVar8 * 8);
            fVar19 = *(float *)(lVar4 + uVar8 * 8);
            uVar8 = (ulonglong)(uVar14 + 2 & 0xf);
            lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar14 + 2 >> 4) * 8);
            uVar1 = *(undefined8 *)(lVar4 + uVar8 * 8);
            fStackX_24 = (float)((ulonglong)uVar1 >> 0x20);
            if (fVar18 != fStackX_24) {
              iVar7 = 1;
              local_res20 = (float)uVar1;
              fVar16 = fStackX_24;
              fVar17 = local_res20;
              if (fStackX_24 < fVar18) {
                iVar7 = -1;
                fVar16 = fVar18;
                fVar17 = fVar19;
                fVar18 = fStackX_24;
                fVar19 = local_res20;
              }
              if (((fVar18 <= param_3) && (param_3 < fVar16)) &&
                 (0.0 < (fVar16 - fVar18) * (param_2 - fVar17) -
                        (fVar17 - fVar19) * (param_3 - fVar16))) {
                iVar9 = iVar9 + iVar7;
              }
            }
            fVar18 = *(float *)(lVar4 + 4 + uVar8 * 8);
            fVar19 = *(float *)(lVar4 + uVar8 * 8);
            uVar1 = *(undefined8 *)
                     (*(longlong *)(lVar3 + (ulonglong)(uVar14 + 3 >> 4) * 8) +
                     (ulonglong)(uVar14 + 3 & 0xf) * 8);
            fStackX_24 = (float)((ulonglong)uVar1 >> 0x20);
            if (fVar18 != fStackX_24) {
              iVar7 = 1;
              local_res20 = (float)uVar1;
              fVar16 = fStackX_24;
              fVar17 = local_res20;
              if (fStackX_24 < fVar18) {
                iVar7 = -1;
                fVar16 = fVar18;
                fVar17 = fVar19;
                fVar18 = fStackX_24;
                fVar19 = local_res20;
              }
              if (((fVar18 <= param_3) && (param_3 < fVar16)) &&
                 (0.0 < (fVar16 - fVar18) * (param_2 - fVar17) -
                        (fVar17 - fVar19) * (param_3 - fVar16))) {
                iVar9 = iVar9 + iVar7;
              }
            }
            uVar14 = uVar14 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar6 < uVar2) {
          uVar14 = *(int *)(lVar12 + uVar11 * 8) + uVar6;
          uVar10 = (ulonglong)(uVar2 - uVar6);
          do {
            uVar11 = (ulonglong)(uVar14 - 1 & 0xf);
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 - 1 >> 4) * 8)
            ;
            fVar18 = *(float *)(lVar12 + 4 + uVar11 * 8);
            fVar19 = *(float *)(lVar12 + uVar11 * 8);
            uVar1 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar14 >> 4) * 8) +
                     (ulonglong)(uVar14 & 0xf) * 8);
            fStackX_24 = (float)((ulonglong)uVar1 >> 0x20);
            if (fVar18 != fStackX_24) {
              iVar7 = 1;
              local_res20 = (float)uVar1;
              fStack_74 = fStackX_24;
              local_78 = local_res20;
              if (fStackX_24 < fVar18) {
                uVar1 = *(undefined8 *)(lVar12 + uVar11 * 8);
                iVar7 = -1;
                local_78 = (float)uVar1;
                fStack_74 = (float)((ulonglong)uVar1 >> 0x20);
                fVar18 = fStackX_24;
                fVar19 = local_res20;
              }
              if (((fVar18 <= param_3) && (param_3 < fStack_74)) &&
                 (0.0 < (fStack_74 - fVar18) * (param_2 - local_78) -
                        (local_78 - fVar19) * (param_3 - fStack_74))) {
                iVar9 = iVar9 + iVar7;
              }
            }
            uVar14 = uVar14 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar15 = uVar15 + 1;
      uVar10 = (ulonglong)uVar15;
      lVar12 = *(longlong *)(param_1 + 0x50);
    } while (uVar10 < *(ulonglong *)(param_1 + 0x38));
  }
  return iVar9 != 0;
}



// FUNCTION 1433d7f90 FUN_1433d7f90 body=608 status=ok
// SIG undefined FUN_1433d7f90(void)

bool FUN_1433d7f90(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar3 = false;
  if ((param_2 <= param_8) && (param_8 < param_6)) {
    bVar3 = 0.0 < (param_4 - param_2) * (param_7 - param_3) -
                  (param_8 - param_4) * (param_3 - param_1);
    fVar5 = param_6 - param_2;
    bVar1 = 0.0 < (param_6 - param_4) * (param_7 - param_5) -
                  (param_8 - param_6) * (param_5 - param_3);
    bVar2 = 0.0 < fVar5 * (param_7 - param_5) - (param_5 - param_1) * (param_8 - param_6);
    if (bVar3 && (bVar2 && bVar1)) {
      bVar3 = true;
    }
    else if (bVar3 || (bVar2 || bVar1)) {
      fVar4 = -1.0;
      fVar6 = (param_2 - (param_4 + param_4)) + param_6;
      if (fVar6 == 0.0) {
        if (fVar5 != 0.0) {
          fVar4 = (param_8 - param_2) / fVar5;
        }
      }
      else {
        fVar5 = ((param_4 * param_4 - (param_6 - param_8) * param_2) - (param_8 + param_8) * param_4
                ) + param_6 * param_8;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
        }
        fVar4 = ((fVar5 + param_2) - param_4) / fVar6;
      }
      param_1 = (param_3 - param_1) * fVar4 + param_1;
      bVar3 = (((param_5 - param_3) * fVar4 + param_3) - param_1) * fVar4 + param_1 < param_7;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



// FUNCTION 1433d8200 FUN_1433d8200 body=620 status=ok
// SIG undefined FUN_1433d8200(void)

undefined1
FUN_1433d8200(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10;
  
  if ((param_4 < param_2) || (param_6 < param_4)) {
    fVar5 = ((param_4 + param_4) - param_2) - param_6;
    if (fVar5 == 0.0) {
      fVar5 = -1.0;
    }
    else {
      fVar5 = (param_4 - param_2) / fVar5;
    }
    fVar8 = (param_3 - param_1) * fVar5 + param_1;
    param_3 = (param_5 - param_3) * fVar5 + param_3;
    fVar9 = (param_4 - param_2) * fVar5 + param_2;
    param_4 = (param_6 - param_4) * fVar5 + param_4;
    fVar6 = (param_3 - fVar8) * fVar5 + fVar8;
    fVar5 = (param_4 - fVar9) * fVar5 + fVar9;
    fVar10 = param_1;
    fVar11 = param_2;
    fVar12 = fVar6;
    local_res10 = fVar5;
    if (fVar5 < param_2) {
      fVar10 = fVar6;
      fVar11 = fVar5;
      fVar12 = param_1;
      local_res10 = param_2;
    }
    fVar4 = fVar6;
    fVar7 = param_6;
    if (param_6 < fVar5) {
      fVar4 = param_5;
      param_5 = fVar6;
      fVar7 = fVar5;
      fVar5 = param_6;
    }
    cVar2 = FUN_1433d7f90(fVar4,fVar5,param_3,param_4,param_5,fVar7,param_7,param_8);
    cVar3 = FUN_1433d7f90(fVar10,fVar11,fVar8,fVar9,fVar12,local_res10,param_7,param_8);
    uVar1 = cVar3 != cVar2;
  }
  else {
    uVar1 = FUN_1433d7f90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar1;
}



// FUNCTION 1433d8470 FUN_1433d8470 body=927 status=ok
// SIG undefined FUN_1433d8470(void)

void FUN_1433d8470(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [200];
  
  fVar9 = -1.0;
  fVar10 = param_3 * 3.0 - param_1 * 3.0;
  fVar12 = ((param_3 * 3.0 - param_1) - param_5 * 3.0) + param_7;
  fVar13 = ((param_4 * 3.0 - param_2) - param_6 * 3.0) + param_8;
  fVar7 = (param_1 * 3.0 - param_3 * 6.0) + param_5 * 3.0;
  fVar11 = param_4 * 3.0 - param_2 * 3.0;
  fVar6 = (param_2 * 3.0 - param_4 * 6.0) + param_6 * 3.0;
  fVar8 = -1.0;
  fVar5 = fVar7 * fVar13 - fVar6 * fVar12;
  if (fVar5 != 0.0) {
    fVar12 = ((fVar10 * fVar13 - fVar11 * fVar12) * -0.5) / fVar5;
    fVar8 = _guard_xfg_dispatch_icall_nop
                      (fVar12 * fVar12 - (fVar10 * fVar6 - fVar11 * fVar7) / (fVar5 * 3.0));
    fVar9 = fVar12 - fVar8;
    fVar8 = fVar8 + fVar12;
  }
  lVar3 = 1;
  local_138 = param_5;
  fStack_134 = param_6;
  fStack_130 = param_7;
  fStack_12c = param_8;
  if ((fVar8 <= 0.0) || (iVar2 = 2, 1.0 <= fVar8)) {
    iVar2 = 0;
  }
  iVar1 = 0;
  if ((0.0 < fVar9) && (iVar1 = 0, fVar9 < 1.0)) {
    iVar1 = 1;
  }
  iVar2 = iVar2 + iVar1;
  local_148 = param_1;
  fStack_144 = param_2;
  fStack_140 = param_3;
  fStack_13c = param_4;
  if (iVar2 == 0) {
    local_128 = CONCAT44(param_2,param_1);
    uStack_120 = CONCAT44(param_4,param_3);
    local_118 = CONCAT44(param_6,param_5);
    uStack_110 = CONCAT44(param_8,param_7);
  }
  else if (iVar2 == 1) {
    FUN_1433d8810(&local_148,fVar9,&local_128,local_108);
    lVar3 = 2;
  }
  else if (iVar2 == 2) {
    FUN_1433d8810(&local_148,fVar8,&local_128,local_108);
    lVar3 = 2;
  }
  else if (iVar2 == 3) {
    fVar5 = fVar8;
    if (fVar8 < fVar9) {
      fVar5 = fVar9;
      fVar9 = fVar8;
    }
    FUN_1433d8810(&local_148,fVar9,&local_128,local_108);
    FUN_1433d8810(local_108,(fVar5 - fVar9) / (1.0 - fVar9),local_108,local_e8);
    lVar3 = 3;
  }
  puVar4 = &uStack_110;
  do {
    FUN_1433d8a00(*(undefined4 *)(puVar4 + -3),*(undefined4 *)((longlong)puVar4 + -0x14),
                  *(undefined4 *)(puVar4 + -2),*(undefined4 *)((longlong)puVar4 + -0xc),
                  *(undefined4 *)(puVar4 + -1),*(undefined4 *)((longlong)puVar4 + -4),
                  *(undefined4 *)puVar4,*(undefined4 *)((longlong)puVar4 + 4),param_9);
    puVar4 = puVar4 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1433d8810 FUN_1433d8810 body=486 status=ok
// SIG undefined FUN_1433d8810(void)

void FUN_1433d8810(float *param_1,float param_2,float *param_3,float *param_4)

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
  
  fVar5 = param_1[3];
  fVar6 = param_1[2];
  fVar1 = param_1[7];
  fVar2 = param_1[6];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar9 = (fVar5 - fVar3) * param_2 + fVar3;
  fVar7 = param_1[4];
  fVar10 = (fVar6 - fVar4) * param_2 + fVar4;
  fVar8 = (fVar2 - fVar7) * param_2 + fVar7;
  fVar6 = (fVar7 - fVar6) * param_2 + fVar6;
  fVar7 = param_1[5];
  *param_3 = fVar4;
  param_3[2] = fVar10;
  param_3[3] = fVar9;
  fVar5 = (fVar7 - fVar5) * param_2 + fVar5;
  fVar7 = (fVar1 - fVar7) * param_2 + fVar7;
  fVar4 = (fVar8 - fVar6) * param_2 + fVar6;
  fVar10 = (fVar6 - fVar10) * param_2 + fVar10;
  param_3[4] = fVar10;
  fVar9 = (fVar5 - fVar9) * param_2 + fVar9;
  fVar5 = (fVar7 - fVar5) * param_2 + fVar5;
  param_3[1] = fVar3;
  fVar10 = (fVar4 - fVar10) * param_2 + fVar10;
  param_3[5] = fVar9;
  param_3[6] = fVar10;
  fVar9 = (fVar5 - fVar9) * param_2 + fVar9;
  param_3[7] = fVar9;
  *param_4 = fVar10;
  param_4[1] = fVar9;
  param_4[2] = fVar4;
  param_4[3] = fVar5;
  param_4[4] = fVar8;
  param_4[5] = fVar7;
  param_4[6] = fVar2;
  param_4[7] = fVar1;
  return;
}



// FUNCTION 1433d8a00 FUN_1433d8a00 body=1253 status=ok
// SIG undefined FUN_1433d8a00(void)

void FUN_1433d8a00(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 param_9)

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
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float local_res18;
  float local_res20;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar13 = (float)param_2;
  fVar15 = (float)param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  while( true ) {
    fVar11 = local_res18 - fVar15;
    fVar12 = local_res20 - fVar13;
    fVar9 = param_7 - param_5;
    fVar17 = param_8 - param_6;
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar12 * fVar12 + fVar11 * fVar11);
    fVar2 = _guard_xfg_dispatch_icall_nop
                      ((param_6 - local_res20) * (param_6 - local_res20) +
                       (param_5 - local_res18) * (param_5 - local_res18));
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar17 * fVar17 + fVar9 * fVar9);
    fVar2 = (fVar1 + fVar2 + fVar3) * 0.005;
    fVar1 = fVar17 * fVar11 - fVar9 * fVar12;
    if (ABS(fVar1) < fVar2) {
      fVar1 = (local_res20 + param_6) * 0.5;
      fVar3 = (local_res18 + param_5) * 0.5;
    }
    else {
      fVar1 = ((fVar13 - param_6) * fVar9 - (fVar15 - param_5) * fVar17) / fVar1;
      fVar3 = fVar11 * fVar1 + fVar15;
      fVar1 = fVar12 * fVar1 + fVar13;
    }
    fVar11 = (local_res20 + param_6) * 0.5;
    fVar8 = (fVar13 + local_res20) * 0.5;
    param_6 = (param_6 + param_8) * 0.5;
    fVar10 = ((fVar3 + fVar15) * 0.5 + (fVar3 + param_7) * 0.5) * 0.5;
    fVar7 = (fVar11 + fVar8) * 0.5;
    fVar17 = ((fVar1 + fVar13) * 0.5 + (fVar1 + param_8) * 0.5) * 0.5;
    fVar9 = (local_res18 + param_5) * 0.5;
    fVar5 = (fVar15 + local_res18) * 0.5;
    param_5 = (param_5 + param_7) * 0.5;
    fVar6 = (fVar9 + fVar5) * 0.5;
    local_res18 = (param_5 + fVar9) * 0.5;
    local_res20 = (param_6 + fVar11) * 0.5;
    fVar4 = (local_res18 + fVar6) * 0.5;
    fVar9 = (local_res20 + fVar7) * 0.5;
    fVar11 = (float)FUN_143343950(CONCAT44(uVar16,fVar15),CONCAT44(uVar14,fVar13),param_7,param_8,
                                  fVar10,fVar17);
    fVar12 = (float)FUN_143343950(CONCAT44(uVar16,fVar15),CONCAT44(uVar14,fVar13),param_7,param_8,
                                  fVar4,fVar9);
    fVar17 = (float)FUN_143343950(fVar6,fVar7,local_res18,local_res20,fVar10,fVar17);
    if (ABS(ABS(fVar11) - ABS(fVar12)) + ABS(fVar17) < fVar2) break;
    FUN_1433d8a00(CONCAT44(uVar16,fVar15),CONCAT44(uVar14,fVar13),fVar5,fVar8,fVar6,fVar7,fVar4,
                  fVar9,param_9);
    uVar14 = 0;
    uVar16 = 0;
    fVar13 = fVar9;
    fVar15 = fVar4;
  }
  local_b8 = param_7;
  local_b4 = param_8;
  local_c0 = fVar3;
  local_bc = fVar1;
  FUN_1433d8ef0(param_9,&local_c0);
  return;
}



// FUNCTION 1433d8ef0 FUN_1433d8ef0 body=298 status=ok
// SIG undefined FUN_1433d8ef0(void)

void FUN_1433d8ef0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar1 = param_1[1];
  if (0x1f < uVar1) {
    if (uVar1 == 0x20) {
      lVar6 = param_1[2];
      param_1[2] = lVar6 * 2;
      plVar4 = (longlong *)*param_1;
      lVar6 = lVar6 << 5;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,lVar6,0);
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4,lVar6,0);
      }
      param_1[0x43] = (longlong)plVar4;
      lVar6 = 4;
      plVar5 = param_1 + 3;
      do {
        lVar3 = plVar5[1];
        *plVar4 = *plVar5;
        plVar4[1] = lVar3;
        lVar3 = plVar5[3];
        plVar4[2] = plVar5[2];
        plVar4[3] = lVar3;
        lVar3 = plVar5[5];
        plVar4[4] = plVar5[4];
        plVar4[5] = lVar3;
        lVar3 = plVar5[7];
        plVar4[6] = plVar5[6];
        plVar4[7] = lVar3;
        lVar3 = plVar5[9];
        plVar4[8] = plVar5[8];
        plVar4[9] = lVar3;
        lVar3 = plVar5[0xb];
        plVar4[10] = plVar5[10];
        plVar4[0xb] = lVar3;
        lVar3 = plVar5[0xd];
        plVar4[0xc] = plVar5[0xc];
        plVar4[0xd] = lVar3;
        lVar3 = plVar5[0xf];
        plVar4[0xe] = plVar5[0xe];
        plVar4[0xf] = lVar3;
        lVar6 = lVar6 + -1;
        plVar4 = plVar4 + 0x10;
        plVar5 = plVar5 + 0x10;
      } while (lVar6 != 0);
    }
    else {
      uVar2 = param_1[2];
      if (uVar2 <= uVar1) {
        param_1[2] = uVar2 * 2;
        lVar6 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x43],uVar2 << 5);
        param_1[0x43] = lVar6;
      }
    }
    lVar6 = param_2[1];
    plVar4 = (longlong *)(param_1[0x43] + param_1[1] * 0x10);
    *plVar4 = *param_2;
    plVar4[1] = lVar6;
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar6 = param_2[1];
  param_1[uVar1 * 2 + 3] = *param_2;
  (param_1 + uVar1 * 2 + 3)[1] = lVar6;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1433d9040 FUN_1433d9040 body=145 status=ok
// SIG undefined FUN_1433d9040(void)

bool FUN_1433d9040(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0xa0,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da690(lVar1,param_2,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d9110 FUN_1433d9110 body=274 status=ok
// SIG undefined FUN_1433d9110(void)

bool FUN_1433d9110(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    (**(code **)(PTR_PTR_1467ce6e0 + 8))(&PTR_PTR_1467ce6e0,param_3);
    local_res20[0] = 0x43;
    this = (RefCountNTSImpl *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x98,local_res20);
    if (this != (RefCountNTSImpl *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 8) = 1;
      *(undefined ***)this = &PTR_FUN_145b06570;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      this[0x30] = (RefCountNTSImpl)0x1;
      *(undefined4 *)(this + 0x34) = 0;
      FUN_1433cc0f0(this,param_2,0);
      this[0x30] = (RefCountNTSImpl)0x1;
      *(undefined ***)this = &PTR_FUN_145b06630;
      *(undefined8 *)(this + 0x38) = param_5;
      FUN_1432d2b40(this + 0x40,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    (**(code **)(PTR_PTR_1467ce6e0 + 0x10))(&PTR_PTR_1467ce6e0,param_3);
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d9230 FUN_1433d9230 body=16 status=ok
// SIG undefined FUN_1433d9230(void)

void FUN_1433d9230(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001433d923b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d9250 FUN_1433d9250 body=129 status=ok
// SIG undefined FUN_1433d9250(void)

bool FUN_1433d9250(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x58,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433d9d80(lVar1,param_2);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d9310 FUN_1433d9310 body=145 status=ok
// SIG undefined FUN_1433d9310(void)

bool FUN_1433d9310(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0xb0,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da790(lVar1,param_2,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d93d0 FUN_1433d93d0 body=145 status=ok
// SIG undefined FUN_1433d93d0(void)

bool FUN_1433d93d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x58,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da8b0(lVar1,param_2,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d94d0 FUN_1433d94d0 body=149 status=ok
// SIG undefined FUN_1433d94d0(void)

bool FUN_1433d94d0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x70,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da1c0(lVar1,param_2,param_3 != 0);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d9580 FUN_1433d9580 body=14 status=ok
// SIG undefined FUN_1433d9580(void)

void FUN_1433d9580(undefined8 param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d9590 FUN_1433d9590 body=14 status=ok
// SIG undefined FUN_1433d9590(void)

void FUN_1433d9590(undefined8 param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
    return;
  }
  return;
}



// FUNCTION 1433d95f0 FUN_1433d95f0 body=43 status=ok
// SIG undefined FUN_1433d95f0(void)

void FUN_1433d95f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined **local_18;
  undefined8 local_10;
  
  local_18 = &PTR_PTR_1467ce730;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x88))(param_2,&local_18);
  return;
}



// FUNCTION 1433d9640 FUN_1433d9640 body=145 status=ok
// SIG undefined FUN_1433d9640(void)

bool FUN_1433d9640(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x88,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da500(lVar1,param_2,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d9700 FUN_1433d9700 body=145 status=ok
// SIG undefined FUN_1433d9700(void)

bool FUN_1433d9700(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined4 local_res20 [2];
  
  if (*(longlong *)(param_4 + 0x28) == 0) {
    local_res20[0] = 0x43;
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_5,0x88,local_res20);
    if (lVar1 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      this = (RefCountNTSImpl *)FUN_1433da360(lVar1,param_2,param_3);
    }
    FUN_1433cc4b0(param_4,this,0);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return *(longlong *)(param_4 + 0x28) != 0;
}



// FUNCTION 1433d97a0 FUN_1433d97a0 body=76 status=ok
// SIG undefined FUN_1433d97a0(void)

undefined8 * FUN_1433d97a0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  param_1[1] = param_2;
  if (param_3 == '\0') {
    *param_1 = &PTR_PTR_1467ce6e0;
    (**(code **)(PTR_PTR_1467ce6e0 + 8))();
    return param_1;
  }
  *param_1 = &PTR_PTR_1467ce6f0;
  (**(code **)(PTR_PTR_1467ce6f0 + 8))();
  return param_1;
}



// FUNCTION 1433d9800 FUN_1433d9800 body=76 status=ok
// SIG undefined FUN_1433d9800(void)

undefined8 * FUN_1433d9800(undefined8 *param_1,undefined8 param_2,char param_3)

{
  param_1[1] = param_2;
  if (param_3 == '\0') {
    *param_1 = &PTR_PTR_1467ce700;
    (**(code **)(PTR_PTR_1467ce700 + 8))();
    return param_1;
  }
  *param_1 = &PTR_PTR_1467ce710;
  (**(code **)(PTR_PTR_1467ce710 + 8))();
  return param_1;
}



// FUNCTION 1433d9860 FUN_1433d9860 body=66 status=ok
// SIG undefined FUN_1433d9860(void)

undefined8 * FUN_1433d9860(undefined8 *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(-(uint)(param_3 != '\0') & 0x80 | param_2);
  param_1[1] = uVar2;
  plVar1 = (longlong *)(&PTR_PTR_1467ce748)[(int)param_2];
  *param_1 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1,uVar2,-param_3);
  return param_1;
}



// FUNCTION 1433d98b0 FUN_1433d98b0 body=113 status=ok
// SIG undefined FUN_1433d98b0(void)

undefined8 * FUN_1433d98b0(undefined8 *param_1,int param_2,int param_3,char param_4)

{
  param_1[1] = (longlong)param_3;
  if (param_2 != 6) {
    *param_1 = &PTR_PTR_1467ce780;
    (**(code **)(PTR_PTR_1467ce780 + 8))();
    return param_1;
  }
  if (param_4 != '\0') {
    *param_1 = &PTR_PTR_1467ce770;
    (**(code **)(PTR_PTR_1467ce770 + 8))();
    return param_1;
  }
  *param_1 = &PTR_PTR_1467ce760;
  (**(code **)(PTR_PTR_1467ce760 + 8))();
  return param_1;
}



// FUNCTION 1433d9930 FUN_1433d9930 body=89 status=ok
// SIG undefined FUN_1433d9930(void)

undefined8 * FUN_1433d9930(undefined8 *param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 8) {
    param_1[1] = param_3;
    *param_1 = &PTR_PTR_1467ce790;
    (**(code **)(PTR_PTR_1467ce790 + 8))(&PTR_PTR_1467ce790,param_3);
    return param_1;
  }
  param_1[1] = 0;
  *param_1 = &PTR_PTR_1467ce7a0;
  (**(code **)(PTR_PTR_1467ce7a0 + 8))(&PTR_PTR_1467ce7a0,0);
  return param_1;
}



// FUNCTION 1433d9990 FUN_1433d9990 body=89 status=ok
// SIG undefined FUN_1433d9990(void)

undefined8 * FUN_1433d9990(undefined8 *param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 10) {
    param_1[1] = param_3;
    *param_1 = &PTR_PTR_1467ce7b0;
    (**(code **)(PTR_PTR_1467ce7b0 + 8))(&PTR_PTR_1467ce7b0,param_3);
    return param_1;
  }
  param_1[1] = 0;
  *param_1 = &PTR_PTR_1467ce7c0;
  (**(code **)(PTR_PTR_1467ce7c0 + 8))(&PTR_PTR_1467ce7c0,0);
  return param_1;
}



// FUNCTION 1433d99f0 FUN_1433d99f0 body=89 status=ok
// SIG undefined FUN_1433d99f0(void)

undefined8 * FUN_1433d99f0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0xc) {
    param_1[1] = param_3;
    *param_1 = &PTR_PTR_1467ce7d0;
    (**(code **)(PTR_PTR_1467ce7d0 + 8))(&PTR_PTR_1467ce7d0,param_3);
    return param_1;
  }
  param_1[1] = 0;
  *param_1 = &PTR_PTR_1467ce7e0;
  (**(code **)(PTR_PTR_1467ce7e0 + 8))(&PTR_PTR_1467ce7e0,0);
  return param_1;
}



// FUNCTION 1433d9a50 FUN_1433d9a50 body=89 status=ok
// SIG undefined FUN_1433d9a50(void)

undefined8 * FUN_1433d9a50(undefined8 *param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0xe) {
    param_1[1] = param_3;
    *param_1 = &PTR_PTR_1467ce7f0;
    (**(code **)(PTR_PTR_1467ce7f0 + 8))(&PTR_PTR_1467ce7f0,param_3);
    return param_1;
  }
  param_1[1] = 0;
  *param_1 = &PTR_PTR_1467ce800;
  (**(code **)(PTR_PTR_1467ce800 + 8))(&PTR_PTR_1467ce800,0);
  return param_1;
}



// FUNCTION 1433d9ab0 FUN_1433d9ab0 body=126 status=ok
// SIG undefined FUN_1433d9ab0(void)

undefined8 *
FUN_1433d9ab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06630;
  param_1[7] = param_3;
  FUN_1432d2b40(param_1 + 8,*(undefined8 *)(param_4 + 8));
  return param_1;
}



// FUNCTION 1433d9b40 FUN_1433d9b40 body=83 status=ok
// SIG undefined FUN_1433d9b40(void)

void FUN_1433d9b40(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res20 [2];
  
  cVar1 = Scaleform::Render::Bundle::findEntryIndex(param_1,local_res20);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_3 + 0x38) + 0x70))
                      (*(longlong **)(param_3 + 0x38),param_2);
    FUN_1432d3050(param_1 + 0x40,local_res20[0],uVar2);
  }
  return;
}



// FUNCTION 1433d9ba0 FUN_1433d9ba0 body=101 status=ok
// SIG undefined FUN_1433d9ba0(void)

void FUN_1433d9ba0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1433cc200();
  plVar1 = *(longlong **)(param_4 + 0x38);
  uVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  FUN_1432d2cc0(param_1 + 0x40,param_2,param_3,uVar2,plVar1 + 0x16);
  return;
}



// FUNCTION 1433d9c10 FUN_1433d9c10 body=62 status=ok
// SIG undefined FUN_1433d9c10(void)

void FUN_1433d9c10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1432d2ea0(param_1 + 0x40);
  FUN_1433cc280(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433d9c60 FUN_1433d9c60 body=278 status=ok
// SIG undefined FUN_1433d9c60(void)

void FUN_1433d9c60(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  Matrix2x4<float> *pMVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(uint *)(param_1 + 0x80) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x80);
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x10)) + 0x38);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        puVar2 = &DAT_14621c810;
      }
      else {
        uVar3 = FUN_1432cd220();
        puVar2 = (undefined4 *)FUN_1433620e0(uVar3);
      }
      local_28 = *puVar2;
      local_24 = puVar2[1];
      local_20 = puVar2[2];
      local_1c = puVar2[3];
      local_18 = puVar2[4];
      local_14 = puVar2[5];
      local_10 = puVar2[6];
      local_c = puVar2[7];
      for (lVar1 = *(longlong *)(lVar1 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        uVar3 = FUN_1432cd220(*(undefined8 *)(lVar1 + 0x28));
        pMVar4 = (Matrix2x4<float> *)FUN_1433620e0(uVar3);
        Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_28,pMVar4);
      }
      lVar6 = lVar6 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1433d9d80 FUN_1433d9d80 body=116 status=ok
// SIG undefined FUN_1433d9d80(void)

undefined8 * FUN_1433d9d80(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06650;
  param_1[7] = &PTR_LAB_145b06670;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1433d9e00 FUN_1433d9e00 body=90 status=ok
// SIG undefined FUN_1433d9e00(void)

void FUN_1433d9e00(RefCountNTSImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06650;
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_145b06670;
  FUN_1432d4e70(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_145af8468;
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433d9e60 FUN_1433d9e60 body=154 status=ok
// SIG undefined FUN_1433d9e60(void)

void FUN_1433d9e60(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = param_1 + 0x38;
      if (param_1 == 0) {
        uVar4 = 0;
      }
      Scaleform::Render::HAL::Draw(param_2,uVar4,uVar5);
      lVar2 = *(longlong *)(param_1 + 0x40) + uVar5 * 0x10;
      uVar4 = *(longlong *)(param_1 + 0x48) - 1;
      if (uVar5 < uVar4) {
        plVar3 = (longlong *)(lVar2 + 0x18);
        do {
          if (*plVar3 != *(longlong *)(lVar2 + 8)) break;
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 2;
        } while (uVar5 < uVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 1433d9f00 FUN_1433d9f00 body=114 status=ok
// SIG undefined FUN_1433d9f00(void)

void FUN_1433d9f00(longlong param_1,undefined8 param_2,longlong param_3)

{
  RefCountImpl *this;
  char cVar1;
  RefCountImpl *this_00;
  longlong lVar2;
  longlong local_res20;
  
  cVar1 = Scaleform::Render::Bundle::findEntryIndex(param_1,&local_res20);
  if (cVar1 != '\0') {
    lVar2 = local_res20 * 0x10 + *(longlong *)(param_1 + 0x40);
    this_00 = (RefCountImpl *)
              (**(code **)(**(longlong **)(param_3 + 0x38) + 0x70))
                        (*(longlong **)(param_3 + 0x38),param_2);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this_00);
    }
    this = *(RefCountImpl **)(lVar2 + 8);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    *(RefCountImpl **)(lVar2 + 8) = this_00;
  }
  return;
}



// FUNCTION 1433d9f80 FUN_1433d9f80 body=175 status=ok
// SIG undefined FUN_1433d9f80(void)

void FUN_1433d9f80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined **local_18;
  RefCountImpl *local_10;
  
  FUN_1433cc200();
  plVar1 = *(longlong **)(param_4 + 0x38);
  local_10 = (RefCountImpl *)(**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  local_18 = (undefined **)plVar1[0x16];
  if (local_18 != &PTR_LOOP_1467cd040) {
    *(int *)(*local_18 + 8) = *(int *)(*local_18 + 8) + 1;
  }
  if (local_10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_10);
  }
  FUN_1432d5550(param_1 + 0x40,param_3,&local_18);
  if (local_10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_10);
  }
  if (local_18 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_18);
  }
  return;
}



// FUNCTION 1433da040 FUN_1433da040 body=62 status=ok
// SIG undefined FUN_1433da040(void)

void FUN_1433da040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1432d58c0(param_1 + 0x40);
  FUN_1433cc280(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433da090 FUN_1433da090 body=105 status=ok
// SIG undefined FUN_1433da090(void)

undefined8 FUN_1433da090(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  
  if (*(int *)((longlong)param_3 + 0x2c) == 0) {
    cVar1 = FUN_1432f72f0(param_3[1],*param_3,
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 8) + 8 + *(longlong *)(param_2 + 8) * 0x10));
    if ((cVar1 == '\0') && (param_2 != param_3[9])) {
      param_3[9] = param_2;
      return 1;
    }
    param_3[9] = 0;
  }
  return 0;
}



// FUNCTION 1433da100 FUN_1433da100 body=174 status=ok
// SIG undefined FUN_1433da100(void)

void FUN_1433da100(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  if (*(int *)(param_3 + 6) == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = *(ulonglong *)(param_2 + 8);
    lVar6 = uVar2 * 0x10;
    local_28 = lVar1 + lVar6;
    if ((param_2 != param_3[9]) && (*(longlong *)(local_28 + 8) != 0)) {
      uVar5 = *(longlong *)(param_1 + 0x10) - 1;
      uVar4 = uVar2;
      if (uVar2 < uVar5) {
        plVar3 = (longlong *)(lVar1 + 0x18 + lVar6);
        do {
          if (*plVar3 != *(longlong *)(lVar1 + 8 + lVar6)) break;
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 2;
        } while (uVar4 < uVar5);
      }
      local_20 = (uVar4 - uVar2) + 1;
      local_18 = 0x10;
      (**(code **)(*(longlong *)*param_3 + 0x198))
                ((longlong *)*param_3,*(undefined8 *)(local_28 + 8),&local_28);
    }
  }
  return;
}



// FUNCTION 1433da1c0 FUN_1433da1c0 body=169 status=ok
// SIG undefined FUN_1433da1c0(void)

undefined8 * FUN_1433da1c0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06690;
  param_1[8] = 0;
  param_1[7] = &PTR_FUN_144f70a50;
  param_1[7] = &PTR_FUN_145b06590;
  param_1[9] = &PTR_LAB_145b06598;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return param_1;
}



// FUNCTION 1433da270 FUN_1433da270 body=152 status=ok
// SIG undefined FUN_1433da270(void)

void FUN_1433da270(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined **local_res8;
  
  FUN_1433cc200();
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x38) + 0x38);
  while ((plVar1 != (longlong *)0x0 && (iVar2 = (**(code **)(*plVar1 + 8))(plVar1), iVar2 != 4))) {
    plVar1 = (longlong *)plVar1[1];
  }
  local_res8 = (undefined **)plVar1[0x1d];
  if (local_res8 != &PTR_LOOP_1467cd040) {
    *(int *)(*local_res8 + 8) = *(int *)(*local_res8 + 8) + 1;
  }
  FUN_1432d3e10(param_1 + 0x38,param_3,&local_res8);
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
  return;
}



// FUNCTION 1433da310 RemoveEntries body=67 status=ok
// SIG undefined RemoveEntries(void)

void Scaleform::Render::MaskBundle::RemoveEntries
               (longlong param_1,ulonglong param_2,ulonglong param_3)

{
  MaskPrimitive::Remove(param_1 + 0x38,param_2 & 0xffffffff,param_3 & 0xffffffff);
  FUN_1433cc280(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433da360 FUN_1433da360 body=157 status=ok
// SIG undefined FUN_1433da360(void)

undefined8 * FUN_1433da360(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b066b0;
  FUN_1432d3e60(param_1 + 7);
  param_1[7] = &PTR_FUN_145b05c40;
  param_1[9] = &PTR_LAB_145b05c58;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[0x10] = param_3;
  return param_1;
}



// FUNCTION 1433da410 FUN_1433da410 body=149 status=ok
// SIG undefined FUN_1433da410(void)

void FUN_1433da410(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined **local_res8;
  
  FUN_1433cc200();
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x38) + 0x38);
  while ((plVar1 != (longlong *)0x0 && (iVar2 = (**(code **)(*plVar1 + 8))(plVar1), iVar2 != 3))) {
    plVar1 = (longlong *)plVar1[1];
  }
  local_res8 = (undefined **)plVar1[3];
  if (local_res8 != &PTR_LOOP_1467cd040) {
    *(int *)(*local_res8 + 8) = *(int *)(*local_res8 + 8) + 1;
  }
  CAkParameterNodeBase::SetRTPC(param_1 + 0x38,param_3,&local_res8);
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
  return;
}



// FUNCTION 1433da4b0 RemoveEntries body=67 status=ok
// SIG undefined RemoveEntries(void)

void Scaleform::Render::MaskBundle::RemoveEntries
               (longlong param_1,ulonglong param_2,ulonglong param_3)

{
  FUN_1432d4130(param_1 + 0x38,param_2 & 0xffffffff,param_3 & 0xffffffff);
  FUN_1433cc280(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433da500 FUN_1433da500 body=143 status=ok
// SIG undefined FUN_1433da500(void)

undefined8 * FUN_1433da500(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b066d0;
  FUN_1432d3e60(param_1 + 7);
  param_1[7] = &PTR_FUN_145b05c78;
  param_1[9] = &PTR_LAB_145b05c90;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return param_1;
}



// FUNCTION 1433da5a0 FUN_1433da5a0 body=149 status=ok
// SIG undefined FUN_1433da5a0(void)

void FUN_1433da5a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined **local_res8;
  
  FUN_1433cc200();
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x38) + 0x38);
  while ((plVar1 != (longlong *)0x0 && (iVar2 = (**(code **)(*plVar1 + 8))(plVar1), iVar2 != 1))) {
    plVar1 = (longlong *)plVar1[1];
  }
  local_res8 = (undefined **)plVar1[3];
  if (local_res8 != &PTR_LOOP_1467cd040) {
    *(int *)(*local_res8 + 8) = *(int *)(*local_res8 + 8) + 1;
  }
  CAkParameterNodeBase::SetRTPC(param_1 + 0x38,param_3,&local_res8);
  if (local_res8 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_res8);
  }
  return;
}



// FUNCTION 1433da640 RemoveEntries body=67 status=ok
// SIG undefined RemoveEntries(void)

void Scaleform::Render::MaskBundle::RemoveEntries
               (longlong param_1,ulonglong param_2,ulonglong param_3)

{
  FUN_1432d4130(param_1 + 0x38,param_2 & 0xffffffff,param_3 & 0xffffffff);
  FUN_1433cc280(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433da690 FUN_1433da690 body=243 status=ok
// SIG undefined FUN_1433da690(void)

undefined8 * FUN_1433da690(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b066f0;
  param_1[9] = 0;
  param_1[8] = &PTR_FUN_144f70a50;
  param_1[8] = &PTR_FUN_145b065b8;
  param_1[10] = &PTR_LAB_145b065c0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    param_1[0xc] = *(undefined8 *)(param_3 + 0x10);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar5;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return param_1;
}



// FUNCTION 1433da790 FUN_1433da790 body=278 status=ok
// SIG undefined FUN_1433da790(void)

undefined8 * FUN_1433da790(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06710;
  param_1[9] = 0;
  param_1[8] = &PTR_FUN_144f70a50;
  param_1[8] = &PTR_FUN_145b065e0;
  param_1[10] = &PTR_LAB_145b065e8;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    param_1[0xc] = *(undefined8 *)(param_3 + 0x10);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar6;
    param_1[0x13] = uVar7;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return param_1;
}



// FUNCTION 1433da8b0 FUN_1433da8b0 body=108 status=ok
// SIG undefined FUN_1433da8b0(void)

undefined8 * FUN_1433da8b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06570;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_1433cc0f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_145b06730;
  FUN_1433da9a0(param_1 + 7,param_3);
  return param_1;
}



// FUNCTION 1433da930 FUN_1433da930 body=108 status=ok
// SIG undefined FUN_1433da930(void)

ulonglong FUN_1433da930(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  uVar2 = 0;
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  do {
    iVar1 = (int)uVar2;
    if ((iVar1 == 1) && (*(int *)(plVar3[3] + 8) - 3U < 3)) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    if (*(int *)(plVar3[3] + 8) == param_3) {
      uVar2 = (ulonglong)(iVar1 - 1U);
      if ((int)(iVar1 - 1U) < 1) {
LAB_1433da978:
        return uVar2 & 0xffffffffffffff00;
      }
    }
    else if (*(int *)(plVar3[3] + 8) == param_2) {
      uVar2 = (ulonglong)(iVar1 + 1);
    }
    if ((plVar3 == (longlong *)param_1[1]) ||
       (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)) goto LAB_1433da978;
  } while( true );
}



// FUNCTION 1433da9a0 FUN_1433da9a0 body=109 status=ok
// SIG undefined FUN_1433da9a0(void)

undefined8 * FUN_1433da9a0(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b06608;
  param_1[2] = &PTR_LAB_145b06610;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
    param_1[3] = param_2;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1433daa10 FUN_1433daa10 body=113 status=ok
// SIG undefined FUN_1433daa10(void)

void FUN_1433daa10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  plVar1 = (longlong *)(*param_1 + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((undefined **)*plVar1 != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)*plVar1);
    }
    plVar1 = plVar1 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001433daa7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1433daa90 ~UserDataBundle body=114 status=ok
// SIG undefined ~UserDataBundle(void)

void Scaleform::Render::UserDataBundle::~UserDataBundle(RefCountNTSImplCore *param_1)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_145b06608;
  *(undefined ***)(param_1 + 0x48) = &PTR_LAB_145b06610;
  if (*(RefCountImpl **)(param_1 + 0x50) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x50));
  }
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_145af8468;
  RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 0x38));
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433dab40 FUN_1433dab40 body=128 status=ok
// SIG undefined FUN_1433dab40(void)

RefCountNTSImplCore * FUN_1433dab40(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  FUN_1432d3f10(param_1 + 0x38);
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1433dabc0 FUN_1433dabc0 body=119 status=ok
// SIG undefined FUN_1433dabc0(void)

RefCountNTSImplCore * FUN_1433dabc0(RefCountNTSImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1433dac40 FUN_1433dac40 body=160 status=ok
// SIG undefined FUN_1433dac40(void)

RefCountNTSImplCore * FUN_1433dac40(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06650;
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_145b06670;
  FUN_1432d4e70(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_145af8468;
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1433dace0 FUN_1433dace0 body=160 status=ok
// SIG undefined FUN_1433dace0(void)

RefCountNTSImplCore * FUN_1433dace0(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x80) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x80));
  }
  FUN_1432d3f10(param_1 + 0x38);
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1433dad80 FUN_1433dad80 body=163 status=ok
// SIG undefined FUN_1433dad80(void)

RefCountNTSImplCore * FUN_1433dad80(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  FUN_1433daa10(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 0x38));
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1433dae30 FUN_1433dae30 body=112 status=ok
// SIG undefined FUN_1433dae30(void)

RefCountImplCore * FUN_1433dae30(RefCountImplCore *param_1,ulonglong param_2)

{
  FUN_1433daa10(param_1 + 0x18);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1433daea0 FUN_1433daea0 body=128 status=ok
// SIG undefined FUN_1433daea0(void)

RefCountNTSImplCore * FUN_1433daea0(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  FUN_1432d2bd0(param_1 + 0x40);
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1433daf20 FUN_1433daf20 body=149 status=ok
// SIG undefined FUN_1433daf20(void)

RefCountNTSImplCore * FUN_1433daf20(RefCountNTSImplCore *param_1,uint param_2)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145b065e0;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 0x40));
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1433dafc0 FUN_1433dafc0 body=110 status=ok
// SIG undefined FUN_1433dafc0(void)

RefCountImplCore * FUN_1433dafc0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b065e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1433db030 FUN_1433db030 body=89 status=ok
// SIG undefined FUN_1433db030(void)

undefined8 FUN_1433db030(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::UserDataBundle::~UserDataBundle();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1433db090 FUN_1433db090 body=138 status=ok
// SIG undefined FUN_1433db090(void)

RefCountImplCore * FUN_1433db090(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b06608;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145b06610;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1433db120 FUN_1433db120 body=149 status=ok
// SIG undefined FUN_1433db120(void)

RefCountNTSImplCore * FUN_1433db120(RefCountNTSImplCore *param_1,uint param_2)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_145b065b8;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 0x40));
  *(undefined ***)param_1 = &PTR_FUN_145b06570;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1433db1c0 FUN_1433db1c0 body=110 status=ok
// SIG undefined FUN_1433db1c0(void)

RefCountImplCore * FUN_1433db1c0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b065b8;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1433db230 FUN_1433db230 body=106 status=ok
// SIG undefined FUN_1433db230(void)

void FUN_1433db230(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_28 [6];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)Scaleform::Log::GetGlobalLog();
  if (plVar1 != (longlong *)0x0) {
    local_28[0] = *param_1;
    (**(code **)(*plVar1 + 8))(plVar1,local_28,param_2,&local_res18);
    return;
  }
  local_28[0] = *param_1;
  FUN_1432c1b00(local_28,param_2,&local_res18);
  return;
}



// FUNCTION 1433db2a0 FUN_1433db2a0 body=37 status=ok
// SIG undefined FUN_1433db2a0(void)

undefined8
FUN_1433db2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1433db320(param_1,param_2,0x100,param_3,param_4);
  return param_1;
}



// FUNCTION 1433db2d0 thunk_FUN_1433db430 body=5 status=ok
// SIG undefined thunk_FUN_1433db430(void)

longlong thunk_FUN_1433db430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lStackX_8;
  
  lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&lStackX_8);
  if (lVar2 == 0) {
    cVar1 = FUN_1433db890(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&lStackX_8);
    if (lVar2 == 0) {
      cVar1 = FUN_1433db890(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&lStackX_8);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  *(longlong *)(lStackX_8 + 0x30) = *(longlong *)(lStackX_8 + 0x30) + 1;
  return lVar2;
}



// FUNCTION 1433db2e0 thunk_FUN_1433db760 body=5 status=ok
// SIG undefined thunk_FUN_1433db760(void)

undefined1
thunk_FUN_1433db760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1433dbdf0(param_1 + 0x88);
  FUN_143304b80(param_1 + 0x98,lVar3,param_2,param_3,param_4);
  plVar1 = (longlong *)(lVar3 + 0x30);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    uVar2 = FUN_1433dbad0(param_1,lVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1433db2f0 VisitMem body=15 status=ok
// SIG undefined VisitMem(void)

void Scaleform::HeapPT::Starter::VisitMem(undefined8 param_1,undefined8 param_2)

{
  Granulator::VisitMem(param_1,param_2,2);
  return;
}



// FUNCTION 1433db310 VisitSegments body=15 status=ok
// SIG undefined VisitSegments(void)

void Scaleform::HeapPT::Starter::VisitSegments(undefined8 param_1,undefined8 param_2)

{
  FUN_1433db830(param_1,param_2,2);
  return;
}



// FUNCTION 1433db320 FUN_1433db320 body=255 status=ok
// SIG undefined FUN_1433db320(void)

undefined8 *
FUN_1433db320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  param_1[2] = param_5;
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = param_4;
  param_1[3] = param_5 - 0x40U >> 6;
  puVar1 = param_1 + 7;
  *puVar1 = puVar1;
  param_1[8] = puVar1;
  param_1[10] = param_1 + 9;
  param_1[0xb] = param_1 + 9;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1433049e0(param_1 + 0x13,param_3);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,&local_38);
  if (local_28 < 0x1000) {
    local_28 = 0x1000;
  }
  if (local_38 == 0) {
    local_38 = 1;
  }
  param_1[4] = local_38;
  if (local_30 == 0) {
    local_30 = -0x8000000000000000;
  }
  *(undefined1 *)(param_1 + 6) = (undefined1)local_10;
  param_1[5] = local_30;
  param_1[1] = ((param_1[1] + -1 + local_28) / local_28) * local_28;
  return param_1;
}


