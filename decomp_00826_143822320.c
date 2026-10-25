// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143822320 FUN_143822320 body=93 status=ok
// SIG undefined FUN_143822320(void)

undefined1 FUN_143822320(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x40);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x50);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x60);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x70);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x80);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143822380 func body=73 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiNavMeshInstanceData>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14382d610(param_1,param_2 + param_1);
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143822410 FUN_143822410 body=58 status=ok
// SIG undefined FUN_143822410(void)

void FUN_143822410(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143830110(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143822460 FUN_143822460 body=77 status=ok
// SIG undefined FUN_143822460(void)

void FUN_143822460(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a6a0(param_1,local_res18);
      }
      param_1 = param_1 + 0x130;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438224b0 FUN_1438224b0 body=55 status=ok
// SIG undefined FUN_1438224b0(void)

void FUN_1438224b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143856580(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438224f0 FUN_1438224f0 body=77 status=ok
// SIG undefined FUN_1438224f0(void)

undefined1 FUN_1438224f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382fa10(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x48);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143822540 FUN_143822540 body=139 status=ok
// SIG undefined FUN_143822540(void)

longlong FUN_143822540(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438768f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x30;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 1438225d0 FUN_1438225d0 body=597 status=ok
// SIG undefined FUN_1438225d0(void)

void FUN_1438225d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x1c);
    lVar9 = (longlong)param_4;
    do {
      uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar8);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + -0x1c);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[-4] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + -7,uVar3,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + -7),uVar4,uVar3);
      puVar8[-5] = uVar3;
      uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar8);
      uVar4 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar8);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + -3,uVar3,4);
      }
      FUN_143795760(*(undefined8 *)(puVar8 + -3),uVar4,uVar3);
      puVar8[-1] = uVar3;
      uVar3 = *(uint *)((longlong)puVar8 + param_2 + 0xc);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + 4);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[4] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + 1,uVar3,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 1),uVar4,uVar3);
      puVar8[3] = uVar3;
      uVar3 = *(uint *)(param_2 + 0x1c + (longlong)puVar8);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + 0x14);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[8] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + 5,uVar3,4);
      }
      FUN_143795760(*(undefined8 *)(puVar8 + 5),uVar4,uVar3);
      puVar8[7] = uVar3;
      puVar8[9] = *(uint *)((longlong)puVar8 + param_2 + 0x24);
      *(undefined8 *)(puVar8 + 10) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x28);
      puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x34);
      uVar4 = puVar1[1];
      *(undefined8 *)(puVar8 + 0xd) = *puVar1;
      *(undefined8 *)(puVar8 + 0xf) = uVar4;
      puVar2 = (uint *)((longlong)puVar8 + param_2 + 0x44);
      uVar3 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0x11] = *puVar2;
      puVar8[0x12] = uVar3;
      puVar8[0x13] = uVar5;
      puVar8[0x14] = uVar6;
      *(undefined8 *)(puVar8 + 0x15) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x54);
      puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x5c);
      uVar4 = puVar1[1];
      *(undefined8 *)(puVar8 + 0x17) = *puVar1;
      *(undefined8 *)(puVar8 + 0x19) = uVar4;
      puVar2 = (uint *)((longlong)puVar8 + param_2 + 0x6c);
      uVar3 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0x1b] = *puVar2;
      puVar8[0x1c] = uVar3;
      puVar8[0x1d] = uVar5;
      puVar8[0x1e] = uVar6;
      puVar8 = puVar8 + 0x26;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 143822840 FUN_143822840 body=210 status=ok
// SIG undefined FUN_143822840(void)

void FUN_143822840(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    lVar7 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar7 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar7,param_2 + lVar7);
        *(undefined4 *)(lVar7 + 8) = 0x1ffff;
        *puVar1 = hkaiDefaultAstarCostModifier::vftable;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar7);
        puVar1 = (undefined8 *)(param_2 + 0x14 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x14) = *puVar1;
        *(undefined8 *)(lVar7 + 0x1c) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x24 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x24) = *puVar1;
        *(undefined8 *)(lVar7 + 0x2c) = uVar6;
        puVar2 = (undefined4 *)(param_2 + 0x34 + lVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar7 + 0x34) = *puVar2;
        *(undefined4 *)(lVar7 + 0x38) = uVar3;
        *(undefined4 *)(lVar7 + 0x3c) = uVar4;
        *(undefined4 *)(lVar7 + 0x40) = uVar5;
        puVar2 = (undefined4 *)(param_2 + 0x44 + lVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar7 + 0x44) = *puVar2;
        *(undefined4 *)(lVar7 + 0x48) = uVar3;
        *(undefined4 *)(lVar7 + 0x4c) = uVar4;
        *(undefined4 *)(lVar7 + 0x50) = uVar5;
      }
      lVar7 = lVar7 + 0x60;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 143822920 FUN_143822920 body=362 status=ok
// SIG undefined FUN_143822920(void)

void FUN_143822920(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar12 = (int *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      piVar2 = piVar12 + -8;
      if (piVar2 != (int *)0x0) {
        *(undefined ***)piVar2 = hkReferencedObject::vftable;
        FUN_143718270(piVar12 + -6,param_2 + -0x18 + (longlong)piVar12);
        piVar12[-4] = 0x1ffff;
        *(undefined ***)piVar2 = hkaiPlaneVolume::vftable;
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        *piVar12 = 0;
        piVar12[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar12);
        lVar14 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar10 = local_res20[0];
        puVar9 = (undefined4 *)0x0;
        if (local_res20[0] != 0) {
          puVar9 = (undefined4 *)FUN_143702d60(uVar8,0x10,local_res20);
        }
        *(undefined4 **)(piVar12 + -2) = puVar9;
        *piVar12 = iVar10;
        iVar10 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar10 = local_res20[0];
        }
        piVar12[1] = iVar10;
        if (0 < iVar3) {
          lVar11 = *(longlong *)(param_2 + -8 + (longlong)piVar12) - (longlong)puVar9;
          do {
            puVar1 = (undefined4 *)(lVar11 + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9 = puVar9 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        FUN_143716f90(piVar12 + 2,param_2 + 8 + (longlong)piVar12);
        *(undefined1 *)(piVar12 + 0x10) = *(undefined1 *)(param_2 + 0x40 + (longlong)piVar12);
        piVar2 = (int *)(param_2 + 0x50 + (longlong)piVar12);
        iVar3 = piVar2[1];
        iVar10 = piVar2[2];
        iVar7 = piVar2[3];
        piVar12[0x14] = *piVar2;
        piVar12[0x15] = iVar3;
        piVar12[0x16] = iVar10;
        piVar12[0x17] = iVar7;
        piVar2 = (int *)(param_2 + 0x60 + (longlong)piVar12);
        iVar3 = piVar2[1];
        iVar10 = piVar2[2];
        iVar7 = piVar2[3];
        piVar12[0x18] = *piVar2;
        piVar12[0x19] = iVar3;
        piVar12[0x1a] = iVar10;
        piVar12[0x1b] = iVar7;
      }
      piVar12 = piVar12 + 0x24;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143822a90 FUN_143822a90 body=77 status=ok
// SIG undefined FUN_143822a90(void)

void FUN_143822a90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a7b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x260;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143822ae0 FUN_143822ae0 body=445 status=ok
// SIG undefined FUN_143822ae0(void)

void FUN_143822ae0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0x3c);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -0xd,param_2 + -0x34 + (longlong)puVar8);
      puVar1 = (uint *)(param_2 + -0x1c + (longlong)puVar8);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-7] = *puVar1;
      puVar8[-6] = uVar3;
      puVar8[-5] = uVar5;
      puVar8[-4] = uVar6;
      uVar3 = *(uint *)((longlong)puVar8 + param_2 + -4);
      uVar4 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar8);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + -3,uVar3,0x10);
      }
      FUN_142ba3370(*(undefined8 *)(puVar8 + -3),uVar4,uVar3);
      puVar8[-1] = uVar3;
      puVar8[1] = *(uint *)(param_2 + 4 + (longlong)puVar8);
      uVar3 = *(uint *)((longlong)puVar8 + param_2 + 0x14);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + 0xc);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[6] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + 3,uVar3,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 3),uVar4,uVar3);
      puVar8[5] = uVar3;
      puVar8[7] = *(uint *)((longlong)puVar8 + param_2 + 0x1c);
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x20);
      puVar2 = (undefined8 *)((longlong)puVar8 + param_2 + 0x34);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + 0xd) = *puVar2;
      *(undefined8 *)(puVar8 + 0xf) = uVar4;
      *(undefined8 *)(puVar8 + 0x11) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x44);
      *(undefined8 *)(puVar8 + 0x13) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x4c);
      *(undefined1 *)(puVar8 + 0x15) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x54);
      *(undefined1 *)((longlong)puVar8 + 0x55) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x55);
      *(undefined1 *)((longlong)puVar8 + 0x56) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x56);
      *(undefined1 *)((longlong)puVar8 + 0x57) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x57);
      *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x58);
      *(undefined1 *)((longlong)puVar8 + 0x59) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x59);
      *(undefined1 *)((longlong)puVar8 + 0x5a) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x5a);
      *(undefined1 *)((longlong)puVar8 + 0x5b) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x5b);
      puVar8[0x17] = *(uint *)((longlong)puVar8 + param_2 + 0x5c);
      puVar8[0x18] = *(uint *)((longlong)puVar8 + param_2 + 0x60);
      puVar8[0x19] = *(uint *)((longlong)puVar8 + param_2 + 100);
      puVar8[0x1a] = *(uint *)((longlong)puVar8 + param_2 + 0x68);
      puVar8[0x1b] = *(uint *)((longlong)puVar8 + param_2 + 0x6c);
      *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x70);
      *(undefined8 *)(puVar8 + 0x1e) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x78);
      puVar2 = (undefined8 *)((longlong)puVar8 + param_2 + 0x84);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + 0x21) = *puVar2;
      *(undefined8 *)(puVar8 + 0x23) = uVar4;
      puVar1 = (uint *)((longlong)puVar8 + param_2 + 0x94);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[0x25] = *puVar1;
      puVar8[0x26] = uVar3;
      puVar8[0x27] = uVar5;
      puVar8[0x28] = uVar6;
      puVar8 = puVar8 + 0x38;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 143822ca0 FUN_143822ca0 body=18 status=ok
// SIG undefined FUN_143822ca0(void)

undefined8 * FUN_143822ca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813ba0;
  return param_2;
}



// FUNCTION 143822cc0 FUN_143822cc0 body=77 status=ok
// SIG undefined FUN_143822cc0(void)

void FUN_143822cc0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b300(param_1,local_res18);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143822d10 FUN_143822d10 body=18 status=ok
// SIG undefined FUN_143822d10(void)

undefined8 * FUN_143822d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813c60;
  return param_2;
}



// FUNCTION 143822d50 FUN_143822d50 body=66 status=ok
// SIG undefined FUN_143822d50(void)

undefined1 FUN_143822d50(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14381d3c0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14382faa0(param_1 + 0x99);
    if (cVar1 != '\0') {
      cVar1 = FUN_14382fb10(param_1 + 0x9d);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143822e50 FUN_143822e50 body=18 status=ok
// SIG undefined FUN_143822e50(void)

undefined8 * FUN_143822e50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813e60;
  return param_2;
}



// FUNCTION 143822e70 FUN_143822e70 body=18 status=ok
// SIG undefined FUN_143822e70(void)

undefined8 * FUN_143822e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813ec0;
  return param_2;
}



// FUNCTION 143822e90 FUN_143822e90 body=18 status=ok
// SIG undefined FUN_143822e90(void)

undefined8 * FUN_143822e90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813f20;
  return param_2;
}



// FUNCTION 143822f20 FUN_143822f20 body=18 status=ok
// SIG undefined FUN_143822f20(void)

undefined8 * FUN_143822f20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468141e0;
  return param_2;
}



// FUNCTION 143822f50 FUN_143822f50 body=235 status=ok
// SIG undefined FUN_143822f50(void)

void FUN_143822f50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiNavVolumePathRequestInfo::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 0x18 + lVar3);
        *(longlong *)(lVar3 + 0x18) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_2 + 0x20 + lVar3);
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar3);
        *(undefined1 *)(lVar3 + 0x2c) = *(undefined1 *)(param_2 + 0x2c + lVar3);
        *(undefined1 *)(lVar3 + 0x2d) = *(undefined1 *)(param_2 + 0x2d + lVar3);
      }
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143823040 FUN_143823040 body=51 status=ok
// SIG undefined FUN_143823040(void)

undefined1 FUN_143823040(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x21);
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x22);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143823080 FUN_143823080 body=198 status=ok
// SIG undefined FUN_143823080(void)

void FUN_143823080(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    lVar6 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar6 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar6,param_2 + lVar6);
        *(undefined4 *)(lVar6 + 8) = 0x1ffff;
        *puVar1 = hkaiInvertedAabbVolume::vftable;
        puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar6 + 0x18) = *puVar2;
        *(undefined4 *)(lVar6 + 0x1c) = uVar3;
        *(undefined4 *)(lVar6 + 0x20) = uVar4;
        *(undefined4 *)(lVar6 + 0x24) = uVar5;
        puVar2 = (undefined4 *)(param_2 + 0x28 + lVar6);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar6 + 0x28) = *puVar2;
        *(undefined4 *)(lVar6 + 0x2c) = uVar3;
        *(undefined4 *)(lVar6 + 0x30) = uVar4;
        *(undefined4 *)(lVar6 + 0x34) = uVar5;
        FUN_143716f90(lVar6 + 0x38,param_2 + 0x38 + lVar6);
      }
      lVar6 = lVar6 + 0x80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 143823190 FUN_143823190 body=77 status=ok
// SIG undefined FUN_143823190(void)

void FUN_143823190(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b7f0(param_1,local_res18);
      }
      param_1 = param_1 + 0x2a0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438231e0 FUN_1438231e0 body=139 status=ok
// SIG undefined FUN_1438231e0(void)

longlong FUN_1438231e0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438443d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 143823270 FUN_143823270 body=77 status=ok
// SIG undefined FUN_143823270(void)

