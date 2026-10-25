// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433db430 FUN_1433db430 body=177 status=ok
// SIG undefined FUN_1433db430(void)

longlong FUN_1433db430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&local_res8);
  if (lVar2 == 0) {
    cVar1 = FUN_1433db890(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&local_res8);
    if (lVar2 == 0) {
      cVar1 = FUN_1433db890(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      lVar2 = FUN_143304ab0(param_1 + 0x98,param_2,param_3,&local_res8);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  *(longlong *)(local_res8 + 0x30) = *(longlong *)(local_res8 + 0x30) + 1;
  return lVar2;
}



// FUNCTION 1433db4f0 FUN_1433db4f0 body=613 status=ok
// SIG undefined FUN_1433db4f0(void)

bool FUN_1433db4f0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (param_5 < (ulonglong)param_1[0x14]) {
    param_5 = param_1[0x14];
  }
  lVar7 = FUN_1433dbdf0(param_1 + 0x11);
  iVar6 = FUN_143304cc0(param_1 + 0x13,lVar7,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 6) == '\0') {
    bVar5 = iVar6 < 2;
  }
  else {
    if (iVar6 != 0) {
      lVar1 = param_1[2];
      lVar11 = 0;
      lVar2 = *(longlong *)(lVar7 + 0x20);
      uVar10 = (ulonglong)*(uint *)(lVar7 + 0x3c);
      lVar9 = *(longlong *)(lVar7 + 0x18) + lVar1;
      lVar13 = lVar11;
      if (lVar9 == lVar2) {
        lVar13 = lVar1;
      }
      lVar13 = (lVar2 - uVar10) - lVar13;
      lVar8 = lVar11;
      if (lVar9 == lVar2) {
        lVar8 = lVar1;
      }
      if (*(uint *)(lVar7 + 0x3c) != 0) {
        lVar11 = param_1[0x14] - uVar10;
      }
      uVar3 = param_1[1];
      lVar11 = *(longlong *)(lVar7 + 0x28) + uVar10 + lVar8 + lVar11;
      uVar12 = (((uVar3 - 1) + ((param_5 - 1) + param_3 + (param_2 - lVar13) & ~(param_5 - 1))) /
               uVar3) * uVar3;
      uVar10 = (((uVar3 - 1) + ((param_5 - 1) + param_4 + (param_2 - lVar13) & ~(param_5 - 1))) /
               uVar3) * uVar3;
      if (iVar6 != 1) {
        if (iVar6 == 3) {
          if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
            do {
              uVar10 = uVar10 + uVar3;
            } while (uVar10 <= uVar12);
          }
          cVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))
                            ((longlong *)*param_1,lVar13,lVar11,uVar10,
                             1L << ((byte)*(undefined4 *)(lVar7 + 0x38) & 0x3f));
          if (cVar4 != '\0') {
            param_1[0x12] = param_1[0x12] + (uVar10 - lVar11);
            FUN_143304e10(param_1 + 0x13,lVar7,uVar10 - lVar11);
            FUN_143304cc0(param_1 + 0x13,lVar7,param_2,param_3,param_4,param_5);
            return true;
          }
        }
        return false;
      }
      if (uVar10 < uVar12) {
        FUN_143304ee0(param_1 + 0x13,lVar7,uVar10 + lVar13);
        cVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))
                          ((longlong *)*param_1,lVar13,lVar11,uVar10,
                           1L << ((byte)*(undefined4 *)(lVar7 + 0x38) & 0x3f));
        if (cVar4 != '\0') {
          param_1[0x12] = param_1[0x12] + (uVar10 - lVar11);
          return true;
        }
        FUN_143304e10(param_1 + 0x13,lVar7,lVar11 - uVar10);
      }
    }
    bVar5 = true;
  }
  return bVar5;
}



// FUNCTION 1433db760 FUN_1433db760 body=128 status=ok
// SIG undefined FUN_1433db760(void)

undefined1 FUN_1433db760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1433db810 VisitMem body=15 status=ok
// SIG undefined VisitMem(void)

void Scaleform::HeapPT::Granulator::VisitMem
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143304fb0(param_1 + 0x98,param_2,param_4);
  return;
}



// FUNCTION 1433db830 FUN_1433db830 body=75 status=ok
// SIG undefined FUN_1433db830(void)

void FUN_1433db830(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1433dbd40(param_1,*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  FUN_143305010(param_1 + 0x98,param_2,param_4);
  return;
}



// FUNCTION 1433db890 FUN_1433db890 body=569 status=ok
// SIG undefined FUN_1433db890(void)

undefined8 FUN_1433db890(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  size_t _Size;
  longlong lVar14;
  undefined8 *_Dst;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if (param_3 < (ulonglong)param_1[4]) {
    param_3 = param_1[4];
  }
  if ((undefined8 *)param_1[0xb] == param_1 + 9) {
    _Size = param_1[2];
  }
  else {
    _Size = 0;
  }
  uVar15 = param_1[0x14];
  uVar17 = param_1[5];
  uVar3 = param_1[1];
  uVar16 = param_3;
  if (param_3 < uVar15) {
    uVar16 = uVar15;
  }
  uVar18 = ~(uVar15 - 1);
  if (uVar17 < uVar16) {
    uVar16 = uVar17;
  }
  uVar13 = 0;
  if (uVar17 < param_3) {
    uVar13 = param_3;
  }
  uVar17 = 0;
  if (uVar16 < uVar15) {
    uVar17 = uVar15;
  }
  uVar9 = 0;
  if (uVar17 < uVar13) {
    uVar9 = uVar13;
  }
  uVar17 = (uVar15 - 1) +
           (((uVar3 - 1) + ((param_3 - 1) + uVar9 + _Size + param_2 & ~(param_3 - 1))) / uVar3) *
           uVar3 + uVar17 & uVar18;
  lVar10 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,uVar17,uVar16);
  uVar12 = 0;
  if (lVar10 != 0) {
    _Dst = (undefined8 *)((uVar15 - 1) + lVar10 & uVar18);
    if (_Size != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
      uVar15 = 0;
      _Dst[2] = 0;
      if (param_1[3] != 0) {
        puVar11 = _Dst + 9;
        do {
          puVar11[2] = _Dst;
          puVar1 = puVar11 + -1;
          uVar15 = uVar15 + 1;
          *puVar11 = param_1[10];
          puVar11[1] = param_1 + 9;
          puVar11 = puVar11 + 8;
          *(undefined8 **)(param_1[10] + 0x10) = puVar1;
          param_1[10] = puVar1;
        } while (uVar15 < (ulonglong)param_1[3]);
      }
      plVar2 = param_1 + 7;
      *_Dst = param_1[7];
      _Dst[1] = plVar2;
      *(undefined8 **)(*plVar2 + 8) = _Dst;
      *plVar2 = (longlong)_Dst;
    }
    plVar4 = (longlong *)param_1[0xb];
    lVar14 = _Size + (longlong)_Dst;
    *(longlong *)(plVar4[1] + 0x10) = plVar4[2];
    *(longlong *)(plVar4[2] + 8) = plVar4[1];
    *(longlong *)(plVar4[3] + 0x10) = *(longlong *)(plVar4[3] + 0x10) + 1;
    plVar4[4] = lVar14;
    plVar4[5] = (lVar10 + uVar17 & uVar18) - lVar14;
    plVar4[6] = 0;
    bVar8 = FUN_14207c6a0(uVar16);
    *(uint *)(plVar4 + 7) = (uint)bVar8;
    plVar2 = param_1 + 0x11;
    *(int *)((longlong)plVar4 + 0x3c) = (int)_Dst - (int)lVar10;
    plVar4[2] = 0;
    plVar4[1] = 0;
    *plVar4 = 0;
    lVar10 = *plVar2;
    if (lVar10 == 0) {
      *plVar2 = (longlong)plVar4;
      *plVar4 = (longlong)plVar2;
    }
    else {
      lVar5 = *(longlong *)(lVar10 + 0x20);
      lVar7 = lVar14;
      while (lVar5 != lVar14) {
        lVar6 = *(longlong *)(lVar10 + 8 + (lVar7 >> 0x3f) * -8);
        if (lVar6 == 0) {
          *(longlong **)(lVar10 + (lVar7 >> 0x3f) * -8 + 8) = plVar4;
          *plVar4 = lVar10;
          break;
        }
        lVar7 = lVar7 * 2;
        lVar10 = lVar6;
        lVar5 = *(longlong *)(lVar6 + 0x20);
      }
    }
    Scaleform::HeapPT::AllocLite::InitSegment(param_1 + 0x13,plVar4);
    param_1[0x12] = param_1[0x12] + uVar17;
    uVar12 = 1;
  }
  return uVar12;
}



// FUNCTION 1433dbad0 FUN_1433dbad0 body=617 status=ok
// SIG undefined FUN_1433dbad0(void)

ulonglong FUN_1433dbad0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar2 = *(longlong **)(param_2 + 0x18);
  uVar4 = 0;
  bVar3 = 1;
  if ((longlong)plVar2 + param_1[2] != *(longlong *)(param_2 + 0x20)) {
    FUN_143304920(param_1 + 0x11,param_2,(longlong)plVar2 + param_1[2],1);
    *(undefined8 *)(param_2 + 0x10) = param_1[0xb];
    *(undefined8 **)(param_2 + 8) = param_1 + 9;
    *(longlong *)(param_1[0xb] + 8) = param_2;
    param_1[0xb] = param_2;
    plVar2[2] = plVar2[2] + -1;
    uVar1 = *(uint *)(param_2 + 0x3c);
    uVar10 = uVar4;
    if (*(longlong *)(param_2 + 0x18) + param_1[2] == *(longlong *)(param_2 + 0x20)) {
      uVar10 = param_1[2];
    }
    uVar5 = uVar4;
    if (uVar1 != 0) {
      uVar5 = param_1[0x14] - (ulonglong)uVar1;
    }
    lVar7 = *(longlong *)(param_2 + 0x28) + (ulonglong)uVar1 + uVar5 + uVar10;
    FUN_143304a60(param_1 + 0x13,param_2);
    param_1[0x12] = param_1[0x12] - lVar7;
    uVar10 = uVar4;
    if (*(longlong *)(param_2 + 0x18) + param_1[2] == *(longlong *)(param_2 + 0x20)) {
      uVar10 = param_1[2];
    }
    bVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))
                      ((longlong *)*param_1,
                       (*(longlong *)(param_2 + 0x20) - (ulonglong)*(uint *)(param_2 + 0x3c)) -
                       uVar10,lVar7,1L << (*(byte *)(param_2 + 0x38) & 0x3f));
  }
  if (plVar2[2] == 1) {
    lVar9 = param_1[2] + (longlong)plVar2;
    lVar7 = param_1[0x11];
    lVar8 = lVar9;
    while ((lVar7 != 0 && (*(longlong *)(lVar7 + 0x20) != lVar9))) {
      lVar7 = *(longlong *)(lVar7 + 8 + (lVar8 >> 0x3f) * -8);
      lVar8 = lVar8 * 2;
    }
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      FUN_143304920(param_1 + 0x11,lVar7,lVar9,bVar3);
      *(undefined8 *)(lVar7 + 0x10) = param_1[0xb];
      *(undefined8 **)(lVar7 + 8) = param_1 + 9;
      *(longlong *)(param_1[0xb] + 8) = lVar7;
      param_1[0xb] = lVar7;
      if (param_1[3] != 0) {
        plVar6 = plVar2 + 10;
        uVar10 = uVar4;
        do {
          uVar10 = uVar10 + 1;
          *(longlong *)(plVar6[-1] + 0x10) = *plVar6;
          *(longlong *)(*plVar6 + 8) = plVar6[-1];
          plVar6 = plVar6 + 8;
        } while (uVar10 < (ulonglong)param_1[3]);
      }
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      *(longlong *)plVar2[1] = *plVar2;
      *plVar2 = -1;
      plVar2[1] = -1;
      uVar1 = *(uint *)(lVar7 + 0x3c);
      uVar10 = uVar4;
      if (*(longlong *)(lVar7 + 0x18) + param_1[2] == *(longlong *)(lVar7 + 0x20)) {
        uVar10 = param_1[2];
      }
      uVar5 = uVar4;
      if (uVar1 != 0) {
        uVar5 = param_1[0x14] - (ulonglong)uVar1;
      }
      lVar8 = *(longlong *)(lVar7 + 0x28) + (ulonglong)uVar1 + uVar5 + uVar10;
      FUN_143304a60(param_1 + 0x13,lVar7);
      param_1[0x12] = param_1[0x12] - lVar8;
      if (*(longlong *)(lVar7 + 0x18) + param_1[2] == *(longlong *)(lVar7 + 0x20)) {
        uVar4 = param_1[2];
      }
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))
                        ((longlong *)*param_1,
                         (*(longlong *)(lVar7 + 0x20) - (ulonglong)*(uint *)(lVar7 + 0x3c)) - uVar4,
                         lVar8,1L << (*(byte *)(lVar7 + 0x38) & 0x3f));
      return uVar4;
    }
  }
  return (ulonglong)bVar3;
}



// FUNCTION 1433dbd40 FUN_1433dbd40 body=169 status=ok
// SIG undefined FUN_1433dbd40(void)

void FUN_1433dbd40(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x10)) {
    FUN_1433dbd40(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
    lVar1 = 0;
    if (*(longlong *)(param_2 + 0x18) + *(longlong *)(param_1 + 0x10) ==
        *(longlong *)(param_2 + 0x20)) {
      lVar1 = *(longlong *)(param_1 + 0x10);
    }
    (**(code **)(*param_3 + 8))
              (param_3,param_4,0,
               (*(longlong *)(param_2 + 0x20) - lVar1) + 0xfffU & 0xfffffffffffff000,
               *(longlong *)(param_2 + 0x28) + lVar1 & 0xfffffffffffff000);
  }
  return;
}



// FUNCTION 1433dbdf0 FUN_1433dbdf0 body=184 status=ok
// SIG undefined FUN_1433dbdf0(void)

longlong FUN_1433dbdf0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = *param_1;
  lVar2 = 0;
  uVar7 = 0xffffffffffffffff;
  lVar6 = lVar2;
  uVar5 = param_2;
  if (lVar3 != 0) {
    while( true ) {
      uVar4 = param_2 - *(longlong *)(lVar3 + 0x20);
      if (((*(ulonglong *)(lVar3 + 0x20) <= param_2) && (uVar4 < uVar7)) &&
         (lVar6 = lVar3, uVar7 = uVar4, uVar4 == 0)) {
        return lVar3;
      }
      lVar1 = *(longlong *)(lVar3 + 8);
      lVar3 = *(longlong *)(lVar3 + 8 + ((longlong)uVar5 >> 0x3f) * -8);
      if ((lVar1 != 0) && (lVar1 != lVar3)) {
        lVar2 = lVar1;
      }
      lVar1 = lVar2;
      if (lVar3 == 0) break;
      uVar5 = uVar5 * 2;
    }
    for (; lVar2 = lVar6, lVar1 != 0; lVar1 = *(longlong *)(lVar3 + lVar1)) {
      uVar5 = param_2 - *(longlong *)(lVar1 + 0x20);
      if ((*(ulonglong *)(lVar1 + 0x20) <= param_2) && (uVar5 < uVar7)) {
        lVar2 = lVar1;
        uVar7 = uVar5;
      }
      lVar3 = 8;
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        lVar3 = 0x10;
      }
      lVar6 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1433dbeb0 FUN_1433dbeb0 body=147 status=ok
// SIG undefined FUN_1433dbeb0(void)

undefined8 * FUN_1433dbeb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1 + 2;
  param_1[1] = param_3;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  FUN_1433fa920(param_1 + 4,5);
  param_1[0xca] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x18))();
  param_1[1] = ((param_1[1] + 0xfff) / 0x1000) * 0x1000;
  return param_1;
}



// FUNCTION 1433dbf50 FUN_1433dbf50 body=258 status=ok
// SIG undefined FUN_1433dbf50(void)

void FUN_1433dbf50(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  uVar5 = param_2 + *(ulonglong *)(param_1 + 0x28) & ~*(ulonglong *)(param_1 + 0x28);
  lVar2 = FUN_1433faa10(param_1 + 0x20,uVar5,&local_res8);
  if (lVar2 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    uVar4 = (((uVar1 - 1) + uVar5) / uVar1) * uVar1;
    bVar3 = (byte)*(undefined8 *)(param_1 + 0x20);
    if (uVar4 < (((*(longlong *)(param_1 + 0x28) + uVar4 >> (bVar3 & 0x3f)) + 0x1f >> 5) * 4 + 0x5f
                & 0xffffffffffffffe0) + uVar5) {
      do {
        uVar4 = uVar4 + uVar1;
      } while (uVar4 < (((*(longlong *)(param_1 + 0x28) + uVar4 >> (bVar3 & 0x3f)) + 0x1f >> 5) * 4
                        + 0x5f & 0xffffffffffffffe0) + uVar5);
    }
    local_res8 = FUN_1433dc2b0(param_1);
    if (local_res8 == 0) {
      return;
    }
    FUN_1433faa10(param_1 + 0x20,uVar5,local_res10);
  }
  *(longlong *)(local_res8 + 0x20) = *(longlong *)(local_res8 + 0x20) + 1;
  return;
}



// FUNCTION 1433dc060 FUN_1433dc060 body=204 status=ok
// SIG undefined FUN_1433dc060(void)

void FUN_1433dc060(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10);
  if ((((plVar1 == (longlong *)0x0) ||
       (plVar1 = (longlong *)((ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10 + *plVar1),
       plVar1 == (longlong *)0x0)) ||
      (plVar1 = (longlong *)((ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10 + *plVar1),
      plVar1 == (longlong *)0x0)) ||
     ((plVar1 = (longlong *)((param_2 >> 0x14 & 0xff) * 0x10 + *plVar1), plVar1 == (longlong *)0x0
      || (plVar1 = (longlong *)(*plVar1 + (param_2 >> 0xc & 0xff) * 8), plVar1 == (longlong *)0x0)))
     ) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1;
  }
  if (param_3 < 0x20) {
    param_3 = 0x20;
  }
  FUN_1433fab80(param_1 + 0x20,lVar2,param_2,
                *(ulonglong *)(param_1 + 0x28) + param_3 & ~*(ulonglong *)(param_1 + 0x28));
  plVar1 = (longlong *)(lVar2 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    FUN_1433dc3d0(param_1,lVar2);
  }
  return;
}



// FUNCTION 1433dc140 FUN_1433dc140 body=156 status=ok
// SIG undefined FUN_1433dc140(void)

void FUN_1433dc140(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if ((param_3 & 4) != 0) {
    for (lVar1 = *(longlong *)(param_1 + 0x18); lVar1 != param_1 + 0x10;
        lVar1 = *(longlong *)(lVar1 + 8)) {
      (**(code **)(*param_2 + 8))
                (param_2,lVar1,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x30),4);
    }
    if ((param_3 & 8) != 0) {
      FUN_14338ee90(param_1 + 0x30,param_2,*(undefined8 *)(param_1 + 0x20),5);
    }
  }
  return;
}



// FUNCTION 1433dc1f0 FUN_1433dc1f0 body=128 status=ok
// SIG undefined FUN_1433dc1f0(void)

void FUN_1433dc1f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x18); lVar1 != param_1 + 0x10;
      lVar1 = *(longlong *)(lVar1 + 8)) {
    (**(code **)(*param_2 + 8))(param_2,3,0,lVar1,*(undefined8 *)(lVar1 + 0x10));
  }
  FUN_14338ef90(param_1 + 0x30,param_2,*(undefined8 *)(param_1 + 0x20),0x83);
  return;
}



// FUNCTION 1433dc2b0 FUN_1433dc2b0 body=272 status=ok
// SIG undefined FUN_1433dc2b0(void)

longlong * FUN_1433dc2b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = (longlong *)
           (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_2,0x1000);
  if (plVar3 != (longlong *)0x0) {
    plVar3[2] = param_2;
    *(undefined4 *)(plVar3 + 3) = 8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 0xc;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    cVar2 = FUN_14338d6e0(DAT_146b644e0,plVar3,param_2);
    if (cVar2 != '\0') {
      FUN_14338def0(DAT_146b644e0,plVar3,param_2,plVar3);
      uVar4 = (((ulonglong)(param_1[5] + param_2) >> ((byte)param_1[4] & 0x3f)) + 0x1f >> 5) * 4 +
              0x5f & 0xffffffffffffffe0;
      plVar3[7] = uVar4 + (longlong)plVar3;
      plVar3[6] = param_2 - uVar4;
      lVar1 = param_1[3];
      *plVar3 = (longlong)(param_1 + 2);
      plVar3[1] = lVar1;
      *(longlong **)param_1[3] = plVar3;
      param_1[3] = plVar3;
      FUN_1433fa960(param_1 + 4,plVar3);
      param_1[0xca] = param_1[0xca] + plVar3[2];
      return plVar3;
    }
    (**(code **)(*(longlong *)*param_1 + 0x28))();
  }
  return (longlong *)0x0;
}



// FUNCTION 1433dc3d0 FUN_1433dc3d0 body=124 status=ok
// SIG undefined FUN_1433dc3d0(void)

void FUN_1433dc3d0(undefined8 *param_1,longlong *param_2)

{
  FUN_1433fa9f0(param_1 + 4);
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  FUN_14338daf0(DAT_146b644e0,param_2,param_2[2]);
  param_1[0xca] = param_1[0xca] - param_2[2];
                    /* WARNING: Could not recover jumptable at 0x0001433dc448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,param_2,param_2[2],0x1000);
  return;
}



// FUNCTION 1433dc450 FUN_1433dc450 body=30 status=ok
// SIG undefined FUN_1433dc450(void)

undefined8 * FUN_1433dc450(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_14338e8a0(param_1 + 1);
  return param_1;
}



// FUNCTION 1433dc480 FUN_1433dc480 body=139 status=ok
// SIG undefined FUN_1433dc480(void)

void FUN_1433dc480(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = *param_1;
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffc;
  uVar4 = (*(ulonglong *)(param_2 + 0x30) >> ((byte)uVar2 & 0x3f)) - 1;
  puVar1 = (uint *)(param_2 + (uVar4 >> 4) * 4 + 0x40);
  *puVar1 = *puVar1 & ~(3 << ((char)uVar4 * '\x02' & 0x1eU));
  lVar3 = *(longlong *)(param_2 + 0x38);
  uVar4 = *(ulonglong *)(param_2 + 0x30) >> ((byte)*param_1 & 0x3f);
  lVar5 = uVar4 << ((byte)*param_1 & 0x3f);
  if (uVar4 < 0x41) {
    *(int *)(lVar5 + -4 + lVar3) = (int)uVar4;
    *(int *)(lVar3 + 0x18) = (int)uVar4;
    *(longlong *)(lVar3 + 0x10) = param_2;
    FUN_14338ec00(param_1 + 1);
    return;
  }
  *(undefined4 *)(lVar5 + -4 + lVar3) = 0x41;
  *(undefined4 *)(lVar3 + 0x18) = 0x41;
  *(ulonglong *)(lVar5 + -0x10 + lVar3) = uVar4;
  *(ulonglong *)(lVar3 + 0x20) = uVar4;
  *(longlong *)(lVar3 + 0x10) = param_2;
  FUN_14338ec00(param_1 + 1);
  return;
}



// FUNCTION 1433dc520 FUN_1433dc520 body=13 status=ok
// SIG undefined FUN_1433dc520(void)

void FUN_1433dc520(longlong param_1,longlong param_2)

{
  FUN_14338ecd0(param_1 + 8,*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1433dc540 FUN_1433dc540 body=341 status=ok
// SIG undefined FUN_1433dc540(void)

longlong FUN_1433dc540(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  
  lVar6 = FUN_14338e9a0(param_1 + 1,param_2 >> ((byte)*param_1 & 0x3f));
  if (lVar6 != 0) {
    uVar9 = (ulonglong)*(uint *)(lVar6 + 0x18);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    bVar8 = (byte)*param_1;
    lVar5 = *(longlong *)(lVar4 + 0x38);
    lVar1 = lVar4 + 0x40;
    if (0x40 < uVar9) {
      uVar9 = *(ulonglong *)(lVar6 + 0x20);
    }
    uVar9 = uVar9 - (param_2 >> (bVar8 & 0x3f));
    uVar7 = uVar9 << (bVar8 & 0x3f);
    if (uVar7 < 0x20) {
      param_2 = param_2 + uVar7;
    }
    else {
      lVar2 = lVar6 + param_2;
      if (uVar9 < 0x41) {
        *(int *)((uVar7 - 4) + lVar2) = (int)uVar9;
        *(int *)(lVar2 + 0x18) = (int)uVar9;
      }
      else {
        *(undefined4 *)((uVar7 - 4) + lVar2) = 0x41;
        *(undefined4 *)(lVar2 + 0x18) = 0x41;
        *(ulonglong *)((uVar7 - 0x10) + lVar2) = uVar9;
        *(ulonglong *)(lVar2 + 0x20) = uVar9;
      }
      *(longlong *)(lVar2 + 0x10) = lVar4;
      FUN_14338ec00(param_1 + 1);
      uVar7 = (longlong)((lVar6 - lVar5) + param_2) >> (bVar8 & 0x3f);
      puVar3 = (uint *)(lVar1 + (uVar7 >> 4) * 4);
      uVar9 = (uVar7 - 1) + uVar9;
      *puVar3 = *puVar3 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
      puVar3 = (uint *)(lVar1 + (uVar9 >> 4) * 4);
      *puVar3 = *puVar3 & ~(3 << ((char)uVar9 * '\x02' & 0x1eU));
    }
    FUN_1433dce80(lVar1,lVar6 - lVar5 >> (bVar8 & 0x3f),param_2 >> (bVar8 & 0x3f),0);
    *param_3 = lVar4;
  }
  return lVar6;
}



// FUNCTION 1433dc6a0 FUN_1433dc6a0 body=589 status=ok
// SIG undefined FUN_1433dc6a0(void)

longlong FUN_1433dc6a0(longlong *param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar2 = *param_1;
  param_1 = param_1 + 1;
  bVar10 = (byte)lVar2;
  lVar6 = FUN_14338ea70(param_1,param_2 >> (bVar10 & 0x3f),lVar2,param_3 + -1);
  if (lVar6 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(lVar6 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0x38);
  lVar7 = Scaleform::HeapPT::ListBin::GetAlignedPtr(lVar6,param_3 + -1);
  uVar11 = (ulonglong)*(uint *)(lVar6 + 0x18);
  if (0x40 < uVar11) {
    uVar11 = *(ulonglong *)(lVar6 + 0x20);
  }
  uVar11 = (((uVar11 << (bVar10 & 0x3f)) - lVar7) - param_2) + lVar6;
  if (lVar7 - lVar6 != 0) {
    uVar12 = (ulonglong)(lVar7 - lVar6) >> (bVar10 & 0x3f);
    lVar8 = uVar12 << (bVar10 & 0x3f);
    if (uVar12 < 0x41) {
      *(int *)(lVar8 + -4 + lVar6) = (int)uVar12;
      *(int *)(lVar6 + 0x18) = (int)uVar12;
    }
    else {
      *(undefined4 *)(lVar8 + -4 + lVar6) = 0x41;
      *(undefined4 *)(lVar6 + 0x18) = 0x41;
      *(ulonglong *)(lVar8 + -0x10 + lVar6) = uVar12;
      *(ulonglong *)(lVar6 + 0x20) = uVar12;
    }
    *(longlong *)(lVar6 + 0x10) = lVar3;
    FUN_14338ec00(param_1,lVar6);
    uVar13 = lVar6 - lVar4 >> (bVar10 & 0x3f);
    uVar12 = (uVar13 - 1) + uVar12;
    puVar1 = (uint *)((uVar13 >> 4) * 4 + 0x40 + lVar3);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar13 * '\x02' & 0x1eU));
    puVar1 = (uint *)(lVar3 + 0x40 + (uVar12 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar12 * '\x02' & 0x1eU));
  }
  lVar6 = lVar3 + 0x40;
  if (uVar11 < 0x20) {
    param_2 = param_2 + uVar11;
  }
  else {
    lVar8 = lVar7 + param_2;
    uVar11 = uVar11 >> (bVar10 & 0x3f);
    lVar9 = uVar11 << (bVar10 & 0x3f);
    if (uVar11 < 0x41) {
      *(int *)(lVar9 + -4 + lVar8) = (int)uVar11;
      *(int *)(lVar8 + 0x18) = (int)uVar11;
    }
    else {
      *(undefined4 *)(lVar9 + -4 + lVar8) = 0x41;
      *(undefined4 *)(lVar8 + 0x18) = 0x41;
      *(ulonglong *)(lVar9 + -0x10 + lVar8) = uVar11;
      *(ulonglong *)(lVar8 + 0x20) = uVar11;
    }
    *(longlong *)(lVar8 + 0x10) = lVar3;
    FUN_14338ec00(param_1);
    uVar12 = (longlong)((lVar7 - lVar4) + param_2) >> (bVar10 & 0x3f);
    puVar1 = (uint *)(lVar6 + (uVar12 >> 4) * 4);
    uVar11 = (uVar12 - 1) + uVar11;
    *puVar1 = *puVar1 & ~(3 << ((char)uVar12 * '\x02' & 0x1eU));
    puVar1 = (uint *)(lVar6 + (uVar11 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)uVar11 * '\x02' & 0x1eU));
  }
  bVar5 = FUN_14207c6a0(param_3);
  FUN_1433dce80(lVar6,lVar7 - lVar4 >> (bVar10 & 0x3f),param_2 >> (bVar10 & 0x3f),
                (ulonglong)bVar5 - lVar2);
  *param_4 = lVar3;
  return lVar7;
}



// FUNCTION 1433dc900 FUN_1433dc900 body=355 status=ok
// SIG undefined FUN_1433dc900(void)

void FUN_1433dc900(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  uint7 uVar13;
  longlong lVar12;
  longlong lVar14;
  
  uVar5 = *param_1;
  lVar1 = param_2 + 0x40;
  lVar6 = *(longlong *)(param_2 + 0x30);
  lVar7 = *(longlong *)(param_2 + 0x38);
  bVar9 = (byte)uVar5;
  uVar11 = param_3 - *(longlong *)(param_2 + 0x38) >> (bVar9 & 0x3f);
  uVar8 = FUN_1433a2410(lVar1,uVar11);
  puVar2 = (uint *)(lVar1 + (uVar11 >> 4) * 4);
  *puVar2 = *puVar2 & ~(3 << ((char)uVar11 * '\x02' & 0x1eU));
  uVar3 = uVar8 + uVar11;
  puVar4 = (uint *)(lVar1 + (uVar3 - 1 >> 4) * 4);
  *puVar4 = *puVar4 & ~(3 << ((char)(uVar3 - 1) * '\x02' & 0x1eU));
  lVar14 = uVar8 << (bVar9 & 0x3f);
  uVar13 = (uint7)((ulonglong)puVar2 >> 8);
  if ((uVar11 == 0) ||
     ((*(uint *)(lVar1 + (uVar11 - 1 >> 4) * 4) >> ((char)(uVar11 - 1) * '\x02' & 0x1eU) & 3) != 0))
  {
    lVar12 = (ulonglong)uVar13 << 8;
  }
  else {
    lVar12 = CONCAT71(uVar13,1);
  }
  if (((ulonglong)(lVar14 + param_3) < (ulonglong)(lVar6 + lVar7)) &&
     ((*(uint *)(lVar1 + (uVar3 >> 4) * 4) >> ((char)uVar3 * '\x02' & 0x1eU) & 3) == 0)) {
    cVar10 = '\x01';
  }
  else {
    cVar10 = '\0';
  }
  if (uVar8 < 0x41) {
    *(int *)(lVar14 + -4 + param_3) = (int)uVar8;
    *(int *)(param_3 + 0x18) = (int)uVar8;
  }
  else {
    *(undefined4 *)(lVar14 + -4 + param_3) = 0x41;
    *(undefined4 *)(param_3 + 0x18) = 0x41;
    *(ulonglong *)(lVar14 + -0x10 + param_3) = uVar8;
    *(ulonglong *)(param_3 + 0x20) = uVar8;
  }
  *(longlong *)(param_3 + 0x10) = param_2;
  if (cVar10 == '\0' && (char)lVar12 == '\0') {
    FUN_14338ec00(param_1 + 1,param_3);
  }
  else {
    FUN_14338ed90(param_1 + 1,param_3,uVar5,lVar12,cVar10);
  }
  return;
}



// FUNCTION 1433dca70 FUN_1433dca70 body=742 status=ok
// SIG undefined FUN_1433dca70(void)

longlong FUN_1433dca70(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                      ulonglong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar4 = *param_1;
  lVar1 = param_2 + 0x40;
  lVar5 = *(longlong *)(param_2 + 0x38);
  uVar7 = *(longlong *)(param_2 + 0x30) + lVar5;
  bVar9 = (byte)uVar4;
  lVar12 = param_3 - lVar5 >> (bVar9 & 0x3f);
  lVar8 = FUN_1433a2410(lVar1,lVar12);
  uVar6 = FUN_1433dcde0(lVar1,lVar12);
  uVar10 = (1L << (bVar9 + (char)uVar6 & 0x3f)) - 1;
  uVar13 = lVar8 << (bVar9 & 0x3f);
  uVar10 = param_4 + uVar10 & ~uVar10;
  *param_5 = uVar13;
  if (uVar13 < uVar10) {
    uVar2 = uVar13 + param_3;
    if ((uVar2 < uVar7) &&
       ((*(uint *)(lVar1 + ((ulonglong)(lVar8 + lVar12) >> 4) * 4) >>
         ((char)(lVar8 + lVar12) * '\x02' & 0x1eU) & 3) == 0)) {
      uVar7 = (ulonglong)*(uint *)(uVar2 + 0x18);
      if (0x40 < uVar7) {
        uVar7 = *(ulonglong *)(uVar2 + 0x20);
      }
      lVar8 = uVar7 << (bVar9 & 0x3f);
      if (uVar10 <= lVar8 + uVar13) {
        FUN_14338ecd0(param_1 + 1,uVar2);
        uVar13 = (lVar8 - uVar10) + uVar13;
        if (uVar13 < 0x20) {
          uVar10 = uVar10 + uVar13;
        }
        else {
          uVar13 = uVar13 >> (bVar9 & 0x3f);
          FUN_1433dd2b0(param_1 + 1,param_2,uVar10 + param_3,uVar13,uVar4);
          uVar7 = (longlong)((uVar10 + param_3) - lVar5) >> (bVar9 & 0x3f);
          puVar3 = (uint *)(lVar1 + (uVar7 >> 4) * 4);
          uVar13 = (uVar7 - 1) + uVar13;
          *puVar3 = *puVar3 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
          puVar3 = (uint *)(lVar1 + (uVar13 >> 4) * 4);
          *puVar3 = *puVar3 & ~(3 << ((char)uVar13 * '\x02' & 0x1eU));
        }
        FUN_1433dce80(lVar1,lVar12,uVar10 >> (bVar9 & 0x3f),uVar6);
        return param_3;
      }
    }
    param_3 = 0;
  }
  else if (uVar10 < uVar13) {
    uVar2 = uVar13 + param_3;
    lVar11 = 0;
    if ((uVar2 < uVar7) &&
       ((*(uint *)(lVar1 + ((ulonglong)(lVar8 + lVar12) >> 4) * 4) >>
         ((char)(lVar8 + lVar12) * '\x02' & 0x1eU) & 3) == 0)) {
      uVar7 = (ulonglong)*(uint *)(uVar2 + 0x18);
      if (0x40 < uVar7) {
        uVar7 = *(ulonglong *)(uVar2 + 0x20);
      }
      lVar11 = uVar7 << (bVar9 & 0x3f);
    }
    uVar7 = lVar11 + (uVar13 - uVar10);
    if (0x1f < uVar7) {
      if (lVar11 != 0) {
        FUN_14338ecd0(param_1 + 1,uVar2);
      }
      uVar7 = uVar7 >> (bVar9 & 0x3f);
      FUN_1433dd2b0(param_1 + 1,param_2,uVar10 + param_3,uVar7,uVar4);
      FUN_1433dce80(lVar1,lVar12,uVar10 >> (bVar9 & 0x3f),uVar6);
      uVar13 = (longlong)((uVar10 + param_3) - lVar5) >> (bVar9 & 0x3f);
      puVar3 = (uint *)(lVar1 + (uVar13 >> 4) * 4);
      uVar7 = (uVar13 - 1) + uVar7;
      *puVar3 = *puVar3 & ~(3 << ((char)uVar13 * '\x02' & 0x1eU));
      puVar3 = (uint *)(lVar1 + (uVar7 >> 4) * 4);
      *puVar3 = *puVar3 & ~(3 << ((char)uVar7 * '\x02' & 0x1eU));
    }
  }
  return param_3;
}



// FUNCTION 1433dcd60 GetUsableSize body=43 status=ok
// SIG undefined GetUsableSize(void)

longlong Scaleform::HeapPT::AllocBitSet2::GetUsableSize
                   (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_1;
  lVar2 = FUN_1433a2410(param_2 + 0x40,
                        param_3 - *(longlong *)(param_2 + 0x38) >> ((byte)uVar1 & 0x3f));
  return lVar2 << ((byte)uVar1 & 0x3f);
}



// FUNCTION 1433dcda0 FUN_1433dcda0 body=51 status=ok
// SIG undefined FUN_1433dcda0(void)

longlong FUN_1433dcda0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  
  lVar1 = *param_1;
  bVar3 = (byte)lVar1;
  uVar2 = FUN_1433dcde0(param_2 + 0x40,param_3 - *(longlong *)(param_2 + 0x38) >> (bVar3 & 0x3f),
                        param_4 >> (bVar3 & 0x3f));
  return (ulonglong)uVar2 + lVar1;
}



// FUNCTION 1433dcde0 FUN_1433dcde0 body=158 status=ok
// SIG undefined FUN_1433dcde0(void)

uint FUN_1433dcde0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < 8) {
    uVar1 = (param_3 - 1) + param_2;
    return (*(uint *)(param_1 + (uVar1 >> 4) * 4) >> ((char)uVar1 * '\x02' & 0x1eU) & 3) - 1;
  }
  uVar2 = (param_3 - 2) + param_2;
  uVar3 = (param_3 - 1) + param_2;
  uVar1 = (param_3 - 3) + param_2;
  return ((*(uint *)(param_1 + (uVar1 >> 4) * 4) >> ((char)uVar1 * '\x02' & 0x1eU) & 3) << 2 |
         *(uint *)(param_1 + (uVar2 >> 4) * 4) >> ((char)uVar2 * '\x02' & 0x1eU) & 3) * 2 |
         (*(uint *)(param_1 + (uVar3 >> 4) * 4) >> ((char)uVar3 * '\x02' & 0x1eU)) >> 1 & 1;
}



// FUNCTION 1433dce80 FUN_1433dce80 body=1035 status=ok
// SIG undefined FUN_1433dce80(void)

void FUN_1433dce80(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  
  cVar7 = (char)param_2;
  iVar2 = (int)param_3;
  switch(param_3) {
  case 0:
  case 1:
    uVar4 = (int)param_2 * 2 & 0x1e;
    *(uint *)(param_1 + (param_2 >> 4) * 4) =
         ~(3 << (sbyte)uVar4) & *(uint *)(param_1 + (param_2 >> 4) * 4) | 1 << uVar4;
    return;
  case 2:
    bVar3 = cVar7 * '\x02' & 0x1e;
    *(uint *)(param_1 + (param_2 >> 4) * 4) =
         ~(3 << bVar3) & *(uint *)(param_1 + (param_2 >> 4) * 4) | 2 << bVar3;
    bVar3 = (char)(param_2 + 1) * '\x02' & 0x1e;
    uVar5 = param_2 + 1 >> 4;
    *(uint *)(param_1 + uVar5 * 4) =
         ~(3 << bVar3) & *(uint *)(param_1 + uVar5 * 4) | param_4 + 1 << bVar3;
    return;
  case 3:
  case 4:
  case 5:
    puVar1 = (uint *)(param_1 + (param_2 >> 4) * 4);
    uVar4 = 3 << (cVar7 * '\x02' & 0x1eU);
    *puVar1 = ~uVar4 & *puVar1 | uVar4;
    uVar5 = param_2 + 1;
    cVar7 = (char)uVar5;
    iVar2 = iVar2 + -3;
    break;
  case 6:
  case 7:
    puVar1 = (uint *)(param_1 + (param_2 >> 4) * 4);
    uVar4 = 3 << (cVar7 * '\x02' & 0x1eU);
    *puVar1 = ~uVar4 & *puVar1 | uVar4;
    puVar1 = (uint *)(param_1 + (param_2 + 1 >> 4) * 4);
    uVar4 = 3 << ((char)(param_2 + 1) * '\x02' & 0x1eU);
    *puVar1 = ~uVar4 & *puVar1 | uVar4;
    puVar1 = (uint *)(param_1 + (param_2 + 2 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)(param_2 + 2) * '\x02' & 0x1eU));
    puVar1 = (uint *)(param_1 + (param_2 + 3 >> 4) * 4);
    *puVar1 = *puVar1 & ~(3 << ((char)(param_2 + 3) * '\x02' & 0x1eU));
    uVar5 = param_2 + 4;
    cVar7 = (char)uVar5;
    iVar2 = iVar2 + -6;
    break;
  default:
    if (param_3 < 0x26) {
      uVar6 = iVar2 - 6;
      puVar1 = (uint *)(param_1 + (param_2 >> 4) * 4);
      uVar4 = 3 << (cVar7 * '\x02' & 0x1eU);
      *puVar1 = ~uVar4 & *puVar1 | uVar4;
      puVar1 = (uint *)(param_1 + (param_2 + 1 >> 4) * 4);
      uVar4 = 3 << ((char)(param_2 + 1) * '\x02' & 0x1eU);
      *puVar1 = ~uVar4 & *puVar1 | uVar4;
      bVar3 = (char)(param_2 + 2) * '\x02' & 0x1e;
      puVar1 = (uint *)(param_1 + (param_2 + 2 >> 4) * 4);
      *puVar1 = ~(3 << bVar3) & *puVar1 | (uVar6 >> 4) << bVar3;
      bVar3 = (char)(param_2 + 3) * '\x02' & 0x1e;
      puVar1 = (uint *)(param_1 + (param_2 + 3 >> 4) * 4);
      *puVar1 = (uVar6 >> 2 & 3) << bVar3 | ~(3 << bVar3) & *puVar1;
      bVar3 = (char)(param_2 + 4) * '\x02' & 0x1e;
      uVar5 = param_2 + 4 >> 4;
      *(uint *)(param_1 + uVar5 * 4) =
           ~(3 << bVar3) & *(uint *)(param_1 + uVar5 * 4) | (uVar6 & 3) << bVar3;
    }
    else {
      puVar1 = (uint *)(param_1 + (param_2 >> 4) * 4);
      uVar4 = 3 << ((byte)(param_2 * 2) & 0x1e);
      *puVar1 = ~uVar4 & *puVar1 | uVar4;
      puVar1 = (uint *)(param_1 + (param_2 + 1 >> 4) * 4);
      uVar4 = 3 << ((char)(param_2 + 1) * '\x02' & 0x1eU);
      *puVar1 = ~uVar4 & *puVar1 | uVar4;
      puVar1 = (uint *)(param_1 + (param_2 + 2 >> 4) * 4);
      uVar4 = 3 << ((char)(param_2 + 2) * '\x02' & 0x1eU);
      *puVar1 = ~uVar4 & *puVar1 | uVar4;
      *(int *)(param_1 + (param_2 * 2 + 0x25 >> 5) * 4) = iVar2;
    }
    uVar5 = (param_3 - 3) + param_2;
    puVar1 = (uint *)(param_1 + (uVar5 >> 4) * 4);
    bVar3 = (char)uVar5 * '\x02' & 0x1e;
    *puVar1 = ~(3 << bVar3) & *puVar1 | ((param_4 & 0x7fffffff) >> 3) << bVar3;
    uVar5 = (param_3 - 2) + param_2;
    puVar1 = (uint *)(param_1 + (uVar5 >> 4) * 4);
    bVar3 = (char)uVar5 * '\x02' & 0x1e;
    param_2 = (param_3 - 1) + param_2;
    *puVar1 = ((param_4 * 2 & 0xc) >> 2) << bVar3 | ~(3 << bVar3) & *puVar1;
    uVar5 = param_2 >> 4;
    bVar3 = (char)param_2 * '\x02' & 0x1e;
    *(uint *)(param_1 + uVar5 * 4) =
         ~(3 << bVar3) & *(uint *)(param_1 + uVar5 * 4) | (param_4 * 2 & 3 | 1) << bVar3;
    return;
  }
  bVar3 = cVar7 * '\x02' & 0x1e;
  puVar1 = (uint *)(param_1 + (uVar5 >> 4) * 4);
  param_2 = (param_3 - 1) + param_2;
  *puVar1 = ~(3 << bVar3) & *puVar1 | iVar2 << bVar3;
  uVar5 = param_2 >> 4;
  bVar3 = (char)param_2 * '\x02' & 0x1e;
  *(uint *)(param_1 + uVar5 * 4) =
       ~(3 << bVar3) & *(uint *)(param_1 + uVar5 * 4) | param_4 + 1 << bVar3;
  return;
}



// FUNCTION 1433dd2b0 FUN_1433dd2b0 body=85 status=ok
// SIG undefined FUN_1433dd2b0(void)

void FUN_1433dd2b0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  byte param_5)

{
  longlong lVar1;
  
  lVar1 = param_4 << (param_5 & 0x3f);
  if (param_4 < 0x41) {
    *(int *)(lVar1 + -4 + param_3) = (int)param_4;
    *(undefined8 *)(param_3 + 0x10) = param_2;
    *(int *)(param_3 + 0x18) = (int)param_4;
    FUN_14338ec00(param_1,param_3);
    return;
  }
  *(undefined4 *)(lVar1 + -4 + param_3) = 0x41;
  *(undefined4 *)(param_3 + 0x18) = 0x41;
  *(ulonglong *)(lVar1 + -0x10 + param_3) = param_4;
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(ulonglong *)(param_3 + 0x20) = param_4;
  FUN_14338ec00(param_1,param_3);
  return;
}



// FUNCTION 1433dd310 FUN_1433dd310 body=185 status=ok
// SIG undefined FUN_1433dd310(void)

ulonglong FUN_1433dd310(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  byte bStack_29;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_28 = (longlong)*(int *)(param_1 + 0x60);
  uVar6 = 0x1505;
  local_20 = (longlong)*(int *)(param_1 + 100);
  local_18 = (ulonglong)*(uint *)(param_1 + 0x68);
  local_10 = (ulonglong)*(byte *)(param_1 + 0x6c);
  lVar2 = 0x20;
  do {
    pbVar1 = &bStack_29 + lVar2;
    lVar2 = lVar2 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*pbVar1;
  } while (lVar2 != 0);
  puVar5 = (ulonglong *)(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  uVar3 = FUN_1432c4390((longlong)puVar5 + 0xc,*puVar5 & 0x7fffffffffffffff,0x1505);
  puVar5 = (ulonglong *)(*(ulonglong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  uVar4 = FUN_1432c4390((longlong)puVar5 + 0xc,*puVar5 & 0x7fffffffffffffff,0x1505);
  return uVar4 ^ uVar3 ^ uVar6;
}



// FUNCTION 1433dd3d0 FUN_1433dd3d0 body=360 status=ok
// SIG undefined FUN_1433dd3d0(void)

ulonglong FUN_1433dd3d0(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  byte bStack_39;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_18 = 0;
  uVar2 = *(ushort *)(param_1 + 0x4c);
  if ((uVar2 & 0x401) != 0) {
    local_38 = (ulonglong)*(uint *)(param_1 + 0x40);
  }
  local_res8 = (ulonglong)*(uint *)(param_1 + 0x44);
  local_30 = 0;
  if (((byte)uVar2 >> 1 & 1) != 0) {
    local_30 = local_res8;
  }
  local_28 = (ulonglong)*(byte *)(param_1 + 0x4a);
  if (((byte)uVar2 >> 3 & 1) != 0) {
    local_28 = (ulonglong)CONCAT21(*(undefined2 *)(param_1 + 0x48),*(byte *)(param_1 + 0x4a));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_28 = local_28 | 0x1000000;
  }
  local_20 = (ulonglong)uVar2;
  if (((uVar2 >> 9 & 1) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    local_18 = FUN_1433dd310();
  }
  lVar5 = 0x28;
  uVar6 = 0x1505;
  do {
    pbVar1 = &bStack_39 + lVar5;
    lVar5 = lVar5 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*pbVar1;
  } while (lVar5 != 0);
  if ((*(byte *)(param_1 + 0x4c) >> 2 & 1) != 0) {
    puVar4 = (ulonglong *)(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
    uVar6 = uVar6 ^ uVar3;
  }
  if ((*(ushort *)(param_1 + 0x4c) & 0x100) != 0) {
    lVar5 = FUN_1432c3580(param_1 + 0x20);
    if (lVar5 != 0) {
      puVar4 = (ulonglong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
      return uVar3 ^ uVar6;
    }
  }
  return uVar6;
}



// FUNCTION 1433dd540 FUN_1433dd540 body=128 status=ok
// SIG undefined FUN_1433dd540(void)

undefined8 * FUN_1433dd540(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = 0;
  lVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  FUN_1432c55c0(param_1 + 2,lVar1);
  lVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  FUN_1432c55c0(param_1 + 4,lVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xff000000;
  return param_1;
}



// FUNCTION 1433dd5d0 FUN_1433dd5d0 body=125 status=ok
// SIG undefined FUN_1433dd5d0(void)

longlong * FUN_1433dd5d0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  uVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
  }
  FUN_1432c55c0(param_1 + 2,uVar1);
  uVar1 = DAT_146b62f28;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
  }
  FUN_1432c55c0(param_1 + 4,uVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xff000000;
  return param_1;
}



// FUNCTION 1433dd660 FUN_1433dd660 body=151 status=ok
// SIG undefined FUN_1433dd660(void)

undefined8 * FUN_1433dd660(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432c54e0(param_1 + 2,param_2 + 0x10,*(undefined8 *)(param_2 + 0x18));
  FUN_1432c54e0(param_1 + 4,param_2 + 0x20,*(undefined8 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
    *piVar1 = *piVar1 + 1;
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  if (*(RefCountImpl **)(param_2 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x38));
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x48);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined2 *)((longlong)param_1 + 0x4c) = *(undefined2 *)(param_2 + 0x4c);
  return param_1;
}



// FUNCTION 1433dd700 FUN_1433dd700 body=161 status=ok
// SIG undefined FUN_1433dd700(void)

void FUN_1433dd700(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *local_res8;
  
  if (*param_1 != 0) {
    local_res8 = param_1;
    FUN_1433dfff0(*param_1 + 0x10,&local_res8);
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  uVar1 = param_1[4];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = param_1[2];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1433dd7b0 FUN_1433dd7b0 body=167 status=ok
// SIG undefined FUN_1433dd7b0(void)

undefined8 * FUN_1433dd7b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = *param_2;
  FUN_1432c4d80(param_1 + 2,param_2 + 2);
  FUN_1432c4d80(param_1 + 4,param_2 + 4);
  if (param_2[6] != 0) {
    piVar1 = (int *)(param_2[6] + 8);
    *piVar1 = *piVar1 + 1;
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  param_1[6] = param_2[6];
  if ((RefCountImpl *)param_2[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[7]);
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined2 *)((longlong)param_1 + 0x4c) = *(undefined2 *)((longlong)param_2 + 0x4c);
  return param_1;
}



// FUNCTION 1433dd860 FUN_1433dd860 body=114 status=ok
// SIG undefined FUN_1433dd860(void)

void FUN_1433dd860(longlong param_1,byte param_2)

{
  if (((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) &&
     ((*(byte *)(param_1 + 0x4a) & 1) != param_2)) {
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
  }
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x10;
    return;
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x10;
  return;
}



// FUNCTION 1433dd8e0 FUN_1433dd8e0 body=116 status=ok
// SIG undefined FUN_1433dd8e0(void)

void FUN_1433dd8e0(longlong param_1,byte param_2)

{
  if (((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) &&
     ((*(byte *)(param_1 + 0x4a) >> 1 & 1) != param_2)) {
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
  }
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 2;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x20;
    return;
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfd;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x20;
  return;
}



// FUNCTION 1433dd960 SetUnderline body=24 status=ok
// SIG undefined SetUnderline(void)

void Scaleform::Render::Text::TextFormat::SetUnderline(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x40;
    return;
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x40;
  return;
}



// FUNCTION 1433dd980 SetKerning body=32 status=ok
// SIG undefined SetKerning(void)

void Scaleform::Render::Text::TextFormat::SetKerning(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 8;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x80;
    return;
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x80;
  return;
}



// FUNCTION 1433dd9b0 thunk_FUN_1433dda30 body=5 status=ok
// SIG undefined thunk_FUN_1433dda30(void)

void thunk_FUN_1433dda30(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  if ((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) {
    lVar2 = FUN_1432c3580(param_1 + 0x10);
    lVar3 = FUN_1432c3580(param_2);
    if ((lVar2 != lVar3) ||
       (iVar1 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                         (char *)((*param_2 & 0xfffffffffffffffc) + 0xc)), iVar1 != 0)) {
      if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
    }
  }
  FUN_1432c4d80(param_1 + 0x10,param_2);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 4;
  pcVar4 = strchr((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),0x2c);
  if (pcVar4 != (char *)0x0) {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xefff;
    return;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x1000;
  return;
}



// FUNCTION 1433dd9c0 SetFontName body=31 status=ok
// SIG undefined SetFontName(void)

void Scaleform::Render::Text::TextFormat::SetFontName
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 == -1) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
  }
  FUN_1433ddb10();
  return;
}



// FUNCTION 1433dd9f0 FUN_1433dd9f0 body=57 status=ok
// SIG undefined FUN_1433dd9f0(void)

void FUN_1433dd9f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == -1) {
    param_3 = Scaleform::SFwcslen(param_2);
  }
  FUN_1433ddc00(param_1,param_2,param_3);
  return;
}



// FUNCTION 1433dda30 FUN_1433dda30 body=217 status=ok
// SIG undefined FUN_1433dda30(void)

void FUN_1433dda30(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  if ((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) {
    lVar2 = FUN_1432c3580(param_1 + 0x10);
    lVar3 = FUN_1432c3580(param_2);
    if ((lVar2 != lVar3) ||
       (iVar1 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                         (char *)((*param_2 & 0xfffffffffffffffc) + 0xc)), iVar1 != 0)) {
      if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
    }
  }
  FUN_1432c4d80(param_1 + 0x10,param_2);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 4;
  pcVar4 = strchr((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),0x2c);
  if (pcVar4 != (char *)0x0) {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xefff;
    return;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x1000;
  return;
}



// FUNCTION 1433ddb10 FUN_1433ddb10 body=229 status=ok
// SIG undefined FUN_1433ddb10(void)

void FUN_1433ddb10(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_3 + param_2) != '\0');
  }
  if ((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) {
    lVar2 = FUN_1432c3580(param_1 + 0x10);
    if (lVar2 == param_3) {
      iVar1 = FUN_1432c42c0((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc,param_2,
                            param_3);
      if (iVar1 == 0) goto LAB_1433ddb93;
    }
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
  }
LAB_1433ddb93:
  FUN_1432c3510(param_1 + 0x10);
  FUN_1432c3950(param_1 + 0x10,param_2,param_3);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 4;
  pcVar3 = strchr((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),0x2c);
  if (pcVar3 == (char *)0x0) {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x1000;
  }
  else {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xefff;
  }
  return;
}



// FUNCTION 1433ddc00 FUN_1433ddc00 body=283 status=ok
// SIG undefined FUN_1433ddc00(void)

void FUN_1433ddc00(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if (param_3 == 0xffffffffffffffff) {
    param_3 = Scaleform::SFwcslen(param_2);
  }
  if ((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) {
    uVar3 = FUN_1432c3580(param_1 + 0x10);
    if (uVar3 == param_3) {
      uVar3 = 0;
      if (param_3 != 0) {
        do {
          iVar1 = FUN_14331b480((int)*(char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc)
                                               + 0xc + uVar3));
          iVar2 = FUN_14331b480(*(undefined2 *)(param_2 + uVar3 * 2));
          if (iVar1 != iVar2) goto LAB_1433ddc8c;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_3);
      }
    }
    else {
LAB_1433ddc8c:
      if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
    }
  }
  FUN_1432c3510(param_1 + 0x10);
  FUN_1432c3830(param_1 + 0x10,param_2,param_3);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 4;
  pcVar4 = strchr((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),0x2c);
  if (pcVar4 != (char *)0x0) {
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xefff;
    return;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x1000;
  return;
}



// FUNCTION 1433ddd30 FUN_1433ddd30 body=132 status=ok
// SIG undefined FUN_1433ddd30(void)

undefined8 * FUN_1433ddd30(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b74550) {
    _Init_thread_header(&DAT_146b74550);
    if (DAT_146b74550 == -1) {
      FUN_1432c2f70(&DAT_146b74548);
      atexit(FUN_143ec4b20);
      _Init_thread_footer(&DAT_146b74550);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x4c) >> 2 & 1) == 0) {
    puVar1 = &DAT_146b74548;
  }
  return puVar1;
}



// FUNCTION 1433dddc0 SetFontHandle body=67 status=ok
// SIG undefined SetFontHandle(void)

void Scaleform::Render::Text::TextFormat::SetFontHandle(longlong param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  *(RefCountImpl **)(param_1 + 0x38) = param_2;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x800;
  return;
}



// FUNCTION 1433dde10 FUN_1433dde10 body=101 status=ok
// SIG undefined FUN_1433dde10(void)

void FUN_1433dde10(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  FUN_1432c3510(param_1 + 0x20);
  FUN_1432c3950(param_1 + 0x20,param_2,param_3);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x100;
  return;
}



// FUNCTION 1433dde80 FUN_1433dde80 body=100 status=ok
// SIG undefined FUN_1433dde80(void)

void FUN_1433dde80(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == -1) {
    param_3 = Scaleform::SFwcslen(param_2);
  }
  FUN_1432c3510(param_1 + 0x20);
  FUN_1432c3830(param_1 + 0x20,param_2,param_3);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x100;
  return;
}



// FUNCTION 1433ddef0 SetUrl body=33 status=ok
// SIG undefined SetUrl(void)

void Scaleform::Render::Text::TextFormat::SetUrl(longlong param_1)

{
  FUN_1432c4d80(param_1 + 0x20);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x100;
  return;
}



// FUNCTION 1433ddf20 FUN_1433ddf20 body=1361 status=ok
// SIG undefined FUN_1433ddf20(void)

undefined8 * FUN_1433ddf20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  RefCountImpl *this;
  RefCountNTSImpl *this_00;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48 [2];
  RefCountNTSImpl *local_38;
  RefCountImpl *local_30;
  uint local_28;
  float local_24;
  ushort local_20;
  byte local_1e;
  ushort local_1c;
  
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_68 = 0;
  local_60 = 1;
  FUN_1432c54e0(&local_58,param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  FUN_1432c54e0(local_48,param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    *piVar1 = *piVar1 + 1;
  }
  local_38 = *(RefCountNTSImpl **)(param_1 + 0x30);
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x38));
  }
  local_28 = *(uint *)(param_1 + 0x40);
  local_30 = *(RefCountImpl **)(param_1 + 0x38);
  local_24 = *(float *)(param_1 + 0x44);
  local_1e = *(byte *)(param_1 + 0x4a);
  local_1c = *(ushort *)(param_1 + 0x4c);
  local_20 = *(ushort *)(param_1 + 0x48);
  if ((*(byte *)(param_3 + 0x4c) >> 4 & 1) != 0) {
    bVar4 = *(byte *)(param_3 + 0x4a) & 1;
    if (((local_1c >> 0xb & 1) != 0) && ((local_1e & 1) != bVar4)) {
      if (local_30 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_30);
      }
      local_30 = (RefCountImpl *)0x0;
      local_1c = local_1c & 0xf7ff;
    }
    if (bVar4 == 0) {
      local_1e = local_1e & 0xfe;
    }
    else {
      local_1e = local_1e | 1;
    }
    local_1c = local_1c | 0x10;
  }
  if ((*(byte *)(param_3 + 0x4c) >> 5 & 1) != 0) {
    bVar4 = *(byte *)(param_3 + 0x4a) >> 1 & 1;
    if (((local_1c >> 0xb & 1) != 0) && ((local_1e >> 1 & 1) != bVar4)) {
      if (local_30 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_30);
      }
      local_30 = (RefCountImpl *)0x0;
      local_1c = local_1c & 0xf7ff;
    }
    if (bVar4 == 0) {
      local_1e = local_1e & 0xfd;
    }
    else {
      local_1e = local_1e | 2;
    }
    local_1c = local_1c | 0x20;
  }
  bVar4 = (byte)*(ushort *)(param_3 + 0x4c);
  if ((bVar4 >> 6 & 1) != 0) {
    if ((*(byte *)(param_3 + 0x4a) & 4) == 0) {
      local_1e = local_1e & 0xfb;
    }
    else {
      local_1e = local_1e | 4;
    }
    local_1c = local_1c | 0x40;
  }
  if ((char)bVar4 < '\0') {
    if ((*(byte *)(param_3 + 0x4a) & 8) == 0) {
      local_1e = local_1e & 0xf7;
    }
    else {
      local_1e = local_1e | 8;
    }
    local_1c = local_1c | 0x80;
  }
  if ((*(byte *)(param_3 + 0x4c) & 1) != 0) {
    local_28 = *(uint *)(param_3 + 0x40);
    local_1c = local_1c | 1;
  }
  if ((*(ushort *)(param_3 + 0x4c) >> 10 & 1) != 0) {
    local_28 = (uint)*(byte *)(param_3 + 0x43) << 0x18 | local_28 & 0xffffff;
    local_1c = local_1c | 0x400;
  }
  if ((bVar4 >> 1 & 1) != 0) {
    local_1c = local_1c | 2;
    local_24 = (float)(int)(short)(int)*(float *)(param_3 + 0x44);
  }
  if ((bVar4 >> 3 & 1) != 0) {
    local_20 = 0xffff;
    if (*(ushort *)(param_3 + 0x48) < 0x10001) {
      local_20 = *(ushort *)(param_3 + 0x48);
    }
    local_1c = local_1c | 8;
  }
  if ((bVar4 >> 2 & 1) != 0) {
    puVar5 = &DAT_146b74548;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b74550) &&
       (_Init_thread_header(&DAT_146b74550), DAT_146b74550 == -1)) {
      FUN_1432c2f70(&DAT_146b74548);
      atexit(FUN_143ec4b20);
      _Init_thread_footer(&DAT_146b74550);
    }
    if ((*(byte *)(param_3 + 0x4c) >> 2 & 1) != 0) {
      puVar5 = (undefined8 *)(param_3 + 0x10);
    }
    FUN_1433dda30(&local_68,puVar5);
  }
  if ((*(ushort *)(param_3 + 0x4c) >> 0xb & 1) != 0) {
    if (*(RefCountImpl **)(param_3 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 0x38));
    }
    this = *(RefCountImpl **)(param_3 + 0x38);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
      Scaleform::RefCountImpl::AddRef(this);
    }
    if (local_30 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_30);
    }
    local_1c = local_1c | 0x800;
    local_30 = this;
  }
  if ((*(ushort *)(param_3 + 0x4c) & 0x100) != 0) {
    lVar3 = FUN_1432c3580(param_3 + 0x20);
    if (lVar3 == 0) {
      FUN_1432c3510(local_48);
      local_1c = local_1c & 0xfeff;
    }
    else if (((*(ushort *)(param_3 + 0x4c) & 0x100) != 0) &&
            (lVar3 = FUN_1432c3580(param_3 + 0x20), lVar3 != 0)) {
      FUN_1432c4d80(local_48,param_3 + 0x20);
      local_1c = local_1c | 0x100;
    }
  }
  if ((*(ushort *)(param_3 + 0x4c) >> 9 & 1) != 0) {
    if (*(longlong *)(param_3 + 0x30) != 0) {
      piVar1 = (int *)(*(longlong *)(param_3 + 0x30) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this_00 = *(RefCountNTSImpl **)(param_3 + 0x30);
    if (this_00 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this_00);
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    if (local_38 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_38);
    }
    local_1c = local_1c | 0x200;
    local_38 = this_00;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1432c54e0(param_2 + 2,&local_58,local_50);
  FUN_1432c54e0(param_2 + 4,local_48,local_50);
  if (local_38 != (RefCountNTSImpl *)0x0) {
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
  }
  param_2[6] = local_38;
  if (local_30 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_30);
  }
  param_2[7] = local_30;
  *(uint *)(param_2 + 8) = local_28;
  *(ushort *)(param_2 + 9) = local_20;
  *(byte *)((longlong)param_2 + 0x4a) = local_1e;
  *(ushort *)((longlong)param_2 + 0x4c) = local_1c;
  *(float *)((longlong)param_2 + 0x44) = local_24;
  if (local_68 != 0) {
    local_res8 = &local_68;
    FUN_1433dfff0(local_68 + 0x10,&local_res8);
  }
  if (local_30 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_30);
  }
  if (local_38 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_38);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48[0] & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_58 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_58 & 0xfffffffffffffffc);
  }
  return param_2;
}



// FUNCTION 1433de480 FUN_1433de480 body=1417 status=ok
// SIG undefined FUN_1433de480(void)

/* WARNING: Removing unreachable block (ram,0x0001433de592) */
/* WARNING: Removing unreachable block (ram,0x0001433de59e) */

undefined8 * FUN_1433de480(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  RefCountImpl *this;
  RefCountNTSImpl *pRVar8;
  RefCountNTSImpl *pRVar9;
  ushort uVar10;
  longlong *plVar11;
  byte bVar12;
  byte bVar13;
  longlong *local_res8;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58 [2];
  RefCountNTSImpl *local_48;
  RefCountImpl *pRStack_40;
  uint local_38;
  float local_34;
  ushort local_30;
  bool local_2e;
  ushort local_2c;
  
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  plVar3 = *(longlong **)(param_3 + 0x18);
  local_78 = 0;
  plVar11 = DAT_146b62f28;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  local_70 = 1;
  FUN_1432c55c0(&local_68,plVar11);
  plVar11 = DAT_146b62f28;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  FUN_1432c55c0(local_58,plVar11);
  uVar10 = 0;
  local_30 = 0;
  bVar12 = (byte)*(ushort *)(param_1 + 0x4c);
  local_34 = 0.0;
  local_48 = (RefCountNTSImpl *)0x0;
  local_38 = 0xff000000;
  local_2e = false;
  local_2c = 0;
  if ((((bVar12 >> 4 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 4 & 1) != 0)) &&
     (bVar13 = *(byte *)(param_3 + 0x4a) & 1, (*(byte *)(param_1 + 0x4a) & 1) == bVar13)) {
    local_2e = bVar13 != 0;
    uVar10 = 0x10;
    local_2c = 0x10;
  }
  if ((((bVar12 >> 5 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 5 & 1) != 0)) &&
     (bVar13 = *(byte *)(param_3 + 0x4a) >> 1 & 1, (*(byte *)(param_1 + 0x4a) >> 1 & 1) == bVar13))
  {
    if (bVar13 != 0) {
      local_2e = (bool)(local_2e | 2);
    }
    uVar10 = uVar10 | 0x20;
    local_2c = uVar10;
  }
  pRStack_40 = (RefCountImpl *)0x0;
  if ((((bVar12 >> 6 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 6 & 1) != 0)) &&
     (((*(byte *)(param_1 + 0x4a) ^ *(byte *)(param_3 + 0x4a)) & 4) == 0)) {
    if ((*(byte *)(param_3 + 0x4a) & 4) != 0) {
      local_2e = (bool)(local_2e | 4);
    }
    uVar10 = uVar10 | 0x40;
    local_2c = uVar10;
  }
  if ((((char)bVar12 < '\0') && (*(char *)(param_3 + 0x4c) < '\0')) &&
     (((*(byte *)(param_1 + 0x4a) ^ *(byte *)(param_3 + 0x4a)) & 8) == 0)) {
    if ((*(byte *)(param_3 + 0x4a) & 8) != 0) {
      local_2e = (bool)(local_2e | 8);
    }
    uVar10 = uVar10 | 0x80;
    local_2c = uVar10;
  }
  if ((((*(byte *)(param_1 + 0x4c) & 1) != 0) && ((*(byte *)(param_3 + 0x4c) & 1) != 0)) &&
     (*(uint *)(param_1 + 0x40) == *(uint *)(param_3 + 0x40))) {
    uVar10 = uVar10 | 1;
    local_38 = *(uint *)(param_3 + 0x40);
    local_2c = uVar10;
  }
  if ((((*(ushort *)(param_1 + 0x4c) >> 10 & 1) != 0) &&
      ((*(ushort *)(param_3 + 0x4c) >> 10 & 1) != 0)) &&
     (*(byte *)(param_1 + 0x43) == *(byte *)(param_3 + 0x43))) {
    local_38 = (uint)*(byte *)(param_3 + 0x43) << 0x18 | local_38 & 0xffffff;
    uVar10 = uVar10 | 0x400;
    local_2c = uVar10;
  }
  if ((((bVar12 >> 1 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 1 & 1) != 0)) &&
     (*(float *)(param_1 + 0x44) * 0.05 == *(float *)(param_3 + 0x44) * 0.05)) {
    uVar10 = uVar10 | 2;
    local_34 = (float)(int)(short)(int)*(float *)(param_3 + 0x44);
    local_2c = uVar10;
  }
  if ((((bVar12 >> 3 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 3 & 1) != 0)) &&
     (uVar2 = *(ushort *)(param_3 + 0x48), *(ushort *)(param_1 + 0x48) == uVar2)) {
    local_30 = 0xffff;
    if (uVar2 < 0x10001) {
      local_30 = uVar2;
    }
    local_2c = uVar10 | 8;
  }
  if ((((bVar12 >> 2 & 1) != 0) && ((*(byte *)(param_3 + 0x4c) >> 2 & 1) != 0)) &&
     (iVar4 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                       (char *)((*(ulonglong *)(param_3 + 0x10) & 0xfffffffffffffffc) + 0xc)),
     iVar4 == 0)) {
    uVar5 = FUN_1433ddd30(param_3);
    FUN_1433dda30(&local_78,uVar5);
  }
  if (((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) &&
     ((*(ushort *)(param_3 + 0x4c) >> 0xb & 1) != 0)) {
    lVar6 = FUN_1433e0b90(param_3);
    lVar7 = FUN_1433e0b90(param_1);
    if (lVar7 == lVar6) {
      this = (RefCountImpl *)FUN_1433e0b90(param_3);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(this);
      }
      if (pRStack_40 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRStack_40);
      }
      local_2c = local_2c | 0x800;
      pRStack_40 = this;
    }
  }
  if (((((*(ushort *)(param_1 + 0x4c) & 0x100) != 0) &&
       (lVar6 = FUN_1432c3580(param_1 + 0x20), lVar6 != 0)) &&
      ((*(ushort *)(param_3 + 0x4c) & 0x100) != 0)) &&
     ((lVar6 = FUN_1432c3580(param_3 + 0x20), lVar6 != 0 &&
      (iVar4 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc) + 0xc),
                        (char *)((*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffffc) + 0xc)),
      iVar4 == 0)))) {
    FUN_1432c4d80(local_58,param_3 + 0x20);
    local_2c = local_2c | 0x100;
  }
  if (((*(ushort *)(param_1 + 0x4c) >> 9 & 1) != 0) && ((*(ushort *)(param_3 + 0x4c) >> 9 & 1) != 0)
     ) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar9 = *(RefCountNTSImpl **)(param_1 + 0x30);
    if (pRVar9 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar9);
    }
    pRVar8 = (RefCountNTSImpl *)FUN_1433e0c20(param_3);
    if (pRVar9 == pRVar8) {
      pRVar9 = (RefCountNTSImpl *)FUN_1433e0c20(param_3);
      if (pRVar9 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
      }
      if (local_48 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_48);
      }
      local_2c = local_2c | 0x200;
      local_48 = pRVar9;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1432c54e0(param_2 + 2,&local_68,local_60);
  FUN_1432c54e0(param_2 + 4,local_58,local_60);
  if (local_48 != (RefCountNTSImpl *)0x0) {
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
  }
  param_2[6] = local_48;
  if (pRStack_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRStack_40);
  }
  param_2[7] = pRStack_40;
  *(uint *)(param_2 + 8) = local_38;
  *(ushort *)(param_2 + 9) = local_30;
  *(bool *)((longlong)param_2 + 0x4a) = local_2e;
  *(ushort *)((longlong)param_2 + 0x4c) = local_2c;
  *(float *)((longlong)param_2 + 0x44) = local_34;
  if (local_78 != 0) {
    local_res8 = &local_78;
    FUN_1433dfff0(local_78 + 0x10,&local_res8);
  }
  if (pRStack_40 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_40);
  }
  if (local_48 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_48);
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_58[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_58[0] & 0xfffffffffffffffc);
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_68 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68 & 0xfffffffffffffffc);
  }
  return param_2;
}



// FUNCTION 1433dea10 FUN_1433dea10 body=155 status=ok
// SIG undefined FUN_1433dea10(void)

ulonglong FUN_1433dea10(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(param_1 + 0x4c) >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0x4c) >> 2 & 1) == 0)) {
LAB_1433dea57:
    uVar2 = 0;
    if ((((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) == 0) ||
        (uVar2 = 0, (*(ushort *)(param_2 + 0x4c) >> 0xb & 1) == 0)) ||
       (uVar2 = *(ulonglong *)(param_2 + 0x38), *(ulonglong *)(param_1 + 0x38) != uVar2))
    goto LAB_1433dea9e;
  }
  else {
    iVar1 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                     (char *)((*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc) + 0xc));
    if (iVar1 != 0) goto LAB_1433dea57;
  }
  uVar2 = 0;
  if ((((*(byte *)(param_1 + 0x4a) ^ *(byte *)(param_2 + 0x4a)) & 1) == 0) &&
     (((*(byte *)(param_1 + 0x4a) ^ *(byte *)(param_2 + 0x4a)) & 2) == 0)) {
    return 1;
  }
LAB_1433dea9e:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1433deac0 FUN_1433deac0 body=238 status=ok
// SIG undefined FUN_1433deac0(void)

ulonglong FUN_1433deac0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((((((*(byte *)(param_1 + 0x4c) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x4c) >> 2 & 1) != 0))
       && (iVar1 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                            (char *)((*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc) + 0xc)),
          iVar1 == 0)) ||
      (((uVar3 = 0, (*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0 &&
        (uVar3 = 0, (*(ushort *)(param_2 + 0x4c) >> 0xb & 1) != 0)) &&
       (uVar3 = *(ulonglong *)(param_2 + 0x38), *(ulonglong *)(param_1 + 0x38) == uVar3)))) &&
     (((uVar2 = *(uint *)(param_2 + 0x40) ^ *(uint *)(param_1 + 0x40), uVar3 = (ulonglong)uVar2,
       (uVar2 & 0xffffff) == 0 &&
       (uVar3 = 0, *(char *)(param_1 + 0x43) == *(char *)(param_2 + 0x43))) &&
      ((uVar3 = (ulonglong)*(ushort *)(param_2 + 0x48),
       (float)*(ushort *)(param_1 + 0x48) * 0.05 == (float)*(ushort *)(param_2 + 0x48) * 0.05 &&
       ((uVar3 = 0, ((*(byte *)(param_2 + 0x4a) ^ *(byte *)(param_1 + 0x4a)) & 8) == 0 &&
        (*(float *)(param_1 + 0x44) * 0.05 == *(float *)(param_2 + 0x44) * 0.05)))))))) {
    return 1;
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433debc0 FUN_1433debc0 body=255 status=ok
// SIG undefined FUN_1433debc0(void)

void FUN_1433debc0(longlong param_1)

{
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xff000000;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 1;
  FUN_1433ddb10(param_1,"Times New Roman",0xffffffffffffffff);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 8;
  *(undefined2 *)(param_1 + 0x48) = 0xf0;
  if (((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) && ((*(byte *)(param_1 + 0x4a) & 1) != 0)) {
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0x10;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  if (((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) != 0) && ((*(byte *)(param_1 + 0x4a) & 2) != 0)) {
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xf7ff;
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf1;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 0xe0;
  if (*(RefCountNTSImpl **)(param_1 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0xff000000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xfbfd | 0x200;
  FUN_1432c3510(param_1 + 0x20);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xfeff;
  return;
}



// FUNCTION 1433decd0 FUN_1433decd0 body=272 status=ok
// SIG undefined FUN_1433decd0(void)

ulonglong FUN_1433decd0(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x22);
  bVar6 = (byte)uVar1;
  uVar3 = 0;
  if (((bVar6 >> 6 & 1) != 0) &&
     (piVar2 = *(int **)(param_1 + 0x10), uVar3 = 0, piVar2 != (int *)0x0)) {
    uVar3 = 0x1505;
    uVar4 = (ulonglong)(*piVar2 + 1) << 2;
    uVar5 = (ulonglong)(*piVar2 + 1);
    while (uVar5 != 0) {
      uVar3 = uVar3 * 0x1003f + (ulonglong)*(byte *)((longlong)piVar2 + (uVar4 - 1));
      uVar4 = uVar4 - 1;
      uVar5 = uVar4;
    }
  }
  if ((bVar6 >> 1 & 1) != 0) {
    uVar3 = uVar3 ^ *(ushort *)(param_1 + 0x18);
  }
  if ((bVar6 >> 2 & 1) != 0) {
    uVar3 = uVar3 ^ (longlong)*(short *)(param_1 + 0x1a) << 8;
  }
  if ((bVar6 >> 3 & 1) != 0) {
    uVar3 = uVar3 ^ (longlong)*(short *)(param_1 + 0x1c) << 0xc;
  }
  if ((bVar6 >> 4 & 1) != 0) {
    uVar3 = uVar3 ^ (ulonglong)*(ushort *)(param_1 + 0x1e) << 0x10;
  }
  if ((bVar6 >> 5 & 1) != 0) {
    uVar3 = uVar3 ^ (ulonglong)*(ushort *)(param_1 + 0x20) << 0x12;
  }
  return uVar3 ^ ((ulonglong)(uVar1 >> 8 & 6) | (ulonglong)uVar1 << 9 |
                 (ulonglong)((uVar1 & 0x8080) == 0x8080)) ^ (ulonglong)(uVar1 >> 1 & 0xc00);
}



// FUNCTION 1433dedf0 FUN_1433dedf0 body=67 status=ok
// SIG undefined FUN_1433dedf0(void)

void FUN_1433dedf0(longlong *param_1)

{
  longlong *local_res8 [4];
  
  if (*param_1 != 0) {
    local_res8[0] = param_1;
    FUN_1433dfeb0(*param_1 + 0x18,local_res8);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[2]);
  param_1[2] = 0;
  return;
}



// FUNCTION 1433dee40 FUN_1433dee40 body=241 status=ok
// SIG undefined FUN_1433dee40(void)

void FUN_1433dee40(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_res10[0] = param_2;
  if (param_2 != 0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar3 = 0;
    if ((puVar2 == (uint *)0x0) || (*puVar2 != param_2)) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
      uVar4 = local_res10[0];
      *(undefined8 *)(param_1 + 0x10) = 0;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar2 = (uint *)(**(code **)(*DAT_146b62f28 + 0x50))
                                 (DAT_146b62f28,(ulonglong)(uVar4 + 1) << 2,0);
      *(uint **)(param_1 + 0x10) = puVar2;
      *puVar2 = uVar4;
    }
    if (local_res10[0] != 0) {
      puVar2 = local_res10;
      do {
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
        puVar1 = puVar2 + 2;
        puVar2 = puVar2 + 2;
        *(uint *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4) = *puVar1;
      } while (uVar4 < local_res10[0]);
    }
    *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) | 0x40;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xffbf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1433def40 GetTabStops body=28 status=ok
// SIG undefined GetTabStops(void)

longlong Scaleform::Render::Text::ParagraphFormat::GetTabStops(longlong param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x10);
    }
    return *(longlong *)(param_1 + 0x10) + 4;
  }
  return 0;
}



// FUNCTION 1433def70 FUN_1433def70 body=75 status=ok
// SIG undefined FUN_1433def70(void)

void FUN_1433def70(longlong param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    FUN_1433df7d0();
    *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) | 0x40;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xffbf;
  return;
}



// FUNCTION 1433defd0 SetTabStopsElement body=22 status=ok
// SIG undefined SetTabStopsElement(void)

void Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement
               (longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if ((puVar1 != (uint *)0x0) && (param_2 < *puVar1)) {
    puVar1[param_2 + 1] = param_3;
  }
  return;
}



// FUNCTION 1433deff0 FUN_1433deff0 body=727 status=ok
// SIG undefined FUN_1433deff0(void)

undefined8 * FUN_1433deff0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  byte bVar4;
  longlong *local_res8;
  longlong local_48;
  undefined4 local_40;
  uint *local_38;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  ushort local_26;
  
  local_30 = *(undefined2 *)(param_1 + 0x18);
  local_2e = *(undefined2 *)(param_1 + 0x1a);
  local_2c = *(undefined2 *)(param_1 + 0x1c);
  local_2a = *(undefined2 *)(param_1 + 0x1e);
  local_28 = *(undefined2 *)(param_1 + 0x20);
  local_26 = *(ushort *)(param_1 + 0x22);
  puVar2 = *(uint **)(param_1 + 0x10);
  local_48 = 0;
  local_40 = 1;
  local_38 = (uint *)0x0;
  if (puVar2 == (uint *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
    local_38 = (uint *)0x0;
  }
  else {
    uVar1 = *puVar2;
    (**(code **)(*DAT_146b62f28 + 0x60))();
    local_38 = (uint *)0x0;
    local_38 = (uint *)(**(code **)(*DAT_146b62f28 + 0x50))
                                 (DAT_146b62f28,(ulonglong)(uVar1 + 1) << 2,0);
    *local_38 = uVar1;
    _guard_xfg_dispatch_icall_nop(local_38 + 1,puVar2 + 1,(ulonglong)uVar1 << 2);
  }
  if ((*(byte *)(param_3 + 0x22) & 1) != 0) {
    local_26 = (*(ushort *)(param_3 + 0x22) ^ local_26) & 0x600 ^ local_26 | 1;
  }
  bVar4 = (byte)*(ushort *)(param_3 + 0x22);
  if ((char)bVar4 < '\0') {
    uVar3 = local_26 & 0x7fff;
    if ((*(ushort *)(param_3 + 0x22) & 0x8080) == 0x8080) {
      uVar3 = local_26 | 0x8000;
    }
    local_26 = uVar3 | 0x80;
  }
  if ((bVar4 >> 1 & 1) != 0) {
    local_30 = *(undefined2 *)(param_3 + 0x18);
    local_26 = local_26 | 2;
  }
  if ((bVar4 >> 2 & 1) != 0) {
    local_2e = *(undefined2 *)(param_3 + 0x1a);
    local_26 = local_26 | 4;
  }
  if ((bVar4 >> 3 & 1) != 0) {
    local_2c = *(undefined2 *)(param_3 + 0x1c);
    local_26 = local_26 | 8;
  }
  if ((bVar4 >> 4 & 1) != 0) {
    local_2a = *(undefined2 *)(param_3 + 0x1e);
    local_26 = local_26 | 0x10;
  }
  if ((bVar4 >> 5 & 1) != 0) {
    local_28 = *(undefined2 *)(param_3 + 0x20);
    local_26 = local_26 | 0x20;
  }
  if ((bVar4 >> 6 & 1) != 0) {
    if ((*(int **)(param_3 + 0x10) == (int *)0x0) || (**(int **)(param_3 + 0x10) == 0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38);
      local_26 = local_26 & 0xffbf;
      local_38 = (uint *)0x0;
    }
    else {
      FUN_1433df7d0(&local_48);
      local_26 = local_26 | 0x40;
    }
  }
  if ((*(ushort *)(param_3 + 0x22) >> 8 & 1) != 0) {
    local_26 = local_26 ^ (*(ushort *)(param_3 + 0x22) ^ local_26) & 0x1800 | 0x100;
  }
  *(undefined2 *)(param_2 + 3) = local_30;
  *(undefined2 *)((longlong)param_2 + 0x1a) = local_2e;
  *(undefined2 *)((longlong)param_2 + 0x1c) = local_2c;
  *(undefined2 *)((longlong)param_2 + 0x1e) = local_2a;
  *(ushort *)((longlong)param_2 + 0x22) = local_26;
  *(undefined2 *)(param_2 + 4) = local_28;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  param_2[2] = 0;
  FUN_1433df7d0(param_2,local_38);
  if (local_48 != 0) {
    local_res8 = &local_48;
    FUN_1433dfeb0(local_48 + 0x18,&local_res8);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38);
  return param_2;
}



// FUNCTION 1433df2d0 FUN_1433df2d0 body=856 status=ok
// SIG undefined FUN_1433df2d0(void)

undefined8 * FUN_1433df2d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *local_res8;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  short local_38;
  ushort local_36;
  
  uVar7 = 0;
  local_36 = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if ((((*(byte *)(param_1 + 0x22) & 1) != 0) && ((*(byte *)(param_3 + 0x22) & 1) != 0)) &&
     (((*(ushort *)(param_3 + 0x22) ^ *(ushort *)(param_1 + 0x22)) & 0x600) == 0)) {
    local_36 = *(ushort *)(param_3 + 0x22) & 0x600 | 1;
  }
  bVar5 = (byte)*(ushort *)(param_1 + 0x22);
  if ((((char)bVar5 < '\0') && ((char)*(ushort *)(param_3 + 0x22) < '\0')) &&
     (uVar6 = *(ushort *)(param_3 + 0x22) & 0x8080,
     ((*(ushort *)(param_1 + 0x22) & 0x8080) == 0x8080) == (uVar6 == 0x8080))) {
    if (uVar6 == 0x8080) {
      local_36 = local_36 | 0x8000;
    }
    local_36 = local_36 | 0x80;
  }
  if ((((bVar5 >> 1 & 1) != 0) && ((*(byte *)(param_3 + 0x22) >> 1 & 1) != 0)) &&
     (*(ushort *)(param_1 + 0x18) == *(ushort *)(param_3 + 0x18))) {
    local_36 = local_36 | 2;
    local_40 = (ulonglong)*(ushort *)(param_3 + 0x18);
  }
  if ((((bVar5 >> 2 & 1) != 0) && ((*(byte *)(param_3 + 0x22) >> 2 & 1) != 0)) &&
     (*(short *)(param_1 + 0x1a) == *(short *)(param_3 + 0x1a))) {
    local_36 = local_36 | 4;
    local_40._0_4_ = CONCAT22(*(short *)(param_3 + 0x1a),(undefined2)local_40);
    local_40 = (ulonglong)(uint)local_40;
  }
  if ((((bVar5 >> 3 & 1) != 0) && ((*(byte *)(param_3 + 0x22) >> 3 & 1) != 0)) &&
     (*(short *)(param_1 + 0x1c) == *(short *)(param_3 + 0x1c))) {
    local_36 = local_36 | 8;
    local_40._0_6_ = CONCAT24(*(short *)(param_3 + 0x1c),(uint)local_40);
    local_40 = (ulonglong)(uint6)local_40;
  }
  if ((((bVar5 >> 4 & 1) != 0) && ((*(byte *)(param_3 + 0x22) >> 4 & 1) != 0)) &&
     (*(short *)(param_1 + 0x1e) == *(short *)(param_3 + 0x1e))) {
    local_36 = local_36 | 0x10;
    local_40 = CONCAT26(*(short *)(param_3 + 0x1e),(uint6)local_40);
  }
  if ((((bVar5 >> 5 & 1) != 0) && ((*(byte *)(param_3 + 0x22) >> 5 & 1) != 0)) &&
     (*(short *)(param_1 + 0x20) == *(short *)(param_3 + 0x20))) {
    local_36 = local_36 | 0x20;
    local_38 = *(short *)(param_3 + 0x20);
  }
  uVar6 = local_36;
  uVar8 = 0;
  if (((bVar5 >> 6 & 1) != 0) && (uVar8 = uVar7, (*(byte *)(param_3 + 0x22) >> 6 & 1) != 0)) {
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar3 = *(uint **)(param_3 + 0x10);
    if ((puVar2 == puVar3) ||
       (((uVar8 = 0, puVar2 != (uint *)0x0 && (uVar8 = uVar7, puVar3 != (uint *)0x0)) &&
        ((*puVar2 == *puVar3 &&
         (iVar4 = _guard_xfg_dispatch_icall_nop(puVar2 + 1,puVar3 + 1,(ulonglong)*puVar2 << 2),
         iVar4 == 0)))))) {
      if ((puVar3 == (uint *)0x0) || (*puVar3 == 0)) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
        uVar6 = local_36 & 0xffbf;
        local_48 = 0;
        uVar8 = local_48;
        local_36 = uVar6;
      }
      else {
        FUN_1433df7d0(&local_58,puVar3);
        uVar6 = local_36 | 0x40;
        uVar8 = local_48;
        local_36 = uVar6;
      }
    }
  }
  if ((((*(ushort *)(param_1 + 0x22) >> 8 & 1) != 0) &&
      (uVar1 = *(ushort *)(param_3 + 0x22), (uVar1 >> 8 & 1) != 0)) &&
     (((*(ushort *)(param_1 + 0x22) ^ uVar1) & 0x1800) == 0)) {
    uVar6 = uVar6 ^ (uVar1 ^ uVar6) & 0x1800 | 0x100;
    local_36 = uVar6;
  }
  *(undefined2 *)(param_2 + 3) = (undefined2)local_40;
  *(undefined2 *)((longlong)param_2 + 0x1a) = local_40._2_2_;
  *(undefined2 *)((longlong)param_2 + 0x1c) = local_40._4_2_;
  *(undefined2 *)((longlong)param_2 + 0x1e) = local_40._6_2_;
  *(short *)(param_2 + 4) = local_38;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  param_2[2] = 0;
  *(ushort *)((longlong)param_2 + 0x22) = uVar6;
  FUN_1433df7d0(param_2,uVar8);
  if (local_58 != 0) {
    local_res8 = &local_58;
    FUN_1433dfeb0(local_58 + 0x18,&local_res8);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48);
  return param_2;
}



// FUNCTION 1433df630 operator= body=75 status=ok
// SIG undefined operator=(void)

longlong Scaleform::Render::Text::ParagraphFormat::operator=(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  FUN_1433df7d0(param_1,*(undefined8 *)(param_2 + 0x10));
  return param_1;
}



// FUNCTION 1433df690 FUN_1433df690 body=84 status=ok
// SIG undefined FUN_1433df690(void)

void FUN_1433df690(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0x7940 | 1;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xffbf;
  return;
}



// FUNCTION 1433df6f0 FUN_1433df6f0 body=81 status=ok
// SIG undefined FUN_1433df6f0(void)

void FUN_1433df6f0(longlong param_1,int param_2)

{
  int *piVar1;
  
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar1 = (int *)(**(code **)(*DAT_146b62f28 + 0x50))
                            (DAT_146b62f28,(ulonglong)(param_2 + 1) << 2,0);
  *(int **)(param_1 + 0x10) = piVar1;
  *piVar1 = param_2;
  return;
}



// FUNCTION 1433df750 FreeTabStops body=40 status=ok
// SIG undefined FreeTabStops(void)

void Scaleform::Render::Text::ParagraphFormat::FreeTabStops(longlong param_1)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1433df780 FUN_1433df780 body=73 status=ok
// SIG undefined FUN_1433df780(void)

bool FUN_1433df780(longlong param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar1 == param_2) {
    return true;
  }
  if ((puVar1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    if (*puVar1 == *param_2) {
      iVar2 = _guard_xfg_dispatch_icall_nop(puVar1 + 1,param_2 + 1,(ulonglong)*puVar1 << 2);
      return iVar2 == 0;
    }
  }
  return false;
}



// FUNCTION 1433df7d0 FUN_1433df7d0 body=167 status=ok
// SIG undefined FUN_1433df7d0(void)

void FUN_1433df7d0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) || (**(uint **)(param_1 + 0x10) != uVar1)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar2 = (uint *)(**(code **)(*DAT_146b62f28 + 0x50))
                                 (DAT_146b62f28,(ulonglong)(uVar1 + 1) << 2,0);
      *(uint **)(param_1 + 0x10) = puVar2;
      *puVar2 = uVar1;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x10) + 4),param_2 + 1,(ulonglong)uVar1 << 2);
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1433df880 FUN_1433df880 body=28 status=ok
// SIG undefined FUN_1433df880(void)

void FUN_1433df880(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1433dfff0(param_1 + 0x10,local_res10);
  return;
}



// FUNCTION 1433df8b0 FUN_1433df8b0 body=28 status=ok
// SIG undefined FUN_1433df8b0(void)

void FUN_1433df8b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1433dfeb0(param_1 + 0x18,local_res10);
  return;
}



// FUNCTION 1433df8e0 FUN_1433df8e0 body=432 status=ok
// SIG undefined FUN_1433df8e0(void)

longlong FUN_1433df8e0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong local_res10;
  
  if ((*(ushort *)(param_2 + 0x4c) >> 9 & 1) == 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_1433dd3d0(param_2);
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(ulonglong *)(lVar3 + 8) & uVar1;
      lVar2 = uVar1 * 3 + 2;
      puVar4 = (ulonglong *)(lVar3 + lVar2 * 8);
      if ((*(longlong *)(lVar3 + lVar2 * 8) != -2) && (uVar5 = uVar1, puVar4[1] == uVar1)) {
        while ((puVar4[1] != uVar1 || (puVar4[2] != param_2))) {
          uVar5 = *puVar4;
          if (uVar5 == 0xffffffffffffffff) goto LAB_1433df983;
          puVar4 = (ulonglong *)(lVar3 + uVar5 * 0x18 + 0x10);
        }
        if ((-1 < (longlong)uVar5) &&
           (plVar6 = (longlong *)(lVar3 + uVar5 * 0x18 + 0x20), plVar6 != (longlong *)0x0)) {
          *(int *)(*plVar6 + 8) = *(int *)(*plVar6 + 8) + 1;
          return *plVar6;
        }
      }
    }
LAB_1433df983:
    uVar1 = 0;
    if (*(ulonglong **)(param_1 + 0x10) != (ulonglong *)0x0) {
      uVar1 = **(ulonglong **)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x20) <= uVar1) {
      FUN_1433dfc00(param_1,0);
    }
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))(*(longlong **)(param_1 + 0x30),0x50)
  ;
  if (lVar2 == 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = FUN_1433dd660(lVar2,param_2,param_1);
  }
  lVar2 = local_res10;
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && ((*(ushort *)(local_res10 + 0x4c) >> 0xb & 1) != 0))
  {
    if (*(RefCountImpl **)(local_res10 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(local_res10 + 0x38));
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(ushort *)(lVar2 + 0x4c) = *(ushort *)(lVar2 + 0x4c) & 0xf7ff;
  }
  if ((*(ushort *)(param_2 + 0x4c) >> 9 & 1) == 0) {
    plVar6 = (longlong *)(param_1 + 0x10);
    uVar1 = FUN_1433dd3d0(lVar2);
    if (*plVar6 != 0) {
      lVar3 = FUN_1433e0780(plVar6,&local_res10,*(ulonglong *)(*plVar6 + 8) & uVar1);
      if (-1 < lVar3) {
        *(longlong *)(*plVar6 + 0x20 + lVar3 * 0x18) = lVar2;
        return lVar2;
      }
    }
    FUN_1433e02b0(plVar6,plVar6,&local_res10,uVar1);
  }
  return lVar2;
}



// FUNCTION 1433dfaa0 FUN_1433dfaa0 body=337 status=ok
// SIG undefined FUN_1433dfaa0(void)

ulonglong FUN_1433dfaa0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong local_res8;
  
  puVar2 = *(ulonglong **)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (puVar2 != (ulonglong *)0x0) {
    uVar3 = FUN_1433decd0(param_2);
    uVar3 = uVar3 & puVar2[1];
    lVar4 = uVar3 * 3 + 2;
    puVar7 = puVar2 + lVar4;
    if ((puVar2[lVar4] != 0xfffffffffffffffe) && (uVar5 = uVar3, puVar7[1] == uVar3)) {
      while ((puVar7[1] != uVar3 || (puVar7[2] != param_2))) {
        uVar5 = *puVar7;
        if (uVar5 == 0xffffffffffffffff) goto LAB_1433dfb39;
        puVar7 = puVar2 + uVar5 * 3 + 2;
      }
      if ((-1 < (longlong)uVar5) && (puVar7 = puVar2 + uVar5 * 3 + 4, puVar7 != (ulonglong *)0x0)) {
        *(int *)(*puVar7 + 8) = *(int *)(*puVar7 + 8) + 1;
        return *puVar7;
      }
    }
  }
LAB_1433dfb39:
  uVar3 = 0;
  if (puVar2 != (ulonglong *)0x0) {
    uVar3 = *puVar2;
  }
  if (*(uint *)(param_1 + 0x24) <= uVar3) {
    FUN_1433dfce0(param_1,0);
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))(*(longlong **)(param_1 + 0x30),0x28)
  ;
  if (lVar4 == 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = FUN_1433e0830(lVar4,param_2,param_1);
  }
  uVar3 = local_res8;
  uVar5 = FUN_1433decd0(local_res8);
  lVar4 = *plVar1;
  if ((lVar4 == 0) ||
     (lVar6 = FUN_1433e06e0(plVar1,&local_res8,*(ulonglong *)(lVar4 + 8) & uVar5), lVar6 < 0)) {
    FUN_1433e0140(plVar1,plVar1,&local_res8,uVar5);
  }
  else {
    *(ulonglong *)(lVar4 + 0x20 + lVar6 * 0x18) = uVar3;
  }
  return uVar3;
}



// FUNCTION 1433dfc00 FUN_1433dfc00 body=210 status=ok
// SIG undefined FUN_1433dfc00(void)

undefined8 FUN_1433dfc00(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar4 = 0;
  uVar5 = uVar4;
  if (puVar1 != (ulonglong *)0x0) {
    uVar5 = *puVar1;
  }
  if (param_2 == '\0') {
    uVar2 = uVar4;
    if (puVar1 != (ulonglong *)0x0) {
      uVar2 = *puVar1;
    }
    uVar3 = uVar4;
    if (*(ulonglong **)(param_1 + 0x10) != (ulonglong *)0x0) {
      uVar3 = **(ulonglong **)(param_1 + 0x10);
    }
    if (uVar3 < uVar2 * 5 >> 2) {
      FUN_1433e0e30(param_1 + 0x10,param_1 + 0x10);
    }
  }
  uVar2 = uVar4;
  if (*(ulonglong **)(param_1 + 0x10) != (ulonglong *)0x0) {
    uVar2 = **(ulonglong **)(param_1 + 0x10);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    if ((puVar1 == (ulonglong *)0x0) || (*puVar1 < 0x65)) {
      *(undefined4 *)(param_1 + 0x20) = 100;
    }
  }
  else if (puVar1 == (ulonglong *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 10;
  }
  else {
    *(int *)(param_1 + 0x20) = (int)*puVar1 + 10;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if (puVar1 != (ulonglong *)0x0) {
    uVar4 = *puVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar5 != uVar4);
}



// FUNCTION 1433dfce0 FUN_1433dfce0 body=210 status=ok
// SIG undefined FUN_1433dfce0(void)

undefined8 FUN_1433dfce0(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  uVar4 = 0;
  uVar5 = uVar4;
  if (puVar1 != (ulonglong *)0x0) {
    uVar5 = *puVar1;
  }
  if (param_2 == '\0') {
    uVar2 = uVar4;
    if (puVar1 != (ulonglong *)0x0) {
      uVar2 = *puVar1;
    }
    uVar3 = uVar4;
    if (*(ulonglong **)(param_1 + 0x18) != (ulonglong *)0x0) {
      uVar3 = **(ulonglong **)(param_1 + 0x18);
    }
    if (uVar3 < uVar2 * 5 >> 2) {
      FUN_1433e0ce0(param_1 + 0x18,param_1 + 0x18);
    }
  }
  uVar2 = uVar4;
  if (*(ulonglong **)(param_1 + 0x18) != (ulonglong *)0x0) {
    uVar2 = **(ulonglong **)(param_1 + 0x18);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  if (uVar2 < *(uint *)(param_1 + 0x24)) {
    if ((puVar1 == (ulonglong *)0x0) || (*puVar1 < 0x65)) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
  }
  else if (puVar1 == (ulonglong *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 10;
  }
  else {
    *(int *)(param_1 + 0x24) = (int)*puVar1 + 10;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  if (puVar1 != (ulonglong *)0x0) {
    uVar4 = *puVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar5 != uVar4);
}



// FUNCTION 1433dfdc0 FUN_1433dfdc0 body=234 status=ok
// SIG undefined FUN_1433dfdc0(void)

void FUN_1433dfdc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar6 = (longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar5 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar5 = 0;
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar6 == (longlong *)0x0) || (lVar1 = *plVar6, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar5)) {
        return;
      }
      if ((*(longlong *)(uVar5 * 0x18 + 0x20 + lVar1) == 0) ||
         (cVar3 = (**(code **)(*param_2 + 8))(param_2), cVar3 == '\0')) {
        FUN_1433dfff0(plVar6,*plVar6 + 0x20 + uVar5 * 0x18);
      }
      uVar2 = *(ulonglong *)(*plVar6 + 8);
    } while (((longlong)uVar2 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar2 < uVar5));
    plVar4 = (longlong *)(*plVar6 + uVar5 * 0x18 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 1433dfeb0 FUN_1433dfeb0 body=310 status=ok
// SIG undefined FUN_1433dfeb0(void)

ulonglong FUN_1433dfeb0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *param_2;
  uVar3 = FUN_1433decd0(uVar1);
  uVar5 = uVar3 & *(ulonglong *)(lVar4 + 8);
  puVar7 = (ulonglong *)(lVar4 + 0x10 + uVar5 * 0x18);
  if ((*(longlong *)(lVar4 + 0x10 + uVar5 * 0x18) != -2) && (puVar7[1] == uVar5)) {
    uVar2 = uVar5;
    uVar8 = 0xffffffffffffffff;
    while( true ) {
      uVar6 = uVar2;
      if ((puVar7[1] == uVar5) &&
         ((uVar2 = puVar7[2], uVar1 == uVar2 ||
          (((uVar2 != 0 && (uVar1 != 0)) &&
           (uVar3 = Scaleform::Render::Text::ParagraphFormat::operator==(uVar2,uVar1),
           (char)uVar3 != '\0')))))) {
        uVar1 = *puVar7;
        if (uVar5 == uVar6) {
          if (uVar1 != 0xffffffffffffffff) {
            *puVar7 = 0xfffffffffffffffe;
            lVar4 = uVar1 * 0x18 + lVar4;
            *puVar7 = *(ulonglong *)(lVar4 + 0x10);
            puVar7[1] = *(ulonglong *)(lVar4 + 0x18);
            puVar7[2] = *(ulonglong *)(lVar4 + 0x20);
            puVar7 = (ulonglong *)(lVar4 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar4 + 0x10 + uVar8 * 0x18) = uVar1;
        }
        *puVar7 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar2 = *puVar7;
      if (uVar2 == 0xffffffffffffffff) break;
      uVar3 = uVar2 * 3;
      puVar7 = (ulonglong *)(lVar4 + 0x10 + uVar2 * 0x18);
      uVar8 = uVar6;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433dfff0 FUN_1433dfff0 body=323 status=ok
// SIG undefined FUN_1433dfff0(void)

ulonglong FUN_1433dfff0(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = FUN_1433dd3d0(*param_2);
  lVar1 = *param_1 + 0x10;
  uVar4 = *(ulonglong *)(*param_1 + 8) & uVar4;
  uVar5 = uVar4 * 3;
  puVar7 = (ulonglong *)(lVar1 + uVar4 * 0x18);
  if ((*(longlong *)(lVar1 + uVar4 * 0x18) != -2) && (puVar7[1] == uVar4)) {
    uVar2 = uVar4;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar6 = uVar2;
      if (puVar7[1] == uVar4) {
        if ((*param_2 == puVar7[2]) ||
           (((puVar7[2] != 0 && (*param_2 != 0)) && (uVar5 = FUN_1433e0a10(), (char)uVar5 != '\0')))
           ) {
          uVar5 = *puVar7;
          if (uVar4 == uVar6) {
            if (uVar5 != 0xffffffffffffffff) {
              uVar4 = *param_1;
              *puVar7 = 0xfffffffffffffffe;
              lVar1 = uVar4 + uVar5 * 0x18;
              *puVar7 = *(ulonglong *)(uVar4 + 0x10 + uVar5 * 0x18);
              puVar7[1] = *(ulonglong *)(lVar1 + 0x18);
              puVar7[2] = *(ulonglong *)(lVar1 + 0x20);
              puVar7 = (ulonglong *)(lVar1 + 0x10);
            }
          }
          else {
            *(ulonglong *)(*param_1 + 0x10 + uVar8 * 0x18) = uVar5;
          }
          *puVar7 = 0xfffffffffffffffe;
          plVar3 = (longlong *)*param_1;
          *plVar3 = *plVar3 + -1;
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
      }
      uVar2 = *puVar7;
      if (uVar2 == 0xffffffffffffffff) {
        return uVar5 & 0xffffffffffffff00;
      }
      uVar5 = *param_1;
      puVar7 = (ulonglong *)(uVar5 + uVar2 * 0x18 + 0x10);
      uVar8 = uVar6;
    } while( true );
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1433e0140 FUN_1433e0140 body=353 status=ok
// SIG undefined FUN_1433e0140(void)

void FUN_1433e0140(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433e019c;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1433e0ce0(param_1,param_2,lVar10);
LAB_1433e019c:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    uVar6 = *param_3;
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar8 = uVar9;
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return;
}



// FUNCTION 1433e02b0 FUN_1433e02b0 body=353 status=ok
// SIG undefined FUN_1433e02b0(void)

void FUN_1433e02b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433e030c;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1433e0e30(param_1,param_2,lVar10);
LAB_1433e030c:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    uVar6 = *param_3;
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar8 = uVar9;
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return;
}



// FUNCTION 1433e0420 FUN_1433e0420 body=337 status=ok
// SIG undefined FUN_1433e0420(void)

void FUN_1433e0420(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433e0474;
    lVar9 = plVar3[1] * 2 + 2;
  }
  FUN_1433e0ce0(param_1,param_2,lVar9);
LAB_1433e0474:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar9 = lVar4 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar9 + 0x20) = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar8 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar8 * 0x18) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar1 = *(ulonglong *)(lVar9 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return;
}



// FUNCTION 1433e0580 FUN_1433e0580 body=337 status=ok
// SIG undefined FUN_1433e0580(void)

void FUN_1433e0580(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433e05d4;
    lVar9 = plVar3[1] * 2 + 2;
  }
  FUN_1433e0e30(param_1,param_2,lVar9);
LAB_1433e05d4:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar9 = lVar4 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar9 + 0x20) = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar8 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar8 * 0x18) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar1 = *(ulonglong *)(lVar9 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      *(undefined8 *)(lVar9 + 0x20) = *param_3;
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return;
}



// FUNCTION 1433e06e0 FUN_1433e06e0 body=160 status=ok
// SIG undefined FUN_1433e06e0(void)

longlong FUN_1433e06e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = lVar1 + 0x10;
  plVar3 = (longlong *)(lVar4 + param_3 * 0x18);
  if ((*(longlong *)(lVar4 + param_3 * 0x18) != -2) && (lVar4 = param_3, plVar3[1] == param_3)) {
    while( true ) {
      if (plVar3[1] == param_3) {
        if (*param_2 == plVar3[2]) {
          return lVar4;
        }
        if (((plVar3[2] != 0) && (*param_2 != 0)) &&
           (cVar2 = Scaleform::Render::Text::ParagraphFormat::operator==(), cVar2 != '\0')) {
          return lVar4;
        }
      }
      lVar4 = *plVar3;
      if (lVar4 == -1) break;
      plVar3 = (longlong *)(lVar1 + 0x10 + lVar4 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1433e0780 FUN_1433e0780 body=165 status=ok
// SIG undefined FUN_1433e0780(void)

longlong FUN_1433e0780(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_3 * 3 + 2;
  plVar2 = (longlong *)(*param_1 + lVar3 * 8);
  if ((*(longlong *)(*param_1 + lVar3 * 8) != -2) && (lVar3 = param_3, plVar2[1] == param_3)) {
    while( true ) {
      if (plVar2[1] == param_3) {
        if (*param_2 == plVar2[2]) {
          return lVar3;
        }
        if (((plVar2[2] != 0) && (*param_2 != 0)) && (cVar1 = FUN_1433e0a10(), cVar1 != '\0')) {
          return lVar3;
        }
      }
      lVar3 = *plVar2;
      if (lVar3 == -1) break;
      plVar2 = (longlong *)(*param_1 + lVar3 * 0x18 + 0x10);
    }
  }
  return -1;
}



// FUNCTION 1433e0830 FUN_1433e0830 body=93 status=ok
// SIG undefined FUN_1433e0830(void)

undefined8 * FUN_1433e0830(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)((longlong)param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((longlong)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  FUN_1433df7d0(param_1,*(undefined8 *)(param_2 + 0x10));
  return param_1;
}



// FUNCTION 1433e0890 FUN_1433e0890 body=123 status=ok
// SIG undefined FUN_1433e0890(void)

ulonglong FUN_1433e0890(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  
  pcVar3 = *(char **)(param_2 + 0x10);
  if (((*(char **)(param_1 + 0x10) == pcVar3) &&
      (pcVar3 = *(char **)(param_2 + 0x30), *(char **)(param_1 + 0x30) == pcVar3)) &&
     (pcVar3 = (char *)(ulonglong)*(uint *)(param_2 + 0x18),
     *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) {
    pcVar3 = (char *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc) + 0xc);
    lVar4 = ((*(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (((cVar1 == cVar2) && (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28))) &&
       (*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c))) {
      return CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
    }
  }
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433e0910 FUN_1433e0910 body=153 status=ok
// SIG undefined FUN_1433e0910(void)

ulonglong FUN_1433e0910(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  
  pcVar3 = (char *)((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xc);
  lVar4 = ((*(ulonglong *)(param_2 + 0x50) & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
  do {
    cVar1 = *pcVar3;
    cVar2 = pcVar3[lVar4];
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  if (cVar1 == cVar2) {
    pcVar3 = (char *)((*(ulonglong *)(param_1 + 0x58) & 0xfffffffffffffffc) + 0xc);
    lVar4 = ((*(ulonglong *)(param_2 + 0x58) & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((((cVar1 == cVar2) &&
         (pcVar3 = (char *)(ulonglong)*(uint *)(param_2 + 0x60),
         *(uint *)(param_1 + 0x60) == *(uint *)(param_2 + 0x60))) &&
        (pcVar3 = (char *)(ulonglong)*(uint *)(param_2 + 100),
        *(uint *)(param_1 + 100) == *(uint *)(param_2 + 100))) &&
       ((pcVar3 = (char *)(ulonglong)*(uint *)(param_2 + 0x68),
        *(uint *)(param_1 + 0x68) == *(uint *)(param_2 + 0x68) &&
        (pcVar3 = (char *)0x0, *(char *)(param_1 + 0x6c) == *(char *)(param_2 + 0x6c))))) {
      return 1;
    }
  }
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}



// FUNCTION 1433e09b0 operator== body=91 status=ok
// SIG undefined operator==(void)

undefined8 Scaleform::Render::Text::ParagraphFormat::operator==(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((((*(short *)(param_1 + 0x22) == *(short *)(param_2 + 0x22)) &&
       (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) &&
      (*(short *)(param_1 + 0x1a) == *(short *)(param_2 + 0x1a))) &&
     (((*(short *)(param_1 + 0x1c) == *(short *)(param_2 + 0x1c) &&
       (*(short *)(param_1 + 0x1e) == *(short *)(param_2 + 0x1e))) &&
      (*(short *)(param_1 + 0x20) == *(short *)(param_2 + 0x20))))) {
    cVar1 = FUN_1433df780(param_1,*(undefined8 *)(param_2 + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433e0a10 FUN_1433e0a10 body=372 status=ok
// SIG undefined FUN_1433e0a10(void)

undefined8 FUN_1433e0a10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  
  if ((((*(short *)(param_1 + 0x4c) == *(short *)(param_2 + 0x4c)) &&
       (*(char *)(param_1 + 0x4a) == *(char *)(param_2 + 0x4a))) &&
      (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
     ((*(short *)(param_1 + 0x48) == *(short *)(param_2 + 0x48) &&
      (bVar5 = (byte)*(short *)(param_1 + 0x4c) >> 2 & 1,
      bVar5 == ((byte)*(short *)(param_2 + 0x4c) >> 2 & 1))))) {
    if ((bVar5 != 0) &&
       (iVar4 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc) + 0xc),
                         (char *)((*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc) + 0xc)),
       iVar4 != 0)) {
      return 0;
    }
    if ((*(float *)(param_1 + 0x44) == *(float *)(param_2 + 0x44)) &&
       (bVar5 = (byte)((ushort)*(undefined2 *)(param_1 + 0x4c) >> 0xb) & 1,
       bVar5 == ((byte)((ushort)*(undefined2 *)(param_2 + 0x4c) >> 0xb) & 1))) {
      if (bVar5 != 0) {
        if (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) {
          if (*(longlong *)(param_1 + 0x38) == 0) {
            return 0;
          }
          if (*(longlong *)(param_2 + 0x38) == 0) {
            return 0;
          }
          cVar2 = FUN_1433e0890();
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
      cVar2 = Scaleform::Render::Text::TextFormat::IsUrlSet(param_2);
      cVar3 = Scaleform::Render::Text::TextFormat::IsUrlSet(param_1);
      if (cVar3 == cVar2) {
        cVar2 = Scaleform::Render::Text::TextFormat::IsUrlSet(param_1);
        if ((cVar2 != '\0') &&
           (iVar4 = _stricmp((char *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc) + 0xc),
                             (char *)((*(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffc) + 0xc)),
           iVar4 != 0)) {
          return 0;
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
        if ((((lVar1 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
            (cVar2 = FUN_1433e0910(lVar1), cVar2 != '\0')) ||
           (lVar1 == *(longlong *)(param_2 + 0x30))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1433e0b90 FUN_1433e0b90 body=139 status=ok
// SIG undefined FUN_1433e0b90(void)

RefCountImpl * FUN_1433e0b90(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  RefCountImpl *this;
  RefCountImpl *pRVar3;
  RefCountImpl *this_00;
  undefined4 uStackX_c;
  
  this = (RefCountImpl *)0x0;
  if ((*(ushort *)(param_1 + 0x4c) >> 0xb & 1) == 0) {
    this_00 = (RefCountImpl *)((ulonglong)uStackX_c << 0x20);
    bVar2 = false;
    bVar1 = true;
    pRVar3 = this;
  }
  else {
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x38));
    }
    this_00 = *(RefCountImpl **)(param_1 + 0x38);
    bVar2 = true;
    bVar1 = false;
    this = (RefCountImpl *)((ulonglong)uStackX_c << 0x20);
    pRVar3 = this_00;
  }
  if ((bVar1) && (this != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(this);
  }
  if ((bVar2) && (this_00 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  return pRVar3;
}



// FUNCTION 1433e0c20 FUN_1433e0c20 body=137 status=ok
// SIG undefined FUN_1433e0c20(void)

RefCountNTSImpl * FUN_1433e0c20(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar4;
  RefCountNTSImpl *this_00;
  undefined4 uStackX_c;
  
  this = (RefCountNTSImpl *)0x0;
  if ((*(ushort *)(param_1 + 0x4c) >> 9 & 1) == 0) {
    this_00 = (RefCountNTSImpl *)((ulonglong)uStackX_c << 0x20);
    bVar3 = false;
    bVar2 = true;
    pRVar4 = this;
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this_00 = *(RefCountNTSImpl **)(param_1 + 0x30);
    bVar3 = true;
    bVar2 = false;
    this = (RefCountNTSImpl *)((ulonglong)uStackX_c << 0x20);
    pRVar4 = this_00;
  }
  if ((bVar2) && (this != (RefCountNTSImpl *)0x0)) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if ((bVar3) && (this_00 != (RefCountNTSImpl *)0x0)) {
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  return pRVar4;
}



// FUNCTION 1433e0cb0 IsUrlSet body=43 status=ok
// SIG undefined IsUrlSet(void)

undefined8 Scaleform::Render::Text::TextFormat::IsUrlSet(longlong param_1)

{
  longlong lVar1;
  
  if ((*(ushort *)(param_1 + 0x4c) & 0x100) != 0) {
    lVar1 = FUN_1432c3580(param_1 + 0x20);
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1433e0ce0 FUN_1433e0ce0 body=322 status=ok
// SIG undefined FUN_1433e0ce0(void)

void FUN_1433e0ce0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 0x4a;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        uVar2 = FUN_1433decd0(*(undefined8 *)(lVar4 + 0x20));
        FUN_1433e0420(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433e0e30 FUN_1433e0e30 body=322 status=ok
// SIG undefined FUN_1433e0e30(void)

void FUN_1433e0e30(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 0x4a;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        uVar2 = FUN_1433dd3d0(*(undefined8 *)(lVar4 + 0x20));
        FUN_1433e0580(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1433e0f80 FUN_1433e0f80 body=98 status=ok
// SIG undefined FUN_1433e0f80(void)

undefined8 * FUN_1433e0f80(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x44) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    *(int *)(puVar2 + 8) = iVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1433e0ff0 FUN_1433e0ff0 body=73 status=ok
// SIG undefined FUN_1433e0ff0(void)

void FUN_1433e0ff0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))(*(longlong **)(param_1 + 0x30),0x48)
  ;
  if (lVar1 != 0) {
    FUN_1433e20e0(lVar1,param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 1433e1040 FUN_1433e1040 body=103 status=ok
// SIG undefined FUN_1433e1040(void)

void FUN_1433e1040(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1433dd540(&local_58,*(undefined8 *)(param_1 + 0x18));
  FUN_1433dd7b0(param_1,uVar1);
  FUN_1433dd700(&local_58);
  local_50 = 1;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  Scaleform::Render::Text::ParagraphFormat::operator=(param_1 + 0x50,&local_58);
  FUN_1433dedf0(&local_58);
  return;
}



// FUNCTION 1433e10b0 FUN_1433e10b0 body=83 status=ok
// SIG undefined FUN_1433e10b0(void)

undefined8 * FUN_1433e10b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  void *_Dst;
  
  _Dst = (void *)(**(code **)(**(longlong **)(param_3 + 0x30) + 0x50))
                           (*(longlong **)(param_3 + 0x30),param_2[1] * 2,0);
  *param_1 = _Dst;
  uVar1 = param_2[1];
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_2,param_2[1] * 2);
  return param_1;
}



// FUNCTION 1433e1170 FUN_1433e1170 body=184 status=ok
// SIG undefined FUN_1433e1170(void)

void FUN_1433e1170(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_4;
  if (param_4 == 0xffffffffffffffff) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uVar1 = FUN_143305cd0(param_3);
  }
  if ((ulonglong)param_1[2] < uVar1) {
    if (*param_1 == 0) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                        (*(longlong **)(param_2 + 0x30),uVar1 * 2,0);
    }
    else {
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar1 * 2);
    }
    *param_1 = lVar2;
    param_1[2] = uVar1;
  }
  if (uVar1 != 0) {
    FUN_143306bc0(*param_1,uVar1,param_3,param_4);
  }
  param_1[1] = uVar1;
  return;
}



// FUNCTION 1433e1230 FUN_1433e1230 body=156 status=ok
// SIG undefined FUN_1433e1230(void)

void FUN_1433e1230(longlong *param_1,longlong param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  longlong lVar2;
  
  if (param_4 == 0xffffffffffffffff) {
    param_4 = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
      param_4 = param_4 + 1;
      sVar1 = param_3[param_4];
    }
  }
  if ((ulonglong)param_1[2] < param_4) {
    if (*param_1 == 0) {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                        (*(longlong **)(param_2 + 0x30),param_4 * 2,0);
    }
    else {
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,param_4 * 2);
    }
    *param_1 = lVar2;
    param_1[2] = param_4;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)*param_1,param_3,param_4 * 2);
  }
  param_1[1] = param_4;
  return;
}



// FUNCTION 1433e12e0 FUN_1433e12e0 body=158 status=ok
// SIG undefined FUN_1433e12e0(void)

longlong FUN_1433e12e0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_4 + uVar2;
  if ((ulonglong)param_1[2] < uVar3) {
    if (*param_1 == 0) {
      lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                        (*(longlong **)(param_2 + 0x30),uVar3 * 2,0);
    }
    else {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar3 * 2);
    }
    uVar2 = param_1[1];
    *param_1 = lVar1;
    param_1[2] = uVar2 + param_4;
  }
  if (param_3 < uVar2) {
    memmove((void *)(*param_1 + (param_3 + param_4) * 2),(void *)(*param_1 + param_3 * 2),
            (uVar2 - param_3) * 2);
  }
  param_1[1] = param_1[1] + param_4;
  return *param_1 + param_3 * 2;
}



// FUNCTION 1433e1390 FUN_1433e1390 body=93 status=ok
// SIG undefined FUN_1433e1390(void)

void FUN_1433e1390(longlong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    if (uVar1 <= param_2 + param_3) {
      param_1[1] = param_2;
      return;
    }
    memmove((void *)(*param_1 + param_2 * 2),(void *)(*param_1 + (param_2 + param_3) * 2),
            ((uVar1 - param_2) - param_3) * 2);
    param_1[1] = param_1[1] - param_3;
  }
  return;
}



// FUNCTION 1433e1400 FUN_1433e1400 body=44 status=ok
// SIG undefined FUN_1433e1400(void)

void FUN_1433e1400(undefined8 *param_1)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1433e14d0 FUN_1433e14d0 body=64 status=ok
// SIG undefined FUN_1433e14d0(void)

void FUN_1433e14d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  
  uVar1 = param_1[1];
  if ((uVar1 != 0) && (uVar1 < (ulonglong)param_1[2])) {
    *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
    param_1[1] = param_1[1] + 1;
    return;
  }
  puVar2 = (undefined2 *)FUN_1433e12e0();
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  return;
}



// FUNCTION 1433e1580 FUN_1433e1580 body=127 status=ok
// SIG undefined FUN_1433e1580(void)

longlong FUN_1433e1580(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_20;
  ulonglong local_18;
  
  FUN_1433e1990(local_58,param_1 + 0x20,param_1,param_2);
  lVar3 = 0;
  if (local_18 < *(ulonglong *)(local_20 + 8)) {
    lVar2 = FUN_1433e1b30(local_58);
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x18);
    }
  }
  if (local_40 != 0) {
    piVar1 = (int *)(local_40 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(local_40);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40);
    }
  }
  return lVar3;
}



// FUNCTION 1433e1610 FUN_1433e1610 body=28 status=ok
// SIG undefined FUN_1433e1610(void)

void FUN_1433e1610(longlong param_1)

{
  FUN_1433e8ea0(param_1 + 0x18);
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 1433e1640 FUN_1433e1640 body=358 status=ok
// SIG undefined FUN_1433e1640(void)

void FUN_1433e1640(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  short *psVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_38 [4];
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    if ((*param_1 == 0) || (psVar2 = (short *)(*param_1 + (uVar5 - 1) * 2), uVar5 <= uVar5 - 1)) {
      psVar2 = (short *)0x0;
    }
    if (*psVar2 == 0) {
      return;
    }
  }
  if (uVar5 != 0) {
    if ((*param_1 == 0) || (psVar2 = (short *)(*param_1 + (uVar5 - 1) * 2), uVar5 <= uVar5 - 1)) {
      psVar2 = (short *)0x0;
    }
    if (*psVar2 == 0) {
      uVar5 = uVar5 - 1;
    }
  }
  puVar3 = (undefined2 *)FUN_1433e12e0(param_1,param_2,uVar5,1);
  FUN_1433e96d0(param_1 + 4,uVar5,1);
  *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
  if (((puVar3 != (undefined2 *)0x0) && (*puVar3 = 0, param_1[5] == 0)) && (param_3 != 0)) {
    lVar4 = FUN_1433df8e0(param_2,param_3);
    local_38[1] = 1;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    local_38[0] = uVar5;
    local_38[2] = lVar4;
    FUN_1433ea2c0(param_1 + 4,local_38);
    uVar5 = local_38[2];
    if (local_38[2] != 0) {
      piVar1 = (int *)(local_38[2] + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(local_38[2]);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
      }
    }
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1433e17b0 FUN_1433e17b0 body=131 status=ok
// SIG undefined FUN_1433e17b0(void)

void FUN_1433e17b0(longlong *param_1)

{
  longlong lVar1;
  short *psVar2;
  ulonglong uVar3;
  short *psVar4;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    lVar1 = *param_1;
    psVar2 = (short *)0x0;
    if ((lVar1 == 0) || (psVar4 = (short *)(lVar1 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
      psVar4 = psVar2;
    }
    if (*psVar4 == 0) {
      if (uVar3 != 0) {
        if ((lVar1 != 0) && (uVar3 - 1 < uVar3)) {
          psVar2 = (short *)(lVar1 + (uVar3 - 1) * 2);
        }
        if (*psVar2 == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      FUN_1433e9db0(param_1 + 4,uVar3,1);
      lVar1 = param_1[1];
      if ((lVar1 != 0) && (*(short *)(*param_1 + -2 + lVar1 * 2) == 0)) {
        param_1[1] = lVar1 + -1;
      }
    }
  }
  return;
}



// FUNCTION 1433e18d0 FUN_1433e18d0 body=133 status=ok
// SIG undefined FUN_1433e18d0(void)

void FUN_1433e18d0(longlong *param_1)

{
  longlong lVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    lVar1 = *param_1;
    psVar3 = (short *)0x0;
    if ((lVar1 == 0) || (psVar2 = (short *)(lVar1 + (uVar4 - 1) * 2), uVar4 <= uVar4 - 1)) {
      psVar2 = psVar3;
    }
    if (*psVar2 == 0) {
      if (uVar4 != 0) {
        if ((lVar1 != 0) && (uVar4 - 1 < uVar4)) {
          psVar3 = (short *)(lVar1 + (uVar4 - 1) * 2);
        }
        if (*psVar3 == 0) {
          uVar4 = uVar4 - 1;
        }
      }
      FUN_1433e96d0(param_1 + 4,uVar4,1);
      FUN_1433e9db0(param_1 + 4,uVar4 + 1,1);
    }
  }
  return;
}



// FUNCTION 1433e1990 FUN_1433e1990 body=291 status=ok
// SIG undefined FUN_1433e1990(void)

undefined8 *
FUN_1433e1990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  FUN_1433e9980(param_2,param_1 + 5,param_4);
  param_1[7] = param_3;
  param_1[8] = 0;
  uVar1 = param_1[6];
  if ((-1 < (longlong)uVar1) && (uVar1 < (ulonglong)((longlong *)param_1[5])[1])) {
    lVar2 = *(longlong *)param_1[5];
    lVar3 = *(longlong *)(lVar2 + uVar1 * 0x18);
    if ((param_4 < lVar3) || (lVar3 + -1 + *(longlong *)(lVar2 + 8 + uVar1 * 0x18) < param_4)) {
      if (*(longlong *)(*(longlong *)param_1[5] + param_1[6] * 0x18) < param_4) {
        lVar2 = *(longlong *)(*(longlong *)param_1[5] + param_1[6] * 0x18);
        param_1[8] = lVar2;
        param_1[8] = *(longlong *)(*(longlong *)param_1[5] + 8 + param_1[6] * 0x18) + lVar2;
        if ((longlong)param_1[6] < *(longlong *)(param_1[5] + 8)) {
          param_1[6] = param_1[6] + 1;
        }
      }
    }
    else {
      param_1[8] = *(undefined8 *)(*(longlong *)param_1[5] + param_1[6] * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1433e1b30 FUN_1433e1b30 body=222 status=ok
// SIG undefined FUN_1433e1b30(void)

longlong * FUN_1433e1b30(longlong *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = param_1[6];
  if (((longlong)uVar3 < 0) || ((ulonglong)((longlong *)param_1[5])[1] <= uVar3)) {
    lVar5 = param_1[8];
    lVar6 = ((longlong *)param_1[7])[1];
    lVar7 = *(longlong *)param_1[7];
    param_1[1] = lVar5;
    param_1[2] = lVar6 - lVar5;
    *param_1 = lVar7 + lVar5 * 2;
  }
  else {
    puVar2 = (ulonglong *)(*(longlong *)param_1[5] + uVar3 * 0x18);
    uVar3 = *puVar2;
    uVar4 = param_1[8];
    lVar5 = *(longlong *)param_1[7];
    if (uVar3 <= uVar4) {
      uVar4 = puVar2[2];
      param_1[2] = puVar2[1];
      *param_1 = lVar5 + uVar3 * 2;
      param_1[1] = uVar3;
      FUN_1433e8fe0(param_1 + 3,uVar4);
      return param_1;
    }
    param_1[1] = uVar4;
    param_1[2] = uVar3 - uVar4;
    *param_1 = lVar5 + uVar4 * 2;
  }
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar5);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
    }
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1433e1c20 operator++ body=95 status=ok
// SIG undefined operator++(void)

void Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (((longlong)uVar1 < 0) || ((ulonglong)(*(longlong **)(param_1 + 0x28))[1] <= uVar1)) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x28);
    uVar3 = *(ulonglong *)(lVar2 + uVar1 * 0x18);
    if (*(ulonglong *)(param_1 + 0x40) < uVar3) {
      *(ulonglong *)(param_1 + 0x40) = uVar3;
      return;
    }
    *(ulonglong *)(param_1 + 0x40) =
         *(longlong *)(lVar2 + 8 + uVar1 * 0x18) + *(ulonglong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x30) < *(longlong *)(*(longlong *)(param_1 + 0x28) + 8)) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
      return;
    }
  }
  return;
}



// FUNCTION 1433e1c90 FUN_1433e1c90 body=164 status=ok
// SIG undefined FUN_1433e1c90(void)

void FUN_1433e1c90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 8)) {
    do {
      lVar3 = FUN_1433e1b30(param_1);
      if (param_2 <= *(longlong *)(lVar3 + 8)) {
        return;
      }
      uVar1 = *(ulonglong *)(param_1 + 0x30);
      if (((longlong)uVar1 < 0) || ((ulonglong)(*(longlong **)(param_1 + 0x28))[1] <= uVar1)) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
      }
      else {
        lVar3 = **(longlong **)(param_1 + 0x28);
        uVar2 = *(ulonglong *)(lVar3 + uVar1 * 0x18);
        if (*(ulonglong *)(param_1 + 0x40) < uVar2) {
          *(ulonglong *)(param_1 + 0x40) = uVar2;
        }
        else {
          *(ulonglong *)(param_1 + 0x40) =
               *(longlong *)(lVar3 + 8 + uVar1 * 0x18) + *(ulonglong *)(param_1 + 0x40);
          if (*(longlong *)(param_1 + 0x30) < *(longlong *)(*(longlong *)(param_1 + 0x28) + 8)) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
          }
        }
      }
    } while (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 8));
  }
  return;
}



// FUNCTION 1433e1d80 FUN_1433e1d80 body=189 status=ok
// SIG undefined FUN_1433e1d80(void)

undefined8 * FUN_1433e1d80(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = param_2 + 0x20;
  FUN_1433e9980(param_2 + 0x20,param_1 + 4);
  param_1[6] = param_2;
  param_1[7] = param_3;
  uVar1 = param_1[5];
  if ((-1 < (longlong)uVar1) && (uVar1 < (ulonglong)((longlong *)param_1[4])[1])) {
    lVar2 = *(longlong *)param_1[4];
    lVar3 = *(longlong *)(lVar2 + uVar1 * 0x18);
    if (((param_3 < lVar3) || (lVar3 + -1 + *(longlong *)(lVar2 + 8 + uVar1 * 0x18) < param_3)) &&
       ((*(longlong *)(*(longlong *)param_1[4] + param_1[5] * 0x18) < (longlong)(int)param_3 &&
        ((longlong)param_1[5] < *(longlong *)(param_1[4] + 8))))) {
      param_1[5] = param_1[5] + 1;
    }
  }
  return param_1;
}



// FUNCTION 1433e1e50 FUN_1433e1e50 body=254 status=ok
// SIG undefined FUN_1433e1e50(void)

longlong * FUN_1433e1e50(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)param_1[6];
  if ((plVar2 == (longlong *)0x0) || (uVar3 = param_1[7], (ulonglong)plVar2[1] <= uVar3)) {
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[1] = param_1[7];
    lVar5 = *param_1;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar5);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
      }
    }
    *param_1 = 0;
    return param_1;
  }
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(*plVar2 + uVar3 * 2);
  param_1[1] = uVar3;
  uVar4 = param_1[5];
  if (((-1 < (longlong)uVar4) && (uVar4 < (ulonglong)((longlong *)param_1[4])[1])) &&
     (lVar5 = *(longlong *)param_1[4], *(ulonglong *)(lVar5 + uVar4 * 0x18) <= uVar3)) {
    FUN_1433e8f80(param_1,lVar5 + uVar4 * 0x18 + 0x10);
    return param_1;
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar5);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1433e1f60 FUN_1433e1f60 body=102 status=ok
// SIG undefined FUN_1433e1f60(void)

void FUN_1433e1f60(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + 8) <= *(ulonglong *)(param_1 + 0x38))) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x38) + 1;
    *(ulonglong *)(param_1 + 0x38) = uVar1;
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    if ((((-1 < (longlong)uVar3) && (uVar3 < (ulonglong)(*(longlong **)(param_1 + 0x20))[1])) &&
        (lVar2 = **(longlong **)(param_1 + 0x20),
        (ulonglong)(*(longlong *)(lVar2 + 8 + uVar3 * 0x18) + *(longlong *)(lVar2 + uVar3 * 0x18))
        <= uVar1)) &&
       (*(longlong *)(param_1 + 0x28) < *(longlong *)(*(longlong *)(param_1 + 0x20) + 8))) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      return;
    }
  }
  return;
}



// FUNCTION 1433e1fd0 FUN_1433e1fd0 body=122 status=ok
// SIG undefined FUN_1433e1fd0(void)

void FUN_1433e1fd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + 8) <= *(ulonglong *)(param_1 + 0x38))) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 8);
    }
    else {
      uVar1 = *(ulonglong *)(param_1 + 0x38) + 1;
      *(ulonglong *)(param_1 + 0x38) = uVar1;
      uVar3 = *(ulonglong *)(param_1 + 0x28);
      if ((((-1 < (longlong)uVar3) && (uVar3 < (ulonglong)(*(longlong **)(param_1 + 0x20))[1])) &&
          (lVar2 = **(longlong **)(param_1 + 0x20),
          (ulonglong)(*(longlong *)(lVar2 + 8 + uVar3 * 0x18) + *(longlong *)(lVar2 + uVar3 * 0x18))
          <= uVar1)) &&
         (*(longlong *)(param_1 + 0x28) < *(longlong *)(*(longlong *)(param_1 + 0x20) + 8))) {
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1433e2050 GetRemainingTextPtr body=59 status=ok
// SIG undefined GetRemainingTextPtr(void)

longlong Scaleform::Render::Text::Paragraph::CharactersIterator::GetRemainingTextPtr
                   (longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (*(ulonglong *)(param_1 + 0x38) < uVar1) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = uVar1 - *(ulonglong *)(param_1 + 0x38);
      }
      return **(longlong **)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38) * 2;
    }
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 1433e20e0 FUN_1433e20e0 body=411 status=ok
// SIG undefined FUN_1433e20e0(void)

undefined8 * FUN_1433e20e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  _Dst = (void *)(**(code **)(**(longlong **)(param_3 + 0x30) + 0x50))
                           (*(longlong **)(param_3 + 0x30),param_2[1] * 2,0);
  *param_1 = _Dst;
  uVar5 = param_2[1];
  param_1[1] = uVar5;
  param_1[2] = uVar5;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_2,param_2[1] * 2);
  uVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1433e9190(param_1 + 4,param_2[4],param_2[5]);
  param_1[7] = param_2[7];
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  iVar2 = *(int *)(param_3 + 0x28);
  *(int *)(param_3 + 0x28) = iVar2 + 1;
  *(int *)(param_1 + 8) = iVar2;
  uVar5 = FUN_1433dfaa0(param_3,param_2[3]);
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar3);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
    }
  }
  param_1[3] = uVar5;
  uVar8 = uVar7;
  while ((-1 < (longlong)uVar8 && (uVar7 < (ulonglong)param_1[5]))) {
    lVar3 = param_1[4];
    lVar6 = FUN_1433df8e0(param_3,*(undefined8 *)(lVar3 + 0x10 + uVar8));
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    lVar4 = *(longlong *)(lVar3 + 0x10 + uVar8);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
    }
    *(longlong *)(lVar3 + 0x10 + uVar8) = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar6);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
      }
    }
    if ((longlong)uVar7 < (longlong)param_1[5]) {
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + 0x18;
    }
  }
  return param_1;
}



// FUNCTION 1433e2290 FUN_1433e2290 body=46 status=ok
// SIG undefined FUN_1433e2290(void)

undefined8 * FUN_1433e2290(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = param_1 + 0x20;
  param_2[5] = param_1 + 0x20;
  param_2[6] = 0;
  param_2[7] = param_1;
  param_2[8] = 0;
  return param_2;
}



// FUNCTION 1433e22d0 FUN_1433e22d0 body=36 status=ok
// SIG undefined FUN_1433e22d0(void)

undefined8 FUN_1433e22d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1433e1990(param_2,param_1 + 0x20,param_1,param_3);
  return param_2;
}



// FUNCTION 1433e2300 GetLength body=44 status=ok
// SIG undefined GetLength(void)

ulonglong Scaleform::Render::Text::Paragraph::GetLength(longlong *param_1)

{
  ulonglong uVar1;
  short *psVar2;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if ((*param_1 == 0) || (uVar1 <= uVar1 - 1)) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = (short *)(*param_1 + (uVar1 - 1) * 2);
    }
    if (*psVar2 == 0) {
      uVar1 = uVar1 - 1;
    }
  }
  return uVar1;
}



// FUNCTION 1433e2340 FUN_1433e2340 body=103 status=ok
// SIG undefined FUN_1433e2340(void)

undefined8 FUN_1433e2340(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar1 = FUN_1433e12e0();
  FUN_1433e96d0(param_1 + 0x20,param_3,param_4);
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  return uVar1;
}



// FUNCTION 1433e23b0 FUN_1433e23b0 body=290 status=ok
// SIG undefined FUN_1433e23b0(void)

void FUN_1433e23b0(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  
  if (param_5 != 0) {
    if (param_5 == -1) {
      param_5 = 0;
      sVar2 = *param_3;
      while (sVar2 != 0) {
        param_5 = param_5 + 1;
        sVar2 = param_3[param_5];
      }
    }
    if (param_5 != 0) {
      _Dst = (void *)FUN_1433e12e0(param_1,param_2,param_4,param_5);
      FUN_1433e96d0(param_1 + 0x20,param_4,param_5);
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,param_5 * 2);
        if (param_6 != 0) {
          *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 2;
          local_28 = param_6;
          local_38 = param_4;
          local_30 = param_5;
          FUN_1433ea2c0(param_1 + 0x20,&local_38);
          lVar3 = local_28;
          if (local_28 != 0) {
            piVar1 = (int *)(local_28 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(local_28);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
            }
          }
          piVar1 = (int *)(param_6 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1433dd700(param_6);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_6);
          }
        }
        FUN_1433e18d0(param_1);
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1433e24e0 FUN_1433e24e0 body=215 status=ok
// SIG undefined FUN_1433e24e0(void)

void FUN_1433e24e0(longlong *param_1,undefined8 param_2,short *param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  void *_Dst;
  ulonglong uVar3;
  
  if (param_4 != (short *)0x0) {
    psVar2 = (short *)0x0;
    if (param_4 == (short *)&DAT_ffffffffffffffff) {
      sVar1 = *param_3;
      param_4 = psVar2;
      while (sVar1 != 0) {
        param_4 = (short *)((longlong)param_4 + 1);
        sVar1 = param_3[(longlong)param_4];
      }
    }
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      if ((*param_1 != 0) && (uVar3 - 1 < uVar3)) {
        psVar2 = (short *)(*param_1 + (uVar3 - 1) * 2);
      }
      if (*psVar2 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    if (param_4 != (short *)0x0) {
      _Dst = (void *)FUN_1433e12e0(param_1,param_2,uVar3,param_4);
      FUN_1433e96d0(param_1 + 4,uVar3,param_4);
      *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)param_4 * 2);
        *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1433e25c0 FUN_1433e25c0 body=208 status=ok
// SIG undefined FUN_1433e25c0(void)

void FUN_1433e25c0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0) {
    lVar1 = param_4;
    if (param_4 == -1) {
      lVar1 = -1;
    }
    lVar1 = FUN_143305cd0(param_3,lVar1);
    uVar4 = param_1[1];
    if (uVar4 != 0) {
      if ((*param_1 == 0) || (uVar4 <= uVar4 - 1)) {
        psVar2 = (short *)0x0;
      }
      else {
        psVar2 = (short *)(*param_1 + (uVar4 - 1) * 2);
      }
      if (*psVar2 == 0) {
        uVar4 = uVar4 - 1;
      }
    }
    if (lVar1 != 0) {
      lVar3 = FUN_1433e12e0(param_1,param_2,uVar4,lVar1);
      FUN_1433e96d0(param_1 + 4,uVar4,lVar1);
      *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
      if (lVar3 != 0) {
        FUN_143306bc0(lVar3,lVar1,param_3,param_4);
        *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1433e26a0 FUN_1433e26a0 body=137 status=ok
// SIG undefined FUN_1433e26a0(void)

void FUN_1433e26a0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_3 == -1) {
    param_3 = -1;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    if (param_3 + param_2 < uVar1) {
      memmove((void *)(*param_1 + param_2 * 2),(void *)(*param_1 + (param_3 + param_2) * 2),
              ((uVar1 - param_3) - param_2) * 2);
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = param_2;
    }
  }
  FUN_1433e9db0(param_1 + 4,param_2,param_3);
  FUN_1433e18d0(param_1);
  *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
  return;
}



// FUNCTION 1433e2730 FUN_1433e2730 body=42 status=ok
// SIG undefined FUN_1433e2730(void)

void FUN_1433e2730(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1433ea180(param_1 + 0x20,param_1 + 0x20,0);
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 1433e2760 FUN_1433e2760 body=191 status=ok
// SIG undefined FUN_1433e2760(void)

void FUN_1433e2760(longlong *param_1,longlong param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_4;
  uVar2 = param_4;
  if (param_4 != 0xffffffffffffffff) {
    do {
      uVar2 = uVar2 - 1;
      uVar4 = param_4;
      if ((longlong)uVar2 < 0) break;
      uVar4 = uVar2;
    } while (param_3[uVar2] != 0);
  }
  if (uVar4 == 0xffffffffffffffff) {
    uVar4 = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
      uVar4 = uVar4 + 1;
      sVar1 = param_3[uVar4];
    }
  }
  if ((ulonglong)param_1[2] < uVar4) {
    if (*param_1 == 0) {
      lVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                        (*(longlong **)(param_2 + 0x30),uVar4 * 2,0);
    }
    else {
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar4 * 2);
    }
    *param_1 = lVar3;
    param_1[2] = uVar4;
  }
  if (uVar4 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)*param_1,param_3,uVar4 * 2);
  }
  param_1[1] = uVar4;
  *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
  return;
}



// FUNCTION 1433e2830 FUN_1433e2830 body=1044 status=ok
// SIG undefined FUN_1433e2830(void)

void FUN_1433e2830(longlong param_1,longlong param_2,undefined1 *param_3,ulonglong param_4,
                  ulonglong param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  undefined1 local_138 [24];
  longlong local_120;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined1 local_e8 [80];
  undefined1 local_98 [88];
  ulonglong uVar12;
  
  FUN_1433e1990(local_138,param_1 + 0x20,param_1);
  uVar12 = param_4;
  if (param_4 <= param_5) {
    uVar12 = param_5;
  }
  uVar8 = local_f8;
  lVar4 = local_120;
  uVar15 = local_108;
  if (uVar12 == 0xffffffffffffffff) {
    param_5 = 0x7fffffffffffffff;
  }
  else {
    param_5 = uVar12 - param_4;
    lVar9 = local_120;
    if ((longlong)param_5 < 1) goto LAB_1433e2beb;
  }
  do {
    uVar12 = *(ulonglong *)(local_100 + 8);
    lVar9 = lVar4;
    if (uVar12 <= uVar8) break;
    if (((longlong)uVar15 < 0) || ((ulonglong)local_110[1] <= uVar15)) {
LAB_1433e296c:
      lVar11 = uVar12 - uVar8;
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar4);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
        }
      }
      lVar9 = 0;
      uVar12 = uVar8;
    }
    else {
      uVar12 = *(ulonglong *)(*local_110 + uVar15 * 0x18);
      lVar11 = *local_110 + uVar15 * 0x18;
      if (uVar8 < uVar12) goto LAB_1433e296c;
      lVar9 = *(longlong *)(lVar11 + 0x10);
      lVar11 = *(longlong *)(lVar11 + 8);
      if (lVar9 != 0) {
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      }
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar4);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
        }
      }
    }
    uVar7 = uVar12;
    if (uVar12 < param_4) {
      uVar7 = param_4;
    }
    FUN_1433dd540(local_e8,*(undefined8 *)(param_2 + 0x30));
    puVar6 = param_3;
    if (lVar9 != 0) {
      uVar3 = FUN_1433ddf20(lVar9,local_98,param_3);
      FUN_1433dd7b0(local_e8,uVar3);
      FUN_1433dd700(local_98);
      puVar6 = local_e8;
    }
    lVar4 = FUN_1433df8e0(param_2,puVar6);
    uVar5 = (lVar11 - uVar7) + uVar12;
    uVar14 = param_5;
    if (uVar5 < param_5) {
      uVar14 = uVar5;
    }
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    local_158 = uVar7;
    local_150 = uVar14;
    local_148 = lVar4;
    FUN_1433ea2c0(param_1 + 0x20,&local_158);
    lVar10 = local_148;
    if (local_148 != 0) {
      piVar1 = (int *)(local_148 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(local_148);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
      }
    }
    plVar2 = local_110;
    param_5 = param_5 - uVar14;
    if (uVar8 < *(ulonglong *)(local_100 + 8)) {
      uVar7 = uVar8;
      lVar10 = lVar9;
      lVar13 = local_100;
      do {
        if (((longlong)uVar15 < 0) || ((ulonglong)plVar2[1] <= uVar15)) {
LAB_1433e2afd:
          if (lVar10 != 0) {
            piVar1 = (int *)(lVar10 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar10);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
              lVar13 = local_100;
            }
          }
          lVar9 = 0;
          uVar14 = uVar7;
        }
        else {
          uVar14 = *(ulonglong *)(*plVar2 + uVar15 * 0x18);
          if (uVar7 < uVar14) goto LAB_1433e2afd;
          lVar9 = *(longlong *)(*plVar2 + uVar15 * 0x18 + 0x10);
          if (lVar9 != 0) {
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          }
          if (lVar10 != 0) {
            piVar1 = (int *)(lVar10 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar10);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
              lVar13 = local_100;
            }
          }
        }
        uVar8 = uVar7;
        if ((longlong)(uVar12 + lVar11) <= (longlong)uVar14) break;
        if (((longlong)uVar15 < 0) || ((ulonglong)plVar2[1] <= uVar15)) {
          uVar8 = *(ulonglong *)(lVar13 + 8);
        }
        else {
          uVar8 = *(ulonglong *)(*plVar2 + uVar15 * 0x18);
          if ((uVar8 <= uVar7) &&
             (uVar8 = uVar7 + *(longlong *)(*plVar2 + uVar15 * 0x18 + 8),
             (longlong)uVar15 < plVar2[1])) {
            uVar15 = uVar15 + 1;
          }
        }
        uVar7 = uVar8;
        lVar10 = lVar9;
      } while (uVar8 < *(ulonglong *)(lVar13 + 8));
    }
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
    }
    FUN_1433dd700(local_e8);
    lVar4 = lVar9;
  } while (0 < (longlong)param_5);
LAB_1433e2beb:
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar9);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
    }
  }
  return;
}



// FUNCTION 1433e2c50 FUN_1433e2c50 body=668 status=ok
// SIG undefined FUN_1433e2c50(void)

undefined8 FUN_1433e2c50(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res8;
  undefined1 local_128 [24];
  longlong local_110;
  longlong *local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  ulonglong uVar8;
  
  FUN_1433e1990(local_128,param_1 + 0x20,param_1,param_3);
  uVar9 = param_3;
  if (param_3 <= param_4) {
    uVar9 = param_4;
  }
  if (uVar9 == 0xffffffffffffffff) {
    lVar10 = 0x7fffffffffffffff;
  }
  else {
    lVar10 = uVar9 - param_3;
  }
  uVar5 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  FUN_1433dd540(local_d8,uVar5);
  local_res8 = 0;
  iVar2 = local_res8;
  lVar3 = local_110;
  uVar9 = local_f8;
  lVar11 = local_f0;
  do {
    uVar4 = local_e8;
    if ((lVar10 < 1) || (uVar8 = *(ulonglong *)(lVar11 + 8), uVar8 <= uVar4)) {
      FUN_1433dd660(param_2,local_d8,0);
      FUN_1433dd700(local_d8);
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      return param_2;
    }
    local_res8 = iVar2;
    if (((longlong)uVar9 < 0) || ((ulonglong)local_100[1] <= uVar9)) {
LAB_1433e2d41:
      lVar7 = uVar8 - uVar4;
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      lVar6 = 0;
      uVar8 = uVar4;
    }
    else {
      uVar8 = *(ulonglong *)(*local_100 + uVar9 * 0x18);
      lVar7 = *local_100 + uVar9 * 0x18;
      if (uVar4 < uVar8) goto LAB_1433e2d41;
      lVar6 = *(longlong *)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (lVar6 != 0) {
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      }
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      lVar11 = local_f0;
      if (lVar6 != 0) {
        local_res8 = iVar2 + 1;
        if (iVar2 == 0) {
          FUN_1433dd7b0(local_d8,lVar6);
          lVar11 = local_f0;
        }
        else {
          uVar5 = FUN_1433de480(lVar6,local_88,local_d8);
          FUN_1433dd7b0(local_d8,uVar5);
          FUN_1433dd700(local_88);
          lVar11 = local_f0;
        }
      }
    }
    lVar10 = lVar10 + ((param_3 - lVar7) - uVar8);
    param_3 = lVar7 + uVar8;
    iVar2 = local_res8;
    lVar3 = lVar6;
    if (((longlong)uVar9 < 0) || ((ulonglong)local_100[1] <= uVar9)) {
      local_e8 = *(ulonglong *)(lVar11 + 8);
    }
    else {
      local_e8 = *(ulonglong *)(*local_100 + uVar9 * 0x18);
      if ((local_e8 <= uVar4) &&
         (local_e8 = uVar4 + *(longlong *)(*local_100 + uVar9 * 0x18 + 8),
         (longlong)uVar9 < local_100[1])) {
        uVar9 = uVar9 + 1;
      }
    }
  } while( true );
}



// FUNCTION 1433e2f00 FUN_1433e2f00 body=774 status=ok
// SIG undefined FUN_1433e2f00(void)

void FUN_1433e2f00(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_res18;
  undefined1 local_98 [24];
  longlong local_80;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  
  FUN_1433e1990(local_98,param_1 + 0x20,param_1,param_2);
  local_res18 = param_2;
  if (param_2 <= param_3) {
    local_res18 = param_3;
  }
  uVar5 = local_58;
  uVar6 = local_68;
  lVar8 = local_80;
  if (local_res18 == 0xffffffffffffffff) {
    local_res18 = 0x7fffffffffffffff;
  }
  else {
    local_res18 = local_res18 - param_2;
    lVar7 = local_80;
    if ((longlong)local_res18 < 1) goto LAB_1433e31bd;
  }
  do {
    uVar9 = *(ulonglong *)(local_60 + 8);
    lVar7 = lVar8;
    if (uVar9 <= uVar5) break;
    if (((longlong)uVar6 < 0) || ((ulonglong)local_70[1] <= uVar6)) {
LAB_1433e302f:
      lVar10 = uVar9 - uVar5;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar8);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
        }
      }
      lVar7 = 0;
      uVar9 = uVar5;
    }
    else {
      uVar9 = *(ulonglong *)(*local_70 + uVar6 * 0x18);
      lVar10 = *local_70 + uVar6 * 0x18;
      if (uVar5 < uVar9) goto LAB_1433e302f;
      lVar7 = *(longlong *)(lVar10 + 0x10);
      lVar10 = *(longlong *)(lVar10 + 8);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      }
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar8);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
        }
      }
    }
    uVar3 = uVar9;
    if (uVar9 < param_2) {
      uVar3 = param_2;
    }
    uVar2 = (lVar10 - uVar3) + uVar9;
    uVar4 = local_res18;
    if (uVar2 < local_res18) {
      uVar4 = uVar2;
    }
    FUN_1433e9230(param_1 + 0x20,uVar3,uVar4);
    local_res18 = local_res18 - uVar4;
    if (uVar5 < *(ulonglong *)(local_60 + 8)) {
      uVar3 = uVar5;
      lVar8 = lVar7;
      do {
        if (((longlong)uVar6 < 0) || ((ulonglong)local_70[1] <= uVar6)) {
LAB_1433e3107:
          if (lVar8 != 0) {
            piVar1 = (int *)(lVar8 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar8);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
            }
          }
          lVar7 = 0;
          uVar4 = uVar3;
        }
        else {
          uVar4 = *(ulonglong *)(*local_70 + uVar6 * 0x18);
          if (uVar3 < uVar4) goto LAB_1433e3107;
          lVar7 = *(longlong *)(*local_70 + uVar6 * 0x18 + 0x10);
          if (lVar7 != 0) {
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          }
          if (lVar8 != 0) {
            piVar1 = (int *)(lVar8 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar8);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
            }
          }
        }
        uVar5 = uVar3;
        if ((longlong)(uVar9 + lVar10) <= (longlong)uVar4) break;
        if (((longlong)uVar6 < 0) || ((ulonglong)local_70[1] <= uVar6)) {
          uVar5 = *(ulonglong *)(local_60 + 8);
        }
        else {
          uVar5 = *(ulonglong *)(*local_70 + uVar6 * 0x18);
          if ((uVar5 <= uVar3) &&
             (uVar5 = uVar3 + *(longlong *)(*local_70 + uVar6 * 0x18 + 8),
             (longlong)uVar6 < local_70[1])) {
            uVar6 = uVar6 + 1;
          }
        }
        uVar3 = uVar5;
        lVar8 = lVar7;
      } while (uVar5 < *(ulonglong *)(local_60 + 8));
    }
    lVar8 = lVar7;
  } while (0 < (longlong)local_res18);
LAB_1433e31bd:
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar7);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar7);
    }
  }
  return;
}



// FUNCTION 1433e3210 FUN_1433e3210 body=186 status=ok
// SIG undefined FUN_1433e3210(void)

void FUN_1433e3210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [48];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar4 = FUN_1433dfaa0(param_2,param_3);
  }
  else {
    uVar3 = FUN_1433deff0(*(longlong *)(param_1 + 0x18),local_38);
    lVar4 = FUN_1433dfaa0(param_2,uVar3);
    FUN_1433dedf0(local_38);
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar4);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
    }
  }
  return;
}



// FUNCTION 1433e32d0 FUN_1433e32d0 body=807 status=ok
// SIG undefined FUN_1433e32d0(void)

void FUN_1433e32d0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  int *piVar1;
  longlong lVar2;
  short *psVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  short *psVar10;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70 [2];
  longlong *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  if (param_6 != 0) {
    FUN_1433e9bb0(param_1,param_2,*param_3 + param_4 * 2,param_5,param_6);
    FUN_1433e1990(&local_88,param_3 + 4,param_3,param_4);
    uVar4 = local_50[1];
    lVar6 = local_70[0];
    uVar8 = local_58;
    if (local_48 < uVar4) {
      do {
        uVar5 = local_48;
        lVar9 = 0;
        if (param_6 == 0) break;
        if (((longlong)uVar8 < 0) || ((ulonglong)local_60[1] <= uVar8)) {
          local_88 = *local_50;
LAB_1433e33c9:
          uVar4 = uVar4 - local_48;
          local_88 = local_88 + local_48 * 2;
          if (lVar6 != 0) {
            piVar1 = (int *)(lVar6 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar6);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
            }
          }
          local_70[0] = 0;
          uVar7 = uVar5;
        }
        else {
          uVar4 = *(ulonglong *)(*local_60 + uVar8 * 0x18);
          lVar2 = *local_60 + uVar8 * 0x18;
          local_88 = *local_50;
          if (local_48 < uVar4) goto LAB_1433e33c9;
          local_88 = local_88 + uVar4 * 2;
          local_78 = *(ulonglong *)(lVar2 + 8);
          local_80 = uVar4;
          FUN_1433e8fe0(local_70,*(undefined8 *)(lVar2 + 0x10));
          uVar4 = local_78;
          uVar5 = local_48;
          uVar7 = local_80;
          uVar8 = local_58;
        }
        lVar6 = local_70[0];
        if ((longlong)uVar7 < param_4) {
          uVar4 = (uVar4 - param_4) + uVar7;
        }
        else {
          lVar9 = uVar7 - param_4;
        }
        uVar7 = param_6;
        if (uVar4 < param_6) {
          uVar7 = uVar4;
        }
        if (local_70[0] != 0) {
          lVar2 = FUN_1433df8e0(param_2,local_70[0]);
          local_a8 = param_5 + lVar9;
          if (lVar2 != 0) {
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          }
          local_a0 = uVar7;
          local_98 = lVar2;
          FUN_1433ea2c0(param_1 + 4,&local_a8);
          lVar9 = local_98;
          if (local_98 != 0) {
            piVar1 = (int *)(local_98 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(local_98);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
            }
          }
          if (lVar2 != 0) {
            piVar1 = (int *)(lVar2 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dd700(lVar2);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
            }
          }
        }
        param_6 = param_6 - uVar7;
        if (((longlong)uVar8 < 0) || ((ulonglong)local_60[1] <= uVar8)) {
          local_48 = local_50[1];
        }
        else {
          local_48 = *(ulonglong *)(*local_60 + uVar8 * 0x18);
          if ((local_48 <= uVar5) &&
             (local_48 = uVar5 + *(longlong *)(*local_60 + uVar8 * 0x18 + 8),
             (longlong)uVar8 < local_60[1])) {
            uVar8 = uVar8 + 1;
            local_58 = uVar8;
          }
        }
        uVar4 = local_50[1];
      } while (local_48 < uVar4);
    }
    psVar10 = (short *)0x0;
    uVar4 = param_1[1];
    if (uVar4 != 0) {
      lVar9 = *param_1;
      if ((lVar9 == 0) || (psVar3 = (short *)(lVar9 + (uVar4 - 1) * 2), uVar4 <= uVar4 - 1)) {
        psVar3 = psVar10;
      }
      if (*psVar3 == 0) {
        if (uVar4 != 0) {
          if ((lVar9 != 0) && (uVar4 - 1 < uVar4)) {
            psVar10 = (short *)(lVar9 + (uVar4 - 1) * 2);
          }
          if (*psVar10 == 0) {
            uVar4 = uVar4 - 1;
          }
        }
        FUN_1433e96d0(param_1 + 4,uVar4,1);
        FUN_1433e9db0(param_1 + 4,uVar4 + 1,1);
      }
    }
    *(short *)((longlong)param_1 + 0x44) = *(short *)((longlong)param_1 + 0x44) + 1;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(lVar6);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
      }
    }
  }
  return;
}



// FUNCTION 1433e3620 FUN_1433e3620 body=295 status=ok
// SIG undefined FUN_1433e3620(void)

longlong * FUN_1433e3620(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined2 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong local_18;
  longlong local_10;
  
  *param_1 = param_2 + 0x18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  plVar2 = (longlong *)*param_1;
  if (((plVar2 != (longlong *)0x0) && (lVar3 = param_1[1], -1 < lVar3)) && (lVar3 < (int)plVar2[1]))
  {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = 0;
    local_18 = *(longlong *)(*plVar2 + lVar3 * 8);
    uStack_20 = 0;
    local_10 = 0;
    param_1[0xb] = *(longlong *)(local_18 + 0x38);
    local_30 = local_18 + 0x20;
    local_28 = local_30;
    FUN_1433e90c0(param_1 + 2,local_48);
    lVar3 = local_48[0];
    param_1[5] = local_30;
    param_1[8] = local_18;
    param_1[9] = local_10;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
    if (local_48[0] != 0) {
      piVar1 = (int *)(local_48[0] + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(local_48[0]);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1433e3750 FUN_1433e3750 body=293 status=ok
// SIG undefined FUN_1433e3750(void)

longlong * FUN_1433e3750(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 local_res8;
  undefined1 local_58 [16];
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  longlong local_10;
  
  *param_1 = 0;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[10] = param_2;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  puVar7 = (undefined4 *)FUN_1433e8370(param_2,local_58,(longlong)param_3,&local_res8);
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  plVar2 = (longlong *)*param_1;
  if (((plVar2 != (longlong *)0x0) && (lVar3 = param_1[1], -1 < lVar3)) && (lVar3 < (int)plVar2[1]))
  {
    lVar3 = *(longlong *)(*plVar2 + lVar3 * 8);
    param_1[0xb] = *(longlong *)(lVar3 + 0x38);
    FUN_1433e1d80(local_48,lVar3,local_res8);
    FUN_1433e90c0(param_1 + 2,local_48);
    param_1[5] = local_30;
    param_1[8] = local_18;
    param_1[9] = local_10;
    *(undefined4 *)(param_1 + 6) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_24;
    *(undefined4 *)(param_1 + 7) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1c;
    if (local_48[0] != 0) {
      piVar1 = (int *)(local_48[0] + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dd700(local_48[0]);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48[0]);
      }
    }
  }
  return param_1;
}



// FUNCTION 1433e3880 FUN_1433e3880 body=158 status=ok
// SIG undefined FUN_1433e3880(void)

undefined8 * FUN_1433e3880(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1433e1e50(param_1 + 2);
  *(short *)(param_1 + 0xf) = (short)plVar3[2];
  param_1[0xe] = param_1[0xb] + plVar3[1];
  if (*plVar3 != 0) {
    piVar1 = (int *)(*plVar3 + 8);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  param_1[0xc] = *plVar3;
  param_1[0xd] = *(undefined8 *)(*(longlong *)*param_1 + param_1[1] * 8);
  return param_1 + 0xc;
}



// FUNCTION 1433e3930 FUN_1433e3930 body=262 status=ok
// SIG undefined FUN_1433e3930(void)

void FUN_1433e3930(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined2 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong local_18;
  longlong local_10;
  
  FUN_1433e1f60(param_1 + 2);
  if (((param_1[8] == 0) || (*(ulonglong *)(param_1[8] + 8) <= (ulonglong)param_1[9])) &&
     (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)) {
    if (param_1[1] < plVar2[1]) {
      param_1[1] = param_1[1] + 1;
    }
    lVar3 = param_1[1];
    if ((-1 < lVar3) && (lVar3 < (int)plVar2[1])) {
      local_18 = *(longlong *)(*plVar2 + lVar3 * 8);
      local_48[0] = 0;
      local_48[1] = 0;
      local_38 = 0;
      param_1[0xb] = *(longlong *)(local_18 + 0x38);
      local_30 = local_18 + 0x20;
      uStack_20 = 0;
      local_10 = 0;
      local_28 = local_30;
      FUN_1433e90c0(param_1 + 2,local_48);
      lVar3 = local_48[0];
      param_1[5] = local_30;
      param_1[8] = local_18;
      param_1[9] = local_10;
      *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
      if (local_48[0] != 0) {
        piVar1 = (int *)(local_48[0] + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(local_48[0]);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1433e3a40 FUN_1433e3a40 body=132 status=ok
// SIG undefined FUN_1433e3a40(void)

void FUN_1433e3a40(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  short *psVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20) + -1;
  if ((((lVar3 < 0) || (*(int *)(param_1 + 0x20) <= lVar3)) ||
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8), plVar2 == (longlong *)0x0
      )) && (plVar2 = (longlong *)FUN_1433e85e0(param_1,0), plVar2 == (longlong *)0x0)) {
    return;
  }
  uVar1 = plVar2[1];
  if (uVar1 != 0) {
    if ((*plVar2 == 0) || (uVar1 <= uVar1 - 1)) {
      psVar4 = (short *)0x0;
    }
    else {
      psVar4 = (short *)(*plVar2 + (uVar1 - 1) * 2);
    }
    if ((*psVar4 == 10) || (*psVar4 == 0xd)) {
      return;
    }
  }
  FUN_1433e1640(plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 1433e3ad0 FUN_1433e3ad0 body=302 status=ok
// SIG undefined FUN_1433e3ad0(void)

undefined8 * FUN_1433e3ad0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b06768;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x28,0);
  puVar6 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar6 = puVar3;
  }
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar4);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
    }
  }
  param_1[6] = puVar6;
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x50);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_1433dd540(lVar4,plVar2);
  }
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar4);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
    }
  }
  param_1[7] = puVar5;
  return param_1;
}



// FUNCTION 1433e3c10 FUN_1433e3c10 body=265 status=ok
// SIG undefined FUN_1433e3c10(void)

undefined8 * FUN_1433e3c10(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b06768;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_38 = 0;
  local_30 = 1;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uVar3 = FUN_1433dfaa0(param_2,&local_38);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  param_1[6] = uVar3;
  FUN_1433dedf0(&local_38);
  uVar3 = FUN_1433df8e0(param_2,param_2 + 0x38);
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 1433e3d20 FUN_1433e3d20 body=305 status=ok
// SIG undefined FUN_1433e3d20(void)

void FUN_1433e3d20(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
        puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x90,0);
        puVar4 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 1) = 1;
          *puVar3 = &PTR_FUN_145b03c28;
          puVar3[2] = 0;
          puVar3[3] = 0;
          *(undefined4 *)(puVar3 + 4) = 100;
          *(undefined4 *)((longlong)puVar3 + 0x24) = 100;
          *(undefined4 *)(puVar3 + 5) = 1;
          puVar3[6] = plVar2;
          FUN_1433dd540(puVar3 + 7,plVar2);
          *(undefined1 *)(puVar3 + 0x11) = 0;
          puVar4 = puVar3;
        }
        if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
        }
        *(undefined8 **)(param_1 + 0x10) = puVar4;
      }
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)puVar5 * 8);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar4);
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
    } while (puVar5 < puVar1);
  }
  FUN_1433ea220(param_1 + 0x18,param_1 + 0x18,0);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
  return;
}



// FUNCTION 1433e3e60 GetLength body=105 status=ok
// SIG undefined GetLength(void)

longlong Scaleform::Render::Text::StyledText::GetLength(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar4 = 0;
  while ((((longlong *)(param_1 + 0x18) != (longlong *)0x0 && (-1 < lVar4)) &&
         (lVar4 < *(int *)(param_1 + 0x20)))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
    uVar3 = plVar1[1];
    if (uVar3 != 0) {
      lVar2 = *plVar1;
      if ((lVar2 == 0) || (uVar3 <= uVar3 - 1)) {
        psVar5 = (short *)0x0;
      }
      else {
        psVar5 = (short *)(lVar2 + (uVar3 - 1) * 2);
      }
      if (*psVar5 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    lVar6 = lVar6 + uVar3;
    if (lVar4 < *(longlong *)(param_1 + 0x20)) {
      lVar4 = lVar4 + 1;
    }
  }
  return lVar6;
}



// FUNCTION 1433e3ed0 FUN_1433e3ed0 body=83 status=ok
// SIG undefined FUN_1433e3ed0(void)

void FUN_1433e3ed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1433e3d20();
  FUN_1433e6b70(param_1,param_2,param_3,1,*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1433e3f30 FUN_1433e3f30 body=83 status=ok
// SIG undefined FUN_1433e3f30(void)

void FUN_1433e3f30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1433e3d20();
  FUN_1433e6f50(param_1,param_2,param_3,1,*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1433e3f90 FUN_1433e3f90 body=49 status=ok
// SIG undefined FUN_1433e3f90(void)

undefined8 FUN_1433e3f90(undefined8 param_1,undefined8 param_2)

{
  FUN_1432c2f70(param_2);
  FUN_1433e3fd0(param_1,param_2);
  return param_2;
}



// FUNCTION 1433e3fd0 FUN_1433e3fd0 body=155 status=ok
// SIG undefined FUN_1433e3fd0(void)

undefined8 FUN_1433e3fd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  Scaleform::String::operator=(param_2,&DAT_145af3922);
  lVar4 = 0;
  while ((((longlong *)(param_1 + 0x18) != (longlong *)0x0 && (-1 < lVar4)) &&
         (lVar4 < *(int *)(param_1 + 0x20)))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
    uVar5 = plVar1[1];
    lVar2 = *plVar1;
    if (uVar5 != 0) {
      if ((lVar2 == 0) || (uVar5 <= uVar5 - 1)) {
        psVar3 = (short *)0x0;
      }
      else {
        psVar3 = (short *)(lVar2 + (uVar5 - 1) * 2);
      }
      if (*psVar3 == 0) {
        uVar5 = uVar5 - 1;
      }
    }
    FUN_1432c3830(param_2,lVar2,uVar5);
    if (lVar4 < *(longlong *)(param_1 + 0x20)) {
      lVar4 = lVar4 + 1;
    }
  }
  return param_2;
}



// FUNCTION 1433e4080 FUN_1433e4080 body=195 status=ok
// SIG undefined FUN_1433e4080(void)

void FUN_1433e4080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  
  lVar2 = Scaleform::Render::Text::StyledText::GetLength();
  FUN_1433924d0(param_2,lVar2 + 1);
  psVar7 = (short *)0x0;
  psVar5 = psVar7;
  psVar6 = psVar7;
  while ((((longlong *)(param_1 + 0x18) != (longlong *)0x0 && (-1 < (longlong)psVar6)) &&
         ((longlong)psVar6 < (longlong)*(int *)(param_1 + 0x20)))) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)psVar6 * 8);
    _Src = (void *)*puVar1;
    uVar4 = puVar1[1];
    if (uVar4 != 0) {
      if ((_Src == (void *)0x0) ||
         (psVar3 = (short *)((longlong)_Src + (uVar4 - 1) * 2), uVar4 <= uVar4 - 1)) {
        psVar3 = psVar7;
      }
      if (*psVar3 == 0) {
        uVar4 = uVar4 - 1;
      }
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)psVar5 * 2),_Src,uVar4 * 2);
    psVar5 = (short *)((longlong)psVar5 + uVar4);
    if ((longlong)psVar6 < *(longlong *)(param_1 + 0x20)) {
      psVar6 = (short *)((longlong)psVar6 + 1);
    }
  }
  *(undefined2 *)(*param_2 + (longlong)psVar5 * 2) = 0;
  return;
}



// FUNCTION 1433e4150 FUN_1433e4150 body=269 status=ok
// SIG undefined FUN_1433e4150(void)

void FUN_1433e4150(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  short *psVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *local_res10;
  longlong *local_38;
  longlong local_30;
  
  if (param_4 == -1) {
    param_4 = Scaleform::Render::Text::StyledText::GetLength();
  }
  uVar5 = param_4 - param_3;
  FUN_1433924d0(param_2,uVar5 + 1);
  psVar7 = (short *)0x0;
  local_res10 = (short *)0x0;
  FUN_1433e8370(param_1,&local_38,param_3,&local_res10);
  psVar6 = local_res10;
  psVar8 = psVar7;
  while ((((local_38 != (longlong *)0x0 && (-1 < local_30)) && (local_30 < (int)local_38[1])) &&
         (uVar5 != 0))) {
    plVar1 = *(longlong **)(*local_38 + local_30 * 8);
    uVar3 = plVar1[1];
    if (uVar3 != 0) {
      if ((*plVar1 == 0) || (psVar2 = (short *)(*plVar1 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
        psVar2 = psVar7;
      }
      if (*psVar2 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    uVar4 = uVar3 - (longlong)psVar6;
    if (uVar5 < uVar3 - (longlong)psVar6) {
      uVar4 = uVar5;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)psVar8 * 2),(void *)(*plVar1 + (longlong)psVar6 * 2),
               uVar4 * 2);
    psVar8 = (short *)((longlong)psVar8 + uVar4);
    uVar5 = uVar5 - uVar4;
    psVar6 = psVar7;
    if (local_30 < local_38[1]) {
      local_30 = local_30 + 1;
    }
  }
  *(undefined2 *)(*param_2 + (longlong)psVar8 * 2) = 0;
  return;
}



// FUNCTION 1433e4270 FUN_1433e4270 body=732 status=ok
// SIG undefined FUN_1433e4270(void)

void FUN_1433e4270(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  short *psVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *psVar8;
  ulonglong uVar9;
  longlong local_res10;
  undefined8 local_res18;
  longlong *local_48;
  longlong local_40;
  
  if (param_4 == -1) {
    param_4 = Scaleform::Render::Text::StyledText::GetLength();
  }
  psVar8 = (short *)0x0;
  local_res10 = 0;
  uVar9 = param_4 - param_3;
  FUN_1433e3d20(param_2);
  (**(code **)(*param_2 + 8))(param_2,param_3,uVar9,&DAT_145af3922);
  FUN_1433e8370(param_1,&local_48,param_3,&local_res10);
  if (((local_48 != (longlong *)0x0) && (-1 < local_40)) && (local_40 < (int)local_48[1])) {
    if (local_res10 == 0) goto LAB_1433e43c4;
    plVar4 = *(longlong **)(*local_48 + local_40 * 8);
    local_res18 = FUN_1433e85e0(param_2,plVar4[3]);
    uVar5 = plVar4[1];
    if (uVar5 != 0) {
      if ((*plVar4 == 0) || (psVar2 = (short *)(*plVar4 + (uVar5 - 1) * 2), uVar5 <= uVar5 - 1)) {
        psVar2 = psVar8;
      }
      if (*psVar2 == 0) {
        uVar5 = uVar5 - 1;
      }
    }
    uVar7 = uVar9;
    if (uVar5 - local_res10 < uVar9) {
      uVar7 = uVar5 - local_res10;
    }
    uVar1 = FUN_1433e9900(param_2);
    FUN_1433e32d0(local_res18,uVar1,plVar4,local_res10,0,uVar7);
    while( true ) {
      uVar9 = uVar9 - uVar7;
      if (local_40 < local_48[1]) {
        local_40 = local_40 + 1;
      }
LAB_1433e43c4:
      if (((local_40 < 0) || ((int)local_48[1] <= local_40)) || (uVar9 == 0)) goto LAB_1433e4458;
      plVar4 = *(longlong **)(*local_48 + local_40 * 8);
      uVar7 = plVar4[1];
      if (uVar7 != 0) {
        lVar6 = *plVar4;
        if ((lVar6 == 0) || (psVar2 = (short *)(lVar6 + (uVar7 - 1) * 2), uVar7 <= uVar7 - 1)) {
          psVar2 = psVar8;
        }
        if (*psVar2 == 0) {
          uVar7 = uVar7 - 1;
        }
      }
      if (uVar9 < uVar7) break;
      FUN_1433e88c0();
    }
    lVar6 = *(longlong *)(*local_48 + local_40 * 8);
    uVar1 = FUN_1433e85e0(param_2,*(undefined8 *)(lVar6 + 0x18));
    uVar3 = FUN_1433e9900(param_2);
    FUN_1433e32d0(uVar1,uVar3,lVar6,0,0,uVar9);
  }
LAB_1433e4458:
  lVar6 = param_2[4] + -1;
  if ((((-1 < lVar6) && (lVar6 < (int)param_2[4])) &&
      (plVar4 = *(longlong **)(param_2[3] + lVar6 * 8), plVar4 != (longlong *)0x0)) &&
     (uVar9 = plVar4[1], uVar9 != 0)) {
    if ((*plVar4 == 0) || (psVar2 = (short *)(*plVar4 + (uVar9 - 1) * 2), uVar9 <= uVar9 - 1)) {
      psVar2 = psVar8;
    }
    if ((*psVar2 == 10) || (*psVar2 == 0xd)) {
      FUN_1433e85e0(param_2,plVar4[3]);
    }
  }
  lVar6 = param_2[4] + -1;
  if ((((-1 < lVar6) && (lVar6 < (int)param_2[4])) &&
      (plVar4 = *(longlong **)(param_2[3] + lVar6 * 8), plVar4 != (longlong *)0x0)) ||
     (plVar4 = (longlong *)FUN_1433e85e0(param_2,0), plVar4 != (longlong *)0x0)) {
    uVar9 = plVar4[1];
    if (uVar9 != 0) {
      if ((*plVar4 != 0) && (uVar9 - 1 < uVar9)) {
        psVar8 = (short *)(*plVar4 + (uVar9 - 1) * 2);
      }
      if ((*psVar8 == 10) || (*psVar8 == 0xd)) goto LAB_1433e4530;
    }
    FUN_1433e1640(plVar4,param_2[2],param_2[7]);
  }
LAB_1433e4530:
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  }
  return;
}



// FUNCTION 1433e4560 FUN_1433e4560 body=119 status=ok
// SIG undefined FUN_1433e4560(void)

undefined8 FUN_1433e4560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1433e9900();
  lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x50))(*(longlong **)(lVar1 + 0x30),0x48);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1433e3c10(lVar2,lVar1);
  }
  FUN_1433e4270(param_1,uVar3,param_2,param_3);
  return uVar3;
}



// FUNCTION 1433e45e0 FUN_1433e45e0 body=81 status=ok
// SIG undefined FUN_1433e45e0(void)

undefined8 FUN_1433e45e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  FUN_1432c5960(local_38,DAT_146b62f28);
  uVar1 = FUN_1433e46a0(param_1,local_38);
  FUN_1432c32a0(param_2,uVar1);
  Scaleform::StringBuffer::~StringBuffer(local_38);
  return param_2;
}



// FUNCTION 1433e4640 FUN_1433e4640 body=81 status=ok
// SIG undefined FUN_1433e4640(void)

undefined8 FUN_1433e4640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  FUN_1432c5960(local_38,DAT_146b62f28);
  uVar1 = FUN_1433e46a0(param_1,local_38);
  FUN_1432c4ec0(param_2,uVar1);
  Scaleform::StringBuffer::~StringBuffer(local_38);
  return param_2;
}



// FUNCTION 1433e46a0 FUN_1433e46a0 body=7096 status=ok
// SIG undefined FUN_1433e46a0(void)

RefCountNTSImpl * FUN_1433e46a0(longlong param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  float fVar2;
  RefCountNTSImpl RVar3;
  undefined1 uVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  short sVar15;
  ulonglong uVar16;
  short *psVar17;
  longlong lVar18;
  short *psVar19;
  RefCountNTSImpl *this;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  ushort uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined *puVar28;
  char *pcVar29;
  RefCountNTSImpl *this_00;
  longlong *plVar30;
  uint uVar31;
  RefCountNTSImpl *this_01;
  undefined4 local_4f8 [2];
  RefCountNTSImpl *local_4f0;
  longlong local_4e0;
  longlong local_4d8;
  RefCountNTSImpl *local_4d0;
  longlong local_4c8;
  uint local_4c0 [2];
  longlong *local_4b8;
  ulonglong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  RefCountNTSImpl *local_498;
  ulonglong local_490;
  longlong *local_488;
  longlong local_480;
  undefined1 local_478 [9];
  char local_46f;
  longlong *local_298 [65];
  longlong local_90;
  short *local_88;
  
  lVar21 = 0;
  bVar12 = false;
  bVar11 = false;
  Scaleform::StringBuffer::operator=(param_2,&DAT_145af3922);
  lVar18 = *(longlong *)(param_1 + 0x20);
  plVar27 = (longlong *)(param_1 + 0x18);
  this = param_2;
  this_00 = param_2;
  local_4a8 = lVar21;
  local_4d0 = param_2;
  local_4c8 = lVar21;
  local_4b8 = plVar27;
  local_4a0 = lVar18;
  local_498 = param_2;
  do {
    psVar19 = (short *)0x0;
    if (((plVar27 == (longlong *)0x0) || (lVar21 < 0)) || ((int)plVar27[1] <= lVar21)) {
      return param_2;
    }
    local_4a8 = local_4a8 + 1;
    plVar30 = *(longlong **)(*plVar27 + lVar21 * 8);
    if (local_4a8 == lVar18) {
      uVar16 = plVar30[1];
      if (uVar16 != 0) {
        if ((*plVar30 == 0) ||
           (psVar17 = (short *)(*plVar30 + (uVar16 - 1) * 2), uVar16 <= uVar16 - 1)) {
          psVar17 = psVar19;
        }
        if (*psVar17 == 0) {
          uVar16 = uVar16 - 1;
        }
        lVar21 = local_4c8;
        plVar27 = local_4b8;
        if (uVar16 != 0) goto LAB_1433e47aa;
      }
    }
    else {
LAB_1433e47aa:
      local_488 = plVar30;
      Scaleform::StringBuffer::AppendString(param_2,"<TEXTFORMAT",0xffffffffffffffff);
      lVar18 = plVar30[3];
      local_480 = lVar18;
      if ((*(byte *)(lVar18 + 0x22) >> 2 & 1) != 0) {
        sVar6 = *(short *)(lVar18 + 0x1a);
        local_4f8[0] = 1;
        local_4f0 = param_2;
        FUN_1433561d0(local_478,local_4f8);
        FUN_1433563e0(local_478," INDENT=\"{0}\"");
        cVar14 = FUN_143356fb0(local_478);
        lVar21 = local_90;
        while (local_90 = lVar21, cVar14 != '\0') {
          if (local_88 < (short *)0x60) {
            plVar27 = local_298[0];
            if (local_298[0] == (longlong *)0x0) {
              plVar27 = DAT_146b62f28;
            }
            lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
          }
          else {
            local_90 = (lVar21 + 0x5fU & 0xfffffffffffffff8) + 8;
            uVar16 = (local_90 - (longlong)local_298) - 8;
            local_88 = (short *)(0x200 - uVar16);
            if (0x1ff < uVar16) {
              local_88 = psVar19;
            }
          }
          psVar17 = psVar19;
          if (lVar21 != 0) {
            psVar17 = (short *)FUN_143354cd0(lVar21,local_478,(int)sVar6);
          }
          FUN_143357040(local_478,psVar17,1);
          cVar14 = FUN_143356fb0(local_478);
          lVar21 = local_90;
        }
        local_46f = local_46f + '\x01';
        Scaleform::MsgFormat::FinishFormatD(local_478);
        FUN_1433562f0(local_478);
      }
      if ((*(byte *)(lVar18 + 0x22) >> 1 & 1) != 0) {
        uVar7 = *(undefined2 *)(lVar18 + 0x18);
        local_4f8[0] = 1;
        local_4f0 = param_2;
        FUN_1433561d0(local_478,local_4f8);
        FUN_1433563e0(local_478," BLOCKINDENT=\"{0}\"");
        cVar14 = FUN_143356fb0(local_478);
        lVar21 = local_90;
        while (local_90 = lVar21, cVar14 != '\0') {
          if (local_88 < (short *)0x60) {
            plVar27 = local_298[0];
            if (local_298[0] == (longlong *)0x0) {
              plVar27 = DAT_146b62f28;
            }
            lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
          }
          else {
            local_90 = (lVar21 + 0x5fU & 0xfffffffffffffff8) + 8;
            uVar16 = (local_90 - (longlong)local_298) - 8;
            local_88 = (short *)(0x200 - uVar16);
            if (0x1ff < uVar16) {
              local_88 = psVar19;
            }
          }
          psVar17 = psVar19;
          if (lVar21 != 0) {
            psVar17 = (short *)FUN_143354d50(lVar21,local_478,uVar7);
          }
          FUN_143357040(local_478,psVar17,1);
          cVar14 = FUN_143356fb0(local_478);
          lVar21 = local_90;
        }
        local_46f = local_46f + '\x01';
        Scaleform::MsgFormat::FinishFormatD(local_478);
        FUN_1433562f0(local_478);
      }
      if ((*(byte *)(lVar18 + 0x22) >> 4 & 1) != 0) {
        uVar7 = *(undefined2 *)(lVar18 + 0x1e);
        local_4f8[0] = 1;
        local_4f0 = param_2;
        FUN_1433561d0(local_478,local_4f8);
        FUN_1433563e0(local_478," LEFTMARGIN=\"{0}\"");
        cVar14 = FUN_143356fb0(local_478);
        lVar21 = local_90;
        while (local_90 = lVar21, cVar14 != '\0') {
          if (local_88 < (short *)0x60) {
            plVar27 = local_298[0];
            if (local_298[0] == (longlong *)0x0) {
              plVar27 = DAT_146b62f28;
            }
            lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
          }
          else {
            local_90 = (lVar21 + 0x5fU & 0xfffffffffffffff8) + 8;
            uVar16 = (local_90 - (longlong)local_298) - 8;
            local_88 = (short *)(0x200 - uVar16);
            if (0x1ff < uVar16) {
              local_88 = psVar19;
            }
          }
          psVar17 = psVar19;
          if (lVar21 != 0) {
            psVar17 = (short *)FUN_143354d50(lVar21,local_478,uVar7);
          }
          FUN_143357040(local_478,psVar17,1);
          cVar14 = FUN_143356fb0(local_478);
          lVar21 = local_90;
        }
        local_46f = local_46f + '\x01';
        Scaleform::MsgFormat::FinishFormatD(local_478);
        FUN_1433562f0(local_478);
      }
      if ((*(byte *)(lVar18 + 0x22) >> 5 & 1) != 0) {
        uVar7 = *(undefined2 *)(lVar18 + 0x20);
        local_4f8[0] = 1;
        local_4f0 = param_2;
        FUN_1433561d0(local_478,local_4f8);
        FUN_1433563e0(local_478," RIGHTMARGIN=\"{0}\"");
        cVar14 = FUN_143356fb0(local_478);
        lVar21 = local_90;
        while (local_90 = lVar21, cVar14 != '\0') {
          if (local_88 < (short *)0x60) {
            plVar27 = local_298[0];
            if (local_298[0] == (longlong *)0x0) {
              plVar27 = DAT_146b62f28;
            }
            lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
          }
          else {
            local_90 = (lVar21 + 0x5fU & 0xfffffffffffffff8) + 8;
            uVar16 = (local_90 - (longlong)local_298) - 8;
            local_88 = (short *)(0x200 - uVar16);
            if (0x1ff < uVar16) {
              local_88 = psVar19;
            }
          }
          psVar17 = psVar19;
          if (lVar21 != 0) {
            psVar17 = (short *)FUN_143354d50(lVar21,local_478,uVar7);
          }
          FUN_143357040(local_478,psVar17,1);
          cVar14 = FUN_143356fb0(local_478);
          lVar21 = local_90;
        }
        local_46f = local_46f + '\x01';
        Scaleform::MsgFormat::FinishFormatD(local_478);
        FUN_1433562f0(local_478);
      }
      if ((*(byte *)(lVar18 + 0x22) >> 3 & 1) != 0) {
        sVar6 = *(short *)(lVar18 + 0x1c);
        local_4f8[0] = 1;
        local_4f0 = param_2;
        FUN_1433561d0(local_478,local_4f8);
        FUN_1433563e0(local_478," LEADING=\"{0}\"");
        cVar14 = FUN_143356fb0(local_478);
        lVar21 = local_90;
        while (local_90 = lVar21, cVar14 != '\0') {
          if (local_88 < (short *)0x60) {
            plVar27 = local_298[0];
            if (local_298[0] == (longlong *)0x0) {
              plVar27 = DAT_146b62f28;
            }
            lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
          }
          else {
            local_90 = (lVar21 + 0x5fU & 0xfffffffffffffff8) + 8;
            uVar16 = (local_90 - (longlong)local_298) - 8;
            local_88 = (short *)(0x200 - uVar16);
            if (0x1ff < uVar16) {
              local_88 = psVar19;
            }
          }
          psVar17 = psVar19;
          if (lVar21 != 0) {
            psVar17 = (short *)FUN_143354cd0(lVar21,local_478,(int)sVar6);
          }
          FUN_143357040(local_478,psVar17,1);
          cVar14 = FUN_143356fb0(local_478);
          lVar21 = local_90;
        }
        local_46f = local_46f + '\x01';
        Scaleform::MsgFormat::FinishFormatD(local_478);
        FUN_1433562f0(local_478);
      }
      if ((*(byte *)(lVar18 + 0x22) >> 6 & 1) != 0) {
        Scaleform::StringBuffer::AppendString(param_2," TABSTOPS=\"",0xffffffffffffffff);
        lVar18 = Scaleform::Render::Text::ParagraphFormat::GetTabStops(lVar18,local_4c0);
        uVar31 = 0;
        if (local_4c0[0] != 0) {
          do {
            local_4f8[0] = 1;
            local_4f0 = param_2;
            FUN_1433561d0(local_478,local_4f8);
            FUN_1433563e0(local_478,"{0:sw:,:}{1}");
            cVar14 = FUN_143356fb0(local_478);
            lVar21 = local_90;
            while (local_90 = lVar21, cVar14 != '\0') {
              if (local_88 < &DAT_00000030) {
                plVar27 = local_298[0];
                if (local_298[0] == (longlong *)0x0) {
                  plVar27 = DAT_146b62f28;
                }
                lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x30,8);
              }
              else {
                local_90 = (lVar21 + 0x2fU & 0xfffffffffffffff8) + 8;
                uVar16 = (local_90 - (longlong)local_298) - 8;
                local_88 = (short *)(0x200 - uVar16);
                if (0x1ff < uVar16) {
                  local_88 = (short *)0x0;
                }
              }
              psVar19 = (short *)0x0;
              if (lVar21 != 0) {
                psVar19 = (short *)FUN_1433543c0(lVar21,local_478,uVar31 != 0);
              }
              FUN_143357040(local_478,psVar19,1);
              cVar14 = FUN_143356fb0(local_478);
              lVar21 = local_90;
            }
            local_46f = local_46f + '\x01';
            FUN_1433e8c00(local_478,lVar18 + (ulonglong)uVar31 * 4);
            Scaleform::MsgFormat::FinishFormatD(local_478);
            FUN_1433562f0(local_478);
            uVar31 = uVar31 + 1;
            this = local_4d0;
          } while (uVar31 < local_4c0[0]);
        }
        Scaleform::StringBuffer::AppendString(param_2,&DAT_145afa020,0xffffffffffffffff);
        lVar18 = local_480;
      }
      lVar21 = 0;
      Scaleform::StringBuffer::AppendString(param_2,&DAT_145b06838,0xffffffffffffffff);
      puVar28 = &DAT_145b0683c;
      if ((*(ushort *)(lVar18 + 0x22) & 0x8080) == 0x8080) {
        puVar28 = &DAT_145b06840;
      }
      Scaleform::StringBuffer::AppendString(param_2,puVar28,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(param_2," ALIGN=\"",0xffffffffffffffff);
      uVar8 = *(ushort *)(lVar18 + 0x22) >> 9;
      uVar23 = uVar8 & 3;
      if ((uVar8 & 3) == 0) {
        pcVar29 = "LEFT";
LAB_1433e4f53:
        Scaleform::StringBuffer::AppendString(param_2,pcVar29,0xffffffffffffffff);
      }
      else {
        if (uVar23 == 1) {
          pcVar29 = "RIGHT";
          goto LAB_1433e4f53;
        }
        if (uVar23 == 2) {
          pcVar29 = "JUSTIFY";
          goto LAB_1433e4f53;
        }
        if (uVar23 == 3) {
          pcVar29 = "CENTER";
          goto LAB_1433e4f53;
        }
      }
      Scaleform::StringBuffer::AppendString(param_2,&DAT_145b06878,0xffffffffffffffff);
      local_4e0 = 0;
      local_490 = 0;
      local_4b0 = 0;
      bVar13 = false;
      lVar18 = lVar21;
      if (plVar30[1] != 0) {
        do {
          lVar21 = lVar18;
          if (((longlong)local_490 < 0) || ((ulonglong)plVar30[5] <= local_490)) {
            uVar16 = plVar30[1];
            lVar20 = *plVar30;
LAB_1433e5efb:
            uVar16 = uVar16 - local_4b0;
            lVar20 = lVar20 + local_4b0 * 2;
            if (local_4e0 != 0) {
              piVar1 = (int *)(local_4e0 + 8);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_1433dd700(local_4e0);
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_4e0);
              }
            }
            local_4e0 = 0;
LAB_1433e5f35:
            uVar25 = 0;
            if (uVar16 != 0) {
              do {
                sVar15 = 10;
                sVar6 = *(short *)(lVar20 + uVar25 * 2);
                if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
                  sVar15 = 0xd;
                }
                if ((sVar6 != sVar15) && (sVar6 != 0)) {
                  switch(sVar6) {
                  case 0x22:
                    Scaleform::StringBuffer::AppendString(param_2,&DAT_145af7b88,0xffffffffffffffff)
                    ;
                    break;
                  default:
                    FUN_1432c5df0(param_2);
                    break;
                  case 0x26:
                    Scaleform::StringBuffer::AppendString(param_2,&DAT_145af7b98,0xffffffffffffffff)
                    ;
                    break;
                  case 0x27:
                    Scaleform::StringBuffer::AppendString(param_2,&DAT_145af7b90,0xffffffffffffffff)
                    ;
                    break;
                  case 0x3c:
                    Scaleform::StringBuffer::AppendString(param_2,&DAT_145af7b78,0xffffffffffffffff)
                    ;
                    break;
                  case 0x3e:
                    Scaleform::StringBuffer::AppendString(param_2,&DAT_145af7b80,0xffffffffffffffff)
                    ;
                    break;
                  case 0xa0:
                    Scaleform::StringBuffer::AppendString(param_2,"&nbsp;",0xffffffffffffffff);
                  }
                }
                uVar25 = uVar25 + 1;
                this = local_4d0;
                this_00 = local_498;
              } while (uVar25 < uVar16);
            }
            if (local_4e0 != 0) {
              if ((*(byte *)(local_4e0 + 0x4a) & 4) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069c0,0xffffffffffffffff);
              }
              if ((*(byte *)(local_4e0 + 0x4a) & 2) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069c8,0xffffffffffffffff);
              }
              if ((*(byte *)(local_4e0 + 0x4a) & 1) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069d0,0xffffffffffffffff);
              }
              if (((*(ushort *)(local_4e0 + 0x4c) & 0x100) != 0) &&
                 (lVar18 = FUN_1432c3580(local_4e0 + 0x20), lVar18 != 0)) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b0690c,0xffffffffffffffff);
              }
            }
          }
          else {
            lVar24 = plVar30[4];
            lVar20 = *plVar30;
            uVar16 = *(ulonglong *)(lVar24 + local_490 * 0x18);
            if (local_4b0 < uVar16) goto LAB_1433e5efb;
            lVar26 = *(longlong *)(lVar24 + 0x10 + local_490 * 0x18);
            lVar20 = lVar20 + uVar16 * 2;
            uVar16 = *(ulonglong *)(lVar24 + 8 + local_490 * 0x18);
            if (lVar26 != 0) {
              *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
            }
            local_4d8 = lVar26;
            if (local_4e0 != 0) {
              piVar1 = (int *)(local_4e0 + 8);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_1433dd700(local_4e0);
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_4e0);
              }
            }
            local_4e0 = lVar26;
            if (lVar26 == 0) goto LAB_1433e5f35;
            if ((*(ushort *)(lVar26 + 0x4c) >> 9 & 1) == 0) {
              bVar11 = true;
              this = (RefCountNTSImpl *)0x0;
              local_4d0 = (RefCountNTSImpl *)0x0;
              this_01 = this;
            }
            else {
              bVar12 = true;
              if (*(longlong *)(lVar26 + 0x30) != 0) {
                piVar1 = (int *)(*(longlong *)(lVar26 + 0x30) + 8);
                *piVar1 = *piVar1 + 1;
              }
              this_00 = *(RefCountNTSImpl **)(lVar26 + 0x30);
              this_01 = this_00;
              local_498 = this_00;
            }
            if ((bVar11) && (bVar11 = false, this != (RefCountNTSImpl *)0x0)) {
              Scaleform::RefCountNTSImpl::Release(this);
            }
            if ((bVar12) && (bVar12 = false, this_00 != (RefCountNTSImpl *)0x0)) {
              Scaleform::RefCountNTSImpl::Release(this_00);
            }
            lVar21 = local_4d8;
            if (this_01 == (RefCountNTSImpl *)0x0) {
              if (bVar13) {
                if ((lVar18 != 0) && (cVar14 = FUN_1433deac0(lVar18,local_4d8), cVar14 == '\0')) {
                  Scaleform::StringBuffer::AppendString(param_2,"</FONT>",0xffffffffffffffff);
                  goto LAB_1433e5785;
                }
              }
              else {
LAB_1433e5785:
                Scaleform::StringBuffer::AppendString(param_2,"<FONT",0xffffffffffffffff);
                if ((*(byte *)(lVar21 + 0x4c) >> 2 & 1) != 0) {
                  local_4f8[0] = 1;
                  local_4f0 = param_2;
                  uVar22 = FUN_1433ddd30(lVar21);
                  FUN_1433561d0(local_478,local_4f8);
                  FUN_1433563e0(local_478," FACE=\"{0}\"");
                  FUN_143386f20(local_478,uVar22);
                  Scaleform::MsgFormat::FinishFormatD(local_478);
                  FUN_1433562f0(local_478);
                  lVar21 = local_4d8;
                }
                if ((*(byte *)(lVar21 + 0x4c) >> 3 & 1) != 0) {
                  uVar8 = *(ushort *)(lVar21 + 0x48);
                  local_4f8[0] = 1;
                  local_4f0 = param_2;
                  FUN_1433561d0(local_478,local_4f8);
                  FUN_1433563e0(local_478," SIZE=\"{0}\"");
                  cVar14 = FUN_143356fb0(local_478);
                  if (cVar14 != '\0') {
                    do {
                      if (local_88 < (short *)0x60) {
                        plVar27 = local_298[0];
                        if (local_298[0] == (longlong *)0x0) {
                          plVar27 = DAT_146b62f28;
                        }
                        lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                        lVar24 = local_90;
                      }
                      else {
                        lVar24 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                        uVar25 = (lVar24 - (longlong)local_298) - 8;
                        lVar21 = local_90;
                        local_88 = (short *)(0x200 - uVar25);
                        if (0x1ff < uVar25) {
                          local_88 = (short *)0x0;
                        }
                      }
                      local_90 = lVar24;
                      psVar19 = (short *)0x0;
                      if (lVar21 != 0) {
                        psVar19 = (short *)FUN_143354d50(lVar21,local_478,
                                                         (longlong)((float)uVar8 * 0.05) &
                                                         0xffffffff);
                      }
                      FUN_143357040(local_478,psVar19);
                      cVar14 = FUN_143356fb0(local_478);
                      this = local_4d0;
                    } while (cVar14 != '\0');
                  }
                  local_46f = local_46f + '\x01';
                  Scaleform::MsgFormat::FinishFormatD(local_478);
                  FUN_1433562f0(local_478);
                  lVar21 = local_4d8;
                }
                if ((*(byte *)(lVar21 + 0x4c) & 1) != 0) {
                  uVar31 = *(uint *)(lVar21 + 0x40);
                  local_4f8[0] = 1;
                  local_4f0 = param_2;
                  FUN_1433561d0(local_478,local_4f8);
                  FUN_1433563e0(local_478," COLOR=\"#{0:X:.6}\"");
                  cVar14 = FUN_143356fb0(local_478);
                  if (cVar14 != '\0') {
                    do {
                      if (local_88 < (short *)0x60) {
                        plVar27 = local_298[0];
                        if (local_298[0] == (longlong *)0x0) {
                          plVar27 = DAT_146b62f28;
                        }
                        lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                        lVar24 = local_90;
                      }
                      else {
                        lVar24 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                        uVar25 = (lVar24 - (longlong)local_298) - 8;
                        lVar21 = local_90;
                        local_88 = (short *)(0x200 - uVar25);
                        if (0x1ff < uVar25) {
                          local_88 = (short *)0x0;
                        }
                      }
                      local_90 = lVar24;
                      psVar19 = (short *)0x0;
                      if (lVar21 != 0) {
                        psVar19 = (short *)FUN_143354e50(lVar21,local_478,uVar31 & 0xffffff);
                      }
                      FUN_143357040(local_478,psVar19);
                      cVar14 = FUN_143356fb0(local_478);
                      this = local_4d0;
                    } while (cVar14 != '\0');
                  }
                  local_46f = local_46f + '\x01';
                  Scaleform::MsgFormat::FinishFormatD(local_478);
                  FUN_1433562f0(local_478);
                  lVar21 = local_4d8;
                }
                if ((*(byte *)(lVar21 + 0x4c) >> 1 & 1) != 0) {
                  fVar2 = *(float *)(lVar21 + 0x44);
                  local_4f8[0] = 1;
                  local_4f0 = param_2;
                  FUN_1433561d0(local_478,local_4f8);
                  FUN_1433563e0(local_478," LETTERSPACING=\"{0}\"");
                  cVar14 = FUN_143356fb0(local_478);
                  if (cVar14 != '\0') {
                    do {
                      if (local_88 < (short *)0x1a8) {
                        plVar27 = local_298[0];
                        if (local_298[0] == (longlong *)0x0) {
                          plVar27 = DAT_146b62f28;
                        }
                        lVar24 = (**(code **)(*plVar27 + 0x48))(plVar27,0x1a8,8);
                        lVar26 = local_90;
                      }
                      else {
                        lVar26 = (local_90 + 0x1a7U & 0xfffffffffffffff8) + 8;
                        uVar25 = (lVar26 - (longlong)local_298) - 8;
                        lVar24 = local_90;
                        local_88 = (short *)(0x200 - uVar25);
                        if (0x1ff < uVar25) {
                          local_88 = (short *)0x0;
                        }
                      }
                      local_90 = lVar26;
                      psVar19 = (short *)0x0;
                      if (lVar24 != 0) {
                        psVar19 = (short *)FUN_1433557b0(lVar24,local_478,(double)(fVar2 * 0.05));
                      }
                      FUN_143357040(local_478,psVar19);
                      cVar14 = FUN_143356fb0(local_478);
                      this = local_4d0;
                    } while (cVar14 != '\0');
                  }
                  local_46f = local_46f + '\x01';
                  Scaleform::MsgFormat::FinishFormatD(local_478);
                  FUN_1433562f0(local_478);
                }
                if ((*(ushort *)(lVar21 + 0x4c) >> 10 & 1) != 0) {
                  uVar4 = *(undefined1 *)(lVar21 + 0x43);
                  local_4f8[0] = 1;
                  local_4f0 = param_2;
                  FUN_1433561d0(local_478,local_4f8);
                  FUN_1433563e0(local_478," ALPHA=\"#{0:X:.2}\"");
                  cVar14 = FUN_143356fb0(local_478);
                  if (cVar14 != '\0') {
                    do {
                      if (local_88 < (short *)0x60) {
                        plVar27 = local_298[0];
                        if (local_298[0] == (longlong *)0x0) {
                          plVar27 = DAT_146b62f28;
                        }
                        lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                        lVar24 = local_90;
                      }
                      else {
                        lVar24 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                        uVar25 = (lVar24 - (longlong)local_298) - 8;
                        lVar21 = local_90;
                        local_88 = (short *)(0x200 - uVar25);
                        if (0x1ff < uVar25) {
                          local_88 = (short *)0x0;
                        }
                      }
                      local_90 = lVar24;
                      psVar19 = (short *)0x0;
                      if (lVar21 != 0) {
                        psVar19 = (short *)FUN_143354d50(lVar21,local_478,uVar4);
                      }
                      FUN_143357040(local_478,psVar19);
                      cVar14 = FUN_143356fb0(local_478);
                      this = local_4d0;
                    } while (cVar14 != '\0');
                  }
                  local_46f = local_46f + '\x01';
                  Scaleform::MsgFormat::FinishFormatD(local_478);
                  FUN_1433562f0(local_478);
                  lVar21 = local_4d8;
                }
                bVar5 = *(byte *)(lVar21 + 0x4a);
                local_4f8[0] = 1;
                local_4f0 = param_2;
                FUN_1433561d0(local_478,local_4f8);
                FUN_1433563e0(local_478," KERNING=\"{0:sw:1:0}\"");
                cVar14 = FUN_143356fb0(local_478);
                if (cVar14 != '\0') {
                  do {
                    if (local_88 < &DAT_00000030) {
                      plVar27 = local_298[0];
                      if (local_298[0] == (longlong *)0x0) {
                        plVar27 = DAT_146b62f28;
                      }
                      lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x30,8);
                      lVar24 = local_90;
                    }
                    else {
                      lVar24 = (local_90 + 0x2fU & 0xfffffffffffffff8) + 8;
                      uVar25 = (lVar24 - (longlong)local_298) - 8;
                      lVar21 = local_90;
                      local_88 = (short *)(0x200 - uVar25);
                      if (0x1ff < uVar25) {
                        local_88 = (short *)0x0;
                      }
                    }
                    local_90 = lVar24;
                    psVar19 = (short *)0x0;
                    if (lVar21 != 0) {
                      psVar19 = (short *)FUN_1433543c0(lVar21,local_478,bVar5 >> 3 & 1);
                    }
                    FUN_143357040(local_478,psVar19);
                    cVar14 = FUN_143356fb0(local_478);
                    this = local_4d0;
                  } while (cVar14 != '\0');
                }
                local_46f = local_46f + '\x01';
                Scaleform::MsgFormat::FinishFormatD(local_478);
                FUN_1433562f0(local_478);
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069a8,0xffffffffffffffff);
                bVar13 = true;
                lVar21 = local_4d8;
              }
              if (((*(ushort *)(lVar21 + 0x4c) & 0x100) == 0) ||
                 (lVar24 = FUN_1432c3580(lVar21 + 0x20), lVar24 == 0)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                local_4f8[0] = 1;
                local_4f0 = param_2;
                FUN_1433561d0(local_478,local_4f8);
                FUN_1433563e0(local_478,"<A HREF=\"{0}\">");
                FUN_143386f20(local_478,lVar21 + 0x20);
                Scaleform::MsgFormat::FinishFormatD(local_478);
                FUN_1433562f0(local_478);
              }
              if ((*(byte *)(lVar21 + 0x4a) & 1) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069ac,0xffffffffffffffff);
              }
              if ((*(byte *)(lVar21 + 0x4a) & 2) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069b0,0xffffffffffffffff);
              }
              if ((*(byte *)(lVar21 + 0x4a) & 4) != 0) {
                Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069b4,0xffffffffffffffff);
              }
              *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
              if (lVar18 != 0) {
                piVar1 = (int *)(lVar18 + 8);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_1433dd700(lVar18);
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar18);
                }
              }
              goto LAB_1433e5f35;
            }
            *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
            if (((*(ushort *)(local_4d8 + 0x4c) & 0x100) == 0) ||
               (lVar20 = FUN_1432c3580(local_4d8 + 0x20), lVar20 == 0)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (bVar10) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478,"<A HREF=\"{0}\">");
              FUN_143386f20(local_478,lVar21 + 0x20);
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            Scaleform::StringBuffer::AppendString(param_2,"<IMG SRC=\"",0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString
                      (param_2,(*(ulonglong *)(this_01 + 0x50) & 0xfffffffffffffffc) + 0xc);
            Scaleform::StringBuffer::AppendString(param_2,&DAT_145afa020);
            fVar2 = *(float *)(this_01 + 0x20);
            if (0.0 < fVar2) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478," WIDTH=\"{0}\"");
              cVar14 = FUN_143356fb0(local_478);
              if (cVar14 != '\0') {
                do {
                  if (local_88 < (short *)0x60) {
                    plVar27 = local_298[0];
                    if (local_298[0] == (longlong *)0x0) {
                      plVar27 = DAT_146b62f28;
                    }
                    lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                    lVar20 = local_90;
                  }
                  else {
                    lVar20 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                    uVar16 = (lVar20 - (longlong)local_298) - 8;
                    lVar21 = local_90;
                    local_88 = (short *)(0x200 - uVar16);
                    if (0x1ff < uVar16) {
                      local_88 = (short *)0x0;
                    }
                  }
                  local_90 = lVar20;
                  psVar19 = (short *)0x0;
                  if (lVar21 != 0) {
                    psVar19 = (short *)FUN_143354cd0(lVar21,local_478,(int)(fVar2 * 0.05));
                  }
                  FUN_143357040(local_478,psVar19);
                  cVar14 = FUN_143356fb0(local_478);
                  lVar21 = local_4d8;
                } while (cVar14 != '\0');
              }
              local_46f = local_46f + '\x01';
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            fVar2 = *(float *)(this_01 + 0x24);
            if (0.0 < fVar2) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478," HEIGHT=\"{0}\"");
              cVar14 = FUN_143356fb0(local_478);
              if (cVar14 != '\0') {
                do {
                  if (local_88 < (short *)0x60) {
                    plVar27 = local_298[0];
                    if (local_298[0] == (longlong *)0x0) {
                      plVar27 = DAT_146b62f28;
                    }
                    lVar20 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                    lVar24 = local_90;
                  }
                  else {
                    lVar24 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                    uVar16 = (lVar24 - (longlong)local_298) - 8;
                    lVar20 = local_90;
                    local_88 = (short *)(0x200 - uVar16);
                    if (0x1ff < uVar16) {
                      local_88 = (short *)0x0;
                    }
                  }
                  local_90 = lVar24;
                  psVar19 = (short *)0x0;
                  if (lVar20 != 0) {
                    psVar19 = (short *)FUN_143354cd0(lVar20,local_478,(int)(fVar2 * 0.05));
                  }
                  FUN_143357040(local_478,psVar19);
                  cVar14 = FUN_143356fb0(local_478);
                  this = local_4d0;
                } while (cVar14 != '\0');
              }
              local_46f = local_46f + '\x01';
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            iVar9 = *(int *)(this_01 + 0x60);
            if (iVar9 != 0) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478," VSPACE=\"{0}\"");
              cVar14 = FUN_143356fb0(local_478);
              if (cVar14 != '\0') {
                do {
                  if (local_88 < (short *)0x60) {
                    plVar27 = local_298[0];
                    if (local_298[0] == (longlong *)0x0) {
                      plVar27 = DAT_146b62f28;
                    }
                    lVar21 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                    lVar20 = local_90;
                  }
                  else {
                    lVar20 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                    uVar16 = (lVar20 - (longlong)local_298) - 8;
                    lVar21 = local_90;
                    local_88 = (short *)(0x200 - uVar16);
                    if (0x1ff < uVar16) {
                      local_88 = (short *)0x0;
                    }
                  }
                  local_90 = lVar20;
                  psVar19 = (short *)0x0;
                  if (lVar21 != 0) {
                    psVar19 = (short *)FUN_143354cd0(lVar21,local_478,iVar9 / 0x14);
                  }
                  FUN_143357040(local_478,psVar19);
                  cVar14 = FUN_143356fb0(local_478);
                  lVar21 = local_4d8;
                } while (cVar14 != '\0');
              }
              local_46f = local_46f + '\x01';
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            iVar9 = *(int *)(this_01 + 100);
            if (iVar9 != 0) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478," HSPACE=\"{0}\"");
              cVar14 = FUN_143356fb0(local_478);
              if (cVar14 != '\0') {
                do {
                  if (local_88 < (short *)0x60) {
                    plVar27 = local_298[0];
                    if (local_298[0] == (longlong *)0x0) {
                      plVar27 = DAT_146b62f28;
                    }
                    lVar20 = (**(code **)(*plVar27 + 0x48))(plVar27,0x60,8);
                    lVar24 = local_90;
                  }
                  else {
                    lVar24 = (local_90 + 0x5fU & 0xfffffffffffffff8) + 8;
                    uVar16 = (lVar24 - (longlong)local_298) - 8;
                    lVar20 = local_90;
                    local_88 = (short *)(0x200 - uVar16);
                    if (0x1ff < uVar16) {
                      local_88 = (short *)0x0;
                    }
                  }
                  local_90 = lVar24;
                  psVar19 = (short *)0x0;
                  if (lVar20 != 0) {
                    psVar19 = (short *)FUN_143354cd0(lVar20,local_478,iVar9 / 0x14);
                  }
                  FUN_143357040(local_478,psVar19);
                  cVar14 = FUN_143356fb0(local_478);
                  this = local_4d0;
                } while (cVar14 != '\0');
              }
              local_46f = local_46f + '\x01';
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            if ((*(ulonglong *)(*(ulonglong *)(this_01 + 0x58) & 0xfffffffffffffffc) &
                0x7fffffffffffffff) != 0) {
              local_4f8[0] = 1;
              local_4f0 = param_2;
              FUN_1433561d0(local_478,local_4f8);
              FUN_1433563e0(local_478," ID=\"{0}\"");
              FUN_143386f20(local_478,this_01 + 0x58);
              Scaleform::MsgFormat::FinishFormatD(local_478);
              FUN_1433562f0(local_478);
            }
            Scaleform::StringBuffer::AppendString(param_2," ALIGN=\"",0xffffffffffffffff);
            RVar3 = this_01[0x6c];
            if (RVar3 == (RefCountNTSImpl)0x0) {
              pcVar29 = "baseline";
LAB_1433e56db:
              Scaleform::StringBuffer::AppendString(param_2,pcVar29,0xffffffffffffffff);
            }
            else {
              if (RVar3 == (RefCountNTSImpl)0x1) {
                pcVar29 = "right";
                goto LAB_1433e56db;
              }
              if (RVar3 == (RefCountNTSImpl)0x2) {
                pcVar29 = "left";
                goto LAB_1433e56db;
              }
            }
            Scaleform::StringBuffer::AppendString(param_2,&DAT_145b06878,0xffffffffffffffff);
            if (((*(ushort *)(lVar21 + 0x4c) & 0x100) != 0) &&
               (lVar21 = FUN_1432c3580(lVar21 + 0x20), lVar21 != 0)) {
              Scaleform::StringBuffer::AppendString(param_2,&DAT_145b0690c,0xffffffffffffffff);
            }
            Scaleform::RefCountNTSImpl::Release(this_01);
            lVar21 = lVar18;
          }
          if (((longlong)local_490 < 0) || ((ulonglong)local_488[5] <= local_490)) {
            uVar16 = local_488[1];
          }
          else {
            uVar16 = *(ulonglong *)(local_488[4] + local_490 * 0x18);
            if ((uVar16 <= local_4b0) &&
               (uVar16 = local_4b0 + *(longlong *)(local_488[4] + 8 + local_490 * 0x18),
               (longlong)local_490 < local_488[5])) {
              local_490 = local_490 + 1;
            }
          }
          local_4b0 = uVar16;
          lVar18 = lVar21;
          plVar30 = local_488;
        } while (local_4b0 < (ulonglong)local_488[1]);
        if (bVar13) {
          Scaleform::StringBuffer::AppendString(param_2,"</FONT>",0xffffffffffffffff);
        }
      }
      Scaleform::StringBuffer::AppendString(param_2,&DAT_145b069d8,0xffffffffffffffff);
      puVar28 = &DAT_145b0683c;
      if ((*(ushort *)(local_480 + 0x22) & 0x8080) == 0x8080) {
        puVar28 = &DAT_145b06840;
      }
      Scaleform::StringBuffer::AppendString(param_2,puVar28,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(param_2,"></TEXTFORMAT>",0xffffffffffffffff);
      if (lVar21 != 0) {
        piVar1 = (int *)(lVar21 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar21);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar21);
        }
      }
      lVar20 = local_4e0;
      lVar21 = local_4c8;
      plVar27 = local_4b8;
      lVar18 = local_4a0;
      if (local_4e0 != 0) {
        piVar1 = (int *)(local_4e0 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(local_4e0);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar20);
          lVar21 = local_4c8;
          plVar27 = local_4b8;
          lVar18 = local_4a0;
        }
      }
    }
    if (lVar21 < plVar27[1]) {
      lVar21 = lVar21 + 1;
      local_4c8 = lVar21;
    }
  } while( true );
}



// FUNCTION 1433e6310 FUN_1433e6310 body=633 status=ok
// SIG undefined FUN_1433e6310(void)

void FUN_1433e6310(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong local_res20;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  longlong *local_140;
  longlong local_138;
  undefined1 local_130 [88];
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  uVar11 = param_5 - param_4;
  FUN_1433e8370(param_1,&local_140,param_4,&local_res20);
  (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  FUN_1433dd540(local_d8);
  local_160 = 1;
  local_168 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  param_5._0_4_ = 0;
  iVar3 = 0;
  iVar4 = (int)param_5;
  lVar9 = local_138;
  while ((((uVar11 != 0 && (local_140 != (longlong *)0x0)) && (-1 < lVar9)) &&
         (lVar9 < (int)local_140[1]))) {
    plVar1 = *(longlong **)(*local_140 + lVar9 * 8);
    uVar8 = plVar1[1];
    if (uVar8 != 0) {
      if ((*plVar1 == 0) || (psVar5 = (short *)(*plVar1 + (uVar8 - 1) * 2), uVar8 <= uVar8 - 1)) {
        psVar5 = (short *)0x0;
      }
      if (*psVar5 == 0) {
        uVar8 = uVar8 - 1;
      }
    }
    if (uVar11 < uVar8) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) break;
    iVar10 = iVar3 + 1;
    if (iVar3 == 0) {
      uVar6 = FUN_1433e2c50(plVar1,local_130,local_res20,uVar8 + local_res20);
      FUN_1433dd7b0(local_d8,uVar6);
      puVar7 = local_130;
    }
    else {
      uVar6 = FUN_1433e2c50(plVar1,local_88,local_res20,uVar8 + local_res20);
      uVar6 = FUN_1433de480(uVar6,local_130,local_d8);
      FUN_1433dd7b0(local_d8,uVar6);
      FUN_1433dd700(local_130);
      puVar7 = local_88;
    }
    FUN_1433dd700(puVar7);
    param_5._0_4_ = iVar4;
    if ((local_res20 == 0) && (lVar2 = plVar1[3], lVar2 != 0)) {
      param_5._0_4_ = iVar4 + 1;
      if (iVar4 == 0) {
        Scaleform::Render::Text::ParagraphFormat::operator=(&local_168,lVar2);
      }
      else {
        uVar6 = FUN_1433df2d0(lVar2,local_130,&local_168);
        Scaleform::Render::Text::ParagraphFormat::operator=(&local_168,uVar6);
        FUN_1433dedf0(local_130);
      }
    }
    uVar11 = uVar11 - uVar8;
    iVar3 = iVar10;
    iVar4 = (int)param_5;
    if (lVar9 < local_140[1]) {
      lVar9 = lVar9 + 1;
    }
  }
  if (param_2 != 0) {
    FUN_1433dd7b0(param_2,local_d8);
  }
  if (param_3 != 0) {
    Scaleform::Render::Text::ParagraphFormat::operator=(param_3,&local_168);
  }
  FUN_1433dedf0(&local_168);
  FUN_1433dd700(local_d8);
  return;
}



// FUNCTION 1433e6590 FUN_1433e6590 body=172 status=ok
// SIG undefined FUN_1433e6590(void)

undefined1 FUN_1433e6590(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 local_res10;
  longlong *local_18;
  longlong local_10;
  
  FUN_1433e8370(param_1,&local_18,param_4);
  lVar2 = 0;
  uVar3 = 0;
  if (((local_18 != (longlong *)0x0) && (-1 < local_10)) && (local_10 < (int)local_18[1])) {
    lVar2 = *(longlong *)(*local_18 + local_10 * 8);
    lVar1 = FUN_1433e1580(lVar2,local_res10);
    lVar2 = *(longlong *)(lVar2 + 0x18);
    uVar3 = 1;
    if (lVar1 != 0) goto LAB_1433e660a;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
LAB_1433e660a:
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar1;
  }
  if (param_3 != (longlong *)0x0) {
    *param_3 = lVar2;
  }
  return uVar3;
}



// FUNCTION 1433e6650 FUN_1433e6650 body=321 status=ok
// SIG undefined FUN_1433e6650(void)

void FUN_1433e6650(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_res10;
  longlong *local_38;
  longlong local_30;
  
  FUN_1433e8370(param_1,&local_38,param_3,&local_res10);
  param_4 = param_4 - param_3;
  lVar5 = local_res10;
  lVar8 = local_30;
  while (((local_38 != (longlong *)0x0 && (-1 < lVar8)) && (lVar8 < (int)local_38[1]))) {
    plVar1 = *(longlong **)(*local_38 + lVar8 * 8);
    uVar2 = plVar1[1];
    uVar6 = uVar2;
    if (uVar2 != 0) {
      if ((*plVar1 == 0) || (uVar2 <= uVar2 - 1)) {
        psVar4 = (short *)0x0;
      }
      else {
        psVar4 = (short *)(*plVar1 + (uVar2 - 1) * 2);
      }
      if (*psVar4 == 0) {
        uVar6 = uVar2 - 1;
      }
    }
    uVar7 = param_4 + lVar5;
    uVar3 = uVar6;
    if (((uVar6 < uVar7) || (uVar3 = uVar7, uVar7 == uVar6)) && (uVar7 = uVar3, uVar2 != 0)) {
      if ((*plVar1 == 0) || (uVar2 <= uVar2 - 1)) {
        psVar4 = (short *)0x0;
      }
      else {
        psVar4 = (short *)(*plVar1 + (uVar2 - 1) * 2);
      }
      if ((*psVar4 == 0) && (uVar7 = uVar7 + 1, param_4 != -1)) {
        param_4 = param_4 + 1;
      }
    }
    FUN_1433e2830(plVar1,*(undefined8 *)(param_1 + 0x10),param_2,lVar5,uVar7);
    param_4 = param_4 + (lVar5 - uVar7);
    lVar5 = 0;
    if (lVar8 < local_38[1]) {
      lVar8 = lVar8 + 1;
    }
  }
  if (((*(ushort *)(param_2 + 0x4c) & 0x100) != 0) &&
     (lVar5 = FUN_1432c3580(param_2 + 0x20), lVar5 != 0)) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
  }
  return;
}



// FUNCTION 1433e67a0 FUN_1433e67a0 body=210 status=ok
// SIG undefined FUN_1433e67a0(void)

void FUN_1433e67a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  short *psVar3;
  ulonglong uVar4;
  longlong local_res18 [2];
  longlong *local_38;
  longlong local_30;
  
  FUN_1433e8370(param_1,&local_38,param_3,local_res18);
  uVar4 = param_4 - param_3;
  while( true ) {
    if (((local_38 == (longlong *)0x0) || (local_30 < 0)) || ((int)local_38[1] <= local_30)) {
      return;
    }
    plVar1 = *(longlong **)(*local_38 + local_30 * 8);
    if (local_res18[0] == 0) {
      FUN_1433e3210(plVar1,*(undefined8 *)(param_1 + 0x10),param_2);
    }
    if (uVar4 == 0) break;
    uVar2 = plVar1[1];
    if (uVar2 != 0) {
      if ((*plVar1 == 0) || (uVar2 <= uVar2 - 1)) {
        psVar3 = (short *)0x0;
      }
      else {
        psVar3 = (short *)(*plVar1 + (uVar2 - 1) * 2);
      }
      if (*psVar3 == 0) {
        uVar2 = uVar2 - 1;
      }
    }
    if (uVar4 <= uVar2) {
      uVar2 = uVar4 + local_res18[0];
    }
    uVar4 = uVar4 + (local_res18[0] - uVar2);
    local_res18[0] = 0;
    if (local_30 < local_38[1]) {
      local_30 = local_30 + 1;
    }
  }
  return;
}



// FUNCTION 1433e6880 FUN_1433e6880 body=271 status=ok
// SIG undefined FUN_1433e6880(void)

void FUN_1433e6880(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_res10;
  longlong *local_28;
  longlong local_20;
  
  FUN_1433e8370(param_1,&local_28,param_2,&local_res10);
  param_3 = param_3 - param_2;
  while (((local_28 != (longlong *)0x0 && (-1 < local_20)) && (local_20 < (int)local_28[1]))) {
    plVar1 = *(longlong **)(*local_28 + local_20 * 8);
    uVar2 = plVar1[1];
    uVar5 = uVar2;
    if (uVar2 != 0) {
      if ((*plVar1 == 0) || (uVar2 <= uVar2 - 1)) {
        psVar4 = (short *)0x0;
      }
      else {
        psVar4 = (short *)(*plVar1 + (uVar2 - 1) * 2);
      }
      if (*psVar4 == 0) {
        uVar5 = uVar2 - 1;
      }
    }
    uVar6 = param_3 + local_res10;
    uVar3 = uVar5;
    if (((uVar5 < uVar6) || (uVar3 = uVar6, uVar6 == uVar5)) && (uVar6 = uVar3, uVar2 != 0)) {
      if ((*plVar1 == 0) || (uVar2 <= uVar2 - 1)) {
        psVar4 = (short *)0x0;
      }
      else {
        psVar4 = (short *)(*plVar1 + (uVar2 - 1) * 2);
      }
      if ((*psVar4 == 0) && (uVar6 = uVar6 + 1, param_3 != -1)) {
        param_3 = param_3 + 1;
      }
    }
    FUN_1433e2f00(plVar1,local_res10,uVar6);
    param_3 = param_3 + (local_res10 - uVar6);
    local_res10 = 0;
    if (local_20 < local_28[1]) {
      local_20 = local_20 + 1;
    }
  }
  return;
}



// FUNCTION 1433e69a0 FUN_1433e69a0 body=69 status=ok
// SIG undefined FUN_1433e69a0(void)

void FUN_1433e69a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1433e0c20(param_2);
  if (lVar1 != 0) {
    FUN_1433e69f0(param_1);
    return;
  }
  FUN_1433e8fe0(param_1 + 0x38,param_2);
  return;
}



// FUNCTION 1433e69f0 FUN_1433e69f0 body=180 status=ok
// SIG undefined FUN_1433e69f0(void)

void FUN_1433e69f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_58 [48];
  RefCountNTSImpl *local_28;
  ushort local_c;
  
  lVar1 = FUN_1433e0c20(param_2);
  if (lVar1 != 0) {
    FUN_1433dd660(local_58,param_2,0);
    if (local_28 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_28);
    }
    local_28 = (RefCountNTSImpl *)0x0;
    local_c = local_c | 0x200;
    uVar2 = FUN_1433e9900(param_1);
    uVar2 = FUN_1433df8e0(uVar2,local_58);
    FUN_1433e8f10(param_1 + 0x38,uVar2);
    FUN_1433dd700(local_58);
    return;
  }
  uVar2 = FUN_1433e9900(param_1);
  uVar2 = FUN_1433df8e0(uVar2,param_2);
  FUN_1433e8f10(param_1 + 0x38,uVar2);
  return;
}



// FUNCTION 1433e6ab0 SetRTPC body=9 status=ok
// SIG undefined SetRTPC(void)

void CAkParameterNodeBase::SetRTPC(longlong param_1)

{
  FUN_1433e8ea0(param_1 + 0x30);
  return;
}



// FUNCTION 1433e6ac0 FUN_1433e6ac0 body=100 status=ok
// SIG undefined FUN_1433e6ac0(void)

void FUN_1433e6ac0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1433e9900();
  uVar3 = FUN_1433dfaa0(uVar3,param_2);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return;
}



// FUNCTION 1433e6b40 AppendString body=32 status=ok
// SIG undefined AppendString(void)

void Scaleform::Render::Text::StyledText::AppendString(void)

{
  FUN_1433e6b70();
  return;
}



// FUNCTION 1433e6b70 FUN_1433e6b70 body=926 status=ok
// SIG undefined FUN_1433e6b70(void)

longlong FUN_1433e6b70(longlong *param_1,ulonglong param_2,longlong param_3,int param_4,
                      longlong param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_res10;
  longlong local_res18;
  int local_res20;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  
  if (param_3 == -1) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  uVar1 = param_2 + param_3;
  iVar3 = 0;
  lVar8 = param_1[4] + -1;
  local_res18 = 0;
  if ((lVar8 < 0) || ((int)param_1[4] <= lVar8)) {
    local_60 = (longlong *)0x0;
  }
  else {
    local_60 = *(longlong **)(param_1[3] + lVar8 * 8);
    if (local_60 != (longlong *)0x0) {
      local_68 = local_60[7];
      goto LAB_1433e6be5;
    }
  }
  local_68 = 0;
LAB_1433e6be5:
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_68,param_3,param_2);
  plVar6 = local_60;
  iVar7 = 0;
  do {
    if ((iVar7 == 0) && (plVar6 != (longlong *)0x0)) {
      FUN_1433e17b0(plVar6);
      local_58 = plVar6[1];
      if (local_58 != 0) {
        if ((*plVar6 == 0) || (local_58 <= local_58 - 1)) {
          psVar4 = (short *)0x0;
        }
        else {
          psVar4 = (short *)(*plVar6 + (local_58 - 1) * 2);
        }
        if (*psVar4 == 0) {
          local_58 = local_58 - 1;
        }
        if (local_58 != 0) goto LAB_1433e6c9b;
      }
      if (param_6 != 0) {
        FUN_1433e3210(plVar6,param_1[2],param_6);
      }
    }
    else {
      plVar6 = (longlong *)FUN_1433e85e0(param_1,param_6);
      local_58 = 0;
      plVar6[7] = local_68;
      local_60 = plVar6;
    }
LAB_1433e6c9b:
    iVar9 = -1;
    lVar8 = 0;
    local_res10 = param_2;
    iVar10 = iVar3;
    if (uVar1 <= param_2) {
LAB_1433e6e8a:
      iVar3 = 10;
      if ((*(byte *)(param_1 + 8) & 2) != 0) {
        iVar3 = 0xd;
      }
      if (iVar9 == iVar3) {
        plVar6 = (longlong *)FUN_1433e85e0(param_1,param_6);
      }
      FUN_1433e1640(plVar6,param_1[2],param_5);
      if (((*(ushort *)(param_5 + 0x4c) & 0x100) != 0) &&
         (lVar8 = FUN_1432c3580(param_5 + 0x20), lVar8 != 0)) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
      }
      return local_res18;
    }
    do {
      iVar3 = iVar9;
      if (iVar9 == 0) break;
      iVar3 = FUN_143307250(&local_res10);
      if (iVar3 == 0) {
        local_res10 = local_res10 - 1;
      }
      if ((((local_res20 == 0) && (iVar10 == 0xd)) && (lVar8 == 0)) && (iVar10 = -1, iVar3 == 10)) {
        param_2 = param_2 + 1;
      }
      else {
        if (iVar3 == 10) goto LAB_1433e6d1a;
        if (iVar3 == 0xd) break;
        lVar8 = lVar8 + 1;
        iVar9 = iVar3;
      }
      iVar3 = iVar9;
    } while (local_res10 < uVar1);
    if ((iVar3 == 10) || (iVar3 == 0xd)) {
LAB_1433e6d1a:
      lVar8 = lVar8 + 1;
    }
    if (lVar8 != 0) {
      uVar12 = plVar6[1];
      uVar2 = uVar12 + lVar8;
      if ((ulonglong)plVar6[2] < uVar2) {
        if (*plVar6 == 0) {
          lVar5 = (**(code **)(**(longlong **)(param_1[2] + 0x30) + 0x50))
                            (*(longlong **)(param_1[2] + 0x30),uVar2 * 2,0);
        }
        else {
          lVar5 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*plVar6,uVar2 * 2);
        }
        uVar12 = plVar6[1];
        *plVar6 = lVar5;
        plVar6[2] = uVar12 + lVar8;
      }
      if (local_58 < uVar12) {
        memmove((void *)(*plVar6 + (lVar8 + local_58) * 2),(void *)(*plVar6 + local_58 * 2),
                (uVar12 - local_58) * 2);
      }
      plVar6[1] = plVar6[1] + lVar8;
      puVar11 = (undefined2 *)(*plVar6 + local_58 * 2);
      FUN_1433e96d0(plVar6 + 4,local_58,lVar8);
      *(short *)((longlong)plVar6 + 0x44) = *(short *)((longlong)plVar6 + 0x44) + 1;
      iVar3 = -1;
      local_res10 = param_2;
      if (param_2 < uVar1) {
        while (bVar13 = iVar3 != 0, iVar3 = 0, plVar6 = local_60, bVar13) {
          iVar3 = FUN_143307250(&local_res10);
          if (iVar3 == 0) {
            local_res10 = local_res10 - 1;
          }
          if (((iVar3 == 0xd) || (iVar3 == 10)) && (iVar3 = 10, (*(byte *)(param_1 + 8) & 2) != 0))
          {
            iVar3 = 0xd;
          }
          *puVar11 = (short)iVar3;
          puVar11 = puVar11 + 1;
          iVar9 = 10;
          if ((*(byte *)(param_1 + 8) & 2) != 0) {
            iVar9 = 0xd;
          }
          if ((iVar3 == iVar9) || (uVar1 <= local_res10)) break;
        }
      }
      FUN_1433e2830(plVar6,param_1[2],param_5,local_58,0xffffffffffffffff);
      local_68 = local_68 + lVar8 + local_58;
      local_res18 = local_res18 + lVar8;
      param_2 = local_res10;
    }
    iVar9 = iVar3;
    if ((uVar1 <= param_2) || (iVar7 = iVar7 + 1, iVar3 == 0)) goto LAB_1433e6e8a;
  } while( true );
}



// FUNCTION 1433e6f20 AppendString body=32 status=ok
// SIG undefined AppendString(void)

void Scaleform::Render::Text::StyledText::AppendString(void)

{
  FUN_1433e6f50();
  return;
}



// FUNCTION 1433e6f50 FUN_1433e6f50 body=907 status=ok
// SIG undefined FUN_1433e6f50(void)

longlong FUN_1433e6f50(longlong *param_1,short *param_2,ulonglong param_3,int param_4,
                      longlong param_5,longlong param_6)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  longlong *plVar4;
  undefined2 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *_Dst;
  longlong local_res18;
  longlong local_58;
  
  sVar10 = 0;
  if (param_3 == 0xffffffffffffffff) {
    param_3 = Scaleform::SFwcslen(param_2);
  }
  psVar1 = param_2 + param_3;
  lVar12 = param_1[4] + -1;
  if ((lVar12 < 0) || ((int)param_1[4] <= lVar12)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1[3] + lVar12 * 8);
    if (plVar4 != (longlong *)0x0) {
      local_res18 = plVar4[7];
      goto LAB_1433e6fba;
    }
  }
  local_res18 = 0;
LAB_1433e6fba:
  (**(code **)(*param_1 + 0x10))(param_1,local_res18,param_3,param_2);
  local_58 = 0;
  iVar6 = 0;
  do {
    if ((iVar6 == 0) && (plVar4 != (longlong *)0x0)) {
      FUN_1433e17b0(plVar4);
      uVar9 = plVar4[1];
      if (uVar9 != 0) {
        if ((*plVar4 == 0) || (uVar9 <= uVar9 - 1)) {
          psVar3 = (short *)0x0;
        }
        else {
          psVar3 = (short *)(*plVar4 + (uVar9 - 1) * 2);
        }
        if (*psVar3 == 0) {
          uVar9 = uVar9 - 1;
        }
        if (uVar9 != 0) goto LAB_1433e706e;
      }
      if (param_6 != 0) {
        FUN_1433e3210(plVar4,param_1[2],param_6);
      }
    }
    else {
      plVar4 = (longlong *)FUN_1433e85e0(param_1,param_6);
      uVar9 = 0;
      plVar4[7] = local_res18;
    }
LAB_1433e706e:
    uVar8 = 0;
    if (((param_4 == 0) && (sVar10 == 0xd)) && (*param_2 == 10)) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
LAB_1433e7269:
        sVar2 = 10;
        if ((*(byte *)(param_1 + 8) & 2) != 0) {
          sVar2 = 0xd;
        }
        if (sVar10 == sVar2) {
          plVar4 = (longlong *)FUN_1433e85e0(param_1,param_6);
        }
        FUN_1433e1640(plVar4,param_1[2],param_5);
        if (((*(ushort *)(param_5 + 0x4c) & 0x100) != 0) &&
           (lVar12 = FUN_1432c3580(param_5 + 0x20), lVar12 != 0)) {
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
        }
        return local_58;
      }
    }
    if (param_3 != 0) {
      do {
        sVar10 = param_2[uVar8];
        if (sVar10 == 10) goto LAB_1433e70c5;
      } while (((sVar10 != 0xd) && (sVar10 != 0)) && (uVar8 = uVar8 + 1, uVar8 < param_3));
    }
    if ((sVar10 == 10) || (sVar10 == 0xd)) {
LAB_1433e70c5:
      uVar8 = uVar8 + 1;
    }
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      uVar11 = plVar4[1];
      uVar7 = uVar11 + uVar8;
      if ((ulonglong)plVar4[2] < uVar7) {
        if (*plVar4 == 0) {
          lVar12 = (**(code **)(**(longlong **)(param_1[2] + 0x30) + 0x50))
                             (*(longlong **)(param_1[2] + 0x30),uVar7 * 2,0);
        }
        else {
          lVar12 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*plVar4,uVar7 * 2);
        }
        uVar11 = plVar4[1];
        *plVar4 = lVar12;
        plVar4[2] = uVar11 + uVar8;
      }
      if (uVar9 < uVar11) {
        memmove((void *)(*plVar4 + (uVar8 + uVar9) * 2),(void *)(*plVar4 + uVar9 * 2),
                (uVar11 - uVar9) * 2);
      }
      plVar4[1] = plVar4[1] + uVar8;
      _Dst = (void *)(*plVar4 + uVar9 * 2);
      FUN_1433e96d0(plVar4 + 4,uVar9,uVar8);
      *(short *)((longlong)plVar4 + 0x44) = *(short *)((longlong)plVar4 + 0x44) + 1;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar8 * 2);
    param_2 = param_2 + uVar8;
    param_3 = param_3 - uVar8;
    if ((sVar10 == 10) || (sVar10 == 0xd)) {
      sVar2 = 10;
      if ((*(byte *)(param_1 + 8) & 2) != 0) {
        sVar2 = 0xd;
      }
      if (sVar10 != sVar2) {
        uVar7 = plVar4[1];
        if (uVar7 != 0) {
          if ((*plVar4 == 0) || (uVar7 <= uVar7 - 1)) {
            psVar3 = (short *)0x0;
          }
          else {
            psVar3 = (short *)(*plVar4 + (uVar7 - 1) * 2);
          }
          if (*psVar3 == 0) {
            uVar7 = uVar7 - 1;
          }
          if (uVar7 != 0) {
            uVar5 = 10;
            if ((*(byte *)(param_1 + 8) & 2) != 0) {
              uVar5 = 0xd;
            }
            *(undefined2 *)(*plVar4 + -2 + uVar7 * 2) = uVar5;
          }
        }
        sVar10 = 10;
        if ((*(byte *)(param_1 + 8) & 2) != 0) {
          sVar10 = 0xd;
        }
      }
    }
    FUN_1433e2830(plVar4,param_1[2],param_5,uVar9,0xffffffffffffffff);
    local_res18 = local_res18 + uVar8 + uVar9;
    local_58 = local_58 + uVar8;
    if ((psVar1 <= param_2) || (iVar6 = iVar6 + 1, sVar10 == 0)) goto LAB_1433e7269;
  } while( true );
}



// FUNCTION 1433e72f0 InsertString body=40 status=ok
// SIG undefined InsertString(void)

void Scaleform::Render::Text::StyledText::InsertString(void)

{
  FUN_1433e7320();
  return;
}



// FUNCTION 1433e7320 FUN_1433e7320 body=1731 status=ok
// SIG undefined FUN_1433e7320(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1433e7320(longlong *param_1,short *param_2,ulonglong param_3,short *param_4,int param_5
                      ,longlong param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar6;
  longlong *plVar7;
  short sVar8;
  longlong lVar9;
  short sVar10;
  short *psVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  longlong local_res20;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong lStack_70;
  longlong *local_68;
  longlong lStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  
  if (param_4 == (short *)0x0) {
    return 0;
  }
  uVar5 = Scaleform::Render::Text::StyledText::GetLength();
  if (uVar5 < param_3) {
    param_3 = Scaleform::Render::Text::StyledText::GetLength(param_1);
  }
  psVar11 = (short *)0x0;
  if (param_4 == (short *)&DAT_ffffffffffffffff) {
    sVar10 = *param_2;
    param_4 = psVar11;
    while (sVar10 != 0) {
      param_4 = (short *)((longlong)param_4 + 1);
      sVar10 = param_2[(longlong)param_4];
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4,param_2);
  local_res20 = 0;
  if ((short *)param_1[4] == (short *)0x0) {
    local_68 = (longlong *)0x0;
    lStack_60 = -1;
  }
  else {
    local_68 = param_1 + 3;
    if (0 < param_1[4]) {
      lVar14 = param_1[4];
      do {
        lVar9 = lVar14 >> 1;
        lVar16 = *(longlong *)(*local_68 + (lVar9 + (longlong)psVar11) * 8);
        uVar5 = *(ulonglong *)(lVar16 + 0x38);
        if (((param_3 < uVar5) || (*(longlong *)(lVar16 + 8) + uVar5 <= param_3)) &&
           ((int)uVar5 - (int)param_3 < 0)) {
          psVar11 = (short *)((undefined1 *)(lVar9 + (longlong)psVar11) + 1);
          lVar9 = lVar14 + (-1 - lVar9);
        }
        lVar14 = lVar9;
      } while (0 < lVar9);
    }
    if (psVar11 == (short *)param_1[4]) {
      psVar11 = (short *)((longlong)psVar11 + -1);
    }
    lStack_60 = (longlong)(int)psVar11;
    local_88 = *(longlong *)(*(longlong *)(*local_68 + lStack_60 * 8) + 0x38);
    local_res20 = param_3 - local_88;
    if ((-1 < (int)psVar11) && (lStack_60 < (int)param_1[4])) goto LAB_1433e7495;
  }
  local_88 = 0;
LAB_1433e7495:
  sVar10 = 0;
  local_80 = 0;
  lVar14 = lStack_60;
  plVar7 = local_68;
  lVar16 = lStack_60;
  do {
    psVar11 = (short *)0x0;
    if (param_5 == 2) {
      if (param_4 == (short *)0x0) break;
      do {
        if ((*param_2 != 0xd) && (*param_2 != 10)) break;
        param_2 = param_2 + 1;
        param_4 = (short *)((longlong)param_4 + -1);
      } while (param_4 != (short *)0x0);
      if (param_4 == (short *)0x0) break;
    }
    if (((local_68 == (longlong *)0x0) || (lVar14 < 0)) || ((int)local_68[1] <= lVar14)) {
      FUN_1433e85e0(param_1,param_7);
      plVar7 = param_1 + 3;
      uStack_50 = 0;
      lVar16 = 0;
      lStack_60 = 0;
      lVar14 = 0;
      local_res20 = 0;
      local_68 = plVar7;
      local_58 = plVar7;
    }
    plVar13 = local_68;
    plVar2 = *(longlong **)(*local_68 + lVar14 * 8);
    uVar5 = plVar2[1];
    if (uVar5 == 0) {
LAB_1433e7583:
      FUN_1433e3210(plVar2,param_1[2],param_7);
    }
    else {
      if ((*plVar2 == 0) || (psVar6 = (short *)(*plVar2 + (uVar5 - 1) * 2), uVar5 <= uVar5 - 1)) {
        psVar6 = psVar11;
      }
      if (*psVar6 == 0) {
        uVar5 = uVar5 - 1;
      }
      if (uVar5 == 0) goto LAB_1433e7583;
    }
    if (((param_5 == 0) && (sVar10 == 0xd)) && (*param_2 == 10)) {
      param_2 = param_2 + 1;
      param_4 = (short *)((longlong)param_4 + -1);
      if (param_4 == (short *)0x0) break;
    }
    psVar6 = (short *)&DAT_ffffffffffffffff;
    if (param_4 != (short *)0x0) {
      do {
        psVar6 = psVar11;
        sVar10 = param_2[(longlong)psVar6];
        if ((sVar10 == 10) || (sVar10 == 0xd)) {
          psVar11 = psVar6;
          if (param_5 == 2) {
            sVar10 = 1;
            goto LAB_1433e7727;
          }
          break;
        }
        if (sVar10 == 0) goto LAB_1433e7727;
        psVar11 = (short *)((longlong)psVar6 + 1);
        psVar6 = (short *)&DAT_ffffffffffffffff;
      } while (psVar11 < param_4);
    }
    if ((sVar10 == 10) || (sVar10 == 0xd)) {
      psVar11 = (short *)((longlong)psVar11 + 1);
    }
    bVar15 = psVar6 == (short *)&DAT_ffffffffffffffff;
    psVar6 = psVar11;
    if (bVar15) {
LAB_1433e7727:
      FUN_1433e23b0(plVar2,param_1[2],param_2,local_res20,psVar6,param_6);
      psVar11 = psVar6;
    }
    else {
      lStack_70 = lVar16;
      if (lVar14 < plVar13[1]) {
        lStack_70 = lVar14 + 1;
      }
      local_78 = plVar7;
      local_78 = (longlong *)FUN_1433e8760(param_1,&local_78,param_7);
      lVar9 = plVar2[3];
      if (lVar9 != 0) {
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      }
      lVar3 = local_78[3];
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dedf0(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      local_78[3] = lVar9;
      *(short *)((longlong)local_78 + 0x44) = *(short *)((longlong)local_78 + 0x44) + 1;
      FUN_1433e32d0(local_78,param_1[2],plVar2,local_res20,0,plVar2[1] - local_res20);
      lVar9 = plVar2[1];
      FUN_1433e23b0(plVar2,param_1[2],param_2,local_res20,psVar11,param_6);
      uVar5 = lVar9 - local_res20;
      plVar13 = local_68;
      if (uVar5 != 0) {
        uVar4 = plVar2[1];
        uVar12 = uVar4;
        if (uVar5 < uVar4) {
          uVar12 = uVar5;
        }
        uVar5 = uVar4 - uVar12;
        if (uVar4 == 0xffffffffffffffff) {
          uVar12 = 0xffffffffffffffff;
        }
        else if (uVar12 == 0) goto LAB_1433e7826;
        if (uVar5 < uVar4) {
          if (uVar12 + uVar5 < uVar4) {
            memmove((void *)(*plVar2 + uVar5 * 2),(void *)(*plVar2 + (uVar12 + uVar5) * 2),
                    ((uVar4 - uVar12) - uVar5) * 2);
            plVar2[1] = plVar2[1] - uVar12;
          }
          else {
            plVar2[1] = uVar5;
          }
        }
        FUN_1433e9db0(plVar2 + 4,uVar5,uVar12);
        uVar5 = plVar2[1];
        if (uVar5 != 0) {
          lVar9 = *plVar2;
          if ((lVar9 == 0) || (uVar5 <= uVar5 - 1)) {
            psVar6 = (short *)0x0;
          }
          else {
            psVar6 = (short *)(lVar9 + (uVar5 - 1) * 2);
          }
          if (*psVar6 == 0) {
            if (uVar5 != 0) {
              if ((lVar9 == 0) || (uVar5 <= uVar5 - 1)) {
                psVar6 = (short *)0x0;
              }
              else {
                psVar6 = (short *)(lVar9 + (uVar5 - 1) * 2);
              }
              if (*psVar6 == 0) {
                uVar5 = uVar5 - 1;
              }
            }
            FUN_1433e96d0(plVar2 + 4,uVar5,1);
            FUN_1433e9db0(plVar2 + 4,uVar5 + 1,1);
          }
        }
        *(short *)((longlong)plVar2 + 0x44) = *(short *)((longlong)plVar2 + 0x44) + 1;
        plVar13 = local_68;
      }
    }
LAB_1433e7826:
    if ((sVar10 == 0xd) || (sVar10 == 10)) {
      sVar8 = 10;
      if ((*(byte *)(param_1 + 8) & 2) != 0) {
        sVar8 = 0xd;
      }
      if (sVar10 != sVar8) {
        *(short *)(*plVar2 + -2 + (longlong)((longlong)psVar11 + local_res20) * 2) = sVar8;
      }
    }
    local_80 = local_80 + (longlong)psVar11;
    param_2 = param_2 + (longlong)psVar11;
    param_4 = (short *)((longlong)param_4 - (longlong)psVar11);
    plVar2[7] = local_88;
    if (param_5 == 2) {
      local_res20 = local_res20 + (longlong)psVar11;
    }
    else {
      local_88 = local_88 + plVar2[1];
      local_res20 = 0;
      if (lVar14 < plVar13[1]) {
        lVar14 = lVar14 + 1;
        plVar7 = local_68;
        lVar16 = lVar14;
        lStack_60 = lVar14;
      }
    }
    if ((param_4 == (short *)0x0) || (sVar10 == 0)) break;
  } while( true );
  psVar11 = (short *)0x0;
  while (((local_68 != (longlong *)0x0 && (-1 < lVar14)) && (lVar14 < (int)local_68[1]))) {
    lVar16 = *(longlong *)(*local_68 + lVar14 * 8);
    *(longlong *)(lVar16 + 0x38) = local_88;
    local_88 = local_88 + *(longlong *)(lVar16 + 8);
    if (lVar14 < local_68[1]) {
      lVar14 = lVar14 + 1;
    }
  }
  lVar14 = param_1[4] + -1;
  if ((((-1 < lVar14) && (lVar14 < (int)param_1[4])) &&
      (plVar7 = *(longlong **)(param_1[3] + lVar14 * 8), plVar7 != (longlong *)0x0)) ||
     (plVar7 = (longlong *)FUN_1433e85e0(param_1,0), plVar7 != (longlong *)0x0)) {
    uVar5 = plVar7[1];
    if (uVar5 != 0) {
      if ((*plVar7 != 0) && (uVar5 - 1 < uVar5)) {
        psVar11 = (short *)(*plVar7 + (uVar5 - 1) * 2);
      }
      if ((*psVar11 == 10) || (*psVar11 == 0xd)) goto LAB_1433e79ab;
    }
    FUN_1433e1640(plVar7,param_1[2],param_1[7]);
  }
LAB_1433e79ab:
  if (((*(ushort *)(param_6 + 0x4c) & 0x100) != 0) &&
     (lVar14 = FUN_1432c3580(param_6 + 0x20), lVar14 != 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  }
  return local_80;
}



// FUNCTION 1433e79f0 FUN_1433e79f0 body=1412 status=ok
// SIG undefined FUN_1433e79f0(void)

ulonglong FUN_1433e79f0(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong *plVar8;
  short *psVar9;
  longlong lVar10;
  short *psVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  
  uVar3 = Scaleform::Render::Text::StyledText::GetLength(param_2);
  if ((param_4 == 0xffffffffffffffff) || (uVar3 < param_4)) {
    param_4 = uVar3;
  }
  if ((param_4 == 0) || (*(longlong *)(param_2 + 0x20) == 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1,param_3,param_4,&DAT_145af3922);
  psVar7 = (short *)0x0;
  lVar10 = uStack_40;
  if ((short *)param_1[4] == (short *)0x0) {
LAB_1433e7b0b:
    uStack_40 = lVar10;
    FUN_1433e85e0(param_1,0);
    iVar15 = 0;
    uStack_40._4_4_ = 0;
    uStack_40 = 0;
    psVar16 = psVar7;
    iVar17 = uStack_40._4_4_;
  }
  else {
    psVar16 = psVar7;
    if (0 < param_1[4]) {
      lVar10 = param_1[4];
      do {
        lVar14 = lVar10 >> 1;
        lVar12 = *(longlong *)(param_1[3] + (lVar14 + (longlong)psVar16) * 8);
        uVar3 = *(ulonglong *)(lVar12 + 0x38);
        if (((param_3 < uVar3) || (*(longlong *)(lVar12 + 8) + uVar3 <= param_3)) &&
           ((int)uVar3 - (int)param_3 < 0)) {
          psVar16 = (short *)(lVar14 + (longlong)psVar16 + 1);
          lVar14 = lVar10 + (-1 - lVar14);
        }
        lVar10 = lVar14;
      } while (0 < lVar14);
    }
    local_48 = param_1 + 3;
    if (psVar16 == (short *)param_1[4]) {
      psVar16 = (short *)((longlong)psVar16 + -1);
    }
    iVar15 = (int)psVar16;
    uStack_40._4_4_ = iVar15 >> 0x1f;
    lVar10 = (longlong)iVar15;
    if ((iVar15 < 0) ||
       (psVar16 = (short *)(param_3 -
                           *(longlong *)(*(longlong *)(*local_48 + (longlong)iVar15 * 8) + 0x38)),
       iVar17 = uStack_40._4_4_, uStack_40 = lVar10, (longlong)(int)param_1[4] <= (longlong)iVar15))
    goto LAB_1433e7b0b;
  }
  lVar10 = uStack_40;
  plVar8 = param_1 + 3;
  psVar11 = psVar7;
  if (((plVar8 != (longlong *)0x0) && (-1 < uStack_40)) && (uStack_40 < (int)param_1[4])) {
    psVar11 = *(short **)(*(longlong *)(*plVar8 + uStack_40 * 8) + 0x38);
  }
  local_48 = plVar8;
  if (*(longlong *)(param_2 + 0x20) == 1) {
    lVar12 = *(longlong *)(*plVar8 + uStack_40 * 8);
    plVar1 = (longlong *)**(longlong **)(param_2 + 0x18);
    uVar3 = plVar1[1];
    if (uVar3 != 0) {
      if ((*plVar1 == 0) || (psVar9 = (short *)(*plVar1 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
        psVar9 = psVar7;
      }
      if (*psVar9 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    FUN_1433e32d0(lVar12,param_1[2],plVar1,0,psVar16,uVar3);
    if (psVar16 == (short *)0x0) {
      FUN_1433e3210(lVar12,param_1[2],plVar1[3]);
    }
    lVar12 = (longlong)psVar11 + *(longlong *)(lVar12 + 8);
  }
  else {
    plVar1 = *(longlong **)(*plVar8 + uStack_40 * 8);
    uStack_50 = CONCAT44(iVar17,iVar15);
    if (uStack_40 < param_1[4]) {
      uStack_50 = uStack_40 + 1;
    }
    local_58 = plVar8;
    plVar4 = (longlong *)FUN_1433e8760(param_1,&local_58,plVar1[3]);
    FUN_1433e32d0(plVar4,param_1[2],plVar1,psVar16,0,plVar1[1] - (longlong)psVar16);
    local_58 = (longlong *)(plVar1[1] - (longlong)psVar16);
    plVar2 = (longlong *)**(longlong **)(param_2 + 0x18);
    uVar3 = plVar2[1];
    if (uVar3 != 0) {
      if ((*plVar2 == 0) || (psVar9 = (short *)(*plVar2 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
        psVar9 = psVar7;
      }
      if (*psVar9 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    FUN_1433e32d0(plVar1,param_1[2],plVar2,0,psVar16,uVar3);
    uVar3 = plVar2[1];
    if (uVar3 != 0) {
      if ((*plVar2 != 0) && (uVar3 - 1 < uVar3)) {
        psVar7 = (short *)(*plVar2 + (uVar3 - 1) * 2);
      }
      if (*psVar7 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    uVar3 = param_4 - uVar3;
    if (psVar16 == (short *)0x0) {
      FUN_1433e3210(plVar1,param_1[2],plVar2[3]);
    }
    if (local_58 != (longlong *)0x0) {
      plVar2 = (longlong *)plVar1[1];
      plVar5 = plVar2;
      if (local_58 < plVar2) {
        plVar5 = local_58;
      }
      FUN_1433e26a0(plVar1,(longlong)plVar2 - (longlong)plVar5);
    }
    uVar6 = plVar1[1];
    if (uVar6 != 0) {
      if ((*plVar1 == 0) || (uVar6 <= uVar6 - 1)) {
        psVar7 = (short *)0x0;
      }
      else {
        psVar7 = (short *)(*plVar1 + (uVar6 - 1) * 2);
      }
      if (*psVar7 == 0) {
        uVar6 = uVar6 - 1;
      }
    }
    lVar12 = (longlong)psVar11 + uVar6;
    if (lVar10 < param_1[4]) {
      lVar10 = lVar10 + 1;
      uStack_40 = lVar10;
    }
    lVar14 = 0;
    if (0 < *(longlong *)(param_2 + 0x20)) {
      lVar14 = 1;
    }
    while( true ) {
      if (((lVar14 < 0) || (*(int *)(param_2 + 0x20) <= lVar14)) || (uVar3 == 0))
      goto LAB_1433e7e56;
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x18) + lVar14 * 8);
      uVar6 = plVar1[1];
      uVar13 = uVar6;
      if (uVar6 != 0) {
        if ((*plVar1 == 0) || (uVar6 <= uVar6 - 1)) {
          psVar7 = (short *)0x0;
        }
        else {
          psVar7 = (short *)(*plVar1 + (uVar6 - 1) * 2);
        }
        if (*psVar7 == 0) {
          uVar13 = uVar6 - 1;
        }
      }
      if (uVar3 < uVar13) break;
      if (uVar13 == uVar3) {
        if (uVar6 != 0) {
          if ((*plVar1 == 0) || (uVar6 <= uVar6 - 1)) {
            psVar7 = (short *)0x0;
          }
          else {
            psVar7 = (short *)(*plVar1 + (uVar6 - 1) * 2);
          }
          if ((*psVar7 == 0xd) || (*psVar7 == 10)) goto LAB_1433e7dda;
        }
        break;
      }
LAB_1433e7dda:
      FUN_1433e8a10(param_1,&local_48,plVar1);
      uVar3 = uVar3 - uVar13;
      lVar12 = lVar12 + uVar13;
      if (lVar14 < *(longlong *)(param_2 + 0x20)) {
        lVar14 = lVar14 + 1;
      }
      if (lVar10 < param_1[4]) {
        lVar10 = lVar10 + 1;
        uStack_40 = lVar10;
      }
    }
    FUN_1433e32d0(plVar4,param_1[2],plVar1,0,0,uVar13);
    FUN_1433e3210(plVar4,param_1[2],plVar1[3]);
LAB_1433e7e56:
    uVar3 = plVar4[1];
    plVar4[7] = lVar12;
    if (uVar3 != 0) {
      if ((*plVar4 == 0) || (psVar7 = (short *)(*plVar4 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
        psVar7 = (short *)0x0;
      }
      if (*psVar7 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    lVar12 = lVar12 + uVar3;
  }
  psVar7 = (short *)0x0;
  if (lVar10 < param_1[4]) {
    lVar10 = lVar10 + 1;
  }
  while (((-1 < lVar10 && (lVar10 < (int)param_1[4])) &&
         (lVar14 = *(longlong *)(*plVar8 + lVar10 * 8), *(longlong *)(lVar14 + 0x38) != lVar12))) {
    *(longlong *)(lVar14 + 0x38) = lVar12;
    lVar12 = lVar12 + *(longlong *)(lVar14 + 8);
    if (lVar10 < param_1[4]) {
      lVar10 = lVar10 + 1;
    }
  }
  lVar10 = param_1[4] + -1;
  if ((((-1 < lVar10) && (lVar10 < (int)param_1[4])) &&
      (plVar8 = *(longlong **)(param_1[3] + lVar10 * 8), plVar8 != (longlong *)0x0)) ||
     (plVar8 = (longlong *)FUN_1433e85e0(param_1,0), plVar8 != (longlong *)0x0)) {
    uVar3 = plVar8[1];
    if (uVar3 != 0) {
      if ((*plVar8 != 0) && (uVar3 - 1 < uVar3)) {
        psVar7 = (short *)(*plVar8 + (uVar3 - 1) * 2);
      }
      if ((*psVar7 == 10) || (*psVar7 == 0xd)) goto LAB_1433e7f3e;
    }
    FUN_1433e1640(plVar8,param_1[2],param_1[7]);
  }
LAB_1433e7f3e:
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  }
  return param_4;
}



// FUNCTION 1433e7f80 FUN_1433e7f80 body=993 status=ok
// SIG undefined FUN_1433e7f80(void)

void FUN_1433e7f80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  short *psVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong local_res20;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  
  if (param_3 == 0xffffffffffffffff) {
    param_3 = Scaleform::Render::Text::StyledText::GetLength();
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  FUN_1433e8370(param_1,&local_50,param_2,&local_58);
  psVar9 = (short *)0x0;
  local_res20 = 0;
  bVar11 = false;
  uVar10 = param_3;
  lVar8 = local_48;
  if (((local_50 != (longlong *)0x0) && (-1 < local_48)) && (local_48 < (int)local_50[1])) {
    lVar2 = *(longlong *)(*local_50 + local_48 * 8);
    uVar3 = *(ulonglong *)(lVar2 + 8);
    uVar7 = uVar3 - local_58;
    if (param_3 < uVar3 - local_58) {
      uVar7 = param_3;
    }
    if (uVar7 <= uVar3) {
      bVar11 = uVar3 <= uVar7 + local_58;
      FUN_1433e26a0();
      uVar10 = param_3 - uVar7;
      local_res20 = lVar2;
      if (local_48 < local_50[1]) {
        lVar8 = local_48 + 1;
      }
    }
  }
  do {
    if (local_50 == (longlong *)0x0) goto LAB_1433e82c9;
    if ((lVar8 < 0) || ((int)local_50[1] <= lVar8)) break;
    puVar4 = *(undefined8 **)(*local_50 + lVar8 * 8);
    uVar3 = puVar4[1];
    if (uVar10 < uVar3) {
      if ((local_res20 != 0) && (bVar11)) {
        FUN_1433e32d0(local_res20,param_1[2],puVar4,uVar10,*(undefined8 *)(local_res20 + 8),
                      uVar3 - uVar10);
        (**(code **)(*param_1 + 0x28))(param_1,puVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar4);
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
        if (lVar8 < (int)local_50[1]) {
          FUN_1433e9d40(local_50,lVar8);
        }
        bVar11 = false;
      }
      break;
    }
    (**(code **)(*param_1 + 0x28))(param_1,puVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar4);
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    if (lVar8 < (int)local_50[1]) {
      if (local_50[1] == 1) {
        FUN_1433ea220(local_50,local_50,0);
      }
      else {
        lVar2 = *(longlong *)(*local_50 + lVar8 * 8);
        if (lVar2 != 0) {
          FUN_1433e8d60(lVar2 + 0x20);
          lVar5 = *(longlong *)(lVar2 + 0x18);
          if (lVar5 != 0) {
            piVar1 = (int *)(lVar5 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dedf0(lVar5);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
            }
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
        }
        _Dst = (void *)(*local_50 + lVar8 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(local_50[1] - lVar8) * 8 - 8);
        local_50[1] = local_50[1] + -1;
      }
    }
    uVar10 = uVar10 - uVar3;
  } while (uVar10 != 0);
  if (((local_50 != (longlong *)0x0) && (-1 < lVar8)) && (lVar8 < (int)local_50[1])) {
    puVar4 = *(undefined8 **)(*local_50 + lVar8 * 8);
    if (puVar4[1] != 0) {
      if ((local_res20 == 0) || (!bVar11)) goto LAB_1433e8210;
      FUN_1433e32d0(local_res20,param_1[2],puVar4,0,*(undefined8 *)(local_res20 + 8),puVar4[1]);
    }
    (**(code **)(*param_1 + 0x28))(param_1,puVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar4);
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    if (lVar8 < (int)local_50[1]) {
      FUN_1433e9d40(local_50,lVar8);
    }
  }
LAB_1433e8210:
  while (((local_50 != (longlong *)0x0 && (-1 < lVar8)) && (lVar8 < (int)local_50[1]))) {
    plVar6 = (longlong *)(*(longlong *)(*local_50 + lVar8 * 8) + 0x38);
    *plVar6 = *plVar6 - param_3;
    if (lVar8 < local_50[1]) {
      lVar8 = lVar8 + 1;
    }
  }
LAB_1433e82c9:
  lVar8 = param_1[4] + -1;
  if ((((-1 < lVar8) && (lVar8 < (int)param_1[4])) &&
      (plVar6 = *(longlong **)(param_1[3] + lVar8 * 8), plVar6 != (longlong *)0x0)) ||
     (plVar6 = (longlong *)FUN_1433e85e0(param_1,0), plVar6 != (longlong *)0x0)) {
    uVar10 = plVar6[1];
    if (uVar10 != 0) {
      if ((*plVar6 != 0) && (uVar10 - 1 < uVar10)) {
        psVar9 = (short *)(*plVar6 + (uVar10 - 1) * 2);
      }
      if (*psVar9 == 10) {
        return;
      }
      if (*psVar9 == 0xd) {
        return;
      }
    }
    FUN_1433e1640(plVar6,param_1[2],param_1[7]);
  }
  return;
}



// FUNCTION 1433e8370 FUN_1433e8370 body=264 status=ok
// SIG undefined FUN_1433e8370(void)

longlong * FUN_1433e8370(longlong param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar5 = 0;
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    do {
      lVar4 = lVar6 >> 1;
      lVar2 = *(longlong *)(*plVar1 + (lVar4 + uVar5) * 8);
      uVar3 = *(ulonglong *)(lVar2 + 0x38);
      if (((param_3 < uVar3) || (*(longlong *)(lVar2 + 8) + uVar3 <= param_3)) &&
         ((int)uVar3 - (int)param_3 < 0)) {
        uVar5 = lVar4 + uVar5 + 1;
        lVar4 = lVar6 + (-1 - lVar4);
      }
      lVar6 = lVar4;
    } while (0 < lVar4);
  }
  if (uVar5 < *(ulonglong *)(param_1 + 0x20)) {
    lVar6 = *(longlong *)(*plVar1 + uVar5 * 8);
    uVar3 = *(ulonglong *)(lVar6 + 0x38);
    if (((uVar3 <= param_3) && (param_3 < *(longlong *)(lVar6 + 8) + uVar3)) ||
       ((int)uVar3 == (int)param_3)) {
      if (param_4 != (longlong *)0x0) {
        *param_4 = param_3 - *(longlong *)(*(longlong *)(*plVar1 + (longlong)(int)uVar5 * 8) + 0x38)
        ;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)(int)uVar5;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = -1;
  return param_2;
}



// FUNCTION 1433e8480 FUN_1433e8480 body=96 status=ok
// SIG undefined FUN_1433e8480(void)

void FUN_1433e8480(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_3);
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  if (((*param_2 != 0) && (-1 < param_2[1])) && (param_2[1] < (longlong)*(int *)(*param_2 + 8))) {
    FUN_1433e9d40();
  }
  return;
}



// FUNCTION 1433e84f0 FUN_1433e84f0 body=229 status=ok
// SIG undefined FUN_1433e84f0(void)

longlong * FUN_1433e84f0(longlong param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *param_2 = 0;
    param_2[1] = -1;
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (0 < *(longlong *)(param_1 + 0x20)) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    do {
      lVar4 = lVar5 >> 1;
      lVar2 = *(longlong *)(*plVar1 + (lVar4 + lVar6) * 8);
      uVar3 = *(ulonglong *)(lVar2 + 0x38);
      if (((param_3 < uVar3) || (*(longlong *)(lVar2 + 8) + uVar3 <= param_3)) &&
         ((int)uVar3 - (int)param_3 < 0)) {
        lVar6 = lVar4 + lVar6 + 1;
        lVar4 = lVar5 + (-1 - lVar4);
      }
      lVar5 = lVar4;
    } while (0 < lVar4);
  }
  if (lVar6 == *(longlong *)(param_1 + 0x20)) {
    lVar6 = lVar6 + -1;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = param_3 - *(longlong *)(*(longlong *)(*plVar1 + (longlong)(int)lVar6 * 8) + 0x38);
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)(int)lVar6;
  return param_2;
}



// FUNCTION 1433e85e0 FUN_1433e85e0 body=378 status=ok
// SIG undefined FUN_1433e85e0(void)

longlong FUN_1433e85e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  
  psVar9 = (short *)0x0;
  psVar8 = psVar9;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + *(longlong *)(param_1 + 0x20) * 8);
    uVar5 = plVar4[1];
    if (uVar5 != 0) {
      if ((*plVar4 == 0) || (psVar8 = (short *)(*plVar4 + (uVar5 - 1) * 2), uVar5 <= uVar5 - 1)) {
        psVar8 = psVar9;
      }
      if (*psVar8 == 0) {
        uVar5 = uVar5 - 1;
      }
    }
    psVar8 = (short *)(uVar5 + plVar4[7]);
  }
  lVar6 = FUN_1433e9900(param_1);
  psVar7 = (short *)(**(code **)(**(longlong **)(lVar6 + 0x30) + 0x50))
                              (*(longlong **)(lVar6 + 0x30),0x48);
  psVar10 = psVar9;
  if (psVar7 != (short *)0x0) {
    psVar7[0] = 0;
    psVar7[1] = 0;
    psVar7[2] = 0;
    psVar7[3] = 0;
    psVar7[4] = 0;
    psVar7[5] = 0;
    psVar7[6] = 0;
    psVar7[7] = 0;
    psVar7[8] = 0;
    psVar7[9] = 0;
    psVar7[10] = 0;
    psVar7[0xb] = 0;
    psVar7[0xc] = 0;
    psVar7[0xd] = 0;
    psVar7[0xe] = 0;
    psVar7[0xf] = 0;
    psVar7[0x10] = 0;
    psVar7[0x11] = 0;
    psVar7[0x12] = 0;
    psVar7[0x13] = 0;
    psVar7[0x14] = 0;
    psVar7[0x15] = 0;
    psVar7[0x16] = 0;
    psVar7[0x17] = 0;
    psVar7[0x18] = 0;
    psVar7[0x19] = 0;
    psVar7[0x1a] = 0;
    psVar7[0x1b] = 0;
    psVar7[0x1c] = 0;
    psVar7[0x1d] = 0;
    psVar7[0x1e] = 0;
    psVar7[0x1f] = 0;
    psVar7[0x22] = 0;
    iVar3 = *(int *)(lVar6 + 0x28);
    *(int *)(lVar6 + 0x28) = iVar3 + 1;
    *(int *)(psVar7 + 0x20) = iVar3;
    psVar10 = psVar7;
  }
  FUN_1433ea220(param_1 + 0x18,param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = psVar10;
    psVar10 = psVar9;
  }
  if (psVar10 != (short *)0x0) {
    FUN_1433e8d60(psVar10 + 0x10);
    lVar6 = *(longlong *)(psVar10 + 0xc);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dedf0(lVar6);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
      }
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,psVar10);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + *(longlong *)(param_1 + 0x20) * 8);
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x30);
  }
  FUN_1433e3210(lVar6,*(undefined8 *)(param_1 + 0x10),param_2);
  *(short **)(lVar6 + 0x38) = psVar8;
  return lVar6;
}



// FUNCTION 1433e8760 FUN_1433e8760 body=334 status=ok
// SIG undefined FUN_1433e8760(void)

longlong FUN_1433e8760(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  short *psVar8;
  longlong local_res10;
  
  if (((*param_2 != 0) && (lVar7 = param_2[1], -1 < lVar7)) && (lVar7 < *(int *)(*param_2 + 8))) {
    psVar8 = (short *)0x0;
    if (lVar7 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + lVar7 * 8);
      uVar5 = plVar2[1];
      if (uVar5 != 0) {
        if ((*plVar2 != 0) && (uVar5 - 1 < uVar5)) {
          psVar8 = (short *)(*plVar2 + (uVar5 - 1) * 2);
        }
        if (*psVar8 == 0) {
          uVar5 = uVar5 - 1;
        }
      }
      psVar8 = (short *)(uVar5 + plVar2[7]);
    }
    uVar6 = FUN_1433e9900(param_1);
    local_res10 = FUN_1433e0f80(uVar6);
    FUN_1433e9af0(param_1 + 0x18,lVar7,&local_res10);
    lVar4 = local_res10;
    if (local_res10 != 0) {
      FUN_1433e8d60(local_res10 + 0x20);
      lVar3 = *(longlong *)(lVar4 + 0x18);
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dedf0(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8);
    if (param_3 == 0) {
      param_3 = *(longlong *)(param_1 + 0x30);
    }
    FUN_1433e3210(lVar7,*(undefined8 *)(param_1 + 0x10),param_3);
    *(short **)(lVar7 + 0x38) = psVar8;
    return lVar7;
  }
  lVar7 = FUN_1433e85e0(param_1,param_3);
  return lVar7;
}



// FUNCTION 1433e88c0 FUN_1433e88c0 body=319 status=ok
// SIG undefined FUN_1433e88c0(void)

void FUN_1433e88c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  
  psVar8 = (short *)0x0;
  psVar7 = psVar8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + *(longlong *)(param_1 + 0x20) * 8);
    uVar3 = plVar2[1];
    if (uVar3 != 0) {
      if ((*plVar2 == 0) || (psVar7 = (short *)(*plVar2 + (uVar3 - 1) * 2), uVar3 <= uVar3 - 1)) {
        psVar7 = psVar8;
      }
      if (*psVar7 == 0) {
        uVar3 = uVar3 - 1;
      }
    }
    psVar7 = (short *)(uVar3 + plVar2[7]);
  }
  lVar4 = FUN_1433e9900(param_1);
  lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x50))(*(longlong **)(lVar4 + 0x30),0x48);
  psVar6 = psVar8;
  if (lVar5 != 0) {
    psVar6 = (short *)FUN_1433e20e0(lVar5,param_2,lVar4);
  }
  FUN_1433ea220(param_1 + 0x18,param_1 + 0x18,*(longlong *)(param_1 + 0x20) + 1);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + (*(longlong *)(param_1 + 0x20) + -1) * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)psVar6;
    psVar6 = psVar8;
  }
  if (psVar6 != (short *)0x0) {
    FUN_1433e8d60(psVar6 + 0x10);
    lVar4 = *(longlong *)(psVar6 + 0xc);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dedf0(lVar4);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,psVar6);
  }
  *(short **)
   (*(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + *(longlong *)(param_1 + 0x20) * 8) + 0x38) =
       psVar7;
  return;
}



// FUNCTION 1433e8a10 FUN_1433e8a10 body=336 status=ok
// SIG undefined FUN_1433e8a10(void)

void FUN_1433e8a10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  short *local_res10;
  
  if (((*param_2 != 0) && (lVar2 = param_2[1], -1 < lVar2)) && (lVar2 < *(int *)(*param_2 + 8))) {
    psVar7 = (short *)0x0;
    psVar8 = psVar7;
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + lVar2 * 8);
      uVar4 = plVar3[1];
      if (uVar4 != 0) {
        if ((*plVar3 == 0) || (psVar8 = (short *)(*plVar3 + (uVar4 - 1) * 2), uVar4 <= uVar4 - 1)) {
          psVar8 = psVar7;
        }
        if (*psVar8 == 0) {
          uVar4 = uVar4 - 1;
        }
      }
      psVar8 = (short *)(uVar4 + plVar3[7]);
    }
    lVar5 = FUN_1433e9900(param_1);
    lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x50))(*(longlong **)(lVar5 + 0x30),0x48);
    if (lVar6 != 0) {
      psVar7 = (short *)FUN_1433e20e0(lVar6,param_3,lVar5);
    }
    local_res10 = psVar7;
    FUN_1433e9af0((longlong *)(param_1 + 0x18),lVar2,&local_res10);
    psVar7 = local_res10;
    if (local_res10 != (short *)0x0) {
      FUN_1433e8d60(local_res10 + 0x10);
      lVar5 = *(longlong *)(psVar7 + 0xc);
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dedf0(lVar5);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
        }
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,psVar7);
    }
    *(short **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar2 * 8) + 0x38) = psVar8;
    return;
  }
  FUN_1433e88c0(param_1,param_3);
  return;
}



// FUNCTION 1433e8b70 FUN_1433e8b70 body=31 status=ok
// SIG undefined FUN_1433e8b70(void)

undefined8 FUN_1433e8b70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20) + -1;
  if ((-1 < lVar1) && (lVar1 < *(int *)(param_1 + 0x20))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 1433e8c00 FUN_1433e8c00 body=232 status=ok
// SIG undefined FUN_1433e8c00(void)

void FUN_1433e8c00(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x60) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x60,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x5fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143354d50(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 1433e8cf0 FUN_1433e8cf0 body=105 status=ok
// SIG undefined FUN_1433e8cf0(void)

undefined8 * FUN_1433e8cf0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b03c28;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 100;
  *(undefined4 *)((longlong)param_1 + 0x24) = 100;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = param_2;
  FUN_1433dd540(param_1 + 7);
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return param_1;
}



// FUNCTION 1433e8d60 FUN_1433e8d60 body=134 status=ok
// SIG undefined FUN_1433e8d60(void)

void FUN_1433e8d60(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    plVar4 = (longlong *)(*param_1 + -8 + lVar3 * 0x18);
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar2);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
        }
      }
      plVar4 = plVar4 + -3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001433e8de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1433e8df0 FUN_1433e8df0 body=168 status=ok
// SIG undefined FUN_1433e8df0(void)

void FUN_1433e8df0(RefCountNTSImplCore *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b06768;
  FUN_1433e3d20();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  FUN_1433e9640(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433e8ea0 FUN_1433e8ea0 body=111 status=ok
// SIG undefined FUN_1433e8ea0(void)

longlong * FUN_1433e8ea0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dedf0(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
      *param_1 = param_2;
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1433e8f10 FUN_1433e8f10 body=103 status=ok
// SIG undefined FUN_1433e8f10(void)

longlong * FUN_1433e8f10(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
      *param_1 = param_2;
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1433e8f80 FUN_1433e8f80 body=95 status=ok
// SIG undefined FUN_1433e8f80(void)

longlong * FUN_1433e8f80(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 1433e8fe0 FUN_1433e8fe0 body=111 status=ok
// SIG undefined FUN_1433e8fe0(void)

longlong * FUN_1433e8fe0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
      *param_1 = param_2;
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1433e9050 FUN_1433e9050 body=105 status=ok
// SIG undefined FUN_1433e9050(void)

undefined4 * FUN_1433e9050(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if (*(longlong *)(param_2 + 4) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 4) + 8);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = *(longlong *)(param_1 + 4);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1433e90c0 FUN_1433e90c0 body=111 status=ok
// SIG undefined FUN_1433e90c0(void)

longlong * FUN_1433e90c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(short *)(param_1 + 2) = (short)param_2[2];
  return param_1;
}



// FUNCTION 1433e9130 FUN_1433e9130 body=89 status=ok
// SIG undefined FUN_1433e9130(void)

undefined8 FUN_1433e9130(undefined8 param_1,ulonglong param_2)

{
  FUN_1433e8df0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433e9190 FUN_1433e9190 body=148 status=ok
// SIG undefined FUN_1433e9190(void)

void FUN_1433e9190(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    lVar2 = param_1[1];
    FUN_1433ea180(param_1,param_1,param_3 + lVar2);
    plVar3 = (longlong *)(*param_1 + lVar2 * 0x18);
    if (param_3 != 0) {
      plVar4 = (longlong *)(param_2 + 0x10);
      do {
        if (plVar3 != (longlong *)0x0) {
          lVar2 = plVar4[-1];
          *plVar3 = plVar4[-2];
          plVar3[1] = lVar2;
          if (*plVar4 != 0) {
            piVar1 = (int *)(*plVar4 + 8);
            *piVar1 = *piVar1 + 1;
          }
          plVar3[2] = *plVar4;
        }
        plVar4 = plVar4 + 3;
        plVar3 = plVar3 + 3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



// FUNCTION 1433e9230 FUN_1433e9230 body=830 status=ok
// SIG undefined FUN_1433e9230(void)

void FUN_1433e9230(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    return;
  }
  local_40 = FUN_1433e97b0();
  if ((longlong)local_40 < 0) {
    local_40 = 0;
  }
  else if (uVar6 <= local_40) {
    local_40 = uVar6 - 1;
  }
  uVar7 = local_40;
  if (param_3 == 0xffffffffffffffff) {
    param_3 = 0x7fffffffffffffff - param_2;
  }
  lVar8 = local_40 * 0x18;
  plVar5 = (longlong *)(*param_1 + lVar8);
  local_48 = param_1;
  if ((param_2 < *plVar5) || (*plVar5 + plVar5[1] + -1 < (longlong)(param_2 + param_3 + -1))) {
    if ((*plVar5 <= param_2) && (param_2 <= *plVar5 + -1 + plVar5[1])) {
      uVar6 = (plVar5[1] - param_2) + *plVar5;
      if ((ulonglong)plVar5[1] < uVar6) {
        plVar5[1] = 0;
      }
      else {
        plVar5[1] = plVar5[1] - uVar6;
      }
      goto LAB_1433e9416;
    }
    bVar11 = SBORROW8(local_40,uVar6);
    bVar10 = (longlong)(local_40 - uVar6) < 0;
  }
  else if (*plVar5 == param_2) {
    uVar6 = plVar5[1];
    uVar4 = param_3;
    if ((longlong)uVar6 < (longlong)param_3) {
      uVar4 = uVar6;
    }
    *plVar5 = *plVar5 + uVar4;
    plVar5[1] = uVar6 - uVar4;
    if (*(longlong *)(lVar8 + 8 + *param_1) == 0) {
      if ((-1 < (longlong)local_40) && (local_40 < (ulonglong)param_1[1])) {
        FUN_1433e9c90(param_1,local_40);
      }
      goto LAB_1433e949a;
    }
    bVar11 = SBORROW8(local_40,param_1[1]);
    bVar10 = (longlong)(local_40 - param_1[1]) < 0;
  }
  else {
    if ((longlong)(param_2 + param_3) < plVar5[1] + *plVar5) {
      local_38 = *plVar5;
      local_30 = plVar5[1];
      if (plVar5[2] != 0) {
        piVar1 = (int *)(plVar5[2] + 8);
        *piVar1 = *piVar1 + 1;
      }
      local_28 = plVar5[2];
      plVar5 = (longlong *)(*param_1 + lVar8);
      uVar6 = (plVar5[1] - param_2) + *plVar5;
      if ((ulonglong)plVar5[1] < uVar6) {
        plVar5[1] = 0;
      }
      else {
        plVar5[1] = plVar5[1] - uVar6;
      }
      lVar8 = *(longlong *)(lVar8 + 8 + *param_1) + param_3;
      if (local_30 < lVar8) {
        lVar8 = local_30;
      }
      local_38 = local_38 + lVar8;
      local_30 = local_30 - lVar8;
      if ((longlong)local_40 < param_1[1]) {
        local_40 = local_40 + 1;
      }
      uVar7 = local_40;
      FUN_1433e9a00(param_1,local_40,&local_38);
      lVar8 = local_28;
      if ((longlong)uVar7 < param_1[1]) {
        uVar7 = uVar7 + 1;
        local_40 = uVar7;
      }
      if (local_28 != 0) {
        piVar1 = (int *)(local_28 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(local_28);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
        }
      }
      goto LAB_1433e949a;
    }
    if ((ulonglong)plVar5[1] < param_3) {
      plVar5[1] = 0;
    }
    else {
      plVar5[1] = plVar5[1] - param_3;
    }
LAB_1433e9416:
    lVar8 = param_1[1];
    if (lVar8 <= (longlong)local_40) goto LAB_1433e949a;
    local_40 = local_40 + 1;
    bVar11 = SBORROW8(local_40,lVar8);
    bVar10 = (longlong)(local_40 - lVar8) < 0;
  }
  uVar7 = local_40;
  if (bVar11 != bVar10) {
    uVar7 = local_40 + 1;
    local_40 = uVar7;
  }
LAB_1433e949a:
  cVar3 = Scaleform::
          RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
          ::Iterator::IsFinished(&local_48);
  if (cVar3 == '\0') {
    do {
      lVar8 = *(longlong *)(uVar7 * 0x18 + *param_1);
      if ((lVar8 < param_2) ||
         ((longlong)(param_2 + -1 + param_3) <
          lVar8 + *(longlong *)(uVar7 * 0x18 + 8 + *param_1) + -1)) break;
      if ((-1 < (longlong)uVar7) && (uVar7 < (ulonglong)param_1[1])) {
        FUN_1433e9c90(param_1,uVar7);
      }
      cVar3 = Scaleform::
              RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
              ::Iterator::IsFinished(&local_48);
    } while (cVar3 == '\0');
  }
  if ((-1 < (longlong)uVar7) && (uVar7 < (ulonglong)param_1[1])) {
    lVar9 = param_2 + -1 + param_3;
    plVar5 = (longlong *)(*param_1 + uVar7 * 0x18);
    lVar8 = *(longlong *)(*param_1 + uVar7 * 0x18);
    if ((lVar8 <= lVar9) && (lVar2 = plVar5[1], lVar9 <= lVar8 + -1 + lVar2)) {
      lVar8 = (param_2 - *plVar5) + param_3;
      if (lVar2 < lVar8) {
        lVar8 = lVar2;
      }
      *plVar5 = *plVar5 + lVar8;
      plVar5[1] = lVar2 - lVar8;
    }
  }
  return;
}



// FUNCTION 1433e9570 FUN_1433e9570 body=94 status=ok
// SIG undefined FUN_1433e9570(void)

void FUN_1433e9570(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_1433e8d60(lVar2 + 0x20);
    lVar3 = *(longlong *)(lVar2 + 0x18);
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1433dedf0(lVar3);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
      }
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  return;
}



// FUNCTION 1433e95d0 FUN_1433e95d0 body=99 status=ok
// SIG undefined FUN_1433e95d0(void)

void FUN_1433e95d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + -8 + param_2 * 0x18);
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar2);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
        }
      }
      plVar3 = plVar3 + -3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1433e9640 FUN_1433e9640 body=143 status=ok
// SIG undefined FUN_1433e9640(void)

void FUN_1433e9640(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + -8 + param_2 * 8);
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_1433e8d60(lVar2 + 0x20);
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1433dedf0(lVar3);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
          }
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
      }
      plVar4 = plVar4 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1433e96d0 FUN_1433e96d0 body=216 status=ok
// SIG undefined FUN_1433e96d0(void)

void FUN_1433e96d0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = FUN_1433e97b0();
    if ((longlong)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (uVar3 <= uVar2) {
      uVar2 = uVar3 - 1;
    }
    if ((((longlong)uVar2 < (longlong)uVar3) &&
        (plVar1 = (longlong *)(*param_1 + uVar2 * 0x18), plVar1 != (longlong *)0x0)) &&
       (((lVar5 = *plVar1, lVar5 <= param_2 && (lVar4 = plVar1[1], param_2 <= lVar5 + -1 + lVar4))
        || (lVar4 = plVar1[1], lVar4 + lVar5 == param_2)))) {
      plVar1[1] = lVar4 + param_3;
    }
    uVar3 = param_1[1];
    if ((longlong)uVar2 < (longlong)uVar3) {
      uVar2 = uVar2 + 1;
    }
    lVar5 = uVar2 * 0x18;
    while ((-1 < lVar5 && (uVar2 < uVar3))) {
      *(longlong *)(lVar5 + *param_1) = *(longlong *)(lVar5 + *param_1) + param_3;
      uVar3 = param_1[1];
      if ((longlong)uVar2 < (longlong)uVar3) {
        uVar2 = uVar2 + 1;
        lVar5 = lVar5 + 0x18;
      }
    }
  }
  return;
}



// FUNCTION 1433e97b0 FUN_1433e97b0 body=335 status=ok
// SIG undefined FUN_1433e97b0(void)

ulonglong FUN_1433e97b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar7 = 0;
  uVar10 = param_1[1] - 1;
  iVar6 = (int)param_2;
  uVar8 = uVar7;
  uVar11 = uVar7;
  if (uVar10 != 0) {
    do {
      uVar8 = uVar7;
      if (uVar10 == 0xffffffffffffffff) break;
      uVar5 = uVar10 + uVar7 >> 1;
      lVar3 = *(longlong *)(*param_1 + uVar5 * 0x18);
      lVar1 = *param_1 + uVar5 * 0x18;
      if (param_2 < lVar3) {
LAB_1433e9813:
        iVar4 = (int)lVar3 - iVar6;
      }
      else {
        if (param_2 <= lVar3 + -1 + *(longlong *)(lVar1 + 8)) {
          return uVar5;
        }
        if (param_2 < lVar3) goto LAB_1433e9813;
        iVar4 = (int)lVar3 + -1 + (*(int *)(lVar1 + 8) - iVar6);
      }
      if (iVar4 == 0) {
        return uVar5;
      }
      if (iVar4 < 0) {
        uVar8 = uVar5 + 1;
        uVar11 = uVar7;
      }
      else {
        uVar10 = uVar5 - 1;
      }
      uVar7 = uVar8;
    } while (uVar8 < uVar10);
  }
  if (uVar8 != uVar10) goto LAB_1433e989d;
  lVar1 = *(longlong *)(*param_1 + uVar8 * 0x18);
  piVar2 = (int *)(*param_1 + uVar8 * 0x18);
  if (param_2 < lVar1) {
LAB_1433e9868:
    iVar4 = (int)lVar1 - iVar6;
  }
  else {
    if (param_2 <= lVar1 + -1 + *(longlong *)(piVar2 + 2)) {
      return uVar8;
    }
    if (param_2 < lVar1) goto LAB_1433e9868;
    iVar4 = *piVar2 + -1 + (piVar2[2] - iVar6);
  }
  if (iVar4 == 0) {
    return uVar8;
  }
LAB_1433e989d:
  if (uVar11 < uVar10) {
    plVar9 = (longlong *)(*param_1 + (uVar11 + 1) * 0x18);
    do {
      lVar1 = *plVar9;
      if (param_2 < lVar1) {
LAB_1433e98cb:
        iVar4 = (int)lVar1 - iVar6;
      }
      else {
        if (param_2 <= lVar1 + -1 + plVar9[1]) {
          return uVar11;
        }
        if (param_2 < lVar1) goto LAB_1433e98cb;
        iVar4 = (int)*plVar9 + -1 + ((int)plVar9[1] - iVar6);
      }
      if (-1 < iVar4) {
        return uVar11;
      }
      uVar11 = uVar11 + 1;
      plVar9 = plVar9 + 3;
    } while (uVar11 < uVar10);
  }
  return uVar11;
}



// FUNCTION 1433e9900 FUN_1433e9900 body=126 status=ok
// SIG undefined FUN_1433e9900(void)

undefined8 FUN_1433e9900(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1433e8cf0(lVar2,plVar1,0);
    }
    if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    return uVar3;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1433e9980 FUN_1433e9980 body=124 status=ok
// SIG undefined FUN_1433e9980(void)

longlong * FUN_1433e9980(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1433e97b0(param_1,param_3);
  *param_2 = param_1;
  param_2[1] = 0;
  if ((longlong)uVar1 < 0) {
    param_2[1] = 0;
    return param_2;
  }
  if (*(ulonglong *)(param_1 + 8) <= uVar1) {
    param_2[1] = *(ulonglong *)(param_1 + 8) - 1;
    return param_2;
  }
  param_2[1] = param_2[1] + uVar1;
  return param_2;
}



// FUNCTION 1433e9a00 FUN_1433e9a00 body=232 status=ok
// SIG undefined FUN_1433e9a00(void)

void FUN_1433e9a00(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  void *_Src;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 + 1;
  FUN_1433ea180(param_1,param_1,uVar1);
  if (uVar3 < uVar1) {
    puVar5 = (undefined8 *)(*param_1 + uVar3 * 0x18);
    for (lVar6 = uVar1 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5 = puVar5 + 3;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 0x18);
    memmove((void *)((longlong)_Src + 0x18),_Src,(param_1[1] - param_2) * 0x18 - 0x18);
  }
  puVar5 = (undefined8 *)(*param_1 + param_2 * 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    *puVar5 = *param_3;
    puVar5[1] = uVar4;
    if (param_3[2] != 0) {
      piVar2 = (int *)(param_3[2] + 8);
      *piVar2 = *piVar2 + 1;
    }
    puVar5[2] = param_3[2];
  }
  return;
}



// FUNCTION 1433e9af0 FUN_1433e9af0 body=177 status=ok
// SIG undefined FUN_1433e9af0(void)

void FUN_1433e9af0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = param_1[1];
  uVar1 = uVar2 + 1;
  FUN_1433ea220(param_1,param_1,uVar1);
  if (uVar2 < uVar1) {
    puVar3 = (undefined8 *)(*param_1 + uVar2 * 8);
    for (lVar4 = uVar1 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(param_1[1] - param_2) * 8 - 8);
  }
  puVar3 = (undefined8 *)(*param_1 + param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_3;
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1433e9bb0 FUN_1433e9bb0 body=177 status=ok
// SIG undefined FUN_1433e9bb0(void)

void FUN_1433e9bb0(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5)

{
  short sVar1;
  void *_Dst;
  
  if (param_5 != 0) {
    if (param_5 == -1) {
      param_5 = 0;
      sVar1 = *param_3;
      while (sVar1 != 0) {
        param_5 = param_5 + 1;
        sVar1 = param_3[param_5];
      }
    }
    if (param_5 != 0) {
      _Dst = (void *)FUN_1433e12e0(param_1,param_2,param_4,param_5);
      FUN_1433e96d0(param_1 + 0x20,param_4,param_5);
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,param_5 * 2);
        FUN_1433e18d0(param_1);
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1433e9c70 IsFinished body=24 status=ok
// SIG undefined IsFinished(void)

undefined8
Scaleform::
RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
::Iterator::IsFinished(longlong *param_1)

{
  if ((-1 < param_1[1]) && ((ulonglong)param_1[1] < *(ulonglong *)(*param_1 + 8))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1433e9c90 FUN_1433e9c90 body=169 status=ok
// SIG undefined FUN_1433e9c90(void)

void FUN_1433e9c90(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Dst;
  
  if (param_1[1] == 1) {
    FUN_1433ea180(param_1,param_1,0);
    return;
  }
  lVar2 = *(longlong *)(param_2 * 0x18 + 0x10 + *param_1);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1433dd700(lVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
  }
  _Dst = (void *)(*param_1 + param_2 * 0x18);
  memmove(_Dst,(void *)((longlong)_Dst + 0x18),(param_1[1] - param_2) * 0x18 - 0x18);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1433e9d40 FUN_1433e9d40 body=103 status=ok
// SIG undefined FUN_1433e9d40(void)

void FUN_1433e9d40(longlong *param_1,longlong param_2)

{
  void *_Dst;
  
  if (param_1[1] == 1) {
    FUN_1433ea220(param_1,param_1,0);
    return;
  }
  FUN_1433e9570(*param_1 + param_2 * 8);
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1433e9db0 FUN_1433e9db0 body=799 status=ok
// SIG undefined FUN_1433e9db0(void)

void FUN_1433e9db0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *local_28;
  ulonglong local_20;
  
  uVar7 = param_1[1];
  if (uVar7 == 0) {
    return;
  }
  local_20 = FUN_1433e97b0();
  if ((longlong)local_20 < 0) {
    local_20 = 0;
  }
  else if (uVar7 <= local_20) {
    local_20 = uVar7 - 1;
  }
  uVar8 = local_20;
  if (param_3 == 0xffffffffffffffff) {
    param_3 = 0x7fffffffffffffff - param_2;
  }
  lVar11 = *(longlong *)(*param_1 + local_20 * 0x18);
  plVar1 = (longlong *)(*param_1 + local_20 * 0x18);
  uVar9 = uVar8;
  local_28 = param_1;
  if (param_2 < lVar11) {
LAB_1433e9f50:
    iVar6 = (int)lVar11 - (int)param_2;
LAB_1433e9f64:
    if (0 < iVar6) goto LAB_1433e9f78;
  }
  else {
    uVar3 = plVar1[1];
    if ((longlong)(uVar3 + lVar11 + -1) < (longlong)(param_2 + param_3 + -1)) {
      if (param_2 < lVar11) goto LAB_1433e9f50;
      uVar3 = plVar1[1];
      if (param_2 <= (longlong)(lVar11 + -1 + uVar3)) {
        uVar7 = (uVar3 - param_2) + lVar11;
        if (uVar3 < uVar7) {
          plVar1[1] = 0;
        }
        else {
          plVar1[1] = uVar3 - uVar7;
        }
        if (plVar1[1] != 0) goto LAB_1433e9ebc;
        goto LAB_1433e9e7c;
      }
      if (param_2 < lVar11) goto LAB_1433e9f50;
      if (param_2 <= lVar11 + -1 + plVar1[1]) goto LAB_1433e9f6b;
      if (param_2 < lVar11) goto LAB_1433e9f50;
      iVar6 = (int)lVar11 + -1 + ((int)plVar1[1] - (int)param_2);
      goto LAB_1433e9f64;
    }
    if (lVar11 == param_2) {
      uVar7 = param_3;
      if ((longlong)uVar3 < (longlong)param_3) {
        uVar7 = uVar3;
      }
      plVar1[1] = uVar3 - uVar7;
      *plVar1 = lVar11 + uVar7;
      if (uVar3 - uVar7 != 0) goto LAB_1433e9f78;
LAB_1433e9e7c:
      if ((-1 < (longlong)local_20) && (local_20 < (ulonglong)param_1[1])) {
        FUN_1433e9c90(param_1,local_20);
      }
      goto LAB_1433e9f78;
    }
    if ((longlong)(uVar3 + lVar11) <= (longlong)(param_2 + param_3)) {
      if (uVar3 < param_3) {
        plVar1[1] = 0;
      }
      else {
        plVar1[1] = uVar3 - param_3;
      }
      if ((longlong)local_20 < param_1[1]) {
        local_20 = local_20 + 1;
      }
      uVar8 = local_20;
      uVar9 = local_20;
      if ((longlong)local_20 < param_1[1]) {
        uVar8 = local_20 + 1;
        local_20 = uVar8;
      }
      goto LAB_1433e9f78;
    }
    if (uVar3 < param_3) {
      plVar1[1] = 0;
    }
    else {
      plVar1[1] = uVar3 - param_3;
    }
    if (plVar1[1] == 0) goto LAB_1433e9e7c;
LAB_1433e9ebc:
    uVar7 = param_1[1];
  }
LAB_1433e9f6b:
  if ((longlong)local_20 < (longlong)uVar7) {
    uVar8 = local_20 + 1;
    uVar9 = uVar8;
    local_20 = uVar8;
  }
LAB_1433e9f78:
  cVar5 = Scaleform::
          RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
          ::Iterator::IsFinished(&local_28);
  if (cVar5 == '\0') {
    do {
      lVar11 = *(longlong *)(uVar8 * 0x18 + *param_1);
      if ((lVar11 < param_2) ||
         ((longlong)(param_2 + -1 + param_3) <
          lVar11 + *(longlong *)(uVar8 * 0x18 + 8 + *param_1) + -1)) break;
      if ((-1 < (longlong)uVar8) && (uVar8 < (ulonglong)param_1[1])) {
        FUN_1433e9c90(param_1,uVar8);
      }
      cVar5 = Scaleform::
              RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
              ::Iterator::IsFinished(&local_28);
    } while (cVar5 == '\0');
  }
  if ((-1 < (longlong)uVar8) && (uVar8 < (ulonglong)param_1[1])) {
    lVar10 = param_2 + -1 + param_3;
    plVar1 = (longlong *)(*param_1 + uVar8 * 0x18);
    lVar11 = *(longlong *)(*param_1 + uVar8 * 0x18);
    if ((lVar11 <= lVar10) && (lVar4 = plVar1[1], lVar10 <= lVar11 + -1 + lVar4)) {
      lVar11 = (param_2 - *plVar1) + param_3;
      if (lVar4 < lVar11) {
        lVar11 = lVar4;
      }
      *plVar1 = *plVar1 + lVar11;
      plVar1[1] = lVar4 - lVar11;
    }
  }
  if ((((-1 < (longlong)uVar9) && (uVar7 = uVar9 - 1, -1 < (longlong)uVar7)) &&
      (uVar7 < (ulonglong)param_1[1])) && (uVar9 < (ulonglong)param_1[1])) {
    plVar1 = (longlong *)(*param_1 + uVar7 * 0x18);
    plVar2 = (longlong *)(*param_1 + uVar9 * 0x18);
    if (((plVar1[1] + *plVar1 == *plVar2 - param_3) && (plVar1[2] == plVar2[2])) &&
       (plVar1[1] = plVar1[1] + plVar2[1], uVar9 < (ulonglong)param_1[1])) {
      FUN_1433e9c90(param_1,uVar9);
    }
  }
  lVar11 = uVar9 * 0x18;
  while ((-1 < lVar11 && (uVar9 < (ulonglong)param_1[1]))) {
    *(longlong *)(lVar11 + *param_1) = *(longlong *)(lVar11 + *param_1) - param_3;
    if ((longlong)uVar9 < param_1[1]) {
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x18;
    }
  }
  return;
}



// FUNCTION 1433ea0d0 FUN_1433ea0d0 body=165 status=ok
// SIG undefined FUN_1433ea0d0(void)

void FUN_1433ea0d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x18,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433ea180 FUN_1433ea180 body=159 status=ok
// SIG undefined FUN_1433ea180(void)

void FUN_1433ea180(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1433e95d0(*param_1 + param_3 * 0x18,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433ea0d0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1433ea0d0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1433ea220 FUN_1433ea220 body=155 status=ok
// SIG undefined FUN_1433ea220(void)

void FUN_1433ea220(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_1433e9640(*param_1 + param_3 * 8,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1433ea2c0 FUN_1433ea2c0 body=1146 status=ok
// SIG undefined FUN_1433ea2c0(void)

void FUN_1433ea2c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  uVar7 = param_1[1];
  if (uVar7 == 0) {
    FUN_1433e9a00(param_1,0,param_2);
    return;
  }
  lVar10 = *param_2;
  local_40 = FUN_1433e97b0(param_1,lVar10);
  if ((longlong)local_40 < 0) {
    local_40 = 0;
  }
  else if (uVar7 <= local_40) {
    local_40 = uVar7 - 1;
  }
  uVar7 = local_40;
  lVar3 = local_40 * 0x18;
  plVar8 = (longlong *)(*param_1 + lVar3);
  local_48 = param_1;
  if (lVar10 < *plVar8) {
LAB_1433ea4ba:
    if ((lVar10 < *plVar8) || (*plVar8 + -1 + plVar8[1] < lVar10)) {
      lVar3 = *plVar8;
      if (lVar10 < lVar3) {
LAB_1433ea528:
        iVar6 = (int)lVar3 - (int)lVar10;
LAB_1433ea53a:
        if (0 < iVar6) goto LAB_1433ea53e;
      }
      else if (lVar3 + -1 + plVar8[1] < lVar10) {
        if (lVar10 < lVar3) goto LAB_1433ea528;
        iVar6 = (int)lVar3 + -1 + ((int)plVar8[1] - (int)lVar10);
        goto LAB_1433ea53a;
      }
      uVar9 = local_40 + 1;
      FUN_1433e9a00(param_1,uVar9,param_2);
      local_40 = uVar7;
      if ((longlong)uVar7 < param_1[1]) {
        uVar7 = uVar9;
        local_40 = uVar9;
      }
    }
    else {
      uVar7 = (plVar8[1] - lVar10) + *plVar8;
      if ((ulonglong)plVar8[1] < uVar7) {
        plVar8[1] = 0;
      }
      else {
        plVar8[1] = plVar8[1] - uVar7;
      }
      if ((longlong)local_40 < param_1[1]) {
        local_40 = local_40 + 1;
      }
      uVar7 = local_40;
      FUN_1433e9a00(param_1,local_40,param_2);
    }
  }
  else {
    uVar9 = param_2[1];
    if (*plVar8 + plVar8[1] + -1 < (longlong)(uVar9 + lVar10 + -1)) goto LAB_1433ea4ba;
    uVar4 = plVar8[1];
    if (*plVar8 != lVar10) {
      if ((longlong)(uVar9 + lVar10) < (longlong)(uVar4 + *plVar8)) {
        local_38 = *plVar8;
        local_30 = plVar8[1];
        if (plVar8[2] != 0) {
          piVar1 = (int *)(plVar8[2] + 8);
          *piVar1 = *piVar1 + 1;
        }
        local_28 = plVar8[2];
        plVar8 = (longlong *)(*param_1 + lVar3);
        uVar9 = (plVar8[1] - *param_2) + *plVar8;
        if ((ulonglong)plVar8[1] < uVar9) {
          plVar8[1] = 0;
        }
        else {
          plVar8[1] = plVar8[1] - uVar9;
        }
        uVar9 = local_40 + 1;
        lVar10 = *(longlong *)(lVar3 + 8 + *param_1) + param_2[1];
        if (local_30 < lVar10) {
          lVar10 = local_30;
        }
        local_30 = local_30 - lVar10;
        local_38 = local_38 + lVar10;
        FUN_1433e9a00(param_1,uVar9,param_2);
        if ((longlong)uVar7 < param_1[1]) {
          uVar7 = uVar9;
        }
        FUN_1433e9a00(param_1,uVar7 + 1,&local_38);
        lVar10 = local_28;
        uVar9 = uVar7;
        if ((longlong)uVar7 < param_1[1]) {
          uVar9 = uVar7 + 1;
        }
        local_40 = uVar9;
        if (local_28 != 0) {
          piVar1 = (int *)(local_28 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1433dd700(local_28);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
          }
        }
        goto LAB_1433ea57e;
      }
      if ((ulonglong)plVar8[1] < uVar9) {
        plVar8[1] = 0;
      }
      else {
        plVar8[1] = plVar8[1] - uVar9;
      }
      if ((longlong)local_40 < param_1[1]) {
        local_40 = local_40 + 1;
      }
      uVar7 = local_40;
      FUN_1433e9a00(param_1,local_40,param_2);
      goto LAB_1433ea570;
    }
    if ((longlong)uVar4 < (longlong)uVar9) {
      uVar9 = uVar4;
    }
    *plVar8 = *plVar8 + uVar9;
    plVar8[1] = uVar4 - uVar9;
    if (*(longlong *)(*param_1 + lVar3 + 8) == 0) {
      FUN_1433e9050(*param_1 + lVar3,param_2);
      goto LAB_1433ea570;
    }
LAB_1433ea53e:
    FUN_1433e9a00(param_1,local_40,param_2);
  }
LAB_1433ea570:
  uVar9 = uVar7;
  if ((longlong)uVar7 < param_1[1]) {
    uVar9 = uVar7 + 1;
    local_40 = uVar9;
  }
LAB_1433ea57e:
  cVar5 = Scaleform::
          RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
          ::Iterator::IsFinished(&local_48);
  if (cVar5 == '\0') {
    do {
      lVar10 = *(longlong *)(*param_1 + uVar9 * 0x18);
      if ((lVar10 < *param_2) ||
         (*param_2 + param_2[1] + -1 < lVar10 + -1 + *(longlong *)(*param_1 + 8 + uVar9 * 0x18)))
      break;
      if ((-1 < (longlong)uVar9) && (uVar9 < (ulonglong)param_1[1])) {
        FUN_1433e9c90(param_1,uVar9);
      }
      cVar5 = Scaleform::
              RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
              ::Iterator::IsFinished(&local_48);
    } while (cVar5 == '\0');
  }
  if ((-1 < (longlong)uVar9) && (uVar9 < (ulonglong)param_1[1])) {
    plVar8 = (longlong *)(*param_1 + uVar9 * 0x18);
    lVar10 = *param_2 + -1 + param_2[1];
    if ((*plVar8 <= lVar10) && (lVar3 = plVar8[1], lVar10 <= *plVar8 + -1 + lVar3)) {
      lVar10 = (param_2[1] - *plVar8) + *param_2;
      if (lVar3 < lVar10) {
        lVar10 = lVar3;
      }
      *plVar8 = *plVar8 + lVar10;
      plVar8[1] = lVar3 - lVar10;
    }
  }
  uVar9 = uVar7;
  if (((-1 < (longlong)uVar7) && (uVar4 = uVar7 - 1, -1 < (longlong)uVar4)) &&
     (uVar4 < (ulonglong)param_1[1])) {
    lVar10 = *param_1;
    plVar8 = (longlong *)(lVar10 + uVar4 * 0x18);
    if (*(longlong *)(lVar10 + 8 + uVar4 * 0x18) == 0) {
      FUN_1433e9c90(param_1,uVar4);
      uVar9 = uVar4;
    }
    else if (((plVar8[1] + *plVar8 == *param_2) &&
             (plVar8[2] == *(longlong *)(lVar10 + 0x10 + uVar7 * 0x18))) &&
            (plVar8[1] = plVar8[1] + param_2[1], uVar9 = uVar4, uVar7 < (ulonglong)param_1[1])) {
      FUN_1433e9c90(param_1,uVar7);
    }
  }
  uVar7 = uVar9;
  if ((longlong)uVar9 < param_1[1]) {
    uVar7 = uVar9 + 1;
  }
  if ((-1 < (longlong)uVar7) && (uVar7 < (ulonglong)param_1[1])) {
    lVar10 = *param_1;
    lVar3 = *(longlong *)(lVar10 + 8 + uVar7 * 0x18);
    plVar8 = (longlong *)(lVar10 + uVar7 * 0x18);
    if ((lVar3 == 0) ||
       (((plVar2 = (longlong *)(lVar10 + uVar9 * 0x18), plVar2[1] + *plVar2 == *plVar8 &&
         (plVar2[2] == plVar8[2])) && (plVar2[1] = plVar2[1] + lVar3, uVar7 < (ulonglong)param_1[1])
        ))) {
      FUN_1433e9c90(param_1);
    }
  }
  return;
}



// FUNCTION 1433ea740 FUN_1433ea740 body=168 status=ok
// SIG undefined FUN_1433ea740(void)

undefined8 * FUN_1433ea740(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b069f0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 1433ea7f0 FUN_1433ea7f0 body=346 status=ok
// SIG undefined FUN_1433ea7f0(void)

void FUN_1433ea7f0(RefCountNTSImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b069f0;
  FUN_1433ed4a0(param_1 + 0xd8);
  FUN_1433ed4a0();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0xa8)) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0xa8)) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_1433ed4a0(param_1 + 0x80);
  FUN_1433ed4a0(param_1 + 0x58);
  FUN_1433ed4a0();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x28)) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x28)) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1433ea950 FUN_1433ea950 body=180 status=ok
// SIG undefined FUN_1433ea950(void)

void FUN_1433ea950(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 1433eaa10 FUN_1433eaa10 body=447 status=ok
// SIG undefined FUN_1433eaa10(void)

void FUN_1433eaa10(longlong param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8) >> 0xc;
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar2,uVar4);
    }
    param_2 = param_2 + 1;
    *(char *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar4 * 8)) = cVar1;
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
    cVar1 = *param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar4 = *(ulonglong *)(lVar2 + 8) >> 0xc;
  if (*(ulonglong *)(lVar2 + 0x10) <= uVar4) {
    FUN_1433ef150(lVar2,uVar4);
  }
  *(undefined1 *)
   ((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
   *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar4 * 8)) = 0;
  *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8);
  FUN_1433eeb80(param_1 + 0x10,param_3);
  FUN_1433eeb80(param_1 + 0x10,param_4);
  FUN_1433ee9f0(param_1 + 0x10,param_5);
  FUN_1433ee9f0(param_1 + 0x10,param_6);
  FUN_1433ee9f0(param_1 + 0x10,param_7);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8);
  FUN_1433eeec0(param_1 + 0x10,0);
  FUN_1433eeec0(param_1 + 0x10,0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar2) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 1433eabe0 StartGlyph body=11 status=ok
// SIG undefined StartGlyph(void)

void Scaleform::GFx::FontCompactor::StartGlyph(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1433eac00 FUN_1433eac00 body=192 status=ok
// SIG undefined FUN_1433eac00(void)

void FUN_1433eac00(longlong param_1,short param_2,undefined2 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 local_res10;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1433ec130();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(ulonglong *)(param_1 + 0x60) >> 6;
  if (*(ulonglong *)(param_1 + 0x68) <= uVar2) {
    FUN_1433ef1f0(param_1 + 0x58,uVar2);
  }
  local_res10 = CONCAT22(param_3,param_2 * 2);
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar2 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x60) & 0x3f) * 8) = CONCAT44(1,uVar1);
  *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
  uVar2 = *(ulonglong *)(param_1 + 0x38) >> 6;
  if (*(ulonglong *)(param_1 + 0x40) <= uVar2) {
    FUN_1433ef280(param_1 + 0x30,uVar2);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar2 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x38) & 0x3f) * 4) = local_res10;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}



// FUNCTION 1433eacd0 FUN_1433eacd0 body=224 status=ok
// SIG undefined FUN_1433eacd0(void)

void FUN_1433eacd0(longlong param_1,short param_2,short param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  
  uVar3 = *(longlong *)(param_1 + 0x60) - 1;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar3 >> 6) * 8) + 4 +
              (ulonglong)((uint)uVar3 & 0x3f) * 8) != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - 1;
    uVar2 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x50) + (uVar3 >> 6) * 8) +
             (ulonglong)((uint)uVar3 & 0x3f) * 4);
    local_res8._0_2_ = (short)uVar2;
    if ((param_2 == (short)local_res8 >> 1) && (param_3 == (short)((uint)uVar2 >> 0x10))) {
      return;
    }
  }
  uVar3 = *(ulonglong *)(param_1 + 0x38) >> 6;
  local_res8 = CONCAT22(param_3,param_2 * 2);
  if (*(ulonglong *)(param_1 + 0x40) <= uVar3) {
    FUN_1433ef280(param_1 + 0x30,uVar3);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar3 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x38) & 0x3f) * 4) = local_res8;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  uVar3 = *(longlong *)(param_1 + 0x60) - 1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar3 >> 6) * 8) + 4 +
                  (ulonglong)((uint)uVar3 & 0x3f) * 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1433eadc0 FUN_1433eadc0 body=382 status=ok
// SIG undefined FUN_1433eadc0(void)

void FUN_1433eadc0(longlong param_1,short param_2,short param_3,short param_4,short param_5)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 local_res8;
  
  uVar6 = *(longlong *)(param_1 + 0x60) - 1;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar6 >> 6) * 8) + 4 +
              (ulonglong)((uint)uVar6 & 0x3f) * 8) != 0) {
    uVar6 = *(longlong *)(param_1 + 0x38) - 1;
    uVar2 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x50) + (uVar6 >> 6) * 8) +
             (ulonglong)((uint)uVar6 & 0x3f) * 4);
    local_res8._2_2_ = (short)((uint)uVar2 >> 0x10);
    iVar5 = ((int)param_2 - (int)param_4) * ((int)param_5 - (int)local_res8._2_2_) -
            ((int)param_3 - (int)param_5) * ((int)param_4 - (int)(short)((short)uVar2 >> 1));
    iVar4 = -iVar5;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    if (iVar4 < 6) {
      FUN_1433eacd0(param_1,param_4,param_5);
      return;
    }
  }
  uVar6 = *(ulonglong *)(param_1 + 0x38) >> 6;
  local_res8 = CONCAT22(param_3,param_2 * 2) | 1;
  uVar3 = local_res8;
  if (*(ulonglong *)(param_1 + 0x40) <= uVar6) {
    FUN_1433ef280(param_1 + 0x30,uVar6);
  }
  local_res8 = CONCAT22(param_5,param_4 * 2) | 1;
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar6 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x38) & 0x3f) * 4) = uVar3;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  uVar6 = *(ulonglong *)(param_1 + 0x38) >> 6;
  if (*(ulonglong *)(param_1 + 0x40) <= uVar6) {
    FUN_1433ef280(param_1 + 0x30,uVar6);
  }
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar6 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x38) & 0x3f) * 4) = local_res8;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  uVar6 = *(longlong *)(param_1 + 0x60) - 1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar6 >> 6) * 8) + 4 +
                  (ulonglong)((uint)uVar6 & 0x3f) * 8);
  *piVar1 = *piVar1 + 2;
  return;
}



// FUNCTION 1433eaf50 FUN_1433eaf50 body=1612 status=ok
// SIG undefined FUN_1433eaf50(void)

void FUN_1433eaf50(longlong param_1,char param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint local_res8 [2];
  char local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined4 local_68;
  uint local_64;
  undefined2 local_60;
  undefined2 uStack_5e;
  uint uStack_5c;
  longlong local_58;
  uint local_50;
  uint local_4c;
  
  local_60 = *(undefined2 *)(param_1 + 0x104);
  uVar17 = 0;
  uStack_5e = 0;
  uVar11 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
  local_res10 = param_2;
  local_64 = uVar11;
  uStack_5c = uVar11;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1433ec130();
  }
  FUN_1433ec5b0(param_1,local_res8,local_res18,local_res20,&local_68);
  FUN_1433ee900(param_1 + 0x10,local_res8[0]);
  FUN_1433ee900(param_1 + 0x10,local_res18[0]);
  FUN_1433ee900(param_1 + 0x10,local_res20[0]);
  FUN_1433ee900(param_1 + 0x10,local_68);
  FUN_1433eea90(param_1 + 0x10,*(undefined4 *)(param_1 + 0x60));
  cVar4 = '\0';
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_res18[0] = 0;
    do {
      iVar8 = 0;
      uVar18 = (ulonglong)((uint)uVar17 & 0x3f);
      uVar15 = 1;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar17 >> 6) * 8);
      uVar11 = *(uint *)(lVar6 + 4 + uVar18 * 8);
      puVar1 = (uint *)(lVar6 + uVar18 * 8);
      if (1 < uVar11) {
        uVar5 = *puVar1;
        iVar8 = 0;
        do {
          uVar7 = uVar5 + 1;
          iVar8 = iVar8 + 1;
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar7 >> 6) * 8)
                        + (ulonglong)(uVar7 & 0x3f) * 4) & 1) != 0) {
            uVar15 = uVar15 + 1;
            uVar7 = uVar5 + 2;
          }
          uVar15 = uVar15 + 1;
          uVar5 = uVar7;
        } while (uVar15 < uVar11);
      }
      uVar17 = (ulonglong)(*puVar1 & 0x3f);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(*puVar1 >> 6) * 8);
      iVar19 = (int)*(short *)(lVar6 + 2 + uVar17 * 4);
      iVar10 = (int)*(short *)(lVar6 + uVar17 * 4) >> 1;
      FUN_1433ee900(param_1 + 0x10,iVar10);
      FUN_1433ee900(param_1 + 0x10,iVar19);
      local_res20[0] = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
      FUN_1433eec20(param_1 + 0x10,iVar8 * 2);
      uVar11 = 1;
      if (1 < puVar1[1]) {
        do {
          uVar15 = *puVar1 + uVar11;
          uVar17 = (ulonglong)(uVar15 & 0x3f);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar15 >> 6) * 8);
          uVar2 = *(ushort *)(lVar6 + uVar17 * 4);
          lVar6 = lVar6 + uVar17 * 4;
          if ((uVar2 & 1) == 0) {
            iVar13 = (int)*(short *)(lVar6 + 2);
            iVar8 = (int)(short)uVar2 >> 1;
            if (iVar8 == iVar10) {
              FUN_1433eefe0(param_1 + 0x10,iVar13 - iVar19);
              iVar19 = iVar13;
              iVar10 = iVar8;
            }
            else if (iVar13 == iVar19) {
              FUN_1433ed520();
              iVar19 = iVar13;
              iVar10 = iVar8;
            }
            else {
              FUN_1433ed690(param_1 + 0x10,iVar8 - iVar10,iVar13 - iVar19);
              iVar19 = iVar13;
              iVar10 = iVar8;
            }
          }
          else {
            iVar16 = (int)*(short *)(lVar6 + 2);
            uVar11 = uVar11 + 1;
            uVar15 = *puVar1 + uVar11;
            uVar17 = (ulonglong)(uVar15 & 0x3f);
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar15 >> 6) * 8);
            iVar8 = (int)*(short *)(lVar6 + 2 + uVar17 * 4);
            iVar13 = (int)*(short *)(lVar6 + uVar17 * 4) >> 1;
            FUN_1433edab0(param_1 + 0x10,((int)(short)uVar2 >> 1) - iVar10,iVar16 - iVar19,
                          iVar13 - ((int)(short)uVar2 >> 1),iVar8 - iVar16);
            iVar19 = iVar8;
            iVar10 = iVar13;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < puVar1[1]);
      }
      uVar11 = local_res20[0];
      if (local_res10 == '\0') {
LAB_1433eb2ac:
        cVar4 = (char)local_res8[0];
      }
      else {
        uVar17 = (ulonglong)local_res20[0];
        local_58 = param_1;
        local_50 = FUN_1433ebd40(param_1,uVar17);
        lVar6 = *(longlong *)(param_1 + 0x20);
        uVar18 = (ulonglong)local_50;
        local_4c = uVar11;
        if (lVar6 != 0) {
          uVar12 = *(ulonglong *)(lVar6 + 8) & uVar18;
          puVar9 = (ulonglong *)(lVar6 + 0x10 + uVar12 * 0x20);
          if ((*puVar9 != 0xfffffffffffffffe) && (uVar14 = uVar12, puVar9[1] == uVar12)) {
            while ((puVar9[1] != uVar12 ||
                   (cVar4 = FUN_1433ebe50(puVar9[2],*(undefined4 *)((longlong)puVar9 + 0x1c),param_1
                                          ,uVar11), cVar4 == '\0'))) {
              uVar14 = *puVar9;
              if (uVar14 == 0xffffffffffffffff) goto LAB_1433eb3ae;
              puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x10 + uVar14 * 0x20);
            }
            if ((-1 < (longlong)uVar14) &&
               (lVar6 = (uVar14 + 1) * 0x20 + *(longlong *)(param_1 + 0x20), lVar6 != 0)) {
              if (uVar17 < *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8)) {
                *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8) = uVar17;
              }
              FUN_1433eec20(param_1 + 0x10,*(int *)(lVar6 + 0xc) * 2 | 1);
              goto LAB_1433eb2ac;
            }
          }
        }
LAB_1433eb3ae:
        FUN_1433ed220(param_1 + 0x20,param_1 + 0x20,&local_58,uVar18);
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        cVar4 = '\x01';
      }
      local_res18[0] = local_res18[0] + 1;
      uVar17 = (ulonglong)local_res18[0];
      uVar11 = local_64;
    } while (uVar17 < *(ulonglong *)(param_1 + 0x60));
  }
  uVar15 = 0;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  if ((local_res10 != '\0') && (cVar4 == '\0')) {
    uVar5 = FUN_1433eca80(param_1,uVar11);
    if (uVar11 < uVar5) {
      uVar17 = (ulonglong)uVar11;
      uVar18 = (ulonglong)(uVar5 - uVar11);
      uVar15 = 0;
      do {
        uVar5 = (uint)uVar17;
        uVar12 = uVar17 >> 0xc;
        uVar17 = uVar17 + 1;
        uVar15 = uVar15 * 0x21 ^
                 (uint)*(byte *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + uVar12 * 8)
                                + (ulonglong)(uVar5 & 0xfff));
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    local_58 = param_1;
    local_50 = uVar15;
    local_4c = uVar11;
    if (((*(longlong *)(param_1 + 0x28) == 0) ||
        (lVar6 = FUN_1433ed370(param_1 + 0x28,&local_58,
                               *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 8) & (ulonglong)uVar15
                              ), lVar6 < 0)) ||
       (lVar6 = (lVar6 + 1) * 0x20 + *(longlong *)(param_1 + 0x28), lVar6 == 0)) {
      FUN_1433ed220(param_1 + 0x28,param_1 + 0x28,&local_58,uVar15);
    }
    else {
      if ((ulonglong)uVar11 < *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8)) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8) = (ulonglong)uVar11;
      }
      uStack_5c = *(uint *)(lVar6 + 0xc);
    }
  }
  uVar15 = *(uint *)(param_1 + 0x10c);
  uVar3 = *(undefined4 *)(param_1 + 0x104);
  *(int *)(param_1 + 0x108) =
       *(int *)(param_1 + 0x108) + (*(int *)(*(longlong *)(param_1 + 0x10) + 8) - uVar11);
  *(char *)((ulonglong)(uVar15 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar15 >> 0xc) * 8))
       = (char)uVar3;
  *(char *)((ulonglong)(uVar15 + 1 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(uVar15 + 1 >> 0xc) * 8)) = (char)((uint)uVar3 >> 8);
  *(char *)((ulonglong)(uVar15 + 2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(uVar15 + 2 >> 0xc) * 8)) = (char)((uint)uVar3 >> 0x10);
  *(char *)((ulonglong)(uVar15 + 3 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(uVar15 + 3 >> 0xc) * 8)) = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  iVar8 = *(int *)(param_1 + 0x10c);
  *(char *)((ulonglong)(iVar8 + 4U & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(iVar8 + 4U >> 0xc) * 8)) = (char)uVar3;
  *(char *)((ulonglong)(iVar8 + 5U & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(iVar8 + 5U >> 0xc) * 8)) = (char)((uint)uVar3 >> 8);
  *(char *)((ulonglong)(iVar8 + 6U & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(iVar8 + 6U >> 0xc) * 8)) = (char)((uint)uVar3 >> 0x10);
  *(char *)((ulonglong)(iVar8 + 7U & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
            (ulonglong)(iVar8 + 7U >> 0xc) * 8)) = (char)((uint)uVar3 >> 0x18);
  uVar17 = *(ulonglong *)(param_1 + 0xb8) >> 6;
  if (*(ulonglong *)(param_1 + 0xc0) <= uVar17) {
    FUN_1433ef1f0(param_1 + 0xb0,uVar17);
  }
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0xd0) + uVar17 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0xb8) & 0x3f) * 8) =
       CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 1;
  return;
}



// FUNCTION 1433eb5b0 FUN_1433eb5b0 body=69 status=ok
// SIG undefined FUN_1433eb5b0(void)

void FUN_1433eb5b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_1433eaf50(param_1,param_4);
  FUN_1433eb600(param_1,*(int *)(param_1 + 0xb8) + -1,param_2,param_3);
  return;
}



// FUNCTION 1433eb600 FUN_1433eb600 body=295 status=ok
// SIG undefined FUN_1433eb600(void)

void FUN_1433eb600(longlong param_1,uint param_2,short param_3,undefined2 param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  short local_res10 [12];
  
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb8)) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    local_res10[0] = param_3;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 6) * 8);
    *(undefined2 *)(lVar3 + 2 + (ulonglong)(param_2 & 0x3f) * 8) = param_4;
    lVar9 = 0x1505;
    *(short *)(lVar3 + (ulonglong)(param_2 & 0x3f) * 8) = param_3;
    lVar8 = 2;
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      uVar4 = 0x1505;
      lVar6 = 2;
      do {
        pbVar2 = &stack0x0000000f + lVar6;
        lVar6 = lVar6 + -1;
        uVar4 = (ulonglong)*pbVar2 + uVar4 * 0x1003f;
      } while (lVar6 != 0);
      uVar4 = *(ulonglong *)(lVar3 + 8) & uVar4;
      lVar6 = uVar4 * 3 + 2;
      puVar5 = (ulonglong *)(lVar3 + lVar6 * 8);
      if ((*(longlong *)(lVar3 + lVar6 * 8) != -2) && (uVar7 = uVar4, puVar5[1] == uVar4)) {
        while ((puVar5[1] != uVar4 || ((short)puVar5[2] != param_3))) {
          uVar7 = *puVar5;
          if (uVar7 == 0xffffffffffffffff) goto LAB_1433eb6ea;
          puVar5 = (ulonglong *)(lVar3 + uVar7 * 0x18 + 0x10);
        }
        if ((-1 < (longlong)uVar7) && (lVar3 + uVar7 * 0x18 + 0x20 != 0)) {
          return;
        }
      }
    }
LAB_1433eb6ea:
    do {
      pbVar2 = &stack0x0000000f + lVar8;
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 * 0x1003f + (ulonglong)*pbVar2;
    } while (lVar8 != 0);
    FUN_1433ed0c0(plVar1,plVar1,local_res10,lVar9);
  }
  return;
}



// FUNCTION 1433eb730 FUN_1433eb730 body=295 status=ok
// SIG undefined FUN_1433eb730(void)

void FUN_1433eb730(longlong param_1,uint param_2,short param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  short local_res10 [12];
  
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb8)) {
    lVar9 = 0x1505;
    plVar1 = (longlong *)(param_1 + 0xa8);
    local_res10[0] = param_3;
    *(short *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 6) * 8) +
              (ulonglong)(param_2 & 0x3f) * 8) = param_3;
    lVar8 = 2;
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      uVar4 = 0x1505;
      lVar6 = 2;
      do {
        pbVar2 = &stack0x0000000f + lVar6;
        lVar6 = lVar6 + -1;
        uVar4 = (ulonglong)*pbVar2 + uVar4 * 0x1003f;
      } while (lVar6 != 0);
      uVar4 = *(ulonglong *)(lVar3 + 8) & uVar4;
      lVar6 = uVar4 * 3 + 2;
      puVar5 = (ulonglong *)(lVar3 + lVar6 * 8);
      if ((*(longlong *)(lVar3 + lVar6 * 8) != -2) && (uVar7 = uVar4, puVar5[1] == uVar4)) {
        while ((puVar5[1] != uVar4 || ((short)puVar5[2] != param_3))) {
          uVar7 = *puVar5;
          if (uVar7 == 0xffffffffffffffff) goto LAB_1433eb81a;
          puVar5 = (ulonglong *)(lVar3 + uVar7 * 0x18 + 0x10);
        }
        if ((-1 < (longlong)uVar7) && (lVar3 + uVar7 * 0x18 + 0x20 != 0)) {
          return;
        }
      }
    }
LAB_1433eb81a:
    do {
      pbVar2 = &stack0x0000000f + lVar8;
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 * 0x1003f + (ulonglong)*pbVar2;
    } while (lVar8 != 0);
    FUN_1433ed0c0(plVar1,plVar1,local_res10,lVar9);
  }
  return;
}



// FUNCTION 1433eb860 AssignGlyphAdvance body=41 status=ok
// SIG undefined AssignGlyphAdvance(void)

void Scaleform::GFx::FontCompactor::AssignGlyphAdvance
               (longlong param_1,uint param_2,undefined2 param_3)

{
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb8)) {
    *(undefined2 *)
     (*(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 6) * 8) + 2 +
     (ulonglong)(param_2 & 0x3f) * 8) = param_3;
  }
  return;
}



// FUNCTION 1433eb890 FUN_1433eb890 body=460 status=ok
// SIG undefined FUN_1433eb890(void)

void FUN_1433eb890(longlong param_1,short param_2,short param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uStackX_c;
  short local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  local_res10 = param_2;
  if (lVar1 == 0) {
    return;
  }
  uVar8 = 0x1505;
  lVar7 = 2;
  uVar3 = 0x1505;
  lVar6 = 2;
  do {
    lVar2 = lVar6 + 3;
    lVar6 = lVar6 + -1;
    uVar3 = (ulonglong)*(byte *)((longlong)&uStackX_c + lVar2) + uVar3 * 0x1003f;
  } while (lVar6 != 0);
  uVar3 = *(ulonglong *)(lVar1 + 8) & uVar3;
  lVar6 = uVar3 * 3 + 2;
  puVar4 = (ulonglong *)(lVar1 + lVar6 * 8);
  if (*(longlong *)(lVar1 + lVar6 * 8) == -2) {
    return;
  }
  uVar5 = uVar3;
  if (puVar4[1] != uVar3) {
    return;
  }
  while ((puVar4[1] != uVar3 || ((short)puVar4[2] != param_2))) {
    uVar5 = *puVar4;
    if (uVar5 == 0xffffffffffffffff) {
      return;
    }
    puVar4 = (ulonglong *)(lVar1 + uVar5 * 0x18 + 0x10);
  }
  if ((longlong)uVar5 < 0) {
    return;
  }
  if (lVar1 + uVar5 * 0x18 + 0x20 == 0) {
    return;
  }
  local_res10 = param_3;
  if (lVar1 == 0) {
    return;
  }
  do {
    lVar6 = lVar7 + 3;
    lVar7 = lVar7 + -1;
    uVar8 = (ulonglong)*(byte *)((longlong)&uStackX_c + lVar6) + uVar8 * 0x1003f;
  } while (lVar7 != 0);
  uVar8 = *(ulonglong *)(lVar1 + 8) & uVar8;
  lVar6 = uVar8 * 3 + 2;
  puVar4 = (ulonglong *)(lVar1 + lVar6 * 8);
  if ((*(longlong *)(lVar1 + lVar6 * 8) != -2) && (uVar3 = uVar8, puVar4[1] == uVar8)) {
    while ((puVar4[1] != uVar8 || ((short)puVar4[2] != param_3))) {
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) {
        return;
      }
      puVar4 = (ulonglong *)(lVar1 + uVar3 * 0x18 + 0x10);
    }
    if ((-1 < (longlong)uVar3) && (lVar1 + uVar3 * 0x18 + 0x20 != 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0xe0) >> 6;
      uStackX_c = param_4;
      if (*(ulonglong *)(param_1 + 0xe8) <= uVar3) {
        FUN_1433ef1f0(param_1 + 0xd8,uVar3);
      }
      *(ulonglong *)
       (*(longlong *)(*(longlong *)(param_1 + 0xf8) + uVar3 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0xe0) & 0x3f) * 8) =
           CONCAT44(uStackX_c,CONCAT22(param_3,param_2));
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 1;
    }
  }
  return;
}



// FUNCTION 1433eba70 FUN_1433eba70 body=92 status=ok
// SIG undefined FUN_1433eba70(void)

void FUN_1433eba70(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  *(char *)((ulonglong)(uVar1 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar1 >> 0xc) * 8)) =
       (char)param_2;
  *(char *)((ulonglong)(uVar1 + 1 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar1 + 1 >> 0xc) * 8
            )) = (char)((uint)param_2 >> 8);
  return;
}



// FUNCTION 1433ebae0 FUN_1433ebae0 body=288 status=ok
// SIG undefined FUN_1433ebae0(void)

void FUN_1433ebae0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = iVar1 + 4;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)param_2;
  uVar2 = iVar1 + 5;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = iVar1 + 6;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)param_3;
  uVar2 = iVar1 + 7;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)((uint)param_3 >> 8);
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = iVar1 + 8;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)param_4;
  uVar2 = iVar1 + 9;
  *(char *)((ulonglong)(uVar2 & 0xfff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + (ulonglong)(uVar2 >> 0xc) * 8)) =
       (char)((uint)param_4 >> 8);
  return;
}



// FUNCTION 1433ebc10 FUN_1433ebc10 body=289 status=ok
// SIG undefined FUN_1433ebc10(void)

void FUN_1433ebc10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    do {
      uVar3 = (ulonglong)((uint)uVar4 & 0x3f);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (uVar4 >> 6) * 8);
      lVar1 = lVar2 + uVar3 * 8;
      FUN_1433eeb80(param_1 + 0x10,*(undefined2 *)(lVar2 + uVar3 * 8));
      FUN_1433ee9f0(param_1 + 0x10,(int)*(short *)(lVar1 + 2));
      FUN_1433eeec0(param_1 + 0x10,*(undefined4 *)(lVar1 + 4));
      uVar4 = (ulonglong)((uint)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)(param_1 + 0xb8));
  }
  FUN_1433ecc90(param_1 + 0xd8,0,*(undefined8 *)(param_1 + 0xe0),&LAB_1433ef310);
  FUN_1433eec20(param_1 + 0x10,*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    do {
      uVar4 = (ulonglong)((uint)uVar5 & 0x3f);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (uVar5 >> 6) * 8);
      lVar1 = lVar2 + uVar4 * 8;
      FUN_1433eeb80(param_1 + 0x10,*(undefined2 *)(lVar2 + uVar4 * 8));
      FUN_1433eeb80(param_1 + 0x10,*(undefined2 *)(lVar1 + 2));
      FUN_1433ee9f0(param_1 + 0x10,*(undefined4 *)(lVar1 + 4));
      uVar5 = (ulonglong)((uint)uVar5 + 1);
    } while (uVar5 < *(ulonglong *)(param_1 + 0xe0));
  }
  return;
}



// FUNCTION 1433ebd40 FUN_1433ebd40 body=257 status=ok
// SIG undefined FUN_1433ebd40(void)

uint FUN_1433ebd40(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  byte local_18 [16];
  
  uVar5 = 0;
  iVar3 = FUN_1433a0c50((longlong *)(param_1 + 0x18),param_2,local_res10);
  uVar6 = (int)param_2 + iVar3;
  local_res10[0] = local_res10[0] >> 1;
  if (local_res10[0] != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    do {
      pbVar7 = local_18;
      local_res10[0] = local_res10[0] - 1;
      local_18[0] = *(byte *)((ulonglong)(uVar6 & 0xfff) +
                             *(longlong *)(lVar2 + (ulonglong)(uVar6 >> 0xc) * 8));
      bVar1 = (&DAT_145b03fb8)[local_18[0] & 0xf];
      uVar8 = (ulonglong)bVar1;
      uVar4 = uVar6;
      if (bVar1 != 0) {
        do {
          pbVar7 = pbVar7 + 1;
          uVar4 = uVar4 + 1;
          *pbVar7 = *(byte *)((ulonglong)(uVar4 & 0xfff) +
                             *(longlong *)(lVar2 + (ulonglong)(uVar4 >> 0xc) * 8));
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar4 = bVar1 + 1;
      uVar6 = uVar6 + uVar4;
      if (uVar4 != 0) {
        pbVar7 = local_18;
        uVar8 = (ulonglong)uVar4;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar5 = uVar5 * 0x21 ^ (uint)bVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    } while (local_res10[0] != 0);
  }
  return uVar5;
}



// FUNCTION 1433ebe50 FUN_1433ebe50 body=413 status=ok
// SIG undefined FUN_1433ebe50(void)

undefined8 FUN_1433ebe50(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint local_res10 [4];
  uint local_res20 [2];
  byte local_58;
  undefined1 local_57 [15];
  byte local_48;
  undefined1 local_47 [15];
  
  iVar4 = FUN_1433a0c50((longlong *)(param_1 + 0x18),param_2,local_res10);
  uVar7 = (int)param_2 + iVar4;
  iVar4 = FUN_1433a0c50(param_3 + 0x18,param_4,local_res20);
  uVar11 = param_4 + iVar4;
  if (local_res10[0] != local_res20[0]) {
    return 0;
  }
  uVar10 = local_res10[0] >> 1;
  if (uVar10 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x20);
    do {
      uVar10 = uVar10 - 1;
      local_48 = *(byte *)((ulonglong)(uVar7 & 0xfff) +
                          *(longlong *)(lVar2 + (ulonglong)(uVar7 >> 0xc) * 8));
      bVar1 = (&DAT_145b03fb8)[local_48 & 0xf];
      if (bVar1 != 0) {
        uVar9 = (ulonglong)(uint)bVar1;
        puVar5 = local_47;
        uVar8 = uVar7;
        do {
          uVar8 = uVar8 + 1;
          *puVar5 = *(undefined1 *)
                     ((ulonglong)(uVar8 & 0xfff) +
                     *(longlong *)(lVar2 + (ulonglong)(uVar8 >> 0xc) * 8));
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar9 != 0);
      }
      uVar8 = bVar1 + 1;
      local_58 = *(byte *)((ulonglong)(uVar11 & 0xfff) +
                          *(longlong *)(lVar3 + (ulonglong)(uVar11 >> 0xc) * 8));
      bVar1 = (&DAT_145b03fb8)[local_58 & 0xf];
      if (bVar1 != 0) {
        uVar9 = (ulonglong)(uint)bVar1;
        puVar5 = local_57;
        uVar6 = uVar11;
        do {
          uVar6 = uVar6 + 1;
          *puVar5 = *(undefined1 *)
                     ((ulonglong)(uVar6 & 0xfff) +
                     *(longlong *)(lVar3 + (ulonglong)(uVar6 >> 0xc) * 8));
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar9 != 0);
      }
      uVar6 = bVar1 + 1;
      if (uVar8 != uVar6) {
        return 0;
      }
      iVar4 = _guard_xfg_dispatch_icall_nop(&local_48,&local_58,(ulonglong)uVar8);
      if (iVar4 != 0) {
        return 0;
      }
      uVar7 = uVar7 + uVar8;
      uVar11 = uVar11 + uVar6;
    } while (uVar10 != 0);
  }
  return 1;
}



// FUNCTION 1433ec000 FUN_1433ec000 body=99 status=ok
// SIG undefined FUN_1433ec000(void)

uint FUN_1433ec000(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = FUN_1433eca80();
  if (param_2 < uVar2) {
    do {
      uVar3 = param_2 & 0xfff;
      uVar1 = param_2 >> 0xc;
      param_2 = param_2 + 1;
      uVar4 = uVar4 * 0x21 ^
              (uint)*(byte *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) +
                               (ulonglong)uVar1 * 8) + (ulonglong)uVar3);
    } while (param_2 < uVar2);
  }
  return uVar4;
}



// FUNCTION 1433ec070 FUN_1433ec070 body=181 status=ok
// SIG undefined FUN_1433ec070(void)

ulonglong FUN_1433ec070(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_4;
  uVar1 = FUN_1433eca80();
  iVar2 = FUN_1433eca80(param_3,uVar4);
  uVar3 = (ulonglong)(iVar2 - param_4);
  if (uVar1 - param_2 == iVar2 - param_4) {
    if (param_2 < uVar1) {
      do {
        uVar3 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x18) + 0x20) + (uVar4 >> 0xc) * 8);
        if (*(char *)((ulonglong)(param_2 & 0xfff) +
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) +
                      (ulonglong)(param_2 >> 0xc) * 8)) != *(char *)(((uint)uVar4 & 0xfff) + uVar3))
        goto LAB_1433ec0b0;
        param_2 = param_2 + 1;
        uVar4 = (ulonglong)((uint)uVar4 + 1);
      } while (param_2 < uVar1);
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
LAB_1433ec0b0:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 1433ec130 FUN_1433ec130 body=1137 status=ok
// SIG undefined FUN_1433ec130(void)

void FUN_1433ec130(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 local_res8;
  undefined4 local_res10 [2];
  
  uVar13 = *(longlong *)(param_1 + 0x60) - 1;
  uVar11 = *(longlong *)(param_1 + 0x38) - 1;
  puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar13 >> 6) * 8) +
                   (ulonglong)((uint)uVar13 & 0x3f) * 8);
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + (uVar11 >> 6) * 8) +
                   (ulonglong)((uint)uVar11 & 0x3f) * 4);
  if ((uVar9 & 1) == 0) {
    uVar3 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(*puVar2 >> 6) * 8) +
             (ulonglong)(*puVar2 & 0x3f) * 4);
    local_res8._0_2_ = (ushort)uVar3;
    if (((ushort)local_res8 == (short)uVar9) &&
       ((short)((uint)uVar3 >> 0x10) == (short)(uVar9 >> 0x10))) {
      puVar2[1] = puVar2[1] - 1;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
      }
    }
  }
  uVar9 = puVar2[1];
  if (uVar9 < 3) {
    if ((ulonglong)*puVar2 < *(ulonglong *)(param_1 + 0x38)) {
      *(ulonglong *)(param_1 + 0x38) = (ulonglong)*puVar2;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + -1;
      return;
    }
  }
  else {
    uVar17 = *puVar2;
    lVar5 = *(longlong *)(param_1 + 0x50);
    uVar16 = 1;
    uVar8 = 1;
    uVar10 = 0;
    sVar15 = *(short *)(*(longlong *)(lVar5 + (ulonglong)(uVar17 >> 6) * 8) +
                       (ulonglong)(uVar17 & 0x3f) * 4) >> 1;
    sVar14 = *(short *)(*(longlong *)(lVar5 + (ulonglong)(uVar17 >> 6) * 8) + 2 +
                       (ulonglong)(uVar17 & 0x3f) * 4);
    if (1 < uVar9) {
      do {
        uVar12 = uVar17 + 1;
        uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 6) * 8) +
                         (ulonglong)(uVar12 & 0x3f) * 4);
        if ((uVar4 & 1) == 0) {
          sVar6 = (short)(uVar4 >> 0x10);
          local_res8._0_2_ = sVar15;
          if ((sVar6 < sVar14) ||
             ((sVar6 == sVar14 &&
              (local_res8._0_2_ = (ushort)uVar4, sVar6 = sVar14,
              (short)(ushort)local_res8 >> 1 < sVar15)))) {
            sVar15 = (ushort)local_res8;
            uVar10 = uVar8;
            sVar14 = sVar6;
          }
        }
        else {
          uVar8 = uVar8 + 1;
          uVar12 = uVar17 + 2;
        }
        uVar8 = uVar8 + 1;
        uVar17 = uVar12;
      } while (uVar8 < uVar9);
      if (uVar10 != 0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        lVar1 = param_1 + 0x80;
        uVar11 = *(ulonglong *)(param_1 + 0x88) >> 6;
        local_res8 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(*puVar2 + uVar10 >> 6) * 8) +
                              (ulonglong)(*puVar2 + uVar10 & 0x3f) * 4) & 0xfffffffe;
        if (*(ulonglong *)(param_1 + 0x90) <= uVar11) {
          FUN_1433ef280(lVar1,uVar11);
        }
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x88) & 0x3f) * 4) = local_res8;
        *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
        if (1 < puVar2[1]) {
          do {
            uVar17 = uVar10 + 1;
            uVar9 = uVar17 % puVar2[1] + *puVar2;
            uVar9 = *(uint *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar9 >> 6) * 8) +
                             (ulonglong)(uVar9 & 0x3f) * 4);
            local_res8 = uVar9;
            if ((uVar9 & 1) == 0) {
              uVar11 = *(longlong *)(param_1 + 0x88) - 1;
              local_res8._0_2_ = (ushort)uVar9;
              if ((((*(ushort *)
                      (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (uVar11 >> 6) * 8) +
                      (ulonglong)((uint)uVar11 & 0x3f) * 4) ^ (ushort)local_res8) & 0xfffe) != 0) ||
                 (uVar11 = *(longlong *)(param_1 + 0x88) - 1,
                 local_res8._2_2_ = (short)(uVar9 >> 0x10),
                 bVar18 = local_res8._2_2_ !=
                          *(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0xa0) + (uVar11 >> 6) * 8) + 2 +
                                    (ulonglong)((uint)uVar11 & 0x3f) * 4), uVar10 = uVar17, bVar18))
              {
                uVar11 = *(ulonglong *)(param_1 + 0x88) >> 6;
                if (*(ulonglong *)(param_1 + 0x90) <= uVar11) {
                  FUN_1433ef280(lVar1);
                }
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 8) +
                         (ulonglong)(*(uint *)(param_1 + 0x88) & 0x3f) * 4) = uVar9;
                goto LAB_1433ec46c;
              }
            }
            else {
              uVar17 = uVar10 + 2;
              uVar11 = *(ulonglong *)(param_1 + 0x88) >> 6;
              uVar16 = uVar16 + 1;
              uVar10 = uVar17 % puVar2[1] + *puVar2;
              uVar3 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar10 >> 6) * 8)
                       + (ulonglong)(uVar10 & 0x3f) * 4);
              if (*(ulonglong *)(param_1 + 0x90) <= uVar11) {
                FUN_1433ef280(lVar1);
              }
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 8) +
                       (ulonglong)(*(uint *)(param_1 + 0x88) & 0x3f) * 4) = uVar9;
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
              uVar11 = *(ulonglong *)(param_1 + 0x88) >> 6;
              if (*(ulonglong *)(param_1 + 0x90) <= uVar11) {
                FUN_1433ef280(lVar1);
              }
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x88) & 0x3f) * 4) = uVar3;
LAB_1433ec46c:
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
              uVar10 = uVar17;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < puVar2[1]);
        }
        uVar11 = 0;
        if ((ulonglong)*puVar2 < *(ulonglong *)(param_1 + 0x38)) {
          *(ulonglong *)(param_1 + 0x38) = (ulonglong)*puVar2;
        }
        if (*(longlong *)(param_1 + 0x88) != 0) {
          do {
            uVar9 = (uint)uVar11;
            uVar13 = *(ulonglong *)(param_1 + 0x38) >> 6;
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (uVar11 >> 6) * 8);
            if (*(ulonglong *)(param_1 + 0x40) <= uVar13) {
              if (*(ulonglong *)(param_1 + 0x48) <= uVar13) {
                if (*(longlong *)(param_1 + 0x50) == 0) {
                  local_res8 = 0x105;
                  uVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x200,&local_res8);
                }
                else {
                  uVar7 = (**(code **)(*DAT_146b62f28 + 0x58))
                                    (DAT_146b62f28,*(longlong *)(param_1 + 0x50),
                                     *(ulonglong *)(param_1 + 0x48) * 8 + 0x200);
                }
                *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x40;
                *(undefined8 *)(param_1 + 0x50) = uVar7;
              }
              local_res10[0] = 0x105;
              uVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x100,local_res10);
              *(undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar13 * 8) = uVar7;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
            }
            uVar11 = (ulonglong)(uVar9 + 1);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar13 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x38) & 0x3f) * 4) =
                 *(undefined4 *)(lVar5 + (ulonglong)(uVar9 & 0x3f) * 4);
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
          } while (uVar11 < *(ulonglong *)(param_1 + 0x88));
        }
        puVar2[1] = *(uint *)(param_1 + 0x88);
      }
    }
  }
  return;
}



// FUNCTION 1433ec5b0 FUN_1433ec5b0 body=1223 status=ok
// SIG undefined FUN_1433ec5b0(void)

void FUN_1433ec5b0(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar12;
  
  piVar5 = param_5;
  *param_2 = 0x3fff;
  *param_3 = 0x3fff;
  *param_4 = -0x3fff;
  uVar10 = 0;
  *param_5 = -0x3fff;
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      uVar13 = (ulonglong)((uint)uVar10 & 0x3f);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (uVar10 >> 6) * 8);
      uVar12 = *(uint *)(lVar2 + uVar13 * 8);
      uVar6 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar12 >> 6) * 8) +
               (ulonglong)(uVar12 & 0x3f) * 4);
      param_5._2_2_ = (short)((uint)uVar6 >> 0x10);
      iVar8 = (int)param_5._2_2_;
      iVar7 = (int)(short)((short)uVar6 >> 1);
      if (iVar7 < *param_2) {
        *param_2 = iVar7;
      }
      if (iVar8 < *param_3) {
        *param_3 = iVar8;
      }
      if (*param_4 < iVar7) {
        *param_4 = iVar7;
      }
      if (*piVar5 < iVar8) {
        *piVar5 = iVar8;
      }
      uVar14 = 1;
      uVar12 = (uint)uVar10;
      if (1 < *(uint *)(lVar2 + 4 + uVar13 * 8)) {
        do {
          iVar9 = *(int *)(lVar2 + uVar13 * 8);
          uVar12 = iVar9 + uVar14;
          uVar10 = (ulonglong)(uVar12 & 0x3f);
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar12 >> 6) * 8);
          uVar1 = *(ushort *)(lVar3 + uVar10 * 4);
          if ((uVar1 & 1) == 0) {
            uVar6 = *(undefined4 *)(lVar3 + uVar10 * 4);
          }
          else {
            uVar14 = uVar14 + 1;
            fVar22 = (float)iVar7;
            uVar12 = iVar9 + uVar14;
            uVar15 = (ulonglong)(uVar12 & 0x3f);
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar12 >> 6) * 8);
            fVar20 = (float)(int)((short)uVar1 >> 1);
            fVar21 = (float)(int)(*(short *)(lVar4 + uVar15 * 4) >> 1);
            fVar16 = ((fVar20 + fVar20) - fVar22) - fVar21;
            if (((fVar16 != 0.0) && (fVar16 = (fVar20 - fVar22) / fVar16, 0.0 < fVar16)) &&
               (fVar16 < 1.0)) {
              fVar18 = (float)(int)*(short *)(lVar3 + 2 + uVar10 * 4);
              fVar19 = (fVar20 - fVar22) * fVar16 + fVar22;
              fVar17 = (fVar18 - (float)iVar8) * fVar16 + (float)iVar8;
              fVar17 = _guard_xfg_dispatch_icall_nop
                                 (((((float)(int)*(short *)(lVar4 + 2 + uVar15 * 4) - fVar18) *
                                    fVar16 + fVar18) - fVar17) * fVar16 + fVar17);
              iVar9 = (int)(fVar17 + 0.5);
              fVar16 = _guard_xfg_dispatch_icall_nop
                                 ((((fVar21 - fVar20) * fVar16 + fVar20) - fVar19) * fVar16 + fVar19
                                 );
              iVar7 = (int)(fVar16 + 0.5);
              if (iVar7 < *param_2) {
                *param_2 = iVar7;
              }
              if (iVar9 < *param_3) {
                *param_3 = iVar9;
              }
              if (*param_4 < iVar7) {
                *param_4 = iVar7;
              }
              if (*piVar5 < iVar9) {
                *piVar5 = iVar9;
              }
            }
            fVar20 = (float)iVar8;
            fVar21 = (float)(int)*(short *)(lVar3 + 2 + uVar10 * 4);
            fVar17 = (float)(int)*(short *)(lVar4 + 2 + uVar15 * 4);
            fVar16 = ((fVar21 + fVar21) - fVar20) - fVar17;
            if (((fVar16 != 0.0) && (fVar16 = (fVar21 - fVar20) / fVar16, 0.0 < fVar16)) &&
               (fVar16 < 1.0)) {
              fVar18 = (float)(int)(*(short *)(lVar3 + uVar10 * 4) >> 1);
              fVar20 = (fVar21 - fVar20) * fVar16 + fVar20;
              fVar22 = (fVar18 - fVar22) * fVar16 + fVar22;
              fVar20 = _guard_xfg_dispatch_icall_nop
                                 ((((fVar17 - fVar21) * fVar16 + fVar21) - fVar20) * fVar16 + fVar20
                                 );
              iVar8 = (int)(fVar20 + 0.5);
              fVar16 = _guard_xfg_dispatch_icall_nop
                                 (((((float)(int)(*(short *)(lVar4 + uVar15 * 4) >> 1) - fVar18) *
                                    fVar16 + fVar18) - fVar22) * fVar16 + fVar22);
              iVar7 = (int)(fVar16 + 0.5);
              if (iVar7 < *param_2) {
                *param_2 = iVar7;
              }
              if (iVar8 < *param_3) {
                *param_3 = iVar8;
              }
              if (*param_4 < iVar7) {
                *param_4 = iVar7;
              }
              if (*piVar5 < iVar8) {
                *piVar5 = iVar8;
              }
            }
            uVar6 = *(undefined4 *)(lVar4 + uVar15 * 4);
          }
          param_5._2_2_ = (short)((uint)uVar6 >> 0x10);
          iVar8 = (int)param_5._2_2_;
          iVar7 = (int)(short)((short)uVar6 >> 1);
          if (iVar7 < *param_2) {
            *param_2 = iVar7;
          }
          if (iVar8 < *param_3) {
            *param_3 = iVar8;
          }
          if (*param_4 < iVar7) {
            *param_4 = iVar7;
          }
          if (*piVar5 < iVar8) {
            *piVar5 = iVar8;
          }
          uVar14 = uVar14 + 1;
          uVar12 = uVar11;
        } while (uVar14 < *(uint *)(lVar2 + 4 + uVar13 * 8));
      }
      uVar11 = uVar12 + 1;
      uVar10 = (ulonglong)uVar11;
    } while (uVar10 < *(ulonglong *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 1433eca80 FUN_1433eca80 body=514 status=ok
// SIG undefined FUN_1433eca80(void)

uint FUN_1433eca80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  param_2 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                 *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0)
                      + 1;
  param_2 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                 *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0)
                      + 1;
  param_2 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                 *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0)
                      + 1;
  param_2 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                 *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0)
                      + 1;
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(*plVar1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8) +
                   (ulonglong)(param_2 & 0xfff));
  if ((bVar2 & 1) == 0) {
    uVar6 = (uint)(bVar2 >> 1);
    iVar4 = 1;
  }
  else {
    uVar6 = (uint)*(byte *)(*(longlong *)
                             (*(longlong *)(*plVar1 + 0x20) + (ulonglong)(param_2 + 1 >> 0xc) * 8) +
                           (ulonglong)(param_2 + 1 & 0xfff)) << 7 | (uint)(bVar2 >> 1);
    iVar4 = 2;
  }
  param_2 = param_2 + iVar4;
  while (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    param_2 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                   *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0
                        ) + 1;
    iVar5 = param_2 + ((*(byte *)((ulonglong)(param_2 & 0xfff) +
                                 *(longlong *)(lVar3 + (ulonglong)(param_2 >> 0xc) * 8)) & 1) != 0)
                      + 1;
    iVar4 = FUN_1433a0c50(plVar1,iVar5,local_res10);
    param_2 = iVar5 + iVar4;
    if ((local_res10[0] & 1) == 0) {
      local_res10[0] = local_res10[0] >> 1;
      if (local_res10[0] != 0) {
        do {
          local_res10[0] = local_res10[0] - 1;
          bVar2 = (&DAT_145b03fb8)
                  [*(byte *)((ulonglong)(param_2 & 0xfff) +
                            *(longlong *)
                             (*(longlong *)(*plVar1 + 0x20) + (ulonglong)(param_2 >> 0xc) * 8)) &
                   0xf];
          if (bVar2 != 0) {
            uVar7 = (ulonglong)(uint)bVar2;
            do {
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          param_2 = param_2 + 1 + (uint)bVar2;
        } while (local_res10[0] != 0);
      }
      local_res10[0] = 0xffffffff;
    }
  }
  return param_2;
}



// FUNCTION 1433ecc90 FUN_1433ecc90 body=1062 status=ok
// SIG undefined FUN_1433ecc90(void)

void FUN_1433ecc90(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar16 = local_2b8;
    local_res10 = param_3;
LAB_1433eccdb:
    while (uVar13 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar13 = local_res10 - 1;
      uVar15 = param_2 + 1;
      uVar11 = (longlong)(local_res10 - param_2) / 2 + param_2;
      puVar12 = (undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 6) * 8) +
                (ulonglong)((uint)uVar11 & 0x3f) * 8);
      lVar2 = (param_2 >> 6) * 8;
      lVar7 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      uVar11 = (ulonglong)((uint)param_2 & 0x3f);
      lVar3 = uVar11 * 8;
      uVar8 = *(undefined8 *)(lVar7 + uVar11 * 8);
      *(undefined8 *)(lVar7 + lVar3) = *puVar12;
      *puVar12 = uVar8;
      lVar7 = (uVar15 >> 6) * 8;
      lVar4 = (ulonglong)((uint)uVar15 & 0x3f) * 8;
      lVar5 = (uVar13 >> 6) * 8;
      lVar6 = (ulonglong)((uint)uVar13 & 0x3f) * 8;
      cVar10 = (*param_4)(*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)) + lVar6,
                          *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar9 + lVar4);
        *(undefined8 *)(lVar9 + lVar4) = uVar8;
      }
      cVar10 = (*param_4)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20)) + lVar3,
                          *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7));
        uVar8 = *(undefined8 *)(lVar9 + lVar3);
        *(undefined8 *)(lVar9 + lVar3) = *puVar12;
        *puVar12 = uVar8;
      }
      cVar10 = (*param_4)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
      if (cVar10 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar7 + lVar3);
        *(undefined8 *)(lVar7 + lVar3) = uVar8;
      }
      while( true ) {
        do {
          uVar15 = uVar15 + 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 6) * 8) +
                              (ulonglong)((uint)uVar15 & 0x3f) * 8,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
        } while (cVar10 != '\0');
        do {
          uVar13 = uVar13 - 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar13 >> 6) * 8) +
                              (ulonglong)((uint)uVar13 & 0x3f) * 8);
        } while (cVar10 != '\0');
        lVar7 = *(longlong *)(param_1 + 0x20);
        puVar12 = (undefined8 *)
                  (*(longlong *)(lVar7 + (uVar13 >> 6) * 8) + (ulonglong)((uint)uVar13 & 0x3f) * 8);
        if ((longlong)uVar13 < (longlong)uVar15) break;
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar7 + (uVar15 >> 6) * 8) + (ulonglong)((uint)uVar15 & 0x3f) * 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar8;
      }
      uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3);
      *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3) = *puVar12;
      *puVar12 = uVar8;
      if ((longlong)(local_res10 - uVar15) < (longlong)(uVar13 - param_2)) {
        *puVar16 = param_2;
        puVar16[1] = uVar13;
        puVar16 = puVar16 + 2;
        param_2 = uVar15;
      }
      else {
        puVar16[1] = local_res10;
        *puVar16 = uVar15;
        puVar16 = puVar16 + 2;
        local_res10 = uVar13;
      }
    }
joined_r0x0001433ecf74:
    uVar15 = uVar13 + 1;
    if ((longlong)uVar15 < (longlong)local_res10) {
      lVar2 = (uVar13 >> 6) * 8;
      lVar3 = (ulonglong)((uint)uVar13 & 0x3f) * 8;
      uVar11 = uVar13 + 1;
      cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 6) * 8) +
                          (ulonglong)((uint)uVar11 & 0x3f) * 8,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
      while (uVar13 = uVar15, cVar10 != '\0') {
        uVar14 = uVar11 - 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 6) * 8) +
                  (ulonglong)((uint)uVar11 & 0x3f) * 8);
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar2 + lVar3);
        *(undefined8 *)(lVar2 + lVar3) = uVar8;
        if (uVar14 == param_2) break;
        lVar2 = (uVar11 - 2 >> 6) * 8;
        lVar3 = (ulonglong)((uint)(uVar11 - 2) & 0x3f) * 8;
        cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar14 >> 6) * 8) +
                            (ulonglong)((uint)uVar14 & 0x3f) * 8,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
        uVar11 = uVar14;
      }
      goto joined_r0x0001433ecf74;
    }
    if (local_2b8 < puVar16) {
      local_res10 = puVar16[-1];
      puVar16 = puVar16 + -2;
      param_2 = *puVar16;
      goto LAB_1433eccdb;
    }
  }
  return;
}



// FUNCTION 1433ed0c0 FUN_1433ed0c0 body=338 status=ok
// SIG undefined FUN_1433ed0c0(void)

void FUN_1433ed0c0(longlong *param_1,undefined8 param_2,undefined2 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433ed114;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1433ef330(param_1,param_2,lVar10);
LAB_1433ed114:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined2 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1433ed220 FUN_1433ed220 body=321 status=ok
// SIG undefined FUN_1433ed220(void)

void FUN_1433ed220(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1433ed274;
    lVar7 = plVar1[1] * 2 + 2;
  }
  FUN_1433ef480(param_1,param_2,lVar7);
LAB_1433ed274:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar8 = param_4 * 0x20 + lVar7;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    uVar10 = *param_3;
    uVar11 = param_3[1];
    uVar12 = param_3[2];
    uVar13 = param_3[3];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar9 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar4;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar7 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar4;
      *puVar6 = uVar5;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  *(undefined4 *)(lVar8 + 0x20) = uVar10;
  *(undefined4 *)(lVar8 + 0x24) = uVar11;
  *(undefined4 *)(lVar8 + 0x28) = uVar12;
  *(undefined4 *)(lVar8 + 0x2c) = uVar13;
  return;
}



// FUNCTION 1433ed370 FUN_1433ed370 body=160 status=ok
// SIG undefined FUN_1433ed370(void)

longlong FUN_1433ed370(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar2 != -2) && (lVar3 = param_3, plVar2[1] == param_3)) {
    while( true ) {
      if ((plVar2[1] == param_3) &&
         (cVar1 = FUN_1433ec070(plVar2[2],*(undefined4 *)((longlong)plVar2 + 0x1c),*param_2,
                                *(undefined4 *)((longlong)param_2 + 0xc)), cVar1 != '\0')) {
        return lVar3;
      }
      lVar3 = *plVar2;
      if (lVar3 == -1) break;
      plVar2 = (longlong *)(*param_1 + 0x10 + lVar3 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 1433ed410 operator() body=41 status=ok
// SIG undefined operator()(void)

longlong Scaleform::FixedSizeHash<unsigned_short>::operator()(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 2;
  lVar2 = 0x1505;
  do {
    lVar1 = lVar3 + -1;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 * 0x1003f + (ulonglong)*(byte *)(lVar1 + param_2);
  } while (lVar3 != 0);
  return lVar2;
}



// FUNCTION 1433ed440 FUN_1433ed440 body=89 status=ok
// SIG undefined FUN_1433ed440(void)

undefined8 FUN_1433ed440(undefined8 param_1,ulonglong param_2)

{
  FUN_1433ea7f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1433ed4a0 FUN_1433ed4a0 body=126 status=ok
// SIG undefined FUN_1433ed4a0(void)

void FUN_1433ed4a0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x10) + -1) * 8);
    do {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (*plVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      plVar1 = plVar1 + -1;
    } while (*(longlong *)(param_1 + 0x10) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1433ed520 FUN_1433ed520 body=356 status=ok
// SIG undefined FUN_1433ed520(void)

undefined8 FUN_1433ed520(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  bVar3 = (char)param_2 << 4;
  uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
  uVar2 = (undefined1)(param_2 >> 4);
  if (param_2 + 0x800U < 0x1000) {
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = bVar3;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(undefined1 *)
     ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
     *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = uVar2;
    uVar1 = 2;
  }
  else {
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = bVar3 | 1;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(undefined1 *)
     ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
     *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = uVar2;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar4 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
      FUN_1433ef150(lVar5,uVar4);
    }
    *(char *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar4 * 8)) = (char)(param_2 >> 0xc);
    uVar1 = 3;
  }
  *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
  return uVar1;
}



// FUNCTION 1433ed690 FUN_1433ed690 body=1055 status=ok
// SIG undefined FUN_1433ed690(void)

undefined8 FUN_1433ed690(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar3;
  
  cVar2 = (char)param_2;
  cVar7 = (char)param_3;
  bVar3 = (byte)(param_2 >> 4);
  if ((param_2 + 0x20U < 0x40) && (param_3 + 0x20U < 0x40)) {
    lVar5 = *param_1;
    uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
      FUN_1433ef150(lVar5,uVar6);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = cVar2 << 4 | 4;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
    lVar5 = *param_1;
    uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
      FUN_1433ef150(lVar5,uVar6);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar3 & 3 | cVar7 << 2;
    uVar1 = 2;
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
  }
  else {
    uVar8 = (undefined1)(param_3 >> 2);
    if ((param_2 + 0x200U < 0x400) && (param_3 + 0x200U < 0x400)) {
      lVar5 = *param_1;
      uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
      if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
        FUN_1433ef150(lVar5,uVar6);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = cVar2 << 4 | 5;
      *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
      lVar5 = *param_1;
      uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
      if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
        FUN_1433ef150(lVar5,uVar6);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar3 & 0x3f | cVar7 << 6;
      *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
      lVar5 = *param_1;
      uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
      if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
        FUN_1433ef150(lVar5,uVar6);
      }
      *(undefined1 *)
       ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
       *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = uVar8;
      uVar1 = 3;
    }
    else {
      bVar4 = (byte)(param_2 >> 0xc);
      if ((param_2 + 0x2000U < 0x4000) && (param_3 + 0x2000U < 0x4000)) {
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = cVar2 << 4 | 6;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar3;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar4 & 3 | cVar7 << 2;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(char *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = (char)(param_3 >> 6);
        uVar1 = 4;
      }
      else {
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = cVar2 << 4 | 7;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar3;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = bVar4 & 0x3f | cVar7 << 6
        ;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(undefined1 *)
         ((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
         *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = uVar8;
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
        lVar5 = *param_1;
        uVar6 = *(ulonglong *)(lVar5 + 8) >> 0xc;
        if (*(ulonglong *)(lVar5 + 0x10) <= uVar6) {
          FUN_1433ef150(lVar5,uVar6);
        }
        *(char *)((ulonglong)(*(uint *)(lVar5 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8)) = (char)(param_3 >> 10);
        uVar1 = 5;
      }
    }
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 1;
  }
  return uVar1;
}



// FUNCTION 1433edab0 FUN_1433edab0 body=3659 status=ok
// SIG undefined FUN_1433edab0(void)

undefined8 FUN_1433edab0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  char cVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  char cVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  ulonglong uVar21;
  byte bVar14;
  
  iVar2 = param_2;
  if (param_2 < param_3) {
    iVar2 = param_3;
  }
  iVar4 = param_2;
  if (param_3 < param_2) {
    iVar4 = param_3;
  }
  if (param_4 < iVar4) {
    iVar4 = param_4;
  }
  if (iVar2 < param_4) {
    iVar2 = param_4;
  }
  if (param_5 < iVar4) {
    iVar4 = param_5;
  }
  if (iVar2 < param_5) {
    iVar2 = param_5;
  }
  cVar13 = (char)param_2;
  cVar10 = (char)param_5;
  cVar5 = (char)param_3;
  bVar14 = (byte)(param_2 >> 4);
  cVar1 = (char)param_4;
  bVar16 = (byte)(param_4 >> 2);
  if ((iVar4 < -0x10) || (0xf < iVar2)) {
    bVar6 = (byte)(param_3 >> 5);
    bVar17 = (byte)(param_4 >> 6);
    if ((iVar4 < -0x40) || (0x3f < iVar2)) {
      uVar11 = (undefined1)(param_5 >> 1);
      bVar7 = (byte)(param_3 >> 3);
      if ((iVar4 < -0x100) || (0xff < iVar2)) {
        uVar20 = (undefined1)(param_3 >> 1);
        bVar8 = (byte)(param_3 >> 9);
        uVar12 = (undefined1)(param_5 >> 3);
        if ((iVar4 < -0x400) || (0x3ff < iVar2)) {
          bVar15 = (byte)(param_2 >> 0xc);
          bVar18 = (byte)(param_4 >> 10);
          if ((iVar4 < -0x1000) || (0xfff < iVar2)) {
            bVar19 = (byte)(param_4 >> 0xe);
            if ((iVar4 < -0x4000) || (0x3fff < iVar2)) {
              if ((iVar4 < -0x10000) || (0xffff < iVar2)) {
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     cVar13 << 4 | 0xf;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar14;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     bVar15 & 0x7f | cVar5 << 7;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(undefined1 *)
                 ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar20;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar8;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     (byte)(param_3 >> 0x11) & 3 | cVar1 << 2;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar17;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     bVar19 & 0x1f | cVar10 << 5;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(undefined1 *)
                 ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar12;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(char *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     (char)(param_5 >> 0xb);
                uVar3 = 10;
              }
              else {
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     cVar13 << 4 | 0xe;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar14;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     bVar15 & 0x1f | cVar5 << 5;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar7;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     (byte)(param_3 >> 0xb) & 0x3f | cVar1 << 6;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar16;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     bVar18 & 0x7f | cVar10 << 7;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(undefined1 *)
                 ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar11;
                *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
                lVar9 = *param_1;
                uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
                if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                  FUN_1433ef150(lVar9,uVar21);
                }
                *(char *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                     (char)(param_5 >> 9);
                uVar3 = 9;
              }
            }
            else {
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 0xd;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar14;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                   bVar15 & 7 | cVar5 << 3;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar6;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                   (byte)(param_3 >> 0xd) & 3 | cVar1 << 2;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar17;
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                   bVar19 & 1 | cVar10 * '\x02';
              *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
              lVar9 = *param_1;
              uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
              if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
                FUN_1433ef150(lVar9,uVar21);
              }
              *(char *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                   (char)(param_5 >> 7);
              uVar3 = 8;
            }
          }
          else {
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 0xc;
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar14;
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                 bVar15 & 1 | cVar5 * '\x02';
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                 (byte)(param_3 >> 7) & 0x3f | cVar1 << 6;
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar16;
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
                 bVar18 & 7 | cVar10 << 3;
            *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
            lVar9 = *param_1;
            uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
            if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
              FUN_1433ef150(lVar9,uVar21);
            }
            *(char *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                     *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = (char)(param_5 >> 5)
            ;
            uVar3 = 7;
          }
        }
        else {
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                   *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 0xb;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                   *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
               cVar5 << 7 | bVar14 & 0x7f;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(undefined1 *)
           ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar20;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                   *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar8 & 3 | cVar1 << 2
          ;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                   *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
               bVar17 & 0x1f | cVar10 << 5;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
          lVar9 = *param_1;
          uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
            FUN_1433ef150(lVar9,uVar21);
          }
          *(undefined1 *)
           ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar12;
          uVar3 = 6;
        }
      }
      else {
        lVar9 = *param_1;
        uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
          FUN_1433ef150(lVar9,uVar21);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 10;
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        lVar9 = *param_1;
        uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
          FUN_1433ef150(lVar9,uVar21);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
             cVar5 << 5 | bVar14 & 0x1f;
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        lVar9 = *param_1;
        uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
          FUN_1433ef150(lVar9,uVar21);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
             bVar7 & 0x3f | cVar1 << 6;
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        lVar9 = *param_1;
        uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
          FUN_1433ef150(lVar9,uVar21);
        }
        *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
                 *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
             cVar10 << 7 | bVar16 & 0x7f;
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
        lVar9 = *param_1;
        uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
        if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
          FUN_1433ef150(lVar9,uVar21);
        }
        *(undefined1 *)
         ((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
         *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = uVar11;
        uVar3 = 5;
      }
    }
    else {
      lVar9 = *param_1;
      uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
      if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
        FUN_1433ef150(lVar9,uVar21);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 9;
      *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
      lVar9 = *param_1;
      uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
      if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
        FUN_1433ef150(lVar9,uVar21);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar5 << 3 | bVar14 & 7;
      *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
      lVar9 = *param_1;
      uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
      if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
        FUN_1433ef150(lVar9,uVar21);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = bVar6 & 3 | cVar1 << 2;
      *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
      lVar9 = *param_1;
      uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
      if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
        FUN_1433ef150(lVar9,uVar21);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
           bVar17 & 1 | cVar10 * '\x02';
      uVar3 = 4;
    }
  }
  else {
    lVar9 = *param_1;
    uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
    if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
      FUN_1433ef150(lVar9,uVar21);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar13 << 4 | 8;
    *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
    lVar9 = *param_1;
    uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
    if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
      FUN_1433ef150(lVar9,uVar21);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) =
         cVar5 * '\x02' & 0x3fU | bVar14 & 1 | cVar1 << 6;
    *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
    lVar9 = *param_1;
    uVar21 = *(ulonglong *)(lVar9 + 8) >> 0xc;
    if (*(ulonglong *)(lVar9 + 0x10) <= uVar21) {
      FUN_1433ef150(lVar9,uVar21);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar9 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8)) = cVar10 << 3 | bVar16 & 7;
    uVar3 = 3;
  }
  *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 1;
  return uVar3;
}



// FUNCTION 1433ee900 FUN_1433ee900 body=239 status=ok
// SIG undefined FUN_1433ee900(void)

undefined8 FUN_1433ee900(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 8) >> 0xc;
  if (param_2 + 0x40U < 0x80) {
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(char *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)param_2 * '\x02';
    uVar1 = 1;
  }
  else {
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)param_2 * '\x02' | 1;
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
    lVar2 = *param_1;
    uVar3 = *(ulonglong *)(lVar2 + 8) >> 0xc;
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(char *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)(param_2 >> 7);
    uVar1 = 2;
  }
  *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
  return uVar1;
}



// FUNCTION 1433ee9f0 FUN_1433ee9f0 body=157 status=ok
// SIG undefined FUN_1433ee9f0(void)

void FUN_1433ee9f0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)param_2;
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)((uint)param_2 >> 8);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  return;
}



// FUNCTION 1433eea90 FUN_1433eea90 body=236 status=ok
// SIG undefined FUN_1433eea90(void)

undefined8 FUN_1433eea90(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 8) >> 0xc;
  if (param_2 < 0x80) {
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(char *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)param_2 * '\x02';
    uVar1 = 1;
  }
  else {
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(byte *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)param_2 * '\x02' | 1;
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
    lVar2 = *param_1;
    uVar3 = *(ulonglong *)(lVar2 + 8) >> 0xc;
    if (*(ulonglong *)(lVar2 + 0x10) <= uVar3) {
      FUN_1433ef150(lVar2,uVar3);
    }
    *(char *)((ulonglong)(*(uint *)(lVar2 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8)) = (char)(param_2 >> 7);
    uVar1 = 2;
  }
  *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
  return uVar1;
}



// FUNCTION 1433eeb80 FUN_1433eeb80 body=157 status=ok
// SIG undefined FUN_1433eeb80(void)

void FUN_1433eeb80(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)param_2;
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)((uint)param_2 >> 8);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  return;
}



// FUNCTION 1433eec20 FUN_1433eec20 body=661 status=ok
// SIG undefined FUN_1433eec20(void)

undefined8 FUN_1433eec20(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  
  if (param_2 < 0x40) {
    lVar3 = *param_1;
    uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
    if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
      FUN_1433ef150(lVar3,uVar2);
    }
    *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
             *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)param_2 << 2;
    uVar1 = 1;
  }
  else {
    lVar3 = *param_1;
    bVar4 = (char)param_2 << 2;
    uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
    if (param_2 < 0x4000) {
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = bVar4 | 1;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 6);
      uVar1 = 2;
    }
    else if (param_2 < 0x400000) {
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = bVar4 | 2;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 6);
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 0xe);
      uVar1 = 3;
    }
    else {
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(byte *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = bVar4 | 3;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 6);
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 0xe);
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
      lVar3 = *param_1;
      uVar2 = *(ulonglong *)(lVar3 + 8) >> 0xc;
      if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
        FUN_1433ef150(lVar3,uVar2);
      }
      *(char *)((ulonglong)(*(uint *)(lVar3 + 8) & 0xfff) +
               *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8)) = (char)(param_2 >> 0x16);
      uVar1 = 4;
    }
  }
  *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
  return uVar1;
}



// FUNCTION 1433eeec0 FUN_1433eeec0 body=283 status=ok
// SIG undefined FUN_1433eeec0(void)

void FUN_1433eeec0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)param_2;
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)((uint)param_2 >> 8);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)((uint)param_2 >> 0x10);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 8) >> 0xc;
  if (*(ulonglong *)(lVar1 + 0x10) <= uVar2) {
    FUN_1433ef150(lVar1,uVar2);
  }
  *(char *)((ulonglong)(*(uint *)(lVar1 + 8) & 0xfff) +
           *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 8)) = (char)((uint)param_2 >> 0x18);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 1;
  return;
}


