// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438d0970 FUN_1438d0970 body=284 status=ok
// SIG undefined FUN_1438d0970(void)

void FUN_1438d0970(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiBalconyVaultAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar2 + 0x24 + param_2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar2 + 0x28 + param_2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c + param_2);
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x30 + param_2);
        *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x34 + param_2);
        *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar2 + 0x38 + param_2);
        *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar2 + 0x3c + param_2);
        *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar2 + 0x40 + param_2);
        *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar2 + 0x44 + param_2);
        *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar2 + 0x48 + param_2);
      }
      lVar2 = lVar2 + 0x58;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d0a90 FUN_1438d0a90 body=18 status=ok
// SIG undefined FUN_1438d0a90(void)

undefined8 * FUN_1438d0a90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468298e0;
  return param_2;
}



// FUNCTION 1438d0ab0 FUN_1438d0ab0 body=18 status=ok
// SIG undefined FUN_1438d0ab0(void)

undefined8 * FUN_1438d0ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829940;
  return param_2;
}



// FUNCTION 1438d0ad0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438d7550(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d0b10 FUN_1438d0b10 body=18 status=ok
// SIG undefined FUN_1438d0b10(void)

undefined8 * FUN_1438d0b10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468299a0;
  return param_2;
}



// FUNCTION 1438d0b30 FUN_1438d0b30 body=51 status=ok
// SIG undefined FUN_1438d0b30(void)

undefined1 FUN_1438d0b30(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704540(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704540(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438d0bd0 FUN_1438d0bd0 body=236 status=ok
// SIG undefined FUN_1438d0bd0(void)

void FUN_1438d0bd0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiJumpAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24 + lVar2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c + lVar2);
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d0d00 FUN_1438d0d00 body=136 status=ok
// SIG undefined FUN_1438d0d00(void)

longlong FUN_1438d0d00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438d1680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1438d0e00 FUN_1438d0e00 body=241 status=ok
// SIG undefined FUN_1438d0e00(void)

void FUN_1438d0e00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiDropDownAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24 + lVar2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c + lVar2);
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x30 + param_2);
        *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x34 + param_2);
      }
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d0f10 FUN_1438d0f10 body=267 status=ok
// SIG undefined FUN_1438d0f10(void)

void FUN_1438d0f10(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int local_res18 [2];
  int local_res20 [2];
  
  if (0 < param_3) {
    piVar5 = (int *)(param_1 + 0x1c);
    lVar6 = (longlong)param_3;
    do {
      piVar1 = piVar5 + -7;
      if (piVar1 != (int *)0x0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar5[-5] = 0;
        piVar5[-4] = 0;
        piVar5[-3] = 0;
        piVar5[-2] = 0;
        piVar5[-1] = 0;
        *piVar5 = -0x80000000;
        local_res18[0] = 0;
        uVar3 = FUN_143703a50();
        iVar2 = local_res18[0];
        uVar4 = 0;
        if (local_res18[0] != 0) {
          uVar4 = FUN_143702d60(uVar3,4,local_res18);
        }
        *(undefined8 *)(piVar5 + -3) = uVar4;
        piVar5[-1] = iVar2;
        iVar2 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar2 = local_res18[0];
        }
        local_res20[0] = 0;
        *piVar5 = iVar2;
        piVar5[1] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = -0x80000000;
        uVar3 = FUN_143703a50();
        iVar2 = local_res20[0];
        uVar4 = 0;
        if (local_res20[0] != 0) {
          uVar4 = FUN_143702d60(uVar3,4,local_res20);
        }
        *(undefined8 *)(piVar5 + 3) = uVar4;
        piVar5[5] = iVar2;
        iVar2 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar2 = local_res20[0];
        }
        piVar5[6] = iVar2;
        piVar5[7] = 0;
      }
      piVar5 = piVar5 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1438d1020 FUN_1438d1020 body=77 status=ok
// SIG undefined FUN_1438d1020(void)

undefined1 FUN_1438d1020(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1438269f0(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x50);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x60);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x70);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1438d1070 FUN_1438d1070 body=136 status=ok
// SIG undefined FUN_1438d1070(void)

longlong FUN_1438d1070(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438d1730();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x80;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1438d1160 FUN_1438d1160 body=18 status=ok
// SIG undefined FUN_1438d1160(void)

undefined8 * FUN_1438d1160(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829ad0;
  return param_2;
}



// FUNCTION 1438d1190 FUN_1438d1190 body=18 status=ok
// SIG undefined FUN_1438d1190(void)

undefined8 * FUN_1438d1190(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829ba0;
  return param_2;
}



// FUNCTION 1438d11b0 FUN_1438d11b0 body=55 status=ok
// SIG undefined FUN_1438d11b0(void)

void FUN_1438d11b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438d7640(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d1310 FUN_1438d1310 body=259 status=ok
// SIG undefined FUN_1438d1310(void)

void FUN_1438d1310(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiClimbUpAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24 + lVar2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c + lVar2);
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x30 + param_2);
        *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x34 + param_2);
        *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar2 + 0x38 + param_2);
        *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar2 + 0x3c + param_2);
      }
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d1420 FUN_1438d1420 body=18 status=ok
// SIG undefined FUN_1438d1420(void)

undefined8 * FUN_1438d1420(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829d40;
  return param_2;
}



// FUNCTION 1438d14b0 FUN_1438d14b0 body=18 status=ok
// SIG undefined FUN_1438d14b0(void)

undefined8 * FUN_1438d14b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829da0;
  return param_2;
}



// FUNCTION 1438d14d0 FUN_1438d14d0 body=236 status=ok
// SIG undefined FUN_1438d14d0(void)

void FUN_1438d14d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiDuckUnderAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24 + lVar2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c + lVar2);
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d15c0 FUN_1438d15c0 body=18 status=ok
// SIG undefined FUN_1438d15c0(void)

undefined8 * FUN_1438d15c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829df0;
  return param_2;
}



// FUNCTION 1438d15e0 FUN_1438d15e0 body=18 status=ok
// SIG undefined FUN_1438d15e0(void)

undefined8 * FUN_1438d15e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829e60;
  return param_2;
}



// FUNCTION 1438d1600 FUN_1438d1600 body=128 status=ok
// SIG undefined FUN_1438d1600(void)

void FUN_1438d1600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],8,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,4,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438d1680 FUN_1438d1680 body=163 status=ok
// SIG undefined FUN_1438d1680(void)

void FUN_1438d1680(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438d1730 FUN_1438d1730 body=199 status=ok
// SIG undefined FUN_1438d1730(void)

void FUN_1438d1730(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x10,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),0x20,*(uint *)(param_1 + 0x6c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),0x50,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  FUN_1438d1600(param_1 + 0x30);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438d1800 FUN_1438d1800 body=18 status=ok
// SIG undefined FUN_1438d1800(void)

undefined8 * FUN_1438d1800(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829a70;
  return param_2;
}



// FUNCTION 1438d1820 FUN_1438d1820 body=18 status=ok
// SIG undefined FUN_1438d1820(void)

undefined8 * FUN_1438d1820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829c80;
  return param_2;
}



// FUNCTION 1438d1850 FUN_1438d1850 body=2543 status=ok
// SIG undefined FUN_1438d1850(void)

void FUN_1438d1850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  float *pfVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  float local_res8 [2];
  undefined4 local_res10 [2];
  float local_res18;
  undefined1 local_res20 [8];
  undefined8 local_348;
  int local_340;
  uint local_33c;
  longlong local_330;
  int local_328;
  uint local_324;
  longlong local_320;
  int local_318;
  uint local_314;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined8 local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined1 local_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  
  lVar20 = *param_2;
  local_2f8 = *(float *)(lVar20 + 0x20);
  fStack_2f4 = *(float *)(lVar20 + 0x24);
  fStack_2f0 = *(float *)(lVar20 + 0x28);
  fStack_2ec = *(float *)(lVar20 + 0x2c);
  FUN_1438ce9e0(&local_228);
  local_228 = CONCAT44(fStack_2f4,local_2f8);
  uStack_220 = CONCAT44(fStack_2ec,fStack_2f0);
  local_214 = *(uint *)(param_1 + 0x30) ^ 0x80000000;
  local_218 = *(undefined4 *)(*param_2 + 0x30);
  local_210 = *(undefined4 *)(param_1 + 0x2c);
  local_208 = *(undefined4 *)(param_1 + 0x28);
  local_res8[0] = *(float *)(param_1 + 0x18);
  _local_308 = ZEXT416((uint)local_res8[0]);
  local_20c = 0;
  local_204 = FUN_143716040(local_308);
  local_res8[0] = *(float *)(param_1 + 0x18);
  _local_308 = ZEXT416((uint)local_res8[0]);
  local_200 = FUN_143716150(local_308);
  local_res8[0] = *(float *)(param_1 + 0x1c);
  _local_308 = ZEXT416((uint)local_res8[0]);
  local_1fc = FUN_143716040(local_308);
  lVar20 = *param_2;
  fVar25 = *(float *)(param_1 + 0x34);
  lVar19 = 0;
  local_1f8 = 1;
  fVar42 = *(float *)(lVar20 + 0x38);
  fVar21 = *(float *)(lVar20 + 0x38) * 0.9;
  local_330 = 0;
  local_278 = *(float *)(lVar20 + 0x3c);
  local_320 = 0;
  local_318 = 0;
  local_314 = 0x80000000;
  local_328 = 0;
  local_324 = 0x80000000;
  local_res8[0] = fVar21;
  fStack_274 = local_278;
  fStack_270 = local_278;
  fStack_26c = local_278;
  local_268 = fVar25;
  fStack_264 = fVar25;
  fStack_260 = fVar25;
  fStack_25c = fVar25;
  local_128 = fVar21;
  fStack_124 = fVar21;
  fStack_120 = fVar21;
  fStack_11c = fVar21;
  local_118 = fVar42;
  fStack_114 = fVar42;
  fStack_110 = fVar42;
  fStack_10c = fVar42;
  FUN_1438cf470(param_2[3],&local_228,&local_330);
  iVar13 = local_328 * 2;
  if ((int)(local_314 & 0x3fffffff) < iVar13) {
    iVar17 = (local_314 & 0x3fffffff) * 2;
    if (iVar13 < iVar17) {
      iVar13 = iVar17;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_320,iVar13,0x50);
  }
  lVar18 = (longlong)local_328;
  lVar20 = lVar19;
  if (0 < local_328) {
    do {
      puVar1 = (undefined8 *)(local_330 + 0x10 + lVar20);
      local_258 = *puVar1;
      uStack_250 = puVar1[1];
      local_248 = *(undefined8 *)(local_330 + lVar20);
      uStack_240 = ((undefined8 *)(local_330 + lVar20))[1];
      puVar1 = (undefined8 *)(local_330 + 0x30 + lVar20);
      local_238 = *puVar1;
      uStack_230 = puVar1[1];
      _local_308 = *(undefined1 (*) [16])(local_330 + 0x20 + lVar20);
      local_res8[0] = *(float *)(local_330 + 0x48 + lVar20);
      local_res10[0] = *(undefined4 *)(local_330 + 0x40 + lVar20);
      FUN_1438d6900(&local_258,&local_248,&local_238,local_308,local_res10,local_res8,&local_320,
                    param_2);
      lVar18 = lVar18 + -1;
      lVar20 = lVar20 + 0x50;
    } while (lVar18 != 0);
  }
  local_328 = 0;
  if (-1 < (int)local_324) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_330,0x50,local_324 & 0x3fffffff);
  }
  lVar20 = (longlong)local_318;
  cVar16 = fVar21 < fVar25;
  local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,cVar16);
  fVar26 = fVar25;
  fVar27 = fVar25;
  fVar28 = fVar25;
  fVar36 = fVar21;
  fVar37 = fVar21;
  fVar38 = fVar21;
  fVar39 = fVar42;
  fVar40 = fVar42;
  fVar41 = fVar42;
  local_330 = lVar20;
  if (0 < lVar20) {
    do {
      lVar18 = local_320;
      pfVar15 = (float *)(local_320 + lVar19);
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      fVar6 = pfVar15[2];
      fStack_2ac = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x10 + lVar19);
      fVar43 = *pfVar15;
      fVar44 = pfVar15[1];
      fVar45 = pfVar15[2];
      fStack_29c = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x20 + lVar19);
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fStack_28c = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x30 + lVar19);
      fVar10 = *pfVar15;
      fVar11 = pfVar15[1];
      fVar12 = pfVar15[2];
      fStack_27c = pfVar15[3];
      local_330 = lVar20;
      local_2b8 = fVar4;
      fStack_2b4 = fVar5;
      fStack_2b0 = fVar6;
      local_2a8 = fVar43;
      fStack_2a4 = fVar44;
      fStack_2a0 = fVar45;
      local_298 = fVar7;
      fStack_294 = fVar8;
      fStack_290 = fVar9;
      local_288 = fVar10;
      fStack_284 = fVar11;
      fStack_280 = fVar12;
      iVar13 = FUN_1438d7180(&local_2b8,&local_2a8,param_2);
      if ((iVar13 != 0) && (iVar13 = FUN_1438d7180(&local_288,&local_298,param_2), iVar13 != 0)) {
        FUN_1438d5b00(&local_2b8,&local_2a8,local_res10,&local_278,&local_2f8);
        FUN_1438d5b00(&local_298,&local_288,local_res20,&local_278,&local_2f8);
        fVar25 = fVar25 * local_2f8;
        fVar26 = fVar26 * fStack_2f4;
        fVar27 = fVar27 * fStack_2f0;
        fVar28 = fVar28 * fStack_2ec;
        lVar2 = *param_2;
        local_248 = CONCAT44(fStack_2b4 + fVar26,local_2b8 + fVar25);
        uStack_240 = CONCAT44(fStack_2ac + fVar28,fStack_2b0 + fVar27);
        local_258 = CONCAT44(fStack_2a4 + fVar26,local_2a8 + fVar25);
        uStack_250 = CONCAT44(fStack_29c + fVar28,fStack_2a0 + fVar27);
        local_308._4_4_ = fStack_294 + fVar26;
        local_308._0_4_ = local_298 + fVar25;
        fStack_300 = fStack_290 + fVar27;
        fStack_2fc = fStack_28c + fVar28;
        local_238 = CONCAT44(fStack_284 + fVar26,local_288 + fVar25);
        uStack_230 = CONCAT44(fStack_27c + fVar28,fStack_280 + fVar27);
        local_198 = (0.0 - fVar42) * *(float *)(lVar2 + 0x20);
        fStack_194 = (0.0 - fVar39) * *(float *)(lVar2 + 0x24);
        fStack_190 = (0.0 - fVar40) * *(float *)(lVar2 + 0x28);
        fStack_18c = (0.0 - fVar41) * *(float *)(lVar2 + 0x2c);
        FUN_1437f62c0(&local_348);
        FUN_1437f9c50(param_2[5],&local_248,&local_258,local_308,&local_238,&local_198,&local_348);
        FUN_1437f6e60(&local_348);
        if (local_340 == 0) {
LAB_1438d1cd7:
          uVar14 = FUN_143703a50();
          local_340 = 0;
          if (-1 < (int)local_33c) {
            FUN_143702e10(uVar14,local_348,0x14,local_33c & 0x3fffffff);
          }
        }
        else {
          if (cVar16 != '\0') {
            FUN_1437f62c0(&local_2e8);
            lVar2 = *param_2;
            local_178 = fVar21 * local_2f8 + local_2a8;
            fStack_174 = fVar36 * fStack_2f4 + fStack_2a4;
            fStack_170 = fVar37 * fStack_2f0 + fStack_2a0;
            fStack_16c = fVar38 * fStack_2ec + fStack_29c;
            local_168 = fVar21 * local_2f8 + local_2b8;
            fStack_164 = fVar36 * fStack_2f4 + fStack_2b4;
            fStack_160 = fVar37 * fStack_2f0 + fStack_2b0;
            fStack_15c = fVar38 * fStack_2ec + fStack_2ac;
            fVar33 = (fStack_2a4 - fStack_2b4) * *(float *)(lVar2 + 0x20) -
                     *(float *)(lVar2 + 0x24) * (local_2a8 - local_2b8);
            fVar34 = (fStack_2a0 - fStack_2b0) * *(float *)(lVar2 + 0x24) -
                     *(float *)(lVar2 + 0x28) * (fStack_2a4 - fStack_2b4);
            fVar35 = (local_2a8 - local_2b8) * *(float *)(lVar2 + 0x28) -
                     *(float *)(lVar2 + 0x20) * (fStack_2a0 - fStack_2b0);
            fVar25 = fVar34 * fVar34;
            fVar26 = fVar35 * fVar35;
            auVar22._8_4_ = fVar33 * fVar33;
            auVar22._4_4_ = auVar22._8_4_;
            auVar22._0_4_ = auVar22._8_4_;
            auVar22._12_4_ = auVar22._8_4_;
            fVar29 = fVar26 + fVar25 + auVar22._8_4_;
            fVar30 = fVar26 + fVar25 + auVar22._8_4_;
            fVar31 = fVar26 + fVar25 + auVar22._8_4_;
            fVar32 = fVar26 + fVar25 + auVar22._8_4_;
            auVar23._4_4_ = fVar30;
            auVar23._0_4_ = fVar29;
            auVar23._8_4_ = fVar31;
            auVar23._12_4_ = fVar32;
            auVar23 = rsqrtps(auVar22,auVar23);
            fVar25 = auVar23._0_4_;
            fVar26 = auVar23._4_4_;
            fVar27 = auVar23._8_4_;
            fVar28 = auVar23._12_4_;
            local_188 = (float)(~-(uint)(fVar29 <= 0.0) &
                               (uint)((3.0 - fVar29 * fVar25 * fVar25) * fVar25 * 0.5)) * fVar34 *
                        local_278;
            fStack_184 = (float)(~-(uint)(fVar30 <= 0.0) &
                                (uint)((3.0 - fVar30 * fVar26 * fVar26) * fVar26 * 0.5)) * fVar35 *
                         fStack_274;
            fStack_180 = (float)(~-(uint)(fVar31 <= 0.0) &
                                (uint)((3.0 - fVar31 * fVar27 * fVar27) * fVar27 * 0.5)) * fVar33 *
                         fStack_270;
            fStack_17c = (float)(~-(uint)(fVar32 <= 0.0) &
                                (uint)((3.0 - fVar32 * fVar28 * fVar28) * fVar28 * 0.5)) *
                         ((fStack_29c - fStack_2ac) * *(float *)(lVar2 + 0x2c) -
                         *(float *)(lVar2 + 0x2c) * (fStack_29c - fStack_2ac)) * fStack_26c;
            FUN_1437f9c50(param_2[5],&local_168,&local_178,&local_248,&local_258,&local_188,
                          &local_2e8);
            FUN_1437f66a0(&local_348,&local_2e8);
            uVar14 = FUN_143703a50();
            local_2e0 = 0;
            if (-1 < (int)local_2dc) {
              FUN_143702e10(uVar14,local_2e8,0x14,local_2dc & 0x3fffffff);
            }
            local_2e8 = 0;
            local_2dc = 0x80000000;
            if (local_340 != 0) {
              FUN_1437f62c0(&local_2d0);
              lVar2 = *param_2;
              local_148 = fVar21 * local_2f8 + local_288;
              fStack_144 = fVar36 * fStack_2f4 + fStack_284;
              fStack_140 = fVar37 * fStack_2f0 + fStack_280;
              fStack_13c = fVar38 * fStack_2ec + fStack_27c;
              local_138 = fVar21 * local_2f8 + local_298;
              fStack_134 = fVar36 * fStack_2f4 + fStack_294;
              fStack_130 = fVar37 * fStack_2f0 + fStack_290;
              fStack_12c = fVar38 * fStack_2ec + fStack_28c;
              fVar33 = *(float *)(lVar2 + 0x24) * (local_288 - local_298) -
                       (fStack_284 - fStack_294) * *(float *)(lVar2 + 0x20);
              fVar34 = *(float *)(lVar2 + 0x28) * (fStack_284 - fStack_294) -
                       (fStack_280 - fStack_290) * *(float *)(lVar2 + 0x24);
              fVar35 = *(float *)(lVar2 + 0x20) * (fStack_280 - fStack_290) -
                       (local_288 - local_298) * *(float *)(lVar2 + 0x28);
              fVar25 = fVar34 * fVar34;
              fVar26 = fVar35 * fVar35;
              auVar24._8_4_ = fVar33 * fVar33;
              auVar24._4_4_ = auVar24._8_4_;
              auVar24._0_4_ = auVar24._8_4_;
              auVar24._12_4_ = auVar24._8_4_;
              fVar29 = fVar26 + fVar25 + auVar24._8_4_;
              fVar30 = fVar26 + fVar25 + auVar24._8_4_;
              fVar31 = fVar26 + fVar25 + auVar24._8_4_;
              fVar32 = fVar26 + fVar25 + auVar24._8_4_;
              auVar3._4_4_ = fVar30;
              auVar3._0_4_ = fVar29;
              auVar3._8_4_ = fVar31;
              auVar3._12_4_ = fVar32;
              auVar23 = rsqrtps(auVar24,auVar3);
              fVar25 = auVar23._0_4_;
              fVar26 = auVar23._4_4_;
              fVar27 = auVar23._8_4_;
              fVar28 = auVar23._12_4_;
              local_158 = (float)(~-(uint)(fVar29 <= 0.0) &
                                 (uint)((3.0 - fVar29 * fVar25 * fVar25) * fVar25 * 0.5)) * fVar34 *
                          local_278;
              fStack_154 = (float)(~-(uint)(fVar30 <= 0.0) &
                                  (uint)((3.0 - fVar30 * fVar26 * fVar26) * fVar26 * 0.5)) * fVar35
                           * fStack_274;
              fStack_150 = (float)(~-(uint)(fVar31 <= 0.0) &
                                  (uint)((3.0 - fVar31 * fVar27 * fVar27) * fVar27 * 0.5)) * fVar33
                           * fStack_270;
              fStack_14c = (float)(~-(uint)(fVar32 <= 0.0) &
                                  (uint)((3.0 - fVar32 * fVar28 * fVar28) * fVar28 * 0.5)) *
                           (*(float *)(lVar2 + 0x2c) * (fStack_27c - fStack_28c) -
                           (fStack_27c - fStack_28c) * *(float *)(lVar2 + 0x2c)) * fStack_26c;
              FUN_1437f9c50(param_2[5],&local_138,&local_148,local_308,&local_238,&local_158,
                            &local_2d0);
              FUN_1437f66a0(&local_348,&local_2d0);
              uVar14 = FUN_143703a50();
              local_2c8 = 0;
              if (-1 < (int)local_2c4) {
                FUN_143702e10(uVar14,local_2d0,0x14,local_2c4 & 0x3fffffff);
              }
              local_2d0 = 0;
              local_2c4 = 0x80000000;
              if (local_340 != 0) goto LAB_1438d1f6a;
            }
            goto LAB_1438d1cd7;
          }
LAB_1438d1f6a:
          fVar25 = *(float *)(*param_2 + 0x30);
          hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_348);
          iVar13 = local_340;
          iVar17 = 0;
          if (0 < local_340) {
            fVar43 = fVar43 - fVar4;
            fVar44 = fVar44 - fVar5;
            fVar45 = fVar45 - fVar6;
            do {
              pfVar15 = (float *)FUN_1437f7500(&local_348,iVar17);
              fVar42 = *pfVar15;
              fVar21 = pfVar15[1];
              fVar36 = fVar43 * fVar42 + fVar4;
              fVar37 = fVar44 * fVar42 + fVar5;
              fVar38 = fVar45 * fVar42 + fVar6;
              fVar39 = fVar43 * fVar21 + fVar4;
              fVar40 = fVar44 * fVar21 + fVar5;
              fVar41 = fVar45 * fVar21 + fVar6;
              fVar26 = fVar36 - fVar39;
              fVar27 = fVar37 - fVar40;
              fVar28 = fVar38 - fVar41;
              if (fVar25 * fVar25 <= fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28) {
                FUN_143830830(&local_1e8);
                fVar26 = fVar10 - fVar7;
                fVar27 = fVar11 - fVar8;
                fVar28 = fVar12 - fVar9;
                fStack_1dc = fVar26 * fVar42 + fVar7;
                fStack_1cc = fVar27 * fVar42 + fVar8;
                fStack_1bc = fVar28 * fVar42 + fVar9;
                fStack_1e0 = fVar26 * fVar21 + fVar7;
                fStack_1d0 = fVar27 * fVar21 + fVar8;
                fStack_1c0 = fVar28 * fVar21 + fVar9;
                local_res18 = *(float *)(param_1 + 0x24) * 1.0039062;
                local_1b8 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                local_1b4 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                local_1b0 = *(undefined4 *)(lVar18 + 0x40 + lVar19);
                local_1ac = *(undefined4 *)(lVar18 + 0x44 + lVar19);
                local_1a0 = (undefined2)((uint)local_res18 >> 0x10);
                local_19c = 1;
                local_19e = 0;
                local_1e8 = fVar36;
                fStack_1e4 = fVar39;
                local_1d8 = fVar37;
                fStack_1d4 = fVar40;
                local_1c8 = fVar38;
                fStack_1c4 = fVar41;
                FUN_1438d2240(param_2[8],&local_1e8,0,*(undefined4 *)(param_1 + 0x20));
              }
              iVar17 = iVar17 + 1;
              lVar20 = local_330;
              fVar21 = local_128;
              fVar36 = fStack_124;
              fVar37 = fStack_120;
              fVar38 = fStack_11c;
              fVar42 = local_118;
              fVar39 = fStack_114;
              fVar40 = fStack_110;
              fVar41 = fStack_10c;
            } while (iVar17 < iVar13);
          }
          uVar14 = FUN_143703a50();
          local_340 = 0;
          if (-1 < (int)local_33c) {
            FUN_143702e10(uVar14,local_348,0x14,local_33c & 0x3fffffff);
          }
          cVar16 = local_res8[0]._0_1_;
        }
        local_33c = 0x80000000;
        local_348 = 0;
        fVar25 = local_268;
        fVar26 = fStack_264;
        fVar27 = fStack_260;
        fVar28 = fStack_25c;
      }
      lVar19 = lVar19 + 0x50;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    local_330 = 0;
  }
  local_318 = 0;
  if (-1 < (int)local_314) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_320,0x50,local_314 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d2240 FUN_1438d2240 body=458 status=ok
// SIG undefined FUN_1438d2240(void)

uint FUN_1438d2240(longlong param_1,float *param_2,undefined1 param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1 + 0x60,0x20);
  }
  pfVar6 = (float *)((longlong)*(int *)(param_1 + 0x68) * 0x20 + *(longlong *)(param_1 + 0x60));
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  pfVar6[4] = param_4;
  *(undefined1 *)((longlong)pfVar6 + 0x1e) = param_3;
  pfVar6[5] = -NAN;
  pfVar6[6] = -NAN;
  *(undefined2 *)(pfVar6 + 7) = 0;
  fVar2 = param_2[8];
  fVar3 = *param_2;
  fVar4 = param_2[4];
  fVar16 = param_2[1] - fVar3;
  fVar17 = param_2[5] - fVar4;
  fVar18 = param_2[9] - fVar2;
  fVar9 = fVar16 * fVar16;
  fVar12 = fVar17 * fVar17;
  auVar10._8_4_ = fVar18 * fVar18;
  auVar10._4_4_ = auVar10._8_4_;
  auVar10._0_4_ = auVar10._8_4_;
  auVar10._12_4_ = auVar10._8_4_;
  fVar13 = fVar12 + fVar9 + auVar10._8_4_;
  fVar14 = fVar12 + fVar9 + auVar10._8_4_;
  fVar15 = fVar12 + fVar9 + auVar10._8_4_;
  auVar11._4_4_ = fVar14;
  auVar11._0_4_ = fVar13;
  auVar11._8_4_ = fVar15;
  auVar11._12_4_ = fVar12 + fVar9 + auVar10._8_4_;
  auVar11 = rcpps(auVar10,auVar11);
  fVar16 = fVar16 * (2.0 - fVar13 * auVar11._0_4_) * auVar11._0_4_;
  fVar17 = fVar17 * (2.0 - fVar14 * auVar11._4_4_) * auVar11._4_4_;
  fVar18 = fVar18 * (2.0 - fVar15 * auVar11._8_4_) * auVar11._8_4_;
  *pfVar6 = fVar16;
  pfVar6[1] = fVar17;
  pfVar6[2] = fVar18;
  pfVar6[3] = 0.0 - (fVar17 * fVar4 + fVar16 * fVar3 + fVar18 * fVar2);
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1 + 0x50,0x50);
  }
  puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 0x58) * 0x50 + *(longlong *)(param_1 + 0x50))
  ;
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_2 + 2);
    *puVar7 = *(undefined8 *)param_2;
    puVar7[1] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 6);
    puVar7[2] = *(undefined8 *)(param_2 + 4);
    puVar7[3] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 10);
    puVar7[4] = *(undefined8 *)(param_2 + 8);
    puVar7[5] = uVar5;
    *(float *)(puVar7 + 6) = param_2[0xc];
    *(float *)((longlong)puVar7 + 0x34) = param_2[0xd];
    *(float *)(puVar7 + 7) = param_2[0xe];
    *(float *)((longlong)puVar7 + 0x3c) = param_2[0xf];
    *(float *)(puVar7 + 8) = param_2[0x10];
    *(float *)((longlong)puVar7 + 0x44) = param_2[0x11];
    *(undefined2 *)(puVar7 + 9) = *(undefined2 *)(param_2 + 0x12);
    *(undefined2 *)((longlong)puVar7 + 0x4a) = *(undefined2 *)((longlong)param_2 + 0x4a);
    *(undefined1 *)((longlong)puVar7 + 0x4c) = *(undefined1 *)(param_2 + 0x13);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  lVar8 = (longlong)(*(int *)(param_1 + 0x58) + -1) * 0x50 + *(longlong *)(param_1 + 0x50);
  *(uint *)(lVar8 + 0x40) = uVar1 | 0x7f900000;
  *(undefined4 *)(lVar8 + 0x44) = 0;
  *(undefined1 *)(lVar8 + 0x4c) = 1;
  return uVar1;
}



// FUNCTION 1438d2410 FUN_1438d2410 body=68 status=ok
// SIG undefined FUN_1438d2410(void)

void FUN_1438d2410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(*(int *)(param_1 + 0x68) + -1) * 0x20 + *(longlong *)(param_1 + 0x60);
  uVar1 = FUN_1438d9620(param_1 + 0x30,param_4,param_5,param_6);
  if (*(char *)(lVar2 + 0x1c) == '\0') {
    *(undefined4 *)(lVar2 + 0x14) = uVar1;
  }
  *(char *)(lVar2 + 0x1c) = *(char *)(lVar2 + 0x1c) + '\x01';
  return;
}



// FUNCTION 1438d2460 FUN_1438d2460 body=140 status=ok
// SIG undefined FUN_1438d2460(void)

void FUN_1438d2460(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  lVar4 = (longlong)(*(int *)(param_1 + 0x68) + -1) * 0x20 + *(longlong *)(param_1 + 0x60);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x70),0x10);
  }
  uVar2 = param_4[1];
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70))
  ;
  *puVar3 = *param_4;
  puVar3[1] = uVar2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  if (*(char *)(lVar4 + 0x1d) == '\0') {
    *(undefined4 *)(lVar4 + 0x18) = uVar1;
  }
  *(char *)(lVar4 + 0x1d) = *(char *)(lVar4 + 0x1d) + '\x01';
  return;
}



// FUNCTION 1438d24f0 FUN_1438d24f0 body=28 status=ok
// SIG undefined FUN_1438d24f0(void)

void FUN_1438d24f0(longlong param_1,int param_2,int param_3)

{
  hkaiIntervalPartitionLibrary::getNumIntervals
            (param_1 + 0x30,
             *(int *)((longlong)param_2 * 0x20 + 0x14 + *(longlong *)(param_1 + 0x60)) + param_3);
  return;
}



// FUNCTION 1438d2510 FUN_1438d2510 body=41 status=ok
// SIG undefined FUN_1438d2510(void)

void FUN_1438d2510(longlong param_1,int param_2,int param_3,undefined2 param_4,undefined8 param_5)

{
  FUN_1438d9840(param_1 + 0x30,
                *(int *)((longlong)param_2 * 0x20 + 0x14 + *(longlong *)(param_1 + 0x60)) + param_3,
                param_4,param_5);
  return;
}



// FUNCTION 1438d2540 FUN_1438d2540 body=18 status=ok
// SIG undefined FUN_1438d2540(void)

undefined1 FUN_1438d2540(longlong param_1,int param_2)

{
  return *(undefined1 *)((longlong)param_2 * 0x20 + 0x1e + *(longlong *)(param_1 + 0x60));
}



// FUNCTION 1438d2560 GetMutableEnterConditionAt body=16 status=ok
// SIG undefined GetMutableEnterConditionAt(void)

longlong UDlgNode::GetMutableEnterConditionAt(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x50);
}



// FUNCTION 1438d2570 FUN_1438d2570 body=39 status=ok
// SIG undefined FUN_1438d2570(void)

void FUN_1438d2570(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x70) +
           (longlong)
           (*(int *)((longlong)param_2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x60)) + param_3) *
           0x10);
  uVar2 = puVar1[1];
  *param_4 = *puVar1;
  param_4[1] = uVar2;
  return;
}



// FUNCTION 1438d25a0 FUN_1438d25a0 body=6116 status=ok
// SIG undefined FUN_1438d25a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d25a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  char cVar19;
  longlong lVar20;
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar33;
  float fVar34;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res18 [8];
  float local_res20;
  ulonglong uVar69;
  undefined8 local_5d8;
  int local_5d0;
  uint local_5cc;
  undefined8 local_5c0;
  int local_5b8;
  uint local_5b4;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  longlong local_598;
  int local_590;
  uint local_58c;
  undefined1 local_588 [8];
  float fStack_580;
  float fStack_57c;
  longlong local_578;
  int local_570;
  uint local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  undefined8 local_558;
  undefined4 local_550;
  uint local_54c;
  undefined8 local_540;
  undefined4 local_538;
  uint local_534;
  undefined8 local_528;
  undefined4 local_520;
  uint local_51c;
  undefined8 local_510;
  undefined4 local_508;
  uint local_504;
  undefined8 local_4f8;
  undefined4 local_4f0;
  uint local_4ec;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [8];
  float fStack_3f0;
  float fStack_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8;
  float *local_3a8;
  undefined4 local_3a0;
  uint local_39c;
  float local_398 [24];
  float local_338;
  undefined4 uStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  undefined4 uStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  undefined4 uStack_314;
  float fStack_310;
  float fStack_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined2 local_2f0;
  undefined2 local_2ee;
  undefined1 local_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [16];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  
  local_5a8 = *(undefined8 *)(*param_2 + 0x20);
  uStack_5a0 = *(undefined8 *)(*param_2 + 0x28);
  FUN_1438ce9e0(&local_3e8);
  local_3e8 = local_5a8;
  uStack_3e0 = uStack_5a0;
  local_3d4 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
  local_3d8 = *(undefined4 *)(*param_2 + 0x30);
  local_3d0 = *(undefined4 *)(param_1 + 0x38);
  local_3cc = *(undefined4 *)(param_1 + 0x28);
  local_3c8 = *(undefined4 *)(param_1 + 0x2c);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_588 = ZEXT416(local_res8[0]);
  local_3c4 = FUN_143716040(local_588);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_588 = ZEXT416(local_res8[0]);
  local_3c0 = FUN_143716150(local_588);
  local_res8[0] = *(uint *)(param_1 + 0x1c);
  _local_588 = ZEXT416(local_res8[0]);
  local_3bc = FUN_143716040(local_588);
  lVar20 = 0;
  local_578 = 0;
  local_570 = 0;
  local_598 = 0;
  local_590 = 0;
  local_3b8 = 1;
  local_56c = 0x80000000;
  local_58c = 0x80000000;
  FUN_1438cf470(param_2[3],&local_3e8,&local_598);
  iVar13 = local_590 * 2;
  if ((int)(local_56c & 0x3fffffff) < iVar13) {
    iVar17 = (local_56c & 0x3fffffff) * 2;
    if (iVar13 < iVar17) {
      iVar13 = iVar17;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_578,iVar13,0x50);
  }
  lVar18 = (longlong)local_590;
  if (0 < local_590) {
    do {
      puVar1 = (undefined8 *)(lVar20 + 0x10 + local_598);
      local_488 = *puVar1;
      uStack_480 = puVar1[1];
      local_478 = *(undefined8 *)(lVar20 + local_598);
      uStack_470 = ((undefined8 *)(lVar20 + local_598))[1];
      puVar1 = (undefined8 *)(lVar20 + 0x30 + local_598);
      local_438 = *puVar1;
      uStack_430 = puVar1[1];
      _local_588 = *(undefined1 (*) [16])(lVar20 + 0x20 + local_598);
      local_res8[0] = *(uint *)(lVar20 + 0x48 + local_598);
      local_res10[0] = *(uint *)(lVar20 + 0x40 + local_598);
      FUN_1438d6900(&local_488,&local_478,&local_438,local_588,local_res10,local_res8,&local_578,
                    param_2);
      lVar20 = lVar20 + 0x50;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  lVar20 = 0;
  local_590 = 0;
  if (-1 < (int)local_58c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_598,0x50,local_58c & 0x3fffffff);
  }
  fStack_fc = *(float *)(param_1 + 0x34);
  local_158 = fStack_fc + *(float *)(param_1 + 0x40);
  fStack_12c = -*(float *)(param_1 + 0x40);
  fVar53 = fStack_fc * (float)local_5a8;
  fVar55 = fStack_fc * local_5a8._4_4_;
  fVar57 = fStack_fc * (float)uStack_5a0;
  fVar58 = fStack_fc * uStack_5a0._4_4_;
  local_208 = *(float *)(*param_2 + 0x38) * 0.9;
  fVar21 = *(float *)(param_1 + 0x28) * 0.5;
  fStack_fc = *(float *)(param_1 + 0x30) - fStack_fc;
  cVar19 = local_208 < local_158;
  local_138 = fStack_12c * (float)local_5a8;
  fStack_134 = fStack_12c * local_5a8._4_4_;
  fStack_130 = fStack_12c * (float)uStack_5a0;
  fStack_12c = fStack_12c * uStack_5a0._4_4_;
  local_res8[0] = CONCAT31((int3)((uint)local_208 >> 8),cVar19);
  local_108 = fStack_fc * (float)local_5a8;
  fStack_104 = fStack_fc * local_5a8._4_4_;
  fStack_100 = fStack_fc * (float)uStack_5a0;
  fStack_fc = fStack_fc * uStack_5a0._4_4_;
  local_1f8 = *(float *)(param_1 + 0x30);
  local_1e8 = *(float *)(param_1 + 0x34);
  local_2c8 = *(undefined4 *)(param_1 + 0x44);
  local_468 = *(float *)(*param_2 + 0x3c);
  fStack_464 = local_468;
  fStack_460 = local_468;
  fStack_45c = local_468;
  local_458 = fVar53;
  fStack_454 = fVar55;
  fStack_450 = fVar57;
  fStack_44c = fVar58;
  local_448 = fVar21;
  fStack_444 = fVar21;
  fStack_440 = fVar21;
  fStack_43c = fVar21;
  uStack_2c4 = local_2c8;
  uStack_2c0 = local_2c8;
  uStack_2bc = local_2c8;
  fStack_204 = local_208;
  fStack_200 = local_208;
  fStack_1fc = local_208;
  fStack_1f4 = local_1f8;
  fStack_1f0 = local_1f8;
  fStack_1ec = local_1f8;
  fStack_1e4 = local_1e8;
  fStack_1e0 = local_1e8;
  fStack_1dc = local_1e8;
  fStack_154 = local_158;
  fStack_150 = local_158;
  fStack_14c = local_158;
  FUN_143716280(&local_2c8,&local_1d8,&local_1c8);
  local_f8 = *(float *)(param_1 + 0x48);
  local_1a8 = *(float *)(param_1 + 0x4c);
  local_res10[0] = *(uint *)(param_1 + 0x50);
  _local_588 = ZEXT416(local_res10[0]);
  fStack_1a4 = local_1a8;
  fStack_1a0 = local_1a8;
  fStack_19c = local_1a8;
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  local_res10[0] = FUN_143716040(local_588);
  lVar18 = (longlong)local_570;
  local_188._4_4_ = local_res10[0];
  local_188._0_4_ = local_res10[0];
  local_188._8_4_ = local_res10[0];
  local_188._12_4_ = local_res10[0];
  fVar24 = fVar21;
  fVar54 = fVar21;
  fVar56 = fVar21;
  local_598 = lVar18;
  if (0 < lVar18) {
    do {
      lVar12 = local_578;
      iVar17 = 0;
      pfVar16 = (float *)(lVar20 + local_578);
      fVar42 = *pfVar16;
      fVar62 = pfVar16[1];
      local_478 = *(undefined8 *)pfVar16;
      fVar64 = pfVar16[2];
      fVar41 = pfVar16[3];
      uStack_470 = *(undefined8 *)(pfVar16 + 2);
      pauVar2 = (undefined1 (*) [16])(lVar20 + 0x20 + local_578);
      _local_588 = *pauVar2;
      pfVar16 = (float *)(lVar20 + 0x10 + local_578);
      fVar65 = *pfVar16;
      fVar66 = pfVar16[1];
      fVar67 = pfVar16[2];
      fVar68 = pfVar16[3];
      pfVar16 = (float *)(lVar20 + 0x30 + local_578);
      fVar60 = *pfVar16;
      fVar61 = pfVar16[1];
      fVar63 = pfVar16[2];
      fVar59 = pfVar16[3];
      local_4b8 = (float)*(undefined8 *)*pauVar2;
      fStack_4b4 = (float)((ulonglong)*(undefined8 *)*pauVar2 >> 0x20);
      fStack_4b0 = (float)*(undefined8 *)(*pauVar2 + 8);
      fStack_4ac = (float)((ulonglong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      local_598 = lVar18;
      local_4d8 = fVar65;
      fStack_4d4 = fVar66;
      fStack_4d0 = fVar67;
      fStack_4cc = fVar68;
      local_4c8 = fVar42;
      fStack_4c4 = fVar62;
      fStack_4c0 = fVar64;
      fStack_4bc = fVar41;
      local_4a8 = fVar60;
      fStack_4a4 = fVar61;
      fStack_4a0 = fVar63;
      fStack_49c = fVar59;
      iVar13 = FUN_1438d7180(&local_4c8,&local_4d8,param_2);
      if ((iVar13 != 0) && (iVar13 = FUN_1438d7180(&local_4a8,&local_4b8,param_2), iVar13 != 0)) {
        FUN_1438d5b00(&local_4c8,&local_4d8,local_res18,&local_468,&local_5a8);
        FUN_1438d5b00(&local_4b8,&local_4a8,local_428,&local_468,&local_5a8);
        fVar35 = (float)local_5a8 * fVar42;
        fVar37 = local_5a8._4_4_ * fVar62;
        fVar39 = (float)uStack_5a0 * fVar64;
        fVar49 = (local_4b8 - local_4c8) * _DAT_1467f07e0 + local_4c8;
        fVar50 = (fStack_4b4 - fStack_4c4) * fRam00000001467f07e4 + fStack_4c4;
        fVar51 = (fStack_4b0 - fStack_4c0) * fRam00000001467f07e8 + fStack_4c0;
        fVar46 = (local_4a8 - local_4d8) * _DAT_1467f07e0 + local_4d8;
        fVar47 = (fStack_4a4 - fStack_4d4) * fRam00000001467f07e4 + fStack_4d4;
        fVar48 = (fStack_4a0 - fStack_4d0) * fRam00000001467f07e8 + fStack_4d0;
        fVar25 = (float)local_5a8 * fVar49;
        fVar33 = local_5a8._4_4_ * fVar50;
        fVar34 = (float)uStack_5a0 * fVar51;
        fVar43 = (float)local_5a8 * fVar46;
        fVar44 = local_5a8._4_4_ * fVar47;
        fVar45 = (float)uStack_5a0 * fVar48;
        fVar36 = (float)local_5a8 * fVar65;
        fVar38 = local_5a8._4_4_ * fVar66;
        fVar40 = (float)uStack_5a0 * fVar67;
        fVar49 = (fVar49 - (fVar33 + fVar25 + fVar34) * (float)local_5a8) +
                 (fVar37 + fVar35 + fVar39) * (float)local_5a8;
        fVar50 = (fVar50 - (fVar33 + fVar25 + fVar34) * local_5a8._4_4_) +
                 (fVar37 + fVar35 + fVar39) * local_5a8._4_4_;
        fVar51 = (fVar51 - (fVar33 + fVar25 + fVar34) * (float)uStack_5a0) +
                 (fVar37 + fVar35 + fVar39) * (float)uStack_5a0;
        fVar52 = (((fStack_4ac - fStack_4bc) * fRam00000001467f07ec + fStack_4bc) -
                 (fVar33 + fVar25 + fVar34) * uStack_5a0._4_4_) +
                 (fVar37 + fVar35 + fVar39) * uStack_5a0._4_4_;
        auVar26._0_4_ = (fVar38 + fVar36 + fVar40) * (float)local_5a8;
        auVar26._4_4_ = (fVar38 + fVar36 + fVar40) * local_5a8._4_4_;
        auVar26._8_4_ = (fVar38 + fVar36 + fVar40) * (float)uStack_5a0;
        auVar26._12_4_ = (fVar38 + fVar36 + fVar40) * uStack_5a0._4_4_;
        fVar46 = (fVar46 - (fVar44 + fVar43 + fVar45) * (float)local_5a8) + auVar26._0_4_;
        fVar47 = (fVar47 - (fVar44 + fVar43 + fVar45) * local_5a8._4_4_) + auVar26._4_4_;
        fVar48 = (fVar48 - (fVar44 + fVar43 + fVar45) * (float)uStack_5a0) + auVar26._8_4_;
        fVar43 = (((fStack_49c - fStack_4cc) * fRam00000001467f07ec + fStack_4cc) -
                 (fVar44 + fVar43 + fVar45) * uStack_5a0._4_4_) + auVar26._12_4_;
        fVar25 = fVar46 - fVar49;
        fVar33 = fVar47 - fVar50;
        fVar34 = fVar48 - fVar51;
        fVar35 = fVar43 - fVar52;
        fStack_2b0 = fVar33 * (float)local_5a8 - local_5a8._4_4_ * fVar25;
        local_2b8 = fVar34 * local_5a8._4_4_ - (float)uStack_5a0 * fVar33;
        fStack_2b4 = fVar25 * (float)uStack_5a0 - (float)local_5a8 * fVar34;
        fVar25 = local_2b8 * local_2b8;
        fVar33 = fStack_2b4 * fStack_2b4;
        fVar34 = fStack_2b0 * fStack_2b0;
        fVar38 = fVar33 + fVar25 + fVar34;
        fVar39 = fVar33 + fVar25 + fVar34;
        fVar40 = fVar33 + fVar25 + fVar34;
        fVar34 = fVar33 + fVar25 + fVar34;
        auVar27._4_4_ = fVar39;
        auVar27._0_4_ = fVar38;
        auVar27._8_4_ = fVar40;
        auVar27._12_4_ = fVar34;
        auVar27 = rsqrtps(auVar26,auVar27);
        fVar25 = auVar27._0_4_;
        fVar33 = auVar27._4_4_;
        fVar36 = auVar27._8_4_;
        fVar37 = auVar27._12_4_;
        local_2b8 = local_2b8 *
                    (float)(~-(uint)(fVar38 <= 0.0) &
                           (uint)((3.0 - fVar25 * fVar38 * fVar25) * fVar25 * 0.5));
        fStack_2b4 = fStack_2b4 *
                     (float)(~-(uint)(fVar39 <= 0.0) &
                            (uint)((3.0 - fVar33 * fVar39 * fVar33) * fVar33 * 0.5));
        fStack_2b0 = fStack_2b0 *
                     (float)(~-(uint)(fVar40 <= 0.0) &
                            (uint)((3.0 - fVar36 * fVar40 * fVar36) * fVar36 * 0.5));
        fVar36 = (fVar35 * uStack_5a0._4_4_ - uStack_5a0._4_4_ * fVar35) *
                 (float)(~-(uint)(fVar34 <= 0.0) &
                        (uint)((3.0 - fVar37 * fVar34 * fVar37) * fVar37 * 0.5));
        fVar25 = local_2b8 * fVar21;
        fVar33 = fStack_2b4 * fVar24;
        fVar34 = fStack_2b0 * fVar54;
        fVar35 = fVar36 * fVar56;
        fStack_2ac = -*(float *)(param_1 + 0x28);
        local_2b8 = fStack_2ac * local_2b8;
        fStack_2b4 = fStack_2ac * fStack_2b4;
        fStack_2b0 = fStack_2ac * fStack_2b0;
        fStack_2ac = fStack_2ac * fVar36;
        local_128 = (fVar49 - fVar25) + fVar53;
        fStack_124 = (fVar50 - fVar33) + fVar55;
        fStack_120 = (fVar51 - fVar34) + fVar57;
        fStack_11c = (fVar52 - fVar35) + fVar58;
        local_118 = (fVar46 - fVar25) + fVar53;
        fStack_114 = (fVar47 - fVar33) + fVar55;
        fStack_110 = (fVar48 - fVar34) + fVar57;
        fStack_10c = (fVar43 - fVar35) + fVar58;
        FUN_1437f62c0(&local_5c0);
        FUN_1437f8990(param_2[5],&local_128,&local_118,&local_108,&local_2b8,&local_5c0);
        if (local_5b8 == 0) {
          uVar15 = FUN_143703a50();
          local_5b8 = 0;
          if (-1 < (int)local_5b4) {
            FUN_143702e10(uVar15,local_5c0,0x14,local_5b4 & 0x3fffffff);
          }
        }
        else {
          FUN_1437f7b00(&local_5c0);
          fVar53 = (float)local_5a8 * local_4b8;
          fVar57 = local_5a8._4_4_ * fStack_4b4;
          fVar21 = (float)uStack_5a0 * fStack_4b0;
          fVar55 = (float)local_5a8 * local_4a8;
          fVar58 = local_5a8._4_4_ * fStack_4a4;
          fVar24 = (float)uStack_5a0 * fStack_4a0;
          fVar54 = local_4b8 - (fVar57 + fVar53 + fVar21) * (float)local_5a8;
          fVar56 = fStack_4b4 - (fVar57 + fVar53 + fVar21) * local_5a8._4_4_;
          fVar25 = fStack_4b0 - (fVar57 + fVar53 + fVar21) * (float)uStack_5a0;
          fVar53 = fStack_4ac - (fVar57 + fVar53 + fVar21) * uStack_5a0._4_4_;
          fVar57 = local_4a8 - (fVar58 + fVar55 + fVar24) * (float)local_5a8;
          fVar21 = fStack_4a4 - (fVar58 + fVar55 + fVar24) * local_5a8._4_4_;
          fVar33 = fStack_4a0 - (fVar58 + fVar55 + fVar24) * (float)uStack_5a0;
          fVar55 = fStack_49c - (fVar58 + fVar55 + fVar24) * uStack_5a0._4_4_;
          FUN_1437f62c0(&local_5d8);
          if (0 < local_5b8) {
            do {
              uVar15 = FUN_1437f7500(&local_5c0,iVar17);
              FUN_1437f7510(uVar15,&local_560);
              FUN_1437f7540(uVar15,&local_568);
              if (0.01 <= local_568 - local_560) {
                fVar58 = local_55c + 0.01;
                fVar24 = local_564 + 0.01;
                fVar38 = fVar57 - fVar54;
                fVar39 = fVar21 - fVar56;
                fVar40 = fVar33 - fVar25;
                fVar43 = fVar55 - fVar53;
                local_1b8 = local_560 * (local_4d8 - local_4c8) + local_4c8 +
                            fVar58 * (float)local_5a8;
                fStack_1b4 = local_560 * (fStack_4d4 - fStack_4c4) + fStack_4c4 +
                             fVar58 * local_5a8._4_4_;
                fStack_1b0 = local_560 * (fStack_4d0 - fStack_4c0) + fStack_4c0 +
                             fVar58 * (float)uStack_5a0;
                fStack_1ac = local_560 * (fStack_4cc - fStack_4bc) + fStack_4bc +
                             fVar58 * uStack_5a0._4_4_;
                local_178 = local_568 * (local_4d8 - local_4c8) + local_4c8 +
                            fVar24 * (float)local_5a8;
                fStack_174 = local_568 * (fStack_4d4 - fStack_4c4) + fStack_4c4 +
                             fVar24 * local_5a8._4_4_;
                fStack_170 = local_568 * (fStack_4d0 - fStack_4c0) + fStack_4c0 +
                             fVar24 * (float)uStack_5a0;
                fStack_16c = local_568 * (fStack_4cc - fStack_4bc) + fStack_4bc +
                             fVar24 * uStack_5a0._4_4_;
                fVar58 = (float)local_5a8 * local_1b8;
                fVar34 = local_5a8._4_4_ * fStack_1b4;
                fVar36 = (float)uStack_5a0 * fStack_1b0;
                fVar24 = (float)local_5a8 * local_178;
                fVar35 = local_5a8._4_4_ * fStack_174;
                fVar37 = (float)uStack_5a0 * fStack_170;
                local_168 = (fVar34 + fVar58 + fVar36) * (float)local_5a8 +
                            fVar38 * local_560 + fVar54;
                fStack_164 = (fVar34 + fVar58 + fVar36) * local_5a8._4_4_ +
                             fVar39 * local_560 + fVar56;
                fStack_160 = (fVar34 + fVar58 + fVar36) * (float)uStack_5a0 +
                             fVar40 * local_560 + fVar25;
                fStack_15c = (fVar34 + fVar58 + fVar36) * uStack_5a0._4_4_ +
                             fVar43 * local_560 + fVar53;
                local_148 = (fVar35 + fVar24 + fVar37) * (float)local_5a8 +
                            fVar38 * local_568 + fVar54;
                fStack_144 = (fVar35 + fVar24 + fVar37) * local_5a8._4_4_ +
                             fVar39 * local_568 + fVar56;
                fStack_140 = (fVar35 + fVar24 + fVar37) * (float)uStack_5a0 +
                             fVar40 * local_568 + fVar25;
                fStack_13c = (fVar35 + fVar24 + fVar37) * uStack_5a0._4_4_ +
                             fVar43 * local_568 + fVar53;
                FUN_1437f62c0(&local_558);
                FUN_1437f9c50(param_2[5],&local_1b8,&local_178,&local_168,&local_148,&local_138,
                              &local_558);
                FUN_1437f78a0(&local_558);
                if (local_5d0 != 0) {
                  FUN_1437f58e0(&local_5d8);
                  FUN_1437f6c80(&local_558);
                }
                FUN_1437f64a0(&local_5d8,&local_558);
                uVar15 = FUN_143703a50();
                local_550 = 0;
                if (-1 < (int)local_54c) {
                  FUN_143702e10(uVar15,local_558,0x14,local_54c & 0x3fffffff);
                }
                local_558 = 0;
                local_54c = 0x80000000;
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < local_5b8);
            lVar18 = local_598;
            cVar19 = (char)local_res8[0];
          }
          auVar28._0_12_ = ZEXT812(0x3f800000);
          auVar28._12_4_ = 0.0;
          FUN_1437f6e60(&local_5d8);
          FUN_1437f6970(&local_5d8,&local_5c0);
          if (cVar19 == '\0') {
LAB_1438d3329:
            iVar13 = 0;
            hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_5d8);
            if (local_5d0 == 0) {
              uVar15 = FUN_143703a50();
              local_5d0 = 0;
              if (-1 < (int)local_5cc) {
                FUN_143702e10(uVar15,local_5d8,0x14,local_5cc & 0x3fffffff);
              }
              local_5d8 = 0;
              local_5cc = 0x80000000;
              uVar15 = FUN_143703a50();
              local_5b8 = 0;
              fVar53 = local_458;
              fVar55 = fStack_454;
              fVar57 = fStack_450;
              fVar58 = fStack_44c;
              fVar21 = local_448;
              fVar24 = fStack_444;
              fVar54 = fStack_440;
              fVar56 = fStack_43c;
              if (-1 < (int)local_5b4) {
                FUN_143702e10(uVar15,local_5c0,0x14,local_5b4 & 0x3fffffff);
                fVar53 = local_458;
                fVar55 = fStack_454;
                fVar57 = fStack_450;
                fVar58 = fStack_44c;
                fVar21 = local_448;
                fVar24 = fStack_444;
                fVar54 = fStack_440;
                fVar56 = fStack_43c;
              }
            }
            else {
              fVar65 = fVar65 - fVar42;
              fVar66 = fVar66 - fVar62;
              fVar67 = fVar67 - fVar64;
              fVar68 = fVar68 - fVar41;
              fVar53 = *(float *)(*param_2 + 0x30);
              local_3a8 = local_398;
              local_3a0 = 0;
              local_3f8._4_4_ = fVar67;
              local_3f8._0_4_ = fVar66;
              fStack_3f0 = fVar65;
              fStack_3ec = fVar68;
              local_39c = 0x80000006;
              fStack_490 = (float)local_5a8 * fVar66 - local_5a8._4_4_ * fVar65;
              local_498 = local_5a8._4_4_ * fVar67 - (float)uStack_5a0 * fVar66;
              fStack_494 = (float)uStack_5a0 * fVar65 - (float)local_5a8 * fVar67;
              fVar55 = local_498 * local_498;
              fVar57 = fStack_494 * fStack_494;
              fVar58 = fStack_490 * fStack_490;
              fVar54 = fVar57 + fVar55 + fVar58;
              fVar56 = fVar57 + fVar55 + fVar58;
              fVar41 = fVar57 + fVar55 + fVar58;
              fVar58 = fVar57 + fVar55 + fVar58;
              auVar6._4_4_ = fVar56;
              auVar6._0_4_ = fVar54;
              auVar6._8_4_ = fVar41;
              auVar6._12_4_ = fVar58;
              auVar27 = rsqrtps(auVar28,auVar6);
              fVar55 = auVar27._0_4_;
              fVar57 = auVar27._4_4_;
              fVar21 = auVar27._8_4_;
              fVar24 = auVar27._12_4_;
              auVar29._0_4_ = fVar55 * 0.5;
              auVar29._4_4_ = fVar57 * 0.5;
              auVar29._8_4_ = fVar21 * 0.5;
              auVar29._12_4_ = fVar24 * 0.5;
              local_498 = local_498 *
                          (float)(~-(uint)(fVar54 <= 0.0) &
                                 (uint)((3.0 - fVar55 * fVar54 * fVar55) * auVar29._0_4_));
              fStack_494 = fStack_494 *
                           (float)(~-(uint)(fVar56 <= 0.0) &
                                  (uint)((3.0 - fVar57 * fVar56 * fVar57) * auVar29._4_4_));
              fStack_490 = fStack_490 *
                           (float)(~-(uint)(fVar41 <= 0.0) &
                                  (uint)((3.0 - fVar21 * fVar41 * fVar21) * auVar29._8_4_));
              fStack_48c = (uStack_5a0._4_4_ * fVar68 - uStack_5a0._4_4_ * fVar68) *
                           (float)(~-(uint)(fVar58 <= 0.0) &
                                  (uint)((3.0 - fVar24 * fVar58 * fVar24) * auVar29._12_4_));
              uVar15 = FUN_143703a50();
              if ((local_39c & 0x3fffffff) < 6) {
                uVar10 = (local_39c & 0x3fffffff) * 2;
                uVar9 = 6;
                if (6 < uVar10) {
                  uVar9 = uVar10;
                }
                FUN_14370c310(uVar15,&local_3a8,uVar9,0x10);
              }
              iVar17 = local_5d0;
              fVar60 = fVar60 - (float)local_588._0_4_;
              fVar61 = fVar61 - (float)local_588._4_4_;
              fVar63 = fVar63 - fStack_580;
              local_3a0 = 6;
              local_438 = CONCAT44(fVar61,fVar60);
              uStack_430 = CONCAT44(fVar59 - fStack_57c,fVar63);
              fVar56 = fVar61 * (float)local_5a8 - local_5a8._4_4_ * fVar60;
              fVar41 = fVar63 * local_5a8._4_4_ - (float)uStack_5a0 * fVar61;
              fVar60 = fVar60 * (float)uStack_5a0 - (float)local_5a8 * fVar63;
              fVar55 = fVar41 * fVar41;
              fVar57 = fVar60 * fVar60;
              fVar58 = fVar56 * fVar56;
              fVar21 = fVar57 + fVar55 + fVar58;
              fVar24 = fVar57 + fVar55 + fVar58;
              fVar54 = fVar57 + fVar55 + fVar58;
              auVar7._4_4_ = fVar24;
              auVar7._0_4_ = fVar21;
              auVar7._8_4_ = fVar54;
              auVar7._12_4_ = fVar57 + fVar55 + fVar58;
              auVar27 = rsqrtps(auVar29,auVar7);
              fVar55 = auVar27._0_4_;
              fVar57 = auVar27._4_4_;
              fVar58 = auVar27._8_4_;
              fVar61 = fStack_494 * fVar65 - (float)local_3f8._0_4_ * local_498;
              fVar63 = fStack_490 * fVar66 - (float)local_3f8._4_4_ * fStack_494;
              fVar59 = local_498 * fVar67 - fStack_3f0 * fStack_490;
              fVar41 = (float)(~-(uint)(fVar21 <= 0.0) &
                              (uint)((3.0 - fVar55 * fVar21 * fVar55) * fVar55 * 0.5)) * fVar41;
              fVar60 = (float)(~-(uint)(fVar24 <= 0.0) &
                              (uint)((3.0 - fVar57 * fVar24 * fVar57) * fVar57 * 0.5)) * fVar60;
              fVar56 = (float)(~-(uint)(fVar54 <= 0.0) &
                              (uint)((3.0 - fVar58 * fVar54 * fVar58) * fVar58 * 0.5)) * fVar56;
              fVar55 = fVar63 * fVar63;
              fVar57 = fVar59 * fVar59;
              auVar23._8_4_ = fVar61 * fVar61;
              auVar23._4_4_ = auVar23._8_4_;
              auVar23._0_4_ = auVar23._8_4_;
              auVar23._12_4_ = auVar23._8_4_;
              auVar30._0_4_ = fVar57 + fVar55 + auVar23._8_4_;
              auVar30._4_4_ = fVar57 + fVar55 + auVar23._8_4_;
              auVar30._8_4_ = fVar57 + fVar55 + auVar23._8_4_;
              auVar30._12_4_ = fVar57 + fVar55 + auVar23._8_4_;
              auVar27 = rsqrtps(auVar23,auVar30);
              fVar55 = auVar27._0_4_;
              fVar57 = auVar27._4_4_;
              fVar58 = auVar27._8_4_;
              fVar21 = (float)local_5a8 * local_1f8;
              fVar24 = local_5a8._4_4_ * fStack_1f4;
              fVar54 = (float)uStack_5a0 * fStack_1f0;
              fStack_3f0 = -0.0;
              local_3f8 = (undefined1  [8])0x8000000080000000;
              fStack_3ec = 0.0;
              fVar63 = fVar63 * (float)(~-(uint)(auVar30._0_4_ <= 0.0) &
                                       (uint)((3.0 - fVar55 * auVar30._0_4_ * fVar55) * fVar55 * 0.5
                                             ));
              fVar59 = fVar59 * (float)(~-(uint)(auVar30._4_4_ <= 0.0) &
                                       (uint)((3.0 - fVar57 * auVar30._4_4_ * fVar57) * fVar57 * 0.5
                                             ));
              fVar61 = fVar61 * (float)(~-(uint)(auVar30._8_4_ <= 0.0) &
                                       (uint)((3.0 - fVar58 * auVar30._8_4_ * fVar58) * fVar58 * 0.5
                                             ));
              fVar55 = (float)local_5a8 * local_1e8;
              fVar57 = local_5a8._4_4_ * fStack_1e4;
              fVar58 = (float)uStack_5a0 * fStack_1e0;
              *local_3a8 = -local_498;
              local_3a8[1] = -fStack_494;
              local_3a8[2] = -fStack_490;
              local_3a8[3] = 0.0 - (-fStack_494 * fVar62 + -local_498 * fVar42 +
                                   -fStack_490 * fVar64);
              local_3a8[4] = fVar41;
              local_3a8[5] = fVar60;
              local_3a8[6] = fVar56;
              local_3a8[7] = 0.0 - (fVar60 * (float)local_588._4_4_ +
                                    fVar41 * (float)local_588._0_4_ + fVar56 * fStack_580);
              local_3a8[8] = -fVar63;
              local_3a8[9] = -fVar59;
              local_3a8[10] = -fVar61;
              local_3a8[0xb] =
                   0.0 - ((fVar24 + local_478._4_4_) * -fVar59 +
                          (fVar21 + (float)local_478) * -fVar63 +
                         (fVar54 + (float)uStack_470) * -fVar61);
              local_3a8[0xc] = fVar63;
              local_3a8[0xd] = fVar59;
              local_3a8[0xe] = fVar61;
              local_3a8[0xf] =
                   0.0 - ((fVar57 + local_478._4_4_) * fVar59 + (fVar55 + (float)local_478) * fVar63
                         + (fVar58 + (float)uStack_470) * fVar61);
              fVar55 = (float)local_5a8 * fVar65;
              fVar57 = local_5a8._4_4_ * fVar66;
              fVar58 = (float)uStack_5a0 * fVar67;
              auVar31._0_4_ = (fVar57 + fVar55 + fVar58) * (float)local_5a8;
              auVar31._4_4_ = (fVar57 + fVar55 + fVar58) * local_5a8._4_4_;
              auVar31._8_4_ = (fVar57 + fVar55 + fVar58) * (float)uStack_5a0;
              auVar31._12_4_ = (fVar57 + fVar55 + fVar58) * uStack_5a0._4_4_;
              local_418 = fVar65 - auVar31._0_4_;
              fStack_414 = fVar66 - auVar31._4_4_;
              fStack_410 = fVar67 - auVar31._8_4_;
              fVar55 = local_418 * local_418;
              fVar57 = fStack_414 * fStack_414;
              fVar58 = fStack_410 * fStack_410;
              fVar54 = fVar57 + fVar55 + fVar58;
              fVar56 = fVar57 + fVar55 + fVar58;
              fVar42 = fVar57 + fVar55 + fVar58;
              fVar58 = fVar57 + fVar55 + fVar58;
              auVar8._4_4_ = fVar56;
              auVar8._0_4_ = fVar54;
              auVar8._8_4_ = fVar42;
              auVar8._12_4_ = fVar58;
              auVar27 = rsqrtps(auVar31,auVar8);
              fVar55 = auVar27._0_4_;
              fVar57 = auVar27._4_4_;
              fVar21 = auVar27._8_4_;
              fVar24 = auVar27._12_4_;
              local_198 = (float)local_5a8 * local_1c8 - local_1d8 * local_498;
              fStack_194 = local_5a8._4_4_ * fStack_1c4 - fStack_1d4 * fStack_494;
              fStack_190 = (float)uStack_5a0 * fStack_1c0 - fStack_1d0 * fStack_490;
              fStack_18c = uStack_5a0._4_4_ * fStack_1bc - fStack_1cc * fStack_48c;
              local_418 = local_418 *
                          (float)(~-(uint)(fVar54 <= 0.0) &
                                 (uint)((3.0 - fVar55 * fVar54 * fVar55) * fVar55 * 0.5));
              fStack_414 = fStack_414 *
                           (float)(~-(uint)(fVar56 <= 0.0) &
                                  (uint)((3.0 - fVar57 * fVar56 * fVar57) * fVar57 * 0.5));
              fStack_410 = fStack_410 *
                           (float)(~-(uint)(fVar42 <= 0.0) &
                                  (uint)((3.0 - fVar21 * fVar42 * fVar21) * fVar21 * 0.5));
              fStack_40c = (fVar68 - auVar31._12_4_) *
                           (float)(~-(uint)(fVar58 <= 0.0) &
                                  (uint)((3.0 - fVar24 * fVar58 * fVar24) * fVar24 * 0.5));
              fVar42 = local_418 * local_f8;
              fVar62 = fStack_414 * fStack_f4;
              fVar64 = fStack_410 * fStack_f0;
              fVar24 = local_418 * local_1a8;
              fVar54 = fStack_414 * fStack_1a4;
              fVar56 = fStack_410 * fStack_1a0;
              fVar55 = (float)local_478;
              fVar57 = local_478._4_4_;
              fVar58 = (float)uStack_470;
              fVar21 = uStack_470._4_4_;
              if (0 < local_5d0) {
                do {
                  pfVar16 = (float *)FUN_1437f7500(&local_5d8,iVar13);
                  fVar41 = *pfVar16;
                  fVar60 = pfVar16[1];
                  local_2d8 = pfVar16[4];
                  local_408 = fVar65 * fVar41 + fVar55;
                  fStack_404 = fVar66 * fVar41 + fVar57;
                  fStack_400 = fVar67 * fVar41 + fVar58;
                  fStack_3fc = fVar68 * fVar41 + fVar21;
                  local_2e8 = (fVar60 - fVar41) * fVar65;
                  fStack_2e4 = (fVar60 - fVar41) * fVar66;
                  fStack_2e0 = (fVar60 - fVar41) * fVar67;
                  fStack_2dc = (fVar60 - fVar41) * fVar68;
                  fVar55 = fVar65 * fVar60 + (float)local_478;
                  fVar57 = fVar66 * fVar60 + local_478._4_4_;
                  fVar58 = fVar67 * fVar60 + (float)uStack_470;
                  local_488 = CONCAT44(fVar57,fVar55);
                  uStack_480 = CONCAT44(fVar68 * fVar60 + uStack_470._4_4_,fVar58);
                  if (fVar53 * fVar53 <=
                      (fStack_404 - fVar57) * (fStack_404 - fVar57) +
                      (local_408 - fVar55) * (local_408 - fVar55) +
                      (fStack_400 - fVar58) * (fStack_400 - fVar58)) {
                    fVar21 = local_408 + fVar42;
                    fVar61 = fStack_404 + fVar62;
                    fVar63 = fStack_400 + fVar64;
                    FUN_143830830(&local_338);
                    fStack_330 = (float)local_438 * fVar60 + (float)local_588._0_4_;
                    fStack_320 = local_438._4_4_ * fVar60 + (float)local_588._4_4_;
                    fStack_310 = (float)uStack_430 * fVar60 + fStack_580;
                    fStack_32c = (float)local_438 * fVar41 + (float)local_588._0_4_;
                    fStack_31c = local_438._4_4_ * fVar41 + (float)local_588._4_4_;
                    fStack_30c = (float)uStack_430 * fVar41 + fStack_580;
                    local_338 = local_408;
                    uStack_334 = (undefined4)local_488;
                    local_328 = fStack_404;
                    uStack_324 = local_488._4_4_;
                    local_318 = fStack_400;
                    uStack_314 = (undefined4)uStack_480;
                    local_308 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                    local_304 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                    local_300 = *(undefined4 *)(lVar20 + 0x40 + lVar12);
                    local_2fc = *(undefined4 *)(lVar20 + 0x44 + lVar12);
                    local_2ec = 1;
                    FUN_143831c80(local_res10,&local_338);
                    local_res20 = *(float *)(param_1 + 0x24);
                    if (*(float *)(param_1 + 0x24) <= (float)((int)(short)local_res10[0] << 0x10)) {
                      local_res20 = (float)((int)(short)local_res10[0] << 0x10);
                    }
                    local_res20 = local_res20 * 1.0039062;
                    local_2ee = 0;
                    local_2f0 = (undefined2)((uint)local_res20 >> 0x10);
                    uVar14 = FUN_1438d2240(param_2[8],&local_338,2,*(undefined4 *)(param_1 + 0x20));
                    local_3a8[0x10] = (float)(local_3f8._0_4_ ^ (uint)local_418);
                    local_3a8[0x11] = (float)(local_3f8._4_4_ ^ (uint)fStack_414);
                    local_3a8[0x12] = (float)((uint)fStack_3f0 ^ (uint)fStack_410);
                    local_3a8[0x13] = (float)((uint)fStack_3ec ^ (uint)fStack_40c);
                    fVar41 = local_3a8[0x10];
                    fVar60 = local_3a8[0x11];
                    fVar59 = local_3a8[0x12];
                    local_3a8[0x10] = fVar41;
                    local_3a8[0x11] = fVar60;
                    local_3a8[0x12] = fVar59;
                    local_3a8[0x13] = 0.0 - (fVar61 * fVar60 + fVar21 * fVar41 + fVar63 * fVar59);
                    *(ulonglong *)(local_3a8 + 0x14) = CONCAT44(fStack_414,local_418);
                    *(ulonglong *)(local_3a8 + 0x16) = CONCAT44(fStack_40c,fStack_410);
                    auVar27 = *(undefined1 (*) [16])(local_3a8 + 0x14);
                    auVar32._0_12_ = auVar27._0_12_;
                    auVar32._12_4_ =
                         0.0 - ((fVar57 + fVar54) * auVar27._4_4_ +
                                (fVar55 + fVar24) * auVar27._0_4_ +
                               (fVar58 + fVar56) * auVar27._8_4_);
                    *(undefined1 (*) [16])(local_3a8 + 0x14) = auVar32;
                    FUN_1437f62c0(&local_540);
                    FUN_1437f62c0(&local_528);
                    FUN_1437f8d50(param_2[5],&local_3a8,&local_408,&local_488,&local_198,&local_498,
                                  &local_5a8,&local_540,&local_528);
                    pfVar16 = &local_418;
                    FUN_1438d5cc0(&local_540,&local_528,&local_2e8,&local_498,&local_5a8,pfVar16,
                                  local_188);
                    uVar69 = (ulonglong)pfVar16 & 0xffffffffffffff00;
                    FUN_1438d2410(param_2[8],uVar14,0,&local_540,1,uVar69);
                    FUN_1438d2410(param_2[8],uVar14,1,&local_528,1,uVar69 & 0xffffffffffffff00);
                    FUN_1438d2460(param_2[8],uVar14,0,&local_408);
                    FUN_1438d2460(param_2[8],uVar14,1,&local_488);
                    FUN_1438d2460(param_2[8],uVar14,2,&local_498);
                    uVar15 = FUN_143703a50();
                    local_520 = 0;
                    if (-1 < (int)local_51c) {
                      FUN_143702e10(uVar15,local_528,0x14,local_51c & 0x3fffffff);
                    }
                    local_528 = 0;
                    local_51c = 0x80000000;
                    uVar15 = FUN_143703a50();
                    local_538 = 0;
                    if (-1 < (int)local_534) {
                      FUN_143702e10(uVar15,local_540,0x14,local_534 & 0x3fffffff);
                    }
                    local_540 = 0;
                    local_534 = 0x80000000;
                  }
                  iVar13 = iVar13 + 1;
                  fVar55 = (float)local_478;
                  fVar57 = local_478._4_4_;
                  fVar58 = (float)uStack_470;
                  fVar21 = uStack_470._4_4_;
                } while (iVar13 < iVar17);
              }
              uVar15 = FUN_143703a50();
              local_3a0 = 0;
              if (-1 < (int)local_39c) {
                FUN_143702e10(uVar15,local_3a8,0x10,local_39c & 0x3fffffff);
              }
              local_3a8 = (float *)0x0;
              local_39c = 0x80000000;
              uVar15 = FUN_143703a50();
              local_5d0 = 0;
              if (-1 < (int)local_5cc) {
                FUN_143702e10(uVar15,local_5d8,0x14,local_5cc & 0x3fffffff);
              }
              local_5d8 = 0;
              local_5cc = 0x80000000;
              uVar15 = FUN_143703a50();
              local_5b8 = 0;
              if (-1 < (int)local_5b4) {
                FUN_143702e10(uVar15,local_5c0,0x14,local_5b4 & 0x3fffffff);
              }
              lVar18 = local_598;
              fVar53 = local_458;
              fVar55 = fStack_454;
              fVar57 = fStack_450;
              fVar58 = fStack_44c;
              fVar21 = local_448;
              fVar24 = fStack_444;
              fVar54 = fStack_440;
              fVar56 = fStack_43c;
              cVar19 = (char)local_res8[0];
            }
          }
          else {
            FUN_1437f62c0(&local_4f8);
            fVar56 = fStack_14c;
            fVar54 = fStack_150;
            fVar24 = fStack_154;
            fVar21 = local_158;
            fVar58 = fStack_1fc;
            fVar57 = fStack_200;
            fVar55 = fStack_204;
            fVar53 = local_208;
            lVar3 = *param_2;
            local_278 = (float)local_5a8 * local_208 + local_4d8;
            fStack_274 = local_5a8._4_4_ * fStack_204 + fStack_4d4;
            fStack_270 = (float)uStack_5a0 * fStack_200 + fStack_4d0;
            fStack_26c = uStack_5a0._4_4_ * fStack_1fc + fStack_4cc;
            local_268 = (float)local_5a8 * local_208 + local_4c8;
            fStack_264 = local_5a8._4_4_ * fStack_204 + fStack_4c4;
            fStack_260 = (float)uStack_5a0 * fStack_200 + fStack_4c0;
            fStack_25c = uStack_5a0._4_4_ * fStack_1fc + fStack_4bc;
            local_288 = (float)local_5a8 * local_158 + local_4c8;
            fStack_284 = local_5a8._4_4_ * fStack_154 + fStack_4c4;
            fStack_280 = (float)uStack_5a0 * fStack_150 + fStack_4c0;
            fStack_27c = uStack_5a0._4_4_ * fStack_14c + fStack_4bc;
            local_298 = (float)local_5a8 * local_158 + local_4d8;
            fStack_294 = local_5a8._4_4_ * fStack_154 + fStack_4d4;
            fStack_290 = (float)uStack_5a0 * fStack_150 + fStack_4d0;
            fStack_28c = uStack_5a0._4_4_ * fStack_14c + fStack_4cc;
            fVar40 = (fStack_4d4 - fStack_4c4) * *(float *)(lVar3 + 0x20) -
                     *(float *)(lVar3 + 0x24) * (local_4d8 - local_4c8);
            fVar43 = (fStack_4d0 - fStack_4c0) * *(float *)(lVar3 + 0x24) -
                     *(float *)(lVar3 + 0x28) * (fStack_4d4 - fStack_4c4);
            fVar44 = (local_4d8 - local_4c8) * *(float *)(lVar3 + 0x28) -
                     *(float *)(lVar3 + 0x20) * (fStack_4d0 - fStack_4c0);
            fVar25 = fVar43 * fVar43;
            fVar33 = fVar44 * fVar44;
            auVar22._8_4_ = fVar40 * fVar40;
            auVar22._4_4_ = auVar22._8_4_;
            auVar22._0_4_ = auVar22._8_4_;
            auVar22._12_4_ = auVar22._8_4_;
            fVar36 = fVar33 + fVar25 + auVar22._8_4_;
            fVar37 = fVar33 + fVar25 + auVar22._8_4_;
            fVar38 = fVar33 + fVar25 + auVar22._8_4_;
            fVar39 = fVar33 + fVar25 + auVar22._8_4_;
            auVar4._4_4_ = fVar37;
            auVar4._0_4_ = fVar36;
            auVar4._8_4_ = fVar38;
            auVar4._12_4_ = fVar39;
            auVar27 = rsqrtps(auVar22,auVar4);
            fVar25 = auVar27._0_4_;
            fVar33 = auVar27._4_4_;
            fVar34 = auVar27._8_4_;
            fVar35 = auVar27._12_4_;
            local_2a8._0_4_ =
                 (float)(~-(uint)(fVar36 <= 0.0) &
                        (uint)((3.0 - fVar36 * fVar25 * fVar25) * fVar25 * 0.5)) * fVar43 *
                 local_468;
            local_2a8._4_4_ =
                 (float)(~-(uint)(fVar37 <= 0.0) &
                        (uint)((3.0 - fVar37 * fVar33 * fVar33) * fVar33 * 0.5)) * fVar44 *
                 fStack_464;
            local_2a8._8_4_ =
                 (float)(~-(uint)(fVar38 <= 0.0) &
                        (uint)((3.0 - fVar38 * fVar34 * fVar34) * fVar34 * 0.5)) * fVar40 *
                 fStack_460;
            local_2a8._12_4_ =
                 (float)(~-(uint)(fVar39 <= 0.0) &
                        (uint)((3.0 - fVar39 * fVar35 * fVar35) * fVar35 * 0.5)) *
                 ((fStack_4cc - fStack_4bc) * *(float *)(lVar3 + 0x2c) -
                 *(float *)(lVar3 + 0x2c) * (fStack_4cc - fStack_4bc)) * fStack_45c;
            FUN_1437f9c50(param_2[5],&local_268,&local_278,&local_288,&local_298,local_2a8,
                          &local_4f8);
            FUN_1437f66a0(&local_5d8,&local_4f8);
            uVar15 = FUN_143703a50();
            local_4f0 = 0;
            if (-1 < (int)local_4ec) {
              FUN_143702e10(uVar15,local_4f8,0x14,local_4ec & 0x3fffffff);
            }
            local_4f8 = 0;
            local_4ec = 0x80000000;
            if (local_5d0 == 0) {
              uVar15 = FUN_143703a50();
              local_5d0 = 0;
              if (-1 < (int)local_5cc) {
                FUN_143702e10(uVar15,local_5d8,0x14,local_5cc & 0x3fffffff);
              }
              local_5d8 = 0;
              local_5cc = 0x80000000;
              uVar15 = FUN_143703a50();
              local_5b8 = 0;
              fVar53 = local_458;
              fVar55 = fStack_454;
              fVar57 = fStack_450;
              fVar58 = fStack_44c;
              fVar21 = local_448;
              fVar24 = fStack_444;
              fVar54 = fStack_440;
              fVar56 = fStack_43c;
              if (-1 < (int)local_5b4) {
                FUN_143702e10(uVar15,local_5c0,0x14,local_5b4 & 0x3fffffff);
                fVar53 = local_458;
                fVar55 = fStack_454;
                fVar57 = fStack_450;
                fVar58 = fStack_44c;
                fVar21 = local_448;
                fVar24 = fStack_444;
                fVar54 = fStack_440;
                fVar56 = fStack_43c;
              }
            }
            else {
              FUN_1437f62c0(&local_510);
              auVar11._4_4_ = fStack_4b4;
              auVar11._0_4_ = local_4b8;
              auVar11._8_4_ = fStack_4b0;
              auVar11._12_4_ = fStack_4ac;
              lVar3 = *param_2;
              local_228 = (float)local_5a8 * fVar53 + local_4a8;
              fStack_224 = local_5a8._4_4_ * fVar55 + fStack_4a4;
              fStack_220 = (float)uStack_5a0 * fVar57 + fStack_4a0;
              fStack_21c = uStack_5a0._4_4_ * fVar58 + fStack_49c;
              local_218 = (float)local_5a8 * fVar53 + local_4b8;
              fStack_214 = local_5a8._4_4_ * fVar55 + fStack_4b4;
              fStack_210 = (float)uStack_5a0 * fVar57 + fStack_4b0;
              fStack_20c = uStack_5a0._4_4_ * fVar58 + fStack_4ac;
              local_248 = (float)local_5a8 * fVar21 + local_4a8;
              fStack_244 = local_5a8._4_4_ * fVar24 + fStack_4a4;
              fStack_240 = (float)uStack_5a0 * fVar54 + fStack_4a0;
              fStack_23c = uStack_5a0._4_4_ * fVar56 + fStack_49c;
              local_238 = (float)local_5a8 * fVar21 + local_4b8;
              fStack_234 = local_5a8._4_4_ * fVar24 + fStack_4b4;
              fStack_230 = (float)uStack_5a0 * fVar54 + fStack_4b0;
              fStack_22c = uStack_5a0._4_4_ * fVar56 + fStack_4ac;
              fVar25 = *(float *)(lVar3 + 0x24) * (local_4a8 - local_4b8) -
                       (fStack_4a4 - fStack_4b4) * *(float *)(lVar3 + 0x20);
              fVar33 = *(float *)(lVar3 + 0x28) * (fStack_4a4 - fStack_4b4) -
                       (fStack_4a0 - fStack_4b0) * *(float *)(lVar3 + 0x24);
              fVar34 = *(float *)(lVar3 + 0x20) * (fStack_4a0 - fStack_4b0) -
                       (local_4a8 - local_4b8) * *(float *)(lVar3 + 0x28);
              fVar53 = fVar33 * fVar33;
              fVar55 = fVar34 * fVar34;
              fVar57 = fVar25 * fVar25;
              fVar24 = fVar55 + fVar53 + fVar57;
              fVar54 = fVar55 + fVar53 + fVar57;
              fVar56 = fVar55 + fVar53 + fVar57;
              fVar57 = fVar55 + fVar53 + fVar57;
              auVar5._4_4_ = fVar54;
              auVar5._0_4_ = fVar24;
              auVar5._8_4_ = fVar56;
              auVar5._12_4_ = fVar57;
              auVar27 = rsqrtps(auVar11,auVar5);
              fVar53 = auVar27._0_4_;
              fVar55 = auVar27._4_4_;
              fVar58 = auVar27._8_4_;
              fVar21 = auVar27._12_4_;
              auVar28._0_4_ = fVar53 * 0.5;
              auVar28._4_4_ = fVar55 * 0.5;
              auVar28._8_4_ = fVar58 * 0.5;
              auVar28._12_4_ = fVar21 * 0.5;
              local_258 = (float)(~-(uint)(fVar24 <= 0.0) &
                                 (uint)((3.0 - fVar53 * fVar24 * fVar53) * auVar28._0_4_)) * fVar33
                          * local_468;
              fStack_254 = (float)(~-(uint)(fVar54 <= 0.0) &
                                  (uint)((3.0 - fVar55 * fVar54 * fVar55) * auVar28._4_4_)) * fVar34
                           * fStack_464;
              fStack_250 = (float)(~-(uint)(fVar56 <= 0.0) &
                                  (uint)((3.0 - fVar58 * fVar56 * fVar58) * auVar28._8_4_)) * fVar25
                           * fStack_460;
              fStack_24c = (float)(~-(uint)(fVar57 <= 0.0) &
                                  (uint)((3.0 - fVar21 * fVar57 * fVar21) * auVar28._12_4_)) *
                           (*(float *)(lVar3 + 0x2c) * (fStack_49c - fStack_4ac) -
                           (fStack_49c - fStack_4ac) * *(float *)(lVar3 + 0x2c)) * fStack_45c;
              FUN_1437f9c50(param_2[5],&local_218,&local_228,&local_238,&local_248,&local_258,
                            &local_510);
              FUN_1437f66a0(&local_5d8,&local_510);
              uVar15 = FUN_143703a50();
              local_508 = 0;
              if (-1 < (int)local_504) {
                FUN_143702e10(uVar15,local_510,0x14,local_504 & 0x3fffffff);
              }
              local_510 = 0;
              local_504 = 0x80000000;
              if (local_5d0 != 0) goto LAB_1438d3329;
              uVar15 = FUN_143703a50();
              local_5d0 = 0;
              if (-1 < (int)local_5cc) {
                FUN_143702e10(uVar15,local_5d8,0x14,local_5cc & 0x3fffffff);
              }
              local_5d8 = 0;
              local_5cc = 0x80000000;
              uVar15 = FUN_143703a50();
              local_5b8 = 0;
              fVar53 = local_458;
              fVar55 = fStack_454;
              fVar57 = fStack_450;
              fVar58 = fStack_44c;
              fVar21 = local_448;
              fVar24 = fStack_444;
              fVar54 = fStack_440;
              fVar56 = fStack_43c;
              if (-1 < (int)local_5b4) {
                FUN_143702e10(uVar15,local_5c0,0x14,local_5b4 & 0x3fffffff);
                fVar53 = local_458;
                fVar55 = fStack_454;
                fVar57 = fStack_450;
                fVar58 = fStack_44c;
                fVar21 = local_448;
                fVar24 = fStack_444;
                fVar54 = fStack_440;
                fVar56 = fStack_43c;
              }
            }
          }
        }
        local_5c0 = 0;
        local_5b4 = 0x80000000;
      }
      lVar20 = lVar20 + 0x50;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    local_598 = 0;
  }
  local_570 = 0;
  if (-1 < (int)local_56c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_578,0x50,local_56c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d3d90 FUN_1438d3d90 body=321 status=ok
// SIG undefined FUN_1438d3d90(void)

void FUN_1438d3d90(longlong param_1,undefined4 *param_2,undefined2 param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [24];
  undefined1 local_30 [40];
  
  FUN_1438d2510(param_1,*param_2,0,param_3,local_30);
  FUN_1438d2510(param_1,*param_2,1,param_3,local_48);
  FUN_1438d2570(param_1,*param_2,0,&local_88);
  FUN_1438d2570(param_1,*param_2,1,&local_78);
  FUN_1438d2570(param_1,*param_2,2,local_68);
  pfVar6 = param_5;
  local_58 = local_78 - local_88;
  fStack_54 = fStack_74 - fStack_84;
  fStack_50 = fStack_70 - fStack_80;
  fStack_4c = fStack_6c - fStack_7c;
  fVar2 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  FUN_1437f7570(local_30,&local_88,&local_58,local_68,param_4,param_5);
  lVar7 = FUN_1437f7510(local_48,&param_5);
  fVar1 = *(float *)(lVar7 + 4);
  *param_4 = fVar1 * fVar2 + *param_4;
  param_4[1] = fVar1 * fVar3 + param_4[1];
  param_4[2] = fVar1 * fVar4 + param_4[2];
  param_4[3] = fVar1 * fVar5 + param_4[3];
  lVar7 = FUN_1437f7540(local_48,&param_5);
  fVar1 = *(float *)(lVar7 + 4);
  *pfVar6 = fVar1 * fVar2 + *pfVar6;
  pfVar6[1] = fVar1 * fVar3 + pfVar6[1];
  pfVar6[2] = fVar1 * fVar4 + pfVar6[2];
  pfVar6[3] = fVar1 * fVar5 + pfVar6[3];
  return;
}



// FUNCTION 1438d3ee0 getNumHandPlantSegments body=22 status=ok
// SIG undefined getNumHandPlantSegments(void)

undefined2 hkaiVaultUtils::getNumHandPlantSegments(undefined8 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1438d24f0(param_1,*param_2,0);
  return uVar1;
}



// FUNCTION 1438d3f00 FUN_1438d3f00 body=4036 status=ok
// SIG undefined FUN_1438d3f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d3f00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float *pfVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  uint local_res8 [2];
  undefined4 local_res10 [2];
  float local_res18;
  undefined1 local_res20 [8];
  undefined1 *puVar58;
  ulonglong uVar59;
  longlong local_438;
  int local_430;
  uint local_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  longlong local_408;
  int local_400;
  uint local_3fc;
  undefined8 local_3f8;
  int local_3f0;
  uint local_3ec;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  uint local_39c;
  undefined8 local_390;
  undefined4 local_388;
  uint local_384;
  undefined8 local_378;
  undefined8 uStack_370;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined8 local_338;
  undefined4 local_330;
  uint local_32c;
  undefined8 local_320;
  undefined4 local_318;
  uint local_314;
  undefined8 local_308;
  undefined4 local_300;
  uint local_2fc;
  undefined8 local_2f0;
  undefined4 local_2e8;
  uint local_2e4;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined2 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  float *local_288;
  undefined4 local_280;
  uint local_27c;
  float local_278 [24];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined1 local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  uVar21 = *(undefined8 *)(*param_2 + 0x20);
  uVar18 = *(undefined8 *)(*param_2 + 0x28);
  local_428 = (float)uVar21;
  fStack_424 = (float)((ulonglong)uVar21 >> 0x20);
  fStack_420 = (float)uVar18;
  fStack_41c = (float)((ulonglong)uVar18 >> 0x20);
  FUN_1438ce9e0(&local_2d8);
  local_2d8 = CONCAT44(fStack_424,local_428);
  uStack_2d0 = CONCAT44(fStack_41c,fStack_420);
  local_2c4 = *(undefined4 *)(param_1 + 0x2c);
  local_2c8 = *(undefined4 *)(*param_2 + 0x30);
  local_2c0 = *(undefined4 *)(param_1 + 0x30);
  local_2b8 = *(undefined4 *)(param_1 + 0x28);
  local_2bc = 0;
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_418 = ZEXT416(local_res8[0]);
  local_2b4 = FUN_143716040(local_418);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_418 = ZEXT416(local_res8[0]);
  local_2b0 = FUN_143716150(local_418);
  local_res8[0] = *(uint *)(param_1 + 0x1c);
  _local_418 = ZEXT416(local_res8[0]);
  local_2ac = FUN_143716040(local_418);
  lVar26 = 0;
  local_408 = 0;
  local_400 = 0;
  local_438 = 0;
  local_430 = 0;
  local_2a8 = 0x101;
  local_3fc = 0x80000000;
  local_42c = 0x80000000;
  FUN_1438cf470(param_2[3],&local_2d8,&local_438);
  iVar19 = local_430 * 2;
  if ((int)(local_3fc & 0x3fffffff) < iVar19) {
    iVar24 = (local_3fc & 0x3fffffff) * 2;
    if (iVar19 < iVar24) {
      iVar19 = iVar24;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_408,iVar19,0x50);
  }
  lVar25 = (longlong)local_430;
  lVar23 = lVar26;
  if (0 < local_430) {
    do {
      puVar1 = (undefined8 *)(local_438 + 0x10 + lVar23);
      local_378 = *puVar1;
      uStack_370 = puVar1[1];
      local_3b8 = *(undefined8 *)(local_438 + lVar23);
      uStack_3b0 = ((undefined8 *)(local_438 + lVar23))[1];
      _local_3d8 = *(undefined1 (*) [16])(local_438 + 0x30 + lVar23);
      _local_418 = *(undefined1 (*) [16])(local_438 + 0x20 + lVar23);
      local_res8[0] = *(uint *)(local_438 + 0x48 + lVar23);
      local_res10[0] = *(undefined4 *)(local_438 + 0x40 + lVar23);
      FUN_1438d6900(&local_378,&local_3b8,local_3d8,local_418,local_res10,local_res8,&local_408,
                    param_2);
      lVar25 = lVar25 + -1;
      lVar23 = lVar23 + 0x50;
    } while (lVar25 != 0);
  }
  local_430 = 0;
  if (-1 < (int)local_42c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_438,0x50,local_42c & 0x3fffffff);
  }
  FUN_1437f62c0(&local_3f8);
  FUN_1437f62c0(&local_2f0);
  FUN_1437f62c0(&local_338);
  uVar20 = *(undefined4 *)(param_1 + 0x34);
  local_128._4_4_ = uVar20;
  local_128._0_4_ = uVar20;
  local_128._8_4_ = uVar20;
  local_128._12_4_ = uVar20;
  fStack_16c = *(float *)(*param_2 + 0x30);
  local_178 = fStack_16c * fStack_16c;
  fStack_174 = fStack_16c * fStack_16c;
  fStack_170 = fStack_16c * fStack_16c;
  fStack_16c = fStack_16c * fStack_16c;
  local_298 = *(undefined4 *)(*param_2 + 0x3c);
  local_148 = *(undefined4 *)(param_1 + 0x40);
  uStack_294 = local_298;
  uStack_290 = local_298;
  uStack_28c = local_298;
  uStack_144 = local_148;
  uStack_140 = local_148;
  uStack_13c = local_148;
  FUN_143716280(local_128,&local_158,&local_168);
  FUN_1437f62c0(&local_320);
  FUN_1437f62c0(&local_308);
  lVar23 = (longlong)local_400;
  local_438 = lVar23;
  if (0 < lVar23) {
    do {
      lVar25 = local_408;
      pfVar22 = (float *)(local_408 + 0x30 + lVar26);
      fVar54 = *pfVar22;
      fVar55 = pfVar22[1];
      local_3b8 = *(undefined8 *)pfVar22;
      fVar56 = pfVar22[2];
      fVar57 = pfVar22[3];
      uStack_3b0 = *(undefined8 *)(pfVar22 + 2);
      pfVar22 = (float *)(local_408 + lVar26);
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      local_378 = *(undefined8 *)pfVar22;
      fVar8 = pfVar22[2];
      fVar9 = pfVar22[3];
      uStack_370 = *(undefined8 *)(pfVar22 + 2);
      pfVar22 = (float *)(local_408 + 0x10 + lVar26);
      fVar10 = *pfVar22;
      fVar11 = pfVar22[1];
      fVar12 = pfVar22[2];
      fVar13 = pfVar22[3];
      pfVar22 = (float *)(local_408 + 0x20 + lVar26);
      fVar14 = *pfVar22;
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      local_438 = lVar23;
      local_368 = fVar14;
      fStack_364 = fVar15;
      fStack_360 = fVar16;
      fStack_35c = fVar17;
      local_358 = fVar54;
      fStack_354 = fVar55;
      fStack_350 = fVar56;
      fStack_34c = fVar57;
      local_348 = fVar10;
      fStack_344 = fVar11;
      fStack_340 = fVar12;
      fStack_33c = fVar13;
      iVar19 = FUN_1438d7180(&local_378,&local_348,param_2);
      if ((iVar19 != 0) && (iVar19 = FUN_1438d7180(&local_358,&local_368,param_2), iVar19 != 0)) {
        fVar40 = (float)uStack_370 * fStack_420 +
                 local_378._4_4_ * fStack_424 + (float)local_378 * local_428;
        fVar44 = fStack_340 * fStack_420 + fStack_344 * fStack_424 + local_348 * local_428;
        auVar42._8_4_ = fStack_360 * fStack_420 + fStack_364 * fStack_424 + local_368 * local_428;
        fVar47 = fStack_350 * fStack_420 + fStack_354 * fStack_424 + local_358 * local_428;
        auVar30._4_4_ = fVar44;
        auVar30._0_4_ = fVar44;
        auVar30._8_4_ = fVar44;
        auVar30._12_4_ = fVar44;
        auVar29._4_4_ = fVar40;
        auVar29._0_4_ = fVar40;
        auVar29._8_4_ = fVar40;
        auVar29._12_4_ = fVar40;
        auVar43._4_4_ = fVar47;
        auVar43._0_4_ = fVar47;
        auVar43._8_4_ = fVar47;
        auVar43._12_4_ = fVar47;
        auVar42._4_4_ = auVar42._8_4_;
        auVar42._0_4_ = auVar42._8_4_;
        auVar42._12_4_ = auVar42._8_4_;
        auVar43 = minps(auVar42,auVar43);
        auVar30 = maxps(auVar29,auVar30);
        if (auVar30._0_4_ < auVar43._0_4_) {
          FUN_1438d5b00(&local_378,&local_348,local_res10,&local_298,&local_428);
          FUN_1438d5b00(&local_368,&local_358,local_res20,&local_298,&local_428);
          CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_3f8);
          local_138 = *(undefined4 *)(param_1 + 0x44);
          uStack_134 = local_138;
          uStack_130 = local_138;
          uStack_12c = local_138;
          FUN_1438d6450(&local_378,&local_348,&local_368,&local_358,&local_148,&local_138,param_2,
                        &local_3f8);
          hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_3f8);
          if (local_3f0 != 0) {
            local_res18 = *(float *)(param_1 + 0x3c);
            _local_3d8 = ZEXT416((uint)local_res18);
            local_res18 = (float)FUN_143716040(local_3d8);
            local_288 = local_278;
            local_3d8._4_4_ = *(undefined4 *)(param_1 + 0x38);
            auVar31._4_4_ = local_res18;
            auVar31._0_4_ = local_res18;
            auVar31._8_4_ = local_res18;
            auVar31._12_4_ = local_res18;
            local_3d8._0_4_ = local_3d8._4_4_;
            fStack_3d0 = (float)local_3d8._4_4_;
            fStack_3cc = (float)local_3d8._4_4_;
            local_280 = 0;
            local_27c = 0x80000006;
            local_1a8 = auVar31;
            uVar21 = FUN_143703a50();
            if ((local_27c & 0x3fffffff) < 6) {
              uVar5 = (local_27c & 0x3fffffff) * 2;
              uVar4 = 6;
              if (6 < uVar5) {
                uVar4 = uVar5;
              }
              FUN_14370c310(uVar21,&local_288,uVar4,0x10);
            }
            iVar19 = local_3f0;
            fVar54 = fVar54 - fVar14;
            fVar55 = fVar55 - fVar15;
            fVar56 = fVar56 - fVar16;
            fVar57 = fVar57 - fVar17;
            local_280 = 6;
            fVar51 = local_428 * fVar55 - fStack_424 * fVar54;
            fVar52 = fStack_424 * fVar56 - fStack_420 * fVar55;
            fVar53 = fStack_420 * fVar54 - local_428 * fVar56;
            fVar40 = fVar52 * fVar52;
            fVar44 = fVar53 * fVar53;
            fVar47 = fVar51 * fVar51;
            fVar36 = fVar44 + fVar40 + fVar47;
            fVar37 = fVar44 + fVar40 + fVar47;
            fVar38 = fVar44 + fVar40 + fVar47;
            auVar2._4_4_ = fVar37;
            auVar2._0_4_ = fVar36;
            auVar2._8_4_ = fVar38;
            auVar2._12_4_ = fVar44 + fVar40 + fVar47;
            auVar30 = rsqrtps(auVar31,auVar2);
            fVar40 = auVar30._0_4_;
            fVar44 = auVar30._4_4_;
            fVar47 = auVar30._8_4_;
            fVar52 = fVar52 * (float)(~-(uint)(fVar36 <= 0.0) &
                                     (uint)((3.0 - fVar40 * fVar36 * fVar40) * fVar40 * 0.5));
            fVar53 = fVar53 * (float)(~-(uint)(fVar37 <= 0.0) &
                                     (uint)((3.0 - fVar44 * fVar37 * fVar44) * fVar44 * 0.5));
            fVar51 = fVar51 * (float)(~-(uint)(fVar38 <= 0.0) &
                                     (uint)((3.0 - fVar47 * fVar38 * fVar47) * fVar47 * 0.5));
            fVar40 = 0.0 - (fVar53 * fVar15 + fVar52 * fVar14 + fVar51 * fVar16);
            fVar37 = fVar53 * fVar54 - fVar52 * fVar55;
            fVar38 = fVar51 * fVar55 - fVar53 * fVar56;
            fVar39 = fVar52 * fVar56 - fVar51 * fVar54;
            local_f8 = 0x80000000;
            uStack_f0 = 0;
            fVar44 = fVar38 * fVar38;
            fVar47 = fVar39 * fVar39;
            auVar28._8_4_ = fVar37 * fVar37;
            auVar28._4_4_ = auVar28._8_4_;
            auVar28._0_4_ = auVar28._8_4_;
            auVar28._12_4_ = auVar28._8_4_;
            auVar32._0_4_ = fVar47 + fVar44 + auVar28._8_4_;
            auVar32._4_4_ = fVar47 + fVar44 + auVar28._8_4_;
            auVar32._8_4_ = fVar47 + fVar44 + auVar28._8_4_;
            auVar32._12_4_ = fVar47 + fVar44 + auVar28._8_4_;
            auVar30 = rsqrtps(auVar28,auVar32);
            fVar44 = auVar30._0_4_;
            fVar47 = auVar30._4_4_;
            fVar36 = auVar30._8_4_;
            fVar38 = (float)(~-(uint)(auVar32._0_4_ <= 0.0) &
                            (uint)((3.0 - fVar44 * auVar32._0_4_ * fVar44) * fVar44 * 0.5)) * fVar38
            ;
            fVar39 = (float)(~-(uint)(auVar32._4_4_ <= 0.0) &
                            (uint)((3.0 - fVar47 * auVar32._4_4_ * fVar47) * fVar47 * 0.5)) * fVar39
            ;
            fVar37 = (float)(~-(uint)(auVar32._8_4_ <= 0.0) &
                            (uint)((3.0 - fVar36 * auVar32._8_4_ * fVar36) * fVar36 * 0.5)) * fVar37
            ;
            fVar44 = 0.0 - (fVar39 * fStack_364 + fVar38 * local_368 + fVar37 * fStack_360);
            *local_288 = -fVar52;
            local_288[1] = -fVar53;
            local_288[2] = -fVar51;
            local_288[3] = -fVar40 - fStack_3cc;
            local_288[4] = fVar52;
            local_288[5] = fVar53;
            local_288[6] = fVar51;
            local_288[7] = fVar40 - fStack_3cc;
            local_288[8] = -fVar38;
            local_288[9] = -fVar39;
            local_288[10] = -fVar37;
            local_288[0xb] = -fVar44 - fStack_3cc;
            local_288[0xc] = fVar38;
            local_288[0xd] = fVar39;
            local_288[0xe] = fVar37;
            local_288[0xf] = fVar44 - fStack_3cc;
            local_1c8 = (((fVar10 + (float)local_3b8) - fVar6) - fVar14) * _DAT_1467f07e0;
            fStack_1c4 = (((fVar11 + local_3b8._4_4_) - fVar7) - fVar15) * fRam00000001467f07e4;
            fStack_1c0 = (((fVar12 + (float)uStack_3b0) - fVar8) - fVar16) * fRam00000001467f07e8;
            fStack_1bc = (((fVar13 + uStack_3b0._4_4_) - fVar9) - fVar17) * fRam00000001467f07ec;
            fVar40 = local_1c8 * local_428;
            fVar44 = fStack_1c4 * fStack_424;
            fVar47 = fStack_1c0 * fStack_420;
            auVar33._0_4_ = (fVar44 + fVar40 + fVar47) * local_428;
            auVar33._4_4_ = (fVar44 + fVar40 + fVar47) * fStack_424;
            auVar33._8_4_ = (fVar44 + fVar40 + fVar47) * fStack_420;
            auVar33._12_4_ = (fVar44 + fVar40 + fVar47) * fStack_41c;
            local_1b8 = local_1c8 - auVar33._0_4_;
            fStack_1b4 = fStack_1c4 - auVar33._4_4_;
            fStack_1b0 = fStack_1c0 - auVar33._8_4_;
            fStack_1ac = fStack_1bc - auVar33._12_4_;
            fVar40 = local_1b8 * local_1b8;
            fVar44 = fStack_1b4 * fStack_1b4;
            fVar47 = fStack_1b0 * fStack_1b0;
            fVar38 = fVar44 + fVar40 + fVar47;
            fVar39 = fVar44 + fVar40 + fVar47;
            fVar51 = fVar44 + fVar40 + fVar47;
            fVar47 = fVar44 + fVar40 + fVar47;
            auVar3._4_4_ = fVar39;
            auVar3._0_4_ = fVar38;
            auVar3._8_4_ = fVar51;
            auVar3._12_4_ = fVar47;
            auVar30 = rsqrtps(auVar33,auVar3);
            fVar40 = auVar30._0_4_;
            fVar44 = auVar30._4_4_;
            fVar36 = auVar30._8_4_;
            fVar37 = auVar30._12_4_;
            iVar24 = 0;
            local_118 = (float)(~-(uint)(fVar38 <= 0.0) &
                               (uint)((3.0 - fVar40 * fVar38 * fVar40) * fVar40 * 0.5)) * local_1b8;
            fStack_114 = (float)(~-(uint)(fVar39 <= 0.0) &
                                (uint)((3.0 - fVar44 * fVar39 * fVar44) * fVar44 * 0.5)) *
                         fStack_1b4;
            fStack_110 = (float)(~-(uint)(fVar51 <= 0.0) &
                                (uint)((3.0 - fVar36 * fVar51 * fVar36) * fVar36 * 0.5)) *
                         fStack_1b0;
            fStack_10c = (float)(~-(uint)(fVar47 <= 0.0) &
                                (uint)((3.0 - fVar37 * fVar47 * fVar37) * fVar37 * 0.5)) *
                         fStack_1ac;
            fVar37 = (fVar14 - fVar6) * local_428;
            fVar38 = (fVar15 - fVar7) * fStack_424;
            fVar39 = (fVar16 - fVar8) * fStack_420;
            local_418._0_4_ = (fVar14 - fVar6) - (fVar38 + fVar37 + fVar39) * local_428;
            local_418._4_4_ = (fVar15 - fVar7) - (fVar38 + fVar37 + fVar39) * fStack_424;
            fStack_410 = (fVar16 - fVar8) - (fVar38 + fVar37 + fVar39) * fStack_420;
            fVar40 = (float)local_418._0_4_ * (float)local_418._0_4_;
            fVar44 = (float)local_418._4_4_ * (float)local_418._4_4_;
            fVar47 = fStack_410 * fStack_410;
            auVar27._4_4_ = fVar40;
            auVar27._0_4_ = fVar40;
            auVar27._8_4_ = fVar40;
            auVar27._12_4_ = fVar40;
            auVar34._0_4_ = fVar44 + fVar40 + fVar47;
            auVar34._4_4_ = fVar44 + fVar40 + fVar47;
            auVar34._8_4_ = fVar44 + fVar40 + fVar47;
            auVar34._12_4_ = fVar44 + fVar40 + fVar47;
            auVar30 = rsqrtps(auVar27,auVar34);
            fVar40 = auVar30._0_4_;
            fVar44 = auVar30._4_4_;
            fVar47 = auVar30._8_4_;
            fVar36 = auVar30._12_4_;
            local_418._0_4_ =
                 (float)local_418._0_4_ *
                 (float)(~-(uint)(auVar34._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar34._0_4_ * fVar40 * fVar40) * fVar40 * 0.5));
            local_418._4_4_ =
                 (float)local_418._4_4_ *
                 (float)(~-(uint)(auVar34._4_4_ <= 0.0) &
                        (uint)((3.0 - auVar34._4_4_ * fVar44 * fVar44) * fVar44 * 0.5));
            fStack_410 = fStack_410 *
                         (float)(~-(uint)(auVar34._8_4_ <= 0.0) &
                                (uint)((3.0 - auVar34._8_4_ * fVar47 * fVar47) * fVar47 * 0.5));
            fStack_40c = ((fVar17 - fVar9) - (fVar38 + fVar37 + fVar39) * fStack_41c) *
                         (float)(~-(uint)(auVar34._12_4_ <= 0.0) &
                                (uint)((3.0 - auVar34._12_4_ * fVar36 * fVar36) * fVar36 * 0.5));
            local_108._0_4_ = (0.0 - local_158) * (float)local_418._0_4_ + local_168 * local_428;
            local_108._4_4_ = (0.0 - fStack_154) * (float)local_418._4_4_ + fStack_164 * fStack_424;
            local_108._8_4_ = (0.0 - fStack_150) * fStack_410 + fStack_160 * fStack_420;
            local_108._12_4_ = (0.0 - fStack_14c) * fStack_40c + fStack_15c * fStack_41c;
            if (0 < local_3f0) {
              do {
                pfVar22 = (float *)FUN_1437f7500(&local_3f8,iVar24);
                fVar40 = *pfVar22;
                fVar44 = pfVar22[1];
                local_3c8 = pfVar22[4];
                fVar47 = fVar40 * (fVar10 - fVar6) + fVar6;
                fVar36 = fVar40 * (fVar11 - fVar7) + fVar7;
                fVar37 = fVar40 * (fVar12 - fVar8) + fVar8;
                fVar38 = fVar40 * (fVar13 - fVar9) + fVar9;
                fVar39 = fVar44 * (fVar10 - fVar6) + fVar6;
                fVar51 = fVar44 * (fVar11 - fVar7) + fVar7;
                fVar52 = fVar44 * (fVar12 - fVar8) + fVar8;
                fVar53 = fVar44 * (fVar13 - fVar9) + fVar9;
                if (local_178 <=
                    (fVar36 - fVar51) * (fVar36 - fVar51) + (fVar47 - fVar39) * (fVar47 - fVar39) +
                    (fVar37 - fVar52) * (fVar37 - fVar52)) {
                  fVar48 = fVar40 * fVar54 + fVar14;
                  fVar49 = fVar40 * fVar55 + fVar15;
                  fVar50 = fVar40 * fVar56 + fVar16;
                  fVar41 = fVar44 * fVar54 + fVar14;
                  fVar45 = fVar44 * fVar55 + fVar15;
                  fVar46 = fVar44 * fVar56 + fVar16;
                  local_3b8 = CONCAT44((fVar49 - fVar36) * fRam00000001467f07e4 + fVar36,
                                       (fVar48 - fVar47) * _DAT_1467f07e0 + fVar47);
                  uStack_3b0 = CONCAT44(((fVar40 * fVar57 + fVar17) - fVar38) * fRam00000001467f07ec
                                        + fVar38,(fVar50 - fVar37) * fRam00000001467f07e8 + fVar37);
                  local_3d8._4_4_ = (fVar45 - fVar51) * fRam00000001467f07e4 + fVar51;
                  local_3d8._0_4_ = (fVar41 - fVar39) * _DAT_1467f07e0 + fVar39;
                  fStack_3d0 = (fVar46 - fVar52) * fRam00000001467f07e8 + fVar52;
                  fStack_3cc = ((fVar44 * fVar57 + fVar17) - fVar53) * fRam00000001467f07ec + fVar53
                  ;
                  FUN_143830830(&local_218);
                  local_1e8 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                  local_1e4 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                  local_1e0 = *(undefined4 *)(lVar25 + 0x40 + lVar26);
                  local_1dc = *(undefined4 *)(lVar25 + 0x44 + lVar26);
                  local_1cc = 1;
                  local_218 = fVar47;
                  fStack_214 = fVar39;
                  fStack_210 = fVar41;
                  fStack_20c = fVar48;
                  local_208 = fVar36;
                  fStack_204 = fVar51;
                  fStack_200 = fVar45;
                  fStack_1fc = fVar49;
                  local_1f8 = fVar37;
                  fStack_1f4 = fVar52;
                  fStack_1f0 = fVar46;
                  fStack_1ec = fVar50;
                  FUN_143831c80(local_res8,&local_218);
                  local_res18 = *(float *)(param_1 + 0x24);
                  if (*(float *)(param_1 + 0x24) <= (float)((int)(short)local_res8[0] << 0x10)) {
                    local_res18 = (float)((int)(short)local_res8[0] << 0x10);
                  }
                  local_res18 = local_res18 * 1.0039062;
                  local_1d0 = (undefined2)((uint)local_res18 >> 0x10);
                  local_1ce = 0;
                  uVar20 = FUN_1438d2240(param_2[8],&local_218,1,*(undefined4 *)(param_1 + 0x20));
                  fVar52 = fStack_10c;
                  fVar51 = fStack_110;
                  fVar39 = fStack_114;
                  fVar38 = local_118;
                  fVar47 = (float)((uint)fStack_114 ^ (uint)local_f8);
                  fVar36 = (float)((uint)fStack_110 ^ (uint)local_f8);
                  fVar37 = (float)((uint)fStack_10c ^ local_f8._4_4_);
                  local_288[0x10] = (float)((uint)local_118 ^ (uint)local_f8);
                  local_288[0x11] = fVar47;
                  local_288[0x12] = fVar36;
                  local_288[0x13] = fVar37;
                  fVar47 = local_288[0x10];
                  fVar36 = local_288[0x11];
                  fVar37 = local_288[0x12];
                  local_288[0x10] = fVar47;
                  local_288[0x11] = fVar36;
                  local_288[0x12] = fVar37;
                  local_288[0x13] =
                       0.0 - (local_3b8._4_4_ * fVar36 + (float)local_3b8 * fVar47 +
                             (float)uStack_3b0 * fVar37);
                  local_288[0x14] = fVar38;
                  local_288[0x15] = fVar39;
                  local_288[0x16] = fVar51;
                  local_288[0x17] = fVar52;
                  fVar47 = local_288[0x14];
                  fVar36 = local_288[0x15];
                  fVar37 = local_288[0x16];
                  local_288[0x14] = fVar47;
                  local_288[0x15] = fVar36;
                  local_288[0x16] = fVar37;
                  local_288[0x17] =
                       0.0 - ((float)local_3d8._4_4_ * fVar36 + (float)local_3d8._0_4_ * fVar47 +
                             fStack_3d0 * fVar37);
                  local_288[0x10] = local_288[0x10];
                  local_288[0x11] = local_288[0x11];
                  local_288[0x12] = local_288[0x12];
                  local_288[0x13] = local_288[0x13] - fRam00000001467f06fc;
                  auVar35._0_12_ = SUB1612(*(undefined1 (*) [16])(local_288 + 0x14),0);
                  auVar35._12_4_ =
                       SUB164(*(undefined1 (*) [16])(local_288 + 0x14),0xc) - fRam00000001467f06fc;
                  *(undefined1 (*) [16])(local_288 + 0x14) = auVar35;
                  FUN_1437f62c0(&local_3a8);
                  FUN_1437f62c0(&local_390);
                  FUN_1437f8d50(param_2[5],&local_288,&local_3b8,local_3d8,local_108,local_418,
                                &local_428,&local_3a8,&local_390);
                  puVar58 = local_198;
                  local_188 = local_1c8 * (fVar44 - fVar40);
                  fStack_184 = fStack_1c4 * (fVar44 - fVar40);
                  fStack_180 = fStack_1c0 * (fVar44 - fVar40);
                  fStack_17c = fStack_1bc * (fVar44 - fVar40);
                  local_198._0_4_ = local_1b8 * (fVar44 - fVar40);
                  local_198._4_4_ = fStack_1b4 * (fVar44 - fVar40);
                  local_198._8_4_ = fStack_1b0 * (fVar44 - fVar40);
                  local_198._12_4_ = fStack_1ac * (fVar44 - fVar40);
                  FUN_1438d5cc0(&local_3a8,&local_390,&local_188,local_418,&local_428,puVar58,
                                local_1a8);
                  uVar59 = (ulonglong)puVar58 & 0xffffffffffffff00;
                  FUN_1438d2410(param_2[8],uVar20,0,&local_3a8,1,uVar59);
                  FUN_1438d2410(param_2[8],uVar20,1,&local_390,1,uVar59 & 0xffffffffffffff00);
                  FUN_1438d2460(param_2[8],uVar20,0,&local_3b8);
                  FUN_1438d2460(param_2[8],uVar20,1,local_3d8);
                  FUN_1438d2460(param_2[8],uVar20,2,local_418);
                  uVar21 = FUN_143703a50();
                  local_388 = 0;
                  if (-1 < (int)local_384) {
                    FUN_143702e10(uVar21,local_390,0x14,local_384 & 0x3fffffff);
                  }
                  local_390 = 0;
                  local_384 = 0x80000000;
                  uVar21 = FUN_143703a50();
                  local_3a0 = 0;
                  if (-1 < (int)local_39c) {
                    FUN_143702e10(uVar21,local_3a8,0x14,local_39c & 0x3fffffff);
                  }
                  local_3a8 = 0;
                  local_39c = 0x80000000;
                }
                iVar24 = iVar24 + 1;
                lVar23 = local_438;
              } while (iVar24 < iVar19);
            }
            uVar21 = FUN_143703a50();
            local_280 = 0;
            if (-1 < (int)local_27c) {
              FUN_143702e10(uVar21,local_288,0x10,local_27c & 0x3fffffff);
            }
          }
        }
      }
      lVar26 = lVar26 + 0x50;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    local_438 = 0;
  }
  uVar21 = FUN_143703a50();
  local_300 = 0;
  if (-1 < (int)local_2fc) {
    FUN_143702e10(uVar21,local_308,0x14,local_2fc & 0x3fffffff);
  }
  local_308 = 0;
  local_2fc = 0x80000000;
  uVar21 = FUN_143703a50();
  local_318 = 0;
  if (-1 < (int)local_314) {
    FUN_143702e10(uVar21,local_320,0x14,local_314 & 0x3fffffff);
  }
  local_320 = 0;
  local_314 = 0x80000000;
  uVar21 = FUN_143703a50();
  local_330 = 0;
  if (-1 < (int)local_32c) {
    FUN_143702e10(uVar21,local_338,0x14,local_32c & 0x3fffffff);
  }
  local_338 = 0;
  local_32c = 0x80000000;
  uVar21 = FUN_143703a50();
  local_2e8 = 0;
  if (-1 < (int)local_2e4) {
    FUN_143702e10(uVar21,local_2f0,0x14,local_2e4 & 0x3fffffff);
  }
  local_2f0 = 0;
  local_2e4 = 0x80000000;
  uVar21 = FUN_143703a50();
  local_3f0 = 0;
  if (-1 < (int)local_3ec) {
    FUN_143702e10(uVar21,local_3f8,0x14,local_3ec & 0x3fffffff);
  }
  local_3f8 = 0;
  local_400 = 0;
  local_3ec = 0x80000000;
  if (-1 < (int)local_3fc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_408,0x50,local_3fc & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d4ed0 FUN_1438d4ed0 body=1869 status=ok
// SIG undefined FUN_1438d4ed0(void)

void FUN_1438d4ed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
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
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  float local_res18;
  undefined1 local_res20 [8];
  longlong local_258;
  int local_250;
  uint local_24c;
  undefined1 local_248 [8];
  float fStack_240;
  longlong local_238;
  int local_230;
  uint local_22c;
  undefined8 local_228;
  int local_220;
  uint local_21c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined1 local_196;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined2 local_130;
  undefined2 local_12e;
  undefined1 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  
  lVar21 = *param_2;
  local_208 = *(float *)(lVar21 + 0x20);
  fStack_204 = *(float *)(lVar21 + 0x24);
  fStack_200 = *(float *)(lVar21 + 0x28);
  uStack_1fc = *(undefined4 *)(lVar21 + 0x2c);
  FUN_1438ce9e0(&local_1c8);
  local_1c8 = CONCAT44(fStack_204,local_208);
  uStack_1c0 = CONCAT44(uStack_1fc,fStack_200);
  local_1b4 = *(uint *)(param_1 + 0x2c) ^ 0x80000000;
  local_1b8 = *(undefined4 *)(*param_2 + 0x30);
  local_1b0 = *(uint *)(param_1 + 0x28) ^ 0x80000000;
  local_1ac = *(undefined4 *)(param_1 + 0x34);
  local_1a8 = *(undefined4 *)(param_1 + 0x30);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_248 = ZEXT416(local_res8[0]);
  local_1a4 = FUN_143716040(local_248);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_248 = ZEXT416(local_res8[0]);
  local_1a0 = FUN_143716150(local_248);
  local_res8[0] = *(uint *)(param_1 + 0x1c);
  _local_248 = ZEXT416(local_res8[0]);
  local_19c = FUN_143716040(local_248);
  lVar21 = 0;
  local_238 = 0;
  local_230 = 0;
  local_258 = 0;
  local_250 = 0;
  local_198 = 1;
  local_196 = 1;
  local_22c = 0x80000000;
  local_24c = 0x80000000;
  FUN_1438cf470(param_2[3],&local_1c8,&local_258);
  iVar16 = local_250 * 2;
  if ((int)(local_22c & 0x3fffffff) < iVar16) {
    iVar19 = (local_22c & 0x3fffffff) * 2;
    if (iVar16 < iVar19) {
      iVar16 = iVar19;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_238,iVar16,0x50);
  }
  lVar20 = (longlong)local_250;
  if (0 < local_250) {
    do {
      puVar1 = (undefined8 *)(lVar21 + 0x10 + local_258);
      local_1f8 = *puVar1;
      uStack_1f0 = puVar1[1];
      local_1e8 = *(undefined8 *)(lVar21 + local_258);
      uStack_1e0 = ((undefined8 *)(lVar21 + local_258))[1];
      puVar1 = (undefined8 *)(lVar21 + 0x30 + local_258);
      local_1d8 = *puVar1;
      uStack_1d0 = puVar1[1];
      _local_248 = *(undefined1 (*) [16])(lVar21 + 0x20 + local_258);
      local_res8[0] = *(uint *)(lVar21 + 0x48 + local_258);
      local_res10[0] = *(undefined4 *)(lVar21 + 0x40 + local_258);
      FUN_1438d6900(&local_1f8,&local_1e8,&local_1d8,local_248,local_res10,local_res8,&local_238,
                    param_2);
      lVar21 = lVar21 + 0x50;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  lVar21 = 0;
  local_250 = 0;
  if (-1 < (int)local_24c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_258,0x50,local_24c & 0x3fffffff);
  }
  local_118 = *(undefined4 *)(param_1 + 0x38);
  fVar3 = *(float *)(*param_2 + 0x30);
  local_188 = *(undefined4 *)(*param_2 + 0x3c);
  uStack_184 = local_188;
  uStack_180 = local_188;
  uStack_17c = local_188;
  uStack_114 = local_118;
  uStack_110 = local_118;
  uStack_10c = local_118;
  FUN_1437f62c0(&local_228);
  lVar20 = (longlong)local_230;
  local_258 = lVar20;
  if (0 < lVar20) {
    do {
      lVar15 = local_238;
      iVar19 = 0;
      pfVar17 = (float *)(lVar21 + local_238);
      fVar4 = *pfVar17;
      fVar5 = pfVar17[1];
      local_1f8 = *(undefined8 *)pfVar17;
      fVar6 = pfVar17[2];
      uStack_1f0 = *(undefined8 *)(pfVar17 + 2);
      pfVar17 = (float *)(lVar21 + 0x10 + local_238);
      fVar7 = *pfVar17;
      fVar8 = pfVar17[1];
      local_1e8 = *(undefined8 *)pfVar17;
      fVar37 = pfVar17[2];
      uStack_1e0 = *(undefined8 *)(pfVar17 + 2);
      pfVar17 = (float *)(lVar21 + 0x20 + local_238);
      fVar9 = *pfVar17;
      fVar10 = pfVar17[1];
      local_1d8 = *(undefined8 *)pfVar17;
      fVar11 = pfVar17[2];
      uStack_1d0 = *(undefined8 *)(pfVar17 + 2);
      pauVar2 = (undefined1 (*) [16])(lVar21 + 0x30 + local_238);
      fVar12 = *(float *)*pauVar2;
      fVar13 = *(float *)(*pauVar2 + 4);
      fVar14 = *(float *)(*pauVar2 + 8);
      _local_248 = *pauVar2;
      local_258 = lVar20;
      iVar16 = FUN_1438d7180(&local_1f8,&local_1e8,param_2);
      if ((iVar16 != 0) && (iVar16 = FUN_1438d7180(local_248,&local_1d8,param_2), iVar16 != 0)) {
        fVar26 = (float)uStack_1f0 * fStack_200 +
                 local_1f8._4_4_ * fStack_204 + (float)local_1f8 * local_208;
        fVar30 = (float)uStack_1e0 * fStack_200 +
                 local_1e8._4_4_ * fStack_204 + (float)local_1e8 * local_208;
        auVar28._8_4_ =
             (float)uStack_1d0 * fStack_200 +
             local_1d8._4_4_ * fStack_204 + (float)local_1d8 * local_208;
        fVar33 = fStack_240 * fStack_200 +
                 (float)local_248._4_4_ * fStack_204 + (float)local_248._0_4_ * local_208;
        auVar22._4_4_ = fVar26;
        auVar22._0_4_ = fVar26;
        auVar22._8_4_ = fVar26;
        auVar22._12_4_ = fVar26;
        auVar28._4_4_ = auVar28._8_4_;
        auVar28._0_4_ = auVar28._8_4_;
        auVar28._12_4_ = auVar28._8_4_;
        auVar29._4_4_ = fVar33;
        auVar29._0_4_ = fVar33;
        auVar29._8_4_ = fVar33;
        auVar29._12_4_ = fVar33;
        auVar29 = maxps(auVar28,auVar29);
        auVar23._4_4_ = fVar30;
        auVar23._0_4_ = fVar30;
        auVar23._8_4_ = fVar30;
        auVar23._12_4_ = fVar30;
        auVar23 = minps(auVar22,auVar23);
        if (auVar29._0_4_ < auVar23._0_4_) {
          FUN_1438d5b00(&local_1f8,&local_1e8,local_res10,&local_188,&local_208);
          FUN_1438d5b00(&local_1d8,local_248,local_res20,&local_188,&local_208);
          CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_228);
          local_128 = *(undefined4 *)(param_1 + 0x3c);
          uStack_124 = local_128;
          uStack_120 = local_128;
          uStack_11c = local_128;
          FUN_1438d6450(local_248,&local_1d8,&local_1e8,&local_1f8,&local_118,&local_128,param_2,
                        &local_228);
          FUN_1437f7600(&local_228,0x3f000000);
          hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_228,local_res10[0]);
          iVar16 = local_220;
          if ((local_220 != 0) && (0 < local_220)) {
            fVar37 = fVar37 - fVar6;
            do {
              pfVar17 = (float *)FUN_1437f7500(&local_228,iVar19);
              fVar26 = *pfVar17;
              fVar30 = pfVar17[1];
              fVar27 = fVar26 * (fVar7 - fVar4) + fVar4;
              fVar31 = fVar26 * (fVar8 - fVar5) + fVar5;
              fVar32 = fVar26 * fVar37 + fVar6;
              fVar34 = fVar30 * (fVar7 - fVar4) + fVar4;
              fVar35 = fVar30 * (fVar8 - fVar5) + fVar5;
              fVar36 = fVar30 * fVar37 + fVar6;
              fVar33 = fVar27 - fVar34;
              fVar24 = fVar31 - fVar35;
              fVar25 = fVar32 - fVar36;
              if (fVar3 * fVar3 <= fVar24 * fVar24 + fVar33 * fVar33 + fVar25 * fVar25) {
                FUN_143830830(&local_178);
                fVar33 = fVar12 - fVar9;
                fVar24 = fVar13 - fVar10;
                fVar25 = fVar14 - fVar11;
                fStack_170 = fVar30 * fVar33 + fVar9;
                fStack_16c = fVar26 * fVar33 + fVar9;
                local_168._4_4_ = fVar35;
                local_168._0_4_ = fVar31;
                local_168._8_4_ = fVar30 * fVar24 + fVar10;
                local_168._12_4_ = fVar26 * fVar24 + fVar10;
                local_158._4_4_ = fVar36;
                local_158._0_4_ = fVar32;
                local_158._8_4_ = fVar30 * fVar25 + fVar11;
                local_158._12_4_ = fVar26 * fVar25 + fVar11;
                local_148 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                local_144 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                local_140 = *(undefined4 *)(lVar21 + 0x40 + lVar15);
                local_13c = *(undefined4 *)(lVar21 + 0x44 + lVar15);
                local_12c = 1;
                local_178 = fVar27;
                fStack_174 = fVar34;
                FUN_143831c80(local_res8,&local_178);
                local_res18 = *(float *)(param_1 + 0x24);
                if (*(float *)(param_1 + 0x24) <= (float)((int)(short)local_res8[0] << 0x10)) {
                  local_res18 = (float)((int)(short)local_res8[0] << 0x10);
                }
                local_res18 = local_res18 * 1.0039062;
                local_12e = 0;
                local_130 = (undefined2)((uint)local_res18 >> 0x10);
                FUN_1438d2240(param_2[8],&local_178,4,*(undefined4 *)(param_1 + 0x20));
              }
              iVar19 = iVar19 + 1;
              lVar20 = local_258;
            } while (iVar19 < iVar16);
          }
        }
      }
      lVar21 = lVar21 + 0x50;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    local_258 = 0;
  }
  uVar18 = FUN_143703a50();
  local_220 = 0;
  if (-1 < (int)local_21c) {
    FUN_143702e10(uVar18,local_228,0x14,local_21c & 0x3fffffff);
  }
  local_228 = 0;
  local_230 = 0;
  local_21c = 0x80000000;
  if (-1 < (int)local_22c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_238,0x50,local_22c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d5620 FUN_1438d5620 body=333 status=ok
// SIG undefined FUN_1438d5620(void)

void FUN_1438d5620(longlong *param_1,longlong *param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  lVar16 = (longlong)(int)param_1[1];
  uVar12 = 0;
  uVar14 = 0;
  uVar13 = uVar12;
  uVar15 = uVar12;
  if (0 < lVar16) {
    do {
      lVar4 = *param_1;
      puVar1 = (undefined4 *)(uVar13 + lVar4);
      uVar5 = puVar1[1];
      fVar6 = (float)puVar1[2];
      uVar7 = puVar1[3];
      uVar14 = *(undefined4 *)(uVar13 + 0x10 + lVar4);
      puVar2 = (undefined4 *)(uVar13 + *param_2);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      fVar10 = (float)puVar2[2];
      uVar11 = puVar2[3];
      uVar3 = *(undefined4 *)(uVar13 + 0x10 + *param_2);
      fVar25 = fVar6 * param_3[4] + *param_3 + fVar10 * param_3[8];
      fVar26 = fVar6 * param_3[5] + param_3[1] + fVar10 * param_3[9];
      fVar27 = fVar6 * param_3[6] + param_3[2] + fVar10 * param_3[10];
      fVar17 = fVar25 * fVar25;
      fVar20 = fVar26 * fVar26;
      auVar18._8_4_ = fVar27 * fVar27;
      auVar18._4_4_ = auVar18._8_4_;
      auVar18._0_4_ = auVar18._8_4_;
      auVar18._12_4_ = auVar18._8_4_;
      fVar22 = fVar20 + fVar17 + auVar18._8_4_;
      fVar23 = fVar20 + fVar17 + auVar18._8_4_;
      fVar24 = fVar20 + fVar17 + auVar18._8_4_;
      auVar19._4_4_ = fVar23;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = fVar24;
      auVar19._12_4_ = fVar20 + fVar17 + auVar18._8_4_;
      auVar19 = rsqrtps(auVar18,auVar19);
      fVar17 = auVar19._0_4_;
      fVar20 = auVar19._4_4_;
      fVar21 = auVar19._8_4_;
      if (param_3[0x10] <=
          (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar20 * fVar20) * fVar20 * 0.5))
          * fVar26 * param_3[0xd] +
          (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar22 * fVar17 * fVar17) * fVar17 * 0.5))
          * fVar25 * param_3[0xc] +
          (float)(~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar24 * fVar21 * fVar21) * fVar21 * 0.5))
          * fVar27 * param_3[0xe]) {
        puVar2 = (undefined4 *)(uVar12 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = fVar6;
        puVar2[3] = uVar7;
        *(undefined4 *)(uVar12 + 0x10 + lVar4) = uVar14;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        lVar4 = *param_2;
        puVar1 = (undefined4 *)(uVar12 + lVar4);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = fVar10;
        puVar1[3] = uVar11;
        *(undefined4 *)(uVar12 + 0x10 + lVar4) = uVar3;
        uVar12 = uVar12 + 0x14;
      }
      uVar14 = (undefined4)uVar15;
      lVar16 = lVar16 + -1;
      uVar13 = uVar13 + 0x14;
    } while (lVar16 != 0);
  }
  *(undefined4 *)(param_1 + 1) = uVar14;
  *(undefined4 *)(param_2 + 1) = uVar14;
  return;
}



// FUNCTION 1438d5770 FUN_1438d5770 body=287 status=ok
// SIG undefined FUN_1438d5770(void)

void FUN_1438d5770(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(param_2 + 8), iVar2 != 0)) {
    iVar8 = 0;
    iVar9 = 0;
    if (0 < iVar1) {
LAB_1438d57c0:
      if (iVar8 < iVar2) {
        pfVar5 = (float *)FUN_1437f7500(param_1,iVar9);
        fVar3 = *pfVar5;
        fStack_54 = pfVar5[1];
        fStack_50 = pfVar5[2];
        fStack_4c = pfVar5[3];
        local_48 = pfVar5[4];
        local_58 = fVar3;
        do {
          lVar6 = FUN_1437f7500(param_2,iVar8);
          fVar4 = fStack_54;
          if (fVar3 < *(float *)(lVar6 + 4)) {
            if (iVar8 < iVar2) goto LAB_1438d5812;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
        goto LAB_1438d5852;
      }
    }
  }
  return;
  while( true ) {
    puVar7 = (undefined4 *)FUN_1437f7500(param_2,iVar8);
    local_40 = *puVar7;
    uStack_3c = puVar7[1];
    uStack_38 = puVar7[2];
    uStack_34 = puVar7[3];
    local_30 = puVar7[4];
    FUN_1438d5890(param_3,&local_58,&local_40);
    iVar8 = iVar8 + 1;
    if (iVar2 <= iVar8) break;
LAB_1438d5812:
    pfVar5 = (float *)FUN_1437f7500(param_2,iVar8);
    if (fVar4 < *pfVar5 || fVar4 == *pfVar5) break;
  }
LAB_1438d5852:
  iVar8 = iVar8 + -1;
  iVar9 = iVar9 + 1;
  if (iVar1 <= iVar9) {
    return;
  }
  goto LAB_1438d57c0;
}



// FUNCTION 1438d5890 FUN_1438d5890 body=543 status=ok
// SIG undefined FUN_1438d5890(void)

void FUN_1438d5890(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  fVar7 = *param_2;
  if (*param_2 <= *param_3) {
    fVar7 = *param_3;
  }
  local_res10 = param_3[1];
  fVar8 = param_2[1];
  if (local_res10 <= param_2[1]) {
    fVar8 = local_res10;
  }
  if (*param_1 <= fVar8 - fVar7) {
    fVar1 = param_2[4];
    fVar2 = param_3[4];
    local_res8[0] = fVar1;
    FUN_1438525c0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a) + 8),local_res8,local_58);
    local_res8[0] = fVar2;
    FUN_1438525c0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a) + 0x10),local_res8,local_48);
    local_98 = (param_1[8] - param_1[4]) * fVar7 + param_1[4];
    fStack_94 = (param_1[9] - param_1[5]) * fVar7 + param_1[5];
    fStack_90 = (param_1[10] - param_1[6]) * fVar7 + param_1[6];
    fStack_8c = (param_1[0xb] - param_1[7]) * fVar7 + param_1[7];
    cVar4 = FUN_1438d70e0(&local_98,local_58,param_1 + 0x14,&local_98);
    cVar6 = cVar4 != '\0';
    local_88 = (param_1[8] - param_1[4]) * fVar8 + param_1[4];
    fStack_84 = (param_1[9] - param_1[5]) * fVar8 + param_1[5];
    fStack_80 = (param_1[10] - param_1[6]) * fVar8 + param_1[6];
    fStack_7c = (param_1[0xb] - param_1[7]) * fVar8 + param_1[7];
    cVar4 = FUN_1438d70e0(&local_88,local_58);
    if ((cVar4 == '\0') || (cVar6 == '\0')) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    local_78 = (param_1[0x10] - param_1[0xc]) * fVar7 + param_1[0xc];
    fStack_74 = (param_1[0x11] - param_1[0xd]) * fVar7 + param_1[0xd];
    fStack_70 = (param_1[0x12] - param_1[0xe]) * fVar7 + param_1[0xe];
    fStack_6c = (param_1[0x13] - param_1[0xf]) * fVar7 + param_1[0xf];
    cVar6 = FUN_1438d70e0(&local_78,local_48);
    if ((cVar6 == '\0') || (cVar4 == '\0')) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    local_68 = (param_1[0x10] - param_1[0xc]) * fVar8 + param_1[0xc];
    fStack_64 = (param_1[0x11] - param_1[0xd]) * fVar8 + param_1[0xd];
    fStack_60 = (param_1[0x12] - param_1[0xe]) * fVar8 + param_1[0xe];
    fStack_5c = (param_1[0x13] - param_1[0xf]) * fVar8 + param_1[0xf];
    cVar6 = FUN_1438d70e0(&local_68,local_48);
    if ((cVar6 != '\0') && (cVar4 != '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x18);
      if (*(uint *)(plVar3 + 1) == (*(uint *)((longlong)plVar3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,plVar3,0x50);
      }
      puVar5 = (undefined8 *)((longlong)(int)plVar3[1] * 0x50 + *plVar3);
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      *puVar5 = CONCAT44(fStack_94,local_98);
      puVar5[1] = CONCAT44(fStack_8c,fStack_90);
      puVar5[2] = CONCAT44(fStack_84,local_88);
      puVar5[3] = CONCAT44(fStack_7c,fStack_80);
      puVar5[4] = CONCAT44(fStack_74,local_78);
      puVar5[5] = CONCAT44(fStack_6c,fStack_70);
      puVar5[6] = CONCAT44(fStack_64,local_68);
      puVar5[7] = CONCAT44(fStack_5c,fStack_60);
      *(float *)(puVar5 + 8) = fVar1;
      *(float *)((longlong)puVar5 + 0x44) = fVar2;
    }
  }
  return;
}



// FUNCTION 1438d5ab0 contractIntervalPartitionByRadius body=68 status=ok
// SIG undefined contractIntervalPartitionByRadius(void)

void hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(undefined8 param_1,float param_2)

{
  FUN_1437f52b0();
  FUN_1437f78a0(param_1,param_2,1.0 - param_2,0,0x3f800000);
  return;
}



// FUNCTION 1438d5b00 FUN_1438d5b00 body=436 status=ok
// SIG undefined FUN_1438d5b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d5b00(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar26 = *param_2 - fVar2;
  fVar27 = param_2[1] - fVar3;
  fVar28 = param_2[2] - fVar4;
  fVar7 = fVar26 * fVar26;
  fVar10 = fVar27 * fVar27;
  fVar13 = fVar28 * fVar28;
  fVar23 = fVar10 + fVar7 + fVar13;
  fVar24 = fVar10 + fVar7 + fVar13;
  fVar25 = fVar10 + fVar7 + fVar13;
  fVar13 = fVar10 + fVar7 + fVar13;
  auVar15._4_4_ = fVar24;
  auVar15._0_4_ = fVar23;
  auVar15._8_4_ = fVar25;
  auVar15._12_4_ = fVar13;
  auVar15 = rsqrtps(in_XMM2,auVar15);
  fVar7 = auVar15._0_4_;
  fVar10 = auVar15._4_4_;
  fVar11 = auVar15._8_4_;
  fVar12 = auVar15._12_4_;
  fVar18 = (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar7 * fVar7) * fVar7 * 0.5));
  fVar20 = (float)(~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar24 * fVar10 * fVar10) * fVar10 * 0.5)
                  );
  fVar21 = (float)(~-(uint)(fVar25 <= 0.0) & (uint)((3.0 - fVar25 * fVar11 * fVar11) * fVar11 * 0.5)
                  );
  fVar22 = (float)(~-(uint)(fVar13 <= 0.0) & (uint)((3.0 - fVar13 * fVar12 * fVar12) * fVar12 * 0.5)
                  );
  fVar7 = *param_5 * fVar26;
  fVar11 = param_5[1] * fVar27;
  fVar14 = param_5[2] * fVar28;
  fVar29 = fVar18 * fVar26;
  fVar30 = fVar20 * fVar27;
  fVar31 = fVar21 * fVar28;
  fVar32 = fVar22 * (param_2[3] - fVar5);
  fVar19 = fVar11 + fVar7 + fVar14;
  fVar26 = fVar26 - *param_5 * fVar19;
  fVar27 = fVar27 - param_5[1] * (fVar11 + fVar7 + fVar14);
  fVar28 = fVar28 - param_5[2] * (fVar11 + fVar7 + fVar14);
  fVar10 = fVar26 * fVar26;
  fVar12 = fVar27 * fVar27;
  auVar8._8_4_ = fVar28 * fVar28;
  auVar8._4_4_ = auVar8._8_4_;
  auVar8._0_4_ = auVar8._8_4_;
  auVar8._12_4_ = auVar8._8_4_;
  auVar16._0_4_ = fVar12 + fVar10 + auVar8._8_4_;
  auVar16._4_4_ = fVar12 + fVar10 + auVar8._8_4_;
  auVar16._8_4_ = fVar12 + fVar10 + auVar8._8_4_;
  auVar16._12_4_ = fVar12 + fVar10 + auVar8._8_4_;
  auVar15 = rsqrtps(auVar8,auVar16);
  fVar10 = auVar15._0_4_;
  fVar12 = auVar15._4_4_;
  fVar35 = auVar15._8_4_;
  fVar36 = auVar15._12_4_;
  auVar9._0_4_ = fVar10 * 0.5;
  auVar9._4_4_ = fVar12 * 0.5;
  auVar9._8_4_ = fVar35 * 0.5;
  auVar9._12_4_ = fVar36 * 0.5;
  fVar33 = (float)(~-(uint)(auVar16._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar16._0_4_ * fVar10 * fVar10) * auVar9._0_4_));
  fVar34 = (float)(~-(uint)(auVar16._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar16._4_4_ * fVar12 * fVar12) * auVar9._4_4_));
  fVar35 = (float)(~-(uint)(auVar16._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar16._8_4_ * fVar35 * fVar35) * auVar9._8_4_));
  fVar36 = (float)(~-(uint)(auVar16._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar16._12_4_ * fVar36 * fVar36) * auVar9._12_4_));
  fVar26 = fVar26 * fVar33;
  fVar27 = fVar27 * fVar34;
  fVar28 = fVar28 * fVar35;
  fVar14 = ((param_2[3] - fVar5) - param_5[3] * (fVar11 + fVar7 + fVar14)) * fVar36;
  fVar33 = fVar33 * auVar16._0_4_;
  fVar34 = fVar34 * auVar16._4_4_;
  fVar35 = fVar35 * auVar16._8_4_;
  fVar36 = fVar36 * auVar16._12_4_;
  auVar1._4_4_ = fVar34;
  auVar1._0_4_ = fVar33;
  auVar1._8_4_ = fVar35;
  auVar1._12_4_ = fVar36;
  auVar15 = rcpps(auVar9,auVar1);
  auVar6._0_4_ = fVar33 * auVar15._0_4_;
  auVar6._4_4_ = fVar34 * auVar15._4_4_;
  auVar6._8_4_ = fVar35 * auVar15._8_4_;
  auVar6._12_4_ = fVar36 * auVar15._12_4_;
  fVar7 = (2.0 - auVar6._0_4_) * auVar15._0_4_ * fVar23 * fVar18;
  fVar10 = (2.0 - auVar6._4_4_) * auVar15._4_4_ * fVar24 * fVar20;
  fVar11 = (2.0 - auVar6._8_4_) * auVar15._8_4_ * fVar25 * fVar21;
  fVar12 = (2.0 - auVar6._12_4_) * auVar15._12_4_ * fVar13 * fVar22;
  if (fVar19 <= 0.0) {
    fVar13 = param_4[1];
    fVar18 = param_4[2];
    fVar19 = param_4[3];
    *param_1 = fVar2 - fVar7 * *param_4 * fVar29;
    param_1[1] = fVar3 - fVar10 * fVar13 * fVar30;
    param_1[2] = fVar4 - fVar11 * fVar18 * fVar31;
    param_1[3] = fVar5 - fVar12 * fVar19 * fVar32;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    *param_2 = fVar26 * *param_4 + *param_2;
    param_2[1] = fVar27 * fVar2 + param_2[1];
    param_2[2] = fVar28 * fVar3 + param_2[2];
    param_2[3] = fVar14 * fVar4 + param_2[3];
  }
  else {
    fVar13 = param_4[1];
    fVar18 = param_4[2];
    fVar19 = param_4[3];
    *param_1 = fVar2 - fVar26 * *param_4;
    param_1[1] = fVar3 - fVar27 * fVar13;
    param_1[2] = fVar4 - fVar28 * fVar18;
    param_1[3] = fVar5 - fVar14 * fVar19;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    *param_2 = fVar7 * *param_4 * fVar29 + *param_2;
    param_2[1] = fVar10 * fVar2 * fVar30 + param_2[1];
    param_2[2] = fVar11 * fVar3 * fVar31 + param_2[2];
    param_2[3] = fVar12 * fVar4 * fVar32 + param_2[3];
  }
  auVar17._0_4_ = *param_4 * _DAT_1467f0700 + fVar33;
  auVar17._4_4_ = param_4[1] * fRam00000001467f0704 + fVar34;
  auVar17._8_4_ = param_4[2] * fRam00000001467f0708 + fVar35;
  auVar17._12_4_ = param_4[3] * fRam00000001467f070c + fVar36;
  auVar15 = rcpps(auVar6,auVar17);
  *param_3 = (2.0 - auVar17._0_4_ * auVar15._0_4_) * auVar15._0_4_ * *param_4;
  return;
}



// FUNCTION 1438d5cc0 FUN_1438d5cc0 body=85 status=ok
// SIG undefined FUN_1438d5cc0(void)

void FUN_1438d5cc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_28 = *param_6;
  uStack_20 = param_6[1];
  local_18 = *param_7;
  uStack_14 = param_7[1];
  uStack_10 = param_7[2];
  uStack_c = param_7[3];
  FUN_1438d5620(local_18,param_2,&local_58);
  return;
}



// FUNCTION 1438d5d20 FUN_1438d5d20 body=1475 status=ok
// SIG undefined FUN_1438d5d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d5d20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,undefined8 param_7,longlong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  float local_1a8 [24];
  float local_148;
  float fStack_144;
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
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  
  local_1c8 = *param_2;
  fStack_1c4 = param_2[1];
  fStack_1c0 = param_2[2];
  fStack_1bc = param_2[3];
  local_138 = *param_4;
  fStack_134 = param_4[1];
  fStack_130 = param_4[2];
  fStack_12c = param_4[3];
  fVar13 = *param_1;
  fVar20 = param_1[1];
  fVar21 = param_1[2];
  fStack_1dc = param_1[3];
  fVar29 = local_1c8 - fVar13;
  fVar30 = fStack_1c4 - fVar20;
  fVar31 = fStack_1c0 - fVar21;
  fVar22 = *param_3;
  fVar12 = param_3[1];
  fVar19 = param_3[2];
  fStack_13c = param_3[3];
  local_1d8 = fVar22 - fVar13;
  fStack_1d4 = fVar12 - fVar20;
  fStack_1d0 = fVar19 - fVar21;
  fStack_1cc = fStack_13c - fStack_1dc;
  local_1f8 = local_138 - fVar22;
  fVar34 = fStack_134 - fVar12;
  fVar36 = fStack_130 - fVar19;
  fStack_1ec = fStack_12c - fStack_13c;
  local_1b8 = local_1a8;
  fVar26 = local_138 - local_1c8;
  fVar27 = fStack_134 - fStack_1c4;
  fVar28 = fStack_130 - fStack_1c0;
  fStack_fc = fStack_12c - fStack_1bc;
  local_1b0 = 0;
  local_1ac = 0x80000006;
  fStack_1f4 = fVar34;
  fStack_1f0 = fVar36;
  local_1e8 = fVar13;
  fStack_1e4 = fVar20;
  fStack_1e0 = fVar21;
  local_148 = fVar22;
  fStack_144 = fVar12;
  fStack_140 = fVar19;
  local_128 = local_1c8;
  fStack_124 = fStack_1c4;
  fStack_120 = fStack_1c0;
  fStack_11c = fStack_1bc;
  local_118 = fVar13;
  fStack_114 = fVar20;
  fStack_110 = fVar21;
  fStack_10c = fStack_1dc;
  local_108 = fVar26;
  fStack_104 = fVar27;
  fStack_100 = fVar28;
  uVar10 = FUN_143703a50();
  if ((local_1ac & 0x3fffffff) < 6) {
    uVar6 = (local_1ac & 0x3fffffff) * 2;
    uVar5 = 6;
    if (6 < uVar6) {
      uVar5 = uVar6;
    }
    FUN_14370c310(uVar10,&local_1b8,uVar5,0x10);
  }
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  local_1b0 = 6;
  fVar38 = fVar8 * fVar29 - fVar30 * fVar7;
  fVar39 = fVar9 * fVar30 - fVar31 * fVar8;
  fVar40 = fVar7 * fVar31 - fVar29 * fVar9;
  fVar29 = fVar39 * fVar39;
  fVar30 = fVar40 * fVar40;
  auVar14._8_4_ = fVar38 * fVar38;
  auVar14._4_4_ = auVar14._8_4_;
  auVar14._0_4_ = auVar14._8_4_;
  auVar14._12_4_ = auVar14._8_4_;
  fVar23 = fVar30 + fVar29 + auVar14._8_4_;
  fVar24 = fVar30 + fVar29 + auVar14._8_4_;
  fVar25 = fVar30 + fVar29 + auVar14._8_4_;
  auVar1._4_4_ = fVar24;
  auVar1._0_4_ = fVar23;
  auVar1._8_4_ = fVar25;
  auVar1._12_4_ = fVar30 + fVar29 + auVar14._8_4_;
  auVar15 = rsqrtps(auVar14,auVar1);
  fVar29 = auVar15._0_4_;
  fVar30 = auVar15._4_4_;
  fVar31 = auVar15._8_4_;
  fVar39 = fVar39 * (float)(~-(uint)(fVar23 <= 0.0) &
                           (uint)((3.0 - fVar23 * fVar29 * fVar29) * fVar29 * 0.5));
  fVar40 = fVar40 * (float)(~-(uint)(fVar24 <= 0.0) &
                           (uint)((3.0 - fVar24 * fVar30 * fVar30) * fVar30 * 0.5));
  fVar38 = fVar38 * (float)(~-(uint)(fVar25 <= 0.0) &
                           (uint)((3.0 - fVar25 * fVar31 * fVar31) * fVar31 * 0.5));
  fVar33 = fVar34 * fVar7 - fVar8 * local_1f8;
  fVar35 = fVar36 * fVar8 - fVar9 * fStack_1f4;
  fVar37 = local_1f8 * fVar9 - fVar7 * fStack_1f0;
  fVar29 = fVar35 * fVar35;
  fVar30 = fVar37 * fVar37;
  auVar16._8_4_ = fVar33 * fVar33;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  fVar34 = fVar30 + fVar29 + auVar16._8_4_;
  fVar36 = fVar30 + fVar29 + auVar16._8_4_;
  fVar23 = fVar30 + fVar29 + auVar16._8_4_;
  auVar2._4_4_ = fVar36;
  auVar2._0_4_ = fVar34;
  auVar2._8_4_ = fVar23;
  auVar2._12_4_ = fVar30 + fVar29 + auVar16._8_4_;
  auVar15 = rsqrtps(auVar16,auVar2);
  fVar29 = auVar15._0_4_;
  fVar30 = auVar15._4_4_;
  fVar31 = auVar15._8_4_;
  fVar35 = fVar35 * (float)(~-(uint)(fVar34 <= 0.0) &
                           (uint)((3.0 - fVar34 * fVar29 * fVar29) * fVar29 * 0.5));
  fVar37 = fVar37 * (float)(~-(uint)(fVar36 <= 0.0) &
                           (uint)((3.0 - fVar36 * fVar30 * fVar30) * fVar30 * 0.5));
  fVar33 = fVar33 * (float)(~-(uint)(fVar23 <= 0.0) &
                           (uint)((3.0 - fVar23 * fVar31 * fVar31) * fVar31 * 0.5));
  fVar24 = fStack_1d4 * fVar7 - fVar8 * local_1d8;
  fVar25 = fStack_1d0 * fVar8 - fVar9 * fStack_1d4;
  fVar32 = local_1d8 * fVar9 - fVar7 * fStack_1d0;
  fVar29 = fVar25 * fVar25;
  fVar30 = fVar32 * fVar32;
  auVar17._8_4_ = fVar24 * fVar24;
  auVar17._4_4_ = auVar17._8_4_;
  auVar17._0_4_ = auVar17._8_4_;
  auVar17._12_4_ = auVar17._8_4_;
  fVar34 = fVar30 + fVar29 + auVar17._8_4_;
  fVar36 = fVar30 + fVar29 + auVar17._8_4_;
  fVar23 = fVar30 + fVar29 + auVar17._8_4_;
  auVar3._4_4_ = fVar36;
  auVar3._0_4_ = fVar34;
  auVar3._8_4_ = fVar23;
  auVar3._12_4_ = fVar30 + fVar29 + auVar17._8_4_;
  auVar15 = rsqrtps(auVar17,auVar3);
  fVar29 = auVar15._0_4_;
  fVar30 = auVar15._4_4_;
  fVar31 = auVar15._8_4_;
  fVar25 = fVar25 * (float)(~-(uint)(fVar34 <= 0.0) &
                           (uint)((3.0 - fVar34 * fVar29 * fVar29) * fVar29 * 0.5));
  fVar32 = fVar32 * (float)(~-(uint)(fVar36 <= 0.0) &
                           (uint)((3.0 - fVar36 * fVar30 * fVar30) * fVar30 * 0.5));
  fVar24 = fVar24 * (float)(~-(uint)(fVar23 <= 0.0) &
                           (uint)((3.0 - fVar23 * fVar31 * fVar31) * fVar31 * 0.5));
  fVar34 = fVar25 * local_1e8;
  fVar36 = fVar32 * fStack_1e4;
  fVar23 = fVar24 * fStack_1e0;
  fVar41 = fVar8 * fVar26 - fVar27 * fVar7;
  fVar42 = fVar9 * fVar27 - fVar28 * fVar8;
  fVar43 = fVar7 * fVar28 - fVar26 * fVar9;
  fVar26 = fVar42 * fVar42;
  fVar27 = fVar43 * fVar43;
  fVar28 = fVar41 * fVar41;
  auVar11._4_4_ = fVar26;
  auVar11._0_4_ = fVar26;
  auVar11._8_4_ = fVar26;
  auVar11._12_4_ = fVar26;
  fVar29 = fVar27 + fVar26 + fVar28;
  fVar30 = fVar27 + fVar26 + fVar28;
  fVar31 = fVar27 + fVar26 + fVar28;
  auVar15._4_4_ = fVar30;
  auVar15._0_4_ = fVar29;
  auVar15._8_4_ = fVar31;
  auVar15._12_4_ = fVar27 + fVar26 + fVar28;
  auVar15 = rsqrtps(auVar11,auVar15);
  fVar26 = auVar15._0_4_;
  fVar27 = auVar15._4_4_;
  fVar28 = auVar15._8_4_;
  fVar42 = fVar42 * (float)(~-(uint)(fVar29 <= 0.0) &
                           (uint)((3.0 - fVar29 * fVar26 * fVar26) * fVar26 * 0.5));
  fVar43 = fVar43 * (float)(~-(uint)(fVar30 <= 0.0) &
                           (uint)((3.0 - fVar30 * fVar27 * fVar27) * fVar27 * 0.5));
  fVar41 = fVar41 * (float)(~-(uint)(fVar31 <= 0.0) &
                           (uint)((3.0 - fVar31 * fVar28 * fVar28) * fVar28 * 0.5));
  fVar29 = fVar42 * local_1c8;
  fVar30 = fVar43 * fStack_1c4;
  fVar31 = fVar41 * fStack_1c0;
  FUN_1438d7020(&local_118,&local_128,&local_138,&local_148,&local_1f8);
  fVar26 = *param_6;
  fVar27 = param_6[1];
  fVar28 = param_6[2];
  *local_1b8 = fVar39;
  local_1b8[1] = fVar40;
  local_1b8[2] = fVar38;
  local_1b8[3] = 0.0 - (fVar40 * fVar20 + fVar39 * fVar13 + fVar38 * fVar21);
  local_1b8[4] = fVar35;
  local_1b8[5] = fVar37;
  local_1b8[6] = fVar33;
  local_1b8[7] = 0.0 - (fVar37 * fVar12 + fVar35 * fVar22 + fVar33 * fVar19);
  local_1b8[8] = fVar25;
  local_1b8[9] = fVar32;
  local_1b8[10] = fVar24;
  local_1b8[0xb] = 0.0 - (fVar36 + fVar34 + fVar23);
  local_1b8[0xc] = fVar42;
  local_1b8[0xd] = fVar43;
  local_1b8[0xe] = fVar41;
  local_1b8[0xf] = 0.0 - (fVar30 + fVar29 + fVar31);
  local_1b8[0x10] = -local_1f8;
  local_1b8[0x11] = -fStack_1f4;
  local_1b8[0x12] = -fStack_1f0;
  local_1b8[0x13] = -fStack_1ec;
  fVar22 = fStack_fc;
  fVar21 = fStack_100;
  fVar20 = fStack_104;
  fVar13 = local_108;
  local_1b8[0x14] = local_1f8;
  local_1b8[0x15] = fStack_1f4;
  local_1b8[0x16] = fStack_1f0;
  local_1b8[0x17] =
       0.0 - ((fVar8 * fVar27 + fStack_1e4) * fStack_1f4 + (fVar7 * fVar26 + local_1e8) * local_1f8
             + (fVar9 * fVar28 + fStack_1e0) * fStack_1f0);
  fVar12 = local_1d8 * local_1d8;
  fVar19 = fStack_1d4 * fStack_1d4;
  auVar18._8_4_ = fStack_1d0 * fStack_1d0;
  local_b8 = local_1d8 * _DAT_1467f07e0 + local_1e8;
  fStack_b4 = fStack_1d4 * fRam00000001467f07e4 + fStack_1e4;
  fStack_b0 = fStack_1d0 * fRam00000001467f07e8 + fStack_1e0;
  fStack_ac = fStack_1cc * fRam00000001467f07ec + fStack_1dc;
  local_c8 = fVar13 * _DAT_1467f07e0 + local_1c8;
  fStack_c4 = fVar20 * fRam00000001467f07e4 + fStack_1c4;
  fStack_c0 = fVar21 * fRam00000001467f07e8 + fStack_1c0;
  fStack_bc = fVar22 * fRam00000001467f07ec + fStack_1bc;
  fStack_cc = param_5[3];
  local_d8 = -*param_5;
  fStack_d4 = -param_5[1];
  fStack_d0 = -param_5[2];
  local_e8 = *(undefined8 *)param_5;
  uStack_e0 = *(undefined8 *)(param_5 + 2);
  auVar18._4_4_ = auVar18._8_4_;
  auVar18._0_4_ = auVar18._8_4_;
  auVar18._12_4_ = auVar18._8_4_;
  fVar26 = fVar19 + fVar12 + auVar18._8_4_;
  fVar27 = fVar19 + fVar12 + auVar18._8_4_;
  fVar28 = fVar19 + fVar12 + auVar18._8_4_;
  fVar12 = fVar19 + fVar12 + auVar18._8_4_;
  auVar4._4_4_ = fVar27;
  auVar4._0_4_ = fVar26;
  auVar4._8_4_ = fVar28;
  auVar4._12_4_ = fVar12;
  auVar15 = rsqrtps(auVar18,auVar4);
  fVar13 = auVar15._0_4_;
  fVar20 = auVar15._4_4_;
  fVar21 = auVar15._8_4_;
  fVar22 = auVar15._12_4_;
  local_f8 = (float)(~-(uint)(fVar26 <= 0.0) &
                    (uint)((3.0 - fVar26 * fVar13 * fVar13) * fVar13 * 0.5)) * local_1d8;
  fStack_f4 = (float)(~-(uint)(fVar27 <= 0.0) &
                     (uint)((3.0 - fVar27 * fVar20 * fVar20) * fVar20 * 0.5)) * fStack_1d4;
  fStack_f0 = (float)(~-(uint)(fVar28 <= 0.0) &
                     (uint)((3.0 - fVar28 * fVar21 * fVar21) * fVar21 * 0.5)) * fStack_1d0;
  fStack_ec = (float)(~-(uint)(fVar12 <= 0.0) &
                     (uint)((3.0 - fVar12 * fVar22 * fVar22) * fVar22 * 0.5)) * fStack_1cc;
  FUN_1437f62c0(&local_218);
  FUN_1437f8d50(*(undefined8 *)(param_8 + 0x28),&local_1b8,&local_b8,&local_c8,&local_d8,&local_e8,
                &local_f8,param_7,&local_218);
  uVar10 = FUN_143703a50();
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(uVar10,local_218,0x14,local_20c & 0x3fffffff);
  }
  local_218 = 0;
  local_20c = 0x80000000;
  uVar10 = FUN_143703a50();
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(uVar10,local_1b8,0x10,local_1ac & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d62f0 FUN_1438d62f0 body=344 status=ok
// SIG undefined FUN_1438d62f0(void)

undefined8
FUN_1438d62f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  int local_30;
  uint local_2c;
  
  pfVar4 = param_5;
  param_5[0] = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  local_68 = (0.0 - *param_4) * *param_3;
  fStack_64 = (0.0 - param_4[1]) * param_3[1];
  fStack_60 = (0.0 - param_4[2]) * param_3[2];
  fStack_5c = (0.0 - param_4[3]) * param_3[3];
  local_48 = *param_1 - local_68;
  fStack_44 = param_1[1] - fStack_64;
  fStack_40 = param_1[2] - fStack_60;
  fStack_3c = param_1[3] - fStack_5c;
  local_58 = *param_2 - local_68;
  fStack_54 = param_2[1] - fStack_64;
  fStack_50 = param_2[2] - fStack_60;
  fStack_4c = param_2[3] - fStack_5c;
  FUN_1437f62c0(&local_38);
  FUN_1437f87f0(*(undefined8 *)(param_6 + 0x20),&local_48,&local_58,&local_68,&local_38);
  if (local_30 != 0) {
    param_5._0_4_ = (float)FUN_1437f5930(&local_38);
    if (param_5._0_4_ < 0.001) {
      FUN_1437f6c80(&local_38,0x3a83126f,0x3f7fbe77);
      FUN_1437f7f10(&local_38,0x3a83126f);
      if (local_30 == 0) goto LAB_1438d63f7;
      param_5._0_4_ = (float)FUN_1437f5930(&local_38);
      if (param_5._0_4_ < 0.001) {
        uVar6 = 0;
        goto LAB_1438d63fc;
      }
    }
    fVar7 = fRam00000001467f06f4 - param_5._0_4_;
    fVar8 = fRam00000001467f06f8 - param_5._0_4_;
    fVar9 = fRam00000001467f06fc - param_5._0_4_;
    fVar1 = param_4[1];
    fVar2 = param_4[2];
    fVar3 = param_4[3];
    *pfVar4 = (DAT_1467f06f0 - param_5._0_4_) * *param_4;
    pfVar4[1] = fVar7 * fVar1;
    pfVar4[2] = fVar8 * fVar2;
    pfVar4[3] = fVar9 * fVar3;
  }
LAB_1438d63f7:
  uVar6 = 1;
LAB_1438d63fc:
  uVar5 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar5,local_38,0x14,local_2c & 0x3fffffff);
  }
  return uVar6;
}



// FUNCTION 1438d6450 FUN_1438d6450 body=1136 status=ok
// SIG undefined FUN_1438d6450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d6450(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  float *param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined8 local_178;
  int local_170;
  uint local_16c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  
  local_f8 = *param_1;
  uStack_f0 = param_1[1];
  lVar1 = *param_7;
  fVar16 = *(float *)(lVar1 + 0x20);
  fVar17 = *(float *)(lVar1 + 0x24);
  fVar22 = *(float *)(lVar1 + 0x28);
  fVar2 = *(float *)(lVar1 + 0x2c);
  fVar8 = *(float *)(lVar1 + 0x38);
  fVar33 = *(float *)(lVar1 + 0x3c);
  fVar9 = *(float *)(lVar1 + 0x40);
  fVar30 = fVar33 * _DAT_1467f0700;
  fVar31 = fVar33 * fRam00000001467f0704;
  fVar32 = fVar33 * fRam00000001467f0708;
  fVar33 = fVar33 * fRam00000001467f070c;
  local_148 = *param_3 + *param_5 * fVar16;
  fStack_144 = param_3[1] + param_5[1] * fVar17;
  fStack_140 = param_3[2] + param_5[2] * fVar22;
  fStack_13c = param_3[3] + param_5[3] * fVar2;
  local_158 = *param_4 + *param_5 * fVar16;
  fStack_154 = param_4[1] + param_5[1] * fVar17;
  fStack_150 = param_4[2] + param_5[2] * fVar22;
  fStack_14c = param_4[3] + param_5[3] * fVar2;
  local_108 = *param_2;
  uStack_100 = param_2[1];
  local_e8 = fVar16;
  fStack_e4 = fVar17;
  fStack_e0 = fVar22;
  fStack_dc = fVar2;
  local_d8 = local_108;
  uStack_d0 = uStack_100;
  local_c8 = local_f8;
  uStack_c0 = uStack_f0;
  local_a8 = local_158;
  fStack_a4 = fStack_154;
  fStack_a0 = fStack_150;
  fStack_9c = fStack_14c;
  local_98 = local_148;
  fStack_94 = fStack_144;
  fStack_90 = fStack_140;
  fStack_8c = fStack_13c;
  FUN_1438d7350(&local_f8,&local_108,&local_148,&local_158,param_6,&local_e8);
  local_b8 = (0.0 - fVar8) * fVar16;
  fStack_b4 = (0.0 - fVar8) * fVar17;
  fStack_b0 = (0.0 - fVar8) * fVar22;
  fStack_ac = (0.0 - fVar8) * fVar2;
  FUN_1437f62c0(&local_178);
  FUN_1437f9aa0(param_7[5],&local_c8,&local_d8,&local_f8,&local_108,&local_178);
  FUN_1437f62c0(&local_120);
  FUN_1437f9aa0(param_7[5],&local_148,&local_158,&local_f8,&local_108,&local_120);
  FUN_1437f62c0(&local_138);
  FUN_1437f9c50(param_7[5],&local_98,&local_a8,&local_148,&local_158,&local_b8,&local_138);
  FUN_1437f6e60(&local_178);
  FUN_1437f66a0(&local_178,&local_138);
  FUN_1437f66a0(&local_178,&local_120);
  if (local_170 != 0) {
    local_148 = local_148 + fVar16 * fVar8;
    fStack_144 = fStack_144 + fVar17 * fVar8;
    fStack_140 = fStack_140 + fVar22 * fVar8;
    fStack_13c = fStack_13c + fVar2 * fVar8;
    local_158 = local_158 + fVar16 * fVar8;
    fStack_154 = fStack_154 + fVar17 * fVar8;
    fStack_150 = fStack_150 + fVar22 * fVar8;
    fStack_14c = fStack_14c + fVar2 * fVar8;
    local_108._0_4_ = (float)local_108 - fVar16 * fVar9;
    local_108._4_4_ = local_108._4_4_ - fVar17 * fVar9;
    uStack_100._0_4_ = (float)uStack_100 - fVar22 * fVar9;
    uStack_100._4_4_ = uStack_100._4_4_ - fVar2 * fVar9;
    local_f8._0_4_ = (float)local_f8 - fVar16 * fVar9;
    local_f8._4_4_ = local_f8._4_4_ - fVar17 * fVar9;
    uStack_f0._0_4_ = (float)uStack_f0 - fVar22 * fVar9;
    uStack_f0._4_4_ = uStack_f0._4_4_ - fVar2 * fVar9;
    fVar21 = (float)local_108 - local_158;
    fVar23 = local_108._4_4_ - fStack_154;
    fVar24 = (float)uStack_100 - fStack_150;
    fVar18 = (float)local_f8 - local_148;
    fVar19 = local_f8._4_4_ - fStack_144;
    fVar20 = (float)uStack_f0 - fStack_140;
    fVar8 = fVar18 * fVar16;
    fVar12 = fVar19 * fVar17;
    fVar14 = fVar20 * fVar22;
    fVar28 = fVar12 + fVar8 + fVar14;
    fVar9 = fVar21 * fVar16;
    fVar13 = fVar23 * fVar17;
    fVar15 = fVar24 * fVar22;
    fVar25 = (fStack_154 - fStack_144) * fVar16 - fVar17 * (local_158 - local_148);
    fVar26 = (fStack_150 - fStack_140) * fVar17 - fVar22 * (fStack_154 - fStack_144);
    fVar27 = (local_158 - local_148) * fVar22 - fVar16 * (fStack_150 - fStack_140);
    fVar29 = fVar13 + fVar9 + fVar15;
    uVar4 = -(uint)(fVar28 < fVar29);
    uVar5 = -(uint)(fVar12 + fVar8 + fVar14 < fVar13 + fVar9 + fVar15);
    uVar6 = -(uint)(fVar12 + fVar8 + fVar14 < fVar13 + fVar9 + fVar15);
    uVar7 = -(uint)(fVar12 + fVar8 + fVar14 < fVar13 + fVar9 + fVar15);
    local_78 = ~uVar4 & (uint)fVar21 | uVar4 & (uint)fVar18;
    uStack_74 = ~uVar5 & (uint)fVar23 | uVar5 & (uint)fVar19;
    uStack_70 = ~uVar6 & (uint)fVar24 | uVar6 & (uint)fVar20;
    uStack_6c = ~uVar7 & (uint)(uStack_100._4_4_ - fStack_14c) |
                uVar7 & (uint)(uStack_f0._4_4_ - fStack_13c);
    fVar8 = fVar26 * fVar26;
    fVar9 = fVar27 * fVar27;
    auVar10._8_4_ = fVar25 * fVar25;
    auVar10._4_4_ = auVar10._8_4_;
    auVar10._0_4_ = auVar10._8_4_;
    auVar10._12_4_ = auVar10._8_4_;
    fVar22 = fVar9 + fVar8 + auVar10._8_4_;
    fVar12 = fVar9 + fVar8 + auVar10._8_4_;
    fVar13 = fVar9 + fVar8 + auVar10._8_4_;
    fVar14 = fVar9 + fVar8 + auVar10._8_4_;
    auVar11._4_4_ = fVar12;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar13;
    auVar11._12_4_ = fVar14;
    auVar11 = rsqrtps(auVar10,auVar11);
    fVar8 = auVar11._0_4_;
    fVar9 = auVar11._4_4_;
    fVar16 = auVar11._8_4_;
    fVar17 = auVar11._12_4_;
    local_88 = (float)(~-(uint)(fVar22 <= 0.0) &
                      (uint)((3.0 - fVar22 * fVar8 * fVar8) * fVar8 * 0.5)) * fVar26 * fVar30;
    fStack_84 = (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar12 * fVar9 * fVar9) * fVar9 * 0.5)) * fVar27 * fVar31;
    fStack_80 = (float)(~-(uint)(fVar13 <= 0.0) &
                       (uint)((3.0 - fVar13 * fVar16 * fVar16) * fVar16 * 0.5)) * fVar25 * fVar32;
    fStack_7c = (float)(~-(uint)(fVar14 <= 0.0) &
                       (uint)((3.0 - fVar14 * fVar17 * fVar17) * fVar17 * 0.5)) *
                ((fStack_14c - fStack_13c) * fVar2 - fVar2 * (fStack_14c - fStack_13c)) * fVar33;
    FUN_1437f8990(param_7[4],&local_148,&local_158,&local_78,&local_88,param_8);
    FUN_1437f6970(param_8,&local_178);
    fVar28 = -fVar28;
    fVar9 = 1.0 / fVar28;
    fVar8 = *(float *)(*param_7 + 0x40) + *(float *)(*param_7 + 0x40);
    fVar33 = (fVar28 - fVar8) * fVar9;
    fVar9 = (-fVar29 - fVar8) * fVar9;
    fVar8 = 0.0;
    if (0.0 <= fVar33) {
      fVar8 = fVar33;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar9) {
      fVar33 = fVar9;
    }
    FUN_1437f4b00(param_8,fVar33 - fVar8,fVar8);
    FUN_1437f7410(param_8);
  }
  uVar3 = FUN_143703a50();
  local_130 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(uVar3,local_138,0x14,local_12c & 0x3fffffff);
  }
  local_138 = 0;
  local_12c = 0x80000000;
  uVar3 = FUN_143703a50();
  local_118 = 0;
  if (-1 < (int)local_114) {
    FUN_143702e10(uVar3,local_120,0x14,local_114 & 0x3fffffff);
  }
  local_120 = 0;
  local_114 = 0x80000000;
  uVar3 = FUN_143703a50();
  local_170 = 0;
  if (-1 < (int)local_16c) {
    FUN_143702e10(uVar3,local_178,0x14,local_16c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d68c0 FUN_1438d68c0 body=54 status=ok
// SIG undefined FUN_1438d68c0(void)

void FUN_1438d68c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(*param_4 + 0x40);
  uStack_14 = local_18;
  uStack_10 = local_18;
  uStack_c = local_18;
  FUN_1438d62f0(local_18,param_2,*param_4 + 0x20,&local_18,param_3,param_4);
  return;
}



// FUNCTION 1438d6900 FUN_1438d6900 body=839 status=ok
// SIG undefined FUN_1438d6900(void)

void FUN_1438d6900(float *param_1,float *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 param_7,longlong *param_8)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 unaff_XMM6 [16];
  float fVar19;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_130;
  int local_128;
  uint local_124;
  undefined8 local_118;
  int local_110;
  uint local_10c;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  longlong *local_50;
  
  plVar8 = param_8;
  lVar2 = *param_8;
  fVar4 = *(float *)(lVar2 + 0x20);
  fVar5 = *(float *)(lVar2 + 0x24);
  fVar6 = *(float *)(lVar2 + 0x28);
  fVar7 = *(float *)(lVar2 + 0x2c);
  fVar1 = *(float *)(lVar2 + 0x3c);
  fVar10 = fVar4 * (*param_2 - *param_1);
  fVar11 = fVar5 * (param_2[1] - param_1[1]);
  fVar12 = fVar6 * (param_2[2] - param_1[2]);
  auVar13._0_4_ = (fVar11 + fVar10 + fVar12) * fVar4;
  auVar13._4_4_ = (fVar11 + fVar10 + fVar12) * fVar5;
  auVar13._8_4_ = (fVar11 + fVar10 + fVar12) * fVar6;
  auVar13._12_4_ = (fVar11 + fVar10 + fVar12) * fVar7;
  fVar10 = (*param_2 - *param_1) - auVar13._0_4_;
  fVar11 = (param_2[1] - param_1[1]) - auVar13._4_4_;
  fVar18 = (param_2[2] - param_1[2]) - auVar13._8_4_;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar18 = fVar18 * fVar18;
  fVar15 = fVar11 + fVar10 + fVar18;
  fVar16 = fVar11 + fVar10 + fVar18;
  fVar17 = fVar11 + fVar10 + fVar18;
  fVar18 = fVar11 + fVar10 + fVar18;
  auVar14._4_4_ = fVar16;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = fVar17;
  auVar14._12_4_ = fVar18;
  auVar14 = rsqrtps(auVar13,auVar14);
  fVar10 = auVar14._0_4_;
  fVar11 = auVar14._4_4_;
  fVar12 = auVar14._8_4_;
  fVar19 = auVar14._12_4_;
  fVar10 = (float)(~-(uint)(fVar15 <= 0.0) &
                  (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5 * fVar15));
  fVar11 = (float)(~-(uint)(fVar16 <= 0.0) &
                  (uint)((3.0 - fVar16 * fVar11 * fVar11) * fVar11 * 0.5 * fVar16));
  fVar12 = (float)(~-(uint)(fVar17 <= 0.0) &
                  (uint)((3.0 - fVar17 * fVar12 * fVar12) * fVar12 * 0.5 * fVar17));
  fVar19 = (float)(~-(uint)(fVar18 <= 0.0) &
                  (uint)((3.0 - fVar18 * fVar19 * fVar19) * fVar19 * 0.5 * fVar18));
  local_f8 = *(undefined8 *)param_1;
  uStack_f0 = *(undefined8 *)(param_1 + 2);
  local_e8 = *(undefined8 *)param_2;
  uStack_e0 = *(undefined8 *)(param_2 + 2);
  local_d8 = *param_3;
  uStack_d0 = param_3[1];
  local_c8 = *param_4;
  uStack_c4 = param_4[1];
  uStack_c0 = param_4[2];
  uStack_bc = param_4[3];
  FUN_1437f62c0(&local_118);
  param_8._0_4_ = *param_5;
  FUN_1438d6c50(&local_f8,&local_e8,0,&param_8,&local_118,plVar8[6],plVar8);
  if (local_110 != 0) {
    FUN_1437f62c0(&local_130);
    param_8._0_4_ = *param_6;
    FUN_1438d6c50(&local_d8,&local_c8,1,&param_8,&local_130,plVar8[7],plVar8);
    if (local_128 != 0) {
      FUN_1437f62c0(&local_148);
      FUN_1437f70b0(&local_148,&local_118);
      FUN_1437f6970(&local_148,&local_130);
      FUN_1437f7c90(&local_148,0x3a83126f);
      FUN_1437f7410(&local_148);
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar12;
      auVar3._12_4_ = fVar19;
      auVar14 = rcpps(unaff_XMM6,auVar3);
      fVar15 = auVar14._0_4_;
      FUN_1437f7090(&local_148,(2.0 - fVar10 * fVar15) * fVar15 * fVar1);
      FUN_1437f6970(&local_118,&local_148);
      fStack_ac = *(float *)(*plVar8 + 0x30);
      local_58 = param_7;
      local_b8 = (2.0 - fVar10 * fVar15) * fVar15 * fStack_ac;
      fStack_b4 = (2.0 - fVar11 * auVar14._4_4_) * auVar14._4_4_ * fStack_ac;
      fStack_b0 = (2.0 - fVar12 * auVar14._8_4_) * auVar14._8_4_ * fStack_ac;
      fStack_ac = (2.0 - fVar19 * auVar14._12_4_) * auVar14._12_4_ * fStack_ac;
      local_98 = local_e8;
      uStack_90 = uStack_e0;
      local_a8 = local_f8;
      uStack_a0 = uStack_f0;
      local_88 = (undefined4)local_d8;
      uStack_84 = local_d8._4_4_;
      uStack_80 = (undefined4)uStack_d0;
      uStack_7c = uStack_d0._4_4_;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      local_68 = fVar4;
      fStack_64 = fVar5;
      fStack_60 = fVar6;
      fStack_5c = fVar7;
      local_50 = plVar8;
      FUN_1438d5770(&local_118,&local_130,&local_b8);
      uVar9 = FUN_143703a50();
      local_140 = 0;
      if (-1 < (int)local_13c) {
        FUN_143702e10(uVar9,local_148,0x14,local_13c & 0x3fffffff);
      }
      local_148 = 0;
      local_13c = 0x80000000;
    }
    uVar9 = FUN_143703a50();
    local_128 = 0;
    if (-1 < (int)local_124) {
      FUN_143702e10(uVar9,local_130,0x14,local_124 & 0x3fffffff);
    }
    local_130 = 0;
    local_124 = 0x80000000;
  }
  uVar9 = FUN_143703a50();
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(uVar9,local_118,0x14,local_10c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d6c50 FUN_1438d6c50 body=862 status=ok
// SIG undefined FUN_1438d6c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d6c50(float *param_1,float *param_2,int param_3,undefined4 *param_4,undefined8 param_5,
                  undefined8 param_6,longlong *param_7)

{
  uint *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
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
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_res18 [4];
  undefined8 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
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
  undefined1 local_b8 [16];
  undefined8 local_a8;
  uint local_a0 [2];
  undefined1 local_98 [12];
  uint auStack_8c [25];
  undefined8 extraout_XMM0_Qb;
  
  fVar7 = fRam00000001467f086c;
  fVar6 = fRam00000001467f0868;
  fVar5 = fRam00000001467f0864;
  fVar4 = _DAT_1467f0860;
  lVar9 = *param_7;
  local_f8 = *(float *)(lVar9 + 0x20);
  fStack_f4 = *(float *)(lVar9 + 0x24);
  fStack_f0 = *(float *)(lVar9 + 0x28);
  fStack_ec = *(float *)(lVar9 + 0x2c);
  fVar14 = *param_1 * local_f8;
  fVar16 = param_1[1] * fStack_f4;
  fVar18 = param_1[2] * fStack_f0;
  fVar2 = *(float *)(lVar9 + 0x3c);
  fVar15 = *param_2 * local_f8;
  fVar17 = param_2[1] * fStack_f4;
  fVar19 = param_2[2] * fStack_f0;
  fVar31 = *param_1 - (fVar16 + fVar14 + fVar18) * local_f8;
  fVar32 = param_1[1] - (fVar16 + fVar14 + fVar18) * fStack_f4;
  fVar33 = param_1[2] - (fVar16 + fVar14 + fVar18) * fStack_f0;
  fVar34 = param_1[3] - (fVar16 + fVar14 + fVar18) * fStack_ec;
  auVar20._0_4_ = (fVar17 + fVar15 + fVar19) * local_f8;
  auVar20._4_4_ = (fVar17 + fVar15 + fVar19) * fStack_f4;
  auVar20._8_4_ = (fVar17 + fVar15 + fVar19) * fStack_f0;
  auVar20._12_4_ = (fVar17 + fVar15 + fVar19) * fStack_ec;
  fVar27 = *param_2 - auVar20._0_4_;
  fVar28 = param_2[1] - auVar20._4_4_;
  fVar29 = param_2[2] - auVar20._8_4_;
  fVar24 = fVar27 - fVar31;
  fVar25 = fVar28 - fVar32;
  fVar26 = fVar29 - fVar33;
  fVar14 = fVar24 * fVar24;
  fVar15 = fVar25 * fVar25;
  fVar16 = fVar26 * fVar26;
  fVar19 = fVar15 + fVar14 + fVar16;
  fVar22 = fVar15 + fVar14 + fVar16;
  fVar23 = fVar15 + fVar14 + fVar16;
  fVar16 = fVar15 + fVar14 + fVar16;
  auVar21._4_4_ = fVar22;
  auVar21._0_4_ = fVar19;
  auVar21._8_4_ = fVar23;
  auVar21._12_4_ = fVar16;
  auVar21 = rsqrtps(auVar20,auVar21);
  fVar14 = auVar21._0_4_;
  fVar15 = auVar21._4_4_;
  fVar17 = auVar21._8_4_;
  fVar18 = auVar21._12_4_;
  fVar35 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar14 * fVar14) * fVar14 * 0.5)
                  );
  fVar36 = (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar22 * fVar15 * fVar15) * fVar15 * 0.5)
                  );
  fVar37 = (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar17 * fVar17) * fVar17 * 0.5)
                  );
  fVar38 = (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar16 * fVar18 * fVar18) * fVar18 * 0.5)
                  );
  fVar24 = fVar24 * fVar35;
  fVar25 = fVar25 * fVar36;
  fVar26 = fVar26 * fVar37;
  fVar14 = ((param_2[3] - auVar20._12_4_) - fVar34) * fVar38;
  fVar15 = fVar25 * local_f8 - fStack_f4 * fVar24;
  fVar17 = fVar26 * fStack_f4 - fStack_f0 * fVar25;
  fVar18 = fVar24 * fStack_f0 - local_f8 * fVar26;
  fVar30 = fVar14 * fStack_ec - fStack_ec * fVar14;
  if (param_3 == 0) {
    fVar17 = -fVar17;
    fVar18 = -fVar18;
    fVar15 = -fVar15;
  }
  puVar11 = local_b8;
  lVar12 = 2;
  lVar9 = 2;
  local_c8 = (fVar31 - fVar24 * fVar2) + _DAT_1467f0860 * fVar17;
  fStack_c4 = (fVar32 - fVar25 * fVar2) + fRam00000001467f0864 * fVar18;
  fStack_c0 = (fVar33 - fVar26 * fVar2) + fRam00000001467f0868 * fVar15;
  fStack_bc = (fVar34 - fVar14 * fVar2) + fRam00000001467f086c * fVar30;
  local_d8 = fVar24 * fVar2 + fVar27 + _DAT_1467f0860 * fVar17;
  fStack_d4 = fVar25 * fVar2 + fVar28 + fRam00000001467f0864 * fVar18;
  fStack_d0 = fVar26 * fVar2 + fVar29 + fRam00000001467f0868 * fVar15;
  fStack_cc = fVar14 * fVar2 + (param_2[3] - auVar20._12_4_) + fRam00000001467f086c * fVar30;
  local_e8 = fVar17 * fVar2 * _DAT_1467f0700;
  fStack_e4 = fVar18 * fVar2 * fRam00000001467f0704;
  fStack_e0 = fVar15 * fVar2 * fRam00000001467f0708;
  fStack_dc = fVar30 * fVar2 * fRam00000001467f070c;
  do {
    FUN_1437f62c0(puVar11);
    puVar11 = puVar11 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_108 = local_b8;
  param_7._0_4_ = 0x3f000000;
  puStack_100 = local_98;
  local_118 = &param_7;
  puStack_110 = &stack0x00000040;
  local_res18[0] = *param_4;
  param_7._4_4_ = 0x3f800000;
  FUN_143e0e660(param_6,&local_c8,&local_d8,&local_e8,&local_f8,&local_118,local_res18,&local_108);
  FUN_1437f7fd0(param_5,local_b8);
  auVar13._0_8_ = FUN_1437f6970(param_5,&local_a8);
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar3._4_4_ = fVar36 * fVar22;
  auVar3._0_4_ = fVar35 * fVar19;
  auVar3._8_4_ = fVar37 * fVar23;
  auVar3._12_4_ = fVar38 * fVar16;
  rcpps(auVar13,auVar3);
  FUN_1437f78a0(param_5,0);
  fVar17 = (fVar4 + fVar2) * fVar17;
  fVar18 = (fVar5 + fVar2) * fVar18;
  fVar15 = (fVar6 + fVar2) * fVar15;
  fVar30 = (fVar7 + fVar2) * fVar30;
  *param_1 = *param_1 + fVar17;
  param_1[1] = param_1[1] + fVar18;
  param_1[2] = param_1[2] + fVar15;
  param_1[3] = param_1[3] + fVar30;
  *param_2 = *param_2 + fVar17;
  param_2[1] = param_2[1] + fVar18;
  param_2[2] = param_2[2] + fVar15;
  param_2[3] = param_2[3] + fVar30;
  puVar10 = auStack_8c;
  do {
    lVar12 = lVar12 + -1;
    puVar1 = puVar10 + -4;
    uVar8 = FUN_143703a50();
    puVar10[-5] = 0;
    if (-1 < (int)*puVar1) {
      FUN_143702e10(uVar8,*(undefined8 *)(puVar10 + -7),0x14,*puVar1 & 0x3fffffff);
    }
    puVar10[-7] = 0;
    puVar10[-6] = 0;
    *puVar1 = 0x80000000;
    puVar10 = puVar1;
  } while (lVar12 != 0);
  return;
}



// FUNCTION 1438d6fb0 FUN_1438d6fb0 body=109 status=ok
// SIG undefined FUN_1438d6fb0(void)

void FUN_1438d6fb0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar11 = *param_2 - fVar1;
  fVar12 = param_2[1] - fVar2;
  fVar13 = param_2[2] - fVar3;
  fVar4 = fVar11 * fVar11;
  fVar7 = fVar12 * fVar12;
  auVar5._8_4_ = fVar13 * fVar13;
  auVar5._4_4_ = auVar5._8_4_;
  auVar5._0_4_ = auVar5._8_4_;
  auVar5._12_4_ = auVar5._8_4_;
  fVar8 = fVar7 + fVar4 + auVar5._8_4_;
  fVar9 = fVar7 + fVar4 + auVar5._8_4_;
  fVar10 = fVar7 + fVar4 + auVar5._8_4_;
  auVar6._4_4_ = fVar9;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar10;
  auVar6._12_4_ = fVar7 + fVar4 + auVar5._8_4_;
  auVar6 = rcpps(auVar5,auVar6);
  fVar11 = fVar11 * (2.0 - fVar8 * auVar6._0_4_) * auVar6._0_4_;
  fVar12 = fVar12 * (2.0 - fVar9 * auVar6._4_4_) * auVar6._4_4_;
  fVar13 = fVar13 * (2.0 - fVar10 * auVar6._8_4_) * auVar6._8_4_;
  *param_3 = fVar11;
  param_3[1] = fVar12;
  param_3[2] = fVar13;
  param_3[3] = 0.0 - (fVar2 * fVar12 + fVar1 * fVar11 + fVar3 * fVar13);
  return;
}



// FUNCTION 1438d7020 FUN_1438d7020 body=190 status=ok
// SIG undefined FUN_1438d7020(void)

void FUN_1438d7020(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = (param_4[1] - param_2[1]) * (*param_3 - *param_1) -
           (param_3[1] - param_1[1]) * (*param_4 - *param_2);
  fVar11 = (param_4[2] - param_2[2]) * (param_3[1] - param_1[1]) -
           (param_3[2] - param_1[2]) * (param_4[1] - param_2[1]);
  fVar12 = (*param_4 - *param_2) * (param_3[2] - param_1[2]) -
           (*param_3 - *param_1) * (param_4[2] - param_2[2]);
  fVar13 = (param_4[3] - param_2[3]) * (param_3[3] - param_1[3]) -
           (param_3[3] - param_1[3]) * (param_4[3] - param_2[3]);
  *param_5 = fVar11;
  param_5[1] = fVar12;
  param_5[2] = fVar10;
  param_5[3] = fVar13;
  fVar1 = fVar11 * fVar11;
  fVar2 = fVar12 * fVar12;
  fVar3 = fVar10 * fVar10;
  fVar7 = fVar2 + fVar1 + fVar3;
  fVar8 = fVar2 + fVar1 + fVar3;
  fVar9 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar9;
  auVar4._12_4_ = fVar3;
  auVar4 = rsqrtps(in_XMM2,auVar4);
  fVar1 = auVar4._0_4_;
  fVar2 = auVar4._4_4_;
  fVar5 = auVar4._8_4_;
  fVar6 = auVar4._12_4_;
  fVar11 = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar1 * fVar7 * fVar1) * fVar1 * 0.5)) *
           fVar11;
  fVar12 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar2 * fVar8 * fVar2) * fVar2 * 0.5)) *
           fVar12;
  fVar10 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5)) *
           fVar10;
  *param_5 = fVar11;
  param_5[1] = fVar12;
  param_5[2] = fVar10;
  param_5[3] = (float)(~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar6 * fVar3 * fVar6) * fVar6 * 0.5))
               * fVar13;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_5 = fVar11;
  param_5[1] = fVar12;
  param_5[2] = fVar10;
  param_5[3] = 0.0 - (fVar2 * fVar12 + fVar1 * fVar11 + fVar3 * fVar10);
  return;
}



// FUNCTION 1438d70e0 FUN_1438d70e0 body=159 status=ok
// SIG undefined FUN_1438d70e0(void)

undefined8 FUN_1438d70e0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar5 = *param_3 * *param_2;
  fVar8 = fVar1 * param_2[1];
  fVar9 = fVar2 * param_2[2];
  fVar10 = fVar8 + fVar5 + fVar9;
  fVar11 = fVar8 + fVar5 + fVar9;
  fVar12 = fVar8 + fVar5 + fVar9;
  fVar9 = fVar8 + fVar5 + fVar9;
  if (fVar10 == 0.0) {
    return 0xffffff00;
  }
  auVar6._0_4_ = param_1[2] * param_2[2] + *param_1 * *param_2;
  auVar6._4_4_ = param_2[3] + param_1[1] * param_2[1];
  auVar6._8_4_ = *param_1 * *param_2 + param_1[2] * param_2[2];
  auVar6._12_4_ = param_1[1] * param_2[1] + param_2[3];
  auVar7._4_4_ = fVar11;
  auVar7._0_4_ = fVar10;
  auVar7._8_4_ = fVar12;
  auVar7._12_4_ = fVar9;
  auVar7 = rcpps(auVar6,auVar7);
  fVar5 = param_1[1];
  fVar8 = param_1[2];
  fVar4 = param_1[3];
  *param_4 = *param_3 *
             (2.0 - auVar7._0_4_ * fVar10) * auVar7._0_4_ * (0.0 - (auVar6._4_4_ + auVar6._0_4_)) +
             *param_1;
  param_4[1] = fVar1 * (2.0 - auVar7._4_4_ * fVar11) * auVar7._4_4_ *
                       (0.0 - (auVar6._0_4_ + auVar6._4_4_)) + fVar5;
  param_4[2] = fVar2 * (2.0 - auVar7._8_4_ * fVar12) * auVar7._8_4_ *
                       (0.0 - (auVar6._12_4_ + auVar6._8_4_)) + fVar8;
  param_4[3] = fVar3 * (2.0 - auVar7._12_4_ * fVar9) * auVar7._12_4_ *
                       (0.0 - (auVar6._8_4_ + auVar6._12_4_)) + fVar4;
  return 1;
}



// FUNCTION 1438d7180 FUN_1438d7180 body=139 status=ok
// SIG undefined FUN_1438d7180(void)

undefined8 FUN_1438d7180(float *param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar5 = FUN_1438d68c0(0x3a83126f,0x3a83126f,&local_28,param_3);
  if ((int)uVar5 != 0) {
    lVar1 = *param_3;
    fVar2 = *(float *)(lVar1 + 0x24);
    fVar3 = *(float *)(lVar1 + 0x28);
    fVar4 = *(float *)(lVar1 + 0x2c);
    *param_1 = *(float *)(lVar1 + 0x20) * (local_28 + 0.001) + *param_1;
    param_1[1] = fVar2 * (fStack_24 + 0.001) + param_1[1];
    param_1[2] = fVar3 * (fStack_20 + 0.001) + param_1[2];
    param_1[3] = fVar4 * (fStack_1c + 0.001) + param_1[3];
    lVar1 = *param_3;
    fVar2 = *(float *)(lVar1 + 0x24);
    fVar3 = *(float *)(lVar1 + 0x28);
    fVar4 = *(float *)(lVar1 + 0x2c);
    uVar5 = 1;
    *param_2 = *(float *)(lVar1 + 0x20) * (local_28 + 0.001) + *param_2;
    param_2[1] = fVar2 * (fStack_24 + 0.001) + param_2[1];
    param_2[2] = fVar3 * (fStack_20 + 0.001) + param_2[2];
    param_2[3] = fVar4 * (fStack_1c + 0.001) + param_2[3];
  }
  return uVar5;
}



// FUNCTION 1438d7210 FUN_1438d7210 body=319 status=ok
// SIG undefined FUN_1438d7210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d7210(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar10 = *param_3 - *param_1;
  fVar11 = param_3[1] - param_1[1];
  fVar12 = param_3[2] - param_1[2];
  fVar13 = fVar1 - *param_1;
  fVar14 = fVar2 - param_1[1];
  fVar15 = fVar3 - param_1[2];
  if ((_DAT_1467f08f0 <= fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) &&
     (_DAT_1467f08f0 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12)) {
    fVar7 = (param_4[1] - fVar2) * fVar10 - fVar11 * (*param_4 - fVar1);
    fVar8 = (param_4[2] - fVar3) * fVar11 - fVar12 * (param_4[1] - fVar2);
    fVar9 = (*param_4 - fVar1) * fVar12 - fVar10 * (param_4[2] - fVar3);
    fVar10 = param_5[3];
    fVar11 = *param_5 * fVar8;
    fVar12 = param_5[1] * fVar9;
    fVar6 = param_5[2] * fVar7;
    fVar8 = fVar8 * fVar13;
    fVar9 = fVar9 * fVar14;
    fVar7 = fVar7 * fVar15;
    auVar4._4_4_ = fVar8;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = fVar8;
    auVar4._12_4_ = fVar8;
    fVar13 = fVar12 + fVar11 + fVar6;
    fVar14 = fVar12 + fVar11 + fVar6;
    fVar15 = fVar12 + fVar11 + fVar6;
    fVar6 = fVar12 + fVar11 + fVar6;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar13;
    auVar5._8_4_ = fVar15;
    auVar5._12_4_ = fVar6;
    auVar5 = rcpps(auVar4,auVar5);
    fVar11 = (2.0 - fVar13 * auVar5._0_4_) * auVar5._0_4_ * (fVar9 + fVar8 + fVar7);
    fVar12 = (2.0 - fVar14 * auVar5._4_4_) * auVar5._4_4_ * (fVar9 + fVar8 + fVar7);
    fVar13 = (2.0 - fVar15 * auVar5._8_4_) * auVar5._8_4_ * (fVar9 + fVar8 + fVar7);
    fVar14 = (2.0 - fVar6 * auVar5._12_4_) * auVar5._12_4_ * (fVar9 + fVar8 + fVar7);
    fVar15 = *param_5 * fVar11;
    fVar6 = param_5[1] * fVar12;
    fVar7 = param_5[2] * fVar13;
    if (0.0 < fVar11) {
      *param_1 = fVar15 + *param_1;
      param_1[1] = fVar6 + param_1[1];
      param_1[2] = fVar7 + param_1[2];
      param_1[3] = fVar10 * fVar14 + param_1[3];
      fVar1 = param_5[1];
      fVar2 = param_5[2];
      fVar3 = param_5[3];
      *param_3 = fVar11 * *param_5 + *param_3;
      param_3[1] = fVar12 * fVar1 + param_3[1];
      param_3[2] = fVar13 * fVar2 + param_3[2];
      param_3[3] = fVar14 * fVar3 + param_3[3];
      return;
    }
    *param_2 = fVar1 - fVar15;
    param_2[1] = fVar2 - fVar6;
    param_2[2] = fVar3 - fVar7;
    param_2[3] = param_2[3] - fVar10 * fVar14;
    fVar1 = param_5[1];
    fVar2 = param_5[2];
    fVar3 = param_5[3];
    *param_4 = *param_4 - fVar11 * *param_5;
    param_4[1] = param_4[1] - fVar12 * fVar1;
    param_4[2] = param_4[2] - fVar13 * fVar2;
    param_4[3] = param_4[3] - fVar14 * fVar3;
  }
  return;
}



// FUNCTION 1438d7350 FUN_1438d7350 body=507 status=ok
// SIG undefined FUN_1438d7350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d7350(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],float *param_5,float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  
  fVar18 = *param_6;
  fVar23 = param_6[1];
  fVar2 = param_6[2];
  fVar30 = (*(float *)*param_3 - *(float *)*param_1) * _DAT_1467f07e0 + *(float *)*param_1;
  fVar31 = (*(float *)(*param_3 + 4) - *(float *)(*param_1 + 4)) * fRam00000001467f07e4 +
           *(float *)(*param_1 + 4);
  fVar32 = (*(float *)(*param_3 + 8) - *(float *)(*param_1 + 8)) * fRam00000001467f07e8 +
           *(float *)(*param_1 + 8);
  fVar10 = *(float *)(*param_1 + 4);
  fVar11 = *(float *)(*param_1 + 8);
  fVar33 = (*(float *)*param_4 - *(float *)*param_2) * _DAT_1467f07e0 + *(float *)*param_2;
  fVar34 = (*(float *)(*param_4 + 4) - *(float *)(*param_2 + 4)) * fRam00000001467f07e4 +
           *(float *)(*param_2 + 4);
  fVar35 = (*(float *)(*param_4 + 8) - *(float *)(*param_2 + 8)) * fRam00000001467f07e8 +
           *(float *)(*param_2 + 8);
  fVar24 = fVar18 * fVar30;
  fVar25 = fVar23 * fVar31;
  fVar26 = fVar2 * fVar32;
  fVar27 = fVar18 * fVar33;
  fVar28 = fVar23 * fVar34;
  fVar29 = fVar2 * fVar35;
  fVar30 = (fVar33 - (fVar28 + fVar27 + fVar29) * fVar18) -
           (fVar30 - (fVar25 + fVar24 + fVar26) * fVar18);
  fVar31 = (fVar34 - (fVar28 + fVar27 + fVar29) * fVar23) -
           (fVar31 - (fVar25 + fVar24 + fVar26) * fVar23);
  fVar27 = (fVar35 - (fVar28 + fVar27 + fVar29) * fVar2) -
           (fVar32 - (fVar25 + fVar24 + fVar26) * fVar2);
  fVar24 = *(float *)*param_2;
  fVar25 = *(float *)(*param_2 + 4);
  fVar26 = *(float *)(*param_2 + 8);
  fVar36 = fVar31 * fVar18 - fVar23 * fVar30;
  fVar37 = fVar27 * fVar23 - fVar2 * fVar31;
  fVar38 = fVar30 * fVar2 - fVar18 * fVar27;
  fVar18 = fVar37 * fVar37;
  fVar23 = fVar38 * fVar38;
  auVar19._8_4_ = fVar36 * fVar36;
  auVar19._4_4_ = auVar19._8_4_;
  auVar19._0_4_ = auVar19._8_4_;
  auVar19._12_4_ = auVar19._8_4_;
  fVar33 = fVar23 + fVar18 + auVar19._8_4_;
  fVar34 = fVar23 + fVar18 + auVar19._8_4_;
  fVar35 = fVar23 + fVar18 + auVar19._8_4_;
  auVar6._4_4_ = fVar34;
  auVar6._0_4_ = fVar33;
  auVar6._8_4_ = fVar35;
  auVar6._12_4_ = fVar23 + fVar18 + auVar19._8_4_;
  auVar20 = rsqrtps(auVar19,auVar6);
  fVar30 = auVar20._0_4_;
  fVar31 = auVar20._4_4_;
  fVar32 = auVar20._8_4_;
  fVar27 = *(float *)*param_3;
  fVar28 = *(float *)(*param_3 + 4);
  fVar29 = *(float *)(*param_3 + 8);
  fVar18 = *(float *)*param_4;
  fVar23 = *(float *)(*param_4 + 4);
  fVar2 = *(float *)(*param_4 + 8);
  fVar37 = fVar37 * (float)(~-(uint)(fVar33 <= 0.0) &
                           (uint)((3.0 - fVar33 * fVar30 * fVar30) * fVar30 * 0.5));
  fVar38 = fVar38 * (float)(~-(uint)(fVar34 <= 0.0) &
                           (uint)((3.0 - fVar34 * fVar31 * fVar31) * fVar31 * 0.5));
  fVar36 = fVar36 * (float)(~-(uint)(fVar35 <= 0.0) &
                           (uint)((3.0 - fVar35 * fVar32 * fVar32) * fVar32 * 0.5));
  fVar31 = fVar38 * fVar10 + fVar37 * *(float *)*param_1 + fVar36 * fVar11;
  fVar32 = fVar38 * fVar25 + fVar37 * fVar24 + fVar36 * fVar26;
  fVar33 = fVar38 * fVar28 + fVar37 * fVar27 + fVar36 * fVar29;
  fVar34 = fVar38 * fVar23 + fVar37 * fVar18 + fVar36 * fVar2;
  auVar21._4_4_ = fVar34;
  auVar21._0_4_ = fVar33;
  auVar21._8_4_ = fVar31;
  auVar21._12_4_ = fVar32;
  auVar7._4_4_ = fVar32;
  auVar7._0_4_ = fVar31;
  auVar7._8_4_ = fVar33;
  auVar7._12_4_ = fVar34;
  auVar22 = minps(auVar21,auVar7);
  auVar20._4_4_ = auVar22._0_4_;
  auVar20._0_4_ = auVar22._4_4_;
  auVar20._8_4_ = auVar22._12_4_;
  auVar20._12_4_ = auVar22._8_4_;
  auVar20 = minps(auVar22,auVar20);
  fVar30 = auVar20._0_4_;
  fVar31 = (fVar31 - fVar30) + *param_5;
  fVar32 = (fVar32 - fVar30) + param_5[1];
  fVar33 = (fVar33 - fVar30) + param_5[2];
  fVar30 = (fVar34 - fVar30) + param_5[3];
  *(float *)*param_1 = *(float *)*param_1 - fVar37 * fVar31;
  *(float *)(*param_1 + 4) = fVar24 - fVar37 * fVar32;
  *(float *)(*param_1 + 8) = fVar27 - fVar37 * fVar33;
  *(float *)(*param_1 + 0xc) = fVar18 - fVar37 * fVar30;
  *(float *)*param_2 = fVar10 - fVar38 * fVar31;
  *(float *)(*param_2 + 4) = fVar25 - fVar38 * fVar32;
  *(float *)(*param_2 + 8) = fVar28 - fVar38 * fVar33;
  *(float *)(*param_2 + 0xc) = fVar23 - fVar38 * fVar30;
  *(float *)*param_3 = fVar11 - fVar36 * fVar31;
  *(float *)(*param_3 + 4) = fVar26 - fVar36 * fVar32;
  *(float *)(*param_3 + 8) = fVar29 - fVar36 * fVar33;
  *(float *)(*param_3 + 0xc) = fVar2 - fVar36 * fVar30;
  *(undefined8 *)*param_4 = 0;
  *(undefined8 *)(*param_4 + 8) = 0;
  uVar12 = *(undefined4 *)(*param_1 + 4);
  uVar13 = *(undefined4 *)(*param_1 + 8);
  uVar14 = *(undefined4 *)(*param_1 + 0xc);
  uVar15 = *(undefined4 *)(*param_3 + 4);
  uVar16 = *(undefined4 *)(*param_3 + 8);
  uVar17 = *(undefined4 *)(*param_3 + 0xc);
  uVar1 = *(undefined4 *)(*param_2 + 4);
  uVar3 = *(undefined4 *)(*param_2 + 8);
  uVar4 = *(undefined4 *)(*param_2 + 0xc);
  auVar22._4_4_ = *(undefined4 *)*param_2;
  auVar22._0_4_ = *(undefined4 *)*param_1;
  auVar22._8_4_ = *(undefined4 *)*param_3;
  auVar22._12_4_ = 0;
  *param_1 = auVar22;
  auVar8._4_4_ = uVar1;
  auVar8._0_4_ = uVar12;
  auVar8._8_4_ = uVar15;
  auVar8._12_4_ = 0;
  *param_2 = auVar8;
  auVar5._4_4_ = uVar3;
  auVar5._0_4_ = uVar13;
  auVar5._8_4_ = uVar16;
  auVar5._12_4_ = 0;
  *param_3 = auVar5;
  auVar9._4_4_ = uVar4;
  auVar9._0_4_ = uVar14;
  auVar9._8_4_ = uVar17;
  auVar9._12_4_ = 0;
  *param_4 = auVar9;
  return;
}



// FUNCTION 1438d7550 FUN_1438d7550 body=75 status=ok
// SIG undefined FUN_1438d7550(void)

undefined8 * FUN_1438d7550(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiTraversalAnalysisSettings::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40a00000;
  *(undefined4 *)(param_1 + 7) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 8) = 0x3e800000;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  return param_1;
}



// FUNCTION 1438d75a0 FUN_1438d75a0 body=15 status=ok
// SIG undefined FUN_1438d75a0(void)

void FUN_1438d75a0(undefined8 *param_1)

{
  *param_1 = hkaiTraversalAnalysisSettings::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 1438d75b0 FUN_1438d75b0 body=136 status=ok
// SIG undefined FUN_1438d75b0(void)

longlong FUN_1438d75b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438d75a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x50;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1438d7640 FUN_1438d7640 body=53 status=ok
// SIG undefined FUN_1438d7640(void)

undefined8 * FUN_1438d7640(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiTraversalAnalysis::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1438d7680 FUN_1438d7680 body=194 status=ok
// SIG undefined FUN_1438d7680(void)

void FUN_1438d7680(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkaiTraversalAnalysis::vftable;
  if (param_1[7] != 0) {
    FUN_14370c150();
  }
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  lVar1 = param_1[4];
  lVar3 = (longlong)(*(int *)(param_1 + 5) + -1);
  if (-1 < *(int *)(param_1 + 5) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438d7750 FUN_1438d7750 body=136 status=ok
// SIG undefined FUN_1438d7750(void)

longlong FUN_1438d7750(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438d7680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1438d77e0 FUN_1438d77e0 body=2391 status=ok
// SIG undefined FUN_1438d77e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d77e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
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
  uint local_res8 [2];
  float local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 uVar37;
  float *pfVar36;
  undefined4 *puVar38;
  undefined8 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  longlong local_2c8;
  int local_2c0;
  uint local_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  undefined8 local_288;
  int local_280;
  uint local_27c;
  undefined8 local_270;
  undefined4 local_268;
  uint local_264;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  uint local_22c;
  undefined8 local_220;
  undefined4 local_218;
  uint local_214;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_150;
  undefined2 local_14e;
  undefined1 local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined1 local_f8 [184];
  
  lVar16 = *param_2;
  local_2b8 = *(float *)(lVar16 + 0x20);
  fStack_2b4 = *(float *)(lVar16 + 0x24);
  fStack_2b0 = *(float *)(lVar16 + 0x28);
  fStack_2ac = *(float *)(lVar16 + 0x2c);
  FUN_1438ce9e0(&local_1e8);
  local_1d0 = *(uint *)(param_1 + 0x34);
  local_1e8 = CONCAT44(fStack_2b4,local_2b8);
  uStack_1e0 = CONCAT44(fStack_2ac,fStack_2b0);
  local_1d4 = local_1d0 ^ 0x80000000;
  local_1d8 = *(undefined4 *)(*param_2 + 0x30);
  local_1c8 = *(undefined4 *)(param_1 + 0x28);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_2a8 = ZEXT416(local_res8[0]);
  local_1cc = 0;
  local_1c4 = FUN_143716040(local_2a8);
  local_res8[0] = *(uint *)(param_1 + 0x18);
  _local_2a8 = ZEXT416(local_res8[0]);
  local_1c0 = FUN_143716150(local_2a8);
  local_res8[0] = *(uint *)(param_1 + 0x1c);
  _local_2a8 = ZEXT416(local_res8[0]);
  local_1bc = FUN_143716040(local_2a8);
  lVar16 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2d8 = 0;
  fStack_2d0 = 0.0;
  local_1b8 = 1;
  local_2bc = 0x80000000;
  fStack_2cc = -0.0;
  FUN_1438cf470(param_2[3],&local_1e8,&local_2d8);
  iVar9 = (int)fStack_2d0 * 2;
  if ((int)(local_2bc & 0x3fffffff) < iVar9) {
    iVar14 = (local_2bc & 0x3fffffff) * 2;
    if (iVar9 < iVar14) {
      iVar9 = iVar14;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_2c8,iVar9,0x50);
  }
  lVar15 = (longlong)(int)fStack_2d0;
  lVar13 = lVar16;
  if (0 < (int)fStack_2d0) {
    do {
      puVar1 = (undefined8 *)(lVar13 + 0x10 + local_2d8);
      local_258 = *puVar1;
      uStack_250 = puVar1[1];
      local_248 = *(undefined8 *)(lVar13 + local_2d8);
      uStack_240 = ((undefined8 *)(lVar13 + local_2d8))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + local_2d8);
      local_1f8 = *puVar1;
      uStack_1f0 = puVar1[1];
      _local_2a8 = *(undefined1 (*) [16])(lVar13 + 0x20 + local_2d8);
      local_res8[0] = *(uint *)(lVar13 + 0x48 + local_2d8);
      local_res10[0] = *(float *)(lVar13 + 0x40 + local_2d8);
      FUN_1438d6900(&local_258,&local_248,&local_1f8,local_2a8,local_res10,local_res8,&local_2c8,
                    param_2);
      lVar15 = lVar15 + -1;
      lVar13 = lVar13 + 0x50;
    } while (lVar15 != 0);
  }
  fStack_2d0 = 0.0;
  if (-1 < (int)fStack_2cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2d8,0x50,(uint)fStack_2cc & 0x3fffffff);
  }
  FUN_1437f62c0(&local_238);
  FUN_1437f62c0(&local_270);
  FUN_1437f62c0(&local_288);
  FUN_1437f62c0(&local_220);
  lVar13 = (longlong)local_2c0;
  fStack_11c = *(float *)(*param_2 + 0x30);
  local_128 = fStack_11c * fStack_11c;
  fStack_124 = fStack_11c * fStack_11c;
  fStack_120 = fStack_11c * fStack_11c;
  fStack_11c = fStack_11c * fStack_11c;
  local_1a8 = *(undefined4 *)(*param_2 + 0x3c);
  local_138 = *(undefined4 *)(param_1 + 0x30);
  fStack_13c = -*(float *)(param_1 + 0x2c);
  local_148 = fStack_13c * local_2b8;
  fStack_144 = fStack_13c * fStack_2b4;
  fStack_140 = fStack_13c * fStack_2b0;
  fStack_13c = fStack_13c * fStack_2ac;
  local_res20 = lVar13;
  uStack_1a4 = local_1a8;
  uStack_1a0 = local_1a8;
  uStack_19c = local_1a8;
  uStack_134 = local_138;
  uStack_130 = local_138;
  uStack_12c = local_138;
  if (0 < lVar13) {
    do {
      local_res20 = lVar13;
      CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_238);
      CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_270);
      CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_288);
      lVar15 = local_2c8;
      pfVar36 = (float *)(lVar16 + 0x20 + local_2c8);
      local_108 = *pfVar36;
      fStack_104 = pfVar36[1];
      local_2d8 = *(longlong *)pfVar36;
      fStack_2d0 = pfVar36[2];
      fStack_2cc = pfVar36[3];
      pfVar36 = (float *)(lVar16 + 0x30 + local_2c8);
      local_118 = *pfVar36;
      fStack_114 = pfVar36[1];
      local_258 = *(undefined8 *)pfVar36;
      fStack_110 = pfVar36[2];
      fStack_10c = pfVar36[3];
      uStack_250 = *(undefined8 *)(pfVar36 + 2);
      pfVar36 = (float *)(lVar16 + local_2c8);
      fVar2 = *pfVar36;
      fVar3 = pfVar36[1];
      fVar4 = pfVar36[2];
      fStack_1fc = pfVar36[3];
      pfVar36 = (float *)(lVar16 + 0x10 + local_2c8);
      fVar5 = *pfVar36;
      fVar6 = pfVar36[1];
      local_248 = *(undefined8 *)pfVar36;
      fVar27 = pfVar36[2];
      uStack_240 = *(undefined8 *)(pfVar36 + 2);
      local_208 = fVar2;
      fStack_204 = fVar3;
      fStack_200 = fVar4;
      fStack_100 = fStack_2d0;
      fStack_fc = fStack_2cc;
      FUN_1438d7180(&local_208,&local_248,param_2);
      FUN_1438d7180(&local_2d8,&local_258,param_2);
      FUN_1438d7210(&local_208,&local_248,&local_258,&local_2d8,&local_2b8);
      FUN_1438d5b00(&local_208,&local_248,local_res8,&local_1a8,&local_2b8);
      FUN_1438d5b00(&local_2d8,&local_258,local_res18,&local_1a8,&local_2b8);
      FUN_1437f9c50(param_2[5],&local_208,&local_248,&local_2d8,&local_258,&local_148,&local_238);
      iVar9 = FUN_1437f73b0(&local_238,0,0x3f800000);
      if (iVar9 == 0) {
        FUN_1437f7410(&local_238);
        puVar38 = &local_138;
        pfVar36 = &local_2b8;
        FUN_1438d5d20(&local_208,&local_248,&local_2d8,&local_258,pfVar36,puVar38,&local_270,param_2
                     );
        FUN_1437f6db0(&local_270,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
        FUN_1437f66a0(&local_270,&local_238);
        FUN_1437f70b0(&local_288,&local_270);
        FUN_1437f7410(&local_288);
        hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_288,local_res8[0]);
        iVar9 = local_280;
        iVar14 = 0;
        fVar28 = ((float)local_2d8 - local_208) * _DAT_1467f07e0 + local_208;
        fVar29 = (local_2d8._4_4_ - fStack_204) * fRam00000001467f07e4 + fStack_204;
        fVar30 = (fStack_2d0 - fStack_200) * fRam00000001467f07e8 + fStack_200;
        fVar31 = (fStack_2cc - fStack_1fc) * fRam00000001467f07ec + fStack_1fc;
        fVar32 = ((float)local_258 - (float)local_248) * _DAT_1467f07e0 + (float)local_248;
        fVar33 = (local_258._4_4_ - local_248._4_4_) * fRam00000001467f07e4 + local_248._4_4_;
        fVar34 = ((float)uStack_250 - (float)uStack_240) * fRam00000001467f07e8 + (float)uStack_240;
        fVar35 = (uStack_250._4_4_ - uStack_240._4_4_) * fRam00000001467f07ec + uStack_240._4_4_;
        if (0 < local_280) {
          fVar27 = fVar27 - fVar4;
          do {
            CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_220);
            pfVar11 = (float *)FUN_1437f7500(&local_288,iVar14);
            uVar37 = (undefined4)((ulonglong)pfVar36 >> 0x20);
            fVar7 = *pfVar11;
            fVar8 = pfVar11[1];
            local_298 = pfVar11[4];
            fVar21 = fVar7 * (fVar5 - fVar2) + fVar2;
            fVar22 = fVar7 * (fVar6 - fVar3) + fVar3;
            fVar23 = fVar7 * fVar27 + fVar4;
            fVar24 = fVar8 * (fVar5 - fVar2) + fVar2;
            fVar25 = fVar8 * (fVar6 - fVar3) + fVar3;
            fVar26 = fVar8 * fVar27 + fVar4;
            fVar17 = fVar21 - fVar24;
            fVar18 = fVar22 - fVar25;
            fVar19 = fVar23 - fVar26;
            if (local_128 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19) {
              fVar17 = fVar32 - fVar28;
              fVar18 = fVar33 - fVar29;
              fVar19 = fVar34 - fVar30;
              fVar20 = fVar35 - fVar31;
              local_1f8 = CONCAT44(fVar7 * fVar18 + fVar29,fVar7 * fVar17 + fVar28);
              uStack_1f0 = CONCAT44(fVar7 * fVar20 + fVar31,fVar7 * fVar19 + fVar30);
              local_2a8._4_4_ = fVar8 * fVar18 + fVar29;
              local_2a8._0_4_ = fVar8 * fVar17 + fVar28;
              fStack_2a0 = fVar8 * fVar19 + fVar30;
              fStack_29c = fVar8 * fVar20 + fVar31;
              FUN_143830830(&local_198);
              fStack_190 = fVar8 * (local_118 - local_108) + local_108;
              fStack_180 = fVar8 * (fStack_114 - fStack_104) + fStack_104;
              fStack_170 = fVar8 * (fStack_110 - fStack_100) + fStack_100;
              fStack_18c = fVar7 * (local_118 - local_108) + local_108;
              fStack_17c = fVar7 * (fStack_114 - fStack_104) + fStack_104;
              fStack_16c = fVar7 * (fStack_110 - fStack_100) + fStack_100;
              local_res10[0] = *(float *)(param_1 + 0x24) * 1.0039062;
              local_168 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
              local_164 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
              local_160 = *(undefined4 *)(lVar16 + 0x40 + lVar15);
              local_15c = *(undefined4 *)(lVar16 + 0x44 + lVar15);
              local_150 = (undefined2)((uint)local_res10[0] >> 0x10);
              local_14c = 1;
              local_14e = 0;
              local_198 = fVar21;
              fStack_194 = fVar24;
              local_188 = fVar22;
              fStack_184 = fVar25;
              local_178 = fVar23;
              fStack_174 = fVar26;
              uVar10 = FUN_1438d2240(param_2[8],&local_198,3,*(undefined4 *)(param_1 + 0x20));
              FUN_1437f7120(&local_220,&local_270,fVar7);
              uVar12 = CONCAT44(uVar37,0x3f800000);
              FUN_1437f78a0(&local_220,fVar7,fVar8,0,uVar12);
              puVar38 = (undefined4 *)((ulonglong)puVar38 & 0xffffffffffffff00);
              pfVar36 = (float *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              FUN_1438d2410(param_2[8],uVar10,0,&local_220,pfVar36,puVar38);
              FUN_1438d6fb0(&local_1f8,local_2a8);
              FUN_1438d2460(param_2[8],uVar10,0,&local_1f8);
              FUN_1438d2460(param_2[8],uVar10,1,local_2a8);
              FUN_1438d2460(param_2[8],uVar10,2,local_f8);
            }
            iVar14 = iVar14 + 1;
            lVar13 = local_res20;
          } while (iVar14 < iVar9);
        }
      }
      lVar16 = lVar16 + 0x50;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    local_res20 = 0;
  }
  uVar12 = FUN_143703a50();
  local_218 = 0;
  if (-1 < (int)local_214) {
    FUN_143702e10(uVar12,local_220,0x14,local_214 & 0x3fffffff);
  }
  local_220 = 0;
  local_214 = 0x80000000;
  uVar12 = FUN_143703a50();
  local_280 = 0;
  if (-1 < (int)local_27c) {
    FUN_143702e10(uVar12,local_288,0x14,local_27c & 0x3fffffff);
  }
  local_288 = 0;
  local_27c = 0x80000000;
  uVar12 = FUN_143703a50();
  local_268 = 0;
  if (-1 < (int)local_264) {
    FUN_143702e10(uVar12,local_270,0x14,local_264 & 0x3fffffff);
  }
  local_270 = 0;
  local_264 = 0x80000000;
  uVar12 = FUN_143703a50();
  local_230 = 0;
  if (-1 < (int)local_22c) {
    FUN_143702e10(uVar12,local_238,0x14,local_22c & 0x3fffffff);
  }
  local_238 = 0;
  local_2c0 = 0;
  local_22c = 0x80000000;
  if (-1 < (int)local_2bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2c8,0x50,local_2bc & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d8140 FUN_1438d8140 body=808 status=ok
// SIG undefined FUN_1438d8140(void)

void FUN_1438d8140(longlong param_1,undefined4 *param_2,undefined2 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [144];
  
  local_118 = *(undefined8 *)(param_1 + 0x20);
  uStack_110 = *(undefined8 *)(param_1 + 0x28);
  FUN_1438d2570(param_1,*param_2,0,&local_108);
  FUN_1438d2570(param_1,*param_2,1,&local_b8);
  local_a8 = local_b8 - local_108;
  fStack_a4 = fStack_b4 - fStack_104;
  fStack_a0 = fStack_b0 - fStack_100;
  fStack_9c = fStack_ac - fStack_fc;
  pfVar8 = (float *)UDlgNode::GetMutableEnterConditionAt(param_1,*param_2);
  fVar4 = *pfVar8;
  fVar5 = pfVar8[3];
  fVar6 = pfVar8[8];
  fVar7 = pfVar8[0xb];
  fVar1 = pfVar8[4];
  fVar2 = pfVar8[7];
  fStack_f0 = (pfVar8[5] - fVar1) * (float)local_118 - local_118._4_4_ * (pfVar8[1] - fVar4);
  local_f8 = (pfVar8[9] - fVar6) * local_118._4_4_ - (float)uStack_110 * (pfVar8[5] - fVar1);
  fStack_f4 = (pfVar8[1] - fVar4) * (float)uStack_110 - (float)local_118 * (pfVar8[9] - fVar6);
  fVar10 = local_f8 * local_f8;
  fVar13 = fStack_f4 * fStack_f4;
  auVar11._8_4_ = fStack_f0 * fStack_f0;
  auVar11._4_4_ = auVar11._8_4_;
  auVar11._0_4_ = auVar11._8_4_;
  auVar11._12_4_ = auVar11._8_4_;
  fVar15 = fVar13 + fVar10 + auVar11._8_4_;
  fVar16 = fVar13 + fVar10 + auVar11._8_4_;
  fVar17 = fVar13 + fVar10 + auVar11._8_4_;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar15;
  auVar3._8_4_ = fVar17;
  auVar3._12_4_ = fVar13 + fVar10 + auVar11._8_4_;
  auVar12 = rsqrtps(auVar11,auVar3);
  fVar10 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  local_f8 = local_f8 *
             (float)(~-(uint)(fVar15 <= 0.0) &
                    (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5));
  fStack_f4 = fStack_f4 *
              (float)(~-(uint)(fVar16 <= 0.0) &
                     (uint)((3.0 - fVar16 * fVar13 * fVar13) * fVar13 * 0.5));
  fStack_f0 = fStack_f0 *
              (float)(~-(uint)(fVar17 <= 0.0) &
                     (uint)((3.0 - fVar17 * fVar14 * fVar14) * fVar14 * 0.5));
  fStack_ec = 0.0 - (fStack_f4 * fVar1 + local_f8 * fVar4 + fStack_f0 * fVar6);
  fStack_d0 = (pfVar8[6] - fVar2) * (float)local_118 - local_118._4_4_ * (pfVar8[2] - fVar5);
  local_d8 = (pfVar8[10] - fVar7) * local_118._4_4_ - (float)uStack_110 * (pfVar8[6] - fVar2);
  fStack_d4 = (pfVar8[2] - fVar5) * (float)uStack_110 - (float)local_118 * (pfVar8[10] - fVar7);
  fVar10 = local_d8 * local_d8;
  fVar13 = fStack_d4 * fStack_d4;
  fVar14 = fStack_d0 * fStack_d0;
  auVar9._4_4_ = fVar10;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = fVar10;
  auVar9._12_4_ = fVar10;
  fVar15 = fVar13 + fVar10 + fVar14;
  fVar16 = fVar13 + fVar10 + fVar14;
  fVar17 = fVar13 + fVar10 + fVar14;
  auVar12._4_4_ = fVar16;
  auVar12._0_4_ = fVar15;
  auVar12._8_4_ = fVar17;
  auVar12._12_4_ = fVar13 + fVar10 + fVar14;
  auVar12 = rsqrtps(auVar9,auVar12);
  fVar10 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  local_d8 = local_d8 *
             (float)(~-(uint)(fVar15 <= 0.0) &
                    (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5));
  fStack_d4 = fStack_d4 *
              (float)(~-(uint)(fVar16 <= 0.0) &
                     (uint)((3.0 - fVar16 * fVar13 * fVar13) * fVar13 * 0.5));
  fStack_d0 = fStack_d0 *
              (float)(~-(uint)(fVar17 <= 0.0) &
                     (uint)((3.0 - fVar17 * fVar14 * fVar14) * fVar14 * 0.5));
  fStack_cc = 0.0 - (fStack_d4 * fVar2 + local_d8 * fVar5 + fStack_d0 * fVar7);
  fVar10 = (fVar5 - fVar4) * (float)local_118;
  fVar13 = (fVar2 - fVar1) * local_118._4_4_;
  fVar14 = (fVar7 - fVar6) * (float)uStack_110;
  local_128 = (fVar5 - fVar4) - (fVar13 + fVar10 + fVar14) * (float)local_118;
  fStack_124 = (fVar2 - fVar1) - (fVar13 + fVar10 + fVar14) * local_118._4_4_;
  fStack_120 = (fVar7 - fVar6) - (fVar13 + fVar10 + fVar14) * (float)uStack_110;
  fStack_11c = 0.0 - (fVar13 + fVar10 + fVar14) * uStack_110._4_4_;
  FUN_1438d2510(param_1,*param_2,0,param_3,local_98);
  FUN_1437f7570(local_98,&local_108,&local_a8,&local_118,local_e8,local_c8);
  FUN_1438d8470(local_e8,&local_128,&local_f8,param_4);
  FUN_1438d8470(local_c8,&local_128,&local_f8,param_5);
  FUN_1438d8470(local_e8,&local_128,&local_d8,param_6);
  FUN_1438d8470(local_c8,&local_128,&local_d8,param_7);
  return;
}



// FUNCTION 1438d8470 FUN_1438d8470 body=131 status=ok
// SIG undefined FUN_1438d8470(void)

void FUN_1438d8470(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar9 = *param_1 * *param_3;
  fVar10 = param_1[1] * param_3[1];
  fVar11 = param_1[2] * param_3[2];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = *param_3 * *param_2;
  fVar7 = param_3[1] * fVar1;
  fVar8 = param_3[2] * fVar2;
  fVar12 = fVar7 + fVar4 + fVar8;
  fVar13 = fVar7 + fVar4 + fVar8;
  fVar14 = fVar7 + fVar4 + fVar8;
  fVar8 = fVar7 + fVar4 + fVar8;
  auVar5._0_4_ = fVar11 + fVar9;
  auVar5._4_4_ = param_3[3] + fVar10;
  auVar5._8_4_ = fVar9 + fVar11;
  auVar5._12_4_ = fVar10 + param_3[3];
  auVar6._4_4_ = fVar13;
  auVar6._0_4_ = fVar12;
  auVar6._8_4_ = fVar14;
  auVar6._12_4_ = fVar8;
  auVar6 = rcpps(auVar5,auVar6);
  fVar4 = param_1[1];
  fVar7 = param_1[2];
  fVar9 = param_1[3];
  *param_4 = *param_2 *
             (2.0 - auVar6._0_4_ * fVar12) * auVar6._0_4_ * (0.0 - (auVar5._4_4_ + auVar5._0_4_)) +
             *param_1;
  param_4[1] = fVar1 * (2.0 - auVar6._4_4_ * fVar13) * auVar6._4_4_ *
                       (0.0 - (auVar5._0_4_ + auVar5._4_4_)) + fVar4;
  param_4[2] = fVar2 * (2.0 - auVar6._8_4_ * fVar14) * auVar6._8_4_ *
                       (0.0 - (auVar5._12_4_ + auVar5._8_4_)) + fVar7;
  param_4[3] = fVar3 * (2.0 - auVar6._12_4_ * fVar8) * auVar6._12_4_ *
                       (0.0 - (auVar5._8_4_ + auVar5._12_4_)) + fVar9;
  return;
}



// FUNCTION 1438d8500 FUN_1438d8500 body=4376 status=ok
// SIG undefined FUN_1438d8500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d8500(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18;
  undefined1 local_res20 [8];
  undefined8 *puVar54;
  ulonglong uVar55;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  undefined8 local_478;
  int local_470;
  uint local_46c;
  undefined8 local_460;
  int local_458;
  uint local_454;
  longlong local_448;
  int local_440;
  uint local_43c;
  undefined8 local_438;
  undefined4 local_430;
  uint local_42c;
  longlong local_420;
  int local_418;
  uint local_414;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  uint local_3ec;
  undefined8 local_3e0;
  undefined4 local_3d8;
  uint local_3d4;
  undefined1 local_3c8 [8];
  float fStack_3c0;
  float fStack_3bc;
  longlong local_3b8;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8;
  undefined1 local_2a6;
  float *local_298;
  undefined4 local_290;
  uint local_28c;
  float local_288 [24];
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined1 local_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  
  lVar20 = *param_2;
  local_488 = *(float *)(lVar20 + 0x20);
  fStack_484 = *(float *)(lVar20 + 0x24);
  fStack_480 = *(float *)(lVar20 + 0x28);
  fStack_47c = *(float *)(lVar20 + 0x2c);
  FUN_1438ce9e0(&local_2d8);
  local_2d8 = CONCAT44(fStack_484,local_488);
  uStack_2d0 = CONCAT44(fStack_47c,fStack_480);
  local_2c4 = *(uint *)(param_1 + 0x38) ^ 0x80000000;
  local_2c8 = *(undefined4 *)(*param_2 + 0x30);
  local_2c0 = *(uint *)(param_1 + 0x34) ^ 0x80000000;
  fVar53 = *(float *)(*param_2 + 0x3c);
  local_2b0 = 0x3f800000;
  local_2bc = *(float *)(param_1 + 0x3c) - (fVar53 + fVar53);
  local_2b8 = local_2bc + 0.05;
  local_2b4 = 0;
  local_res8[0] = *(float *)(param_1 + 0x1c);
  _local_3c8 = ZEXT416((uint)local_res8[0]);
  local_2ac = FUN_143716040(local_3c8);
  lVar20 = 0;
  local_448 = 0;
  local_440 = 0;
  local_420 = 0;
  local_418 = 0;
  local_2a8 = 1;
  local_2a6 = 1;
  local_43c = 0x80000000;
  local_414 = 0x80000000;
  FUN_1438cf470(param_2[3],&local_2d8,&local_420);
  iVar13 = local_418 * 2;
  if ((int)(local_43c & 0x3fffffff) < iVar13) {
    iVar18 = (local_43c & 0x3fffffff) * 2;
    if (iVar13 < iVar18) {
      iVar13 = iVar18;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_448,iVar13,0x50);
  }
  lVar19 = (longlong)local_418;
  lVar17 = lVar20;
  if (0 < local_418) {
    do {
      puVar54 = (undefined8 *)(local_420 + 0x10 + lVar17);
      local_388 = *puVar54;
      uStack_380 = puVar54[1];
      local_378 = *(undefined8 *)(local_420 + lVar17);
      uStack_370 = ((undefined8 *)(local_420 + lVar17))[1];
      _local_408 = *(undefined1 (*) [16])(local_420 + 0x30 + lVar17);
      _local_3c8 = *(undefined1 (*) [16])(local_420 + 0x20 + lVar17);
      local_res8[0] = *(float *)(local_420 + 0x48 + lVar17);
      local_res10[0] = *(float *)(local_420 + 0x40 + lVar17);
      FUN_1438d6900(&local_388,&local_378,local_408,local_3c8,local_res10,local_res8,&local_448,
                    param_2);
      lVar19 = lVar19 + -1;
      lVar17 = lVar17 + 0x50;
    } while (lVar19 != 0);
  }
  fVar34 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x30);
  local_328 = *(float *)(*param_2 + 0x3c);
  fVar53 = *(float *)(param_1 + 0x2c);
  local_118 = *(float *)(param_1 + 0x30);
  fVar21 = *(float *)(*param_2 + 0x38) * 0.9;
  fVar40 = local_328 * _DAT_1467f0700;
  fVar42 = local_328 * fRam00000001467f0704;
  fVar44 = local_328 * fRam00000001467f0708;
  fVar45 = local_328 * fRam00000001467f070c;
  local_148 = fVar34 * local_488;
  fStack_144 = fVar34 * fStack_484;
  fStack_140 = fVar34 * fStack_480;
  fStack_13c = fVar34 * fStack_47c;
  local_res10[0] = *(float *)(param_1 + 0x40) / (fVar34 - *(float *)(param_1 + 0x2c));
  local_3c8._4_4_ = fVar53;
  local_3c8._0_4_ = fVar53;
  fStack_3c0 = fVar53;
  fStack_3bc = fVar53;
  local_128 = (fVar53 - fVar34) * local_488;
  fStack_124 = (fVar53 - fVar34) * fStack_484;
  fStack_120 = (fVar53 - fVar34) * fStack_480;
  fStack_11c = (fVar53 - fVar34) * fStack_47c;
  local_138 = *(undefined4 *)(param_1 + 0x44);
  local_res8[0] = fVar21;
  fStack_324 = local_328;
  fStack_320 = local_328;
  fStack_31c = local_328;
  local_168 = fVar21;
  fStack_164 = fVar21;
  fStack_160 = fVar21;
  fStack_15c = fVar21;
  local_158 = fVar40;
  fStack_154 = fVar42;
  fStack_150 = fVar44;
  fStack_14c = fVar45;
  uStack_134 = local_138;
  uStack_130 = local_138;
  uStack_12c = local_138;
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  FUN_143716280(&local_138,&local_108,&local_f8);
  local_1b8 = *(float *)(param_1 + 0x48);
  local_1a8 = *(float *)(param_1 + 0x4c);
  local_res8[0] = *(float *)(param_1 + 0x50);
  _local_408 = ZEXT416((uint)local_res8[0]);
  fStack_1b4 = local_1b8;
  fStack_1b0 = local_1b8;
  fStack_1ac = local_1b8;
  fStack_1a4 = local_1a8;
  fStack_1a0 = local_1a8;
  fStack_19c = local_1a8;
  local_res8[0] = (float)FUN_143716040(local_408);
  lVar17 = (longlong)local_440;
  fVar34 = fVar21;
  fVar30 = fVar21;
  fVar36 = fVar21;
  fVar39 = fVar53;
  fVar41 = fVar53;
  fVar43 = fVar53;
  local_3b8 = lVar17;
  local_178 = local_res8[0];
  fStack_174 = local_res8[0];
  fStack_170 = local_res8[0];
  fStack_16c = local_res8[0];
  if (0 < lVar17) {
    do {
      lVar19 = local_448;
      pfVar16 = (float *)(local_448 + 0x30 + lVar20);
      local_3a8 = *pfVar16;
      fStack_3a4 = pfVar16[1];
      fStack_3a0 = pfVar16[2];
      fStack_39c = pfVar16[3];
      pfVar16 = (float *)(local_448 + 0x10 + lVar20);
      fVar46 = *pfVar16;
      fVar47 = pfVar16[1];
      fVar48 = pfVar16[2];
      fVar49 = pfVar16[3];
      pfVar16 = (float *)(local_448 + lVar20);
      fVar6 = *pfVar16;
      fVar7 = pfVar16[1];
      fVar8 = pfVar16[2];
      fVar9 = pfVar16[3];
      pfVar16 = (float *)(local_448 + 0x20 + lVar20);
      fVar10 = *pfVar16;
      fVar11 = pfVar16[1];
      fVar12 = pfVar16[2];
      fStack_30c = pfVar16[3];
      fVar22 = (local_3a8 - fVar46) * local_488;
      fVar25 = (fStack_3a4 - fVar47) * fStack_484;
      fVar27 = (fStack_3a0 - fVar48) * fStack_480;
      auVar31._0_4_ = (fVar25 + fVar22 + fVar27) * local_488;
      auVar31._4_4_ = (fVar25 + fVar22 + fVar27) * fStack_484;
      auVar31._8_4_ = (fVar25 + fVar22 + fVar27) * fStack_480;
      auVar31._12_4_ = (fVar25 + fVar22 + fVar27) * fStack_47c;
      fVar50 = (local_3a8 - fVar46) - auVar31._0_4_;
      fVar51 = (fStack_3a4 - fVar47) - auVar31._4_4_;
      fVar52 = (fStack_3a0 - fVar48) - auVar31._8_4_;
      fVar22 = fVar50 * fVar50;
      fVar25 = fVar51 * fVar51;
      fVar27 = fVar52 * fVar52;
      fVar35 = fVar25 + fVar22 + fVar27;
      fVar37 = fVar25 + fVar22 + fVar27;
      fVar38 = fVar25 + fVar22 + fVar27;
      fVar27 = fVar25 + fVar22 + fVar27;
      auVar32._4_4_ = fVar37;
      auVar32._0_4_ = fVar35;
      auVar32._8_4_ = fVar38;
      auVar32._12_4_ = fVar27;
      auVar32 = rsqrtps(auVar31,auVar32);
      fVar22 = auVar32._0_4_;
      fVar25 = auVar32._4_4_;
      fVar23 = auVar32._8_4_;
      fVar26 = auVar32._12_4_;
      fVar50 = fVar50 * (float)(~-(uint)(fVar35 <= 0.0) &
                               (uint)((3.0 - fVar22 * fVar35 * fVar22) * fVar22 * 0.5));
      fVar51 = fVar51 * (float)(~-(uint)(fVar37 <= 0.0) &
                               (uint)((3.0 - fVar25 * fVar37 * fVar25) * fVar25 * 0.5));
      fVar52 = fVar52 * (float)(~-(uint)(fVar38 <= 0.0) &
                               (uint)((3.0 - fVar23 * fVar38 * fVar23) * fVar23 * 0.5));
      fVar22 = ((fStack_39c - fVar49) - auVar31._12_4_) *
               (float)(~-(uint)(fVar27 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar27 * fVar26) * fVar26 * 0.5));
      local_3b8 = lVar17;
      local_348 = fVar6;
      fStack_344 = fVar7;
      fStack_340 = fVar8;
      fStack_33c = fVar9;
      local_338 = fVar46;
      fStack_334 = fVar47;
      fStack_330 = fVar48;
      fStack_32c = fVar49;
      local_318 = fVar10;
      fStack_314 = fVar11;
      fStack_310 = fVar12;
      local_198 = local_3a8;
      fStack_194 = fStack_3a4;
      fStack_190 = fStack_3a0;
      fStack_18c = fStack_39c;
      iVar13 = FUN_1438d7180(&local_348,&local_338,param_2);
      if ((iVar13 != 0) && (iVar13 = FUN_1438d7180(&local_3a8,&local_318,param_2), iVar13 != 0)) {
        FUN_1438d5b00(&local_348,&local_338,local_res8,&local_328,&local_488);
        FUN_1438d5b00(&local_318,&local_3a8,local_res20,&local_328,&local_488);
        fVar25 = (local_348 - local_318) * local_488;
        fVar26 = (fStack_344 - fStack_314) * fStack_484;
        fVar38 = (fStack_340 - fStack_310) * fStack_480;
        fVar27 = (local_338 - local_3a8) * local_488;
        fVar35 = (fStack_334 - fStack_3a4) * fStack_484;
        fVar28 = (fStack_330 - fStack_3a0) * fStack_480;
        FUN_1437f62c0(&local_478);
        local_2f8 = (local_338 + local_148) - fVar50 * local_328;
        fStack_2f4 = (fStack_334 + fStack_144) - fVar51 * fStack_324;
        fStack_2f0 = (fStack_330 + fStack_140) - fVar52 * fStack_320;
        fStack_2ec = (fStack_32c + fStack_13c) - fVar22 * fStack_31c;
        local_368._4_4_ = (fStack_344 + fStack_144) - fVar51 * fStack_324;
        local_368._0_4_ = (local_348 + local_148) - fVar50 * local_328;
        fStack_360 = (fStack_340 + fStack_140) - fVar52 * fStack_320;
        fStack_35c = (fStack_33c + fStack_13c) - fVar22 * fStack_31c;
        fVar23 = (local_338 - local_3a8) * local_488;
        fVar37 = (fStack_334 - fStack_3a4) * fStack_484;
        fVar29 = (fStack_330 - fStack_3a0) * fStack_480;
        local_308 = ((local_338 - local_3a8) - (fVar37 + fVar23 + fVar29) * local_488) -
                    fVar50 * fVar40;
        fStack_304 = ((fStack_334 - fStack_3a4) - (fVar37 + fVar23 + fVar29) * fStack_484) -
                     fVar51 * fVar42;
        fStack_300 = ((fStack_330 - fStack_3a0) - (fVar37 + fVar23 + fVar29) * fStack_480) -
                     fVar52 * fVar44;
        fStack_2fc = ((fStack_32c - fStack_39c) - (fVar37 + fVar23 + fVar29) * fStack_47c) -
                     fVar22 * fVar45;
        FUN_1437f8990(param_2[5],local_368,&local_2f8,&local_128,&local_308,&local_478);
        FUN_1437f6db0(&local_478);
        if (local_470 == 0) {
LAB_1438d8b54:
          uVar15 = FUN_143703a50();
          local_470 = 0;
          if (-1 < (int)local_46c) {
            FUN_143702e10(uVar15,local_478,0x14,local_46c & 0x3fffffff);
          }
        }
        else {
          FUN_1437f62c0(&local_438);
          local_358._0_4_ = (local_318 - fVar50 * local_328) + fVar21 * local_488;
          local_358._4_4_ = (fStack_314 - fVar51 * fStack_324) + fVar34 * fStack_484;
          fStack_350 = (fStack_310 - fVar52 * fStack_320) + fVar30 * fStack_480;
          fStack_34c = (fStack_30c - fVar22 * fStack_31c) + fVar36 * fStack_47c;
          local_2e8 = (local_3a8 - fVar50 * local_328) + fVar21 * local_488;
          fStack_2e4 = (fStack_3a4 - fVar51 * fStack_324) + fVar34 * fStack_484;
          fStack_2e0 = (fStack_3a0 - fVar52 * fStack_320) + fVar30 * fStack_480;
          fStack_2dc = (fStack_39c - fVar22 * fStack_31c) + fVar36 * fStack_47c;
          local_308 = (((fVar26 + fVar25 + fVar38) - fVar21) + fVar53) * local_488 +
                      (float)local_358._0_4_;
          fStack_304 = (((fVar26 + fVar25 + fVar38) - fVar34) + fVar39) * fStack_484 +
                       (float)local_358._4_4_;
          fStack_300 = (((fVar26 + fVar25 + fVar38) - fVar30) + fVar41) * fStack_480 + fStack_350;
          fStack_2fc = (((fVar26 + fVar25 + fVar38) - fVar36) + fVar43) * fStack_47c + fStack_34c;
          local_2f8 = (((fVar35 + fVar27 + fVar28) - fVar21) + fVar53) * local_488 + local_2e8;
          fStack_2f4 = (((fVar35 + fVar27 + fVar28) - fVar34) + fVar39) * fStack_484 + fStack_2e4;
          fStack_2f0 = (((fVar35 + fVar27 + fVar28) - fVar30) + fVar41) * fStack_480 + fStack_2e0;
          fStack_2ec = (((fVar35 + fVar27 + fVar28) - fVar36) + fVar43) * fStack_47c + fStack_2dc;
          local_368._4_4_ = (0.0 - fVar42) * fVar51;
          local_368._0_4_ = (0.0 - fVar40) * fVar50;
          fStack_360 = (0.0 - fVar44) * fVar52;
          fStack_35c = (0.0 - fVar45) * fVar22;
          FUN_1437f9c50(param_2[5],local_358,&local_2e8,&local_308,&local_2f8,local_368,&local_438);
          FUN_1437f62c0(&local_460);
          FUN_1437f7fd0(&local_460,&local_478);
          FUN_1437f66a0(&local_460,&local_438);
          hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_460);
          if (local_458 == 0) {
            uVar15 = FUN_143703a50();
            local_458 = 0;
            if (-1 < (int)local_454) {
              FUN_143702e10(uVar15,local_460,0x14,local_454 & 0x3fffffff);
            }
            local_460 = 0;
            local_454 = 0x80000000;
            uVar15 = FUN_143703a50();
            local_430 = 0;
            if (-1 < (int)local_42c) {
              FUN_143702e10(uVar15,local_438,0x14,local_42c & 0x3fffffff);
            }
            local_438 = 0;
            local_42c = 0x80000000;
            goto LAB_1438d8b54;
          }
          fVar46 = fVar46 - fVar6;
          fVar47 = fVar47 - fVar7;
          fVar48 = fVar48 - fVar8;
          fVar49 = fVar49 - fVar9;
          fVar53 = *(float *)(*param_2 + 0x30);
          local_298 = local_288;
          local_358._4_4_ = fVar48;
          local_358._0_4_ = fVar47;
          fStack_350 = fVar46;
          fStack_34c = fVar49;
          local_290 = 0;
          local_28c = 0x80000006;
          fStack_390 = fVar47 * local_488 - fStack_484 * fVar46;
          local_398 = fVar48 * fStack_484 - fStack_480 * fVar47;
          fStack_394 = fVar46 * fStack_480 - local_488 * fVar48;
          fVar21 = local_398 * local_398;
          fVar34 = fStack_394 * fStack_394;
          fVar30 = fStack_390 * fStack_390;
          fVar42 = fVar34 + fVar21 + fVar30;
          fVar44 = fVar34 + fVar21 + fVar30;
          fVar45 = fVar34 + fVar21 + fVar30;
          fVar30 = fVar34 + fVar21 + fVar30;
          auVar1._4_4_ = fVar44;
          auVar1._0_4_ = fVar42;
          auVar1._8_4_ = fVar45;
          auVar1._12_4_ = fVar30;
          auVar32 = rsqrtps(_local_358,auVar1);
          fVar21 = auVar32._0_4_;
          fVar34 = auVar32._4_4_;
          fVar36 = auVar32._8_4_;
          fVar40 = auVar32._12_4_;
          auVar33._0_4_ = fVar21 * 0.5;
          auVar33._4_4_ = fVar34 * 0.5;
          auVar33._8_4_ = fVar36 * 0.5;
          auVar33._12_4_ = fVar40 * 0.5;
          local_398 = local_398 *
                      (float)(~-(uint)(fVar42 <= 0.0) &
                             (uint)((3.0 - fVar21 * fVar42 * fVar21) * auVar33._0_4_));
          fStack_394 = fStack_394 *
                       (float)(~-(uint)(fVar44 <= 0.0) &
                              (uint)((3.0 - fVar34 * fVar44 * fVar34) * auVar33._4_4_));
          fStack_390 = fStack_390 *
                       (float)(~-(uint)(fVar45 <= 0.0) &
                              (uint)((3.0 - fVar36 * fVar45 * fVar36) * auVar33._8_4_));
          fStack_38c = (fVar49 * fStack_47c - fStack_47c * fVar49) *
                       (float)(~-(uint)(fVar30 <= 0.0) &
                              (uint)((3.0 - fVar40 * fVar30 * fVar40) * auVar33._12_4_));
          uVar15 = FUN_143703a50();
          if ((local_28c & 0x3fffffff) < 6) {
            uVar5 = (local_28c & 0x3fffffff) * 2;
            uVar4 = 6;
            if (6 < uVar5) {
              uVar4 = uVar5;
            }
            FUN_14370c310(uVar15,&local_298,uVar4,0x10);
          }
          iVar13 = local_458;
          local_290 = 6;
          fVar41 = fStack_394 * fVar46 - local_398 * (float)local_358._0_4_;
          fVar43 = fStack_390 * fVar47 - fStack_394 * (float)local_358._4_4_;
          fVar22 = local_398 * fVar48 - fStack_390 * fStack_350;
          fVar21 = fVar43 * fVar43;
          fVar34 = fVar22 * fVar22;
          fVar30 = fVar41 * fVar41;
          fVar36 = fVar34 + fVar21 + fVar30;
          fVar42 = fVar34 + fVar21 + fVar30;
          fVar45 = fVar34 + fVar21 + fVar30;
          auVar2._4_4_ = fVar42;
          auVar2._0_4_ = fVar36;
          auVar2._8_4_ = fVar45;
          auVar2._12_4_ = fVar34 + fVar21 + fVar30;
          auVar32 = rsqrtps(auVar33,auVar2);
          fVar21 = auVar32._0_4_;
          fVar34 = auVar32._4_4_;
          fVar30 = auVar32._8_4_;
          fVar40 = local_118 * local_488;
          fVar44 = fStack_114 * fStack_484;
          fVar39 = fStack_110 * fStack_480;
          fStack_360 = -0.0;
          local_368 = (undefined1  [8])0x8000000080000000;
          fStack_35c = 0.0;
          fVar43 = fVar43 * (float)(~-(uint)(fVar36 <= 0.0) &
                                   (uint)((3.0 - fVar21 * fVar36 * fVar21) * fVar21 * 0.5));
          fVar22 = fVar22 * (float)(~-(uint)(fVar42 <= 0.0) &
                                   (uint)((3.0 - fVar34 * fVar42 * fVar34) * fVar34 * 0.5));
          fVar41 = fVar41 * (float)(~-(uint)(fVar45 <= 0.0) &
                                   (uint)((3.0 - fVar30 * fVar45 * fVar30) * fVar30 * 0.5));
          *local_298 = -fVar50;
          local_298[1] = -fVar51;
          local_298[2] = -fVar52;
          local_298[3] = 0.0 - (-fVar51 * fVar7 + -fVar50 * fVar6 + -fVar52 * fVar8);
          local_298[4] = fVar50;
          local_298[5] = fVar51;
          local_298[6] = fVar52;
          local_298[7] = 0.0 - (fVar11 * fVar51 + fVar10 * fVar50 + fVar12 * fVar52);
          iVar18 = 0;
          local_298[8] = -fVar43;
          local_298[9] = -fVar22;
          local_298[10] = -fVar41;
          local_298[0xb] =
               0.0 - (((float)local_3c8._4_4_ * fStack_484 + fVar7) * -fVar22 +
                      ((float)local_3c8._0_4_ * local_488 + fVar6) * -fVar43 +
                     (fStack_3c0 * fStack_480 + fVar8) * -fVar41);
          local_298[0xc] = fVar43;
          local_298[0xd] = fVar22;
          local_298[0xe] = fVar41;
          local_298[0xf] =
               0.0 - ((fVar44 + fVar7) * fVar22 + (fVar40 + fVar6) * fVar43 +
                     (fVar39 + fVar8) * fVar41);
          fVar30 = fStack_190;
          fVar34 = fStack_194;
          fVar21 = local_198;
          fVar36 = fVar46 * local_488;
          fVar42 = fVar47 * fStack_484;
          fVar45 = fVar48 * fStack_480;
          fVar23 = fVar46 - (fVar42 + fVar36 + fVar45) * local_488;
          fVar26 = fVar47 - (fVar42 + fVar36 + fVar45) * fStack_484;
          fVar35 = fVar48 - (fVar42 + fVar36 + fVar45) * fStack_480;
          fVar40 = fVar23 * fVar23;
          fVar44 = fVar26 * fVar26;
          auVar24._8_4_ = fVar35 * fVar35;
          auVar24._4_4_ = auVar24._8_4_;
          auVar24._0_4_ = auVar24._8_4_;
          auVar24._12_4_ = auVar24._8_4_;
          fVar43 = fVar44 + fVar40 + auVar24._8_4_;
          fVar22 = fVar44 + fVar40 + auVar24._8_4_;
          fVar25 = fVar44 + fVar40 + auVar24._8_4_;
          fVar27 = fVar44 + fVar40 + auVar24._8_4_;
          auVar3._4_4_ = fVar22;
          auVar3._0_4_ = fVar43;
          auVar3._8_4_ = fVar25;
          auVar3._12_4_ = fVar27;
          auVar32 = rsqrtps(auVar24,auVar3);
          fVar40 = auVar32._0_4_;
          fVar44 = auVar32._4_4_;
          fVar39 = auVar32._8_4_;
          fVar41 = auVar32._12_4_;
          fVar23 = fVar23 * (float)(~-(uint)(fVar43 <= 0.0) &
                                   (uint)((3.0 - fVar43 * fVar40 * fVar40) * fVar40 * 0.5));
          fVar26 = fVar26 * (float)(~-(uint)(fVar22 <= 0.0) &
                                   (uint)((3.0 - fVar22 * fVar44 * fVar44) * fVar44 * 0.5));
          fVar35 = fVar35 * (float)(~-(uint)(fVar25 <= 0.0) &
                                   (uint)((3.0 - fVar25 * fVar39 * fVar39) * fVar39 * 0.5));
          fVar36 = (fVar49 - (fVar42 + fVar36 + fVar45) * fStack_47c) *
                   (float)(~-(uint)(fVar27 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar41 * fVar41) * fVar41 * 0.5));
          local_188 = local_f8 * local_488 - local_108 * local_398;
          fStack_184 = fStack_f4 * fStack_484 - fStack_104 * fStack_394;
          fStack_180 = fStack_f0 * fStack_480 - fStack_100 * fStack_390;
          fStack_17c = fStack_ec * fStack_47c - fStack_fc * fStack_38c;
          local_388 = CONCAT44(fVar26,fVar23);
          uStack_380 = CONCAT44(fVar36,fVar35);
          local_2e8 = fVar23 * local_1a8;
          fStack_2e4 = fVar26 * fStack_1a4;
          fStack_2e0 = fVar35 * fStack_1a0;
          fStack_2dc = fVar36 * fStack_19c;
          local_358._4_4_ = fVar26 * fStack_1b4;
          local_358._0_4_ = fVar23 * local_1b8;
          fStack_350 = fVar35 * fStack_1b0;
          fStack_34c = fVar36 * fStack_1ac;
          if (0 < local_458) {
            do {
              pfVar16 = (float *)FUN_1437f7500(&local_460,iVar18);
              fVar36 = *pfVar16;
              fVar40 = pfVar16[1];
              local_218 = pfVar16[4];
              fVar42 = fVar36 * fVar46 + fVar6;
              fVar44 = fVar36 * fVar47 + fVar7;
              fVar45 = fVar36 * fVar48 + fVar8;
              local_408._0_4_ = fVar40 * fVar46 + fVar6;
              local_408._4_4_ = fVar40 * fVar47 + fVar7;
              fStack_400 = fVar40 * fVar48 + fVar8;
              local_228 = (fVar40 - fVar36) * fVar46;
              fStack_224 = (fVar40 - fVar36) * fVar47;
              fStack_220 = (fVar40 - fVar36) * fVar48;
              fStack_21c = (fVar40 - fVar36) * fVar49;
              local_378 = CONCAT44(fVar44,fVar42);
              uStack_370 = CONCAT44(fVar36 * fVar49 + fVar9,fVar45);
              fStack_3fc = fVar40 * fVar49 + fVar9;
              if (fVar53 * fVar53 <=
                  (fVar44 - (float)local_408._4_4_) * (fVar44 - (float)local_408._4_4_) +
                  (fVar42 - (float)local_408._0_4_) * (fVar42 - (float)local_408._0_4_) +
                  (fVar45 - fStack_400) * (fVar45 - fStack_400)) {
                fVar42 = fVar42 + (float)local_358._0_4_;
                fVar44 = fVar44 + (float)local_358._4_4_;
                fVar45 = fVar45 + fStack_350;
                fVar41 = (float)local_408._0_4_ + local_2e8;
                fVar43 = (float)local_408._4_4_ + fStack_2e4;
                fVar22 = fStack_400 + fStack_2e0;
                FUN_143830830(&local_208);
                fStack_1fc = (fVar21 - fVar10) * fVar36 + fVar10;
                fStack_1ec = (fVar34 - fVar11) * fVar36 + fVar11;
                fStack_1dc = (fVar30 - fVar12) * fVar36 + fVar12;
                fStack_200 = (fVar21 - fVar10) * fVar40 + fVar10;
                fStack_1f0 = (fVar34 - fVar11) * fVar40 + fVar11;
                fStack_1e0 = (fVar30 - fVar12) * fVar40 + fVar12;
                local_208 = (undefined4)local_378;
                uStack_204 = local_408._0_4_;
                local_res18 = *(float *)(param_1 + 0x24) * 1.0039062;
                local_1f8 = local_378._4_4_;
                uStack_1f4 = local_408._4_4_;
                local_1e8 = (undefined4)uStack_370;
                uStack_1e4 = fStack_400;
                local_1d8 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                local_1d4 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                local_1d0 = *(undefined4 *)(lVar19 + 0x40 + lVar20);
                local_1cc = *(undefined4 *)(lVar19 + 0x44 + lVar20);
                local_1c0 = (undefined2)((uint)local_res18 >> 0x10);
                local_1bc = 1;
                local_1be = 0;
                uVar14 = FUN_1438d2240(param_2[8],&local_208,5,*(undefined4 *)(param_1 + 0x20));
                local_298[0x10] = (float)((uint)local_388 ^ local_368._0_4_);
                local_298[0x11] = (float)(local_388._4_4_ ^ local_368._4_4_);
                local_298[0x12] = (float)((uint)uStack_380 ^ (uint)fStack_360);
                local_298[0x13] = (float)(uStack_380._4_4_ ^ (uint)fStack_35c);
                fVar36 = local_298[0x10];
                fVar40 = local_298[0x11];
                fVar39 = local_298[0x12];
                local_298[0x10] = fVar36;
                local_298[0x11] = fVar40;
                local_298[0x12] = fVar39;
                local_298[0x13] = 0.0 - (fVar40 * fVar44 + fVar36 * fVar42 + fVar39 * fVar45);
                *(undefined8 *)(local_298 + 0x14) = local_388;
                *(undefined8 *)(local_298 + 0x16) = uStack_380;
                fVar41 = local_298[0x14] * fVar41;
                fVar43 = local_298[0x15] * fVar43;
                fVar22 = local_298[0x16] * fVar22;
                local_298[0x14] = local_298[0x14];
                local_298[0x15] = local_298[0x15];
                local_298[0x16] = local_298[0x16];
                local_298[0x17] = 0.0 - (fVar43 + fVar41 + fVar22);
                FUN_1437f62c0(0.0 - (fVar43 + fVar41 + fVar22));
                FUN_1437f62c0(&local_3f8);
                FUN_1437f8d50(param_2[5],&local_298,&local_378,local_408,&local_188,&local_398,
                              &local_488,&local_3e0,&local_3f8);
                puVar54 = &local_388;
                FUN_1438d5cc0(&local_3e0,&local_3f8,&local_228,&local_398,&local_488,puVar54,
                              &local_178);
                uVar55 = (ulonglong)puVar54 & 0xffffffffffffff00;
                FUN_1438d2410(param_2[8],uVar14,0,&local_3e0,1,uVar55);
                FUN_1438d2410(param_2[8],uVar14,1,&local_3f8,1,uVar55 & 0xffffffffffffff00);
                FUN_1438d2460(param_2[8],uVar14,0,&local_378);
                FUN_1438d2460(param_2[8],uVar14,1,local_408);
                FUN_1438d2460(param_2[8],uVar14,2,&local_398);
                uVar15 = FUN_143703a50();
                local_3f0 = 0;
                if (-1 < (int)local_3ec) {
                  FUN_143702e10(uVar15,local_3f8,0x14,local_3ec & 0x3fffffff);
                }
                local_3f8 = 0;
                local_3ec = 0x80000000;
                uVar15 = FUN_143703a50();
                local_3d8 = 0;
                if (-1 < (int)local_3d4) {
                  FUN_143702e10(uVar15,local_3e0,0x14,local_3d4 & 0x3fffffff);
                }
                local_3e0 = 0;
                local_3d4 = 0x80000000;
              }
              iVar18 = iVar18 + 1;
              lVar17 = local_3b8;
            } while (iVar18 < iVar13);
          }
          uVar15 = FUN_143703a50();
          local_290 = 0;
          if (-1 < (int)local_28c) {
            FUN_143702e10(uVar15,local_298,0x10,local_28c & 0x3fffffff);
          }
          local_298 = (float *)0x0;
          local_28c = 0x80000000;
          uVar15 = FUN_143703a50();
          local_458 = 0;
          if (-1 < (int)local_454) {
            FUN_143702e10(uVar15,local_460,0x14,local_454 & 0x3fffffff);
          }
          local_460 = 0;
          local_454 = 0x80000000;
          uVar15 = FUN_143703a50();
          local_430 = 0;
          if (-1 < (int)local_42c) {
            FUN_143702e10(uVar15,local_438,0x14,local_42c & 0x3fffffff);
          }
          local_438 = 0;
          local_42c = 0x80000000;
          uVar15 = FUN_143703a50();
          local_470 = 0;
          if (-1 < (int)local_46c) {
            FUN_143702e10(uVar15,local_478,0x14,local_46c & 0x3fffffff);
          }
          fVar21 = local_168;
          fVar34 = fStack_164;
          fVar30 = fStack_160;
          fVar36 = fStack_15c;
          fVar40 = local_158;
          fVar42 = fStack_154;
          fVar44 = fStack_150;
          fVar45 = fStack_14c;
          fVar53 = (float)local_3c8._0_4_;
          fVar39 = (float)local_3c8._4_4_;
          fVar41 = fStack_3c0;
          fVar43 = fStack_3bc;
        }
        local_478 = 0;
        local_46c = 0x80000000;
      }
      lVar20 = lVar20 + 0x50;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    local_3b8 = 0;
  }
  local_418 = 0;
  if (-1 < (int)local_414) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_420,0x50,local_414 & 0x3fffffff);
  }
  local_440 = 0;
  if (-1 < (int)local_43c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_448,0x50,local_43c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438d9620 FUN_1438d9620 body=532 status=ok
// SIG undefined FUN_1438d9620(void)

undefined4 FUN_1438d9620(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = param_1[3];
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 3) == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1 + 2,8);
  }
  lVar5 = (longlong)(int)param_1[3];
  lVar7 = param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)(lVar7 + lVar5 * 8) = (int)param_1[1];
  *(undefined2 *)(lVar7 + 4 + lVar5 * 8) = *(undefined2 *)(param_2 + 8);
  *(char *)(lVar7 + 6 + lVar5 * 8) = param_3;
  *(char *)(lVar7 + 7 + lVar5 * 8) = param_4;
  iVar8 = 0;
  iVar1 = *(int *)(param_2 + 8);
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      puVar6 = (undefined4 *)FUN_1437f7500(param_2,iVar9);
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1,4);
      }
      *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = *puVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1,4);
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = puVar6[1];
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    } while (iVar9 < iVar1);
  }
  if (param_3 != '\0') {
    iVar1 = *(int *)(param_2 + 8);
    iVar9 = 0;
    if (0 < iVar1) {
      do {
        lVar7 = FUN_1437f7500(param_2,iVar9);
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_1,4);
        }
        *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = *(undefined4 *)(lVar7 + 0xc);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        uVar4 = FUN_143703a50();
        if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_1,4);
        }
        iVar9 = iVar9 + 1;
        *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = *(undefined4 *)(lVar7 + 8);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      } while (iVar9 < iVar1);
    }
  }
  if ((param_4 != '\0') && (iVar1 = *(int *)(param_2 + 8), 0 < iVar1)) {
    do {
      lVar7 = FUN_1437f7500(param_2,iVar8);
      uVar2 = *(undefined4 *)(lVar7 + 0x10);
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1,4);
      }
      iVar8 = iVar8 + 1;
      *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = uVar2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    } while (iVar8 < iVar1);
  }
  return (int)lVar3;
}



// FUNCTION 1438d9840 FUN_1438d9840 body=186 status=ok
// SIG undefined FUN_1438d9840(void)

void FUN_1438d9840(longlong *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar2 = param_1[2];
  lVar6 = (longlong)param_2;
  param_3 = param_3 & 0xffff;
  iVar4 = 0;
  uVar5 = (uint)*(ushort *)(lVar2 + 4 + lVar6 * 8);
  lVar1 = *param_1 + (ulonglong)*(uint *)(lVar2 + lVar6 * 8) * 4;
  *param_4 = *(undefined4 *)(lVar1 + (ulonglong)(param_3 * 2) * 4);
  param_4[1] = *(undefined4 *)(lVar1 + (ulonglong)(param_3 * 2 + 1) * 4);
  if (*(char *)(lVar2 + 6 + lVar6 * 8) == '\0') {
    *(undefined8 *)(param_4 + 2) = 0;
  }
  else {
    uVar3 = (param_3 + uVar5) * 2;
    param_4[3] = *(undefined4 *)(lVar1 + (ulonglong)uVar3 * 4);
    param_4[2] = *(undefined4 *)(lVar1 + (ulonglong)(uVar3 + 1) * 4);
  }
  if (*(char *)(lVar2 + 7 + lVar6 * 8) != '\0') {
    if (*(char *)(lVar2 + 6 + lVar6 * 8) != '\0') {
      iVar4 = uVar5 * 2;
    }
    param_4[4] = *(undefined4 *)(lVar1 + (ulonglong)(param_3 + uVar5 * 2 + iVar4) * 4);
    return;
  }
  param_4[4] = 0xffffffff;
  return;
}



// FUNCTION 1438d9900 getNumIntervals body=13 status=ok
// SIG undefined getNumIntervals(void)

undefined2 hkaiIntervalPartitionLibrary::getNumIntervals(longlong param_1,int param_2)

{
  return *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)param_2 * 8);
}



// FUNCTION 1438d9910 FUN_1438d9910 body=54 status=ok
// SIG undefined FUN_1438d9910(void)

undefined1 FUN_1438d9910(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x48);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704540(param_1 + 0xa0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438d9960 FUN_1438d9960 body=57 status=ok
// SIG undefined FUN_1438d9960(void)

undefined1 FUN_1438d9960(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1438d9910(param_1 + 0x150);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704540(param_1 + 0x210);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438d99a0 FUN_1438d99a0 body=58 status=ok
// SIG undefined FUN_1438d99a0(void)

void FUN_1438d99a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438df440(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d99e0 FUN_1438d99e0 body=128 status=ok
// SIG undefined FUN_1438d99e0(void)

void FUN_1438d99e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar2 = (uint *)(param_1 + 0x84 + lVar3 * 0x90);
    do {
      uVar1 = FUN_143703a50();
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),4,*puVar2 & 0x3fffffff);
      }
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -0x24;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 1438d9a60 FUN_1438d9a60 body=378 status=ok
// SIG undefined FUN_1438d9a60(void)

void FUN_1438d9a60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x84);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      puVar7[-0x21] = *(uint *)(param_2 + -0x84 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x20) = *(undefined1 *)(param_2 + -0x80 + (longlong)puVar7);
      puVar1 = (uint *)(param_2 + -0x74 + (longlong)puVar7);
      uVar2 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar7[-0x1d] = *puVar1;
      puVar7[-0x1c] = uVar2;
      puVar7[-0x1b] = uVar4;
      puVar7[-0x1a] = uVar5;
      *(undefined1 *)(puVar7 + -0x19) = *(undefined1 *)(param_2 + -100 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -99) = *(undefined1 *)(param_2 + -99 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x62) =
           *(undefined1 *)(param_2 + -0x62 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x61) =
           *(undefined1 *)(param_2 + -0x61 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x18) = *(undefined1 *)(param_2 + -0x60 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x5f) =
           *(undefined1 *)(param_2 + -0x5f + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x5e) =
           *(undefined1 *)(param_2 + -0x5e + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x5d) =
           *(undefined1 *)(param_2 + -0x5d + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x17) = *(undefined1 *)(param_2 + -0x5c + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x5b) =
           *(undefined1 *)(param_2 + -0x5b + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x15) = *(undefined8 *)(param_2 + -0x54 + (longlong)puVar7);
      puVar7[-0x13] = *(uint *)(param_2 + -0x4c + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x11) = *(undefined8 *)(param_2 + -0x44 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0xf) = *(undefined1 *)(param_2 + -0x3c + (longlong)puVar7);
      puVar7[-0xe] = *(uint *)(param_2 + -0x38 + (longlong)puVar7);
      puVar7[-0xd] = *(uint *)(param_2 + -0x34 + (longlong)puVar7);
      puVar7[-0xc] = *(uint *)(param_2 + -0x30 + (longlong)puVar7);
      puVar7[-0xb] = *(uint *)(param_2 + -0x2c + (longlong)puVar7);
      puVar7[-10] = *(uint *)(param_2 + -0x28 + (longlong)puVar7);
      puVar7[-9] = *(uint *)(param_2 + -0x24 + (longlong)puVar7);
      puVar7[-8] = *(uint *)((longlong)puVar7 + param_2 + -0x20);
      puVar7[-7] = *(uint *)((longlong)puVar7 + param_2 + -0x1c);
      puVar7[-6] = *(uint *)((longlong)puVar7 + param_2 + -0x18);
      puVar7[-5] = *(uint *)((longlong)puVar7 + param_2 + -0x14);
      uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar7);
      uVar3 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar7);
      uVar6 = FUN_143703a50();
      if ((int)(*puVar7 & 0x3fffffff) < (int)uVar2) {
        FUN_14370c310(uVar6,puVar7 + -3,uVar2,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar7 + -3),uVar3,uVar2);
      puVar7[-1] = uVar2;
      puVar7[1] = *(uint *)(param_2 + 4 + (longlong)puVar7);
      puVar7 = puVar7 + 0x24;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1438d9be0 FUN_1438d9be0 body=58 status=ok
// SIG undefined FUN_1438d9be0(void)

void FUN_1438d9be0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438dac40(param_1);
      }
      param_1 = param_1 + 0xc0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d9c20 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavMeshDebugUtils::DebugInfo>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438dad80(param_1);
      }
      param_1 = param_1 + 0x230;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d9c60 FUN_1438d9c60 body=140 status=ok
// SIG undefined FUN_1438d9c60(void)

void FUN_1438d9c60(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar2 = (uint *)(param_1 + 0x21c + lVar3 * 0x230);
    do {
      uVar1 = FUN_143703a50();
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),4,*puVar2 & 0x3fffffff);
      }
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      FUN_1438da2f0(puVar2 + -0x33);
      puVar2 = puVar2 + -0x8c;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 1438d9cf0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MergingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438db000(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438d9d30 FUN_1438d9d30 body=880 status=ok
// SIG undefined FUN_1438d9d30(void)

void FUN_1438d9d30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    puVar9 = (undefined4 *)(param_1 + 0xf0);
    param_2 = param_2 - param_1;
    lVar10 = (longlong)param_4;
    do {
      puVar2 = (undefined8 *)(param_2 + -0xf0 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -0x3c) = *puVar2;
      *(undefined8 *)(puVar9 + -0x3a) = uVar4;
      puVar2 = (undefined8 *)(param_2 + -0xe0 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -0x38) = *puVar2;
      *(undefined8 *)(puVar9 + -0x36) = uVar4;
      *(undefined1 *)(puVar9 + -0x34) = *(undefined1 *)(param_2 + -0xd0 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xcf) =
           *(undefined1 *)(param_2 + -0xcf + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xce) =
           *(undefined1 *)(param_2 + -0xce + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xcd) =
           *(undefined1 *)(param_2 + -0xcd + (longlong)puVar9);
      *(undefined1 *)(puVar9 + -0x33) = *(undefined1 *)(param_2 + -0xcc + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xcb) =
           *(undefined1 *)(param_2 + -0xcb + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xca) =
           *(undefined1 *)(param_2 + -0xca + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xc9) =
           *(undefined1 *)(param_2 + -0xc9 + (longlong)puVar9);
      *(undefined1 *)(puVar9 + -0x32) = *(undefined1 *)(param_2 + -200 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -199) = *(undefined1 *)(param_2 + -199 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xc6) =
           *(undefined1 *)((longlong)puVar9 + param_2 + -0xc6);
      *(undefined1 *)((longlong)puVar9 + -0xc5) =
           *(undefined1 *)((longlong)puVar9 + param_2 + -0xc5);
      *(undefined1 *)(puVar9 + -0x31) = *(undefined1 *)((longlong)puVar9 + param_2 + -0xc4);
      *(undefined1 *)((longlong)puVar9 + -0xc3) =
           *(undefined1 *)((longlong)puVar9 + param_2 + -0xc3);
      *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(param_2 + -0xc0 + (longlong)puVar9);
      puVar9[-0x2e] = *(undefined4 *)(param_2 + -0xb8 + (longlong)puVar9);
      *(undefined8 *)(puVar9 + -0x2c) = *(undefined8 *)(param_2 + -0xb0 + (longlong)puVar9);
      *(undefined1 *)(puVar9 + -0x2a) = *(undefined1 *)(param_2 + -0xa8 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xa7) =
           *(undefined1 *)(param_2 + -0xa7 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xa6) =
           *(undefined1 *)(param_2 + -0xa6 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + -0xa5) =
           *(undefined1 *)(param_2 + -0xa5 + (longlong)puVar9);
      *(undefined1 *)(puVar9 + -0x29) = *(undefined1 *)(param_2 + -0xa4 + (longlong)puVar9);
      puVar9[-0x28] = *(undefined4 *)(param_2 + -0xa0 + (longlong)puVar9);
      puVar9[-0x27] = *(undefined4 *)(param_2 + -0x9c + (longlong)puVar9);
      puVar9[-0x26] = *(undefined4 *)(param_2 + -0x98 + (longlong)puVar9);
      puVar9[-0x25] = *(undefined4 *)(param_2 + -0x94 + (longlong)puVar9);
      puVar9[-0x24] = *(undefined4 *)(param_2 + -0x90 + (longlong)puVar9);
      puVar9[-0x23] = *(undefined4 *)(param_2 + -0x8c + (longlong)puVar9);
      puVar9[-0x22] = *(undefined4 *)(param_2 + -0x88 + (longlong)puVar9);
      puVar9[-0x21] = *(undefined4 *)(param_2 + -0x84 + (longlong)puVar9);
      puVar9[-0x20] = *(undefined4 *)(param_2 + -0x80 + (longlong)puVar9);
      puVar9[-0x1f] = *(undefined4 *)(param_2 + -0x7c + (longlong)puVar9);
      puVar9[-0x1e] = *(undefined4 *)(param_2 + -0x78 + (longlong)puVar9);
      puVar9[-0x1d] = *(undefined4 *)(param_2 + -0x74 + (longlong)puVar9);
      *(undefined1 *)(puVar9 + -0x1c) = *(undefined1 *)(param_2 + -0x70 + (longlong)puVar9);
      puVar9[-0x1b] = *(undefined4 *)((longlong)puVar9 + param_2 + -0x6c);
      puVar9[-0x1a] = *(undefined4 *)((longlong)puVar9 + param_2 + -0x68);
      puVar9[-0x19] = *(undefined4 *)((longlong)puVar9 + param_2 + -100);
      puVar9[-0x18] = *(undefined4 *)((longlong)puVar9 + param_2 + -0x60);
      *(undefined1 *)(puVar9 + -0x17) = *(undefined1 *)(param_2 + -0x5c + (longlong)puVar9);
      puVar2 = (undefined8 *)(param_2 + -0x50 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -0x14) = *puVar2;
      *(undefined8 *)(puVar9 + -0x12) = uVar4;
      *(undefined1 *)(puVar9 + -0x10) = *(undefined1 *)(param_2 + -0x40 + (longlong)puVar9);
      puVar2 = (undefined8 *)(param_2 + -0x30 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -0xc) = *puVar2;
      *(undefined8 *)(puVar9 + -10) = uVar4;
      puVar2 = (undefined8 *)(param_2 + -0x20 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -8) = *puVar2;
      *(undefined8 *)(puVar9 + -6) = uVar4;
      puVar2 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + -4) = *puVar2;
      *(undefined8 *)(puVar9 + -2) = uVar4;
      puVar1 = (undefined4 *)(param_2 + (longlong)puVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar9[3] = uVar7;
      *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + 0x11) = *(undefined1 *)(param_2 + 0x11 + (longlong)puVar9);
      puVar9[5] = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar9);
      puVar9[6] = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar9);
      puVar9[7] = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar9);
      puVar2 = (undefined8 *)(param_2 + 0x20 + (longlong)puVar9);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar9 + 8) = *puVar2;
      *(undefined8 *)(puVar9 + 10) = uVar4;
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(param_2 + 0x30 + (longlong)puVar9);
      *(undefined1 *)(puVar9 + 0x10) = *(undefined1 *)(param_2 + 0x40 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + 0x41) = *(undefined1 *)(param_2 + 0x41 + (longlong)puVar9);
      puVar9[0x11] = *(undefined4 *)(param_2 + 0x44 + (longlong)puVar9);
      puVar9[0x12] = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar9);
      puVar1 = (undefined4 *)(param_2 + 0x50 + (longlong)puVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar9[0x14] = *puVar1;
      puVar9[0x15] = uVar5;
      puVar9[0x16] = uVar6;
      puVar9[0x17] = uVar7;
      FUN_1438da390(puVar9 + 0x18,param_2 + 0x60 + (longlong)puVar9);
      iVar3 = *(int *)(param_2 + 0x128 + (longlong)puVar9);
      uVar4 = *(undefined8 *)(param_2 + 0x120 + (longlong)puVar9);
      uVar8 = FUN_143703a50();
      if ((int)(puVar9[0x4b] & 0x3fffffff) < iVar3) {
        FUN_14370c310(uVar8,puVar9 + 0x48,iVar3,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar9 + 0x48),uVar4,iVar3);
      puVar9[0x4a] = iVar3;
      puVar9[0x4c] = *(undefined4 *)(param_2 + 0x130 + (longlong)puVar9);
      puVar9 = puVar9 + 0x8c;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 1438da0a0 FUN_1438da0a0 body=55 status=ok
// SIG undefined FUN_1438da0a0(void)

void FUN_1438da0a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438df560(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438da0e0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavMeshDebugUtils::NonplanarFacesSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavMeshDebugUtils::NonplanarFacesSettings::NonplanarFacesSettings(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438da130 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeDebugUtils::GeometryBuildSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavVolumeDebugUtils::GeometryBuildSettings::GeometryBuildSettings(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438da170 FUN_1438da170 body=113 status=ok
// SIG undefined FUN_1438da170(void)

void FUN_1438da170(undefined1 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    lVar3 = param_2 - (longlong)param_1;
    puVar2 = param_1;
    do {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = puVar2[lVar3];
        lVar1 = *(longlong *)(puVar2 + lVar3 + 8);
        *(longlong *)(puVar2 + (longlong)(param_1 + ((lVar3 + 8) - param_2))) = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
      }
      puVar2 = puVar2 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1438da1f0 FUN_1438da1f0 body=70 status=ok
// SIG undefined FUN_1438da1f0(void)

void FUN_1438da1f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + 8 + lVar1 * 0x10);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 1438da240 FUN_1438da240 body=101 status=ok
// SIG undefined FUN_1438da240(void)

void FUN_1438da240(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    plVar1 = (longlong *)(param_1 + 8);
    do {
      *(undefined1 *)(plVar1 + -1) = *(undefined1 *)(param_2 + -8 + (longlong)plVar1);
      if (*(longlong *)(param_2 + (longlong)plVar1) != 0) {
        FUN_14370c030();
      }
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      *plVar1 = *(longlong *)(param_2 + (longlong)plVar1);
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438da2b0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MergingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438dafd0(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438da2f0 FUN_1438da2f0 body=145 status=ok
// SIG undefined FUN_1438da2f0(void)

void FUN_1438da2f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xa0),4,*(uint *)(param_1 + 0xac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),4,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1438da390 FUN_1438da390 body=294 status=ok
// SIG undefined FUN_1438da390(void)

undefined8 * FUN_1438da390(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x43) = *(undefined1 *)((longlong)param_2 + 0x43);
  iVar1 = *(int *)(param_2 + 10);
  uVar2 = param_2[9];
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 9,iVar1,4);
  }
  FUN_142f87c00(param_1[9],uVar2,iVar1);
  *(int *)(param_1 + 10) = iVar1;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x13);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  FUN_143802ce0(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 1438da4c0 FUN_1438da4c0 body=148 status=ok
// SIG undefined FUN_1438da4c0(void)

void FUN_1438da4c0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal1<hkaiWorld*___ptr64>::
              MemberSlot<hkaiViewerContext,void_(__cdecl_hkaiViewerContext::*)(hkaiWorld*___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438da560 FUN_1438da560 body=120 status=ok
// SIG undefined FUN_1438da560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438da560(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *param_1 = hkaiViewerContext::vftable;
  param_1[3] = hkaiViewerContext::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = uRam00000001467f06e8;
  param_1[0x10] = _DAT_1467f06e0;
  param_1[0x11] = uVar1;
  return param_1;
}



// FUNCTION 1438da5e0 FUN_1438da5e0 body=406 status=ok
// SIG undefined FUN_1438da5e0(void)

void FUN_1438da5e0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_1 = hkaiViewerContext::vftable;
  param_1[3] = hkaiViewerContext::vftable;
  while (iVar1 != 0) {
    FUN_1438daad0(param_1,*(undefined8 *)param_1[7]);
    iVar1 = *(int *)(param_1 + 8);
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar3,param_1[0xd],8,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar3,param_1[0xb],8,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar3 = FUN_143703a50();
  lVar2 = param_1[9];
  lVar4 = (longlong)(*(int *)(param_1 + 10) + -1);
  if (-1 < *(int *)(param_1 + 10) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar3,param_1[9],8,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar3,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_14370e7c0(param_1 + 6);
  FUN_14370e7c0(param_1 + 5);
  FUN_1437876f0(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438da778 FUN_1438da778 body=9 status=ok
// SIG undefined FUN_1438da778(void)

void FUN_1438da778(longlong param_1)

{
  FUN_1438da800(param_1 + -0x18);
  return;
}



// FUNCTION 1438da790 FUN_1438da790 body=99 status=ok
// SIG undefined FUN_1438da790(void)

undefined8 * FUN_1438da790(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkSlot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x28);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1438da800 FUN_1438da800 body=139 status=ok
// SIG undefined FUN_1438da800(void)

longlong FUN_1438da800(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438da5e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x90;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1438da890 FUN_1438da890 body=260 status=ok
// SIG undefined FUN_1438da890(void)

void FUN_1438da890(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *local_18;
  undefined4 uStack_10;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar5 = uVar4;
    uVar6 = uVar4;
    do {
      if (*plVar1 == param_2) {
        if (-1 < (int)uVar6) {
          return;
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x40));
  }
  local_18 = &LAB_1438daa70;
  uStack_10 = 0;
  FUN_1438da4c0(param_2 + 0x18,param_1,&local_18,"hkaiViewerContext::onWorldDeleted");
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58));
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x60));
  }
  FUN_14370c030(param_2);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x38,8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8) = param_2;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



// FUNCTION 1438da9a0 FUN_1438da9a0 body=125 status=ok
// SIG undefined FUN_1438da9a0(void)

void FUN_1438da9a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    plVar2 = (longlong *)*plVar1;
    uVar5 = uVar4;
    do {
      if (*plVar2 == param_2) {
        if (-1 < (int)uVar5) {
          return;
        }
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x60));
  }
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x60) == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar1,8);
  }
  *(longlong *)(*plVar1 + (longlong)*(int *)(param_1 + 0x60) * 8) = param_2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}



// FUNCTION 1438daa20 FUN_1438daa20 body=15 status=ok
// SIG undefined FUN_1438daa20(void)

void FUN_1438daa20(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 0x10;
  return;
}



// FUNCTION 1438daa30 FUN_1438daa30 body=8 status=ok
// SIG undefined FUN_1438daa30(void)

undefined * FUN_1438daa30(void)

{
  return &DAT_145c57600;
}



// FUNCTION 1438daa40 FUN_1438daa40 body=47 status=ok
// SIG undefined FUN_1438daa40(void)

undefined8 FUN_1438daa40(longlong param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  
  if ((*param_2 == *(longlong *)(param_1 + 0x18)) &&
     ((*param_2 == 0 || ((int)param_2[1] == *(int *)(param_1 + 0x20))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_3 == 0x10) && (bVar1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1438daa80 FUN_1438daa80 body=73 status=ok
// SIG undefined FUN_1438daa80(void)

void FUN_1438daa80(void)

{
  FUN_1438e19a0();
  FUN_1438e2340();
  FUN_1438e4af0();
  FUN_1438e3bc0();
  FUN_1438e5800();
  FUN_1438e64d0();
  FUN_1438e79d0();
  FUN_1438e7be0();
  FUN_1438e8270();
  FUN_1438e8960();
  FUN_1438e8f10();
  FUN_1438e9630();
  FUN_1438eaa70();
  return;
}



// FUNCTION 1438daad0 FUN_1438daad0 body=213 status=ok
// SIG undefined FUN_1438daad0(void)

void FUN_1438daad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar5 = uVar3;
    uVar6 = uVar3;
    do {
      iVar4 = (int)uVar5;
      if (*plVar1 == param_2) {
        if (iVar4 < 0) {
          return;
        }
        FUN_143e172c0(param_2 + 0x18,param_1);
        uVar5 = uVar3;
        if (0 < *(int *)(param_1 + 0x60)) {
          do {
            plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58));
            (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            uVar5 = uVar5 + 8;
          } while ((int)uVar2 < *(int *)(param_1 + 0x60));
        }
        FUN_14370c150(*(undefined8 *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x38)));
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        if (*(int *)(param_1 + 0x40) == iVar4) {
          return;
        }
        *(undefined8 *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x38)) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8)
        ;
        return;
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar6 = uVar6 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1438dabb0 FUN_1438dabb0 body=81 status=ok
// SIG undefined FUN_1438dabb0(void)

void FUN_1438dabb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    uVar4 = uVar2;
    while (iVar3 = (int)uVar4, *plVar1 != param_2) {
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
      if ((longlong)*(int *)(param_1 + 0x60) <= (longlong)uVar2) {
        return;
      }
    }
    if (-1 < iVar3) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (*(int *)(param_1 + 0x60) != iVar3) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x60) * 8)
        ;
      }
    }
  }
  return;
}



// FUNCTION 1438dac10 FUN_1438dac10 body=45 status=ok
// SIG undefined FUN_1438dac10(void)

void FUN_1438dac10(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438da4c0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438dac40 FUN_1438dac40 body=315 status=ok
// SIG undefined FUN_1438dac40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438dac40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8 [2];
  
  *(undefined4 *)(param_1 + 8) = 0x101;
  uVar2 = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined2 *)((longlong)param_1 + 0x59) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0xff8a2be2;
  *(undefined4 *)(param_1 + 0xd) = 0xff0000ff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffff00ff;
  *(undefined4 *)(param_1 + 0xe) = 0xff000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xff800080;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  local_res8[0] = 0;
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar1,4,local_res8);
  }
  param_1[0x14] = uVar2;
  *(int *)(param_1 + 0x15) = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xac) = iVar3;
  *(undefined4 *)(param_1 + 0x16) = 0;
  uVar1 = uRam00000001467f0898;
  *param_1 = _DAT_1467f0890;
  param_1[1] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[2] = _DAT_1467f08a0;
  param_1[3] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[4] = _DAT_1467f08b0;
  param_1[5] = uVar1;
  uVar1 = _DAT_1467f08c8;
  param_1[6] = _DAT_1467f08c0;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08d8;
  param_1[0x10] = _DAT_1467f08d0;
  param_1[0x11] = uVar1;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x84) ^ 0x80000000;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x11) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x8c) ^ 0x80000000;
  return param_1;
}



// FUNCTION 1438dad80 FUN_1438dad80 body=579 status=ok
// SIG undefined FUN_1438dad80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438dad80(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res8 [2];
  
  *(undefined4 *)(param_1 + 4) = 0x10101;
  uVar6 = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffa500;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffff0000;
  *(undefined4 *)(param_1 + 0xb) = 0xff0000ff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff00ffff;
  *(undefined4 *)(param_1 + 0xc) = 0xff00ffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffadd8e6;
  *(undefined4 *)(param_1 + 0xd) = 0xff000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xff000000;
  *(undefined4 *)(param_1 + 0xe) = 0xff800080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xff0000ff;
  *(undefined4 *)(param_1 + 0xf) = 0xff800080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xff0000ff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_1438db000(param_1 + 0x20);
  hkaiNavMeshDebugUtils::NonplanarFacesSettings::NonplanarFacesSettings(param_1 + 0x24);
  FUN_1438dafd0(param_1 + 0x26);
  FUN_1438dac40(param_1 + 0x2a);
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x43) = 0;
  local_res8[0] = 0;
  uVar5 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar6 = FUN_143702d60(uVar5,4,local_res8);
  }
  param_1[0x42] = uVar6;
  *(int *)(param_1 + 0x43) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x21c) = iVar7;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0x3c23d70a;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fVar4 = fRam00000001467f06dc;
  fVar3 = fRam00000001467f06d8;
  fVar2 = fRam00000001467f06d4;
  fVar1 = _DAT_1467f06d0;
  *(float *)(param_1 + 0x18) = _DAT_1467f06d0;
  *(float *)((longlong)param_1 + 0xc4) = fVar2;
  *(float *)(param_1 + 0x19) = fVar3;
  *(float *)((longlong)param_1 + 0xcc) = fVar4;
  fVar8 = fVar1 * fVar1;
  fVar9 = fVar2 * fVar2;
  fVar10 = fVar3 * fVar3;
  fVar14 = fVar9 + fVar8 + fVar10;
  fVar15 = fVar9 + fVar8 + fVar10;
  fVar16 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  auVar11._4_4_ = fVar15;
  auVar11._0_4_ = fVar14;
  auVar11._8_4_ = fVar16;
  auVar11._12_4_ = fVar10;
  auVar11 = rsqrtps(in_XMM2,auVar11);
  fVar8 = auVar11._0_4_;
  fVar9 = auVar11._4_4_;
  fVar12 = auVar11._8_4_;
  fVar13 = auVar11._12_4_;
  *(float *)(param_1 + 0x18) =
       (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar8 * fVar14 * fVar8) * fVar8 * 0.5)) *
       fVar1;
  *(float *)((longlong)param_1 + 0xc4) =
       (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar9 * fVar15 * fVar9) * fVar9 * 0.5)) *
       fVar2;
  *(float *)(param_1 + 0x19) =
       (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar12 * fVar16 * fVar12) * fVar12 * 0.5)) *
       fVar3;
  *(float *)((longlong)param_1 + 0xcc) =
       (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar13 * fVar10 * fVar13) * fVar13 * 0.5)) *
       fVar4;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar5 = uRam00000001467f08d8;
  param_1[0x1c] = _DAT_1467f08d0;
  param_1[0x1d] = uVar5;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1c) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xf4) = *(uint *)((longlong)param_1 + 0xe4) ^ 0x80000000;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1d) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xec) ^ 0x80000000;
  return param_1;
}



// FUNCTION 1438dafd0 FUN_1438dafd0 body=28 status=ok
// SIG undefined FUN_1438dafd0(void)

undefined2 * FUN_1438dafd0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 2) = 0x42c80000;
  return param_1;
}



// FUNCTION 1438daff0 NonplanarFacesSettings body=16 status=ok
// SIG undefined NonplanarFacesSettings(void)

undefined2 *
hkaiNavMeshDebugUtils::NonplanarFacesSettings::NonplanarFacesSettings(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  return param_1;
}



// FUNCTION 1438db000 FUN_1438db000 body=45 status=ok
// SIG undefined FUN_1438db000(void)

undefined2 * FUN_1438db000(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffff00;
  *(undefined4 *)(param_1 + 4) = 0xffffa500;
  *(undefined4 *)(param_1 + 6) = 0x3ca3d70a;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 1438db030 FUN_1438db030 body=29 status=ok
// SIG undefined FUN_1438db030(void)

void FUN_1438db030(float *param_1,char param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_3 = fVar1;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  param_3[3] = fVar4;
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x12) != '\0')) {
    fVar5 = param_1[5];
    fVar6 = param_1[6];
    fVar7 = param_1[7];
    *param_3 = param_1[4] + fVar1;
    param_3[1] = fVar5 + fVar2;
    param_3[2] = fVar6 + fVar3;
    param_3[3] = fVar7 + fVar4;
  }
  return;
}



// FUNCTION 1438db050 FUN_1438db050 body=593 status=ok
// SIG undefined FUN_1438db050(void)

float FUN_1438db050(longlong param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res10 [2];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [64];
  
  fVar19 = -3.40282e+38;
  fVar20 = 3.40282e+38;
  local_res10[0] = param_2;
  hkaiNavMeshUtils::calcFaceNormal(local_78,param_1,local_res10,&local_88);
  fVar10 = local_88 * local_88;
  fVar13 = fStack_84 * fStack_84;
  auVar11._8_4_ = fStack_80 * fStack_80;
  auVar11._4_4_ = auVar11._8_4_;
  auVar11._0_4_ = auVar11._8_4_;
  auVar11._12_4_ = auVar11._8_4_;
  fVar15 = fVar13 + fVar10 + auVar11._8_4_;
  fVar16 = fVar13 + fVar10 + auVar11._8_4_;
  fVar17 = fVar13 + fVar10 + auVar11._8_4_;
  fVar18 = fVar13 + fVar10 + auVar11._8_4_;
  auVar12._4_4_ = fVar16;
  auVar12._0_4_ = fVar15;
  auVar12._8_4_ = fVar17;
  auVar12._12_4_ = fVar18;
  auVar12 = rsqrtps(auVar11,auVar12);
  fVar10 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar21 = auVar12._8_4_;
  fVar14 = auVar12._12_4_;
  fVar10 = local_88 *
           (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5)
                  );
  fVar13 = fStack_84 *
           (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar16 * fVar13 * fVar13) * fVar13 * 0.5)
                  );
  fVar21 = fStack_80 *
           (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar17 * fVar21 * fVar21) * fVar21 * 0.5)
                  );
  fStack_7c = fStack_7c *
              (float)(~-(uint)(fVar18 <= 0.0) &
                     (uint)((3.0 - fVar18 * fVar14 * fVar14) * fVar14 * 0.5));
  local_88 = fVar10;
  fStack_84 = fVar13;
  fStack_80 = fVar21;
  piVar5 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,param_2);
  piVar6 = piVar5;
  if (0 < *(short *)((longlong)piVar5 + 10)) {
    piVar6 = piVar5 + 1;
  }
  iVar9 = *piVar6;
  if (iVar9 != -1) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x40);
    iVar8 = piVar5[1] + -1 + (int)*(short *)((longlong)piVar5 + 10);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    do {
      fVar14 = fVar19;
      piVar6 = (int *)FUN_1437fb5b0(uVar4,uVar2);
      iVar3 = *piVar6;
      if (iVar3 < iVar1) {
        pfVar7 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar7 = (float *)((longlong)(iVar3 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar15 = pfVar7[1] * fVar13 + *pfVar7 * fVar10 + pfVar7[2] * fVar21;
      if (fVar15 <= fVar20) {
        fVar20 = fVar15;
      }
      fVar19 = fVar14;
      if (fVar14 <= fVar15) {
        fVar19 = fVar15;
      }
      if ((iVar9 < piVar5[1]) || (iVar8 <= iVar9)) {
        if (iVar9 == iVar8) {
          iVar9 = *piVar5;
        }
        else if ((iVar9 < *piVar5) || (*piVar5 + -1 + (int)(short)piVar5[2] <= iVar9)) {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
      local_res10[0] = fVar14;
    } while (iVar9 != -1);
  }
  return fVar19 - fVar20;
}



// FUNCTION 1438db2b0 FUN_1438db2b0 body=173 status=ok
// SIG undefined FUN_1438db2b0(void)

void FUN_1438db2b0(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

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
  
  fVar10 = param_1 * param_1;
  fVar8 = fVar10 * param_1;
  fVar9 = fVar8 - fVar10;
  param_1 = (fVar8 - (fVar10 + fVar10)) + param_1;
  fVar7 = fVar10 * 3.0 - (fVar8 + fVar8);
  fVar6 = ((fVar8 + fVar8) - fVar10 * 3.0) + 1.0;
  fVar8 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar5 = param_2[3];
  *param_6 = fVar6 * fVar8;
  param_6[1] = fVar6 * fVar10;
  param_6[2] = fVar6 * fVar1;
  param_6[3] = fVar6 * fVar5;
  fVar2 = param_1 * *param_4 + fVar6 * fVar8;
  fVar3 = param_1 * param_4[1] + fVar6 * fVar10;
  fVar4 = param_1 * param_4[2] + fVar6 * fVar1;
  fVar5 = param_1 * param_4[3] + fVar6 * fVar5;
  *param_6 = fVar2;
  param_6[1] = fVar3;
  param_6[2] = fVar4;
  param_6[3] = fVar5;
  fVar2 = fVar7 * *param_3 + fVar2;
  fVar3 = fVar7 * param_3[1] + fVar3;
  fVar4 = fVar7 * param_3[2] + fVar4;
  fVar5 = fVar7 * param_3[3] + fVar5;
  *param_6 = fVar2;
  param_6[1] = fVar3;
  param_6[2] = fVar4;
  param_6[3] = fVar5;
  fVar8 = param_5[1];
  fVar10 = param_5[2];
  fVar1 = param_5[3];
  *param_6 = fVar9 * *param_5 + fVar2;
  param_6[1] = fVar9 * fVar8 + fVar3;
  param_6[2] = fVar9 * fVar10 + fVar4;
  param_6[3] = fVar9 * fVar1 + fVar5;
  return;
}



// FUNCTION 1438db360 FUN_1438db360 body=984 status=ok
// SIG undefined FUN_1438db360(void)

void FUN_1438db360(longlong param_1,float param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5,longlong *param_6,undefined4 param_7,float param_8)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined4 local_res18 [2];
  undefined4 local_res20;
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
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [8];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  iVar16 = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  lVar13 = 1;
  local_res18[0] = 0x3d4ccccd;
  fVar31 = param_8 * *param_3;
  fVar32 = param_8 * param_3[1];
  fVar33 = param_8 * param_3[2];
  param_8 = param_8 * param_3[3];
  fVar21 = param_2 * 0.5;
  if (param_2 * 0.5 <= 0.05) {
    fVar21 = 0.05;
  }
  if (1 < (longlong)iVar3) {
    lVar15 = 0;
    local_res20 = param_4;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      uVar14 = param_5;
      if (iVar16 != iVar3 + -1) {
        uVar14 = local_res20;
      }
      pfVar2 = (float *)(lVar15 + 0x10 + lVar4);
      pfVar1 = (float *)(lVar15 + lVar4);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar1 = (float *)(lVar15 + 0x30 + lVar4);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      fVar28 = pfVar2[1] * (fVar5 - fVar9) - (fVar6 - fVar10) * *pfVar2;
      fVar29 = pfVar2[2] * (fVar6 - fVar10) - (fVar7 - fVar11) * pfVar2[1];
      fVar30 = *pfVar2 * (fVar7 - fVar11) - (fVar5 - fVar9) * pfVar2[2];
      fVar17 = fVar29 * fVar29;
      fVar20 = fVar30 * fVar30;
      auVar18._8_4_ = fVar28 * fVar28;
      auVar18._4_4_ = auVar18._8_4_;
      auVar18._0_4_ = auVar18._8_4_;
      auVar18._12_4_ = auVar18._8_4_;
      fVar22 = fVar20 + fVar17 + auVar18._8_4_;
      fVar23 = fVar20 + fVar17 + auVar18._8_4_;
      fVar24 = fVar20 + fVar17 + auVar18._8_4_;
      fVar25 = fVar20 + fVar17 + auVar18._8_4_;
      auVar19._4_4_ = fVar23;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = fVar24;
      auVar19._12_4_ = fVar25;
      auVar19 = rsqrtps(auVar18,auVar19);
      fVar17 = auVar19._0_4_;
      fVar20 = auVar19._4_4_;
      fVar26 = auVar19._8_4_;
      fVar27 = auVar19._12_4_;
      fVar17 = (float)(~-(uint)(fVar22 <= 0.0) &
                      (uint)((3.0 - fVar22 * fVar17 * fVar17) * fVar17 * 0.5)) * fVar29 * fVar21;
      fVar20 = (float)(~-(uint)(fVar23 <= 0.0) &
                      (uint)((3.0 - fVar23 * fVar20 * fVar20) * fVar20 * 0.5)) * fVar30 * fVar21;
      fVar26 = (float)(~-(uint)(fVar24 <= 0.0) &
                      (uint)((3.0 - fVar24 * fVar26 * fVar26) * fVar26 * 0.5)) * fVar28 * fVar21;
      fVar27 = (float)(~-(uint)(fVar25 <= 0.0) &
                      (uint)((3.0 - fVar25 * fVar27 * fVar27) * fVar27 * 0.5)) *
               (pfVar2[3] * (fVar8 - fVar12) - (fVar8 - fVar12) * pfVar2[3]) * fVar21;
      local_118 = fVar5 + fVar17 + fVar31;
      fStack_114 = fVar6 + fVar20 + fVar32;
      fStack_110 = fVar7 + fVar26 + fVar33;
      fStack_10c = fVar8 + fVar27 + param_8;
      local_b8 = fVar17 + fVar9 + fVar31;
      fStack_b4 = fVar20 + fVar10 + fVar32;
      fStack_b0 = fVar26 + fVar11 + fVar33;
      fStack_ac = fVar27 + fVar12 + param_8;
      local_108 = (fVar9 - fVar17) + fVar31;
      fStack_104 = (fVar10 - fVar20) + fVar32;
      fStack_100 = (fVar11 - fVar26) + fVar33;
      fStack_fc = (fVar12 - fVar27) + param_8;
      local_e8 = (fVar5 - fVar17) + fVar31;
      fStack_e4 = (fVar6 - fVar20) + fVar32;
      fStack_e0 = (fVar7 - fVar26) + fVar33;
      fStack_dc = (fVar8 - fVar27) + param_8;
      if (param_6 == (longlong *)0x0) {
        (**(code **)(*DAT_146b84580 + 0xb0))
                  (DAT_146b84580,local_d4,0,&local_108,&local_b8,&local_118,uVar14,DAT_146b846e8);
        (**(code **)(*DAT_146b84580 + 0xb0))
                  (DAT_146b84580,local_d0,0,&local_118,&local_e8,&local_108,uVar14,DAT_146b846e8);
      }
      else {
        (**(code **)(*param_6 + 0xb0))
                  (param_6,local_res18,0,&local_108,&local_b8,&local_118,uVar14,param_7);
        (**(code **)(*param_6 + 0xb0))
                  (param_6,local_d8,0,&local_118,&local_e8,&local_108,uVar14,param_7);
      }
      if (1 < lVar13) {
        local_f8 = fVar5 + fVar31;
        fStack_f4 = fVar6 + fVar32;
        fStack_f0 = fVar7 + fVar33;
        fStack_ec = fVar8 + param_8;
        if (param_6 == (longlong *)0x0) {
          (**(code **)(*DAT_146b84580 + 0xb0))
                    (DAT_146b84580,local_c4,0,&local_118,&local_a8,&local_f8,uVar14,DAT_146b846e8);
          (**(code **)(*DAT_146b84580 + 0xb0))
                    (DAT_146b84580,local_c0,0,&local_98,&local_e8,&local_f8,uVar14,DAT_146b846e8);
        }
        else {
          (**(code **)(*param_6 + 0xb0))
                    (param_6,local_cc,0,&local_118,&local_a8,&local_f8,uVar14,param_7);
          (**(code **)(*param_6 + 0xb0))
                    (param_6,local_c8,0,&local_98,&local_e8,&local_f8,uVar14,param_7);
        }
      }
      local_a8 = CONCAT44(fStack_b4,local_b8);
      uStack_a0 = CONCAT44(fStack_ac,fStack_b0);
      iVar16 = iVar16 + 1;
      local_98 = CONCAT44(fStack_104,local_108);
      uStack_90 = CONCAT44(fStack_fc,fStack_100);
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0x30;
    } while (lVar13 < iVar3);
  }
  return;
}



// FUNCTION 1438db740 FUN_1438db740 body=575 status=ok
// SIG undefined FUN_1438db740(void)

void FUN_1438db740(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  undefined1 local_40;
  
  uVar14 = *(uint *)(param_2 + 0x30);
  uVar13 = 0;
  local_60 = 0;
  local_58 = 0x1ffff;
  iVar3 = uVar14 * 2;
  local_68 = hkaiPath::vftable;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  local_40 = 0;
  uVar7 = FUN_143703a50();
  uVar12 = local_44 & 0x3fffffff;
  if ((int)uVar12 < iVar3) {
    if (iVar3 < (int)(uVar12 * 2)) {
      uVar14 = uVar12;
    }
    FUN_14370c310(uVar7,&local_50,uVar14 * 2,0x30);
  }
  uVar15 = uVar13;
  if (0 < *(int *)(param_2 + 0x30)) {
    do {
      lVar2 = *(longlong *)(param_2 + 0x28);
      uVar7 = FUN_143703a50();
      if (local_48 == (local_44 & 0x3fffffff)) {
        FUN_14370c460(uVar7,&local_50,0x30);
      }
      puVar10 = (undefined8 *)((longlong)(int)local_48 * 0x30 + local_50);
      if (puVar10 != (undefined8 *)0x0) {
        uVar7 = ((undefined8 *)(uVar13 + lVar2))[1];
        *puVar10 = *(undefined8 *)(uVar13 + lVar2);
        puVar10[1] = uVar7;
        puVar1 = (undefined4 *)(uVar13 + 0x10 + lVar2);
        uVar9 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar10 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar10 + 0x14) = uVar9;
        *(undefined4 *)(puVar10 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(uVar13 + 0x20 + lVar2);
        *(undefined4 *)((longlong)puVar10 + 0x24) = *(undefined4 *)(uVar13 + 0x24 + lVar2);
        *(undefined1 *)(puVar10 + 5) = *(undefined1 *)(uVar13 + 0x28 + lVar2);
      }
      local_48 = local_48 + 1;
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 0x30;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_2 + 0x30));
  }
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = param_3;
  local_78 = uVar7;
  uStack_70 = uVar6;
  if ((*(byte *)(param_2 + 0x4c) - 3 < 2) && (*(int *)(param_1 + 0x38) == 1)) {
    puVar10 = *(undefined8 **)(param_1 + 0x30);
    uVar14 = **(uint **)(param_1 + 0x48);
    uVar8 = FUN_143703a50();
    if (local_48 == (local_44 & 0x3fffffff)) {
      FUN_14370c460(uVar8,&local_50,0x30);
    }
    puVar11 = (undefined8 *)((longlong)(int)local_48 * 0x30 + local_50);
    local_48 = local_48 + 1;
    uVar8 = puVar10[1];
    *puVar11 = *puVar10;
    puVar11[1] = uVar8;
    puVar11[2] = uVar7;
    puVar11[3] = uVar6;
    *(uint *)((longlong)puVar11 + 0x24) = uVar14 >> 0x16;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined1 *)(puVar11 + 5) = 0;
    uVar9 = param_4;
  }
  FUN_1438db360(&local_68,*(undefined4 *)(param_1 + 0x5c),&local_78,param_3,uVar9,param_5,param_6,
                param_7);
  uVar7 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar7,local_50,0x30,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  FUN_14370c000(&local_68);
  return;
}



// FUNCTION 1438db980 FUN_1438db980 body=398 status=ok
// SIG undefined FUN_1438db980(void)

void FUN_1438db980(float *param_1,float *param_2,float *param_3,float *param_4,longlong *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  fVar4 = (*param_1 - *param_2) * (*param_1 - *param_2);
  fVar5 = (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]);
  fVar6 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar12 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar7._4_4_ = fVar11;
  auVar7._0_4_ = fVar10;
  auVar7._8_4_ = fVar12;
  auVar7._12_4_ = fVar6;
  auVar7 = rsqrtps(in_XMM2,auVar7);
  fVar4 = auVar7._0_4_;
  fVar5 = auVar7._4_4_;
  fVar8 = auVar7._8_4_;
  fVar9 = auVar7._12_4_;
  local_58 = (float)(~-(uint)(fVar10 <= 0.0) &
                    (uint)((3.0 - fVar10 * fVar4 * fVar4) * fVar4 * 0.5 * fVar10));
  fStack_54 = (float)(~-(uint)(fVar11 <= 0.0) &
                     (uint)((3.0 - fVar11 * fVar5 * fVar5) * fVar5 * 0.5 * fVar11));
  fStack_50 = (float)(~-(uint)(fVar12 <= 0.0) &
                     (uint)((3.0 - fVar12 * fVar8 * fVar8) * fVar8 * 0.5 * fVar12));
  fStack_4c = (float)(~-(uint)(fVar6 <= 0.0) &
                     (uint)((3.0 - fVar6 * fVar9 * fVar9) * fVar9 * 0.5 * fVar6));
  local_48 = *param_3 * local_58;
  fStack_44 = param_3[1] * fStack_54;
  fStack_40 = param_3[2] * fStack_50;
  fStack_3c = param_3[3] * fStack_4c;
  local_58 = -*param_4 * local_58;
  fStack_54 = -param_4[1] * fStack_54;
  fStack_50 = -param_4[2] * fStack_50;
  fStack_4c = -param_4[3] * fStack_4c;
  fVar4 = 0.1;
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_5 + 1) == (*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_5,0x10);
  }
  lVar3 = 10;
  uVar1 = *(undefined8 *)(param_1 + 2);
  puVar2 = (undefined8 *)((longlong)(int)param_5[1] * 0x10 + *param_5);
  *puVar2 = *(undefined8 *)param_1;
  puVar2[1] = uVar1;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  do {
    FUN_1438db2b0(fVar4,param_1,param_2,&local_48,&local_58,&local_38);
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_5 + 1) == (*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_5,0x10);
    }
    fVar4 = fVar4 + 0.1;
    puVar2 = (undefined8 *)((longlong)(int)param_5[1] * 0x10 + *param_5);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(int *)(param_5 + 1) = (int)param_5[1] + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1438dbb10 FUN_1438dbb10 body=323 status=ok
// SIG undefined FUN_1438dbb10(void)

void FUN_1438dbb10(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)(param_1 >> 0x10 & 0xff) * 0.003921569;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = (float)(param_1 >> 8 & 0xff) * 0.003921569;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = (float)(param_1 & 0xff) * 0.003921569;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  fVar4 = (float)(param_1 >> 0x18) * 0.003921569;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  FUN_1438dbc60(fVar1,fVar2,fVar3,fVar4,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1438dbc60 FUN_1438dbc60 body=483 status=ok
// SIG undefined FUN_1438dbc60(void)

void FUN_1438dbc60(float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_stack_00000028;
  float *in_stack_00000030;
  float *in_stack_00000038;
  float *in_stack_00000040;
  
  fVar6 = *in_stack_00000030 - *in_stack_00000028;
  fVar7 = in_stack_00000030[1] - in_stack_00000028[1];
  fVar8 = in_stack_00000030[2] - in_stack_00000028[2];
  fVar3 = *in_stack_00000038 - *in_stack_00000028;
  fVar4 = in_stack_00000038[1] - in_stack_00000028[1];
  fVar5 = in_stack_00000038[2] - in_stack_00000028[2];
  fVar9 = fVar4 * fVar6 - fVar7 * fVar3;
  fVar10 = fVar5 * fVar7 - fVar8 * fVar4;
  fVar11 = fVar3 * fVar8 - fVar6 * fVar5;
  fVar3 = fVar10 * fVar10;
  fVar4 = fVar11 * fVar11;
  auVar1._8_4_ = fVar9 * fVar9;
  auVar1._4_4_ = auVar1._8_4_;
  auVar1._0_4_ = auVar1._8_4_;
  auVar1._12_4_ = auVar1._8_4_;
  fVar6 = fVar4 + fVar3 + auVar1._8_4_;
  fVar7 = fVar4 + fVar3 + auVar1._8_4_;
  fVar8 = fVar4 + fVar3 + auVar1._8_4_;
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar4 + fVar3 + auVar1._8_4_;
  auVar2 = rsqrtps(auVar1,auVar2);
  fVar3 = auVar2._0_4_;
  fVar4 = auVar2._4_4_;
  fVar5 = auVar2._8_4_;
  fVar4 = (0.0 - ((float)(~-(uint)(fVar7 <= 0.0) &
                         (uint)((3.0 - fVar7 * fVar4 * fVar4) * fVar4 * 0.5)) * fVar11 *
                  in_stack_00000040[1] +
                  (float)(~-(uint)(fVar6 <= 0.0) &
                         (uint)((3.0 - fVar6 * fVar3 * fVar3) * fVar3 * 0.5)) * fVar10 *
                  *in_stack_00000040 +
                 (float)(~-(uint)(fVar8 <= 0.0) &
                        (uint)((3.0 - fVar8 * fVar5 * fVar5) * fVar5 * 0.5)) * fVar9 *
                 in_stack_00000040[2])) + 0.75;
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  param_1 = fVar3 * 0.5714286 * param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (1.0 <= param_1) {
    param_1 = 1.0;
  }
  FUN_14375fd30(param_1);
  return;
}



// FUNCTION 1438dbe50 FUN_1438dbe50 body=515 status=ok
// SIG undefined FUN_1438dbe50(void)

uint FUN_1438dbe50(longlong param_1,longlong param_2,longlong *param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  float fVar6;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  lVar2 = FUN_14384fb00(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                        param_1 + 0xb0,param_1 + 0xd0,*(undefined8 *)(param_1 + 0x48),
                        param_1 + 0x120,param_1 + 0x140,param_1 + 0x90,*param_4,
                        *(undefined4 *)(param_1 + 0x50),&local_res8);
  lVar3 = (longlong)*param_4;
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(lVar3 + *(longlong *)(param_1 + 0x100));
  }
  fVar6 = 1.0;
  if ((*(int *)(param_2 + 0x90) == -1) ||
     (*(int *)(*param_3 + lVar3 * 4) != *(int *)(param_2 + 0x90))) {
    if (*(char *)(param_2 + 0x2d) == '\0') {
      uVar1 = *(uint *)(param_2 + 0x38);
      if ((int)uVar1 < 1) {
        uVar4 = (ulonglong)*(uint *)(param_2 + 0x50);
      }
      else if ((uint *)CONCAT44(uStackX_c,local_res8) == (uint *)0x0) {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x40) + (0U % (ulonglong)uVar1) * 4);
      }
      else {
        uVar4 = (ulonglong)
                *(uint *)(*(longlong *)(param_2 + 0x40) +
                         ((ulonglong)*(uint *)CONCAT44(uStackX_c,local_res8) % (ulonglong)uVar1) * 4
                         );
      }
    }
    else {
      uVar4 = (ulonglong)
              *(uint *)(&DAT_14682b360 + (longlong)(*(int *)(*param_3 + lVar3 * 4) % 0xc) * 4);
    }
    uVar1 = (uint)uVar4;
    if (*(char *)(param_2 + 0x20) != '\0') {
      if (*(char *)(param_2 + 0xb0) == '\0') {
        fVar6 = 0.0009803922;
      }
      else {
        fVar6 = 0.0031372549;
      }
      fVar6 = (float)(uVar4 >> 0x18) * fVar6;
      if ((bVar5 & 1) != 0) {
        fVar6 = fVar6 * 0.25;
      }
    }
    if ((*(char *)(param_2 + 0x4b) != '\0') && (-1 < *(short *)(lVar2 + 0xc))) {
      uVar1 = FUN_1438deef0(uVar4,(int)*(short *)(lVar2 + 0xc),0x3e99999a);
    }
  }
  else {
    uVar1 = 0xffff6400;
    if (*(char *)(param_2 + 0x20) != '\0') {
      fVar6 = 0.627451;
    }
  }
  return (int)(fVar6 * 255.0) << 0x18 | uVar1 & 0xffffff;
}



// FUNCTION 1438dc060 FUN_1438dc060 body=4125 status=ok
// SIG undefined FUN_1438dc060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438dc060(longlong *param_1,undefined4 param_2,longlong param_3,float *param_4,
                  undefined8 param_5,uint *param_6,uint param_7)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int *piVar21;
  float *pfVar22;
  int *piVar23;
  undefined4 uVar24;
  longlong *plVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 *puVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined8 uVar51;
  undefined8 in_stack_fffffffffffffc50;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined4 uVar54;
  uint uVar55;
  uint local_374 [2];
  uint local_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  uint local_348;
  int local_344;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  int local_308;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [16];
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  undefined1 local_288 [4];
  undefined1 local_284 [4];
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  undefined1 local_258 [8];
  longlong local_250;
  undefined1 local_248 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 *local_218;
  int local_210;
  uint local_20c;
  undefined1 local_208 [128];
  undefined1 *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined1 local_178 [128];
  undefined1 local_f8 [16];
  undefined1 local_e8 [176];
  
  uVar55 = *param_6;
  uVar51 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffc50 >> 0x20),uVar55);
  piVar21 = (int *)FUN_1437fb610(*(undefined8 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x20),
                                 param_3 + 0xb0,param_3 + 0xd0,param_3 + 0x90,uVar51);
  uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
  bVar9 = false;
  local_344 = *piVar21;
  iVar11 = piVar21[2];
  local_358 = 0;
  uStack_350 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  bVar8 = false;
  if (*(int *)(param_3 + 0x108) == 0) {
    bVar26 = 0;
  }
  else {
    bVar26 = *(byte *)((longlong)(int)uVar55 + *(longlong *)(param_3 + 0x100));
  }
  lVar6 = CONCAT44(param_5._4_4_,(uint)param_5);
  uVar18 = FUN_1438db030(lVar6,bVar26 & 1,&local_2c8);
  local_348 = 1;
  if ((((*(char *)(lVar6 + 0x27) != '\0') || (*(char *)(lVar6 + 0x28) != '\0')) ||
      (*(char *)(lVar6 + 0x49) != '\0')) &&
     (auVar36._4_4_ = -(uint)(*(float *)(lVar6 + 0xf4) < *(float *)(lVar6 + 0xe4)),
     auVar36._0_4_ = -(uint)(*(float *)(lVar6 + 0xf0) < *(float *)(lVar6 + 0xe0)),
     auVar36._8_4_ = -(uint)(*(float *)(lVar6 + 0xf8) < *(float *)(lVar6 + 0xe8)),
     auVar36._12_4_ = -(uint)(*(float *)(lVar6 + 0xfc) < *(float *)(lVar6 + 0xec)),
     uVar19 = movmskps(uVar18,auVar36), (uVar19 & 7) == 0)) {
    local_2b8 = _DAT_1467f06e0;
    uStack_2b4 = uRam00000001467f06e4;
    uStack_2b0 = uRam00000001467f06e8;
    uStack_2ac = DAT_1467f06ec;
    param_5._0_4_ = uVar55;
    FUN_143852360(param_3,&param_5,&local_2b8,&local_238);
    uVar18 = FUN_143717be0(param_4,&local_238,&local_238);
    auVar4._4_4_ = -(uint)(fStack_234 <= *(float *)(lVar6 + 0xf4) &&
                          *(float *)(lVar6 + 0xe4) <= fStack_224);
    auVar4._0_4_ = -(uint)(local_238 <= *(float *)(lVar6 + 0xf0) &&
                          *(float *)(lVar6 + 0xe0) <= local_228);
    auVar4._8_4_ = -(uint)(fStack_230 <= *(float *)(lVar6 + 0xf8) &&
                          *(float *)(lVar6 + 0xe8) <= fStack_220);
    auVar4._12_4_ =
         -(uint)(fStack_22c <= *(float *)(lVar6 + 0xfc) && *(float *)(lVar6 + 0xec) <= fStack_21c);
    uVar18 = movmskps(uVar18,auVar4);
    local_348 = (uint)(((byte)uVar18 & 7) == 7);
  }
  iVar29 = local_344;
  piVar21 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30),
                                 param_3 + 0xc0,param_3 + 0xe0,param_3 + 0x70,
                                 CONCAT44(uVar24,local_344));
  fVar16 = fStack_2bc;
  fVar15 = fStack_2c0;
  fVar14 = fStack_2c4;
  fVar13 = local_2c8;
  iVar2 = *piVar21;
  if (iVar2 < *(int *)(param_3 + 0x40)) {
    pfVar22 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_3 + 0x38));
  }
  else {
    pfVar22 = (float *)((longlong)(iVar2 - *(int *)(param_3 + 0x40)) * 0x10 +
                       *(longlong *)(param_3 + 0xf0));
  }
  fVar46 = *pfVar22;
  fVar33 = pfVar22[1];
  fVar39 = pfVar22[2];
  local_308 = (int)(short)iVar11;
  local_36c = 0;
  fVar41 = fVar33 * param_4[4] + fVar46 * *param_4 + fVar39 * param_4[8] + param_4[0xc];
  fVar43 = fVar33 * param_4[5] + fVar46 * param_4[1] + fVar39 * param_4[9] + param_4[0xd];
  fVar45 = fVar33 * param_4[6] + fVar46 * param_4[2] + fVar39 * param_4[10] + param_4[0xe];
  fVar46 = fVar33 * param_4[7] + fVar46 * param_4[3] + fVar39 * param_4[0xb] + param_4[0xf];
  if (0 < (short)iVar11) {
    do {
      uVar31 = param_3 + 0x70;
      lVar30 = param_3 + 0x130;
      lVar27 = param_3 + 0x150;
      uVar19 = iVar29 + local_36c;
      plVar25 = &local_250;
      local_318 = 0;
      uStack_310 = 0;
      uVar24 = *(undefined4 *)(param_3 + 0x60);
      uVar51 = *(undefined8 *)(param_3 + 0x58);
      bVar10 = false;
      uVar55 = uVar19;
      piVar21 = (int *)FUN_14384fa30(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30)
                                    );
      iVar11 = piVar21[1];
      if (iVar11 < *(int *)(param_3 + 0x40)) {
        pfVar22 = (float *)((longlong)iVar11 * 0x10 + *(longlong *)(param_3 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar11 - *(int *)(param_3 + 0x40)) * 0x10 +
                           *(longlong *)(param_3 + 0xf0));
      }
      fVar33 = *pfVar22;
      fVar39 = pfVar22[1];
      fVar42 = pfVar22[2];
      fVar47 = fVar39 * param_4[4] + fVar33 * *param_4 + fVar42 * param_4[8] + param_4[0xc];
      fVar48 = fVar39 * param_4[5] + fVar33 * param_4[1] + fVar42 * param_4[9] + param_4[0xd];
      fVar49 = fVar39 * param_4[6] + fVar33 * param_4[2] + fVar42 * param_4[10] + param_4[0xe];
      fVar50 = fVar39 * param_4[7] + fVar33 * param_4[3] + fVar42 * param_4[0xb] + param_4[0xf];
      fVar33 = fVar41;
      fVar39 = fVar43;
      fVar42 = fVar45;
      fVar44 = fVar46;
      fVar34 = fVar47;
      fVar37 = fVar48;
      fVar38 = fVar49;
      fVar40 = fVar50;
      if (*(char *)(lVar6 + 0x80) != '\0') {
        if (bVar8) {
          fVar34 = (float)local_2a8;
          fVar37 = local_2a8._4_4_;
          fVar38 = (float)uStack_2a0;
          fVar40 = uStack_2a0._4_4_;
        }
        else {
          param_5._0_4_ = *param_6;
          FUN_1438523d0(param_3,&param_5,&local_2a8);
          bVar8 = true;
          fVar34 = local_2a8._4_4_ * param_4[4] + (float)local_2a8 * *param_4 +
                   (float)uStack_2a0 * param_4[8] + param_4[0xc] + fVar13;
          fVar37 = local_2a8._4_4_ * param_4[5] + (float)local_2a8 * param_4[1] +
                   (float)uStack_2a0 * param_4[9] + param_4[0xd] + fVar14;
          fVar38 = local_2a8._4_4_ * param_4[6] + (float)local_2a8 * param_4[2] +
                   (float)uStack_2a0 * param_4[10] + param_4[0xe] + fVar15;
          fVar40 = local_2a8._4_4_ * param_4[7] + (float)local_2a8 * param_4[3] +
                   (float)uStack_2a0 * param_4[0xb] + param_4[0xf] + fVar16;
          local_2a8 = CONCAT44(fVar37,fVar34);
          uStack_2a0 = CONCAT44(fVar40,fVar38);
        }
        fVar1 = *(float *)(lVar6 + 0x84);
        fVar33 = (fVar34 - fVar41) * fVar1 + fVar41;
        fVar39 = (fVar37 - fVar43) * fVar1 + fVar43;
        fVar42 = (fVar38 - fVar45) * fVar1 + fVar45;
        fVar44 = (fVar40 - fVar46) * fVar1 + fVar46;
        fVar34 = (fVar34 - fVar47) * fVar1 + fVar47;
        fVar37 = (fVar37 - fVar48) * fVar1 + fVar48;
        fVar38 = (fVar38 - fVar49) * fVar1 + fVar49;
        fVar40 = (fVar40 - fVar50) * fVar1 + fVar50;
      }
      uVar32 = *(uint *)(lVar6 + 0x58);
      local_368 = fVar33 + fVar13;
      fStack_364 = fVar39 + fVar14;
      fStack_360 = fVar42 + fVar15;
      fStack_35c = fVar44 + fVar16;
      local_338 = fVar34 + fVar13;
      fStack_334 = fVar37 + fVar14;
      fStack_330 = fVar38 + fVar15;
      fStack_32c = fVar40 + fVar16;
      if (piVar21[2] == -1) {
        uVar32 = *(uint *)(lVar6 + 0x54);
      }
      else if ((*(byte *)(piVar21 + 4) & 0x40) != 0) {
        uVar32 = *(uint *)(lVar6 + 0x5c);
      }
      if ((*(byte *)(piVar21 + 4) & 2) != 0) {
        uVar32 = (uVar32 & *(uint *)(lVar6 + 0x50)) +
                 ((*(uint *)(lVar6 + 0x50) ^ uVar32) >> 1 & 0x7f7f7f) | 0xff000000;
      }
      if ((piVar21[2] == -1) || ((*(byte *)(piVar21 + 4) & 0x40) != 0)) {
        cVar17 = '\x01';
      }
      else {
        cVar17 = '\0';
      }
      param_5._0_4_ = CONCAT31(param_5._1_3_,cVar17);
      if ((*(char *)(lVar6 + 0xb0) != '\0') && (cVar17 == '\0')) {
        uVar32 = FUN_14375fd30((float)(param_7 >> 0x10 & 0xff) * 0.003921569 * 0.5 +
                               (float)(uVar32 >> 0x10 & 0xff) * 0.0019607844,
                               (float)(param_7 >> 8 & 0xff) * 0.003921569 * 0.5 +
                               (float)(uVar32 >> 8 & 0xff) * 0.0019607844,
                               (float)(param_7 & 0xff) * 0.003921569 * 0.5 +
                               (float)(uVar32 & 0xff) * 0.0019607844,
                               (float)(uVar32 >> 0x18) * 0.003921569,uVar51,lVar30,lVar27,uVar31,
                               uVar55,uVar24,plVar25);
      }
      uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
      uVar18 = (undefined4)((ulonglong)lVar30 >> 0x20);
      uVar54 = (undefined4)((ulonglong)lVar27 >> 0x20);
      if (*(char *)(lVar6 + 0x22) != '\0') {
        if (((char)param_5 == '\0') && ((int)(piVar21[3] & 0x3fffffU) <= (int)*param_6)) {
          uVar52 = CONCAT44(uVar18,piVar21[2]) & 0xffffffff003fffff;
          lVar27 = param_3 + 0x70;
          piVar23 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_3 + 0x28),
                                         *(undefined4 *)(param_3 + 0x30),param_3 + 0xc0,
                                         param_3 + 0xe0,lVar27,uVar52);
          uVar24 = (undefined4)((ulonglong)lVar27 >> 0x20);
          uVar18 = (undefined4)(uVar52 >> 0x20);
          if (((*piVar21 == *piVar23) && (piVar21[1] == piVar23[1])) ||
             ((*piVar21 == piVar23[1] && (piVar21[1] == *piVar23)))) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) goto LAB_1438dc791;
        }
        if (param_1 == (longlong *)0x0) {
          uVar53 = CONCAT44(uVar54,DAT_146b846e8);
          pfVar22 = &local_338;
          uVar51 = CONCAT44(uVar18,uVar32);
          (**(code **)(*DAT_146b84580 + 0xa0))
                    (DAT_146b84580,local_294,0,&local_368,pfVar22,uVar51,uVar53);
          uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
          uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
          uVar24 = (undefined4)((ulonglong)pfVar22 >> 0x20);
        }
        else {
          uVar53 = CONCAT44(uVar54,param_2);
          pfVar22 = &local_338;
          uVar51 = CONCAT44(uVar18,uVar32);
          (**(code **)(*param_1 + 0xa0))(param_1,local_298,0,&local_368,pfVar22,uVar51,uVar53);
          uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
          uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
          uVar24 = (undefined4)((ulonglong)pfVar22 >> 0x20);
        }
        if (((*(char *)(lVar6 + 0x101) != '\0') &&
            ((*piVar21 == piVar21[1] ||
             (auVar3._4_4_ = -(uint)(fVar48 == fVar43), auVar3._0_4_ = -(uint)(fVar47 == fVar41),
             auVar3._8_4_ = -(uint)(fVar49 == fVar45), auVar3._12_4_ = -(uint)(fVar50 == fVar46),
             uVar20 = movmskps(piVar21[1],auVar3), ((byte)uVar20 & 7) == 7)))) ||
           ((*(char *)(lVar6 + 0x100) != '\0' &&
            ((fStack_364 - fStack_334) * (fStack_364 - fStack_334) +
             (local_368 - local_338) * (local_368 - local_338) +
             (fStack_360 - fStack_330) * (fStack_360 - fStack_330) <=
             *(float *)(lVar6 + 0x10c) * *(float *)(lVar6 + 0x10c))))) {
          local_328 = (local_338 - local_368) * 0.47 + local_368;
          fStack_324 = (fStack_334 - fStack_364) * 0.47 + fStack_364;
          fStack_320 = (fStack_330 - fStack_360) * 0.47 + fStack_360;
          fStack_31c = (fStack_32c - fStack_35c) * 0.47 + fStack_35c;
          local_2f8 = *(float *)(lVar6 + 0x110) + local_328;
          fStack_2f4 = *(float *)(lVar6 + 0x114) + fStack_324;
          fStack_2f0 = *(float *)(lVar6 + 0x118) + fStack_320;
          fStack_2ec = *(float *)(lVar6 + 0x11c) + fStack_31c;
          if (param_1 == (longlong *)0x0) {
            if ((char)param_5 == '\0') {
              uVar24 = *(undefined4 *)(lVar6 + 0x108);
            }
            else {
              uVar24 = *(undefined4 *)(lVar6 + 0x104);
            }
            uVar53 = CONCAT44(uVar54,DAT_146b846e8);
            pfVar22 = &local_2f8;
            uVar51 = CONCAT44(uVar18,uVar24);
            (**(code **)(*DAT_146b84580 + 0xa0))
                      (DAT_146b84580,local_28c,0,&local_328,pfVar22,uVar51,uVar53);
            uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
            uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
            uVar24 = (undefined4)((ulonglong)pfVar22 >> 0x20);
          }
          else {
            if ((char)param_5 == '\0') {
              uVar24 = *(undefined4 *)(lVar6 + 0x108);
            }
            else {
              uVar24 = *(undefined4 *)(lVar6 + 0x104);
            }
            uVar53 = CONCAT44(uVar54,param_2);
            uVar51 = CONCAT44(uVar18,uVar24);
            pfVar22 = &local_2f8;
            (**(code **)(*param_1 + 0xa0))(param_1,local_290,0,&local_328,pfVar22,uVar51,uVar53);
            uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
            uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
            uVar24 = (undefined4)((ulonglong)pfVar22 >> 0x20);
          }
        }
      }
LAB_1438dc791:
      if ((*(char *)(lVar6 + 0x2c) != '\0') && (piVar21[2] != -1)) {
        local_328 = (local_338 - local_368) * 0.47 + local_368;
        fStack_324 = (fStack_334 - fStack_364) * 0.47 + fStack_364;
        fStack_320 = (fStack_330 - fStack_360) * 0.47 + fStack_360;
        fStack_31c = (fStack_32c - fStack_35c) * 0.47 + fStack_35c;
        piVar23 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_3 + 0x28),
                                       *(undefined4 *)(param_3 + 0x30),param_3 + 0xc0);
        iVar11 = *(int *)(param_3 + 0x40);
        iVar2 = *piVar23;
        if (iVar2 < iVar11) {
          pfVar22 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_3 + 0x38));
        }
        else {
          pfVar22 = (float *)((longlong)(iVar2 - iVar11) * 0x10 + *(longlong *)(param_3 + 0xf0));
        }
        iVar2 = piVar23[1];
        fVar46 = *pfVar22;
        fVar33 = pfVar22[1];
        fVar39 = pfVar22[2];
        if (iVar2 < iVar11) {
          pfVar22 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_3 + 0x38));
        }
        else {
          pfVar22 = (float *)((longlong)(iVar2 - iVar11) * 0x10 + *(longlong *)(param_3 + 0xf0));
        }
        fVar41 = *pfVar22;
        fVar43 = pfVar22[1];
        fVar45 = pfVar22[2];
        fVar42 = fVar41 * *param_4 + fVar43 * param_4[4] + fVar45 * param_4[8] + param_4[0xc];
        fVar44 = fVar41 * param_4[1] + fVar43 * param_4[5] + fVar45 * param_4[9] + param_4[0xd];
        fVar34 = fVar41 * param_4[2] + fVar43 * param_4[6] + fVar45 * param_4[10] + param_4[0xe];
        fVar41 = fVar41 * param_4[3] + fVar43 * param_4[7] + fVar45 * param_4[0xb] + param_4[0xf];
        local_2c8 = ((fVar46 * *param_4 + fVar33 * param_4[4] + fVar39 * param_4[8] + param_4[0xc])
                    - fVar42) * 0.47 + fVar42 + fVar13;
        fStack_2c4 = ((fVar46 * param_4[1] + fVar33 * param_4[5] + fVar39 * param_4[9] +
                      param_4[0xd]) - fVar44) * 0.47 + fVar44 + fVar14;
        fStack_2c0 = ((fVar46 * param_4[2] + fVar33 * param_4[6] + fVar39 * param_4[10] +
                      param_4[0xe]) - fVar34) * 0.47 + fVar34 + fVar15;
        fStack_2bc = ((fVar46 * param_4[3] + fVar33 * param_4[7] + fVar39 * param_4[0xb] +
                      param_4[0xf]) - fVar41) * 0.47 + fVar41 + fVar16;
        if (param_1 == (longlong *)0x0) {
          puVar28 = local_284;
          lVar27 = *DAT_146b84580;
          plVar25 = DAT_146b84580;
          uVar24 = DAT_146b846e8;
        }
        else {
          lVar27 = *param_1;
          puVar28 = local_288;
          plVar25 = param_1;
          uVar24 = param_2;
        }
        uVar53 = CONCAT44(uVar54,uVar24);
        uVar51 = CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x78));
        pfVar22 = &local_2c8;
        (**(code **)(lVar27 + 0xa0))(plVar25,puVar28,0,&local_328,pfVar22,uVar51,uVar53);
        uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
        uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
        uVar24 = (undefined4)((ulonglong)pfVar22 >> 0x20);
      }
      if (*(char *)(lVar6 + 0x25) != '\0') {
        if (param_1 == (longlong *)0x0) {
          puVar28 = local_27c;
          lVar27 = *DAT_146b84580;
          plVar25 = DAT_146b84580;
          uVar20 = DAT_146b846e8;
        }
        else {
          lVar27 = *param_1;
          puVar28 = local_280;
          plVar25 = param_1;
          uVar20 = param_2;
        }
        uVar31 = CONCAT44((int)(uVar31 >> 0x20),uVar20);
        uVar53 = CONCAT44(uVar54,*(undefined4 *)(lVar6 + 0x88));
        uVar51 = CONCAT44(uVar18,1);
        (**(code **)(lVar27 + 0x98))
                  (plVar25,puVar28,0,&local_368,CONCAT44(uVar24,*(undefined4 *)(lVar6 + 0x74)),
                   uVar51,uVar53,uVar31);
        uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
        uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
      }
      if (local_348 != 0) {
        local_218 = local_208;
        local_20c = 0x80000080;
        local_210 = 1;
        local_208[0] = 0;
        if (*(char *)(lVar6 + 0x27) != '\0') {
          FUN_14370c750(&local_2b8,&DAT_145af963c,*piVar21);
          if (param_1 == (longlong *)0x0) {
            puVar28 = local_248;
            lVar27 = *DAT_146b84580;
            plVar25 = DAT_146b84580;
            uVar24 = DAT_146b846e8;
          }
          else {
            lVar27 = *param_1;
            puVar28 = local_258;
            plVar25 = param_1;
            uVar24 = param_2;
          }
          uVar53 = CONCAT44(uVar54,uVar24);
          uVar51 = CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x74));
          (**(code **)(lVar27 + 200))(plVar25,puVar28,0,&local_2b8,&local_368,uVar51,uVar53);
          uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
          uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
        }
        if (*(char *)(lVar6 + 0x28) != '\0') {
          hkStringBuf::printf((char *)&local_218,&DAT_145c5769c,(ulonglong)uVar19);
        }
        if ((*(char *)(lVar6 + 0x49) != '\0') && (local_250 != 0)) {
          local_188 = local_178;
          local_17c = 0x80000080;
          local_180 = 1;
          local_178[0] = 0;
          FUN_1438de760(&local_188,local_250,*(undefined4 *)(param_3 + 0x60));
          FUN_143745630(&local_218,local_188);
          local_180 = 0;
          if (-1 < (int)local_17c) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_188,1,local_17c & 0x3fffffff);
          }
        }
        if (0 < local_210 + -1) {
          local_2f8 = (local_338 - local_368) * 0.47 + local_368;
          fStack_2f4 = (fStack_334 - fStack_364) * 0.47 + fStack_364;
          fStack_2f0 = (fStack_330 - fStack_360) * 0.47 + fStack_360;
          fStack_2ec = (fStack_32c - fStack_35c) * 0.47 + fStack_35c;
          if (!bVar9) {
            param_5._0_4_ = *param_6;
            hkaiNavMeshUtils::calcFaceNormal(local_f8,param_3,&param_5,&local_358);
            bVar9 = true;
            fVar39 = local_358._4_4_ * param_4[6];
            fVar41 = local_358._4_4_ * param_4[7];
            fVar46 = (float)local_358 * param_4[2];
            fVar33 = (float)local_358 * param_4[3];
            local_358 = CONCAT44(local_358._4_4_ * param_4[5] + (float)local_358 * param_4[1] +
                                 (float)uStack_350 * param_4[9],
                                 local_358._4_4_ * param_4[4] + (float)local_358 * *param_4 +
                                 (float)uStack_350 * param_4[8]);
            uStack_350 = CONCAT44(fVar41 + fVar33 + (float)uStack_350 * param_4[0xb],
                                  fVar39 + fVar46 + (float)uStack_350 * param_4[10]);
          }
          local_374[0] = *param_6;
          param_5._0_4_ = uVar19;
          FUN_143852280(param_3,local_374,&param_5,&local_358,&local_318);
          bVar10 = true;
          fVar43 = local_318._4_4_ * param_4[4] + (float)local_318 * *param_4 +
                   (float)uStack_310 * param_4[8];
          fVar45 = local_318._4_4_ * param_4[5] + (float)local_318 * param_4[1] +
                   (float)uStack_310 * param_4[9];
          fVar42 = local_318._4_4_ * param_4[6] + (float)local_318 * param_4[2] +
                   (float)uStack_310 * param_4[10];
          fVar46 = fVar43 * param_4[0xc];
          fVar33 = fVar45 * param_4[0xd];
          fVar39 = fVar42 * param_4[0xe];
          auVar35._0_4_ = fVar33 + fVar46 + fVar39;
          auVar35._4_4_ = fVar33 + fVar46 + fVar39;
          auVar35._8_4_ = fVar33 + fVar46 + fVar39;
          auVar35._12_4_ = fVar33 + fVar46 + fVar39;
          uStack_310._4_4_ = uStack_310._4_4_ - auVar35._12_4_;
          fVar46 = (local_368 - local_338) * (local_368 - local_338);
          fVar33 = (fStack_364 - fStack_334) * (fStack_364 - fStack_334);
          fVar39 = (fStack_360 - fStack_330) * (fStack_360 - fStack_330);
          local_318 = CONCAT44(fVar45,fVar43);
          uStack_310 = CONCAT44(uStack_310._4_4_,fVar42);
          fVar41 = fVar33 + fVar46 + fVar39;
          auVar5._4_4_ = fVar33 + fVar46 + fVar39;
          auVar5._0_4_ = fVar41;
          auVar5._8_4_ = fVar33 + fVar46 + fVar39;
          auVar5._12_4_ = fVar33 + fVar46 + fVar39;
          auVar36 = rsqrtps(auVar35,auVar5);
          fVar46 = auVar36._0_4_;
          fVar46 = (float)(~-(uint)(fVar41 <= 0.0) &
                          (uint)((3.0 - fVar41 * fVar46 * fVar46) * fVar46 * 0.5 * fVar41)) * -0.01;
          local_2e8 = fVar46 * fVar43 + local_2f8;
          fStack_2e4 = fVar46 * fVar45 + fStack_2f4;
          fStack_2e0 = fVar46 * fVar42 + fStack_2f0;
          fStack_2dc = fVar46 * uStack_310._4_4_ + fStack_2ec;
          if (param_1 == (longlong *)0x0) {
            uVar53 = CONCAT44(uVar54,DAT_146b846e8);
            uVar51 = CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x70));
            (**(code **)(*DAT_146b84580 + 200))
                      (DAT_146b84580,local_270,0,local_218,&local_2e8,uVar51,uVar53);
            uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
            puVar28 = local_274;
            uVar51 = CONCAT44((int)((ulonglong)uVar53 >> 0x20),DAT_146b846e8);
            lVar27 = *DAT_146b84580;
            plVar25 = DAT_146b84580;
          }
          else {
            uVar53 = CONCAT44(uVar54,param_2);
            uVar51 = CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x70));
            (**(code **)(*param_1 + 200))(param_1,local_25c,0,local_218,&local_2e8,uVar51,uVar53);
            uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
            lVar27 = *param_1;
            puVar28 = local_26c;
            uVar51 = CONCAT44((int)((ulonglong)uVar53 >> 0x20),param_2);
            plVar25 = param_1;
          }
          uVar53 = CONCAT44(uVar24,*(undefined4 *)(lVar6 + 0x70));
          (**(code **)(lVar27 + 0xa0))(plVar25,puVar28,0,&local_2f8,&local_2e8,uVar53,uVar51);
          uVar18 = (undefined4)((ulonglong)uVar53 >> 0x20);
          uVar54 = (undefined4)((ulonglong)uVar51 >> 0x20);
        }
        local_210 = 0;
        if (-1 < (int)local_20c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_218,1,local_20c & 0x3fffffff);
        }
      }
      puVar12 = param_6;
      if (*(char *)(lVar6 + 0x2a) != '\0') {
        local_328 = (local_338 - local_368) * 0.47 + local_368;
        fStack_324 = (fStack_334 - fStack_364) * 0.47 + fStack_364;
        fStack_320 = (fStack_330 - fStack_360) * 0.47 + fStack_360;
        fStack_31c = (fStack_32c - fStack_35c) * 0.47 + fStack_35c;
        if (!bVar9) {
          param_5._0_4_ = *param_6;
          hkaiNavMeshUtils::calcFaceNormal(local_e8,param_3,&param_5,&local_358);
          bVar9 = true;
          fVar39 = local_358._4_4_ * param_4[6];
          fVar41 = local_358._4_4_ * param_4[7];
          fVar46 = (float)local_358 * param_4[2];
          fVar33 = (float)local_358 * param_4[3];
          local_358 = CONCAT44(local_358._4_4_ * param_4[5] + (float)local_358 * param_4[1] +
                               (float)uStack_350 * param_4[9],
                               local_358._4_4_ * param_4[4] + (float)local_358 * *param_4 +
                               (float)uStack_350 * param_4[8]);
          uStack_350 = CONCAT44(fVar41 + fVar33 + (float)uStack_350 * param_4[0xb],
                                fVar39 + fVar46 + (float)uStack_350 * param_4[10]);
        }
        if (!bVar10) {
          local_374[0] = *puVar12;
          param_5._0_4_ = uVar19;
          FUN_143852280(param_3,local_374,&param_5,&local_358,&local_318);
          fVar46 = local_318._4_4_ * param_4[4] + (float)local_318 * *param_4 +
                   (float)uStack_310 * param_4[8];
          fVar33 = local_318._4_4_ * param_4[5] + (float)local_318 * param_4[1] +
                   (float)uStack_310 * param_4[9];
          fVar39 = local_318._4_4_ * param_4[6] + (float)local_318 * param_4[2] +
                   (float)uStack_310 * param_4[10];
          local_318 = CONCAT44(fVar33,fVar46);
          uStack_310 = CONCAT44(uStack_310._4_4_ -
                                (fVar33 * param_4[0xd] + fVar46 * param_4[0xc] +
                                fVar39 * param_4[0xe]),fVar39);
        }
        if (param_1 == (longlong *)0x0) {
          puVar28 = local_268;
          lVar27 = *DAT_146b84580;
          plVar25 = DAT_146b84580;
          uVar24 = DAT_146b846e8;
        }
        else {
          lVar27 = *param_1;
          puVar28 = local_278;
          plVar25 = param_1;
          uVar24 = param_2;
        }
        uVar31 = uVar31 & 0xffffffff00000000;
        uVar53 = CONCAT44(uVar54,1);
        uVar51 = CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x78));
        (**(code **)(lVar27 + 0xa8))
                  (plVar25,puVar28,0,&local_328,&local_318,uVar51,uVar53,uVar31,uVar24);
        uVar18 = (undefined4)((ulonglong)uVar51 >> 0x20);
        uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
      }
      if (*(char *)(lVar6 + 0x2b) != '\0') {
        if (!bVar9) {
          param_5._0_4_ = *param_6;
          hkaiNavMeshUtils::calcFaceNormal(&local_238,param_3,&param_5,&local_358);
          bVar9 = true;
          fVar39 = local_358._4_4_ * param_4[6];
          fVar41 = local_358._4_4_ * param_4[7];
          fVar46 = (float)local_358 * param_4[2];
          fVar33 = (float)local_358 * param_4[3];
          local_358 = CONCAT44(local_358._4_4_ * param_4[5] + (float)local_358 * param_4[1] +
                               (float)uStack_350 * param_4[9],
                               local_358._4_4_ * param_4[4] + (float)local_358 * *param_4 +
                               (float)uStack_350 * param_4[8]);
          uStack_350 = CONCAT44(fVar41 + fVar33 + (float)uStack_350 * param_4[0xb],
                                fVar39 + fVar46 + (float)uStack_350 * param_4[10]);
        }
        param_5._0_4_ = local_36c;
        local_374[0] = *param_6;
        FUN_143852660(param_3,local_374,&param_5,&local_358,local_2d8);
        FUN_143713620(local_2d8,param_4,local_2d8);
        if (param_1 == (longlong *)0x0) {
          puVar28 = local_260;
          lVar27 = *DAT_146b84580;
          plVar25 = DAT_146b84580;
          uVar24 = DAT_146b846e8;
        }
        else {
          lVar27 = *param_1;
          puVar28 = local_264;
          plVar25 = param_1;
          uVar24 = param_2;
        }
        (**(code **)(lVar27 + 0xa8))
                  (plVar25,puVar28,0,&local_368,local_2d8,
                   CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0x7c)),CONCAT44(uVar54,1),
                   uVar31 & 0xffffffff00000000,uVar24);
      }
      local_36c = local_36c + 1;
      fVar41 = fVar47;
      fVar43 = fVar48;
      fVar45 = fVar49;
      fVar46 = fVar50;
      iVar29 = local_344;
    } while ((int)local_36c < local_308);
  }
  return;
}



// FUNCTION 1438dd080 FUN_1438dd080 body=3074 status=ok
// SIG undefined FUN_1438dd080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438dd080(longlong *param_1,undefined4 param_2,longlong param_3,float *param_4,
                  undefined8 param_5,float *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  longlong lVar13;
  float *pfVar14;
  longlong *plVar15;
  byte bVar16;
  char *pcVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int iVar20;
  undefined4 uVar21;
  float *pfVar22;
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
  float local_res18 [4];
  undefined8 uVar34;
  float *pfVar35;
  longlong lVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  int local_2a8 [4];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined4 local_288;
  float local_280 [2];
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  int local_268;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined4 local_238;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218 [2];
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [16];
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 *local_1b8;
  int local_1b0;
  uint local_1ac;
  undefined1 local_1a8 [128];
  undefined1 *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [224];
  
  pfVar22 = param_6;
  uVar40 = param_3 + 0x90;
  lVar13 = param_3 + 0x140;
  lVar36 = param_3 + 0x120;
  uVar34 = *(undefined8 *)(param_3 + 0x48);
  piVar12 = (int *)FUN_14384fb00(*(undefined8 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x20),
                                 param_3 + 0xb0,param_3 + 0xd0,uVar34,lVar36,lVar13,uVar40,*param_6,
                                 *(undefined4 *)(param_3 + 0x50),local_218);
  uVar37 = (undefined4)((ulonglong)lVar36 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar34 >> 0x20);
  local_268 = *piVar12;
  local_288 = CONCAT22(local_288._2_2_,(short)piVar12[2]);
  if (*(int *)(param_3 + 0x108) == 0) {
    bVar16 = 0;
  }
  else {
    bVar16 = *(byte *)((longlong)(int)*pfVar22 + *(longlong *)(param_3 + 0x100));
  }
  lVar36 = CONCAT44(param_5._4_4_,(float)param_5);
  uVar9 = FUN_1438db030(lVar36,bVar16 & 1,&local_248);
  fVar8 = fStack_23c;
  fVar7 = fStack_240;
  fVar6 = fStack_244;
  fVar5 = local_248;
  uVar21 = (undefined4)((ulonglong)lVar13 >> 0x20);
  iVar20 = 1;
  local_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 0.0;
  fStack_26c = 0.0;
  local_298 = 0.0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  fStack_28c = 0.0;
  local_res18[0] = (float)((uint)local_res18[0] & 0xffffff00);
  param_5._0_4_ = (float)((uint)(float)param_5 & 0xffffff00);
  if (*(char *)(lVar36 + 0x26) != '\0') {
    param_5._0_4_ = *pfVar22;
    FUN_1438523d0(param_3,&param_5,&local_298);
    param_5._0_4_ = (float)CONCAT31(param_5._1_3_,1);
    fVar28 = fStack_294 * param_4[6];
    fVar30 = fStack_294 * param_4[7];
    fVar23 = local_298 * param_4[1];
    fVar24 = local_298 * param_4[2];
    fVar25 = local_298 * param_4[3];
    fVar27 = fStack_290 * param_4[0xb];
    local_298 = fStack_294 * param_4[4] + local_298 * *param_4 + fStack_290 * param_4[8] +
                param_4[0xc] + fVar5;
    fStack_294 = fStack_294 * param_4[5] + fVar23 + fStack_290 * param_4[9] + param_4[0xd] + fVar6;
    fStack_290 = fVar28 + fVar24 + fStack_290 * param_4[10] + param_4[0xe] + fVar7;
    fStack_28c = fVar30 + fVar25 + fVar27 + param_4[0xf] + fVar8;
    if (param_1 == (longlong *)0x0) {
      lVar19 = *DAT_146b84580;
      plVar15 = DAT_146b84580;
      uVar11 = DAT_146b846e8;
    }
    else {
      lVar19 = *param_1;
      plVar15 = param_1;
      uVar11 = param_2;
    }
    uVar40 = uVar40 & 0xffffffff00000000;
    lVar13 = CONCAT44(uVar21,1);
    uVar34 = CONCAT44(uVar37,*(undefined4 *)(lVar36 + 0x68));
    pfVar35 = &local_278;
    uVar9 = (**(code **)(lVar19 + 0xa8))
                      (plVar15,local_2a8,0,&local_298,pfVar35,uVar34,lVar13,uVar40,uVar11);
    uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
    uVar11 = (undefined4)((ulonglong)pfVar35 >> 0x20);
  }
  auVar3._4_4_ = -(uint)(*(float *)(lVar36 + 0xf4) < *(float *)(lVar36 + 0xe4));
  auVar3._0_4_ = -(uint)(*(float *)(lVar36 + 0xf0) < *(float *)(lVar36 + 0xe0));
  auVar3._8_4_ = -(uint)(*(float *)(lVar36 + 0xf8) < *(float *)(lVar36 + 0xe8));
  auVar3._12_4_ = -(uint)(*(float *)(lVar36 + 0xfc) < *(float *)(lVar36 + 0xec));
  uVar10 = movmskps(uVar9,auVar3);
  if ((uVar10 & 7) == 0) {
    local_280[0] = *pfVar22;
    local_248 = _DAT_1467f06e0;
    fStack_244 = fRam00000001467f06e4;
    fStack_240 = fRam00000001467f06e8;
    fStack_23c = DAT_1467f06ec;
    FUN_143852360(param_3,local_280,&local_248,&local_1d8);
    uVar9 = FUN_143717be0(param_4,&local_1d8,&local_1d8);
    auVar4._4_4_ = -(uint)(fStack_1d4 <= *(float *)(lVar36 + 0xf4) &&
                          *(float *)(lVar36 + 0xe4) <= fStack_1c4);
    auVar4._0_4_ = -(uint)(local_1d8 <= *(float *)(lVar36 + 0xf0) &&
                          *(float *)(lVar36 + 0xe0) <= local_1c8);
    auVar4._8_4_ = -(uint)(fStack_1d0 <= *(float *)(lVar36 + 0xf8) &&
                          *(float *)(lVar36 + 0xe8) <= fStack_1c0);
    auVar4._12_4_ =
         -(uint)(fStack_1cc <= *(float *)(lVar36 + 0xfc) && *(float *)(lVar36 + 0xec) <= fStack_1bc)
    ;
    uVar9 = movmskps(uVar9,auVar4);
    if (((byte)uVar9 & 7) != 7) goto LAB_1438dd499;
  }
  local_1b8 = local_1a8;
  local_1ac = 0x80000080;
  local_1b0 = 1;
  local_1a8[0] = 0;
  if (*(char *)(lVar36 + 0x29) != '\0') {
    pcVar17 = "%d:%d(%d)-H ";
    if ((bVar16 & 1) == 0) {
      pcVar17 = "%d:%d(%d) ";
    }
    hkStringBuf::printf((char *)&local_1b8,pcVar17,(ulonglong)*(uint *)(param_3 + 0x17c),
                        (ulonglong)(uint)*pfVar22,CONCAT44(uVar11,(int)(short)local_288));
  }
  if ((*(char *)(lVar36 + 0x4a) != '\0') && (*(int *)(param_3 + 0x50) != 0)) {
    local_128 = local_118;
    local_11c = 0x80000080;
    local_120 = 1;
    local_118[0] = 0;
    FUN_1438de760(&local_128,local_218[0]);
    FUN_143745630(&local_1b8,local_128);
    local_120 = 0;
    if (-1 < (int)local_11c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_128,1,local_11c & 0x3fffffff);
    }
  }
  uVar11 = (undefined4)((ulonglong)lVar13 >> 0x20);
  if (0 < local_1b0 + -1) {
    if ((char)param_5 == '\0') {
      param_5._0_4_ = *pfVar22;
      FUN_1438523d0(param_3,&param_5,&local_298);
      param_5._0_4_ = (float)CONCAT31(param_5._1_3_,1);
      fVar28 = fStack_294 * param_4[6];
      fVar30 = fStack_294 * param_4[7];
      fVar23 = local_298 * param_4[1];
      fVar24 = local_298 * param_4[2];
      fVar25 = local_298 * param_4[3];
      fVar27 = fStack_290 * param_4[0xb];
      local_298 = fStack_294 * param_4[4] + local_298 * *param_4 + fStack_290 * param_4[8] +
                  param_4[0xc] + fVar5;
      fStack_294 = fStack_294 * param_4[5] + fVar23 + fStack_290 * param_4[9] + param_4[0xd] + fVar6
      ;
      fStack_290 = fVar28 + fVar24 + fStack_290 * param_4[10] + param_4[0xe] + fVar7;
      fStack_28c = fVar30 + fVar25 + fVar27 + param_4[0xf] + fVar8;
    }
    if (param_1 == (longlong *)0x0) {
      lVar19 = *DAT_146b84580;
      plVar15 = DAT_146b84580;
      uVar9 = DAT_146b846e8;
    }
    else {
      lVar19 = *param_1;
      plVar15 = param_1;
      uVar9 = param_2;
    }
    lVar13 = CONCAT44(uVar11,uVar9);
    uVar34 = CONCAT44(uVar37,*(undefined4 *)(lVar36 + 0x6c));
    (**(code **)(lVar19 + 200))(plVar15,local_2a8,0,local_1b8,&local_298,uVar34,lVar13);
    uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
  }
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,1,local_1ac & 0x3fffffff);
  }
LAB_1438dd499:
  uVar11 = (undefined4)((ulonglong)lVar13 >> 0x20);
  fVar23 = -1.0;
  if (*(char *)(lVar36 + 0x121) != '\0') {
    local_res18[0] = *pfVar22;
    hkaiNavMeshUtils::calcFaceNormal(&local_248,param_3,local_res18,&local_278);
    local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,1);
    fVar27 = fStack_274 * param_4[6];
    fVar28 = fStack_274 * param_4[7];
    fVar23 = local_278 * param_4[1];
    fVar24 = local_278 * param_4[2];
    fVar25 = local_278 * param_4[3];
    fStack_26c = fStack_270 * param_4[0xb];
    local_278 = fStack_274 * param_4[4] + local_278 * *param_4 + fStack_270 * param_4[8];
    fStack_274 = fStack_274 * param_4[5] + fVar23 + fStack_270 * param_4[9];
    fStack_270 = fVar27 + fVar24 + fStack_270 * param_4[10];
    fStack_26c = fVar28 + fVar25 + fStack_26c;
    if ((char)param_5 == '\0') {
      param_5._0_4_ = *pfVar22;
      FUN_1438523d0(param_3,&param_5,&local_298);
      param_5._0_4_ = (float)CONCAT31(param_5._1_3_,1);
      fVar28 = fStack_294 * param_4[6];
      fVar30 = fStack_294 * param_4[7];
      fVar23 = local_298 * param_4[1];
      fVar24 = local_298 * param_4[2];
      fVar25 = local_298 * param_4[3];
      fVar27 = fStack_290 * param_4[0xb];
      local_298 = fStack_294 * param_4[4] + local_298 * *param_4 + fStack_290 * param_4[8] +
                  param_4[0xc] + fVar5;
      fStack_294 = fStack_294 * param_4[5] + fVar23 + fStack_290 * param_4[9] + param_4[0xd] + fVar6
      ;
      fStack_290 = fVar28 + fVar24 + fStack_290 * param_4[10] + param_4[0xe] + fVar7;
      fStack_28c = fVar30 + fVar25 + fVar27 + param_4[0xf] + fVar8;
    }
    fVar23 = (float)FUN_1438db050(param_3,*pfVar22);
    fVar24 = fVar23 * *(float *)(lVar36 + 0x124);
    local_258 = fVar24 * local_278 + local_298;
    fStack_254 = fVar24 * fStack_274 + fStack_294;
    fStack_250 = fVar24 * fStack_270 + fStack_290;
    fStack_24c = fVar24 * fStack_26c + fStack_28c;
    if (param_1 == (longlong *)0x0) {
      lVar19 = *DAT_146b84580;
      plVar15 = DAT_146b84580;
      uVar9 = DAT_146b846e8;
    }
    else {
      lVar19 = *param_1;
      plVar15 = param_1;
      uVar9 = param_2;
    }
    lVar13 = CONCAT44(uVar11,uVar9);
    uVar34 = CONCAT44(uVar37,0xff0000ff);
    (**(code **)(lVar19 + 0xa0))(plVar15,local_2a8,0,&local_298,&local_258,uVar34,lVar13);
    uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
  }
  uVar11 = (undefined4)((ulonglong)lVar13 >> 0x20);
  if ((*(char *)(lVar36 + 0x131) != '\0') &&
     (*(float *)(lVar36 + 0x144) * fStack_274 + *(float *)(lVar36 + 0x140) * local_278 +
      *(float *)(lVar36 + 0x148) * fStack_270 < *(float *)(lVar36 + 0x138))) {
    if (local_res18[0]._0_1_ == '\0') {
      local_res18[0] = *pfVar22;
      hkaiNavMeshUtils::calcFaceNormal(&local_248,param_3,local_res18,&local_278);
      local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,1);
      fVar28 = fStack_274 * param_4[6];
      fVar30 = fStack_274 * param_4[7];
      fVar24 = local_278 * param_4[1];
      fVar25 = local_278 * param_4[2];
      fVar27 = local_278 * param_4[3];
      fStack_26c = fStack_270 * param_4[0xb];
      local_278 = fStack_274 * param_4[4] + local_278 * *param_4 + fStack_270 * param_4[8];
      fStack_274 = fStack_274 * param_4[5] + fVar24 + fStack_270 * param_4[9];
      fStack_270 = fVar28 + fVar25 + fStack_270 * param_4[10];
      fStack_26c = fVar30 + fVar27 + fStack_26c;
    }
    if ((char)param_5 == '\0') {
      param_5._0_4_ = *pfVar22;
      FUN_1438523d0(param_3,&param_5,&local_298);
      param_5._0_4_ = (float)CONCAT31(param_5._1_3_,1);
      fVar30 = fStack_294 * param_4[6];
      fVar31 = fStack_294 * param_4[7];
      fVar24 = local_298 * param_4[1];
      fVar25 = local_298 * param_4[2];
      fVar27 = local_298 * param_4[3];
      fVar28 = fStack_290 * param_4[0xb];
      local_298 = fStack_294 * param_4[4] + local_298 * *param_4 + fStack_290 * param_4[8] +
                  param_4[0xc] + fVar5;
      fStack_294 = fStack_294 * param_4[5] + fVar24 + fStack_290 * param_4[9] + param_4[0xd] + fVar6
      ;
      fStack_290 = fVar30 + fVar25 + fStack_290 * param_4[10] + param_4[0xe] + fVar7;
      fStack_28c = fVar31 + fVar27 + fVar28 + param_4[0xf] + fVar8;
    }
    local_258 = local_278 + local_298;
    fStack_254 = fStack_274 + fStack_294;
    fStack_250 = fStack_270 + fStack_290;
    fStack_24c = fStack_26c + fStack_28c;
    if (param_1 == (longlong *)0x0) {
      lVar19 = *DAT_146b84580;
      plVar15 = DAT_146b84580;
      uVar9 = DAT_146b846e8;
    }
    else {
      lVar19 = *param_1;
      plVar15 = param_1;
      uVar9 = param_2;
    }
    lVar13 = CONCAT44(uVar11,uVar9);
    uVar34 = CONCAT44(uVar37,0xff0000ff);
    (**(code **)(lVar19 + 0xa0))(plVar15,local_2a8,0,&local_298,&local_258,uVar34,lVar13);
    uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
  }
  if ((*(char *)(lVar36 + 0x21) != '\0') ||
     ((*(char *)(lVar36 + 0x48) != '\0' && ((bVar16 & 1) != 0)))) {
    pfVar35 = (float *)CONCAT44(uVar37,local_268);
    fVar24 = *(float *)(lVar36 + 0xd0) + fVar5;
    fVar25 = *(float *)(lVar36 + 0xd4) + fVar6;
    fVar27 = *(float *)(lVar36 + 0xd8) + fVar7;
    fVar28 = *(float *)(lVar36 + 0xdc) + fVar8;
    piVar12 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30),
                                   param_3 + 0xc0,param_3 + 0xe0,param_3 + 0x70,pfVar35);
    iVar1 = *(int *)(param_3 + 0x40);
    iVar2 = *piVar12;
    if (iVar2 < iVar1) {
      pfVar14 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_3 + 0x38));
    }
    else {
      pfVar14 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_3 + 0xf0));
    }
    iVar2 = piVar12[1];
    fVar30 = *pfVar14;
    fVar31 = pfVar14[1];
    fVar26 = pfVar14[2];
    if (iVar2 < iVar1) {
      pfVar14 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_3 + 0x38));
    }
    else {
      pfVar14 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_3 + 0xf0));
    }
    fVar29 = *pfVar14;
    fVar32 = pfVar14[1];
    fVar33 = pfVar14[2];
    local_2a8[0] = (short)local_288 + -1;
    local_208 = fVar30 * *param_4 + fVar31 * param_4[4] + fVar26 * param_4[8] + param_4[0xc] +
                fVar24;
    fStack_204 = fVar30 * param_4[1] + fVar31 * param_4[5] + fVar26 * param_4[9] + param_4[0xd] +
                 fVar25;
    fStack_200 = fVar30 * param_4[2] + fVar31 * param_4[6] + fVar26 * param_4[10] + param_4[0xe] +
                 fVar27;
    fStack_1fc = fVar30 * param_4[3] + fVar31 * param_4[7] + fVar26 * param_4[0xb] + param_4[0xf] +
                 fVar28;
    local_228 = fVar29 * *param_4 + fVar32 * param_4[4] + fVar33 * param_4[8] + param_4[0xc] +
                fVar24;
    fStack_224 = fVar29 * param_4[1] + fVar32 * param_4[5] + fVar33 * param_4[9] + param_4[0xd] +
                 fVar25;
    fStack_220 = fVar29 * param_4[2] + fVar32 * param_4[6] + fVar33 * param_4[10] + param_4[0xe] +
                 fVar27;
    fStack_21c = fVar29 * param_4[3] + fVar32 * param_4[7] + fVar33 * param_4[0xb] + param_4[0xf] +
                 fVar28;
    if (1 < local_2a8[0]) {
      do {
        uVar11 = param_7;
        uVar9 = (undefined4)(uVar40 >> 0x20);
        uVar37 = (undefined4)((ulonglong)lVar13 >> 0x20);
        uVar34 = CONCAT44((int)((ulonglong)pfVar35 >> 0x20),local_268 + iVar20);
        pfVar35 = (float *)(param_3 + 0x70);
        lVar13 = FUN_1437fb5b0(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30));
        iVar1 = *(int *)(lVar13 + 4);
        if (iVar1 < *(int *)(param_3 + 0x40)) {
          pfVar14 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(param_3 + 0x38));
        }
        else {
          pfVar14 = (float *)((longlong)(iVar1 - *(int *)(param_3 + 0x40)) * 0x10 +
                             *(longlong *)(param_3 + 0xf0));
        }
        fVar30 = *pfVar14;
        fVar31 = pfVar14[1];
        fVar26 = pfVar14[2];
        local_258 = fVar30 * *param_4 + fVar31 * param_4[4] + fVar26 * param_4[8] + param_4[0xc] +
                    fVar24;
        fStack_254 = fVar30 * param_4[1] + fVar31 * param_4[5] + fVar26 * param_4[9] + param_4[0xd]
                     + fVar25;
        fStack_250 = fVar30 * param_4[2] + fVar31 * param_4[6] + fVar26 * param_4[10] + param_4[0xe]
                     + fVar27;
        fStack_24c = fVar30 * param_4[3] + fVar31 * param_4[7] + fVar26 * param_4[0xb] +
                     param_4[0xf] + fVar28;
        if ((*(char *)(lVar36 + 0x23) != '\0') && (iVar20 != 1)) {
          if (param_1 == (longlong *)0x0) {
            puVar18 = local_1f4;
            lVar13 = *DAT_146b84580;
            plVar15 = DAT_146b84580;
            uVar21 = DAT_146b846e8;
          }
          else {
            lVar13 = *param_1;
            puVar18 = local_1f8;
            plVar15 = param_1;
            uVar21 = param_2;
          }
          uVar39 = CONCAT44(uVar37,uVar21);
          uVar34 = CONCAT44((int)((ulonglong)uVar34 >> 0x20),*(undefined4 *)(lVar36 + 100));
          pfVar35 = &local_228;
          (**(code **)(lVar13 + 0xa0))(plVar15,puVar18,0,&local_208,pfVar35,uVar34,uVar39);
          uVar37 = (undefined4)((ulonglong)uVar39 >> 0x20);
        }
        if (*(char *)(lVar36 + 0x120) == '\0') {
          if (*(char *)(lVar36 + 0x130) == '\0') {
            if (*(char *)(lVar36 + 0xb0) != '\0') {
              uVar11 = FUN_1438dbb10(uVar11,&local_208,&local_228,&local_258,lVar36 + 0xc0,uVar34);
            }
            goto LAB_1438ddc3c;
          }
          if (local_res18[0]._0_1_ == '\0') {
            local_res18[0] = *param_6;
            hkaiNavMeshUtils::calcFaceNormal(&local_1d8,param_3,local_res18,&local_278,pfVar35);
            local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,1);
            fVar29 = fStack_274 * param_4[6];
            fVar32 = fStack_274 * param_4[7];
            fVar30 = local_278 * param_4[1];
            fVar31 = local_278 * param_4[2];
            fVar26 = local_278 * param_4[3];
            fStack_26c = fStack_270 * param_4[0xb];
            local_278 = fStack_274 * param_4[4] + local_278 * *param_4 + fStack_270 * param_4[8];
            fStack_274 = fStack_274 * param_4[5] + fVar30 + fStack_270 * param_4[9];
            fStack_270 = fVar29 + fVar31 + fStack_270 * param_4[10];
            fStack_26c = fVar32 + fVar26 + fStack_26c;
          }
          uVar38 = (undefined4)((ulonglong)uVar34 >> 0x20);
          uVar21 = 0xff0000ff;
          uVar11 = 0xffffffff;
          if (*(float *)(lVar36 + 0x138) <=
              fStack_274 * *(float *)(lVar36 + 0x144) + local_278 * *(float *)(lVar36 + 0x140) +
              fStack_270 * *(float *)(lVar36 + 0x148)) goto LAB_1438ddc3c;
          if ((char)param_5 == '\0') {
            param_5._0_4_ = *param_6;
            FUN_1438523d0(param_3,&param_5,&local_298);
            param_5._0_4_ = (float)CONCAT31(param_5._1_3_,1);
            fVar32 = fStack_294 * param_4[6];
            fVar33 = fStack_294 * param_4[7];
            fVar30 = local_298 * param_4[1];
            fVar31 = local_298 * param_4[2];
            fVar26 = local_298 * param_4[3];
            fVar29 = fStack_290 * param_4[0xb];
            local_298 = fStack_294 * param_4[4] + local_298 * *param_4 + fStack_290 * param_4[8] +
                        param_4[0xc] + fVar5;
            fStack_294 = fStack_294 * param_4[5] + fVar30 + fStack_290 * param_4[9] + param_4[0xd] +
                         fVar6;
            fStack_290 = fVar32 + fVar31 + fStack_290 * param_4[10] + param_4[0xe] + fVar7;
            fStack_28c = fVar33 + fVar26 + fVar29 + param_4[0xf] + fVar8;
          }
          fVar30 = *(float *)(lVar36 + 0x134);
          local_248 = fVar30 * *(float *)(lVar36 + 0x140) + local_298;
          fStack_244 = fVar30 * *(float *)(lVar36 + 0x144) + fStack_294;
          fStack_240 = fVar30 * *(float *)(lVar36 + 0x148) + fStack_290;
          fStack_23c = fVar30 * *(float *)(lVar36 + 0x14c) + fStack_28c;
          if (param_1 != (longlong *)0x0) {
            uVar34 = CONCAT44(uVar37,param_2);
            (**(code **)(*param_1 + 0xa0))
                      (param_1,local_1f0,0,&local_298,&local_248,CONCAT44(uVar38,0xff0000ff),uVar34)
            ;
            uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
            uVar11 = uVar21;
            goto LAB_1438ddc3c;
          }
          uVar34 = CONCAT44(uVar37,DAT_146b846e8);
          (**(code **)(*DAT_146b84580 + 0xa0))
                    (DAT_146b84580,local_1ec,0,&local_298,&local_248,CONCAT44(uVar38,0xff0000ff),
                     uVar34);
          uVar37 = (undefined4)((ulonglong)uVar34 >> 0x20);
LAB_1438ddb70:
          uVar40 = CONCAT44(uVar9,DAT_146b846e8);
          pfVar35 = &local_258;
          lVar13 = CONCAT44(uVar37,uVar21);
          (**(code **)(*DAT_146b84580 + 0xb0))
                    (DAT_146b84580,local_218,0,&local_208,&local_228,pfVar35,lVar13,uVar40);
        }
        else {
          if (fVar23 == -1.0) {
            fVar23 = (float)FUN_1438db050(param_3,*pfVar22);
          }
          local_288 = 0;
          local_280[0] = fVar23 / *(float *)(lVar36 + 0x124);
          local_238 = 0x3f800000;
          fVar30 = local_280[0];
          if (local_280[0] <= 0.0) {
            fVar30 = 0.0;
          }
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          uVar11 = FUN_14375fd30(1.0 - fVar30,1.0 - fVar30,0x3f800000,0x3f800000);
LAB_1438ddc3c:
          uVar21 = uVar11;
          if (param_1 == (longlong *)0x0) goto LAB_1438ddb70;
          uVar40 = CONCAT44(uVar9,param_2);
          pfVar35 = &local_258;
          lVar13 = CONCAT44(uVar37,uVar11);
          (**(code **)(*param_1 + 0xb0))
                    (param_1,local_1e8,0,&local_208,&local_228,pfVar35,lVar13,uVar40);
        }
        iVar20 = iVar20 + 1;
        local_228 = local_258;
        fStack_224 = fStack_254;
        fStack_220 = fStack_250;
        fStack_21c = fStack_24c;
        pfVar22 = param_6;
      } while (iVar20 < local_2a8[0]);
    }
  }
  return;
}



// FUNCTION 1438ddc90 FUN_1438ddc90 body=322 status=ok
// SIG undefined FUN_1438ddc90(void)

void FUN_1438ddc90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000048;
  longlong *in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined1 *local_28;
  uint local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  uVar2 = FUN_1438de830();
  local_20 = 0;
  local_28 = local_18;
  local_1c = 0x80000001;
  uVar3 = FUN_143703a50();
  if (local_20 == (local_1c & 0x3fffffff)) {
    FUN_14370c460(uVar3,&local_28,8);
  }
  *(undefined8 *)(local_28 + (longlong)(int)local_20 * 8) = uVar2;
  local_20 = local_20 + 1;
  plVar4 = DAT_146b84580;
  uVar1 = DAT_146b846e8;
  if (in_stack_00000058 != (longlong *)0x0) {
    plVar4 = in_stack_00000058;
    uVar1 = in_stack_00000060;
  }
  (**(code **)(*plVar4 + 0xf0))
            (plVar4,&stack0x00000058,0,&local_28,&DAT_1467f0890,
             CONCAT44(in_stack_00000030._4_4_,
                      in_stack_00000048 >> 1 & 0x7f000000 | in_stack_00000048 & 0xffffff),
             CONCAT44(in_stack_00000038._4_4_,uVar1),in_stack_00000040);
  FUN_14370c150(uVar2);
  uVar2 = FUN_143703a50();
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar2,local_28,8,local_1c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438ddde0 FUN_1438ddde0 body=1638 status=ok
// SIG undefined FUN_1438ddde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ddde0(ulonglong param_1,float *param_2,uint param_3,uint param_4,longlong *param_5,
                  undefined4 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
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
  longlong lVar16;
  undefined4 *puVar17;
  int *piVar18;
  uint uVar19;
  float *pfVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  ulonglong local_res8;
  undefined8 in_stack_fffffffffffffde0;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar28;
  undefined8 uVar27;
  undefined8 local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  longlong local_1c8 [2];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined1 local_158 [128];
  undefined1 *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8 [144];
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  uVar24 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffde0 >> 0x20),param_4) &
           0xffffffff003fffff;
  lVar22 = *(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
  lVar3 = *(longlong *)(lVar22 + 0x18);
  local_res8 = param_1;
  local_1c8[0] = lVar22;
  lVar16 = FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),lVar3 + 0xc0,
                         lVar3 + 0xe0,lVar3 + 0x70,uVar24);
  uVar26 = (undefined4)(uVar24 >> 0x20);
  if (*(int *)(lVar3 + 0x60) == 0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    uVar25 = CONCAT44(uVar28,*(int *)(lVar3 + 0x60));
    uVar24 = CONCAT44(uVar26,param_4) & 0xffffffff003fffff;
    puVar17 = (undefined4 *)
              FUN_1438360c0(*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x30),
                            lVar3 + 0x130,lVar3 + 0x150,lVar3 + 0x70,uVar24,uVar25);
    uVar28 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar26 = (undefined4)(uVar24 >> 0x20);
  }
  if (*(int *)(lVar16 + 8) == -1) {
    return;
  }
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  uVar24 = CONCAT44(uVar26,param_4) & 0xffffffff003fffff;
  piVar18 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                 lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,uVar24);
  uVar26 = (undefined4)(uVar24 >> 0x20);
  iVar23 = *(int *)(lVar3 + 0x40);
  iVar1 = *piVar18;
  if (iVar1 < iVar23) {
    pfVar20 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar20 = (float *)((longlong)(iVar1 - iVar23) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  iVar1 = piVar18[1];
  fVar15 = *pfVar20;
  fVar8 = pfVar20[1];
  fVar9 = pfVar20[2];
  if (iVar1 < iVar23) {
    pfVar20 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar20 = (float *)((longlong)(iVar1 - iVar23) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar10 = *pfVar20;
  fVar11 = pfVar20[1];
  fVar12 = pfVar20[2];
  local_1b8 = fVar8 * *(float *)(lVar22 + 0x50) + fVar15 * *(float *)(lVar22 + 0x40) +
              fVar9 * *(float *)(lVar22 + 0x60) + *(float *)(lVar22 + 0x70) + fVar4;
  fStack_1b4 = fVar8 * *(float *)(lVar22 + 0x54) + fVar15 * *(float *)(lVar22 + 0x44) +
               fVar9 * *(float *)(lVar22 + 100) + *(float *)(lVar22 + 0x74) + fVar5;
  fStack_1b0 = fVar8 * *(float *)(lVar22 + 0x58) + fVar15 * *(float *)(lVar22 + 0x48) +
               fVar9 * *(float *)(lVar22 + 0x68) + *(float *)(lVar22 + 0x78) + fVar6;
  fStack_1ac = fVar8 * *(float *)(lVar22 + 0x5c) + fVar15 * *(float *)(lVar22 + 0x4c) +
               fVar9 * *(float *)(lVar22 + 0x6c) + *(float *)(lVar22 + 0x7c) + fVar7;
  local_198 = fVar11 * *(float *)(lVar22 + 0x50) + fVar10 * *(float *)(lVar22 + 0x40) +
              fVar12 * *(float *)(lVar22 + 0x60) + *(float *)(lVar22 + 0x70) + fVar4;
  fStack_194 = fVar11 * *(float *)(lVar22 + 0x54) + fVar10 * *(float *)(lVar22 + 0x44) +
               fVar12 * *(float *)(lVar22 + 100) + *(float *)(lVar22 + 0x74) + fVar5;
  fStack_190 = fVar11 * *(float *)(lVar22 + 0x58) + fVar10 * *(float *)(lVar22 + 0x48) +
               fVar12 * *(float *)(lVar22 + 0x68) + *(float *)(lVar22 + 0x78) + fVar6;
  fStack_18c = fVar11 * *(float *)(lVar22 + 0x5c) + fVar10 * *(float *)(lVar22 + 0x4c) +
               fVar12 * *(float *)(lVar22 + 0x6c) + *(float *)(lVar22 + 0x7c) + fVar7;
  iVar23 = 1;
  if ((*(char *)(param_2 + 10) != '\0') || (*(char *)((longlong)param_2 + 0x49) != '\0')) {
    local_15c = 0x80000080;
    local_160 = 1;
    local_168 = local_158;
    local_158[0] = 0;
    local_1d8 = (local_198 - local_1b8) * _DAT_1467f07e0 + local_1b8;
    fStack_1d4 = (fStack_194 - fStack_1b4) * fRam00000001467f07e4 + fStack_1b4;
    fStack_1d0 = (fStack_190 - fStack_1b0) * fRam00000001467f07e8 + fStack_1b0;
    fStack_1cc = (fStack_18c - fStack_1ac) * fRam00000001467f07ec + fStack_1ac;
    if (*(char *)(param_2 + 10) != '\0') {
      hkStringBuf::printf((char *)&local_168,&DAT_145c5769c,(ulonglong)(param_4 & 0x3fffff));
    }
    if ((*(char *)((longlong)param_2 + 0x49) != '\0') && (puVar17 != (undefined4 *)0x0)) {
      local_d8 = local_c8;
      local_cc = 0x80000080;
      local_d0 = 1;
      local_c8[0] = 0;
      FUN_1438de760(&local_d8,puVar17,*(undefined4 *)(*(longlong *)(local_1c8[0] + 0x18) + 0x60));
      FUN_143745630(&local_168,local_d8);
      local_d0 = 0;
      if (-1 < (int)local_cc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
      }
    }
    if (param_5 == (longlong *)0x0) {
      lVar22 = *DAT_146b84580;
      plVar21 = DAT_146b84580;
      uVar14 = DAT_146b846e8;
    }
    else {
      lVar22 = *param_5;
      plVar21 = param_5;
      uVar14 = param_6;
    }
    uVar27 = CONCAT44(uVar28,uVar14);
    uVar25 = CONCAT44(uVar26,param_2[0x1c]);
    (**(code **)(lVar22 + 200))(plVar21,&local_1e8,0,local_168,&local_1d8,uVar25,uVar27);
    uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
    uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
    local_160 = 0;
    if (-1 < (int)local_15c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_168,1,local_15c & 0x3fffffff);
    }
  }
  lVar22 = local_1c8[0];
  if (*(char *)(param_2 + 9) == '\0') {
    return;
  }
  lVar3 = *(longlong *)(local_1c8[0] + 0x18);
  uVar19 = *(uint *)(lVar3 + 0x17c);
  if ((*(byte *)(lVar16 + 0x10) & 0x40) != 0) {
    uVar19 = *(uint *)(lVar16 + 8) >> 0x16;
  }
  if (*(uint *)(lVar16 + 8) == 0xffffffff) {
    uVar19 = 0xffffffff;
  }
  local_1e8 = *(longlong *)((longlong)(int)uVar19 * 0x100 + *(longlong *)(local_res8 + 0x38));
  if ((*(char *)(param_2 + 0x13) == '\0') || (*(int *)(lVar3 + 0x60) < 1)) {
    fVar15 = param_2[0x18];
  }
  else {
    fVar15 = (float)hkColor::getPaletteColor(*puVar17,CONCAT71((int7)((ulonglong)lVar3 >> 8),0x7f));
  }
  uVar19 = *(uint *)(lVar16 + 8);
  if (((*(byte *)(lVar16 + 0x10) & 0x40) == 0) && (uVar19 != 0xffffffff)) {
    uVar19 = *(int *)(*(longlong *)(lVar22 + 0x18) + 0x17c) << 0x16 | uVar19 & 0x3fffff;
  }
  if ((local_1e8 == 0) || (param_4 < uVar19)) {
    if (param_5 == (longlong *)0x0) {
      uVar27 = CONCAT44(uVar28,DAT_146b846e8);
      uVar25 = CONCAT44(uVar26,fVar15);
      (**(code **)(*DAT_146b84580 + 0xa0))
                (DAT_146b84580,&local_res8,0,&local_1b8,&local_198,uVar25,uVar27);
      uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
      uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
    }
    else {
      uVar27 = CONCAT44(uVar28,param_6);
      uVar25 = CONCAT44(uVar26,fVar15);
      (**(code **)(*param_5 + 0xa0))(param_5,&local_res8,0,&local_1b8,&local_198,uVar25,uVar27);
      uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
      uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
    }
  }
  if (local_1e8 == 0) {
    return;
  }
  if (uVar19 <= param_4) {
    return;
  }
  lVar22 = *(longlong *)(local_1e8 + 0x18);
  piVar18 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar22 + 0x28),*(undefined4 *)(lVar22 + 0x30),
                                 lVar22 + 0xc0,lVar22 + 0xe0,lVar22 + 0x70,
                                 CONCAT44(uVar26,*(undefined4 *)(lVar16 + 8)) & 0xffffffff003fffff);
  lVar3 = local_1e8;
  iVar1 = *(int *)(lVar22 + 0x40);
  iVar2 = *piVar18;
  if (iVar2 < iVar1) {
    pfVar20 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar22 + 0x38));
  }
  else {
    pfVar20 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar22 + 0xf0));
  }
  iVar2 = piVar18[1];
  fVar8 = *pfVar20;
  fVar9 = pfVar20[1];
  fVar10 = pfVar20[2];
  if (iVar2 < iVar1) {
    pfVar20 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar22 + 0x38));
  }
  else {
    pfVar20 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar22 + 0xf0));
  }
  fVar11 = *pfVar20;
  fVar12 = pfVar20[1];
  fVar13 = pfVar20[2];
  local_1d8 = fVar9 * *(float *)(local_1e8 + 0x50) + fVar8 * *(float *)(local_1e8 + 0x40) +
              fVar10 * *(float *)(local_1e8 + 0x60) + *(float *)(local_1e8 + 0x70) + fVar4;
  fStack_1d4 = fVar9 * *(float *)(local_1e8 + 0x54) + fVar8 * *(float *)(local_1e8 + 0x44) +
               fVar10 * *(float *)(local_1e8 + 100) + *(float *)(local_1e8 + 0x74) + fVar5;
  fStack_1d0 = fVar9 * *(float *)(local_1e8 + 0x58) + fVar8 * *(float *)(local_1e8 + 0x48) +
               fVar10 * *(float *)(local_1e8 + 0x68) + *(float *)(local_1e8 + 0x78) + fVar6;
  fStack_1cc = fVar9 * *(float *)(local_1e8 + 0x5c) + fVar8 * *(float *)(local_1e8 + 0x4c) +
               fVar10 * *(float *)(local_1e8 + 0x6c) + *(float *)(local_1e8 + 0x7c) + fVar7;
  local_1a8 = fVar12 * *(float *)(local_1e8 + 0x50) + fVar11 * *(float *)(local_1e8 + 0x40) +
              fVar13 * *(float *)(local_1e8 + 0x60) + *(float *)(local_1e8 + 0x70) + fVar4;
  fStack_1a4 = fVar12 * *(float *)(local_1e8 + 0x54) + fVar11 * *(float *)(local_1e8 + 0x44) +
               fVar13 * *(float *)(local_1e8 + 100) + *(float *)(local_1e8 + 0x74) + fVar5;
  fStack_1a0 = fVar12 * *(float *)(local_1e8 + 0x58) + fVar11 * *(float *)(local_1e8 + 0x48) +
               fVar13 * *(float *)(local_1e8 + 0x68) + *(float *)(local_1e8 + 0x78) + fVar6;
  fStack_19c = fVar12 * *(float *)(local_1e8 + 0x5c) + fVar11 * *(float *)(local_1e8 + 0x4c) +
               fVar13 * *(float *)(local_1e8 + 0x6c) + *(float *)(local_1e8 + 0x7c) + fVar7;
  if (*(int *)(lVar16 + 8) != -1) {
    local_res8 = CONCAT44(local_res8._4_4_,1);
    if ((*(byte *)(lVar16 + 0x10) & 0x20) == 0) goto LAB_1438de314;
  }
  local_res8 = local_res8 & 0xffffffff00000000;
LAB_1438de314:
  if ((piVar18[2] == -1) || ((*(byte *)(piVar18 + 4) & 0x20) != 0)) {
    iVar23 = 0;
  }
  if (param_5 == (longlong *)0x0) {
    (**(code **)(*DAT_146b84580 + 0xa0))
              (DAT_146b84580,&local_1e8,0,&local_1d8,&local_1a8,fVar15,
               CONCAT44(uVar28,DAT_146b846e8));
  }
  else {
    (**(code **)(*param_5 + 0xa0))
              (param_5,&local_1e8,0,&local_1d8,&local_1a8,fVar15,CONCAT44(uVar28,param_6));
  }
  local_1e8 = CONCAT44(local_1e8._4_4_,param_3) & 0xffffffff003fffff;
  FUN_143852420(local_1c8,local_1c8[0],&local_1e8,local_178);
  local_1e8 = CONCAT44(local_1e8._4_4_,*(undefined4 *)(lVar16 + 0xc)) & 0xffffffff003fffff;
  FUN_143852420(local_1c8,lVar3,&local_1e8,local_188);
  if (((uint)local_res8 != 0) || (iVar23 != 0)) {
    FUN_1438ddc90((uint)local_res8 & 0xff,iVar23,&local_1b8,&local_198,&local_1d8,&local_1a8,
                  local_178,local_188,fVar15,param_2,param_5,param_6);
  }
  return;
}



// FUNCTION 1438de450 FUN_1438de450 body=311 status=ok
// SIG undefined FUN_1438de450(void)

void FUN_1438de450(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,uint *param_6)

{
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_4 + 0x18);
  lVar2 = FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),lVar2 + 0xb0,
                        lVar2 + 0xd0,lVar2 + 0x90,*param_6);
  if (*(short *)(lVar2 + 10) != 0) {
    pvVar3 = TlsGetValue(DAT_146b8198c);
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar3,"TtuserEdges");
    }
    uVar4 = *(uint *)(lVar2 + 4);
    if ((int)uVar4 < (int)((int)*(short *)(lVar2 + 10) + uVar4)) {
      do {
        iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x17c);
        FUN_1438ddde0(param_3,param_5,iVar1 << 0x16 | *param_6,iVar1 << 0x16 | uVar4,param_1,param_2
                     );
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)*(short *)(lVar2 + 10) + *(int *)(lVar2 + 4));
    }
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d750(pvVar3,&DAT_145b8eda0);
    }
  }
  return;
}



// FUNCTION 1438de590 FUN_1438de590 body=459 status=ok
// SIG undefined FUN_1438de590(void)

void FUN_1438de590(longlong param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  uint local_res8 [2];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  uVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x20) + 3 +
          *(int *)(*(longlong *)(param_1 + 0x18) + 0xd8) & 0xfffffffc;
  uVar3 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar8) {
    uVar3 = uVar3 * 2;
    uVar2 = uVar8;
    if ((int)uVar8 < (int)uVar3) {
      uVar2 = uVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0640,param_3,uVar2,8);
  }
  *(uint *)(param_3 + 1) = uVar8;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xd8) +
          *(int *)(*(longlong *)(param_1 + 0x18) + 0x20);
  for (lVar5 = (longlong)iVar6; lVar5 < (int)uVar8; lVar5 = lVar5 + 1) {
    lVar1 = *param_3;
    *(int *)(lVar1 + 4 + lVar5 * 8) = iVar6;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(lVar1 + lVar5 * 8) = 0x7fffffff;
  }
  uVar4 = 0;
  uVar7 = uVar4;
  uVar9 = uVar4;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0xd8) +
          *(int *)(*(longlong *)(param_1 + 0x18) + 0x20)) {
    do {
      uVar3 = (uint)uVar7;
      local_res8[0] = uVar3;
      FUN_143852380(param_1,local_res8,&local_38);
      local_38 = local_38 + *param_2;
      fStack_34 = fStack_34 + param_2[1];
      fStack_30 = fStack_30 + param_2[2];
      fStack_2c = fStack_2c + param_2[3];
      lVar5 = *param_3;
      *(uint *)(uVar9 + 4 + lVar5) = uVar3;
      fVar10 = fStack_34 * param_2[0x29] + local_38 * param_2[0x28] + fStack_30 * param_2[0x2a];
      *(uint *)(uVar9 + lVar5) = (((int)fVar10 >> 0x1f | 0x80000001U) ^ (uint)fVar10) >> 1;
      uVar7 = (ulonglong)(uVar3 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar3 + 1) <
             *(int *)(*(longlong *)(param_1 + 0x18) + 0xd8) +
             *(int *)(*(longlong *)(param_1 + 0x18) + 0x20));
  }
  local_res8[0] = uVar8;
  if (uVar8 != 0) {
    uVar4 = FUN_143702d60(&PTR_vftable_1467f0640,8,local_res8);
  }
  uVar3 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar3 = local_res8[0];
  }
  FUN_1437fa490(*param_3,uVar8,uVar4);
  if (-1 < (int)uVar3) {
    FUN_143702e10(&PTR_vftable_1467f0640,uVar4,8,uVar3 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438de760 FUN_1438de760 body=201 status=ok
// SIG undefined FUN_1438de760(void)

void FUN_1438de760(char *param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  
  if (0 < param_3) {
    uVar2 = 0;
    uVar1 = uVar2;
    do {
      if (param_2[uVar1] != 0) {
        if (param_3 != 1) {
          FUN_1437455a0(param_1,&DAT_145b4dda8);
          uVar1 = uVar2;
          do {
            puVar3 = &DAT_145b036e8;
            if ((int)uVar1 == param_3 + -1) {
              puVar3 = &DAT_145b18618;
            }
            hkStringBuf::printf(param_1,&DAT_145c57660,(ulonglong)(uint)param_2[uVar2],puVar3);
            uVar1 = (ulonglong)((int)uVar1 + 1);
            uVar2 = uVar2 + 1;
          } while ((longlong)uVar2 < (longlong)param_3);
          return;
        }
        if (*param_2 == 0) {
          return;
        }
        hkStringBuf::printf(param_1,&DAT_145b9f048);
        return;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)param_3);
  }
  return;
}



// FUNCTION 1438de830 FUN_1438de830 body=1728 status=ok
// SIG undefined FUN_1438de830(void)

ulonglong FUN_1438de830(char param_1,char param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  LPVOID pvVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
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
  float *local_98;
  undefined4 local_90;
  uint local_8c;
  float *local_88;
  int local_80;
  uint local_7c;
  
  pvVar14 = TlsGetValue(DAT_146b7bf70);
  if (pvVar14 == (LPVOID)0x0) {
    pvVar14 = DAT_146b7bf68;
  }
  lVar15 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar14 + 0x58),0x80);
  uVar22 = 0;
  uVar16 = uVar22;
  if (lVar15 != 0) {
    uVar16 = FUN_143791790(lVar15);
  }
  local_88 = (float *)0x0;
  local_80 = 0;
  local_7c = 0x80000000;
  local_98 = (float *)0x0;
  local_90 = 0;
  local_8c = 0x80000000;
  FUN_1438db980(param_3,param_6,param_7,param_8,&local_88);
  FUN_1438db980(param_4,param_5,param_7,param_8,&local_98);
  iVar12 = local_80;
  lVar15 = (longlong)local_80;
  iVar13 = local_80 + -1;
  if (0 < (longlong)iVar13) {
    lVar21 = 0;
    do {
      if ((lVar21 == 0) && (param_2 != '\0')) {
        fVar27 = (*local_98 - *local_88) * 0.5 + *local_88;
        fVar29 = (local_98[1] - local_88[1]) * 0.5 + local_88[1];
        fVar31 = (local_98[2] - local_88[2]) * 0.5 + local_88[2];
        fVar33 = (local_98[3] - local_88[3]) * 0.5 + local_88[3];
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = local_88;
        pfVar18 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar18 = fVar27;
        pfVar18[1] = fVar29;
        pfVar18[2] = fVar31;
        pfVar18[3] = fVar33;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar18 = local_88;
        fVar23 = pfVar20[5];
        fVar24 = pfVar20[6];
        fVar25 = pfVar20[7];
        pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar19 = pfVar20[4];
        pfVar19[1] = fVar23;
        pfVar19[2] = fVar24;
        pfVar19[3] = fVar25;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = local_98;
        fVar23 = pfVar18[5];
        fVar24 = pfVar18[6];
        fVar25 = pfVar18[7];
        pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar19 = pfVar18[4];
        pfVar19[1] = fVar23;
        pfVar19[2] = fVar24;
        pfVar19[3] = fVar25;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar18 = local_98;
        fVar23 = pfVar20[5];
        fVar24 = pfVar20[6];
        fVar25 = pfVar20[7];
        pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar19 = pfVar20[4];
        pfVar19[1] = fVar23;
        pfVar19[2] = fVar24;
        pfVar19[3] = fVar25;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        fVar23 = pfVar18[4];
        fVar24 = pfVar18[5];
        fVar25 = pfVar18[6];
        fVar26 = pfVar18[7];
LAB_1438dea90:
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = fVar23;
        pfVar20[1] = fVar24;
        pfVar20[2] = fVar25;
        pfVar20[3] = fVar26;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = fVar27;
        pfVar20[1] = fVar29;
        pfVar20[2] = fVar31;
        pfVar20[3] = fVar33;
LAB_1438dee1f:
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
      }
      else {
        if (((int)uVar22 == iVar12 + -2) && (param_1 != '\0')) {
          pfVar20 = local_88 + lVar15 * 4 + -4;
          pfVar18 = local_98 + lVar15 * 4 + -4;
          fVar27 = (*pfVar18 - *pfVar20) * 0.5 + *pfVar20;
          fVar29 = (pfVar18[1] - pfVar20[1]) * 0.5 + pfVar20[1];
          fVar31 = (pfVar18[2] - pfVar20[2]) * 0.5 + pfVar20[2];
          fVar33 = (pfVar18[3] - pfVar20[3]) * 0.5 + pfVar20[3];
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar20 = local_88;
          lVar3 = lVar15 + -2;
          pfVar18 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar18 = fVar27;
          pfVar18[1] = fVar29;
          pfVar18[2] = fVar31;
          pfVar18[3] = fVar33;
          *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar18 = local_88;
          pfVar20 = pfVar20 + lVar3 * 4;
          fVar23 = pfVar20[1];
          fVar24 = pfVar20[2];
          fVar25 = pfVar20[3];
          pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar19 = *pfVar20;
          pfVar19[1] = fVar23;
          pfVar19[2] = fVar24;
          pfVar19[3] = fVar25;
          *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar20 = local_98;
          pfVar18 = pfVar18 + lVar3 * 4;
          fVar23 = pfVar18[1];
          fVar24 = pfVar18[2];
          fVar25 = pfVar18[3];
          pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar19 = *pfVar18;
          pfVar19[1] = fVar23;
          pfVar19[2] = fVar24;
          pfVar19[3] = fVar25;
          *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar18 = local_98;
          pfVar20 = pfVar20 + lVar3 * 4;
          fVar23 = pfVar20[1];
          fVar24 = pfVar20[2];
          fVar25 = pfVar20[3];
          pfVar19 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar19 = *pfVar20;
          pfVar19[1] = fVar23;
          pfVar19[2] = fVar24;
          pfVar19[3] = fVar25;
          *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar18 = pfVar18 + lVar3 * 4;
          fVar23 = *pfVar18;
          fVar24 = pfVar18[1];
          fVar25 = pfVar18[2];
          fVar26 = pfVar18[3];
          goto LAB_1438dea90;
        }
        lVar3 = lVar21 + 1;
        pfVar20 = local_88 + lVar3 * 4;
        fVar27 = *pfVar20;
        fVar29 = pfVar20[1];
        fVar31 = pfVar20[2];
        fVar33 = pfVar20[3];
        pfVar20 = local_98 + lVar3 * 4;
        fVar23 = *pfVar20;
        fVar24 = pfVar20[1];
        fVar25 = pfVar20[2];
        fVar26 = pfVar20[3];
        pfVar20 = local_98 + lVar3 * 4;
        fVar4 = *pfVar20;
        fVar5 = pfVar20[1];
        fVar6 = pfVar20[2];
        fVar7 = pfVar20[3];
        pfVar20 = local_98 + lVar21 * 4;
        pfVar18 = local_88 + lVar21 * 4;
        pfVar19 = local_88 + lVar21 * 4;
        pfVar1 = local_98 + lVar21 * 4;
        pfVar2 = local_98 + lVar3 * 4;
        fVar8 = *pfVar2;
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        pfVar2 = local_88 + lVar21 * 4;
        fVar28 = (*pfVar20 - *pfVar18) * 0.25 + *pfVar2;
        fVar30 = (pfVar20[1] - pfVar18[1]) * 0.25 + pfVar2[1];
        fVar32 = (pfVar20[2] - pfVar18[2]) * 0.25 + pfVar2[2];
        fVar34 = (pfVar20[3] - pfVar18[3]) * 0.25 + pfVar2[3];
        pfVar20 = local_98 + lVar21 * 4;
        fVar35 = (*pfVar19 - *pfVar1) * 0.25 + *pfVar20;
        fVar36 = (pfVar19[1] - pfVar1[1]) * 0.25 + pfVar20[1];
        fVar37 = (pfVar19[2] - pfVar1[2]) * 0.25 + pfVar20[2];
        fVar38 = (pfVar19[3] - pfVar1[3]) * 0.25 + pfVar20[3];
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = fVar28;
        pfVar20[1] = fVar30;
        pfVar20[2] = fVar32;
        pfVar20[3] = fVar34;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = (fVar23 - fVar27) * 0.25 + fVar27;
        pfVar20[1] = (fVar24 - fVar29) * 0.25 + fVar29;
        pfVar20[2] = (fVar25 - fVar31) * 0.25 + fVar31;
        pfVar20[3] = (fVar26 - fVar33) * 0.25 + fVar33;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = fVar35;
        pfVar20[1] = fVar36;
        pfVar20[2] = fVar37;
        pfVar20[3] = fVar38;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        uVar17 = FUN_143703a50();
        if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
          FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
        }
        pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 + *(longlong *)(uVar16 + 0x70))
        ;
        *pfVar20 = (fVar27 - fVar4) * 0.25 + fVar8;
        pfVar20[1] = (fVar29 - fVar5) * 0.25 + fVar9;
        pfVar20[2] = (fVar31 - fVar6) * 0.25 + fVar10;
        pfVar20[3] = (fVar33 - fVar7) * 0.25 + fVar11;
        *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
        if (0 < lVar21) {
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar20 = fVar28;
          pfVar20[1] = fVar30;
          pfVar20[2] = fVar32;
          pfVar20[3] = fVar34;
          *(int *)(uVar16 + 0x78) = *(int *)(uVar16 + 0x78) + 1;
          uVar17 = FUN_143703a50();
          if (*(uint *)(uVar16 + 0x78) == (*(uint *)(uVar16 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar17,uVar16 + 0x70,0x10);
          }
          pfVar20 = (float *)((longlong)*(int *)(uVar16 + 0x78) * 0x10 +
                             *(longlong *)(uVar16 + 0x70));
          *pfVar20 = fVar35;
          pfVar20[1] = fVar36;
          pfVar20[2] = fVar37;
          pfVar20[3] = fVar38;
          goto LAB_1438dee1f;
        }
      }
      uVar22 = (ulonglong)((int)uVar22 + 1);
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar13);
  }
  uVar17 = FUN_143703a50();
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(uVar17,local_98,0x10,local_8c & 0x3fffffff);
  }
  local_98 = (float *)0x0;
  local_8c = 0x80000000;
  uVar17 = FUN_143703a50();
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(uVar17,local_88,0x10,local_7c & 0x3fffffff);
  }
  return uVar16;
}



// FUNCTION 1438deef0 FUN_1438deef0 body=195 status=ok
// SIG undefined FUN_1438deef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438deef0(uint param_1,undefined4 param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined4 local_res20;
  undefined4 local_res24;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_res20 = param_2;
  local_res24 = param_2;
  FUN_143761700(&local_res20,&local_28);
  auVar1._0_4_ = param_3 * local_28 + (float)(param_1 >> 0x10 & 0xff) * 0.003921569;
  auVar1._4_4_ = param_3 * fStack_24 + (float)(param_1 >> 8 & 0xff) * 0.003921569;
  auVar1._8_4_ = param_3 * fStack_20 + (float)(param_1 & 0xff) * 0.003921569;
  auVar1._12_4_ = param_3 * fStack_1c + 0.0;
  auVar1 = maxps(ZEXT816(0),auVar1);
  minps(_DAT_1467f06f0,auVar1);
  FUN_14375fd30();
  return;
}



// FUNCTION 1438defc0 FUN_1438defc0 body=54 status=ok
// SIG undefined FUN_1438defc0(void)

undefined1 FUN_1438defc0(longlong param_1)

{
  if (((((*(char *)(param_1 + 0x22) == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) &&
       (*(char *)(param_1 + 0x25) == '\0')) &&
      ((*(char *)(param_1 + 0x27) == '\0' && (*(char *)(param_1 + 0x28) == '\0')))) &&
     ((*(char *)(param_1 + 0x49) == '\0' &&
      ((*(char *)(param_1 + 0x2a) == '\0' && (*(char *)(param_1 + 0x2b) == '\0')))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1438df000 FUN_1438df000 body=54 status=ok
// SIG undefined FUN_1438df000(void)

undefined1 FUN_1438df000(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x21) == '\0') && (*(char *)(param_1 + 0x26) == '\0')) &&
      (*(char *)(param_1 + 0x29) == '\0')) &&
     (((*(char *)(param_1 + 0x4a) == '\0' && (*(char *)(param_1 + 0x121) == '\0')) &&
      ((*(char *)(param_1 + 0x131) == '\0' && (*(char *)(param_1 + 0x48) == '\0')))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1438df040 FUN_1438df040 body=18 status=ok
// SIG undefined FUN_1438df040(void)

undefined1 FUN_1438df040(longlong param_1)

{
  if ((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1438df060 FUN_1438df060 body=985 status=ok
// SIG undefined FUN_1438df060(void)

void FUN_1438df060(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int local_c4;
  longlong local_c0;
  int local_b8;
  uint local_b4;
  int local_b0;
  longlong local_a8;
  undefined4 local_a0;
  int local_9c;
  longlong *local_98;
  longlong local_90;
  LPVOID local_88;
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
  
  cVar5 = FUN_1438df000(param_3);
  cVar6 = FUN_1438defc0(param_3);
  cVar7 = FUN_1438df040(param_3);
  if ((((cVar5 != '\0') || (cVar6 != '\0')) || (cVar7 != '\0')) &&
     (local_b0 = 0, 0 < *(int *)(param_4 + 0x40))) {
    do {
      iVar12 = local_b0;
      iVar15 = 0;
      if (((*(int *)(param_3 + 0x220) <= local_b0) ||
          ((*(uint *)(*(longlong *)(param_3 + 0x210) + ((longlong)local_b0 >> 5) * 4) >>
            ((byte)local_b0 & 0x1f) & 1) != 0)) &&
         (lVar14 = *(longlong *)((longlong)local_b0 * 0x100 + *(longlong *)(param_4 + 0x38)),
         lVar14 != 0)) {
        local_78 = *(undefined8 *)(lVar14 + 0x40);
        uStack_70 = *(undefined8 *)(lVar14 + 0x48);
        lVar1 = *(longlong *)(lVar14 + 0x18);
        local_68 = *(undefined8 *)(lVar14 + 0x50);
        uStack_60 = *(undefined8 *)(lVar14 + 0x58);
        local_58 = *(undefined4 *)(lVar14 + 0x60);
        uStack_54 = *(undefined4 *)(lVar14 + 100);
        uStack_50 = *(undefined4 *)(lVar14 + 0x68);
        uStack_4c = *(undefined4 *)(lVar14 + 0x6c);
        local_48 = *(undefined4 *)(lVar14 + 0x70);
        uStack_44 = *(undefined4 *)(lVar14 + 0x74);
        uStack_40 = *(undefined4 *)(lVar14 + 0x78);
        uStack_3c = *(undefined4 *)(lVar14 + 0x7c);
        local_90 = lVar14;
        local_88 = TlsGetValue(DAT_146b8198c);
        if (local_88 != (LPVOID)0x0) {
          FUN_14370d5c0(local_88);
        }
        plVar13 = *(longlong **)(param_3 + 0x30);
        local_a8 = 0;
        local_a0 = 0;
        local_9c = -0x80000000;
        iVar11 = *(int *)(lVar1 + 0xd8) + *(int *)(lVar1 + 0x20);
        local_c0 = 0;
        local_b8 = 0;
        local_b4 = 0x80000000;
        local_98 = plVar13;
        if ((plVar13 == (longlong *)0x0) || ((int)plVar13[1] != iVar11)) {
          if ((*(char *)(param_3 + 0x2d) != '\0') ||
             ((*(int *)(param_3 + 0x8c) != -1 || (*(int *)(param_3 + 0x90) != -1)))) {
            uVar9 = FUN_143703a50();
            if ((int)(local_b4 & 0x3fffffff) < iVar11) {
              iVar4 = (local_b4 & 0x3fffffff) * 2;
              iVar2 = iVar11;
              if (iVar11 < iVar4) {
                iVar2 = iVar4;
              }
              FUN_14370c310(uVar9,&local_c0,iVar2,4);
            }
            local_b8 = iVar11;
            FUN_143852e10(lVar14,0,&local_c0,0);
          }
          plVar13 = &local_c0;
          local_98 = plVar13;
        }
        local_98 = plVar13;
        if (*(char *)(param_3 + 0x94) != '\0') {
          FUN_1438de590(lVar14,param_3,&local_a8);
        }
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          lVar3 = lVar14 * 8;
          do {
            iVar12 = iVar15;
            if (*(char *)(param_3 + 0x94) != '\0') {
              iVar12 = *(int *)(lVar3 + -4 + local_a8);
            }
            if (*(int *)(lVar1 + 0x108) == 0) {
              bVar10 = 0;
            }
            else {
              bVar10 = *(byte *)((longlong)iVar12 + *(longlong *)(lVar1 + 0x100));
            }
            if (((*(int *)(param_3 + 0x8c) == -1) ||
                (*(int *)(*plVar13 + (longlong)iVar12 * 4) == *(int *)(param_3 + 0x8c))) &&
               (((bVar10 & 1) == 0 || (*(char *)(param_3 + 0x48) != '\0')))) {
              if ((cVar5 != '\0') || (cVar6 != '\0')) {
                local_c4 = iVar12;
                uVar8 = FUN_1438dbe50(lVar1,param_3,plVar13,&local_c4);
                if (cVar5 != '\0') {
                  local_c4 = iVar12;
                  FUN_1438dd080(param_1,param_2,lVar1,&local_78,param_3,&local_c4,uVar8);
                }
                if (cVar6 != '\0') {
                  local_c4 = iVar12;
                  FUN_1438dc060(param_1,param_2,lVar1,&local_78,param_3,&local_c4,uVar8);
                }
              }
              if (cVar7 != '\0') {
                local_c4 = iVar12;
                FUN_1438de450(param_1,param_2,param_4,local_90,param_3,&local_c4);
              }
            }
            iVar15 = iVar15 + 1;
            lVar14 = lVar14 + -1;
            plVar13 = local_98;
            iVar12 = local_b0;
            lVar3 = lVar3 + -8;
          } while (lVar14 != 0);
        }
        uVar9 = FUN_143703a50();
        local_b8 = 0;
        if (-1 < (int)local_b4) {
          FUN_143702e10(uVar9,local_c0,4,local_b4 & 0x3fffffff);
        }
        local_c0 = 0;
        local_b4 = 0x80000000;
        local_a0 = 0;
        if (-1 < local_9c) {
          FUN_143702e10(&PTR_vftable_1467f0640,local_a8,8);
        }
        local_a8 = 0;
        local_9c = 0x80000000;
        if (local_88 != (LPVOID)0x0) {
          FUN_14370d750();
        }
      }
      local_b0 = iVar12 + 1;
    } while (local_b0 < *(int *)(param_4 + 0x40));
  }
  return;
}



// FUNCTION 1438df440 FUN_1438df440 body=271 status=ok
// SIG undefined FUN_1438df440(void)

undefined4 * FUN_1438df440(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8 [2];
  
  *param_1 = 0x3f333333;
  uVar2 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[8] = 1;
  param_1[9] = 0x1010000;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0xffffa500;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xff0000ff;
  param_1[0x16] = 0xff00ffff;
  param_1[0x17] = 0xff7cfc00;
  param_1[0x18] = 0xffb22222;
  param_1[0x19] = 0xff32cd32;
  *(undefined8 *)(param_1 + 0x1a) = 0xffffffffffffffff;
  param_1[0x1c] = 2;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x80000000;
  local_res8[0] = 0;
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar1,4,local_res8);
  }
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  param_1[0x20] = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  param_1[0x21] = iVar3;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1438df550 GeometryBuildSettings body=15 status=ok
// SIG undefined GeometryBuildSettings(void)

undefined1 *
hkaiNavVolumeDebugUtils::GeometryBuildSettings::GeometryBuildSettings(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1438df560 FUN_1438df560 body=73 status=ok
// SIG undefined FUN_1438df560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1438df560(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffff;
  *param_1 = 0x7f4169e1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = uRam00000001467f08b8;
  *(undefined8 *)(param_1 + 8) = _DAT_1467f08b0;
  *(undefined8 *)(param_1 + 10) = uVar1;
  uVar1 = uRam00000001467f06e8;
  *(undefined8 *)(param_1 + 0xc) = _DAT_1467f06e0;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return param_1;
}



// FUNCTION 1438df5b0 FUN_1438df5b0 body=2062 status=ok
// SIG undefined FUN_1438df5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438df5b0(char *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  char cVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint local_res10;
  float local_res20 [2];
  undefined8 local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  longlong local_1d8;
  uint local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  uint *local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  uint local_140 [18];
  undefined8 local_f8;
  uint local_f0 [5];
  uint auStack_dc [39];
  
  puVar13 = local_140 + 1;
  lVar15 = 6;
  uVar23 = 0;
  do {
    puVar13[-3] = 0;
    puVar13[-2] = 0;
    puVar13[-1] = 0;
    *puVar13 = 0x80000000;
    puVar13 = puVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  local_1a8 = *(int *)(param_2 + 0x20);
  local_res10 = 0;
  uVar21 = uVar23;
  if (0 < local_1a8) {
    do {
      iVar16 = 0;
      plVar3 = *(longlong **)(param_1 + 8);
      if (plVar3 == (longlong *)0x0) {
LAB_1438df6d5:
        lVar15 = *(longlong *)(param_2 + 0x18);
        puVar13 = local_140;
        auVar27 = *(undefined1 (*) [16])(uVar21 + lVar15);
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar27._0_10_;
        auVar4._12_2_ = auVar27._6_2_;
        auVar6._8_2_ = auVar27._4_2_;
        auVar6._0_8_ = auVar27._0_8_;
        auVar6._10_4_ = auVar4._10_4_;
        auVar10._6_8_ = 0;
        auVar10._0_6_ = auVar6._8_6_;
        auVar8._4_2_ = auVar27._2_2_;
        auVar8._0_4_ = auVar27._0_4_;
        auVar8._6_8_ = SUB148(auVar10 << 0x40,6);
        fVar42 = *(float *)(param_2 + 0x90) * ((float)(auVar27._0_4_ & 0xffff) + 0.0) +
                 *(float *)(param_2 + 0xa0);
        fVar43 = *(float *)(param_2 + 0x94) * ((float)auVar8._4_4_ + 0.0) +
                 *(float *)(param_2 + 0xa4);
        fVar44 = *(float *)(param_2 + 0x98) *
                 ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) +
                 *(float *)(param_2 + 0xa8);
        fVar45 = *(float *)(param_2 + 0x9c) * ((float)(auVar4._10_4_ >> 0x10) + 0.0) +
                 *(float *)(param_2 + 0xac);
        fVar38 = *(float *)(param_2 + 0x90) * ((float)auVar27._8_2_ + 0.0) +
                 *(float *)(param_2 + 0xa0);
        fVar39 = *(float *)(param_2 + 0x94) * ((float)auVar27._10_2_ + 0.0) +
                 *(float *)(param_2 + 0xa4);
        fVar40 = *(float *)(param_2 + 0x98) * ((float)auVar27._12_2_ + 0.0) +
                 *(float *)(param_2 + 0xa8);
        fVar41 = *(float *)(param_2 + 0x9c) * ((float)auVar27._14_2_ + 0.0) +
                 *(float *)(param_2 + 0xac);
        fVar25 = (fVar38 + fVar42) * _DAT_1467f07e0;
        fVar28 = (fVar39 + fVar43) * fRam00000001467f07e4;
        fVar30 = (fVar40 + fVar44) * fRam00000001467f07e8;
        local_198 = fVar42;
        fStack_194 = fVar43;
        fStack_190 = fVar44;
        fStack_18c = fVar45;
        local_188 = fVar38;
        fStack_184 = fVar39;
        fStack_180 = fVar40;
        fStack_17c = fVar41;
        do {
          local_1a0 = puVar13;
          if (*param_1 == '\0') goto switchD_1438df7f4_default;
          fVar33 = *(float *)(param_2 + 0x90) * 0.1;
          fVar35 = *(float *)(param_2 + 0x94) * 0.1;
          fVar36 = *(float *)(param_2 + 0x98) * 0.1;
          fVar37 = *(float *)(param_2 + 0x9c) * 0.1;
          fVar26 = *(float *)(param_2 + 0x70) + fVar33;
          fVar29 = *(float *)(param_2 + 0x74) + fVar35;
          fVar31 = *(float *)(param_2 + 0x78) + fVar36;
          fVar33 = *(float *)(param_2 + 0x80) - fVar33;
          fVar35 = *(float *)(param_2 + 0x84) - fVar35;
          fVar36 = *(float *)(param_2 + 0x88) - fVar36;
          local_1c8 = CONCAT44(fVar29,fVar26);
          uStack_1c0 = CONCAT44(*(float *)(param_2 + 0x7c) + fVar37,fVar31);
          local_1b8 = CONCAT44(fVar35,fVar33);
          uStack_1b0 = CONCAT44(*(float *)(param_2 + 0x8c) - fVar37,fVar36);
          switch(iVar16) {
          case 0:
            if (fVar26 < local_198) break;
            goto LAB_1438df9d7;
          case 1:
            bVar24 = fVar38 < fVar33;
            goto LAB_1438df9d1;
          case 2:
            if (fStack_194 <= fVar29) goto LAB_1438df9d7;
            break;
          case 3:
            bVar24 = fVar39 < fVar35;
            goto LAB_1438df9d1;
          case 4:
            if (fStack_190 <= fVar31) goto LAB_1438df9d7;
            break;
          case 5:
            bVar24 = fVar40 < fVar36;
LAB_1438df9d1:
            if (bVar24) break;
LAB_1438df9d7:
            uVar14 = FUN_143703a50();
            if (*puVar13 == (puVar13[1] & 0x3fffffff)) {
              FUN_14370c460(uVar14,puVar13 + -2,0x10);
            }
            uVar22 = *puVar13;
            *puVar13 = uVar22 + 1;
            FUN_1438dfde0(&local_198,iVar16,
                          (longlong)(int)uVar22 * 0x10 + *(longlong *)(puVar13 + -2));
            goto LAB_1438dfbad;
          }
switchD_1438df7f4_default:
          local_1c8 = 0;
          uStack_1c0 = 0;
          pcVar20 = param_1;
          FUN_1438dfde0(&local_198,iVar16,&local_1c8);
          local_1d8 = 0;
          local_1d0 = 0;
          iVar2 = *(int *)(uVar21 + 0x10 + lVar15);
          uVar23 = (ulonglong)iVar2;
          local_1cc = 0x80000000;
          if (iVar2 < *(short *)(uVar21 + 6 + lVar15) + iVar2) {
            lVar17 = uVar23 * 8;
            do {
              lVar19 = *(longlong *)(param_2 + 0x28);
              if ((*(byte *)(lVar17 + 2 + lVar19) & 0x10) == 0) {
                plVar3 = *(longlong **)(pcVar20 + 8);
                if (plVar3 != (longlong *)0x0) {
                  local_res20[0] = (float)(*(uint *)(lVar17 + 4 + lVar19) & 0x3fffff);
                  cVar12 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,local_res20);
                  if (cVar12 == '\0') goto LAB_1438dfacd;
                }
                auVar27 = *(undefined1 (*) [16])
                           (*(longlong *)(param_2 + 0x18) +
                           (longlong)(int)(*(uint *)(lVar17 + 4 + lVar19) & 0x3fffff) * 0x18);
                auVar5._10_2_ = 0;
                auVar5._0_10_ = auVar27._0_10_;
                auVar5._12_2_ = auVar27._6_2_;
                auVar7._8_2_ = auVar27._4_2_;
                auVar7._0_8_ = auVar27._0_8_;
                auVar7._10_4_ = auVar5._10_4_;
                auVar11._6_8_ = 0;
                auVar11._0_6_ = auVar7._8_6_;
                auVar9._4_2_ = auVar27._2_2_;
                auVar9._0_4_ = auVar27._0_4_;
                auVar9._6_8_ = SUB148(auVar11 << 0x40,6);
                auVar32._4_4_ = fVar39;
                auVar32._0_4_ = fVar38;
                auVar32._8_4_ = fVar40;
                auVar32._12_4_ = fVar41;
                fVar26 = *(float *)(param_2 + 0x90) * ((float)(auVar27._0_4_ & 0xffff) + 0.0) +
                         *(float *)(param_2 + 0xa0);
                fVar29 = *(float *)(param_2 + 0x94) * ((float)auVar9._4_4_ + 0.0) +
                         *(float *)(param_2 + 0xa4);
                fVar31 = *(float *)(param_2 + 0x98) *
                         ((float)(auVar7._8_4_ >> 0x10) * 65536.0 + (float)(auVar7._8_4_ & 0xffff))
                         + *(float *)(param_2 + 0xa8);
                fVar33 = *(float *)(param_2 + 0x9c) * ((float)(auVar5._10_4_ >> 0x10) + 0.0) +
                         *(float *)(param_2 + 0xac);
                local_168._0_4_ =
                     *(float *)(param_2 + 0x90) * ((float)auVar27._8_2_ + 0.0) +
                     *(float *)(param_2 + 0xa0);
                local_168._4_4_ =
                     *(float *)(param_2 + 0x94) * ((float)auVar27._10_2_ + 0.0) +
                     *(float *)(param_2 + 0xa4);
                local_168._8_4_ =
                     *(float *)(param_2 + 0x98) * ((float)auVar27._12_2_ + 0.0) +
                     *(float *)(param_2 + 0xa8);
                local_168._12_4_ =
                     *(float *)(param_2 + 0x9c) * ((float)auVar27._14_2_ + 0.0) +
                     *(float *)(param_2 + 0xac);
                local_178 = CONCAT44(fVar29,fVar26);
                uStack_170 = CONCAT44(fVar33,fVar31);
                auVar32 = minps(auVar32,local_168);
                auVar34._4_4_ = fVar43;
                auVar34._0_4_ = fVar42;
                auVar34._8_4_ = fVar44;
                auVar34._12_4_ = fVar45;
                auVar27._4_4_ = fVar29;
                auVar27._0_4_ = fVar26;
                auVar27._8_4_ = fVar31;
                auVar27._12_4_ = fVar33;
                auVar34 = maxps(auVar34,auVar27);
                fVar26 = (local_168._0_4_ + fVar26) * _DAT_1467f07e0;
                fVar29 = (local_168._4_4_ + fVar29) * fRam00000001467f07e4;
                fVar31 = (local_168._8_4_ + fVar31) * fRam00000001467f07e8;
                local_1b8 = CONCAT44(fVar29,fVar26);
                uStack_1b0 = CONCAT44((local_168._12_4_ + fVar33) * fRam00000001467f07ec,fVar31);
                auVar27 = minps(auVar34,auVar32);
                auVar32 = maxps(auVar34,auVar32);
                local_158 = (auVar32._0_4_ - auVar27._0_4_) * _DAT_1467f07e0;
                fStack_154 = (auVar32._4_4_ - auVar27._4_4_) * fRam00000001467f07e4;
                fStack_150 = (auVar32._8_4_ - auVar27._8_4_) * fRam00000001467f07e8;
                fStack_14c = (auVar32._12_4_ - auVar27._12_4_) * fRam00000001467f07ec;
                if (1e-05 <= ABS(local_158)) {
                  local_res20[0] = fStack_154;
                  if (1e-05 <= ABS(fStack_154)) {
                    if (fVar30 <= fVar31) {
                      bVar24 = iVar16 == 5;
                    }
                    else {
                      bVar24 = iVar16 == 4;
                    }
                  }
                  else if (fVar29 < fVar28) {
                    bVar24 = iVar16 == 2;
                  }
                  else {
                    bVar24 = iVar16 == 3;
                  }
                }
                else {
                  local_res20[0] = local_158;
                  if (fVar25 <= fVar26) {
                    bVar24 = iVar16 == 1;
                  }
                  else {
                    bVar24 = iVar16 == 0;
                  }
                }
                if (bVar24) {
                  uVar14 = FUN_143703a50();
                  if (local_1d0 == (local_1cc & 0x3fffffff)) {
                    FUN_14370c460(uVar14,&local_1d8,0x10);
                  }
                  lVar19 = (longlong)(int)local_1d0;
                  local_1d0 = local_1d0 + 1;
                  FUN_1438dfde0(&local_178,iVar16,lVar19 * 0x10 + local_1d8);
                }
              }
LAB_1438dfacd:
              uVar22 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar22;
              lVar17 = lVar17 + 8;
              puVar13 = local_1a0;
              pcVar20 = param_1;
            } while ((int)uVar22 <
                     (int)*(short *)(uVar21 + 6 + lVar15) + *(int *)(uVar21 + 0x10 + lVar15));
          }
          local_1dc = 0x80000000;
          local_1e8 = 0;
          local_1e0 = 0;
          FUN_1438e02f0(&local_1c8,&local_1d8,&local_1e8);
          FUN_1438e0450(&local_1e8,&local_198,iVar16,param_3);
          uVar14 = FUN_143703a50();
          local_1e0 = 0;
          if (-1 < (int)local_1dc) {
            FUN_143702e10(uVar14,local_1e8,0x10,local_1dc & 0x3fffffff);
          }
          local_1e8 = 0;
          local_1dc = 0x80000000;
          uVar14 = FUN_143703a50();
          local_1d0 = 0;
          if (-1 < (int)local_1cc) {
            FUN_143702e10(uVar14,local_1d8,0x10,local_1cc & 0x3fffffff);
          }
          local_1d8 = 0;
          local_1cc = 0x80000000;
LAB_1438dfbad:
          puVar13 = puVar13 + 4;
          iVar16 = iVar16 + 1;
          local_1a0 = puVar13;
        } while (iVar16 < 6);
      }
      else {
        local_res20[0] = (float)uVar23;
        cVar12 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,local_res20);
        if (cVar12 != '\0') goto LAB_1438df6d5;
      }
      local_res10 = local_res10 + 1;
      uVar23 = (ulonglong)local_res10;
      uVar21 = uVar21 + 0x18;
    } while ((int)local_res10 < local_1a8);
  }
  uVar22 = 0;
  lVar15 = 6;
  if (*param_1 != '\0') {
    local_178 = *(undefined8 *)(param_2 + 0x80);
    uStack_170 = *(undefined8 *)(param_2 + 0x88);
    puVar18 = &local_148;
    local_168 = *(undefined1 (*) [16])(param_2 + 0x70);
    do {
      local_1b8 = 0;
      uStack_1b0 = 0;
      FUN_1438dfde0(param_2 + 0x70,uVar22,&local_1b8);
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 0x80000000;
      FUN_1438e02f0(&local_1b8,puVar18,&local_1e8);
      iVar16 = 1;
      if ((uVar22 & 1) != 0) {
        iVar16 = -1;
      }
      FUN_1438e0450(&local_1e8,&local_178,iVar16 + uVar22,param_3);
      uVar14 = FUN_143703a50();
      local_1e0 = 0;
      if (-1 < (int)local_1dc) {
        FUN_143702e10(uVar14,local_1e8,0x10,local_1dc & 0x3fffffff);
      }
      uVar22 = uVar22 + 1;
      local_1e8 = 0;
      puVar18 = puVar18 + 2;
      local_1dc = 0x80000000;
    } while ((int)uVar22 < 6);
  }
  if (param_3 != 0) {
    FUN_1437987c0(param_3);
  }
  puVar13 = auStack_dc;
  do {
    lVar15 = lVar15 + -1;
    puVar1 = puVar13 + -4;
    uVar14 = FUN_143703a50();
    puVar13[-5] = 0;
    if (-1 < (int)*puVar1) {
      FUN_143702e10(uVar14,*(undefined8 *)(puVar13 + -7),0x10,*puVar1 & 0x3fffffff);
    }
    puVar13[-7] = 0;
    puVar13[-6] = 0;
    *puVar1 = 0x80000000;
    puVar13 = puVar1;
  } while (lVar15 != 0);
  return;
}



// FUNCTION 1438dfde0 FUN_1438dfde0 body=110 status=ok
// SIG undefined FUN_1438dfde0(void)

void FUN_1438dfde0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  switch(param_2) {
  case 0:
  case 1:
    *param_3 = param_1[1];
    param_3[1] = param_1[2];
    param_3[2] = param_1[5];
    param_3[3] = param_1[6];
    return;
  case 2:
  case 3:
    *param_3 = *param_1;
    param_3[1] = param_1[2];
    param_3[2] = param_1[4];
    param_3[3] = param_1[6];
    return;
  case 4:
  case 5:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[4];
    param_3[3] = param_1[5];
  }
  return;
}



// FUNCTION 1438dfe70 FUN_1438dfe70 body=790 status=ok
// SIG undefined FUN_1438dfe70(void)

void FUN_1438dfe70(float *param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar8 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fStack_7c = param_1[3];
  fVar7 = fVar2;
  if (fVar2 < fVar8) {
    fVar7 = fVar8;
    fVar8 = fVar2;
  }
  fStack_84 = fVar1;
  if (fStack_7c < fVar1) {
    fStack_84 = fStack_7c;
    fStack_7c = fVar1;
  }
  fVar4 = fStack_7c;
  fVar3 = fStack_84;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fStack_90 = param_2[2];
  fStack_8c = param_2[3];
  local_98 = fVar1;
  if (fStack_90 < fVar1) {
    local_98 = fStack_90;
    fStack_90 = fVar1;
  }
  fStack_94 = fVar2;
  if (fStack_8c < fVar2) {
    fStack_94 = fStack_8c;
    fStack_8c = fVar2;
  }
  fVar2 = fStack_8c;
  fVar1 = fStack_94;
  local_88 = fVar8;
  fStack_80 = fVar7;
  if (fStack_84 < fStack_94) {
    if (fStack_8c < fStack_7c) {
      fStack_7c = fStack_94;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_3,0x10);
      }
      pfVar6 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = local_88;
        pfVar6[1] = fStack_84;
        pfVar6[2] = fStack_80;
        pfVar6[3] = fStack_7c;
      }
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      local_88 = fVar8;
      fStack_84 = fVar2;
      fStack_80 = fVar7;
      fStack_7c = fVar4;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_3,0x10);
      }
      pfVar6 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = local_88;
        pfVar6[1] = fStack_84;
        pfVar6[2] = fStack_80;
        pfVar6[3] = fStack_7c;
      }
    }
    else {
      if (fStack_7c < fStack_94) goto LAB_1438e0049;
      fStack_7c = fStack_94;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_3,0x10);
      }
      pfVar6 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      fVar2 = fVar4;
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = local_88;
        pfVar6[1] = fStack_84;
        pfVar6[2] = fStack_80;
        pfVar6[3] = fStack_7c;
      }
    }
  }
  else {
    if (fStack_8c <= fStack_84) {
LAB_1438e0049:
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_3,0x10);
      }
      pfVar6 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = fVar8;
        pfVar6[1] = fVar3;
        pfVar6[2] = fVar7;
        pfVar6[3] = fVar4;
      }
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      return;
    }
    if (fStack_7c <= fStack_8c) goto LAB_1438e0145;
    fStack_84 = fStack_8c;
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_3,0x10);
    }
    pfVar6 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
    fVar1 = fVar3;
    if (pfVar6 != (float *)0x0) {
      *pfVar6 = local_88;
      pfVar6[1] = fStack_84;
      pfVar6[2] = fStack_80;
      pfVar6[3] = fStack_7c;
    }
  }
  fStack_7c = fVar2;
  fStack_84 = fVar1;
  *(int *)(param_3 + 1) = (int)param_3[1] + 1;
LAB_1438e0145:
  local_88 = fVar8;
  fStack_80 = fVar7;
  FUN_1438e0190(&local_88,&local_98,param_3);
  return;
}



// FUNCTION 1438e0190 FUN_1438e0190 body=346 status=ok
// SIG undefined FUN_1438e0190(void)

void FUN_1438e0190(float *param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fStack_10 = *param_2;
  if (*param_1 < fStack_10) {
    fVar1 = param_1[2];
    if (param_2[2] <= fVar1 && fVar1 != param_2[2]) {
      uVar2 = *(undefined8 *)param_1;
      fVar1 = param_1[3];
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_3,0x10);
      }
      puVar5 = (undefined8 *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = uVar2;
        puVar5[1] = CONCAT44(fVar1,fStack_10);
      }
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      fStack_14 = param_1[1];
      fStack_10 = param_1[2];
      fStack_c = param_1[3];
      local_18 = param_2[2];
    }
    else {
      if (fVar1 < fStack_10) {
        uVar2 = FUN_143703a50();
        bVar6 = *(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff);
        goto LAB_1438e01d0;
      }
      local_18 = *param_1;
      fStack_14 = param_1[1];
      fStack_c = param_1[3];
    }
LAB_1438e029e:
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_3,0x10);
    }
    pfVar3 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
    if (pfVar3 == (float *)0x0) goto LAB_1438e02d7;
  }
  else {
    local_18 = param_2[2];
    if (*param_1 < local_18) {
      if (param_1[2] <= local_18) {
        return;
      }
      fStack_14 = param_1[1];
      fStack_10 = param_1[2];
      fStack_c = param_1[3];
      goto LAB_1438e029e;
    }
    uVar2 = FUN_143703a50();
    bVar6 = *(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff);
LAB_1438e01d0:
    if (bVar6) {
      FUN_14370c460(uVar2,param_3,0x10);
    }
    pfVar3 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
    if (pfVar3 == (float *)0x0) goto LAB_1438e02d7;
    local_18 = *param_1;
    fStack_14 = param_1[1];
    fStack_10 = param_1[2];
    fStack_c = param_1[3];
  }
  *pfVar3 = local_18;
  pfVar3[1] = fStack_14;
  pfVar3[2] = fStack_10;
  pfVar3[3] = fStack_c;
LAB_1438e02d7:
  *(int *)(param_3 + 1) = (int)param_3[1] + 1;
  return;
}



// FUNCTION 1438e02f0 FUN_1438e02f0 body=348 status=ok
// SIG undefined FUN_1438e02f0(void)

void FUN_1438e02f0(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong local_18;
  undefined4 local_10;
  uint local_c;
  
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_3,0x10);
  }
  puVar6 = (undefined4 *)((longlong)(int)param_3[1] * 0x10 + *param_3);
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *puVar6 = *param_1;
    puVar6[1] = uVar7;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
  }
  *(int *)(param_3 + 1) = (int)param_3[1] + 1;
  iVar8 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  if (0 < (int)param_2[1]) {
    do {
      iVar9 = 0;
      local_10 = 0;
      uVar7 = 0;
      if (0 < (int)param_3[1]) {
        do {
          FUN_1438dfe70((longlong)iVar9 * 0x10 + *param_3,*param_2 + (longlong)iVar8 * 0x10,
                        &local_18);
          iVar9 = iVar9 + 1;
          uVar7 = local_10;
        } while (iVar9 < (int)param_3[1]);
      }
      lVar2 = *param_3;
      iVar8 = iVar8 + 1;
      *param_3 = local_18;
      local_10 = (undefined4)param_3[1];
      uVar1 = *(uint *)((longlong)param_3 + 0xc);
      *(uint *)((longlong)param_3 + 0xc) = local_c;
      *(undefined4 *)(param_3 + 1) = uVar7;
      local_18 = lVar2;
      local_c = uVar1;
    } while (iVar8 < (int)param_2[1]);
  }
  uVar5 = FUN_143703a50();
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar5,local_18,0x10,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e0450 FUN_1438e0450 body=1153 status=ok
// SIG undefined FUN_1438e0450(void)

void FUN_1438e0450(longlong *param_1,float *param_2,undefined4 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  iVar12 = 0;
  if (0 < (int)param_1[1]) {
    lVar13 = 0;
    fVar17 = local_c8;
    fVar18 = fStack_c4;
    fVar19 = fStack_c0;
    fVar20 = fStack_bc;
    fVar21 = local_c8;
    fVar22 = fStack_c4;
    fVar23 = fStack_c0;
    fVar24 = fStack_bc;
    fVar26 = local_c8;
    fVar16 = fStack_c4;
    fVar27 = fStack_c0;
    fVar15 = fStack_bc;
    do {
      lVar6 = *param_1;
      fVar1 = *(float *)(lVar13 + lVar6);
      fVar25 = *(float *)(lVar13 + 8 + lVar6);
      if (1e-06 < ABS(fVar1 - fVar25)) {
        fVar2 = *(float *)(lVar13 + 4 + lVar6);
        fVar3 = *(float *)(lVar13 + 0xc + lVar6);
        if (ABS(fVar2 - fVar3) <= 1e-06) goto LAB_1438e0857;
        switch(param_3) {
        case 0:
          local_c8 = *param_2;
          fVar16 = fVar25;
          fStack_c4 = fVar1;
          fStack_c0 = fVar2;
          fVar17 = local_c8;
          fVar18 = fVar1;
          fVar19 = fVar3;
          fVar21 = local_c8;
          fVar22 = fVar25;
          fVar23 = fVar3;
          fVar25 = local_c8;
          fVar27 = fVar2;
          break;
        case 1:
          local_c8 = param_2[4];
          fVar16 = fVar1;
          fStack_c4 = fVar1;
          fStack_c0 = fVar2;
          fVar17 = local_c8;
          fVar18 = fVar25;
          fVar19 = fVar2;
          fVar21 = local_c8;
          fVar22 = fVar25;
          fVar23 = fVar3;
          fVar25 = local_c8;
          fVar27 = fVar3;
          break;
        case 2:
          fVar16 = param_2[1];
          local_c8 = fVar1;
          fStack_c4 = fVar16;
          fStack_c0 = fVar2;
          fVar17 = fVar25;
          fVar18 = fVar16;
          fVar19 = fVar2;
          fVar21 = fVar25;
          fVar22 = fVar16;
          fVar23 = fVar3;
          fVar25 = fVar1;
          fVar27 = fVar3;
          break;
        case 3:
          fVar16 = param_2[5];
          local_c8 = fVar1;
          fStack_c4 = fVar16;
          fStack_c0 = fVar2;
          fVar17 = fVar1;
          fVar18 = fVar16;
          fVar19 = fVar3;
          fVar21 = fVar25;
          fVar22 = fVar16;
          fVar23 = fVar3;
          fVar27 = fVar2;
          break;
        case 4:
          fStack_c0 = param_2[2];
          fVar16 = fVar2;
          local_c8 = fVar1;
          fStack_c4 = fVar2;
          fVar17 = fVar1;
          fVar18 = fVar3;
          fVar19 = fStack_c0;
          fVar21 = fVar25;
          fVar22 = fVar3;
          fVar23 = fStack_c0;
          fVar27 = fStack_c0;
          break;
        case 5:
          fStack_c0 = param_2[6];
          fVar16 = fVar3;
          local_c8 = fVar1;
          fStack_c4 = fVar2;
          fVar17 = fVar25;
          fVar18 = fVar2;
          fVar19 = fStack_c0;
          fVar21 = fVar25;
          fVar22 = fVar3;
          fVar23 = fStack_c0;
          fVar25 = fVar1;
          fVar27 = fStack_c0;
          break;
        default:
          goto switchD_1438e0591_default;
        }
        fVar24 = 0.0;
        fVar20 = 0.0;
        fStack_bc = 0.0;
        fVar15 = 0.0;
        fVar26 = fVar25;
switchD_1438e0591_default:
        if (param_4 != 0) {
          iVar4 = *(int *)(param_4 + 0x20);
          uVar8 = FUN_143703a50();
          iVar5 = *(int *)(param_4 + 0x20);
          uVar10 = *(uint *)(param_4 + 0x24) & 0x3fffffff;
          iVar14 = iVar5 + 4;
          if ((int)uVar10 < iVar14) {
            iVar7 = uVar10 * 2;
            if (iVar14 < iVar7) {
              iVar14 = iVar7;
            }
            FUN_14370c310(uVar8,param_4 + 0x18,iVar14,0x10);
          }
          *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + 4;
          pfVar9 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(param_4 + 0x18));
          *pfVar9 = local_c8;
          pfVar9[1] = fStack_c4;
          pfVar9[2] = fStack_c0;
          pfVar9[3] = fStack_bc;
          pfVar9[4] = fVar17;
          pfVar9[5] = fVar18;
          pfVar9[6] = fVar19;
          pfVar9[7] = fVar20;
          pfVar9[8] = fVar21;
          pfVar9[9] = fVar22;
          pfVar9[10] = fVar23;
          pfVar9[0xb] = fVar24;
          pfVar9[0xc] = fVar26;
          pfVar9[0xd] = fVar16;
          pfVar9[0xe] = fVar27;
          pfVar9[0xf] = fVar15;
          uVar8 = FUN_143703a50();
          iVar5 = *(int *)(param_4 + 0x30);
          uVar10 = *(uint *)(param_4 + 0x34) & 0x3fffffff;
          iVar14 = iVar5 + 2;
          if ((int)uVar10 < iVar14) {
            iVar7 = uVar10 * 2;
            if (iVar14 < iVar7) {
              iVar14 = iVar7;
            }
            FUN_14370c310(uVar8,param_4 + 0x28,iVar14,0x10);
          }
          *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 2;
          piVar11 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_4 + 0x28));
          piVar11[1] = iVar4 + 1;
          *piVar11 = iVar4 + 2;
          piVar11[2] = iVar4;
          piVar11[3] = -1;
          piVar11[5] = iVar4 + 3;
          piVar11[4] = iVar4;
          piVar11[6] = iVar4 + 2;
          piVar11[7] = -1;
        }
      }
LAB_1438e0857:
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while (iVar12 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1438e08f0 FUN_1438e08f0 body=127 status=ok
// SIG undefined FUN_1438e08f0(void)

undefined8 * FUN_1438e08f0(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiCharacterViewer::vftable;
  param_1[3] = hkaiCharacterViewer::vftable;
  param_1[0xb] = hkaiCharacterViewer::vftable;
  param_1[0xd] = hkaiCharacterViewer::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  FUN_143734b10(param_1 + 0x10);
  FUN_1424b51c0(param_1 + 0x12);
  hkSerialize::Save::withMultiBundle(param_1 + 0x12);
  return param_1;
}



// FUNCTION 1438e0970 FUN_1438e0970 body=243 status=ok
// SIG undefined FUN_1438e0970(void)

void FUN_1438e0970(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = hkaiCharacterViewer::vftable;
  iVar3 = 0;
  param_1[3] = hkaiCharacterViewer::vftable;
  param_1[0xb] = hkaiCharacterViewer::vftable;
  param_1[0xd] = hkaiCharacterViewer::vftable;
  if (param_1[0xc] != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(param_1[0xc] + 0x40) <= iVar3) break;
      FUN_1438e1aa0(param_1 + 0xb,*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x38) + lVar2));
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (param_1[0xc] != 0);
  }
  FUN_14371b260(param_1 + 0x12);
  thunk_FUN_143734820(param_1 + 0x10);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x10,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0xd] = hkaiWorld::Listener::vftable;
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e0a64 FUN_1438e0a64 body=9 status=ok
// SIG undefined FUN_1438e0a64(void)

void FUN_1438e0a64(longlong param_1)

{
  FUN_1438e0a90(param_1 + -0x18);
  return;
}



// FUNCTION 1438e0a70 FUN_1438e0a70 body=9 status=ok
// SIG undefined FUN_1438e0a70(void)

void FUN_1438e0a70(longlong param_1)

{
  FUN_1438e0a90(param_1 + -0x58);
  return;
}



// FUNCTION 1438e0a7c FUN_1438e0a7c body=9 status=ok
// SIG undefined FUN_1438e0a7c(void)

void FUN_1438e0a7c(longlong param_1)

{
  FUN_1438e0a90(param_1 + -0x68);
  return;
}



// FUNCTION 1438e0a90 FUN_1438e0a90 body=136 status=ok
// SIG undefined FUN_1438e0a90(void)

longlong FUN_1438e0a90(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e0970();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xb0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1438e0b20 FUN_1438e0b20 body=99 status=ok
// SIG undefined FUN_1438e0b20(void)

longlong FUN_1438e0b20(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0xb0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e08f0(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e0b90 FUN_1438e0b90 body=7 status=ok
// SIG undefined FUN_1438e0b90(void)

undefined4 FUN_1438e0b90(void)

{
  return DAT_146b9559c;
}



// FUNCTION 1438e0ba0 FUN_1438e0ba0 body=87 status=ok
// SIG undefined FUN_1438e0ba0(void)

void FUN_1438e0ba0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar2 = 0;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + 0x40) <= iVar2) {
        return;
      }
      (**(code **)(*(longlong *)(param_1 + 0x40) + 8))
                ((longlong *)(param_1 + 0x40),*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + lVar3));
      lVar1 = *(longlong *)(param_1 + 0x48);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1438e0c00 FUN_1438e0c00 body=205 status=ok
// SIG undefined FUN_1438e0c00(void)

void FUN_1438e0c00(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined1 local_80 [24];
  undefined8 *local_68 [12];
  
  FUN_143849100(local_68);
  local_90 = 0;
  uStack_88 = 0;
  puVar1 = (undefined8 *)(*(code *)*local_68[0])(local_68,local_80);
  local_98 = *puVar1;
  local_90 = puVar1[1];
  if (local_90 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((uStack_88 & 1) != 0) {
    FUN_143733a60(uStack_88 & 0xfffffffffffffffe);
  }
  uStack_88 = uVar2;
  FUN_14378eaf0(*(undefined8 *)(param_1 + -0x40),param_1 + 0x28,&local_98,DAT_146b9559c);
  if ((uStack_88 & 1) != 0) {
    FUN_143733a60(uStack_88 & 0xfffffffffffffffe);
  }
  FUN_1438497c0(local_68);
  return;
}



// FUNCTION 1438e0cd0 FUN_1438e0cd0 body=2774 status=ok
// SIG undefined FUN_1438e0cd0(void)

/* WARNING: Removing unreachable block (ram,0x0001438e0e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e0cd0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  uint local_res20;
  float local_2a8 [2];
  float local_2a0;
  int local_298;
  longlong local_290;
  int local_288;
  uint local_284;
  undefined8 local_280;
  int local_278;
  uint local_274;
  longlong local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  LPVOID local_208;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined1 local_158 [288];
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  local_208 = pvVar4;
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d620(pvVar4,"LtCharacterViewer","Stcircle");
  }
  lVar5 = *param_3;
  iVar10 = 0;
  local_298 = 0;
  local_res20 = 0;
  if (0 < (int)(param_3[1] - lVar5 >> 3)) {
    local_270 = 0;
    do {
      lVar9 = local_270;
      iVar11 = 0;
      iVar2 = (**(code **)(**(longlong **)(local_270 + lVar5) + 0x70))();
      if (0 < iVar2) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar9 + *param_3) + 0x78))
                            (*(longlong **)(lVar9 + *param_3),iVar11);
          _local_1d8 = *(undefined1 (*) [16])(lVar5 + 0x50);
          fVar19 = local_1d8._0_4_;
          fVar16 = local_1d8._4_4_;
          fVar26 = local_1d8._8_4_;
          fVar17 = local_1d8._12_4_;
          fVar18 = fVar19 * fVar19;
          fVar21 = fVar16 * fVar16;
          fVar13 = fVar19 * fVar19 + fVar26 * fVar26;
          uVar12 = -(uint)(fVar21 + fVar18 < fVar13 + 0.0);
          fVar24 = (float)((uint)fVar19 &
                          -(uint)(fVar21 + fVar18 < fVar26 * fVar26 + fVar19 * fVar19 + 0.0));
          fVar35 = (float)(~-(uint)(fVar21 + fVar18 < fVar13 + 0.0) & (uint)fVar19);
          fVar34 = (float)(~uVar12 & (uint)-fVar16 | (uint)-fVar26 & uVar12);
          fVar13 = fVar34 * fVar34;
          fVar18 = fVar35 * fVar35;
          auVar14._8_4_ = fVar24 * fVar24;
          auVar14._4_4_ = auVar14._8_4_;
          auVar14._0_4_ = auVar14._8_4_;
          auVar14._12_4_ = auVar14._8_4_;
          auVar22._0_4_ = fVar18 + fVar13 + auVar14._8_4_;
          auVar22._4_4_ = fVar18 + fVar13 + auVar14._8_4_;
          auVar22._8_4_ = fVar18 + fVar13 + auVar14._8_4_;
          auVar22._12_4_ = fVar18 + fVar13 + auVar14._8_4_;
          auVar14 = rsqrtps(auVar14,auVar22);
          fVar13 = auVar14._0_4_;
          fVar18 = auVar14._4_4_;
          fVar21 = auVar14._8_4_;
          fVar31 = auVar14._12_4_;
          fVar34 = fVar34 * (float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                                   (uint)((3.0 - auVar22._0_4_ * fVar13 * fVar13) * fVar13 * 0.5));
          fVar35 = fVar35 * (float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                                   (uint)((3.0 - auVar22._4_4_ * fVar18 * fVar18) * fVar18 * 0.5));
          fVar24 = fVar24 * (float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                                   (uint)((3.0 - auVar22._8_4_ * fVar21 * fVar21) * fVar21 * 0.5));
          fVar13 = (float)(~-(uint)(auVar22._12_4_ <= 0.0) &
                          (uint)((3.0 - auVar22._12_4_ * fVar31 * fVar31) * fVar31 * 0.5)) * 0.0;
          local_2a8[0] = (float)hkColor::getPaletteColor(iVar10,0xff);
          lVar6 = FUN_1436e53e0(param_1 + 8,lVar5 + 0x18);
          if (lVar6 == 0) {
            pfVar7 = local_2a8;
          }
          else {
            pfVar7 = (float *)(*(longlong *)(param_1 + 8) + 8 + (longlong)*(int *)(lVar6 + 4) * 0x10
                              );
          }
          fVar18 = *pfVar7;
          fVar21 = (float)local_1d8._0_4_ * 0.1;
          fVar31 = (float)local_1d8._4_4_ * 0.1;
          fVar32 = fStack_1d0 * 0.1;
          fVar33 = fStack_1cc * 0.1;
          local_268 = fVar21 + *(float *)(lVar5 + 0x20);
          fStack_264 = fVar31 + *(float *)(lVar5 + 0x24);
          fStack_260 = fVar32 + *(float *)(lVar5 + 0x28);
          fStack_25c = fVar33 + *(float *)(lVar5 + 0x2c);
          if (DAT_146b955a1 != '\0') {
            pfVar7 = &local_248;
            local_258 = (float)local_1d8._0_4_ * 4.0 + *(float *)(lVar5 + 0x20);
            fStack_254 = (float)local_1d8._4_4_ * 4.0 + *(float *)(lVar5 + 0x24);
            fStack_250 = fStack_1d0 * 4.0 + *(float *)(lVar5 + 0x28);
            fStack_24c = fStack_1cc * 4.0 + *(float *)(lVar5 + 0x2c);
            local_248 = -(float)local_1d8._0_4_;
            fStack_244 = -(float)local_1d8._4_4_;
            fStack_240 = -fStack_1d0;
            fStack_23c = -fStack_1cc;
            (**(code **)(*DAT_146b84580 + 0xa8))
                      (DAT_146b84580,local_228,0,&local_258,pfVar7,fVar18,1,0,DAT_146b846e8);
            uVar3 = (undefined4)((ulonglong)pfVar7 >> 0x20);
            local_15c = 0x80000080;
            local_168 = local_158;
            local_160 = 1;
            local_280 = 0;
            local_278 = 0;
            local_158[0] = 0;
            local_274 = 0x80000000;
            (**(code **)(**(longlong **)(lVar9 + *param_3) + 0x28))
                      (*(longlong **)(lVar9 + *param_3),iVar11,&local_280);
            pcVar8 = "%d -?-";
            if (1 < local_278) {
              pcVar8 = "%d";
            }
            hkStringBuf::printf((char *)&local_168,pcVar8,(ulonglong)local_res20);
            if ((*(byte *)(lVar5 + 0xb2) & 7) == 0) {
              hkStringBuf::printf((char *)&local_168,"OFF : {%d} (%d)",
                                  (ulonglong)*(uint *)(lVar5 + 0xac),
                                  (ulonglong)*(ushort *)(lVar5 + 0xb0));
            }
            else {
              hkStringBuf::printf((char *)&local_168,"%x : {%d} (%d)",
                                  (ulonglong)*(byte *)(lVar5 + 0xb2),
                                  (ulonglong)*(uint *)(lVar5 + 0xac),
                                  CONCAT44(uVar3,(uint)*(ushort *)(lVar5 + 0xb0)));
            }
            (**(code **)(*DAT_146b84580 + 200))
                      (DAT_146b84580,local_224,0,local_168,&local_258,fVar18,DAT_146b846e8);
            local_278 = 0;
            if (-1 < (int)local_274) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_280,0x10,local_274 & 0x3fffffff);
            }
            local_280 = 0;
            local_274 = 0x80000000;
            local_160 = 0;
            if (-1 < (int)local_15c) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_168,1,local_15c & 0x3fffffff);
            }
          }
          if (DAT_14682b390 != '\0') {
            pvVar4 = TlsGetValue(DAT_146b8198c);
            if (pvVar4 != (LPVOID)0x0) {
              FUN_14370d800(pvVar4,"Stcircle");
            }
            fVar15 = *(float *)(lVar5 + 0x68);
            iVar10 = 1;
            auVar20._8_4_ = 0x41800000;
            auVar20._0_8_ = 0x4180000041800000;
            auVar20._12_4_ = 0x41800000;
            auVar14 = rcpps(ZEXT416((uint)fVar15),auVar20);
            local_1e8 = CONCAT44(fVar15 * fVar35 + fStack_264,fVar15 * fVar34 + local_268);
            uStack_1e0 = CONCAT44(fVar15 * fVar13 + fStack_25c,fVar15 * fVar24 + fStack_260);
            fVar27 = (2.0 - auVar14._0_4_ * 16.0) * auVar14._0_4_ * _DAT_1467f0a30;
            fVar28 = (2.0 - auVar14._4_4_ * 16.0) * auVar14._4_4_ * fRam00000001467f0a34;
            fVar29 = (2.0 - auVar14._8_4_ * 16.0) * auVar14._8_4_ * fRam00000001467f0a38;
            fVar30 = (2.0 - auVar14._12_4_ * 16.0) * auVar14._12_4_ * fRam00000001467f0a3c;
            local_2a8[0] = fVar15;
            do {
              fStack_23c = (float)iVar10;
              local_248 = fStack_23c * fVar27;
              fStack_244 = fStack_23c * fVar28;
              fStack_240 = fStack_23c * fVar29;
              fStack_23c = fStack_23c * fVar30;
              FUN_143716280(&local_248,&local_1b8);
              plVar1 = *(longlong **)(param_1 + -0x38);
              local_1f8 = fVar15 * local_1c8 * fVar34 + local_268 +
                          fVar15 * local_1b8 * (fVar24 * fVar16 - fVar26 * fVar35);
              fStack_1f4 = fVar15 * fStack_1c4 * fVar35 + fStack_264 +
                           fVar15 * fStack_1b4 * (fVar34 * fVar26 - fVar19 * fVar24);
              fStack_1f0 = fVar15 * fStack_1c0 * fVar24 + fStack_260 +
                           fVar15 * fStack_1b0 * (fVar35 * fVar19 - fVar16 * fVar34);
              fStack_1ec = fVar15 * fStack_1bc * fVar13 + fStack_25c +
                           fVar15 * fStack_1ac * (fVar13 * fVar17 - fVar17 * fVar13);
              uVar3 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x10))(param_1 + -0x50);
              (**(code **)(*plVar1 + 0xa0))(plVar1,local_220,0,&local_1e8,&local_1f8,fVar18,uVar3);
              local_1e8 = CONCAT44(fStack_1f4,local_1f8);
              uStack_1e0 = CONCAT44(fStack_1ec,fStack_1f0);
              iVar10 = iVar10 + 1;
            } while (iVar10 < 0x11);
          }
          if ((DAT_14682b391 != '\0') && (*(char *)(*(longlong *)(lVar5 + 0xa0) + 0x38) == '\x01'))
          {
            plVar1 = *(longlong **)(param_1 + -0x38);
            uVar3 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x10))(param_1 + -0x50);
            (**(code **)(*plVar1 + 0xa8))
                      (plVar1,local_21c,0,&local_268,lVar5 + 0x30,fVar18,1,0,uVar3);
          }
          if (DAT_146b955a2 != '\0') {
            plVar1 = *(longlong **)(param_1 + -0x38);
            uVar3 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x10))(param_1 + -0x50);
            (**(code **)(*plVar1 + 0xa8))
                      (plVar1,local_218,0,&local_268,lVar5 + 0x40,0xffff69b4,1,0,uVar3);
          }
          if ((DAT_146b955a3 != '\0') && (*(char *)(*(longlong *)(lVar5 + 0xa0) + 0x38) == '\x01'))
          {
            pvVar4 = TlsGetValue(DAT_146b8198c);
            if (pvVar4 != (LPVOID)0x0) {
              FUN_14370d800(pvVar4,"StangVelArc");
            }
            local_2a8[0] = *(float *)(lVar5 + 0x4c) * 0.25;
            local_2a0 = 6.2831855;
            fVar19 = local_2a8[0];
            if (6.2831855 <= local_2a8[0]) {
              fVar19 = 6.2831855;
            }
            if (1.1920929e-07 < fVar19) {
              local_238 = 0x4b000000;
              uStack_234 = 0x4b000000;
              uStack_230 = 0x4b000000;
              uStack_22c = 0x4b000000;
              local_2a0 = fVar19 * 16.0 * 0.15915494;
              fVar19 = ((local_2a0 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
              fVar19 = (float)(~-(uint)(8388608.0 < ABS(local_2a0)) &
                               (uint)((float)(int)-(uint)(local_2a0 < fVar19) + fVar19) |
                              -(uint)(8388608.0 < ABS(local_2a0)) & (uint)local_2a0);
              iVar2 = (int)((float)(-(uint)(fVar19 != local_2a0) & 0x3f800000) + fVar19);
              FUN_14375e930(local_1a8,local_1d8);
              iVar10 = 1;
              fVar13 = *(float *)(lVar5 + 0x68) * 0.9;
              fVar19 = *(float *)(lVar5 + 0x30);
              fVar16 = *(float *)(lVar5 + 0x34);
              fVar26 = *(float *)(lVar5 + 0x38);
              fVar17 = *(float *)(lVar5 + 0x3c);
              if (0 < iVar2) {
                do {
                  fVar24 = local_1a8._4_4_;
                  fVar34 = local_1a8._12_4_;
                  fVar28 = local_1a8._0_4_;
                  fVar29 = local_1a8._8_4_;
                  fVar35 = fVar28 * fVar19;
                  fVar15 = fVar24 * fVar16;
                  fVar27 = fVar29 * fVar26;
                  local_258 = fVar19 * fVar13 + local_268;
                  fStack_254 = fVar16 * fVar13 + fStack_264;
                  fStack_250 = fVar26 * fVar13 + fStack_260;
                  fStack_24c = fVar17 * fVar13 + fStack_25c;
                  fVar30 = (fVar15 + fVar35 + fVar27) * fVar28 +
                           (fVar34 * fVar34 - _DAT_1467f07e0) * fVar19 +
                           (fVar26 * fVar24 - fVar29 * fVar16) * fVar34;
                  fVar25 = (fVar15 + fVar35 + fVar27) * fVar24 +
                           (fVar34 * fVar34 - fRam00000001467f07e4) * fVar16 +
                           (fVar19 * fVar29 - fVar28 * fVar26) * fVar34;
                  fVar26 = (fVar15 + fVar35 + fVar27) * fVar29 +
                           (fVar34 * fVar34 - fRam00000001467f07e8) * fVar26 +
                           (fVar16 * fVar28 - fVar24 * fVar19) * fVar34;
                  fVar34 = (fVar15 + fVar35 + fVar27) * fVar34 +
                           (fVar34 * fVar34 - fRam00000001467f07ec) * fVar17 +
                           (fVar17 * fVar34 - fVar34 * fVar17) * fVar34;
                  fVar30 = fVar30 + fVar30;
                  fVar25 = fVar25 + fVar25;
                  fVar26 = fVar26 + fVar26;
                  fVar19 = fVar30 * fVar30;
                  fVar16 = fVar25 * fVar25;
                  fVar17 = fVar26 * fVar26;
                  auVar23._0_4_ = fVar16 + fVar19 + fVar17;
                  auVar23._4_4_ = fVar16 + fVar19 + fVar17;
                  auVar23._8_4_ = fVar16 + fVar19 + fVar17;
                  auVar23._12_4_ = fVar16 + fVar19 + fVar17;
                  auVar14 = rsqrtps(local_1a8,auVar23);
                  fVar19 = auVar14._0_4_;
                  fVar16 = auVar14._4_4_;
                  fVar17 = auVar14._8_4_;
                  fVar24 = auVar14._12_4_;
                  fVar19 = fVar30 * (float)(~-(uint)(auVar23._0_4_ <= 0.0) &
                                           (uint)((3.0 - fVar19 * auVar23._0_4_ * fVar19) *
                                                 fVar19 * 0.5));
                  fVar16 = fVar25 * (float)(~-(uint)(auVar23._4_4_ <= 0.0) &
                                           (uint)((3.0 - fVar16 * auVar23._4_4_ * fVar16) *
                                                 fVar16 * 0.5));
                  fVar26 = fVar26 * (float)(~-(uint)(auVar23._8_4_ <= 0.0) &
                                           (uint)((3.0 - fVar17 * auVar23._8_4_ * fVar17) *
                                                 fVar17 * 0.5));
                  fVar17 = (fVar34 + fVar34) *
                           (float)(~-(uint)(auVar23._12_4_ <= 0.0) &
                                  (uint)((3.0 - fVar24 * auVar23._12_4_ * fVar24) * fVar24 * 0.5));
                  local_198 = fVar19 * fVar13 + local_268;
                  fStack_194 = fVar16 * fVar13 + fStack_264;
                  fStack_190 = fVar26 * fVar13 + fStack_260;
                  fStack_18c = fVar17 * fVar13 + fStack_25c;
                  if (iVar10 == iVar2) {
                    local_248 = local_198 - local_258;
                    fStack_244 = fStack_194 - fStack_254;
                    fStack_240 = fStack_190 - fStack_250;
                    fStack_23c = fStack_18c - fStack_24c;
                    (**(code **)(*DAT_146b84580 + 0xa8))
                              (DAT_146b84580,local_214,0,&local_258,&local_248,0xffff69b4,1,0,
                               DAT_146b846e8);
                  }
                  else {
                    (**(code **)(*DAT_146b84580 + 0xa0))
                              (DAT_146b84580,local_210,0,&local_258,&local_198,0xffff69b4,
                               DAT_146b846e8);
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 <= iVar2);
              }
            }
          }
          if (DAT_14682b392 != '\0') {
            pvVar4 = TlsGetValue(DAT_146b8198c);
            if (pvVar4 != (LPVOID)0x0) {
              FUN_14370d800(pvVar4,"Stpath");
            }
            local_290 = 0;
            local_288 = 0;
            local_284 = 0x80000000;
            (**(code **)(**(longlong **)(local_270 + *param_3) + 0x28))
                      (*(longlong **)(local_270 + *param_3),iVar11);
            if ((*(int *)(lVar5 + 0xb4) != 3) && (iVar10 = 1, 1 < local_288)) {
              lVar5 = 0x10;
              do {
                plVar1 = *(longlong **)(param_1 + -0x38);
                pfVar7 = (float *)(lVar5 + -0x10 + local_290);
                local_178 = *pfVar7 + fVar21;
                fStack_174 = pfVar7[1] + fVar31;
                fStack_170 = pfVar7[2] + fVar32;
                fStack_16c = pfVar7[3] + fVar33;
                pfVar7 = (float *)(lVar5 + local_290);
                local_188 = *pfVar7 + fVar21;
                fStack_184 = pfVar7[1] + fVar31;
                fStack_180 = pfVar7[2] + fVar32;
                fStack_17c = pfVar7[3] + fVar33;
                uVar3 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x10))(param_1 + -0x50);
                (**(code **)(*plVar1 + 0xa0))(plVar1,local_20c,0,&local_178,&local_188,fVar18,uVar3)
                ;
                iVar10 = iVar10 + 1;
                lVar5 = lVar5 + 0x10;
              } while (iVar10 < local_288);
            }
            local_288 = 0;
            if (-1 < (int)local_284) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_290,0x10,local_284 & 0x3fffffff);
            }
            local_290 = 0;
            local_284 = 0x80000000;
          }
          lVar9 = local_270;
          iVar11 = iVar11 + 1;
          iVar10 = local_298 + 1;
          local_298 = iVar10;
          iVar2 = (**(code **)(**(longlong **)(local_270 + *param_3) + 0x70))();
        } while (iVar11 < iVar2);
      }
      lVar5 = *param_3;
      local_res20 = local_res20 + 1;
      local_270 = lVar9 + 8;
      pvVar4 = local_208;
    } while ((int)local_res20 < (int)(param_3[1] - lVar5 >> 3));
  }
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar4,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438e17b0 FUN_1438e17b0 body=492 status=ok
// SIG undefined FUN_1438e17b0(void)

void FUN_1438e17b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 *local_98 [16];
  
  FUN_143849100(local_98);
  local_c0 = 0;
  uStack_b8 = 0;
  puVar5 = (undefined8 *)(*(code *)*local_98[0])(local_98,&local_a8);
  local_c8 = *puVar5;
  local_c0 = puVar5[1];
  if (local_c0 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1437151a0();
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  if ((uStack_b8 & 1) != 0) {
    FUN_143733a60(uStack_b8 & 0xfffffffffffffffe);
  }
  uStack_b8 = uVar6;
  FUN_14378eaf0(*(undefined8 *)(param_1 + -0x40),param_1 + 0x28,&local_c8,DAT_146b9559c);
  if (DAT_146b955a4 != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x38);
    for (lVar7 = *(longlong *)(param_2 + 0x30); lVar7 != lVar1; lVar7 = lVar7 + 0x90) {
      lVar2 = *(longlong *)(lVar7 + 0x68);
      plVar3 = *(longlong **)(param_1 + -0x38);
      local_a8 = *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x50) * 0.15;
      fStack_a4 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x54) * 0.15;
      fStack_a0 = *(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x58) * 0.15;
      fStack_9c = *(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x5c) * 0.15;
      uVar4 = (**(code **)(*(longlong *)(param_1 + -0x50) + 0x10))(param_1 + -0x50);
      (**(code **)(*plVar3 + 0xa8))(plVar3,local_res8,0,&local_a8,lVar2 + 0x40,0xff00ffff,1,0,uVar4)
      ;
    }
  }
  if ((uStack_b8 & 1) != 0) {
    FUN_143733a60(uStack_b8 & 0xfffffffffffffffe);
  }
  FUN_1438497c0(local_98);
  return;
}



// FUNCTION 1438e19a0 FUN_1438e19a0 body=41 status=ok
// SIG undefined FUN_1438e19a0(void)

void FUN_1438e19a0(void)

{
  DAT_146b9559c = FUN_14378a650(DAT_146b845b8,"AI/Deprecated/Characters",FUN_1438e0b20);
  return;
}



// FUNCTION 1438e19d0 FUN_1438e19d0 body=206 status=ok
// SIG undefined FUN_1438e19d0(void)

void FUN_1438e19d0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  plVar3 = DAT_146b81f68;
  puVar4 = (undefined1 *)(**(code **)(*DAT_146b81f68 + 0x28))(DAT_146b81f68,local_res8,0x798abc71);
  uVar1 = *puVar4;
  (**(code **)(*plVar3 + 0x20))(plVar3,0x798abc71,0);
  plVar3 = DAT_146b81f68;
  puVar4 = (undefined1 *)(**(code **)(*DAT_146b81f68 + 0x28))(DAT_146b81f68,local_res8,0x798abc72);
  uVar2 = *puVar4;
  (**(code **)(*plVar3 + 0x20))(plVar3,0x798abc72,0);
  lVar5 = param_1 + 0x10;
  if (param_1 == 0x58) {
    lVar5 = 0;
  }
  FUN_143846bf0(param_2,lVar5);
  (**(code **)(*DAT_146b81f68 + 0x20))(DAT_146b81f68,0x798abc72,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001438e1a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b81f68 + 0x20))(DAT_146b81f68,0x798abc71,uVar1);
  return;
}



// FUNCTION 1438e1aa0 FUN_1438e1aa0 body=28 status=ok
// SIG undefined FUN_1438e1aa0(void)

void FUN_1438e1aa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x10;
  if (param_1 == 0x58) {
    lVar1 = 0;
  }
  FUN_1438477d0(param_2,lVar1);
  return;
}



// FUNCTION 1438e1ac0 FUN_1438e1ac0 body=82 status=ok
// SIG undefined FUN_1438e1ac0(void)

undefined8 * FUN_1438e1ac0(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiSensorViewer::vftable;
  param_1[3] = hkaiSensorViewer::vftable;
  param_1[0xb] = hkaiSensorViewer::vftable;
  param_1[0xd] = hkaiSensorViewer::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  return param_1;
}



// FUNCTION 1438e1b20 FUN_1438e1b20 body=292 status=ok
// SIG undefined FUN_1438e1b20(void)

void FUN_1438e1b20(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  *param_1 = hkaiSensorViewer::vftable;
  param_1[3] = hkaiSensorViewer::vftable;
  iVar5 = 0;
  param_1[0xb] = hkaiSensorViewer::vftable;
  param_1[0xd] = hkaiSensorViewer::vftable;
  if (param_1[0xc] != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(param_1[0xc] + 0x40) <= iVar5) break;
      FUN_1438e1aa0(param_1 + 0xb,*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x38) + lVar2));
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + 8;
    } while (param_1[0xc] != 0);
  }
  uVar1 = FUN_143703a50();
  iVar5 = *(int *)(param_1 + 0xf) + -1;
  if (-1 < iVar5) {
    plVar3 = (longlong *)((longlong)iVar5 * 0x90 + param_1[0xe]);
    plVar4 = plVar3;
    do {
      (**(code **)(*plVar4 + 8))(plVar3,0);
      plVar3 = plVar3 + -0x12;
      plVar4 = plVar4 + -0x12;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x90,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0xd] = hkaiWorld::Listener::vftable;
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e1c44 FUN_1438e1c44 body=9 status=ok
// SIG undefined FUN_1438e1c44(void)

void FUN_1438e1c44(longlong param_1)

{
  FUN_1438e1c70(param_1 + -0x18);
  return;
}



// FUNCTION 1438e1c50 FUN_1438e1c50 body=9 status=ok
// SIG undefined FUN_1438e1c50(void)

void FUN_1438e1c50(longlong param_1)

{
  FUN_1438e1c70(param_1 + -0x58);
  return;
}



// FUNCTION 1438e1c5c FUN_1438e1c5c body=9 status=ok
// SIG undefined FUN_1438e1c5c(void)

void FUN_1438e1c5c(longlong param_1)

{
  FUN_1438e1c70(param_1 + -0x68);
  return;
}



// FUNCTION 1438e1c70 FUN_1438e1c70 body=136 status=ok
// SIG undefined FUN_1438e1c70(void)

longlong FUN_1438e1c70(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e1b20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x80;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1438e1d00 FUN_1438e1d00 body=99 status=ok
// SIG undefined FUN_1438e1d00(void)

longlong FUN_1438e1d00(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x80);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e1ac0(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e1d70 FUN_1438e1d70 body=7 status=ok
// SIG undefined FUN_1438e1d70(void)

undefined4 FUN_1438e1d70(void)

{
  return DAT_146b955a8;
}



// FUNCTION 1438e1d80 FUN_1438e1d80 body=1463 status=ok
// SIG undefined FUN_1438e1d80(void)

void FUN_1438e1d80(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  uint uVar2;
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
  int iVar13;
  LPVOID pvVar14;
  LPVOID pvVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  undefined1 auVar27 [16];
  longlong local_res8;
  longlong local_78;
  uint local_70;
  uint local_6c;
  longlong local_68;
  uint local_60;
  longlong local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  uint local_40;
  
  local_res8 = param_1;
  pvVar14 = TlsGetValue(DAT_146b8198c);
  if (pvVar14 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar14,"TtSensorViewerCB");
  }
  lVar20 = *param_3;
  uVar19 = 0;
  iVar25 = 0;
  if (0 < (int)(param_3[1] - lVar20 >> 3)) {
    lVar17 = 0;
    do {
      iVar13 = (**(code **)(**(longlong **)(lVar20 + lVar17) + 0x70))();
      lVar20 = *param_3;
      lVar17 = lVar17 + 8;
      uVar19 = uVar19 + iVar13;
      iVar25 = iVar25 + 1;
    } while (iVar25 < (int)(param_3[1] - lVar20 >> 3));
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_60 = uVar19;
  if (uVar19 == 0) {
    local_68 = 0;
  }
  else {
    pvVar15 = TlsGetValue(DAT_146b7bf70);
    if (pvVar15 == (LPVOID)0x0) {
      pvVar15 = DAT_146b7bf68;
    }
    uVar18 = uVar19 * 0x20 + 0x7f & 0xffffff80;
    local_68 = *(longlong *)((longlong)pvVar15 + 0x18);
    uVar23 = (int)uVar18 + local_68;
    if ((*(int *)((longlong)pvVar15 + 0x10) < (int)uVar18) ||
       (*(ulonglong *)((longlong)pvVar15 + 0x20) < uVar23)) {
      local_68 = FUN_1437138c0(pvVar15);
    }
    else {
      *(ulonglong *)((longlong)pvVar15 + 0x18) = uVar23;
    }
  }
  local_6c = uVar19 | 0x80000000;
  iVar25 = 0;
  lVar20 = *param_3;
  local_78 = local_68;
  if (0 < (int)(param_3[1] - lVar20 >> 3)) {
    uVar23 = 0;
    do {
      iVar13 = (**(code **)(**(longlong **)(lVar20 + uVar23) + 0x70))();
      uVar24 = 0;
      if (0 < iVar13) {
        do {
          plVar22 = *(longlong **)(uVar23 + *param_3);
          uVar16 = FUN_143703a50();
          if (local_70 == (local_6c & 0x3fffffff)) {
            FUN_14370c460(uVar16,&local_78,0x20);
          }
          lVar20 = (longlong)(int)local_70;
          local_70 = local_70 + 1;
          pfVar21 = (float *)(lVar20 * 0x20 + local_78);
          lVar17 = (**(code **)(*plVar22 + 0x78))(plVar22,uVar24);
          uVar19 = (int)uVar24 + 1;
          lVar20 = *(longlong *)(lVar17 + 0xa0);
          uVar1 = *(undefined4 *)(lVar17 + 0x70);
          auVar27._4_4_ = uVar1;
          auVar27._0_4_ = uVar1;
          auVar27._8_4_ = uVar1;
          auVar27._12_4_ = uVar1;
          auVar27 = maxps(auVar27,*(undefined1 (*) [16])(lVar17 + 0x50));
          fVar3 = *(float *)(lVar20 + 0x50);
          fVar4 = *(float *)(lVar20 + 0x54);
          fVar5 = *(float *)(lVar20 + 0x58);
          fVar6 = *(float *)(lVar20 + 0x5c);
          fVar7 = *(float *)(lVar20 + 0x44);
          fVar8 = *(float *)(lVar20 + 0x48);
          fVar9 = *(float *)(lVar20 + 0x4c);
          fVar10 = *(float *)(lVar17 + 0x24);
          fVar11 = *(float *)(lVar17 + 0x28);
          fVar12 = *(float *)(lVar17 + 0x2c);
          *pfVar21 = auVar27._0_4_ * *(float *)(lVar20 + 0x40) + *(float *)(lVar17 + 0x20);
          pfVar21[1] = auVar27._4_4_ * fVar7 + fVar10;
          pfVar21[2] = auVar27._8_4_ * fVar8 + fVar11;
          pfVar21[3] = auVar27._12_4_ * fVar9 + fVar12;
          fVar7 = *(float *)(lVar17 + 0x24);
          fVar8 = *(float *)(lVar17 + 0x28);
          fVar9 = *(float *)(lVar17 + 0x2c);
          pfVar21[4] = fVar3 * auVar27._0_4_ + *(float *)(lVar17 + 0x20);
          pfVar21[5] = fVar4 * auVar27._4_4_ + fVar7;
          pfVar21[6] = fVar5 * auVar27._8_4_ + fVar8;
          pfVar21[7] = fVar6 * auVar27._12_4_ + fVar9;
          iVar13 = (**(code **)(**(longlong **)(uVar23 + *param_3) + 0x70))();
          uVar24 = (ulonglong)uVar19;
        } while ((int)uVar19 < iVar13);
      }
      lVar20 = *param_3;
      iVar25 = iVar25 + 1;
      uVar23 = uVar23 + 8;
      param_1 = local_res8;
    } while (iVar25 < (int)(param_3[1] - lVar20 >> 3));
  }
  uVar19 = local_70;
  if (*(int *)(param_1 + 0x10) < (int)local_70) {
    uVar16 = FUN_143703a50();
    uVar18 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
    if ((int)uVar18 < (int)uVar19) {
      uVar18 = uVar18 * 2;
      uVar2 = uVar19;
      if ((int)uVar19 < (int)uVar18) {
        uVar2 = uVar18;
      }
      FUN_14370c310(uVar16,param_1 + 8,uVar2,0x90);
    }
    iVar25 = (*(int *)(param_1 + 0x10) - uVar19) + -1;
    if (-1 < iVar25) {
      plVar22 = (longlong *)
                ((longlong)iVar25 * 0x90 + (longlong)(int)uVar19 * 0x90 + *(longlong *)(param_1 + 8)
                );
      plVar26 = plVar22;
      do {
        (**(code **)(*plVar22 + 8))(plVar26,0);
        plVar26 = plVar26 + -0x12;
        plVar22 = plVar22 + -0x12;
        iVar25 = iVar25 + -1;
      } while (-1 < iVar25);
    }
    uVar18 = uVar19 - *(int *)(param_1 + 0x10);
    lVar20 = (longlong)*(int *)(param_1 + 0x10) * 0x90 + *(longlong *)(param_1 + 8);
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      do {
        if (lVar20 != 0) {
          FUN_1437908c0(lVar20);
        }
        lVar20 = lVar20 + 0x90;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    *(uint *)(param_1 + 0x10) = uVar19;
  }
  uVar19 = local_70;
  uVar23 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_40 = local_70;
  if (local_70 == 0) {
    local_48 = 0;
  }
  else {
    pvVar15 = TlsGetValue(DAT_146b7bf70);
    if (pvVar15 == (LPVOID)0x0) {
      pvVar15 = DAT_146b7bf68;
    }
    uVar18 = uVar19 * 8 + 0x7f & 0xffffff80;
    local_48 = *(longlong *)((longlong)pvVar15 + 0x18);
    uVar24 = (int)uVar18 + local_48;
    if ((*(int *)((longlong)pvVar15 + 0x10) < (int)uVar18) ||
       (*(ulonglong *)((longlong)pvVar15 + 0x20) < uVar24)) {
      local_48 = FUN_1437138c0(pvVar15);
    }
    else {
      *(ulonglong *)((longlong)pvVar15 + 0x18) = uVar24;
    }
  }
  uVar18 = local_70;
  local_4c = uVar19 | 0x80000000;
  local_58 = local_48;
  uVar16 = FUN_143703a50();
  if ((int)(local_4c & 0x3fffffff) < (int)uVar18) {
    uVar2 = (local_4c & 0x3fffffff) * 2;
    uVar19 = uVar18;
    if ((int)uVar18 < (int)uVar2) {
      uVar19 = uVar2;
    }
    FUN_14370c310(uVar16,&local_58,uVar19,8);
  }
  uVar24 = uVar23;
  local_50 = uVar18;
  if (0 < (int)local_70) {
    do {
      iVar25 = (int)uVar24;
      lVar20 = (longlong)iVar25 * 0x20 + local_78;
      lVar17 = (longlong)iVar25 * 0x90;
      FUN_143790f40(*(longlong *)(param_1 + 8) + lVar17,lVar20,lVar20 + 0x10);
      *(longlong *)(uVar23 + local_58) = *(longlong *)(param_1 + 8) + lVar17;
      uVar23 = uVar23 + 8;
      uVar24 = (ulonglong)(iVar25 + 1U);
    } while ((int)(iVar25 + 1U) < (int)local_70);
  }
  (**(code **)(**(longlong **)(param_1 + -0x38) + 0xf0))
            (*(longlong **)(param_1 + -0x38),&local_res8,0,&local_58,&DAT_1467f0890,0xffffa500,
             DAT_146b955a8);
  uVar19 = local_40;
  lVar20 = local_48;
  if (local_48 == local_58) {
    local_50 = 0;
  }
  pvVar15 = TlsGetValue(DAT_146b7bf70);
  if (pvVar15 == (LPVOID)0x0) {
    pvVar15 = DAT_146b7bf68;
  }
  uVar19 = uVar19 * 8 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar15 + 0x10) < (int)uVar19) ||
      ((int)uVar19 + lVar20 != *(longlong *)((longlong)pvVar15 + 0x18))) ||
     (*(longlong *)((longlong)pvVar15 + 0x28) == lVar20)) {
    FUN_143713ff0(pvVar15,lVar20);
  }
  else {
    *(longlong *)((longlong)pvVar15 + 0x18) = lVar20;
  }
  uVar16 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar16,local_58,8,local_4c & 0x3fffffff);
  }
  uVar19 = local_60;
  lVar20 = local_68;
  if (local_68 == local_78) {
    local_70 = 0;
  }
  local_58 = 0;
  local_4c = 0x80000000;
  pvVar15 = TlsGetValue(DAT_146b7bf70);
  if (pvVar15 == (LPVOID)0x0) {
    pvVar15 = DAT_146b7bf68;
  }
  uVar19 = uVar19 * 0x20 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar15 + 0x10) < (int)uVar19) ||
      ((int)uVar19 + lVar20 != *(longlong *)((longlong)pvVar15 + 0x18))) ||
     (*(longlong *)((longlong)pvVar15 + 0x28) == lVar20)) {
    FUN_143713ff0(pvVar15,lVar20);
  }
  else {
    *(longlong *)((longlong)pvVar15 + 0x18) = lVar20;
  }
  uVar16 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar16,local_78,0x20,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  if (pvVar14 != (LPVOID)0x0) {
    FUN_14370d750(pvVar14,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438e2340 FUN_1438e2340 body=41 status=ok
// SIG undefined FUN_1438e2340(void)

void FUN_1438e2340(void)

{
  DAT_146b955a8 = FUN_14378a650(DAT_146b845b8,"AI/Deprecated/Sensor AABBs",FUN_1438e1d00);
  return;
}



// FUNCTION 1438e2370 FUN_1438e2370 body=3 status=ok
// SIG undefined FUN_1438e2370(void)

undefined1 FUN_1438e2370(void)

{
  return 8;
}



// FUNCTION 1438e2380 FUN_1438e2380 body=148 status=ok
// SIG undefined FUN_1438e2380(void)

void FUN_1438e2380(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavMeshGeometryViewer,void_(__cdecl_hkaiNavMeshGeometryViewer::*)(hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e2420 FUN_1438e2420 body=148 status=ok
// SIG undefined FUN_1438e2420(void)

void FUN_1438e2420(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::
              MemberSlot<hkaiNavMeshGeometryViewer,void_(__cdecl_hkaiNavMeshGeometryViewer::*)(hkaiWorld_const*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e24c0 FUN_1438e24c0 body=31 status=ok
// SIG undefined FUN_1438e24c0(void)

undefined8 FUN_1438e24c0(undefined8 param_1,undefined8 param_2)

{
  FUN_14370e900();
  return param_2;
}



// FUNCTION 1438e24e0 FUN_1438e24e0 body=80 status=ok
// SIG undefined FUN_1438e24e0(void)

undefined8 * FUN_1438e24e0(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiNavMeshBaseViewer::vftable;
  param_1[3] = hkaiNavMeshBaseViewer::vftable;
  param_1[0xb] = hkaiNavMeshBaseViewer::vftable;
  FUN_1438dad80(param_1 + 0xe);
  *(undefined2 *)((longlong)param_1 + 0x91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  return param_1;
}



// FUNCTION 1438e2530 FUN_1438e2530 body=99 status=ok
// SIG undefined FUN_1438e2530(void)

undefined8 * FUN_1438e2530(undefined8 *param_1)

{
  FUN_1438e24e0();
  *param_1 = hkaiNavMeshGeometryViewer::vftable;
  param_1[3] = hkaiNavMeshGeometryViewer::vftable;
  param_1[0xb] = hkaiNavMeshGeometryViewer::vftable;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((longlong)param_1 + 0x92) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  return param_1;
}



// FUNCTION 1438e25a0 FUN_1438e25a0 body=164 status=ok
// SIG undefined FUN_1438e25a0(void)

void FUN_1438e25a0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = hkaiNavMeshBaseViewer::vftable;
  param_1[3] = hkaiNavMeshBaseViewer::vftable;
  param_1[0xb] = hkaiNavMeshBaseViewer::vftable;
  iVar1 = 0;
  if (param_1[0xc] != 0) {
    for (; iVar1 < *(int *)(param_1[0xc] + 0x40); iVar1 = iVar1 + 1) {
    }
  }
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x28c)) {
    FUN_143702e10(uVar2,param_1[0x50],4,*(uint *)((longlong)param_1 + 0x28c) & 0x3fffffff);
  }
  param_1[0x50] = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80000000;
  FUN_1438da2f0(param_1 + 0x38);
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e2650 FUN_1438e2650 body=564 status=ok
// SIG undefined FUN_1438e2650(void)

void FUN_1438e2650(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  code *pcVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar1 = *(int *)(param_1 + 0x55);
  *param_1 = hkaiNavMeshGeometryViewer::vftable;
  param_1[3] = hkaiNavMeshGeometryViewer::vftable;
  param_1[0xb] = hkaiNavMeshGeometryViewer::vftable;
  while (iVar1 != 0) {
    local_res8[0] = *(undefined4 *)((undefined8 *)param_1[0x54] + 1);
    FUN_1438e3c40(param_1,*(undefined8 *)param_1[0x54],local_res8);
    iVar1 = *(int *)(param_1 + 0x55);
  }
  uVar7 = 0;
  lVar5 = param_1[0xc];
  uVar4 = uVar7;
  while (lVar5 != 0) {
    if (*(int *)(param_1[0xc] + 0x40) <= (int)uVar4) break;
    pcVar8 = FUN_1438e3820;
    uVar9 = 0;
    local_48 = 0x438e3820;
    uStack_44 = 1;
    lVar5 = *(longlong *)(uVar7 + *(longlong *)(param_1[0xc] + 0x38));
    uStack_40 = 0;
    FUN_1438e24c0(lVar5 + 0x68,local_res8,param_1,&local_48);
    pcVar10 = FUN_1438e3b80;
    uVar11 = 0;
    local_48 = 0x438e3b80;
    uStack_44 = 1;
    uStack_40 = 0;
    FUN_1438e24c0(lVar5 + 0x38,local_res10,param_1,&local_48,pcVar8,uVar9);
    local_48 = 0x438e3ba0;
    uStack_44 = 1;
    uStack_40 = 0;
    FUN_1438e24c0(lVar5 + 0x40,local_res18,param_1,&local_48,pcVar8,uVar9,pcVar10,uVar11);
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar7 = uVar7 + 8;
    lVar5 = param_1[0xc];
  }
  uVar2 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 0x55) + -1);
  if (-1 < *(int *)(param_1 + 0x55) + -1) {
    puVar6 = (uint *)(param_1[0x54] + 0x1c + lVar5 * 0x70);
    do {
      uVar3 = FUN_143703a50();
      puVar6[-1] = 0;
      if (-1 < (int)*puVar6) {
        FUN_143702e10(uVar3,*(undefined8 *)(puVar6 + -3),0x18,*puVar6 & 0x3fffffff);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      *puVar6 = 0x80000000;
      puVar6 = puVar6 + -0x1c;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2ac)) {
    FUN_143702e10(uVar2,param_1[0x54],0x70,*(uint *)((longlong)param_1 + 0x2ac) & 0x3fffffff);
  }
  param_1[0x54] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x80000000;
  FUN_1438e25a0(param_1);
  return;
}



// FUNCTION 1438e2884 FUN_1438e2884 body=9 status=ok
// SIG undefined FUN_1438e2884(void)

void FUN_1438e2884(longlong param_1)

{
  FUN_1438e28c0(param_1 + -0x18);
  return;
}



// FUNCTION 1438e2890 FUN_1438e2890 body=9 status=ok
// SIG undefined FUN_1438e2890(void)

void FUN_1438e2890(longlong param_1)

{
  FUN_1438e28c0(param_1 + -0x58);
  return;
}



// FUNCTION 1438e289c FUN_1438e289c body=9 status=ok
// SIG undefined FUN_1438e289c(void)

void FUN_1438e289c(longlong param_1)

{
  FUN_1438e2950(param_1 + -0x18);
  return;
}



// FUNCTION 1438e28a8 FUN_1438e28a8 body=9 status=ok
// SIG undefined FUN_1438e28a8(void)

void FUN_1438e28a8(longlong param_1)

{
  FUN_1438e2950(param_1 + -0x58);
  return;
}



// FUNCTION 1438e28c0 FUN_1438e28c0 body=139 status=ok
// SIG undefined FUN_1438e28c0(void)

longlong FUN_1438e28c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e25a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x2a0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2a0);
    }
  }
  return param_1;
}



// FUNCTION 1438e2950 FUN_1438e2950 body=139 status=ok
// SIG undefined FUN_1438e2950(void)

longlong FUN_1438e2950(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e2650();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x2c0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2c0);
    }
  }
  return param_1;
}



// FUNCTION 1438e29e0 FUN_1438e29e0 body=2253 status=ok
// SIG undefined FUN_1438e29e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e29e0(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,int param_5,
                  longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  LPVOID pvVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  byte bVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  longlong lVar27;
  int local_res10 [2];
  undefined8 *local_188;
  undefined1 *local_180;
  uint local_178;
  uint local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  uint local_160;
  uint local_15c;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  LPVOID local_108;
  longlong local_100 [5];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [96];
  
  local_108 = TlsGetValue(DAT_146b8198c);
  if (local_108 != (LPVOID)0x0) {
    FUN_14370d5c0(local_108,"TtaddFaceGeometry");
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  local_188 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar11 + 0x58),0x38);
  if (local_188 == (undefined8 *)0x0) {
    local_188 = (undefined8 *)0x0;
  }
  else {
    local_188[1] = 0;
    *(undefined4 *)(local_188 + 2) = 0x1ffff;
    *local_188 = hkGeometry::vftable;
    local_188[3] = 0;
    *(undefined4 *)(local_188 + 4) = 0;
    *(undefined4 *)((longlong)local_188 + 0x24) = 0x80000000;
    local_188[5] = 0;
    *(undefined4 *)(local_188 + 6) = 0;
    *(undefined4 *)((longlong)local_188 + 0x34) = 0x80000000;
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar11 + 0x58),0x80);
  if (lVar12 == 0) {
    local_138 = 0;
  }
  else {
    local_138 = FUN_143791790(lVar12);
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar11 + 0x58),0x80);
  if (lVar12 == 0) {
    local_130 = 0;
  }
  else {
    local_130 = FUN_143791790(lVar12);
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar11 + 0x58),0x80);
  if (lVar12 == 0) {
    local_128 = 0;
  }
  else {
    local_128 = FUN_143791790(lVar12);
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))();
  if (lVar12 == 0) {
    local_150 = 0;
  }
  else {
    local_150 = FUN_143791790(lVar12);
  }
  iVar25 = *param_4;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0xffffffff;
  if (iVar25 < param_5 + iVar25) {
    do {
      lVar12 = *(longlong *)(param_2 + 0x18);
      if (*(int *)(lVar12 + 0x108) == 0) {
        bVar21 = 0;
      }
      else {
        bVar21 = *(byte *)((longlong)iVar25 + *(longlong *)(lVar12 + 0x100));
      }
      if ((bVar21 & 1) == 0) {
        piVar13 = (int *)FUN_1437fb610(*(undefined8 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x20)
                                       ,lVar12 + 0xb0,lVar12 + 0xd0,lVar12 + 0x90,iVar25);
        iVar23 = (short)piVar13[2] + -2;
        uVar14 = FUN_143703a50();
        iVar1 = *(int *)(local_188 + 6);
        uVar19 = *(uint *)((longlong)local_188 + 0x34) & 0x3fffffff;
        iVar24 = iVar1 + iVar23;
        if ((int)uVar19 < iVar24) {
          iVar5 = uVar19 * 2;
          if (iVar24 < iVar5) {
            iVar24 = iVar5;
          }
          FUN_14370c310(uVar14,local_188 + 5,iVar24,0x10);
        }
        *(int *)(local_188 + 6) = *(int *)(local_188 + 6) + iVar23;
        lVar12 = *(longlong *)(param_2 + 0x18);
        lVar27 = local_188[5];
        piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar12 + 0x28),*(undefined4 *)(lVar12 + 0x30)
                                       ,lVar12 + 0xc0,lVar12 + 0xe0,lVar12 + 0x70,*piVar13);
        local_res10[0] = *piVar15;
        local_140 = FUN_1438e36d0(local_res10,&local_120,param_2,local_188 + 3);
        uVar19 = (uint)*(ushort *)(piVar13 + 2);
        iVar24 = 0;
        if (0 < (short)*(ushort *)(piVar13 + 2)) {
          puVar26 = (undefined4 *)((longlong)iVar1 * 0x10 + lVar27 + 8);
          do {
            lVar12 = *(longlong *)(param_2 + 0x18);
            piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar12 + 0x28),
                                           *(undefined4 *)(lVar12 + 0x30),lVar12 + 0xc0,
                                           lVar12 + 0xe0,lVar12 + 0x70,*piVar13 + iVar24);
            if ((0 < iVar24) && (iVar24 < (short)uVar19 + -1)) {
              local_res10[0] = *piVar15;
              uVar9 = FUN_1438e36d0(local_res10,&local_120,param_2,local_188 + 3);
              local_res10[0] = piVar15[1];
              uVar10 = FUN_1438e36d0(local_res10,&local_120,param_2,local_188 + 3);
              puVar26[-2] = local_140;
              puVar26[-1] = uVar9;
              *puVar26 = uVar10;
              puVar26 = puVar26 + 4;
            }
            uVar19 = piVar15[2];
            if (((uVar19 == 0xffffffff) || ((*(byte *)(piVar15 + 4) & 0x40) != 0)) ||
               (iVar25 < (int)(piVar15[3] & 0x3fffffU))) {
LAB_1438e2e16:
              lVar12 = *(longlong *)(param_2 + 0x18);
              iVar1 = *piVar15;
              iVar23 = *(int *)(lVar12 + 0x40);
              if (iVar1 < iVar23) {
                puVar20 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar12 + 0x38));
              }
              else {
                puVar20 = (undefined8 *)
                          ((longlong)(iVar1 - iVar23) * 0x10 + *(longlong *)(lVar12 + 0xf0));
              }
              iVar1 = piVar15[1];
              uVar14 = *puVar20;
              uVar18 = puVar20[1];
              if (iVar1 < iVar23) {
                puVar20 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar12 + 0x38));
              }
              else {
                puVar20 = (undefined8 *)
                          ((longlong)(iVar1 - iVar23) * 0x10 + *(longlong *)(lVar12 + 0xf0));
              }
              uVar6 = *puVar20;
              uVar7 = puVar20[1];
              lVar12 = local_130;
              if (((uVar19 != 0xffffffff) &&
                  (lVar12 = local_128, (*(byte *)(piVar15 + 4) & 0x40) == 0)) &&
                 (lVar12 = local_138, (*(byte *)(piVar15 + 4) & 2) != 0)) {
                lVar12 = local_150;
              }
              plVar22 = (longlong *)(lVar12 + 0x70);
              uVar17 = FUN_143703a50();
              if (*(uint *)(lVar12 + 0x78) == (*(uint *)(lVar12 + 0x7c) & 0x3fffffff)) {
                FUN_14370c460(uVar17,plVar22,0x10);
              }
              puVar20 = (undefined8 *)((longlong)*(int *)(lVar12 + 0x78) * 0x10 + *plVar22);
              *puVar20 = uVar14;
              puVar20[1] = uVar18;
              *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + 1;
              uVar14 = FUN_143703a50();
              if (*(uint *)(lVar12 + 0x78) == (*(uint *)(lVar12 + 0x7c) & 0x3fffffff)) {
                FUN_14370c460(uVar14,plVar22,0x10);
              }
              puVar20 = (undefined8 *)((longlong)*(int *)(lVar12 + 0x78) * 0x10 + *plVar22);
              *puVar20 = uVar6;
              puVar20[1] = uVar7;
              *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + 1;
            }
            else {
              lVar12 = *(longlong *)(param_2 + 0x18);
              piVar16 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar12 + 0x28),
                                             *(undefined4 *)(lVar12 + 0x30),lVar12 + 0xc0,
                                             lVar12 + 0xe0,lVar12 + 0x70,uVar19 & 0x3fffff);
              if (((*piVar15 == *piVar16) && (piVar15[1] == piVar16[1])) ||
                 ((*piVar15 == piVar16[1] && (piVar15[1] == *piVar16)))) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              if (!bVar8) goto LAB_1438e2e16;
            }
            uVar19 = (uint)(short)piVar13[2];
            iVar24 = iVar24 + 1;
          } while (iVar24 < (int)uVar19);
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < param_5 + *param_4);
  }
  uVar14 = 0;
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar11 + 0x58),0x70);
  if (lVar12 != 0) {
    uVar14 = FUN_143790590(lVar12,local_188);
  }
  local_180 = local_170;
  local_178 = 0;
  local_174 = 0x80000001;
  uVar18 = FUN_143703a50();
  if (local_178 == (local_174 & 0x3fffffff)) {
    FUN_14370c460(uVar18,&local_180,8);
  }
  *(undefined8 *)(local_180 + (longlong)(int)local_178 * 8) = uVar14;
  local_178 = local_178 + 1;
  local_d8 = _DAT_1467f0890;
  uStack_d0 = uRam00000001467f0898;
  local_c8 = _DAT_1467f08a0;
  uStack_c0 = uRam00000001467f08a8;
  local_b8 = _DAT_1467f08b0;
  uStack_b0 = uRam00000001467f08b8;
  local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x80);
  uStack_a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x88);
  FUN_14375f6c0(local_98,&local_d8,param_2 + 0x40);
  plVar22 = *(longlong **)(param_1 + 0x30);
  uVar19 = *(uint *)(param_1 + 0xc0);
  lVar12 = *plVar22;
  uVar9 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))();
  lVar27 = param_6;
  (**(code **)(lVar12 + 0x28))
            (plVar22,&param_5,param_6,&local_180,local_98,
             uVar19 >> 1 & 0x7f000000 | uVar19 & 0xffffff,7,uVar9);
  FUN_14370c150(uVar14);
  plVar22 = local_100;
  puVar20 = &local_150;
  local_100[0] = local_138;
  lVar12 = 4;
  uVar19 = *(uint *)(param_1 + 200);
  local_100[1] = local_130;
  local_100[2] = local_128;
  local_100[3] = local_150;
  local_148 = *(undefined4 *)(param_1 + 0xcc);
  local_150 = CONCAT44(*(undefined4 *)(param_1 + 0xc4),uVar19);
  local_144 = ((uVar19 ^ *(uint *)(param_1 + 0xc0)) >> 1 & 0x7f7f7f) +
              (uVar19 & *(uint *)(param_1 + 0xc0)) | 0xff000000;
  do {
    lVar27 = lVar27 + 1;
    local_168 = local_158;
    local_160 = 0;
    lVar2 = *plVar22;
    local_15c = 0x80000001;
    uVar14 = FUN_143703a50();
    if (local_160 == (local_15c & 0x3fffffff)) {
      FUN_14370c460(uVar14,&local_168,8);
    }
    *(longlong *)(local_168 + (longlong)(int)local_160 * 8) = lVar2;
    plVar3 = *(longlong **)(param_1 + 0x30);
    local_160 = local_160 + 1;
    lVar4 = *plVar3;
    uVar9 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))();
    (**(code **)(lVar4 + 0x28))
              (plVar3,&param_5,lVar27,&local_168,local_98,*(undefined4 *)puVar20,7,uVar9);
    FUN_14370c150(lVar2);
    uVar14 = FUN_143703a50();
    local_160 = 0;
    if (-1 < (int)local_15c) {
      FUN_143702e10(uVar14,local_168,8,local_15c & 0x3fffffff);
    }
    puVar20 = (undefined8 *)((longlong)puVar20 + 4);
    plVar22 = plVar22 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar14 = FUN_143703a50();
  local_178 = 0;
  if (-1 < (int)local_174) {
    FUN_143702e10(uVar14,local_180,8,local_174 & 0x3fffffff);
  }
  local_180 = (undefined1 *)0x0;
  local_174 = 0x80000000;
  uVar14 = FUN_143703a50();
  FUN_143700a90(&local_120,uVar14);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_120);
  if (local_108 != (LPVOID)0x0) {
    FUN_14370d750(local_108,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438e32b0 FUN_1438e32b0 body=481 status=ok
// SIG undefined FUN_1438e32b0(void)

void FUN_1438e32b0(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_res10;
  
  plVar9 = (longlong *)(param_1 + 0x2a0);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x2a8) == (*(uint *)(param_1 + 0x2ac) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar9,0x70);
  }
  iVar7 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x2a8) * 0x70 + *plVar9;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = 0x80000000;
    FUN_1438e3d60();
  }
  plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0x2a8) * 0x70 + *plVar9);
  *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
  local_res10 = plVar8;
  FUN_1438e3d60(plVar8);
  *(int *)(plVar8 + 1) = *param_3;
  *plVar8 = param_2;
  lVar5 = *(longlong *)
           ((longlong)*param_3 * 0x100 + *(longlong *)(*(longlong *)(param_2 + 0x130) + 0x38));
  plVar9 = plVar8;
  if (0 < *(int *)(*(longlong *)(lVar5 + 0x18) + 0x20)) {
    do {
      uVar3 = FUN_143703a50();
      if (*(uint *)(plVar8 + 3) == (*(uint *)((longlong)plVar8 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar3,plVar8 + 2,0x18);
      }
      piVar1 = (int *)(plVar8[2] + (longlong)(int)plVar8[3] * 0x18);
      *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
      iVar6 = *(int *)(*(longlong *)(lVar5 + 0x18) + 0x20) - iVar7;
      if (0x400 < iVar6) {
        iVar6 = 0x400;
      }
      piVar1[1] = iVar6;
      *piVar1 = iVar7;
      uVar3 = FUN_1438e34a0(param_1);
      *(undefined8 *)(piVar1 + 2) = uVar3;
      local_res8[0] = iVar7;
      iVar2 = FUN_1438e3630(lVar5,local_res8,iVar6);
      piVar1[4] = iVar2;
      local_res8[0] = iVar7;
      FUN_1438e29e0(param_1,lVar5,param_2,local_res8,iVar6,*(undefined8 *)(piVar1 + 2));
      iVar7 = iVar7 + 0x400;
      plVar9 = local_res10;
    } while (iVar7 < *(int *)(*(longlong *)(lVar5 + 0x18) + 0x20));
  }
  if (*(int *)(*(longlong *)(lVar5 + 0x18) + 0xd8) < 1) {
    plVar9[4] = 0;
  }
  else {
    iVar7 = *(int *)(*(longlong *)(lVar5 + 0x18) + 0x20);
    lVar4 = FUN_1438e34a0(param_1);
    plVar9[4] = lVar4;
    local_res8[0] = iVar7;
    FUN_1438e29e0(param_1,lVar5,param_2,local_res8,
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0xd8),lVar4);
  }
  return;
}



// FUNCTION 1438e34a0 FUN_1438e34a0 body=87 status=ok
// SIG undefined FUN_1438e34a0(void)

longlong FUN_1438e34a0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  int local_res10 [6];
  
  local_res10[0] = *(int *)(param_1 + 0x2b0);
  *(int *)(param_1 + 0x2b0) = local_res10[0] + 5;
  bVar1 = FUN_14378ec00(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38),&DAT_14682ae10);
  cVar2 = FUN_1438e2370(local_res8);
  lVar3 = FRollingHash::GetWindowSize(local_res10);
  return lVar3 + ((ulonglong)bVar1 << (0x2eU - cVar2 & 0x3f));
}



// FUNCTION 1438e3500 FUN_1438e3500 body=140 status=ok
// SIG undefined FUN_1438e3500(void)

uint FUN_1438e3500(uint param_1)

{
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((param_1 & 1) != 0) {
    return param_1 >> 1 ^ 0xedb88320;
  }
  return param_1 >> 1;
}



// FUNCTION 1438e3590 FUN_1438e3590 body=36 status=ok
// SIG undefined FUN_1438e3590(void)

void FUN_1438e3590(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  (**(code **)(param_1 + 0x18))
            ((longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x10),param_2,local_res8);
  return;
}



// FUNCTION 1438e35c0 FUN_1438e35c0 body=99 status=ok
// SIG undefined FUN_1438e35c0(void)

longlong FUN_1438e35c0(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x2c0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e2530(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e3630 FUN_1438e3630 body=140 status=ok
// SIG undefined FUN_1438e3630(void)

uint FUN_1438e3630(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *param_2;
  lVar7 = (longlong)iVar1;
  uVar6 = 0xffffffff;
  if (iVar1 < iVar1 + param_3) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar8 = (ulonglong)(uint)((iVar1 + param_3) - iVar1);
    do {
      if (iVar2 == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(lVar7 + *(longlong *)(lVar3 + 0x100));
      }
      uVar4 = FUN_1438e3500((bVar5 ^ uVar6) & 0xff);
      lVar7 = lVar7 + 1;
      uVar6 = uVar6 >> 8 ^ uVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return ~uVar6;
}



// FUNCTION 1438e36c0 FUN_1438e36c0 body=7 status=ok
// SIG undefined FUN_1438e36c0(void)

undefined4 FUN_1438e36c0(void)

{
  return DAT_146b955b4;
}



// FUNCTION 1438e36d0 FUN_1438e36d0 body=243 status=ok
// SIG undefined FUN_1438e36d0(void)

int FUN_1438e36d0(int *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_res8;
  longlong local_res10;
  
  local_res10 = (longlong)*param_1;
  local_res8 = -1;
  piVar4 = (int *)FUN_14372d420(param_2,&local_res10,&local_res8);
  iVar1 = *piVar4;
  if (iVar1 == -1) {
    local_res10 = (longlong)*param_1;
    iVar1 = (int)param_4[1];
    local_res8 = (longlong)iVar1;
    uVar5 = FUN_143703a50();
    FUN_14372d6e0(param_2,uVar5,&local_res10,&local_res8);
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_4,0x10);
    }
    puVar7 = (undefined8 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    lVar3 = *(longlong *)(param_3 + 0x18);
    iVar2 = *param_1;
    if (iVar2 < *(int *)(lVar3 + 0x40)) {
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      puVar6 = (undefined8 *)
               ((longlong)(iVar2 - *(int *)(lVar3 + 0x40)) * 0x10 + *(longlong *)(lVar3 + 0xf0));
    }
    uVar5 = puVar6[1];
    *puVar7 = *puVar6;
    puVar7[1] = uVar5;
  }
  return iVar1;
}



// FUNCTION 1438e37d0 FUN_1438e37d0 body=68 status=ok
// SIG undefined FUN_1438e37d0(void)

ulonglong FUN_1438e37d0(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2a8)) {
    plVar1 = *(longlong **)(param_1 + 0x2a0);
    uVar3 = uVar2;
    do {
      if ((*plVar1 == param_2) && ((int)plVar1[1] == *param_3)) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0xe;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x2a8));
  }
  return 0xffffffff;
}



// FUNCTION 1438e3820 FUN_1438e3820 body=862 status=ok
// SIG undefined FUN_1438e3820(void)

void FUN_1438e3820(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  int local_res8 [2];
  longlong local_res10;
  int local_res20 [2];
  longlong local_68;
  uint local_60;
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_48;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_res10 = param_2;
    pvVar6 = TlsGetValue(DAT_146b8198c);
    if (pvVar6 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar6,"TthkaiNavMeshGeometryViewer");
    }
    iVar11 = *(int *)(*(longlong *)(param_2 + 0x130) + 0x40);
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    uVar10 = iVar11 + 0x1f >> 5;
    local_50 = uVar10;
    if (uVar10 == 0) {
      local_58 = 0;
    }
    else {
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar9 = uVar10 * 4 + 0x7f & 0xffffff80;
      local_58 = *(longlong *)((longlong)pvVar7 + 0x18);
      uVar15 = (int)uVar9 + local_58;
      if ((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar9) ||
         (*(ulonglong *)((longlong)pvVar7 + 0x20) < uVar15)) {
        local_58 = FUN_1437138c0(pvVar7);
      }
      else {
        *(ulonglong *)((longlong)pvVar7 + 0x18) = uVar15;
      }
    }
    local_5c = uVar10 | 0x80000000;
    local_68 = local_58;
    local_48 = iVar11;
    uVar8 = FUN_143703a50();
    if ((int)(local_5c & 0x3fffffff) < (int)uVar10) {
      uVar2 = (local_5c & 0x3fffffff) * 2;
      uVar9 = uVar10;
      if ((int)uVar10 < (int)uVar2) {
        uVar9 = uVar2;
      }
      FUN_14370c310(uVar8,&local_68,uVar9,4);
    }
    lVar1 = *param_3;
    local_60 = uVar10;
    if (lVar1 != 0) {
      local_res8[0] = 0;
      iVar11 = (int)(((longlong)*(int *)(lVar1 + 0x20) << 5) >> 5);
      if (0 < iVar11) {
        piVar17 = (int *)(*(longlong *)(lVar1 + 0x18) + 8);
        do {
          iVar14 = local_res8[0];
          if (((*piVar17 != 0) &&
              (lVar1 = *(longlong *)
                        ((longlong)local_res8[0] * 0x100 +
                        *(longlong *)(*(longlong *)(param_2 + 0x130) + 0x38)), lVar1 != 0)) &&
             (local_res20[0] = local_res8[0], iVar4 = FUN_1438e37d0(param_1,param_2,local_res20),
             lVar3 = local_res10, -1 < iVar4)) {
            iVar12 = 0;
            lVar13 = (longlong)iVar4 * 0x70 + *(longlong *)(param_1 + 0x2a0);
            if (0 < *(int *)(lVar13 + 0x18)) {
              lVar18 = 0;
              do {
                piVar16 = (int *)(*(longlong *)(lVar13 + 0x10) + lVar18);
                iVar14 = piVar16[1];
                iVar4 = *piVar16;
                local_res20[0] = iVar4;
                iVar5 = FUN_1438e3630(lVar1,local_res20,iVar14);
                if (iVar5 != piVar16[4]) {
                  piVar16[4] = iVar5;
                  FUN_1438e3bf0(param_1,*(undefined8 *)(piVar16 + 2));
                  uVar8 = FUN_1438e34a0(param_1);
                  *(undefined8 *)(piVar16 + 2) = uVar8;
                  local_res20[0] = iVar4;
                  FUN_1438e29e0(param_1,lVar1,lVar3,local_res20,iVar14,uVar8);
                }
                iVar12 = iVar12 + 1;
                lVar18 = lVar18 + 0x18;
                param_2 = local_res10;
                iVar14 = local_res8[0];
              } while (iVar12 < *(int *)(lVar13 + 0x18));
            }
            if (*(longlong *)(lVar13 + 0x20) != 0) {
              FUN_1438e3bf0(param_1);
            }
            if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0xd8) < 1) {
              *(undefined8 *)(lVar13 + 0x20) = 0;
            }
            else {
              iVar4 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x20);
              uVar8 = FUN_1438e34a0(param_1);
              *(undefined8 *)(lVar13 + 0x20) = uVar8;
              local_res8[0] = iVar4;
              FUN_1438e29e0(param_1,lVar1,param_2,local_res8,
                            *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0xd8),uVar8);
            }
          }
          local_res8[0] = iVar14 + 1;
          piVar17 = piVar17 + 8;
        } while (local_res8[0] < iVar11);
      }
    }
    FUN_1437f12e0(&local_68);
    if (pvVar6 != (LPVOID)0x0) {
      FUN_14370d750(pvVar6,&DAT_145b8eda0);
    }
  }
  return;
}



// FUNCTION 1438e3b80 FUN_1438e3b80 body=26 status=ok
// SIG undefined FUN_1438e3b80(void)

void FUN_1438e3b80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_1438e32b0(param_1,param_2,local_res18);
  return;
}



// FUNCTION 1438e3ba0 FUN_1438e3ba0 body=26 status=ok
// SIG undefined FUN_1438e3ba0(void)

void FUN_1438e3ba0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_1438e3c40(param_1,param_2,local_res18);
  return;
}



// FUNCTION 1438e3bc0 FUN_1438e3bc0 body=41 status=ok
// SIG undefined FUN_1438e3bc0(void)

void FUN_1438e3bc0(void)

{
  DAT_146b955b4 = FUN_14378a650(DAT_146b845b8,"AI/Nav Meshes/Geometry",FUN_1438e35c0);
  return;
}



// FUNCTION 1438e3bf0 FUN_1438e3bf0 body=75 status=ok
// SIG undefined FUN_1438e3bf0(void)

void FUN_1438e3bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  
  lVar1 = 5;
  do {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
              (*(longlong **)(param_1 + 0x30),local_res18,param_2);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438e3c40 FUN_1438e3c40 body=287 status=ok
// SIG undefined FUN_1438e3c40(void)

void FUN_1438e3c40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_3;
  iVar1 = FUN_1438e37d0(param_1,param_2,local_res18);
  if (-1 < iVar1) {
    iVar4 = 0;
    lVar7 = (longlong)iVar1 * 0x70;
    lVar5 = *(longlong *)(param_1 + 0x2a0) + lVar7;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar6 = 0;
      do {
        FUN_1438e3bf0(param_1,*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar6));
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x18;
      } while (iVar4 < *(int *)(lVar5 + 0x18));
    }
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      FUN_1438e3bf0(param_1);
    }
    lVar5 = *(longlong *)(param_1 + 0x2a0) + lVar7;
    uVar2 = FUN_143703a50();
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar5 + 0x1c)) {
      FUN_143702e10(uVar2,*(undefined8 *)(lVar5 + 0x10),0x18,*(uint *)(lVar5 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = 0x80000000;
    *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + -1;
    if (*(int *)(param_1 + 0x2a8) != iVar1) {
      lVar5 = 0xe;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x2a0) + lVar7);
      lVar7 = ((longlong)*(int *)(param_1 + 0x2a8) * 0x70 + *(longlong *)(param_1 + 0x2a0)) -
              (longlong)puVar3;
      do {
        *puVar3 = *(undefined8 *)(lVar7 + (longlong)puVar3);
        puVar3 = puVar3 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1438e3d60 FUN_1438e3d60 body=20 status=ok
// SIG undefined FUN_1438e3d60(void)

void FUN_1438e3d60(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 1438e3d80 FUN_1438e3d80 body=200 status=ok
// SIG undefined FUN_1438e3d80(void)

void FUN_1438e3d80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    uVar5 = *(undefined4 *)(lVar1 + 0x84);
    uVar3 = *(undefined4 *)(lVar1 + 0x88);
    uVar4 = *(undefined4 *)(lVar1 + 0x8c);
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar1 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)((longlong)param_1 + 100) = uVar4;
    plVar7 = *(longlong **)(lVar1 + 0x38);
    uVar8 = (ulonglong)((longlong)(plVar7 + *(int *)(lVar1 + 0x40)) + (7 - (longlong)plVar7)) >> 3;
    if (plVar7 + *(int *)(lVar1 + 0x40) < plVar7) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        lVar1 = param_1[3];
        uVar2 = *(undefined8 *)(*plVar7 + 0x130);
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
        FUN_1438df060(lVar1,uVar5,param_1 + 0xb,uVar2);
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}



// FUNCTION 1438e3e50 FUN_1438e3e50 body=899 status=ok
// SIG undefined FUN_1438e3e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e3e50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int local_res8 [2];
  ulonglong local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FUN_1438e3d80();
  lVar12 = *(longlong *)(param_1 + 0x48);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x38);
    local_res20 = 0;
    uVar4 = (ulonglong)((longlong)(plVar7 + *(int *)(lVar12 + 0x40)) + (7 - (longlong)plVar7)) >> 3;
    if (plVar7 + *(int *)(lVar12 + 0x40) < plVar7) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      do {
        iVar11 = 0;
        lVar12 = *plVar7;
        pvVar5 = TlsGetValue(DAT_146b8198c);
        if (pvVar5 != (LPVOID)0x0) {
          FUN_14370d620(pvVar5,"LthkaiNavMeshGeometryViewer::step","Stadd");
        }
        lVar1 = *(longlong *)(lVar12 + 0x130);
        if (0 < *(int *)(param_1 + 0x290)) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar8 + *(longlong *)(param_1 + 0x288)) == lVar12) &&
               (iVar3 = *(int *)(lVar8 + 8 + *(longlong *)(param_1 + 0x288)),
               *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(lVar1 + 0x38)) == 0)) {
              local_res8[0] = iVar3;
              FUN_1438e3c40(param_1 + -0x18,lVar12,local_res8);
              iVar11 = iVar11 + -1;
              lVar8 = lVar8 + -0x70;
            }
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 0x70;
          } while (iVar11 < *(int *)(param_1 + 0x290));
        }
        pvVar6 = TlsGetValue(DAT_146b8198c);
        if (pvVar6 != (LPVOID)0x0) {
          FUN_14370d800(pvVar6,"Stremove");
        }
        lVar8 = *(longlong *)(lVar12 + 0x130);
        uVar10 = 0;
        uVar9 = uVar10;
        if (0 < *(int *)(lVar8 + 0x40)) {
          do {
            iVar11 = (int)uVar9;
            if ((*(longlong *)((longlong)iVar11 * 0x100 + *(longlong *)(lVar8 + 0x38)) != 0) &&
               (local_res8[0] = iVar11, iVar3 = FUN_1438e37d0(param_1 + -0x18,lVar12,local_res8),
               iVar3 < 0)) {
              local_res8[0] = iVar11;
              FUN_1438e32b0(param_1 + -0x18,lVar12,local_res8);
            }
            lVar8 = *(longlong *)(lVar12 + 0x130);
            uVar9 = (ulonglong)(iVar11 + 1U);
          } while ((int)(iVar11 + 1U) < *(int *)(lVar8 + 0x40));
        }
        pvVar6 = TlsGetValue(DAT_146b8198c);
        if (pvVar6 != (LPVOID)0x0) {
          FUN_14370d800(pvVar6,"StupdateTransforms");
        }
        local_88 = _DAT_1467f0890;
        uStack_80 = uRam00000001467f0898;
        local_68 = _DAT_1467f08b0;
        uStack_60 = uRam00000001467f08b8;
        local_78 = _DAT_1467f08a0;
        uStack_70 = uRam00000001467f08a8;
        local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x80);
        uStack_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x88);
        uVar9 = uVar10;
        if (0 < *(int *)(param_1 + 0x290)) {
          do {
            iVar11 = 0;
            lVar8 = *(longlong *)(param_1 + 0x288);
            FUN_14375f6c0(&local_c8,&local_88,
                          *(longlong *)
                           ((longlong)*(int *)(uVar10 + 8 + lVar8) * 0x100 +
                           *(longlong *)(lVar1 + 0x38)) + 0x40);
            lVar12 = uVar10 + lVar8;
            local_res8[0] = 0;
            cVar2 = FUN_14375f5f0(lVar12 + 0x30,&local_c8,local_res8);
            if (cVar2 == '\0') {
              *(undefined8 *)(lVar12 + 0x30) = local_c8;
              *(undefined8 *)(lVar12 + 0x38) = uStack_c0;
              *(undefined8 *)(lVar12 + 0x40) = local_b8;
              *(undefined8 *)(lVar12 + 0x48) = uStack_b0;
              *(undefined4 *)(lVar12 + 0x50) = local_a8;
              *(undefined4 *)(lVar12 + 0x54) = uStack_a4;
              *(undefined4 *)(lVar12 + 0x58) = uStack_a0;
              *(undefined4 *)(lVar12 + 0x5c) = uStack_9c;
              *(undefined8 *)(lVar12 + 0x60) = local_98;
              *(undefined8 *)(lVar12 + 0x68) = uStack_90;
              if (0 < *(int *)(uVar10 + 0x18 + lVar8)) {
                lVar12 = 0;
                do {
                  FUN_1438e4240(param_1 + -0x18,
                                *(undefined8 *)(lVar12 + 8 + *(longlong *)(uVar10 + 0x10 + lVar8)),
                                &local_c8);
                  iVar11 = iVar11 + 1;
                  lVar12 = lVar12 + 0x18;
                } while (iVar11 < *(int *)(uVar10 + 0x18 + lVar8));
              }
              lVar12 = *(longlong *)(uVar10 + 0x20 + lVar8);
              if (lVar12 != 0) {
                FUN_1438e4240(param_1 + -0x18,lVar12,&local_c8);
              }
            }
            uVar13 = (int)uVar9 + 1;
            uVar10 = uVar10 + 0x70;
            uVar9 = (ulonglong)uVar13;
          } while ((int)uVar13 < *(int *)(param_1 + 0x290));
        }
        if (pvVar5 != (LPVOID)0x0) {
          FUN_14370d7a0(pvVar5,&DAT_145b8dd34);
        }
        plVar7 = plVar7 + 1;
        local_res20 = local_res20 + 1;
      } while (local_res20 != uVar4);
    }
  }
  return;
}



// FUNCTION 1438e41e0 FUN_1438e41e0 body=45 status=ok
// SIG undefined FUN_1438e41e0(void)

void FUN_1438e41e0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e2380(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438e4210 FUN_1438e4210 body=45 status=ok
// SIG undefined FUN_1438e4210(void)

void FUN_1438e4210(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e2420(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438e4240 FUN_1438e4240 body=99 status=ok
// SIG undefined FUN_1438e4240(void)

void FUN_1438e4240(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_res20 [8];
  
  lVar1 = 5;
  do {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x58))
              (*(longlong **)(param_1 + 0x30),local_res20,param_2,param_3);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438e42b0 FUN_1438e42b0 body=193 status=ok
// SIG undefined FUN_1438e42b0(void)

void FUN_1438e42b0(longlong param_1,longlong param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  param_1 = param_1 + -0x58;
  local_18 = FUN_1438e3820;
  uStack_10 = 0;
  FUN_1438e2380(param_2 + 0x68,param_1,&local_18,"hkaiNavMeshGeometryViewer::onNavMeshDataModified")
  ;
  local_18 = FUN_1438e3b80;
  uStack_10 = 0;
  FUN_1438e2420(param_2 + 0x38,param_1,&local_18,"hkaiNavMeshGeometryViewer::onNavMeshInstanceAdded"
               );
  local_18 = FUN_1438e3ba0;
  uStack_10 = 0;
  FUN_1438e2420(param_2 + 0x40,param_1,&local_18,
                "hkaiNavMeshGeometryViewer::onNavMeshInstanceRemoved");
  return;
}



// FUNCTION 1438e4380 FUN_1438e4380 body=289 status=ok
// SIG undefined FUN_1438e4380(void)

void FUN_1438e4380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res8 [2];
  code *local_18;
  undefined4 uStack_10;
  
  lVar1 = *(longlong *)(param_2 + 0x130);
  iVar3 = 0;
  if (0 < *(int *)(lVar1 + 0x40)) {
    do {
      lVar2 = *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(lVar1 + 0x38));
      if (lVar2 != 0) {
        local_res8[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
        FUN_1438e3c40(param_1 + -0x58,param_2,local_res8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar1 + 0x40));
  }
  local_18 = FUN_1438e3820;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x68,local_res8,param_1 + -0x58,&local_18);
  local_18 = FUN_1438e3b80;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x38,local_res8,param_1 + -0x58,&local_18);
  local_18 = FUN_1438e3ba0;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x40,local_res8,param_1 + -0x58,&local_18);
  return;
}



// FUNCTION 1438e44b0 FUN_1438e44b0 body=148 status=ok
// SIG undefined FUN_1438e44b0(void)

void FUN_1438e44b0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::
              MemberSlot<hkaiNavVolumeViewer,void_(__cdecl_hkaiNavVolumeViewer::*)(hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e4550 FUN_1438e4550 body=74 status=ok
// SIG undefined FUN_1438e4550(void)

undefined8 * FUN_1438e4550(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiNavVolumeViewer::vftable;
  param_1[3] = hkaiNavVolumeViewer::vftable;
  param_1[0xb] = hkaiNavVolumeViewer::vftable;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1438e45a0 FUN_1438e45a0 body=240 status=ok
// SIG undefined FUN_1438e45a0(void)

void FUN_1438e45a0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res8 [2];
  
  iVar3 = *(int *)(param_1 + 0xe);
  *param_1 = hkaiNavVolumeViewer::vftable;
  param_1[3] = hkaiNavVolumeViewer::vftable;
  param_1[0xb] = hkaiNavVolumeViewer::vftable;
  while (iVar3 != 0) {
    local_res8[0] = *(undefined4 *)param_1[0xd];
    FUN_1438e4b20(param_1,*(undefined8 *)((undefined4 *)param_1[0xd] + 4),local_res8);
    iVar3 = *(int *)(param_1 + 0xe);
  }
  iVar3 = 0;
  if (param_1[0xc] != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(param_1[0xc] + 0x40) <= iVar3) break;
      FUN_1438e51c0(param_1 + 0xb,*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x38) + lVar2));
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (param_1[0xc] != 0);
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],0x18,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e4690 FUN_1438e4690 body=9 status=ok
// SIG undefined FUN_1438e4690(void)

void FUN_1438e4690(longlong param_1)

{
  FUN_1438e46b0(param_1 + -0x18);
  return;
}



// FUNCTION 1438e469c FUN_1438e469c body=9 status=ok
// SIG undefined FUN_1438e469c(void)

void FUN_1438e469c(longlong param_1)

{
  FUN_1438e46b0(param_1 + -0x58);
  return;
}



// FUNCTION 1438e46b0 FUN_1438e46b0 body=139 status=ok
// SIG undefined FUN_1438e46b0(void)

longlong FUN_1438e46b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e45a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x80;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1438e4740 FUN_1438e4740 body=747 status=ok
// SIG undefined FUN_1438e4740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e4740(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar2 = *(longlong *)
           ((longlong)*param_3 * 0x100 + 8 + *(longlong *)(*(longlong *)(param_2 + 0x130) + 0x38));
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x38);
  puVar10 = (undefined8 *)0x0;
  puVar13 = puVar10;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkGeometry::vftable;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x80000000;
    puVar8[5] = 0;
    *(undefined4 *)(puVar8 + 6) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x34) = 0x80000000;
    puVar13 = puVar8;
  }
  hkaiNavVolumeDebugUtils::GeometryBuildSettings::GeometryBuildSettings(local_a8);
  local_a8[0] = 0;
  FUN_1438df5b0(local_a8,*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x38),puVar13);
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar9 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar7 + 0x58),0x70);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)FUN_143790590(lVar9,puVar13);
  }
  local_98 = local_88;
  local_90 = 0;
  local_8c = 0x80000001;
  uVar11 = FUN_143703a50();
  if (local_90 == (local_8c & 0x3fffffff)) {
    FUN_14370c460(uVar11,&local_98,8);
  }
  *(undefined8 **)(local_98 + (longlong)(int)local_90 * 8) = puVar10;
  local_res18[0] = *(int *)(param_1 + 0x78);
  local_90 = local_90 + 1;
  *(int *)(param_1 + 0x78) = local_res18[0] + 1;
  bVar4 = FUN_14378ec00(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38),&DAT_14682abe0);
  cVar5 = FUN_1438e2370(local_res10);
  lVar12 = FRollingHash::GetWindowSize(local_res18);
  local_78 = _DAT_1467f0890;
  uStack_70 = uRam00000001467f0898;
  lVar12 = ((ulonglong)bVar4 << (0x2eU - cVar5 & 0x3f)) + lVar12;
  local_58 = _DAT_1467f08b0;
  uStack_54 = uRam00000001467f08b4;
  uStack_50 = uRam00000001467f08b8;
  uStack_4c = uRam00000001467f08bc;
  local_68 = _DAT_1467f08a0;
  uStack_64 = uRam00000001467f08a4;
  uStack_60 = uRam00000001467f08a8;
  uStack_5c = uRam00000001467f08ac;
  FUN_1438e4bf0(lVar2 + 0x30,&local_78);
  FUN_1438e4bf0(lVar2 + 0x30,&local_68);
  FUN_1438e4bf0(lVar2 + 0x30,&local_58);
  lVar9 = *(longlong *)(param_1 + 0x60);
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_48 = *(float *)(lVar2 + 0x40) + *(float *)(lVar9 + 0x80);
  fStack_44 = *(float *)(lVar2 + 0x44) + *(float *)(lVar9 + 0x84);
  fStack_40 = *(float *)(lVar2 + 0x48) + *(float *)(lVar9 + 0x88);
  fStack_3c = *(float *)(lVar2 + 0x4c) + *(float *)(lVar9 + 0x8c);
  lVar2 = *plVar3;
  uVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))();
  (**(code **)(lVar2 + 0x28))(plVar3,local_res10,lVar12,&local_98,&local_78,0xff008000,7,uVar6);
  FUN_14370c150(puVar10);
  uVar11 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x70) == (*(uint *)(param_1 + 0x74) & 0x3fffffff)) {
    FUN_14370c460(uVar11,param_1 + 0x68,0x18);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x70) * 0x18);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  *(longlong *)(piVar1 + 2) = lVar12;
  *piVar1 = *param_3;
  *(longlong *)(piVar1 + 4) = param_2;
  uVar11 = FUN_143703a50();
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(uVar11,local_98,8,local_8c & 0x3fffffff);
  }
  local_98 = (undefined1 *)0x0;
  local_8c = 0x80000000;
  if (local_a0 != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 1438e4a30 FUN_1438e4a30 body=99 status=ok
// SIG undefined FUN_1438e4a30(void)

longlong FUN_1438e4a30(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x80);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e4550(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e4aa0 FUN_1438e4aa0 body=7 status=ok
// SIG undefined FUN_1438e4aa0(void)

undefined4 FUN_1438e4aa0(void)

{
  return DAT_146b955d0;
}



// FUNCTION 1438e4ab0 FUN_1438e4ab0 body=26 status=ok
// SIG undefined FUN_1438e4ab0(void)

void FUN_1438e4ab0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_1438e4740(param_1,param_2,local_res18);
  return;
}



// FUNCTION 1438e4ad0 FUN_1438e4ad0 body=26 status=ok
// SIG undefined FUN_1438e4ad0(void)

void FUN_1438e4ad0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_1438e4b20(param_1,param_2,local_res18);
  return;
}



// FUNCTION 1438e4af0 FUN_1438e4af0 body=41 status=ok
// SIG undefined FUN_1438e4af0(void)

void FUN_1438e4af0(void)

{
  DAT_146b955d0 = FUN_14378a650(DAT_146b845b8,"AI/Nav Volumes/Geometry",FUN_1438e4a30);
  return;
}



// FUNCTION 1438e4b20 FUN_1438e4b20 body=193 status=ok
// SIG undefined FUN_1438e4b20(void)

void FUN_1438e4b20(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar5 = 0;
    piVar2 = *(int **)(param_1 + 0x68);
    while (*piVar2 != *param_3) {
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      piVar2 = piVar2 + 6;
      if (*(int *)(param_1 + 0x70) <= lVar5) {
        return;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
              (*(longlong **)(param_1 + 0x30),local_res8,
               *(undefined8 *)(*(int **)(param_1 + 0x68) + (longlong)iVar3 * 6 + 2));
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    if (*(int *)(param_1 + 0x70) != iVar3) {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x18);
      lVar5 = 3;
      lVar4 = (*(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x70) * 0x18) -
              (longlong)puVar1;
      do {
        *puVar1 = *(undefined8 *)(lVar4 + (longlong)puVar1);
        puVar1 = puVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1438e4bf0 FUN_1438e4bf0 body=131 status=ok
// SIG undefined FUN_1438e4bf0(void)

void FUN_1438e4bf0(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*param_1 != 0) {
    uVar1 = *param_2;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar11 = (uint)*param_1;
    uVar5 = -(uint)(0x16a8300 << uVar11 < 0);
    uVar6 = -(uint)(0x502ab000 << uVar11 < 0);
    uVar7 = -(uint)(0xa2a8c00 << uVar11 < 0);
    uVar8 = -(uint)(0xa154c00 << uVar11 < 0);
    uVar9 = -(uint)(0x1554300 << uVar11 < 0);
    uVar10 = -(uint)(0x50157000 << uVar11 < 0);
    uVar11 = -(uint)(0 << uVar11 < 0);
    *param_2 = ~uVar8 & (param_2[1] & uVar5 | ~uVar5 & uVar1) | uVar8 & param_2[2];
    param_2[1] = ~uVar9 & (param_2[2] & uVar6 | ~uVar6 & param_2[1]) | uVar9 & uVar2;
    param_2[2] = ~uVar10 & (uVar1 & uVar7 | ~uVar7 & param_2[2]) | uVar10 & uVar3;
    param_2[3] = ~uVar11 & param_2[3] | uVar11 & param_2[3];
    uVar4 = (ulonglong)*param_1;
    *param_2 = (0xae71e0U >> uVar4) << 0x1f ^ *param_2;
    param_2[1] = (0xb9e306U >> uVar4) << 0x1f ^ param_2[1];
    param_2[2] = (0xeb903cU >> uVar4) << 0x1f ^ param_2[2];
    param_2[3] = (0U >> uVar4) << 0x1f ^ param_2[3];
  }
  return;
}



// FUNCTION 1438e4c80 FUN_1438e4c80 body=1142 status=ok
// SIG undefined FUN_1438e4c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e4c80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  LPVOID local_res20;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    pvVar3 = TlsGetValue(DAT_146b8198c);
    local_res20 = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar3,"TtVolumeViewerCB");
    }
    uVar9 = 0;
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x38);
    uVar10 = (ulonglong)
             ((longlong)(plVar11 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40)) +
             (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40) < plVar11) {
      uVar10 = uVar9;
    }
    if (uVar10 != 0) {
      do {
        uVar6 = 0;
        lVar1 = *plVar11;
        lVar2 = *(longlong *)(lVar1 + 0x130);
        uVar8 = uVar6;
        if (0 < *(int *)(param_1 + 0x58)) {
          do {
            iVar7 = (int)uVar8;
            if ((*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10 + uVar6) == lVar1) &&
               (*(longlong *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + uVar6) * 0x100 + 8 +
                 *(longlong *)(lVar2 + 0x38)) == 0)) {
              FUN_1438e4b20(param_1 + -0x18);
              iVar7 = iVar7 + -1;
              uVar6 = uVar6 - 0x18;
            }
            uVar6 = uVar6 + 0x18;
            uVar8 = (ulonglong)(iVar7 + 1U);
          } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 0x58));
        }
        iVar7 = 0;
        if (0 < *(int *)(lVar2 + 0x40)) {
          do {
            lVar5 = 0;
            if (*(longlong *)((longlong)iVar7 * 0x100 + 8 + *(longlong *)(lVar2 + 0x38)) != 0) {
              if (0 < *(int *)(param_1 + 0x58)) {
                piVar4 = *(int **)(param_1 + 0x50);
                do {
                  if (*piVar4 == iVar7) goto LAB_1438e4e23;
                  lVar5 = lVar5 + 1;
                  piVar4 = piVar4 + 6;
                } while (lVar5 < *(int *)(param_1 + 0x58));
              }
              FUN_1438e4740(param_1 + -0x18,lVar1);
            }
LAB_1438e4e23:
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar2 + 0x40));
        }
        uVar6 = 0;
        uVar8 = uVar6;
        if (0 < *(int *)(param_1 + 0x58)) {
          do {
            lVar1 = *(longlong *)
                     ((longlong)*(int *)(uVar6 + *(longlong *)(param_1 + 0x50)) * 0x100 + 8 +
                     *(longlong *)(lVar2 + 0x38));
            local_d8 = _DAT_1467f0890;
            uStack_d4 = uRam00000001467f0894;
            uStack_d0 = uRam00000001467f0898;
            uStack_cc = uRam00000001467f089c;
            local_c8 = _DAT_1467f08a0;
            uStack_c4 = uRam00000001467f08a4;
            uStack_c0 = uRam00000001467f08a8;
            uStack_bc = uRam00000001467f08ac;
            local_b8 = _DAT_1467f08b0;
            uStack_b4 = uRam00000001467f08b4;
            uStack_b0 = uRam00000001467f08b8;
            uStack_ac = uRam00000001467f08bc;
            if (*(byte *)(lVar1 + 0x30) != 0) {
              uVar18 = (uint)*(byte *)(lVar1 + 0x30);
              uVar13 = -(uint)(0x16a8300 << uVar18 < 0);
              uVar15 = -(uint)(0x502ab000 << uVar18 < 0);
              uVar17 = -(uint)(0xa2a8c00 << uVar18 < 0);
              uVar14 = -(uint)(0xa154c00 << uVar18 < 0);
              uVar16 = -(uint)(0x1554300 << uVar18 < 0);
              uVar18 = -(uint)(0x50157000 << uVar18 < 0);
              uVar12 = (ulonglong)*(byte *)(lVar1 + 0x30);
              local_d8 = (0xae71e0U >> uVar12) << 0x1f ^
                         (~uVar14 & (uRam00000001467f0894 & uVar13 | ~uVar13 & _DAT_1467f0890) |
                         uVar14 & uRam00000001467f0898);
              uStack_d4 = (0xb9e306U >> uVar12) << 0x1f ^
                          (~uVar16 & (uRam00000001467f0898 & uVar15 | ~uVar15 & uRam00000001467f0894
                                     ) | uVar16 & _DAT_1467f0890);
              uStack_d0 = (0xeb903cU >> uVar12) << 0x1f ^
                          (~uVar18 & (_DAT_1467f0890 & uVar17 | ~uVar17 & uRam00000001467f0898) |
                          uVar18 & uRam00000001467f0894);
              uStack_cc = (0U >> uVar12) << 0x1f ^ uRam00000001467f089c;
              if (*(byte *)(lVar1 + 0x30) != 0) {
                uVar18 = (uint)*(byte *)(lVar1 + 0x30);
                uVar13 = -(uint)(0x16a8300 << uVar18 < 0);
                uVar15 = -(uint)(0x502ab000 << uVar18 < 0);
                uVar17 = -(uint)(0xa2a8c00 << uVar18 < 0);
                uVar14 = -(uint)(0xa154c00 << uVar18 < 0);
                uVar16 = -(uint)(0x1554300 << uVar18 < 0);
                uVar18 = -(uint)(0x50157000 << uVar18 < 0);
                uVar12 = (ulonglong)*(byte *)(lVar1 + 0x30);
                local_c8 = (0xae71e0U >> uVar12) << 0x1f ^
                           (~uVar14 & (uRam00000001467f08a4 & uVar13 | ~uVar13 & _DAT_1467f08a0) |
                           uVar14 & uRam00000001467f08a8);
                uStack_c4 = (0xb9e306U >> uVar12) << 0x1f ^
                            (~uVar16 & (uRam00000001467f08a8 & uVar15 |
                                       ~uVar15 & uRam00000001467f08a4) | uVar16 & _DAT_1467f08a0);
                uStack_c0 = (0xeb903cU >> uVar12) << 0x1f ^
                            (~uVar18 & (_DAT_1467f08a0 & uVar17 | ~uVar17 & uRam00000001467f08a8) |
                            uVar18 & uRam00000001467f08a4);
                uStack_bc = (0U >> uVar12) << 0x1f ^ uRam00000001467f08ac;
                if (*(byte *)(lVar1 + 0x30) != 0) {
                  uVar18 = (uint)*(byte *)(lVar1 + 0x30);
                  uVar13 = -(uint)(0x16a8300 << uVar18 < 0);
                  uVar14 = -(uint)(0x502ab000 << uVar18 < 0);
                  uVar15 = -(uint)(0xa2a8c00 << uVar18 < 0);
                  uVar16 = -(uint)(0xa154c00 << uVar18 < 0);
                  uVar17 = -(uint)(0x1554300 << uVar18 < 0);
                  uVar18 = -(uint)(0x50157000 << uVar18 < 0);
                  uVar12 = (ulonglong)*(byte *)(lVar1 + 0x30);
                  local_b8 = (0xae71e0U >> uVar12) << 0x1f ^
                             (~uVar16 & (uRam00000001467f08b4 & uVar13 | ~uVar13 & _DAT_1467f08b0) |
                             uVar16 & uRam00000001467f08b8);
                  uStack_b4 = (0xb9e306U >> uVar12) << 0x1f ^
                              (~uVar17 & (uRam00000001467f08b8 & uVar14 |
                                         ~uVar14 & uRam00000001467f08b4) | uVar17 & _DAT_1467f08b0);
                  uStack_b0 = (0xeb903cU >> uVar12) << 0x1f ^
                              (~uVar18 & (_DAT_1467f08b0 & uVar15 | ~uVar15 & uRam00000001467f08b8)
                              | uVar18 & uRam00000001467f08b4);
                  uStack_ac = (0U >> uVar12) << 0x1f ^ uRam00000001467f08bc;
                }
              }
            }
            lVar5 = *(longlong *)(param_1 + 0x48);
            local_a8 = *(float *)(lVar1 + 0x40) + *(float *)(lVar5 + 0x80);
            fStack_a4 = *(float *)(lVar1 + 0x44) + *(float *)(lVar5 + 0x84);
            fStack_a0 = *(float *)(lVar1 + 0x48) + *(float *)(lVar5 + 0x88);
            fStack_9c = *(float *)(lVar1 + 0x4c) + *(float *)(lVar5 + 0x8c);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))
                      (*(longlong **)(param_1 + 0x18),local_res18,
                       *(undefined8 *)(uVar6 + 8 + *(longlong *)(param_1 + 0x50)),&local_d8);
            uVar18 = (int)uVar8 + 1;
            uVar6 = uVar6 + 0x18;
            uVar8 = (ulonglong)uVar18;
          } while ((int)uVar18 < *(int *)(param_1 + 0x58));
        }
        plVar11 = plVar11 + 1;
        uVar9 = uVar9 + 1;
        pvVar3 = local_res20;
      } while (uVar9 != uVar10);
    }
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d750(pvVar3,&DAT_145b8eda0);
    }
  }
  return;
}



// FUNCTION 1438e5100 FUN_1438e5100 body=45 status=ok
// SIG undefined FUN_1438e5100(void)

void FUN_1438e5100(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e44b0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438e5130 FUN_1438e5130 body=138 status=ok
// SIG undefined FUN_1438e5130(void)

void FUN_1438e5130(longlong param_1,longlong param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_1438e4ab0;
  uStack_10 = 0;
  FUN_1438e44b0(param_2 + 0x48,param_1 + -0x58,&local_18,
                "hkaiNavVolumeViewer::onNavVolumeInstanceAdded");
  local_18 = FUN_1438e4ad0;
  uStack_10 = 0;
  FUN_1438e44b0(param_2 + 0x50,param_1 + -0x58,&local_18,
                "hkaiNavVolumeViewer::onNavVolumeInstanceRemoved");
  return;
}



// FUNCTION 1438e51c0 FUN_1438e51c0 body=134 status=ok
// SIG undefined FUN_1438e51c0(void)

void FUN_1438e51c0(longlong param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_1438e4ab0;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x48,local_res8,param_1 + -0x58,&local_18);
  local_18 = FUN_1438e4ad0;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x50,local_res8,param_1 + -0x58,&local_18);
  return;
}



// FUNCTION 1438e5250 FUN_1438e5250 body=148 status=ok
// SIG undefined FUN_1438e5250(void)

void FUN_1438e5250(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiWorld*___ptr64,hkaiNavMeshPathRequestInfo*___ptr64>::
              MemberSlot<hkaiPathRequestViewer,void_(__cdecl_hkaiPathRequestViewer::*)(hkaiWorld*___ptr64,hkaiNavMeshPathRequestInfo*___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e52f0 FUN_1438e52f0 body=148 status=ok
// SIG undefined FUN_1438e52f0(void)

void FUN_1438e52f0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiWorld*___ptr64,hkaiNavVolumePathRequestInfo*___ptr64>::
              MemberSlot<hkaiPathRequestViewer,void_(__cdecl_hkaiPathRequestViewer::*)(hkaiWorld*___ptr64,hkaiNavVolumePathRequestInfo*___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e5390 FUN_1438e5390 body=82 status=ok
// SIG undefined FUN_1438e5390(void)

undefined8 * FUN_1438e5390(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiPathRequestViewer::vftable;
  param_1[3] = hkaiPathRequestViewer::vftable;
  param_1[0xb] = hkaiPathRequestViewer::vftable;
  FUN_1424b51c0(param_1 + 0xd);
  hkSerialize::Save::withMultiBundle(param_1 + 0xd);
  return param_1;
}



// FUNCTION 1438e53f0 FUN_1438e53f0 body=143 status=ok
// SIG undefined FUN_1438e53f0(void)

void FUN_1438e53f0(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  *param_1 = hkaiPathRequestViewer::vftable;
  param_1[3] = hkaiPathRequestViewer::vftable;
  param_1[0xb] = hkaiPathRequestViewer::vftable;
  lVar1 = param_1[0xc];
  uVar3 = uVar2;
  while (lVar1 != 0) {
    if (*(int *)(param_1[0xc] + 0x40) <= (int)uVar3) break;
    FUN_1438e5920(param_1 + 0xb,*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x38) + uVar2));
    uVar3 = (ulonglong)((int)uVar3 + 1);
    uVar2 = uVar2 + 8;
    lVar1 = param_1[0xc];
  }
  FUN_14371b260(param_1 + 0xd);
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e5480 FUN_1438e5480 body=9 status=ok
// SIG undefined FUN_1438e5480(void)

void FUN_1438e5480(longlong param_1)

{
  FUN_1438e54a0(param_1 + -0x18);
  return;
}



// FUNCTION 1438e548c FUN_1438e548c body=9 status=ok
// SIG undefined FUN_1438e548c(void)

void FUN_1438e548c(longlong param_1)

{
  FUN_1438e54a0(param_1 + -0x58);
  return;
}



// FUNCTION 1438e54a0 FUN_1438e54a0 body=136 status=ok
// SIG undefined FUN_1438e54a0(void)

longlong FUN_1438e54a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e53f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x88;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1438e5530 FUN_1438e5530 body=99 status=ok
// SIG undefined FUN_1438e5530(void)

longlong FUN_1438e5530(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x88);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e5390(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e55a0 FUN_1438e55a0 body=7 status=ok
// SIG undefined FUN_1438e55a0(void)

undefined4 FUN_1438e55a0(void)

{
  return DAT_146b955d8;
}



// FUNCTION 1438e55b0 FUN_1438e55b0 body=398 status=ok
// SIG undefined FUN_1438e55b0(void)

void FUN_1438e55b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  if (param_3 == (undefined8 *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    puVar3 = &local_38;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*param_3)(param_3,&local_38);
  }
  local_28 = *puVar3;
  local_20 = puVar3[1];
  uVar6 = 0;
  uVar4 = uVar6;
  if (local_20 != 0) {
    uVar4 = FUN_1437151a0();
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  uStack_18 = uVar4;
  FUN_14378eaf0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x68,&local_28,DAT_146b955d8);
  lVar1 = param_3[3];
  if ((lVar1 != 0) && (lVar2 = param_3[4], lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x4c) == '\x02') {
      if (0 < *(int *)(lVar1 + 0x38)) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa0))
                    (*(longlong **)(param_1 + 0x30),local_res8,0,lVar1 + 0x20,
                     (longlong)(int)uVar6 * 0x10 + *(longlong *)(lVar1 + 0x30),0xffffff00,
                     DAT_146b955d8);
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(lVar1 + 0x38));
      }
    }
    else if (*(char *)(lVar2 + 0x4c) != '\x05') {
      FUN_1438db740(lVar1,lVar2,0xff00ffff,0xffffa500,*(undefined8 *)(param_1 + 0x30),DAT_146b955d8,
                    0x3a83126f);
    }
  }
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1438e5740 FUN_1438e5740 body=190 status=ok
// SIG undefined FUN_1438e5740(void)

void FUN_1438e5740(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  if (param_3 == (undefined8 *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    puVar1 = &local_38;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)*param_3)(param_3,&local_38);
  }
  local_28 = *puVar1;
  local_20 = puVar1[1];
  if (local_20 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  uStack_18 = uVar2;
  FUN_14378eaf0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x68,&local_28,DAT_146b955d8);
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1438e5800 FUN_1438e5800 body=41 status=ok
// SIG undefined FUN_1438e5800(void)

void FUN_1438e5800(void)

{
  DAT_146b955d8 = FUN_14378a650(DAT_146b845b8,"AI/Path Requests",FUN_1438e5530);
  return;
}



// FUNCTION 1438e5830 FUN_1438e5830 body=45 status=ok
// SIG undefined FUN_1438e5830(void)

void FUN_1438e5830(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e5250(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438e5860 FUN_1438e5860 body=45 status=ok
// SIG undefined FUN_1438e5860(void)

void FUN_1438e5860(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e52f0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438e5890 FUN_1438e5890 body=138 status=ok
// SIG undefined FUN_1438e5890(void)

void FUN_1438e5890(longlong param_1,longlong param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_1438e55b0;
  uStack_10 = 0;
  FUN_1438e5250(param_2 + 0x28,param_1 + -0x58,&local_18,
                "hkaiPathRequestViewer::onNavMeshPathRequestProcessed");
  local_18 = FUN_1438e5740;
  uStack_10 = 0;
  FUN_1438e52f0(param_2 + 0x30,param_1 + -0x58,&local_18,
                "hkaiPathRequestViewer::onNavVolumePathRequestProcessed");
  return;
}



// FUNCTION 1438e5920 FUN_1438e5920 body=134 status=ok
// SIG undefined FUN_1438e5920(void)

void FUN_1438e5920(longlong param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_1438e55b0;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x28,local_res8,param_1 + -0x58,&local_18);
  local_18 = FUN_1438e5740;
  uStack_10 = 0;
  FUN_1438e24c0(param_2 + 0x30,local_res8,param_1 + -0x58,&local_18);
  return;
}



// FUNCTION 1438e59b0 FUN_1438e59b0 body=103 status=ok
// SIG undefined FUN_1438e59b0(void)

void FUN_1438e59b0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_3;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (lVar1 != 0) {
        FUN_14370c030(lVar1);
      }
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar1;
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438e5a20 FUN_1438e5a20 body=102 status=ok
// SIG undefined FUN_1438e5a20(void)

undefined8 * FUN_1438e5a20(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  *param_1 = hkaiVdbCommandStreamWriter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_1424b51c0(param_1 + 3);
  hkSerialize::Save::withMultiBundle(param_1 + 3);
  param_1[9] = param_3;
  *(undefined4 *)(param_1 + 7) = param_2;
  return param_1;
}



// FUNCTION 1438e5a90 FUN_1438e5a90 body=80 status=ok
// SIG undefined FUN_1438e5a90(void)

undefined8 * FUN_1438e5a90(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiWorldReplayViewer::vftable;
  param_1[3] = hkaiWorldReplayViewer::vftable;
  param_1[0xb] = hkaiWorldReplayViewer::vftable;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  FUN_143734b10(param_1 + 0xf);
  return param_1;
}



// FUNCTION 1438e5ae0 FUN_1438e5ae0 body=254 status=ok
// SIG undefined FUN_1438e5ae0(void)

void FUN_1438e5ae0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_143703a50();
  lVar1 = param_1[3];
  iVar3 = (int)param_1[4] + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[1];
  iVar3 = (int)param_1[2] + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar2,param_1[1],8,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 1438e5be0 FUN_1438e5be0 body=199 status=ok
// SIG undefined FUN_1438e5be0(void)

void FUN_1438e5be0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xe);
  *param_1 = hkaiWorldReplayViewer::vftable;
  param_1[3] = hkaiWorldReplayViewer::vftable;
  param_1[0xb] = hkaiWorldReplayViewer::vftable;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_1438e6ae0(param_1 + 0xb,*(undefined8 *)(param_1[0xd] + (longlong)iVar1 * 0x10));
  }
  thunk_FUN_143734820(param_1 + 0xf);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar2,param_1[0xd],0x10,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e5ca8 FUN_1438e5ca8 body=9 status=ok
// SIG undefined FUN_1438e5ca8(void)

void FUN_1438e5ca8(longlong param_1)

{
  FUN_1438e5e00(param_1 + -0x18);
  return;
}



// FUNCTION 1438e5cb4 FUN_1438e5cb4 body=9 status=ok
// SIG undefined FUN_1438e5cb4(void)

void FUN_1438e5cb4(longlong param_1)

{
  FUN_1438e5e00(param_1 + -0x58);
  return;
}



// FUNCTION 1438e5cc0 FUN_1438e5cc0 body=146 status=ok
// SIG undefined FUN_1438e5cc0(void)

undefined8 * FUN_1438e5cc0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkSecondaryCommandDispatcher::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1438e5d60 FUN_1438e5d60 body=158 status=ok
// SIG undefined FUN_1438e5d60(void)

undefined8 * FUN_1438e5d60(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14371b260(param_1 + 3);
  *param_1 = hkSecondaryCommandDispatcher::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x50;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1438e5e00 FUN_1438e5e00 body=139 status=ok
// SIG undefined FUN_1438e5e00(void)

longlong FUN_1438e5e00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e5be0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x88;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
    }
  }
  return param_1;
}



// FUNCTION 1438e5e90 FUN_1438e5e90 body=275 status=ok
// SIG undefined FUN_1438e5e90(void)

void FUN_1438e5e90(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_1436e53e0(param_1,(longlong)(int)uVar4 * 0x10 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    lVar5 = 2;
    puVar6 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    lVar8 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x10 + *param_1) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar7 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar7 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar7 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar7 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1438e5fb0 FUN_1438e5fb0 body=99 status=ok
// SIG undefined FUN_1438e5fb0(void)

longlong FUN_1438e5fb0(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x88);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e5a90(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}