undefined1 FUN_143823270(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_1438263a0(param_1 + 0x50);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1438232c0 FUN_1438232c0 body=47 status=ok
// SIG undefined FUN_1438232c0(void)

undefined1 FUN_1438232c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1437088f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_1438279a0(param_1 + 0x10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143823380 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddPathRequestQueue>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FGenericPlatformMisc::GetDeviceId(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143823400 FUN_143823400 body=324 status=ok
// SIG undefined FUN_143823400(void)

void FUN_143823400(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar12 = (int *)(param_1 + 0x50);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      piVar1 = piVar12 + -0x14;
      if (piVar1 != (int *)0x0) {
        FUN_14382a9b0(piVar1,param_2 + -0x50 + (longlong)piVar12);
        *(undefined ***)piVar1 = hkaiVolumeNavigator::PathRequest::vftable;
        *(undefined8 *)(piVar12 + -6) = *(undefined8 *)(param_2 + -0x18 + (longlong)piVar12);
        lVar14 = *(longlong *)(param_2 + -0x10 + (longlong)piVar12);
        *(longlong *)(piVar12 + -4) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        *piVar12 = 0;
        piVar12[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar12);
        lVar14 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar8 = FUN_143703a50();
        iVar10 = local_res20[0];
        puVar9 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar9 = (undefined8 *)FUN_143702d60(uVar8,0x50,local_res20);
        }
        *(undefined8 **)(piVar12 + -2) = puVar9;
        *piVar12 = iVar10;
        iVar10 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar10 = local_res20[0];
        }
        piVar12[1] = iVar10;
        if (0 < iVar4) {
          lVar11 = *(longlong *)(param_2 + -8 + (longlong)piVar12) - (longlong)puVar9;
          do {
            uVar8 = ((undefined8 *)(lVar11 + (longlong)puVar9))[1];
            *puVar9 = *(undefined8 *)(lVar11 + (longlong)puVar9);
            puVar9[1] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[2] = *puVar2;
            puVar9[3] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x20 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[4] = *puVar2;
            puVar9[5] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x30 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[6] = *puVar2;
            puVar9[7] = uVar8;
            puVar3 = (undefined4 *)(lVar11 + 0x40 + (longlong)puVar9);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(undefined4 *)(puVar9 + 8) = *puVar3;
            *(undefined4 *)((longlong)puVar9 + 0x44) = uVar5;
            *(undefined4 *)(puVar9 + 9) = uVar6;
            *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar7;
            puVar9 = puVar9 + 10;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      piVar12 = piVar12 + 0x16;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143823560 FUN_143823560 body=18 status=ok
// SIG undefined FUN_143823560(void)

undefined8 * FUN_143823560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14681e1e0;
  return param_2;
}



// FUNCTION 1438235b0 FUN_1438235b0 body=18 status=ok
// SIG undefined FUN_1438235b0(void)

undefined8 * FUN_1438235b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468212c0;
  return param_2;
}



// FUNCTION 1438235d0 FUN_1438235d0 body=203 status=ok
// SIG undefined FUN_1438235d0(void)

void FUN_1438235d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar2 = (longlong *)(param_2 + 0x18);
    lVar3 = (longlong)param_4;
    lVar4 = param_1 - param_2;
    do {
      lVar1 = lVar4 + -0x10 + (longlong)plVar2;
      FUN_1437182e0(lVar1,lVar1 + (param_2 - param_1));
      if (*plVar2 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + (longlong)plVar2) = *plVar2;
      if (plVar2[1] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + 8 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + 8 + (longlong)plVar2) = plVar2[1];
      *(longlong *)(lVar4 + 0x10 + (longlong)plVar2) = plVar2[2];
      *(int *)(lVar4 + 0x18 + (longlong)plVar2) = (int)plVar2[3];
      *(undefined1 *)(lVar4 + 0x1c + (longlong)plVar2) = *(undefined1 *)((longlong)plVar2 + 0x1c);
      *(undefined1 *)(lVar4 + 0x1d + (longlong)plVar2) = *(undefined1 *)((longlong)plVar2 + 0x1d);
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438236a0 FUN_1438236a0 body=146 status=ok
// SIG undefined FUN_1438236a0(void)

undefined8 * FUN_1438236a0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiAstarEdgeFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x130;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 143823740 FUN_143823740 body=203 status=ok
// SIG undefined FUN_143823740(void)

longlong FUN_143823740(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0xe0,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438239f0 FUN_1438239f0 body=18 status=ok
// SIG undefined FUN_1438239f0(void)

undefined8 * FUN_1438239f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468147b0;
  return param_2;
}



// FUNCTION 143823a20 FUN_143823a20 body=139 status=ok
// SIG undefined FUN_143823a20(void)

longlong FUN_143823a20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143832160();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 143823ac0 FUN_143823ac0 body=55 status=ok
// SIG undefined FUN_143823ac0(void)

void FUN_143823ac0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438654c0(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143823b00 FUN_143823b00 body=77 status=ok
// SIG undefined FUN_143823b00(void)

void FUN_143823b00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a290(param_1,local_res18);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143823b50 FUN_143823b50 body=74 status=ok
// SIG undefined FUN_143823b50(void)

void FUN_143823b50(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a710(param_1,local_res18);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143823ba0 FUN_143823ba0 body=18 status=ok
// SIG undefined FUN_143823ba0(void)

undefined8 * FUN_143823ba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814c10;
  return param_2;
}



// FUNCTION 143823be0 FUN_143823be0 body=74 status=ok
// SIG undefined FUN_143823be0(void)

void FUN_143823be0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382abd0(param_1,local_res18);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143823c80 FUN_143823c80 body=200 status=ok
// SIG undefined FUN_143823c80(void)

void FUN_143823c80(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiStaticTreeNavMeshQueryMediator::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 0x18 + lVar3);
        *(longlong *)(lVar3 + 0x18) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143823d50 FUN_143823d50 body=434 status=ok
// SIG undefined FUN_143823d50(void)

void FUN_143823d50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar4 = (uint *)(param_1 + 0x54);
    lVar5 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar4 + -0x13,(longlong)puVar4 + param_2 + -0x4c);
      *(undefined1 *)(puVar4 + -0xf) = *(undefined1 *)(param_2 + -0x3c + (longlong)puVar4);
      puVar4[-0xe] = *(uint *)(param_2 + -0x38 + (longlong)puVar4);
      *(undefined1 *)(puVar4 + -0xd) = *(undefined1 *)(param_2 + -0x34 + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x2c + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -0xb) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -0xb) = *(undefined8 *)(param_2 + -0x2c + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x24 + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -9) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -9) = *(undefined8 *)(param_2 + -0x24 + (longlong)puVar4);
      *(undefined8 *)(puVar4 + -7) = *(undefined8 *)(param_2 + -0x1c + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x14 + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -5) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar4);
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar4);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,0x50);
      }
      FUN_143828c00(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      puVar4 = puVar4 + 0x16;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143823f20 FUN_143823f20 body=47 status=ok
// SIG undefined FUN_143823f20(void)

undefined1 FUN_143823f20(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1437088f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_143821da0(param_1 + 0x10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143824000 FUN_143824000 body=51 status=ok
// SIG undefined FUN_143824000(void)

undefined1 FUN_143824000(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fa40(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143824050 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiPointCloudSilhouetteGenerator>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14387e080(param_1);
      }
      param_1 = param_1 + 0xb0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143824090 FUN_143824090 body=18 status=ok
// SIG undefined FUN_143824090(void)

undefined8 * FUN_143824090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814e80;
  return param_2;
}



// FUNCTION 1438240e0 FUN_1438240e0 body=18 status=ok
// SIG undefined FUN_1438240e0(void)

undefined8 * FUN_1438240e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815030;
  return param_2;
}



// FUNCTION 143824100 FUN_143824100 body=18 status=ok
// SIG undefined FUN_143824100(void)

undefined8 * FUN_143824100(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815090;
  return param_2;
}



// FUNCTION 143824120 FUN_143824120 body=171 status=ok
// SIG undefined FUN_143824120(void)

longlong FUN_143824120(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0xe0;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 143824220 FUN_143824220 body=247 status=ok
// SIG undefined FUN_143824220(void)

void FUN_143824220(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0xa4);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0x29) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0x27) = 0;
        puVar1[-0x25] = 0x1ffff;
        *(undefined ***)(puVar1 + -0x29) = hkaiNavMeshInstanceCutter::vftable;
        *(undefined8 *)(puVar1 + -0x23) = 0;
        FUN_143880970(puVar1 + -0x1f);
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        *(undefined8 *)(puVar1 + 5) = 0;
        puVar1[7] = 0;
        puVar1[8] = 0x80000000;
        FUN_143734b10(puVar1 + 9);
        *(undefined8 *)(puVar1 + 0xd) = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0x80000000;
        FUN_143734b10(puVar1 + 0x11);
        *(undefined8 *)(puVar1 + 0x15) = 0;
        puVar1[0x17] = 0;
        puVar1[0x18] = 0x80000000;
      }
      puVar1 = puVar1 + 0x42;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143824320 FUN_143824320 body=74 status=ok
// SIG undefined FUN_143824320(void)

void FUN_143824320(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143829f00(param_1,local_res18);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143824370 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkgpMeshMergeAssemblyImpl::GeometryData>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xb0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x16;
      plVar2 = plVar2 + -0x16;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1438243d0 FUN_1438243d0 body=18 status=ok
// SIG undefined FUN_1438243d0(void)

undefined8 * FUN_1438243d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815220;
  return param_2;
}



// FUNCTION 143824440 FUN_143824440 body=18 status=ok
// SIG undefined FUN_143824440(void)

undefined8 * FUN_143824440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815360;
  return param_2;
}



// FUNCTION 143824460 FUN_143824460 body=58 status=ok
// SIG undefined FUN_143824460(void)

void FUN_143824460(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383c010(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438244a0 FUN_1438244a0 body=18 status=ok
// SIG undefined FUN_1438244a0(void)

undefined8 * FUN_1438244a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468154f0;
  return param_2;
}



// FUNCTION 143824530 FUN_143824530 body=183 status=ok
// SIG undefined FUN_143824530(void)

undefined8 * FUN_143824530(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiBehavior::vftable;
  param_1[3] = hkaiBehavior::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[3] = hkaiPathRequestInfoOwner::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x28;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143824630 FUN_143824630 body=77 status=ok
// SIG undefined FUN_143824630(void)

undefined1 FUN_143824630(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x40);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x50);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143824680 FUN_143824680 body=146 status=ok
// SIG undefined FUN_143824680(void)

undefined8 * FUN_143824680(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiNavVolumeMediator::vftable;
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



// FUNCTION 143824720 FUN_143824720 body=78 status=ok
// SIG undefined FUN_143824720(void)

void FUN_143824720(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14383bd50(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438247d0 FUN_1438247d0 body=18 status=ok
// SIG undefined FUN_1438247d0(void)

undefined8 * FUN_1438247d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815930;
  return param_2;
}



// FUNCTION 1438247f0 IsValidForNotify body=51 status=ok
// SIG undefined IsValidForNotify(void)

undefined1 FCollisionNotifyInfo::IsValidForNotify(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143820810(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143824830 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiAsyncLatencyMonitor>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143824870 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383c8b0(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438248b0 FUN_1438248b0 body=931 status=ok
// SIG undefined FUN_1438248b0(void)

void FUN_1438248b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar12 = (int *)(param_1 + 0x210);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      piVar1 = piVar12 + -0x84;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar12 + -0x82,param_2 + -0x208 + (longlong)piVar12);
        piVar12[-0x80] = 0x1ffff;
        *(undefined ***)piVar1 = hkaiNavigator::vftable;
        *(undefined8 *)(piVar12 + -0x7e) = *(undefined8 *)((longlong)piVar12 + param_2 + -0x1f8);
        piVar12[-0x7c] = 0;
        piVar12[-0x7b] = 0;
        piVar12[-0x7a] = 0;
        piVar12[-0x79] = -0x80000000;
        iVar3 = *(int *)(param_2 + -0x1e8 + (longlong)piVar12);
        lVar14 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_res20[0];
        puVar10 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,0x20,local_res20);
        }
        *(undefined8 **)(piVar12 + -0x7c) = puVar10;
        piVar12[-0x7a] = iVar8;
        iVar8 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar8 = local_res20[0];
        }
        piVar12[-0x79] = iVar8;
        if (0 < iVar3) {
          puVar11 = puVar10 + 2;
          lVar15 = *(longlong *)((longlong)piVar12 + param_2 + -0x1f0) - (longlong)puVar10;
          do {
            puVar10 = (undefined8 *)(lVar15 + -0x10 + (longlong)puVar11);
            uVar9 = puVar10[1];
            puVar11[-2] = *puVar10;
            puVar11[-1] = uVar9;
            *(undefined4 *)puVar11 = *(undefined4 *)(lVar15 + (longlong)puVar11);
            puVar11 = puVar11 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        puVar10 = (undefined8 *)(param_2 + -0x1e0 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x78) = *puVar10;
        *(undefined8 *)(piVar12 + -0x76) = uVar9;
        *(undefined1 *)(piVar12 + -0x74) = *(undefined1 *)(param_2 + -0x1d0 + (longlong)piVar12);
        piVar1 = (int *)(param_2 + -0x1c0 + (longlong)piVar12);
        iVar3 = piVar1[1];
        iVar8 = piVar1[2];
        iVar4 = piVar1[3];
        piVar12[-0x70] = *piVar1;
        piVar12[-0x6f] = iVar3;
        piVar12[-0x6e] = iVar8;
        piVar12[-0x6d] = iVar4;
        *(undefined1 *)(piVar12 + -0x6c) = *(undefined1 *)(param_2 + -0x1b0 + (longlong)piVar12);
        *(undefined1 *)((longlong)piVar12 + -0x1af) =
             *(undefined1 *)(param_2 + -0x1af + (longlong)piVar12);
        FUN_143829ca0(piVar12 + -0x68,param_2 + -0x1a0 + (longlong)piVar12);
        lVar14 = *(longlong *)(param_2 + -0xc0 + (longlong)piVar12);
        *(longlong *)(piVar12 + -0x30) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        puVar10 = (undefined8 *)(param_2 + -0xb0 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x2c) = *puVar10;
        *(undefined8 *)(piVar12 + -0x2a) = uVar9;
        puVar10 = (undefined8 *)(param_2 + -0xa0 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x28) = *puVar10;
        *(undefined8 *)(piVar12 + -0x26) = uVar9;
        puVar10 = (undefined8 *)(param_2 + -0x90 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x24) = *puVar10;
        *(undefined8 *)(piVar12 + -0x22) = uVar9;
        puVar10 = (undefined8 *)(param_2 + -0x80 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x20) = *puVar10;
        *(undefined8 *)(piVar12 + -0x1e) = uVar9;
        puVar10 = (undefined8 *)(param_2 + -0x70 + (longlong)piVar12);
        uVar9 = puVar10[1];
        *(undefined8 *)(piVar12 + -0x1c) = *puVar10;
        *(undefined8 *)(piVar12 + -0x1a) = uVar9;
        piVar1 = (int *)((longlong)piVar12 + param_2 + -0x60);
        iVar3 = piVar1[1];
        iVar8 = piVar1[2];
        iVar4 = piVar1[3];
        piVar12[-0x18] = *piVar1;
        piVar12[-0x17] = iVar3;
        piVar12[-0x16] = iVar8;
        piVar12[-0x15] = iVar4;
        piVar1 = (int *)((longlong)piVar12 + param_2 + -0x50);
        iVar3 = piVar1[1];
        iVar8 = piVar1[2];
        iVar4 = piVar1[3];
        piVar12[-0x14] = *piVar1;
        piVar12[-0x13] = iVar3;
        piVar12[-0x12] = iVar8;
        piVar12[-0x11] = iVar4;
        lVar14 = *(longlong *)((longlong)piVar12 + param_2 + -0x40);
        *(longlong *)(piVar12 + -0x10) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        *(undefined1 *)(piVar12 + -0xe) = *(undefined1 *)((longlong)piVar12 + param_2 + -0x38);
        lVar14 = *(longlong *)((longlong)piVar12 + param_2 + -0x30);
        *(longlong *)(piVar12 + -0xc) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        lVar14 = *(longlong *)((longlong)piVar12 + param_2 + -0x28);
        *(longlong *)(piVar12 + -10) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(piVar12 + -8) = *(undefined8 *)((longlong)piVar12 + param_2 + -0x20);
        piVar12[-6] = *(int *)((longlong)piVar12 + param_2 + -0x18);
        piVar12[-5] = *(int *)((longlong)piVar12 + param_2 + -0x14);
        *(undefined1 *)(piVar12 + -4) = *(undefined1 *)((longlong)piVar12 + param_2 + -0x10);
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        *piVar12 = 0;
        piVar12[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar12);
        lVar14 = (longlong)iVar3;
        local_38[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_38[0];
        puVar10 = (undefined8 *)0x0;
        if (local_38[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,0x90,local_38);
        }
        *(undefined8 **)(piVar12 + -2) = puVar10;
        *piVar12 = iVar8;
        iVar8 = -0x80000000;
        if (local_38[0] != 0) {
          iVar8 = local_38[0];
        }
        piVar12[1] = iVar8;
        if (0 < iVar3) {
          lVar15 = *(longlong *)((longlong)piVar12 + param_2 + -8) - (longlong)puVar10;
          do {
            uVar9 = ((undefined8 *)(lVar15 + (longlong)puVar10))[1];
            *puVar10 = *(undefined8 *)(lVar15 + (longlong)puVar10);
            puVar10[1] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[2] = *puVar11;
            puVar10[3] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x20 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[4] = *puVar11;
            puVar10[5] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x30 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[6] = *puVar11;
            puVar10[7] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x40 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[8] = *puVar11;
            puVar10[9] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x50 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[10] = *puVar11;
            puVar10[0xb] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x60 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[0xc] = *puVar11;
            puVar10[0xd] = uVar9;
            puVar11 = (undefined8 *)(lVar15 + 0x70 + (longlong)puVar10);
            uVar9 = puVar11[1];
            puVar10[0xe] = *puVar11;
            puVar10[0xf] = uVar9;
            puVar2 = (undefined4 *)(lVar15 + 0x80 + (longlong)puVar10);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            *(undefined4 *)(puVar10 + 0x10) = *puVar2;
            *(undefined4 *)((longlong)puVar10 + 0x84) = uVar5;
            *(undefined4 *)(puVar10 + 0x11) = uVar6;
            *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar7;
            puVar10 = puVar10 + 0x12;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0;
        piVar12[0xb] = 0;
        piVar12[0xc] = 0;
        piVar12[0xd] = 0;
        piVar12[0xe] = 0;
        piVar12[0xf] = 0;
        *(undefined1 *)(piVar12 + 0x10) = *(undefined1 *)((longlong)piVar12 + param_2 + 0x40);
      }
      piVar12 = piVar12 + 0x98;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143824c60 FUN_143824c60 body=83 status=ok
// SIG undefined FUN_143824c60(void)

undefined1 FUN_143824c60(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14381f3f0(param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x208);
      if (cVar1 != '\0') {
        cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x250);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143824cc0 FUN_143824cc0 body=7 status=ok
// SIG undefined FUN_143824cc0(void)

undefined4 FUN_143824cc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// FUNCTION 143824cd0 FUN_143824cd0 body=64 status=ok
// SIG undefined FUN_143824cd0(void)

undefined1 FUN_143824cd0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = thunk_FUN_14375e550(param_1 + 0x40);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143824d10 FUN_143824d10 body=94 status=ok
// SIG undefined FUN_143824d10(void)

void FUN_143824d10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x260 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x4c;
      plVar2 = plVar2 + -0x4c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143824d70 FUN_143824d70 body=75 status=ok
// SIG undefined FUN_143824d70(void)

void FUN_143824d70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14383c820(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143824dc0 FUN_143824dc0 body=139 status=ok
// SIG undefined FUN_143824dc0(void)

longlong FUN_143824dc0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c230();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 143824e60 FUN_143824e60 body=58 status=ok
// SIG undefined FUN_143824e60(void)

void FUN_143824e60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143836b70(param_1);
      }
      param_1 = param_1 + 0x1b0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143824ea0 FUN_143824ea0 body=885 status=ok
// SIG undefined FUN_143824ea0(void)

void FUN_143824ea0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0x6c);
    lVar10 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar7 + -0x19,param_2 + -100 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x15) = *(undefined8 *)(param_2 + -0x54 + (longlong)puVar7);
      puVar7[-0x13] = *(uint *)(param_2 + -0x4c + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x11) = *(undefined8 *)((longlong)puVar7 + param_2 + -0x44);
      puVar7[-0xf] = *(uint *)(param_2 + -0x3c + (longlong)puVar7);
      if (*(longlong *)(param_2 + -0x34 + (longlong)puVar7) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar7 + -0xd) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar7 + -0xd) = *(undefined8 *)(param_2 + -0x34 + (longlong)puVar7);
      uVar1 = *(uint *)((longlong)puVar7 + param_2 + -0x24);
      uVar4 = *(undefined8 *)((longlong)puVar7 + param_2 + -0x2c);
      uVar3 = FUN_143703a50();
      if ((int)(puVar7[-8] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar7 + -0xb,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar7 + -0xb),uVar4,uVar1);
      puVar7[-9] = uVar1;
      uVar1 = *(uint *)(param_2 + -0x14 + (longlong)puVar7);
      lVar2 = *(longlong *)((longlong)puVar7 + param_2 + -0x1c);
      uVar4 = FUN_143703a50();
      if ((int)(puVar7[-4] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar7 + -7,uVar1,8);
      }
      uVar8 = uVar1;
      if ((int)puVar7[-5] < (int)uVar1) {
        uVar8 = puVar7[-5];
      }
      FUN_143738e40(*(undefined8 *)(puVar7 + -7),lVar2,uVar8);
      puVar5 = (undefined8 *)(*(longlong *)(puVar7 + -7) + (longlong)(int)uVar8 * 8);
      lVar6 = (longlong)(int)(uVar1 - uVar8);
      if (0 < (int)(uVar1 - uVar8)) {
        lVar9 = (longlong)(int)uVar8 * 8 - (longlong)puVar5;
        do {
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *(undefined8 *)(lVar9 + lVar2 + (longlong)puVar5);
          }
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      puVar7[-5] = uVar1;
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar7);
      uVar4 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar7);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar7 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar7 + -3,uVar1,8);
      }
      FUN_143738e40(*(undefined8 *)(puVar7 + -3),uVar4,uVar1);
      puVar7[-1] = uVar1;
      uVar1 = *(uint *)(param_2 + 0xc + (longlong)puVar7);
      uVar4 = *(undefined8 *)(param_2 + 4 + (longlong)puVar7);
      uVar3 = FUN_143703a50();
      if ((int)(puVar7[4] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar7 + 1,uVar1,0x18);
      }
      FUN_143738e70(*(undefined8 *)(puVar7 + 1),uVar4,uVar1);
      puVar7[3] = uVar1;
      uVar1 = *(uint *)(param_2 + 0x1c + (longlong)puVar7);
      uVar4 = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar7);
      uVar3 = FUN_143703a50();
      if ((int)(puVar7[8] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar7 + 5,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar7 + 5),uVar4,uVar1);
      puVar7[7] = uVar1;
      puVar7[9] = *(uint *)(param_2 + 0x24 + (longlong)puVar7);
      puVar7[10] = *(uint *)(param_2 + 0x28 + (longlong)puVar7);
      puVar7[0xb] = *(uint *)(param_2 + 0x2c + (longlong)puVar7);
      puVar7 = puVar7 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 143825220 FUN_143825220 body=144 status=ok
