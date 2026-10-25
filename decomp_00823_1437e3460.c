// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437e3460 FUN_1437e3460 body=79 status=ok
// SIG undefined FUN_1437e3460(void)

undefined1 FUN_1437e3460(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437e8900();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x80);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x90);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437e34b0 FUN_1437e34b0 body=273 status=ok
// SIG undefined FUN_1437e34b0(void)

void FUN_1437e34b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res20 [2];
  
  if (0 < param_4) {
    puVar12 = (undefined2 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar14 = (longlong)param_4;
    do {
      plVar1 = (longlong *)(puVar12 + -8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        *(undefined4 *)(puVar12 + -4) = 0;
        *(undefined4 *)(puVar12 + -2) = 0x80000000;
        iVar4 = *(int *)(param_2 + -8 + (longlong)puVar12);
        lVar13 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar9 = FUN_143703a50();
        iVar8 = local_res20[0];
        lVar10 = 0;
        if (local_res20[0] != 0) {
          lVar10 = FUN_143702d60(uVar9,0x20,local_res20);
        }
        *plVar1 = lVar10;
        *(int *)(puVar12 + -4) = iVar8;
        iVar8 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar8 = local_res20[0];
        }
        *(int *)(puVar12 + -2) = iVar8;
        if (0 < iVar4) {
          puVar11 = (undefined8 *)(lVar10 + 0x10);
          lVar10 = *(longlong *)(param_2 + -0x10 + (longlong)puVar12) - lVar10;
          do {
            puVar3 = (undefined4 *)(lVar10 + -0x10 + (longlong)puVar11);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(undefined4 *)(puVar11 + -2) = *puVar3;
            *(undefined4 *)((longlong)puVar11 + -0xc) = uVar5;
            *(undefined4 *)(puVar11 + -1) = uVar6;
            *(undefined4 *)((longlong)puVar11 + -4) = uVar7;
            puVar2 = (undefined8 *)(lVar10 + (longlong)puVar11);
            uVar9 = puVar2[1];
            *puVar11 = *puVar2;
            puVar11[1] = uVar9;
            puVar11 = puVar11 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        *puVar12 = *(undefined2 *)(param_2 + (longlong)puVar12);
      }
      puVar12 = puVar12 + 0xc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1437e35d0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MergingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e7e20(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e3610 FUN_1437e3610 body=18 status=ok
// SIG undefined FUN_1437e3610(void)

undefined8 * FUN_1437e3610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146808730;
  return param_2;
}



// FUNCTION 1437e3630 FUN_1437e3630 body=203 status=ok
// SIG undefined FUN_1437e3630(void)

longlong FUN_1437e3630(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),6,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
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



// FUNCTION 1437e3700 FUN_1437e3700 body=264 status=ok
// SIG undefined FUN_1437e3700(void)

void FUN_1437e3700(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (uint *)(param_1 + 0x24);
    lVar3 = (longlong)param_3;
    do {
      if (puVar2 + -9 != (uint *)0x0) {
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0x1ffff;
        *(undefined ***)(puVar2 + -9) = hkcdDynamicAabbTree::Impl::vftable;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        uVar1 = FUN_143703a50();
        puVar2[-1] = 0;
        if (-1 < (int)*puVar2) {
          FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),0x30,*puVar2 & 0x3fffffff);
        }
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        uVar1 = FUN_143703a50();
        puVar2[-1] = 0;
        if (-1 < (int)*puVar2) {
          FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),0x30,*puVar2 & 0x3fffffff);
        }
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[3] = 0;
      }
      puVar2 = puVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e3810 FUN_1437e3810 body=18 status=ok
// SIG undefined FUN_1437e3810(void)

undefined8 * FUN_1437e3810(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468087a0;
  return param_2;
}



// FUNCTION 1437e3830 FUN_1437e3830 body=9 status=ok
// SIG undefined FUN_1437e3830(void)

void FUN_1437e3830(longlong param_1)

{
  BuildSettings::IsPromotedBuild(param_1 + 0x20);
  return;
}



// FUNCTION 1437e3840 FUN_1437e3840 body=203 status=ok
// SIG undefined FUN_1437e3840(void)

longlong FUN_1437e3840(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x30,*(uint *)(param_1 + 0x24) & 0x3fffffff)
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
        sVar3 = 0x40;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 1437e3910 FUN_1437e3910 body=271 status=ok
// SIG undefined FUN_1437e3910(void)

void FUN_1437e3910(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  
  if (0 < param_4) {
    puVar11 = (undefined4 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      puVar2 = (undefined8 *)(puVar11 + -4);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0x80000000;
        iVar3 = *(int *)(param_2 + -8 + (longlong)puVar11);
        lVar12 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar7 = FUN_143703a50();
        iVar9 = local_res20[0];
        puVar8 = (undefined4 *)0x0;
        if (local_res20[0] != 0) {
          puVar8 = (undefined4 *)FUN_143702d60(uVar7,0x20,local_res20);
        }
        *puVar2 = puVar8;
        puVar11[-2] = iVar9;
        iVar9 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar9 = local_res20[0];
        }
        puVar11[-1] = iVar9;
        if (0 < iVar3) {
          lVar10 = *(longlong *)(param_2 + -0x10 + (longlong)puVar11) - (longlong)puVar8;
          do {
            puVar1 = (undefined4 *)(lVar10 + (longlong)puVar8);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar8 = *puVar1;
            puVar8[1] = uVar4;
            puVar8[2] = uVar5;
            puVar8[3] = uVar6;
            puVar2 = (undefined8 *)(lVar10 + 0x10 + (longlong)puVar8);
            uVar7 = puVar2[1];
            *(undefined8 *)(puVar8 + 4) = *puVar2;
            *(undefined8 *)(puVar8 + 6) = uVar7;
            puVar8 = puVar8 + 8;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        *puVar11 = *(undefined4 *)(param_2 + (longlong)puVar11);
      }
      puVar11 = puVar11 + 6;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1437e3a20 FUN_1437e3a20 body=74 status=ok
// SIG undefined FUN_1437e3a20(void)

void FUN_1437e3a20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e3a80(param_1,local_res18);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e3a80 FUN_1437e3a80 body=181 status=ok
// SIG undefined FUN_1437e3a80(void)

undefined8 * FUN_1437e3a80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdDynamicAabbTree::Impl::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x30,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x30,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1437e3b40 FUN_1437e3b40 body=81 status=ok
// SIG undefined FUN_1437e3b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437e3b40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkcdStaticAabbTree::Impl::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = uRam00000001467f08d8;
  param_1[6] = _DAT_1467f08d0;
  param_1[7] = uVar1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 6) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x34) ^ 0x80000000;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 7) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x3c) ^ 0x80000000;
  return param_1;
}



// FUNCTION 1437e3ba0 FUN_1437e3ba0 body=168 status=ok
// SIG undefined FUN_1437e3ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437e3ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = uRam00000001467f08d8;
  param_1[2] = _DAT_1467f08d0;
  param_1[3] = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 2) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x14) ^ 0x80000000;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 3) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x1c) ^ 0x80000000;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  return param_1;
}



// FUNCTION 1437e3c50 FUN_1437e3c50 body=31 status=ok
// SIG undefined FUN_1437e3c50(void)

undefined8 * FUN_1437e3c50(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkcdDynamicAabbTree::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1437e3c70 FUN_1437e3c70 body=139 status=ok
// SIG undefined FUN_1437e3c70(void)

longlong FUN_1437e3c70(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437e5840();
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



// FUNCTION 1437e3d00 FUN_1437e3d00 body=18 status=ok
// SIG undefined FUN_1437e3d00(void)

undefined8 * FUN_1437e3d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146808500;
  return param_2;
}



// FUNCTION 1437e3d20 FUN_1437e3d20 body=18 status=ok
// SIG undefined FUN_1437e3d20(void)

undefined8 * FUN_1437e3d20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468086d0;
  return param_2;
}



// FUNCTION 1437e3d40 FUN_1437e3d40 body=384 status=ok
// SIG undefined FUN_1437e3d40(void)

undefined8 *
FUN_1437e3d40(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  int local_50;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_50 = 0x40;
  local_48[0] = param_4;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_58 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_58 + 0x100U)) {
    local_58 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_58 + 0x100U;
  }
  local_5c = 0x80000040;
  local_68 = local_58;
  FUN_1437e4b00(param_2,&local_68,local_48);
  iVar2 = local_50;
  lVar1 = local_58;
  if (local_58 == local_68) {
    local_60 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar5,local_68,4,local_5c & 0x3fffffff);
  }
  *param_1 = CONCAT44(uStack_24,local_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return param_1;
}



// FUNCTION 1437e3ec0 FUN_1437e3ec0 body=64 status=ok
// SIG undefined FUN_1437e3ec0(void)

void FUN_1437e3ec0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      uVar2 = ((undefined8 *)(param_2 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_2 + (longlong)puVar3);
      puVar3[1] = uVar2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar3);
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e3f00 FUN_1437e3f00 body=141 status=ok
// SIG undefined FUN_1437e3f00(void)

undefined4 FUN_1437e3f00(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  local_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2];
  fStack_2c = param_2[3];
  auVar2._0_4_ = *param_3 - local_38;
  auVar2._4_4_ = param_3[1] - fStack_34;
  auVar2._8_4_ = param_3[2] - fStack_30;
  local_50 = 0;
  auVar2._12_4_ = fRam00000001467f06fc;
  local_28 = (float)(~-(uint)(auVar2._0_4_ == 0.0) & (uint)auVar2._0_4_);
  fStack_24 = (float)(~-(uint)(auVar2._4_4_ == 0.0) & (uint)auVar2._4_4_);
  fStack_20 = (float)(~-(uint)(auVar2._8_4_ == 0.0) & (uint)auVar2._8_4_);
  fStack_1c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar1._4_4_ = fStack_24;
  auVar1._0_4_ = local_28;
  auVar1._8_4_ = fStack_20;
  auVar1._12_4_ = fStack_1c;
  auVar3 = rcpps(auVar2,auVar1);
  local_18._0_4_ =
       ~-(uint)(local_28 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_28) * auVar3._0_4_);
  local_18._4_4_ =
       ~-(uint)(fStack_24 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_24) * auVar3._4_4_);
  local_18._8_4_ =
       ~-(uint)(fStack_20 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_20) * auVar3._8_4_);
  local_18._12_4_ =
       ~-(uint)(fStack_1c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_1c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_20 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_24 == 0.0),-(uint)(local_28 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_1c == 0.0) & 0x7f7fffee;
  local_18 = local_18 | auVar3;
  local_58 = param_4;
  FUN_1437e4390(local_48,param_1,&local_38,&local_58);
  return local_50;
}



// FUNCTION 1437e3f90 FUN_1437e3f90 body=165 status=ok
// SIG undefined FUN_1437e3f90(void)

undefined4
FUN_1437e3f90(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  local_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2];
  fStack_2c = param_2[3];
  auVar2._0_4_ = *param_3 - local_38;
  auVar2._4_4_ = param_3[1] - fStack_34;
  auVar2._8_4_ = param_3[2] - fStack_30;
  local_58 = param_5;
  local_50 = 0;
  auVar2._12_4_ = fRam00000001467f06fc;
  local_28 = (float)(~-(uint)(auVar2._0_4_ == 0.0) & (uint)auVar2._0_4_);
  fStack_24 = (float)(~-(uint)(auVar2._4_4_ == 0.0) & (uint)auVar2._4_4_);
  fStack_20 = (float)(~-(uint)(auVar2._8_4_ == 0.0) & (uint)auVar2._8_4_);
  fStack_1c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar1._4_4_ = fStack_24;
  auVar1._0_4_ = local_28;
  auVar1._8_4_ = fStack_20;
  auVar1._12_4_ = fStack_1c;
  auVar3 = rcpps(auVar2,auVar1);
  local_18._0_4_ =
       ~-(uint)(local_28 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_28) * auVar3._0_4_);
  local_18._4_4_ =
       ~-(uint)(fStack_24 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_24) * auVar3._4_4_);
  local_18._8_4_ =
       ~-(uint)(fStack_20 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_20) * auVar3._8_4_);
  local_18._12_4_ =
       ~-(uint)(fStack_1c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_1c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_20 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_24 == 0.0),-(uint)(local_28 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_1c == 0.0) & 0x7f7fffee;
  local_18 = local_18 | auVar3;
  FUN_1437e4520(local_48,param_1,&local_38,local_18._0_8_,&local_58);
  return local_50;
}



// FUNCTION 1437e4040 FUN_1437e4040 body=109 status=ok
// SIG undefined FUN_1437e4040(void)

undefined4
FUN_1437e4040(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  local_58 = *param_3 * *param_3;
  fStack_54 = param_3[1] * param_3[1];
  fStack_50 = param_3[2] * param_3[2];
  fStack_4c = param_3[3] * param_3[3];
  local_38[0] = 0xffffffff;
  fStack_1c = fStack_4c;
  local_18 = param_4;
  FUN_1437e3d40(local_48,param_1,param_2,local_38,&local_58);
  *param_5 = CONCAT44(uStack_24,local_28);
  param_5[1] = CONCAT44(fStack_1c,uStack_20);
  return local_38[0];
}



// FUNCTION 1437e40b0 FUN_1437e40b0 body=358 status=ok
// SIG undefined FUN_1437e40b0(void)

void FUN_1437e40b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  longlong local_48;
  int local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = &local_res8;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_58 = 0;
  local_30 = 1;
  local_50 = 0;
  local_4c = 0x80000000;
  local_40 = 0x40;
  local_res8 = param_3;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_48 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_48 + 0x100U)) {
    local_48 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_48 + 0x100U;
  }
  local_4c = 0x80000040;
  local_58 = local_48;
  FUN_1437e48b0(param_1,&local_58,&local_38);
  iVar2 = local_40;
  lVar1 = local_48;
  if (local_48 == local_58) {
    local_50 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar5,local_58,4,local_4c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437e4220 FUN_1437e4220 body=363 status=ok
// SIG undefined FUN_1437e4220(void)

undefined4 FUN_1437e4220(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  longlong local_48;
  int local_40;
  undefined8 *local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_60 = local_res8;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_38[0] = &local_68;
  local_res8[0] = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_40 = 0x40;
  local_68 = param_3;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_48 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_48 + 0x100U)) {
    local_48 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_48 + 0x100U;
  }
  local_4c = 0x80000040;
  local_58 = local_48;
  FUN_1437e46c0(param_1,&local_58,local_38);
  iVar2 = local_40;
  lVar1 = local_48;
  if (local_48 == local_58) {
    local_50 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar5,local_58,4,local_4c & 0x3fffffff);
  }
  return local_res8[0];
}



// FUNCTION 1437e4390 FUN_1437e4390 body=387 status=ok
// SIG undefined FUN_1437e4390(void)

undefined4 *
FUN_1437e4390(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58 [2];
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
  undefined4 local_18;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = *(undefined4 *)(param_3 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_30 = *(undefined4 *)(param_3 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_28 = *(undefined4 *)(param_3 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_20 = *(undefined4 *)(param_3 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_18 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_60 = 0x40;
  local_58[0] = param_4;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_68 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_68 + 0x100U)) {
    local_68 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_68 + 0x100U;
  }
  local_6c = 0x80000040;
  local_78 = local_68;
  FUN_1437e4ea0(param_2,&local_78,local_58);
  iVar2 = local_60;
  lVar1 = local_68;
  if (local_68 == local_78) {
    local_70 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar5,local_78,4,local_6c & 0x3fffffff);
  }
  *param_1 = uStack_2c;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_2c;
  param_1[3] = uStack_2c;
  return param_1;
}



// FUNCTION 1437e4520 FUN_1437e4520 body=403 status=ok
// SIG undefined FUN_1437e4520(void)

undefined4 *
FUN_1437e4520(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  int local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
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
  undefined4 local_18;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = param_3[2];
  uStack_40 = param_3[3];
  local_38 = *(undefined4 *)(param_3 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_30 = *(undefined4 *)(param_3 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_68[0] = param_5;
  local_18 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  local_70 = 0x40;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_78 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_78 + 0x100U)) {
    local_78 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_78 + 0x100U;
  }
  local_7c = 0x80000040;
  local_88 = local_78;
  FUN_1437e52b0(param_2,&local_88,local_68);
  iVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == local_88) {
    local_80 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(uVar5,local_88,4,local_7c & 0x3fffffff);
  }
  *param_1 = uStack_40._4_4_;
  param_1[1] = uStack_40._4_4_;
  param_1[2] = uStack_40._4_4_;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}



// FUNCTION 1437e46c0 FUN_1437e46c0 body=494 status=ok
// SIG undefined FUN_1437e46c0(void)

void FUN_1437e46c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  
  if ((int)param_1[4] != 0) {
    lVar8 = param_2[1];
    pfVar16 = (float *)((ulonglong)*(uint *)(param_1 + 4) * 0x30 + *param_1);
    auVar4._4_4_ = -(uint)(pfVar16[1] <= *(float *)((longlong)param_3 + 0x24) &&
                          *(float *)((longlong)param_3 + 0x14) <= pfVar16[5]);
    auVar4._0_4_ = -(uint)(*pfVar16 <= *(float *)(param_3 + 4) &&
                          *(float *)(param_3 + 2) <= pfVar16[4]);
    auVar4._8_4_ = -(uint)(pfVar16[2] <= *(float *)(param_3 + 5) &&
                          *(float *)(param_3 + 3) <= pfVar16[6]);
    auVar4._12_4_ =
         -(uint)(pfVar16[3] <= *(float *)((longlong)param_3 + 0x2c) &&
                *(float *)((longlong)param_3 + 0x1c) <= pfVar16[7]);
    uVar10 = movmskps(*(uint *)(param_1 + 4),auVar4);
    if (((byte)uVar10 & 7) == 7) {
LAB_1437e4732:
      while( true ) {
        do {
          fVar1 = pfVar16[9];
          if (fVar1 == 0.0) {
            plVar3 = (longlong *)*param_3;
            if (-1 < *(int *)plVar3[1]) {
              lVar9 = *plVar3;
              iVar14 = *(int *)(lVar9 + 8) + 1;
              uVar11 = *(uint *)(lVar9 + 0xc) & 0x3fffffff;
              if ((int)uVar11 < iVar14) {
                iVar7 = uVar11 * 2;
                if (iVar14 < iVar7) {
                  iVar14 = iVar7;
                }
                iVar14 = FUN_14370c310(&PTR_vftable_1467f0638,lVar9,iVar14,4);
                if (iVar14 < 0) {
                  *(undefined4 *)plVar3[1] = 0x80040200;
                  goto LAB_1437e4865;
                }
              }
              plVar3 = (longlong *)*plVar3;
              *(float *)(*plVar3 + (longlong)(int)plVar3[1] * 4) = pfVar16[10];
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            }
            goto LAB_1437e4865;
          }
          fVar2 = pfVar16[10];
          bVar13 = 0;
          pfVar15 = (float *)((ulonglong)(uint)fVar1 * 0x30 + *param_1);
          pfVar17 = (float *)((ulonglong)(uint)fVar2 * 0x30 + *param_1);
          auVar5._4_4_ = -(uint)(pfVar17[1] <= *(float *)((longlong)param_3 + 0x24) &&
                                *(float *)((longlong)param_3 + 0x14) <= pfVar17[5]);
          auVar5._0_4_ = -(uint)(*pfVar17 <= *(float *)(param_3 + 4) &&
                                *(float *)(param_3 + 2) <= pfVar17[4]);
          auVar5._8_4_ = -(uint)(pfVar17[2] <= *(float *)(param_3 + 5) &&
                                *(float *)(param_3 + 3) <= pfVar17[6]);
          auVar5._12_4_ =
               -(uint)(pfVar17[3] <= *(float *)((longlong)param_3 + 0x2c) &&
                      *(float *)((longlong)param_3 + 0x1c) <= pfVar17[7]);
          uVar11 = movmskps(fVar1,auVar5);
          auVar6._4_4_ = -(uint)(pfVar15[1] <= *(float *)((longlong)param_3 + 0x24) &&
                                *(float *)((longlong)param_3 + 0x14) <= pfVar15[5]);
          auVar6._0_4_ = -(uint)(*pfVar15 <= *(float *)(param_3 + 4) &&
                                *(float *)(param_3 + 2) <= pfVar15[4]);
          auVar6._8_4_ = -(uint)(pfVar15[2] <= *(float *)(param_3 + 5) &&
                                *(float *)(param_3 + 3) <= pfVar15[6]);
          auVar6._12_4_ =
               -(uint)(pfVar15[3] <= *(float *)((longlong)param_3 + 0x2c) &&
                      *(float *)((longlong)param_3 + 0x1c) <= pfVar15[7]);
          uVar10 = movmskps(uVar11 & 7,auVar6);
          if ((char)(uVar11 & 7) == '\a') {
            bVar13 = 2;
          }
          bVar13 = bVar13 | ((byte)uVar10 & 7) == 7;
          if (bVar13 == 0) goto LAB_1437e4865;
          pfVar16 = pfVar15;
        } while ((bVar13 == 1) || (pfVar16 = pfVar17, bVar13 == 2));
        if (bVar13 != 3) break;
        uVar12 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar12,param_2,4);
        }
        lVar9 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar9 + 1;
        *(float *)(*param_2 + (longlong)(int)lVar9 * 4) = fVar2;
        pfVar16 = pfVar15;
      }
LAB_1437e4865:
      if ((int)lVar8 < (int)param_2[1]) {
        iVar14 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar14;
        pfVar16 = (float *)((ulonglong)*(uint *)(*param_2 + (longlong)iVar14 * 4) * 0x30 + *param_1)
        ;
        goto LAB_1437e4732;
      }
    }
  }
  return;
}



// FUNCTION 1437e48b0 FUN_1437e48b0 body=589 status=ok
// SIG undefined FUN_1437e48b0(void)

void FUN_1437e48b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float *local_48;
  float local_40;
  
  if ((int)param_1[4] != 0) {
    local_40 = *(float *)(param_1 + 4);
    lVar12 = param_2[1];
    local_48 = (float *)((ulonglong)(uint)local_40 * 0x30 + *param_1);
    local_68 = *local_48;
    fStack_64 = local_48[1];
    fStack_60 = local_48[2];
    fStack_5c = local_48[3];
    local_58 = *(undefined8 *)(local_48 + 4);
    uStack_50 = *(undefined8 *)(local_48 + 6);
    if (*(int *)(param_3 + 1) != 0) {
      auVar3._4_4_ = -(uint)(fStack_64 <= *(float *)((longlong)param_3 + 0x24) &&
                            *(float *)((longlong)param_3 + 0x14) <= local_48[5]);
      auVar3._0_4_ = -(uint)(local_68 <= *(float *)(param_3 + 4) &&
                            *(float *)(param_3 + 2) <= local_48[4]);
      auVar3._8_4_ = -(uint)(fStack_60 <= *(float *)(param_3 + 5) &&
                            *(float *)(param_3 + 3) <= local_48[6]);
      auVar3._12_4_ =
           -(uint)(fStack_5c <= *(float *)((longlong)param_3 + 0x2c) &&
                  *(float *)((longlong)param_3 + 0x1c) <= local_48[7]);
      uVar14 = movmskps(local_40,auVar3);
      uVar17 = (ulonglong)(uVar14 & 7);
      if ((char)(uVar14 & 7) == '\a') {
        do {
          while( true ) {
            uVar14 = (uint)uVar17;
            fVar1 = local_48[9];
            if (fVar1 == 0.0) break;
            fVar2 = local_48[10];
            pfVar20 = (float *)((ulonglong)(uint)fVar1 * 0x30 + *param_1);
            pfVar21 = (float *)((ulonglong)(uint)fVar2 * 0x30 + *param_1);
            fVar6 = *pfVar20;
            fVar7 = pfVar20[1];
            fVar8 = pfVar20[2];
            fVar9 = pfVar20[3];
            uVar10 = *(undefined8 *)(pfVar20 + 4);
            uVar11 = *(undefined8 *)(pfVar20 + 6);
            if (*(int *)(param_3 + 1) == 0) {
LAB_1437e49a2:
              uVar16 = 0;
            }
            else {
              auVar4._4_4_ = -(uint)(fVar7 <= *(float *)((longlong)param_3 + 0x24) &&
                                    *(float *)((longlong)param_3 + 0x14) <= pfVar20[5]);
              auVar4._0_4_ = -(uint)(fVar6 <= *(float *)(param_3 + 4) &&
                                    *(float *)(param_3 + 2) <= pfVar20[4]);
              auVar4._8_4_ = -(uint)(fVar8 <= *(float *)(param_3 + 5) &&
                                    *(float *)(param_3 + 3) <= pfVar20[6]);
              auVar4._12_4_ =
                   -(uint)(fVar9 <= *(float *)((longlong)param_3 + 0x2c) &&
                          *(float *)((longlong)param_3 + 0x1c) <= pfVar20[7]);
              uVar14 = movmskps(uVar14,auVar4);
              uVar14 = uVar14 & 7;
              if ((char)uVar14 != '\a') goto LAB_1437e49a2;
              uVar16 = 1;
            }
            if ((*(int *)(param_3 + 1) == 0) ||
               (auVar5._4_4_ = -(uint)(pfVar21[1] <= *(float *)((longlong)param_3 + 0x24) &&
                                      *(float *)((longlong)param_3 + 0x14) <= pfVar21[5]),
               auVar5._0_4_ = -(uint)(*pfVar21 <= *(float *)(param_3 + 4) &&
                                     *(float *)(param_3 + 2) <= pfVar21[4]),
               auVar5._8_4_ = -(uint)(pfVar21[2] <= *(float *)(param_3 + 5) &&
                                     *(float *)(param_3 + 3) <= pfVar21[6]),
               auVar5._12_4_ =
                    -(uint)(pfVar21[3] <= *(float *)((longlong)param_3 + 0x2c) &&
                           *(float *)((longlong)param_3 + 0x1c) <= pfVar21[7]),
               uVar15 = movmskps(uVar14,auVar5), ((byte)uVar15 & 7) != 7)) {
              uVar14 = 0;
            }
            else {
              uVar14 = 2;
            }
            uVar14 = uVar14 | uVar16;
            if (uVar14 == 0) goto LAB_1437e4a81;
            uVar16 = 0;
            if (uVar14 == 1) {
LAB_1437e4a22:
              uVar17 = (ulonglong)uVar16;
              local_68 = fVar6;
              fStack_64 = fVar7;
              fStack_60 = fVar8;
              fStack_5c = fVar9;
              local_58 = uVar10;
              uStack_50 = uVar11;
              local_48 = pfVar20;
              local_40 = fVar1;
            }
            else {
              if (uVar14 != 2) {
                if (uVar14 != 3) goto LAB_1437e4a81;
                uVar18 = FUN_143703a50();
                if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(uVar18,param_2,4);
                }
                lVar13 = param_2[1];
                uVar16 = (int)lVar13 + 1;
                *(uint *)(param_2 + 1) = uVar16;
                *(float *)(*param_2 + (longlong)(int)lVar13 * 4) = fVar2;
                goto LAB_1437e4a22;
              }
              uVar17 = 0;
              local_68 = *pfVar21;
              fStack_64 = pfVar21[1];
              fStack_60 = pfVar21[2];
              fStack_5c = pfVar21[3];
              local_58 = *(undefined8 *)(pfVar21 + 4);
              uStack_50 = *(undefined8 *)(pfVar21 + 6);
              local_48 = pfVar21;
              local_40 = fVar2;
            }
          }
          if ((*(int *)(param_3 + 1) == 0) ||
             (iVar19 = (**(code **)(**(longlong **)*param_3 + 8))
                                 (*(longlong **)*param_3,local_48[10],&local_68), iVar19 == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = 1;
          }
          *(undefined4 *)(param_3 + 1) = uVar15;
LAB_1437e4a81:
          if ((int)param_2[1] <= (int)lVar12) {
            return;
          }
          iVar19 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar19;
          uVar17 = (ulonglong)*(uint *)(*param_2 + (longlong)iVar19 * 4);
          local_48 = (float *)(uVar17 * 0x30 + *param_1);
          local_68 = *local_48;
          fStack_64 = local_48[1];
          fStack_60 = local_48[2];
          fStack_5c = local_48[3];
          local_58 = *(undefined8 *)(local_48 + 4);
          uStack_50 = *(undefined8 *)(local_48 + 6);
          local_40 = *(float *)(*param_2 + (longlong)iVar19 * 4);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1437e4b00 FUN_1437e4b00 body=923 status=ok
// SIG undefined FUN_1437e4b00(void)

void FUN_1437e4b00(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  float *pfVar12;
  uint uVar13;
  int iVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 (*local_d8) [16];
  uint local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 (*local_98) [16];
  uint local_90 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 (*local_68) [16];
  uint local_60;
  undefined1 local_58 [48];
  uint uVar14;
  
  if ((int)param_1[4] != 0) {
    auVar4 = *(undefined1 (*) [16])(param_3 + 2);
    lVar9 = param_2[1];
    pfVar1 = (float *)(param_3 + 4);
    pauVar2 = (undefined1 (*) [16])(param_3 + 2);
    pauVar17 = (undefined1 (*) [16])((ulonglong)*(uint *)(param_1 + 4) * 0x30 + *param_1);
    auVar20 = *pauVar17;
    auVar5 = pauVar17[1];
    auVar19 = maxps(auVar20,auVar4);
    auVar19 = minps(auVar5,auVar19);
    fVar23 = auVar4._0_4_ - auVar19._0_4_;
    fVar24 = auVar4._4_4_ - auVar19._4_4_;
    fVar25 = auVar4._8_4_ - auVar19._8_4_;
    uVar26 = auVar20._0_4_;
    uVar27 = auVar20._4_4_;
    uVar28 = auVar20._8_4_;
    uVar29 = auVar20._12_4_;
    uVar30 = auVar5._0_4_;
    uVar31 = auVar5._4_4_;
    uVar32 = auVar5._8_4_;
    uVar33 = auVar5._12_4_;
    uVar6 = *(uint *)(param_1 + 4);
    if (fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25 <= *pfVar1) {
LAB_1437e4bb2:
      while( true ) {
        do {
          local_d0 = uVar6;
          local_d8 = pauVar17;
          local_e8 = auVar5;
          local_f8 = auVar20;
          uVar6 = *(uint *)(local_d8[2] + 4);
          auVar4 = *pauVar2;
          if (uVar6 == 0) {
            puVar7 = (undefined4 *)*param_3;
            plVar8 = *(longlong **)(puVar7 + 8);
            if (plVar8 == (longlong *)0x0) {
              auVar20._4_4_ = uVar27;
              auVar20._0_4_ = uVar26;
              auVar20._8_4_ = uVar28;
              auVar20._12_4_ = uVar29;
              auVar20 = maxps(auVar4,auVar20);
              auVar4._4_4_ = uVar31;
              auVar4._0_4_ = uVar30;
              auVar4._8_4_ = uVar32;
              auVar4._12_4_ = uVar33;
              local_c8 = minps(auVar20,auVar4);
              fVar21 = local_c8._0_4_ - *(float *)*pauVar2;
              fVar22 = local_c8._4_4_ - *(float *)((longlong)param_3 + 0x14);
              fVar34 = local_c8._8_4_ - *(float *)(param_3 + 3);
              fVar21 = fVar21 * fVar21;
              fVar22 = fVar22 * fVar22;
              fVar34 = fVar34 * fVar34;
              fVar23 = fVar22 + fVar21 + fVar34;
              fVar24 = fVar22 + fVar21 + fVar34;
              fVar25 = fVar22 + fVar21 + fVar34;
              fVar34 = fVar22 + fVar21 + fVar34;
            }
            else {
              local_c8 = auVar4;
              pfVar12 = (float *)(**(code **)(*plVar8 + 8))
                                           (plVar8,local_58,*(undefined4 *)(local_d8[2] + 8),
                                            local_f8,pauVar2,local_c8,pfVar1);
              fVar23 = *pfVar12;
              fVar24 = pfVar12[1];
              fVar25 = pfVar12[2];
              fVar34 = pfVar12[3];
            }
            if (fVar23 < *pfVar1) {
              *pfVar1 = fVar23;
              *(float *)((longlong)param_3 + 0x24) = fVar24;
              *(float *)(param_3 + 5) = fVar25;
              *(float *)((longlong)param_3 + 0x2c) = fVar34;
              *(undefined1 (*) [16])(puVar7 + 4) = local_c8;
              *puVar7 = *(undefined4 *)(local_d8[2] + 8);
            }
            goto LAB_1437e4e14;
          }
          local_60 = *(uint *)(local_d8[2] + 8);
          local_98 = (undefined1 (*) [16])((ulonglong)uVar6 * 0x30 + *param_1);
          local_68 = (undefined1 (*) [16])((ulonglong)local_60 * 0x30 + *param_1);
          local_b8 = *local_98;
          local_a8 = local_98[1];
          auVar20 = maxps(local_b8,auVar4);
          local_88 = *local_68;
          local_78 = local_68[1];
          auVar20 = minps(local_a8,auVar20);
          fVar23 = auVar4._0_4_ - auVar20._0_4_;
          fVar24 = auVar4._4_4_ - auVar20._4_4_;
          fVar25 = auVar4._8_4_ - auVar20._8_4_;
          fVar34 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
          auVar4 = *pauVar2;
          auVar20 = maxps(local_88,auVar4);
          auVar20 = minps(local_78,auVar20);
          fVar23 = auVar4._0_4_ - auVar20._0_4_;
          fVar24 = auVar4._4_4_ - auVar20._4_4_;
          fVar25 = auVar4._8_4_ - auVar20._8_4_;
          fVar23 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
          uVar14 = (uint)(fVar23 <= *pfVar1);
          uVar13 = -uVar14;
          bVar18 = -(uVar14 != 0) & 2U | fVar34 <= *pfVar1;
          if (bVar18 == 3) {
            uVar13 = (uint)(fVar23 < fVar34);
            *(uint *)(param_3 + 6) = (uint)(fVar23 < fVar34);
          }
          local_90[0] = uVar6;
          if (bVar18 == 0) goto LAB_1437e4e14;
          uVar26 = local_b8._0_4_;
          uVar27 = local_b8._4_4_;
          uVar28 = local_b8._8_4_;
          uVar29 = local_b8._12_4_;
          uVar30 = local_a8._0_4_;
          uVar31 = local_a8._4_4_;
          uVar32 = local_a8._8_4_;
          uVar33 = local_a8._12_4_;
          auVar20 = local_b8;
          auVar5 = local_a8;
          pauVar17 = local_98;
        } while ((bVar18 == 1) ||
                (uVar26 = local_88._0_4_, uVar27 = local_88._4_4_, uVar28 = local_88._8_4_,
                uVar29 = local_88._12_4_, uVar30 = local_78._0_4_, uVar31 = local_78._4_4_,
                uVar32 = local_78._8_4_, uVar33 = local_78._12_4_, auVar20 = local_88,
                auVar5 = local_78, pauVar17 = local_68, uVar6 = local_60, bVar18 == 2));
        if (bVar18 != 3) break;
        iVar15 = *(int *)(param_3 + 6);
        lVar16 = (longlong)iVar15;
        uVar11 = FUN_143703a50(uVar13);
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar11,param_2,4);
        }
        lVar10 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar10 + 1;
        *(uint *)(*param_2 + (longlong)(int)lVar10 * 4) = local_90[(longlong)(1 - iVar15) * 0xc];
        lVar10 = lVar16 * 0x30;
        lVar3 = lVar16 * 0x30;
        local_f8._4_4_ = *(undefined4 *)(local_b8 + lVar10 + 4);
        local_f8._0_4_ = *(undefined4 *)(local_b8 + lVar10);
        local_f8._8_4_ = *(undefined4 *)(local_b8 + lVar10 + 8);
        local_f8._12_4_ = *(undefined4 *)(local_b8 + lVar10 + 0xc);
        local_e8._4_4_ = *(undefined4 *)(local_a8 + lVar3 + 4);
        local_e8._0_4_ = *(undefined4 *)(local_a8 + lVar3);
        local_e8._8_4_ = *(undefined4 *)(local_a8 + lVar3 + 8);
        local_e8._12_4_ = *(undefined4 *)(local_a8 + lVar3 + 0xc);
        uVar26 = *(undefined4 *)(local_b8 + lVar10);
        uVar27 = *(undefined4 *)(local_b8 + lVar10 + 4);
        uVar28 = *(undefined4 *)(local_b8 + lVar10 + 8);
        uVar29 = *(undefined4 *)(local_b8 + lVar10 + 0xc);
        uVar30 = *(undefined4 *)(local_a8 + lVar3);
        uVar31 = *(undefined4 *)(local_a8 + lVar3 + 4);
        uVar32 = *(undefined4 *)(local_a8 + lVar3 + 8);
        uVar33 = *(undefined4 *)(local_a8 + lVar3 + 0xc);
        auVar20 = local_f8;
        auVar5 = local_e8;
        pauVar17 = *(undefined1 (**) [16])(local_90 + lVar16 * 0xc + -2);
        uVar6 = local_90[lVar16 * 0xc];
      }
LAB_1437e4e14:
      if ((int)lVar9 < (int)param_2[1]) {
        iVar15 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar15;
        pauVar17 = (undefined1 (*) [16])
                   ((ulonglong)*(uint *)(*param_2 + (longlong)iVar15 * 4) * 0x30 + *param_1);
        uVar26 = *(undefined4 *)*pauVar17;
        uVar27 = *(undefined4 *)(*pauVar17 + 4);
        uVar28 = *(undefined4 *)(*pauVar17 + 8);
        uVar29 = *(undefined4 *)(*pauVar17 + 0xc);
        uVar30 = *(undefined4 *)pauVar17[1];
        uVar31 = *(undefined4 *)(pauVar17[1] + 4);
        uVar32 = *(undefined4 *)(pauVar17[1] + 8);
        uVar33 = *(undefined4 *)(pauVar17[1] + 0xc);
        auVar20 = *pauVar17;
        auVar5 = pauVar17[1];
        uVar6 = *(uint *)(*param_2 + (longlong)iVar15 * 4);
        goto LAB_1437e4bb2;
      }
    }
  }
  return;
}



// FUNCTION 1437e4ea0 FUN_1437e4ea0 body=1033 status=ok
// SIG undefined FUN_1437e4ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e4ea0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  float fVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 uVar20;
  int iVar21;
  float *pfVar22;
  longlong lVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float *local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8 [4];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float *local_b8;
  float local_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float *local_88;
  float local_80;
  
  if ((int)param_1[4] != 0) {
    uVar34 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar13 = param_2[1];
    pfVar22 = (float *)((ulonglong)(uint)*(float *)(param_1 + 4) * 0x30 + *param_1);
    auVar42._0_8_ =
         CONCAT44((pfVar22[1] - *(float *)((longlong)param_3 + 0x14)) *
                  *(float *)((longlong)param_3 + 0x34),
                  (*pfVar22 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
    auVar42._8_4_ = (pfVar22[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar42._12_4_ =
         (pfVar22[3] - *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar38._0_4_ = (pfVar22[4] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar38._4_4_ =
         (pfVar22[5] - *(float *)((longlong)param_3 + 0x14)) * *(float *)((longlong)param_3 + 0x34);
    auVar38._8_4_ = (pfVar22[6] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar38._12_4_ =
         (pfVar22[7] - *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar35._8_4_ = auVar42._8_4_;
    auVar35._0_8_ = auVar42._0_8_;
    auVar35._12_4_ = auVar42._12_4_;
    auVar36 = minps(auVar35,auVar38);
    auVar43 = maxps(auVar42,auVar38);
    uVar33 = auVar36._0_4_;
    uVar41 = auVar36._4_4_;
    auVar37._8_4_ = auVar36._8_4_;
    auVar25._4_4_ = uVar41;
    auVar25._0_4_ = uVar41;
    auVar25._8_4_ = uVar41;
    auVar25._12_4_ = uVar41;
    auVar36._4_4_ = uVar33;
    auVar36._0_4_ = uVar33;
    auVar36._8_4_ = uVar33;
    auVar36._12_4_ = uVar33;
    auVar36 = maxps(auVar25,auVar36);
    uVar33 = auVar43._0_4_;
    uVar41 = auVar43._4_4_;
    auVar44._8_4_ = auVar43._8_4_;
    auVar37._4_4_ = auVar37._8_4_;
    auVar37._0_4_ = auVar37._8_4_;
    auVar37._12_4_ = auVar37._8_4_;
    auVar36 = maxps(auVar37,auVar36);
    auVar38 = maxps(auVar36,_DAT_1467f06e0);
    auVar26._4_4_ = uVar41;
    auVar26._0_4_ = uVar41;
    auVar26._8_4_ = uVar41;
    auVar26._12_4_ = uVar41;
    auVar44._4_4_ = auVar44._8_4_;
    auVar44._0_4_ = auVar44._8_4_;
    auVar44._12_4_ = auVar44._8_4_;
    auVar43._4_4_ = uVar33;
    auVar43._0_4_ = uVar33;
    auVar43._8_4_ = uVar33;
    auVar43._12_4_ = uVar33;
    auVar36 = minps(auVar26,auVar43);
    auVar36 = minps(auVar44,auVar36);
    auVar48._4_4_ = uVar34;
    auVar48._0_4_ = uVar34;
    auVar48._8_4_ = uVar34;
    auVar48._12_4_ = uVar34;
    auVar36 = minps(auVar36,auVar48);
    uVar20 = *(undefined8 *)pfVar22;
    uVar16 = *(undefined8 *)(pfVar22 + 2);
    uVar17 = *(undefined8 *)(pfVar22 + 4);
    uVar18 = *(undefined8 *)(pfVar22 + 6);
    fVar2 = *(float *)(param_1 + 4);
    if (auVar38._0_4_ <= auVar36._0_4_) {
LAB_1437e4f90:
      while( true ) {
        do {
          local_f0 = fVar2;
          local_f8 = pfVar22;
          uStack_100 = uVar18;
          local_108 = uVar17;
          uStack_110 = uVar16;
          local_118 = uVar20;
          fVar2 = local_f8[9];
          if (fVar2 == 0.0) {
            puVar3 = (undefined8 *)*param_3;
            local_e8 = *(undefined4 *)((longlong)param_3 + 0x2c);
            plVar4 = (longlong *)*puVar3;
            uStack_e4 = local_e8;
            uStack_e0 = local_e8;
            uStack_dc = local_e8;
            uVar19 = (**(code **)(*plVar4 + 8))(plVar4,local_f8[10],&local_118,&local_e8);
            puVar1 = (uint *)(puVar3 + 1);
            *puVar1 = *puVar1 | uVar19;
            *(int *)(param_3 + 4) = (int)param_3[4];
            *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
            *(int *)(param_3 + 5) = (int)param_3[5];
            *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_dc;
            goto LAB_1437e520a;
          }
          local_80 = local_f8[10];
          uVar34 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_b8 = (float *)((ulonglong)(uint)fVar2 * 0x30 + *param_1);
          auVar45._4_4_ = uVar34;
          auVar45._0_4_ = uVar34;
          auVar45._8_4_ = uVar34;
          auVar45._12_4_ = uVar34;
          local_88 = (float *)((ulonglong)(uint)local_80 * 0x30 + *param_1);
          local_d8[0] = *local_b8;
          local_d8[1] = local_b8[1];
          uVar20 = *(undefined8 *)local_b8;
          local_d8[2] = local_b8[2];
          local_d8[3] = local_b8[3];
          uVar16 = *(undefined8 *)(local_b8 + 2);
          local_c8 = local_b8[4];
          fStack_c4 = local_b8[5];
          uVar17 = *(undefined8 *)(local_b8 + 4);
          fStack_c0 = local_b8[6];
          fStack_bc = local_b8[7];
          uVar18 = *(undefined8 *)(local_b8 + 6);
          local_b0[2] = *local_88;
          local_b0[3] = local_88[1];
          uVar9 = *(undefined8 *)local_88;
          fStack_a0 = local_88[2];
          fStack_9c = local_88[3];
          uVar10 = *(undefined8 *)(local_88 + 2);
          local_98 = local_88[4];
          fStack_94 = local_88[5];
          uVar11 = *(undefined8 *)(local_88 + 4);
          fStack_90 = local_88[6];
          fStack_8c = local_88[7];
          uVar12 = *(undefined8 *)(local_88 + 6);
          auVar46._0_8_ =
               CONCAT44((local_d8[1] - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_d8[0] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar46._8_4_ = (local_d8[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar46._12_4_ =
               (local_d8[3] - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar27._0_4_ = (local_c8 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar27._4_4_ =
               (fStack_c4 - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar27._8_4_ = (fStack_c0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar27._12_4_ =
               (fStack_bc - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar39._0_8_ =
               CONCAT44((local_b0[3] - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_b0[2] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar39._8_4_ = (fStack_a0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar39._12_4_ =
               (fStack_9c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar49._8_4_ = auVar46._8_4_;
          auVar49._0_8_ = auVar46._0_8_;
          auVar49._12_4_ = auVar46._12_4_;
          auVar36 = minps(auVar49,auVar27);
          auVar43 = maxps(auVar46,auVar27);
          uVar34 = auVar36._0_4_;
          uVar33 = auVar36._4_4_;
          auVar50._8_4_ = auVar36._8_4_;
          auVar28._4_4_ = uVar33;
          auVar28._0_4_ = uVar33;
          auVar28._8_4_ = uVar33;
          auVar28._12_4_ = uVar33;
          auVar51._8_4_ = auVar39._8_4_;
          auVar51._0_8_ = auVar39._0_8_;
          auVar51._12_4_ = auVar39._12_4_;
          auVar5._4_4_ = uVar34;
          auVar5._0_4_ = uVar34;
          auVar5._8_4_ = uVar34;
          auVar5._12_4_ = uVar34;
          auVar36 = maxps(auVar28,auVar5);
          uVar34 = auVar43._0_4_;
          uVar33 = auVar43._4_4_;
          auVar47._8_4_ = auVar43._8_4_;
          auVar50._4_4_ = auVar50._8_4_;
          auVar50._0_4_ = auVar50._8_4_;
          auVar50._12_4_ = auVar50._8_4_;
          auVar36 = maxps(auVar50,auVar36);
          auVar38 = maxps(auVar36,_DAT_1467f06e0);
          auVar29._4_4_ = uVar33;
          auVar29._0_4_ = uVar33;
          auVar29._8_4_ = uVar33;
          auVar29._12_4_ = uVar33;
          auVar6._4_4_ = uVar34;
          auVar6._0_4_ = uVar34;
          auVar6._8_4_ = uVar34;
          auVar6._12_4_ = uVar34;
          auVar36 = minps(auVar29,auVar6);
          auVar47._4_4_ = auVar47._8_4_;
          auVar47._0_4_ = auVar47._8_4_;
          auVar47._12_4_ = auVar47._8_4_;
          auVar36 = minps(auVar47,auVar36);
          auVar48 = minps(auVar36,auVar45);
          auVar30._0_4_ = (local_98 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar30._4_4_ =
               (fStack_94 - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar30._8_4_ = (fStack_90 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar30._12_4_ =
               (fStack_8c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar36 = minps(auVar51,auVar30);
          auVar43 = maxps(auVar39,auVar30);
          uVar34 = auVar36._0_4_;
          uVar33 = auVar36._4_4_;
          auVar52._8_4_ = auVar36._8_4_;
          auVar31._4_4_ = uVar33;
          auVar31._0_4_ = uVar33;
          auVar31._8_4_ = uVar33;
          auVar31._12_4_ = uVar33;
          auVar7._4_4_ = uVar34;
          auVar7._0_4_ = uVar34;
          auVar7._8_4_ = uVar34;
          auVar7._12_4_ = uVar34;
          auVar36 = maxps(auVar31,auVar7);
          uVar34 = auVar43._0_4_;
          uVar33 = auVar43._4_4_;
          auVar40._8_4_ = auVar43._8_4_;
          auVar52._4_4_ = auVar52._8_4_;
          auVar52._0_4_ = auVar52._8_4_;
          auVar52._12_4_ = auVar52._8_4_;
          auVar36 = maxps(auVar52,auVar36);
          auVar43 = maxps(auVar36,_DAT_1467f06e0);
          auVar32._4_4_ = uVar33;
          auVar32._0_4_ = uVar33;
          auVar32._8_4_ = uVar33;
          auVar32._12_4_ = uVar33;
          auVar40._4_4_ = auVar40._8_4_;
          auVar40._0_4_ = auVar40._8_4_;
          auVar40._12_4_ = auVar40._8_4_;
          auVar8._4_4_ = uVar34;
          auVar8._0_4_ = uVar34;
          auVar8._8_4_ = uVar34;
          auVar8._12_4_ = uVar34;
          auVar36 = minps(auVar32,auVar8);
          auVar36 = minps(auVar40,auVar36);
          auVar36 = minps(auVar36,auVar45);
          bVar24 = -(auVar43._0_4_ <= auVar36._0_4_) & 2U | auVar38._0_4_ <= auVar48._0_4_;
          if (bVar24 == 3) {
            *(uint *)(param_3 + 8) = (uint)(auVar43._0_4_ < auVar38._0_4_);
          }
          local_b0[0] = fVar2;
          if (bVar24 == 0) goto LAB_1437e520a;
          pfVar22 = local_b8;
        } while ((bVar24 == 1) ||
                (uVar20 = uVar9, uVar16 = uVar10, uVar17 = uVar11, uVar18 = uVar12,
                pfVar22 = local_88, fVar2 = local_80, bVar24 == 2));
        if (bVar24 != 3) break;
        lVar14 = param_3[8];
        lVar23 = (longlong)(int)lVar14;
        uVar20 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar20,param_2,4);
        }
        lVar15 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar15 + 1;
        *(float *)(*param_2 + (longlong)(int)lVar15 * 4) =
             local_b0[(longlong)(1 - (int)lVar14) * 0xc];
        uVar20 = *(undefined8 *)(local_d8 + lVar23 * 0xc);
        uVar16 = *(undefined8 *)(local_d8 + lVar23 * 0xc + 2);
        uVar17 = *(undefined8 *)(local_d8 + lVar23 * 0xc + 4);
        uVar18 = *(undefined8 *)(local_d8 + lVar23 * 0xc + 6);
        pfVar22 = *(float **)(local_b0 + lVar23 * 0xc + -2);
        fVar2 = local_b0[lVar23 * 0xc];
      }
LAB_1437e520a:
      if ((int)lVar13 < (int)param_2[1]) {
        iVar21 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar21;
        pfVar22 = (float *)((ulonglong)*(uint *)(*param_2 + (longlong)iVar21 * 4) * 0x30 + *param_1)
        ;
        uVar20 = *(undefined8 *)pfVar22;
        uVar16 = *(undefined8 *)(pfVar22 + 2);
        uVar17 = *(undefined8 *)(pfVar22 + 4);
        uVar18 = *(undefined8 *)(pfVar22 + 6);
        fVar2 = *(float *)(*param_2 + (longlong)iVar21 * 4);
        goto LAB_1437e4f90;
      }
    }
  }
  return;
}



// FUNCTION 1437e52b0 FUN_1437e52b0 body=1085 status=ok
// SIG undefined FUN_1437e52b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e52b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  float fVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  int iVar26;
  float *pfVar27;
  longlong lVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float *local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8 [4];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float *local_c8;
  float local_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float *local_98;
  float local_90;
  
  if ((int)param_1[4] != 0) {
    uVar13 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar18 = param_2[1];
    pfVar27 = (float *)((ulonglong)(uint)*(float *)(param_1 + 4) * 0x30 + *param_1);
    auVar46._0_8_ =
         CONCAT44(((pfVar27[1] - *(float *)((longlong)param_3 + 0x44)) -
                  *(float *)((longlong)param_3 + 0x14)) * *(float *)((longlong)param_3 + 0x34),
                  ((*pfVar27 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
                  *(float *)(param_3 + 6));
    auVar46._8_4_ =
         ((pfVar27[2] - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar46._12_4_ =
         ((pfVar27[3] - *(float *)((longlong)param_3 + 0x4c)) - *(float *)((longlong)param_3 + 0x1c)
         ) * *(float *)((longlong)param_3 + 0x3c);
    auVar40._0_4_ =
         ((pfVar27[4] + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
         *(float *)(param_3 + 6);
    auVar40._4_4_ =
         ((pfVar27[5] + *(float *)((longlong)param_3 + 0x44)) - *(float *)((longlong)param_3 + 0x14)
         ) * *(float *)((longlong)param_3 + 0x34);
    auVar40._8_4_ =
         ((pfVar27[6] + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar40._12_4_ =
         ((pfVar27[7] + *(float *)((longlong)param_3 + 0x4c)) - *(float *)((longlong)param_3 + 0x1c)
         ) * *(float *)((longlong)param_3 + 0x3c);
    auVar37._8_4_ = auVar46._8_4_;
    auVar37._0_8_ = auVar46._0_8_;
    auVar37._12_4_ = auVar46._12_4_;
    auVar38 = minps(auVar37,auVar40);
    auVar47 = maxps(auVar46,auVar40);
    uVar36 = auVar38._0_4_;
    uVar41 = auVar38._4_4_;
    auVar39._8_4_ = auVar38._8_4_;
    auVar57._4_4_ = uVar41;
    auVar57._0_4_ = uVar41;
    auVar57._8_4_ = uVar41;
    auVar57._12_4_ = uVar41;
    auVar38._4_4_ = uVar36;
    auVar38._0_4_ = uVar36;
    auVar38._8_4_ = uVar36;
    auVar38._12_4_ = uVar36;
    auVar38 = maxps(auVar57,auVar38);
    uVar36 = auVar47._0_4_;
    uVar41 = auVar47._4_4_;
    auVar48._8_4_ = auVar47._8_4_;
    auVar39._4_4_ = auVar39._8_4_;
    auVar39._0_4_ = auVar39._8_4_;
    auVar39._12_4_ = auVar39._8_4_;
    auVar38 = maxps(auVar39,auVar38);
    auVar40 = maxps(auVar38,_DAT_1467f06e0);
    auVar30._4_4_ = uVar41;
    auVar30._0_4_ = uVar41;
    auVar30._8_4_ = uVar41;
    auVar30._12_4_ = uVar41;
    auVar48._4_4_ = auVar48._8_4_;
    auVar48._0_4_ = auVar48._8_4_;
    auVar48._12_4_ = auVar48._8_4_;
    auVar47._4_4_ = uVar36;
    auVar47._0_4_ = uVar36;
    auVar47._8_4_ = uVar36;
    auVar47._12_4_ = uVar36;
    auVar38 = minps(auVar30,auVar47);
    auVar38 = minps(auVar48,auVar38);
    auVar52._4_4_ = uVar13;
    auVar52._0_4_ = uVar13;
    auVar52._8_4_ = uVar13;
    auVar52._12_4_ = uVar13;
    auVar38 = minps(auVar38,auVar52);
    uVar25 = *(undefined8 *)pfVar27;
    uVar21 = *(undefined8 *)(pfVar27 + 2);
    uVar22 = *(undefined8 *)(pfVar27 + 4);
    uVar23 = *(undefined8 *)(pfVar27 + 6);
    fVar2 = *(float *)(param_1 + 4);
    if (auVar40._0_4_ <= auVar38._0_4_) {
LAB_1437e53b0:
      while( true ) {
        do {
          local_100 = fVar2;
          local_108 = pfVar27;
          uStack_110 = uVar23;
          local_118 = uVar22;
          uStack_120 = uVar21;
          local_128 = uVar25;
          fVar2 = local_108[9];
          if (fVar2 == 0.0) {
            puVar3 = (undefined8 *)*param_3;
            local_f8 = *(undefined4 *)((longlong)param_3 + 0x2c);
            plVar4 = (longlong *)*puVar3;
            uStack_f4 = local_f8;
            uStack_f0 = local_f8;
            uStack_ec = local_f8;
            uVar24 = (**(code **)(*plVar4 + 8))(plVar4,local_108[10],&local_128,&local_f8);
            puVar1 = (uint *)(puVar3 + 1);
            *puVar1 = *puVar1 | uVar24;
            *(int *)(param_3 + 4) = (int)param_3[4];
            *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
            *(int *)(param_3 + 5) = (int)param_3[5];
            *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_ec;
            goto LAB_1437e5645;
          }
          fVar42 = *(float *)(param_3 + 8);
          fVar43 = *(float *)((longlong)param_3 + 0x44);
          fVar44 = *(float *)(param_3 + 9);
          fVar45 = *(float *)((longlong)param_3 + 0x4c);
          local_90 = local_108[10];
          uVar13 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_c8 = (float *)((ulonglong)(uint)fVar2 * 0x30 + *param_1);
          local_98 = (float *)((ulonglong)(uint)local_90 * 0x30 + *param_1);
          local_e8[0] = *local_c8;
          local_e8[1] = local_c8[1];
          uVar25 = *(undefined8 *)local_c8;
          local_e8[2] = local_c8[2];
          local_e8[3] = local_c8[3];
          uVar21 = *(undefined8 *)(local_c8 + 2);
          local_d8 = local_c8[4];
          fStack_d4 = local_c8[5];
          uVar22 = *(undefined8 *)(local_c8 + 4);
          fStack_d0 = local_c8[6];
          fStack_cc = local_c8[7];
          uVar23 = *(undefined8 *)(local_c8 + 6);
          local_c0[2] = *local_98;
          local_c0[3] = local_98[1];
          uVar14 = *(undefined8 *)local_98;
          fStack_b0 = local_98[2];
          fStack_ac = local_98[3];
          uVar15 = *(undefined8 *)(local_98 + 2);
          local_a8 = local_98[4];
          fStack_a4 = local_98[5];
          uVar16 = *(undefined8 *)(local_98 + 4);
          fStack_a0 = local_98[6];
          fStack_9c = local_98[7];
          uVar17 = *(undefined8 *)(local_98 + 6);
          auVar51._0_8_ =
               CONCAT44(((local_e8[1] - fVar43) - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        ((local_e8[0] - fVar42) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6)
                       );
          auVar51._8_4_ =
               ((local_e8[2] - fVar44) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar51._12_4_ =
               ((local_e8[3] - fVar45) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar31._0_4_ = ((local_d8 + fVar42) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar31._4_4_ =
               ((fStack_d4 + fVar43) - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar31._8_4_ = ((fStack_d0 + fVar44) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7)
          ;
          auVar31._12_4_ =
               ((fStack_cc + fVar45) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar49._0_8_ =
               CONCAT44(((local_c0[3] - fVar43) - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        ((local_c0[2] - fVar42) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6)
                       );
          auVar49._8_4_ = ((fStack_b0 - fVar44) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7)
          ;
          auVar49._12_4_ =
               ((fStack_ac - fVar45) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar54._8_4_ = auVar51._8_4_;
          auVar54._0_8_ = auVar51._0_8_;
          auVar54._12_4_ = auVar51._12_4_;
          auVar38 = minps(auVar54,auVar31);
          fVar42 = ((local_a8 + fVar42) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          fVar43 = ((fStack_a4 + fVar43) - *(float *)((longlong)param_3 + 0x14)) *
                   *(float *)((longlong)param_3 + 0x34);
          fVar44 = ((fStack_a0 + fVar44) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          fVar45 = ((fStack_9c + fVar45) - *(float *)((longlong)param_3 + 0x1c)) *
                   *(float *)((longlong)param_3 + 0x3c);
          auVar56._8_4_ = auVar49._8_4_;
          auVar56._0_8_ = auVar49._0_8_;
          auVar56._12_4_ = auVar49._12_4_;
          auVar52 = maxps(auVar51,auVar31);
          uVar36 = auVar38._0_4_;
          uVar41 = auVar38._4_4_;
          auVar55._8_4_ = auVar38._8_4_;
          auVar32._4_4_ = uVar41;
          auVar32._0_4_ = uVar41;
          auVar32._8_4_ = uVar41;
          auVar32._12_4_ = uVar41;
          auVar5._4_4_ = uVar36;
          auVar5._0_4_ = uVar36;
          auVar5._8_4_ = uVar36;
          auVar5._12_4_ = uVar36;
          auVar38 = maxps(auVar32,auVar5);
          auVar9._4_4_ = fVar43;
          auVar9._0_4_ = fVar42;
          auVar9._8_4_ = fVar44;
          auVar9._12_4_ = fVar45;
          auVar57 = minps(auVar56,auVar9);
          auVar10._4_4_ = fVar43;
          auVar10._0_4_ = fVar42;
          auVar10._8_4_ = fVar44;
          auVar10._12_4_ = fVar45;
          auVar47 = maxps(auVar49,auVar10);
          uVar36 = auVar52._0_4_;
          uVar41 = auVar52._4_4_;
          auVar53._8_4_ = auVar52._8_4_;
          auVar55._4_4_ = auVar55._8_4_;
          auVar55._0_4_ = auVar55._8_4_;
          auVar55._12_4_ = auVar55._8_4_;
          auVar38 = maxps(auVar55,auVar38);
          auVar40 = maxps(auVar38,_DAT_1467f06e0);
          auVar33._4_4_ = uVar41;
          auVar33._0_4_ = uVar41;
          auVar33._8_4_ = uVar41;
          auVar33._12_4_ = uVar41;
          auVar6._4_4_ = uVar36;
          auVar6._0_4_ = uVar36;
          auVar6._8_4_ = uVar36;
          auVar6._12_4_ = uVar36;
          auVar38 = minps(auVar33,auVar6);
          uVar36 = auVar57._0_4_;
          uVar41 = auVar57._4_4_;
          auVar58._8_4_ = auVar57._8_4_;
          auVar53._4_4_ = auVar53._8_4_;
          auVar53._0_4_ = auVar53._8_4_;
          auVar53._12_4_ = auVar53._8_4_;
          auVar52 = minps(auVar53,auVar38);
          auVar34._4_4_ = uVar41;
          auVar34._0_4_ = uVar41;
          auVar34._8_4_ = uVar41;
          auVar34._12_4_ = uVar41;
          auVar7._4_4_ = uVar36;
          auVar7._0_4_ = uVar36;
          auVar7._8_4_ = uVar36;
          auVar7._12_4_ = uVar36;
          auVar38 = maxps(auVar34,auVar7);
          uVar36 = auVar47._0_4_;
          uVar41 = auVar47._4_4_;
          auVar50._8_4_ = auVar47._8_4_;
          auVar58._4_4_ = auVar58._8_4_;
          auVar58._0_4_ = auVar58._8_4_;
          auVar58._12_4_ = auVar58._8_4_;
          auVar38 = maxps(auVar58,auVar38);
          auVar57 = maxps(auVar38,_DAT_1467f06e0);
          auVar35._4_4_ = uVar41;
          auVar35._0_4_ = uVar41;
          auVar35._8_4_ = uVar41;
          auVar35._12_4_ = uVar41;
          auVar50._4_4_ = auVar50._8_4_;
          auVar50._0_4_ = auVar50._8_4_;
          auVar50._12_4_ = auVar50._8_4_;
          auVar8._4_4_ = uVar36;
          auVar8._0_4_ = uVar36;
          auVar8._8_4_ = uVar36;
          auVar8._12_4_ = uVar36;
          auVar38 = minps(auVar35,auVar8);
          auVar11._4_4_ = uVar13;
          auVar11._0_4_ = uVar13;
          auVar11._8_4_ = uVar13;
          auVar11._12_4_ = uVar13;
          auVar47 = minps(auVar52,auVar11);
          auVar38 = minps(auVar50,auVar38);
          auVar12._4_4_ = uVar13;
          auVar12._0_4_ = uVar13;
          auVar12._8_4_ = uVar13;
          auVar12._12_4_ = uVar13;
          auVar38 = minps(auVar38,auVar12);
          bVar29 = -(auVar57._0_4_ <= auVar38._0_4_) & 2U | auVar40._0_4_ <= auVar47._0_4_;
          if (bVar29 == 3) {
            *(uint *)(param_3 + 10) = (uint)(auVar57._0_4_ < auVar40._0_4_);
          }
          local_c0[0] = fVar2;
          if (bVar29 == 0) goto LAB_1437e5645;
          pfVar27 = local_c8;
        } while ((bVar29 == 1) ||
                (uVar25 = uVar14, uVar21 = uVar15, uVar22 = uVar16, uVar23 = uVar17,
                pfVar27 = local_98, fVar2 = local_90, bVar29 == 2));
        if (bVar29 != 3) break;
        lVar19 = param_3[10];
        lVar28 = (longlong)(int)lVar19;
        uVar25 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar25,param_2,4);
        }
        lVar20 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar20 + 1;
        *(float *)(*param_2 + (longlong)(int)lVar20 * 4) =
             local_c0[(longlong)(1 - (int)lVar19) * 0xc];
        uVar25 = *(undefined8 *)(local_e8 + lVar28 * 0xc);
        uVar21 = *(undefined8 *)(local_e8 + lVar28 * 0xc + 2);
        uVar22 = *(undefined8 *)(local_e8 + lVar28 * 0xc + 4);
        uVar23 = *(undefined8 *)(local_e8 + lVar28 * 0xc + 6);
        pfVar27 = *(float **)(local_c0 + lVar28 * 0xc + -2);
        fVar2 = local_c0[lVar28 * 0xc];
      }
LAB_1437e5645:
      if ((int)lVar18 < (int)param_2[1]) {
        iVar26 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar26;
        pfVar27 = (float *)((ulonglong)*(uint *)(*param_2 + (longlong)iVar26 * 4) * 0x30 + *param_1)
        ;
        uVar25 = *(undefined8 *)pfVar27;
        uVar21 = *(undefined8 *)(pfVar27 + 2);
        uVar22 = *(undefined8 *)(pfVar27 + 4);
        uVar23 = *(undefined8 *)(pfVar27 + 6);
        fVar2 = *(float *)(*param_2 + (longlong)iVar26 * 4);
        goto LAB_1437e53b0;
      }
    }
  }
  return;
}



// FUNCTION 1437e56f0 FUN_1437e56f0 body=208 status=ok
// SIG undefined FUN_1437e56f0(void)

undefined8 * FUN_1437e56f0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdDynamicAabbTree::vftable;
  uVar4 = 0;
  param_1[3] = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0x40);
  if (lVar3 != 0) {
    uVar4 = FUN_1437e3a80(lVar3);
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = uVar4;
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar1 = param_1[3];
  FUN_1437182e0(lVar1 + 8,lVar3 + 8);
  FUN_1437e5870(lVar1 + 0x18,lVar3 + 0x18);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
  *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar3 + 0x34);
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
  return param_1;
}



// FUNCTION 1437e57c0 FUN_1437e57c0 body=124 status=ok
// SIG undefined FUN_1437e57c0(void)

undefined8 * FUN_1437e57c0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdDynamicAabbTree::vftable;
  param_1[3] = 0;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  if (lVar2 != 0) {
    uVar3 = FUN_1437e3a80(lVar2);
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 1437e5840 FUN_1437e5840 body=46 status=ok
// SIG undefined FUN_1437e5840(void)

void FUN_1437e5840(undefined8 *param_1)

{
  *param_1 = hkcdDynamicAabbTree::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437e5870 FUN_1437e5870 body=120 status=ok
// SIG undefined FUN_1437e5870(void)

undefined8 * FUN_1437e5870(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1,iVar1,0x30);
  }
  FUN_1437e3ec0(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1437e58f0 FUN_1437e58f0 body=73 status=ok
// SIG undefined FUN_1437e58f0(void)

void FUN_1437e58f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x18);
  FUN_1437182e0(lVar2 + 8,lVar1 + 8);
  FUN_1437e5870(lVar2 + 0x18,lVar1 + 0x18);
  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar1 + 0x34);
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  return;
}



// FUNCTION 1437e5940 getClosestPoint body=13 status=ok
// SIG undefined getClosestPoint(void)

void hkcdDynamicAabbTree::getClosestPoint(longlong param_1)

{
  FUN_1437e3f00(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 1437e5950 getClosestPoint body=13 status=ok
// SIG undefined getClosestPoint(void)

void hkcdDynamicAabbTree::getClosestPoint(longlong param_1)

{
  FUN_1437e3f90(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 1437e5960 getClosestPoint body=13 status=ok
// SIG undefined getClosestPoint(void)

void hkcdDynamicAabbTree::getClosestPoint(longlong param_1)

{
  FUN_1437e4040(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 1437e5970 getTreePtr body=9 status=ok
// SIG undefined getTreePtr(void)

longlong hkcdDynamicAabbTree::getTreePtr(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) + 0x18;
}



// FUNCTION 1437e5980 FUN_1437e5980 body=787 status=ok
// SIG undefined FUN_1437e5980(void)

uint FUN_1437e5980(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  undefined1 local_res18 [16];
  float *local_78 [12];
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar4 + 0x28) == 0) {
    FUN_1437e5f00(lVar4 + 0x18,local_res18,1);
  }
  uVar2 = *(uint *)(lVar4 + 0x28);
  uVar10 = (ulonglong)uVar2;
  lVar5 = *(longlong *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar5 + (longlong)(int)uVar2 * 0x30);
  *(undefined4 *)(lVar5 + 0x24 + uVar10 * 0x30) = 0;
  *(undefined4 *)(lVar5 + 0x28 + uVar10 * 0x30) = param_3;
  uVar6 = param_2[1];
  puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x30);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  uVar6 = param_2[3];
  puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar10 * 0x30);
  *puVar1 = param_2[2];
  puVar1[1] = uVar6;
  lVar5 = *(longlong *)(lVar4 + 0x18);
  uVar3 = *(uint *)(lVar4 + 0x38);
  auVar16 = *(undefined1 (*) [16])(lVar5 + uVar10 * 0x30);
  auVar18 = *(undefined1 (*) [16])(lVar5 + 0x10 + uVar10 * 0x30);
  if (uVar3 == 0) {
    *(uint *)(lVar4 + 0x38) = uVar2;
    *(undefined4 *)(lVar5 + 0x20 + uVar10 * 0x30) = 0;
    goto LAB_1437e5c6c;
  }
  if (*(int *)(lVar4 + 0x28) == 0) {
    piVar8 = (int *)FUN_1437e5f00(lVar4 + 0x18,local_res18,1);
    iVar7 = *piVar8;
    if (-1 < iVar7) goto LAB_1437e5a41;
    uVar12 = 0;
  }
  else {
    iVar7 = 0;
LAB_1437e5a41:
    uVar12 = (ulonglong)*(int *)(lVar4 + 0x28);
    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + uVar12 * 0x30);
  }
  if (-1 < iVar7) {
    uVar11 = (undefined4)uVar12;
    pauVar13 = (undefined1 (*) [16])((ulonglong)uVar3 * 0x30 + *(longlong *)(lVar4 + 0x18));
    pauVar14 = (undefined1 (*) [16])((uVar12 & 0xffffffff) * 0x30 + *(longlong *)(lVar4 + 0x18));
    uVar3 = *(uint *)(pauVar13[2] + 4);
    if (uVar3 != 0) {
      fVar25 = auVar18._0_4_ + auVar16._0_4_;
      fVar26 = auVar18._4_4_ + auVar16._4_4_;
      fVar27 = auVar18._8_4_ + auVar16._8_4_;
      fVar28 = auVar18._0_4_ - auVar16._0_4_;
      fVar29 = auVar18._4_4_ - auVar16._4_4_;
      fVar30 = auVar18._8_4_ - auVar16._8_4_;
      do {
        auVar15 = minps(*pauVar13,auVar16);
        local_78[0] = (float *)((ulonglong)uVar3 * 0x30 + *(longlong *)(lVar4 + 0x18));
        local_78[1] = (float *)((ulonglong)*(uint *)(pauVar13[2] + 8) * 0x30 +
                               *(longlong *)(lVar4 + 0x18));
        auVar17 = maxps(pauVar13[1],auVar18);
        *pauVar13 = auVar15;
        pauVar13[1] = auVar17;
        fVar19 = (local_78[0][4] + *local_78[0]) - fVar25;
        fVar20 = (local_78[0][5] + local_78[0][1]) - fVar26;
        fVar21 = (local_78[0][6] + local_78[0][2]) - fVar27;
        fVar22 = (local_78[1][4] + *local_78[1]) - fVar25;
        fVar23 = (local_78[1][5] + local_78[1][1]) - fVar26;
        fVar24 = (local_78[1][6] + local_78[1][2]) - fVar27;
        pauVar13 = (undefined1 (*) [16])
                   local_78[(fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24) *
                            ((local_78[1][5] - local_78[1][1]) + fVar29 +
                             (local_78[1][4] - *local_78[1]) + fVar28 +
                            (local_78[1][6] - local_78[1][2]) + fVar30) <
                            (fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21) *
                            ((local_78[0][5] - local_78[0][1]) + fVar29 +
                             (local_78[0][4] - *local_78[0]) + fVar28 +
                            (local_78[0][6] - local_78[0][2]) + fVar30)];
        uVar3 = *(uint *)(pauVar13[2] + 4);
      } while (uVar3 != 0);
    }
    uVar3 = *(uint *)pauVar13[2];
    if (uVar3 == 0) {
      *(undefined4 *)(lVar4 + 0x38) = uVar11;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 0x18);
      lVar9 = 0x24;
      if (*(int *)(lVar5 + 0x28 + (ulonglong)uVar3 * 0x30) ==
          (int)(((longlong)pauVar13 - lVar5) / 0x30)) {
        lVar9 = 0x28;
      }
      *(undefined4 *)(lVar9 + lVar5 + (ulonglong)uVar3 * 0x30) = uVar11;
    }
    *(undefined4 *)pauVar14[2] = *(undefined4 *)pauVar13[2];
    lVar5 = *(longlong *)(lVar4 + 0x18);
    *(uint *)(pauVar14[2] + 8) = uVar2;
    *(int *)(pauVar14[2] + 4) = (int)(((longlong)pauVar13 - lVar5) / 0x30);
    *(undefined4 *)pauVar13[2] = uVar11;
    *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x20 + uVar10 * 0x30) = uVar11;
    auVar16 = minps(*pauVar13,auVar16);
    auVar18 = maxps(pauVar13[1],auVar18);
    *pauVar14 = auVar16;
    pauVar14[1] = auVar18;
  }
LAB_1437e5c6c:
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  return uVar2;
}



// FUNCTION 1437e5ca0 FUN_1437e5ca0 body=62 status=ok
// SIG undefined FUN_1437e5ca0(void)

undefined4 *
FUN_1437e5ca0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  uVar1 = FUN_1437e4220(*(longlong *)(param_1 + 0x18) + 0x18,param_3,param_4);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1437e5ce0 getClosestPoint body=13 status=ok
// SIG undefined getClosestPoint(void)

void hkcdDynamicAabbTree::getClosestPoint(longlong param_1)

{
  FUN_1437e40b0(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 1437e5cf0 FUN_1437e5cf0 body=520 status=ok
// SIG undefined FUN_1437e5cf0(void)

void FUN_1437e5cf0(longlong param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar18 = *(longlong *)(lVar4 + 0x18);
  uVar1 = *(uint *)(lVar4 + 0x38);
  pfVar17 = (float *)((ulonglong)param_2 * 0x30 + lVar18);
  fVar6 = *pfVar17;
  fVar7 = pfVar17[1];
  fVar8 = pfVar17[2];
  fVar9 = pfVar17[3];
  fVar10 = pfVar17[4];
  fVar11 = pfVar17[5];
  fVar12 = pfVar17[6];
  fVar13 = pfVar17[7];
  if (param_2 == uVar1) {
    *(undefined4 *)(lVar4 + 0x38) = 0;
  }
  else {
    lVar19 = 0x24;
    lVar15 = (ulonglong)(uint)pfVar17[8] * 0x30 + lVar18;
    if (*(uint *)(lVar15 + 0x28) != param_2) {
      lVar19 = 0x28;
    }
    lVar19 = (ulonglong)*(uint *)(lVar19 + lVar15) * 0x30 + lVar18;
    if (*(int *)(lVar15 + 0x20) == 0) {
      *(undefined4 *)(lVar18 + (longlong)(int)uVar1 * 0x30) = *(undefined4 *)(lVar4 + 0x28);
      *(uint *)(lVar4 + 0x28) = uVar1;
      *(int *)(lVar4 + 0x38) = (int)((lVar19 - *(longlong *)(lVar4 + 0x18)) / 0x30);
      *(undefined4 *)(lVar19 + 0x20) = 0;
    }
    else {
      *(int *)(lVar19 + 0x20) = *(int *)(lVar15 + 0x20);
      lVar18 = *(longlong *)(lVar4 + 0x18);
      lVar15 = (ulonglong)*(uint *)(lVar15 + 0x20) * 0x30;
      uVar1 = 0x24;
      if (*(float *)(lVar15 + 0x28 + lVar18) == pfVar17[8]) {
        uVar1 = 0x28;
      }
      *(int *)((ulonglong)uVar1 + lVar15 + lVar18) = (int)((lVar19 - lVar18) / 0x30);
      fVar2 = pfVar17[8];
      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)fVar2 * 0x30) =
           *(undefined4 *)(lVar4 + 0x28);
      *(float *)(lVar4 + 0x28) = fVar2;
      lVar18 = *(longlong *)(lVar4 + 0x18);
      lVar19 = (ulonglong)*(uint *)(lVar19 + 0x20) * 0x30 + lVar18;
      do {
        uVar1 = *(uint *)(lVar19 + 0x20);
        pauVar16 = (undefined1 (*) [16])(((lVar19 - lVar18) / 0x30 & 0xffffffffU) * 0x30 + lVar18);
        uVar3 = *(uint *)(pauVar16[2] + 8);
        auVar21 = minps(*(undefined1 (*) [16])
                         (lVar18 + (ulonglong)*(uint *)(pauVar16[2] + 4) * 0x30),
                        *(undefined1 (*) [16])(lVar18 + (ulonglong)uVar3 * 0x30));
        auVar20 = maxps(*(undefined1 (*) [16])
                         (lVar18 + 0x10 + (ulonglong)*(uint *)(pauVar16[2] + 4) * 0x30),
                        *(undefined1 (*) [16])(lVar18 + 0x10 + (ulonglong)uVar3 * 0x30));
        *pauVar16 = auVar21;
        pauVar16[1] = auVar20;
        auVar5._4_4_ = -(uint)(fVar11 <= auVar20._4_4_ && auVar21._4_4_ <= fVar7);
        auVar5._0_4_ = -(uint)(fVar10 <= auVar20._0_4_ && auVar21._0_4_ <= fVar6);
        auVar5._8_4_ = -(uint)(fVar12 <= auVar20._8_4_ && auVar21._8_4_ <= fVar8);
        auVar5._12_4_ = -(uint)(fVar13 <= auVar20._12_4_ && auVar21._12_4_ <= fVar9);
        uVar14 = movmskps(uVar3,auVar5);
        if ((((byte)uVar14 & 7) == 7) || (uVar1 == 0)) break;
        lVar18 = *(longlong *)(lVar4 + 0x18);
        lVar19 = (ulonglong)uVar1 * 0x30 + lVar18;
      } while (lVar19 != 0);
    }
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)param_2 * 0x30) =
       *(undefined4 *)(lVar4 + 0x28);
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  *(uint *)(lVar4 + 0x28) = param_2;
  return;
}



// FUNCTION 1437e5f00 FUN_1437e5f00 body=324 status=ok
// SIG undefined FUN_1437e5f00(void)

undefined4 * FUN_1437e5f00(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    iVar8 = (int)param_1[1];
    iVar2 = iVar8;
    if (iVar8 < 1) {
      iVar2 = 1;
    }
    iVar8 = param_3 + 1 + iVar8;
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar5 < iVar8) {
      iVar10 = uVar5 * 2;
      if (iVar8 < iVar10) {
        iVar8 = iVar10;
      }
      iVar8 = FUN_14370c310(uVar4,param_1,iVar8,0x30);
      if (iVar8 < 0) {
        *param_2 = 0x80040200;
        return param_2;
      }
    }
    iVar8 = (int)param_1[1];
    iVar9 = (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) - iVar8;
    uVar4 = FUN_143703a50();
    iVar10 = (int)param_1[1] + iVar9;
    uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar5 < iVar10) {
      iVar3 = uVar5 * 2;
      if (iVar10 < iVar3) {
        iVar10 = iVar3;
      }
      FUN_14370c310(uVar4,param_1,iVar10,0x30);
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar9;
    FUN_14370c720((longlong)iVar8 * 0x30 + *param_1,0,((int)param_1[1] - iVar8) * 0x30);
    lVar11 = (longlong)((int)param_1[1] + -1);
    lVar6 = (longlong)iVar2;
    if (lVar6 <= lVar11) {
      lVar7 = lVar6 * 0x30;
      lVar1 = lVar6 - lVar11;
      iVar8 = iVar2;
      do {
        iVar8 = iVar8 + 1;
        iVar10 = iVar8;
        if (SBORROW8(lVar6,lVar11) == lVar1 < 0) {
          iVar10 = (int)param_1[2];
        }
        lVar6 = lVar6 + 1;
        *(int *)(lVar7 + *param_1) = iVar10;
        lVar7 = lVar7 + 0x30;
        lVar1 = lVar6 - lVar11;
      } while (lVar6 <= lVar11);
    }
    *(int *)(param_1 + 2) = iVar2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437e6050 FUN_1437e6050 body=23 status=ok
// SIG undefined FUN_1437e6050(void)

void FUN_1437e6050(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28 + (param_2 & 0xffffffff) * 0x30) =
       param_3;
  return;
}



// FUNCTION 1437e6070 FUN_1437e6070 body=1142 status=ok
// SIG undefined FUN_1437e6070(void)

void FUN_1437e6070(longlong param_1,uint param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_res10 [8];
  float *local_88 [12];
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar13 = 0x24;
  uVar18 = (ulonglong)param_2;
  lVar15 = *(longlong *)(lVar5 + 0x18);
  uVar3 = *(uint *)(lVar5 + 0x38);
  pfVar1 = (float *)(lVar15 + uVar18 * 0x30);
  fVar29 = *pfVar1;
  fVar30 = pfVar1[1];
  fVar31 = pfVar1[2];
  fVar32 = pfVar1[3];
  pfVar1 = (float *)(lVar15 + 0x10 + uVar18 * 0x30);
  fVar33 = *pfVar1;
  fVar34 = pfVar1[1];
  fVar22 = pfVar1[2];
  fVar24 = pfVar1[3];
  if (param_2 == uVar3) {
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  else {
    lVar16 = 0x24;
    lVar11 = (ulonglong)*(uint *)(lVar15 + 0x20 + uVar18 * 0x30) * 0x30 + lVar15;
    if (*(uint *)(lVar11 + 0x28) != param_2) {
      lVar16 = 0x28;
    }
    lVar16 = (ulonglong)*(uint *)(lVar16 + lVar11) * 0x30 + lVar15;
    if (*(int *)(lVar11 + 0x20) == 0) {
      *(undefined4 *)(lVar15 + (longlong)(int)uVar3 * 0x30) = *(undefined4 *)(lVar5 + 0x28);
      *(uint *)(lVar5 + 0x28) = uVar3;
      *(int *)(lVar5 + 0x38) = (int)((lVar16 - *(longlong *)(lVar5 + 0x18)) / 0x30);
      *(undefined4 *)(lVar16 + 0x20) = 0;
    }
    else {
      *(int *)(lVar16 + 0x20) = *(int *)(lVar11 + 0x20);
      lVar6 = *(longlong *)(lVar5 + 0x18);
      lVar11 = (ulonglong)*(uint *)(lVar11 + 0x20) * 0x30;
      uVar3 = 0x24;
      if (*(int *)(lVar11 + 0x28 + lVar6) == *(int *)(lVar15 + 0x20 + uVar18 * 0x30)) {
        uVar3 = 0x28;
      }
      *(int *)((ulonglong)uVar3 + lVar11 + lVar6) = (int)((lVar16 - lVar6) / 0x30);
      iVar9 = *(int *)(lVar15 + 0x20 + uVar18 * 0x30);
      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar9 * 0x30) =
           *(undefined4 *)(lVar5 + 0x28);
      *(int *)(lVar5 + 0x28) = iVar9;
      lVar15 = *(longlong *)(lVar5 + 0x18);
      lVar16 = (ulonglong)*(uint *)(lVar16 + 0x20) * 0x30 + lVar15;
      do {
        uVar3 = *(uint *)(lVar16 + 0x20);
        pauVar12 = (undefined1 (*) [16])(((lVar16 - lVar15) / 0x30 & 0xffffffffU) * 0x30 + lVar15);
        uVar4 = *(uint *)(pauVar12[2] + 8);
        auVar23 = minps(*(undefined1 (*) [16])
                         (lVar15 + (ulonglong)*(uint *)(pauVar12[2] + 4) * 0x30),
                        *(undefined1 (*) [16])(lVar15 + (ulonglong)uVar4 * 0x30));
        auVar20 = maxps(*(undefined1 (*) [16])
                         (lVar15 + 0x10 + (ulonglong)*(uint *)(pauVar12[2] + 4) * 0x30),
                        *(undefined1 (*) [16])(lVar15 + 0x10 + (ulonglong)uVar4 * 0x30));
        *pauVar12 = auVar23;
        auVar19._0_4_ = -(uint)(fVar33 <= auVar20._0_4_ && auVar23._0_4_ <= fVar29);
        auVar19._4_4_ = -(uint)(fVar34 <= auVar20._4_4_ && auVar23._4_4_ <= fVar30);
        auVar19._8_4_ = -(uint)(fVar22 <= auVar20._8_4_ && auVar23._8_4_ <= fVar31);
        auVar19._12_4_ = -(uint)(fVar24 <= auVar20._12_4_ && auVar23._12_4_ <= fVar32);
        pauVar12[1] = auVar20;
        uVar8 = movmskps(uVar4,auVar19);
        if ((((byte)uVar8 & 7) == 7) || (uVar3 == 0)) break;
        lVar15 = *(longlong *)(lVar5 + 0x18);
        lVar16 = (ulonglong)uVar3 * 0x30 + lVar15;
      } while (lVar16 != 0);
    }
  }
  uVar7 = param_3[1];
  lVar15 = *(longlong *)(lVar5 + 0x18);
  puVar2 = (undefined8 *)(lVar15 + uVar18 * 0x30);
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  uVar7 = param_3[3];
  puVar2 = (undefined8 *)(lVar15 + 0x10 + uVar18 * 0x30);
  *puVar2 = param_3[2];
  puVar2[1] = uVar7;
  lVar15 = *(longlong *)(lVar5 + 0x18);
  uVar3 = *(uint *)(lVar5 + 0x38);
  auVar19 = *(undefined1 (*) [16])(lVar15 + uVar18 * 0x30);
  auVar20 = *(undefined1 (*) [16])(lVar15 + 0x10 + uVar18 * 0x30);
  if (uVar3 == 0) {
    *(uint *)(lVar5 + 0x38) = param_2;
    *(undefined4 *)(lVar15 + 0x20 + uVar18 * 0x30) = 0;
    return;
  }
  if (*(int *)(lVar5 + 0x28) == 0) {
    piVar10 = (int *)FUN_1437e5f00(lVar5 + 0x18,local_res10,1);
    iVar9 = *piVar10;
    if (iVar9 < 0) {
      uVar14 = 0;
      goto LAB_1437e62bc;
    }
  }
  else {
    iVar9 = 0;
  }
  uVar14 = (ulonglong)*(int *)(lVar5 + 0x28);
  *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + uVar14 * 0x30);
LAB_1437e62bc:
  if (-1 < iVar9) {
    uVar8 = (undefined4)uVar14;
    pauVar12 = (undefined1 (*) [16])((ulonglong)uVar3 * 0x30 + *(longlong *)(lVar5 + 0x18));
    pauVar17 = (undefined1 (*) [16])((uVar14 & 0xffffffff) * 0x30 + *(longlong *)(lVar5 + 0x18));
    uVar3 = *(uint *)(pauVar12[2] + 4);
    if (uVar3 != 0) {
      fVar29 = auVar20._0_4_ + auVar19._0_4_;
      fVar30 = auVar20._4_4_ + auVar19._4_4_;
      fVar31 = auVar20._8_4_ + auVar19._8_4_;
      fVar32 = auVar20._0_4_ - auVar19._0_4_;
      fVar33 = auVar20._4_4_ - auVar19._4_4_;
      fVar34 = auVar20._8_4_ - auVar19._8_4_;
      do {
        auVar23 = minps(*pauVar12,auVar19);
        local_88[0] = (float *)((ulonglong)uVar3 * 0x30 + *(longlong *)(lVar5 + 0x18));
        local_88[1] = (float *)((ulonglong)*(uint *)(pauVar12[2] + 8) * 0x30 +
                               *(longlong *)(lVar5 + 0x18));
        auVar21 = maxps(pauVar12[1],auVar20);
        *pauVar12 = auVar23;
        pauVar12[1] = auVar21;
        fVar22 = (local_88[0][4] + *local_88[0]) - fVar29;
        fVar24 = (local_88[0][5] + local_88[0][1]) - fVar30;
        fVar25 = (local_88[0][6] + local_88[0][2]) - fVar31;
        fVar26 = (local_88[1][4] + *local_88[1]) - fVar29;
        fVar27 = (local_88[1][5] + local_88[1][1]) - fVar30;
        fVar28 = (local_88[1][6] + local_88[1][2]) - fVar31;
        pauVar12 = (undefined1 (*) [16])
                   local_88[(fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28) *
                            ((local_88[1][5] - local_88[1][1]) + fVar33 +
                             (local_88[1][4] - *local_88[1]) + fVar32 +
                            (local_88[1][6] - local_88[1][2]) + fVar34) <
                            (fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25) *
                            ((local_88[0][5] - local_88[0][1]) + fVar33 +
                             (local_88[0][4] - *local_88[0]) + fVar32 +
                            (local_88[0][6] - local_88[0][2]) + fVar34)];
        uVar3 = *(uint *)(pauVar12[2] + 4);
      } while (uVar3 != 0);
    }
    if (*(uint *)pauVar12[2] == 0) {
      *(undefined4 *)(lVar5 + 0x38) = uVar8;
    }
    else {
      lVar15 = *(longlong *)(lVar5 + 0x18);
      lVar16 = (ulonglong)*(uint *)pauVar12[2] * 0x30;
      if (*(int *)(lVar16 + 0x28 + lVar15) == (int)(((longlong)pauVar12 - lVar15) / 0x30)) {
        lVar13 = 0x28;
      }
      *(undefined4 *)(lVar13 + lVar16 + lVar15) = uVar8;
    }
    *(undefined4 *)pauVar17[2] = *(undefined4 *)pauVar12[2];
    lVar15 = *(longlong *)(lVar5 + 0x18);
    *(uint *)(pauVar17[2] + 8) = param_2;
    *(int *)(pauVar17[2] + 4) = (int)(((longlong)pauVar12 - lVar15) / 0x30);
    *(undefined4 *)pauVar12[2] = uVar8;
    *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x20 + uVar18 * 0x30) = uVar8;
    auVar19 = minps(*pauVar12,auVar19);
    auVar20 = maxps(pauVar12[1],auVar20);
    *pauVar17 = auVar19;
    pauVar17[1] = auVar20;
  }
  return;
}



// FUNCTION 1437e64f0 FUN_1437e64f0 body=386 status=ok
// SIG undefined FUN_1437e64f0(void)

undefined8 *
FUN_1437e64f0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  int local_50;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_50 = 0x40;
  local_48[0] = param_4;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_58 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0xc00) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_58 + 0xc00U)) {
    local_58 = FUN_1437138c0(pvVar4,0xc00);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_58 + 0xc00U;
  }
  local_5c = 0x80000040;
  local_68 = local_58;
  FUN_1437e6fc0(param_2,&local_68,local_48);
  iVar2 = local_50;
  lVar1 = local_58;
  if (local_58 == local_68) {
    local_60 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar5,local_68,0x30,local_5c & 0x3fffffff);
  }
  *param_1 = CONCAT44(uStack_24,local_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return param_1;
}



// FUNCTION 1437e6680 FUN_1437e6680 body=141 status=ok
// SIG undefined FUN_1437e6680(void)

undefined4 FUN_1437e6680(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  local_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2];
  fStack_2c = param_2[3];
  auVar2._0_4_ = *param_3 - local_38;
  auVar2._4_4_ = param_3[1] - fStack_34;
  auVar2._8_4_ = param_3[2] - fStack_30;
  local_50 = 0;
  auVar2._12_4_ = fRam00000001467f06fc;
  local_28 = (float)(~-(uint)(auVar2._0_4_ == 0.0) & (uint)auVar2._0_4_);
  fStack_24 = (float)(~-(uint)(auVar2._4_4_ == 0.0) & (uint)auVar2._4_4_);
  fStack_20 = (float)(~-(uint)(auVar2._8_4_ == 0.0) & (uint)auVar2._8_4_);
  fStack_1c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar1._4_4_ = fStack_24;
  auVar1._0_4_ = local_28;
  auVar1._8_4_ = fStack_20;
  auVar1._12_4_ = fStack_1c;
  auVar3 = rcpps(auVar2,auVar1);
  local_18._0_4_ =
       ~-(uint)(local_28 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_28) * auVar3._0_4_);
  local_18._4_4_ =
       ~-(uint)(fStack_24 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_24) * auVar3._4_4_);
  local_18._8_4_ =
       ~-(uint)(fStack_20 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_20) * auVar3._8_4_);
  local_18._12_4_ =
       ~-(uint)(fStack_1c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_1c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_20 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_24 == 0.0),-(uint)(local_28 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_1c == 0.0) & 0x7f7fffee;
  local_18 = local_18 | auVar3;
  local_58 = param_4;
  FUN_1437e69a0(local_48,param_1,&local_38,&local_58);
  return local_50;
}



// FUNCTION 1437e6710 FUN_1437e6710 body=165 status=ok
// SIG undefined FUN_1437e6710(void)

undefined4
FUN_1437e6710(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  local_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2];
  fStack_2c = param_2[3];
  auVar2._0_4_ = *param_3 - local_38;
  auVar2._4_4_ = param_3[1] - fStack_34;
  auVar2._8_4_ = param_3[2] - fStack_30;
  local_58 = param_5;
  local_50 = 0;
  auVar2._12_4_ = fRam00000001467f06fc;
  local_28 = (float)(~-(uint)(auVar2._0_4_ == 0.0) & (uint)auVar2._0_4_);
  fStack_24 = (float)(~-(uint)(auVar2._4_4_ == 0.0) & (uint)auVar2._4_4_);
  fStack_20 = (float)(~-(uint)(auVar2._8_4_ == 0.0) & (uint)auVar2._8_4_);
  fStack_1c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar1._4_4_ = fStack_24;
  auVar1._0_4_ = local_28;
  auVar1._8_4_ = fStack_20;
  auVar1._12_4_ = fStack_1c;
  auVar3 = rcpps(auVar2,auVar1);
  local_18._0_4_ =
       ~-(uint)(local_28 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_28) * auVar3._0_4_);
  local_18._4_4_ =
       ~-(uint)(fStack_24 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_24) * auVar3._4_4_);
  local_18._8_4_ =
       ~-(uint)(fStack_20 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_20) * auVar3._8_4_);
  local_18._12_4_ =
       ~-(uint)(fStack_1c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_1c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_20 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_24 == 0.0),-(uint)(local_28 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_1c == 0.0) & 0x7f7fffee;
  local_18 = local_18 | auVar3;
  FUN_1437e6b30(local_48,param_1,&local_38,local_18._0_8_,&local_58);
  return local_50;
}



// FUNCTION 1437e67c0 FUN_1437e67c0 body=109 status=ok
// SIG undefined FUN_1437e67c0(void)

undefined4
FUN_1437e67c0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  local_58 = *param_3 * *param_3;
  fStack_54 = param_3[1] * param_3[1];
  fStack_50 = param_3[2] * param_3[2];
  fStack_4c = param_3[3] * param_3[3];
  local_38[0] = 0xffffffff;
  fStack_1c = fStack_4c;
  local_18 = param_4;
  FUN_1437e64f0(local_48,param_1,param_2,local_38,&local_58);
  *param_5 = CONCAT44(uStack_24,local_28);
  param_5[1] = CONCAT44(fStack_1c,uStack_20);
  return local_38[0];
}



// FUNCTION 1437e6830 FUN_1437e6830 body=365 status=ok
// SIG undefined FUN_1437e6830(void)

undefined4 FUN_1437e6830(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  longlong local_48;
  int local_40;
  undefined8 *local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_60 = local_res8;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_38[0] = &local_68;
  local_res8[0] = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_40 = 0x40;
  local_68 = param_3;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_48 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0xc00) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_48 + 0xc00U)) {
    local_48 = FUN_1437138c0(pvVar4,0xc00);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_48 + 0xc00U;
  }
  local_4c = 0x80000040;
  local_58 = local_48;
  FUN_1437e6cd0(param_1,&local_58,local_38);
  iVar2 = local_40;
  lVar1 = local_48;
  if (local_48 == local_58) {
    local_50 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar5,local_58,0x30,local_4c & 0x3fffffff);
  }
  return local_res8[0];
}



// FUNCTION 1437e69a0 FUN_1437e69a0 body=389 status=ok
// SIG undefined FUN_1437e69a0(void)

undefined4 *
FUN_1437e69a0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58 [2];
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
  undefined4 local_18;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = *(undefined4 *)(param_3 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_30 = *(undefined4 *)(param_3 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_28 = *(undefined4 *)(param_3 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_20 = *(undefined4 *)(param_3 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_18 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_60 = 0x40;
  local_58[0] = param_4;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_68 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0xc00) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_68 + 0xc00U)) {
    local_68 = FUN_1437138c0(pvVar4,0xc00);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_68 + 0xc00U;
  }
  local_6c = 0x80000040;
  local_78 = local_68;
  FUN_1437e7450(param_2,&local_78,local_58);
  iVar2 = local_60;
  lVar1 = local_68;
  if (local_68 == local_78) {
    local_70 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar5,local_78,0x30,local_6c & 0x3fffffff);
  }
  *param_1 = uStack_2c;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_2c;
  param_1[3] = uStack_2c;
  return param_1;
}



// FUNCTION 1437e6b30 FUN_1437e6b30 body=405 status=ok
// SIG undefined FUN_1437e6b30(void)

undefined4 *
FUN_1437e6b30(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  int local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
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
  undefined4 local_18;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = param_3[2];
  uStack_40 = param_3[3];
  local_38 = *(undefined4 *)(param_3 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_30 = *(undefined4 *)(param_3 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_68[0] = param_5;
  local_18 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  local_70 = 0x40;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_78 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0xc00) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_78 + 0xc00U)) {
    local_78 = FUN_1437138c0(pvVar4,0xc00);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_78 + 0xc00U;
  }
  local_7c = 0x80000040;
  local_88 = local_78;
  FUN_1437e7920(param_2,&local_88,local_68);
  iVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == local_88) {
    local_80 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(uVar5,local_88,0x30,local_7c & 0x3fffffff);
  }
  *param_1 = uStack_40._4_4_;
  param_1[1] = uStack_40._4_4_;
  param_1[2] = uStack_40._4_4_;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}



// FUNCTION 1437e6cd0 FUN_1437e6cd0 body=743 status=ok
// SIG undefined FUN_1437e6cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e6cd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [14];
  unkbyte10 Var11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  longlong lVar15;
  undefined4 in_EAX;
  undefined4 uVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  byte bVar20;
  float *pfVar21;
  uint uVar22;
  float fVar23;
  ulonglong uVar24;
  uint *puVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined2 uVar84;
  undefined1 auVar34 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined2 uVar85;
  undefined1 auVar49 [12];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar35 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar50 [16];
  
  if ((int)param_1[1] != 0) {
    uVar24 = 0;
    lVar15 = param_2[1];
    iVar19 = -(uint)(*(float *)(param_1 + 2) <= *(float *)(param_3 + 4) &&
                    *(float *)(param_3 + 2) <= *(float *)(param_1 + 4));
    uVar26 = (undefined1)iVar19;
    uVar27 = (undefined1)((uint)iVar19 >> 8);
    uVar28 = (undefined1)((uint)iVar19 >> 0x10);
    uVar29 = (undefined1)((uint)iVar19 >> 0x18);
    iVar8 = -(uint)(*(float *)((longlong)param_1 + 0x14) <= *(float *)((longlong)param_3 + 0x24) &&
                   *(float *)((longlong)param_3 + 0x14) <= *(float *)((longlong)param_1 + 0x24));
    uVar30 = (undefined1)iVar8;
    uVar31 = (undefined1)((uint)iVar8 >> 8);
    uVar32 = (undefined1)((uint)iVar8 >> 0x10);
    uVar33 = (undefined1)((uint)iVar8 >> 0x18);
    auVar48[4] = uVar30;
    auVar48._0_4_ = iVar19;
    auVar48[5] = uVar31;
    auVar48[6] = uVar32;
    auVar48[7] = uVar33;
    auVar48._8_4_ =
         -(uint)(*(float *)(param_1 + 3) <= *(float *)(param_3 + 5) &&
                *(float *)(param_3 + 3) <= *(float *)(param_1 + 5));
    auVar48._12_4_ =
         -(uint)(*(float *)((longlong)param_1 + 0x1c) <= *(float *)((longlong)param_3 + 0x2c) &&
                *(float *)((longlong)param_3 + 0x1c) <= *(float *)((longlong)param_1 + 0x2c));
    uVar16 = movmskps(in_EAX,auVar48);
    if (((byte)uVar16 & 7) == 7) {
      puVar25 = (uint *)*param_1;
      fVar70 = *(float *)(param_1 + 4);
      fVar71 = *(float *)((longlong)param_1 + 0x24);
      fVar72 = *(float *)(param_1 + 5);
      fVar73 = *(float *)((longlong)param_1 + 0x2c);
      fVar74 = *(float *)(param_1 + 2);
      fVar75 = *(float *)((longlong)param_1 + 0x14);
      fVar76 = *(float *)(param_1 + 3);
      fVar77 = *(float *)((longlong)param_1 + 0x1c);
LAB_1437e6d50:
      if ((char)*(byte *)((longlong)puVar25 + 3) < '\0') {
        lVar2 = *param_1;
        uVar22 = (int)uVar24 + 1;
        uVar7 = CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) ^
                CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26)));
        uVar26 = (undefined1)(uVar7 >> 8);
        uVar27 = (undefined1)(uVar7 >> 0x10);
        uVar28 = (undefined1)(uVar7 >> 0x18);
        uVar9 = CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) ^
                CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
        uVar29 = (undefined1)(uVar9 >> 8);
        uVar30 = (undefined1)(uVar9 >> 0x10);
        uVar31 = (undefined1)(uVar9 >> 0x18);
        fVar23 = (float)((int)uVar24 +
                        ((*(byte *)((longlong)puVar25 + 3) & 0x7f) << 0x10 |
                        (uint)(ushort)puVar25[1]) * 2);
        uVar24 = (ulonglong)(uint)fVar23;
        fVar66 = (fVar70 - fVar74) * _DAT_1467f0870;
        fVar67 = (fVar71 - fVar75) * fRam00000001467f0874;
        fVar68 = (fVar72 - fVar76) * fRam00000001467f0878;
        fVar69 = (fVar73 - fVar77) * fRam00000001467f087c;
        puVar1 = (uint *)(lVar2 + (longlong)(int)uVar22 * 6);
        uVar17 = *puVar1;
        auVar34._4_8_ = 0;
        auVar34._0_4_ = uVar17;
        auVar43._12_3_ = 0;
        auVar43._0_12_ = auVar34;
        auVar43[0xf] = uVar31;
        auVar42._14_2_ = auVar43._14_2_;
        auVar42[0xc] = 0;
        auVar42._0_12_ = auVar34;
        auVar42[0xd] = uVar30;
        auVar41._13_3_ = auVar42._13_3_;
        auVar41[0xc] = 0;
        auVar41._0_12_ = auVar34;
        auVar40._12_4_ = auVar41._12_4_;
        auVar40._4_7_ = 0;
        auVar40._0_4_ = uVar17;
        auVar40[0xb] = uVar29;
        auVar39._11_5_ = auVar40._11_5_;
        auVar39._4_7_ = 0;
        auVar39._0_4_ = uVar17;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._4_5_ = 0;
        auVar38._0_4_ = uVar17;
        auVar38[9] = (char)uVar9;
        auVar37._9_7_ = auVar38._9_7_;
        auVar37._4_5_ = 0;
        auVar37._0_4_ = uVar17;
        Var11 = CONCAT91(CONCAT81(auVar37._8_8_,uVar28),(char)(uVar17 >> 0x18));
        auVar36._6_10_ = Var11;
        auVar36[5] = uVar27;
        auVar36[4] = (char)(uVar17 >> 0x10);
        auVar36._0_4_ = uVar17;
        auVar10._2_12_ = auVar36._4_12_;
        auVar10[1] = uVar26;
        auVar10[0] = (char)(uVar17 >> 8);
        uVar84 = CONCAT11((char)uVar7,(char)uVar17);
        auVar35._2_14_ = auVar10;
        uVar6 = (undefined2)(uVar9 >> 0x10);
        auVar47._0_12_ = auVar35._0_12_;
        auVar47._12_2_ = (short)Var11;
        auVar47._14_2_ = uVar6;
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_10_ = auVar35._0_10_;
        auVar46._10_2_ = (short)uVar9;
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._0_8_ = auVar35._0_8_;
        auVar45._8_2_ = auVar36._4_2_;
        uVar5 = (undefined2)(uVar7 >> 0x10);
        auVar12._4_8_ = auVar45._8_8_;
        auVar12._2_2_ = uVar5;
        auVar12._0_2_ = auVar10._0_2_;
        auVar44._0_4_ = CONCAT22((short)uVar7,uVar84);
        auVar44._4_12_ = auVar12;
        uVar17 = *(uint *)(lVar2 + (longlong)(int)fVar23 * 6);
        puVar25 = (uint *)(lVar2 + (longlong)(int)fVar23 * 6);
        auVar49._4_8_ = 0;
        auVar49._0_4_ = uVar17;
        auVar58._12_3_ = 0;
        auVar58._0_12_ = auVar49;
        auVar58[0xf] = uVar31;
        auVar57._14_2_ = auVar58._14_2_;
        auVar57[0xc] = 0;
        auVar57._0_12_ = auVar49;
        auVar57[0xd] = uVar30;
        auVar56._13_3_ = auVar57._13_3_;
        auVar56[0xc] = 0;
        auVar56._0_12_ = auVar49;
        auVar55._12_4_ = auVar56._12_4_;
        auVar55._4_7_ = 0;
        auVar55._0_4_ = uVar17;
        auVar55[0xb] = uVar29;
        auVar54._11_5_ = auVar55._11_5_;
        auVar54._4_7_ = 0;
        auVar54._0_4_ = uVar17;
        auVar53._10_6_ = auVar54._10_6_;
        auVar53._4_5_ = 0;
        auVar53._0_4_ = uVar17;
        auVar53[9] = (char)uVar9;
        auVar52._9_7_ = auVar53._9_7_;
        auVar52._4_5_ = 0;
        auVar52._0_4_ = uVar17;
        Var11 = CONCAT91(CONCAT81(auVar52._8_8_,uVar28),(char)(uVar17 >> 0x18));
        auVar51._6_10_ = Var11;
        auVar51[5] = uVar27;
        auVar51[4] = (char)(uVar17 >> 0x10);
        auVar51._0_4_ = uVar17;
        auVar13._2_12_ = auVar51._4_12_;
        auVar13[1] = uVar26;
        auVar13[0] = (char)(uVar17 >> 8);
        uVar85 = CONCAT11((char)uVar7,(char)uVar17);
        auVar50._2_14_ = auVar13;
        auVar48 = auVar44 & _DAT_146809ae0;
        fVar79 = (float)(auVar12._0_4_ >> 4);
        fVar81 = (float)(auVar45._8_4_ >> 4);
        auVar62._0_12_ = auVar50._0_12_;
        auVar62._12_2_ = (short)Var11;
        auVar62._14_2_ = uVar6;
        auVar61._12_4_ = auVar62._12_4_;
        auVar61._0_10_ = auVar50._0_10_;
        auVar61._10_2_ = (short)uVar9;
        auVar60._10_6_ = auVar61._10_6_;
        auVar60._0_8_ = auVar50._0_8_;
        auVar60._8_2_ = auVar51._4_2_;
        auVar14._4_8_ = auVar60._8_8_;
        auVar14._2_2_ = uVar5;
        auVar14._0_2_ = auVar13._0_2_;
        auVar59._0_4_ = CONCAT22((short)uVar7,uVar85);
        auVar59._4_12_ = auVar14;
        auVar63 = auVar59 & _DAT_146809ae0;
        fVar64 = (float)(auVar14._0_4_ >> 4);
        fVar65 = (float)(auVar60._8_4_ >> 4);
        fVar78 = (float)(auVar44._0_4_ >> 4) * (float)(auVar44._0_4_ >> 4) * fVar66 + fVar74;
        fVar80 = fVar79 * fVar79 * fVar67 + fVar75;
        fVar82 = fVar81 * fVar81 * fVar68 + fVar76;
        fVar83 = (float)(auVar46._12_4_ >> 4) * (float)(auVar46._12_4_ >> 4) * fVar69 + fVar77;
        fVar74 = fVar74 + (float)(auVar59._0_4_ >> 4) * (float)(auVar59._0_4_ >> 4) * fVar66;
        fVar75 = fVar75 + fVar64 * fVar64 * fVar67;
        fVar76 = fVar76 + fVar65 * fVar65 * fVar68;
        fVar77 = fVar77 + (float)(auVar61._12_4_ >> 4) * (float)(auVar61._12_4_ >> 4) * fVar69;
        fVar64 = fVar70 - (float)auVar63._0_4_ * (float)auVar63._0_4_ * fVar66;
        fVar65 = fVar71 - (float)auVar63._4_4_ * (float)auVar63._4_4_ * fVar67;
        fVar79 = fVar72 - (float)auVar63._8_4_ * (float)auVar63._8_4_ * fVar68;
        fVar81 = fVar73 - (float)auVar63._12_4_ * (float)auVar63._12_4_ * fVar69;
        iVar19 = -(uint)(fVar75 <= *(float *)((longlong)param_3 + 0x24) &&
                        *(float *)((longlong)param_3 + 0x14) <= fVar65);
        fVar66 = fVar70 - (float)auVar48._0_4_ * (float)auVar48._0_4_ * fVar66;
        fVar67 = fVar71 - (float)auVar48._4_4_ * (float)auVar48._4_4_ * fVar67;
        fVar68 = fVar72 - (float)auVar48._8_4_ * (float)auVar48._8_4_ * fVar68;
        fVar69 = fVar73 - (float)auVar48._12_4_ * (float)auVar48._12_4_ * fVar69;
        auVar63[4] = (char)iVar19;
        auVar63._0_4_ =
             -(uint)(fVar74 <= *(float *)(param_3 + 4) && *(float *)(param_3 + 2) <= fVar64);
        auVar63[5] = (char)((uint)iVar19 >> 8);
        auVar63[6] = (char)((uint)iVar19 >> 0x10);
        auVar63[7] = (char)((uint)iVar19 >> 0x18);
        auVar63._8_4_ =
             -(uint)(fVar76 <= *(float *)(param_3 + 5) && *(float *)(param_3 + 3) <= fVar79);
        auVar63._12_4_ =
             -(uint)(fVar77 <= *(float *)((longlong)param_3 + 0x2c) &&
                    *(float *)((longlong)param_3 + 0x1c) <= fVar81);
        uVar17 = movmskps(fVar23,auVar63);
        bVar20 = 0;
        if ((char)(uVar17 & 7) == '\a') {
          bVar20 = 2;
        }
        iVar19 = -(uint)(fVar78 <= *(float *)(param_3 + 4) && *(float *)(param_3 + 2) <= fVar66);
        uVar26 = (undefined1)iVar19;
        uVar27 = (undefined1)((uint)iVar19 >> 8);
        uVar28 = (undefined1)((uint)iVar19 >> 0x10);
        uVar29 = (undefined1)((uint)iVar19 >> 0x18);
        iVar8 = -(uint)(fVar80 <= *(float *)((longlong)param_3 + 0x24) &&
                       *(float *)((longlong)param_3 + 0x14) <= fVar67);
        uVar30 = (undefined1)iVar8;
        uVar31 = (undefined1)((uint)iVar8 >> 8);
        uVar32 = (undefined1)((uint)iVar8 >> 0x10);
        uVar33 = (undefined1)((uint)iVar8 >> 0x18);
        auVar4[4] = uVar30;
        auVar4._0_4_ = iVar19;
        auVar4[5] = uVar31;
        auVar4[6] = uVar32;
        auVar4[7] = uVar33;
        auVar4._8_4_ = -(uint)(fVar82 <= *(float *)(param_3 + 5) &&
                              *(float *)(param_3 + 3) <= fVar68);
        auVar4._12_4_ =
             -(uint)(fVar83 <= *(float *)((longlong)param_3 + 0x2c) &&
                    *(float *)((longlong)param_3 + 0x1c) <= fVar69);
        uVar16 = movmskps(uVar17 & 7,auVar4);
        bVar20 = bVar20 | ((byte)uVar16 & 7) == 7;
        if (bVar20 == 0) goto LAB_1437e6f3f;
        if (bVar20 != 1) goto code_r0x0001437e6e68;
        goto LAB_1437e6eb9;
      }
      plVar3 = (longlong *)*param_3;
      if (-1 < *(int *)plVar3[1]) {
        lVar2 = *plVar3;
        iVar19 = *(int *)(lVar2 + 8) + 1;
        uVar17 = *(uint *)(lVar2 + 0xc) & 0x3fffffff;
        if ((int)uVar17 < iVar19) {
          iVar8 = uVar17 * 2;
          if (iVar19 < iVar8) {
            iVar19 = iVar8;
          }
          iVar19 = FUN_14370c310(&PTR_vftable_1467f0638,lVar2,iVar19,4);
          if (iVar19 < 0) {
            *(undefined4 *)plVar3[1] = 0x80040200;
            goto LAB_1437e6f3f;
          }
        }
        plVar3 = (longlong *)*plVar3;
        *(uint *)(*plVar3 + (longlong)(int)plVar3[1] * 4) =
             (uint)CONCAT12(*(undefined1 *)((longlong)puVar25 + 3),(short)puVar25[1]);
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      goto LAB_1437e6f3f;
    }
  }
  return;
code_r0x0001437e6e68:
  fVar70 = fVar64;
  fVar71 = fVar65;
  fVar72 = fVar79;
  fVar73 = fVar81;
  if (bVar20 != 2) {
    if (bVar20 == 3) {
      uVar18 = FUN_143703a50();
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar18,param_2,0x30);
      }
      pfVar21 = (float *)((longlong)(int)param_2[1] * 0x30 + *param_2);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *pfVar21 = fVar74;
      pfVar21[1] = fVar75;
      pfVar21[2] = fVar76;
      pfVar21[3] = fVar77;
      pfVar21[4] = fVar64;
      pfVar21[5] = fVar65;
      pfVar21[6] = fVar79;
      pfVar21[7] = fVar81;
      pfVar21[8] = fVar23;
LAB_1437e6eb9:
      uVar24 = (ulonglong)uVar22;
      puVar25 = puVar1;
      fVar70 = fVar66;
      fVar71 = fVar67;
      fVar72 = fVar68;
      fVar73 = fVar69;
      fVar74 = fVar78;
      fVar75 = fVar80;
      fVar76 = fVar82;
      fVar77 = fVar83;
    }
    else {
LAB_1437e6f3f:
      if ((int)param_2[1] <= (int)lVar15) {
        return;
      }
      iVar19 = (int)param_2[1] + -1;
      pfVar21 = (float *)((longlong)iVar19 * 0x30 + *param_2);
      *(int *)(param_2 + 1) = iVar19;
      uVar24 = (ulonglong)(int)pfVar21[8];
      fVar74 = *pfVar21;
      fVar75 = pfVar21[1];
      fVar76 = pfVar21[2];
      fVar77 = pfVar21[3];
      puVar25 = (uint *)(*param_1 + uVar24 * 6);
      fVar70 = pfVar21[4];
      fVar71 = pfVar21[5];
      fVar72 = pfVar21[6];
      fVar73 = pfVar21[7];
    }
  }
  goto LAB_1437e6d50;
}



// FUNCTION 1437e6fc0 FUN_1437e6fc0 body=1157 status=ok
// SIG undefined FUN_1437e6fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e6fc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  uint5 uVar9;
  unkbyte9 Var10;
  uint5 uVar11;
  unkbyte9 Var12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  float *pfVar18;
  uint uVar19;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  byte bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar40;
  byte bVar42;
  undefined1 auVar41 [16];
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
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  uint *local_118;
  undefined1 local_108 [16];
  float local_f8 [2];
  undefined8 uStack_f0;
  float local_e8 [4];
  float local_d8;
  uint *local_c8 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  uint *local_88;
  undefined1 local_78 [80];
  uint uVar20;
  
  if ((int)param_1[1] != 0) {
    auVar34 = *(undefined1 (*) [16])(param_3 + 2);
    lVar15 = param_2[1];
    pfVar1 = (float *)(param_3 + 4);
    pauVar2 = (undefined1 (*) [16])(param_3 + 2);
    local_118 = (uint *)*param_1;
    _local_138 = *(undefined1 (*) [16])(param_1 + 4);
    fVar33 = local_138._0_4_;
    fVar39 = local_138._4_4_;
    fVar28 = local_138._8_4_;
    fVar48 = local_138._12_4_;
    _local_148 = *(undefined1 (*) [16])(param_1 + 2);
    fVar37 = local_148._0_4_;
    fVar40 = local_148._4_4_;
    fVar31 = local_148._8_4_;
    fVar49 = local_148._12_4_;
    auVar26 = maxps(_local_148,auVar34);
    local_128 = 0.0;
    auVar26 = minps(_local_138,auVar26);
    fVar32 = auVar34._0_4_ - auVar26._0_4_;
    fVar36 = auVar34._4_4_ - auVar26._4_4_;
    fVar38 = auVar34._8_4_ - auVar26._8_4_;
    if (fVar36 * fVar36 + fVar32 * fVar32 + fVar38 * fVar38 <= *pfVar1) {
LAB_1437e7080:
      while (bVar35 = *(byte *)((longlong)local_118 + 3), (char)bVar35 < '\0') {
        lVar22 = *param_1;
        local_d8 = (float)((int)local_128 + 1);
        local_98 = (float)((int)local_128 +
                          ((bVar35 & 0x7f) << 0x10 | (uint)(ushort)local_118[1]) * 2);
        fVar44 = (fVar33 - fVar37) * _DAT_1467f0870;
        fVar45 = (fVar39 - fVar40) * fRam00000001467f0874;
        fVar46 = (fVar28 - fVar31) * fRam00000001467f0878;
        fVar47 = (fVar48 - fVar49) * fRam00000001467f087c;
        local_c8[0] = (uint *)(lVar22 + (longlong)(int)local_d8 * 6);
        uVar20 = *local_c8[0];
        bVar35 = (byte)(uVar20 >> 0x18);
        auVar7[0xc] = bVar35;
        auVar7._0_12_ = ZEXT712(0);
        uVar9 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar20 >> 0x10));
        auVar13._5_8_ = 0;
        auVar13._0_5_ = uVar9;
        Var10 = CONCAT72(SUB137(auVar13 << 0x40,6),(ushort)(byte)(uVar20 >> 8));
        auVar34._0_4_ = uVar20 & 0xff;
        auVar34._4_9_ = Var10;
        auVar34._13_3_ = 0;
        uVar19 = *(uint *)(lVar22 + (longlong)(int)local_98 * 6);
        local_88 = (uint *)(lVar22 + (longlong)(int)local_98 * 6);
        bVar42 = (byte)(uVar19 >> 0x18);
        auVar34 = auVar34 & _DAT_146809ae0;
        auVar8[0xc] = bVar42;
        auVar8._0_12_ = ZEXT712(0);
        uVar11 = CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar19 >> 0x10));
        auVar14._5_8_ = 0;
        auVar14._0_5_ = uVar11;
        Var12 = CONCAT72(SUB137(auVar14 << 0x40,6),(ushort)(byte)(uVar19 >> 8));
        auVar41._0_4_ = uVar19 & 0xff;
        auVar41._4_9_ = Var12;
        auVar41._13_3_ = 0;
        fVar50 = (float)(uVar20 >> 4 & 0xf);
        fVar51 = (float)((uint)Var10 >> 4);
        fVar52 = (float)((uint)uVar9 >> 4);
        fVar53 = (float)(bVar35 >> 4);
        auVar41 = auVar41 & _DAT_146809ae0;
        fVar32 = (float)(uVar19 >> 4 & 0xf);
        fVar36 = (float)((uint)Var12 >> 4);
        fVar38 = (float)((uint)uVar11 >> 4);
        fVar43 = (float)(bVar42 >> 4);
        local_e8[0] = fVar33 - (float)auVar34._0_4_ * (float)auVar34._0_4_ * fVar44;
        local_e8[1] = fVar39 - (float)auVar34._4_4_ * (float)auVar34._4_4_ * fVar45;
        local_e8[2] = fVar28 - (float)auVar34._8_4_ * (float)auVar34._8_4_ * fVar46;
        local_e8[3] = fVar48 - (float)auVar34._12_4_ * (float)auVar34._12_4_ * fVar47;
        auVar34 = *pauVar2;
        local_f8[0] = fVar50 * fVar50 * fVar44 + fVar37;
        local_f8[1] = fVar51 * fVar51 * fVar45 + fVar40;
        uStack_f0._0_4_ = fVar52 * fVar52 * fVar46 + fVar31;
        uStack_f0._4_4_ = fVar53 * fVar53 * fVar47 + fVar49;
        auVar29._4_4_ = local_e8[1];
        auVar29._0_4_ = local_e8[0];
        auVar29._8_4_ = local_e8[2];
        auVar29._12_4_ = local_e8[3];
        local_a8 = fVar33 - (float)auVar41._0_4_ * (float)auVar41._0_4_ * fVar44;
        fStack_a4 = fVar39 - (float)auVar41._4_4_ * (float)auVar41._4_4_ * fVar45;
        fStack_a0 = fVar28 - (float)auVar41._8_4_ * (float)auVar41._8_4_ * fVar46;
        fStack_9c = fVar48 - (float)auVar41._12_4_ * (float)auVar41._12_4_ * fVar47;
        auVar26._4_4_ = local_f8[1];
        auVar26._0_4_ = local_f8[0];
        auVar26._8_4_ = (float)uStack_f0;
        auVar26._12_4_ = uStack_f0._4_4_;
        auVar26 = maxps(auVar26,auVar34);
        local_b8 = fVar32 * fVar32 * fVar44 + fVar37;
        fStack_b4 = fVar36 * fVar36 * fVar45 + fVar40;
        fStack_b0 = fVar38 * fVar38 * fVar46 + fVar31;
        fStack_ac = fVar43 * fVar43 * fVar47 + fVar49;
        auVar26 = minps(auVar29,auVar26);
        fVar33 = auVar34._0_4_ - auVar26._0_4_;
        fVar37 = auVar34._4_4_ - auVar26._4_4_;
        fVar39 = auVar34._8_4_ - auVar26._8_4_;
        auVar30._4_4_ = fStack_a4;
        auVar30._0_4_ = local_a8;
        auVar30._8_4_ = fStack_a0;
        auVar30._12_4_ = fStack_9c;
        auVar27._4_4_ = fStack_b4;
        auVar27._0_4_ = local_b8;
        auVar27._8_4_ = fStack_b0;
        auVar27._12_4_ = fStack_ac;
        fVar40 = fVar37 * fVar37 + fVar33 * fVar33 + fVar39 * fVar39;
        auVar34 = *pauVar2;
        auVar26 = maxps(auVar27,auVar34);
        auVar26 = minps(auVar30,auVar26);
        fVar33 = auVar34._0_4_ - auVar26._0_4_;
        fVar37 = auVar34._4_4_ - auVar26._4_4_;
        fVar39 = auVar34._8_4_ - auVar26._8_4_;
        fVar33 = fVar37 * fVar37 + fVar33 * fVar33 + fVar39 * fVar39;
        uVar20 = (uint)(fVar33 <= *pfVar1);
        uVar19 = -uVar20;
        bVar35 = -(uVar20 != 0) & 2U | fVar40 <= *pfVar1;
        if (bVar35 == 3) {
          uVar19 = (uint)(fVar33 < fVar40);
          *(uint *)(param_3 + 6) = (uint)(fVar33 < fVar40);
        }
        if (bVar35 == 0) goto LAB_1437e73a7;
        if (bVar35 == 1) {
          local_148._4_4_ = local_f8[1];
          local_148._0_4_ = local_f8[0];
          fStack_140 = (float)uStack_f0;
          fStack_13c = uStack_f0._4_4_;
          local_138._4_4_ = local_e8[1];
          local_138._0_4_ = local_e8[0];
          fStack_130 = local_e8[2];
          fStack_12c = local_e8[3];
          fVar33 = local_e8[0];
          fVar39 = local_e8[1];
          fVar28 = local_e8[2];
          fVar48 = local_e8[3];
          fVar37 = local_f8[0];
          fVar40 = local_f8[1];
          fVar31 = (float)uStack_f0;
          fVar49 = uStack_f0._4_4_;
          local_128 = local_d8;
          local_118 = local_c8[0];
        }
        else if (bVar35 == 2) {
          local_148._4_4_ = fStack_b4;
          local_148._0_4_ = local_b8;
          fStack_140 = fStack_b0;
          fStack_13c = fStack_ac;
          local_138._4_4_ = fStack_a4;
          local_138._0_4_ = local_a8;
          fStack_130 = fStack_a0;
          fStack_12c = fStack_9c;
          fVar33 = local_a8;
          fVar39 = fStack_a4;
          fVar28 = fStack_a0;
          fVar48 = fStack_9c;
          fVar37 = local_b8;
          fVar40 = fStack_b4;
          fVar31 = fStack_b0;
          fVar49 = fStack_ac;
          local_128 = local_98;
          local_118 = local_88;
        }
        else {
          if (bVar35 != 3) goto LAB_1437e73a7;
          lVar22 = param_3[6];
          lVar25 = (longlong)(int)lVar22;
          uVar17 = FUN_143703a50(uVar19);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar17,param_2,0x30);
          }
          lVar16 = param_2[1];
          *(int *)(param_2 + 1) = (int)lVar16 + 1;
          puVar23 = (undefined8 *)((longlong)(int)lVar16 * 0x30 + *param_2);
          lVar22 = (longlong)(1 - (int)lVar22);
          fVar33 = local_e8[lVar22 * 0x10 + 4];
          uVar17 = (&uStack_f0)[lVar22 * 8];
          fVar37 = local_e8[lVar22 * 0x10];
          fVar39 = local_e8[lVar22 * 0x10 + 1];
          fVar40 = local_e8[lVar22 * 0x10 + 2];
          fVar28 = local_e8[lVar22 * 0x10 + 3];
          *puVar23 = *(undefined8 *)(local_f8 + lVar22 * 0x10);
          puVar23[1] = uVar17;
          *(float *)(puVar23 + 2) = fVar37;
          *(float *)((longlong)puVar23 + 0x14) = fVar39;
          *(float *)(puVar23 + 3) = fVar40;
          *(float *)((longlong)puVar23 + 0x1c) = fVar28;
          *(float *)(puVar23 + 4) = fVar33;
          local_148._4_4_ = local_f8[lVar25 * 0x10 + 1];
          local_148._0_4_ = local_f8[lVar25 * 0x10];
          fStack_140 = *(float *)(&uStack_f0 + lVar25 * 8);
          fStack_13c = local_e8[lVar25 * 0x10 + -1];
          local_138._4_4_ = local_e8[lVar25 * 0x10 + 1];
          local_138._0_4_ = local_e8[lVar25 * 0x10];
          fStack_130 = local_e8[lVar25 * 0x10 + 2];
          fStack_12c = local_e8[lVar25 * 0x10 + 3];
          fVar33 = local_e8[lVar25 * 0x10];
          fVar39 = local_e8[lVar25 * 0x10 + 1];
          fVar28 = local_e8[lVar25 * 0x10 + 2];
          fVar48 = local_e8[lVar25 * 0x10 + 3];
          fVar37 = local_f8[lVar25 * 0x10];
          fVar40 = local_f8[lVar25 * 0x10 + 1];
          fVar31 = *(float *)(&uStack_f0 + lVar25 * 8);
          fVar49 = local_e8[lVar25 * 0x10 + -1];
          local_128 = local_e8[lVar25 * 0x10 + 4];
          local_118 = local_c8[lVar25 * 8];
        }
      }
      puVar3 = (uint *)*param_3;
      local_108 = *pauVar2;
      plVar4 = *(longlong **)(puVar3 + 8);
      if (plVar4 == (longlong *)0x0) {
        auVar6._4_4_ = fVar40;
        auVar6._0_4_ = fVar37;
        auVar6._8_4_ = fVar31;
        auVar6._12_4_ = fVar49;
        auVar34 = maxps(local_108,auVar6);
        auVar5._4_4_ = fVar39;
        auVar5._0_4_ = fVar33;
        auVar5._8_4_ = fVar28;
        auVar5._12_4_ = fVar48;
        local_108 = minps(auVar34,auVar5);
        fVar28 = local_108._0_4_ - *(float *)*pauVar2;
        fVar31 = local_108._4_4_ - *(float *)((longlong)param_3 + 0x14);
        fVar40 = local_108._8_4_ - *(float *)(param_3 + 3);
        fVar28 = fVar28 * fVar28;
        fVar31 = fVar31 * fVar31;
        fVar40 = fVar40 * fVar40;
        fVar33 = fVar31 + fVar28 + fVar40;
        fVar37 = fVar31 + fVar28 + fVar40;
        fVar39 = fVar31 + fVar28 + fVar40;
        fVar40 = fVar31 + fVar28 + fVar40;
      }
      else {
        pfVar18 = (float *)(**(code **)(*plVar4 + 8))
                                     (plVar4,local_78,
                                      (ulonglong)CONCAT12(bVar35,(short)local_118[1]),local_148,
                                      pauVar2,local_108,pfVar1);
        fVar33 = *pfVar18;
        fVar37 = pfVar18[1];
        fVar39 = pfVar18[2];
        fVar40 = pfVar18[3];
      }
      if (fVar33 < *pfVar1) {
        *pfVar1 = fVar33;
        *(float *)((longlong)param_3 + 0x24) = fVar37;
        *(float *)(param_3 + 5) = fVar39;
        *(float *)((longlong)param_3 + 0x2c) = fVar40;
        *(undefined1 (*) [16])(puVar3 + 4) = local_108;
        *puVar3 = (uint)CONCAT12(*(undefined1 *)((longlong)local_118 + 3),(short)local_118[1]);
      }
LAB_1437e73a7:
      if ((int)lVar15 < (int)param_2[1]) {
        iVar21 = (int)param_2[1] + -1;
        pauVar24 = (undefined1 (*) [16])((longlong)iVar21 * 0x30 + *param_2);
        *(int *)(param_2 + 1) = iVar21;
        _local_148 = *pauVar24;
        _local_138 = pauVar24[1];
        fVar33 = *(float *)pauVar24[1];
        fVar39 = *(float *)(pauVar24[1] + 4);
        fVar28 = *(float *)(pauVar24[1] + 8);
        fVar48 = *(float *)(pauVar24[1] + 0xc);
        fVar37 = *(float *)*pauVar24;
        fVar40 = *(float *)(*pauVar24 + 4);
        fVar31 = *(float *)(*pauVar24 + 8);
        fVar49 = *(float *)(*pauVar24 + 0xc);
        local_128 = *(float *)pauVar24[2];
        local_118 = (uint *)(*param_1 + (longlong)*(int *)pauVar24[2] * 6);
        goto LAB_1437e7080;
      }
    }
  }
  return;
}



// FUNCTION 1437e7450 FUN_1437e7450 body=1230 status=ok
// SIG undefined FUN_1437e7450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e7450(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint5 uVar11;
  unkbyte9 Var12;
  uint5 uVar13;
  unkbyte9 Var14;
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  float *pfVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar47;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  longlong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8 [2];
  undefined8 uStack_f0;
  float local_e8 [2];
  undefined8 uStack_e0;
  float local_d8 [4];
  longlong local_c8 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  longlong local_88;
  
  if ((int)param_1[1] != 0) {
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar17 = param_2[1];
    auVar65._0_4_ = (*(float *)(param_1 + 4) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar65._4_4_ =
         (*(float *)((longlong)param_1 + 0x24) - *(float *)((longlong)param_3 + 0x14)) *
         *(float *)((longlong)param_3 + 0x34);
    auVar65._8_4_ = (*(float *)(param_1 + 5) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar65._12_4_ =
         (*(float *)((longlong)param_1 + 0x2c) - *(float *)((longlong)param_3 + 0x1c)) *
         *(float *)((longlong)param_3 + 0x3c);
    auVar48._0_8_ =
         CONCAT44((*(float *)((longlong)param_1 + 0x14) - *(float *)((longlong)param_3 + 0x14)) *
                  *(float *)((longlong)param_3 + 0x34),
                  (*(float *)(param_1 + 2) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
    auVar48._8_4_ = (*(float *)(param_1 + 3) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar48._12_4_ =
         (*(float *)((longlong)param_1 + 0x1c) - *(float *)((longlong)param_3 + 0x1c)) *
         *(float *)((longlong)param_3 + 0x3c);
    local_128 = 0.0;
    auVar39._8_4_ = auVar48._8_4_;
    auVar39._0_8_ = auVar48._0_8_;
    auVar39._12_4_ = auVar48._12_4_;
    auVar40 = minps(auVar39,auVar65);
    auVar49 = maxps(auVar48,auVar65);
    uVar38 = auVar40._0_4_;
    uVar47 = auVar40._4_4_;
    auVar41._8_4_ = auVar40._8_4_;
    auVar30._4_4_ = uVar47;
    auVar30._0_4_ = uVar47;
    auVar30._8_4_ = uVar47;
    auVar30._12_4_ = uVar47;
    auVar42._4_4_ = uVar38;
    auVar42._0_4_ = uVar38;
    auVar42._8_4_ = uVar38;
    auVar42._12_4_ = uVar38;
    auVar40 = maxps(auVar30,auVar42);
    uVar38 = auVar49._0_4_;
    uVar47 = auVar49._4_4_;
    auVar50._8_4_ = auVar49._8_4_;
    auVar41._4_4_ = auVar41._8_4_;
    auVar41._0_4_ = auVar41._8_4_;
    auVar41._12_4_ = auVar41._8_4_;
    auVar40 = maxps(auVar41,auVar40);
    auVar49._4_4_ = uVar38;
    auVar49._0_4_ = uVar38;
    auVar49._8_4_ = uVar38;
    auVar49._12_4_ = uVar38;
    auVar42 = maxps(auVar40,_DAT_1467f06e0);
    auVar31._4_4_ = uVar47;
    auVar31._0_4_ = uVar47;
    auVar31._8_4_ = uVar47;
    auVar31._12_4_ = uVar47;
    auVar50._4_4_ = auVar50._8_4_;
    auVar50._0_4_ = auVar50._8_4_;
    auVar50._12_4_ = auVar50._8_4_;
    auVar40 = minps(auVar31,auVar49);
    auVar49 = minps(auVar50,auVar40);
    auVar40._4_4_ = uVar8;
    auVar40._0_4_ = uVar8;
    auVar40._8_4_ = uVar8;
    auVar40._12_4_ = uVar8;
    auVar40 = minps(auVar49,auVar40);
    fVar53 = *(float *)(param_1 + 2);
    fVar54 = *(float *)((longlong)param_1 + 0x14);
    fVar55 = *(float *)(param_1 + 3);
    fVar56 = *(float *)((longlong)param_1 + 0x1c);
    fVar57 = *(float *)(param_1 + 4);
    fVar60 = *(float *)((longlong)param_1 + 0x24);
    fVar61 = *(float *)(param_1 + 5);
    fVar62 = *(float *)((longlong)param_1 + 0x2c);
    fVar68 = local_128;
    lVar22 = *param_1;
    if (auVar42._0_4_ <= auVar40._0_4_) {
LAB_1437e7540:
      while( true ) {
        do {
          local_118 = lVar22;
          local_128 = fVar68;
          fStack_12c = fVar62;
          fStack_130 = fVar61;
          fStack_134 = fVar60;
          local_138 = fVar57;
          fStack_13c = fVar56;
          fStack_140 = fVar55;
          fStack_144 = fVar54;
          local_148 = fVar53;
          bVar46 = *(byte *)(local_118 + 3);
          if (-1 < (char)bVar46) {
            puVar23 = (undefined8 *)*param_3;
            local_108 = *(undefined4 *)((longlong)param_3 + 0x2c);
            plVar3 = (longlong *)*puVar23;
            uStack_104 = local_108;
            uStack_100 = local_108;
            uStack_fc = local_108;
            uVar19 = (**(code **)(*plVar3 + 8))
                               (plVar3,(ulonglong)CONCAT12(bVar46,*(undefined2 *)(local_118 + 4)),
                                &local_148,&local_108);
            puVar1 = (uint *)(puVar23 + 1);
            *puVar1 = *puVar1 | uVar19;
            *(int *)(param_3 + 4) = (int)param_3[4];
            *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
            *(int *)(param_3 + 5) = (int)param_3[5];
            *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_fc;
            goto LAB_1437e7878;
          }
          local_88 = *param_1;
          local_d8[0] = (float)((int)local_128 + 1);
          fVar57 = (local_138 - local_148) * _DAT_1467f0870;
          fVar60 = (fStack_134 - fStack_144) * fRam00000001467f0874;
          fVar61 = (fStack_130 - fStack_140) * fRam00000001467f0878;
          fVar62 = (fStack_12c - fStack_13c) * fRam00000001467f087c;
          local_98 = (float)((int)local_128 +
                            ((bVar46 & 0x7f) << 0x10 | (uint)*(ushort *)(local_118 + 4)) * 2);
          uVar19 = *(uint *)(local_88 + (longlong)(int)local_d8[0] * 6);
          local_c8[0] = local_88 + (longlong)(int)local_d8[0] * 6;
          bVar46 = (byte)(uVar19 >> 0x18);
          auVar6[0xc] = bVar46;
          auVar6._0_12_ = ZEXT712(0);
          uVar11 = CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar19 >> 0x10));
          auVar15._5_8_ = 0;
          auVar15._0_5_ = uVar11;
          Var12 = CONCAT72(SUB137(auVar15 << 0x40,6),(ushort)(byte)(uVar19 >> 8));
          auVar43._0_4_ = uVar19 & 0xff;
          auVar43._4_9_ = Var12;
          auVar43._13_3_ = 0;
          uVar2 = *(uint *)(local_88 + (longlong)(int)local_98 * 6);
          local_88 = local_88 + (longlong)(int)local_98 * 6;
          bVar52 = (byte)(uVar2 >> 0x18);
          auVar43 = auVar43 & _DAT_146809ae0;
          auVar7[0xc] = bVar52;
          auVar7._0_12_ = ZEXT712(0);
          uVar13 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar2 >> 0x10));
          auVar16._5_8_ = 0;
          auVar16._0_5_ = uVar13;
          Var14 = CONCAT72(SUB137(auVar16 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
          auVar51._0_4_ = uVar2 & 0xff;
          auVar51._4_9_ = Var14;
          auVar51._13_3_ = 0;
          fVar68 = (float)(uVar19 >> 4 & 0xf);
          fVar69 = (float)((uint)Var12 >> 4);
          fVar70 = (float)((uint)uVar11 >> 4);
          fVar71 = (float)(bVar46 >> 4);
          auVar51 = auVar51 & _DAT_146809ae0;
          fVar53 = (float)(uVar2 >> 4 & 0xf);
          fVar54 = (float)((uint)Var14 >> 4);
          fVar55 = (float)((uint)uVar13 >> 4);
          fVar56 = (float)(bVar52 >> 4);
          local_f8[0] = fVar68 * fVar68 * fVar57 + local_148;
          local_f8[1] = fVar69 * fVar69 * fVar60 + fStack_144;
          uStack_f0._0_4_ = fVar70 * fVar70 * fVar61 + fStack_140;
          uStack_f0._4_4_ = fVar71 * fVar71 * fVar62 + fStack_13c;
          local_b8 = local_148 + fVar53 * fVar53 * fVar57;
          fStack_b4 = fStack_144 + fVar54 * fVar54 * fVar60;
          fStack_b0 = fStack_140 + fVar55 * fVar55 * fVar61;
          fStack_ac = fStack_13c + fVar56 * fVar56 * fVar62;
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_e8[0] = local_138 - (float)auVar43._0_4_ * (float)auVar43._0_4_ * fVar57;
          local_e8[1] = fStack_134 - (float)auVar43._4_4_ * (float)auVar43._4_4_ * fVar60;
          uStack_e0._0_4_ = fStack_130 - (float)auVar43._8_4_ * (float)auVar43._8_4_ * fVar61;
          uStack_e0._4_4_ = fStack_12c - (float)auVar43._12_4_ * (float)auVar43._12_4_ * fVar62;
          auVar32._0_4_ = (local_e8[0] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar32._4_4_ =
               (local_e8[1] - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar32._8_4_ = ((float)uStack_e0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar32._12_4_ =
               (uStack_e0._4_4_ - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          local_a8 = local_138 - (float)auVar51._0_4_ * (float)auVar51._0_4_ * fVar57;
          fStack_a4 = fStack_134 - (float)auVar51._4_4_ * (float)auVar51._4_4_ * fVar60;
          fStack_a0 = fStack_130 - (float)auVar51._8_4_ * (float)auVar51._8_4_ * fVar61;
          fStack_9c = fStack_12c - (float)auVar51._12_4_ * (float)auVar51._12_4_ * fVar62;
          auVar58._0_8_ =
               CONCAT44((local_f8[1] - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_f8[0] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar58._8_4_ = ((float)uStack_f0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar58._12_4_ =
               (uStack_f0._4_4_ - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar63._8_4_ = auVar58._8_4_;
          auVar63._0_8_ = auVar58._0_8_;
          auVar63._12_4_ = auVar58._12_4_;
          auVar40 = minps(auVar63,auVar32);
          auVar42 = maxps(auVar58,auVar32);
          uVar38 = auVar40._0_4_;
          uVar47 = auVar40._4_4_;
          auVar64._8_4_ = auVar40._8_4_;
          auVar33._4_4_ = uVar47;
          auVar33._0_4_ = uVar47;
          auVar33._8_4_ = uVar47;
          auVar33._12_4_ = uVar47;
          auVar26._4_4_ = uVar38;
          auVar26._0_4_ = uVar38;
          auVar26._8_4_ = uVar38;
          auVar26._12_4_ = uVar38;
          auVar40 = maxps(auVar33,auVar26);
          auVar64._4_4_ = auVar64._8_4_;
          auVar64._0_4_ = auVar64._8_4_;
          auVar64._12_4_ = auVar64._8_4_;
          uVar38 = auVar42._0_4_;
          uVar47 = auVar42._4_4_;
          auVar59._8_4_ = auVar42._8_4_;
          auVar40 = maxps(auVar64,auVar40);
          auVar27._4_4_ = uVar38;
          auVar27._0_4_ = uVar38;
          auVar27._8_4_ = uVar38;
          auVar27._12_4_ = uVar38;
          auVar65 = maxps(auVar40,_DAT_1467f06e0);
          auVar34._4_4_ = uVar47;
          auVar34._0_4_ = uVar47;
          auVar34._8_4_ = uVar47;
          auVar34._12_4_ = uVar47;
          auVar40 = minps(auVar34,auVar27);
          auVar59._4_4_ = auVar59._8_4_;
          auVar59._0_4_ = auVar59._8_4_;
          auVar59._12_4_ = auVar59._8_4_;
          auVar40 = minps(auVar59,auVar40);
          auVar44._0_8_ =
               CONCAT44((fStack_b4 - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_b8 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar44._8_4_ = (fStack_b0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar44._12_4_ =
               (fStack_ac - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar4._4_4_ = uVar8;
          auVar4._0_4_ = uVar8;
          auVar4._8_4_ = uVar8;
          auVar4._12_4_ = uVar8;
          auVar49 = minps(auVar40,auVar4);
          auVar35._0_4_ = (local_a8 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar35._4_4_ =
               (fStack_a4 - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar35._8_4_ = (fStack_a0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar35._12_4_ =
               (fStack_9c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar66._8_4_ = auVar44._8_4_;
          auVar66._0_8_ = auVar44._0_8_;
          auVar66._12_4_ = auVar44._12_4_;
          auVar40 = minps(auVar66,auVar35);
          auVar42 = maxps(auVar44,auVar35);
          uVar38 = auVar40._0_4_;
          uVar47 = auVar40._4_4_;
          auVar67._8_4_ = auVar40._8_4_;
          auVar36._4_4_ = uVar47;
          auVar36._0_4_ = uVar47;
          auVar36._8_4_ = uVar47;
          auVar36._12_4_ = uVar47;
          auVar28._4_4_ = uVar38;
          auVar28._0_4_ = uVar38;
          auVar28._8_4_ = uVar38;
          auVar28._12_4_ = uVar38;
          auVar40 = maxps(auVar36,auVar28);
          uVar38 = auVar42._0_4_;
          uVar47 = auVar42._4_4_;
          auVar45._8_4_ = auVar42._8_4_;
          auVar67._4_4_ = auVar67._8_4_;
          auVar67._0_4_ = auVar67._8_4_;
          auVar67._12_4_ = auVar67._8_4_;
          auVar40 = maxps(auVar67,auVar40);
          auVar29._4_4_ = uVar38;
          auVar29._0_4_ = uVar38;
          auVar29._8_4_ = uVar38;
          auVar29._12_4_ = uVar38;
          auVar42 = maxps(auVar40,_DAT_1467f06e0);
          auVar37._4_4_ = uVar47;
          auVar37._0_4_ = uVar47;
          auVar37._8_4_ = uVar47;
          auVar37._12_4_ = uVar47;
          auVar45._4_4_ = auVar45._8_4_;
          auVar45._0_4_ = auVar45._8_4_;
          auVar45._12_4_ = auVar45._8_4_;
          auVar40 = minps(auVar37,auVar29);
          auVar40 = minps(auVar45,auVar40);
          auVar5._4_4_ = uVar8;
          auVar5._0_4_ = uVar8;
          auVar5._8_4_ = uVar8;
          auVar5._12_4_ = uVar8;
          auVar40 = minps(auVar40,auVar5);
          bVar46 = -(auVar42._0_4_ <= auVar40._0_4_) & 2U | auVar65._0_4_ <= auVar49._0_4_;
          if (bVar46 == 3) {
            *(uint *)(param_3 + 8) = (uint)(auVar42._0_4_ < auVar65._0_4_);
          }
          if (bVar46 == 0) goto LAB_1437e7878;
          fVar53 = local_f8[0];
          fVar54 = local_f8[1];
          fVar55 = (float)uStack_f0;
          fVar56 = uStack_f0._4_4_;
          fVar57 = local_e8[0];
          fVar60 = local_e8[1];
          fVar61 = (float)uStack_e0;
          fVar62 = uStack_e0._4_4_;
          fVar68 = local_d8[0];
          lVar22 = local_c8[0];
        } while ((bVar46 == 1) ||
                (fVar53 = local_b8, fVar54 = fStack_b4, fVar55 = fStack_b0, fVar56 = fStack_ac,
                fVar57 = local_a8, fVar60 = fStack_a4, fVar61 = fStack_a0, fVar62 = fStack_9c,
                fVar68 = local_98, lVar22 = local_88, bVar46 == 2));
        if (bVar46 != 3) break;
        lVar22 = param_3[8];
        lVar25 = (longlong)(int)lVar22;
        uVar20 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar20,param_2,0x30);
        }
        lVar18 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar18 + 1;
        puVar23 = (undefined8 *)((longlong)(int)lVar18 * 0x30 + *param_2);
        lVar22 = (longlong)(1 - (int)lVar22);
        fVar53 = local_d8[lVar22 * 0x10];
        uVar20 = (&uStack_f0)[lVar22 * 8];
        uVar9 = *(undefined8 *)(local_e8 + lVar22 * 0x10);
        uVar10 = (&uStack_e0)[lVar22 * 8];
        *puVar23 = *(undefined8 *)(local_f8 + lVar22 * 0x10);
        puVar23[1] = uVar20;
        puVar23[2] = uVar9;
        puVar23[3] = uVar10;
        *(float *)(puVar23 + 4) = fVar53;
        fVar53 = local_f8[lVar25 * 0x10];
        fVar54 = local_f8[lVar25 * 0x10 + 1];
        fVar55 = *(float *)(&uStack_f0 + lVar25 * 8);
        fVar56 = local_e8[lVar25 * 0x10 + -1];
        fVar57 = local_e8[lVar25 * 0x10];
        fVar60 = local_e8[lVar25 * 0x10 + 1];
        fVar61 = *(float *)(&uStack_e0 + lVar25 * 8);
        fVar62 = local_d8[lVar25 * 0x10 + -1];
        fVar68 = local_d8[lVar25 * 0x10];
        lVar22 = local_c8[lVar25 * 8];
      }
LAB_1437e7878:
      if ((int)lVar17 < (int)param_2[1]) {
        iVar21 = (int)param_2[1] + -1;
        pfVar24 = (float *)((longlong)iVar21 * 0x30 + *param_2);
        *(int *)(param_2 + 1) = iVar21;
        fVar53 = *pfVar24;
        fVar54 = pfVar24[1];
        fVar55 = pfVar24[2];
        fVar56 = pfVar24[3];
        fVar57 = pfVar24[4];
        fVar60 = pfVar24[5];
        fVar61 = pfVar24[6];
        fVar62 = pfVar24[7];
        fVar68 = pfVar24[8];
        lVar22 = *param_1 + (longlong)(int)pfVar24[8] * 6;
        goto LAB_1437e7540;
      }
    }
  }
  return;
}



// FUNCTION 1437e7920 FUN_1437e7920 body=1280 status=ok
// SIG undefined FUN_1437e7920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e7920(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint5 uVar14;
  unkbyte9 Var15;
  uint5 uVar16;
  unkbyte9 Var17;
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 uVar23;
  int iVar24;
  longlong lVar25;
  undefined8 *puVar26;
  float *pfVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar44;
  undefined1 auVar43 [16];
  byte bVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar56;
  float fVar58;
  undefined1 auVar53 [16];
  float fVar59;
  undefined1 auVar54 [16];
  undefined4 uVar57;
  undefined1 auVar55 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  longlong local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108 [2];
  undefined8 uStack_100;
  float local_f8 [2];
  undefined8 uStack_f0;
  float local_e8 [4];
  longlong local_d8 [2];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  longlong local_98;
  
  if ((int)param_1[1] != 0) {
    uVar38 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar20 = param_2[1];
    auVar53._4_4_ = uVar38;
    auVar53._0_4_ = uVar38;
    auVar53._8_4_ = uVar38;
    auVar53._12_4_ = uVar38;
    local_138 = 0.0;
    auVar42._0_4_ =
         ((*(float *)(param_1 + 4) + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
         *(float *)(param_3 + 6);
    auVar42._4_4_ =
         ((*(float *)((longlong)param_1 + 0x24) + *(float *)((longlong)param_3 + 0x44)) -
         *(float *)((longlong)param_3 + 0x14)) * *(float *)((longlong)param_3 + 0x34);
    auVar42._8_4_ =
         ((*(float *)(param_1 + 5) + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar42._12_4_ =
         ((*(float *)((longlong)param_1 + 0x2c) + *(float *)((longlong)param_3 + 0x4c)) -
         *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar46._0_8_ =
         CONCAT44(((*(float *)((longlong)param_1 + 0x14) - *(float *)((longlong)param_3 + 0x44)) -
                  *(float *)((longlong)param_3 + 0x14)) * *(float *)((longlong)param_3 + 0x34),
                  ((*(float *)(param_1 + 2) - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
                  *(float *)(param_3 + 6));
    auVar46._8_4_ =
         ((*(float *)(param_1 + 3) - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar46._12_4_ =
         ((*(float *)((longlong)param_1 + 0x1c) - *(float *)((longlong)param_3 + 0x4c)) -
         *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar39._8_4_ = auVar46._8_4_;
    auVar39._0_8_ = auVar46._0_8_;
    auVar39._12_4_ = auVar46._12_4_;
    auVar40 = minps(auVar39,auVar42);
    auVar47 = maxps(auVar46,auVar42);
    uVar38 = auVar40._0_4_;
    uVar45 = auVar40._4_4_;
    auVar41._8_4_ = auVar40._8_4_;
    auVar68._4_4_ = uVar45;
    auVar68._0_4_ = uVar45;
    auVar68._8_4_ = uVar45;
    auVar68._12_4_ = uVar45;
    auVar40._4_4_ = uVar38;
    auVar40._0_4_ = uVar38;
    auVar40._8_4_ = uVar38;
    auVar40._12_4_ = uVar38;
    auVar40 = maxps(auVar68,auVar40);
    uVar38 = auVar47._0_4_;
    uVar45 = auVar47._4_4_;
    auVar48._8_4_ = auVar47._8_4_;
    auVar41._4_4_ = auVar41._8_4_;
    auVar41._0_4_ = auVar41._8_4_;
    auVar41._12_4_ = auVar41._8_4_;
    auVar40 = maxps(auVar41,auVar40);
    auVar47._4_4_ = uVar38;
    auVar47._0_4_ = uVar38;
    auVar47._8_4_ = uVar38;
    auVar47._12_4_ = uVar38;
    auVar42 = maxps(auVar40,_DAT_1467f06e0);
    auVar71._4_4_ = uVar45;
    auVar71._0_4_ = uVar45;
    auVar71._8_4_ = uVar45;
    auVar71._12_4_ = uVar45;
    auVar48._4_4_ = auVar48._8_4_;
    auVar48._0_4_ = auVar48._8_4_;
    auVar48._12_4_ = auVar48._8_4_;
    auVar40 = minps(auVar71,auVar47);
    auVar40 = minps(auVar48,auVar40);
    auVar40 = minps(auVar40,auVar53);
    fVar3 = *(float *)(param_1 + 2);
    fVar9 = *(float *)((longlong)param_1 + 0x14);
    fVar10 = *(float *)(param_1 + 3);
    fVar11 = *(float *)((longlong)param_1 + 0x1c);
    fVar52 = *(float *)(param_1 + 4);
    fVar56 = *(float *)((longlong)param_1 + 0x24);
    fVar58 = *(float *)(param_1 + 5);
    fVar59 = *(float *)((longlong)param_1 + 0x2c);
    fVar60 = local_138;
    lVar25 = *param_1;
    if (auVar42._0_4_ <= auVar40._0_4_) {
LAB_1437e7a20:
      while( true ) {
        do {
          local_128 = lVar25;
          local_138 = fVar60;
          fStack_13c = fVar59;
          fStack_140 = fVar58;
          fStack_144 = fVar56;
          local_148 = fVar52;
          fStack_14c = fVar11;
          fStack_150 = fVar10;
          fStack_154 = fVar9;
          local_158 = fVar3;
          bVar44 = *(byte *)(local_128 + 3);
          if (-1 < (char)bVar44) {
            puVar26 = (undefined8 *)*param_3;
            local_118 = *(undefined4 *)((longlong)param_3 + 0x2c);
            plVar4 = (longlong *)*puVar26;
            uStack_114 = local_118;
            uStack_110 = local_118;
            uStack_10c = local_118;
            uVar22 = (**(code **)(*plVar4 + 8))
                               (plVar4,(ulonglong)CONCAT12(bVar44,*(undefined2 *)(local_128 + 4)),
                                &local_158,&local_118);
            puVar1 = (uint *)(puVar26 + 1);
            *puVar1 = *puVar1 | uVar22;
            *(int *)(param_3 + 4) = (int)param_3[4];
            *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
            *(int *)(param_3 + 5) = (int)param_3[5];
            *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_10c;
            goto LAB_1437e7d6f;
          }
          local_98 = *param_1;
          local_e8[0] = (float)((int)local_138 + 1);
          uVar38 = *(undefined4 *)((longlong)param_3 + 0x2c);
          fVar60 = (local_148 - local_158) * _DAT_1467f0870;
          fVar63 = (fStack_144 - fStack_154) * fRam00000001467f0874;
          fVar64 = (fStack_140 - fStack_150) * fRam00000001467f0878;
          fVar65 = (fStack_13c - fStack_14c) * fRam00000001467f087c;
          local_a8 = (float)((int)local_138 +
                            ((bVar44 & 0x7f) << 0x10 | (uint)*(ushort *)(local_128 + 4)) * 2);
          uVar22 = *(uint *)(local_98 + (longlong)(int)local_e8[0] * 6);
          local_d8[0] = local_98 + (longlong)(int)local_e8[0] * 6;
          bVar44 = (byte)(uVar22 >> 0x18);
          auVar7[0xc] = bVar44;
          auVar7._0_12_ = ZEXT712(0);
          uVar14 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar22 >> 0x10));
          auVar18._5_8_ = 0;
          auVar18._0_5_ = uVar14;
          Var15 = CONCAT72(SUB137(auVar18 << 0x40,6),(ushort)(byte)(uVar22 >> 8));
          auVar43._0_4_ = uVar22 & 0xff;
          auVar43._4_9_ = Var15;
          auVar43._13_3_ = 0;
          uVar2 = *(uint *)(local_98 + (longlong)(int)local_a8 * 6);
          local_98 = local_98 + (longlong)(int)local_a8 * 6;
          bVar51 = (byte)(uVar2 >> 0x18);
          auVar43 = auVar43 & _DAT_146809ae0;
          auVar8[0xc] = bVar51;
          auVar8._0_12_ = ZEXT712(0);
          uVar16 = CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar2 >> 0x10));
          auVar19._5_8_ = 0;
          auVar19._0_5_ = uVar16;
          Var17 = CONCAT72(SUB137(auVar19 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
          auVar49._0_4_ = uVar2 & 0xff;
          auVar49._4_9_ = Var17;
          auVar49._13_3_ = 0;
          fVar72 = (float)(uVar22 >> 4 & 0xf);
          fVar73 = (float)((uint)Var15 >> 4);
          fVar74 = (float)((uint)uVar14 >> 4);
          fVar75 = (float)(bVar44 >> 4);
          auVar49 = auVar49 & _DAT_146809ae0;
          fVar52 = (float)(uVar2 >> 4 & 0xf);
          fVar56 = (float)((uint)Var17 >> 4);
          fVar58 = (float)((uint)uVar16 >> 4);
          fVar59 = (float)(bVar51 >> 4);
          local_b8 = local_148 - (float)auVar49._0_4_ * (float)auVar49._0_4_ * fVar60;
          fStack_b4 = fStack_144 - (float)auVar49._4_4_ * (float)auVar49._4_4_ * fVar63;
          fStack_b0 = fStack_140 - (float)auVar49._8_4_ * (float)auVar49._8_4_ * fVar64;
          fStack_ac = fStack_13c - (float)auVar49._12_4_ * (float)auVar49._12_4_ * fVar65;
          fVar3 = *(float *)(param_3 + 8);
          fVar9 = *(float *)((longlong)param_3 + 0x44);
          fVar10 = *(float *)(param_3 + 9);
          fVar11 = *(float *)((longlong)param_3 + 0x4c);
          local_c8 = fVar52 * fVar52 * fVar60 + local_158;
          fStack_c4 = fVar56 * fVar56 * fVar63 + fStack_154;
          fStack_c0 = fVar58 * fVar58 * fVar64 + fStack_150;
          fStack_bc = fVar59 * fVar59 * fVar65 + fStack_14c;
          local_108[0] = fVar72 * fVar72 * fVar60 + local_158;
          local_108[1] = fVar73 * fVar73 * fVar63 + fStack_154;
          uStack_100._0_4_ = fVar74 * fVar74 * fVar64 + fStack_150;
          uStack_100._4_4_ = fVar75 * fVar75 * fVar65 + fStack_14c;
          local_f8[0] = local_148 - (float)auVar43._0_4_ * (float)auVar43._0_4_ * fVar60;
          local_f8[1] = fStack_144 - (float)auVar43._4_4_ * (float)auVar43._4_4_ * fVar63;
          uStack_f0._0_4_ = fStack_140 - (float)auVar43._8_4_ * (float)auVar43._8_4_ * fVar64;
          uStack_f0._4_4_ = fStack_13c - (float)auVar43._12_4_ * (float)auVar43._12_4_ * fVar65;
          auVar61._0_8_ =
               CONCAT44(((local_108[1] - fVar9) - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        ((local_108[0] - fVar3) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6)
                       );
          auVar61._8_4_ =
               (((float)uStack_100 - fVar10) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar61._12_4_ =
               ((uStack_100._4_4_ - fVar11) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar33._0_4_ =
               ((local_f8[0] + fVar3) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar33._4_4_ =
               ((local_f8[1] + fVar9) - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar33._8_4_ =
               (((float)uStack_f0 + fVar10) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar33._12_4_ =
               ((uStack_f0._4_4_ + fVar11) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar66._8_4_ = auVar61._8_4_;
          auVar66._0_8_ = auVar61._0_8_;
          auVar66._12_4_ = auVar61._12_4_;
          auVar40 = minps(auVar66,auVar33);
          auVar47 = maxps(auVar61,auVar33);
          uVar45 = auVar40._0_4_;
          uVar57 = auVar40._4_4_;
          auVar67._8_4_ = auVar40._8_4_;
          auVar34._4_4_ = uVar57;
          auVar34._0_4_ = uVar57;
          auVar34._8_4_ = uVar57;
          auVar34._12_4_ = uVar57;
          auVar29._4_4_ = uVar45;
          auVar29._0_4_ = uVar45;
          auVar29._8_4_ = uVar45;
          auVar29._12_4_ = uVar45;
          auVar40 = maxps(auVar34,auVar29);
          auVar67._4_4_ = auVar67._8_4_;
          auVar67._0_4_ = auVar67._8_4_;
          auVar67._12_4_ = auVar67._8_4_;
          auVar40 = maxps(auVar67,auVar40);
          auVar54._0_8_ =
               CONCAT44(((fStack_c4 - fVar9) - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        ((local_c8 - fVar3) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar54._8_4_ = ((fStack_c0 - fVar10) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7)
          ;
          auVar54._12_4_ =
               ((fStack_bc - fVar11) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          uVar45 = auVar47._0_4_;
          uVar57 = auVar47._4_4_;
          auVar62._8_4_ = auVar47._8_4_;
          auVar50._0_4_ = ((local_b8 + fVar3) - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar50._4_4_ =
               ((fStack_b4 + fVar9) - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar50._8_4_ = ((fStack_b0 + fVar10) - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7)
          ;
          auVar50._12_4_ =
               ((fStack_ac + fVar11) - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar68 = maxps(auVar40,_DAT_1467f06e0);
          auVar35._4_4_ = uVar57;
          auVar35._0_4_ = uVar57;
          auVar35._8_4_ = uVar57;
          auVar35._12_4_ = uVar57;
          auVar69._8_4_ = auVar54._8_4_;
          auVar69._0_8_ = auVar54._0_8_;
          auVar69._12_4_ = auVar54._12_4_;
          auVar30._4_4_ = uVar45;
          auVar30._0_4_ = uVar45;
          auVar30._8_4_ = uVar45;
          auVar30._12_4_ = uVar45;
          auVar40 = minps(auVar35,auVar30);
          auVar42 = minps(auVar69,auVar50);
          auVar47 = maxps(auVar54,auVar50);
          uVar45 = auVar42._0_4_;
          uVar57 = auVar42._4_4_;
          auVar70._8_4_ = auVar42._8_4_;
          auVar62._4_4_ = auVar62._8_4_;
          auVar62._0_4_ = auVar62._8_4_;
          auVar62._12_4_ = auVar62._8_4_;
          auVar42 = minps(auVar62,auVar40);
          auVar31._4_4_ = uVar45;
          auVar31._0_4_ = uVar45;
          auVar31._8_4_ = uVar45;
          auVar31._12_4_ = uVar45;
          auVar36._4_4_ = uVar57;
          auVar36._0_4_ = uVar57;
          auVar36._8_4_ = uVar57;
          auVar36._12_4_ = uVar57;
          auVar40 = maxps(auVar36,auVar31);
          uVar45 = auVar47._0_4_;
          uVar57 = auVar47._4_4_;
          auVar55._8_4_ = auVar47._8_4_;
          auVar70._4_4_ = auVar70._8_4_;
          auVar70._0_4_ = auVar70._8_4_;
          auVar70._12_4_ = auVar70._8_4_;
          auVar40 = maxps(auVar70,auVar40);
          auVar32._4_4_ = uVar45;
          auVar32._0_4_ = uVar45;
          auVar32._8_4_ = uVar45;
          auVar32._12_4_ = uVar45;
          auVar71 = maxps(auVar40,_DAT_1467f06e0);
          auVar37._4_4_ = uVar57;
          auVar37._0_4_ = uVar57;
          auVar37._8_4_ = uVar57;
          auVar37._12_4_ = uVar57;
          auVar55._4_4_ = auVar55._8_4_;
          auVar55._0_4_ = auVar55._8_4_;
          auVar55._12_4_ = auVar55._8_4_;
          auVar40 = minps(auVar37,auVar32);
          auVar5._4_4_ = uVar38;
          auVar5._0_4_ = uVar38;
          auVar5._8_4_ = uVar38;
          auVar5._12_4_ = uVar38;
          auVar47 = minps(auVar42,auVar5);
          auVar40 = minps(auVar55,auVar40);
          auVar6._4_4_ = uVar38;
          auVar6._0_4_ = uVar38;
          auVar6._8_4_ = uVar38;
          auVar6._12_4_ = uVar38;
          auVar40 = minps(auVar40,auVar6);
          bVar44 = -(auVar71._0_4_ <= auVar40._0_4_) & 2U | auVar68._0_4_ <= auVar47._0_4_;
          if (bVar44 == 3) {
            *(uint *)(param_3 + 10) = (uint)(auVar71._0_4_ < auVar68._0_4_);
          }
          if (bVar44 == 0) goto LAB_1437e7d6f;
          fVar3 = local_108[0];
          fVar9 = local_108[1];
          fVar10 = (float)uStack_100;
          fVar11 = uStack_100._4_4_;
          fVar52 = local_f8[0];
          fVar56 = local_f8[1];
          fVar58 = (float)uStack_f0;
          fVar59 = uStack_f0._4_4_;
          fVar60 = local_e8[0];
          lVar25 = local_d8[0];
        } while ((bVar44 == 1) ||
                (fVar3 = local_c8, fVar9 = fStack_c4, fVar10 = fStack_c0, fVar11 = fStack_bc,
                fVar52 = local_b8, fVar56 = fStack_b4, fVar58 = fStack_b0, fVar59 = fStack_ac,
                fVar60 = local_a8, lVar25 = local_98, bVar44 == 2));
        if (bVar44 != 3) break;
        lVar25 = param_3[10];
        lVar28 = (longlong)(int)lVar25;
        uVar23 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar23,param_2,0x30);
        }
        lVar21 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar21 + 1;
        puVar26 = (undefined8 *)((longlong)(int)lVar21 * 0x30 + *param_2);
        lVar25 = (longlong)(1 - (int)lVar25);
        fVar3 = local_e8[lVar25 * 0x10];
        uVar23 = (&uStack_100)[lVar25 * 8];
        uVar12 = *(undefined8 *)(local_f8 + lVar25 * 0x10);
        uVar13 = (&uStack_f0)[lVar25 * 8];
        *puVar26 = *(undefined8 *)(local_108 + lVar25 * 0x10);
        puVar26[1] = uVar23;
        puVar26[2] = uVar12;
        puVar26[3] = uVar13;
        *(float *)(puVar26 + 4) = fVar3;
        fVar3 = local_108[lVar28 * 0x10];
        fVar9 = local_108[lVar28 * 0x10 + 1];
        fVar10 = *(float *)(&uStack_100 + lVar28 * 8);
        fVar11 = local_f8[lVar28 * 0x10 + -1];
        fVar52 = local_f8[lVar28 * 0x10];
        fVar56 = local_f8[lVar28 * 0x10 + 1];
        fVar58 = *(float *)(&uStack_f0 + lVar28 * 8);
        fVar59 = local_e8[lVar28 * 0x10 + -1];
        fVar60 = local_e8[lVar28 * 0x10];
        lVar25 = local_d8[lVar28 * 8];
      }
LAB_1437e7d6f:
      if ((int)lVar20 < (int)param_2[1]) {
        iVar24 = (int)param_2[1] + -1;
        pfVar27 = (float *)((longlong)iVar24 * 0x30 + *param_2);
        *(int *)(param_2 + 1) = iVar24;
        fVar3 = *pfVar27;
        fVar9 = pfVar27[1];
        fVar10 = pfVar27[2];
        fVar11 = pfVar27[3];
        fVar52 = pfVar27[4];
        fVar56 = pfVar27[5];
        fVar58 = pfVar27[6];
        fVar59 = pfVar27[7];
        fVar60 = pfVar27[8];
        lVar25 = *param_1 + (longlong)(int)pfVar27[8] * 6;
        goto LAB_1437e7a20;
      }
    }
  }
  return;
}



// FUNCTION 1437e7e20 FUN_1437e7e20 body=31 status=ok
// SIG undefined FUN_1437e7e20(void)

undefined8 * FUN_1437e7e20(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkcdStaticAabbTree::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1437e7e40 FUN_1437e7e40 body=46 status=ok
// SIG undefined FUN_1437e7e40(void)

void FUN_1437e7e40(undefined8 *param_1)

{
  *param_1 = hkcdStaticAabbTree::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437e7e70 FUN_1437e7e70 body=139 status=ok
// SIG undefined FUN_1437e7e70(void)

longlong FUN_1437e7e70(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437e7e40();
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



// FUNCTION 1437e7f00 Execute body=13 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
     ::Execute(longlong param_1)

{
  FUN_1437e6680(*(longlong *)(param_1 + 0x18) + 0x20);
  return;
}



// FUNCTION 1437e7f10 Execute body=13 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
     ::Execute(longlong param_1)

{
  FUN_1437e6710(*(longlong *)(param_1 + 0x18) + 0x20);
  return;
}



// FUNCTION 1437e7f20 Execute body=13 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
     ::Execute(longlong param_1)

{
  FUN_1437e67c0(*(longlong *)(param_1 + 0x18) + 0x20);
  return;
}



// FUNCTION 1437e7f30 Execute body=13 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
     ::Execute(longlong param_1)

{
  FUN_1437e6830(*(longlong *)(param_1 + 0x18) + 0x20);
  return;
}



// FUNCTION 1437e7f40 FUN_1437e7f40 body=281 status=ok
// SIG undefined FUN_1437e7f40(void)

void FUN_1437e7f40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0xc);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 4);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[1] = *puVar2;
        puVar8[2] = uVar7;
        puVar8[3] = uVar9;
        puVar8[4] = uVar4;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 0x14);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[5] = *puVar2;
        puVar8[6] = uVar7;
        puVar8[7] = uVar9;
        puVar8[8] = uVar4;
        iVar3 = *(int *)((longlong)puVar8 + param_2 + -4);
        lVar11 = (longlong)iVar3;
        lVar10 = *(longlong *)((longlong)puVar8 + param_2 + -0xc);
        uVar5 = FUN_143703a50();
        uVar7 = *puVar8 & 0x3fffffff;
        uVar9 = puVar8[-1] + iVar3;
        if (((int)uVar7 < (int)uVar9) && ((int)uVar7 < (int)uVar9)) {
          uVar4 = uVar9;
          if ((int)uVar9 < (int)(uVar7 * 2)) {
            uVar4 = uVar7 * 2;
          }
          FUN_14370c310(uVar5,puVar1,uVar4,5);
        }
        puVar6 = (undefined4 *)((longlong)(int)puVar8[-1] * 5 + *(longlong *)puVar1);
        if (0 < iVar3) {
          lVar10 = lVar10 - (longlong)puVar6;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
              *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(lVar10 + 4 + (longlong)puVar6);
            }
            puVar6 = (undefined4 *)((longlong)puVar6 + 5);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar8[-1] = uVar9;
      }
      puVar8 = puVar8 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1437e8070 FUN_1437e8070 body=60 status=ok
// SIG undefined FUN_1437e8070(void)

undefined1 FUN_1437e8070(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x20);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1437e80b0 FUN_1437e80b0 body=208 status=ok
// SIG undefined FUN_1437e80b0(void)

void FUN_1437e80b0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x40,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        puVar3[2] = 0;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x40,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e8180 func body=101 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<128,hkcdDynamicTree::Tree<hkcdDynamicTree::DefaultDynamicStorage<hkcdDynamicTree::CodecRaw<unsigned___int64>_>_>_>
     ::func(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_1437ea2c0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437e8250 FUN_1437e8250 body=293 status=ok
// SIG undefined FUN_1437e8250(void)

void FUN_1437e8250(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0xc);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 4);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[1] = *puVar2;
        puVar8[2] = uVar7;
        puVar8[3] = uVar9;
        puVar8[4] = uVar4;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 0x14);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[5] = *puVar2;
        puVar8[6] = uVar7;
        puVar8[7] = uVar9;
        puVar8[8] = uVar4;
        iVar3 = *(int *)((longlong)puVar8 + param_2 + -4);
        lVar11 = (longlong)iVar3;
        lVar10 = *(longlong *)((longlong)puVar8 + param_2 + -0xc);
        uVar5 = FUN_143703a50();
        uVar7 = *puVar8 & 0x3fffffff;
        uVar9 = puVar8[-1] + iVar3;
        if (((int)uVar7 < (int)uVar9) && ((int)uVar7 < (int)uVar9)) {
          uVar4 = uVar9;
          if ((int)uVar9 < (int)(uVar7 * 2)) {
            uVar4 = uVar7 * 2;
          }
          FUN_14370c310(uVar5,puVar1,uVar4,6);
        }
        puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)(int)puVar8[-1] * 6);
        if (0 < iVar3) {
          lVar10 = lVar10 - (longlong)puVar6;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
              *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(lVar10 + 4 + (longlong)puVar6);
            }
            puVar6 = (undefined4 *)((longlong)puVar6 + 6);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar8[-1] = uVar9;
      }
      puVar8 = puVar8 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1437e83e0 FUN_1437e83e0 body=536 status=ok
// SIG undefined FUN_1437e83e0(void)

void FUN_1437e83e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar15 = (uint *)(param_1 + 0x24);
    lVar16 = (longlong)param_4;
    do {
      if (puVar15 + -9 != (uint *)0x0) {
        puVar15[-7] = 0;
        puVar15[-6] = 0;
        puVar15[-5] = 0x1ffff;
        *(undefined ***)(puVar15 + -9) = hkcdPlanarSolid::NodeStorage::vftable;
        puVar15[-3] = 0;
        puVar15[-2] = 0;
        puVar15[-1] = 0;
        *puVar15 = 0x80000000;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0x80000000;
        puVar15[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar15);
        iVar3 = *(int *)((longlong)puVar15 + param_2 + -4);
        lVar14 = (longlong)iVar3;
        lVar12 = *(longlong *)(param_2 + -0xc + (longlong)puVar15);
        uVar8 = FUN_143703a50(param_2 + -0x14,param_2 + -0xc,0,0xffff);
        uVar10 = *puVar15 & 0x3fffffff;
        uVar13 = puVar15[-1] + iVar3;
        if (((int)uVar10 < (int)uVar13) && ((int)uVar10 < (int)uVar13)) {
          uVar4 = uVar13;
          if ((int)uVar13 < (int)(uVar10 * 2)) {
            uVar4 = uVar10 * 2;
          }
          FUN_14370c310(uVar8,puVar15 + -3,uVar4,0x28);
        }
        puVar11 = (undefined8 *)(*(longlong *)(puVar15 + -3) + (longlong)(int)puVar15[-1] * 0x28);
        if (0 < iVar3) {
          lVar12 = lVar12 - (longlong)puVar11;
          do {
            if (puVar11 != (undefined8 *)0x0) {
              uVar8 = ((undefined8 *)(lVar12 + (longlong)puVar11))[1];
              *puVar11 = *(undefined8 *)(lVar12 + (longlong)puVar11);
              puVar11[1] = uVar8;
              puVar2 = (undefined8 *)(lVar12 + 0x10 + (longlong)puVar11);
              uVar8 = puVar2[1];
              puVar11[2] = *puVar2;
              puVar11[3] = uVar8;
              puVar11[4] = *(undefined8 *)(lVar12 + 0x20 + (longlong)puVar11);
            }
            puVar11 = puVar11 + 5;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        puVar15[-1] = uVar13;
        iVar3 = *(int *)((longlong)puVar15 + param_2 + 0xc);
        lVar14 = (longlong)iVar3;
        lVar12 = *(longlong *)((longlong)puVar15 + param_2 + 4);
        uVar8 = FUN_143703a50();
        uVar10 = puVar15[4] & 0x3fffffff;
        uVar13 = puVar15[3] + iVar3;
        if (((int)uVar10 < (int)uVar13) && ((int)uVar10 < (int)uVar13)) {
          uVar4 = uVar13;
          if ((int)uVar13 < (int)(uVar10 * 2)) {
            uVar4 = uVar10 * 2;
          }
          FUN_14370c310(uVar8,puVar15 + 1,uVar4,0x20);
        }
        puVar9 = (undefined4 *)((longlong)(int)puVar15[3] * 0x20 + *(longlong *)(puVar15 + 1));
        if (0 < iVar3) {
          lVar12 = lVar12 - (longlong)puVar9;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              puVar1 = (undefined4 *)(lVar12 + (longlong)puVar9);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              *puVar9 = *puVar1;
              puVar9[1] = uVar5;
              puVar9[2] = uVar6;
              puVar9[3] = uVar7;
              puVar11 = (undefined8 *)(lVar12 + 0x10 + (longlong)puVar9);
              uVar8 = puVar11[1];
              *(undefined8 *)(puVar9 + 4) = *puVar11;
              *(undefined8 *)(puVar9 + 6) = uVar8;
            }
            puVar9 = puVar9 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        puVar15[3] = uVar13;
      }
      puVar15 = puVar15 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 1437e8610 FUN_1437e8610 body=18 status=ok
// SIG undefined FUN_1437e8610(void)

undefined8 * FUN_1437e8610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146809c00;
  return param_2;
}



// FUNCTION 1437e8630 FUN_1437e8630 body=486 status=ok
// SIG undefined FUN_1437e8630(void)

void FUN_1437e8630(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar13 = (uint *)(param_1 + 0x34);
    lVar14 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar13 + -0xb,(longlong)puVar13 + param_2 + -0x2c);
      uVar3 = *(uint *)((longlong)puVar13 + param_2 + -0x14);
      lVar4 = *(longlong *)((longlong)puVar13 + param_2 + -0x1c);
      uVar8 = FUN_143703a50();
      if ((int)(puVar13[-4] & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar8,puVar13 + -7,uVar3,0x28);
      }
      uVar12 = uVar3;
      if ((int)puVar13[-5] < (int)uVar3) {
        uVar12 = puVar13[-5];
      }
      FUN_1437ea100(*(undefined8 *)(puVar13 + -7),lVar4,uVar12);
      puVar9 = (undefined8 *)(*(longlong *)(puVar13 + -7) + (longlong)(int)uVar12 * 0x28);
      lVar11 = (longlong)(int)(uVar3 - uVar12);
      if (0 < (int)(uVar3 - uVar12)) {
        lVar4 = ((longlong)(int)uVar12 * 0x28 - (longlong)puVar9) + lVar4;
        do {
          if (puVar9 != (undefined8 *)0x0) {
            uVar8 = ((undefined8 *)(lVar4 + (longlong)puVar9))[1];
            *puVar9 = *(undefined8 *)(lVar4 + (longlong)puVar9);
            puVar9[1] = uVar8;
            puVar2 = (undefined8 *)(lVar4 + 0x10 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[2] = *puVar2;
            puVar9[3] = uVar8;
            puVar9[4] = *(undefined8 *)(lVar4 + 0x20 + (longlong)puVar9);
          }
          puVar9 = puVar9 + 5;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      puVar13[-5] = uVar3;
      uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar13);
      lVar4 = *(longlong *)(param_2 + -0xc + (longlong)puVar13);
      uVar8 = FUN_143703a50();
      if ((int)(*puVar13 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar8,puVar13 + -3,uVar3,0x20);
      }
      uVar12 = uVar3;
      if ((int)puVar13[-1] < (int)uVar3) {
        uVar12 = puVar13[-1];
      }
      FUN_1437ea1b0(*(undefined8 *)(puVar13 + -3),lVar4,uVar12);
      puVar10 = (undefined4 *)(*(longlong *)(puVar13 + -3) + (longlong)(int)uVar12 * 0x20);
      lVar11 = (longlong)(int)(uVar3 - uVar12);
      if (0 < (int)(uVar3 - uVar12)) {
        lVar4 = ((longlong)(int)uVar12 * 0x20 - (longlong)puVar10) + lVar4;
        do {
          if (puVar10 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)(lVar4 + (longlong)puVar10);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            *puVar10 = *puVar1;
            puVar10[1] = uVar5;
            puVar10[2] = uVar6;
            puVar10[3] = uVar7;
            puVar9 = (undefined8 *)(lVar4 + 0x10 + (longlong)puVar10);
            uVar8 = puVar9[1];
            *(undefined8 *)(puVar10 + 4) = *puVar9;
            *(undefined8 *)(puVar10 + 6) = uVar8;
          }
          puVar10 = puVar10 + 8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      puVar13[-1] = uVar3;
      puVar13[1] = *(uint *)((longlong)puVar13 + param_2 + 4);
      puVar13 = puVar13 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1437e8830 FUN_1437e8830 body=205 status=ok
// SIG undefined FUN_1437e8830(void)

void FUN_1437e8830(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x30,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x30,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[3] = 0;
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e8900 FUN_1437e8900 body=73 status=ok
// SIG undefined FUN_1437e8900(void)

undefined1 FUN_1437e8900(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x40);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x50);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x60);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437e8950 FUN_1437e8950 body=99 status=ok
// SIG undefined FUN_1437e8950(void)

void FUN_1437e8950(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_1437ea1e0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437e89c0 FUN_1437e89c0 body=55 status=ok
// SIG undefined FUN_1437e89c0(void)

void FUN_1437e89c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ea520(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e8a00 FUN_1437e8a00 body=284 status=ok
// SIG undefined FUN_1437e8a00(void)

void FUN_1437e8a00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (0 < param_4) {
    puVar9 = (uint *)(param_1 + 0xc);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      puVar1 = puVar9 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        puVar3 = (uint *)((longlong)puVar9 + param_2 + 4);
        uVar8 = puVar3[1];
        uVar10 = puVar3[2];
        uVar5 = puVar3[3];
        puVar9[1] = *puVar3;
        puVar9[2] = uVar8;
        puVar9[3] = uVar10;
        puVar9[4] = uVar5;
        puVar3 = (uint *)((longlong)puVar9 + param_2 + 0x14);
        uVar8 = puVar3[1];
        uVar10 = puVar3[2];
        uVar5 = puVar3[3];
        puVar9[5] = *puVar3;
        puVar9[6] = uVar8;
        puVar9[7] = uVar10;
        puVar9[8] = uVar5;
        iVar4 = *(int *)((longlong)puVar9 + param_2 + -4);
        lVar12 = (longlong)iVar4;
        lVar11 = *(longlong *)((longlong)puVar9 + param_2 + -0xc);
        uVar6 = FUN_143703a50();
        uVar8 = *puVar9 & 0x3fffffff;
        uVar10 = puVar9[-1] + iVar4;
        if (((int)uVar8 < (int)uVar10) && ((int)uVar8 < (int)uVar10)) {
          uVar5 = uVar10;
          if ((int)uVar10 < (int)(uVar8 * 2)) {
            uVar5 = uVar8 * 2;
          }
          FUN_14370c310(uVar6,puVar1,uVar5,0x20);
        }
        puVar7 = (undefined8 *)((longlong)(int)puVar9[-1] * 0x20 + *(longlong *)puVar1);
        if (0 < iVar4) {
          lVar11 = lVar11 - (longlong)puVar7;
          do {
            if (puVar7 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)(lVar11 + (longlong)puVar7);
              uVar6 = puVar2[1];
              *puVar7 = *puVar2;
              puVar7[1] = uVar6;
              puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar7);
              uVar6 = puVar2[1];
              puVar7[2] = *puVar2;
              puVar7[3] = uVar6;
            }
            puVar7 = puVar7 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        puVar9[-1] = uVar10;
      }
      puVar9 = puVar9 + 0xc;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1437e8b20 FUN_1437e8b20 body=219 status=ok
// SIG undefined FUN_1437e8b20(void)

void FUN_1437e8b20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        *puVar1 = hkcdPlanarCsgOperand::vftable;
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
        lVar2 = *(longlong *)(param_2 + 0x20 + lVar3);
        *(longlong *)(lVar3 + 0x20) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e8c00 FUN_1437e8c00 body=63 status=ok
// SIG undefined FUN_1437e8c00(void)

void FUN_1437e8c00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437f1170(param_1,0,0,0);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e8c40 FUN_1437e8c40 body=75 status=ok
// SIG undefined FUN_1437e8c40(void)

void FUN_1437e8c40(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437f10a0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e8c90 FUN_1437e8c90 body=209 status=ok
// SIG undefined FUN_1437e8c90(void)

void FUN_1437e8c90(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar2 = (longlong *)(param_2 + 0x18);
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - param_2;
    do {
      lVar1 = lVar3 + -0x10 + (longlong)plVar2;
      FUN_1437182e0(lVar1,lVar1 + (param_2 - param_1));
      if (*plVar2 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar3 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar3 + (longlong)plVar2) = *plVar2;
      if (plVar2[1] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar3 + 8 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar3 + 8 + (longlong)plVar2) = plVar2[1];
      if (plVar2[2] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar3 + 0x10 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar3 + 0x10 + (longlong)plVar2) = plVar2[2];
      plVar2 = plVar2 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e8dd0 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ea520(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e8e20 FUN_1437e8e20 body=216 status=ok
// SIG undefined FUN_1437e8e20(void)

void FUN_1437e8e20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
      if (plVar2[2] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + 0x10 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + 0x10 + (longlong)plVar2) = plVar2[2];
      *(int *)(lVar4 + 0x18 + (longlong)plVar2) = (int)plVar2[3];
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e8f00 FUN_1437e8f00 body=153 status=ok
// SIG undefined FUN_1437e8f00(void)

void FUN_1437e8f00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar2 + -4) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0x1ffff;
        *(undefined ***)(puVar2 + -4) = hkcdPlanarEntity::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        *(longlong *)(puVar2 + 2) = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e8fa0 FUN_1437e8fa0 body=208 status=ok
// SIG undefined FUN_1437e8fa0(void)

void FUN_1437e8fa0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        *(undefined2 *)(puVar3 + 1) = 0;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        *(undefined2 *)(puVar3 + 1) = 0;
        *(undefined2 *)(puVar3 + 5) = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e9070 FUN_1437e9070 body=74 status=ok
// SIG undefined FUN_1437e9070(void)

void FUN_1437e9070(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ea5b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e90c0 func body=101 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<128,hkcdDynamicTree::Tree<hkcdDynamicTree::DefaultDynamicStorage<hkcdDynamicTree::Codec32>_>_>
     ::func(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_1437ea3a0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437e9130 FUN_1437e9130 body=129 status=ok
// SIG undefined FUN_1437e9130(void)

void FUN_1437e9130(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar2 = (longlong *)(param_2 + 0x18);
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - param_2;
    do {
      lVar1 = lVar3 + -0x10 + (longlong)plVar2;
      FUN_1437182e0(lVar1,lVar1 + (param_2 - param_1));
      if (*plVar2 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar3 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar3 + (longlong)plVar2) = *plVar2;
      plVar2 = plVar2 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e9210 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkcdPlanarGeometryPrimitives::Collection<28>_>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd98 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1b3;
      plVar2 = plVar2 + -0x1b3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437e92c0 FUN_1437e92c0 body=139 status=ok
// SIG undefined FUN_1437e92c0(void)

longlong FUN_1437e92c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437ea5e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x40;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 1437e9350 FUN_1437e9350 body=18 status=ok
// SIG undefined FUN_1437e9350(void)

undefined8 * FUN_1437e9350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146809e60;
  return param_2;
}



// FUNCTION 1437e9370 FUN_1437e9370 body=169 status=ok
// SIG undefined FUN_1437e9370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e9370(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = uRam00000001467f08d8;
        *(undefined8 *)(puVar2 + 2) = _DAT_1467f08d0;
        *(undefined8 *)(puVar2 + 4) = uVar1;
        puVar2[6] = puVar2[2] ^ 0x80000000;
        puVar2[7] = puVar2[3] ^ 0x80000000;
        puVar2[8] = puVar2[4] ^ 0x80000000;
        puVar2[9] = puVar2[5] ^ 0x80000000;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x12) = 0;
        *(undefined2 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x52) = 0;
        *(undefined2 *)((longlong)puVar2 + 0x56) = 0;
        FUN_14370c720(puVar2 + 10,0,0x18);
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e9420 FUN_1437e9420 body=390 status=ok
// SIG undefined FUN_1437e9420(void)

void FUN_1437e9420(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (0 < param_4) {
    puVar10 = (undefined4 *)(param_1 + 0x48);
    param_2 = param_2 - param_1;
    lVar14 = (longlong)param_4;
    do {
      plVar1 = (longlong *)(puVar10 + -0x12);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0x80000000;
        puVar8 = (undefined4 *)((longlong)puVar10 + param_2 + -0x38);
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar10[-0xe] = *puVar8;
        puVar10[-0xd] = uVar4;
        puVar10[-0xc] = uVar5;
        puVar10[-0xb] = uVar6;
        puVar8 = (undefined4 *)((longlong)puVar10 + param_2 + -0x28);
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar10[-10] = *puVar8;
        puVar10[-9] = uVar4;
        puVar10[-8] = uVar5;
        puVar10[-7] = uVar6;
        iVar2 = *(int *)((longlong)puVar10 + param_2 + -0x40);
        lVar12 = (longlong)iVar2;
        lVar13 = *(longlong *)((longlong)puVar10 + param_2 + -0x48);
        uVar7 = FUN_143703a50();
        uVar9 = puVar10[-0xf] & 0x3fffffff;
        iVar11 = puVar10[-0x10] + iVar2;
        if (((int)uVar9 < iVar11) && ((int)uVar9 < iVar11)) {
          iVar3 = iVar11;
          if (iVar11 < (int)(uVar9 * 2)) {
            iVar3 = uVar9 * 2;
          }
          FUN_14370c310(uVar7,plVar1,iVar3,4);
        }
        puVar8 = (undefined4 *)(*plVar1 + (longlong)(int)puVar10[-0x10] * 4);
        if (0 < iVar2) {
          lVar13 = lVar13 - (longlong)puVar8;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *(undefined4 *)(lVar13 + (longlong)puVar8);
            }
            puVar8 = puVar8 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        puVar10[-0x10] = iVar11;
        *puVar10 = *(undefined4 *)(param_2 + (longlong)puVar10);
        puVar10[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar10);
        puVar10[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar10);
        puVar10[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar10);
        *(undefined1 *)(puVar10 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)puVar10);
        *(undefined1 *)((longlong)puVar10 + 0x11) =
             *(undefined1 *)((longlong)puVar10 + param_2 + 0x11);
        *(undefined1 *)((longlong)puVar10 + 0x12) =
             *(undefined1 *)((longlong)puVar10 + param_2 + 0x12);
        *(undefined1 *)((longlong)puVar10 + 0x13) =
             *(undefined1 *)((longlong)puVar10 + param_2 + 0x13);
        *(undefined2 *)(puVar10 + 5) = *(undefined2 *)((longlong)puVar10 + param_2 + 0x14);
        *(undefined1 *)((longlong)puVar10 + 0x16) =
             *(undefined1 *)((longlong)puVar10 + param_2 + 0x16);
        *(undefined1 *)((longlong)puVar10 + 0x17) =
             *(undefined1 *)((longlong)puVar10 + param_2 + 0x17);
        FUN_14370c700(puVar10 + -6,param_2 + -0x18 + (longlong)puVar10,0x18);
      }
      puVar10 = puVar10 + 0x18;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1437e95b0 FUN_1437e95b0 body=63 status=ok
// SIG undefined FUN_1437e95b0(void)

void FUN_1437e95b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ee3c0(param_1,0,0,0);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e95f0 FUN_1437e95f0 body=75 status=ok
// SIG undefined FUN_1437e95f0(void)

void FUN_1437e95f0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437ee1d0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9640 FUN_1437e9640 body=205 status=ok
// SIG undefined FUN_1437e9640(void)

void FUN_1437e9640(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[3] = 0;
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e9710 FUN_1437e9710 body=99 status=ok
// SIG undefined FUN_1437e9710(void)

void FUN_1437e9710(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      if (puVar1 + -6 != (undefined4 *)0x0) {
        FUN_1437ea460(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437e9780 FUN_1437e9780 body=247 status=ok
// SIG undefined FUN_1437e9780(void)

void FUN_1437e9780(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
      if (plVar2[2] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + 0x10 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + 0x10 + (longlong)plVar2) = plVar2[2];
      if (plVar2[3] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + 0x18 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + 0x18 + (longlong)plVar2) = plVar2[3];
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e9910 FUN_1437e9910 body=153 status=ok
// SIG undefined FUN_1437e9910(void)

longlong FUN_1437e9910(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1437e99c0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437eb660(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9aa0 FUN_1437e9aa0 body=75 status=ok
// SIG undefined FUN_1437e9aa0(void)

void FUN_1437e9aa0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437eb520(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9b90 FUN_1437e9b90 body=366 status=ok
// SIG undefined FUN_1437e9b90(void)

void FUN_1437e9b90(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x3c);
    lVar15 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar14 + -0xd,param_2 + -0x34 + (longlong)puVar14);
      puVar1 = (uint *)(param_2 + -0x1c + (longlong)puVar14);
      uVar4 = puVar1[1];
      uVar13 = puVar1[2];
      uVar6 = puVar1[3];
      puVar14[-7] = *puVar1;
      puVar14[-6] = uVar4;
      puVar14[-5] = uVar13;
      puVar14[-4] = uVar6;
      uVar4 = *(uint *)((longlong)puVar14 + param_2 + -4);
      lVar5 = *(longlong *)((longlong)puVar14 + param_2 + -0xc);
      uVar10 = FUN_143703a50();
      if ((int)(*puVar14 & 0x3fffffff) < (int)uVar4) {
        FUN_14370c310(uVar10,puVar14 + -3,uVar4,0x40);
      }
      uVar13 = uVar4;
      if ((int)puVar14[-1] < (int)uVar4) {
        uVar13 = puVar14[-1];
      }
      FUN_1437ea170(*(undefined8 *)(puVar14 + -3),lVar5,uVar13);
      puVar11 = (undefined8 *)(*(longlong *)(puVar14 + -3) + (longlong)(int)uVar13 * 0x40);
      lVar12 = (longlong)(int)(uVar4 - uVar13);
      if (0 < (int)(uVar4 - uVar13)) {
        lVar5 = ((longlong)(int)uVar13 * 0x40 - (longlong)puVar11) + lVar5;
        do {
          if (puVar11 != (undefined8 *)0x0) {
            uVar10 = ((undefined8 *)(lVar5 + (longlong)puVar11))[1];
            *puVar11 = *(undefined8 *)(lVar5 + (longlong)puVar11);
            puVar11[1] = uVar10;
            puVar2 = (undefined8 *)(lVar5 + 0x10 + (longlong)puVar11);
            uVar10 = puVar2[1];
            puVar11[2] = *puVar2;
            puVar11[3] = uVar10;
            puVar3 = (undefined4 *)(lVar5 + 0x20 + (longlong)puVar11);
            uVar7 = puVar3[1];
            uVar8 = puVar3[2];
            uVar9 = puVar3[3];
            *(undefined4 *)(puVar11 + 4) = *puVar3;
            *(undefined4 *)((longlong)puVar11 + 0x24) = uVar7;
            *(undefined4 *)(puVar11 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar9;
            puVar2 = (undefined8 *)(lVar5 + 0x30 + (longlong)puVar11);
            uVar10 = puVar2[1];
            puVar11[6] = *puVar2;
            puVar11[7] = uVar10;
          }
          puVar11 = puVar11 + 8;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      puVar14[-1] = uVar4;
      *(undefined8 *)(puVar14 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar14);
      *(undefined8 *)(puVar14 + 3) = *(undefined8 *)(param_2 + 0xc + (longlong)puVar14);
      puVar14 = puVar14 + 0x14;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 1437e9d00 FUN_1437e9d00 body=18 status=ok
// SIG undefined FUN_1437e9d00(void)

undefined8 * FUN_1437e9d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680a1c0;
  return param_2;
}



// FUNCTION 1437e9d20 FUN_1437e9d20 body=74 status=ok
// SIG undefined FUN_1437e9d20(void)

void FUN_1437e9d20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ea550(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9d70 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPolygonCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437eb070(param_1);
      }
      param_1 = param_1 + 0xd98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9db0 func body=78 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkcdPlanarGeometryPolygonCollection>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437eb030(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xd98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9e00 FUN_1437e9e00 body=84 status=ok
// SIG undefined FUN_1437e9e00(void)

void FUN_1437e9e00(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
        FUN_1437ea870(param_1);
      }
      param_1 = param_1 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9e60 FUN_1437e9e60 body=77 status=ok
// SIG undefined FUN_1437e9e60(void)

void FUN_1437e9e60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437ea580(param_1,local_res18);
      }
      param_1 = param_1 + 0xd98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e9ee0 FUN_1437e9ee0 body=273 status=ok
// SIG undefined FUN_1437e9ee0(void)

void FUN_1437e9ee0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0xc);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 4);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[1] = *puVar2;
        puVar8[2] = uVar7;
        puVar8[3] = uVar9;
        puVar8[4] = uVar4;
        puVar2 = (uint *)((longlong)puVar8 + param_2 + 0x14);
        uVar7 = puVar2[1];
        uVar9 = puVar2[2];
        uVar4 = puVar2[3];
        puVar8[5] = *puVar2;
        puVar8[6] = uVar7;
        puVar8[7] = uVar9;
        puVar8[8] = uVar4;
        iVar3 = *(int *)((longlong)puVar8 + param_2 + -4);
        lVar11 = (longlong)iVar3;
        lVar10 = *(longlong *)((longlong)puVar8 + param_2 + -0xc);
        uVar5 = FUN_143703a50();
        uVar7 = *puVar8 & 0x3fffffff;
        uVar9 = puVar8[-1] + iVar3;
        if (((int)uVar7 < (int)uVar9) && ((int)uVar7 < (int)uVar9)) {
          uVar4 = uVar9;
          if ((int)uVar9 < (int)(uVar7 * 2)) {
            uVar4 = uVar7 * 2;
          }
          FUN_14370c310(uVar5,puVar1,uVar4,4);
        }
        puVar6 = (undefined4 *)(*(longlong *)puVar1 + (longlong)(int)puVar8[-1] * 4);
        if (0 < iVar3) {
          lVar10 = lVar10 - (longlong)puVar6;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
            }
            puVar6 = puVar6 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar8[-1] = uVar9;
      }
      puVar8 = puVar8 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1437ea070 FUN_1437ea070 body=139 status=ok
// SIG undefined FUN_1437ea070(void)

longlong FUN_1437ea070(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437f13b0();
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



// FUNCTION 1437ea100 FUN_1437ea100 body=101 status=ok
// SIG undefined FUN_1437ea100(void)

void FUN_1437ea100(longlong param_1,longlong param_2,int param_3)

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
      puVar1[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar1);
      puVar1[4] = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 5) = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar1);
      puVar1[7] = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar1);
      *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(param_2 + 0x20 + (longlong)puVar1);
      *(undefined2 *)((longlong)puVar1 + 0x22) = *(undefined2 *)(param_2 + 0x22 + (longlong)puVar1);
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437ea170 FUN_1437ea170 body=61 status=ok
// SIG undefined FUN_1437ea170(void)

void FUN_1437ea170(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    do {
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
      puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[2] = *puVar1;
      puVar3[3] = uVar2;
      puVar3 = puVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437ea1b0 FUN_1437ea1b0 body=43 status=ok
// SIG undefined FUN_1437ea1b0(void)

void FUN_1437ea1b0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined8 *)((param_2 - param_1) + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      puVar1 = (undefined8 *)((param_2 - param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437ea1e0 FUN_1437ea1e0 body=210 status=ok
// SIG undefined FUN_1437ea1e0(void)

longlong * FUN_1437ea1e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar4 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar3 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar4 = FUN_143702d60(uVar3,0x30,local_res8);
  }
  *param_1 = lVar4;
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  if (0 < iVar2) {
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    lVar4 = *param_2 - lVar4;
    do {
      puVar1 = (undefined8 *)(lVar4 + -0x10 + (longlong)puVar5);
      uVar3 = puVar1[1];
      puVar5[-2] = *puVar1;
      puVar5[-1] = uVar3;
      uVar3 = ((undefined8 *)(lVar4 + (longlong)puVar5))[1];
      *puVar5 = *(undefined8 *)(lVar4 + (longlong)puVar5);
      puVar5[1] = uVar3;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar4 + 0x18 + (longlong)puVar5);
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 1437ea2c0 FUN_1437ea2c0 body=217 status=ok
// SIG undefined FUN_1437ea2c0(void)

longlong * FUN_1437ea2c0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar4 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar3 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar4 = FUN_143702d60(uVar3,0x40,local_res8);
  }
  *param_1 = lVar4;
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  if (0 < iVar2) {
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    lVar4 = *param_2 - lVar4;
    do {
      puVar1 = (undefined8 *)(lVar4 + -0x10 + (longlong)puVar5);
      uVar3 = puVar1[1];
      puVar5[-2] = *puVar1;
      puVar5[-1] = uVar3;
      uVar3 = ((undefined8 *)(lVar4 + (longlong)puVar5))[1];
      *puVar5 = *(undefined8 *)(lVar4 + (longlong)puVar5);
      puVar5[1] = uVar3;
      puVar5[2] = *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar5);
      puVar5[3] = *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar5);
      puVar5[4] = *(undefined8 *)(lVar4 + 0x20 + (longlong)puVar5);
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1437ea3a0 FUN_1437ea3a0 body=191 status=ok
// SIG undefined FUN_1437ea3a0(void)

longlong * FUN_1437ea3a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  
  lVar5 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar2 = (int)param_2[1];
  lVar7 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar4 = FUN_143703a50();
  iVar8 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar5 = FUN_143702d60(uVar4,0x20,local_res8);
  }
  *param_1 = lVar5;
  *(int *)(param_1 + 1) = iVar8;
  iVar8 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar8 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  lVar3 = *param_2;
  if (0 < iVar2) {
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    do {
      puVar1 = (undefined8 *)((lVar3 - lVar5) + -0x10 + (longlong)puVar6);
      uVar4 = puVar1[1];
      puVar6[-2] = *puVar1;
      puVar6[-1] = uVar4;
      puVar1 = (undefined8 *)((lVar3 - lVar5) + (longlong)puVar6);
      uVar4 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  return param_1;
}



// FUNCTION 1437ea460 FUN_1437ea460 body=189 status=ok
// SIG undefined FUN_1437ea460(void)

undefined8 * FUN_1437ea460(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  
  puVar4 = (undefined8 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  local_res8[0] = iVar2;
  uVar3 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar4 = (undefined8 *)FUN_143702d60(uVar3,0x20,local_res8);
  }
  *param_1 = puVar4;
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  if (0 < iVar2) {
    lVar5 = *param_2 - (longlong)puVar4;
    do {
      puVar1 = (undefined8 *)(lVar5 + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + (longlong)puVar4);
      uVar3 = puVar1[1];
      puVar4[2] = *puVar1;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 1437ea520 FUN_1437ea520 body=39 status=ok
// SIG undefined FUN_1437ea520(void)

undefined8 * FUN_1437ea520(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkcdPlanarCsgOperand::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1437ea550 FUN_1437ea550 body=41 status=ok
// SIG undefined FUN_1437ea550(void)

undefined8 * FUN_1437ea550(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  return param_1;
}



// FUNCTION 1437ea580 FUN_1437ea580 body=41 status=ok
// SIG undefined FUN_1437ea580(void)

undefined8 * FUN_1437ea580(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkcdPlanarGeometryPolygonCollection::vftable;
  return param_1;
}



// FUNCTION 1437ea5b0 FUN_1437ea5b0 body=39 status=ok
// SIG undefined FUN_1437ea5b0(void)

undefined8 * FUN_1437ea5b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *param_1 = hkcdPlanarSolid::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1437ea5e0 FUN_1437ea5e0 body=147 status=ok
// SIG undefined FUN_1437ea5e0(void)

void FUN_1437ea5e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkcdPlanarSolid::NodeStorage::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x20,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x28,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437ea680 FUN_1437ea680 body=203 status=ok
// SIG undefined FUN_1437ea680(void)

longlong FUN_1437ea680(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
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
        sVar3 = 0xd98;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd98);
    }
  }
  return param_1;
}



// FUNCTION 1437ea750 FUN_1437ea750 body=139 status=ok
// SIG undefined FUN_1437ea750(void)

longlong FUN_1437ea750(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437eb6f0();
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



// FUNCTION 1437ea7e0 FUN_1437ea7e0 body=139 status=ok
// SIG undefined FUN_1437ea7e0(void)

longlong FUN_1437ea7e0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437f1280();
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



// FUNCTION 1437ea870 FUN_1437ea870 body=261 status=ok
// SIG undefined FUN_1437ea870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ea870(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if (uVar5 < 2) {
    uVar5 = uVar5 * 2;
    uVar3 = 2;
    if (2 < uVar5) {
      uVar3 = uVar5;
    }
    FUN_14370c310(uVar4,param_1,uVar3,0x80);
  }
  *(undefined4 *)(param_1 + 1) = 2;
  uVar4 = uRam00000001467f08d8;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = _DAT_1467f08d0;
  puVar1[1] = uVar4;
  uVar4 = uRam00000001467f08d8;
  puVar1[4] = _DAT_1467f08d0;
  puVar1[5] = uVar4;
  uVar4 = uRam00000001467f08d8;
  puVar1[8] = _DAT_1467f08d0;
  puVar1[9] = uVar4;
  uVar4 = uRam00000001467f0928;
  puVar1[2] = _DAT_1467f0920;
  puVar1[3] = uVar4;
  uVar4 = uRam00000001467f0928;
  puVar1[6] = _DAT_1467f0920;
  puVar1[7] = uVar4;
  uVar4 = uRam00000001467f0928;
  puVar1[10] = _DAT_1467f0920;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0;
  uVar4 = uRam00000001467f08d8;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x80) = _DAT_1467f08d0;
  *(undefined8 *)(lVar2 + 0x88) = uVar4;
  uVar4 = uRam00000001467f08d8;
  *(undefined8 *)(lVar2 + 0xa0) = _DAT_1467f08d0;
  *(undefined8 *)(lVar2 + 0xa8) = uVar4;
  uVar4 = uRam00000001467f08d8;
  *(undefined8 *)(lVar2 + 0xc0) = _DAT_1467f08d0;
  *(undefined8 *)(lVar2 + 200) = uVar4;
  uVar4 = uRam00000001467f0928;
  *(undefined8 *)(lVar2 + 0x90) = _DAT_1467f0920;
  *(undefined8 *)(lVar2 + 0x98) = uVar4;
  uVar4 = uRam00000001467f0928;
  *(undefined8 *)(lVar2 + 0xb0) = _DAT_1467f0920;
  *(undefined8 *)(lVar2 + 0xb8) = uVar4;
  uVar4 = uRam00000001467f0928;
  *(undefined8 *)(lVar2 + 0xd0) = _DAT_1467f0920;
  *(undefined8 *)(lVar2 + 0xd8) = uVar4;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined4 *)(lVar2 + 0xf0) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0xf4) = 0;
  *(undefined4 *)(*param_1 + 0xf0) = 0;
  return;
}



// FUNCTION 1437ea980 FUN_1437ea980 body=18 status=ok
// SIG undefined FUN_1437ea980(void)

undefined8 * FUN_1437ea980(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680baa0;
  return param_2;
}



// FUNCTION 1437ea9a0 FUN_1437ea9a0 body=18 status=ok
// SIG undefined FUN_1437ea9a0(void)

undefined8 * FUN_1437ea9a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680a2f0;
  return param_2;
}



// FUNCTION 1437ea9c0 FUN_1437ea9c0 body=18 status=ok
// SIG undefined FUN_1437ea9c0(void)

undefined8 * FUN_1437ea9c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146809df0;
  return param_2;
}



// FUNCTION 1437ea9e0 FUN_1437ea9e0 body=18 status=ok
// SIG undefined FUN_1437ea9e0(void)

undefined8 * FUN_1437ea9e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680a090;
  return param_2;
}



// FUNCTION 1437eaa00 FUN_1437eaa00 body=18 status=ok
// SIG undefined FUN_1437eaa00(void)

undefined8 * FUN_1437eaa00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146809b80;
  return param_2;
}



// FUNCTION 1437eaa20 FUN_1437eaa20 body=241 status=ok
// SIG undefined FUN_1437eaa20(void)

void FUN_1437eaa20(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar2 = (uint)(uVar1 >> 1) & 0x7fffffff | (uint)uVar1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar5 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar2 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  iVar3 = 0x20 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (0x1f < iVar3) {
    iVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  }
  *param_2 = *param_2 & 0xffffffff00000000 | (ulonglong)(ushort)iVar3 |
             (ulonglong)(ushort)((uint)iVar3 >> 0x10) << 0x10;
  param_2[1] = param_2[1];
  return;
}



// FUNCTION 1437eab20 FUN_1437eab20 body=268 status=ok
// SIG undefined FUN_1437eab20(void)

void FUN_1437eab20(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_1437eaa20();
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = (uint)(uVar1 >> 1) & 0x7fffffff | (uint)uVar1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar5 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar2 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  iVar3 = 0x20 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (0x1f < iVar3) {
    iVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  }
  *param_2 = *param_2 & 0xffffffff | (ulonglong)(ushort)iVar3 << 0x20 |
             (ulonglong)(ushort)((uint)iVar3 >> 0x10) << 0x30;
  param_2[1] = param_2[1];
  return;
}



// FUNCTION 1437eac30 FUN_1437eac30 body=268 status=ok
// SIG undefined FUN_1437eac30(void)

void FUN_1437eac30(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_1437eab20();
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = (uint)(uVar1 >> 1) & 0x7fffffff | (uint)uVar1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar5 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar2 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  iVar3 = 0x20 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (0x1f < iVar3) {
    iVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  }
  *param_2 = *param_2;
  param_2[1] = param_2[1] & 0xffffffff00000000 | (ulonglong)(ushort)iVar3 |
               (ulonglong)(ushort)((uint)iVar3 >> 0x10) << 0x10;
  return;
}



// FUNCTION 1437ead40 FUN_1437ead40 body=738 status=ok
// SIG undefined FUN_1437ead40(void)

void FUN_1437ead40(undefined1 (*param_1) [16])

{
  longlong lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  double dVar20;
  undefined4 uVar23;
  undefined1 auVar22 [16];
  double dVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong local_a0;
  longlong local_98;
  int local_90;
  uint uStack_8c;
  uint uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 auVar21 [16];
  
  auVar29 = *param_1;
  auVar31._0_8_ = auVar29._0_8_ >> 0xe;
  auVar31._8_8_ = auVar29._8_8_ >> 0xe;
  iVar19 = auVar29._4_4_ >> 0x1f;
  auVar21._0_8_ = CONCAT44(iVar19,iVar19);
  auVar21._8_4_ = auVar29._12_4_ >> 0x1f;
  auVar21._12_4_ = auVar21._8_4_;
  auVar22._0_8_ = auVar21._0_8_ << 0x32;
  auVar22._8_8_ = auVar21._8_8_ << 0x32;
  auVar22 = auVar22 | auVar31;
  auVar29 = param_1[1];
  auVar30._8_8_ = -auVar22._8_8_;
  auVar30._0_8_ = -auVar22._0_8_;
  uVar5 = *(ulonglong *)(param_1[1] + 8) >> 0xb;
  uVar6 = *(longlong *)param_1[1] << 0x35 | uVar5;
  auVar9._0_8_ = auVar29._0_8_ >> 0xe;
  auVar9._8_8_ = auVar29._8_8_ >> 0xe;
  uVar7 = (longlong)uVar6 >> 0x35;
  iVar19 = auVar29._4_4_ >> 0x1f;
  auVar13._0_8_ = CONCAT44(iVar19,iVar19);
  auVar13._8_4_ = auVar29._12_4_ >> 0x1f;
  auVar13._12_4_ = auVar13._8_4_;
  uVar6 = (longlong)uVar6 >> 0x3f;
  uVar5 = (*(ulonglong *)(param_1[1] + 8) & 0x7ff | uVar5 << 0xb) ^ uVar6;
  auVar14._0_8_ = auVar13._0_8_ << 0x32;
  auVar14._8_8_ = auVar13._8_8_ << 0x32;
  local_a0 = uVar5 - uVar6;
  uVar32 = auVar22._4_4_ >> 0x1f;
  uVar33 = auVar22._12_4_ >> 0x1f;
  auVar14 = auVar14 | auVar9;
  auVar28._8_8_ = -auVar14._8_8_;
  auVar28._0_8_ = -auVar14._0_8_;
  uVar34 = auVar14._4_4_ >> 0x1f;
  iVar19 = auVar14._12_4_ >> 0x1f;
  auVar10._4_4_ = uVar33;
  auVar10._0_4_ = uVar32;
  auVar10._8_4_ = uVar33;
  auVar10._12_4_ = uVar33;
  auVar29._8_8_ = auVar10._8_8_;
  auVar29._4_4_ = uVar32;
  auVar29._0_4_ = uVar32;
  local_98 = ((uVar7 ^ uVar6) - uVar6) - (ulonglong)(uVar5 < uVar6);
  auVar12._4_4_ = uVar34;
  auVar12._0_4_ = uVar34;
  auVar12._8_4_ = iVar19;
  auVar12._12_4_ = iVar19;
  auVar31 = auVar30 & auVar29 | ~auVar29 & auVar22;
  auVar29 = auVar28 & auVar12 | ~auVar12 & auVar14;
  local_80 = auVar31;
  local_70 = auVar29;
  FUN_1437eac30(local_80,&local_90);
  auVar16._4_4_ = local_90;
  auVar16._0_4_ = local_90;
  auVar16._8_4_ = local_90;
  auVar16._12_4_ = local_90;
  auVar15._0_4_ = -(uint)(local_90 < (int)uStack_8c);
  auVar15._4_4_ = -(uint)(local_90 < (int)uStack_8c);
  auVar15._8_4_ = -(uint)(local_90 < (int)uStack_8c);
  auVar15._12_4_ = -(uint)(local_90 < (int)uStack_8c);
  auVar16 = auVar15 & auVar16;
  uVar25 = ~auVar15._0_4_ & uStack_8c | auVar16._0_4_;
  uVar11 = -(uint)((int)uVar25 < (int)uStack_88);
  uVar25 = (uVar11 & uVar25 | ~uVar11 & uStack_88) - 0xf;
  iVar19 = FUN_143dfa290(&local_a0,2);
  uVar11 = iVar19 - 0x36U;
  if ((int)uVar25 < (int)(iVar19 - 0x36U)) {
    uVar11 = uVar25;
  }
  uVar6 = (ulonglong)uVar11;
  uVar5 = 0;
  bVar8 = (byte)uVar11;
  if (uVar11 < 0x40) {
    uVar4 = local_98 << (bVar8 & 0x3f) | local_a0 >> 0x40 - (bVar8 & 0x3f);
    uVar5 = local_a0 << (bVar8 & 0x3f);
  }
  else {
    uVar4 = local_a0 << (bVar8 - 0x40 & 0x3f);
  }
  dVar26 = (double)((auVar31._0_8_ << uVar6) << 4) * 1.1102230246251565e-16;
  dVar27 = (double)((auVar31._8_8_ << uVar6) << 4) * 1.1102230246251565e-16;
  uVar11 = 0;
  if ((longlong)uVar7 < 0) {
    uVar11 = 0xf;
  }
  dVar20 = (double)((auVar29._0_8_ << uVar6) << 4) * 1.1102230246251565e-16;
  dVar24 = (double)(longlong)
                   ((uVar5 & 0xfffffffffffffff) >> 0x15 | (uVar4 << 4 | uVar5 >> 0x3c) << 0x27) *
           3.725290298461914e-09;
  lVar1 = (ulonglong)((uVar11 >> 2) * 2) * 8;
  uVar11 = (uint)((ulonglong)dVar20 >> 0x20);
  auVar2._4_8_ = auVar16._8_8_;
  auVar2._0_4_ = uVar11;
  auVar17._0_8_ = auVar2._0_8_ << 0x20;
  uVar23 = SUB84(dVar24,0);
  auVar17._8_4_ = uVar23;
  uVar25 = (uint)((ulonglong)dVar24 >> 0x20);
  auVar17._12_4_ = uVar25;
  auVar3._4_8_ = auVar17._8_8_;
  auVar3._0_4_ = uVar11 ^ *(uint *)(&UNK_145ba0e94 + lVar1) & 0x80000000;
  auVar18._0_8_ = auVar3._0_8_ << 0x20;
  auVar18._8_4_ = uVar23;
  auVar18._12_4_ = uVar25 ^ *(uint *)(&UNK_145ba0e9c + lVar1) & 0x80000000;
  *(ulonglong *)param_1[3] = CONCAT44(uVar11 ^ uVar34 & 0x80000000,SUB84(dVar20,0));
  *(longlong *)(param_1[3] + 8) = auVar18._8_8_;
  *(int *)param_1[2] = SUB84(dVar26,0);
  *(uint *)(param_1[2] + 4) = (uint)((ulonglong)dVar26 >> 0x20) ^ uVar32 & 0x80000000;
  *(int *)(param_1[2] + 8) = SUB84(dVar27,0);
  *(uint *)(param_1[2] + 0xc) = (uint)((ulonglong)dVar27 >> 0x20) ^ uVar33 & 0x80000000;
  return;
}



// FUNCTION 1437eb030 FUN_1437eb030 body=63 status=ok
// SIG undefined FUN_1437eb030(void)

undefined8 * FUN_1437eb030(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkcdPlanarGeometryPolygonCollection::vftable;
  FUN_1437eb1e0(param_1);
  return param_1;
}



// FUNCTION 1437eb070 FUN_1437eb070 body=63 status=ok
// SIG undefined FUN_1437eb070(void)

undefined8 * FUN_1437eb070(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkcdPlanarGeometryPolygonCollection::vftable;
  FUN_1437eb0b0(param_1);
  return param_1;
}



// FUNCTION 1437eb0b0 FUN_1437eb0b0 body=289 status=ok
// SIG undefined FUN_1437eb0b0(void)

void FUN_1437eb0b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if (uVar4 < 8) {
    uVar4 = uVar4 * 2;
    uVar2 = 8;
    if (8 < uVar4) {
      uVar2 = uVar4;
    }
    FUN_14370c310(uVar3,param_1 + 0x18,uVar2,4);
  }
  iVar7 = 8 - *(int *)(param_1 + 0x20);
  if (0 < iVar7) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 4);
    for (lVar5 = (longlong)iVar7; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  puVar1 = *(uint **)(param_1 + 0x18);
  puVar8 = (undefined4 *)(param_1 + 0x2c);
  lVar5 = 0x1a;
  puVar1[2] = 4;
  puVar1[3] = puVar1[3] | 0x40000000;
  puVar1[6] = 4;
  puVar1[7] = puVar1[7] | 0x40000000;
  *puVar1 = *puVar1 & 0x7fffffff;
  puVar1[puVar1[2] - 1] = puVar1[puVar1[2] - 1] & 0x7fffffff;
  puVar1[4] = puVar1[4] & 0x7fffffff;
  puVar1[(ulonglong)(puVar1[6] - 1) + 4] = puVar1[(ulonglong)(puVar1[6] - 1) + 4] & 0x7fffffff;
  puVar1[1] = 0;
  puVar1[5] = 0;
  *puVar1 = *puVar1 & 0xe0000000;
  puVar1[4] = puVar1[4] & 0xe0000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar10 = (undefined4 *)(param_1 + 0x94);
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    puVar9 = puVar10;
    for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    lVar5 = lVar5 + -1;
    puVar10 = puVar10 + 0x20;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 1437eb1e0 FUN_1437eb1e0 body=265 status=ok
// SIG undefined FUN_1437eb1e0(void)

void FUN_1437eb1e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  lVar9 = (longlong)iVar1;
  lVar7 = *(longlong *)(param_2 + 0x18);
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 0x20) + iVar1;
  if (((int)uVar5 < iVar8) && ((int)uVar5 < iVar8)) {
    iVar2 = iVar8;
    if (iVar8 < (int)(uVar5 * 2)) {
      iVar2 = uVar5 * 2;
    }
    FUN_14370c310(uVar3,param_1 + 0x18,iVar2,4);
  }
  puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 4);
  if (0 < iVar1) {
    lVar7 = lVar7 - (longlong)puVar6;
    do {
      *puVar6 = *(undefined4 *)(lVar7 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar8;
  puVar6 = (undefined4 *)(param_1 + 0x2c);
  lVar7 = 0x1a;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  param_2 = param_2 - param_1;
  puVar4 = (undefined4 *)(param_1 + 0x94);
  do {
    lVar9 = 0x10;
    *puVar6 = *(undefined4 *)((longlong)puVar6 + param_2);
    do {
      *puVar4 = *(undefined4 *)(param_2 + (longlong)puVar4);
      puVar4[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar4);
      puVar4 = puVar4 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 1437eb2f0 FUN_1437eb2f0 body=553 status=ok
// SIG undefined FUN_1437eb2f0(void)

ulonglong FUN_1437eb2f0(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return param_2;
  }
  if (param_2 != 0) {
    uVar6 = (-(uint)param_1 & (uint)param_1) - 1;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar1 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = (uint)(param_1 >> 0x20);
    uVar6 = (-uVar6 & uVar6) - 1;
    uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    if (0x1f < uVar1) {
      uVar1 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
    }
    uVar6 = (-(uint)param_2 & (uint)param_2) - 1;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar2 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = (uint)(param_2 >> 0x20);
    uVar3 = (-uVar6 & uVar6) - 1;
    uVar6 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar2 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    if (0x1f < uVar6) {
      uVar6 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
    }
    if (uVar1 < uVar6) {
      uVar6 = uVar1;
    }
    param_1 = param_1 >> ((byte)uVar1 & 0x3f);
    param_2 = param_2 >> ((byte)uVar6 & 0x3f);
    do {
      uVar1 = (-(uint)param_2 & (uint)param_2) - 1;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar2 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101;
      uVar1 = (uint)(param_2 >> 0x20);
      uVar1 = (-uVar1 & uVar1) - 1;
      bVar5 = (byte)(uVar2 >> 0x18);
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      if (0x1f < uVar2 >> 0x18) {
        bVar5 = (char)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
      }
      uVar4 = param_2 >> (bVar5 & 0x3f);
      if (uVar4 < param_1) {
        param_2 = param_1 - uVar4;
        param_1 = uVar4;
      }
      else {
        param_2 = uVar4 - param_1;
      }
    } while (param_2 != 0);
    param_1 = param_1 << ((byte)uVar6 & 0x3f);
  }
  return param_1;
}



// FUNCTION 1437eb520 FUN_1437eb520 body=312 status=ok
// SIG undefined FUN_1437eb520(void)

undefined8 * FUN_1437eb520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  uVar9 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar8 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
  if (lVar8 != 0) {
    uVar9 = FUN_14370d870(lVar8,0);
  }
  param_1[9] = uVar9;
  iVar2 = *(int *)(param_2 + 0x38);
  lVar13 = (longlong)iVar2;
  lVar8 = *(longlong *)(param_2 + 0x30);
  uVar9 = FUN_143703a50();
  uVar11 = *(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff;
  iVar12 = *(int *)(param_1 + 7) + iVar2;
  if (((int)uVar11 < iVar12) && ((int)uVar11 < iVar12)) {
    iVar3 = iVar12;
    if (iVar12 < (int)(uVar11 * 2)) {
      iVar3 = uVar11 * 2;
    }
    FUN_14370c310(uVar9,param_1 + 6,iVar3,0x40);
  }
  puVar10 = (undefined8 *)((longlong)*(int *)(param_1 + 7) * 0x40 + param_1[6]);
  if (0 < iVar2) {
    lVar8 = lVar8 - (longlong)puVar10;
    do {
      if (puVar10 != (undefined8 *)0x0) {
        uVar9 = ((undefined8 *)(lVar8 + (longlong)puVar10))[1];
        *puVar10 = *(undefined8 *)(lVar8 + (longlong)puVar10);
        puVar10[1] = uVar9;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)puVar10);
        uVar9 = puVar1[1];
        puVar10[2] = *puVar1;
        puVar10[3] = uVar9;
        puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)puVar10);
        uVar9 = puVar1[1];
        puVar10[4] = *puVar1;
        puVar10[5] = uVar9;
        puVar1 = (undefined8 *)(lVar8 + 0x30 + (longlong)puVar10);
        uVar9 = puVar1[1];
        puVar10[6] = *puVar1;
        puVar10[7] = uVar9;
      }
      puVar10 = puVar10 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(int *)(param_1 + 7) = iVar12;
  return param_1;
}



// FUNCTION 1437eb660 FUN_1437eb660 body=141 status=ok
// SIG undefined FUN_1437eb660(void)

undefined8 * FUN_1437eb660(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,0);
  }
  param_1[9] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1437ebe50(param_1);
  return param_1;
}



// FUNCTION 1437eb6f0 FUN_1437eb6f0 body=273 status=ok
// SIG undefined FUN_1437eb6f0(void)

void FUN_1437eb6f0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[9];
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lpCriticalSection,0x28);
    param_1[9] = 0;
  }
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = FUN_143703a50();
    *(undefined4 *)(puVar1 + 1) = 0;
    if (-1 < (int)*(uint *)((longlong)puVar1 + 0xc)) {
      FUN_143702e10(uVar3,*puVar1,0x10,*(uint *)((longlong)puVar1 + 0xc) & 0x3fffffff);
    }
    *puVar1 = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x80000000;
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),puVar1,0x30);
    param_1[8] = 0;
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar3,param_1[6],0x40,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437eb810 FUN_1437eb810 body=1590 status=ok
// SIG undefined FUN_1437eb810(void)

void FUN_1437eb810(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  byte bVar9;
  int iVar10;
  LPVOID pvVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined4 uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulonglong local_d0;
  longlong lStack_c8;
  
  iVar10 = *(int *)(param_1 + 0x38) + -1;
  lVar16 = (longlong)iVar10;
  if (-1 < iVar10) {
    lVar17 = lVar16 << 6;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar14 = *(ulonglong *)(lVar17 + 0x18 + lVar4);
      auVar37 = *(undefined1 (*) [16])(lVar17 + lVar4);
      uVar15 = uVar14 >> 0xb;
      uVar21 = *(longlong *)(lVar17 + 0x10 + lVar4) << 0x35 | uVar15;
      auVar39._0_8_ = auVar37._0_8_ >> 0xe;
      auVar39._8_8_ = auVar37._8_8_ >> 0xe;
      uVar22 = (longlong)uVar21 >> 0x35;
      iVar10 = auVar37._4_4_ >> 0x1f;
      auVar32._0_8_ = CONCAT44(iVar10,iVar10);
      auVar32._8_4_ = auVar37._12_4_ >> 0x1f;
      auVar32._12_4_ = auVar32._8_4_;
      uVar21 = (longlong)uVar21 >> 0x3f;
      uVar14 = (uVar14 & 0x7ff | uVar15 << 0xb) ^ uVar21;
      auVar33._0_8_ = auVar32._0_8_ << 0x32;
      auVar33._8_8_ = auVar32._8_8_ << 0x32;
      local_d0 = uVar14 - uVar21;
      auVar33 = auVar33 | auVar39;
      auVar37 = *(undefined1 (*) [16])(lVar17 + 0x10 + lVar4);
      auVar38._8_8_ = -auVar33._8_8_;
      auVar38._0_8_ = -auVar33._0_8_;
      auVar23._0_8_ = auVar37._0_8_ >> 0xe;
      auVar23._8_8_ = auVar37._8_8_ >> 0xe;
      iVar10 = auVar37._4_4_ >> 0x1f;
      auVar26._0_8_ = CONCAT44(iVar10,iVar10);
      auVar26._8_4_ = auVar37._12_4_ >> 0x1f;
      auVar26._12_4_ = auVar26._8_4_;
      auVar27._0_8_ = auVar26._0_8_ << 0x32;
      auVar27._8_8_ = auVar26._8_8_ << 0x32;
      auVar27 = auVar27 | auVar23;
      uVar40 = auVar33._4_4_ >> 0x1f;
      uVar41 = auVar33._12_4_ >> 0x1f;
      lStack_c8 = ((uVar22 ^ uVar21) - uVar21) - (ulonglong)(uVar14 < uVar21);
      uVar42 = auVar27._4_4_ >> 0x1f;
      iVar10 = auVar27._12_4_ >> 0x1f;
      auVar36._8_8_ = -auVar27._8_8_;
      auVar36._0_8_ = -auVar27._0_8_;
      auVar24._4_4_ = uVar41;
      auVar24._0_4_ = uVar40;
      auVar24._8_4_ = uVar41;
      auVar24._12_4_ = uVar41;
      auVar37._8_8_ = auVar24._8_8_;
      auVar37._4_4_ = uVar40;
      auVar37._0_4_ = uVar40;
      auVar25._4_4_ = uVar42;
      auVar25._0_4_ = uVar42;
      auVar25._8_4_ = iVar10;
      auVar25._12_4_ = iVar10;
      auVar39 = auVar38 & auVar37 | ~auVar37 & auVar33;
      auVar37 = auVar36 & auVar25 | ~auVar25 & auVar27;
      uVar13 = (uint)(auVar39._0_8_ >> 1) & 0x7fffffff | auVar39._0_4_;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = uVar13 | uVar13 >> 4;
      uVar13 = uVar13 | uVar13 >> 8;
      uVar13 = uVar13 >> 0x10 | uVar13;
      uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
      uVar18 = auVar39._4_4_ | auVar39._4_4_ >> 1;
      uVar19 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar18 = uVar18 | uVar18 >> 2;
      uVar18 = uVar18 | uVar18 >> 4;
      uVar18 = uVar18 | uVar18 >> 8;
      uVar18 = uVar18 >> 0x10 | uVar18;
      uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
      uVar13 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar13 = 0x20 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      if (0x1f < (int)uVar13) {
        uVar13 = 0x40 - (((uVar19 >> 4) + uVar19 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      }
      uVar18 = (uint)(auVar39._8_8_ >> 1) & 0x7fffffff | auVar39._8_4_;
      uVar18 = uVar18 | uVar18 >> 2;
      uVar18 = uVar18 | uVar18 >> 4;
      uVar18 = uVar18 | uVar18 >> 8;
      uVar18 = uVar18 >> 0x10 | uVar18;
      uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
      uVar19 = auVar39._12_4_ | auVar39._12_4_ >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar20 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 >> 0x10 | uVar19;
      uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
      uVar18 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      iVar10 = 0x20 - (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      if (0x1f < iVar10) {
        iVar10 = 0x40 - (((uVar20 >> 4) + uVar20 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      }
      uVar18 = (uint)(auVar37._0_8_ >> 1) & 0x7fffffff | auVar37._0_4_;
      uVar18 = uVar18 | uVar18 >> 2;
      uVar18 = uVar18 | uVar18 >> 4;
      uVar18 = uVar18 | uVar18 >> 8;
      uVar18 = uVar18 >> 0x10 | uVar18;
      uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
      uVar19 = auVar37._4_4_ | auVar37._4_4_ >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar20 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 >> 0x10 | uVar19;
      uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
      uVar18 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      uVar18 = 0x20 - (((uVar18 >> 4) + uVar18 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      if (0x1f < (int)uVar18) {
        uVar18 = 0x40 - (((uVar20 >> 4) + uVar20 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      }
      uVar20 = (uint)(CONCAT26((short)((uint)iVar10 >> 0x10),CONCAT24((short)iVar10,uVar13)) >> 0x20
                     );
      auVar28._4_4_ = uVar13;
      auVar28._0_4_ = uVar13;
      auVar28._8_4_ = uVar13;
      auVar28._12_4_ = uVar13;
      uVar19 = -(uint)((int)uVar13 < (int)uVar20);
      uVar19 = ~uVar19 & uVar20 | uVar19 & uVar13;
      uVar13 = -(uint)((int)uVar19 < (int)uVar18);
      uVar18 = (uVar13 & uVar19 | ~uVar13 & uVar18) - 0xf;
      iVar10 = FUN_143dfa290(&local_d0,2);
      uVar13 = iVar10 - 0x36U;
      if ((int)uVar18 < (int)(iVar10 - 0x36U)) {
        uVar13 = uVar18;
      }
      uVar14 = (ulonglong)uVar13;
      bVar9 = (byte)uVar13;
      if (uVar13 < 0x40) {
        uVar15 = lStack_c8 << (bVar9 & 0x3f) | local_d0 >> 0x40 - (bVar9 & 0x3f);
        uVar21 = local_d0 << (bVar9 & 0x3f);
      }
      else {
        uVar15 = local_d0 << (bVar9 - 0x40 & 0x3f);
        uVar21 = 0;
      }
      dVar5 = (double)(longlong)((auVar39._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
      dVar6 = (double)(longlong)((auVar39._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
      uVar13 = 0;
      if ((longlong)uVar22 < 0) {
        uVar13 = 0xf;
      }
      dVar31 = (double)(longlong)((auVar37._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
      dVar35 = (double)(longlong)
                       ((uVar21 & 0xfffffffffffffff) >> 0x15 |
                       (uVar15 << 4 | uVar21 >> 0x3c) << 0x27) * 3.725290298461914e-09;
      lVar1 = (ulonglong)((uVar13 >> 2) * 2) * 8;
      uVar13 = (uint)((ulonglong)dVar31 >> 0x20);
      auVar7._4_8_ = auVar28._8_8_;
      auVar7._0_4_ = uVar13;
      auVar29._0_8_ = auVar7._0_8_ << 0x20;
      uVar34 = SUB84(dVar35,0);
      auVar29._8_4_ = uVar34;
      uVar18 = (uint)((ulonglong)dVar35 >> 0x20);
      auVar29._12_4_ = uVar18;
      auVar8._4_8_ = auVar29._8_8_;
      auVar8._0_4_ = uVar13 ^ *(uint *)(&UNK_145ba0e94 + lVar1) & 0x80000000;
      auVar30._0_8_ = auVar8._0_8_ << 0x20;
      auVar30._8_4_ = uVar34;
      auVar30._12_4_ = uVar18 ^ *(uint *)(&UNK_145ba0e9c + lVar1) & 0x80000000;
      puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar4);
      *puVar2 = CONCAT44(uVar13 ^ uVar42 & 0x80000000,SUB84(dVar31,0));
      puVar2[1] = auVar30._8_8_;
      puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar4);
      *puVar3 = SUB84(dVar5,0);
      puVar3[1] = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar40 & 0x80000000;
      puVar3[2] = SUB84(dVar6,0);
      puVar3[3] = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar41 & 0x80000000;
      lVar17 = lVar17 + -0x40;
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  pvVar11 = TlsGetValue(DAT_146b7bf70);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = DAT_146b7bf68;
  }
  lVar16 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar11 + 0x58),0x28);
  if (lVar16 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar12 = FUN_14370d870(lVar16,0);
    *(undefined8 *)(param_1 + 0x48) = uVar12;
  }
  return;
}



// FUNCTION 1437ebe50 FUN_1437ebe50 body=8783 status=ok
// SIG undefined FUN_1437ebe50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1437ebe50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar122;
  undefined4 uVar135;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  double dVar136;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  uint uVar137;
  double dVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  double dVar156;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  int iVar173;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  int iVar183;
  int iVar184;
  uint uVar185;
  int iVar186;
  uint uVar187;
  uint uVar188;
  uint uVar189;
  undefined8 local_240;
  ulonglong uStack_238;
  ulonglong local_230;
  ulonglong uStack_228;
  ulonglong local_220;
  ulonglong local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  ulonglong local_170;
  ulonglong uStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  ulonglong local_140;
  ulonglong uStack_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120 [3];
  undefined8 local_108;
  ulonglong local_100 [3];
  undefined8 local_e8;
  ulonglong local_e0 [3];
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar174 [16];
  
  plVar22 = (longlong *)(param_1 + 0x30);
  uVar15 = FUN_143703a50();
  uVar16 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
  if (uVar16 < 6) {
    uVar16 = uVar16 * 2;
    uVar137 = 6;
    if (6 < uVar16) {
      uVar137 = uVar16;
    }
    FUN_14370c310(uVar15,plVar22,uVar137,0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = 6;
  pauVar21 = (undefined1 (*) [16])*plVar22;
  *(undefined8 *)*pauVar21 = 0x4000;
  *(undefined8 *)(*pauVar21 + 8) = 0;
  *(undefined8 *)pauVar21[1] = 0;
  *(undefined8 *)(pauVar21[1] + 8) = 0;
  local_130 = 0xffffffffff800001;
  local_1f0 = *(ulonglong *)(pauVar21[1] + 8) | 0xffffffffff800001;
  local_128 = 0xfffffffffffff000;
  uVar19 = *(ulonglong *)pauVar21[1];
  local_218 = uVar19 | 0x7ff;
  *(ulonglong *)pauVar21[1] = local_218;
  *(ulonglong *)(pauVar21[1] + 8) = local_1f0;
  auVar139 = *pauVar21;
  uVar17 = *(ulonglong *)(pauVar21[1] + 8) >> 0xb;
  uVar23 = *(longlong *)pauVar21[1] << 0x35 | uVar17;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar174._0_8_ = CONCAT44(iVar173,iVar173);
  auVar174._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar174._12_4_ = auVar174._8_4_;
  auVar176._0_8_ = auVar139._0_8_ >> 0xe;
  auVar176._8_8_ = auVar139._8_8_ >> 0xe;
  uVar24 = (longlong)uVar23 >> 0x35;
  auVar175._0_8_ = auVar174._0_8_ << 0x32;
  auVar175._8_8_ = auVar174._8_8_ << 0x32;
  auVar175 = auVar175 | auVar176;
  uVar23 = (longlong)uVar23 >> 0x3f;
  uVar17 = (*(ulonglong *)(pauVar21[1] + 8) & 0x7ff | uVar17 << 0xb) ^ uVar23;
  auVar64._0_8_ = uVar19 >> 0xe;
  auVar64._8_8_ = local_1f0 >> 0xe;
  local_190 = uVar17 - uVar23;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar157._0_8_ = CONCAT44(iVar173,iVar173);
  auVar157._8_4_ = (int)((longlong)local_1f0 >> 0x3f);
  auVar157._12_4_ = auVar157._8_4_;
  auVar158._0_8_ = auVar157._0_8_ << 0x32;
  auVar158._8_8_ = auVar157._8_8_ << 0x32;
  auVar158 = auVar158 | auVar64;
  iVar184 = auVar175._4_4_ >> 0x1f;
  iVar186 = auVar175._12_4_ >> 0x1f;
  iVar173 = auVar158._4_4_ >> 0x1f;
  iVar183 = auVar158._12_4_ >> 0x1f;
  auVar65._8_8_ = -auVar175._8_8_;
  auVar65._0_8_ = -auVar175._0_8_;
  auVar26._4_4_ = iVar186;
  auVar26._0_4_ = iVar184;
  auVar26._8_4_ = iVar186;
  auVar26._12_4_ = iVar186;
  auVar139._8_8_ = auVar26._8_8_;
  auVar139._4_4_ = iVar184;
  auVar139._0_4_ = iVar184;
  auVar123._4_4_ = iVar173;
  auVar123._0_4_ = iVar173;
  auVar123._8_4_ = iVar183;
  auVar123._12_4_ = iVar183;
  auVar83._8_8_ = -auVar158._8_8_;
  auVar83._0_8_ = -auVar158._0_8_;
  auVar139 = ~auVar139 & auVar175 | auVar65 & auVar139;
  uStack_188 = ((uVar24 ^ uVar23) - uVar23) - (ulonglong)(uVar17 < uVar23);
  auVar176 = ~auVar123 & auVar158 | auVar83 & auVar123;
  uVar20 = auVar139._8_8_;
  uVar17 = auVar139._0_8_;
  uVar15 = FUN_1437eb2f0(uVar17,uVar20);
  uVar19 = auVar176._0_8_;
  local_120[0] = FUN_1437eb2f0(uVar15,uVar19);
  uVar23 = 0;
  local_120[1] = 0;
  FUN_143dfacb0(local_120,&local_190,local_120);
  hkInt128::setUnsignedDiv(&local_190,&local_190,local_120);
  auVar27._4_4_ = iVar186;
  auVar27._0_4_ = iVar184;
  local_240 = uVar17 / local_120[0];
  uStack_238 = uVar20 / local_120[0];
  auVar27._8_4_ = iVar186;
  auVar27._12_4_ = iVar186;
  uVar20 = ~CONCAT44(iVar184,iVar184) & local_240;
  uVar25 = ~auVar27._8_8_ & uStack_238;
  local_230 = uVar19 / local_120[0];
  uStack_228 = auVar176._8_8_ / local_120[0];
  uVar19 = -local_240;
  uVar17 = -uStack_238;
  if ((longlong)uVar24 < 0) {
    uVar24 = ~uStack_188 + (ulonglong)(0xfffffffffffffffe < ~local_190);
    local_1f0 = ~local_190 + 1;
  }
  else {
    local_240 = local_190;
    uStack_238 = uStack_188;
    uVar24 = uStack_188;
    local_1f0 = local_190;
  }
  *(ulonglong *)*pauVar21 = (uVar20 | uVar19 & CONCAT44(iVar184,iVar184)) << 0xe;
  *(ulonglong *)(*pauVar21 + 8) = (uVar25 | uVar17 & auVar27._8_8_) << 0xe;
  *(ulonglong *)pauVar21[1] =
       (~CONCAT44(iVar173,iVar173) & local_230 | -local_230 & CONCAT44(iVar173,iVar173)) << 0xe;
  *(undefined8 *)(pauVar21[1] + 8) = 0;
  local_1f0 = local_1f0 | *(ulonglong *)(pauVar21[1] + 8);
  uVar19 = *(ulonglong *)pauVar21[1];
  local_218 = uVar24 & 0x7ff | uVar19;
  *(ulonglong *)pauVar21[1] = local_218;
  *(ulonglong *)(pauVar21[1] + 8) = local_1f0;
  auVar139 = *pauVar21;
  uVar17 = *(ulonglong *)(pauVar21[1] + 8) >> 0xb;
  uVar20 = *(longlong *)pauVar21[1] << 0x35 | uVar17;
  auVar28._0_8_ = auVar139._0_8_ >> 0xe;
  auVar28._8_8_ = auVar139._8_8_ >> 0xe;
  uVar24 = (longlong)uVar20 >> 0x35;
  auVar66._0_8_ = uVar19 >> 0xe;
  auVar66._8_8_ = local_1f0 >> 0xe;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar17 = (*(ulonglong *)(pauVar21[1] + 8) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar159._0_8_ = CONCAT44(iVar173,iVar173);
  auVar159._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar159._12_4_ = auVar159._8_4_;
  local_1e8 = uVar17 - uVar20;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar140._0_8_ = CONCAT44(iVar173,iVar173);
  auVar140._8_4_ = (int)((longlong)local_1f0 >> 0x3f);
  auVar140._12_4_ = auVar140._8_4_;
  auVar160._0_8_ = auVar159._0_8_ << 0x32;
  auVar160._8_8_ = auVar159._8_8_ << 0x32;
  auVar160 = auVar160 | auVar28;
  auVar141._0_8_ = auVar140._0_8_ << 0x32;
  auVar141._8_8_ = auVar140._8_8_ << 0x32;
  auVar141 = auVar141 | auVar66;
  uVar185 = auVar160._4_4_ >> 0x1f;
  uVar187 = auVar160._12_4_ >> 0x1f;
  uVar188 = auVar141._4_4_ >> 0x1f;
  iVar173 = auVar141._12_4_ >> 0x1f;
  auVar30._4_4_ = uVar187;
  auVar30._0_4_ = uVar185;
  auVar67._8_8_ = -auVar160._8_8_;
  auVar67._0_8_ = -auVar160._0_8_;
  auVar30._8_4_ = uVar187;
  auVar30._12_4_ = uVar187;
  auVar29._8_8_ = auVar30._8_8_;
  auVar29._4_4_ = uVar185;
  auVar29._0_4_ = uVar185;
  local_1e0 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar17 < uVar20);
  auVar124._4_4_ = uVar188;
  auVar124._0_4_ = uVar188;
  auVar124._8_4_ = iVar173;
  auVar124._12_4_ = iVar173;
  auVar84._8_8_ = -auVar141._8_8_;
  auVar84._0_8_ = -auVar141._0_8_;
  auVar176 = auVar29 & auVar67 | ~auVar29 & auVar160;
  auVar139 = auVar124 & auVar84 | ~auVar124 & auVar141;
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar86._4_4_ = (uint)local_240;
  auVar86._0_4_ = (uint)local_240;
  auVar86._8_4_ = (uint)local_240;
  auVar86._12_4_ = (uint)local_240;
  auVar85._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar85._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar85._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar85._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar86 = auVar85 & auVar86;
  uVar137 = ~auVar85._0_4_ & local_240._4_4_ | auVar86._0_4_;
  uVar16 = -(uint)((int)uVar137 < (int)(uint)uStack_238);
  uVar137 = (uVar16 & uVar137 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_1e8,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar137 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar137;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    local_1e0 = local_1e0 << (bVar18 & 0x3f) | local_1e8 >> 0x40 - (bVar18 & 0x3f);
    local_1e8 = local_1e8 << (bVar18 & 0x3f);
  }
  else {
    local_1e0 = local_1e8 << (bVar18 - 0x40 & 0x3f);
    local_1e8 = 0;
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  uVar137 = 0;
  uVar16 = uVar137;
  if ((longlong)uVar24 < 0) {
    uVar16 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((local_1e8 & 0xfffffffffffffff) >> 0x15 |
                    (local_1e0 << 4 | local_1e8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  lVar1 = (ulonglong)((uVar16 >> 2) * 2) * 8;
  auVar3._4_8_ = auVar86._8_8_;
  auVar3._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar1);
  auVar87._0_8_ = auVar3._0_8_ << 0x20;
  auVar87._8_4_ = *(undefined4 *)(&UNK_145ba0e98 + lVar1);
  auVar87._12_4_ = *(undefined4 *)(&UNK_145ba0e9c + lVar1);
  uVar19 = auVar87._8_8_ & 0x8000000000000000;
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  auVar4._4_8_ = uVar19;
  auVar4._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar1) & 0x80000000 ^ uVar16;
  auVar88._0_8_ = auVar4._0_8_ << 0x20;
  auVar88._8_4_ = SUB84(dVar136,0);
  auVar88._12_4_ = (uint)(uVar19 >> 0x20) ^ (uint)((ulonglong)dVar136 >> 0x20);
  *(int *)pauVar21[2] = SUB84(dVar138,0);
  *(uint *)(pauVar21[2] + 4) = (uint)((ulonglong)dVar138 >> 0x20) ^ uVar185 & 0x80000000;
  *(int *)(pauVar21[2] + 8) = SUB84(dVar156,0);
  *(uint *)(pauVar21[2] + 0xc) = (uint)((ulonglong)dVar156 >> 0x20) ^ uVar187 & 0x80000000;
  *(ulonglong *)pauVar21[3] = CONCAT44(uVar16 ^ uVar188 & 0x80000000,SUB84(dVar122,0));
  *(longlong *)(pauVar21[3] + 8) = auVar88._8_8_;
  lVar1 = *plVar22;
  *(undefined8 *)(lVar1 + 0x40) = 0xffffffffffffc000;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  local_218 = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  local_1f0 = 0;
  local_240 = *(ulonglong *)(lVar1 + 0x58);
  local_220 = *(ulonglong *)(lVar1 + 0x50);
  *(ulonglong *)(lVar1 + 0x50) = local_220;
  *(ulonglong *)(lVar1 + 0x58) = local_240;
  auVar139 = *(undefined1 (*) [16])(lVar1 + 0x40);
  uVar19 = *(ulonglong *)(lVar1 + 0x58) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x50) << 0x35 | uVar19;
  auVar31._0_8_ = auVar139._0_8_ >> 0xe;
  auVar31._8_8_ = auVar139._8_8_ >> 0xe;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar177._0_8_ = CONCAT44(iVar173,iVar173);
  auVar177._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar177._12_4_ = auVar177._8_4_;
  auVar68._0_8_ = local_220 >> 0xe;
  auVar68._8_8_ = local_240 >> 0xe;
  auVar178._0_8_ = auVar177._0_8_ << 0x32;
  auVar178._8_8_ = auVar177._8_8_ << 0x32;
  auVar178 = auVar178 | auVar31;
  uVar25 = (longlong)uVar20 >> 0x35;
  iVar173 = (int)((longlong)local_220 >> 0x3f);
  auVar161._0_8_ = CONCAT44(iVar173,iVar173);
  auVar161._8_4_ = (int)((longlong)local_240 >> 0x3f);
  auVar161._12_4_ = auVar161._8_4_;
  auVar162._0_8_ = auVar161._0_8_ << 0x32;
  auVar162._8_8_ = auVar161._8_8_ << 0x32;
  auVar162 = auVar162 | auVar68;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar19 = (*(ulonglong *)(lVar1 + 0x58) & 0x7ff | uVar19 << 0xb) ^ uVar20;
  iVar184 = auVar178._4_4_ >> 0x1f;
  iVar186 = auVar178._12_4_ >> 0x1f;
  local_180 = uVar19 - uVar20;
  iVar173 = auVar162._4_4_ >> 0x1f;
  iVar183 = auVar162._12_4_ >> 0x1f;
  auVar33._4_4_ = iVar186;
  auVar33._0_4_ = iVar184;
  auVar69._8_8_ = -auVar178._8_8_;
  auVar69._0_8_ = -auVar178._0_8_;
  auVar33._8_4_ = iVar186;
  auVar33._12_4_ = iVar186;
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._4_4_ = iVar184;
  auVar32._0_4_ = iVar184;
  auVar89._8_8_ = -auVar162._8_8_;
  auVar89._0_8_ = -auVar162._0_8_;
  auVar125._4_4_ = iVar173;
  auVar125._0_4_ = iVar173;
  auVar125._8_4_ = iVar183;
  auVar125._12_4_ = iVar183;
  auVar139 = ~auVar32 & auVar178 | auVar69 & auVar32;
  uVar17 = auVar139._0_8_;
  uVar24 = auVar139._8_8_;
  auVar139 = ~auVar125 & auVar162 | auVar89 & auVar125;
  uStack_178 = ((uVar25 ^ uVar20) - uVar20) - (ulonglong)(uVar19 < uVar20);
  uVar15 = FUN_1437eb2f0(uVar17,uVar24);
  uVar19 = auVar139._0_8_;
  local_120[2] = FUN_1437eb2f0(uVar15,uVar19);
  local_108 = 0;
  FUN_143dfacb0(local_120 + 2,&local_180,local_120 + 2);
  hkInt128::setUnsignedDiv(&local_180,&local_180,local_120 + 2);
  uVar17 = uVar17 / local_120[2];
  auVar34._4_4_ = iVar186;
  auVar34._0_4_ = iVar184;
  uStack_238 = uVar24 / local_120[2];
  auVar34._8_4_ = iVar186;
  auVar34._12_4_ = iVar186;
  uVar20 = ~auVar34._8_8_ & uStack_238;
  local_230 = uVar19 / local_120[2];
  uStack_228 = auVar139._8_8_ / local_120[2];
  uVar19 = -uStack_238;
  if ((longlong)uVar25 < 0) {
    uVar24 = ~uStack_178 + (ulonglong)(0xfffffffffffffffe < ~local_180);
    local_220 = ~local_180 + 1;
  }
  else {
    uStack_238 = uStack_178;
    uVar24 = uStack_178;
    local_220 = local_180;
  }
  *(ulonglong *)(lVar1 + 0x40) =
       (~CONCAT44(iVar184,iVar184) & uVar17 | -uVar17 & CONCAT44(iVar184,iVar184)) << 0xe;
  *(ulonglong *)(lVar1 + 0x48) = (uVar20 | uVar19 & auVar34._8_8_) << 0xe;
  *(ulonglong *)(lVar1 + 0x50) =
       (~CONCAT44(iVar173,iVar173) & local_230 | -local_230 & CONCAT44(iVar173,iVar173)) << 0xe;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  local_220 = local_220 | *(ulonglong *)(lVar1 + 0x58);
  uVar19 = *(ulonglong *)(lVar1 + 0x50);
  local_240 = uVar24 & 0x7ff | uVar19;
  *(ulonglong *)(lVar1 + 0x50) = local_240;
  *(ulonglong *)(lVar1 + 0x58) = local_220;
  auVar139 = *(undefined1 (*) [16])(lVar1 + 0x40);
  uVar17 = *(ulonglong *)(lVar1 + 0x58) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x50) << 0x35 | uVar17;
  uVar24 = (longlong)uVar20 >> 0x35;
  auVar70._0_8_ = uVar19 >> 0xe;
  auVar70._8_8_ = local_220 >> 0xe;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar17 = (*(ulonglong *)(lVar1 + 0x58) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar35._0_8_ = auVar139._0_8_ >> 0xe;
  auVar35._8_8_ = auVar139._8_8_ >> 0xe;
  local_1d8 = uVar17 - uVar20;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar163._0_8_ = CONCAT44(iVar173,iVar173);
  auVar163._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar163._12_4_ = auVar163._8_4_;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar142._0_8_ = CONCAT44(iVar173,iVar173);
  auVar142._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar142._12_4_ = auVar142._8_4_;
  auVar164._0_8_ = auVar163._0_8_ << 0x32;
  auVar164._8_8_ = auVar163._8_8_ << 0x32;
  auVar164 = auVar164 | auVar35;
  auVar143._0_8_ = auVar142._0_8_ << 0x32;
  auVar143._8_8_ = auVar142._8_8_ << 0x32;
  auVar143 = auVar143 | auVar70;
  uVar187 = auVar164._4_4_ >> 0x1f;
  uVar188 = auVar164._12_4_ >> 0x1f;
  uVar189 = auVar143._4_4_ >> 0x1f;
  iVar173 = auVar143._12_4_ >> 0x1f;
  auVar37._4_4_ = uVar188;
  auVar37._0_4_ = uVar187;
  auVar37._8_4_ = uVar188;
  auVar37._12_4_ = uVar188;
  auVar36._8_8_ = auVar37._8_8_;
  auVar36._4_4_ = uVar187;
  auVar36._0_4_ = uVar187;
  auVar71._8_8_ = -auVar164._8_8_;
  auVar71._0_8_ = -auVar164._0_8_;
  local_1d0 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar17 < uVar20);
  auVar126._4_4_ = uVar189;
  auVar126._0_4_ = uVar189;
  auVar126._8_4_ = iVar173;
  auVar126._12_4_ = iVar173;
  auVar90._8_8_ = -auVar143._8_8_;
  auVar90._0_8_ = -auVar143._0_8_;
  auVar176 = ~auVar36 & auVar164 | auVar71 & auVar36;
  auVar139 = ~auVar126 & auVar143 | auVar90 & auVar126;
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar92._4_4_ = local_240._4_4_;
  auVar92._0_4_ = local_240._4_4_;
  auVar92._8_4_ = local_240._4_4_;
  auVar92._12_4_ = local_240._4_4_;
  auVar91._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar91._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar91._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar91._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar92 = ~auVar91 & auVar92;
  uVar185 = auVar91._0_4_ & (uint)local_240 | auVar92._0_4_;
  uVar16 = -(uint)((int)uVar185 < (int)(uint)uStack_238);
  uVar185 = (uVar16 & uVar185 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_1d8,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar185 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar185;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    local_1d0 = local_1d0 << (bVar18 & 0x3f) | local_1d8 >> 0x40 - (bVar18 & 0x3f);
    local_1d8 = local_1d8 << (bVar18 & 0x3f);
  }
  else {
    local_1d0 = local_1d8 << (bVar18 - 0x40 & 0x3f);
    local_1d8 = 0;
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  if ((longlong)uVar24 < 0) {
    uVar137 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((local_1d8 & 0xfffffffffffffff) >> 0x15 |
                    (local_1d0 << 4 | local_1d8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  lVar2 = (ulonglong)((uVar137 >> 2) * 2) * 8;
  auVar5._4_8_ = auVar92._8_8_;
  auVar5._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar2);
  auVar93._0_8_ = auVar5._0_8_ << 0x20;
  auVar93._8_4_ = *(undefined4 *)(&UNK_145ba0e98 + lVar2);
  auVar93._12_4_ = *(undefined4 *)(&UNK_145ba0e9c + lVar2);
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  uVar19 = auVar93._8_8_ & 0x8000000000000000;
  auVar6._4_8_ = uVar19;
  auVar6._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar2) & 0x80000000 ^ uVar16;
  auVar94._0_8_ = auVar6._0_8_ << 0x20;
  auVar94._8_4_ = SUB84(dVar136,0);
  auVar94._12_4_ = (uint)(uVar19 >> 0x20) ^ (uint)((ulonglong)dVar136 >> 0x20);
  *(int *)(lVar1 + 0x60) = SUB84(dVar138,0);
  *(uint *)(lVar1 + 100) = uVar187 & 0x80000000 ^ (uint)((ulonglong)dVar138 >> 0x20);
  *(int *)(lVar1 + 0x68) = SUB84(dVar156,0);
  *(uint *)(lVar1 + 0x6c) = uVar188 & 0x80000000 ^ (uint)((ulonglong)dVar156 >> 0x20);
  *(ulonglong *)(lVar1 + 0x70) = CONCAT44(uVar189 & 0x80000000 ^ uVar16,SUB84(dVar122,0));
  *(longlong *)(lVar1 + 0x78) = auVar94._8_8_;
  lVar1 = *plVar22;
  pauVar21 = (undefined1 (*) [16])(lVar1 + 0x80);
  *(undefined8 *)*pauVar21 = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0x4000;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  local_220 = local_130 | *(ulonglong *)(lVar1 + 0x98);
  uVar19 = *(ulonglong *)(lVar1 + 0x90);
  local_240 = local_128 >> 0x35 | uVar19;
  *(ulonglong *)(lVar1 + 0x90) = local_240;
  *(ulonglong *)(lVar1 + 0x98) = local_220;
  auVar139 = *pauVar21;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar179._0_8_ = CONCAT44(iVar173,iVar173);
  auVar179._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar179._12_4_ = auVar179._8_4_;
  auVar180._0_8_ = auVar179._0_8_ << 0x32;
  auVar180._8_8_ = auVar179._8_8_ << 0x32;
  auVar38._0_8_ = auVar139._0_8_ >> 0xe;
  auVar38._8_8_ = auVar139._8_8_ >> 0xe;
  auVar180 = auVar180 | auVar38;
  uVar17 = *(ulonglong *)(lVar1 + 0x98) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x90) << 0x35 | uVar17;
  auVar72._8_8_ = -auVar180._8_8_;
  auVar72._0_8_ = -auVar180._0_8_;
  auVar95._0_8_ = uVar19 >> 0xe;
  auVar95._8_8_ = local_220 >> 0xe;
  uVar24 = (longlong)uVar20 >> 0x35;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar165._0_8_ = CONCAT44(iVar173,iVar173);
  auVar165._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar165._12_4_ = auVar165._8_4_;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar19 = (*(ulonglong *)(lVar1 + 0x98) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar166._0_8_ = auVar165._0_8_ << 0x32;
  auVar166._8_8_ = auVar165._8_8_ << 0x32;
  local_170 = uVar19 - uVar20;
  iVar184 = auVar180._4_4_ >> 0x1f;
  iVar186 = auVar180._12_4_ >> 0x1f;
  auVar166 = auVar166 | auVar95;
  iVar173 = auVar166._4_4_ >> 0x1f;
  iVar183 = auVar166._12_4_ >> 0x1f;
  auVar40._4_4_ = iVar186;
  auVar40._0_4_ = iVar184;
  auVar96._8_8_ = -auVar166._8_8_;
  auVar96._0_8_ = -auVar166._0_8_;
  auVar40._8_4_ = iVar186;
  auVar40._12_4_ = iVar186;
  auVar39._8_8_ = auVar40._8_8_;
  auVar39._4_4_ = iVar184;
  auVar39._0_4_ = iVar184;
  auVar127._4_4_ = iVar173;
  auVar127._0_4_ = iVar173;
  auVar127._8_4_ = iVar183;
  auVar127._12_4_ = iVar183;
  auVar139 = ~auVar39 & auVar180 | auVar72 & auVar39;
  uStack_168 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar19 < uVar20);
  uVar17 = auVar139._0_8_;
  uVar20 = auVar139._8_8_;
  auVar139 = ~auVar127 & auVar166 | auVar96 & auVar127;
  uVar15 = FUN_1437eb2f0(uVar17,uVar20);
  uVar19 = auVar139._0_8_;
  local_100[0] = FUN_1437eb2f0(uVar15,uVar19);
  local_100[1] = 0;
  FUN_143dfacb0(local_100,&local_170,local_100);
  hkInt128::setUnsignedDiv(&local_170,&local_170,local_100);
  uVar17 = uVar17 / local_100[0];
  uStack_238 = uVar20 / local_100[0];
  auVar41._4_4_ = iVar186;
  auVar41._0_4_ = iVar184;
  local_230 = uVar19 / local_100[0];
  auVar41._8_4_ = iVar186;
  auVar41._12_4_ = iVar186;
  uStack_228 = auVar139._8_8_ / local_100[0];
  uVar19 = -uStack_238;
  uVar20 = ~auVar41._8_8_ & uStack_238;
  if ((longlong)uVar24 < 0) {
    uVar24 = ~uStack_168 + (ulonglong)(0xfffffffffffffffe < ~local_170);
    local_220 = ~local_170 + 1;
  }
  else {
    uStack_238 = uStack_168;
    uVar24 = uStack_168;
    local_220 = local_170;
  }
  *(ulonglong *)*pauVar21 =
       (~CONCAT44(iVar184,iVar184) & uVar17 | -uVar17 & CONCAT44(iVar184,iVar184)) << 0xe;
  *(ulonglong *)(lVar1 + 0x88) = (uVar20 | uVar19 & auVar41._8_8_) << 0xe;
  *(ulonglong *)(lVar1 + 0x90) =
       (~CONCAT44(iVar173,iVar173) & local_230 | -local_230 & CONCAT44(iVar173,iVar173)) << 0xe;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  local_220 = local_220 | *(ulonglong *)(lVar1 + 0x98);
  uVar19 = *(ulonglong *)(lVar1 + 0x90);
  local_240 = uVar24 & 0x7ff | uVar19;
  *(ulonglong *)(lVar1 + 0x90) = local_240;
  *(ulonglong *)(lVar1 + 0x98) = local_220;
  auVar139 = *pauVar21;
  uVar17 = *(ulonglong *)(lVar1 + 0x98) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x90) << 0x35 | uVar17;
  uVar24 = (longlong)uVar20 >> 0x35;
  auVar73._0_8_ = uVar19 >> 0xe;
  auVar73._8_8_ = local_220 >> 0xe;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar17 = (*(ulonglong *)(lVar1 + 0x98) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar42._0_8_ = auVar139._0_8_ >> 0xe;
  auVar42._8_8_ = auVar139._8_8_ >> 0xe;
  local_1c8 = uVar17 - uVar20;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar167._0_8_ = CONCAT44(iVar173,iVar173);
  auVar167._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar167._12_4_ = auVar167._8_4_;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar144._0_8_ = CONCAT44(iVar173,iVar173);
  auVar144._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar144._12_4_ = auVar144._8_4_;
  auVar168._0_8_ = auVar167._0_8_ << 0x32;
  auVar168._8_8_ = auVar167._8_8_ << 0x32;
  auVar168 = auVar168 | auVar42;
  auVar145._0_8_ = auVar144._0_8_ << 0x32;
  auVar145._8_8_ = auVar144._8_8_ << 0x32;
  auVar145 = auVar145 | auVar73;
  uVar185 = auVar168._4_4_ >> 0x1f;
  uVar187 = auVar168._12_4_ >> 0x1f;
  uVar188 = auVar145._4_4_ >> 0x1f;
  iVar173 = auVar145._12_4_ >> 0x1f;
  auVar44._4_4_ = uVar187;
  auVar44._0_4_ = uVar185;
  auVar44._8_4_ = uVar187;
  auVar44._12_4_ = uVar187;
  auVar43._8_8_ = auVar44._8_8_;
  auVar43._4_4_ = uVar185;
  auVar43._0_4_ = uVar185;
  auVar74._8_8_ = -auVar168._8_8_;
  auVar74._0_8_ = -auVar168._0_8_;
  local_1c0 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar17 < uVar20);
  auVar128._4_4_ = uVar188;
  auVar128._0_4_ = uVar188;
  auVar128._8_4_ = iVar173;
  auVar128._12_4_ = iVar173;
  auVar97._8_8_ = -auVar145._8_8_;
  auVar97._0_8_ = -auVar145._0_8_;
  auVar176 = ~auVar43 & auVar168 | auVar74 & auVar43;
  auVar139 = ~auVar128 & auVar145 | auVar97 & auVar128;
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar99._4_4_ = (uint)local_240;
  auVar99._0_4_ = (uint)local_240;
  auVar99._8_4_ = (uint)local_240;
  auVar99._12_4_ = (uint)local_240;
  auVar98._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar98._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar98._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar98._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar99 = auVar98 & auVar99;
  uVar137 = ~auVar98._0_4_ & local_240._4_4_ | auVar99._0_4_;
  uVar16 = -(uint)((int)uVar137 < (int)(uint)uStack_238);
  uVar137 = (uVar16 & uVar137 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_1c8,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar137 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar137;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    local_1c0 = local_1c0 << (bVar18 & 0x3f) | local_1c8 >> 0x40 - (bVar18 & 0x3f);
    local_1c8 = local_1c8 << (bVar18 & 0x3f);
  }
  else {
    local_1c0 = local_1c8 << (bVar18 - 0x40 & 0x3f);
    local_1c8 = 0;
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  uVar137 = 0;
  uVar16 = uVar137;
  if ((longlong)uVar24 < 0) {
    uVar16 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((local_1c8 & 0xfffffffffffffff) >> 0x15 |
                    (local_1c0 << 4 | local_1c8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  lVar2 = (ulonglong)((uVar16 >> 2) * 2) * 8;
  auVar7._4_8_ = auVar99._8_8_;
  auVar7._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar2);
  auVar100._0_8_ = auVar7._0_8_ << 0x20;
  auVar100._8_4_ = *(undefined4 *)(&UNK_145ba0e98 + lVar2);
  auVar100._12_4_ = *(undefined4 *)(&UNK_145ba0e9c + lVar2);
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  uVar19 = auVar100._8_8_ & 0x8000000000000000;
  auVar8._4_8_ = uVar19;
  auVar8._0_4_ = *(uint *)(&UNK_145ba0e94 + lVar2) & 0x80000000 ^ uVar16;
  auVar101._0_8_ = auVar8._0_8_ << 0x20;
  auVar101._8_4_ = SUB84(dVar136,0);
  auVar101._12_4_ = (uint)(uVar19 >> 0x20) ^ (uint)((ulonglong)dVar136 >> 0x20);
  *(int *)(lVar1 + 0xa0) = SUB84(dVar138,0);
  *(uint *)(lVar1 + 0xa4) = uVar185 & 0x80000000 ^ (uint)((ulonglong)dVar138 >> 0x20);
  *(int *)(lVar1 + 0xa8) = SUB84(dVar156,0);
  *(uint *)(lVar1 + 0xac) = uVar187 & 0x80000000 ^ (uint)((ulonglong)dVar156 >> 0x20);
  *(ulonglong *)(lVar1 + 0xb0) = CONCAT44(uVar188 & 0x80000000 ^ uVar16,SUB84(dVar122,0));
  *(longlong *)(lVar1 + 0xb8) = auVar101._8_8_;
  lVar1 = *plVar22;
  pauVar21 = (undefined1 (*) [16])(lVar1 + 0xc0);
  *(undefined8 *)*pauVar21 = 0;
  *(undefined8 *)(lVar1 + 200) = 0xffffffffffffc000;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  local_220 = local_1f0 | *(ulonglong *)(lVar1 + 0xd8);
  uVar19 = *(ulonglong *)(lVar1 + 0xd0);
  local_240 = local_218 >> 0x35 | uVar19;
  *(ulonglong *)(lVar1 + 0xd0) = local_240;
  *(ulonglong *)(lVar1 + 0xd8) = local_220;
  auVar139 = *pauVar21;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar146._0_8_ = CONCAT44(iVar173,iVar173);
  auVar146._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar146._12_4_ = auVar146._8_4_;
  auVar147._0_8_ = auVar146._0_8_ << 0x32;
  auVar147._8_8_ = auVar146._8_8_ << 0x32;
  auVar45._0_8_ = auVar139._0_8_ >> 0xe;
  auVar45._8_8_ = auVar139._8_8_ >> 0xe;
  auVar147 = auVar147 | auVar45;
  uVar17 = *(ulonglong *)(lVar1 + 0xd8) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0xd0) << 0x35 | uVar17;
  auVar102._0_8_ = uVar19 >> 0xe;
  auVar102._8_8_ = local_220 >> 0xe;
  uVar24 = (longlong)uVar20 >> 0x35;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar129._0_8_ = CONCAT44(iVar173,iVar173);
  auVar129._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar129._12_4_ = auVar129._8_4_;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar19 = (*(ulonglong *)(lVar1 + 0xd8) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar130._0_8_ = auVar129._0_8_ << 0x32;
  auVar130._8_8_ = auVar129._8_8_ << 0x32;
  local_160 = uVar19 - uVar20;
  iVar184 = auVar147._4_4_ >> 0x1f;
  iVar186 = auVar147._12_4_ >> 0x1f;
  auVar130 = auVar130 | auVar102;
  auVar181._8_8_ = -auVar130._8_8_;
  auVar181._0_8_ = -auVar130._0_8_;
  iVar173 = auVar130._4_4_ >> 0x1f;
  iVar183 = auVar130._12_4_ >> 0x1f;
  auVar47._4_4_ = iVar186;
  auVar47._0_4_ = iVar184;
  auVar103._8_8_ = -auVar147._8_8_;
  auVar103._0_8_ = -auVar147._0_8_;
  auVar47._8_4_ = iVar186;
  auVar47._12_4_ = iVar186;
  auVar46._8_8_ = auVar47._8_8_;
  auVar46._4_4_ = iVar184;
  auVar46._0_4_ = iVar184;
  auVar75._4_4_ = iVar173;
  auVar75._0_4_ = iVar173;
  auVar75._8_4_ = iVar183;
  auVar75._12_4_ = iVar183;
  auVar139 = auVar103 & auVar46 | ~auVar46 & auVar147;
  uVar17 = auVar139._0_8_;
  uStack_158 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar19 < uVar20);
  uVar20 = auVar139._8_8_;
  auVar139 = auVar181 & auVar75 | ~auVar75 & auVar130;
  uVar15 = FUN_1437eb2f0(uVar17,uVar20);
  uVar19 = auVar139._0_8_;
  local_100[2] = FUN_1437eb2f0(uVar15,uVar19);
  local_e8 = 0;
  FUN_143dfacb0(local_100 + 2,&local_160,local_100 + 2);
  hkInt128::setUnsignedDiv(&local_160,&local_160,local_100 + 2);
  uVar17 = uVar17 / local_100[2];
  uStack_238 = uVar20 / local_100[2];
  local_230 = uVar19 / local_100[2];
  auVar48._4_4_ = iVar186;
  auVar48._0_4_ = iVar184;
  uStack_228 = auVar139._8_8_ / local_100[2];
  auVar48._8_4_ = iVar186;
  auVar48._12_4_ = iVar186;
  uVar19 = -uStack_238;
  uVar20 = ~auVar48._8_8_ & uStack_238;
  if ((longlong)uVar24 < 0) {
    uVar24 = ~uStack_158 + (ulonglong)(0xfffffffffffffffe < ~local_160);
    local_220 = ~local_160 + 1;
  }
  else {
    uStack_238 = uStack_158;
    uVar24 = uStack_158;
    local_220 = local_160;
  }
  *(ulonglong *)*pauVar21 =
       (~CONCAT44(iVar184,iVar184) & uVar17 | -uVar17 & CONCAT44(iVar184,iVar184)) << 0xe;
  *(ulonglong *)(lVar1 + 200) = (uVar20 | uVar19 & auVar48._8_8_) << 0xe;
  *(ulonglong *)(lVar1 + 0xd0) =
       (~CONCAT44(iVar173,iVar173) & local_230 | -local_230 & CONCAT44(iVar173,iVar173)) << 0xe;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  local_220 = local_220 | *(ulonglong *)(lVar1 + 0xd8);
  uVar19 = *(ulonglong *)(lVar1 + 0xd0);
  local_240 = uVar24 & 0x7ff | uVar19;
  *(ulonglong *)(lVar1 + 0xd0) = local_240;
  *(ulonglong *)(lVar1 + 0xd8) = local_220;
  auVar139 = *pauVar21;
  uVar17 = *(ulonglong *)(lVar1 + 0xd8) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0xd0) << 0x35 | uVar17;
  uVar24 = (longlong)uVar20 >> 0x35;
  auVar76._0_8_ = uVar19 >> 0xe;
  auVar76._8_8_ = local_220 >> 0xe;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar17 = (*(ulonglong *)(lVar1 + 0xd8) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar49._0_8_ = auVar139._0_8_ >> 0xe;
  auVar49._8_8_ = auVar139._8_8_ >> 0xe;
  local_1b8 = uVar17 - uVar20;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar169._0_8_ = CONCAT44(iVar173,iVar173);
  auVar169._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar169._12_4_ = auVar169._8_4_;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar148._0_8_ = CONCAT44(iVar173,iVar173);
  auVar148._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar148._12_4_ = auVar148._8_4_;
  auVar170._0_8_ = auVar169._0_8_ << 0x32;
  auVar170._8_8_ = auVar169._8_8_ << 0x32;
  auVar170 = auVar170 | auVar49;
  auVar149._0_8_ = auVar148._0_8_ << 0x32;
  auVar149._8_8_ = auVar148._8_8_ << 0x32;
  auVar149 = auVar149 | auVar76;
  uVar187 = auVar170._4_4_ >> 0x1f;
  uVar188 = auVar170._12_4_ >> 0x1f;
  uVar189 = auVar149._4_4_ >> 0x1f;
  iVar173 = auVar149._12_4_ >> 0x1f;
  auVar51._4_4_ = uVar188;
  auVar51._0_4_ = uVar187;
  auVar51._8_4_ = uVar188;
  auVar51._12_4_ = uVar188;
  auVar50._8_8_ = auVar51._8_8_;
  auVar50._4_4_ = uVar187;
  auVar50._0_4_ = uVar187;
  auVar77._8_8_ = -auVar170._8_8_;
  auVar77._0_8_ = -auVar170._0_8_;
  local_1b0 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar17 < uVar20);
  auVar131._4_4_ = uVar189;
  auVar131._0_4_ = uVar189;
  auVar131._8_4_ = iVar173;
  auVar131._12_4_ = iVar173;
  auVar104._8_8_ = -auVar149._8_8_;
  auVar104._0_8_ = -auVar149._0_8_;
  auVar176 = ~auVar50 & auVar170 | auVar77 & auVar50;
  auVar139 = ~auVar131 & auVar149 | auVar104 & auVar131;
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar106._4_4_ = (uint)local_240;
  auVar106._0_4_ = (uint)local_240;
  auVar106._8_4_ = (uint)local_240;
  auVar106._12_4_ = (uint)local_240;
  auVar105._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar105._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar105._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar105._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar106 = auVar105 & auVar106;
  uVar185 = ~auVar105._0_4_ & local_240._4_4_ | auVar106._0_4_;
  uVar16 = -(uint)((int)uVar185 < (int)(uint)uStack_238);
  uVar185 = (uVar16 & uVar185 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_1b8,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar185 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar185;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    local_1b0 = local_1b0 << (bVar18 & 0x3f) | local_1b8 >> 0x40 - (bVar18 & 0x3f);
    local_1b8 = local_1b8 << (bVar18 & 0x3f);
  }
  else {
    local_1b0 = local_1b8 << (bVar18 - 0x40 & 0x3f);
    local_1b8 = 0;
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  uVar16 = uVar137;
  if ((longlong)uVar24 < 0) {
    uVar16 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((local_1b8 & 0xfffffffffffffff) >> 0x15 |
                    (local_1b0 << 4 | local_1b8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  lVar2 = (ulonglong)((uVar16 >> 2) * 2) * 8;
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  uVar135 = SUB84(dVar136,0);
  uVar185 = (uint)((ulonglong)dVar136 >> 0x20);
  auVar9._4_8_ = auVar106._8_8_;
  auVar9._0_4_ = uVar16;
  auVar107._0_8_ = auVar9._0_8_ << 0x20;
  auVar107._8_4_ = uVar135;
  auVar107._12_4_ = uVar185;
  auVar10._4_8_ = auVar107._8_8_;
  auVar10._0_4_ = uVar16 ^ *(uint *)(&UNK_145ba0e94 + lVar2) & 0x80000000;
  auVar108._0_8_ = auVar10._0_8_ << 0x20;
  auVar108._8_4_ = uVar135;
  auVar108._12_4_ = uVar185 ^ *(uint *)(&UNK_145ba0e9c + lVar2) & 0x80000000;
  *(int *)(lVar1 + 0xe0) = SUB84(dVar138,0);
  *(uint *)(lVar1 + 0xe4) = uVar187 & 0x80000000 ^ (uint)((ulonglong)dVar138 >> 0x20);
  *(int *)(lVar1 + 0xe8) = SUB84(dVar156,0);
  *(uint *)(lVar1 + 0xec) = uVar188 & 0x80000000 ^ (uint)((ulonglong)dVar156 >> 0x20);
  *(ulonglong *)(lVar1 + 0xf0) = CONCAT44(uVar189 & 0x80000000 ^ uVar16,SUB84(dVar122,0));
  *(longlong *)(lVar1 + 0xf8) = auVar108._8_8_;
  lVar1 = *plVar22;
  pauVar21 = (undefined1 (*) [16])(lVar1 + 0x100);
  *(undefined8 *)*pauVar21 = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0x4000;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  local_220 = local_130 | *(ulonglong *)(lVar1 + 0x118);
  uVar19 = *(ulonglong *)(lVar1 + 0x110);
  local_240 = local_128 >> 0x35 | uVar19;
  *(ulonglong *)(lVar1 + 0x110) = local_240;
  *(ulonglong *)(lVar1 + 0x118) = local_220;
  auVar139 = *pauVar21;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar150._0_8_ = CONCAT44(iVar173,iVar173);
  auVar150._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar150._12_4_ = auVar150._8_4_;
  auVar151._0_8_ = auVar150._0_8_ << 0x32;
  auVar151._8_8_ = auVar150._8_8_ << 0x32;
  uVar17 = *(ulonglong *)(lVar1 + 0x118) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x110) << 0x35 | uVar17;
  auVar52._0_8_ = auVar139._0_8_ >> 0xe;
  auVar52._8_8_ = auVar139._8_8_ >> 0xe;
  auVar151 = auVar151 | auVar52;
  auVar109._0_8_ = uVar19 >> 0xe;
  auVar109._8_8_ = local_220 >> 0xe;
  uVar24 = (longlong)uVar20 >> 0x35;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar132._0_8_ = CONCAT44(iVar173,iVar173);
  auVar132._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar132._12_4_ = auVar132._8_4_;
  uVar20 = (longlong)uVar20 >> 0x3f;
  auVar133._0_8_ = auVar132._0_8_ << 0x32;
  auVar133._8_8_ = auVar132._8_8_ << 0x32;
  auVar133 = auVar133 | auVar109;
  iVar184 = auVar151._4_4_ >> 0x1f;
  iVar186 = auVar151._12_4_ >> 0x1f;
  uVar19 = uVar20 ^ (*(ulonglong *)(lVar1 + 0x118) & 0x7ff | uVar17 << 0xb);
  auVar182._8_8_ = -auVar133._8_8_;
  auVar182._0_8_ = -auVar133._0_8_;
  local_150 = uVar19 - uVar20;
  iVar173 = auVar133._4_4_ >> 0x1f;
  iVar183 = auVar133._12_4_ >> 0x1f;
  auVar54._4_4_ = iVar186;
  auVar54._0_4_ = iVar184;
  auVar54._8_4_ = iVar186;
  auVar54._12_4_ = iVar186;
  auVar53._8_8_ = auVar54._8_8_;
  auVar53._4_4_ = iVar184;
  auVar53._0_4_ = iVar184;
  auVar78._4_4_ = iVar173;
  auVar78._0_4_ = iVar173;
  auVar78._8_4_ = iVar183;
  auVar78._12_4_ = iVar183;
  auVar110._8_8_ = -auVar151._8_8_;
  auVar110._0_8_ = -auVar151._0_8_;
  uStack_148 = ((uVar20 ^ uVar24) - uVar20) - (ulonglong)(uVar19 < uVar20);
  auVar139 = auVar110 & auVar53 | ~auVar53 & auVar151;
  uVar17 = auVar139._0_8_;
  uVar20 = auVar139._8_8_;
  auVar139 = auVar182 & auVar78 | ~auVar78 & auVar133;
  uVar15 = FUN_1437eb2f0(uVar17,uVar20);
  uVar19 = auVar139._0_8_;
  local_e0[0] = FUN_1437eb2f0(uVar15,uVar19);
  local_e0[1] = 0;
  FUN_143dfacb0(local_e0,&local_150,local_e0);
  hkInt128::setUnsignedDiv(&local_150,&local_150,local_e0);
  uVar17 = uVar17 / local_e0[0];
  uStack_238 = uVar20 / local_e0[0];
  auVar55._4_4_ = iVar186;
  auVar55._0_4_ = iVar184;
  local_230 = uVar19 / local_e0[0];
  auVar55._8_4_ = iVar186;
  auVar55._12_4_ = iVar186;
  uStack_228 = auVar139._8_8_ / local_e0[0];
  uVar19 = -uStack_238;
  uVar20 = ~auVar55._8_8_ & uStack_238;
  if ((longlong)uVar24 < 0) {
    uVar24 = ~uStack_148 + (ulonglong)(0xfffffffffffffffe < ~local_150);
    local_220 = ~local_150 + 1;
  }
  else {
    uStack_238 = uStack_148;
    uVar24 = uStack_148;
    local_220 = local_150;
  }
  *(ulonglong *)*pauVar21 =
       (~CONCAT44(iVar184,iVar184) & uVar17 | -uVar17 & CONCAT44(iVar184,iVar184)) << 0xe;
  *(ulonglong *)(lVar1 + 0x108) = (uVar20 | uVar19 & auVar55._8_8_) << 0xe;
  *(ulonglong *)(lVar1 + 0x110) =
       (~CONCAT44(iVar173,iVar173) & local_230 | -local_230 & CONCAT44(iVar173,iVar173)) << 0xe;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  local_220 = local_220 | *(ulonglong *)(lVar1 + 0x118);
  uVar19 = *(ulonglong *)(lVar1 + 0x110);
  local_240 = uVar24 & 0x7ff | uVar19;
  *(ulonglong *)(lVar1 + 0x110) = local_240;
  *(ulonglong *)(lVar1 + 0x118) = local_220;
  auVar139 = *pauVar21;
  uVar17 = *(ulonglong *)(lVar1 + 0x118) >> 0xb;
  uVar20 = *(longlong *)(lVar1 + 0x110) << 0x35 | uVar17;
  uVar24 = (longlong)uVar20 >> 0x35;
  auVar79._0_8_ = uVar19 >> 0xe;
  auVar79._8_8_ = local_220 >> 0xe;
  uVar20 = (longlong)uVar20 >> 0x3f;
  uVar17 = (*(ulonglong *)(lVar1 + 0x118) & 0x7ff | uVar17 << 0xb) ^ uVar20;
  auVar56._0_8_ = auVar139._0_8_ >> 0xe;
  auVar56._8_8_ = auVar139._8_8_ >> 0xe;
  local_1a8 = uVar17 - uVar20;
  iVar173 = auVar139._4_4_ >> 0x1f;
  auVar171._0_8_ = CONCAT44(iVar173,iVar173);
  auVar171._8_4_ = auVar139._12_4_ >> 0x1f;
  auVar171._12_4_ = auVar171._8_4_;
  iVar173 = (int)((longlong)uVar19 >> 0x3f);
  auVar152._0_8_ = CONCAT44(iVar173,iVar173);
  auVar152._8_4_ = (int)((longlong)local_220 >> 0x3f);
  auVar152._12_4_ = auVar152._8_4_;
  auVar172._0_8_ = auVar171._0_8_ << 0x32;
  auVar172._8_8_ = auVar171._8_8_ << 0x32;
  auVar172 = auVar172 | auVar56;
  auVar153._0_8_ = auVar152._0_8_ << 0x32;
  auVar153._8_8_ = auVar152._8_8_ << 0x32;
  auVar153 = auVar153 | auVar79;
  uVar187 = auVar172._4_4_ >> 0x1f;
  uVar188 = auVar172._12_4_ >> 0x1f;
  uVar189 = auVar153._4_4_ >> 0x1f;
  iVar173 = auVar153._12_4_ >> 0x1f;
  auVar58._4_4_ = uVar188;
  auVar58._0_4_ = uVar187;
  auVar58._8_4_ = uVar188;
  auVar58._12_4_ = uVar188;
  auVar57._8_8_ = auVar58._8_8_;
  auVar57._4_4_ = uVar187;
  auVar57._0_4_ = uVar187;
  auVar80._8_8_ = -auVar172._8_8_;
  auVar80._0_8_ = -auVar172._0_8_;
  local_1a0 = ((uVar24 ^ uVar20) - uVar20) - (ulonglong)(uVar17 < uVar20);
  auVar134._4_4_ = uVar189;
  auVar134._0_4_ = uVar189;
  auVar134._8_4_ = iVar173;
  auVar134._12_4_ = iVar173;
  auVar111._8_8_ = -auVar153._8_8_;
  auVar111._0_8_ = -auVar153._0_8_;
  auVar176 = ~auVar57 & auVar172 | auVar80 & auVar57;
  auVar139 = ~auVar134 & auVar153 | auVar111 & auVar134;
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar113._4_4_ = (uint)local_240;
  auVar113._0_4_ = (uint)local_240;
  auVar113._8_4_ = (uint)local_240;
  auVar113._12_4_ = (uint)local_240;
  auVar112._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar112._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar112._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar112._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar113 = auVar112 & auVar113;
  uVar185 = ~auVar112._0_4_ & local_240._4_4_ | auVar113._0_4_;
  uVar16 = -(uint)((int)uVar185 < (int)(uint)uStack_238);
  uVar185 = (uVar16 & uVar185 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_1a8,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar185 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar185;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    local_1a0 = local_1a0 << (bVar18 & 0x3f) | local_1a8 >> 0x40 - (bVar18 & 0x3f);
    local_1a8 = local_1a8 << (bVar18 & 0x3f);
  }
  else {
    local_1a0 = local_1a8 << (bVar18 - 0x40 & 0x3f);
    local_1a8 = uVar23;
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  uVar16 = uVar137;
  if ((longlong)uVar24 < 0) {
    uVar16 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((local_1a8 & 0xfffffffffffffff) >> 0x15 |
                    (local_1a0 << 4 | local_1a8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  lVar2 = (ulonglong)((uVar16 >> 2) * 2) * 8;
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  auVar11._4_8_ = auVar113._8_8_;
  auVar11._0_4_ = uVar16;
  auVar114._0_8_ = auVar11._0_8_ << 0x20;
  uVar135 = SUB84(dVar136,0);
  auVar114._8_4_ = uVar135;
  uVar185 = (uint)((ulonglong)dVar136 >> 0x20);
  auVar114._12_4_ = uVar185;
  auVar12._4_8_ = auVar114._8_8_;
  auVar12._0_4_ = uVar16 ^ *(uint *)(&UNK_145ba0e94 + lVar2) & 0x80000000;
  auVar115._0_8_ = auVar12._0_8_ << 0x20;
  auVar115._8_4_ = uVar135;
  auVar115._12_4_ = uVar185 ^ *(uint *)(&UNK_145ba0e9c + lVar2) & 0x80000000;
  *(int *)(lVar1 + 0x120) = SUB84(dVar138,0);
  *(uint *)(lVar1 + 0x124) = (uint)((ulonglong)dVar138 >> 0x20) ^ uVar187 & 0x80000000;
  *(int *)(lVar1 + 0x128) = SUB84(dVar156,0);
  *(uint *)(lVar1 + 300) = (uint)((ulonglong)dVar156 >> 0x20) ^ uVar188 & 0x80000000;
  *(ulonglong *)(lVar1 + 0x130) = CONCAT44(uVar16 ^ uVar189 & 0x80000000,SUB84(dVar122,0));
  *(longlong *)(lVar1 + 0x138) = auVar115._8_8_;
  lVar1 = *plVar22;
  plVar22 = (longlong *)(lVar1 + 0x140);
  *plVar22 = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0xffffffffffffc000;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  local_220 = local_1f0 | *(ulonglong *)(lVar1 + 0x158);
  local_240 = local_218 >> 0x35 | *(ulonglong *)(lVar1 + 0x150);
  *(ulonglong *)(lVar1 + 0x150) = local_240;
  *(ulonglong *)(lVar1 + 0x158) = local_220;
  FUN_1437ee0a0(plVar22,local_210,0xe);
  uVar19 = *(ulonglong *)(lVar1 + 0x158) >> 0xb;
  uVar17 = *(longlong *)(lVar1 + 0x150) << 0x35 | uVar19;
  auVar81._8_8_ = -local_210._8_8_;
  auVar81._0_8_ = -local_210._0_8_;
  uVar24 = (longlong)uVar17 >> 0x35;
  auVar116._8_8_ = -local_200._8_8_;
  auVar116._0_8_ = -local_200._0_8_;
  iVar184 = local_210._4_4_ >> 0x1f;
  iVar186 = local_210._12_4_ >> 0x1f;
  uVar17 = (longlong)uVar17 >> 0x3f;
  uVar19 = (*(ulonglong *)(lVar1 + 0x158) & 0x7ff | uVar19 << 0xb) ^ uVar17;
  iVar173 = local_200._4_4_ >> 0x1f;
  iVar183 = local_200._12_4_ >> 0x1f;
  local_140 = uVar19 - uVar17;
  auVar60._4_4_ = iVar186;
  auVar60._0_4_ = iVar184;
  auVar60._8_4_ = iVar186;
  auVar60._12_4_ = iVar186;
  auVar59._8_8_ = auVar60._8_8_;
  auVar59._4_4_ = iVar184;
  auVar59._0_4_ = iVar184;
  auVar154._4_4_ = iVar173;
  auVar154._0_4_ = iVar173;
  auVar154._8_4_ = iVar183;
  auVar154._12_4_ = iVar183;
  auVar139 = auVar59 & auVar81 | ~auVar59 & local_210;
  uVar20 = auVar139._8_8_;
  auVar176 = auVar154 & auVar116 | ~auVar154 & local_200;
  uStack_138 = ((uVar24 ^ uVar17) - uVar17) - (ulonglong)(uVar19 < uVar17);
  uVar17 = auVar139._0_8_;
  uVar15 = FUN_1437eb2f0(uVar17,uVar20);
  uVar19 = auVar176._0_8_;
  local_e0[2] = FUN_1437eb2f0(uVar15,uVar19);
  local_c8 = 0;
  FUN_143dfacb0(local_e0 + 2,&local_140,local_e0 + 2);
  hkInt128::setUnsignedDiv(&local_140,&local_140,local_e0 + 2);
  uVar17 = uVar17 / local_e0[2];
  uStack_238 = uVar20 / local_e0[2];
  local_230 = uVar19 / local_e0[2];
  auVar61._4_4_ = iVar186;
  auVar61._0_4_ = iVar184;
  uStack_228 = auVar176._8_8_ / local_e0[2];
  uVar19 = -uStack_238;
  auVar61._8_4_ = iVar186;
  auVar61._12_4_ = iVar186;
  uVar20 = ~auVar61._8_8_ & uStack_238;
  if ((longlong)uVar24 < 0) {
    uVar24 = ~uStack_138 + (ulonglong)(0xfffffffffffffffe < ~local_140);
    local_220 = ~local_140 + 1;
  }
  else {
    uStack_238 = uStack_138;
    uVar24 = uStack_138;
    local_220 = local_140;
  }
  *plVar22 = (-uVar17 & CONCAT44(iVar184,iVar184) | ~CONCAT44(iVar184,iVar184) & uVar17) << 0xe;
  *(ulonglong *)(lVar1 + 0x148) = (uVar19 & auVar61._8_8_ | uVar20) << 0xe;
  *(ulonglong *)(lVar1 + 0x150) =
       (-local_230 & CONCAT44(iVar173,iVar173) | ~CONCAT44(iVar173,iVar173) & local_230) << 0xe;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  local_220 = local_220 | *(ulonglong *)(lVar1 + 0x158);
  local_240 = uVar24 & 0x7ff | *(ulonglong *)(lVar1 + 0x150);
  *(ulonglong *)(lVar1 + 0x150) = local_240;
  *(ulonglong *)(lVar1 + 0x158) = local_220;
  FUN_1437ee0a0(plVar22,local_210,0xe);
  uVar19 = *(ulonglong *)(lVar1 + 0x158) >> 0xb;
  uVar17 = *(longlong *)(lVar1 + 0x150) << 0x35 | uVar19;
  auVar82._8_8_ = -local_210._8_8_;
  auVar82._0_8_ = -local_210._0_8_;
  uVar20 = (longlong)uVar17 >> 0x35;
  auVar117._8_8_ = -local_200._8_8_;
  auVar117._0_8_ = -local_200._0_8_;
  uVar187 = local_210._4_4_ >> 0x1f;
  uVar188 = local_210._12_4_ >> 0x1f;
  uVar17 = (longlong)uVar17 >> 0x3f;
  uVar19 = (*(ulonglong *)(lVar1 + 0x158) & 0x7ff | uVar19 << 0xb) ^ uVar17;
  uVar189 = local_200._4_4_ >> 0x1f;
  iVar173 = local_200._12_4_ >> 0x1f;
  local_c0 = uVar19 - uVar17;
  auVar63._4_4_ = uVar188;
  auVar63._0_4_ = uVar187;
  auVar63._8_4_ = uVar188;
  auVar63._12_4_ = uVar188;
  auVar62._8_8_ = auVar63._8_8_;
  auVar62._4_4_ = uVar187;
  auVar62._0_4_ = uVar187;
  auVar155._4_4_ = uVar189;
  auVar155._0_4_ = uVar189;
  auVar155._8_4_ = iVar173;
  auVar155._12_4_ = iVar173;
  auVar176 = ~auVar62 & local_210 | auVar82 & auVar62;
  auVar139 = ~auVar155 & local_200 | auVar117 & auVar155;
  local_b8 = ((uVar20 ^ uVar17) - uVar17) - (ulonglong)(uVar19 < uVar17);
  local_210 = auVar176;
  local_200 = auVar139;
  FUN_1437eac30(local_210,&local_240);
  auVar119._4_4_ = (uint)local_240;
  auVar119._0_4_ = (uint)local_240;
  auVar119._8_4_ = (uint)local_240;
  auVar119._12_4_ = (uint)local_240;
  auVar118._0_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar118._4_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar118._8_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar118._12_4_ = -(uint)((int)(uint)local_240 < (int)local_240._4_4_);
  auVar119 = auVar118 & auVar119;
  uVar185 = ~auVar118._0_4_ & local_240._4_4_ | auVar119._0_4_;
  uVar16 = -(uint)((int)uVar185 < (int)(uint)uStack_238);
  uVar185 = (uVar16 & uVar185 | ~uVar16 & (uint)uStack_238) - 0xf;
  iVar173 = FUN_143dfa290(&local_c0,2);
  uVar16 = iVar173 - 0x36U;
  if ((int)uVar185 < (int)(iVar173 - 0x36U)) {
    uVar16 = uVar185;
  }
  uVar19 = (ulonglong)uVar16;
  bVar18 = (byte)uVar16;
  if (uVar16 < 0x40) {
    uVar17 = local_b8 << (bVar18 & 0x3f) | local_c0 >> 0x40 - (bVar18 & 0x3f);
    uVar23 = local_c0 << (bVar18 & 0x3f);
  }
  else {
    uVar17 = local_c0 << (bVar18 - 0x40 & 0x3f);
  }
  dVar138 = (double)((auVar176._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar156 = (double)((auVar176._8_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  if ((longlong)uVar20 < 0) {
    uVar137 = 0xf;
  }
  dVar122 = (double)((auVar139._0_8_ << uVar19) << 4) * 1.1102230246251565e-16;
  dVar136 = (double)(longlong)
                    ((uVar23 & 0xfffffffffffffff) >> 0x15 | (uVar17 << 4 | uVar23 >> 0x3c) << 0x27)
            * 3.725290298461914e-09;
  lVar2 = (ulonglong)((uVar137 >> 2) * 2) * 8;
  uVar16 = (uint)((ulonglong)dVar122 >> 0x20);
  auVar13._4_8_ = auVar119._8_8_;
  auVar13._0_4_ = uVar16;
  auVar120._0_8_ = auVar13._0_8_ << 0x20;
  uVar135 = SUB84(dVar136,0);
  auVar120._8_4_ = uVar135;
  uVar137 = (uint)((ulonglong)dVar136 >> 0x20);
  auVar120._12_4_ = uVar137;
  auVar14._4_8_ = auVar120._8_8_;
  auVar14._0_4_ = uVar16 ^ *(uint *)(&UNK_145ba0e94 + lVar2) & 0x80000000;
  auVar121._0_8_ = auVar14._0_8_ << 0x20;
  auVar121._8_4_ = uVar135;
  auVar121._12_4_ = uVar137 ^ *(uint *)(&UNK_145ba0e9c + lVar2) & 0x80000000;
  *(int *)(lVar1 + 0x160) = SUB84(dVar138,0);
  *(uint *)(lVar1 + 0x164) = (uint)((ulonglong)dVar138 >> 0x20) ^ uVar187 & 0x80000000;
  *(int *)(lVar1 + 0x168) = SUB84(dVar156,0);
  *(uint *)(lVar1 + 0x16c) = (uint)((ulonglong)dVar156 >> 0x20) ^ uVar188 & 0x80000000;
  *(ulonglong *)(lVar1 + 0x170) = CONCAT44(uVar16 ^ uVar189 & 0x80000000,SUB84(dVar122,0));
  *(longlong *)(lVar1 + 0x178) = auVar121._8_8_;
  return;
}



// FUNCTION 1437ee0a0 FUN_1437ee0a0 body=90 status=ok
// SIG undefined FUN_1437ee0a0(void)

void FUN_1437ee0a0(undefined1 (*param_1) [16],ulonglong *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_1;
  uVar2 = *(ulonglong *)(param_1[1] + 8);
  uVar3 = 0x40 - param_3;
  iVar4 = auVar1._4_4_ >> 0x1f;
  auVar5._0_8_ = CONCAT44(iVar4,iVar4);
  auVar5._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar5._12_4_ = auVar5._8_4_;
  iVar4 = *(int *)(param_1[1] + 4) >> 0x1f;
  auVar6._0_8_ = CONCAT44(iVar4,iVar4);
  auVar6._8_4_ = *(int *)(param_1[1] + 0xc) >> 0x1f;
  auVar6._12_4_ = auVar6._8_4_;
  param_2[2] = auVar6._0_8_ << (ulonglong)uVar3 | *(ulonglong *)param_1[1] >> (ulonglong)param_3;
  param_2[3] = auVar6._8_8_ << (ulonglong)uVar3 | uVar2 >> (ulonglong)param_3;
  *param_2 = auVar5._0_8_ << (ulonglong)uVar3 | auVar1._0_8_ >> (ulonglong)param_3;
  param_2[1] = auVar5._8_8_ << (ulonglong)uVar3 | auVar1._8_8_ >> (ulonglong)param_3;
  return;
}



// FUNCTION 1437ee100 FUN_1437ee100 body=195 status=ok
// SIG undefined FUN_1437ee100(void)

void FUN_1437ee100(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (ulonglong)param_2;
  uVar6 = uVar5;
  uVar10 = param_4;
  do {
    uVar4 = (ulonglong)param_3;
    uVar8 = uVar6 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)(param_3 + (int)uVar6) >> 1) * 4);
    iVar9 = param_3;
    do {
      uVar7 = (uint)uVar8;
      uVar2 = *(uint *)(param_1 + uVar5 * 4);
      while (uVar2 < uVar1) {
        uVar5 = uVar5 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + uVar4 * 4);
      while (uVar1 < uVar2) {
        uVar4 = uVar4 - 1;
        iVar9 = iVar9 + -1;
        uVar2 = *(uint *)(param_1 + uVar4 * 4);
      }
      if ((longlong)uVar4 < (longlong)uVar5) break;
      if (uVar4 != uVar5) {
        uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
        *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = uVar3;
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 <= (longlong)uVar4);
    if ((int)uVar6 < iVar9) {
      FUN_1437ee100(param_1,uVar6 & 0xffffffff,iVar9,uVar10);
      uVar10 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar6 = (ulonglong)uVar7;
  } while( true );
}



// FUNCTION 1437ee1d0 FUN_1437ee1d0 body=489 status=ok
// SIG undefined FUN_1437ee1d0(void)

undefined8 * FUN_1437ee1d0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar12 = (longlong *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarEntity::vftable;
  lVar5 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    FUN_14370c030();
  }
  *param_1 = hkcdPlanarGeometry::vftable;
  lVar5 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar5;
  if (lVar5 != 0) {
    FUN_14370c030();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0xd98);
  plVar6 = plVar12;
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_1437eb070(lVar5);
  }
  if (plVar6 != (longlong *)param_1[5]) {
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      FUN_14370c150();
    }
    param_1[5] = plVar6;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x28);
  plVar6 = plVar12;
  if (plVar7 != (longlong *)0x0) {
    plVar7[2] = 0;
    plVar7[4] = 0;
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 2) = 0x1ffff;
    plVar7[3] = 0;
    *(undefined4 *)(plVar7 + 4) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x24) = 0x80000000;
    *plVar7 = (longlong)hkcdPlanarGeometry::VertexStorage::vftable;
    plVar6 = plVar7;
  }
  if (plVar6 != (longlong *)param_1[6]) {
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      FUN_14370c150();
    }
    param_1[6] = plVar6;
  }
  FUN_1437eb1e0(param_1[5],*(undefined8 *)(param_2 + 0x28));
  lVar5 = param_1[6];
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0x18);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    plVar6 = plVar12;
  }
  iVar2 = (int)plVar6[1];
  lVar14 = (longlong)iVar2;
  lVar13 = *plVar6;
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)(lVar5 + 0x24) & 0x3fffffff;
  iVar11 = *(int *)(lVar5 + 0x20) + iVar2;
  if (((int)uVar10 < iVar11) && ((int)uVar10 < iVar11)) {
    iVar3 = iVar11;
    if (iVar11 < (int)(uVar10 * 2)) {
      iVar3 = uVar10 * 2;
    }
    FUN_14370c310(uVar8,lVar5 + 0x18,iVar3,0x20);
  }
  puVar9 = (undefined8 *)((longlong)*(int *)(lVar5 + 0x20) * 0x20 + *(longlong *)(lVar5 + 0x18));
  if (0 < iVar2) {
    lVar13 = lVar13 - (longlong)puVar9;
    do {
      puVar1 = (undefined8 *)(lVar13 + (longlong)puVar9);
      uVar8 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar8;
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)puVar9);
      uVar8 = puVar1[1];
      puVar9[2] = *puVar1;
      puVar9[3] = uVar8;
      puVar9 = puVar9 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(int *)(lVar5 + 0x20) = iVar11;
  return param_1;
}



// FUNCTION 1437ee3c0 FUN_1437ee3c0 body=352 status=ok
// SIG undefined FUN_1437ee3c0(void)

undefined8 * FUN_1437ee3c0(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarEntity::vftable;
  param_1[3] = param_4;
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  *param_1 = hkcdPlanarGeometry::vftable;
  param_1[4] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0xd98);
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_1437eb070(lVar2);
  }
  if (puVar3 != (undefined8 *)param_1[5]) {
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    param_1[5] = puVar3;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0x1ffff;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000000;
    *puVar3 = hkcdPlanarGeometry::VertexStorage::vftable;
    puVar4 = puVar3;
  }
  if (puVar4 != (undefined8 *)param_1[6]) {
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    param_1[6] = puVar4;
  }
  if (param_3 != 0) {
    FUN_1437efc50(param_1[5],param_3);
  }
  return param_1;
}



// FUNCTION 1437ee520 FUN_1437ee520 body=154 status=ok
// SIG undefined FUN_1437ee520(void)

void FUN_1437ee520(undefined8 *param_1)

{
  *param_1 = hkcdPlanarGeometry::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  param_1[6] = 0;
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437ee5c0 FUN_1437ee5c0 body=208 status=ok
// SIG undefined FUN_1437ee5c0(void)

undefined8 * FUN_1437ee5c0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  *param_1 = hkcdPlanarGeometry::VertexStorage::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x20,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x28;
      if (*(short *)(param_1 + 2) != -1) {
        sVar3 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437ee690 FUN_1437ee690 body=139 status=ok
// SIG undefined FUN_1437ee690(void)

longlong FUN_1437ee690(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437ee520();
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



// FUNCTION 1437ee730 FUN_1437ee730 body=693 status=ok
// SIG undefined FUN_1437ee730(void)

void FUN_1437ee730(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 in_XMM4_Qb;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_1437ee9f0(param_1 + 0x20,param_1 + 0x60,param_1 + 0xa0,&local_80);
  auVar2._4_8_ = in_XMM4_Qb;
  auVar2._0_4_ = uStack_4c;
  auVar16._0_8_ = auVar2._0_8_ << 0x20;
  auVar16._8_4_ = uStack_48;
  auVar16._12_4_ = uStack_44;
  auVar20._8_8_ = local_80;
  auVar20._0_8_ = local_80;
  auVar18._8_8_ = local_70;
  auVar18._0_8_ = local_70;
  auVar14._8_8_ = uStack_68;
  auVar14._0_8_ = uStack_68;
  auVar20 = divpd(auVar20,auVar14);
  auVar23._8_8_ = auVar16._8_8_;
  auVar23._0_8_ = auVar23._8_8_;
  auVar16 = divpd(auVar23,auVar14);
  dVar19 = auVar20._0_8_;
  auVar22._8_8_ = uStack_78;
  auVar22._0_8_ = uStack_78;
  dVar5 = (double)(((ulonglong)dVar19 & 0x7ff0000000000000) + 0xfcc0000000000000);
  auVar23 = divpd(auVar22,auVar14);
  if ((longlong)dVar5 < 0) {
    dVar5 = 0.0;
  }
  auVar11._8_4_ = 0;
  auVar11._0_8_ = dVar5;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar21 = auVar23._0_8_;
  auVar23 = divpd(auVar11,auVar14);
  dVar6 = (double)(((ulonglong)dVar21 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar6 < 0) {
    dVar6 = 0.0;
  }
  dVar10 = auVar16._0_8_;
  auVar16 = divpd(auVar18,auVar14);
  auVar12._8_4_ = 0;
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar17 = auVar16._0_8_;
  auVar16 = divpd(auVar12,auVar14);
  dVar7 = (double)(((ulonglong)dVar17 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar7 < 0) {
    dVar7 = 0.0;
  }
  auVar13._8_4_ = 0;
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar14 = divpd(auVar13,auVar14);
  dVar7 = dVar7 + ABS(auVar14._0_8_) + ABS(dVar10 * dVar17);
  lVar9 = -(ulonglong)(dVar6 + ABS(auVar16._0_8_) + ABS(dVar10 * dVar21) < 1.0);
  auVar15._8_8_ = -(ulonglong)(dVar7 < 1.0);
  auVar15._0_8_ = -(ulonglong)(dVar7 < 1.0);
  iVar8 = movmskpd(0,auVar15);
  auVar1._8_4_ = (int)lVar9;
  auVar1._0_8_ = -(ulonglong)(dVar5 + ABS(auVar23._0_8_) + ABS(dVar10 * dVar19) < 1.0);
  auVar1._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar3 = movmskpd(0,auVar1);
  if (iVar8 == 0 && iVar3 == 0) {
    FUN_1437f1600(param_1,local_e0,local_c0,local_a0,local_100);
    iVar3 = thunk_FUN_143dfa110(local_e0,local_100);
    iVar8 = thunk_FUN_143dfa110(local_c0,local_100);
    iVar4 = thunk_FUN_143dfa110(local_a0,local_100);
    *param_2 = (double)iVar3;
    param_2[1] = (double)iVar8;
    param_2[2] = (double)iVar4;
    param_2[3] = (double)iVar4;
  }
  else {
    *param_2 = dVar19;
    param_2[1] = dVar21;
    param_2[2] = dVar17;
    param_2[3] = dVar17;
  }
  return;
}



// FUNCTION 1437ee9f0 FUN_1437ee9f0 body=4694 status=ok
// SIG undefined FUN_1437ee9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ee9f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar21;
  double dVar17;
  double dVar18;
  int iVar20;
  int iVar22;
  undefined1 auVar19 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar40;
  int iVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar75;
  double dVar76;
  double dVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  double dVar81;
  double dVar84;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar85;
  undefined1 auVar86 [16];
  double dStack_458;
  undefined4 local_210;
  uint uStack_20c;
  
  dVar80 = SUB168(*param_1,0);
  auVar33 = ZEXT816(0);
  auVar59 = param_1[1];
  auVar44._0_8_ = SUB168(_DAT_145c23a30 & auVar59,0) + -0x340000000000000;
  auVar44._8_8_ = SUB168(_DAT_145c23a30 & auVar59,8) + -0x340000000000000;
  iVar20 = (int)(auVar44._0_8_ >> 0x3f);
  iVar22 = (int)(auVar44._8_8_ >> 0x3f);
  auVar31._4_4_ = iVar20;
  auVar31._0_4_ = iVar20;
  auVar31._8_4_ = iVar22;
  auVar31._12_4_ = iVar22;
  auVar19 = auVar33 & auVar31 | ~auVar31 & auVar44;
  auVar31 = *param_2;
  dVar75 = auVar31._0_8_;
  auVar45._0_8_ = SUB168(_DAT_145c23a30 & auVar31,0) + -0x340000000000000;
  auVar45._8_8_ = SUB168(_DAT_145c23a30 & auVar31,8) + -0x340000000000000;
  auVar44 = param_2[1];
  dVar67 = auVar44._0_8_;
  iVar40 = (int)(auVar45._0_8_ >> 0x3f);
  iVar41 = (int)(auVar45._8_8_ >> 0x3f);
  auVar52._0_8_ = SUB168(_DAT_145c23a30 & auVar44,0) + -0x340000000000000;
  auVar52._8_8_ = SUB168(_DAT_145c23a30 & auVar44,8) + -0x340000000000000;
  iVar20 = (int)(auVar52._0_8_ >> 0x3f);
  iVar22 = (int)(auVar52._8_8_ >> 0x3f);
  auVar26._4_4_ = iVar41;
  auVar26._0_4_ = iVar40;
  auVar26._8_4_ = iVar41;
  auVar26._12_4_ = iVar41;
  auVar28._8_8_ = auVar26._8_8_;
  auVar28._4_4_ = iVar40;
  auVar28._0_4_ = iVar40;
  auVar27._4_4_ = iVar20;
  auVar27._0_4_ = iVar20;
  auVar27._8_4_ = iVar22;
  auVar27._12_4_ = iVar22;
  auVar32 = ~auVar28 & auVar45 | auVar33 & auVar28;
  auVar27 = ~auVar27 & auVar52 | auVar33 & auVar27;
  dVar70 = auVar32._0_8_;
  uVar30 = auVar27._12_4_;
  auVar28 = *param_3;
  uVar1 = auVar28._0_4_;
  auVar26 = param_3[1];
  dVar65 = auVar26._0_8_;
  auVar53._0_8_ = SUB168(_DAT_145c23a30 & auVar26,0) + -0x340000000000000;
  auVar53._8_8_ = SUB168(_DAT_145c23a30 & auVar26,8) + -0x340000000000000;
  auVar46._0_8_ = SUB168(_DAT_145c23a30 & auVar28,0) + -0x340000000000000;
  auVar46._8_8_ = SUB168(_DAT_145c23a30 & auVar28,8) + -0x340000000000000;
  iVar20 = (int)(auVar53._0_8_ >> 0x3f);
  iVar22 = (int)(auVar53._8_8_ >> 0x3f);
  iVar40 = (int)(auVar46._0_8_ >> 0x3f);
  iVar41 = (int)(auVar46._8_8_ >> 0x3f);
  auVar62._4_4_ = iVar41;
  auVar62._0_4_ = iVar40;
  auVar62._8_4_ = iVar41;
  auVar62._12_4_ = iVar41;
  auVar33._8_8_ = auVar62._8_8_;
  auVar33._4_4_ = iVar40;
  auVar33._0_4_ = iVar40;
  auVar36._4_4_ = iVar20;
  auVar36._0_4_ = iVar20;
  auVar36._8_4_ = iVar22;
  auVar36._12_4_ = iVar22;
  dVar49 = auVar59._0_8_;
  uVar2 = auVar59._12_4_;
  auVar33 = ~auVar33 & auVar46 | ZEXT816(0) & auVar33;
  auVar62 = ~auVar36 & auVar53 | ZEXT816(0) & auVar36;
  dVar14 = auVar33._0_8_;
  auVar3._4_8_ = auVar36._8_8_;
  auVar3._0_4_ = auVar59._4_4_;
  auVar37._0_8_ = auVar3._0_8_ << 0x20;
  auVar37._8_4_ = auVar59._8_4_;
  auVar37._12_4_ = uVar2;
  dVar60 = auVar59._8_8_;
  dVar71 = auVar33._8_8_;
  dVar16 = auVar19._0_8_;
  dVar84 = SUB168(*param_1,8);
  uVar21 = auVar31._4_4_;
  auVar4._4_8_ = dVar60;
  auVar4._0_4_ = uVar21;
  auVar54._0_8_ = auVar4._0_8_ << 0x20;
  auVar54._8_4_ = auVar31._0_4_;
  auVar54._12_4_ = uVar21;
  auVar5._4_8_ = dVar84;
  auVar5._0_4_ = auVar44._4_4_;
  auVar34._0_8_ = auVar5._0_8_ << 0x20;
  uVar68 = auVar44._8_4_;
  auVar34._8_4_ = uVar68;
  auVar34._12_4_ = auVar44._12_4_;
  dVar79 = auVar31._8_8_;
  dVar17 = auVar34._8_8_;
  dVar69 = auVar44._8_8_;
  auVar6._4_8_ = dVar60;
  auVar6._0_4_ = auVar27._4_4_;
  auVar38._0_8_ = auVar6._0_8_ << 0x20;
  auVar38._8_4_ = auVar27._8_4_;
  auVar38._12_4_ = uVar30;
  dVar74 = auVar32._8_8_;
  auVar7._4_8_ = dVar79;
  auVar7._0_4_ = auVar32._12_4_;
  auVar77._0_8_ = auVar7._0_8_ << 0x20;
  auVar77._8_4_ = auVar32._8_4_;
  auVar77._12_4_ = auVar32._12_4_;
  auVar8._4_8_ = dVar74;
  auVar8._0_4_ = auVar26._4_4_;
  auVar35._0_8_ = auVar8._0_8_ << 0x20;
  auVar35._8_4_ = auVar26._8_4_;
  auVar35._12_4_ = auVar26._12_4_;
  dVar76 = auVar35._8_8_;
  dVar66 = auVar26._8_8_;
  dVar15 = auVar28._8_8_;
  auVar82._8_4_ = auVar31._8_4_;
  auVar82._0_8_ = dVar17;
  auVar82._12_4_ = auVar31._12_4_;
  dVar25 = auVar28._0_8_;
  auVar9._4_8_ = dVar71;
  auVar9._0_4_ = auVar62._4_4_;
  auVar47._0_8_ = auVar9._0_8_ << 0x20;
  auVar47._8_4_ = auVar62._8_4_;
  auVar47._12_4_ = auVar62._12_4_;
  dVar18 = auVar62._8_8_;
  auVar10._4_8_ = dVar18;
  auVar10._0_4_ = auVar33._12_4_;
  auVar63._0_8_ = auVar10._0_8_ << 0x20;
  auVar63._8_4_ = auVar33._8_4_;
  auVar63._12_4_ = auVar33._12_4_;
  auVar11._4_8_ = dVar18;
  auVar11._0_4_ = auVar44._4_4_;
  auVar48._0_8_ = auVar11._0_8_ << 0x20;
  auVar48._8_4_ = auVar31._0_4_;
  auVar48._12_4_ = uVar21;
  auVar55._8_4_ = auVar28._8_4_;
  auVar55._0_8_ = dVar76;
  auVar55._12_4_ = auVar28._12_4_;
  auVar72._8_4_ = uVar1;
  auVar72._0_8_ = dVar15;
  auVar72._12_4_ = auVar28._4_4_;
  uVar42 = ((ulonglong)(dVar15 * dVar17) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar42 >> 0x3f);
  auVar56._8_4_ = uVar1;
  auVar56._0_8_ = dVar76;
  auVar56._12_4_ = auVar28._4_4_;
  uVar43 = ((ulonglong)DAT_145c23a30 & (ulonglong)(dVar76 * dVar79)) + 0xfcc0000000000000;
  iVar22 = (int)((longlong)uVar43 >> 0x3f);
  auVar57._0_8_ = -(dVar76 * dVar79);
  dVar61 = -(auVar56._8_8_ * auVar54._8_8_);
  auVar57._8_4_ = SUB84(dVar61,0);
  auVar57._12_4_ = (undefined4)((ulonglong)dVar61 >> 0x20);
  auVar64._0_8_ = -(dVar67 * auVar55._8_8_);
  auVar64._8_4_ = SUB84(-(dVar17 * dVar65),0);
  auVar64._12_4_ = (undefined4)((ulonglong)-(dVar17 * dVar65) >> 0x20);
  dVar50 = auVar57._0_8_ + dVar15 * dVar17;
  dVar61 = auVar57._8_8_ + auVar72._8_8_ * auVar48._8_8_;
  auVar32._8_4_ = SUB84(dVar61,0);
  auVar32._0_8_ = dVar50;
  auVar32._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
  auVar58._0_8_ = SUB168(_DAT_145c23a30 & auVar32,0) + -0x340000000000000;
  auVar58._8_8_ = SUB168(_DAT_145c23a30 & auVar32,8) + -0x340000000000000;
  iVar40 = (int)(auVar58._0_8_ >> 0x3f);
  iVar41 = (int)(auVar58._8_8_ >> 0x3f);
  auVar39._4_4_ = iVar40;
  auVar39._0_4_ = iVar40;
  auVar39._8_4_ = iVar41;
  auVar39._12_4_ = iVar41;
  auVar28 = ~auVar39 & auVar58 | ZEXT816(0) & auVar39;
  auVar12._4_8_ = auVar28._8_8_;
  auVar12._0_4_ = uVar2;
  auVar29._0_8_ = auVar12._0_8_ << 0x20;
  auVar29._8_4_ = auVar59._8_4_;
  auVar29._12_4_ = uVar2;
  dVar17 = auVar28._0_8_ +
           (double)(~CONCAT44(iVar20,iVar20) & uVar42) +
           auVar63._8_8_ * auVar38._8_8_ + ABS(dVar17) * auVar63._8_8_ + ABS(dVar15) * auVar38._8_8_
           + (double)(~CONCAT44(iVar22,iVar22) & uVar43) +
             auVar47._8_8_ * auVar77._8_8_ +
             (double)CONCAT44((uint)((ulonglong)((longlong)dVar79 << 1) >> 0x21),auVar31._8_4_) *
             auVar47._8_8_ + ABS(dVar76) * auVar77._8_8_;
  auVar73._8_4_ = uVar68;
  auVar73._0_8_ = dVar75;
  auVar73._12_4_ = auVar44._12_4_;
  auVar13._4_8_ = dVar67 * dVar76;
  auVar13._0_4_ = uVar30;
  auVar83._0_8_ = auVar13._0_8_ << 0x20;
  auVar83._8_4_ = auVar27._8_4_;
  auVar83._12_4_ = uVar30;
  auVar59._8_4_ = auVar26._8_4_;
  auVar59._0_8_ = dVar25;
  auVar59._12_4_ = auVar26._12_4_;
  uVar42 = ((ulonglong)(dVar75 * dVar66) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar42 >> 0x3f);
  auVar86._0_8_ = -(dVar67 * auVar59._8_8_);
  auVar86._8_4_ = SUB84(dVar75 * dVar65,0);
  auVar86._12_4_ = (uint)((ulonglong)(dVar75 * dVar65) >> 0x20) ^ 0x80000000;
  dVar23 = -(dVar69 * dVar25) + dVar75 * dVar66;
  uVar43 = ((ulonglong)(dVar69 * dVar25) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar22 = (int)((longlong)uVar43 >> 0x3f);
  uVar51 = ((ulonglong)dVar23 & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar40 = (int)((longlong)uVar51 >> 0x3f);
  dVar18 = (double)(~CONCAT44(iVar40,iVar40) & uVar51) +
           (double)(~CONCAT44(iVar20,iVar20) & uVar42) +
           dVar70 * dVar18 + ABS(dVar75) * dVar18 + ABS(dVar66) * dVar70 +
           (double)(~CONCAT44(iVar22,iVar22) & uVar43) +
           auVar83._8_8_ * dVar14 +
           (double)CONCAT44((uint)((ulonglong)((longlong)dVar69 << 1) >> 0x21),uVar68) * dVar14 +
           ABS(dVar25) * auVar83._8_8_;
  dStack_458 = auVar19._8_8_;
  uVar42 = ((ulonglong)(dVar15 * dVar75) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar42 >> 0x3f);
  auVar19._0_8_ = -(dVar69 * dVar15);
  auVar19._8_4_ = SUB84(dVar75 * dVar66,0);
  auVar19._12_4_ = (uint)((ulonglong)(dVar75 * dVar66) >> 0x20) ^ 0x80000000;
  uVar43 = ((ulonglong)(dVar25 * dVar79) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar22 = (int)((longlong)uVar43 >> 0x3f);
  dVar85 = -(dVar25 * dVar79) + dVar15 * dVar75;
  uVar51 = ((ulonglong)dVar85 & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar40 = (int)((longlong)uVar51 >> 0x3f);
  dVar81 = (double)(~CONCAT44(iVar40,iVar40) & uVar51) +
           (double)(~CONCAT44(iVar20,iVar20) & uVar42) +
           dVar71 * dVar70 + ABS(dVar75) * dVar71 + ABS(dVar15) * dVar70 +
           (double)(~CONCAT44(iVar22,iVar22) & uVar43) +
           dVar14 * dVar74 + ABS(dVar79) * dVar14 +
           (double)CONCAT44((uint)((ulonglong)((longlong)dVar25 << 1) >> 0x21),uVar1) * dVar74;
  uVar51 = ((ulonglong)(dVar15 * dVar75) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar51 >> 0x3f);
  dVar24 = -(dVar25 * dVar79) + dVar15 * dVar75;
  uVar42 = ((ulonglong)(dVar25 * dVar79) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar22 = (int)((longlong)uVar42 >> 0x3f);
  uVar43 = ((ulonglong)dVar24 & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar40 = (int)((longlong)uVar43 >> 0x3f);
  dVar71 = (double)(~CONCAT44(iVar40,iVar40) & uVar43) +
           (double)(~CONCAT44(iVar20,iVar20) & uVar51) +
           dVar71 * dVar70 + ABS(dVar75) * dVar71 + ABS(dVar15) * dVar70 +
           (double)(~CONCAT44(iVar22,iVar22) & uVar42) +
           dVar14 * dVar74 + ABS(dVar79) * dVar14 + ABS(dVar25) * dVar74;
  uVar42 = ((ulonglong)(dVar49 * dVar50) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar42 >> 0x3f);
  dVar76 = auVar37._8_8_ * (auVar64._0_8_ + auVar82._8_8_ * dVar65) +
           dVar84 * (auVar64._8_8_ + dVar67 * dVar76) + dVar49 * dVar50;
  uVar43 = ((ulonglong)(dVar49 * dVar23) & 0x7ff0000000000000) + 0xfcc0000000000000;
  dVar61 = (double)(((ulonglong)dVar76 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar61 < 0) {
    dVar61 = 0.0;
  }
  dVar61 = dVar61 + (double)(~CONCAT44(iVar20,iVar20) & uVar42) +
                    dVar16 * dVar17 + ABS(dVar49) * dVar17 + ABS(dVar50) * dVar16;
  iVar20 = (int)((longlong)uVar43 >> 0x3f);
  dVar17 = dVar80 * (auVar86._0_8_ + auVar73._8_8_ * dVar65) +
           auVar29._8_8_ * (auVar86._8_8_ + dVar67 * dVar25) + dVar49 * dVar23;
  dVar14 = (double)(((ulonglong)dVar17 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar14 < 0) {
    dVar14 = 0.0;
  }
  dVar14 = dVar14 + (double)(~CONCAT44(iVar20,iVar20) & uVar43) +
                    dVar16 * dVar18 + ABS(dVar49) * dVar18 + ABS(dVar23) * dVar16;
  uVar42 = ((ulonglong)(dVar85 * dVar60) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar20 = (int)((longlong)uVar42 >> 0x3f);
  dVar23 = (auVar19._0_8_ + dVar79 * dVar66) * dVar80 + (auVar19._8_8_ + dVar69 * dVar25) * dVar84 +
           dVar85 * dVar60;
  dVar18 = (double)(((ulonglong)dVar23 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar18 < 0) {
    dVar18 = 0.0;
  }
  uVar43 = ((ulonglong)(dVar49 * dVar24) & 0x7ff0000000000000) + 0xfcc0000000000000;
  iVar22 = (int)((longlong)uVar43 >> 0x3f);
  dVar18 = dVar18 + (double)(~CONCAT44(iVar20,iVar20) & uVar42) +
                    dVar81 * dStack_458 + ABS(dVar60) * dVar81 + ABS(dVar85) * dStack_458;
  dVar25 = (-(dVar67 * dVar15) + dVar79 * dVar65) * dVar80 +
           (-(dVar75 * dVar65) + dVar67 * dVar25) * dVar84 + dVar49 * dVar24;
  dVar15 = (double)(((ulonglong)dVar25 & 0x7ff0000000000000) + 0xfcc0000000000000);
  if ((longlong)dVar15 < 0) {
    dVar15 = 0.0;
  }
  dVar15 = dVar15 + (double)(~CONCAT44(iVar22,iVar22) & uVar43) +
                    dVar16 * dVar71 + ABS(dVar49) * dVar71 + ABS(dVar24) * dVar16;
  auVar78._0_8_ = -dVar76;
  auVar78._8_4_ = SUB84(dVar17,0);
  auVar78._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) ^ 0x80000000;
  *param_4 = auVar78;
  local_210 = SUB84(dVar23,0);
  uStack_20c = (uint)((ulonglong)dVar23 >> 0x20);
  *(undefined4 *)param_4[1] = local_210;
  *(uint *)(param_4[1] + 4) = uStack_20c ^ 0x80000000;
  *(double *)(param_4[1] + 8) = dVar25;
  *(double *)param_4[2] = dVar61 + dVar61;
  *(double *)(param_4[2] + 8) = dVar14 + dVar14;
  *(double *)param_4[3] = dVar18 + dVar18;
  *(double *)(param_4[3] + 8) = dVar15 + dVar15;
  return;
}



// FUNCTION 1437efc50 FUN_1437efc50 body=521 status=ok
// SIG undefined FUN_1437efc50(void)

void FUN_1437efc50(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  
  FUN_143703a50();
  iVar11 = param_2 + 8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar6 = FUN_143703a50();
  uVar8 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar8 < iVar11) {
    iVar4 = uVar8 * 2;
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      iVar10 = iVar4;
    }
    FUN_14370c310(uVar6,param_1 + 0x18,iVar10,4);
  }
  iVar10 = iVar11 - *(int *)(param_1 + 0x20);
  if (0 < iVar10) {
    puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 4)
    ;
    for (lVar9 = (longlong)iVar10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  *(int *)(param_1 + 0x20) = iVar11;
  puVar3 = *(uint **)(param_1 + 0x18);
  puVar2 = puVar3 + (int)(param_2 + 4);
  puVar3[2] = 4;
  puVar3[3] = puVar3[3] | 0x40000000;
  puVar3[6] = param_2;
  puVar3[(longlong)(int)(param_2 - 2) + 4] = param_2;
  puVar3[(longlong)(int)(param_2 - 1) + 4] = puVar3[(longlong)(int)(param_2 - 1) + 4] | 0x40000000;
  puVar2[2] = 4;
  puVar2[3] = puVar2[3] | 0x40000000;
  *puVar3 = *puVar3 & 0x7fffffff;
  puVar3[puVar3[2] - 1] = puVar3[puVar3[2] - 1] & 0x7fffffff;
  puVar3[4] = puVar3[4] | 0x80000000;
  puVar3[(ulonglong)(puVar3[6] - 1) + 4] = puVar3[(ulonglong)(puVar3[6] - 1) + 4] | 0x80000000;
  *puVar2 = *puVar2 & 0x7fffffff;
  puVar2[puVar2[2] - 1] = puVar2[puVar2[2] - 1] & 0x7fffffff;
  puVar3[1] = 0;
  puVar3[5] = 0;
  puVar2[1] = 0;
  *puVar3 = *puVar3 & 0xe0000000;
  puVar3[4] = puVar3[4] & 0xe0000000;
  *puVar2 = *puVar2 & 0xe0000000;
  lVar9 = *(longlong *)(param_1 + 0x18);
  uVar13 = *(uint *)(lVar9 + 0x18);
  uVar8 = uVar13 >> 1 | uVar13;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f) * 0x1010101;
  bVar7 = (char)(uVar8 >> 0x18) - 1;
  uVar8 = (uVar8 >> 0x18) - 3;
  uVar5 = 5;
  if (uVar8 < 5) {
    uVar5 = uVar8;
  }
  uVar13 = (~(1 << (bVar7 & 0x1f)) & uVar13) >> (bVar7 - (char)uVar5 & 0x1f);
  lVar1 = param_1 + ((ulonglong)uVar8 * 0x20 + (ulonglong)uVar13) * 4;
  iVar11 = *(int *)(lVar1 + 0x94);
  *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) & 0xe0000000;
  *(int *)(lVar9 + 0x14) = iVar11;
  puVar2 = (uint *)(lVar9 + (longlong)iVar11 * 4);
  *puVar2 = *puVar2 & 0xe0000004;
  puVar2 = (uint *)(lVar9 + (longlong)iVar11 * 4);
  *puVar2 = *puVar2 | 4;
  *(undefined4 *)(lVar1 + 0x94) = 4;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << ((byte)uVar8 & 0x1f);
  puVar2 = (uint *)(param_1 + 0x2c + (ulonglong)uVar8 * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
  return;
}



// FUNCTION 1437efe60 FUN_1437efe60 body=2384 status=ok
// SIG undefined FUN_1437efe60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437efe60(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong local_240;
  undefined4 *local_238;
  int local_230;
  uint local_22c;
  uint local_228;
  ulonglong local_220;
  undefined4 local_218;
  uint local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  uint local_1f4;
  uint *local_1e8;
  longlong local_1e0;
  ulonglong uStack_1d8;
  longlong local_1d0;
  ulonglong uStack_1c8;
  longlong local_1c0;
  ulonglong uStack_1b8;
  undefined8 local_1b0;
  ulonglong uStack_1a8;
  undefined8 local_1a0;
  ulonglong uStack_198;
  undefined8 local_190;
  ulonglong uStack_188;
  longlong local_180;
  longlong lStack_178;
  ulonglong local_170;
  longlong lStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  longlong local_140;
  longlong lStack_138;
  ulonglong local_130;
  longlong lStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  longlong local_100;
  longlong lStack_f8;
  ulonglong local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  longlong lStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  undefined1 auVar19 [16];
  
  lVar9 = *(longlong *)(param_1 + 0x28);
  uVar17 = 0;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0x80000000;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0x80000000;
  local_238 = (undefined4 *)0x0;
  local_230 = 0;
  local_22c = 0x80000000;
  lVar16 = *(longlong *)(lVar9 + 0x18);
  uVar15 = *(int *)(lVar9 + 0x20) - 4;
  uVar8 = uVar17;
  do {
    iVar13 = (int)uVar8;
    if (*(int *)(lVar16 + (longlong)iVar13 * 4) < 0) {
      uVar8 = (ulonglong)(uint)(iVar13 + *(int *)(lVar16 + (longlong)iVar13 * 4 + 8));
    }
    else {
      do {
        iVar13 = (int)uVar8;
        uVar8 = (ulonglong)(iVar13 + 1);
      } while ((*(uint *)(lVar16 + (longlong)iVar13 * 4) & 0x40000000) == 0);
    }
    uVar12 = (uint)uVar8;
  } while ((uVar12 < uVar15) && (*(int *)(lVar16 + (longlong)(int)uVar12 * 4) < 0));
  uVar7 = uVar17;
  if (uVar12 < uVar15) {
    uVar7 = uVar8;
  }
  local_228 = (uint)uVar7;
  uVar15 = 0x80000000;
  uVar4 = 0;
  if (local_228 != 0) {
    do {
      uVar17 = 0;
      lVar16 = *(longlong *)(lVar9 + 0x18);
      uVar12 = 0;
      puVar11 = (uint *)(lVar16 + (longlong)(int)uVar7 * 4);
      lVar9 = (longlong)((int)uVar7 + 2);
      puVar1 = (uint *)(lVar16 + lVar9 * 4);
      uVar15 = *(uint *)(lVar16 + lVar9 * 4);
      uVar8 = uVar17;
      while ((uVar15 & 0x20000000) == 0) {
        uVar12 = (int)uVar8 + 2;
        uVar8 = (ulonglong)uVar12;
        puVar1 = puVar1 + 2;
        uVar15 = *puVar1;
      }
      iVar13 = (int)uVar12 >> 1;
      local_1e8 = puVar11;
      uVar5 = FUN_143703a50();
      if ((int)(local_22c & 0x3fffffff) < iVar13) {
        iVar3 = (local_22c & 0x3fffffff) * 2;
        iVar18 = iVar13;
        if (iVar13 < iVar3) {
          iVar18 = iVar3;
        }
        FUN_14370c310(uVar5,&local_238,iVar18,4);
      }
      pauVar10 = (undefined1 (*) [16])
                 (((ulonglong)(puVar11[2] & 0x1fffffff) & 0xffffffffefffffff) * 0x40 +
                 *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
      if ((puVar11[2] & 0x1fffffff) >> 0x1c == 0) {
        local_180 = *(longlong *)*pauVar10;
        lStack_178 = *(longlong *)(*pauVar10 + 8);
        local_170 = *(ulonglong *)pauVar10[1];
        lStack_168 = *(longlong *)(pauVar10[1] + 8);
        local_160 = *(ulonglong *)pauVar10[2];
        uStack_158 = *(ulonglong *)(pauVar10[2] + 8);
        local_150 = *(ulonglong *)pauVar10[3];
        uStack_148 = *(ulonglong *)(pauVar10[3] + 8);
      }
      else {
        uVar8 = *(ulonglong *)(pauVar10[1] + 8) >> 0xb;
        auVar22 = pauVar10[1];
        uVar6 = ~(*(ulonglong *)(pauVar10[1] + 8) & 0x7ff | uVar8 << 0xb);
        local_240 = uVar6 + 1;
        uStack_1a8 = auVar22._0_8_ >> 0xe;
        iVar18 = auVar22._4_4_ >> 0x1f;
        auVar19._0_8_ = CONCAT44(iVar18,iVar18);
        auVar19._8_4_ = auVar22._12_4_ >> 0x1f;
        auVar19._12_4_ = auVar19._8_4_;
        local_b0 = -(auVar19._0_8_ << 0x32 | uStack_1a8);
        lStack_a8 = -(auVar19._8_8_ << 0x32 | auVar22._8_8_ >> 0xe);
        local_180 = (SUB168(*pauVar10,0) >> 0xe) * -0x4000;
        lStack_178 = (SUB168(*pauVar10,8) >> 0xe) * -0x4000;
        uStack_1a8 = uStack_1a8 * -0x4000;
        local_1b0 = 0;
        uStack_1d8 = ~((longlong)(*(longlong *)pauVar10[1] << 0x35 | uVar8) >> 0x35) +
                     (ulonglong)(0xfffffffffffffffe < uVar6) & 0x7ff | uStack_1a8;
        local_160 = *(ulonglong *)pauVar10[2] ^ 0x8000000000000000;
        uStack_158 = *(ulonglong *)(pauVar10[2] + 8) ^ 0x8000000000000000;
        local_150 = *(ulonglong *)pauVar10[3] ^ 0x8000000000000000;
        uStack_148 = *(ulonglong *)(pauVar10[3] + 8) ^ 0x8000000000000000;
        local_1e0 = local_240;
        local_170 = uStack_1d8;
        lStack_168 = local_240;
      }
      pauVar10 = (undefined1 (*) [16])
                 (((ulonglong)(puVar11[(longlong)(iVar13 * 2 + -1) + 2] & 0x1fffffff) &
                  0xffffffffefffffff) * 0x40 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
      if ((puVar11[(longlong)(iVar13 * 2 + -1) + 2] & 0x1fffffff) >> 0x1c == 0) {
        local_140 = *(longlong *)*pauVar10;
        lStack_138 = *(longlong *)(*pauVar10 + 8);
        local_130 = *(ulonglong *)pauVar10[1];
        lStack_128 = *(longlong *)(pauVar10[1] + 8);
        local_120 = *(ulonglong *)pauVar10[2];
        uStack_118 = *(ulonglong *)(pauVar10[2] + 8);
        local_110 = *(undefined4 *)pauVar10[3];
        uStack_10c = *(uint *)(pauVar10[3] + 4);
        uStack_108 = *(undefined4 *)(pauVar10[3] + 8);
        uStack_104 = *(uint *)(pauVar10[3] + 0xc);
      }
      else {
        uVar8 = *(ulonglong *)(pauVar10[1] + 8) >> 0xb;
        auVar22 = pauVar10[1];
        uVar6 = ~(*(ulonglong *)(pauVar10[1] + 8) & 0x7ff | uVar8 << 0xb);
        local_240 = uVar6 + 1;
        uStack_198 = auVar22._0_8_ >> 0xe;
        iVar18 = auVar22._4_4_ >> 0x1f;
        auVar20._0_8_ = CONCAT44(iVar18,iVar18);
        auVar20._8_4_ = auVar22._12_4_ >> 0x1f;
        auVar20._12_4_ = auVar20._8_4_;
        local_b0 = -(auVar20._0_8_ << 0x32 | uStack_198);
        lStack_a8 = -(auVar20._8_8_ << 0x32 | auVar22._8_8_ >> 0xe);
        local_140 = (SUB168(*pauVar10,0) >> 0xe) * -0x4000;
        lStack_138 = (SUB168(*pauVar10,8) >> 0xe) * -0x4000;
        uStack_198 = uStack_198 * -0x4000;
        local_1a0 = 0;
        uStack_1c8 = ~((longlong)(*(longlong *)pauVar10[1] << 0x35 | uVar8) >> 0x35) +
                     (ulonglong)(0xfffffffffffffffe < uVar6) & 0x7ff | uStack_198;
        local_120 = *(ulonglong *)pauVar10[2] ^ 0x8000000000000000;
        uStack_118 = *(ulonglong *)(pauVar10[2] + 8) ^ 0x8000000000000000;
        local_110 = *(undefined4 *)pauVar10[3];
        uStack_108 = *(undefined4 *)(pauVar10[3] + 8);
        uStack_10c = *(uint *)(pauVar10[3] + 4) ^ 0x80000000;
        uStack_104 = *(uint *)(pauVar10[3] + 0xc) ^ 0x80000000;
        local_1d0 = local_240;
        local_130 = uStack_1c8;
        lStack_128 = local_240;
      }
      lVar16 = (longlong)iVar13;
      uVar8 = uVar7;
      local_230 = iVar13;
      if (0 < iVar13) {
        puVar11 = puVar11 + 3;
        do {
          pauVar10 = (undefined1 (*) [16])
                     (((ulonglong)(*puVar11 & 0x1fffffff) & 0xffffffffefffffff) * 0x40 +
                     *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
          if ((*puVar11 & 0x1fffffff) >> 0x1c == 0) {
            local_100 = *(longlong *)*pauVar10;
            lStack_f8 = *(longlong *)(*pauVar10 + 8);
            local_f0 = *(ulonglong *)pauVar10[1];
            lStack_e8 = *(longlong *)(pauVar10[1] + 8);
            local_e0 = *(ulonglong *)pauVar10[2];
            uStack_d8 = *(ulonglong *)(pauVar10[2] + 8);
            local_d0 = *(ulonglong *)pauVar10[3];
            uStack_c8 = *(ulonglong *)(pauVar10[3] + 8);
          }
          else {
            uVar8 = *(ulonglong *)(pauVar10[1] + 8) >> 0xb;
            auVar22 = pauVar10[1];
            uVar7 = ~(*(ulonglong *)(pauVar10[1] + 8) & 0x7ff | uVar8 << 0xb);
            local_240 = uVar7 + 1;
            uStack_188 = auVar22._0_8_ >> 0xe;
            iVar13 = auVar22._4_4_ >> 0x1f;
            auVar21._0_8_ = CONCAT44(iVar13,iVar13);
            auVar21._8_4_ = auVar22._12_4_ >> 0x1f;
            auVar21._12_4_ = auVar21._8_4_;
            local_b0 = -(auVar21._0_8_ << 0x32 | uStack_188);
            lStack_a8 = -(auVar21._8_8_ << 0x32 | auVar22._8_8_ >> 0xe);
            local_100 = (SUB168(*pauVar10,0) >> 0xe) * -0x4000;
            lStack_f8 = (SUB168(*pauVar10,8) >> 0xe) * -0x4000;
            uStack_188 = uStack_188 * -0x4000;
            local_190 = 0;
            uStack_1b8 = ~((longlong)(*(longlong *)pauVar10[1] << 0x35 | uVar8) >> 0x35) +
                         (ulonglong)(0xfffffffffffffffe < uVar7) & 0x7ff | uStack_188;
            local_e0 = *(ulonglong *)pauVar10[2] ^ 0x8000000000000000;
            uStack_d8 = *(ulonglong *)(pauVar10[2] + 8) ^ 0x8000000000000000;
            local_d0 = *(ulonglong *)pauVar10[3] ^ 0x8000000000000000;
            uStack_c8 = *(ulonglong *)(pauVar10[3] + 8) ^ 0x8000000000000000;
            local_1c0 = local_240;
            local_f0 = uStack_1b8;
            lStack_e8 = local_240;
          }
          FUN_1437f1600(&local_180,local_70,local_50,local_c0,local_90);
          iVar13 = thunk_FUN_143dfa110(local_70,local_90);
          iVar18 = thunk_FUN_143dfa110(local_50,local_90);
          iVar3 = thunk_FUN_143dfa110(local_c0,local_90);
          lVar9 = *(longlong *)(param_1 + 0x20);
          uVar4 = *(undefined4 *)(lVar9 + 0x2c);
          auVar22._4_4_ = uVar4;
          auVar22._0_4_ = uVar4;
          auVar22._8_4_ = uVar4;
          auVar22._12_4_ = uVar4;
          auVar22 = divps(_DAT_1467f06f0,auVar22);
          puVar14 = local_238 + uVar17;
          local_a0 = (float)iVar13 * auVar22._0_4_ + *(float *)(lVar9 + 0x20);
          fStack_9c = (float)iVar18 * auVar22._4_4_ + *(float *)(lVar9 + 0x24);
          fStack_98 = (float)iVar3 * auVar22._8_4_ + *(float *)(lVar9 + 0x28);
          fStack_94 = (float)iVar3 * auVar22._12_4_ + *(float *)(lVar9 + 0x2c);
          uVar4 = FUN_143e065e0(&local_220,&local_a0);
          *puVar14 = uVar4;
          uVar17 = uVar17 + 1;
          local_140 = local_100;
          lStack_138 = lStack_f8;
          puVar11 = puVar11 + 2;
          local_130 = local_f0;
          lStack_128 = lStack_e8;
          local_120 = local_e0;
          uStack_118 = uStack_d8;
          local_110 = (undefined4)local_d0;
          uStack_10c = local_d0._4_4_;
          uStack_108 = (undefined4)uStack_c8;
          uStack_104 = uStack_c8._4_4_;
        } while ((longlong)uVar17 < lVar16);
        uVar8 = (ulonglong)local_228;
        puVar11 = local_1e8;
      }
      uVar15 = *puVar11;
      uVar12 = puVar11[1];
      lVar9 = 2;
      if (2 < lVar16) {
        do {
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_2 + 0x30) == (*(uint *)(param_2 + 0x34) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_2 + 0x28,0x10);
          }
          puVar14 = (undefined4 *)
                    ((longlong)*(int *)(param_2 + 0x30) * 0x10 + *(longlong *)(param_2 + 0x28));
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
          uVar4 = local_238[lVar9];
          uVar2 = local_238[lVar9 + -1];
          lVar9 = lVar9 + 1;
          *puVar14 = *local_238;
          puVar14[1] = uVar2;
          puVar14[2] = uVar4;
          puVar14[3] = (((uVar15 & 0x1fffffff) >> 0x17) << 0xf | uVar15 & 0x1fffffff) << 0x10 |
                       uVar12 & 0xffff;
        } while (lVar9 < lVar16);
      }
      lVar9 = *(longlong *)(param_1 + 0x28);
      lVar16 = *(longlong *)(lVar9 + 0x18);
      uVar15 = *(int *)(lVar9 + 0x20) - 4;
      do {
        iVar13 = (int)uVar8;
        if (*(int *)(lVar16 + (longlong)iVar13 * 4) < 0) {
          uVar8 = (ulonglong)(uint)(iVar13 + *(int *)(lVar16 + (longlong)iVar13 * 4 + 8));
        }
        else {
          do {
            iVar13 = (int)uVar8;
            uVar8 = (ulonglong)(iVar13 + 1);
          } while ((*(uint *)(lVar16 + (longlong)iVar13 * 4) & 0x40000000) == 0);
        }
        uVar12 = (uint)uVar8;
      } while ((uVar12 < uVar15) && (*(int *)(lVar16 + (longlong)(int)uVar12 * 4) < 0));
      uVar7 = 0;
      if (uVar12 < uVar15) {
        uVar7 = uVar8;
      }
      local_228 = (uint)uVar7;
    } while (local_228 != 0);
    local_228 = 0;
    uVar17 = local_220;
    uVar15 = local_214;
    uVar4 = local_218;
  }
  local_220 = *(ulonglong *)(param_2 + 0x18);
  local_218 = *(undefined4 *)(param_2 + 0x20);
  local_214 = *(uint *)(param_2 + 0x24);
  *(uint *)(param_2 + 0x24) = uVar15;
  *(ulonglong *)(param_2 + 0x18) = uVar17;
  *(undefined4 *)(param_2 + 0x20) = uVar4;
  uVar5 = FUN_143703a50();
  local_230 = 0;
  if (-1 < (int)local_22c) {
    FUN_143702e10(uVar5,local_238,4,local_22c & 0x3fffffff);
  }
  local_238 = (undefined4 *)0x0;
  local_22c = 0x80000000;
  uVar5 = FUN_143703a50();
  local_1f8 = 0;
  if (-1 < (int)local_1f4) {
    FUN_143702e10(uVar5,local_200,8,local_1f4 & 0x3fffffff);
  }
  local_200 = 0;
  local_1f4 = 0x80000000;
  uVar5 = FUN_143703a50();
  FUN_143700a90(&local_210,uVar5);
  AK::MemoryMgr::StartProfileThreadUsage((int)&local_240 + 0x30);
  uVar5 = FUN_143703a50();
  local_218 = 0;
  if (-1 < (int)local_214) {
    FUN_143702e10(uVar5,local_220,0x10,local_214 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437f07b0 FUN_1437f07b0 body=32 status=ok
// SIG undefined FUN_1437f07b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437f07b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  _DAT_14680c6b8 = &DAT_1467e53b0;
  param_2[1] = &DAT_14680c6b0;
  return param_2;
}



// FUNCTION 1437f07d0 FUN_1437f07d0 body=1833 status=ok
// SIG undefined FUN_1437f07d0(void)

void FUN_1437f07d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  uint *puVar15;
  longlong local_120;
  longlong lStack_118;
  ulonglong local_110;
  longlong lStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  ulonglong local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  ulonglong local_90;
  longlong lStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))();
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
      *puVar5 = hkcdPlanarGeometry::VertexStorage::vftable;
    }
    if (puVar5 != *(undefined8 **)(param_1 + 0x30)) {
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(param_1 + 0x30) = puVar5;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  FUN_143703a50();
  *(undefined4 *)(lVar2 + 0x20) = 0;
  if (0 < param_2) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = FUN_143703a50();
    uVar8 = *(uint *)(lVar2 + 0x24) & 0x3fffffff;
    if ((int)uVar8 < param_2) {
      iVar11 = uVar8 * 2;
      if (param_2 < iVar11) {
        param_2 = iVar11;
      }
      FUN_14370c310(uVar6,lVar2 + 0x18,param_2,0x20);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar8 = 0;
  lVar14 = *(longlong *)(lVar2 + 0x18);
  uVar12 = *(int *)(lVar2 + 0x20) - 4;
  do {
    if (*(int *)(lVar14 + (longlong)(int)uVar8 * 4) < 0) {
      uVar8 = uVar8 + *(int *)(lVar14 + (longlong)(int)uVar8 * 4 + 8);
    }
    else {
      do {
        lVar7 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
      } while ((*(uint *)(lVar14 + lVar7 * 4) & 0x40000000) == 0);
    }
  } while ((uVar8 < uVar12) && (*(int *)(lVar14 + (longlong)(int)uVar8 * 4) < 0));
  uVar10 = 0;
  if (uVar8 < uVar12) {
    uVar10 = uVar8;
  }
  while (uVar8 = uVar10, uVar8 != 0) {
    lVar14 = *(longlong *)(lVar2 + 0x18);
    iVar11 = 0;
    lVar2 = lVar14 + (longlong)(int)uVar8 * 4;
    puVar15 = (uint *)(lVar14 + (longlong)(int)(uVar8 + 2) * 4);
    uVar12 = *(uint *)(lVar14 + (longlong)(int)(uVar8 + 2) * 4);
    while ((uVar12 & 0x20000000) == 0) {
      iVar11 = iVar11 + 2;
      puVar15 = puVar15 + 2;
      uVar12 = *puVar15;
    }
    iVar11 = iVar11 >> 1;
    uVar12 = *(uint *)(lVar2 + 8) & 0x1fffffff;
    pauVar13 = (undefined1 (*) [16])
               (((ulonglong)uVar12 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar1 + 0x30));
    if (uVar12 >> 0x1c == 0) {
      local_120 = *(longlong *)*pauVar13;
      lStack_118 = *(longlong *)(*pauVar13 + 8);
      local_110 = *(ulonglong *)pauVar13[1];
      lStack_108 = *(longlong *)(pauVar13[1] + 8);
      local_100 = *(ulonglong *)pauVar13[2];
      uStack_f8 = *(ulonglong *)(pauVar13[2] + 8);
      local_f0 = *(ulonglong *)pauVar13[3];
      uStack_e8 = *(ulonglong *)(pauVar13[3] + 8);
    }
    else {
      uVar3 = *(ulonglong *)(pauVar13[1] + 8) >> 0xb;
      uVar9 = ~(*(ulonglong *)(pauVar13[1] + 8) & 0x7ff | uVar3 << 0xb);
      lStack_108 = uVar9 + 1;
      local_120 = (SUB168(*pauVar13,0) >> 0xe) * -0x4000;
      lStack_118 = (SUB168(*pauVar13,8) >> 0xe) * -0x4000;
      local_110 = ~((longlong)(*(longlong *)pauVar13[1] << 0x35 | uVar3) >> 0x35) +
                  (ulonglong)(0xfffffffffffffffe < uVar9) & 0x7ff |
                  (*(ulonglong *)pauVar13[1] >> 0xe) * -0x4000;
      local_100 = *(ulonglong *)pauVar13[2] ^ 0x8000000000000000;
      uStack_f8 = *(ulonglong *)(pauVar13[2] + 8) ^ 0x8000000000000000;
      local_f0 = *(ulonglong *)pauVar13[3] ^ 0x8000000000000000;
      uStack_e8 = *(ulonglong *)(pauVar13[3] + 8) ^ 0x8000000000000000;
    }
    lVar14 = (longlong)iVar11;
    if (0 < iVar11) {
      puVar15 = (uint *)(lVar2 + 0x10);
      uVar12 = *(uint *)(lVar2 + 8 + (longlong)(iVar11 * 2 + -1) * 4) & 0x1fffffff;
      do {
        uVar10 = puVar15[-1] & 0x1fffffff;
        pauVar13 = (undefined1 (*) [16])
                   (((ulonglong)uVar12 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar1 + 0x30));
        if (uVar12 >> 0x1c == 0) {
          local_e0 = *(longlong *)*pauVar13;
          lStack_d8 = *(longlong *)(*pauVar13 + 8);
          local_d0 = *(ulonglong *)pauVar13[1];
          lStack_c8 = *(longlong *)(pauVar13[1] + 8);
          local_c0 = *(ulonglong *)pauVar13[2];
          uStack_b8 = *(ulonglong *)(pauVar13[2] + 8);
          local_b0 = *(ulonglong *)pauVar13[3];
          uStack_a8 = *(ulonglong *)(pauVar13[3] + 8);
        }
        else {
          uVar3 = *(ulonglong *)(pauVar13[1] + 8) >> 0xb;
          uVar9 = ~(*(ulonglong *)(pauVar13[1] + 8) & 0x7ff | uVar3 << 0xb);
          lStack_c8 = uVar9 + 1;
          local_e0 = (SUB168(*pauVar13,0) >> 0xe) * -0x4000;
          lStack_d8 = (SUB168(*pauVar13,8) >> 0xe) * -0x4000;
          local_d0 = ~((longlong)(*(longlong *)pauVar13[1] << 0x35 | uVar3) >> 0x35) +
                     (ulonglong)(0xfffffffffffffffe < uVar9) & 0x7ff |
                     (*(ulonglong *)pauVar13[1] >> 0xe) * -0x4000;
          local_c0 = *(ulonglong *)pauVar13[2] ^ 0x8000000000000000;
          uStack_b8 = *(ulonglong *)(pauVar13[2] + 8) ^ 0x8000000000000000;
          local_b0 = *(ulonglong *)pauVar13[3] ^ 0x8000000000000000;
          uStack_a8 = *(ulonglong *)(pauVar13[3] + 8) ^ 0x8000000000000000;
        }
        pauVar13 = (undefined1 (*) [16])
                   (((ulonglong)uVar10 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar1 + 0x30));
        if (uVar10 >> 0x1c == 0) {
          local_a0 = *(longlong *)*pauVar13;
          lStack_98 = *(longlong *)(*pauVar13 + 8);
          local_90 = *(ulonglong *)pauVar13[1];
          lStack_88 = *(longlong *)(pauVar13[1] + 8);
          local_80 = *(ulonglong *)pauVar13[2];
          uStack_78 = *(ulonglong *)(pauVar13[2] + 8);
          local_70 = *(ulonglong *)pauVar13[3];
          uStack_68 = *(ulonglong *)(pauVar13[3] + 8);
        }
        else {
          uVar3 = *(ulonglong *)(pauVar13[1] + 8) >> 0xb;
          uVar9 = ~(*(ulonglong *)(pauVar13[1] + 8) & 0x7ff | uVar3 << 0xb);
          lStack_88 = uVar9 + 1;
          local_a0 = (SUB168(*pauVar13,0) >> 0xe) * -0x4000;
          lStack_98 = (SUB168(*pauVar13,8) >> 0xe) * -0x4000;
          local_90 = ~((longlong)(*(longlong *)pauVar13[1] << 0x35 | uVar3) >> 0x35) +
                     (ulonglong)(0xfffffffffffffffe < uVar9) & 0x7ff |
                     (*(ulonglong *)pauVar13[1] >> 0xe) * -0x4000;
          local_80 = *(ulonglong *)pauVar13[2] ^ 0x8000000000000000;
          uStack_78 = *(ulonglong *)(pauVar13[2] + 8) ^ 0x8000000000000000;
          local_70 = *(ulonglong *)pauVar13[3] ^ 0x8000000000000000;
          uStack_68 = *(ulonglong *)(pauVar13[3] + 8) ^ 0x8000000000000000;
        }
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar6 = FUN_143703a50();
        if (*(uint *)(lVar2 + 0x20) == (*(uint *)(lVar2 + 0x24) & 0x3fffffff)) {
          FUN_14370c460(uVar6,lVar2 + 0x18,0x20);
        }
        iVar11 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar11 + 1;
        FUN_1437ee730(&local_120,(longlong)iVar11 * 0x20 + *(longlong *)(lVar2 + 0x18));
        *puVar15 = *puVar15 ^
                   (*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) - 1U ^ *puVar15) & 0x1fffffff;
        puVar15 = puVar15 + 2;
        lVar14 = lVar14 + -1;
        uVar12 = uVar10;
      } while (lVar14 != 0);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar14 = *(longlong *)(lVar2 + 0x18);
    uVar12 = *(int *)(lVar2 + 0x20) - 4;
    do {
      if (*(int *)(lVar14 + (longlong)(int)uVar8 * 4) < 0) {
        uVar8 = uVar8 + *(int *)(lVar14 + (longlong)(int)uVar8 * 4 + 8);
      }
      else {
        do {
          lVar7 = (longlong)(int)uVar8;
          uVar8 = uVar8 + 1;
        } while ((*(uint *)(lVar14 + lVar7 * 4) & 0x40000000) == 0);
      }
    } while ((uVar8 < uVar12) && (*(int *)(lVar14 + (longlong)(int)uVar8 * 4) < 0));
    uVar10 = 0;
    if (uVar8 < uVar12) {
      uVar10 = uVar8;
    }
  }
  return;
}



// FUNCTION 1437f0f00 FUN_1437f0f00 body=405 status=ok
// SIG undefined FUN_1437f0f00(void)

undefined8 * FUN_1437f0f00(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarSolid::NodeStorage::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  iVar2 = *(int *)(param_2 + 0x20);
  lVar9 = (longlong)iVar2;
  lVar7 = *(longlong *)(param_2 + 0x18);
  uVar5 = FUN_143703a50();
  iVar8 = *(int *)(param_1 + 4) + iVar2;
  uVar4 = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
  if (((int)uVar4 < iVar8) && ((int)uVar4 < iVar8)) {
    iVar3 = iVar8;
    if (iVar8 < (int)(uVar4 * 2)) {
      iVar3 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1 + 3,iVar3,0x28);
  }
  puVar6 = (undefined8 *)(param_1[3] + (longlong)*(int *)(param_1 + 4) * 0x28);
  if (0 < iVar2) {
    lVar7 = lVar7 - (longlong)puVar6;
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar5 = ((undefined8 *)(lVar7 + (longlong)puVar6))[1];
        *puVar6 = *(undefined8 *)(lVar7 + (longlong)puVar6);
        puVar6[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)puVar6);
        uVar5 = puVar1[1];
        puVar6[2] = *puVar1;
        puVar6[3] = uVar5;
        puVar6[4] = *(undefined8 *)(lVar7 + 0x20 + (longlong)puVar6);
      }
      puVar6 = puVar6 + 5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 4) = iVar8;
  iVar2 = *(int *)(param_2 + 0x30);
  lVar9 = (longlong)iVar2;
  lVar7 = *(longlong *)(param_2 + 0x28);
  uVar5 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 6) + iVar2;
  if (((int)uVar4 < iVar8) && ((int)uVar4 < iVar8)) {
    iVar3 = iVar8;
    if (iVar8 < (int)(uVar4 * 2)) {
      iVar3 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1 + 5,iVar3,0x20);
  }
  puVar6 = (undefined8 *)((longlong)*(int *)(param_1 + 6) * 0x20 + param_1[5]);
  if (0 < iVar2) {
    lVar7 = lVar7 - (longlong)puVar6;
    do {
      if (puVar6 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar7 + (longlong)puVar6);
        uVar5 = puVar1[1];
        *puVar6 = *puVar1;
        puVar6[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)puVar6);
        uVar5 = puVar1[1];
        puVar6[2] = *puVar1;
        puVar6[3] = uVar5;
      }
      puVar6 = puVar6 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 6) = iVar8;
  return param_1;
}



// FUNCTION 1437f10a0 FUN_1437f10a0 body=200 status=ok
// SIG undefined FUN_1437f10a0(void)

undefined8 * FUN_1437f10a0(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarEntity::vftable;
  lVar2 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    FUN_14370c030();
  }
  *param_1 = hkcdPlanarSolid::vftable;
  param_1[4] = 0;
  lVar2 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    FUN_14370c030();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  if (lVar2 != 0) {
    lVar3 = FUN_1437f0f00(lVar2,*(undefined8 *)(param_2 + 0x20));
  }
  if (lVar3 != param_1[4]) {
    if (param_1[4] != 0) {
      FUN_14370c150();
    }
    param_1[4] = lVar3;
  }
  return param_1;
}



// FUNCTION 1437f1170 FUN_1437f1170 body=264 status=ok
// SIG undefined FUN_1437f1170(void)

undefined8 * FUN_1437f1170(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkcdPlanarEntity::vftable;
  param_1[3] = param_4;
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  *param_1 = hkcdPlanarSolid::vftable;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *puVar2 = hkcdPlanarSolid::NodeStorage::vftable;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff80000000;
    puVar3 = puVar2;
  }
  if (puVar3 != (undefined8 *)param_1[4]) {
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    param_1[4] = puVar3;
  }
  return param_1;
}



// FUNCTION 1437f1280 FUN_1437f1280 body=96 status=ok
// SIG undefined FUN_1437f1280(void)

void FUN_1437f1280(undefined8 *param_1)

{
  *param_1 = hkcdPlanarSolid::vftable;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  param_1[5] = 0;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437f12e0 FUN_1437f12e0 body=193 status=ok
// SIG undefined FUN_1437f12e0(void)

void FUN_1437f12e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  lVar2 = param_1[3];
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = (int)lVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar5,*param_1,4,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1437f13b0 FUN_1437f13b0 body=140 status=ok
// SIG undefined FUN_1437f13b0(void)

void FUN_1437f13b0(undefined8 *param_1)

{
  *param_1 = hkcdPlanarCsgOperand::vftable;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  param_1[5] = 0;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437f1440 FUN_1437f1440 body=37 status=ok
// SIG undefined FUN_1437f1440(void)

void FUN_1437f1440(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1437f14b0 FUN_1437f14b0 body=390 status=ok
// SIG undefined FUN_1437f14b0(void)

void FUN_1437f14b0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar9 = (int)param_1[2];
  iVar6 = param_3 + 0x1f >> 5;
  *(int *)(param_1 + 2) = param_3;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar6) {
    iVar2 = uVar4 * 2;
    iVar11 = iVar6;
    if (iVar6 < iVar2) {
      iVar11 = iVar2;
    }
    FUN_14370c310(uVar3,param_1,iVar11,4);
  }
  *(int *)(param_1 + 1) = iVar6;
  if ((iVar9 < param_3) && (0 < param_3 - iVar9)) {
    lVar1 = *param_1;
    iVar6 = (param_3 - iVar9) + iVar9;
    iVar11 = iVar9 >> 5;
    uVar12 = -1 << ((byte)iVar9 & 0x1f);
    iVar9 = iVar6 >> 5;
    uVar4 = -1 << ((byte)iVar6 & 0x1f);
    uVar10 = -param_4;
    uVar7 = ~uVar4;
    if (iVar11 == iVar9) {
      uVar7 = uVar7 & uVar12;
      if (uVar7 != 0) {
        puVar8 = (uint *)(lVar1 + (longlong)iVar11 * 4);
        *puVar8 = ~uVar7 & *puVar8 | uVar10 & uVar7;
      }
    }
    else {
      puVar8 = (uint *)(lVar1 + (longlong)iVar11 * 4);
      *puVar8 = ~uVar12 & *puVar8 | uVar10 & uVar12;
      if (uVar7 != 0) {
        puVar8 = (uint *)(lVar1 + (longlong)iVar9 * 4);
        *puVar8 = uVar4 & *puVar8 | uVar10 & uVar7;
      }
      if (-1 < (iVar9 - iVar11) + -2) {
        puVar8 = (uint *)(lVar1 + (longlong)(iVar11 + 1) * 4);
        for (uVar5 = (ulonglong)((iVar9 - iVar11) - 1); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = uVar10;
          puVar8 = puVar8 + 1;
        }
      }
    }
  }
  if (param_3 == 0) {
    return;
  }
  iVar9 = (int)param_1[2] + -1 >> 5;
  iVar6 = (int)param_1[2] + iVar9 * -0x20;
  puVar8 = (uint *)(*param_1 + (longlong)iVar9 * 4);
  if (iVar6 < 0x20) {
    uVar4 = -1 << ((byte)iVar6 & 0x1f);
    if (param_4 == 0) {
      *puVar8 = *puVar8 & ~uVar4;
      return;
    }
    *puVar8 = *puVar8 | uVar4;
  }
  return;
}



// FUNCTION 1437f1600 FUN_1437f1600 body=1480 status=ok
// SIG undefined FUN_1437f1600(void)

void FUN_1437f1600(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  int iVar11;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  longlong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_f8 [32];
  undefined1 local_d8 [160];
  undefined1 auVar12 [16];
  
  auVar1 = *param_1;
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar12._0_8_ = CONCAT44(iVar11,iVar11);
  auVar12._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar12._12_4_ = auVar12._8_4_;
  local_198 = auVar12._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uStack_190 = auVar12._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  auVar1 = param_1[1];
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar2._0_8_ = CONCAT44(iVar11,iVar11);
  auVar2._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar2._12_4_ = auVar2._8_4_;
  local_188 = auVar2._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uStack_180 = auVar2._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  auVar1 = param_1[4];
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar6._0_8_ = CONCAT44(iVar11,iVar11);
  auVar6._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar6._12_4_ = auVar6._8_4_;
  uVar5 = auVar6._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uVar7 = auVar6._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  iVar11 = SUB164(param_1[5],4) >> 0x1f;
  uVar4 = CONCAT44(iVar11,iVar11) << 0x32 | SUB168(param_1[5],0) >> 0xe;
  auVar1 = param_1[8];
  iVar11 = auVar1._4_4_ >> 0x1f;
  auVar9._0_8_ = CONCAT44(iVar11,iVar11);
  auVar9._8_4_ = auVar1._12_4_ >> 0x1f;
  auVar9._12_4_ = auVar9._8_4_;
  uVar8 = auVar9._0_8_ << 0x32 | auVar1._0_8_ >> 0xe;
  uVar10 = auVar9._8_8_ << 0x32 | auVar1._8_8_ >> 0xe;
  iVar11 = SUB164(param_1[9],4) >> 0x1f;
  uVar3 = CONCAT44(iVar11,iVar11) << 0x32 | SUB168(param_1[9],0) >> 0xe;
  local_138 = uVar4 * uStack_190 - uVar7 * local_188;
  local_130 = (SUB168(SEXT816((longlong)uVar4) * SEXT816((longlong)uStack_190),8) -
              SUB168(SEXT816((longlong)uVar7) * SEXT816((longlong)local_188),8)) -
              (ulonglong)(uVar4 * uStack_190 < uVar7 * local_188);
  local_128 = uVar5 * local_188 - uVar4 * local_198;
  local_120 = (SUB168(SEXT816((longlong)uVar5) * SEXT816((longlong)local_188),8) -
              SUB168(SEXT816((longlong)uVar4) * SEXT816((longlong)local_198),8)) -
              (ulonglong)(uVar5 * local_188 < uVar4 * local_198);
  local_118 = uVar7 * local_198 - uVar5 * uStack_190;
  local_110 = (SUB168(SEXT816((longlong)uVar7) * SEXT816((longlong)local_198),8) -
              SUB168(SEXT816((longlong)uVar5) * SEXT816((longlong)uStack_190),8)) -
              (ulonglong)(uVar7 * local_198 < uVar5 * uStack_190);
  local_1d8 = uVar3 * uVar7 - uVar10 * uVar4;
  local_1d0 = (SUB168(SEXT816((longlong)uVar3) * SEXT816((longlong)uVar7),8) -
              SUB168(SEXT816((longlong)uVar10) * SEXT816((longlong)uVar4),8)) -
              (ulonglong)(uVar3 * uVar7 < uVar10 * uVar4);
  local_1c8 = uVar8 * uVar4 - uVar3 * uVar5;
  local_1c0 = (SUB168(SEXT816((longlong)uVar8) * SEXT816((longlong)uVar4),8) -
              SUB168(SEXT816((longlong)uVar3) * SEXT816((longlong)uVar5),8)) -
              (ulonglong)(uVar8 * uVar4 < uVar3 * uVar5);
  local_1b8 = uVar10 * uVar5 - uVar8 * uVar7;
  local_1b0 = (SUB168(SEXT816((longlong)uVar10) * SEXT816((longlong)uVar5),8) -
              SUB168(SEXT816((longlong)uVar8) * SEXT816((longlong)uVar7),8)) -
              (ulonglong)(uVar10 * uVar5 < uVar8 * uVar7);
  local_178 = local_188 * uVar10 - uStack_190 * uVar3;
  local_170 = (SUB168(SEXT816((longlong)local_188) * SEXT816((longlong)uVar10),8) -
              SUB168(SEXT816((longlong)uStack_190) * SEXT816((longlong)uVar3),8)) -
              (ulonglong)(local_188 * uVar10 < uStack_190 * uVar3);
  local_168 = local_198 * uVar3 - local_188 * uVar8;
  local_160 = (SUB168(SEXT816((longlong)local_198) * SEXT816((longlong)uVar3),8) -
              SUB168(SEXT816((longlong)local_188) * SEXT816((longlong)uVar8),8)) -
              (ulonglong)(local_198 * uVar3 < local_188 * uVar8);
  local_158 = uStack_190 * uVar8 - local_198 * uVar10;
  local_150 = (SUB168(SEXT816((longlong)uStack_190) * SEXT816((longlong)uVar8),8) -
              SUB168(SEXT816((longlong)local_198) * SEXT816((longlong)uVar10),8)) -
              (ulonglong)(uStack_190 * uVar8 < local_198 * uVar10);
  uVar3 = *(ulonglong *)(param_1[1] + 8) >> 0xb;
  local_208 = *(ulonglong *)(param_1[1] + 8) & 0x7ff | uVar3 << 0xb;
  local_200 = (longlong)(*(longlong *)param_1[1] << 0x35 | uVar3) >> 0x35;
  uVar3 = *(ulonglong *)(param_1[5] + 8) >> 0xb;
  local_1f8 = *(ulonglong *)(param_1[5] + 8) & 0x7ff | uVar3 << 0xb;
  local_1f0 = (longlong)(*(longlong *)param_1[5] << 0x35 | uVar3) >> 0x35;
  uVar3 = *(ulonglong *)(param_1[9] + 8) >> 0xb;
  local_1e8 = *(ulonglong *)(param_1[9] + 8) & 0x7ff | uVar3 << 0xb;
  local_1e0 = (longlong)(*(longlong *)param_1[9] << 0x35 | uVar3) >> 0x35;
  if (param_2 != 0) {
    FUN_143dfae70(&local_228,&local_208,&local_1d8);
    FUN_143dfa250(&local_228,&local_1f8,&local_178);
    FUN_143dfa250(&local_228,&local_1e8,&local_138);
    hkInt256::setNeg(param_2,&local_228);
  }
  if (param_3 != 0) {
    FUN_143dfae70(&local_228,&local_208,&local_1c8);
    FUN_143dfa250(&local_228,&local_1f8,&local_168);
    FUN_143dfa250(&local_228,&local_1e8,&local_128);
    hkInt256::setNeg(param_3,&local_228);
  }
  if (param_4 != 0) {
    FUN_143dfae70(&local_228,&local_208,&local_1b8);
    FUN_143dfa250(&local_228,&local_1f8,&local_158);
    FUN_143dfa250(&local_228,&local_1e8,&local_118);
    hkInt256::setNeg(param_4,&local_228);
  }
  if (param_5 != (undefined8 *)0x0) {
    FUN_143dfaf70(&local_228,&local_1d8,local_198);
    FUN_143dfaf70(local_f8,&local_1c8,uStack_190);
    FUN_143dfaf70(local_d8,&local_1b8,local_188);
    hkInt256::setAdd(&local_228,&local_228,local_f8);
    hkInt256::setAdd(&local_228,&local_228,local_d8);
    *param_5 = local_228;
    param_5[1] = uStack_220;
    param_5[2] = local_218;
    param_5[3] = uStack_210;
  }
  return;
}



// FUNCTION 1437f1bd0 func body=63 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<256,hkaiNavMeshDeprecatedGenerationUtilsSettings::OverrideSettings>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0xf0 + param_1;
    do {
      FUN_1437fae40(param_1);
      param_1 = param_1 + -0xf0;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437f1c10 FUN_1437f1c10 body=74 status=ok
// SIG undefined FUN_1437f1c10(void)

void FUN_1437f1c10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437f3400(param_1,local_res18);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f1c60 FUN_1437f1c60 body=130 status=ok
// SIG undefined FUN_1437f1c60(void)

void FUN_1437f1c60(longlong param_1,undefined8 param_2,int param_3)

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
        *(undefined ***)(puVar1 + -4) = hkaiNavMeshGeneration::Snapshot::vftable;
        *(undefined8 *)(puVar1 + 2) = 0;
        FUN_1437f3270(puVar1 + 4);
      }
      puVar1 = puVar1 + 0x50;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437f1cf0 FUN_1437f1cf0 body=94 status=ok
// SIG undefined FUN_1437f1cf0(void)

void FUN_1437f1cf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x140 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x28;
      plVar2 = plVar2 + -0x28;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437f1d50 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MergingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavVolumeGenerationSettings::MergingSettings::MergingSettings(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f1d90 FUN_1437f1d90 body=55 status=ok
// SIG undefined FUN_1437f1d90(void)

void FUN_1437f1d90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fab00(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f1dd0 FUN_1437f1dd0 body=139 status=ok
// SIG undefined FUN_1437f1dd0(void)

longlong FUN_1437f1dd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437fb1e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 1437f1e60 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiEdgeGeometry>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fb4c0(param_1);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f1ea0 GetOwningContainer body=9 status=ok
// SIG undefined GetOwningContainer(void)

void FXGameplayEffectHandle::GetOwningContainer(longlong param_1)

{
  BuildSettings::IsPromotedBuild(param_1 + 4);
  return;
}



// FUNCTION 1437f1eb0 FUN_1437f1eb0 body=238 status=ok
// SIG undefined FUN_1437f1eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f1eb0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (0 < param_3) {
    puVar6 = (undefined4 *)(param_1 + 0x20);
    lVar7 = (longlong)param_3;
    do {
      if (puVar6 + -8 != (undefined4 *)0x0) {
        puVar6[-8] = 0x3c800000;
        *puVar6 = 0x3fd9999a;
        puVar6[1] = 0x3e4ccccd;
        puVar6[2] = 0x3ecccccd;
        puVar6[3] = 0x3f333333;
        puVar6[4] = 0x3e99999a;
        puVar6[5] = 0x3e99999a;
        *(undefined2 *)(puVar6 + 6) = 0x101;
        puVar6[7] = 1;
        *(undefined1 *)(puVar6 + 8) = 1;
        *(undefined8 *)(puVar6 + 10) = 0;
        FUN_1437faa40(puVar6 + 0xc);
        *(undefined8 *)(puVar6 + 0x3c) = 0;
        *(undefined8 *)(puVar6 + 0x3e) = 0;
        uVar1 = uRam00000001467f08b8;
        *(undefined8 *)(puVar6 + -4) = _DAT_1467f08b0;
        *(undefined8 *)(puVar6 + -2) = uVar1;
        uVar5 = uRam00000001467f08dc;
        uVar4 = uRam00000001467f08d8;
        uVar3 = uRam00000001467f08d4;
        uVar2 = DAT_1467f08d0;
        puVar6[0x34] = DAT_1467f08d0;
        puVar6[0x35] = uVar3;
        puVar6[0x36] = uVar4;
        puVar6[0x37] = uVar5;
        puVar6[0x38] = uVar2 ^ 0x80000000;
        puVar6[0x39] = uVar3 ^ 0x80000000;
        puVar6[0x3a] = uVar4 ^ 0x80000000;
        puVar6[0x3b] = uVar5 ^ 0x80000000;
      }
      puVar6 = puVar6 + 0x48;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1437f1fa0 FUN_1437f1fa0 body=275 status=ok
// SIG undefined FUN_1437f1fa0(void)

void FUN_1437f1fa0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    puVar8 = (undefined4 *)(param_1 + 0x10);
    do {
      if (puVar8 + -4 != (undefined4 *)0x0) {
        puVar8[-4] = *(undefined4 *)((longlong)puVar8 + param_2 + -0x10);
        puVar1 = (undefined4 *)(param_2 + (longlong)puVar8);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar8 = *puVar1;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
        puVar8[4] = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar8);
        puVar8[5] = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar8);
        puVar8[6] = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar8);
        puVar8[7] = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar8);
        puVar8[8] = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar8);
        puVar8[9] = *(undefined4 *)(param_2 + 0x24 + (longlong)puVar8);
        *(undefined1 *)(puVar8 + 10) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x28);
        *(undefined1 *)((longlong)puVar8 + 0x29) =
             *(undefined1 *)((longlong)puVar8 + param_2 + 0x29);
        puVar8[0xb] = *(undefined4 *)((longlong)puVar8 + param_2 + 0x2c);
        *(undefined1 *)(puVar8 + 0xc) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x30);
        lVar3 = *(longlong *)((longlong)puVar8 + param_2 + 0x38);
        *(longlong *)(puVar8 + 0xe) = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
        FUN_1437f3330(puVar8 + 0x10,param_2 + 0x40 + (longlong)puVar8);
        puVar2 = (undefined8 *)((longlong)puVar8 + param_2 + 0xe0);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar8 + 0x38) = *puVar2;
        *(undefined8 *)(puVar8 + 0x3a) = uVar7;
        puVar1 = (undefined4 *)((longlong)puVar8 + param_2 + 0xf0);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar8[0x3c] = *puVar1;
        puVar8[0x3d] = uVar4;
        puVar8[0x3e] = uVar5;
        puVar8[0x3f] = uVar6;
        *(undefined8 *)(puVar8 + 0x40) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x100);
        *(undefined8 *)(puVar8 + 0x42) = *(undefined8 *)((longlong)puVar8 + param_2 + 0x108);
      }
      puVar8 = puVar8 + 0x48;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 1437f20d0 FUN_1437f20d0 body=157 status=ok
// SIG undefined FUN_1437f20d0(void)

void FUN_1437f20d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar2 = (uint *)(param_1 + 0xdc + lVar3 * 0x120);
    do {
      FUN_143716650(puVar2 + 3);
      uVar1 = FUN_143703a50();
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),0x10,*puVar2 & 0x3fffffff);
      }
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      if (*(longlong *)(puVar2 + -0x25) != 0) {
        FUN_14370c150();
      }
      puVar2 = puVar2 + -0x48;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 1437f2180 FUN_1437f2180 body=136 status=ok
// SIG undefined FUN_1437f2180(void)

longlong FUN_1437f2180(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437faf00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x220;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 1437f2210 FUN_1437f2210 body=348 status=ok
// SIG undefined FUN_1437f2210(void)

void FUN_1437f2210(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    puVar7 = (undefined4 *)(param_1 + 0x100);
    do {
      puVar7[-0x40] = *(undefined4 *)((longlong)puVar7 + param_2 + -0x100);
      puVar2 = (undefined4 *)(param_2 + -0xf0 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-0x3c] = *puVar2;
      puVar7[-0x3b] = uVar3;
      puVar7[-0x3a] = uVar4;
      puVar7[-0x39] = uVar5;
      puVar7[-0x38] = *(undefined4 *)(param_2 + -0xe0 + (longlong)puVar7);
      puVar7[-0x37] = *(undefined4 *)(param_2 + -0xdc + (longlong)puVar7);
      puVar7[-0x36] = *(undefined4 *)(param_2 + -0xd8 + (longlong)puVar7);
      puVar7[-0x35] = *(undefined4 *)(param_2 + -0xd4 + (longlong)puVar7);
      puVar7[-0x34] = *(undefined4 *)(param_2 + -0xd0 + (longlong)puVar7);
      puVar7[-0x33] = *(undefined4 *)(param_2 + -0xcc + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x32) = *(undefined1 *)(param_2 + -200 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -199) = *(undefined1 *)(param_2 + -199 + (longlong)puVar7);
      puVar7[-0x31] = *(undefined4 *)((longlong)puVar7 + param_2 + -0xc4);
      *(undefined1 *)(puVar7 + -0x30) = *(undefined1 *)((longlong)puVar7 + param_2 + -0xc0);
      if (*(longlong *)((longlong)puVar7 + param_2 + -0xb8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar7 + -0x2e) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar7 + -0x2e) = *(undefined8 *)((longlong)puVar7 + param_2 + -0xb8);
      FUN_1437f3e30(puVar7 + -0x2c,param_2 + -0xb0 + (longlong)puVar7);
      puVar1 = (undefined8 *)((longlong)puVar7 + param_2 + -0x10);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -4) = *puVar1;
      *(undefined8 *)(puVar7 + -2) = uVar6;
      puVar2 = (undefined4 *)(param_2 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *puVar7 = *puVar2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)((longlong)puVar7 + param_2 + 0x10);
      *(undefined8 *)(puVar7 + 6) = *(undefined8 *)((longlong)puVar7 + param_2 + 0x18);
      puVar7 = puVar7 + 0x48;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1437f2370 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavMeshDeprecatedGenerationUtilsSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fac90(param_1);
      }
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f23c0 func body=78 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkaiNavMeshDeprecatedGenerationUtilsSettings>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437f3460(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2410 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshDeprecatedGenerationUtilsSettings>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x220 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x44;
      plVar2 = plVar2 + -0x44;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437f2470 FUN_1437f2470 body=51 status=ok
// SIG undefined FUN_1437f2470(void)

undefined1 FUN_1437f2470(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437f49b0(param_1 + 0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437f2620(param_1 + 0x50);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437f24b0 FUN_1437f24b0 body=136 status=ok
// SIG undefined FUN_1437f24b0(void)

longlong FUN_1437f24b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437fa170();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x120;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1437f2550 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MaterialConstructionInfo>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavVolumeGenerationSettings::MaterialConstructionInfo::MaterialConstructionInfo(param_1)
        ;
      }
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2590 func body=73 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiNavMeshDeprecatedGenerationUtilsSettings>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437f3f00(param_1,param_2 + param_1);
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f25e0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<64,hkaiNavMeshDeprecatedGenerationUtilsSettings::WallClimbingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavMeshDeprecatedGenerationUtilsSettings::WallClimbingSettings::WallClimbingSettings
                  (param_1);
      }
      param_1 = param_1 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2620 FUN_1437f2620 body=9 status=ok
// SIG undefined FUN_1437f2620(void)

void FUN_1437f2620(longlong param_1)

{
  FUN_1437f29c0(param_1 + 0x58);
  return;
}



// FUNCTION 1437f2650 FUN_1437f2650 body=18 status=ok
// SIG undefined FUN_1437f2650(void)

undefined8 * FUN_1437f2650(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680cf90;
  return param_2;
}



// FUNCTION 1437f26a0 FUN_1437f26a0 body=77 status=ok
// SIG undefined FUN_1437f26a0(void)

undefined1 FUN_1437f26a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_1437f28d0(param_1 + 0x48);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437f26f0 FUN_1437f26f0 body=51 status=ok
// SIG undefined FUN_1437f26f0(void)

undefined1 FUN_1437f26f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437f2730 FUN_1437f2730 body=58 status=ok
// SIG undefined FUN_1437f2730(void)

void FUN_1437f2730(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fa020(param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2770 FUN_1437f2770 body=78 status=ok
// SIG undefined FUN_1437f2770(void)

void FUN_1437f2770(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437f3940(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f27d0 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiPathfindingUtil::FindPathInput>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x120 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x24;
      plVar2 = plVar2 + -0x24;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437f2830 FUN_1437f2830 body=73 status=ok
// SIG undefined FUN_1437f2830(void)

void FUN_1437f2830(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437f4470(param_1,param_2 + param_1);
      param_1 = param_1 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2880 FUN_1437f2880 body=77 status=ok
// SIG undefined FUN_1437f2880(void)

undefined1 FUN_1437f2880(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x28);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x38);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x50);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x60);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437f28d0 FUN_1437f28d0 body=9 status=ok
// SIG undefined FUN_1437f28d0(void)

void FUN_1437f28d0(longlong param_1)

{
  BuildSettings::IsPromotedBuild(param_1 + 8);
  return;
}



// FUNCTION 1437f28e0 FUN_1437f28e0 body=55 status=ok
// SIG undefined FUN_1437f28e0(void)

void FUN_1437f28e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fa9e0(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2920 FUN_1437f2920 body=58 status=ok
// SIG undefined FUN_1437f2920(void)

void FUN_1437f2920(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437faa40(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2960 FUN_1437f2960 body=75 status=ok
// SIG undefined FUN_1437f2960(void)

void FUN_1437f2960(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437fa9b0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f29c0 FUN_1437f29c0 body=47 status=ok
// SIG undefined FUN_1437f29c0(void)

undefined1 FUN_1437f29c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437f49e0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437f29f0 FUN_1437f29f0 body=55 status=ok
// SIG undefined FUN_1437f29f0(void)

void FUN_1437f29f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fac50(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2a40 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::ChunkSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiNavVolumeGenerationSettings::ChunkSettings::ChunkSettings(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2a80 FUN_1437f2a80 body=18 status=ok
// SIG undefined FUN_1437f2a80(void)

undefined8 * FUN_1437f2a80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680d300;
  return param_2;
}



// FUNCTION 1437f2ab0 FUN_1437f2ab0 body=18 status=ok
// SIG undefined FUN_1437f2ab0(void)

undefined8 * FUN_1437f2ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680d360;
  return param_2;
}



// FUNCTION 1437f2ad0 FUN_1437f2ad0 body=174 status=ok
// SIG undefined FUN_1437f2ad0(void)

longlong FUN_1437f2ad0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437f3ce0(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
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
      sVar2 = 0x140;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1437f2b80 FUN_1437f2b80 body=18 status=ok
// SIG undefined FUN_1437f2b80(void)

undefined8 * FUN_1437f2b80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680d3d0;
  return param_2;
}



// FUNCTION 1437f2bb0 FUN_1437f2bb0 body=58 status=ok
// SIG undefined FUN_1437f2bb0(void)

void FUN_1437f2bb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437fac10(param_1);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2bf0 FUN_1437f2bf0 body=949 status=ok
// SIG undefined FUN_1437f2bf0(void)

void FUN_1437f2bf0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  int local_res20 [2];
  int local_58 [2];
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar14 = (int *)(param_1 + 0x40);
    local_38 = (longlong)param_4;
    do {
      plVar8 = (longlong *)0x0;
      piVar12 = piVar14 + -0x10;
      if (piVar12 != (int *)0x0) {
        *(undefined ***)piVar12 = hkReferencedObject::vftable;
        FUN_143718270(piVar14 + -0xe,param_2 + -0x38 + (longlong)piVar14);
        piVar14[-0xc] = 0x1ffff;
        *(undefined ***)piVar12 = hkaiNavMeshGeneration::SimpleGeometrySource::vftable;
        lVar15 = *(longlong *)((longlong)piVar14 + param_2 + -0x28);
        *(longlong *)(piVar14 + -10) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        piVar14[-8] = *(int *)((longlong)piVar14 + param_2 + -0x20);
        piVar14[-6] = 0;
        piVar14[-5] = 0;
        piVar14[-4] = 0;
        piVar14[-3] = -0x80000000;
        local_res20[0] = *(int *)((longlong)piVar14 + param_2 + -0x10);
        lVar15 = (longlong)local_res20[0];
        uVar7 = FUN_143703a50();
        iVar5 = local_res20[0];
        if (local_res20[0] != 0) {
          plVar8 = (longlong *)FUN_143702d60(uVar7,8,local_res20);
        }
        *(longlong **)(piVar14 + -6) = plVar8;
        piVar14[-4] = iVar5;
        iVar5 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar5 = local_res20[0];
        }
        piVar14[-3] = iVar5;
        if (0 < lVar15) {
          lVar16 = *(longlong *)((longlong)piVar14 + param_2 + -0x18) - (longlong)plVar8;
          do {
            if ((plVar8 != (longlong *)0x0) &&
               (lVar13 = *(longlong *)(lVar16 + (longlong)plVar8), *plVar8 = lVar13, lVar13 != 0)) {
              FUN_14370c030();
            }
            plVar8 = plVar8 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        plVar8 = (longlong *)0x0;
        piVar14[1] = -0x80000000;
        piVar14[-2] = 0;
        piVar14[-1] = 0;
        *piVar14 = 0;
        local_58[0] = *(int *)((longlong)piVar14 + param_2);
        lVar15 = (longlong)local_58[0];
        uVar7 = FUN_143703a50();
        iVar5 = local_58[0];
        if (local_58[0] != 0) {
          plVar8 = (longlong *)FUN_143702d60(uVar7,8,local_58);
        }
        *(longlong **)(piVar14 + -2) = plVar8;
        *piVar14 = iVar5;
        iVar5 = -0x80000000;
        if (local_58[0] != 0) {
          iVar5 = local_58[0];
        }
        piVar14[1] = iVar5;
        if (0 < lVar15) {
          lVar16 = *(longlong *)((longlong)piVar14 + param_2 + -8) - (longlong)plVar8;
          do {
            if ((plVar8 != (longlong *)0x0) &&
               (lVar13 = *(longlong *)(lVar16 + (longlong)plVar8), *plVar8 = lVar13, lVar13 != 0)) {
              FUN_14370c030();
            }
            plVar8 = plVar8 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        lVar15 = *(longlong *)((longlong)piVar14 + param_2 + 8);
        *(longlong *)(piVar14 + 2) = lVar15;
        if (lVar15 != 0) {
          FUN_14370c030();
        }
        puVar10 = (undefined4 *)0x0;
        piVar14[7] = -0x80000000;
        piVar14[4] = 0;
        piVar14[5] = 0;
        piVar14[6] = 0;
        iVar5 = *(int *)((longlong)piVar14 + param_2 + 0x18);
        lVar15 = (longlong)iVar5;
        local_50[0] = iVar5;
        uVar7 = FUN_143703a50();
        iVar6 = local_50[0];
        puVar9 = puVar10;
        if (local_50[0] != 0) {
          puVar9 = (undefined4 *)FUN_143702d60(uVar7,4,local_50);
        }
        *(undefined4 **)(piVar14 + 4) = puVar9;
        piVar14[6] = iVar6;
        iVar6 = -0x80000000;
        if (local_50[0] != 0) {
          iVar6 = local_50[0];
        }
        piVar14[7] = iVar6;
        if (0 < iVar5) {
          lVar16 = *(longlong *)((longlong)piVar14 + param_2 + 0x10) - (longlong)puVar9;
          do {
            *puVar9 = *(undefined4 *)(lVar16 + (longlong)puVar9);
            puVar9 = puVar9 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        piVar14[8] = 0;
        piVar14[9] = 0;
        piVar14[10] = 0;
        piVar14[0xb] = -0x80000000;
        iVar5 = *(int *)((longlong)piVar14 + param_2 + 0x28);
        lVar15 = (longlong)iVar5;
        local_48[0] = iVar5;
        uVar7 = FUN_143703a50();
        iVar6 = local_48[0];
        if (local_48[0] != 0) {
          puVar10 = (undefined4 *)FUN_143702d60(uVar7,0x10,local_48);
        }
        *(undefined4 **)(piVar14 + 8) = puVar10;
        piVar14[10] = iVar6;
        iVar6 = -0x80000000;
        if (local_48[0] != 0) {
          iVar6 = local_48[0];
        }
        piVar14[0xb] = iVar6;
        if (0 < iVar5) {
          piVar12 = puVar10 + 2;
          lVar16 = *(longlong *)((longlong)piVar14 + param_2 + 0x20) - (longlong)puVar10;
          do {
            piVar1 = piVar12 + -2;
            if (piVar1 != (int *)0x0) {
              piVar1[0] = 0;
              piVar1[1] = 0;
              *piVar12 = 0;
              piVar12[1] = -0x80000000;
              iVar5 = *(int *)(lVar16 + (longlong)piVar12);
              lVar13 = (longlong)iVar5;
              local_40[0] = iVar5;
              uVar7 = FUN_143703a50();
              iVar6 = local_40[0];
              if (local_40[0] == 0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9 = (undefined4 *)FUN_143702d60(uVar7,0x10,local_40);
              }
              *(undefined4 **)piVar1 = puVar9;
              *piVar12 = iVar6;
              iVar6 = -0x80000000;
              if (local_40[0] != 0) {
                iVar6 = local_40[0];
              }
              piVar12[1] = iVar6;
              if (0 < iVar5) {
                lVar11 = *(longlong *)(lVar16 + -8 + (longlong)piVar12) - (longlong)puVar9;
                do {
                  puVar10 = (undefined4 *)(lVar11 + (longlong)puVar9);
                  uVar2 = puVar10[1];
                  uVar3 = puVar10[2];
                  uVar4 = puVar10[3];
                  *puVar9 = *puVar10;
                  puVar9[1] = uVar2;
                  puVar9[2] = uVar3;
                  puVar9[3] = uVar4;
                  puVar9 = puVar9 + 4;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            piVar12 = piVar12 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      piVar14 = piVar14 + 0x1c;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 1437f2fc0 FUN_1437f2fc0 body=43 status=ok
// SIG undefined FUN_1437f2fc0(void)

void FUN_1437f2fc0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)param_1);
      param_1 = (undefined8 *)((longlong)param_1 + 0xc);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437f2ff0 FUN_1437f2ff0 body=178 status=ok
// SIG undefined FUN_1437f2ff0(void)

void FUN_1437f2ff0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_3;
    puVar7 = (undefined4 *)(param_1 + 8);
    do {
      if (*(longlong *)(param_2 + -8 + (longlong)puVar7) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar7 + -2) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar7 + -2) = *(undefined8 *)(param_2 + -8 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_2 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar7);
      puVar7[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_2 + 0xc + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 3) = *puVar1;
      *(undefined8 *)(puVar7 + 5) = uVar6;
      puVar1 = (undefined8 *)(param_2 + 0x1c + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 7) = *puVar1;
      *(undefined8 *)(puVar7 + 9) = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x2c + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[0xb] = *puVar2;
      puVar7[0xc] = uVar3;
      puVar7[0xd] = uVar4;
      puVar7[0xe] = uVar5;
      *(undefined8 *)(puVar7 + 0xf) = *(undefined8 *)(param_2 + 0x3c + (longlong)puVar7);
      FUN_1437f3e30(puVar7 + 0x12,param_2 + 0x48 + (longlong)puVar7);
      puVar7 = puVar7 + 0x3c;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1437f30b0 FUN_1437f30b0 body=92 status=ok
// SIG undefined FUN_1437f30b0(void)

void FUN_1437f30b0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    param_2 = param_2 - (longlong)param_1;
    do {
      if (*(longlong *)(param_2 + (longlong)param_1) != 0) {
        FUN_14370c030();
      }
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = *(longlong *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437f3110 FUN_1437f3110 body=342 status=ok
// SIG undefined FUN_1437f3110(void)

undefined4 * FUN_1437f3110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res8 [2];
  
  puVar10 = (undefined4 *)0x0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  iVar3 = param_2[6];
  lVar13 = (longlong)iVar3;
  local_res8[0] = iVar3;
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  puVar9 = puVar10;
  if (local_res8[0] != 0) {
    puVar9 = (undefined4 *)FUN_143702d60(uVar8,0x10,local_res8);
  }
  *(undefined4 **)(param_1 + 4) = puVar9;
  param_1[6] = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  param_1[7] = iVar7;
  if (0 < iVar3) {
    lVar12 = *(longlong *)(param_2 + 4) - (longlong)puVar9;
    do {
      puVar1 = (undefined4 *)(lVar12 + (longlong)puVar9);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar9 = puVar9 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  iVar3 = param_2[10];
  lVar13 = (longlong)iVar3;
  local_res8[0] = iVar3;
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar10 = (undefined4 *)FUN_143702d60(uVar8,0x20,local_res8);
  }
  *(undefined4 **)(param_1 + 8) = puVar10;
  param_1[10] = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  param_1[0xb] = iVar7;
  lVar12 = *(longlong *)(param_2 + 8);
  if (0 < iVar3) {
    puVar11 = (undefined8 *)(puVar10 + 4);
    do {
      puVar2 = (undefined8 *)((lVar12 - (longlong)puVar10) + -0x10 + (longlong)puVar11);
      uVar8 = puVar2[1];
      puVar11[-2] = *puVar2;
      puVar11[-1] = uVar8;
      puVar2 = (undefined8 *)((lVar12 - (longlong)puVar10) + (longlong)puVar11);
      uVar8 = puVar2[1];
      *puVar11 = *puVar2;
      puVar11[1] = uVar8;
      puVar11 = puVar11 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return param_1;
}



// FUNCTION 1437f3270 FUN_1437f3270 body=179 status=ok
// SIG undefined FUN_1437f3270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1437f3270(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x3c800000;
  param_1[8] = 0x3fd9999a;
  param_1[9] = 0x3e4ccccd;
  param_1[10] = 0x3ecccccd;
  param_1[0xb] = 0x3f333333;
  param_1[0xc] = 0x3e99999a;
  param_1[0xd] = 0x3e99999a;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  param_1[0xf] = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_1437faa40(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  uVar1 = uRam00000001467f08b8;
  *(undefined8 *)(param_1 + 4) = _DAT_1467f08b0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0x3c) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  param_1[0x40] = param_1[0x3c] ^ 0x80000000;
  param_1[0x41] = param_1[0x3d] ^ 0x80000000;
  param_1[0x42] = param_1[0x3e] ^ 0x80000000;
  param_1[0x43] = param_1[0x3f] ^ 0x80000000;
  return param_1;
}



// FUNCTION 1437f3330 FUN_1437f3330 body=208 status=ok
// SIG undefined FUN_1437f3330(void)

undefined4 * FUN_1437f3330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  FUN_1437fa9b0(param_1 + 0x16,param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FUN_1437165f0(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 1437f3400 FUN_1437f3400 body=91 status=ok
// SIG undefined FUN_1437f3400(void)

undefined8 * FUN_1437f3400(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySource::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  return param_1;
}



// FUNCTION 1437f3460 FUN_1437f3460 body=1247 status=ok
// SIG undefined FUN_1437f3460(void)

undefined8 * FUN_1437f3460(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshGenerationUtilsSettings::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar8;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 100) = uVar8;
  uVar4 = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  FUN_1437f3110(param_1 + 0x12,param_2 + 0x90);
  plVar10 = (longlong *)0x0;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0xc0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar4;
  *(undefined4 *)(param_1 + 0x1b) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar6;
  uVar4 = *(undefined4 *)(param_2 + 0xe4);
  uVar5 = *(undefined4 *)(param_2 + 0xe8);
  uVar6 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0x1d) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar6;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0xf8);
  lVar11 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0x1e] = plVar9;
  *(int *)(param_1 + 0x1f) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xfc) = iVar7;
  if (0 < lVar11) {
    lVar13 = *(longlong *)(param_2 + 0xf0) - (longlong)plVar9;
    do {
      if ((plVar9 != (longlong *)0x0) &&
         (lVar3 = *(longlong *)(lVar13 + (longlong)plVar9), *plVar9 = lVar3, lVar3 != 0)) {
        FUN_14370c030();
      }
      plVar9 = plVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0x108);
  lVar11 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0x20] = plVar9;
  *(int *)(param_1 + 0x21) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x10c) = iVar7;
  if (0 < lVar11) {
    lVar13 = *(longlong *)(param_2 + 0x100) - (longlong)plVar9;
    do {
      if ((plVar9 != (longlong *)0x0) &&
         (lVar3 = *(longlong *)(lVar13 + (longlong)plVar9), *plVar9 = lVar3, lVar3 != 0)) {
        FUN_14370c030();
      }
      plVar9 = plVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  iVar7 = *(int *)(param_2 + 0x128);
  lVar11 = (longlong)iVar7;
  local_res8[0] = iVar7;
  uVar8 = FUN_143703a50();
  iVar12 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0x24] = plVar9;
  *(int *)(param_1 + 0x25) = iVar12;
  iVar12 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar12 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 300) = iVar12;
  if (0 < iVar7) {
    lVar13 = *(longlong *)(param_2 + 0x120) - (longlong)plVar9;
    do {
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = *(longlong *)(lVar13 + (longlong)plVar9);
      }
      plVar9 = plVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)((longlong)param_1 + 0x141) = *(undefined1 *)(param_2 + 0x141);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  *(undefined1 *)((longlong)param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)((longlong)param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)((longlong)param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
  FUN_1437f3330(param_1 + 0x2b,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x200);
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)(param_2 + 0x201);
  FUN_1437165f0(param_1 + 0x41,param_2 + 0x208);
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  iVar7 = *(int *)(param_2 + 0x218);
  lVar11 = (longlong)iVar7;
  local_res8[0] = iVar7;
  uVar8 = FUN_143703a50();
  iVar12 = local_res8[0];
  if (local_res8[0] != 0) {
    plVar10 = (longlong *)FUN_143702d60(uVar8,0xf0,local_res8);
  }
  *(int *)(param_1 + 0x43) = iVar12;
  param_1[0x42] = plVar10;
  iVar12 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar12 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x21c) = iVar12;
  if (0 < iVar7) {
    plVar9 = plVar10 + 1;
    lVar13 = *(longlong *)(param_2 + 0x210) - (longlong)plVar10;
    do {
      if (plVar9 + -1 != (longlong *)0x0) {
        lVar3 = *(longlong *)(lVar13 + -8 + (longlong)plVar9);
        plVar9[-1] = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)plVar9 = *(undefined4 *)(lVar13 + (longlong)plVar9);
        *(undefined1 *)((longlong)plVar9 + 4) = *(undefined1 *)(lVar13 + 4 + (longlong)plVar9);
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        puVar1 = (undefined8 *)(lVar13 + 0xc + (longlong)plVar9);
        uVar8 = puVar1[1];
        *(undefined8 *)((longlong)plVar9 + 0xc) = *puVar1;
        *(undefined8 *)((longlong)plVar9 + 0x14) = uVar8;
        puVar1 = (undefined8 *)(lVar13 + 0x1c + (longlong)plVar9);
        uVar8 = puVar1[1];
        *(undefined8 *)((longlong)plVar9 + 0x1c) = *puVar1;
        *(undefined8 *)((longlong)plVar9 + 0x24) = uVar8;
        puVar2 = (undefined4 *)(lVar13 + 0x2c + (longlong)plVar9);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)((longlong)plVar9 + 0x2c) = *puVar2;
        *(undefined4 *)(plVar9 + 6) = uVar4;
        *(undefined4 *)((longlong)plVar9 + 0x34) = uVar5;
        *(undefined4 *)(plVar9 + 7) = uVar6;
        *(undefined8 *)((longlong)plVar9 + 0x3c) = *(undefined8 *)(lVar13 + 0x3c + (longlong)plVar9)
        ;
        FUN_1437f3330(plVar9 + 9,(longlong)plVar9 + lVar13 + 0x48);
      }
      plVar9 = plVar9 + 0x1e;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return param_1;
}



// FUNCTION 1437f3940 FUN_1437f3940 body=924 status=ok
// SIG undefined FUN_1437f3940(void)

undefined8 * FUN_1437f3940(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavVolumeGenerationSettings::vftable;
  plVar10 = (longlong *)0x0;
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar8;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar8;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  iVar7 = *(int *)(param_2 + 0xc0);
  lVar12 = (longlong)iVar7;
  local_res8[0] = iVar7;
  uVar8 = FUN_143703a50();
  iVar6 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,0x10,local_res8);
  }
  param_1[0x17] = plVar9;
  *(int *)(param_1 + 0x18) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc4) = iVar6;
  if (0 < iVar7) {
    lVar11 = *(longlong *)(param_2 + 0xb8) - (longlong)plVar9;
    do {
      plVar1 = (longlong *)(lVar11 + (longlong)plVar9);
      lVar2 = plVar1[1];
      *plVar9 = *plVar1;
      plVar9[1] = lVar2;
      plVar9 = plVar9 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  iVar7 = *(int *)(param_2 + 0xe0);
  lVar12 = (longlong)iVar7;
  local_res8[0] = iVar7;
  uVar8 = FUN_143703a50();
  iVar6 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,0xc,local_res8);
  }
  param_1[0x1b] = plVar9;
  *(int *)(param_1 + 0x1c) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xe4) = iVar6;
  if (0 < iVar7) {
    lVar11 = *(longlong *)(param_2 + 0xd8) - (longlong)plVar9;
    do {
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = *(longlong *)(lVar11 + (longlong)plVar9);
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar11 + 8 + (longlong)plVar9);
      }
      plVar9 = (longlong *)((longlong)plVar9 + 0xc);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0xf0);
  lVar12 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  plVar9 = plVar10;
  if (local_res8[0] != 0) {
    plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0x1d] = plVar9;
  *(int *)(param_1 + 0x1e) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xf4) = iVar7;
  if (0 < lVar12) {
    lVar11 = *(longlong *)(param_2 + 0xe8) - (longlong)plVar9;
    do {
      if ((plVar9 != (longlong *)0x0) &&
         (lVar2 = *(longlong *)(lVar11 + (longlong)plVar9), *plVar9 = lVar2, lVar2 != 0)) {
        FUN_14370c030();
      }
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  local_res8[0] = *(int *)(param_2 + 0x100);
  lVar12 = (longlong)local_res8[0];
  uVar8 = FUN_143703a50();
  iVar7 = local_res8[0];
  if (local_res8[0] != 0) {
    plVar10 = (longlong *)FUN_143702d60(uVar8,8,local_res8);
  }
  param_1[0x1f] = plVar10;
  *(int *)(param_1 + 0x20) = iVar7;
  iVar7 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar7 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x104) = iVar7;
  if (0 < lVar12) {
    lVar11 = *(longlong *)(param_2 + 0xf8) - (longlong)plVar10;
    do {
      if ((plVar10 != (longlong *)0x0) &&
         (lVar2 = *(longlong *)(lVar11 + (longlong)plVar10), *plVar10 = lVar2, lVar2 != 0)) {
        FUN_14370c030();
      }
      plVar10 = plVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x108);
  FUN_1437165f0(param_1 + 0x22,param_2 + 0x110);
  return param_1;
}



// FUNCTION 1437f3ce0 FUN_1437f3ce0 body=103 status=ok
// SIG undefined FUN_1437f3ce0(void)

void FUN_1437f3ce0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143716650(param_1 + 0x98);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),0x10,*(uint *)(param_1 + 0x8c) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1437f3d50 FUN_1437f3d50 body=221 status=ok
// SIG undefined FUN_1437f3d50(void)

undefined4 * FUN_1437f3d50(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  iVar1 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar3 = FUN_143703a50();
  if ((int)(param_1[7] & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 4,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  param_1[6] = iVar1;
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = FUN_143703a50();
  if ((int)(param_1[0xb] & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 8,iVar1,0x20);
  }
  FUN_142f87c20(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  param_1[10] = iVar1;
  return param_1;
}



// FUNCTION 1437f3e30 FUN_1437f3e30 body=208 status=ok
// SIG undefined FUN_1437f3e30(void)

undefined4 * FUN_1437f3e30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  FUN_142f8c130(param_1 + 0x16,param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FUN_143716660(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 1437f3f00 FUN_1437f3f00 body=1386 status=ok
// SIG undefined FUN_1437f3f00(void)

longlong FUN_1437f3f00(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x54) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 100) = uVar9;
  uVar5 = *(undefined4 *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x74);
  uVar7 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  FUN_1437f3d50(param_1 + 0x90,param_2 + 0x90);
  plVar14 = (longlong *)(param_1 + 0xf0);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0xd8) = uVar6;
  *(undefined4 *)(param_1 + 0xdc) = uVar7;
  uVar5 = *(undefined4 *)(param_2 + 0xe4);
  uVar6 = *(undefined4 *)(param_2 + 0xe8);
  uVar7 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0xe8) = uVar6;
  *(undefined4 *)(param_1 + 0xec) = uVar7;
  iVar2 = *(int *)(param_2 + 0xf8);
  lVar3 = *(longlong *)(param_2 + 0xf0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar9,plVar14,iVar2,8);
  }
  lVar12 = *plVar14;
  iVar8 = (*(int *)(param_1 + 0xf8) - iVar2) + -1;
  lVar11 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      if (*(longlong *)(lVar12 + (longlong)iVar2 * 8 + lVar11 * 8) != 0) {
        FUN_14370c150();
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0xf8) < iVar2) {
    iVar8 = *(int *)(param_1 + 0xf8);
  }
  FUN_1437f30b0(*plVar14,lVar3,iVar8);
  plVar14 = (longlong *)(*plVar14 + (longlong)iVar8 * 8);
  lVar12 = (longlong)(iVar2 - iVar8);
  if (0 < iVar2 - iVar8) {
    lVar11 = (longlong)iVar8 * 8 - (longlong)plVar14;
    do {
      if (plVar14 != (longlong *)0x0) {
        lVar4 = *(longlong *)(lVar3 + lVar11 + (longlong)plVar14);
        *plVar14 = lVar4;
        if (lVar4 != 0) {
          FUN_14370c030();
        }
      }
      plVar14 = plVar14 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(param_1 + 0xf8) = iVar2;
  plVar14 = (longlong *)(param_1 + 0x100);
  iVar2 = *(int *)(param_2 + 0x108);
  lVar3 = *(longlong *)(param_2 + 0x100);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar9,plVar14,iVar2,8);
  }
  lVar12 = *plVar14;
  iVar8 = (*(int *)(param_1 + 0x108) - iVar2) + -1;
  lVar11 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      if (*(longlong *)(lVar12 + (longlong)iVar2 * 8 + lVar11 * 8) != 0) {
        FUN_14370c150();
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0x108) < iVar2) {
    iVar8 = *(int *)(param_1 + 0x108);
  }
  FUN_1437f30b0(*plVar14,lVar3,iVar8);
  plVar14 = (longlong *)(*plVar14 + (longlong)iVar8 * 8);
  lVar12 = (longlong)(iVar2 - iVar8);
  if (0 < iVar2 - iVar8) {
    lVar11 = (longlong)iVar8 * 8 - (longlong)plVar14;
    do {
      if (plVar14 != (longlong *)0x0) {
        lVar4 = *(longlong *)(lVar3 + lVar11 + (longlong)plVar14);
        *plVar14 = lVar4;
        if (lVar4 != 0) {
          FUN_14370c030();
        }
      }
      plVar14 = plVar14 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(param_1 + 0x108) = iVar2;
  plVar14 = (longlong *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  iVar2 = *(int *)(param_2 + 0x128);
  lVar3 = *(longlong *)(param_2 + 0x120);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar9,plVar14,iVar2,8);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0x128) < iVar2) {
    iVar8 = *(int *)(param_1 + 0x128);
  }
  FUN_143738e40(*plVar14,lVar3,iVar8);
  puVar10 = (undefined8 *)(*plVar14 + (longlong)iVar8 * 8);
  lVar12 = (longlong)(iVar2 - iVar8);
  if (0 < iVar2 - iVar8) {
    lVar11 = (longlong)iVar8 * 8 - (longlong)puVar10;
    do {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = *(undefined8 *)(lVar11 + lVar3 + (longlong)puVar10);
      }
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(param_1 + 0x128) = iVar2;
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(param_2 + 0x141);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
  FUN_1437f3e30(param_1 + 0x158,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x201) = *(undefined1 *)(param_2 + 0x201);
  FUN_143716660(param_1 + 0x208,param_2 + 0x208);
  iVar2 = *(int *)(param_2 + 0x218);
  plVar14 = (longlong *)(param_1 + 0x210);
  lVar3 = *(longlong *)(param_2 + 0x210);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x21c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar9,plVar14,iVar2,0xf0);
  }
  iVar8 = (*(int *)(param_1 + 0x218) - iVar2) + -1;
  if (-1 < iVar8) {
    lVar12 = (longlong)iVar8 * 0xf0 + (longlong)iVar2 * 0xf0 + *plVar14;
    do {
      FUN_1437fae40(lVar12);
      lVar12 = lVar12 + -0xf0;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0x218) < iVar2) {
    iVar8 = *(int *)(param_1 + 0x218);
  }
  FUN_1437f2ff0(*plVar14,lVar3,iVar8);
  lVar12 = (longlong)(iVar2 - iVar8);
  if (0 < iVar2 - iVar8) {
    lVar11 = *plVar14 - lVar3;
    puVar13 = (undefined1 *)(lVar3 + 0xc + (longlong)iVar8 * 0xf0);
    do {
      if ((longlong *)(puVar13 + lVar11 + -0xc) != (longlong *)0x0) {
        lVar3 = *(longlong *)(puVar13 + -0xc);
        *(longlong *)(puVar13 + lVar11 + -0xc) = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(puVar13 + lVar11 + -4) = *(undefined4 *)(puVar13 + -4);
        puVar13[lVar11] = *puVar13;
        *(undefined4 *)(puVar13 + lVar11 + 4) = *(undefined4 *)(puVar13 + 4);
        uVar9 = *(undefined8 *)(puVar13 + 0x10);
        *(undefined8 *)(puVar13 + lVar11 + 8) = *(undefined8 *)(puVar13 + 8);
        *(undefined8 *)((longlong)(puVar13 + lVar11 + 8) + 8) = uVar9;
        uVar9 = *(undefined8 *)(puVar13 + 0x20);
        *(undefined8 *)(puVar13 + lVar11 + 0x18) = *(undefined8 *)(puVar13 + 0x18);
        *(undefined8 *)((longlong)(puVar13 + lVar11 + 0x18) + 8) = uVar9;
        uVar5 = *(undefined4 *)(puVar13 + 0x2c);
        uVar6 = *(undefined4 *)(puVar13 + 0x30);
        uVar7 = *(undefined4 *)(puVar13 + 0x34);
        puVar1 = (undefined4 *)(puVar13 + lVar11 + 0x28);
        *puVar1 = *(undefined4 *)(puVar13 + 0x28);
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined8 *)(puVar13 + lVar11 + 0x38) = *(undefined8 *)(puVar13 + 0x38);
        FUN_1437f3330(puVar13 + lVar11 + 0x44,puVar13 + 0x44);
      }
      puVar13 = puVar13 + 0xf0;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(param_1 + 0x218) = iVar2;
  return param_1;
}



// FUNCTION 1437f4470 FUN_1437f4470 body=967 status=ok
// SIG undefined FUN_1437f4470(void)

longlong FUN_1437f4470(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  iVar1 = *(int *)(param_2 + 0xc0);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xc4) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar7,param_1 + 0xb8,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 0xb8),uVar8,iVar1);
  *(int *)(param_1 + 0xc0) = iVar1;
  plVar12 = (longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  iVar1 = *(int *)(param_2 + 0xe0);
  lVar13 = *(longlong *)(param_2 + 0xd8);
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xe4) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar8,plVar12,iVar1,0xc);
  }
  iVar6 = iVar1;
  if (*(int *)(param_1 + 0xe0) < iVar1) {
    iVar6 = *(int *)(param_1 + 0xe0);
  }
  FUN_1437f2fc0(*plVar12,lVar13,iVar6);
  puVar9 = (undefined8 *)(*plVar12 + (longlong)iVar6 * 0xc);
  lVar10 = (longlong)(iVar1 - iVar6);
  if (0 < iVar1 - iVar6) {
    lVar13 = ((longlong)iVar6 * 0xc - (longlong)puVar9) + lVar13;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *(undefined8 *)(lVar13 + (longlong)puVar9);
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)puVar9);
      }
      puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0xe0) = iVar1;
  plVar12 = (longlong *)(param_1 + 0xe8);
  iVar1 = *(int *)(param_2 + 0xf0);
  lVar13 = *(longlong *)(param_2 + 0xe8);
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xf4) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar8,plVar12,iVar1,8);
  }
  lVar10 = *plVar12;
  iVar6 = (*(int *)(param_1 + 0xf0) - iVar1) + -1;
  lVar11 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if (*(longlong *)(lVar10 + (longlong)iVar1 * 8 + lVar11 * 8) != 0) {
        FUN_14370c150();
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar6 = iVar1;
  if (*(int *)(param_1 + 0xf0) < iVar1) {
    iVar6 = *(int *)(param_1 + 0xf0);
  }
  FUN_1437f30b0(*plVar12,lVar13,iVar6);
  plVar12 = (longlong *)(*plVar12 + (longlong)iVar6 * 8);
  lVar10 = (longlong)(iVar1 - iVar6);
  if (0 < iVar1 - iVar6) {
    lVar11 = (longlong)iVar6 * 8 - (longlong)plVar12;
    do {
      if (plVar12 != (longlong *)0x0) {
        lVar2 = *(longlong *)(lVar13 + lVar11 + (longlong)plVar12);
        *plVar12 = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      plVar12 = plVar12 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0xf0) = iVar1;
  plVar12 = (longlong *)(param_1 + 0xf8);
  iVar1 = *(int *)(param_2 + 0x100);
  lVar13 = *(longlong *)(param_2 + 0xf8);
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x104) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar8,plVar12,iVar1,8);
  }
  lVar10 = *plVar12;
  iVar6 = (*(int *)(param_1 + 0x100) - iVar1) + -1;
  lVar11 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if (*(longlong *)(lVar10 + (longlong)iVar1 * 8 + lVar11 * 8) != 0) {
        FUN_14370c150();
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar6 = iVar1;
  if (*(int *)(param_1 + 0x100) < iVar1) {
    iVar6 = *(int *)(param_1 + 0x100);
  }
  FUN_1437f30b0(*plVar12,lVar13,iVar6);
  plVar12 = (longlong *)(*plVar12 + (longlong)iVar6 * 8);
  lVar10 = (longlong)(iVar1 - iVar6);
  if (0 < iVar1 - iVar6) {
    lVar11 = (longlong)iVar6 * 8 - (longlong)plVar12;
    do {
      if (plVar12 != (longlong *)0x0) {
        lVar2 = *(longlong *)(lVar13 + lVar11 + (longlong)plVar12);
        *plVar12 = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      plVar12 = plVar12 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0x100) = iVar1;
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  FUN_143716660(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 1437f4840 FUN_1437f4840 body=18 status=ok
// SIG undefined FUN_1437f4840(void)

undefined8 * FUN_1437f4840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680c920;
  return param_2;
}



// FUNCTION 1437f4860 FUN_1437f4860 body=190 status=ok
// SIG undefined FUN_1437f4860(void)

undefined1 FUN_1437f4860(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437f49d0(param_1 + 0x38);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437f49c0(param_1 + 0x84);
    if (cVar1 != '\0') {
      cVar1 = FUN_1437f26f0(param_1 + 0x90);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0xf0);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x100);
          if (cVar1 != '\0') {
            cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x118);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0x120);
              if (cVar1 != '\0') {
                cVar1 = FUN_1437f49b0(param_1 + 0x14c);
                if (cVar1 != '\0') {
                  cVar1 = FUN_1437f2620(param_1 + 0x158);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_14370b790(param_1 + 0x210);
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
    }
  }
  return 0;
}



// FUNCTION 1437f4920 FUN_1437f4920 body=118 status=ok
// SIG undefined FUN_1437f4920(void)

undefined1 FUN_1437f4920(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437f49a0(param_1 + 0x70);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0xb8);
    if (cVar1 != '\0') {
      cVar1 = FXGameplayEffectHandle::GetOwningContainer(param_1 + 200);
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
  return 0;
}



// FUNCTION 1437f49a0 FUN_1437f49a0 body=15 status=ok
// SIG undefined FUN_1437f49a0(void)

void FUN_1437f49a0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c252b0,*param_1);
  return;
}



// FUNCTION 1437f49b0 FUN_1437f49b0 body=15 status=ok
// SIG undefined FUN_1437f49b0(void)

void FUN_1437f49b0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c25000,*param_1);
  return;
}



// FUNCTION 1437f49c0 FUN_1437f49c0 body=14 status=ok
// SIG undefined FUN_1437f49c0(void)

void FUN_1437f49c0(undefined4 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c24c58,*param_1);
  return;
}



// FUNCTION 1437f49d0 FUN_1437f49d0 body=15 status=ok
// SIG undefined FUN_1437f49d0(void)

void FUN_1437f49d0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c25160,*param_1);
  return;
}



// FUNCTION 1437f49e0 FUN_1437f49e0 body=15 status=ok
// SIG undefined FUN_1437f49e0(void)

void FUN_1437f49e0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c25678,*param_1);
  return;
}



// FUNCTION 1437f49f0 FUN_1437f49f0 body=260 status=ok
// SIG undefined FUN_1437f49f0(void)

bool FUN_1437f49f0(float *param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  fVar2 = (float)FUN_1437f74a0(param_1,fVar4);
  fVar3 = param_1[1];
  bVar1 = fVar4 * param_2 + param_3 < fVar2;
  fVar2 = (float)FUN_1437f74a0(param_1,fVar3);
  if (bVar1 != fVar3 * param_2 + param_3 < fVar2) {
    fVar2 = (param_3 - param_1[3]) / (param_1[2] - param_2);
    if (bVar1) {
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
      }
      param_1[1] = fVar3;
    }
    else {
      if (fVar4 <= fVar2) {
        fVar4 = fVar2;
      }
      *param_1 = fVar4;
    }
    bVar1 = *param_1 < param_1[1];
  }
  return bVar1;
}



// FUNCTION 1437f4b00 FUN_1437f4b00 body=174 status=ok
// SIG undefined FUN_1437f4b00(void)

void FUN_1437f4b00(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_1[1];
  iVar11 = 0;
  iVar9 = 0;
  if (lVar12 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar8 = 0;
    lVar10 = 0;
    do {
      iVar7 = FUN_1437f49f0(*param_1 + (longlong)iVar9 * 0x14,param_2,param_3);
      if (iVar7 != 0) {
        lVar3 = *param_1;
        iVar11 = iVar11 + 1;
        puVar1 = (undefined4 *)(lVar8 + lVar3);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(lVar10 + lVar3);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined4 *)(lVar10 + 0x10 + lVar3) = *(undefined4 *)(lVar8 + 0x10 + lVar3);
        lVar10 = lVar10 + 0x14;
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 1437f4bb0 FUN_1437f4bb0 body=1732 status=ok
// SIG undefined FUN_1437f4bb0(void)

void FUN_1437f4bb0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  longlong lVar19;
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
  float local_res18;
  uint local_res20;
  float *local_188;
  int local_180;
  uint local_17c;
  float local_178;
  int local_174;
  int local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  longlong local_108;
  float local_100 [2];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  
  local_174 = (int)param_1[1];
  if (local_174 == 0) {
    iVar5 = (int)param_2[1];
    lVar13 = *param_2;
    uVar9 = FUN_143703a50();
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar5) {
      FUN_14370c310(uVar9,param_1,iVar5,0x14);
    }
    FUN_1437f5280(*param_1,lVar13,iVar5);
    *(int *)(param_1 + 1) = iVar5;
    return;
  }
  local_170 = (int)param_2[1];
  if (local_170 != 0) {
    uVar12 = local_170 + local_174;
    iVar5 = uVar12 * 2;
    iVar17 = 0;
    local_res20 = 0;
    local_188 = (float *)0x0;
    local_180 = 0;
    local_17c = 0x80000000;
    uVar9 = FUN_143703a50();
    uVar10 = local_17c & 0x3fffffff;
    if ((int)uVar10 < iVar5) {
      if (iVar5 < (int)(uVar10 * 2)) {
        uVar12 = uVar10;
      }
      FUN_14370c310(uVar9,&local_188,uVar12 * 2,0x14);
    }
    iVar5 = (int)param_1[1];
    lVar19 = (longlong)iVar5;
    lVar13 = *param_1;
    uVar9 = FUN_143703a50();
    uVar12 = local_17c & 0x3fffffff;
    iVar15 = local_180 + iVar5;
    if (((int)uVar12 < iVar15) && ((int)uVar12 < iVar15)) {
      iVar4 = iVar15;
      if (iVar15 < (int)(uVar12 * 2)) {
        iVar4 = uVar12 * 2;
      }
      FUN_14370c310(uVar9,&local_188,iVar4,0x14);
    }
    if (0 < iVar5) {
      lVar13 = lVar13 - (longlong)(local_188 + (longlong)local_180 * 5);
      pfVar11 = local_188 + (longlong)local_180 * 5;
      do {
        puVar1 = (undefined8 *)(lVar13 + (longlong)pfVar11);
        uVar9 = puVar1[1];
        *(undefined8 *)pfVar11 = *puVar1;
        *(undefined8 *)(pfVar11 + 2) = uVar9;
        pfVar11[4] = *(float *)(lVar13 + -4 + (longlong)(pfVar11 + 5));
        lVar19 = lVar19 + -1;
        pfVar11 = pfVar11 + 5;
      } while (lVar19 != 0);
    }
    pfVar11 = (float *)*param_1;
    uVar14 = 0;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(int *)(param_1 + 1) = iVar15;
    *(uint *)((longlong)param_1 + 0xc) = local_17c;
    *param_1 = (longlong)local_188;
    pfVar3 = (float *)*param_2;
    lVar19 = 0;
    local_180 = 0;
    lVar13 = 0;
    fVar21 = *local_188;
    fVar23 = local_188[1];
    fVar35 = local_188[2];
    fVar37 = local_188[3];
    local_res18 = local_188[4];
    fVar18 = pfVar3[4];
    fVar20 = *pfVar3;
    fVar22 = pfVar3[1];
    fVar28 = pfVar3[2];
    fVar30 = pfVar3[3];
    local_108 = 0;
    uVar16 = uVar14;
    fVar24 = fVar20;
    fVar26 = fVar22;
    fVar31 = fVar21;
    fVar33 = fVar23;
    local_188 = pfVar11;
    local_17c = uVar2;
    local_178 = fVar18;
    local_168 = fVar21;
    fStack_164 = fVar23;
    fStack_160 = fVar35;
    fStack_15c = fVar37;
    local_158 = local_res18;
    local_150 = fVar20;
    fStack_14c = fVar22;
    fStack_148 = fVar28;
    fStack_144 = fVar30;
    local_140 = fVar18;
LAB_1437f4df1:
    do {
      uVar12 = (uint)uVar16;
      fVar27 = fVar28;
      fVar29 = fVar30;
      if (fVar20 <= fVar21) {
        fVar34 = fVar35;
        fVar36 = fVar37;
        if (fVar20 < fVar21) {
          if (fVar22 < fVar21) {
            FUN_1437f6320(&local_188,&local_150);
            iVar17 = iVar17 + 1;
            lVar19 = lVar19 + 1;
            uVar14 = uVar14 + 0x14;
            if (lVar19 == local_170) break;
            pfVar11 = (float *)(*param_2 + uVar14);
            fVar20 = *pfVar11;
            fVar22 = pfVar11[1];
            fVar28 = pfVar11[2];
            fVar30 = pfVar11[3];
            fVar18 = *(float *)(*param_2 + 0x10 + uVar14);
            fVar24 = fVar20;
            fVar26 = fVar22;
            local_178 = fVar18;
            local_150 = fVar20;
            fStack_14c = fVar22;
            fStack_148 = fVar28;
            fStack_144 = fVar30;
            local_140 = fVar18;
            goto LAB_1437f4df1;
          }
          local_e0 = fVar24;
          fStack_dc = fVar21;
          fStack_d8 = fVar28;
          fStack_d4 = fVar30;
          local_d0 = fVar18;
          FUN_1437f6320(&local_188,&local_e0);
          fVar20 = fVar21;
          fVar24 = fVar21;
          fVar26 = fStack_14c;
          fVar27 = fStack_148;
          fVar29 = fStack_144;
          local_150 = fVar21;
        }
      }
      else {
        if (fVar23 < fVar20) {
          FUN_1437f6320(&local_188,&local_168);
          uVar12 = uVar12 + 1;
          uVar16 = (ulonglong)uVar12;
          local_108 = local_108 + 1;
          lVar13 = lVar13 + 0x14;
          if (local_108 == local_174) break;
          pfVar11 = (float *)(*param_1 + lVar13);
          fVar21 = *pfVar11;
          fVar23 = pfVar11[1];
          fVar35 = pfVar11[2];
          fVar37 = pfVar11[3];
          local_res18 = *(float *)(*param_1 + 0x10 + lVar13);
          fVar31 = fVar21;
          fVar33 = fVar23;
          local_res20 = uVar12;
          local_168 = fVar21;
          fStack_164 = fVar23;
          fStack_160 = fVar35;
          fStack_15c = fVar37;
          local_158 = local_res18;
          goto LAB_1437f4df1;
        }
        local_f8 = fVar31;
        fStack_f4 = fVar20;
        fStack_f0 = fVar35;
        fStack_ec = fVar37;
        local_e8 = local_res18;
        FUN_1437f6320(&local_188,&local_f8);
        fVar21 = fVar20;
        fVar31 = fVar20;
        fVar33 = fStack_164;
        fVar34 = fStack_160;
        fVar36 = fStack_15c;
        local_168 = fVar20;
      }
      bVar6 = false;
      bVar7 = false;
      fVar32 = fVar31;
      fVar35 = fVar34;
      fVar37 = fVar36;
      fStack_134 = fVar33;
      if (fVar22 <= fVar23) {
        fVar25 = fVar24;
        fVar28 = fVar27;
        fVar30 = fVar29;
        fStack_11c = fVar26;
        if (fVar23 <= fVar22) {
          bVar6 = true;
          bVar7 = true;
        }
        else {
          bVar7 = true;
          fVar21 = fVar22;
          fVar32 = fVar22;
          fVar33 = fStack_164;
          fVar35 = fStack_160;
          fVar37 = fStack_15c;
          local_168 = fVar22;
          fStack_134 = fVar22;
        }
      }
      else {
        bVar6 = true;
        fVar20 = fVar23;
        fVar25 = fVar23;
        fVar26 = fStack_14c;
        fVar28 = fStack_148;
        fVar30 = fStack_144;
        local_150 = fVar23;
        fStack_11c = fVar23;
      }
      local_138 = fVar31;
      fStack_130 = fVar34;
      fStack_12c = fVar36;
      local_128 = local_res18;
      local_120 = fVar24;
      fStack_118 = fVar27;
      fStack_114 = fVar29;
      local_110 = fVar18;
      if (fVar34 == fVar27) {
        pfVar11 = &local_138;
        if (fVar29 <= fVar36) {
          pfVar11 = &local_120;
        }
      }
      else {
        FUN_1437f75c0(&local_138,local_100,&local_120);
        if (local_138 <= local_100[0]) {
          if (local_100[0] <= fStack_134) {
            if (fVar27 <= fVar34) {
              fStack_134 = local_100[0];
              local_120 = local_100[0];
              FUN_1437f6320(&local_188,&local_138);
              pfVar11 = &local_120;
            }
            else {
              local_138 = local_100[0];
              fStack_11c = local_100[0];
              FUN_1437f6320(&local_188,&local_120);
              pfVar11 = &local_138;
            }
          }
          else {
            pfVar11 = &local_120;
            if (fVar27 <= fVar34) {
              pfVar11 = &local_138;
            }
          }
        }
        else {
          pfVar11 = &local_138;
          if (fVar27 <= fVar34) {
            pfVar11 = &local_120;
          }
        }
      }
      FUN_1437f6320(&local_188,pfVar11);
      bVar8 = false;
      uVar16 = (ulonglong)local_res20;
      if (bVar6) {
        local_res20 = local_res20 + 1;
        uVar16 = (ulonglong)local_res20;
        local_108 = local_108 + 1;
        lVar13 = lVar13 + 0x14;
        if (local_108 == local_174) {
          bVar8 = true;
        }
        else {
          pfVar11 = (float *)(*param_1 + lVar13);
          fVar21 = *pfVar11;
          fVar23 = pfVar11[1];
          fVar35 = pfVar11[2];
          fVar37 = pfVar11[3];
          local_res18 = *(float *)(*param_1 + 0x10 + lVar13);
          fVar32 = fVar21;
          fVar33 = fVar23;
          local_168 = fVar21;
          fStack_164 = fVar23;
          fStack_160 = fVar35;
          fStack_15c = fVar37;
          local_158 = local_res18;
          bVar8 = false;
        }
      }
      uVar12 = (uint)uVar16;
      if (bVar7) {
        iVar17 = iVar17 + 1;
        lVar19 = lVar19 + 1;
        uVar14 = uVar14 + 0x14;
        if (lVar19 == local_170) break;
        pfVar11 = (float *)(*param_2 + uVar14);
        fVar20 = *pfVar11;
        fVar22 = pfVar11[1];
        fVar28 = pfVar11[2];
        fVar30 = pfVar11[3];
        local_178 = *(float *)(*param_2 + 0x10 + uVar14);
        fVar25 = fVar20;
        fVar26 = fVar22;
        local_150 = fVar20;
        fStack_14c = fVar22;
        fStack_148 = fVar28;
        fStack_144 = fVar30;
        local_140 = local_178;
      }
      fVar24 = fVar25;
      fVar31 = fVar32;
      fVar18 = local_178;
    } while (!bVar8);
    iVar5 = local_174;
    if ((int)uVar12 < local_174) {
      FUN_1437f6320(&local_188,&local_168);
      iVar15 = uVar12 + 1;
      if (iVar15 != iVar5) {
        lVar13 = (longlong)iVar15 * 0x14;
        uVar16 = (ulonglong)(uint)(iVar5 - iVar15);
        do {
          FUN_1437f6320(&local_188,*param_1 + lVar13);
          lVar13 = lVar13 + 0x14;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    iVar5 = local_170;
    if (iVar17 < local_170) {
      FUN_1437f6320(&local_188,&local_150);
      iVar17 = iVar17 + 1;
      if (iVar17 != iVar5) {
        lVar13 = (longlong)iVar17 * 0x14;
        uVar16 = (ulonglong)(uint)(iVar5 - iVar17);
        do {
          FUN_1437f6320(&local_188,*param_2 + lVar13);
          lVar13 = lVar13 + 0x14;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    pfVar11 = (float *)*param_1;
    *param_1 = (longlong)local_188;
    lVar13 = param_1[1];
    *(int *)(param_1 + 1) = local_180;
    uVar12 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)((longlong)param_1 + 0xc) = local_17c;
    local_188 = pfVar11;
    local_180 = (int)lVar13;
    local_17c = uVar12;
    uVar9 = FUN_143703a50();
    local_180 = 0;
    if (-1 < (int)local_17c) {
      FUN_143702e10(uVar9,local_188,0x14,local_17c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 1437f5280 FUN_1437f5280 body=42 status=ok
// SIG undefined FUN_1437f5280(void)

void FUN_1437f5280(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)((param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      *(undefined4 *)(puVar3 + 2) =
           *(undefined4 *)((param_2 - (longlong)param_1) + -4 + (longlong)puVar3 + 0x14);
      lVar4 = lVar4 + -1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437f52b0 FUN_1437f52b0 body=1096 status=ok
// SIG undefined FUN_1437f52b0(void)

void FUN_1437f52b0(longlong *param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float local_108;
  float local_104;
  longlong local_100;
  float local_f8;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  float local_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  
  if ((param_2 != 0.0) && ((int)param_1[1] != 0)) {
    fVar7 = (float)FUN_1437f58e0();
    fVar8 = (float)FUN_1437f5900(param_1);
    if (param_2 < fVar7 - fVar8) {
      FUN_1437f62c0(&local_60);
      FUN_1437f62c0(&local_a8);
      FUN_1437f62c0(&local_f0);
      FUN_1437f62c0(&local_d8);
      local_100 = 0;
      local_f8 = -NAN;
      local_104 = *(float *)*param_1 + param_2;
      local_108 = *(float *)*param_1 - param_2;
      FUN_1437f63f0(&local_d8,&local_108);
      lVar2 = param_1[1];
      lVar5 = 0;
      lVar6 = lVar5;
      if (0 < (longlong)(int)lVar2) {
        do {
          pfVar1 = (float *)(lVar5 + *param_1);
          if (0 < lVar6) {
            fVar7 = *(float *)(lVar5 + -0x10 + *param_1);
            if (fVar7 < *pfVar1) {
              local_108 = fVar7 - param_2;
              local_100 = 0;
              local_104 = *pfVar1 + param_2;
              local_f8 = -NAN;
              FUN_1437f5e30(&local_d8,&local_108);
            }
          }
          fVar7 = pfVar1[4];
          if (pfVar1[2] == 0.0) {
            fStack_88 = pfVar1[2];
            fStack_84 = pfVar1[3];
            pfVar4 = &local_90;
            local_90 = *pfVar1 - param_2;
            fStack_8c = pfVar1[1] + param_2;
            local_80 = fVar7;
          }
          else {
            if (0.0 <= pfVar1[2]) {
              local_c0 = *pfVar1;
              fStack_bc = pfVar1[1];
              uStack_b8 = *(undefined8 *)(pfVar1 + 2);
              local_b0 = fVar7;
              FUN_1437f7ee0(&local_c0,param_2);
              if (local_c0 != fStack_bc) {
                FUN_1437f63f0(&local_a8,&local_c0);
              }
              local_104 = *pfVar1;
            }
            else {
              local_78 = *pfVar1;
              fStack_74 = pfVar1[1];
              fStack_70 = pfVar1[2];
              fStack_6c = pfVar1[3];
              local_68 = fVar7;
              FUN_1437f7ee0(&local_78,-param_2);
              if (local_78 != fStack_74) {
                FUN_1437f63f0(&local_60,&local_78);
              }
              local_104 = pfVar1[1];
            }
            local_108 = local_104 - param_2;
            local_104 = local_104 + param_2;
            uVar9 = FUN_1437f74a0(pfVar1);
            local_f8 = pfVar1[4];
            pfVar4 = &local_108;
            local_100 = (ulonglong)uVar9 << 0x20;
          }
          FUN_1437f5e30(&local_f0,pfVar4);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x14;
        } while (lVar6 < (int)lVar2);
      }
      uStack_b8 = 0;
      local_b0 = -NAN;
      fVar7 = *(float *)(*param_1 + 4 + (longlong)((int)param_1[1] + -1) * 0x14);
      fVar8 = fVar7 + param_2;
      fVar7 = fVar7 - param_2;
      local_c0 = fVar7;
      fStack_bc = fVar8;
      if ((local_d0 == 0) || (fVar10 = (float)FUN_1437f58e0(&local_d8), fVar10 < fVar7)) {
        FUN_1437f63f0(&local_d8,&local_c0);
      }
      else {
        *(float *)(local_d8 + 4 + (longlong)(local_d0 + -1) * 0x14) = fVar8;
      }
      lVar2 = *param_1;
      lVar6 = param_1[1];
      *param_1 = local_f0;
      uVar9 = *(uint *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = local_e8;
      *(uint *)((longlong)param_1 + 0xc) = local_e4;
      local_f0 = lVar2;
      local_e8 = (int)lVar6;
      local_e4 = uVar9;
      FUN_1437f4bb0(param_1,&local_60);
      FUN_1437f4bb0(param_1,&local_a8);
      FUN_1437f66a0(param_1,&local_d8);
      uVar3 = FUN_143703a50();
      local_d0 = 0;
      if (-1 < (int)local_cc) {
        FUN_143702e10(uVar3,local_d8,0x14,local_cc & 0x3fffffff);
      }
      local_d8 = 0;
      local_cc = 0x80000000;
      uVar3 = FUN_143703a50();
      local_e8 = 0;
      if (-1 < (int)local_e4) {
        FUN_143702e10(uVar3,local_f0,0x14,local_e4 & 0x3fffffff);
      }
      local_f0 = 0;
      local_e4 = 0x80000000;
      uVar3 = FUN_143703a50();
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(uVar3,local_a8,0x14,local_9c & 0x3fffffff);
      }
      local_a8 = 0;
      local_9c = 0x80000000;
      uVar3 = FUN_143703a50();
      local_58 = 0;
      if (-1 < (int)local_54) {
        FUN_143702e10(uVar3,local_60,0x14,local_54 & 0x3fffffff);
      }
    }
    else {
      CAkSrcMediaCodecVorbis::ReleaseBuffer(param_1);
    }
  }
  return;
}



// FUNCTION 1437f5700 FUN_1437f5700 body=479 status=ok
// SIG undefined FUN_1437f5700(void)

void FUN_1437f5700(longlong *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_1[1];
  uVar5 = 0;
  uVar8 = uVar5;
  uVar10 = uVar5;
  if (3 < lVar12) {
    lVar7 = (lVar12 - 4U >> 2) + 1;
    uVar8 = lVar7 * 4;
    uVar11 = uVar5;
    do {
      lVar6 = *param_1;
      pfVar1 = (float *)(uVar11 + lVar6);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar11 + 0x10 + lVar6);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(uVar5 + lVar6) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar6))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar6) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar6 = *param_1;
      pfVar1 = (float *)(uVar11 + 0x14 + lVar6);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar11 + 0x24 + lVar6);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(uVar5 + lVar6) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar6))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar6) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar6 = *param_1;
      pfVar1 = (float *)(uVar11 + 0x28 + lVar6);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar11 + 0x38 + lVar6);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(uVar5 + lVar6) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar6))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar6) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar6 = *param_1;
      pfVar1 = (float *)(uVar11 + 0x3c + lVar6);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar11 + 0x4c + lVar6);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(uVar5 + lVar6) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar6))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar6) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      uVar11 = uVar11 + 0x50;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar9 = (int)uVar10;
  if ((longlong)uVar8 < lVar12) {
    lVar6 = (longlong)iVar9 * 0x14;
    lVar7 = uVar8 * 0x14;
    lVar12 = lVar12 - uVar8;
    do {
      lVar3 = *param_1;
      pfVar1 = (float *)(lVar7 + lVar3);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(lVar7 + 0x10 + lVar3);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(lVar6 + lVar3) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(lVar6 + lVar3))[1] = uVar4;
        *(undefined4 *)(lVar6 + 0x10 + lVar3) = uVar2;
        lVar6 = lVar6 + 0x14;
      }
      iVar9 = (int)uVar10;
      lVar7 = lVar7 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(param_1 + 1) = iVar9;
  return;
}



// FUNCTION 1437f58e0 FUN_1437f58e0 body=21 status=ok
// SIG undefined FUN_1437f58e0(void)

undefined4 FUN_1437f58e0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4 + (longlong)((int)param_1[1] + -1) * 0x14);
}



// FUNCTION 1437f5900 FUN_1437f5900 body=8 status=ok
// SIG undefined FUN_1437f5900(void)

undefined4 FUN_1437f5900(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}



// FUNCTION 1437f5910 FUN_1437f5910 body=28 status=ok
// SIG undefined FUN_1437f5910(void)

void FUN_1437f5910(undefined4 *param_1)

{
  if (0.0 < (float)param_1[2]) {
    FUN_1437f74a0(0,*param_1);
    return;
  }
  FUN_1437f74a0(0,param_1[1]);
  return;
}



// FUNCTION 1437f5930 FUN_1437f5930 body=112 status=ok
// SIG undefined FUN_1437f5930(void)

ulonglong FUN_1437f5930(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  
  lVar1 = *param_1;
  uVar3 = FUN_1437f5910(lVar1);
  fVar4 = (float)uVar3;
  if (1 < (int)param_1[1]) {
    uVar3 = (ulonglong)((int)param_1[1] - 1);
    do {
      lVar1 = lVar1 + 0x14;
      fVar2 = (float)FUN_1437f5910(lVar1);
      if (fVar2 <= fVar4) {
        fVar4 = fVar2;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    uVar3 = (ulonglong)(uint)fVar4;
  }
  return uVar3;
}



// FUNCTION 1437f59a0 FUN_1437f59a0 body=1162 status=ok
// SIG undefined FUN_1437f59a0(void)

void FUN_1437f59a0(longlong *param_1,float *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  float local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  float local_a0 [2];
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  float local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  
  iVar8 = FUN_1437f74b0(param_1,*param_2);
  if (iVar8 == (int)param_1[1]) {
    FUN_1437f6320(param_1,param_2);
    return;
  }
  lVar17 = (longlong)iVar8;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  lVar14 = lVar17 * 0x14;
  lVar16 = lVar17;
  iVar18 = iVar8;
  while( true ) {
    lVar2 = *param_1;
    fVar19 = *(float *)(lVar14 + lVar2);
    if (lVar16 == lVar17) {
      if (param_2[1] <= fVar19) {
        uVar10 = FUN_143703a50();
        if (local_f0 == (local_ec & 0x3fffffff)) {
          FUN_14370c460(uVar10,&local_f8,0x14);
        }
        fVar19 = param_2[1];
        fVar21 = param_2[2];
        fVar20 = param_2[3];
        pfVar11 = (float *)(local_f8 + (longlong)(int)local_f0 * 0x14);
        *pfVar11 = *param_2;
        pfVar11[1] = fVar19;
        pfVar11[2] = fVar21;
        pfVar11[3] = fVar20;
        *(float *)(local_f8 + 0x10 + (longlong)(int)local_f0 * 0x14) = param_2[4];
        local_f0 = local_f0 + 1;
        iVar18 = iVar8;
        goto LAB_1437f5cfb;
      }
      if (fVar19 <= *param_2) {
        uStack_e0 = *(undefined8 *)((undefined4 *)(lVar14 + lVar2) + 2);
        local_d8 = *(float *)(lVar14 + 0x10 + lVar2);
        pfVar11 = &local_e8;
        _local_e8 = CONCAT44(*param_2,*(undefined4 *)(lVar14 + lVar2));
      }
      else {
        local_80 = *param_2;
        fStack_78 = param_2[2];
        fStack_74 = param_2[3];
        local_70 = param_2[4];
        pfVar11 = &local_80;
        fStack_7c = fVar19;
      }
    }
    else {
      if (param_2[1] <= fVar19 && fVar19 != param_2[1]) {
        fStack_e4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
        _local_e8 = CONCAT44(fStack_e4,*(undefined4 *)(lVar14 + -0x10 + lVar2));
        uStack_e0 = *(undefined8 *)(param_2 + 2);
        local_d8 = param_2[4];
        FUN_1437f6320(&local_f8,&local_e8);
        goto LAB_1437f5cfb;
      }
      pfVar11 = &local_98;
      _local_98 = CONCAT44(fVar19,*(undefined4 *)(lVar14 + -0x10 + lVar2));
      uStack_90 = *(undefined8 *)(param_2 + 2);
      local_88 = param_2[4];
    }
    FUN_1437f6320(&local_f8,pfVar11);
    uStack_b0 = *(undefined8 *)(lVar14 + lVar2 + 8);
    local_a8 = *(undefined4 *)(lVar14 + 0x10 + lVar2);
    uStack_c8 = *(undefined8 *)(param_2 + 2);
    local_c0 = param_2[4];
    fVar19 = *(float *)(lVar14 + 4 + lVar2);
    fVar21 = *(float *)(lVar14 + lVar2);
    if (*(float *)(lVar14 + lVar2) <= *param_2) {
      fVar21 = *param_2;
    }
    if (param_2[1] <= fVar19) {
      fVar19 = param_2[1];
    }
    _local_d0 = CONCAT44(fVar19,fVar21);
    _local_b8 = CONCAT44(fVar19,fVar21);
    if (*(float *)(lVar14 + 8 + lVar2) == param_2[2]) {
      pfVar11 = &local_d0;
      if (param_2[3] < *(float *)(lVar14 + 0xc + lVar2)) {
        pfVar11 = &local_b8;
      }
    }
    else {
      FUN_1437f75c0(&local_b8,local_a0,&local_d0);
      fVar20 = local_a0[0];
      if (local_a0[0] <= fVar21) {
        fVar20 = fVar21;
      }
      if (fVar19 <= fVar20) {
        fVar20 = fVar19;
      }
      if ((float)uStack_c8 < (float)uStack_b0) {
        _local_d0 = CONCAT44(fVar20,local_d0);
        fVar20 = local_a0[0];
        if (local_a0[0] <= fVar21) {
          fVar20 = fVar21;
        }
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        _local_b8 = CONCAT44(fStack_b4,fVar20);
        FUN_1437f6320(&local_f8,&local_d0);
        pfVar11 = &local_b8;
      }
      else {
        _local_d0 = CONCAT44(fStack_cc,fVar20);
        fVar20 = local_a0[0];
        if (local_a0[0] <= fVar21) {
          fVar20 = fVar21;
        }
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        _local_b8 = CONCAT44(fVar20,local_b8);
        FUN_1437f6320(&local_f8,&local_b8);
        pfVar11 = &local_d0;
      }
    }
    FUN_1437f6320(&local_f8,pfVar11);
    fVar19 = *(float *)(lVar14 + 4 + lVar2);
    if (param_2[1] <= fVar19 && fVar19 != param_2[1]) {
      uStack_e0 = ((undefined8 *)(lVar14 + lVar2))[1];
      local_d8 = *(float *)(lVar14 + 0x10 + lVar2);
      fStack_e4 = (float)((ulonglong)*(undefined8 *)(lVar14 + lVar2) >> 0x20);
      fVar19 = param_2[1];
      goto LAB_1437f5ca9;
    }
    if (iVar18 == (int)param_1[1] + -1) break;
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 1;
    lVar14 = lVar14 + 0x14;
  }
  fStack_e4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  uStack_e0 = *(undefined8 *)(param_2 + 2);
  local_d8 = param_2[4];
  fVar19 = *(float *)(lVar14 + 4 + lVar2);
LAB_1437f5ca9:
  _local_e8 = CONCAT44(fStack_e4,fVar19);
  FUN_1437f6320(&local_f8,&local_e8);
  iVar18 = iVar18 + 1;
LAB_1437f5cfb:
  uVar7 = local_f0;
  lVar16 = local_f8;
  lVar14 = (longlong)(int)local_f0;
  uVar10 = FUN_143703a50();
  iVar13 = (int)param_1[1] - (iVar18 - iVar8);
  uVar9 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar15 = iVar13 + uVar7;
  if (((int)uVar9 < iVar15) && ((int)uVar9 < iVar15)) {
    iVar3 = iVar15;
    if (iVar15 < (int)(uVar9 * 2)) {
      iVar3 = uVar9 * 2;
    }
    FUN_14370c310(uVar10,param_1,iVar3,0x14);
  }
  FUN_143732890(*param_1 + (lVar14 + lVar17) * 0x14,*param_1 + ((iVar18 - iVar8) + lVar17) * 0x14,
                (longlong)(iVar13 - iVar8) * 0x14);
  puVar12 = (undefined4 *)(*param_1 + lVar17 * 0x14);
  if (0 < lVar14) {
    lVar16 = lVar16 - (longlong)puVar12;
    do {
      puVar1 = (undefined4 *)(lVar16 + (longlong)puVar12);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar12 = *puVar1;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      puVar12[4] = *(undefined4 *)(lVar16 + -4 + (longlong)(puVar12 + 5));
      lVar14 = lVar14 + -1;
      puVar12 = puVar12 + 5;
    } while (lVar14 != 0);
  }
  *(int *)(param_1 + 1) = iVar15;
  uVar10 = FUN_143703a50();
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(uVar10,local_f8,0x14,local_ec & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437f5e30 FUN_1437f5e30 body=1162 status=ok
// SIG undefined FUN_1437f5e30(void)

void FUN_1437f5e30(longlong *param_1,float *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  float local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  float local_a0 [2];
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  float local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  
  iVar8 = FUN_1437f74b0(param_1,*param_2);
  if (iVar8 == (int)param_1[1]) {
    FUN_1437f6320(param_1,param_2);
    return;
  }
  lVar17 = (longlong)iVar8;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  lVar14 = lVar17 * 0x14;
  lVar16 = lVar17;
  iVar18 = iVar8;
  while( true ) {
    lVar2 = *param_1;
    fVar19 = *(float *)(lVar14 + lVar2);
    if (lVar16 == lVar17) {
      if (param_2[1] <= fVar19) {
        uVar10 = FUN_143703a50();
        if (local_f0 == (local_ec & 0x3fffffff)) {
          FUN_14370c460(uVar10,&local_f8,0x14);
        }
        fVar19 = param_2[1];
        fVar21 = param_2[2];
        fVar20 = param_2[3];
        pfVar11 = (float *)(local_f8 + (longlong)(int)local_f0 * 0x14);
        *pfVar11 = *param_2;
        pfVar11[1] = fVar19;
        pfVar11[2] = fVar21;
        pfVar11[3] = fVar20;
        *(float *)(local_f8 + 0x10 + (longlong)(int)local_f0 * 0x14) = param_2[4];
        local_f0 = local_f0 + 1;
        iVar18 = iVar8;
        goto LAB_1437f618b;
      }
      if (fVar19 <= *param_2) {
        uStack_e0 = *(undefined8 *)((undefined4 *)(lVar14 + lVar2) + 2);
        local_d8 = *(float *)(lVar14 + 0x10 + lVar2);
        pfVar11 = &local_e8;
        _local_e8 = CONCAT44(*param_2,*(undefined4 *)(lVar14 + lVar2));
      }
      else {
        local_80 = *param_2;
        fStack_78 = param_2[2];
        fStack_74 = param_2[3];
        local_70 = param_2[4];
        pfVar11 = &local_80;
        fStack_7c = fVar19;
      }
    }
    else {
      if (param_2[1] <= fVar19 && fVar19 != param_2[1]) {
        fStack_e4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
        _local_e8 = CONCAT44(fStack_e4,*(undefined4 *)(lVar14 + -0x10 + lVar2));
        uStack_e0 = *(undefined8 *)(param_2 + 2);
        local_d8 = param_2[4];
        FUN_1437f6320(&local_f8,&local_e8);
        goto LAB_1437f618b;
      }
      pfVar11 = &local_98;
      _local_98 = CONCAT44(fVar19,*(undefined4 *)(lVar14 + -0x10 + lVar2));
      uStack_90 = *(undefined8 *)(param_2 + 2);
      local_88 = param_2[4];
    }
    FUN_1437f6320(&local_f8,pfVar11);
    uStack_b0 = *(undefined8 *)(lVar14 + lVar2 + 8);
    local_a8 = *(undefined4 *)(lVar14 + 0x10 + lVar2);
    uStack_c8 = *(undefined8 *)(param_2 + 2);
    local_c0 = param_2[4];
    fVar19 = *(float *)(lVar14 + 4 + lVar2);
    fVar21 = *(float *)(lVar14 + lVar2);
    if (*(float *)(lVar14 + lVar2) <= *param_2) {
      fVar21 = *param_2;
    }
    if (param_2[1] <= fVar19) {
      fVar19 = param_2[1];
    }
    _local_d0 = CONCAT44(fVar19,fVar21);
    _local_b8 = CONCAT44(fVar19,fVar21);
    if (*(float *)(lVar14 + 8 + lVar2) == param_2[2]) {
      pfVar11 = &local_d0;
      if (*(float *)(lVar14 + 0xc + lVar2) <= param_2[3]) {
        pfVar11 = &local_b8;
      }
    }
    else {
      FUN_1437f75c0(&local_b8,local_a0,&local_d0);
      fVar20 = local_a0[0];
      if (local_a0[0] <= fVar21) {
        fVar20 = fVar21;
      }
      if (fVar19 <= fVar20) {
        fVar20 = fVar19;
      }
      if ((float)uStack_b0 <= (float)uStack_c8) {
        _local_d0 = CONCAT44(fVar20,local_d0);
        fVar20 = local_a0[0];
        if (local_a0[0] <= fVar21) {
          fVar20 = fVar21;
        }
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        _local_b8 = CONCAT44(fStack_b4,fVar20);
        FUN_1437f6320(&local_f8,&local_d0);
        pfVar11 = &local_b8;
      }
      else {
        _local_d0 = CONCAT44(fStack_cc,fVar20);
        fVar20 = local_a0[0];
        if (local_a0[0] <= fVar21) {
          fVar20 = fVar21;
        }
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        _local_b8 = CONCAT44(fVar20,local_b8);
        FUN_1437f6320(&local_f8,&local_b8);
        pfVar11 = &local_d0;
      }
    }
    FUN_1437f6320(&local_f8,pfVar11);
    fVar19 = *(float *)(lVar14 + 4 + lVar2);
    if (param_2[1] <= fVar19 && fVar19 != param_2[1]) {
      uStack_e0 = ((undefined8 *)(lVar14 + lVar2))[1];
      local_d8 = *(float *)(lVar14 + 0x10 + lVar2);
      fStack_e4 = (float)((ulonglong)*(undefined8 *)(lVar14 + lVar2) >> 0x20);
      fVar19 = param_2[1];
      goto LAB_1437f6139;
    }
    if (iVar18 == (int)param_1[1] + -1) break;
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 1;
    lVar14 = lVar14 + 0x14;
  }
  fStack_e4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  uStack_e0 = *(undefined8 *)(param_2 + 2);
  local_d8 = param_2[4];
  fVar19 = *(float *)(lVar14 + 4 + lVar2);
LAB_1437f6139:
  _local_e8 = CONCAT44(fStack_e4,fVar19);
  FUN_1437f6320(&local_f8,&local_e8);
  iVar18 = iVar18 + 1;
LAB_1437f618b:
  uVar7 = local_f0;
  lVar16 = local_f8;
  lVar14 = (longlong)(int)local_f0;
  uVar10 = FUN_143703a50();
  iVar13 = (int)param_1[1] - (iVar18 - iVar8);
  uVar9 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar15 = iVar13 + uVar7;
  if (((int)uVar9 < iVar15) && ((int)uVar9 < iVar15)) {
    iVar3 = iVar15;
    if (iVar15 < (int)(uVar9 * 2)) {
      iVar3 = uVar9 * 2;
    }
    FUN_14370c310(uVar10,param_1,iVar3,0x14);
  }
  FUN_143732890(*param_1 + (lVar14 + lVar17) * 0x14,*param_1 + ((iVar18 - iVar8) + lVar17) * 0x14,
                (longlong)(iVar13 - iVar8) * 0x14);
  puVar12 = (undefined4 *)(*param_1 + lVar17 * 0x14);
  if (0 < lVar14) {
    lVar16 = lVar16 - (longlong)puVar12;
    do {
      puVar1 = (undefined4 *)(lVar16 + (longlong)puVar12);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar12 = *puVar1;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      puVar12[4] = *(undefined4 *)(lVar16 + -4 + (longlong)(puVar12 + 5));
      lVar14 = lVar14 + -1;
      puVar12 = puVar12 + 5;
    } while (lVar14 != 0);
  }
  *(int *)(param_1 + 1) = iVar15;
  uVar10 = FUN_143703a50();
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(uVar10,local_f8,0x14,local_ec & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437f62c0 FUN_1437f62c0 body=84 status=ok
// SIG undefined FUN_1437f62c0(void)

undefined8 * FUN_1437f62c0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = FUN_143703a50();
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if (uVar3 < 0x10) {
    uVar3 = uVar3 * 2;
    uVar1 = 0x10;
    if (0x10 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_14370c310(uVar2,param_1,uVar1,0x14);
  }
  return param_1;
}



// FUNCTION 1437f6320 FUN_1437f6320 body=204 status=ok
// SIG undefined FUN_1437f6320(void)

void FUN_1437f6320(longlong *param_1,float *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*param_2 != param_2[1]) {
    if ((int)param_1[1] == 0) {
      uVar3 = FUN_143703a50();
      bVar5 = *(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
    }
    else {
      lVar4 = (longlong)((int)param_1[1] + -1);
      lVar2 = *param_1;
      if ((((param_2[2] == *(float *)(lVar2 + 8 + lVar4 * 0x14)) &&
           (param_2[3] == *(float *)(lVar2 + 0xc + lVar4 * 0x14))) &&
          (*param_2 == *(float *)(lVar2 + 4 + lVar4 * 0x14))) &&
         (*(float *)(lVar2 + 0x10 + lVar4 * 0x14) == param_2[4])) {
        *(float *)(lVar2 + 4 + lVar4 * 0x14) = param_2[1];
        return;
      }
      uVar3 = FUN_143703a50();
      bVar5 = *(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
    }
    if (bVar5) {
      FUN_14370c460(uVar3,param_1,0x14);
    }
    lVar4 = param_1[1];
    uVar3 = *(undefined8 *)(param_2 + 2);
    lVar2 = *param_1;
    puVar1 = (undefined8 *)(lVar2 + (longlong)(int)lVar4 * 0x14);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar3;
    *(float *)(lVar2 + 0x10 + (longlong)(int)lVar4 * 0x14) = param_2[4];
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}



// FUNCTION 1437f63f0 FUN_1437f63f0 body=97 status=ok
// SIG undefined FUN_1437f63f0(void)

void FUN_1437f63f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x14);
  }
  lVar3 = param_1[1];
  uVar4 = param_2[1];
  lVar2 = *param_1;
  puVar1 = (undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  *(undefined4 *)(lVar2 + (longlong)(int)lVar3 * 0x14 + 0x10) = *(undefined4 *)(param_2 + 2);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}


