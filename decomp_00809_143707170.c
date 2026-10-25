// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143707170 FUN_143707170 body=51 status=ok
// SIG undefined FUN_143707170(void)

undefined1 FUN_143707170(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437071b0 FUN_1437071b0 body=126 status=ok
// SIG undefined FUN_1437071b0(void)

void FUN_1437071b0(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (0 < (int)param_4) {
    uVar2 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        uVar1 = FUN_1437488d0(param_2,local_28);
        FUN_143748760(param_1,uVar1);
        if ((local_18 & 1) != 0) {
          FUN_143733a60(local_18 & 0xfffffffffffffffe);
        }
      }
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143707230 FUN_143707230 body=100 status=ok
// SIG undefined FUN_143707230(void)

void FUN_143707230(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar1 = (longlong)param_4;
    param_1 = param_1 + 0x20;
    do {
      if (param_1 + -0x20 != 0) {
        FUN_143709bf0(param_1 + -0x20,param_2 + -0x20 + param_1);
        FUN_143709bf0(param_1,param_2 + param_1);
        *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20 + param_1);
      }
      param_1 = param_1 + 0x48;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437072b0 FUN_1437072b0 body=216 status=ok
// SIG undefined FUN_1437072b0(void)

undefined4 *
FUN_1437072b0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  lVar8 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar8 = *plVar3;
  }
  lVar1 = param_5[1];
  puVar4 = (undefined8 *)FUN_143714490(lVar8,1);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*puVar4;
  }
  lVar5 = 0;
  if ((uVar6 & 0xf) == 0) {
    lVar5 = lVar8;
  }
  if (((((lVar5 == 0) && (lVar1 != 0)) && (cVar2 = FUN_143714910(lVar1,lVar8), cVar2 == '\0')) &&
      (*param_5 != 0)) || (*(code **)(param_1 + 0x18) == (code *)0x0)) {
    uVar7 = 0x80040200;
  }
  else {
    cVar2 = (**(code **)(param_1 + 0x18))(param_3,*param_5);
    uVar7 = 0x80040200;
    if (cVar2 != '\0') {
      uVar7 = 0;
    }
  }
  *param_2 = uVar7;
  return param_2;
}



// FUNCTION 1437073a0 func body=60 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkReflect::Any>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x20 + param_1;
    do {
      FUN_1437484d0(param_1);
      param_1 = param_1 + -0x20;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437073e0 FUN_1437073e0 body=200 status=ok
// SIG undefined FUN_1437073e0(void)

undefined4 *
FUN_1437073e0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  uVar2 = (**(code **)(param_1 + 0x10))(param_3);
  puVar3 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
  }
  puVar3 = (undefined8 *)FUN_14371d5c0(local_18,uVar2,uVar5);
  lVar1 = puVar3[1];
  uVar2 = *puVar3;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0(lVar1);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  *param_5 = uVar2;
  param_5[1] = lVar1;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437074b0 FUN_1437074b0 body=69 status=ok
// SIG undefined FUN_1437074b0(void)

void FUN_1437074b0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x48;
    do {
      FUN_14370a210(param_1 + 0x20);
      FUN_14370a210(param_1);
      param_1 = param_1 + -0x48;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143707500 FUN_143707500 body=63 status=ok
// SIG undefined FUN_143707500(void)

void FUN_143707500(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        uVar1 = FUN_14375f190();
        FUN_14375efa0(param_1,uVar1);
      }
      param_1 = param_1 + 0x28;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143707560 FUN_143707560 body=18 status=ok
// SIG undefined FUN_143707560(void)

undefined8 * FUN_143707560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e4dc0;
  return param_2;
}



// FUNCTION 143707580 FUN_143707580 body=392 status=ok
// SIG undefined FUN_143707580(void)