// SIG undefined FUN_143825220(void)

undefined8 * FUN_143825220(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiSilhouetteMerger::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x60;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143825320 FUN_143825320 body=139 status=ok
// SIG undefined FUN_143825320(void)

longlong FUN_143825320(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c730();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438253ac FUN_1438253ac body=9 status=ok
// SIG undefined FUN_1438253ac(void)

void FUN_1438253ac(longlong param_1)

{
  FUN_1438247d0(param_1 + -0x18);
  return;
}



// FUNCTION 1438253b8 FUN_1438253b8 body=9 status=ok
// SIG undefined FUN_1438253b8(void)

void FUN_1438253b8(longlong param_1)

{
  FUN_143827af0(param_1 + -0x18);
  return;
}



// FUNCTION 143825420 FUN_143825420 body=78 status=ok
// SIG undefined FUN_143825420(void)

void FUN_143825420(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143836300(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x1b0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825470 FUN_143825470 body=18 status=ok
// SIG undefined FUN_143825470(void)

undefined8 * FUN_143825470(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468286d0;
  return param_2;
}



// FUNCTION 143825490 FUN_143825490 body=73 status=ok
// SIG undefined FUN_143825490(void)

undefined1 FUN_143825490(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0xb2);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fb20(param_1 + 0xb4);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xb8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1438254e0 FUN_1438254e0 body=77 status=ok
// SIG undefined FUN_1438254e0(void)

void FUN_1438254e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382aa70(param_1,local_res18);
      }
      param_1 = param_1 + 0x260;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825530 GetOwningContainer body=9 status=ok
// SIG undefined GetOwningContainer(void)

void FXGameplayEffectHandle::GetOwningContainer(longlong param_1)

{
  FUN_14382fa30(param_1 + 4);
  return;
}



// FUNCTION 143825540 FUN_143825540 body=55 status=ok
// SIG undefined FUN_143825540(void)

void FUN_143825540(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438564f0(param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825580 FUN_143825580 body=94 status=ok
// SIG undefined FUN_143825580(void)

void FUN_143825580(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x1b0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x36;
      plVar2 = plVar2 + -0x36;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1438255e0 FUN_1438255e0 body=55 status=ok
// SIG undefined FUN_1438255e0(void)

void FUN_1438255e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438692e0(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825700 FUN_143825700 body=89 status=ok
// SIG undefined FUN_143825700(void)

void FUN_143825700(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x1c);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 != (undefined4 *)0x1c) {
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
      }
      puVar1 = puVar1 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143825770 FUN_143825770 body=74 status=ok
// SIG undefined FUN_143825770(void)

void FUN_143825770(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a980(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438257d0 FUN_1438257d0 body=55 status=ok
// SIG undefined FUN_1438257d0(void)

void FUN_1438257d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383aaf0(param_1);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825810 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiCollisionAvoidance::SimpleObstacleGenerator>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143833dc0(param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825868 FUN_143825868 body=9 status=ok
// SIG undefined FUN_143825868(void)

void FUN_143825868(longlong param_1)

{
  FUN_14381d4c0(param_1 + -0x18);
  return;
}



// FUNCTION 143825888 FUN_143825888 body=9 status=ok
// SIG undefined FUN_143825888(void)

void FUN_143825888(longlong param_1)

{
  FUN_143824530(param_1 + -0x18);
  return;
}



// FUNCTION 1438258a0 FUN_1438258a0 body=73 status=ok
// SIG undefined FUN_1438258a0(void)

void FUN_1438258a0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14382cff0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x1b0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438258f0 FUN_1438258f0 body=200 status=ok
// SIG undefined FUN_1438258f0(void)

void FUN_1438258f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiAabbTreeNavVolumeMediator::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 0x18 + lVar3);
        *(longlong *)(lVar3 + 0x18) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143825ab0 FUN_143825ab0 body=18 status=ok
// SIG undefined FUN_143825ab0(void)

undefined8 * FUN_143825ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468162f0;
  return param_2;
}



// FUNCTION 143825ad0 FUN_143825ad0 body=302 status=ok
// SIG undefined FUN_143825ad0(void)

void FUN_143825ad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar3 = (longlong *)(param_1 + 0x60);
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      plVar1 = plVar3 + -0xc;
      if (plVar1 != (longlong *)0x0) {
        FUN_14382b640(plVar1,param_2 + -0x60 + (longlong)plVar3);
        *plVar1 = (longlong)hkaiPathFollowingBehavior::vftable;
        plVar3[-9] = (longlong)hkaiPathFollowingBehavior::vftable;
        lVar2 = *(longlong *)(param_2 + (longlong)plVar3);
        *plVar3 = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 8 + (longlong)plVar3);
        plVar3[1] = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 0x10 + (longlong)plVar3);
        plVar3[2] = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)plVar3);
        *(undefined4 *)((longlong)plVar3 + 0x1c) =
             *(undefined4 *)((longlong)plVar3 + param_2 + 0x1c);
        *(undefined4 *)(plVar3 + 4) = *(undefined4 *)((longlong)plVar3 + param_2 + 0x20);
        *(undefined4 *)((longlong)plVar3 + 0x24) =
             *(undefined4 *)((longlong)plVar3 + param_2 + 0x24);
        *(undefined4 *)(plVar3 + 5) = *(undefined4 *)((longlong)plVar3 + param_2 + 0x28);
        *(undefined4 *)((longlong)plVar3 + 0x2c) =
             *(undefined4 *)((longlong)plVar3 + param_2 + 0x2c);
        *(undefined4 *)(plVar3 + 6) = *(undefined4 *)((longlong)plVar3 + param_2 + 0x30);
        *(undefined4 *)((longlong)plVar3 + 0x34) =
             *(undefined4 *)((longlong)plVar3 + param_2 + 0x34);
        *(undefined1 *)(plVar3 + 7) = *(undefined1 *)((longlong)plVar3 + param_2 + 0x38);
        *(undefined1 *)((longlong)plVar3 + 0x39) =
             *(undefined1 *)((longlong)plVar3 + param_2 + 0x39);
        *(undefined1 *)((longlong)plVar3 + 0x3a) =
             *(undefined1 *)((longlong)plVar3 + param_2 + 0x3a);
        *(undefined1 *)((longlong)plVar3 + 0x3b) =
             *(undefined1 *)((longlong)plVar3 + param_2 + 0x3b);
        *(undefined1 *)((longlong)plVar3 + 0x3c) =
             *(undefined1 *)((longlong)plVar3 + param_2 + 0x3c);
        *(undefined1 *)((longlong)plVar3 + 0x3d) =
             *(undefined1 *)((longlong)plVar3 + param_2 + 0x3d);
      }
      plVar3 = plVar3 + 0x14;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143825c00 FUN_143825c00 body=18 status=ok
// SIG undefined FUN_143825c00(void)

undefined8 * FUN_143825c00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816350;
  return param_2;
}



// FUNCTION 143825c40 FUN_143825c40 body=51 status=ok
// SIG undefined FUN_143825c40(void)

undefined1 FUN_143825c40(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x38);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143825cd0 func body=63 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiOverlapManager::Section>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x100 + param_1;
    do {
      FUN_14382ca40(param_1);
      param_1 = param_1 + -0x100;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143825d10 FUN_143825d10 body=74 status=ok
// SIG undefined FUN_143825d10(void)

void FUN_143825d10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a5a0(param_1,local_res18);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825d60 FUN_143825d60 body=60 status=ok
// SIG undefined FUN_143825d60(void)

void FUN_143825d60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143875090(param_1,0);
      }
      param_1 = param_1 + 0xc0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143825da0 FUN_143825da0 body=18 status=ok
// SIG undefined FUN_143825da0(void)

undefined8 * FUN_143825da0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816480;
  return param_2;
}



// FUNCTION 143825dc0 FUN_143825dc0 body=212 status=ok
// SIG undefined FUN_143825dc0(void)

longlong FUN_143825dc0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  thunk_FUN_143734820(param_1 + 0x28);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 143825ea0 FUN_143825ea0 body=95 status=ok
// SIG undefined FUN_143825ea0(void)

undefined1 FUN_143825ea0(longlong param_1)

{
  char cVar1;
  
  cVar1 = CAkParameterNodeBase::SetRTPC();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x80);
      if (cVar1 != '\0') {
        cVar1 = FUN_14382fa50(param_1 + 0x94);
        if (cVar1 != '\0') {
          cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x95);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143825f60 FUN_143825f60 body=18 status=ok
// SIG undefined FUN_143825f60(void)

undefined8 * FUN_143825f60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816550;
  return param_2;
}



// FUNCTION 143825fe0 FUN_143825fe0 body=838 status=ok
// SIG undefined FUN_143825fe0(void)

void FUN_143825fe0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar13 = (int *)(param_1 + 0x1a8);
    param_2 = param_2 - param_1;
    lVar14 = (longlong)param_4;
    do {
      piVar3 = piVar13 + -0x6a;
      if (piVar3 != (int *)0x0) {
        *(undefined ***)piVar3 = hkReferencedObject::vftable;
        FUN_143718270(piVar13 + -0x68,param_2 + -0x1a0 + (longlong)piVar13);
        piVar13[-0x66] = 0x1ffff;
        *(undefined ***)piVar3 = hkaiVolumeNavigator::vftable;
        *(undefined8 *)(piVar13 + -100) = *(undefined8 *)((longlong)piVar13 + param_2 + -400);
        piVar13[-0x62] = 0;
        piVar13[-0x61] = 0;
        piVar13[-0x60] = 0;
        piVar13[-0x5f] = -0x80000000;
        iVar4 = *(int *)(param_2 + -0x180 + (longlong)piVar13);
        lVar15 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_res20[0];
        puVar11 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar11 = (undefined8 *)FUN_143702d60(uVar10,0x10,local_res20);
        }
        *(undefined8 **)(piVar13 + -0x62) = puVar11;
        piVar13[-0x60] = iVar9;
        iVar9 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar9 = local_res20[0];
        }
        piVar13[-0x5f] = iVar9;
        if (0 < iVar4) {
          lVar12 = *(longlong *)((longlong)piVar13 + param_2 + -0x188) - (longlong)puVar11;
          do {
            puVar1 = (undefined8 *)(lVar12 + (longlong)puVar11);
            uVar10 = puVar1[1];
            *puVar11 = *puVar1;
            puVar11[1] = uVar10;
            puVar11 = puVar11 + 2;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar11 = (undefined8 *)(param_2 + -0x178 + (longlong)piVar13);
        uVar10 = puVar11[1];
        *(undefined8 *)(piVar13 + -0x5e) = *puVar11;
        *(undefined8 *)(piVar13 + -0x5c) = uVar10;
        piVar3 = (int *)(param_2 + -0x168 + (longlong)piVar13);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-0x5a] = *piVar3;
        piVar13[-0x59] = iVar4;
        piVar13[-0x58] = iVar9;
        piVar13[-0x57] = iVar5;
        *(undefined1 *)(piVar13 + -0x56) = *(undefined1 *)(param_2 + -0x158 + (longlong)piVar13);
        FUN_143829df0(piVar13 + -0x52,param_2 + -0x148 + (longlong)piVar13);
        *(undefined1 *)(piVar13 + -0x2a) = *(undefined1 *)(param_2 + -0xa8 + (longlong)piVar13);
        lVar15 = *(longlong *)(param_2 + -0xa0 + (longlong)piVar13);
        *(longlong *)(piVar13 + -0x28) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        puVar11 = (undefined8 *)(param_2 + -0x98 + (longlong)piVar13);
        uVar10 = puVar11[1];
        *(undefined8 *)(piVar13 + -0x26) = *puVar11;
        *(undefined8 *)(piVar13 + -0x24) = uVar10;
        puVar11 = (undefined8 *)(param_2 + -0x88 + (longlong)piVar13);
        uVar10 = puVar11[1];
        *(undefined8 *)(piVar13 + -0x22) = *puVar11;
        *(undefined8 *)(piVar13 + -0x20) = uVar10;
        piVar3 = (int *)(param_2 + -0x78 + (longlong)piVar13);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-0x1e] = *piVar3;
        piVar13[-0x1d] = iVar4;
        piVar13[-0x1c] = iVar9;
        piVar13[-0x1b] = iVar5;
        piVar3 = (int *)(param_2 + -0x68 + (longlong)piVar13);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-0x1a] = *piVar3;
        piVar13[-0x19] = iVar4;
        piVar13[-0x18] = iVar9;
        piVar13[-0x17] = iVar5;
        lVar15 = *(longlong *)(param_2 + -0x58 + (longlong)piVar13);
        *(longlong *)(piVar13 + -0x16) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        *(undefined1 *)(piVar13 + -0x14) = *(undefined1 *)(param_2 + -0x50 + (longlong)piVar13);
        lVar15 = *(longlong *)((longlong)piVar13 + param_2 + -0x48);
        *(longlong *)(piVar13 + -0x12) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        lVar15 = *(longlong *)((longlong)piVar13 + param_2 + -0x40);
        *(longlong *)(piVar13 + -0x10) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        piVar3 = (int *)((longlong)piVar13 + param_2 + -0x38);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-0xe] = *piVar3;
        piVar13[-0xd] = iVar4;
        piVar13[-0xc] = iVar9;
        piVar13[-0xb] = iVar5;
        piVar3 = (int *)((longlong)piVar13 + param_2 + -0x28);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-10] = *piVar3;
        piVar13[-9] = iVar4;
        piVar13[-8] = iVar9;
        piVar13[-7] = iVar5;
        piVar13[-6] = *(int *)((longlong)piVar13 + param_2 + -0x18);
        piVar13[-5] = *(int *)((longlong)piVar13 + param_2 + -0x14);
        *(undefined1 *)(piVar13 + -4) = *(undefined1 *)((longlong)piVar13 + param_2 + -0x10);
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        *piVar13 = 0;
        piVar13[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar13);
        lVar15 = (longlong)iVar4;
        local_38[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_38[0];
        puVar11 = (undefined8 *)0x0;
        if (local_38[0] != 0) {
          puVar11 = (undefined8 *)FUN_143702d60(uVar10,0x50,local_38);
        }
        *(undefined8 **)(piVar13 + -2) = puVar11;
        *piVar13 = iVar9;
        iVar9 = -0x80000000;
        if (local_38[0] != 0) {
          iVar9 = local_38[0];
        }
        piVar13[1] = iVar9;
        if (0 < iVar4) {
          lVar12 = *(longlong *)((longlong)piVar13 + param_2 + -8) - (longlong)puVar11;
          do {
            uVar10 = ((undefined8 *)(lVar12 + (longlong)puVar11))[1];
            *puVar11 = *(undefined8 *)(lVar12 + (longlong)puVar11);
            puVar11[1] = uVar10;
            puVar1 = (undefined8 *)(lVar12 + 0x10 + (longlong)puVar11);
            uVar10 = puVar1[1];
            puVar11[2] = *puVar1;
            puVar11[3] = uVar10;
            puVar1 = (undefined8 *)(lVar12 + 0x20 + (longlong)puVar11);
            uVar10 = puVar1[1];
            puVar11[4] = *puVar1;
            puVar11[5] = uVar10;
            puVar1 = (undefined8 *)(lVar12 + 0x30 + (longlong)puVar11);
            uVar10 = puVar1[1];
            puVar11[6] = *puVar1;
            puVar11[7] = uVar10;
            puVar2 = (undefined4 *)(lVar12 + 0x40 + (longlong)puVar11);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *(undefined4 *)(puVar11 + 8) = *puVar2;
            *(undefined4 *)((longlong)puVar11 + 0x44) = uVar6;
            *(undefined4 *)(puVar11 + 9) = uVar7;
            *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar8;
            puVar11 = puVar11 + 10;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        piVar13[2] = 0;
        piVar13[3] = 0;
        piVar13[4] = 0;
        piVar13[5] = 0;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[8] = 0;
        piVar13[9] = 0;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        piVar13[0xc] = 0;
        piVar13[0xd] = 0;
        piVar13[0xe] = 0;
        piVar13[0xf] = 0;
        *(undefined1 *)(piVar13 + 0x10) = *(undefined1 *)((longlong)piVar13 + param_2 + 0x40);
      }
      piVar13 = piVar13 + 0x7c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 143826350 FUN_143826350 body=18 status=ok
// SIG undefined FUN_143826350(void)

undefined8 * FUN_143826350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468167c0;
  return param_2;
}



// FUNCTION 1438263a0 FUN_1438263a0 body=51 status=ok
// SIG undefined FUN_1438263a0(void)

undefined1 FUN_1438263a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382fad0(param_1 + 0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fb30(param_1 + 0xd);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438263e0 FUN_1438263e0 body=74 status=ok
// SIG undefined FUN_1438263e0(void)

void FUN_1438263e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438299f0(param_1,local_res18);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143826430 FUN_143826430 body=77 status=ok
// SIG undefined FUN_143826430(void)

void FUN_143826430(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b580(param_1,local_res18);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143826480 FUN_143826480 body=18 status=ok
// SIG undefined FUN_143826480(void)

undefined8 * FUN_143826480(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146818200;
  return param_2;
}



// FUNCTION 143826540 FUN_143826540 body=99 status=ok
// SIG undefined FUN_143826540(void)

undefined8 * FUN_143826540(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkaiPathRequestInfoOwner::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1438265a4 FUN_1438265a4 body=9 status=ok
// SIG undefined FUN_1438265a4(void)

void FUN_1438265a4(longlong param_1)

{
  FUN_143821540(param_1 + -0x18);
  return;
}



// FUNCTION 1438265b0 FUN_1438265b0 body=338 status=ok
// SIG undefined FUN_1438265b0(void)

void FUN_1438265b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0x3c);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -0xd,param_2 + -0x34 + (longlong)puVar8);
      puVar1 = (uint *)((longlong)puVar8 + param_2 + -0x1c);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-7] = *puVar1;
      puVar8[-6] = uVar3;
      puVar8[-5] = uVar5;
      puVar8[-4] = uVar6;
      uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar8);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + -0xc);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + -3,uVar3,0x10);
      }
      FUN_142ba3370(*(undefined8 *)(puVar8 + -3),uVar4,uVar3);
      puVar8[-1] = uVar3;
      puVar8[1] = *(uint *)((longlong)puVar8 + param_2 + 4);
      uVar3 = *(uint *)(param_2 + 0x14 + (longlong)puVar8);
      uVar4 = *(undefined8 *)((longlong)puVar8 + param_2 + 0xc);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[6] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + 3,uVar3,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 3),uVar4,uVar3);
      puVar8[5] = uVar3;
      puVar8[7] = *(uint *)((longlong)puVar8 + param_2 + 0x1c);
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x20);
      puVar2 = (undefined8 *)((longlong)puVar8 + param_2 + 0x34);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + 0xd) = *puVar2;
      *(undefined8 *)(puVar8 + 0xf) = uVar4;
      *(undefined8 *)(puVar8 + 0x11) = *(undefined8 *)(param_2 + 0x44 + (longlong)puVar8);
      *(undefined8 *)(puVar8 + 0x13) = *(undefined8 *)(param_2 + 0x4c + (longlong)puVar8);
      *(undefined1 *)(puVar8 + 0x15) = *(undefined1 *)(param_2 + 0x54 + (longlong)puVar8);
      puVar8[0x16] = *(uint *)((longlong)puVar8 + param_2 + 0x58);
      puVar8[0x17] = *(uint *)((longlong)puVar8 + param_2 + 0x5c);
      *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x60);
      puVar1 = (uint *)((longlong)puVar8 + param_2 + 0x74);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[0x1d] = *puVar1;
      puVar8[0x1e] = uVar3;
      puVar8[0x1f] = uVar5;
      puVar8[0x20] = uVar6;
      puVar8 = puVar8 + 0x30;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 143826704 FUN_143826704 body=9 status=ok
// SIG undefined FUN_143826704(void)

void FUN_143826704(longlong param_1)

{
  FUN_143820f60(param_1 + -0x18);
  return;
}



// FUNCTION 143826710 FUN_143826710 body=203 status=ok
// SIG undefined FUN_143826710(void)

longlong FUN_143826710(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0xc,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438267e0 FUN_1438267e0 body=77 status=ok
// SIG undefined FUN_1438267e0(void)

void FUN_1438267e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a2c0(param_1,local_res18);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143826870 FUN_143826870 body=9 status=ok
// SIG undefined FUN_143826870(void)

void FUN_143826870(longlong param_1)

{
  FUN_143824090(param_1 + -0x18);
  return;
}



// FUNCTION 14382687c FUN_14382687c body=9 status=ok
// SIG undefined FUN_14382687c(void)

void FUN_14382687c(longlong param_1)

{
  FUN_143826bd0(param_1 + -0x18);
  return;
}



// FUNCTION 143826890 FUN_143826890 body=235 status=ok
// SIG undefined FUN_143826890(void)

void FUN_143826890(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiNavMeshPathRequestInfo::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + 0x18 + lVar3);
        *(longlong *)(lVar3 + 0x18) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_2 + 0x20 + lVar3);
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar3);
        *(undefined1 *)(lVar3 + 0x2c) = *(undefined1 *)(param_2 + 0x2c + lVar3);
        *(undefined1 *)(lVar3 + 0x2d) = *(undefined1 *)(param_2 + 0x2d + lVar3);
      }
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143826988 FUN_143826988 body=9 status=ok
// SIG undefined FUN_143826988(void)

void FUN_143826988(longlong param_1)

{
  FUN_143827bd0(param_1 + -0x18);
  return;
}



// FUNCTION 143826994 FUN_143826994 body=9 status=ok
// SIG undefined FUN_143826994(void)

void FUN_143826994(longlong param_1)

{
  FUN_14381fcc0(param_1 + -0x18);
  return;
}



// FUNCTION 1438269a0 FUN_1438269a0 body=77 status=ok
// SIG undefined FUN_1438269a0(void)

void FUN_1438269a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b880(param_1,local_res18);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438269f0 FUN_1438269f0 body=47 status=ok
// SIG undefined FUN_1438269f0(void)

undefined1 FUN_1438269f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143826a20 FUN_143826a20 body=18 status=ok
// SIG undefined FUN_143826a20(void)

undefined8 * FUN_143826a20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816c90;
  return param_2;
}



// FUNCTION 143826af0 IsValid body=47 status=ok
// SIG undefined IsValid(void)

undefined1 FPerInputUserBindings::IsValid(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x40);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143826b70 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiWorld>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x520 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xa4;
      plVar2 = plVar2 + -0xa4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143826bd0 FUN_143826bd0 body=168 status=ok
// SIG undefined FUN_143826bd0(void)

longlong FUN_143826bd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14370c150();
  }
  FUN_14386ae40(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x130;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 143826c90 FUN_143826c90 body=18 status=ok
// SIG undefined FUN_143826c90(void)

undefined8 * FUN_143826c90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816e30;
  return param_2;
}



// FUNCTION 143826d80 FUN_143826d80 body=18 status=ok
// SIG undefined FUN_143826d80(void)

undefined8 * FUN_143826d80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816f50;
  return param_2;
}



// FUNCTION 143826da0 FUN_143826da0 body=51 status=ok
// SIG undefined FUN_143826da0(void)

undefined1 FUN_143826da0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 8);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704540(param_1 + 0x18);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143826de0 FUN_143826de0 body=139 status=ok
// SIG undefined FUN_143826de0(void)

longlong FUN_143826de0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143874700();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 143826e80 FUN_143826e80 body=77 status=ok
// SIG undefined FUN_143826e80(void)

void FUN_143826e80(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382ba10(param_1,local_res18);
      }
      param_1 = param_1 + 0x520;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143826ed0 FUN_143826ed0 body=55 status=ok
// SIG undefined FUN_143826ed0(void)