void FUN_143707580(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar10 = (int *)(param_2 + 0x10);
    param_1 = param_1 - param_2;
    lVar15 = (longlong)param_4;
    do {
      plVar12 = (longlong *)(param_1 + -0x10 + (longlong)piVar10);
      if (plVar12 != (longlong *)0x0) {
        iVar3 = *piVar10;
        iVar13 = piVar10[-2];
        *plVar12 = 0;
        iVar11 = (iVar3 << 5) >> 5;
        iVar13 = ((iVar13 + iVar3) * 0x20 + 0x1f >> 5) - iVar11;
        *(undefined4 *)(param_1 + -8 + (longlong)piVar10) = 0;
        *(undefined4 *)(param_1 + -4 + (longlong)piVar10) = 0x80000000;
        local_res20[0] = iVar13;
        uVar4 = FUN_143703a50();
        iVar3 = local_res20[0];
        lVar5 = 0;
        if (local_res20[0] != 0) {
          lVar5 = FUN_143702d60(uVar4,4,local_res20);
        }
        *plVar12 = lVar5;
        *(int *)(param_1 + -8 + (longlong)piVar10) = iVar3;
        iVar3 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar3 = local_res20[0];
        }
        *(int *)(param_1 + -4 + (longlong)piVar10) = iVar3;
        *(int *)(param_1 + (longlong)piVar10) = iVar11;
        uVar4 = FUN_143703a50();
        uVar7 = *(uint *)(param_1 + -4 + (longlong)piVar10) & 0x3fffffff;
        if ((int)uVar7 < iVar13) {
          iVar11 = uVar7 * 2;
          iVar3 = iVar13;
          if (iVar13 < iVar11) {
            iVar3 = iVar11;
          }
          FUN_14370c310(uVar4,plVar12,iVar3,4);
        }
        *(int *)(param_1 + -8 + (longlong)piVar10) = iVar13;
        iVar3 = *piVar10;
        iVar11 = *(int *)(param_1 + (longlong)piVar10);
        iVar8 = iVar3;
        if (iVar3 < iVar11) {
          iVar8 = iVar11;
        }
        iVar2 = piVar10[-2] + iVar3;
        if (iVar11 + iVar13 < piVar10[-2] + iVar3) {
          iVar2 = iVar11 + iVar13;
        }
        puVar14 = (undefined4 *)(*(longlong *)(piVar10 + -4) + (longlong)(iVar8 - iVar3) * 4);
        puVar6 = (undefined4 *)(*plVar12 + (longlong)(iVar8 - iVar11) * 4);
        if (0 < iVar2 - iVar8) {
          uVar9 = (ulonglong)(uint)(iVar2 - iVar8);
          do {
            uVar1 = *puVar14;
            puVar14 = puVar14 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      piVar10 = piVar10 + 6;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 143707710 FUN_143707710 body=102 status=ok
// SIG undefined FUN_143707710(void)

void FUN_143707710(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar2 = (ulonglong)param_4;
    do {
      uVar1 = FUN_1437488d0(param_2 + param_1,local_28);
      FUN_143748760(param_1,uVar1);
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      param_1 = param_1 + 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143707780 FUN_143707780 body=155 status=ok
// SIG undefined FUN_143707780(void)

void FUN_143707780(longlong param_1,undefined8 param_2,int param_3)

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
        *(undefined ***)(puVar1 + -9) = hkMonitorStreamStringMap::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        FUN_143734b10(puVar1 + 5);
      }
      puVar1 = puVar1 + 0x12;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143707820 FUN_143707820 body=110 status=ok
// SIG undefined FUN_143707820(void)

void FUN_143707820(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar1 = (longlong)param_4;
    param_1 = param_1 + 0x20;
    do {
      FUN_14370a810(param_1 + -0x20,param_2 + -0x20 + param_1);
      FUN_14370a810(param_1,param_2 + param_1);
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20 + param_1);
      param_1 = param_1 + 0x48;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143707890 func body=62 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkMemoryResourceContainer>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143755550(param_1,&DAT_145af3922);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437078e0 FUN_1437078e0 body=75 status=ok
// SIG undefined FUN_1437078e0(void)

void FUN_1437078e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14375ef70(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143707980 FUN_143707980 body=369 status=ok
// SIG undefined FUN_143707980(void)

void FUN_143707980(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar5 = (int *)(param_1 + 0x20);
    lVar8 = (longlong)param_4;
    do {
      piVar1 = piVar5 + -8;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar5 + -6,param_2 + -0x18 + (longlong)piVar5);
        piVar5[-4] = 0x1ffff;
        *(undefined ***)piVar1 = hkMonitorStreamStringMap::vftable;
        piVar5[-2] = 0;
        piVar5[-1] = 0;
        *piVar5 = 0;
        piVar5[1] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + (longlong)piVar5);
        lVar6 = (longlong)local_res20[0];
        uVar3 = FUN_143703a50();
        iVar2 = local_res20[0];
        puVar4 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar4 = (undefined8 *)FUN_143702d60(uVar3,0x10,local_res20);
        }
        *(undefined8 **)(piVar5 + -2) = puVar4;
        *piVar5 = iVar2;
        iVar2 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar2 = local_res20[0];
        }
        piVar5[1] = iVar2;
        if (0 < lVar6) {
          lVar7 = *(longlong *)(param_2 + -8 + (longlong)piVar5) - (longlong)puVar4;
          do {
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = *(undefined8 *)(lVar7 + (longlong)puVar4);
              FUN_1437165f0(puVar4 + 1,lVar7 + (longlong)(puVar4 + 1));
            }
            puVar4 = puVar4 + 2;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        FUN_143709cf0(piVar5 + 2,param_2 + 8 + (longlong)piVar5);
      }
      piVar5 = piVar5 + 0x12;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 143707b00 FUN_143707b00 body=51 status=ok
// SIG undefined FUN_143707b00(void)

undefined1 FUN_143707b00(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x28);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x38);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143707b40 FUN_143707b40 body=512 status=ok
// SIG undefined FUN_143707b40(void)

void FUN_143707b40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar7 = (int *)(param_1 + 0x40);
    lVar8 = (longlong)param_4;
    do {
      piVar1 = piVar7 + -0x10;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar7 + -0xe,param_2 + -0x38 + (longlong)piVar7);
        piVar7[-0xc] = 0x1ffff;
        *(undefined ***)piVar1 = hkMemoryResourceContainer::vftable;
        FUN_1437165f0(piVar7 + -10,param_2 + -0x28 + (longlong)piVar7);
        *(undefined8 *)(piVar7 + -8) = *(undefined8 *)((longlong)piVar7 + param_2 + -0x20);
        piVar7[-6] = 0;
        piVar7[-5] = 0;
        piVar7[-4] = 0;
        piVar7[-3] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + -0x10 + (longlong)piVar7);
        lVar6 = (longlong)local_res20[0];
        uVar4 = FUN_143703a50();
        iVar3 = local_res20[0];
        plVar5 = (longlong *)0x0;
        if (local_res20[0] != 0) {
          plVar5 = (longlong *)FUN_143702d60(uVar4,8,local_res20);
        }
        *(longlong **)(piVar7 + -6) = plVar5;
        piVar7[-4] = iVar3;
        iVar3 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar3 = local_res20[0];
        }
        piVar7[-3] = iVar3;
        if (0 < lVar6) {
          lVar9 = *(longlong *)((longlong)piVar7 + param_2 + -0x18) - (longlong)plVar5;
          do {
            if ((plVar5 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar9 + (longlong)plVar5), *plVar5 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7[1] = -0x80000000;
        local_38[0] = *(int *)(param_2 + (longlong)piVar7);
        lVar6 = (longlong)local_38[0];
        uVar4 = FUN_143703a50();
        iVar3 = local_38[0];
        plVar5 = (longlong *)0x0;
        if (local_38[0] != 0) {
          plVar5 = (longlong *)FUN_143702d60(uVar4,8,local_38);
        }
        *(longlong **)(piVar7 + -2) = plVar5;
        *piVar7 = iVar3;
        iVar3 = -0x80000000;
        if (local_38[0] != 0) {
          iVar3 = local_38[0];
        }
        piVar7[1] = iVar3;
        if (0 < lVar6) {
          lVar9 = *(longlong *)(param_2 + -8 + (longlong)piVar7) - (longlong)plVar5;
          do {
            if ((plVar5 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar9 + (longlong)plVar5), *plVar5 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      piVar7 = piVar7 + 0x12;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 143707d40 FUN_143707d40 body=74 status=ok
// SIG undefined FUN_143707d40(void)

void FUN_143707d40(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a0c0(param_1,local_res18);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143707d90 FUN_143707d90 body=18 status=ok
// SIG undefined FUN_143707d90(void)

undefined8 * FUN_143707d90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e52a0;
  return param_2;
}



// FUNCTION 143707db0 FUN_143707db0 body=139 status=ok
// SIG undefined FUN_143707db0(void)

longlong FUN_143707db0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a3f0();
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



// FUNCTION 143707ea0 FUN_143707ea0 body=18 status=ok
// SIG undefined FUN_143707ea0(void)

undefined8 * FUN_143707ea0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e53b0;
  return param_2;
}



// FUNCTION 143707ec0 FUN_143707ec0 body=18 status=ok
// SIG undefined FUN_143707ec0(void)

undefined8 * FUN_143707ec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e5570;
  return param_2;
}



// FUNCTION 143707ee0 FUN_143707ee0 body=403 status=ok
// SIG undefined FUN_143707ee0(void)

void FUN_143707ee0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x24);
    lVar11 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -7,param_2 + -0x1c + (longlong)puVar8);
      uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar8);
      lVar3 = *(longlong *)(param_2 + -0xc + (longlong)puVar8);
      uVar4 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar2) {
        FUN_14370c310(uVar4,puVar8 + -3,uVar2,0x10);
      }
      iVar5 = (puVar8[-1] - uVar2) + -1;
      if (-1 < iVar5) {
        lVar9 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(puVar8 + -3) + 8 +
                (longlong)iVar5 * 0x10;
        do {
          FUN_143716650(lVar9);
          lVar9 = lVar9 + -0x10;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      uVar6 = uVar2;
      if ((int)puVar8[-1] < (int)uVar2) {
        uVar6 = puVar8[-1];
      }
      FUN_1437099e0(*(undefined8 *)(puVar8 + -3),lVar3,uVar6);
      lVar9 = *(longlong *)(puVar8 + -3);
      lVar10 = (longlong)(int)(uVar2 - uVar6);
      if (0 < (int)(uVar2 - uVar6)) {
        puVar7 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + lVar3);
        do {
          puVar1 = (undefined8 *)((lVar9 - lVar3) + (longlong)puVar7);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = *puVar7;
            FUN_1437165f0((longlong)puVar7 + (lVar9 - lVar3) + 8,puVar7 + 1);
          }
          puVar7 = puVar7 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puVar8[-1] = uVar2;
      FUN_14370a980(puVar8 + 1,(longlong)puVar8 + param_2 + 4);
      puVar8 = puVar8 + 0x12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143708090 FUN_143708090 body=55 status=ok
// SIG undefined FUN_143708090(void)

void FUN_143708090(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437555b0(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437080d0 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkSimpleLocalFrame>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143708130 FUN_143708130 body=74 status=ok
// SIG undefined FUN_143708130(void)

void FUN_143708130(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709fd0(param_1,local_res18);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437081b0 FUN_1437081b0 body=18 status=ok
// SIG undefined FUN_1437081b0(void)

undefined8 * FUN_1437081b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e58b0;
  return param_2;
}



// FUNCTION 1437081d0 FUN_1437081d0 body=9 status=ok
// SIG undefined FUN_1437081d0(void)

void FUN_1437081d0(longlong param_1)

{
  FUN_14370b790(param_1 + 0x20);
  return;
}



// FUNCTION 1437081e0 set body=39 status=ok
// SIG undefined set(void)

void hkTransformf::set(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_143716430();
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = *param_3;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



// FUNCTION 143708210 FUN_143708210 body=8 status=ok
// SIG undefined FUN_143708210(void)

char * FUN_143708210(void)

{
  return "InterfaceImpl0";
}



// FUNCTION 143708220 FUN_143708220 body=390 status=ok
// SIG undefined FUN_143708220(void)

void FUN_143708220(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0x30);
    lVar9 = (longlong)param_4;
    do {
      puVar1 = puVar7 + -0xc;
      if (puVar1 != (uint *)0x0) {
        *(undefined ***)puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar7 + -10,param_2 + -0x28 + (longlong)puVar7);
        puVar7[-8] = 0x1ffff;
        *(undefined ***)puVar1 = hkMemoryResourceHandle::vftable;
        lVar5 = *(longlong *)(param_2 + -0x18 + (longlong)puVar7);
        *(longlong *)(puVar7 + -6) = lVar5;
        if (lVar5 != 0) {
          FUN_14370c030();
        }
        FUN_1437165f0(puVar7 + -4,param_2 + -0x10 + (longlong)puVar7);
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0x80000000;
        uVar2 = *(uint *)(param_2 + (longlong)puVar7);
        uVar6 = (ulonglong)uVar2;
        local_res20[0] = uVar2;
        uVar4 = FUN_143703a50();
        uVar3 = local_res20[0];
        lVar5 = 0;
        if (local_res20[0] != 0) {
          lVar5 = FUN_143702d60(uVar4,0x10,local_res20);
        }
        *(longlong *)(puVar7 + -2) = lVar5;
        *puVar7 = uVar3;
        uVar3 = 0x80000000;
        if (local_res20[0] != 0) {
          uVar3 = local_res20[0];
        }
        puVar7[1] = uVar3;
        if (0 < (int)uVar2) {
          lVar8 = *(longlong *)(param_2 + -8 + (longlong)puVar7) - lVar5;
          do {
            if (lVar5 != 0) {
              FUN_1437165f0(lVar5,lVar8 + lVar5);
              FUN_1437165f0(lVar5 + 8,lVar8 + lVar5 + 8);
            }
            lVar5 = lVar5 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      puVar7 = puVar7 + 0xe;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 1437083b0 FUN_1437083b0 body=75 status=ok
// SIG undefined FUN_1437083b0(void)

void FUN_1437083b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14375ec60(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437083fc FUN_1437083fc body=9 status=ok
// SIG undefined FUN_1437083fc(void)

void FUN_1437083fc(longlong param_1)

{
  FUN_1437042e0(param_1 + -0x18);
  return;
}



// FUNCTION 143708448 FUN_143708448 body=9 status=ok
// SIG undefined FUN_143708448(void)

void FUN_143708448(longlong param_1)

{
  FUN_143704550(param_1 + -0x18);
  return;
}



// FUNCTION 143708454 FUN_143708454 body=9 status=ok
// SIG undefined FUN_143708454(void)

void FUN_143708454(longlong param_1)

{
  FUN_1437042e0(param_1 + -0x20);
  return;
}



// FUNCTION 143708460 FUN_143708460 body=9 status=ok
// SIG undefined FUN_143708460(void)

void FUN_143708460(longlong param_1)

{
  FUN_143704550(param_1 + -0x20);
  return;
}



// FUNCTION 14370846c FUN_14370846c body=9 status=ok
// SIG undefined FUN_14370846c(void)

void FUN_14370846c(longlong param_1)

{
  FUN_1437042e0(param_1 + -0x28);
  return;
}



// FUNCTION 143708478 FUN_143708478 body=9 status=ok
// SIG undefined FUN_143708478(void)

void FUN_143708478(longlong param_1)

{
  FUN_143704550(param_1 + -0x28);
  return;
}



// FUNCTION 143708490 FUN_143708490 body=53 status=ok
// SIG undefined FUN_143708490(void)

void FUN_143708490(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143709be0(*param_1,param_1[1]);
  if (lVar1 != 0) {
    FUN_143761e40(lVar1,10,param_2);
    return;
  }
  return;
}



// FUNCTION 1437084c8 FUN_1437084c8 body=9 status=ok
// SIG undefined FUN_1437084c8(void)

void FUN_1437084c8(longlong param_1)

{
  FUN_1437042e0(param_1 + -0x30);
  return;
}



// FUNCTION 1437084d4 FUN_1437084d4 body=9 status=ok
// SIG undefined FUN_1437084d4(void)

void FUN_1437084d4(longlong param_1)

{
  FUN_143704550(param_1 + -0x30);
  return;
}



// FUNCTION 143708530 FUN_143708530 body=124 status=ok
// SIG undefined FUN_143708530(void)

void FUN_143708530(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 + 8;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = hkReferencedObject::vftable;
        FUN_143718270(param_1 + 1,param_2);
        *(undefined4 *)(param_1 + 2) = 0x1ffff;
      }
      param_2 = param_2 + 0x18;
      param_1 = param_1 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437085b0 FUN_1437085b0 body=60 status=ok
// SIG undefined FUN_1437085b0(void)

void FUN_1437085b0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x18;
    do {
      thunk_FUN_14375ed90(param_1);
      param_1 = param_1 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143708650 FUN_143708650 body=51 status=ok
// SIG undefined FUN_143708650(void)

undefined1 FUN_143708650(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 8);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143708720 FUN_143708720 body=70 status=ok
// SIG undefined FUN_143708720(void)

void FUN_143708720(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14375eca0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143708770 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkTask>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x10 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -2;
      plVar2 = plVar2 + -2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437087f0 FUN_1437087f0 body=151 status=ok
// SIG undefined FUN_1437087f0(void)

longlong FUN_1437087f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1437088d0 FUN_1437088d0 body=18 status=ok
// SIG undefined FUN_1437088d0(void)

undefined8 * FUN_1437088d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e6660;
  return param_2;
}



// FUNCTION 1437088f0 FUN_1437088f0 body=9 status=ok
// SIG undefined FUN_1437088f0(void)

void FUN_1437088f0(longlong param_1)

{
  FUN_14370b800(param_1 + 3);
  return;
}



// FUNCTION 143708900 FUN_143708900 body=8 status=ok
// SIG undefined FUN_143708900(void)

char * FUN_143708900(void)

{
  return "InterfaceImpl1";
}



// FUNCTION 143708980 FUN_143708980 body=74 status=ok
// SIG undefined FUN_143708980(void)

void FUN_143708980(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_1 = param_1 + 8;
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437182e0(param_1,param_2 + 8 + param_1);
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437089d0 FUN_1437089d0 body=186 status=ok
// SIG undefined FUN_1437089d0(void)

void FUN_1437089d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *puVar1 = UnitTest::InterfaceUnregistered0::vftable;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        FUN_1437165f0(lVar2 + 0x18,param_2 + 0x18 + lVar2);
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143708a90 FUN_143708a90 body=55 status=ok
// SIG undefined FUN_143708a90(void)

void FUN_143708a90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143762320(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143708ad0 FUN_143708ad0 body=18 status=ok
// SIG undefined FUN_143708ad0(void)

undefined8 * FUN_143708ad0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e68b0;
  return param_2;
}



// FUNCTION 143708af0 FUN_143708af0 body=106 status=ok
// SIG undefined FUN_143708af0(void)

void FUN_143708af0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    puVar2 = (ulonglong *)(param_1 + 0x10);
    do {
      if (puVar2 + -2 != (ulonglong *)0x0) {
        puVar2[-2] = *(ulonglong *)(param_2 + -0x10 + (longlong)puVar2);
        puVar2[-1] = *(ulonglong *)((longlong)puVar2 + param_2 + -8);
        uVar1 = *(ulonglong *)(param_2 + (longlong)puVar2);
        *puVar2 = uVar1;
        if ((uVar1 & 1) != 0) {
          FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
        }
      }
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143708b60 func body=72 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkReflect::ArrayVar>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (ulonglong *)(param_1 + lVar2 * 0x18 + 0x10);
    do {
      if ((*puVar1 & 1) != 0) {
        FUN_143733a60(*puVar1 & 0xfffffffffffffffe);
      }
      puVar1 = puVar1 + -3;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 143708c00 FUN_143708c00 body=74 status=ok
// SIG undefined FUN_143708c00(void)

void FUN_143708c00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709e90(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143708c50 FUN_143708c50 body=144 status=ok
// SIG undefined FUN_143708c50(void)

void FUN_143708c50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar1 = (ulonglong *)(param_2 + 0x10);
    lVar3 = (longlong)param_4;
    lVar2 = param_1 - param_2;
    do {
      *(ulonglong *)(lVar2 + -0x10 + (longlong)puVar1) = puVar1[-2];
      *(undefined8 *)((longlong)puVar1 + lVar2 + -8) =
           *(undefined8 *)((longlong)puVar1 + (param_2 - param_1) + lVar2 + -8);
      if ((*puVar1 & 1) != 0) {
        FUN_1437329e0(*puVar1 & 0xfffffffffffffffe);
      }
      if ((*(byte *)(lVar2 + (longlong)puVar1) & 1) != 0) {
        FUN_143733a60(*(ulonglong *)(lVar2 + (longlong)puVar1) & 0xfffffffffffffffe);
      }
      *(ulonglong *)(lVar2 + (longlong)puVar1) = *puVar1;
      puVar1 = puVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143708ce0 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddClearanceCache>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709db0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143708d30 FUN_143708d30 body=18 status=ok
// SIG undefined FUN_143708d30(void)

undefined8 * FUN_143708d30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7390;
  return param_2;
}



// FUNCTION 143708d50 FUN_143708d50 body=125 status=ok
// SIG undefined FUN_143708d50(void)

void FUN_143708d50(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -4) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0x1ffff;
        *(undefined ***)(puVar1 + -4) = hkStringObject::vftable;
        FUN_143716620(puVar1 + 2,0);
      }
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143708dd0 FUN_143708dd0 body=139 status=ok
// SIG undefined FUN_143708dd0(void)

longlong FUN_143708dd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143755710();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 143708e60 FUN_143708e60 body=74 status=ok
// SIG undefined FUN_143708e60(void)

void FUN_143708e60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14370a010(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143708eb0 FUN_143708eb0 body=18 status=ok
// SIG undefined FUN_143708eb0(void)

undefined8 * FUN_143708eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e74c0;
  return param_2;
}



// FUNCTION 143708ed0 FUN_143708ed0 body=8 status=ok
// SIG undefined FUN_143708ed0(void)

char * FUN_143708ed0(void)

{
  return "InterfaceUnregistered0";
}



// FUNCTION 143708f80 FUN_143708f80 body=151 status=ok
// SIG undefined FUN_143708f80(void)

longlong FUN_143708f80(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716650(param_1 + 0x20);
  FUN_14370c000(param_1);
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



// FUNCTION 143709020 FUN_143709020 body=18 status=ok
// SIG undefined FUN_143709020(void)

undefined8 * FUN_143709020(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7ab0;
  return param_2;
}



// FUNCTION 143709040 FUN_143709040 body=139 status=ok
// SIG undefined FUN_143709040(void)

longlong FUN_143709040(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14375df00();
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



// FUNCTION 1437090d0 FUN_1437090d0 body=111 status=ok
// SIG undefined FUN_1437090d0(void)

void FUN_1437090d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      plVar1 = (longlong *)(param_2 + (longlong)param_1);
      if (param_1 != plVar1) {
        lVar2 = *plVar1;
        if (lVar2 != 0) {
          FUN_14370c030(lVar2);
        }
        if (*param_1 != 0) {
          FUN_14370c150();
        }
        *param_1 = lVar2;
      }
      param_1 = param_1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143709140 FUN_143709140 body=18 status=ok
// SIG undefined FUN_143709140(void)

undefined8 * FUN_143709140(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7d40;
  return param_2;
}



// FUNCTION 143709160 FUN_143709160 body=18 status=ok
// SIG undefined FUN_143709160(void)

undefined8 * FUN_143709160(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7c50;
  return param_2;
}



// FUNCTION 1437091e0 FUN_1437091e0 body=18 status=ok
// SIG undefined FUN_1437091e0(void)

undefined8 * FUN_1437091e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7e80;
  return param_2;
}



// FUNCTION 143709200 FUN_143709200 body=8 status=ok
// SIG undefined FUN_143709200(void)

char * FUN_143709200(void)

{
  return "Interface1.func1";
}



// FUNCTION 143709210 FUN_143709210 body=18 status=ok
// SIG undefined FUN_143709210(void)

undefined8 * FUN_143709210(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e8000;
  return param_2;
}



// FUNCTION 143709230 FUN_143709230 body=99 status=ok
// SIG undefined FUN_143709230(void)

undefined8 * FUN_143709230(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkViewport::vftable;
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



// FUNCTION 1437092a0 FUN_1437092a0 body=57 status=ok
// SIG undefined FUN_1437092a0(void)

void FUN_1437092a0(char *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143762f50(local_res8,*param_1 == '\0',"!m_afterReflectNewCalled",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Serialize/Tagfile/BundleLoadSave.h"
                ,0x14);
  *param_1 = '\x01';
  return;
}



// FUNCTION 1437092e0 FUN_1437092e0 body=75 status=ok
// SIG undefined FUN_1437092e0(void)

void FUN_1437092e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143716f90(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143709340 FUN_143709340 body=18 status=ok
// SIG undefined FUN_143709340(void)

undefined8 * FUN_143709340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e82f0;
  return param_2;
}



// FUNCTION 143709360 func body=75 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkStringPtr>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143718270(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437093b0 FUN_1437093b0 body=8 status=ok
// SIG undefined FUN_1437093b0(void)

char * FUN_1437093b0(void)

{
  return "InterfaceUnregistered1";
}



// FUNCTION 143709400 FUN_143709400 body=212 status=ok
// SIG undefined FUN_143709400(void)

longlong FUN_143709400(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  FUN_143716650(param_1 + 0x50);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),1,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 1437094e0 func body=60 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkStringPtr>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 8;
    do {
      thunk_FUN_143718350(param_1);
      param_1 = param_1 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143709520 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddClearanceCache>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143709ff0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143709570 FUN_143709570 body=139 status=ok
// SIG undefined FUN_143709570(void)

longlong FUN_143709570(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370a2b0();
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



// FUNCTION 143709650 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkStringPtr>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437182e0(param_1,param_2 + param_1);
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437096c0 FUN_1437096c0 body=107 status=ok
// SIG undefined FUN_1437096c0(void)

undefined1 FUN_1437096c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_38 [48];
  
  lVar2 = FUN_143709f00(local_38);
  FUN_14370aa50(param_1 + 0x30,lVar2);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(lVar2 + 0x28) = 0;
  if (-1 < (int)*(uint *)(lVar2 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(lVar2 + 0x20),4,*(uint *)(lVar2 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(lVar2 + 0x2c) = 0x80000000;
  return 1;
}



// FUNCTION 143709730 FUN_143709730 body=180 status=ok
// SIG undefined FUN_143709730(void)

undefined8 FUN_143709730(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int local_res10 [2];
  undefined4 *local_28;
  int local_20;
  int local_1c;
  
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  local_res10[0] = iVar1;
  uVar3 = FUN_143703a50();
  local_20 = local_res10[0];
  if (local_res10[0] == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)FUN_143702d60(uVar3,4,local_res10);
  }
  local_1c = -0x80000000;
  if (local_res10[0] != 0) {
    local_1c = local_res10[0];
  }
  lVar2 = *param_2;
  if (0 < iVar1) {
    puVar4 = local_28;
    do {
      *puVar4 = *(undefined4 *)((lVar2 - (longlong)local_28) + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_14370ba20(param_1,&local_28);
  return 1;
}



// FUNCTION 1437097f0 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_14370bca0();
  return 1;
}



// FUNCTION 143709800 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_14370bae0();
  return 1;
}



// FUNCTION 143709810 FUN_143709810 body=63 status=ok
// SIG undefined FUN_143709810(void)

undefined1 FUN_143709810(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_14370c030(lVar1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}



// FUNCTION 143709850 FUN_143709850 body=36 status=ok
// SIG undefined FUN_143709850(void)

undefined1 FUN_143709850(longlong param_1,ulonglong *param_2)

{
  FUN_1437166c0(param_1 + 0x10,*param_2 & 0xfffffffffffffffe);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}



// FUNCTION 1437098b0 FUN_1437098b0 body=112 status=ok
// SIG undefined FUN_1437098b0(void)

void FUN_1437098b0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_3;
    lVar2 = param_1 + 0x10;
    do {
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)((param_2 - param_1) + -0x10 + lVar2);
      uVar1 = FUN_1437488d0((param_2 - param_1) + lVar2,local_28);
      FUN_143748760(lVar2,uVar1);
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143709920 FUN_143709920 body=188 status=ok
// SIG undefined FUN_143709920(void)

void FUN_143709920(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    puVar4 = (uint *)(param_1 + 0x2c);
    param_2 = param_2 - param_1;
    lVar5 = (longlong)param_3;
    do {
      puVar4[-0xb] = *(uint *)(param_2 + -0x2c + (longlong)puVar4);
      puVar4[-10] = *(uint *)(param_2 + -0x28 + (longlong)puVar4);
      *(undefined8 *)(puVar4 + -9) = *(undefined8 *)(param_2 + -0x24 + (longlong)puVar4);
      puVar4[-7] = *(uint *)(param_2 + -0x1c + (longlong)puVar4);
      *(undefined8 *)(puVar4 + -6) = *(undefined8 *)(param_2 + -0x18 + (longlong)puVar4);
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar4);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      puVar4 = puVar4 + 0xc;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1437099e0 FUN_1437099e0 body=95 status=ok
// SIG undefined FUN_1437099e0(void)

void FUN_1437099e0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = (longlong)param_3;
    lVar1 = param_1 + 8;
    do {
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)((param_2 - param_1) + -8 + lVar1);
      FUN_143716660(lVar1,(param_2 - param_1) + lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143709a40 FUN_143709a40 body=169 status=ok
// SIG undefined FUN_143709a40(void)

void FUN_143709a40(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    puVar4 = (uint *)(param_1 + 0xc);
    lVar5 = (longlong)param_3;
    do {
      uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)((param_2 - param_1) + -0xc + (longlong)puVar4);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143709af0 FUN_143709af0 body=175 status=ok
// SIG undefined FUN_143709af0(void)

void FUN_143709af0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    plVar3 = (longlong *)(param_2 + 0x10);
    lVar4 = (longlong)param_3;
    lVar5 = param_1 - param_2;
    do {
      FUN_143716660(lVar5 + -0x10 + (longlong)plVar3,plVar3 + -2);
      lVar2 = lVar5 + -8 + (longlong)plVar3;
      FUN_143716660(lVar2,lVar2 + (param_2 - param_1));
      plVar1 = (longlong *)(lVar5 + (longlong)plVar3);
      if (plVar1 != plVar3) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          FUN_14370c030(lVar2);
        }
        if (*plVar1 != 0) {
          FUN_14370c150();
        }
        *plVar1 = lVar2;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143709be0 FUN_143709be0 body=12 status=ok
// SIG undefined FUN_143709be0(void)

void FUN_143709be0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e4340);
  return;
}



// FUNCTION 143709bf0 FUN_143709bf0 body=248 status=ok
// SIG undefined FUN_143709bf0(void)

longlong * FUN_143709bf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  lVar3 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  local_res8[0] = (int)param_2[1];
  lVar6 = (longlong)local_res8[0];
  uVar2 = FUN_143703a50();
  iVar4 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar3 = FUN_143702d60(uVar2,0x30,local_res8);
  }
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  lVar1 = *param_2;
  if (0 < lVar6) {
    puVar5 = (undefined8 *)(lVar3 + 0x10);
    do {
      if (puVar5 + -2 != (undefined8 *)0x0) {
        puVar5[-2] = *(undefined8 *)((lVar1 - lVar3) + -0x10 + (longlong)puVar5);
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 0;
        uVar2 = FUN_1437488d0((lVar1 - lVar3) + (longlong)puVar5,local_48);
        FUN_143748760(puVar5,uVar2);
        if ((local_38 & 1) != 0) {
          FUN_143733a60(local_38 & 0xfffffffffffffffe);
        }
      }
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143709cf0 FUN_143709cf0 body=191 status=ok
// SIG undefined FUN_143709cf0(void)

undefined8 * FUN_143709cf0(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_res8 [2];
  
  puVar7 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar2 = (int)param_2[1];
  lVar9 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar6 = FUN_143703a50();
  iVar10 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar7 = (undefined4 *)FUN_143702d60(uVar6,0x10,local_res8);
  }
  *param_1 = puVar7;
  *(int *)(param_1 + 1) = iVar10;
  iVar10 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar10 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar10;
  if (0 < iVar2) {
    lVar8 = *param_2 - (longlong)puVar7;
    do {
      if (puVar7 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(lVar8 + (longlong)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      puVar7 = puVar7 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143709db0 FUN_143709db0 body=29 status=ok
// SIG undefined FUN_143709db0(void)

undefined8 * FUN_143709db0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = UnitTest::SetterTest::Foo::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 143709dd0 FUN_143709dd0 body=29 status=ok
// SIG undefined FUN_143709dd0(void)

undefined8 * FUN_143709dd0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = UnitTest::Interface::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 143709df0 FUN_143709df0 body=33 status=ok
// SIG undefined FUN_143709df0(void)

undefined8 * FUN_143709df0(undefined8 *param_1)

{
  FUN_143709dd0();
  *param_1 = UnitTest::InterfaceImpl0::vftable;
  return param_1;
}



// FUNCTION 143709e20 FUN_143709e20 body=33 status=ok
// SIG undefined FUN_143709e20(void)

undefined8 * FUN_143709e20(undefined8 *param_1)

{
  FUN_143709dd0();
  *param_1 = UnitTest::InterfaceImpl1::vftable;
  return param_1;
}



// FUNCTION 143709e50 FUN_143709e50 body=50 status=ok
// SIG undefined FUN_143709e50(void)

undefined8 * FUN_143709e50(undefined8 *param_1,undefined1 param_2)

{
  FUN_143709dd0();
  *param_1 = UnitTest::InterfaceSynthetic::vftable;
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1 + 3,param_2);
  return param_1;
}



// FUNCTION 143709e90 FUN_143709e90 body=41 status=ok
// SIG undefined FUN_143709e90(void)

undefined8 * FUN_143709e90(undefined8 *param_1)

{
  FUN_143709dd0();
  *param_1 = UnitTest::InterfaceUnregistered0::vftable;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 143709ec0 FUN_143709ec0 body=49 status=ok
// SIG undefined FUN_143709ec0(void)

undefined8 * FUN_143709ec0(undefined8 *param_1)

{
  FUN_143709e90();
  *param_1 = UnitTest::InterfaceUnregistered1::vftable;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  return param_1;
}



// FUNCTION 143709f00 FUN_143709f00 body=203 status=ok
// SIG undefined FUN_143709f00(void)

undefined4 * FUN_143709f00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  
  puVar3 = (undefined4 *)0x0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  iVar1 = param_2[10];
  lVar6 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,4,local_res8);
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  param_1[10] = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  param_1[0xb] = iVar5;
  if (0 < iVar1) {
    lVar4 = *(longlong *)(param_2 + 8) - (longlong)puVar3;
    do {
      *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 143709fd0 FUN_143709fd0 body=29 status=ok
// SIG undefined FUN_143709fd0(void)

undefined8 * FUN_143709fd0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = TypeRegistryTest::Ref::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 143709ff0 FUN_143709ff0 body=29 status=ok
// SIG undefined FUN_143709ff0(void)

undefined8 * FUN_143709ff0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = UnitTest::UrlObject::Shape::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 14370a010 FUN_14370a010 body=39 status=ok
// SIG undefined FUN_14370a010(void)

undefined8 * FUN_14370a010(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = UnitTest::UrlObject::TestGraph::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14370a040 FUN_14370a040 body=33 status=ok
// SIG undefined FUN_14370a040(void)

undefined8 * FUN_14370a040(undefined8 *param_1)

{
  FUN_143709fd0();
  *param_1 = TypeRegistryTest::TypedefChild::vftable;
  return param_1;
}



// FUNCTION 14370a070 FUN_14370a070 body=73 status=ok
// SIG undefined FUN_14370a070(void)

undefined8 * FUN_14370a070(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = castTest::WithInterfaces::vftable;
  param_1[3] = castTest::WithInterfaces::vftable;
  param_1[4] = castTest::WithInterfaces::vftable;
  param_1[5] = castTest::WithInterfaces::vftable;
  param_1[6] = castTest::WithInterfaces::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 14370a0c0 FUN_14370a0c0 body=74 status=ok
// SIG undefined FUN_14370a0c0(void)

undefined8 * FUN_14370a0c0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143734b10(param_1 + 2);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143734b10(param_1 + 6);
  return param_1;
}



// FUNCTION 14370a110 FUN_14370a110 body=41 status=ok
// SIG undefined FUN_14370a110(void)

undefined8 * FUN_14370a110(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkRefCountedProperties::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 14370a140 FUN_14370a140 body=208 status=ok
// SIG undefined FUN_14370a140(void)

void FUN_14370a140(longlong param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 0x58);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),4,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  thunk_FUN_143734820(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14370a210 FUN_14370a210 body=153 status=ok
// SIG undefined FUN_14370a210(void)

void FUN_14370a210(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + 0x10 + (longlong)iVar2 * 0x30;
    do {
      FUN_1437484d0(lVar3);
      lVar3 = lVar3 + -0x30;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x30,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14370a2b0 FUN_14370a2b0 body=152 status=ok
// SIG undefined FUN_14370a2b0(void)

void FUN_14370a2b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x48) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 8;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_143716650(param_1 + 0x20);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14370a350 FUN_14370a350 body=156 status=ok
// SIG undefined FUN_14370a350(void)

void FUN_14370a350(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  *param_1 = hctClothSetup20151Options::vftable;
  if (0 < *(int *)(param_1 + 4)) {
    lVar3 = 0;
    do {
      FUN_14370c150(*(undefined8 *)(param_1[3] + lVar3));
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14370a3f0 FUN_14370a3f0 body=143 status=ok
// SIG undefined FUN_14370a3f0(void)

void FUN_14370a3f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18);
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
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



// FUNCTION 14370a480 FUN_14370a480 body=499 status=ok
// SIG undefined FUN_14370a480(void)

void FUN_14370a480(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x104)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xf8),4,*(uint *)(param_1 + 0x104) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0xf0) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 0x28 + 0x20);
    do {
      if (*plVar3 != 0) {
        FUN_14370c150();
      }
      plVar3 = plVar3 + -5;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xf4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xe8),0x28,*(uint *)(param_1 + 0xf4) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xe4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xd8),4,*(uint *)(param_1 + 0xe4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xd4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 200),4,*(uint *)(param_1 + 0xd4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb8),1,*(uint *)(param_1 + 0xc4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  FUN_14370a770(param_1 + 0x70);
  FUN_14370a680(param_1 + 0x28);
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14370a680 FUN_14370a680 body=228 status=ok
// SIG undefined FUN_14370a680(void)

void FUN_14370a680(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar2 * 0x10;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
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



// FUNCTION 14370a770 FUN_14370a770 body=146 status=ok
// SIG undefined FUN_14370a770(void)

void FUN_14370a770(longlong param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
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



// FUNCTION 14370a810 FUN_14370a810 body=357 status=ok
// SIG undefined FUN_14370a810(void)

longlong * FUN_14370a810(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  iVar1 = (int)param_2[1];
  lVar7 = *param_2;
  uVar2 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar2,param_1,iVar1,0x30);
  }
  iVar4 = ((int)param_1[1] - iVar1) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar1 * 0x30 + *param_1 + 0x10 + (longlong)iVar4 * 0x30;
    do {
      FUN_1437484d0(lVar5);
      lVar5 = lVar5 + -0x30;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = iVar1;
  if ((int)param_1[1] < iVar1) {
    iVar4 = (int)param_1[1];
  }
  FUN_1437098b0(*param_1,lVar7,iVar4);
  lVar5 = (longlong)(iVar1 - iVar4);
  if (0 < iVar1 - iVar4) {
    lVar6 = lVar7 + 0x10 + (longlong)iVar4 * 0x30;
    lVar7 = *param_1 - lVar7;
    do {
      puVar3 = (undefined8 *)(lVar7 + -0x10 + lVar6);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar6 + -0x10);
        *(undefined8 *)(lVar7 + lVar6) = 0;
        *(undefined1 *)(lVar7 + 8 + lVar6) = 0;
        uVar2 = FUN_1437488d0(lVar6,local_48);
        FUN_143748760((undefined8 *)(lVar7 + lVar6),uVar2);
        if ((local_38 & 1) != 0) {
          FUN_143733a60(local_38 & 0xfffffffffffffffe);
        }
      }
      lVar6 = lVar6 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14370a980 FUN_14370a980 body=201 status=ok
// SIG undefined FUN_14370a980(void)

longlong * FUN_14370a980(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar7 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar7,param_1,iVar2,0x10);
  }
  iVar10 = iVar2;
  if ((int)param_1[1] < iVar2) {
    iVar10 = (int)param_1[1];
  }
  FUN_1436ee950(*param_1,lVar3,iVar10);
  puVar8 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x10);
  lVar9 = (longlong)(iVar2 - iVar10);
  if (0 < iVar2 - iVar10) {
    lVar11 = (longlong)iVar10 * 0x10 - (longlong)puVar8;
    do {
      if (puVar8 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(lVar11 + lVar3 + (longlong)puVar8);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar8 = *puVar1;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14370aa50 FUN_14370aa50 body=143 status=ok
// SIG undefined FUN_14370aa50(void)

undefined4 * FUN_14370aa50(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = FUN_143703a50();
  if ((int)(param_1[0xb] & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 8,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  param_1[10] = iVar1;
  return param_1;
}



// FUNCTION 14370aae0 FUN_14370aae0 body=319 status=ok
// SIG undefined FUN_14370aae0(void)

longlong * FUN_14370aae0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (int)param_2[1];
  lVar7 = *param_2;
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1,iVar1,0x18);
  }
  iVar2 = ((int)param_1[1] - iVar1) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *param_1 + (longlong)iVar1 * 0x18 + (lVar6 * 3 + 1) * 8;
    do {
      if (*(longlong *)(lVar4 + 8) != 0) {
        FUN_14370c150();
      }
      FUN_143716650(lVar4);
      FUN_143716650(lVar4 + -8);
      lVar4 = lVar4 + -0x18;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar2 = iVar1;
  if ((int)param_1[1] < iVar1) {
    iVar2 = (int)param_1[1];
  }
  FUN_143709af0(*param_1,lVar7,iVar2);
  lVar6 = (longlong)(iVar1 - iVar2);
  if (0 < iVar1 - iVar2) {
    plVar5 = (longlong *)(lVar7 + 0x10 + (longlong)iVar2 * 0x18);
    lVar7 = *param_1 - lVar7;
    do {
      lVar4 = lVar7 + -0x10 + (longlong)plVar5;
      if (lVar4 != 0) {
        FUN_1437165f0(lVar4,plVar5 + -2);
        FUN_1437165f0(lVar7 + -8 + (longlong)plVar5,plVar5 + -1);
        lVar4 = *plVar5;
        *(longlong *)(lVar7 + (longlong)plVar5) = lVar4;
        if (lVar4 != 0) {
          FUN_14370c030();
        }
      }
      plVar5 = plVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  return param_1;
}



// FUNCTION 14370ac20 FUN_14370ac20 body=9 status=ok
// SIG undefined FUN_14370ac20(void)

void FUN_14370ac20(longlong param_1)

{
  FUN_14370acc0(param_1 + -8);
  return;
}



// FUNCTION 14370ac30 FUN_14370ac30 body=139 status=ok
// SIG undefined FUN_14370ac30(void)

longlong FUN_14370ac30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
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



// FUNCTION 14370acc0 FUN_14370acc0 body=110 status=ok
// SIG undefined FUN_14370acc0(void)

undefined8 * FUN_14370acc0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = castTest::InterfaceOtherBase::vftable;
  *param_1 = castTest::InterfaceBase::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14370ad30 FUN_14370ad30 body=99 status=ok
// SIG undefined FUN_14370ad30(void)

undefined8 * FUN_14370ad30(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = castTest::InterfaceBase::vftable;
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



// FUNCTION 14370ada0 FUN_14370ada0 body=99 status=ok
// SIG undefined FUN_14370ada0(void)

undefined8 * FUN_14370ada0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = castTest::InterfaceOtherBase::vftable;
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



// FUNCTION 14370ae10 FUN_14370ae10 body=179 status=ok
// SIG undefined FUN_14370ae10(void)

longlong FUN_14370ae10(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x38;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14370aed0 FUN_14370aed0 body=139 status=ok
// SIG undefined FUN_14370aed0(void)

longlong FUN_14370aed0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143762d70();
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



// FUNCTION 14370af60 FUN_14370af60 body=180 status=ok
// SIG undefined FUN_14370af60(void)

undefined8 FUN_14370af60(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,4);
  }
  lVar6 = *param_1 + (longlong)param_2 * 4;
  FUN_143732890(lVar6 + 4,lVar6,(longlong)((int)lVar3 - param_2) << 2);
  *(undefined4 *)(*param_1 + (longlong)param_2 * 4) = *param_3;
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14370b1e0(param_1);
  return 1;
}



// FUNCTION 14370b020 FUN_14370b020 body=185 status=ok
// SIG undefined FUN_14370b020(void)

undefined8 FUN_14370b020(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,8);
  }
  lVar7 = *param_1 + (longlong)param_2 * 8;
  FUN_143732890(lVar7 + 8,lVar7,(longlong)((int)lVar3 - param_2) << 3);
  puVar6 = (undefined8 *)(*param_1 + (longlong)param_2 * 8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_3;
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14370b290(param_1);
  return 1;
}



// FUNCTION 14370b0e0 FUN_14370b0e0 body=243 status=ok
// SIG undefined FUN_14370b0e0(void)

undefined8 FUN_14370b0e0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x30);
  }
  lVar6 = *param_1 + (longlong)param_2 * 0x30;
  FUN_143732890(lVar6 + 0x30,lVar6,(longlong)((int)lVar3 - param_2) * 0x30);
  puVar7 = (undefined8 *)((longlong)param_2 * 0x30 + *param_1);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = *param_3;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    uVar5 = FUN_1437488d0(param_3 + 2,local_28);
    FUN_143748760(puVar7 + 2,uVar5);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14370b340(param_1);
  return 1;
}



// FUNCTION 14370b1e0 FUN_14370b1e0 body=167 status=ok
// SIG undefined FUN_14370b1e0(void)

void FUN_14370b1e0(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 4;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14370b290 FUN_14370b290 body=167 status=ok
// SIG undefined FUN_14370b290(void)

void FUN_14370b290(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14370b340 FUN_14370b340 body=219 status=ok
// SIG undefined FUN_14370b340(void)

void FUN_14370b340(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar8 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      uVar4 = (uint)*(undefined8 *)(lVar9 + *param_1) & 0xfffffffe;
      uVar7 = uVar4 * -0x61c8864f;
      iVar5 = (int)((ulonglong)*(undefined8 *)(lVar9 + *param_1) >> 0x20);
      uVar6 = iVar5 * -0x61c8864f;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar4 * -0x4f000000;
      uVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar5 * -0x4f000000;
      lVar1 = param_1[2];
      uVar4 = uVar7 + uVar4 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar4;
      uVar2 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
      puVar3 = (uint *)(lVar1 + uVar2 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar2 * 8)) {
        do {
          uVar2 = ((longlong)puVar3 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar3 = (uint *)(lVar1 + uVar2 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar2 * 8));
      }
      puVar3[1] = uVar8;
      lVar9 = lVar9 + 0x30;
      uVar8 = uVar8 + 1;
      *puVar3 = uVar4;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14370b420 FUN_14370b420 body=8 status=ok
// SIG undefined FUN_14370b420(void)

char * FUN_14370b420(void)

{
  return "Interface1.func2";
}



// FUNCTION 14370b430 FUN_14370b430 body=18 status=ok
// SIG undefined FUN_14370b430(void)

undefined8 * FUN_14370b430(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e2890;
  return param_2;
}



// FUNCTION 14370b450 FUN_14370b450 body=18 status=ok
// SIG undefined FUN_14370b450(void)

undefined8 * FUN_14370b450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7030;
  return param_2;
}



// FUNCTION 14370b464 FUN_14370b464 body=9 status=ok
// SIG undefined FUN_14370b464(void)

void FUN_14370b464(longlong param_1)

{
  FUN_14370b450(param_1 + -8);
  return;
}



// FUNCTION 14370b470 FUN_14370b470 body=18 status=ok
// SIG undefined FUN_14370b470(void)

undefined8 * FUN_14370b470(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7db0;
  return param_2;
}



// FUNCTION 14370b490 FUN_14370b490 body=18 status=ok
// SIG undefined FUN_14370b490(void)

undefined8 * FUN_14370b490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e88f0;
  return param_2;
}



// FUNCTION 14370b4b0 FUN_14370b4b0 body=18 status=ok
// SIG undefined FUN_14370b4b0(void)

undefined8 * FUN_14370b4b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e5710;
  return param_2;
}



// FUNCTION 14370b4d0 FUN_14370b4d0 body=18 status=ok
// SIG undefined FUN_14370b4d0(void)

undefined8 * FUN_14370b4d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e6430;
  return param_2;
}



// FUNCTION 14370b4f0 FUN_14370b4f0 body=18 status=ok
// SIG undefined FUN_14370b4f0(void)

undefined8 * FUN_14370b4f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ddfc0;
  return param_2;
}



// FUNCTION 14370b510 FUN_14370b510 body=18 status=ok
// SIG undefined FUN_14370b510(void)

undefined8 * FUN_14370b510(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e0190;
  return param_2;
}



// FUNCTION 14370b530 FUN_14370b530 body=18 status=ok
// SIG undefined FUN_14370b530(void)

undefined8 * FUN_14370b530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e2f00;
  return param_2;
}



// FUNCTION 14370b550 FUN_14370b550 body=18 status=ok
// SIG undefined FUN_14370b550(void)

undefined8 * FUN_14370b550(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e7860;
  return param_2;
}



// FUNCTION 14370b570 FUN_14370b570 body=18 status=ok
// SIG undefined FUN_14370b570(void)

undefined8 * FUN_14370b570(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467deec0;
  return param_2;
}



// FUNCTION 14370b590 FUN_14370b590 body=18 status=ok
// SIG undefined FUN_14370b590(void)

undefined8 * FUN_14370b590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e2d30;
  return param_2;
}



// FUNCTION 14370b5b0 FUN_14370b5b0 body=18 status=ok
// SIG undefined FUN_14370b5b0(void)

undefined8 * FUN_14370b5b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467df4a0;
  return param_2;
}



// FUNCTION 14370b5d0 FUN_14370b5d0 body=18 status=ok
// SIG undefined FUN_14370b5d0(void)

undefined8 * FUN_14370b5d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e5860;
  return param_2;
}



// FUNCTION 14370b5f0 FUN_14370b5f0 body=18 status=ok
// SIG undefined FUN_14370b5f0(void)

undefined8 * FUN_14370b5f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e1090;
  return param_2;
}



// FUNCTION 14370b610 FUN_14370b610 body=18 status=ok
// SIG undefined FUN_14370b610(void)

undefined8 * FUN_14370b610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e26b0;
  return param_2;
}



// FUNCTION 14370b630 FUN_14370b630 body=18 status=ok
// SIG undefined FUN_14370b630(void)

undefined8 * FUN_14370b630(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e86a0;
  return param_2;
}



// FUNCTION 14370b650 FUN_14370b650 body=18 status=ok
// SIG undefined FUN_14370b650(void)

undefined8 * FUN_14370b650(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467e4490;
  return param_2;
}



// FUNCTION 14370b670 FUN_14370b670 body=135 status=ok
// SIG undefined FUN_14370b670(void)

undefined1 FUN_14370b670(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x28);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x38);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x48);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x58);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x68);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0x78);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0x88);
              if (cVar1 != '\0') {
                cVar1 = FUN_14370b790(param_1 + 0x98);
                if (cVar1 != '\0') {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14370b700 FUN_14370b700 body=131 status=ok
// SIG undefined FUN_14370b700(void)

undefined1 FUN_14370b700(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704060(param_1 + 0x28);
  if (cVar1 != '\0') {
    cVar1 = FUN_143704060(param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xb8);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 200);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0xd8);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0xe8);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0xf8);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14370b790 FUN_14370b790 body=51 status=ok
// SIG undefined FUN_14370b790(void)

ulonglong FUN_14370b790(longlong *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  bool bVar2;
  
  if (-1 < (int)param_1[1]) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    in_RAX = (ulonglong)uVar1;
    if ((int)param_1[1] <= (int)uVar1) {
      if (uVar1 == 0) {
        bVar2 = *param_1 == 0;
      }
      else {
        bVar2 = *param_1 != 0;
      }
      in_RAX = 0;
      if (bVar2) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14370b7e0 FUN_14370b7e0 body=15 status=ok
// SIG undefined FUN_14370b7e0(void)

void FUN_14370b7e0(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145b7e990,(int)*param_1);
  return;
}



// FUNCTION 14370b7f0 FUN_14370b7f0 body=15 status=ok
// SIG undefined FUN_14370b7f0(void)

void FUN_14370b7f0(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145b7ef00,(int)*param_1);
  return;
}



// FUNCTION 14370b800 FUN_14370b800 body=15 status=ok
// SIG undefined FUN_14370b800(void)

void FUN_14370b800(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145b7a330,*param_1);
  return;
}



// FUNCTION 14370b820 FUN_14370b820 body=97 status=ok
// SIG undefined FUN_14370b820(void)

undefined8 FUN_14370b820(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 4;
  lVar1 = *param_1 + (longlong)param_2 * 4;
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < lVar5) {
    do {
      uVar3 = (int)uVar4 + 4;
      *(undefined4 *)(uVar2 + lVar1) = *(undefined4 *)(uVar2 + 4 + lVar1);
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14370b1e0(param_1);
  return 1;
}



// FUNCTION 14370b890 FUN_14370b890 body=97 status=ok
// SIG undefined FUN_14370b890(void)

undefined8 FUN_14370b890(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 8;
  lVar1 = *param_1 + (longlong)param_2 * 8;
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < lVar5) {
    do {
      uVar3 = (int)uVar4 + 4;
      *(undefined4 *)(uVar2 + lVar1) = *(undefined4 *)(uVar2 + 8 + lVar1);
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14370b290(param_1);
  return 1;
}



// FUNCTION 14370b900 FUN_14370b900 body=139 status=ok
// SIG undefined FUN_14370b900(void)

undefined8 FUN_14370b900(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1437484d0(*param_1 + 0x10 + (longlong)param_2 * 0x30);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x30;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x30;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x30 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14370b340(param_1);
  return 1;
}



// FUNCTION 14370b990 FUN_14370b990 body=137 status=ok
// SIG undefined FUN_14370b990(void)

void FUN_14370b990(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  while (param_2 != 0) {
    uVar1 = (uint)param_2;
    uVar2 = param_2 >> 0x10;
    param_2 = param_2 >> 0x20;
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1,4);
    }
    *(uint *)(*param_1 + (longlong)(int)param_1[1] * 4) = (int)uVar2 << 0x10 | uVar1 & 0xffff;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}



// FUNCTION 14370ba20 FUN_14370ba20 body=179 status=ok
// SIG undefined FUN_14370ba20(void)

void FUN_14370ba20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar3 = *param_2;
  uVar2 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x74) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar2,param_1 + 0x68,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x68),uVar3,iVar1);
  *(int *)(param_1 + 0x70) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_2 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_2 + 0xc)) {
    FUN_143702e10(uVar3,*param_2,4,*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff);
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14370bae0 FUN_14370bae0 body=434 status=ok
// SIG undefined FUN_14370bae0(void)

void FUN_14370bae0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res10 [2];
  
  iVar3 = (int)param_2[1];
  plVar2 = (longlong *)(param_1 + 0x98);
  lVar4 = *param_2;
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xa4) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar6,plVar2,iVar3,0x10);
  }
  iVar5 = (*(int *)(param_1 + 0xa0) - iVar3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    puVar9 = (uint *)((longlong)iVar3 * 0x10 + *plVar2 + 0xc + lVar12 * 0x10);
    do {
      uVar6 = FUN_143703a50();
      puVar9[-1] = 0;
      if (-1 < (int)*puVar9) {
        FUN_143702e10(uVar6,*(undefined8 *)(puVar9 + -3),4,*puVar9 & 0x3fffffff);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + -4;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  iVar5 = iVar3;
  if (*(int *)(param_1 + 0xa0) < iVar3) {
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  FUN_143709a40(*plVar2,lVar4,iVar5);
  lVar12 = *plVar2 + (longlong)iVar5 * 0x10;
  lVar11 = (longlong)(iVar3 - iVar5);
  if (0 < iVar3 - iVar5) {
    piVar10 = (int *)(lVar12 + 8);
    lVar4 = ((longlong)iVar5 * 0x10 - lVar12) + lVar4;
    do {
      piVar1 = piVar10 + -2;
      if (piVar1 != (int *)0x0) {
        piVar10[1] = -0x80000000;
        piVar1[0] = 0;
        piVar1[1] = 0;
        *piVar10 = 0;
        iVar5 = *(int *)((longlong)piVar10 + lVar4);
        lVar12 = (longlong)iVar5;
        local_res10[0] = iVar5;
        uVar6 = FUN_143703a50();
        iVar8 = local_res10[0];
        if (local_res10[0] == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)FUN_143702d60(uVar6,4,local_res10);
        }
        *(undefined4 **)piVar1 = puVar7;
        *piVar10 = iVar8;
        iVar8 = -0x80000000;
        if (local_res10[0] != 0) {
          iVar8 = local_res10[0];
        }
        piVar10[1] = iVar8;
        if (0 < iVar5) {
          lVar13 = *(longlong *)((longlong)piVar10 + lVar4 + -8) - (longlong)puVar7;
          do {
            *puVar7 = *(undefined4 *)(lVar13 + (longlong)puVar7);
            puVar7 = puVar7 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      piVar10 = piVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(int *)(param_1 + 0xa0) = iVar3;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}



// FUNCTION 14370bca0 FUN_14370bca0 body=320 status=ok
// SIG undefined FUN_14370bca0(void)

void FUN_14370bca0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar2 = (int)param_2[1];
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar3 = *param_2;
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,plVar1,iVar2,0x30);
  }
  iVar4 = (*(int *)(param_1 + 0x88) - iVar2) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar7 = (uint *)((longlong)iVar2 * 0x30 + *plVar1 + 0x2c + lVar8 * 0x30);
    do {
      uVar5 = FUN_143703a50();
      puVar7[-1] = 0;
      if (-1 < (int)*puVar7) {
        FUN_143702e10(uVar5,*(undefined8 *)(puVar7 + -3),4,*puVar7 & 0x3fffffff);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + -0xc;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar4 = iVar2;
  if (*(int *)(param_1 + 0x88) < iVar2) {
    iVar4 = *(int *)(param_1 + 0x88);
  }
  FUN_143709920(*plVar1,lVar3,iVar4);
  lVar8 = *plVar1 + (longlong)iVar4 * 0x30;
  if (0 < iVar2 - iVar4) {
    lVar6 = (longlong)iVar4 * 0x30 - lVar8;
    uVar9 = (ulonglong)(uint)(iVar2 - iVar4);
    do {
      if (lVar8 != 0) {
        FUN_143709f00(lVar8,lVar3 + lVar6 + lVar8);
      }
      lVar8 = lVar8 + 0x30;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *(int *)(param_1 + 0x88) = iVar2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}



// FUNCTION 14370bde0 FUN_14370bde0 body=18 status=ok
// SIG undefined FUN_14370bde0(void)

void FUN_14370bde0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014370bded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14370be00 FUN_14370be00 body=151 status=ok
// SIG undefined FUN_14370be00(void)

longlong FUN_14370be00(longlong param_1,uint param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_14370c000(param_1);
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



// FUNCTION 14370beb0 FUN_14370beb0 body=120 status=ok
// SIG undefined FUN_14370beb0(void)

undefined8 FUN_14370beb0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x50);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14370bf80(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14370bf30 FUN_14370bf30 body=75 status=ok
// SIG undefined FUN_14370bf30(void)

undefined8 FUN_14370bf30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14370c030(lVar1);
  }
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_14370c150(lVar1);
  }
  return 0;
}



// FUNCTION 14370bf80 FUN_14370bf80 body=98 status=ok
// SIG undefined FUN_14370bf80(void)

undefined8 * FUN_14370bf80(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkReferencedObjectLock::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x8000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xfffffff1;
  FUN_14370d870(param_1 + 5,4000);
  FUN_143763000((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 14370bff0 FUN_14370bff0 body=11 status=ok
// SIG undefined FUN_14370bff0(void)

void FUN_14370bff0(undefined8 *param_1)

{
  *param_1 = hkBaseObject::vftable;
  return;
}



// FUNCTION 14370c000 FUN_14370c000 body=41 status=ok
// SIG undefined FUN_14370c000(void)

void FUN_14370c000(undefined8 *param_1)

{
  *param_1 = hkReferencedObject::vftable;
  thunk_FUN_143718350(param_1 + 1);
  FUN_14370bff0(param_1);
  return;
}



// FUNCTION 14370c030 FUN_14370c030 body=87 status=ok
// SIG undefined FUN_14370c030(void)

void FUN_14370c030(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(short *)(param_1 + 0x10) != 0) {
    LOCK();
    bVar4 = *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x10);
    if (bVar4) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10000;
    }
    UNLOCK();
    uVar2 = 0;
    while (!bVar4) {
      for (iVar3 = 1 << ((byte)uVar2 & 0x1f); 0 < iVar3; iVar3 = iVar3 + -1) {
      }
      uVar1 = uVar2 + 1;
      if (7 < uVar2) {
        uVar1 = uVar2;
      }
      LOCK();
      bVar4 = *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x10);
      if (bVar4) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10000;
      }
      UNLOCK();
      uVar2 = uVar1;
    }
  }
  return;
}



// FUNCTION 14370c090 FUN_14370c090 body=97 status=ok
// SIG undefined FUN_14370c090(void)

ulonglong FUN_14370c090(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  bool bVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = 0;
  while( true ) {
    if ((uVar2 & 0xffff0000) == 0) {
      return in_RAX & 0xffffffffffffff00;
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x10);
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *(uint *)(param_1 + 0x10) = uVar2 + 0x10000;
      uVar1 = uVar2;
    }
    UNLOCK();
    if (bVar5) break;
    for (iVar4 = 1 << ((byte)uVar3 & 0x1f); 0 < iVar4; iVar4 = iVar4 + -1) {
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar1 = uVar3 + 1;
    if (7 < uVar3) {
      uVar1 = uVar3;
    }
    in_RAX = (ulonglong)uVar1;
    uVar3 = uVar1;
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 14370c100 FUN_14370c100 body=65 status=ok
// SIG undefined FUN_14370c100(void)

void FUN_14370c100(undefined8 *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = (ulonglong)param_2;
    do {
      FUN_14370c030(*param_1);
      param_1 = (undefined8 *)((longlong)param_1 + (longlong)param_3);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14370c150 FUN_14370c150 body=106 status=ok
// SIG undefined FUN_14370c150(void)

void FUN_14370c150(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if ((short)param_1[2] != 0) {
    uVar1 = *(uint *)(param_1 + 2) - 0x10000;
    LOCK();
    bVar5 = *(uint *)(param_1 + 2) == *(uint *)(param_1 + 2);
    if (bVar5) {
      *(uint *)(param_1 + 2) = uVar1;
    }
    UNLOCK();
    uVar3 = 0;
    while (!bVar5) {
      for (iVar4 = 1 << ((byte)uVar3 & 0x1f); 0 < iVar4; iVar4 = iVar4 + -1) {
      }
      uVar2 = uVar3 + 1;
      if (7 < uVar3) {
        uVar2 = uVar3;
      }
      uVar1 = *(uint *)(param_1 + 2) - 0x10000;
      LOCK();
      bVar5 = *(uint *)(param_1 + 2) == *(uint *)(param_1 + 2);
      if (bVar5) {
        *(uint *)(param_1 + 2) = uVar1;
      }
      UNLOCK();
      uVar3 = uVar2;
    }
    if ((uVar1 & 0xffff0000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014370c1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14370c1c0 FUN_14370c1c0 body=65 status=ok
// SIG undefined FUN_14370c1c0(void)

void FUN_14370c1c0(undefined8 *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = (ulonglong)param_2;
    do {
      FUN_14370c150(*param_1);
      param_1 = (undefined8 *)((longlong)param_1 + (longlong)param_3);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14370c210 FUN_14370c210 body=242 status=ok
// SIG undefined FUN_14370c210(void)

void FUN_14370c210(longlong *param_1,undefined8 *param_2,int param_3,void *param_4,uint param_5)

{
  undefined8 uVar1;
  int local_res10 [2];
  
  if (0x3fffffff < (int)param_5) {
    FUN_143732400(0,"Container\\Array\\hkArrayUtil.cpp",0x61,"Invalid requestedCapacity {}",
                  &DAT_145b74460,&param_5,0);
  }
  if ((param_4 == (void *)0x0) || ((int)param_5 <= *(int *)(param_2 + 1))) {
    local_res10[0] = param_3 * param_5;
    uVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,*param_2,*(int *)((longlong)param_2 + 0xc) * param_3,local_res10);
    *param_2 = uVar1;
    param_5 = local_res10[0] / param_3;
  }
  else {
    _guard_xfg_dispatch_icall_nop
              (param_4,(void *)*param_2,(longlong)(*(int *)(param_2 + 1) * param_3));
    (**(code **)(*param_1 + 0x20))
              (param_1,*param_2,(*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) * param_3);
    param_5 = param_5 | 0x80000000;
    *param_2 = param_4;
  }
  *(uint *)((longlong)param_2 + 0xc) = param_5;
  return;
}



// FUNCTION 14370c310 FUN_14370c310 body=331 status=ok
// SIG undefined FUN_14370c310(void)

undefined8 FUN_14370c310(longlong *param_1,undefined8 *param_2,int param_3,int param_4)

{
  void *_Dst;
  undefined8 uVar1;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res10[0] = (int)((longlong)param_3 * (longlong)param_4);
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((param_3 < 0) || (0x7fffffff < (ulonglong)((longlong)param_3 * (longlong)param_4))) {
    FUN_143732400(0,"Container\\Array\\hkArrayUtil.cpp",0x17,"Array size overflow {}*{}",
                  &DAT_145b75a88,local_res18,local_res20,0);
  }
  if ((local_res18[0] < (int)(*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) ||
     (0x3fffffff < local_res18[0])) {
    FUN_143732400(0,"Container\\Array\\hkArrayUtil.cpp",0x1e,"Invalid numElem {}",&DAT_145b74460,
                  local_res18,0);
  }
  if ((int)*(uint *)((longlong)param_2 + 0xc) < 0) {
    _Dst = (void *)(**(code **)(*param_1 + 0x18))(param_1,local_res10);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)*param_2,(longlong)(*(int *)(param_2 + 1) * local_res20[0]));
    }
  }
  else {
    _Dst = (void *)(**(code **)(*param_1 + 0x28))
                             (param_1,*param_2,
                              (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) * local_res20[0],
                              local_res10);
  }
  *param_2 = _Dst;
  if (_Dst == (void *)0x0) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = local_res10[0] / local_res20[0];
  }
  *(int *)((longlong)param_2 + 0xc) = local_res10[0];
  uVar1 = 0x80040200;
  if (_Dst != (void *)0x0) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14370c460 FUN_14370c460 body=329 status=ok
// SIG undefined FUN_14370c460(void)

void FUN_14370c460(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  void *_Dst;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  if (*(int *)(param_2 + 1) == 0) {
    local_res10[0] = 1;
  }
  else {
    local_res10[0] = *(int *)(param_2 + 1) * 2;
    if (0x3fffffff < local_res10[0]) {
      FUN_143732400(0,"Container\\Array\\hkArrayUtil.cpp",0x42,"Invalid numElem {}",&DAT_145b74460,
                    local_res10,0);
    }
  }
  local_res20[0] = (int)((longlong)local_res10[0] * (longlong)local_res18[0]);
  if ((local_res10[0] < 0) ||
     (0x7fffffff < (ulonglong)((longlong)local_res10[0] * (longlong)local_res18[0]))) {
    FUN_143732400(0,"Container\\Array\\hkArrayUtil.cpp",0x48,"Array size overflow {}*{}",
                  &DAT_145b75a88,local_res10,local_res18,0);
  }
  if ((int)*(uint *)((longlong)param_2 + 0xc) < 0) {
    _Dst = (void *)(**(code **)(*param_1 + 0x18))(param_1,local_res20);
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)*param_2,(longlong)(local_res18[0] * *(int *)(param_2 + 1)));
    *param_2 = _Dst;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,*param_2,
                       (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) * local_res18[0],
                       local_res20);
    *param_2 = uVar1;
  }
  *(int *)((longlong)param_2 + 0xc) = local_res20[0] / local_res18[0];
  return;
}



// FUNCTION 14370c5b0 atoi body=12 status=ok
// SIG int atoi(char * _Str)

int __cdecl hkString::atoi(char *_Str)

{
  ulong uVar1;
  int in_EDX;
  
                    /* WARNING: Could not recover jumptable at 0x00014370c5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = strtoul(_Str,(char **)0x0,in_EDX);
  return uVar1;
}



// FUNCTION 14370c5c0 FUN_14370c5c0 body=19 status=ok
// SIG undefined FUN_14370c5c0(void)

void FUN_14370c5c0(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014370c5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _strtoi64_l(param_1,0,param_2,DAT_146b81918);
  return;
}



// FUNCTION 14370c5e0 FUN_14370c5e0 body=19 status=ok
// SIG undefined FUN_14370c5e0(void)

void FUN_14370c5e0(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014370c5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _strtoui64_l(param_1,0,param_2,DAT_146b81918);
  return;
}



// FUNCTION 14370c600 FUN_14370c600 body=122 status=ok
// SIG undefined FUN_14370c600(void)

undefined8 FUN_14370c600(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = FUN_14370c910();
  iVar2 = FUN_14370c910(param_2);
  if (iVar1 < iVar2) {
    return 0;
  }
  if (0 < iVar2) {
    pcVar3 = param_2;
    do {
      if (pcVar3[((longlong)(iVar1 - iVar2) - (longlong)param_2) + param_1] != *pcVar3) {
        return 0;
      }
      pcVar3 = pcVar3 + 1;
    } while ((longlong)pcVar3 - (longlong)param_2 < (longlong)iVar2);
  }
  return 1;
}



// FUNCTION 14370c680 FUN_14370c680 body=84 status=ok
// SIG undefined FUN_14370c680(void)

ulonglong FUN_14370c680(longlong param_1,char param_2,int param_3,int param_4)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  lVar1 = 0;
  if (0 < param_3) {
    do {
      if (*(char *)(lVar1 + param_1) == '\0') {
        return 0xffffffff;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (longlong)uVar3);
  }
  if ((longlong)uVar3 < (longlong)param_4) {
    pcVar2 = (char *)(uVar3 + param_1);
    do {
      if (*pcVar2 == '\0') {
        return 0xffffffff;
      }
      if (*pcVar2 == param_2) {
        return uVar3 & 0xffffffff;
      }
      pcVar2 = pcVar2 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while ((longlong)pcVar2 - param_1 < (longlong)param_4);
  }
  return 0xffffffff;
}



// FUNCTION 14370c6e0 isNullOrEmpty body=16 status=ok
// SIG undefined isNullOrEmpty(void)

undefined1 hkString::isNullOrEmpty(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14370c6f0 FUN_14370c6f0 body=8 status=ok
// SIG undefined FUN_14370c6f0(void)

void FUN_14370c6f0(void *param_1,void *param_2,uint param_3)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 14370c700 FUN_14370c700 body=8 status=ok
// SIG undefined FUN_14370c700(void)

void FUN_14370c700(void *param_1,void *param_2,uint param_3)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 14370c710 strNcmp body=10 status=ok
// SIG undefined strNcmp(void)

void hkString::strNcmp(void *param_1,void *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014370c713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 14370c720 FUN_14370c720 body=8 status=ok
// SIG undefined FUN_14370c720(void)

void FUN_14370c720(void *param_1,int param_2,uint param_3)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 14370c730 AssertFailed body=29 status=ok
// SIG undefined AssertFailed(void)

void FDebug::AssertFailed(void)

{
  FUN_14370ca10();
  return;
}



// FUNCTION 14370c750 FUN_14370c750 body=94 status=ok
// SIG undefined FUN_14370c750(void)

int FUN_14370c750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf
                    (*puVar2 | 1,param_1,0xffffffffffffffff,param_2,DAT_146b81918,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 14370c7b0 FUN_14370c7b0 body=122 status=ok
// SIG undefined FUN_14370c7b0(void)

undefined8 FUN_14370c7b0(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  param_1 = param_1 - (longlong)param_2;
  for (; param_2[param_1] != '\0'; param_2 = param_2 + 1) {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar1 = FUN_14370ca00();
    cVar2 = FUN_14370ca00(cVar2);
    if (cVar1 < cVar2) goto LAB_14370c811;
    if (cVar2 < cVar1) {
      return 1;
    }
  }
  if (*param_2 == '\0') {
    uVar3 = 0;
  }
  else {
LAB_14370c811:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14370c830 strchr body=7 status=ok
// SIG char * strchr(char * _Str, int _Val)

char * __cdecl strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014370c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}



// FUNCTION 14370c840 strCmp body=27 status=ok
// SIG undefined strCmp(void)

uint hkString::strCmp(byte *param_1,longlong param_2)

{
  byte bVar1;
  
  param_2 = param_2 - (longlong)param_1;
  do {
    bVar1 = *param_1;
    if (bVar1 != param_1[param_2]) {
      return -(uint)(bVar1 < param_1[param_2]) | 1;
    }
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return 0;
}



// FUNCTION 14370c860 strCpy body=10 status=ok
// SIG undefined strCpy(void)

void hkString::strCpy(char *param_1,int param_2,char *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014370c863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strcpy_s(param_1,(longlong)param_2,param_3);
  return;
}



// FUNCTION 14370c870 FUN_14370c870 body=30 status=ok
// SIG undefined FUN_14370c870(void)

void FUN_14370c870(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  FUN_14370c890(param_1,uVar1);
  return;
}



// FUNCTION 14370c890 FUN_14370c890 body=76 status=ok
// SIG undefined FUN_14370c890(void)

undefined8 FUN_14370c890(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14370c910();
  uVar2 = FUN_143703990(param_2,iVar1 + 1);
  FUN_14370c700(uVar2,param_1,iVar1 + 1);
  return uVar2;
}



// FUNCTION 14370c8e0 FUN_14370c8e0 body=30 status=ok
// SIG undefined FUN_14370c8e0(void)

void FUN_14370c8e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(param_1,uVar1);
  return;
}



// FUNCTION 14370c900 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1437039c0(param_2,param_1);
  return;
}



// FUNCTION 14370c910 FUN_14370c910 body=14 status=ok
// SIG undefined FUN_14370c910(void)

void FUN_14370c910(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  return;
}



// FUNCTION 14370c920 strNcmp body=10 status=ok
// SIG undefined strNcmp(void)

void hkString::strNcmp(char *param_1,char *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014370c923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strncmp(param_1,param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 14370c930 strNcpy body=19 status=ok
// SIG undefined strNcpy(void)

void hkString::strNcpy(char *param_1,int param_2,char *param_3,uint param_4)

{
  if (0 < (int)param_4) {
                    /* WARNING: Could not recover jumptable at 0x00014370c93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    strncpy_s(param_1,(longlong)param_2,param_3,(ulonglong)param_4);
    return;
  }
  return;
}



// FUNCTION 14370c950 FUN_14370c950 body=43 status=ok
// SIG undefined FUN_14370c950(void)

void FUN_14370c950(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  FUN_14370c980(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14370c980 FUN_14370c980 body=112 status=ok
// SIG undefined FUN_14370c980(void)

longlong FUN_14370c980(longlong param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = uVar3;
  do {
    if ((longlong)param_2 <= (longlong)uVar3) break;
    pcVar1 = (char *)(uVar3 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar3 = uVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = (int)uVar5;
  lVar4 = FUN_143703990(param_3,iVar2 + 1);
  hkString::strNcpy(lVar4,iVar2 + 1,param_1,uVar5);
  *(undefined1 *)(iVar2 + lVar4) = 0;
  return lVar4;
}



// FUNCTION 14370c9f0 strstr body=7 status=ok
// SIG char * strstr(char * _Str, char * _SubStr)

char * __cdecl strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014370c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(_Str,_SubStr);
  return pcVar1;
}



// FUNCTION 14370ca00 FUN_14370ca00 body=15 status=ok
// SIG undefined FUN_14370ca00(void)

uint FUN_14370ca00(uint param_1)

{
  if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
    return param_1 + 0x20;
  }
  return param_1 & 0xff;
}



// FUNCTION 14370ca10 FUN_14370ca10 body=108 status=ok
// SIG undefined FUN_14370ca10(void)

int FUN_14370ca10(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,(longlong)param_2,(longlong)param_3,param_4,0,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 14370ca80 FUN_14370ca80 body=79 status=ok
// SIG undefined FUN_14370ca80(void)

undefined8 FUN_14370ca80(undefined8 param_1,undefined8 param_2,char param_3)

{
  hkBaseSystem::InitNode::internalConstruct
            (param_1,param_2,FUN_14370cce0,FUN_14370cf70,&DAT_146b81920,0);
  if (param_3 != '\0') {
    FUN_14370d090(param_1);
  }
  return param_1;
}



// FUNCTION 14370cad0 FUN_14370cad0 body=139 status=ok
// SIG undefined FUN_14370cad0(void)

longlong FUN_14370cad0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
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



// FUNCTION 14370cb80 FUN_14370cb80 body=52 status=ok
// SIG undefined FUN_14370cb80(void)

undefined4 * FUN_14370cb80(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18));
    *param_2 = uVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14370cbc0 FUN_14370cbc0 body=287 status=ok
// SIG undefined FUN_14370cbc0(void)

undefined8 FUN_14370cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 local_res20 [8];
  
  if (DAT_146b81929 == '\0') {
    FUN_143763080();
    FUN_14370ce50(param_1);
    uVar2 = FUN_14373b1d0();
    FUN_14370d0c0(uVar2);
    FUN_14370d0c0(&DAT_146b81f70);
    FUN_14370d0c0(&DAT_146b83e58);
    FUN_14370d0c0(&DAT_146b81938);
    uVar2 = FUN_143763030();
    FUN_14370d0c0(uVar2);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0x1ffff;
      *puVar4 = _anon_49391F34::ErrorReport::vftable;
      puVar4[3] = param_2;
      puVar4[4] = param_3;
    }
    puVar1 = DAT_146b81930;
    if ((puVar4 != DAT_146b81930) && (puVar1 = puVar4, DAT_146b81930 != (undefined8 *)0x0)) {
      FUN_14370c150();
    }
    DAT_146b81930 = puVar1;
    puVar5 = &DAT_146b81960;
    do {
      FUN_14370cb80(puVar5,local_res20);
      puVar5 = *(undefined **)(puVar5 + 0x20);
    } while (puVar5 != (undefined *)0x0);
    DAT_146b81929 = '\x01';
  }
  return 0;
}



// FUNCTION 14370cce0 FUN_14370cce0 body=358 status=ok
// SIG undefined FUN_14370cce0(void)

undefined8 FUN_14370cce0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  lVar5 = *param_1;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (lVar5 != 0) {
    do {
      piVar3 = (int *)FUN_14370cb80(lVar5,local_res8);
      if (*piVar3 < 0) {
        if (local_20 == (local_1c & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,&local_28,8);
        }
        *(longlong *)(local_28 + (longlong)(int)local_20 * 8) = lVar5;
        local_20 = local_20 + 1;
        lVar5 = *(longlong *)(lVar5 + 0x20);
        *(undefined8 *)(*param_1 + 0x20) = 0;
        *param_1 = lVar5;
      }
      else {
        param_1 = (longlong *)(lVar5 + 0x20);
        lVar5 = *(longlong *)(lVar5 + 0x20);
      }
      uVar2 = local_20;
    } while (lVar5 != 0);
    while (uVar2 != 0) {
      uVar4 = uVar2 - 1;
      lVar5 = (longlong)(int)uVar4;
      if (-1 < (int)uVar4) {
        do {
          lVar1 = *(longlong *)(local_28 + lVar5 * 8);
          piVar3 = (int *)FUN_14370cb80(lVar1,local_res8);
          if (-1 < *piVar3) {
            *param_1 = lVar1;
            param_1 = (longlong *)(lVar1 + 0x20);
            local_20 = local_20 - 1;
            if (local_20 != uVar4) {
              *(undefined8 *)(local_28 + lVar5 * 8) =
                   *(undefined8 *)(local_28 + (longlong)(int)local_20 * 8);
            }
          }
          uVar4 = uVar4 - 1;
          lVar5 = lVar5 + -1;
          uVar2 = local_20;
        } while (-1 < lVar5);
      }
    }
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_28,8,local_1c & 0x3fffffff);
  }
  return 0;
}



// FUNCTION 14370ce50 FUN_14370ce50 body=42 status=ok
// SIG undefined FUN_14370ce50(void)

undefined8 FUN_14370ce50(undefined8 param_1)

{
  TlsGetValue(DAT_146b7bf70);
  FRunnableThread::SetTls(param_1);
  FUN_14370d250();
  return 0;
}



// FUNCTION 14370ce80 internalConstruct body=54 status=ok
// SIG undefined internalConstruct(void)

void hkBaseSystem::InitNode::internalConstruct
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,char param_6)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  if (param_6 != '\0') {
    param_1[4] = DAT_146b81920;
    DAT_146b81920 = param_1;
  }
  return;
}



// FUNCTION 14370cec0 isInitialized body=13 status=ok
// SIG undefined isInitialized(void)

undefined1 * hkBaseSystem::isInitialized(undefined1 *param_1)

{
  *param_1 = DAT_146b81929;
  return param_1;
}



// FUNCTION 14370ced0 FUN_14370ced0 body=52 status=ok
// SIG undefined FUN_14370ced0(void)

undefined4 * FUN_14370ced0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
    *param_2 = uVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14370cf10 FUN_14370cf10 body=84 status=ok
// SIG undefined FUN_14370cf10(void)

undefined8 FUN_14370cf10(void)

{
  undefined *local_res8 [4];
  
  if (DAT_146b81929 != '\0') {
    local_res8[0] = &DAT_146b81960;
    FUN_14370cf70(local_res8);
    if ((DAT_146b83e80 != '\0') && (PTR_StartProfileThreadUsage_1467f5f68 != (undefined *)0x0)) {
      (*(code *)PTR_StartProfileThreadUsage_1467f5f68)();
      DAT_146b83e80 = '\0';
    }
    FUN_14370d050();
    DAT_146b81929 = '\0';
  }
  return 0;
}



// FUNCTION 14370cf70 FUN_14370cf70 body=210 status=ok
// SIG undefined FUN_14370cf70(void)

undefined8 FUN_14370cf70(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  longlong local_18;
  uint local_10;
  uint local_c;
  
  lVar2 = *param_1;
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    uVar1 = FUN_143703a50();
    if (local_10 == (local_c & 0x3fffffff)) {
      FUN_14370c460(uVar1,&local_18,8);
    }
    *(longlong *)(local_18 + (longlong)(int)local_10 * 8) = lVar2;
    local_10 = local_10 + 1;
  }
  lVar2 = (longlong)(int)(local_10 - 1);
  if (-1 < (int)(local_10 - 1)) {
    do {
      FUN_14370ced0(*(undefined8 *)(local_18 + lVar2 * 8),local_res8);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  uVar1 = FUN_143703a50();
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar1,local_18,8,local_c & 0x3fffffff);
  }
  return 0;
}



// FUNCTION 14370d050 FUN_14370d050 body=60 status=ok
// SIG undefined FUN_14370d050(void)

undefined8 FUN_14370d050(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d3d0(pvVar1);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 != (LPVOID)0x0) {
    FRunnableThread::SetTls(0);
  }
  return 0;
}



// FUNCTION 14370d090 FUN_14370d090 body=41 status=ok
// SIG undefined FUN_14370d090(void)

void FUN_14370d090(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_146b81980;
  if (DAT_146b81980 != 0) {
    do {
      lVar2 = lVar1;
      lVar1 = *(longlong *)(lVar2 + 0x20);
    } while (lVar1 != 0);
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return;
  }
  DAT_146b81980 = param_1;
  return;
}



// FUNCTION 14370d0c0 FUN_14370d0c0 body=62 status=ok
// SIG undefined FUN_14370d0c0(void)

void FUN_14370d0c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_146b81920 != param_1) && (lVar2 = DAT_146b81920, DAT_146b81920 != 0)) {
    while (lVar1 = *(longlong *)(lVar2 + 0x20), lVar1 != param_1) {
      lVar2 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    *(longlong *)(param_1 + 0x20) = DAT_146b81920;
    DAT_146b81920 = param_1;
  }
  return;
}



// FUNCTION 14370d100 thunk_FUN_14370d1d0 body=5 status=ok
// SIG undefined thunk_FUN_14370d1d0(void)

void thunk_FUN_14370d1d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((char)param_1[4] != '\0')) {
    lVar2 = param_1[2];
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    FUN_143702e10(*(undefined8 *)((longlong)pvVar3 + 0x60),lVar1,1,(int)lVar2 - (int)lVar1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14370d110 FUN_14370d110 body=38 status=ok
// SIG undefined FUN_14370d110(void)

void FUN_14370d110(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 14370d140 FUN_14370d140 body=65 status=ok
// SIG undefined FUN_14370d140(void)

undefined4 FUN_14370d140(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x24) == -1) {
    LOCK();
    UNLOCK();
    iVar2 = DAT_146b81988 + 0x10000;
    *(int *)(param_1 + 0x24) = DAT_146b81988;
    DAT_146b81988 = iVar2;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
    *(undefined8 **)(param_1 + 8) = puVar1 + 2;
    *puVar1 = &DAT_145b417e0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x24);
  }
  return *(undefined4 *)(param_1 + 0x24);
}



// FUNCTION 14370d190 FUN_14370d190 body=36 status=ok
// SIG undefined FUN_14370d190(void)

void FUN_14370d190(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar1 + 1) = param_3;
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 14370d1c0 clear body=10 status=ok
// SIG undefined clear(void)

void hkMonitorStream::MultiTimerCommand::clear(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14370d1d0 FUN_14370d1d0 body=118 status=ok
// SIG undefined FUN_14370d1d0(void)

void FUN_14370d1d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((char)param_1[4] != '\0')) {
    lVar2 = param_1[2];
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    FUN_143702e10(*(undefined8 *)((longlong)pvVar3 + 0x60),lVar1,1,(int)lVar2 - (int)lVar1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14370d250 FUN_14370d250 body=125 status=ok
// SIG undefined FUN_14370d250(void)

void FUN_14370d250(void)

{
  LPVOID pvVar1;
  undefined8 *lpTlsValue;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lpTlsValue = (undefined8 *)FUN_143702b60(*(undefined8 *)((longlong)pvVar1 + 0x60),0x30,1);
  if (lpTlsValue != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)lpTlsValue + 0x24) = 0xffffffff;
  }
  TlsSetValue(DAT_146b8198c,lpTlsValue);
  TlsSetValue(DAT_146b81990,(LPVOID)0x0);
  *(undefined1 *)(lpTlsValue + 4) = 0;
  *lpTlsValue = 0;
  lpTlsValue[2] = 0;
  lpTlsValue[1] = 0;
  lpTlsValue[3] = 0;
  *(undefined4 *)((longlong)lpTlsValue + 0x24) = 0xffffffff;
  return;
}



// FUNCTION 14370d2d0 FUN_14370d2d0 body=38 status=ok
// SIG undefined FUN_14370d2d0(void)

void FUN_14370d2d0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)puVar1 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = &DAT_145b8d5e0;
  }
  return;
}



// FUNCTION 14370d300 FUN_14370d300 body=31 status=ok
// SIG undefined FUN_14370d300(void)

void FUN_14370d300(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)puVar1 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 14370d320 FUN_14370d320 body=82 status=ok
// SIG undefined FUN_14370d320(void)

void FUN_14370d320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (DAT_146b81998 != (code *)0x0) {
    (*DAT_146b81998)(param_2 + 2,DAT_146b819a8);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = (longlong)plVar1 + 0xfU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, plVar1 != (longlong *)0x0)) {
    *plVar1 = param_2;
  }
  return;
}



// FUNCTION 14370d380 FUN_14370d380 body=71 status=ok
// SIG undefined FUN_14370d380(void)

void FUN_14370d380(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar5 = (longlong)puVar1 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar5 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar5, puVar1 != (undefined8 *)0x0)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)puVar1 = *param_3;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
    puVar1[2] = *(undefined8 *)(param_3 + 4);
    *puVar1 = param_2;
  }
  if (DAT_146b819a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014370d3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b819a0)(DAT_146b819a8);
    return;
  }
  return;
}



// FUNCTION 14370d3d0 FUN_14370d3d0 body=116 status=ok
// SIG undefined FUN_14370d3d0(void)

void FUN_14370d3d0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  FUN_14370d1d0(pvVar1);
  thunk_FUN_14370d1d0(pvVar1);
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  FUN_143702c60(*(undefined8 *)((longlong)pvVar2 + 0x60),pvVar1,0x30);
  TlsSetValue(DAT_146b8198c,(LPVOID)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014370d43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_146b81990,(LPVOID)0x0);
  return;
}



// FUNCTION 14370d450 FUN_14370d450 body=139 status=ok
// SIG undefined FUN_14370d450(void)

void FUN_14370d450(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[1] = *param_1;
  iVar2 = DAT_1467effc8;
  LOCK();
  UNLOCK();
  iVar1 = DAT_1467effc8 + 1;
  *(int *)(param_1 + 5) = DAT_1467effc8;
  DAT_1467effc8 = iVar1;
  if (iVar2 == 0) {
    LOCK();
    UNLOCK();
    iVar2 = DAT_1467effc8 + 1;
    *(int *)(param_1 + 5) = DAT_1467effc8;
    DAT_1467effc8 = iVar2;
  }
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d110(pvVar3,"FiFrameId");
  }
  plVar4 = (longlong *)FUN_14370d950();
  lVar5 = (**(code **)(*plVar4 + 0x78))(plVar4);
  if (lVar5 != 0) {
    pvVar3 = TlsGetValue(DAT_146b8198c);
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d190(pvVar3,"MfUsing a debug/slow memory system.",0);
      return;
    }
  }
  return;
}



// FUNCTION 14370d4e0 FUN_14370d4e0 body=198 status=ok
// SIG undefined FUN_14370d4e0(void)

void FUN_14370d4e0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  longlong lVar4;
  int local_res10 [6];
  
  if ((longlong)param_2 != param_1[2] - *param_1) {
    local_res10[0] = param_2;
    FUN_14370d1d0();
    if (0 < local_res10[0]) {
      *(undefined1 *)(param_1 + 4) = 1;
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      lVar4 = FUN_143702d60(*(undefined8 *)((longlong)pvVar3 + 0x60),1,local_res10);
      *param_1 = lVar4;
      param_1[1] = lVar4;
      param_1[2] = lVar4 + local_res10[0];
      param_1[3] = lVar4 + local_res10[0] + -0x20;
      iVar2 = DAT_1467effc8;
      LOCK();
      UNLOCK();
      iVar1 = DAT_1467effc8 + 1;
      *(int *)(param_1 + 5) = DAT_1467effc8;
      DAT_1467effc8 = iVar1;
      if (iVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar2 = DAT_1467effc8 + 1;
        *(int *)(param_1 + 5) = DAT_1467effc8;
        DAT_1467effc8 = iVar2;
      }
      pvVar3 = TlsGetValue(DAT_146b8198c);
      if (pvVar3 != (LPVOID)0x0) {
        FUN_14370d110(pvVar3,"FiFrameId");
      }
    }
  }
  return;
}



// FUNCTION 14370d5b0 setTime body=14 status=ok
// SIG undefined setTime(void)

void hkMonitorStream::TimerCommand::setTime(longlong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  *(ulonglong *)(param_1 + 8) =
       CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
  return;
}



// FUNCTION 14370d5c0 FUN_14370d5c0 body=95 status=ok
// SIG undefined FUN_14370d5c0(void)

void FUN_14370d5c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (DAT_146b81998 != (code *)0x0) {
    (*DAT_146b81998)(param_2 + 2,DAT_146b819a8);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar3 = (longlong)plVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar3, plVar1 != (longlong *)0x0)) {
    *plVar1 = param_2;
    uVar2 = rdtsc();
    plVar1[1] = CONCAT44((int)(uVar3 >> 0x20),(int)uVar2) | uVar2 & 0xffffffff00000000;
  }
  return;
}



// FUNCTION 14370d620 FUN_14370d620 body=139 status=ok
// SIG undefined FUN_14370d620(void)

void FUN_14370d620(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (DAT_146b81998 != (code *)0x0) {
    (*DAT_146b81998)(param_2 + 2,DAT_146b819a8);
    if (DAT_146b81998 != (code *)0x0) {
      (*DAT_146b81998)(param_3 + 2,DAT_146b819a8);
    }
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = (longlong)plVar1 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, plVar1 != (longlong *)0x0)) {
    *plVar1 = param_2;
    plVar1[2] = param_3;
    hkMonitorStream::TimerCommand::setTime();
  }
  return;
}



// FUNCTION 14370d6b0 FUN_14370d6b0 body=159 status=ok
// SIG undefined FUN_14370d6b0(void)

void FUN_14370d6b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (DAT_146b81998 != (code *)0x0) {
    (*DAT_146b81998)(param_2,DAT_146b819a8);
  }
  iVar2 = FUN_14370c910(param_2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  iVar2 = iVar2 + 1;
  uVar3 = (longlong)puVar1 + (longlong)iVar2 + 0x1f & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_3;
    *(short *)(puVar1 + 2) = (short)iVar2;
    hkMonitorStream::TimerCommand::setTime(puVar1);
    FGenericPlatformString::Memcpy(puVar1 + 3,param_2,(longlong)iVar2);
  }
  return;
}



// FUNCTION 14370d750 FUN_14370d750 body=66 status=ok
// SIG undefined FUN_14370d750(void)

void FUN_14370d750(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = (longlong)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    uVar2 = rdtsc();
    puVar1[1] = CONCAT44((int)(uVar3 >> 0x20),(int)uVar2) | uVar2 & 0xffffffff00000000;
  }
  if (DAT_146b819a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014370d78e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b819a0)(DAT_146b819a8);
    return;
  }
  return;
}



// FUNCTION 14370d7a0 FUN_14370d7a0 body=94 status=ok
// SIG undefined FUN_14370d7a0(void)

void FUN_14370d7a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    hkMonitorStream::TimerCommand::setTime();
  }
  if (DAT_146b819a0 != (code *)0x0) {
    (*DAT_146b819a0)(DAT_146b819a8);
    if (DAT_146b819a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014370d7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_146b819a0)(DAT_146b819a8);
      return;
    }
  }
  return;
}