void FUN_143826ed0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383b910(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143826f10 FUN_143826f10 body=82 status=ok
// SIG undefined FUN_143826f10(void)

undefined1 FUN_143826f10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14381d3c0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fb20(param_1 + 0x84);
    if (cVar1 != '\0') {
      cVar1 = FUN_1438201e0(param_1 + 0xa0);
      if (cVar1 != '\0') {
        cVar1 = FUN_14382fb20(param_1 + 0xd0);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143826f80 FUN_143826f80 body=51 status=ok
// SIG undefined FUN_143826f80(void)

undefined1 FUN_143826f80(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143707170(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704540(param_1 + 0x50);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143826fc0 FUN_143826fc0 body=139 status=ok
// SIG undefined FUN_143826fc0(void)

longlong FUN_143826fc0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438634a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x100;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
    }
  }
  return param_1;
}



// FUNCTION 1438270a0 func body=75 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkaiNavVolumeInstance>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14383b870(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438270f0 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiCollisionAvoidance::SimpleObstacleGenerator>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383adc0(param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827130 FUN_143827130 body=141 status=ok
// SIG undefined FUN_143827130(void)

void FUN_143827130(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0x1ffff;
        *(undefined ***)(puVar1 + -9) = hkaiModifiedSections::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
      }
      puVar1 = puVar1 + 0xe;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143827250 FUN_143827250 body=74 status=ok
// SIG undefined FUN_143827250(void)

void FUN_143827250(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b5e0(param_1,local_res18);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438272a0 FUN_1438272a0 body=18 status=ok
// SIG undefined FUN_1438272a0(void)

undefined8 * FUN_1438272a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468173b0;
  return param_2;
}



// FUNCTION 143827310 FUN_143827310 body=55 status=ok
// SIG undefined FUN_143827310(void)

void FUN_143827310(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143854fa0(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827350 FUN_143827350 body=74 status=ok
// SIG undefined FUN_143827350(void)

void FUN_143827350(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a5e0(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438273a0 FUN_1438273a0 body=18 status=ok
// SIG undefined FUN_1438273a0(void)

undefined8 * FUN_1438273a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468174f0;
  return param_2;
}



// FUNCTION 1438273c0 FUN_1438273c0 body=78 status=ok
// SIG undefined FUN_1438273c0(void)

void FUN_1438273c0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_142f8af30(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827490 FUN_143827490 body=802 status=ok
// SIG undefined FUN_143827490(void)

void FUN_143827490(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x3c);
    lVar15 = (longlong)param_4;
    do {
      puVar1 = puVar14 + -0xf;
      if (puVar1 != (uint *)0x0) {
        *(undefined ***)puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar14 + -0xd,param_2 + -0x34 + (longlong)puVar14);
        puVar14[-0xb] = 0x1ffff;
        *(undefined ***)puVar1 = hkaiStreamingSet::vftable;
        puVar14[-9] = *(uint *)(param_2 + -0x24 + (longlong)puVar14);
        puVar14[-8] = *(uint *)(param_2 + -0x20 + (longlong)puVar14);
        puVar14[-7] = 0;
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0x80000000;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0x80000000;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[8] = 0x80000000;
        puVar14[9] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[0xc] = 0x80000000;
        iVar3 = *(int *)(param_2 + -0x14 + (longlong)puVar14);
        lVar16 = (longlong)iVar3;
        lVar12 = *(longlong *)(param_2 + -0x1c + (longlong)puVar14);
        uVar8 = FUN_143703a50();
        uVar10 = puVar14[-4] & 0x3fffffff;
        uVar13 = puVar14[-5] + iVar3;
        if (((int)uVar10 < (int)uVar13) && ((int)uVar10 < (int)uVar13)) {
          uVar4 = uVar13;
          if ((int)uVar13 < (int)(uVar10 * 2)) {
            uVar4 = uVar10 * 2;
          }
          FUN_14370c310(uVar8,puVar14 + -7,uVar4,0x10);
        }
        lVar11 = (longlong)(int)puVar14[-5] * 0x10 + *(longlong *)(puVar14 + -7);
        if (0 < iVar3) {
          puVar9 = (undefined4 *)(lVar11 + 0xc);
          lVar12 = lVar12 - lVar11;
          do {
            puVar9[-3] = *(undefined4 *)(lVar12 + -0xc + (longlong)puVar9);
            puVar9[-2] = *(undefined4 *)(lVar12 + -8 + (longlong)puVar9);
            puVar9[-1] = *(undefined4 *)(lVar12 + -4 + (longlong)puVar9);
            *puVar9 = *(undefined4 *)(lVar12 + (longlong)puVar9);
            puVar9 = puVar9 + 4;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puVar14[-5] = uVar13;
        iVar3 = *(int *)((longlong)puVar14 + param_2 + -4);
        lVar16 = (longlong)iVar3;
        lVar12 = *(longlong *)((longlong)puVar14 + param_2 + -0xc);
        uVar8 = FUN_143703a50();
        uVar10 = *puVar14 & 0x3fffffff;
        uVar13 = puVar14[-1] + iVar3;
        if (((int)uVar10 < (int)uVar13) && ((int)uVar10 < (int)uVar13)) {
          uVar4 = uVar13;
          if ((int)uVar13 < (int)(uVar10 * 2)) {
            uVar4 = uVar10 * 2;
          }
          FUN_14370c310(uVar8,puVar14 + -3,uVar4,0x14);
        }
        puVar9 = (undefined4 *)(*(longlong *)(puVar14 + -3) + (longlong)(int)puVar14[-1] * 0x14);
        if (0 < iVar3) {
          lVar12 = lVar12 - (longlong)puVar9;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              puVar2 = (undefined4 *)(lVar12 + (longlong)puVar9);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              *puVar9 = *puVar2;
              puVar9[1] = uVar5;
              puVar9[2] = uVar6;
              puVar9[3] = uVar7;
              puVar9[4] = *(undefined4 *)(lVar12 + 0x10 + (longlong)puVar9);
            }
            puVar9 = puVar9 + 5;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puVar14[-1] = uVar13;
        iVar3 = *(int *)(param_2 + 0xc + (longlong)puVar14);
        lVar16 = (longlong)iVar3;
        lVar12 = *(longlong *)(param_2 + 4 + (longlong)puVar14);
        uVar8 = FUN_143703a50();
        uVar10 = puVar14[4] & 0x3fffffff;
        uVar13 = puVar14[3] + iVar3;
        if (((int)uVar10 < (int)uVar13) && ((int)uVar10 < (int)uVar13)) {
          uVar4 = uVar13;
          if ((int)uVar13 < (int)(uVar10 * 2)) {
            uVar4 = uVar10 * 2;
          }
          FUN_14370c310(uVar8,puVar14 + 1,uVar4,8);
        }
        lVar11 = *(longlong *)(puVar14 + 1) + (longlong)(int)puVar14[3] * 8;
        if (0 < iVar3) {
          puVar9 = (undefined4 *)(lVar11 + 4);
          lVar12 = lVar12 - lVar11;
          do {
            puVar9[-1] = *(undefined4 *)(lVar12 + -4 + (longlong)puVar9);
            *puVar9 = *(undefined4 *)(lVar12 + (longlong)puVar9);
            puVar9 = puVar9 + 2;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puVar14[3] = uVar13;
      }
      puVar14 = puVar14 + 0x1c;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 1438277c0 FUN_1438277c0 body=58 status=ok
// SIG undefined FUN_1438277c0(void)

void FUN_1438277c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14383d780(param_1);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827800 FUN_143827800 body=203 status=ok
// SIG undefined FUN_143827800(void)

longlong FUN_143827800(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x40,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 1438278d0 FUN_1438278d0 body=58 status=ok
// SIG undefined FUN_1438278d0(void)

void FUN_1438278d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143839b90(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827910 FUN_143827910 body=139 status=ok
// SIG undefined FUN_143827910(void)

longlong FUN_143827910(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c0f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x60;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
    }
  }
  return param_1;
}



// FUNCTION 1438279a0 FUN_1438279a0 body=64 status=ok
// SIG undefined FUN_1438279a0(void)

undefined1 FUN_1438279a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_143823040(param_1 + 0x70);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1438279e0 FUN_1438279e0 body=55 status=ok
// SIG undefined FUN_1438279e0(void)

void FUN_1438279e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143880970(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827a20 FUN_143827a20 body=18 status=ok
// SIG undefined FUN_143827a20(void)

undefined8 * FUN_143827a20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146817720;
  return param_2;
}



// FUNCTION 143827a40 FUN_143827a40 body=78 status=ok
// SIG undefined FUN_143827a40(void)

void FUN_143827a40(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14383d270(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827a90 FUN_143827a90 body=83 status=ok
// SIG undefined FUN_143827a90(void)

undefined1 FUN_143827a90(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FXGameplayEffectHandle::GetOwningContainer(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_14382fa20(param_1 + 0x98);
      if (cVar1 != '\0') {
        cVar1 = FUN_143704540(param_1 + 0xb0);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143827af0 FUN_143827af0 body=139 status=ok
// SIG undefined FUN_143827af0(void)

longlong FUN_143827af0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143870930();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x1f0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1f0);
    }
  }
  return param_1;
}



// FUNCTION 143827b80 FUN_143827b80 body=78 status=ok
// SIG undefined FUN_143827b80(void)

void FUN_143827b80(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143839900(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143827bd0 FUN_143827bd0 body=18 status=ok
// SIG undefined FUN_143827bd0(void)

undefined8 * FUN_143827bd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146817890;
  return param_2;
}



// FUNCTION 143827bf0 FUN_143827bf0 body=203 status=ok
// SIG undefined FUN_143827bf0(void)

longlong FUN_143827bf0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x20,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 143827d30 FUN_143827d30 body=1213 status=ok
// SIG undefined FUN_143827d30(void)

void FUN_143827d30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x7c);
    lVar12 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -0x1d,param_2 + -0x74 + (longlong)puVar8);
      *(undefined8 *)(puVar8 + -0x19) = *(undefined8 *)(param_2 + -100 + (longlong)puVar8);
      puVar8[-0x17] = *(uint *)((longlong)puVar8 + param_2 + -0x5c);
      *(undefined8 *)(puVar8 + -0x15) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x54);
      puVar8[-0x13] = *(uint *)((longlong)puVar8 + param_2 + -0x4c);
      *(undefined8 *)(puVar8 + -0x11) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x44);
      *(undefined8 *)(puVar8 + -0xf) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x3c);
      puVar8[-0xd] = *(uint *)((longlong)puVar8 + param_2 + -0x34);
      *(undefined8 *)(puVar8 + -0xb) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x2c);
      puVar8[-9] = *(uint *)((longlong)puVar8 + param_2 + -0x24);
      puVar8[-8] = *(uint *)((longlong)puVar8 + param_2 + -0x20);
      puVar8[-7] = *(uint *)((longlong)puVar8 + param_2 + -0x1c);
      if (*(longlong *)((longlong)puVar8 + param_2 + -0x14) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -5) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -5) = *(undefined8 *)((longlong)puVar8 + param_2 + -0x14);
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar8);
      uVar5 = *(undefined8 *)((longlong)puVar8 + param_2 + -0xc);
      uVar4 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar8 + -3,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + -3),uVar5,uVar1);
      puVar8[-1] = uVar1;
      uVar1 = *(uint *)(param_2 + 0xc + (longlong)puVar8);
      uVar5 = *(undefined8 *)((longlong)puVar8 + param_2 + 4);
      uVar4 = FUN_143703a50();
      if ((int)(puVar8[4] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar8 + 1,uVar1,8);
      }
      FUN_143738e40(*(undefined8 *)(puVar8 + 1),uVar5,uVar1);
      puVar8[3] = uVar1;
      uVar1 = *(uint *)((longlong)puVar8 + param_2 + 0x1c);
      uVar5 = *(undefined8 *)((longlong)puVar8 + param_2 + 0x14);
      uVar4 = FUN_143703a50();
      if ((int)(puVar8[8] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar8 + 5,uVar1,8);
      }
      FUN_143828360(*(undefined8 *)(puVar8 + 5),uVar5,uVar1);
      puVar8[7] = uVar1;
      uVar1 = *(uint *)(param_2 + 0x2c + (longlong)puVar8);
      uVar5 = *(undefined8 *)(param_2 + 0x24 + (longlong)puVar8);
      uVar4 = FUN_143703a50();
      if ((int)(puVar8[0xc] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar8 + 9,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 9),uVar5,uVar1);
      puVar8[0xb] = uVar1;
      uVar1 = *(uint *)(param_2 + 0x3c + (longlong)puVar8);
      uVar5 = *(undefined8 *)(param_2 + 0x34 + (longlong)puVar8);
      uVar4 = FUN_143703a50();
      if ((int)(puVar8[0x10] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar4,puVar8 + 0xd,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 0xd),uVar5,uVar1);
      puVar8[0xf] = uVar1;
      uVar1 = *(uint *)(param_2 + 0x4c + (longlong)puVar8);
      lVar2 = *(longlong *)(param_2 + 0x44 + (longlong)puVar8);
      uVar5 = FUN_143703a50();
      if ((int)(puVar8[0x14] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar5,puVar8 + 0x11,uVar1,0x10);
      }
      iVar3 = (puVar8[0x13] - uVar1) + -1;
      lVar9 = (longlong)iVar3;
      if (-1 < iVar3) {
        puVar11 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(puVar8 + 0x11) + 0xc +
                          lVar9 * 0x10);
        do {
          uVar5 = FUN_143703a50();
          puVar11[-1] = 0;
          if (-1 < (int)*puVar11) {
            FUN_143702e10(uVar5,*(undefined8 *)(puVar11 + -3),4,*puVar11 & 0x3fffffff);
          }
          puVar11[-3] = 0;
          puVar11[-2] = 0;
          *puVar11 = 0x80000000;
          puVar11 = puVar11 + -4;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
      uVar6 = uVar1;
      if ((int)puVar8[0x13] < (int)uVar1) {
        uVar6 = puVar8[0x13];
      }
      lVar9 = *(longlong *)(puVar8 + 0x11) + (longlong)(int)uVar6 * 0x10;
      if (0 < (int)(uVar1 - uVar6)) {
        lVar7 = (longlong)(int)uVar6 * 0x10 - lVar9;
        uVar10 = (ulonglong)(uVar1 - uVar6);
        do {
          if (lVar9 != 0) {
            FUN_143829be0(lVar9,lVar9 + lVar2 + lVar7);
          }
          lVar9 = lVar9 + 0x10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar8[0x13] = uVar1;
      puVar8 = puVar8 + 0x34;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1438281f0 FUN_1438281f0 body=60 status=ok
// SIG undefined FUN_1438281f0(void)

void FUN_1438281f0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x70 + param_1;
    do {
      FUN_143880ac0(param_1);
      param_1 = param_1 + -0x70;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143828230 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMesh>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xf0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1e;
      plVar2 = plVar2 + -0x1e;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143828290 FUN_143828290 body=60 status=ok
// SIG undefined FUN_143828290(void)

undefined1 FUN_143828290(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x60);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1438282d0 FUN_1438282d0 body=18 status=ok
// SIG undefined FUN_1438282d0(void)

undefined8 * FUN_1438282d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146817b60;
  return param_2;
}



// FUNCTION 1438282f0 FUN_1438282f0 body=18 status=ok
// SIG undefined FUN_1438282f0(void)

undefined8 * FUN_1438282f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146817bc0;
  return param_2;
}



// FUNCTION 143828310 FUN_143828310 body=78 status=ok
// SIG undefined FUN_143828310(void)

void FUN_143828310(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_3;
    lVar1 = param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((param_2 - param_1) + -8 + lVar1);
      FUN_14382ccc0(lVar1,(param_2 - param_1) + lVar1);
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143828360 FUN_143828360 body=50 status=ok
// SIG undefined FUN_143828360(void)

void FUN_143828360(longlong param_1,longlong param_2,int param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined2 *)(param_1 + 2);
    param_2 = param_2 - param_1;
    do {
      puVar1[-1] = *(undefined2 *)(param_2 + -2 + (longlong)puVar1);
      *puVar1 = *(undefined2 *)(param_2 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 2 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438283a0 FUN_1438283a0 body=78 status=ok
// SIG undefined FUN_1438283a0(void)

void FUN_1438283a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 - param_1;
    do {
      puVar1[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 0xc + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0xd) = *(undefined1 *)(param_2 + 0xd + (longlong)puVar1);
      *(undefined2 *)((longlong)puVar1 + 0xe) = *(undefined2 *)(param_2 + 0xe + (longlong)puVar1);
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438283f0 FUN_1438283f0 body=75 status=ok
// SIG undefined FUN_1438283f0(void)

void FUN_1438283f0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 - param_1;
    do {
      puVar1[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
      *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 4 + (longlong)puVar1);
      *(undefined2 *)((longlong)puVar1 + 6) = *(undefined2 *)(param_2 + 6 + (longlong)puVar1);
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 8 + (longlong)puVar1);
      *(undefined2 *)((longlong)puVar1 + 10) = *(undefined2 *)(param_2 + 10 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143828440 FUN_143828440 body=131 status=ok
// SIG undefined FUN_143828440(void)

void FUN_143828440(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_3;
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      if (*(longlong *)(param_2 + -0x20 + (longlong)puVar7) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-4] != 0) {
        FUN_14370c150();
      }
      puVar7[-4] = *(undefined8 *)(param_2 + -0x20 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-2] = *puVar1;
      puVar7[-1] = uVar6;
      uVar6 = ((undefined8 *)(param_2 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_2 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x10 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 2) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
      *(undefined4 *)(puVar7 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
      puVar2 = (undefined4 *)(param_2 + 0x20 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
      puVar7 = puVar7 + 10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1438284d0 FUN_1438284d0 body=76 status=ok
// SIG undefined FUN_1438284d0(void)

void FUN_1438284d0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    param_2 = param_2 - param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + -0x30 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-6] = *puVar1;
      puVar3[-5] = uVar2;
      puVar1 = (undefined8 *)(param_2 + -0x20 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-4] = *puVar1;
      puVar3[-3] = uVar2;
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      uVar2 = ((undefined8 *)(param_2 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_2 + (longlong)puVar3);
      puVar3[1] = uVar2;
      *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar3);
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143828520 FUN_143828520 body=168 status=ok
// SIG undefined FUN_143828520(void)

void FUN_143828520(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_3;
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      *(undefined4 *)(puVar7 + -4) = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar7);
      *(undefined4 *)((longlong)puVar7 + -0x1c) =
           *(undefined4 *)(param_2 + -0x1c + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -3) = *(undefined1 *)(param_2 + -0x18 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-2] = *puVar1;
      puVar7[-1] = uVar6;
      uVar6 = ((undefined8 *)(param_2 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_2 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x10 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 2) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
      *(undefined4 *)(puVar7 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
      puVar2 = (undefined4 *)(param_2 + 0x20 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
      if (*(longlong *)(param_2 + 0x30 + (longlong)puVar7) != 0) {
        FUN_14370c030();
      }
      if (puVar7[6] != 0) {
        FUN_14370c150();
      }
      puVar7[6] = *(undefined8 *)(param_2 + 0x30 + (longlong)puVar7);
      puVar7 = puVar7 + 0xc;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1438285d0 FUN_1438285d0 body=1270 status=ok
// SIG undefined FUN_1438285d0(void)

void FUN_1438285d0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  int local_res18 [2];
  longlong local_res20;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar15 = (longlong)param_3;
    puVar16 = (uint *)(param_1 + 0xc4);
    do {
      puVar16[-0x31] = *(uint *)(param_2 + -0xc4 + (longlong)puVar16);
      local_res20 = lVar15;
      if (*(longlong *)(param_2 + -0xbc + (longlong)puVar16) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar16 + -0x2f) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar16 + -0x2f) = *(undefined8 *)(param_2 + -0xbc + (longlong)puVar16);
      if (*(longlong *)(param_2 + -0xb4 + (longlong)puVar16) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar16 + -0x2d) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar16 + -0x2d) = *(undefined8 *)(param_2 + -0xb4 + (longlong)puVar16);
      puVar2 = (undefined8 *)(param_2 + -0xa4 + (longlong)puVar16);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x29) = *puVar2;
      *(undefined8 *)(puVar16 + -0x27) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0x94 + (longlong)puVar16);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x25) = *puVar2;
      *(undefined8 *)(puVar16 + -0x23) = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar16 + param_2 + -0x84);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x21) = *puVar2;
      *(undefined8 *)(puVar16 + -0x1f) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0x74 + (longlong)puVar16);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x1d) = *puVar2;
      *(undefined8 *)(puVar16 + -0x1b) = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar16 + param_2 + -100);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x19) = *puVar2;
      *(undefined8 *)(puVar16 + -0x17) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0x54 + (longlong)puVar16);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar16 + -0x15) = *puVar2;
      *(undefined8 *)(puVar16 + -0x13) = uVar7;
      puVar11 = (uint *)(param_2 + -0x44 + (longlong)puVar16);
      uVar3 = puVar11[1];
      uVar10 = puVar11[2];
      uVar5 = puVar11[3];
      puVar16[-0x11] = *puVar11;
      puVar16[-0x10] = uVar3;
      puVar16[-0xf] = uVar10;
      puVar16[-0xe] = uVar5;
      puVar11 = (uint *)(param_2 + -0x34 + (longlong)puVar16);
      uVar3 = puVar11[1];
      uVar10 = puVar11[2];
      uVar5 = puVar11[3];
      puVar16[-0xd] = *puVar11;
      puVar16[-0xc] = uVar3;
      puVar16[-0xb] = uVar10;
      puVar16[-10] = uVar5;
      puVar16[-9] = *(uint *)(param_2 + -0x24 + (longlong)puVar16);
      uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar16);
      lVar4 = *(longlong *)(param_2 + -0x1c + (longlong)puVar16);
      uVar7 = FUN_143703a50();
      if ((int)(puVar16[-4] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar16 + -7,uVar3,0x10);
      }
      iVar6 = (puVar16[-5] - uVar3) + -1;
      lVar14 = (longlong)iVar6;
      if (-1 < iVar6) {
        puVar11 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(puVar16 + -7) + 0xc +
                          lVar14 * 0x10);
        do {
          uVar7 = FUN_143703a50();
          puVar11[-1] = 0;
          if (-1 < (int)*puVar11) {
            FUN_143702e10(uVar7,*(undefined8 *)(puVar11 + -3),4,*puVar11 & 0x3fffffff);
          }
          puVar11[-3] = 0;
          puVar11[-2] = 0;
          *puVar11 = 0x80000000;
          puVar11 = puVar11 + -4;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
      uVar10 = uVar3;
      if ((int)puVar16[-5] < (int)uVar3) {
        uVar10 = puVar16[-5];
      }
      FUN_143709a40(*(undefined8 *)(puVar16 + -7),lVar4,uVar10);
      lVar14 = *(longlong *)(puVar16 + -7) + (longlong)(int)uVar10 * 0x10;
      lVar17 = (longlong)(int)(uVar3 - uVar10);
      if (0 < (int)(uVar3 - uVar10)) {
        piVar12 = (int *)(lVar14 + 8);
        lVar4 = ((longlong)(int)uVar10 * 0x10 - lVar14) + lVar4;
        do {
          piVar1 = piVar12 + -2;
          if (piVar1 != (int *)0x0) {
            piVar1[0] = 0;
            piVar1[1] = 0;
            *piVar12 = 0;
            piVar12[1] = -0x80000000;
            iVar6 = *(int *)(lVar4 + (longlong)piVar12);
            lVar15 = (longlong)iVar6;
            local_res18[0] = iVar6;
            uVar7 = FUN_143703a50();
            iVar9 = local_res18[0];
            if (local_res18[0] == 0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)FUN_143702d60(uVar7,4,local_res18);
            }
            *(undefined4 **)piVar1 = puVar8;
            *piVar12 = iVar9;
            iVar9 = -0x80000000;
            if (local_res18[0] != 0) {
              iVar9 = local_res18[0];
            }
            piVar12[1] = iVar9;
            if (0 < iVar6) {
              lVar14 = *(longlong *)(lVar4 + -8 + (longlong)piVar12) - (longlong)puVar8;
              do {
                *puVar8 = *(undefined4 *)(lVar14 + (longlong)puVar8);
                puVar8 = puVar8 + 1;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
          }
          piVar12 = piVar12 + 4;
          lVar17 = lVar17 + -1;
          lVar15 = local_res20;
        } while (lVar17 != 0);
      }
      puVar16[-5] = uVar3;
      uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar16);
      lVar4 = *(longlong *)(param_2 + -0xc + (longlong)puVar16);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar16 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar16 + -3,uVar3,0x40);
      }
      iVar6 = (puVar16[-1] - uVar3) + -1;
      lVar14 = (longlong)iVar6;
      if (-1 < iVar6) {
        puVar11 = (uint *)((longlong)(int)uVar3 * 0x40 + *(longlong *)(puVar16 + -3) + 0x3c +
                          lVar14 * 0x40);
        do {
          uVar7 = FUN_143703a50();
          puVar11[-1] = 0;
          if (-1 < (int)*puVar11) {
            FUN_143702e10(uVar7,*(undefined8 *)(puVar11 + -3),4,*puVar11 & 0x3fffffff);
          }
          puVar11[-3] = 0;
          puVar11[-2] = 0;
          *puVar11 = 0x80000000;
          puVar11 = puVar11 + -0x10;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
      uVar10 = uVar3;
      if ((int)puVar16[-1] < (int)uVar3) {
        uVar10 = puVar16[-1];
      }
      FUN_143828ad0(*(undefined8 *)(puVar16 + -3),lVar4,uVar10);
      lVar14 = *(longlong *)(puVar16 + -3) + (longlong)(int)uVar10 * 0x40;
      if (0 < (int)(uVar3 - uVar10)) {
        lVar17 = (longlong)(int)uVar10 * 0x40 - lVar14;
        uVar13 = (ulonglong)(uVar3 - uVar10);
        do {
          if (lVar14 != 0) {
            FUN_143829f40(lVar14,lVar4 + lVar17 + lVar14);
          }
          lVar14 = lVar14 + 0x40;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar16[-1] = uVar3;
      puVar16 = puVar16 + 0x34;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 143828ad0 FUN_143828ad0 body=173 status=ok
// SIG undefined FUN_143828ad0(void)

void FUN_143828ad0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  if (0 < param_3) {
    puVar8 = (undefined4 *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_3;
    do {
      puVar8[-8] = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar8);
      puVar1 = (undefined4 *)(param_2 + -0x10 + (longlong)puVar8);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-4] = *puVar1;
      puVar8[-3] = uVar4;
      puVar8[-2] = uVar5;
      puVar8[-1] = uVar6;
      puVar1 = (undefined4 *)(param_2 + (longlong)puVar8);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      iVar2 = *(int *)(param_2 + 0x18 + (longlong)puVar8);
      uVar3 = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar8);
      uVar7 = FUN_143703a50();
      if ((int)(puVar8[7] & 0x3fffffff) < iVar2) {
        FUN_14370c310(uVar7,puVar8 + 4,iVar2,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar8 + 4),uVar3,iVar2);
      puVar8[6] = iVar2;
      puVar8 = puVar8 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 143828b80 FUN_143828b80 body=115 status=ok
// SIG undefined FUN_143828b80(void)

void FUN_143828b80(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(param_2 + (longlong)param_1))[1];
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      param_1[1] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[2] = *puVar1;
      param_1[3] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x20 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[4] = *puVar1;
      param_1[5] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x30 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[6] = *puVar1;
      param_1[7] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x40 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[8] = *puVar1;
      param_1[9] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x50 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[10] = *puVar1;
      param_1[0xb] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x60 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[0xc] = *puVar1;
      param_1[0xd] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x70 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[0xe] = *puVar1;
      param_1[0xf] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x80 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[0x10] = *puVar1;
      param_1[0x11] = uVar2;
      param_1 = param_1 + 0x12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143828c00 FUN_143828c00 body=70 status=ok
// SIG undefined FUN_143828c00(void)

void FUN_143828c00(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(param_2 + (longlong)param_1))[1];
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      param_1[1] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[2] = *puVar1;
      param_1[3] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x20 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[4] = *puVar1;
      param_1[5] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x30 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[6] = *puVar1;
      param_1[7] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x40 + (longlong)param_1);
      uVar2 = puVar1[1];
      param_1[8] = *puVar1;
      param_1[9] = uVar2;
      param_1 = param_1 + 10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143828c50 OodleNetwork1_HashBack3 body=9 status=ok
// SIG undefined OodleNetwork1_HashBack3(void)

uint oo2net::OodleNetwork1_HashBack3(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * -0x61c8864f;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | param_1 * -0x4f000000;
}



// FUNCTION 143828c60 FUN_143828c60 body=213 status=ok
// SIG undefined FUN_143828c60(void)

longlong * FUN_143828c60(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  
  lVar2 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  local_res8[0] = (int)param_2[1];
  lVar5 = (longlong)local_res8[0];
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar2 = FUN_143702d60(uVar1,0x30,local_res8);
  }
  *param_1 = lVar2;
  *(int *)(param_1 + 1) = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  if (0 < lVar5) {
    lVar4 = lVar2 + 0x10;
    lVar2 = *param_2 - lVar2;
    do {
      if ((undefined4 *)(lVar4 + -0x10) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar2 + -0x10 + lVar4);
        *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar2 + -8 + lVar4);
        FUN_143828fc0(lVar4,lVar2 + lVar4);
      }
      lVar4 = lVar4 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143828d40 FUN_143828d40 body=200 status=ok
// SIG undefined FUN_143828d40(void)

undefined8 * FUN_143828d40(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined8 *)FUN_143702d60(uVar2,0xc,local_res8);
  }
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  if (0 < iVar1) {
    lVar4 = *param_2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar4 + (longlong)puVar3);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar4 + 8 + (longlong)puVar3);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143828e10 FUN_143828e10 body=202 status=ok
// SIG undefined FUN_143828e10(void)

undefined8 * FUN_143828e10(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar3 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar4 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,0x28,local_res8);
  }
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  if (0 < iVar1) {
    lVar5 = *param_2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(lVar5 + (longlong)puVar3);
        FUN_143828ee0(puVar3 + 2,lVar5 + (longlong)(puVar3 + 2));
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143828ee0 FUN_143828ee0 body=212 status=ok
// SIG undefined FUN_143828ee0(void)

undefined8 * FUN_143828ee0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  
  puVar5 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar4 = FUN_143703a50();
  iVar9 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar5 = (undefined4 *)FUN_143702d60(uVar4,0x10,local_res8);
  }
  *param_1 = puVar5;
  *(int *)(param_1 + 1) = iVar9;
  iVar9 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar9 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar9;
  lVar2 = *param_2;
  if (0 < iVar1) {
    lVar8 = lVar2 - (longlong)puVar5;
    puVar6 = puVar5;
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *(undefined4 *)(lVar8 + (longlong)puVar6);
        lVar3 = *(longlong *)((longlong)puVar6 + lVar8 + 8);
        *(longlong *)((longlong)puVar5 + (longlong)puVar6 + ((lVar8 + 8) - lVar2)) = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
      }
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143828fc0 FUN_143828fc0 body=239 status=ok
// SIG undefined FUN_143828fc0(void)

longlong * FUN_143828fc0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  
  lVar2 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  local_res8[0] = (int)param_2[1];
  lVar5 = (longlong)local_res8[0];
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar2 = FUN_143702d60(uVar1,0x68,local_res8);
  }
  *param_1 = lVar2;
  *(int *)(param_1 + 1) = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  if (0 < lVar5) {
    lVar4 = lVar2 + 0x28;
    lVar2 = *param_2 - lVar2;
    do {
      if ((undefined4 *)(lVar4 + -0x28) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar4 + -0x28) = *(undefined4 *)(lVar2 + -0x28 + lVar4);
        FUN_1438290b0(lVar4 + -0x20,lVar4 + -0x20 + lVar2);
        FUN_143828d40(lVar4,lVar2 + lVar4);
        FUN_143828ee0(lVar4 + 0x20,lVar4 + 0x20 + lVar2);
      }
      lVar4 = lVar4 + 0x68;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1438290b0 FUN_1438290b0 body=184 status=ok
// SIG undefined FUN_1438290b0(void)

undefined8 * FUN_1438290b0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar3 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,4,local_res8);
  }
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  if (0 < iVar1) {
    lVar4 = *param_2 - (longlong)puVar3;
    do {
      *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143829170 FUN_143829170 body=196 status=ok
// SIG undefined FUN_143829170(void)

undefined4 * FUN_143829170(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar4 = 0;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  iVar1 = param_2[4];
  lVar6 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar3 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar4 = FUN_143702d60(uVar3,8,local_res8);
  }
  *(longlong *)(param_1 + 2) = lVar4;
  param_1[4] = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  param_1[5] = iVar7;
  lVar2 = *(longlong *)(param_2 + 2);
  if (0 < iVar1) {
    puVar5 = (undefined4 *)(lVar4 + 4);
    do {
      puVar5[-1] = *(undefined4 *)((lVar2 - lVar4) + -4 + (longlong)puVar5);
      *puVar5 = *(undefined4 *)((lVar2 - lVar4) + (longlong)puVar5);
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 143829240 GetDeviceId body=23 status=ok
// SIG undefined GetDeviceId(void)

undefined8 UKismetSystemLibrary::GetDeviceId(undefined8 param_1)

{
  USBZSpawnManagerFunctionLibrary::RequestActor();
  return param_1;
}



// FUNCTION 143829260 RequestActor body=23 status=ok
// SIG undefined RequestActor(void)

undefined8 USBZSpawnManagerFunctionLibrary::RequestActor(undefined8 param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  return param_1;
}



// FUNCTION 143829280 GetDeviceId body=23 status=ok
// SIG undefined GetDeviceId(void)

undefined8 FGenericPlatformMisc::GetDeviceId(undefined8 param_1)

{
  FArchive::operator<<();
  return param_1;
}



// FUNCTION 1438292a0 FUN_1438292a0 body=274 status=ok
// SIG undefined FUN_1438292a0(void)

undefined4 * FUN_1438292a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res8 [2];
  
  uVar5 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  iVar1 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  uVar8 = iVar1 + 0x1f >> 5;
  local_res8[0] = uVar8;
  uVar4 = FUN_143703a50();
  uVar10 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar5 = FUN_143702d60(uVar4,4,local_res8);
  }
  *(undefined8 *)(param_1 + 2) = uVar5;
  param_1[4] = uVar10;
  uVar10 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar10 = local_res8[0];
  }
  param_1[5] = uVar10;
  param_1[6] = iVar1;
  uVar4 = FUN_143703a50();
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar8) {
    uVar3 = (param_1[5] & 0x3fffffff) * 2;
    uVar10 = uVar8;
    if ((int)uVar8 < (int)uVar3) {
      uVar10 = uVar3;
    }
    FUN_14370c310(uVar4,param_1 + 2,uVar10,4);
  }
  param_1[4] = uVar8;
  puVar7 = *(undefined4 **)(param_2 + 2);
  puVar6 = *(undefined4 **)(param_1 + 2);
  uVar10 = param_2[4];
  if ((int)uVar8 < (int)param_2[4]) {
    uVar10 = uVar8;
  }
  if (0 < (int)uVar10) {
    uVar9 = (ulonglong)uVar10;
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return param_1;
}



// FUNCTION 1438293c0 FUN_1438293c0 body=126 status=ok
// SIG undefined FUN_1438293c0(void)

longlong FUN_1438293c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8 [2];
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  local_res8[0] = 0;
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar1,4,local_res8);
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(int *)(param_1 + 0x10) = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 143829440 FUN_143829440 body=1338 status=ok
// SIG undefined FUN_143829440(void)

undefined8 * FUN_143829440(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiWorld::CharacterStepSerializableContext::vftable;
  plVar10 = (longlong *)0x0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0x30);
  lVar12 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[5] = plVar9;
  *(int *)(param_1 + 6) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x34) = iVar7;
  if (0 < lVar12) {
    lVar16 = *(longlong *)(param_2 + 0x28) - (longlong)plVar9;
    do {
      if ((plVar9 != (longlong *)0x0) &&
         (lVar13 = *(longlong *)(lVar16 + (longlong)plVar9), *plVar9 = lVar13, lVar13 != 0)) {
        FUN_14370c030();
      }
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0x40);
  lVar12 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,0x90,local_res8);
  }
  param_1[7] = plVar9;
  *(int *)(param_1 + 8) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x44) = iVar7;
  lVar16 = *(longlong *)(param_2 + 0x38);
  plVar15 = plVar10;
  if (3 < lVar12) {
    plVar11 = plVar9 + 0x14;
    lVar14 = lVar16 - (longlong)plVar9;
    lVar13 = (lVar12 - 4U >> 2) + 1;
    plVar15 = (longlong *)(lVar13 * 4);
    do {
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0xa0);
      lVar6 = plVar1[1];
      plVar11[-0x14] = *plVar1;
      plVar11[-0x13] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0x90);
      lVar6 = plVar1[1];
      plVar11[-0x12] = *plVar1;
      plVar11[-0x11] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0x80);
      lVar6 = plVar1[1];
      plVar11[-0x10] = *plVar1;
      plVar11[-0xf] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0x70);
      lVar6 = plVar1[1];
      plVar11[-0xe] = *plVar1;
      plVar11[-0xd] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0x60);
      lVar6 = plVar1[1];
      plVar11[-0xc] = *plVar1;
      plVar11[-0xb] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + -0x50);
      lVar6 = plVar1[1];
      plVar11[-10] = *plVar1;
      plVar11[-9] = lVar6;
      *(undefined4 *)(plVar11 + -8) = *(undefined4 *)((longlong)plVar11 + lVar14 + -0x40);
      plVar11[-7] = *(longlong *)((longlong)plVar11 + lVar14 + -0x38);
      plVar11[-6] = *(longlong *)((longlong)plVar11 + lVar14 + -0x30);
      plVar11[-5] = *(longlong *)(lVar14 + -0x28 + (longlong)plVar11);
      *(undefined1 *)(plVar11 + -4) = *(undefined1 *)(lVar14 + -0x20 + (longlong)plVar11);
      *(undefined1 *)((longlong)plVar11 + -0x1f) =
           *(undefined1 *)(lVar14 + -0x1f + (longlong)plVar11);
      *(undefined1 *)((longlong)plVar11 + -0x1e) =
           *(undefined1 *)(lVar14 + -0x1e + (longlong)plVar11);
      plVar1 = (longlong *)(lVar14 + -0x10 + (longlong)plVar11);
      lVar6 = plVar1[1];
      plVar11[-2] = *plVar1;
      plVar11[-1] = lVar6;
      lVar6 = ((longlong *)((longlong)plVar11 + lVar14))[1];
      *plVar11 = *(longlong *)((longlong)plVar11 + lVar14);
      plVar11[1] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x10);
      lVar6 = plVar1[1];
      plVar11[2] = *plVar1;
      plVar11[3] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x20);
      lVar6 = plVar1[1];
      plVar11[4] = *plVar1;
      plVar11[5] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x30);
      lVar6 = plVar1[1];
      plVar11[6] = *plVar1;
      plVar11[7] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x40);
      lVar6 = plVar1[1];
      plVar11[8] = *plVar1;
      plVar11[9] = lVar6;
      *(undefined4 *)(plVar11 + 10) = *(undefined4 *)((longlong)plVar11 + lVar14 + 0x50);
      plVar11[0xb] = *(longlong *)((longlong)plVar11 + lVar14 + 0x58);
      plVar11[0xc] = *(longlong *)((longlong)plVar11 + lVar14 + 0x60);
      plVar11[0xd] = *(longlong *)((longlong)plVar11 + lVar14 + 0x68);
      *(undefined1 *)(plVar11 + 0xe) = *(undefined1 *)((longlong)plVar11 + lVar14 + 0x70);
      *(undefined1 *)((longlong)plVar11 + 0x71) = *(undefined1 *)((longlong)plVar11 + lVar14 + 0x71)
      ;
      *(undefined1 *)((longlong)plVar11 + 0x72) = *(undefined1 *)((longlong)plVar11 + lVar14 + 0x72)
      ;
      plVar1 = (longlong *)(lVar14 + 0x80 + (longlong)plVar11);
      lVar6 = plVar1[1];
      plVar11[0x10] = *plVar1;
      plVar11[0x11] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x90);
      lVar6 = plVar1[1];
      plVar11[0x12] = *plVar1;
      plVar11[0x13] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0xa0);
      lVar6 = plVar1[1];
      plVar11[0x14] = *plVar1;
      plVar11[0x15] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0xb0);
      lVar6 = plVar1[1];
      plVar11[0x16] = *plVar1;
      plVar11[0x17] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0xc0);
      lVar6 = plVar1[1];
      plVar11[0x18] = *plVar1;
      plVar11[0x19] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0xd0);
      lVar6 = plVar1[1];
      plVar11[0x1a] = *plVar1;
      plVar11[0x1b] = lVar6;
      *(undefined4 *)(plVar11 + 0x1c) = *(undefined4 *)((longlong)plVar11 + lVar14 + 0xe0);
      plVar11[0x1d] = *(longlong *)((longlong)plVar11 + lVar14 + 0xe8);
      plVar11[0x1e] = *(longlong *)(lVar14 + 0xf0 + (longlong)plVar11);
      plVar11[0x1f] = *(longlong *)(lVar14 + 0xf8 + (longlong)plVar11);
      *(undefined1 *)(plVar11 + 0x20) = *(undefined1 *)(lVar14 + 0x100 + (longlong)plVar11);
      *(undefined1 *)((longlong)plVar11 + 0x101) =
           *(undefined1 *)(lVar14 + 0x101 + (longlong)plVar11);
      *(undefined1 *)((longlong)plVar11 + 0x102) =
           *(undefined1 *)(lVar14 + 0x102 + (longlong)plVar11);
      plVar1 = (longlong *)(lVar14 + 0x110 + (longlong)plVar11);
      lVar6 = plVar1[1];
      plVar11[0x22] = *plVar1;
      plVar11[0x23] = lVar6;
      plVar1 = (longlong *)(lVar14 + 0x120 + (longlong)plVar11);
      lVar6 = plVar1[1];
      plVar11[0x24] = *plVar1;
      plVar11[0x25] = lVar6;
      plVar1 = (longlong *)(lVar14 + 0x130 + (longlong)plVar11);
      lVar6 = plVar1[1];
      plVar11[0x26] = *plVar1;
      plVar11[0x27] = lVar6;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x140);
      lVar6 = plVar1[1];
      plVar11[0x28] = *plVar1;
      plVar11[0x29] = lVar6;
      puVar2 = (undefined4 *)((longlong)plVar11 + lVar14 + 0x150);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar11 + 0x2a) = *puVar2;
      *(undefined4 *)((longlong)plVar11 + 0x154) = uVar3;
      *(undefined4 *)(plVar11 + 0x2b) = uVar4;
      *(undefined4 *)((longlong)plVar11 + 0x15c) = uVar5;
      plVar1 = (longlong *)((longlong)plVar11 + lVar14 + 0x160);
      lVar6 = plVar1[1];
      plVar11[0x2c] = *plVar1;
      plVar11[0x2d] = lVar6;
      *(undefined4 *)(plVar11 + 0x2e) = *(undefined4 *)((longlong)plVar11 + lVar14 + 0x170);
      plVar11[0x2f] = *(longlong *)((longlong)plVar11 + lVar14 + 0x178);
      plVar11[0x30] = *(longlong *)((longlong)plVar11 + lVar14 + 0x180);
      plVar11[0x31] = *(longlong *)((longlong)plVar11 + lVar14 + 0x188);
      *(undefined1 *)(plVar11 + 0x32) = *(undefined1 *)((longlong)plVar11 + lVar14 + 400);
      *(undefined1 *)((longlong)plVar11 + 0x191) =
           *(undefined1 *)((longlong)plVar11 + lVar14 + 0x191);
      *(undefined1 *)((longlong)plVar11 + 0x192) =
           *(undefined1 *)((longlong)plVar11 + lVar14 + 0x192);
      plVar11 = plVar11 + 0x48;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((longlong)plVar15 < lVar12) {
    lVar16 = lVar16 - (longlong)plVar9;
    plVar9 = plVar9 + (longlong)plVar15 * 0x12 + 2;
    lVar12 = lVar12 - (longlong)plVar15;
    do {
      plVar15 = (longlong *)(lVar16 + -0x10 + (longlong)plVar9);
      lVar13 = plVar15[1];
      plVar9[-2] = *plVar15;
      plVar9[-1] = lVar13;
      lVar13 = ((longlong *)((longlong)plVar9 + lVar16))[1];
      *plVar9 = *(longlong *)((longlong)plVar9 + lVar16);
      plVar9[1] = lVar13;
      plVar15 = (longlong *)((longlong)plVar9 + lVar16 + 0x10);
      lVar13 = plVar15[1];
      plVar9[2] = *plVar15;
      plVar9[3] = lVar13;
      plVar15 = (longlong *)((longlong)plVar9 + lVar16 + 0x20);
      lVar13 = plVar15[1];
      plVar9[4] = *plVar15;
      plVar9[5] = lVar13;
      puVar2 = (undefined4 *)((longlong)plVar9 + lVar16 + 0x30);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar9 + 6) = *puVar2;
      *(undefined4 *)((longlong)plVar9 + 0x34) = uVar3;
      *(undefined4 *)(plVar9 + 7) = uVar4;
      *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar5;
      plVar15 = (longlong *)((longlong)plVar9 + lVar16 + 0x40);
      lVar13 = plVar15[1];
      plVar9[8] = *plVar15;
      plVar9[9] = lVar13;
      *(undefined4 *)(plVar9 + 10) = *(undefined4 *)((longlong)plVar9 + lVar16 + 0x50);
      plVar9[0xb] = *(longlong *)((longlong)plVar9 + lVar16 + 0x58);
      plVar9[0xc] = *(longlong *)((longlong)plVar9 + lVar16 + 0x60);
      plVar9[0xd] = *(longlong *)((longlong)plVar9 + lVar16 + 0x68);
      *(undefined1 *)(plVar9 + 0xe) = *(undefined1 *)((longlong)plVar9 + lVar16 + 0x70);
      *(undefined1 *)((longlong)plVar9 + 0x71) = *(undefined1 *)((longlong)plVar9 + lVar16 + 0x71);
      *(undefined1 *)((longlong)plVar9 + 0x72) = *(undefined1 *)(lVar16 + 0x72 + (longlong)plVar9);
      plVar9 = plVar9 + 0x12;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0x50);
  lVar12 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    plVar10 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[9] = plVar10;
  *(int *)(param_1 + 10) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x54) = iVar7;
  if (0 < lVar12) {
    lVar16 = *(longlong *)(param_2 + 0x48) - (longlong)plVar10;
    do {
      if ((plVar10 != (longlong *)0x0) &&
         (lVar13 = *(longlong *)(lVar16 + (longlong)plVar10), *plVar10 = lVar13, lVar13 != 0)) {
        FUN_14370c030();
      }
      plVar10 = plVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return param_1;
}



// FUNCTION 143829980 FUN_143829980 body=69 status=ok
// SIG undefined FUN_143829980(void)

undefined8 * FUN_143829980(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiWorld::CharacterStepSerializableContext::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 1438299d0 FUN_1438299d0 body=32 status=ok
// SIG undefined FUN_1438299d0(void)

longlong FUN_1438299d0(longlong param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  FUN_14382bbe0(param_1 + 8);
  return param_1;
}



// FUNCTION 1438299f0 FUN_1438299f0 body=32 status=ok
// SIG undefined FUN_1438299f0(void)

longlong FUN_1438299f0(longlong param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  FUN_143718d80(param_1 + 8);
  return param_1;
}



// FUNCTION 143829a10 FUN_143829a10 body=459 status=ok
// SIG undefined FUN_143829a10(void)

undefined8 * FUN_143829a10(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  
  puVar4 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar8 = local_res8[0];
  puVar3 = puVar4;
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,0x14,local_res8);
  }
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = iVar8;
  iVar8 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar8 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  if (0 < iVar1) {
    puVar5 = puVar3 + 1;
    lVar6 = *param_2 - (longlong)puVar3;
    do {
      puVar5[-1] = *(undefined4 *)(lVar6 + -4 + (longlong)puVar5);
      *puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
      puVar5[1] = *(undefined4 *)(lVar6 + 4 + (longlong)puVar5);
      puVar5[2] = *(undefined4 *)(lVar6 + 8 + (longlong)puVar5);
      *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(lVar6 + 0xc + (longlong)puVar5);
      *(undefined1 *)((longlong)puVar5 + 0xd) = *(undefined1 *)(lVar6 + 0xd + (longlong)puVar5);
      *(undefined2 *)((longlong)puVar5 + 0xe) = *(undefined2 *)(lVar6 + 0xe + (longlong)puVar5);
      puVar5 = puVar5 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  iVar1 = (int)param_2[3];
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar8 = local_res8[0];
  puVar3 = puVar4;
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[2] = puVar3;
  *(int *)(param_1 + 3) = iVar8;
  iVar8 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar8 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar8;
  if (0 < iVar1) {
    lVar6 = param_2[2] - (longlong)puVar3;
    do {
      *puVar3 = *(undefined4 *)(lVar6 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  iVar1 = (int)param_2[5];
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar8 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar4 = (undefined4 *)FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[4] = puVar4;
  *(int *)(param_1 + 5) = iVar8;
  iVar8 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar8 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar8;
  if (0 < iVar1) {
    lVar6 = param_2[4] - (longlong)puVar4;
    do {
      *puVar4 = *(undefined4 *)((longlong)puVar4 + lVar6);
      puVar4 = puVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}



// FUNCTION 143829be0 FUN_143829be0 body=171 status=ok
// SIG undefined FUN_143829be0(void)

longlong * FUN_143829be0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = (int)param_2[1];
  lVar8 = (longlong)iVar1;
  lVar7 = *param_2;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar6 = (int)param_1[1] + iVar1;
  if (((int)uVar5 < iVar6) && ((int)uVar5 < iVar6)) {
    iVar2 = iVar6;
    if (iVar6 < (int)(uVar5 * 2)) {
      iVar2 = uVar5 * 2;
    }
    FUN_14370c310(uVar3,param_1,iVar2,4);
  }
  puVar4 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4);
  if (0 < iVar1) {
    lVar7 = lVar7 - (longlong)puVar4;
    do {
      *puVar4 = *(undefined4 *)(lVar7 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar6;
  return param_1;
}



// FUNCTION 143829c90 FUN_143829c90 body=10 status=ok
// SIG undefined FUN_143829c90(void)

longlong FUN_143829c90(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 143829ca0 FUN_143829ca0 body=329 status=ok
// SIG undefined FUN_143829ca0(void)

undefined8 * FUN_143829ca0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavigator::NavigatorSettings::vftable;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar5;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0xa4);
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  uVar4 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0xb0);
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0xb8);
  param_1[0x17] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 143829df0 FUN_143829df0 body=202 status=ok
// SIG undefined FUN_143829df0(void)

undefined8 * FUN_143829df0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiVolumeNavigator::NavigatorSettings::vftable;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar5;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0x90);
  param_1[0x12] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0x98);
  param_1[0x13] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  return param_1;
}



// FUNCTION 143829ec0 FUN_143829ec0 body=53 status=ok
// SIG undefined FUN_143829ec0(void)

undefined8 * FUN_143829ec0(undefined8 *param_1)

{
  FUN_14382a900();
  *param_1 = hkaiNavigator::PathRequest::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 143829f00 FUN_143829f00 body=53 status=ok
// SIG undefined FUN_143829f00(void)

undefined8 * FUN_143829f00(undefined8 *param_1)

{
  FUN_14382aa40();
  *param_1 = hkaiVolumeNavigator::PathRequest::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 143829f40 FUN_143829f40 body=187 status=ok
// SIG undefined FUN_143829f40(void)

undefined4 * FUN_143829f40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  
  puVar6 = (undefined4 *)0x0;
  *param_1 = *param_2;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  iVar1 = param_2[0xe];
  lVar8 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar5 = FUN_143703a50();
  iVar9 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar6 = (undefined4 *)FUN_143702d60(uVar5,4,local_res8);
  }
  *(undefined4 **)(param_1 + 0xc) = puVar6;
  param_1[0xe] = iVar9;
  iVar9 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar9 = local_res8[0];
  }
  param_1[0xf] = iVar9;
  if (0 < iVar1) {
    lVar7 = *(longlong *)(param_2 + 0xc) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined4 *)(lVar7 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return param_1;
}



// FUNCTION 14382a000 FUN_14382a000 body=649 status=ok
// SIG undefined FUN_14382a000(void)

undefined4 * FUN_14382a000(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined4 *local_res8;
  undefined4 *local_res10;
  int local_res18 [2];
  
  *param_1 = *param_2;
  lVar13 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar13;
  local_res8 = param_1;
  local_res10 = param_2;
  if (lVar13 != 0) {
    FUN_14370c030();
  }
  lVar13 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar13;
  if (lVar13 != 0) {
    FUN_14370c030();
  }
  uVar7 = *(undefined8 *)(param_2 + 10);
  puVar10 = (undefined4 *)0x0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar7;
  uVar4 = param_2[0x1d];
  uVar5 = param_2[0x1e];
  uVar6 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar4;
  param_1[0x1e] = uVar5;
  param_1[0x1f] = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar7;
  uVar4 = param_2[0x25];
  uVar5 = param_2[0x26];
  uVar6 = param_2[0x27];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar4;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x80000000;
  iVar17 = param_2[0x2c];
  lVar13 = (longlong)iVar17;
  local_res18[0] = iVar17;
  uVar7 = FUN_143703a50();
  iVar11 = local_res18[0];
  puVar8 = puVar10;
  if (local_res18[0] != 0) {
    puVar8 = (undefined4 *)FUN_143702d60(uVar7,0x10,local_res18);
  }
  *(undefined4 **)(param_1 + 0x2a) = puVar8;
  param_1[0x2c] = iVar11;
  iVar11 = -0x80000000;
  if (local_res18[0] != 0) {
    iVar11 = local_res18[0];
  }
  param_1[0x2d] = iVar11;
  lVar3 = *(longlong *)(param_2 + 0x2a);
  if (0 < iVar17) {
    piVar14 = puVar8 + 2;
    do {
      piVar1 = piVar14 + -2;
      if (piVar1 != (int *)0x0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
        *piVar14 = 0;
        piVar14[1] = -0x80000000;
        iVar17 = *(int *)((lVar3 - (longlong)puVar8) + (longlong)piVar14);
        lVar12 = (longlong)iVar17;
        local_res18[0] = iVar17;
        uVar7 = FUN_143703a50();
        iVar11 = local_res18[0];
        puVar9 = puVar10;
        if (local_res18[0] != 0) {
          puVar9 = (undefined4 *)FUN_143702d60(uVar7,4,local_res18);
        }
        *(undefined4 **)piVar1 = puVar9;
        *piVar14 = iVar11;
        iVar11 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar11 = local_res18[0];
        }
        piVar14[1] = iVar11;
        if (0 < iVar17) {
          lVar16 = *(longlong *)((lVar3 - (longlong)puVar8) + -8 + (longlong)piVar14) -
                   (longlong)puVar9;
          do {
            *puVar9 = *(undefined4 *)(lVar16 + (longlong)puVar9);
            puVar9 = puVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      piVar14 = piVar14 + 4;
      lVar13 = lVar13 + -1;
      param_2 = local_res10;
      param_1 = local_res8;
    } while (lVar13 != 0);
  }
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x80000000;
  uVar2 = param_2[0x30];
  uVar15 = (ulonglong)uVar2;
  local_res8 = (undefined4 *)CONCAT44(local_res8._4_4_,uVar2);
  uVar7 = FUN_143703a50();
  iVar17 = (int)local_res8;
  iVar11 = 0;
  if ((int)local_res8 != 0) {
    puVar10 = (undefined4 *)FUN_143702d60(uVar7,0x40,&local_res8);
    iVar11 = (int)local_res8;
  }
  *(undefined4 **)(param_1 + 0x2e) = puVar10;
  param_1[0x30] = iVar17;
  iVar17 = -0x80000000;
  if (iVar11 != 0) {
    iVar17 = iVar11;
  }
  param_1[0x31] = iVar17;
  if (0 < (int)uVar2) {
    lVar13 = *(longlong *)(param_2 + 0x2e) - (longlong)puVar10;
    do {
      if (puVar10 != (undefined4 *)0x0) {
        FUN_143829f40(puVar10,lVar13 + (longlong)puVar10);
      }
      puVar10 = puVar10 + 0x10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return param_1;
}



// FUNCTION 14382a290 FUN_14382a290 body=34 status=ok
// SIG undefined FUN_14382a290(void)

longlong FUN_14382a290(longlong param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  FUN_143841d70(param_1 + 0x10,0);
  return param_1;
}



// FUNCTION 14382a2c0 FUN_14382a2c0 body=34 status=ok
// SIG undefined FUN_14382a2c0(void)

longlong FUN_14382a2c0(longlong param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  FUN_143875090(param_1 + 0x10,0);
  return param_1;
}



// FUNCTION 14382a2f0 FUN_14382a2f0 body=515 status=ok
// SIG undefined FUN_14382a2f0(void)

undefined8 * FUN_14382a2f0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res8 [2];
  
  puVar10 = (undefined8 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar3 = (int)param_2[1];
  lVar12 = (longlong)iVar3;
  local_res8[0] = iVar3;
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  puVar9 = puVar10;
  if (local_res8[0] != 0) {
    puVar9 = (undefined8 *)FUN_143702d60(uVar8,0x50,local_res8);
  }
  *param_1 = puVar9;
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  if (0 < iVar3) {
    lVar11 = *param_2 - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar8 = ((undefined8 *)(lVar11 + (longlong)puVar9))[1];
        *puVar9 = *(undefined8 *)(lVar11 + (longlong)puVar9);
        puVar9[1] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[2] = *puVar1;
        puVar9[3] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[4] = *puVar1;
        puVar9[5] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[6] = *puVar1;
        puVar9[7] = uVar8;
        puVar2 = (undefined4 *)(lVar11 + 0x40 + (longlong)puVar9);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar9 + 8) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uVar4;
        *(undefined4 *)(puVar9 + 9) = uVar5;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar6;
      }
      puVar9 = puVar9 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  iVar3 = (int)param_2[3];
  lVar12 = (longlong)iVar3;
  local_res8[0] = iVar3;
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  puVar9 = puVar10;
  if (local_res8[0] != 0) {
    puVar9 = (undefined8 *)FUN_143702d60(uVar8,0x50,local_res8);
  }
  param_1[2] = puVar9;
  *(int *)(param_1 + 3) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar7;
  if (0 < iVar3) {
    lVar11 = param_2[2] - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar8 = ((undefined8 *)(lVar11 + (longlong)puVar9))[1];
        *puVar9 = *(undefined8 *)(lVar11 + (longlong)puVar9);
        puVar9[1] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[2] = *puVar1;
        puVar9[3] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[4] = *puVar1;
        puVar9[5] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[6] = *puVar1;
        puVar9[7] = uVar8;
        puVar2 = (undefined4 *)(lVar11 + 0x40 + (longlong)puVar9);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar9 + 8) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uVar4;
        *(undefined4 *)(puVar9 + 9) = uVar5;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar6;
      }
      puVar9 = puVar9 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  FUN_1437e56f0(param_1 + 4,param_2 + 4);
  FUN_1437e56f0(param_1 + 8,param_2 + 8);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  iVar3 = (int)param_2[0xd];
  lVar12 = (longlong)iVar3;
  local_res8[0] = iVar3;
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar10 = (undefined8 *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0xc] = puVar10;
  *(int *)(param_1 + 0xd) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar7;
  if (0 < iVar3) {
    lVar11 = param_2[0xc] - (longlong)puVar10;
    do {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = *(undefined8 *)(lVar11 + (longlong)puVar10);
      }
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return param_1;
}



// FUNCTION 14382a500 FUN_14382a500 body=97 status=ok
// SIG undefined FUN_14382a500(void)

undefined8 * FUN_14382a500(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_1437e3c50(param_1 + 4);
  FUN_1437e3c50(param_1 + 8,param_2);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  return param_1;
}



// FUNCTION 14382a570 FUN_14382a570 body=42 status=ok
// SIG undefined FUN_14382a570(void)

undefined8 * FUN_14382a570(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiBehavior::vftable;
  param_1[3] = hkaiBehavior::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14382a5a0 FUN_14382a5a0 body=31 status=ok
// SIG undefined FUN_14382a5a0(void)

undefined8 * FUN_14382a5a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiBehaviorBlockedDetector::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14382a5c0 FUN_14382a5c0 body=29 status=ok
// SIG undefined FUN_14382a5c0(void)

undefined8 * FUN_14382a5c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiBlockedCharacterDetector::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 14382a5e0 FUN_14382a5e0 body=31 status=ok
// SIG undefined FUN_14382a5e0(void)

undefined8 * FUN_14382a5e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCarver::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14382a600 FUN_14382a600 body=89 status=ok
// SIG undefined FUN_14382a600(void)

undefined8 * FUN_14382a600(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCharacter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  return param_1;
}



// FUNCTION 14382a660 FUN_14382a660 body=31 status=ok
// SIG undefined FUN_14382a660(void)

undefined8 * FUN_14382a660(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiDynamicNavMeshQueryMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14382a680 FUN_14382a680 body=31 status=ok
// SIG undefined FUN_14382a680(void)

undefined8 * FUN_14382a680(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiDynamicNavVolumeMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14382a6a0 FUN_14382a6a0 body=57 status=ok
// SIG undefined FUN_14382a6a0(void)

undefined8 * FUN_14382a6a0(undefined8 *param_1)

{
  FUN_14382b7a0();
  *param_1 = hkaiEdgeFollowingBehavior::vftable;
  param_1[3] = hkaiEdgeFollowingBehavior::vftable;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 14382a6e0 FUN_14382a6e0 body=41 status=ok
// SIG undefined FUN_14382a6e0(void)

undefined8 * FUN_14382a6e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiIntersectionVolume::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 14382a710 FUN_14382a710 body=80 status=ok
// SIG undefined FUN_14382a710(void)

undefined8 * FUN_14382a710(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiInvertedAabbVolume::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[9] = 0;
  param_1[8] = hkGeometry::vftable;
  *(undefined4 *)(param_1 + 10) = 0x1ffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  return param_1;
}



// FUNCTION 14382a760 FUN_14382a760 body=31 status=ok
// SIG undefined FUN_14382a760(void)

undefined8 * FUN_14382a760(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiMaterialPainter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14382a780 FUN_14382a780 body=41 status=ok
// SIG undefined FUN_14382a780(void)

undefined8 * FUN_14382a780(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavMeshClearanceCacheManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 14382a7b0 FUN_14382a7b0 body=78 status=ok
// SIG undefined FUN_14382a7b0(void)

undefined8 * FUN_14382a7b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_1437fac90(param_1 + 8);
  return param_1;
}



// FUNCTION 14382a800 FUN_14382a800 body=107 status=ok
// SIG undefined FUN_14382a800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14382a800(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkaiNavMeshInstance::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = uRam00000001467f0898;
  param_1[8] = _DAT_1467f0890;
  param_1[9] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[10] = _DAT_1467f08a0;
  param_1[0xb] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[0xc] = _DAT_1467f08b0;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14382a870 FUN_14382a870 body=136 status=ok
// SIG undefined FUN_14382a870(void)

undefined8 * FUN_14382a870(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiPathRequestBase::vftable;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *param_1 = hkaiNavMeshPathRequest::vftable;
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  return param_1;
}



// FUNCTION 14382a900 FUN_14382a900 body=43 status=ok
// SIG undefined FUN_14382a900(void)

undefined8 * FUN_14382a900(undefined8 *param_1)

{
  FUN_14382b5c0();
  *param_1 = hkaiNavMeshPathRequest::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14382a930 FUN_14382a930 body=78 status=ok
// SIG undefined FUN_14382a930(void)

undefined8 * FUN_14382a930(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_1437fa020(param_1 + 8);
  return param_1;
}



// FUNCTION 14382a980 FUN_14382a980 body=39 status=ok
// SIG undefined FUN_14382a980(void)

undefined8 * FUN_14382a980(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavVolumeInstance::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 14382a9b0 FUN_14382a9b0 body=136 status=ok
// SIG undefined FUN_14382a9b0(void)

undefined8 * FUN_14382a9b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiPathRequestBase::vftable;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *param_1 = hkaiNavVolumePathRequest::vftable;
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  return param_1;
}



// FUNCTION 14382aa40 FUN_14382aa40 body=43 status=ok
// SIG undefined FUN_14382aa40(void)

undefined8 * FUN_14382aa40(undefined8 *param_1)

{
  FUN_14382b5c0();
  *param_1 = hkaiNavVolumePathRequest::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14382aa70 FUN_14382aa70 body=298 status=ok
// SIG undefined FUN_14382aa70(void)

undefined8 * FUN_14382aa70(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavigator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[0xf] = 0;
  param_1[0xe] = hkaiNavigator::NavigatorSettings::vftable;
  *(undefined4 *)(param_1 + 0x10) = 0x1ffff;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x10301;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x101;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x21) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80000000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  return param_1;
}



// FUNCTION 14382aba0 FUN_14382aba0 body=45 status=ok
// SIG undefined FUN_14382aba0(void)

undefined8 * FUN_14382aba0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavigatorManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  return param_1;
}



// FUNCTION 14382abd0 FUN_14382abd0 body=81 status=ok
// SIG undefined FUN_14382abd0(void)

undefined8 * FUN_14382abd0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavigatorStalenessChecker::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  return param_1;
}



// FUNCTION 14382ac30 FUN_14382ac30 body=1740 status=ok
// SIG undefined FUN_14382ac30(void)

undefined8 * FUN_14382ac30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint local_res8 [2];
  uint local_res10;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiOverlapManager::vftable;
  param_1[3] = hkaiOverlapManager::vftable;
  FUN_14382a2f0(param_1 + 4,param_2 + 0x20);
  lVar11 = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  uVar15 = *(uint *)(param_2 + 0x98);
  uVar16 = (ulonglong)uVar15;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  uVar12 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,0xd0,local_res8);
  }
  param_1[0x12] = lVar10;
  *(uint *)(param_1 + 0x13) = uVar12;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x9c) = uVar12;
  if (0 < (int)uVar15) {
    lVar17 = *(longlong *)(param_2 + 0x90) - lVar10;
    do {
      if (lVar10 != 0) {
        FUN_14382a000(lVar10,lVar17 + lVar10);
      }
      lVar10 = lVar10 + 0xd0;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar15 = *(uint *)(param_2 + 0xa8);
  lVar17 = (longlong)(int)uVar15;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  uVar12 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,0x50,local_res8);
  }
  param_1[0x14] = lVar10;
  *(uint *)(param_1 + 0x15) = uVar12;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0xac) = uVar12;
  if (0 < (int)uVar15) {
    puVar13 = (undefined4 *)(lVar10 + 0x40);
    lVar10 = *(longlong *)(param_2 + 0xa0) - lVar10;
    do {
      if ((longlong *)(puVar13 + -0x10) != (longlong *)0x0) {
        lVar5 = *(longlong *)(lVar10 + -0x40 + (longlong)puVar13);
        *(longlong *)(puVar13 + -0x10) = lVar5;
        if (lVar5 != 0) {
          FUN_14370c030();
        }
        puVar2 = (undefined8 *)(lVar10 + -0x30 + (longlong)puVar13);
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar13 + -0xc) = *puVar2;
        *(undefined8 *)(puVar13 + -10) = uVar9;
        puVar2 = (undefined8 *)(lVar10 + -0x20 + (longlong)puVar13);
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar13 + -8) = *puVar2;
        *(undefined8 *)(puVar13 + -6) = uVar9;
        puVar2 = (undefined8 *)(lVar10 + -0x10 + (longlong)puVar13);
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar13 + -4) = *puVar2;
        *(undefined8 *)(puVar13 + -2) = uVar9;
        puVar14 = (undefined4 *)(lVar10 + (longlong)puVar13);
        uVar4 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        *puVar13 = *puVar14;
        puVar13[1] = uVar4;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
      }
      puVar13 = puVar13 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar15 = *(uint *)(param_2 + 0xb8);
  lVar17 = (longlong)(int)uVar15;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  uVar12 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,0x60,local_res8);
  }
  *(uint *)(param_1 + 0x17) = uVar12;
  param_1[0x16] = lVar10;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0xbc) = uVar12;
  if (0 < (int)uVar15) {
    puVar13 = (undefined4 *)(lVar10 + 0x40);
    lVar10 = *(longlong *)(param_2 + 0xb0) - lVar10;
    do {
      if (puVar13 + -0x10 != (undefined4 *)0x0) {
        puVar13[-0x10] = *(undefined4 *)(lVar10 + -0x40 + (longlong)puVar13);
        puVar13[-0xf] = *(undefined4 *)(lVar10 + -0x3c + (longlong)puVar13);
        *(undefined1 *)(puVar13 + -0xe) = *(undefined1 *)(lVar10 + -0x38 + (longlong)puVar13);
        puVar2 = (undefined8 *)(lVar10 + -0x30 + (longlong)puVar13);
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar13 + -0xc) = *puVar2;
        *(undefined8 *)(puVar13 + -10) = uVar9;
        puVar14 = (undefined4 *)(lVar10 + -0x20 + (longlong)puVar13);
        uVar4 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        puVar13[-8] = *puVar14;
        puVar13[-7] = uVar4;
        puVar13[-6] = uVar7;
        puVar13[-5] = uVar8;
        puVar2 = (undefined8 *)(lVar10 + -0x10 + (longlong)puVar13);
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar13 + -4) = *puVar2;
        *(undefined8 *)(puVar13 + -2) = uVar9;
        puVar14 = (undefined4 *)(lVar10 + (longlong)puVar13);
        uVar4 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        *puVar13 = *puVar14;
        puVar13[1] = uVar4;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
        lVar5 = *(longlong *)(lVar10 + 0x10 + (longlong)puVar13);
        *(longlong *)(puVar13 + 4) = lVar5;
        if (lVar5 != 0) {
          FUN_14370c030();
        }
      }
      puVar13 = puVar13 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  plVar1 = param_1 + 0x19;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined1 *)((longlong)param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined1 *)((longlong)param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
  iVar3 = *(int *)(param_2 + 0xd8);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  uVar15 = iVar3 + 0x1f >> 5;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  local_res10 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,4,local_res8);
  }
  *plVar1 = lVar10;
  *(uint *)(param_1 + 0x1a) = local_res10;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0xd4) = uVar12;
  *(int *)(param_1 + 0x1b) = iVar3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)((longlong)param_1 + 0xd4) & 0x3fffffff;
  if ((int)uVar12 < (int)uVar15) {
    uVar12 = uVar12 * 2;
    uVar6 = uVar15;
    if ((int)uVar15 < (int)uVar12) {
      uVar6 = uVar12;
    }
    FUN_14370c310(uVar9,plVar1,uVar6,4);
  }
  *(uint *)(param_1 + 0x1a) = uVar15;
  puVar13 = *(undefined4 **)(param_2 + 200);
  puVar14 = (undefined4 *)*plVar1;
  uVar12 = *(uint *)(param_2 + 0xd0);
  if ((int)uVar15 < (int)*(uint *)(param_2 + 0xd0)) {
    uVar12 = uVar15;
  }
  if (0 < (int)uVar12) {
    uVar16 = (ulonglong)uVar12;
    do {
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  iVar3 = *(int *)(param_2 + 0xf0);
  plVar1 = param_1 + 0x1c;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  uVar15 = iVar3 + 0x1f >> 5;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  local_res10 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,4,local_res8);
  }
  *plVar1 = lVar10;
  *(uint *)(param_1 + 0x1d) = local_res10;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0xec) = uVar12;
  *(int *)(param_1 + 0x1e) = iVar3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)((longlong)param_1 + 0xec) & 0x3fffffff;
  if ((int)uVar12 < (int)uVar15) {
    uVar12 = uVar12 * 2;
    uVar6 = uVar15;
    if ((int)uVar15 < (int)uVar12) {
      uVar6 = uVar12;
    }
    FUN_14370c310(uVar9,plVar1,uVar6,4);
  }
  *(uint *)(param_1 + 0x1d) = uVar15;
  puVar13 = *(undefined4 **)(param_2 + 0xe0);
  puVar14 = (undefined4 *)*plVar1;
  uVar12 = *(uint *)(param_2 + 0xe8);
  if ((int)uVar15 < (int)*(uint *)(param_2 + 0xe8)) {
    uVar12 = uVar15;
  }
  if (0 < (int)uVar12) {
    uVar16 = (ulonglong)uVar12;
    do {
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  iVar3 = *(int *)(param_2 + 0x108);
  plVar1 = param_1 + 0x1f;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  uVar15 = iVar3 + 0x1f >> 5;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  local_res10 = local_res8[0];
  lVar10 = lVar11;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar9,4,local_res8);
  }
  *plVar1 = lVar10;
  *(uint *)(param_1 + 0x20) = local_res10;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x104) = uVar12;
  *(int *)(param_1 + 0x21) = iVar3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)((longlong)param_1 + 0x104) & 0x3fffffff;
  if ((int)uVar12 < (int)uVar15) {
    uVar12 = uVar12 * 2;
    uVar6 = uVar15;
    if ((int)uVar15 < (int)uVar12) {
      uVar6 = uVar12;
    }
    FUN_14370c310(uVar9,plVar1,uVar6,4);
  }
  *(uint *)(param_1 + 0x20) = uVar15;
  puVar13 = *(undefined4 **)(param_2 + 0xf8);
  puVar14 = (undefined4 *)*plVar1;
  uVar12 = *(uint *)(param_2 + 0x100);
  if ((int)uVar15 < (int)*(uint *)(param_2 + 0x100)) {
    uVar12 = uVar15;
  }
  if (0 < (int)uVar12) {
    uVar16 = (ulonglong)uVar12;
    do {
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  iVar3 = *(int *)(param_2 + 0x120);
  plVar1 = param_1 + 0x22;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar15 = iVar3 + 0x1f >> 5;
  local_res8[0] = uVar15;
  uVar9 = FUN_143703a50();
  local_res10 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar11 = FUN_143702d60(uVar9,4,local_res8);
  }
  *plVar1 = lVar11;
  *(uint *)(param_1 + 0x23) = local_res10;
  uVar12 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar12 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x11c) = uVar12;
  *(int *)(param_1 + 0x24) = iVar3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)((longlong)param_1 + 0x11c) & 0x3fffffff;
  if ((int)uVar12 < (int)uVar15) {
    uVar12 = uVar12 * 2;
    uVar6 = uVar15;
    if ((int)uVar15 < (int)uVar12) {
      uVar6 = uVar12;
    }
    FUN_14370c310(uVar9,plVar1,uVar6,4);
  }
  *(uint *)(param_1 + 0x23) = uVar15;
  puVar13 = *(undefined4 **)(param_2 + 0x110);
  puVar14 = (undefined4 *)*plVar1;
  uVar12 = *(uint *)(param_2 + 0x118);
  if ((int)uVar15 < (int)*(uint *)(param_2 + 0x118)) {
    uVar12 = uVar15;
  }
  if (0 < (int)uVar12) {
    uVar16 = (ulonglong)uVar12;
    do {
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar9 = *(undefined8 *)(param_2 + 0x138);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x27] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x148);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x158);
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  param_1[0x2b] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2c] = *(undefined8 *)(param_2 + 0x160);
  param_1[0x2d] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x178);
  param_1[0x2e] = *(undefined8 *)(param_2 + 0x170);
  param_1[0x2f] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x188);
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  param_1[0x31] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  param_1[0x33] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x34] = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x35] = uVar9;
  uVar4 = *(undefined4 *)(param_2 + 0x1b4);
  uVar7 = *(undefined4 *)(param_2 + 0x1b8);
  uVar8 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar4;
  *(undefined4 *)(param_1 + 0x37) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar8;
  uVar4 = *(undefined4 *)(param_2 + 0x1c4);
  uVar7 = *(undefined4 *)(param_2 + 0x1c8);
  uVar8 = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar4;
  *(undefined4 *)(param_1 + 0x39) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar8;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  lVar10 = *(longlong *)(param_2 + 0x1d8);
  param_1[0x3b] = lVar10;
  if (lVar10 != 0) {
    FUN_14370c030();
  }
  lVar10 = *(longlong *)(param_2 + 0x1e0);
  param_1[0x3c] = lVar10;
  if (lVar10 != 0) {
    FUN_14370c030();
  }
  return param_1;
}



// FUNCTION 14382b300 FUN_14382b300 body=591 status=ok
// SIG undefined FUN_14382b300(void)

undefined8 * FUN_14382b300(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  
  uVar4 = 0;
  param_1[1] = 0;
  *param_1 = hkaiOverlapManager::vftable;
  param_1[3] = hkaiOverlapManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_14382a500(param_1 + 4);
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  local_res8[0] = 0;
  uVar2 = FUN_143703a50();
  iVar1 = local_res8[0];
  uVar3 = uVar4;
  if (local_res8[0] != 0) {
    uVar3 = FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[0x19] = uVar3;
  *(int *)(param_1 + 0x1a) = iVar1;
  iVar1 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar1 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0xd4) = iVar1;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar1 = local_res8[0];
  uVar3 = uVar4;
  if (local_res8[0] != 0) {
    uVar3 = FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[0x1c] = uVar3;
  *(int *)(param_1 + 0x1d) = iVar1;
  iVar1 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar1 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0xec) = iVar1;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar1 = local_res8[0];
  uVar3 = uVar4;
  if (local_res8[0] != 0) {
    uVar3 = FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[0x1f] = uVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar1 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0x104) = iVar1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar3 = FUN_143703a50();
  iVar1 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar4 = FUN_143702d60(uVar3,4,local_res8);
  }
  param_1[0x22] = uVar4;
  *(int *)(param_1 + 0x23) = iVar1;
  iVar1 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar1 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x11c) = iVar1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar6 = param_1 + 0x28;
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined4 *)puVar6 = 0xbf800000;
    puVar6 = (undefined8 *)((longlong)puVar6 + 4);
  }
  return param_1;
}



// FUNCTION 14382b550 FUN_14382b550 body=41 status=ok
// SIG undefined FUN_14382b550(void)

undefined8 * FUN_14382b550(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiPath::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 14382b580 FUN_14382b580 body=58 status=ok
// SIG undefined FUN_14382b580(void)

undefined8 * FUN_14382b580(undefined8 *param_1)

{
  FUN_14382b7a0();
  *param_1 = hkaiPathFollowingBehavior::vftable;
  param_1[3] = hkaiPathFollowingBehavior::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14382b5c0 FUN_14382b5c0 body=29 status=ok
// SIG undefined FUN_14382b5c0(void)

undefined8 * FUN_14382b5c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiPathRequestBase::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 14382b5e0 FUN_14382b5e0 body=83 status=ok
// SIG undefined FUN_14382b5e0(void)

undefined8 * FUN_14382b5e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiPathRequestQueue::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  return param_1;
}



// FUNCTION 14382b640 FUN_14382b640 body=348 status=ok
// SIG undefined FUN_14382b640(void)

undefined8 * FUN_14382b640(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiBehavior::vftable;
  param_1[3] = hkaiBehavior::vftable;
  lVar4 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c030();
  }
  *param_1 = hkaiSingleCharacterBehavior::vftable;
  param_1[3] = hkaiSingleCharacterBehavior::vftable;
  lVar4 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c030();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c030();
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c030();
  }
  lVar4 = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  iVar2 = *(int *)(param_2 + 0x50);
  lVar7 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar3 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar4 = FUN_143702d60(uVar3,0x20,local_res8);
  }
  param_1[9] = lVar4;
  *(int *)(param_1 + 10) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x54) = iVar6;
  if (0 < iVar2) {
    puVar5 = (undefined4 *)(lVar4 + 0x10);
    lVar4 = *(longlong *)(param_2 + 0x48) - lVar4;
    do {
      puVar1 = (undefined8 *)(lVar4 + -0x10 + (longlong)puVar5);
      uVar3 = puVar1[1];
      *(undefined8 *)(puVar5 + -4) = *puVar1;
      *(undefined8 *)(puVar5 + -2) = uVar3;
      *puVar5 = *(undefined4 *)(lVar4 + (longlong)puVar5);
      puVar5 = puVar5 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 14382b7a0 FUN_14382b7a0 body=72 status=ok
// SIG undefined FUN_14382b7a0(void)

undefined8 * FUN_14382b7a0(undefined8 *param_1)

{
  FUN_14382a570();
  *param_1 = hkaiSingleCharacterBehavior::vftable;
  param_1[3] = hkaiSingleCharacterBehavior::vftable;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 14382b7f0 FUN_14382b7f0 body=35 status=ok
// SIG undefined FUN_14382b7f0(void)

longlong FUN_14382b7f0(longlong param_1)

{
  FUN_14382a7b0();
  FUN_143862e20(param_1 + 0x260);
  return param_1;
}



// FUNCTION 14382b820 FUN_14382b820 body=85 status=ok
// SIG undefined FUN_14382b820(void)

undefined8 * FUN_14382b820(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiStreamingCollection::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 14382b880 FUN_14382b880 body=246 status=ok
// SIG undefined FUN_14382b880(void)

undefined8 * FUN_14382b880(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiVolumeNavigator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[0xd] = 0;
  param_1[0xc] = hkaiVolumeNavigator::NavigatorSettings::vftable;
  *(undefined4 *)(param_1 + 0xe) = 0x1ffff;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1b] = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 14382b980 FUN_14382b980 body=49 status=ok
// SIG undefined FUN_14382b980(void)

undefined8 * FUN_14382b980(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiVolumeNavigatorManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14382b9c0 FUN_14382b9c0 body=67 status=ok
// SIG undefined FUN_14382b9c0(void)

undefined8 * FUN_14382b9c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiVolumeNavigatorStalenessChecker::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14382ba10 FUN_14382ba10 body=455 status=ok
// SIG undefined FUN_14382ba10(void)

undefined8 * FUN_14382ba10(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiWorld::vftable;
  FUN_14382bca0(param_1 + 3);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x2d) = 0x42480000;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x80000000;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80000000;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x80000000;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x80000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_143841d70(param_1 + 0x52,0);
  FUN_143875090(param_1 + 0x6e,0);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(param_1 + 0x98);
  param_1[0x99] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x512) = 0;
  return param_1;
}



// FUNCTION 14382bbe0 FUN_14382bbe0 body=178 status=ok
// SIG undefined FUN_14382bbe0(void)

undefined1 * FUN_14382bbe0(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int local_res8 [2];
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  local_res8[0] = 0;
  uVar2 = FUN_143703a50();
  iVar4 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar3 = FUN_143702d60(uVar2,4,local_res8);
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar1 = DAT_146817ca8;
  *(int *)(param_1 + 0x10) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  *(int *)(param_1 + 0x14) = iVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x7fffffff;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x7fffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x34) = 0x7fffffff;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 14382bca0 FUN_14382bca0 body=181 status=ok
// SIG undefined FUN_14382bca0(void)

undefined8 * FUN_14382bca0(undefined8 *param_1)

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
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 14382bd60 FUN_14382bd60 body=149 status=ok
// SIG undefined FUN_14382bd60(void)

void FUN_14382bd60(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + 8 + (longlong)iVar2 * 0x68;
    do {
      FUN_14382c2b0(lVar3);
      lVar3 = lVar3 + -0x68;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x68,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14382be00 FUN_14382be00 body=147 status=ok
// SIG undefined FUN_14382be00(void)

void FUN_14382be00(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x18;
    do {
      FUN_1438336b0(lVar3);
      lVar3 = lVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382bea0 FUN_14382bea0 body=155 status=ok
// SIG undefined FUN_14382bea0(void)

void FUN_14382bea0(longlong param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 0x50);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0xc,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 0x30);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382bf40 FUN_14382bf40 body=181 status=ok
// SIG undefined FUN_14382bf40(void)

void FUN_14382bf40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],4,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],4,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x14,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}


