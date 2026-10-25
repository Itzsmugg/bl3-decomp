// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143765fa0 FUN_143765fa0 body=95 status=ok
// SIG undefined FUN_143765fa0(void)

void FUN_143765fa0(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  FUN_1437663a0(param_1,local_res18,param_2,param_3);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 4 + (longlong)local_res18[0] * 8) == *param_3,
                "pmap.getOrInsertKey(key, val) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x122);
  return;
}



// FUNCTION 143766010 FUN_143766010 body=59 status=ok
// SIG undefined FUN_143766010(void)

void FUN_143766010(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int local_res8 [2];
  
  FUN_143766720(param_1,local_res8,param_2,local_res8);
  *(undefined4 *)(*param_1 + 4 + (longlong)local_res8[0] * 8) = *param_3;
  return;
}



// FUNCTION 143766050 FUN_143766050 body=95 status=ok
// SIG undefined FUN_143766050(void)

void FUN_143766050(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  FUN_143766270(param_1,local_res18,param_2,param_3);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 4 + (longlong)local_res18[0] * 8) == *param_3,
                "pmap.getOrInsertKey(key, val) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x122);
  return;
}



// FUNCTION 1437660b0 FUN_1437660b0 body=97 status=ok
// SIG undefined FUN_1437660b0(void)

void FUN_1437660b0(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  FUN_1437664e0(param_1,local_res18,param_2,local_res8);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 4 + (longlong)local_res18[0] * 8) == *param_3,
                "pmap.getOrInsertKeyWithFunctor(key, []() { return 1; }) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x126);
  return;
}



// FUNCTION 143766130 FUN_143766130 body=97 status=ok
// SIG undefined FUN_143766130(void)

void FUN_143766130(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  FUN_143766850(param_1,local_res18,param_2,local_res8);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 4 + (longlong)local_res18[0] * 8) == *param_3,
                "pmap.getOrInsertKeyWithFunctor(key, []() { return 1; }) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x126);
  return;
}



// FUNCTION 1437661b0 FUN_1437661b0 body=59 status=ok
// SIG undefined FUN_1437661b0(void)

void FUN_1437661b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int local_res8 [2];
  
  FUN_143766ab0(param_1,local_res8,param_2,local_res8);
  *(undefined4 *)(*param_1 + 4 + (longlong)local_res8[0] * 8) = *param_3;
  return;
}



// FUNCTION 143766200 FUN_143766200 body=102 status=ok
// SIG undefined FUN_143766200(void)

void FUN_143766200(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    lVar1 = param_1 + 8;
    uVar2 = (ulonglong)param_3;
    do {
      FUN_143716660(lVar1 + -8,(param_2 - param_1) + -8 + lVar1);
      FUN_143716660(lVar1,(param_2 - param_1) + lVar1);
      lVar1 = lVar1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143766270 FUN_143766270 body=296 status=ok
// SIG undefined FUN_143766270(void)

uint * FUN_143766270(longlong *param_1,uint *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar9 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar8 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_143766367;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar9;
  puVar8[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar1 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar1 = *param_3;
  piVar1[1] = *param_4;
LAB_143766367:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1437663a0 FUN_1437663a0 body=318 status=ok
// SIG undefined FUN_1437663a0(void)

uint * FUN_1437663a0(longlong *param_1,uint *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_143766be0(param_3,0);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar9[1] * 8) == *param_3) {
        *param_2 = puVar9[1];
        goto LAB_1437664ad;
      }
      lVar4 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar8 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar8 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar9 = uVar6;
  puVar9[1] = uVar3;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar2 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar2 = *param_3;
  piVar2[1] = *param_4;
LAB_1437664ad:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1437664e0 FUN_1437664e0 body=275 status=ok
// SIG undefined FUN_1437664e0(void)

uint * FUN_1437664e0(longlong *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar9 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar8 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_1437665c8;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar9;
  puVar8[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar1 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar1 = *param_3;
  piVar1[1] = 1;
LAB_1437665c8:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766600 FUN_143766600 body=275 status=ok
// SIG undefined FUN_143766600(void)

uint * FUN_143766600(longlong *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar9 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar8 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_1437666e8;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar9;
  puVar8[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar1 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar1 = *param_3;
  piVar1[1] = -2;
LAB_1437666e8:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766720 FUN_143766720 body=293 status=ok
// SIG undefined FUN_143766720(void)

uint * FUN_143766720(longlong *param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_143766be0(param_3,0);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar9[1] * 8) == *param_3) {
        *param_2 = puVar9[1];
        goto LAB_14376681a;
      }
      lVar4 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar8 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar8 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar9 = uVar6;
  puVar9[1] = uVar3;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar2 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar2 = *param_3;
  piVar2[1] = 0;
LAB_14376681a:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766850 FUN_143766850 body=297 status=ok
// SIG undefined FUN_143766850(void)

uint * FUN_143766850(longlong *param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_143766be0(param_3,0);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar9[1] * 8) == *param_3) {
        *param_2 = puVar9[1];
        goto LAB_14376694e;
      }
      lVar4 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar8 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar8 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar9 = uVar6;
  puVar9[1] = uVar3;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar2 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar2 = *param_3;
  piVar2[1] = 1;
LAB_14376694e:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766980 FUN_143766980 body=297 status=ok
// SIG undefined FUN_143766980(void)

uint * FUN_143766980(longlong *param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_143766be0(param_3,0);
  puVar9 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar9[1] * 8) == *param_3) {
        *param_2 = puVar9[1];
        goto LAB_143766a7e;
      }
      lVar4 = param_1[2];
      uVar8 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar8 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar8 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar9 = uVar6;
  puVar9[1] = uVar3;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar2 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar2 = *param_3;
  piVar2[1] = -2;
LAB_143766a7e:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766ab0 FUN_143766ab0 body=275 status=ok
// SIG undefined FUN_143766ab0(void)

uint * FUN_143766ab0(longlong *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar9 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar8 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_143766b98;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar9;
  puVar8[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar1 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar1 = *param_3;
  piVar1[1] = 0;
LAB_143766b98:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143766bd0 FUN_143766bd0 body=9 status=ok
// SIG undefined FUN_143766bd0(void)

uint FUN_143766bd0(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * -0x61c8864f;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | *param_1 * -0x4f000000;
}



// FUNCTION 143766be0 FUN_143766be0 body=29 status=ok
// SIG undefined FUN_143766be0(void)

int FUN_143766be0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  return iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                 (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3 + 0xe;
}



// FUNCTION 143766c00 FUN_143766c00 body=821 status=ok
// SIG undefined FUN_143766c00(void)

void FUN_143766c00(longlong param_1,uint param_2,int param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint local_res10;
  int local_c8;
  uint local_c0 [2];
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  uint local_a0;
  longlong local_98;
  longlong local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  longlong local_58;
  int local_50;
  uint local_4c;
  undefined1 local_48 [16];
  uint local_38;
  
  local_4c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  FUN_143734b10(local_48);
  uVar4 = (ulonglong)(int)param_2;
  uVar12 = uVar4;
  local_res10 = param_2;
  do {
    uVar7 = (ulonglong)param_3;
    uVar8 = (uint)uVar4;
    lVar6 = param_1 + ((longlong)(int)(uVar8 + param_3) >> 1) * 0x28;
    local_b0 = uVar7;
    FUN_14376b530(&local_58,lVar6);
    local_38 = *(uint *)(lVar6 + 0x20);
    local_c8 = param_3;
    uVar9 = local_38;
    do {
      lVar6 = uVar12 * 5 + 4;
      puVar1 = (uint *)(param_1 + lVar6 * 8);
      uVar2 = *(uint *)(param_1 + lVar6 * 8);
      while (uVar2 < uVar9) {
        uVar8 = uVar8 + 1;
        puVar1 = puVar1 + 10;
        uVar12 = uVar12 + 1;
        uVar2 = *puVar1;
      }
      lVar6 = uVar7 * 5 + 4;
      puVar1 = (uint *)(param_1 + lVar6 * 8);
      uVar2 = *(uint *)(param_1 + lVar6 * 8);
      while (uVar9 < uVar2) {
        local_c8 = local_c8 + -1;
        puVar1 = puVar1 + -10;
        uVar7 = uVar7 - 1;
        local_b0 = uVar7;
        uVar2 = *puVar1;
      }
      if ((longlong)uVar7 < (longlong)uVar12) break;
      if (uVar7 != uVar12) {
        local_7c = 0x80000000;
        local_a8 = (longlong *)(param_1 + uVar7 * 0x28);
        lVar6 = 0;
        local_98 = param_1 + uVar12 * 0x28;
        local_88 = 0;
        local_c0[0] = *(uint *)(local_a8 + 1);
        local_b8 = CONCAT44(local_b8._4_4_,local_c0[0]);
        local_80 = 0;
        uVar5 = FUN_143703a50();
        local_a0 = local_c0[0];
        if (local_c0[0] != 0) {
          lVar6 = FUN_143702d60(uVar5,0x10,local_c0);
        }
        local_7c = 0x80000000;
        if (local_c0[0] != 0) {
          local_7c = local_c0[0];
        }
        uVar4 = local_b8 & 0xffffffff;
        local_88 = lVar6;
        local_80 = local_a0;
        if (0 < (int)local_b8) {
          lVar10 = *local_a8 - lVar6;
          do {
            local_b8 = uVar4;
            if (lVar6 != 0) {
              FUN_1437165f0(lVar6,lVar10 + lVar6);
              FUN_1437165f0(lVar6 + 8,lVar10 + lVar6 + 8);
            }
            lVar6 = lVar6 + 0x10;
            uVar4 = local_b8 - 1;
          } while (uVar4 != 0);
          local_b8 = 0;
          uVar7 = local_b0;
        }
        plVar3 = local_a8;
        FUN_143734770(local_78,local_a8 + 2);
        local_68 = (undefined4)plVar3[4];
        FUN_14376b530(plVar3,local_98);
        *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(local_98 + 0x20);
        FUN_14376b530(local_98,&local_88);
        *(undefined4 *)(local_98 + 0x20) = local_68;
        thunk_FUN_143734820(local_78);
        local_a8 = (longlong *)FUN_143703a50();
        if (-1 < (int)(local_80 - 1)) {
          uVar4 = (ulonglong)(int)(local_80 - 1);
          lVar6 = uVar4 * 0x10 + local_88;
          do {
            FUN_143716650(lVar6 + 8);
            FUN_143716650(lVar6);
            lVar6 = lVar6 + -0x10;
            uVar9 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar9;
            uVar7 = local_b0;
          } while (-1 < (int)uVar9);
        }
        local_80 = 0;
        uVar9 = local_38;
        if (-1 < (int)local_7c) {
          FUN_143702e10(local_a8,local_88,0x10,local_7c & 0x3fffffff);
          uVar9 = local_38;
        }
      }
      local_c8 = local_c8 + -1;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 + 1;
      local_b0 = uVar7;
    } while ((longlong)uVar12 <= (longlong)uVar7);
    if ((int)local_res10 < local_c8) {
      FUN_143766c00(param_1,local_res10,local_c8,param_4);
    }
    if (param_3 <= (int)uVar8) {
      thunk_FUN_143734820(local_48);
      uVar5 = FUN_143703a50();
      iVar11 = local_50 + -1;
      if (-1 < iVar11) {
        lVar6 = (longlong)iVar11 * 0x10 + local_58;
        do {
          FUN_143716650(lVar6 + 8);
          FUN_143716650(lVar6);
          lVar6 = lVar6 + -0x10;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      local_50 = 0;
      if (-1 < (int)local_4c) {
        FUN_143702e10(uVar5,local_58,0x10,local_4c & 0x3fffffff);
      }
      return;
    }
    uVar4 = (ulonglong)uVar8;
    local_res10 = uVar8;
  } while( true );
}



// FUNCTION 143766f40 FUN_143766f40 body=2814 status=ok
// SIG undefined FUN_143766f40(void)

void FUN_143766f40(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint **ppuVar9;
  ulonglong *puVar10;
  undefined4 *puVar11;
  uint **ppuVar12;
  ulonglong uVar13;
  int iVar14;
  uint **ppuVar15;
  uint **ppuVar16;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  ulonglong local_res18;
  longlong local_res20;
  undefined8 in_stack_fffffffffffffdf8;
  longlong local_1f8;
  int local_1f0;
  uint local_1ec;
  longlong local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined1 local_1d8 [16];
  uint **local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  uint **local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined1 local_178 [128];
  uint *local_f8;
  undefined *local_f0;
  uint *local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8 [136];
  
  ppuVar16 = (uint **)0x0;
  local_1dc = 0x80000000;
  local_1e8 = 0;
  local_1e0 = 0;
  FUN_143734b10(local_1d8);
  local_1a8 = (uint **)0x0;
  local_1a0 = (uint **)0x8000000000000000;
  FUN_143734b10(local_198);
  FUN_143716620(local_res10,&DAT_145b9ef90);
  FUN_143716620(local_res8,&DAT_145b9ef98);
  FUN_14376dd80(&local_1a8,local_res8,local_res10);
  FUN_143716650(local_res8);
  FUN_143716650(local_res10);
  FUN_143716620(local_res10,&DAT_145b9efa0);
  FUN_143716620(local_res8,&DAT_145b89820);
  FUN_14376dd80(&local_1a8,local_res8,local_res10);
  FUN_143716650(local_res8);
  FUN_143716650(local_res10);
  FUN_143716620(local_res10,&DAT_145b9efa8);
  FUN_143716620(local_res8,&DAT_145b9efb0);
  FUN_14376dd80(&local_1a8,local_res8,local_res10);
  FUN_143716650(local_res8);
  FUN_143716650(local_res10);
  FUN_143716620(local_res10,&DAT_145b9efb8);
  FUN_143716620(local_res8,&DAT_145b9efc0);
  FUN_14376dd80(&local_1a8,local_res8,local_res10);
  FUN_143716650(local_res8);
  FUN_143716650(local_res10);
  FUN_14376b530(&local_1e8,&local_1a8);
  thunk_FUN_143734820(local_198);
  uVar6 = FUN_143703a50();
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
  iVar14 = (int)local_1a0 + -1;
  if (-1 < iVar14) {
    ppuVar9 = local_1a8 + (longlong)iVar14 * 2;
    do {
      FUN_143716650(ppuVar9 + 1);
      FUN_143716650(ppuVar9);
      uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
      ppuVar9 = ppuVar9 + -2;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  lVar7 = (longlong)local_1a0;
  uVar1 = local_1a0._4_4_;
  local_1a0 = (uint **)((ulonglong)local_1a0._4_4_ << 0x20);
  if (-1 < lVar7) {
    FUN_143702e10(uVar6,local_1a8,0x10,uVar1 & 0x3fffffff);
  }
  local_res18 = 0;
  FUN_143716620(local_res10,&DAT_145b9efb0);
  lVar7 = FUN_14376cdf0(&local_1e8,local_res10);
  if (lVar7 == 0) {
    puVar10 = &local_res18;
  }
  else {
    puVar10 = (ulonglong *)(local_1e8 + 8 + (longlong)*(int *)(lVar7 + 4) * 0x10);
  }
  if (((*puVar10 & 0xfffffffffffffffe) == 0) ||
     (iVar14 = hkString::strCmp(*puVar10 & 0xfffffffffffffffe,&DAT_145b9efa8), iVar14 != 0)) {
    local_188 = local_178;
    local_17c = 0x80000080;
    local_180 = 1;
    local_178[0] = 0;
    uVar5 = 1;
    FUN_143746010(&local_188,"left({}) == right({})",&DAT_145b9efd8,puVar10,&DAT_145b9efa8,0);
    uVar6 = CONCAT44(uVar5,0x1db);
    FUN_143762f50(local_res8,0,local_188,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,uVar6);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_180 = 0;
    if (-1 < (int)local_17c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_188,1,local_17c & 0x3fffffff);
    }
  }
  else {
    uVar6 = CONCAT44(uVar5,0x1db);
    FUN_143762f50(local_res8,1,"Passed",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,uVar6);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  FUN_143716650(local_res10);
  FUN_143716650(&local_res18);
  FUN_14376b530(&local_1e8,&local_1e8);
  local_res18 = 0;
  FUN_143716620(local_res10,&DAT_145b9efb0);
  lVar7 = FUN_14376cdf0(&local_1e8,local_res10);
  if (lVar7 == 0) {
    puVar10 = &local_res18;
  }
  else {
    puVar10 = (ulonglong *)(local_1e8 + 8 + (longlong)*(int *)(lVar7 + 4) * 0x10);
  }
  if (((*puVar10 & 0xfffffffffffffffe) == 0) ||
     (iVar14 = hkString::strCmp(*puVar10 & 0xfffffffffffffffe,&DAT_145b9efa8), iVar14 != 0)) {
    local_188 = local_178;
    local_17c = 0x80000080;
    local_180 = 1;
    local_178[0] = 0;
    uVar5 = 1;
    FUN_143746010(&local_188,"left({}) == right({})",&DAT_145b9efd8,puVar10,&DAT_145b9efa8,0);
    uVar6 = CONCAT44(uVar5,0x1df);
    FUN_143762f50(local_res8,0,local_188,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,uVar6);
    local_180 = 0;
    if (-1 < (int)local_17c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_188,1,local_17c & 0x3fffffff);
    }
  }
  else {
    uVar6 = CONCAT44(uVar5,0x1df);
    FUN_143762f50(local_res8,1,"Passed",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,uVar6);
  }
  FUN_143716650(local_res10);
  FUN_143716650(&local_res18);
  uVar2 = local_1e0;
  uVar13 = (ulonglong)local_1e0;
  local_res8[0] = local_1e0;
  local_1c8 = (uint **)0x0;
  local_1c0 = (undefined1 **)0x8000000000000000;
  uVar8 = FUN_143703a50();
  uVar1 = local_res8[0];
  ppuVar9 = ppuVar16;
  if (local_res8[0] != 0) {
    ppuVar9 = (uint **)FUN_143702d60(uVar8,0x10,local_res8);
  }
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar4 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar4 = local_res8[0];
  }
  local_1c0 = (undefined1 **)CONCAT44(uVar4,uVar1);
  lVar7 = local_1e8;
  local_1c8 = ppuVar9;
  if (0 < (int)uVar2) {
    do {
      if (ppuVar9 != (uint **)0x0) {
        FUN_1437165f0(ppuVar9,lVar7);
        FUN_1437165f0(ppuVar9 + 1,lVar7 + 8);
      }
      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
      ppuVar9 = ppuVar9 + 2;
      uVar13 = uVar13 - 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar13 != 0);
  }
  FUN_143734770(local_1b8,local_1d8);
  FUN_143716620(local_res10,&DAT_145b9efc8);
  FUN_143716620(local_res8,&DAT_145b9efd0);
  FUN_14376dd80(&local_1c8,local_res8,local_res10);
  FUN_143716650(local_res8);
  FUN_143716650(local_res10);
  FUN_14376b530(&local_1e8,&local_1c8);
  local_res18 = 0;
  FUN_143716620(local_res10,&DAT_145b9efd0);
  lVar7 = FUN_14376cdf0(&local_1e8,local_res10);
  if (lVar7 == 0) {
    puVar10 = &local_res18;
  }
  else {
    puVar10 = (ulonglong *)(local_1e8 + 8 + (longlong)*(int *)(lVar7 + 4) * 0x10);
  }
  if (((*puVar10 & 0xfffffffffffffffe) == 0) ||
     (iVar14 = hkString::strCmp(*puVar10 & 0xfffffffffffffffe,&DAT_145b9efc8), iVar14 != 0)) {
    local_188 = local_178;
    local_17c = 0x80000080;
    local_180 = 1;
    local_178[0] = 0;
    uVar5 = 1;
    FUN_143746010(&local_188,"left({}) == right({})",&DAT_145b9efd8,puVar10,&DAT_145b9efc8,0);
    FUN_143762f50(local_res8,0,local_188,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,CONCAT44(uVar5,0x1e5));
    local_180 = 0;
    if (-1 < (int)local_17c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_188,1,local_17c & 0x3fffffff);
    }
  }
  else {
    FUN_143762f50(local_res8,1,"Passed",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,CONCAT44(uVar5,0x1e5));
  }
  FUN_143716650(local_res10);
  FUN_143716650(&local_res18);
  thunk_FUN_143734820(local_1b8);
  uVar6 = FUN_143703a50();
  iVar14 = (int)local_1c0 + -1;
  if (-1 < iVar14) {
    ppuVar9 = local_1c8 + (longlong)iVar14 * 2;
    do {
      FUN_143716650(ppuVar9 + 1);
      FUN_143716650(ppuVar9);
      ppuVar9 = ppuVar9 + -2;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  lVar7 = (longlong)local_1c0;
  uVar1 = local_1c0._4_4_;
  local_1c0 = (undefined1 **)((ulonglong)local_1c0._4_4_ << 0x20);
  if (-1 < lVar7) {
    FUN_143702e10(uVar6,local_1c8,0x10,uVar1 & 0x3fffffff);
  }
  local_1c8 = (uint **)0x0;
  local_1c0 = (undefined1 **)CONCAT44(0x80000000,(int)local_1c0);
  thunk_FUN_143734820(local_1d8);
  uVar6 = FUN_143703a50();
  iVar14 = local_1e0 - 1;
  if (-1 < iVar14) {
    lVar7 = (longlong)iVar14 * 0x10 + local_1e8;
    do {
      FUN_143716650(lVar7 + 8);
      FUN_143716650(lVar7);
      lVar7 = lVar7 + -0x10;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  local_1e0 = 0;
  if (-1 < (int)local_1dc) {
    FUN_143702e10(uVar6,local_1e8,0x10,local_1dc & 0x3fffffff);
  }
  FUN_143762e30(&local_1e8,0x75bcd15);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 0x80000000;
  uVar6 = FUN_143703a50();
  if ((local_1ec & 0x3fffffff) < 5) {
    uVar2 = (local_1ec & 0x3fffffff) * 2;
    uVar1 = 5;
    if (5 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_14370c310(uVar6,&local_1f8,uVar1,0x28);
  }
  iVar14 = local_1f0 + -6;
  if (-1 < iVar14) {
    lVar7 = local_1f8 + 200 + (longlong)iVar14 * 0x28;
    do {
      FUN_14376b440(lVar7);
      lVar7 = lVar7 + -0x28;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  lVar7 = (longlong)(5 - local_1f0);
  if (0 < 5 - local_1f0) {
    puVar11 = (undefined4 *)(local_1f8 + (longlong)local_1f0 * 0x28 + 0xc);
    do {
      if ((undefined8 *)(puVar11 + -3) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        FUN_143734b10(puVar11 + 1);
      }
      puVar11 = puVar11 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  local_1f0 = 5;
  local_res20 = 0;
  ppuVar9 = ppuVar16;
  do {
    lVar3 = local_1f8;
    lVar7 = local_res20;
    uVar5 = FUN_143762f80(&local_1e8);
    *(undefined4 *)(lVar3 + 0x20 + lVar7) = uVar5;
    iVar14 = (int)ppuVar9;
    if (0 < iVar14) {
      ppuVar12 = ppuVar16;
      ppuVar15 = ppuVar16;
      do {
        local_d8 = local_c8;
        local_cc = 0x80000080;
        local_f8 = local_res8;
        local_d0 = 1;
        local_1a8 = &local_f8;
        local_c8[0] = 0;
        local_1a0 = &local_e8;
        local_f0 = &DAT_1467f0140;
        local_res8[0] = (uint)ppuVar15;
        ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation
                  (&local_d8,&DAT_145b752b0,&local_1a8);
        local_188 = local_178;
        local_17c = 0x80000080;
        local_e8 = local_res8;
        local_180 = 1;
        local_1c8 = &local_e8;
        local_178[0] = 0;
        local_1c0 = &local_d8;
        local_e0 = &DAT_1467f0140;
        local_res8[0] = (uint)ppuVar12;
        ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation
                  (&local_188,&DAT_145b752b0,&local_1c8);
        FUN_143716620(&local_res18,local_188);
        FUN_143716620(local_res10,local_d8);
        FUN_14376dd80(local_1f8 + (longlong)iVar14 * 0x28,local_res10,&local_res18);
        FUN_143716650(local_res10);
        FUN_143716650(&local_res18);
        local_180 = 0;
        if (-1 < (int)local_17c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_188,1,local_17c & 0x3fffffff);
        }
        local_188 = (undefined1 *)0x0;
        local_17c = 0x80000000;
        local_d0 = 0;
        if (-1 < (int)local_cc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
        }
        ppuVar15 = (uint **)(ulonglong)((uint)ppuVar15 + 7);
        ppuVar12 = (uint **)(ulonglong)((uint)ppuVar12 + 0xd);
        ppuVar9 = (uint **)((longlong)ppuVar9 - 1);
        lVar7 = local_res20;
      } while (ppuVar9 != (uint **)0x0);
    }
    local_res20 = lVar7 + 0x28;
    ppuVar9 = (uint **)(ulonglong)(iVar14 + 1U);
  } while ((int)(iVar14 + 1U) < local_1f0);
  if (1 < local_1f0) {
    FUN_143766c00(local_1f8,0,local_1f0 + -1,(undefined1)local_res8[0]);
  }
  uVar6 = FUN_143703a50();
  iVar14 = local_1f0 + -1;
  if (-1 < iVar14) {
    lVar7 = local_1f8 + (longlong)iVar14 * 0x28;
    do {
      FUN_14376b440(lVar7);
      lVar7 = lVar7 + -0x28;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  local_1f0 = 0;
  if (-1 < (int)local_1ec) {
    FUN_143702e10(uVar6,local_1f8,0x28,local_1ec & 0x3fffffff);
  }
  return;
}



// FUNCTION 143767a40 FUN_143767a40 body=1355 status=ok
// SIG undefined FUN_143767a40(void)

void FUN_143767a40(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7 [7];
  uint local_c0 [2];
  float local_b8 [2];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong local_a8;
  int *local_98;
  uint uStack_90;
  int iStack_8c;
  
  uVar13 = 1;
  local_a8 = 1;
  do {
    lVar8 = local_a8;
    local_98 = (int *)0x0;
    uStack_90 = 0;
    iStack_8c = -1;
    uVar3 = FUN_143703a50();
    FUN_14376e3f0(&local_98,uVar3,uVar13);
    local_c0[0] = uVar13;
    uVar3 = FUN_143703a50();
    uVar16 = local_c0[0];
    uVar7 = (ulonglong)(int)local_c0[0];
    if (local_c0[0] == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_143702d60(uVar3,4,local_c0);
    }
    uVar14 = 0x80000000;
    if (local_c0[0] != 0) {
      uVar14 = local_c0[0];
    }
    puVar5 = puVar4;
    if (0 < lVar8) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
    }
    fVar15 = 0.0;
    local_b8[0] = 0.0;
    if (0 < (int)uVar13) {
LAB_143767b50:
      do {
        fVar17 = (float)FUN_143762fd0();
        iVar11 = 0;
        lVar8 = 0;
        iVar1 = (int)(fVar17 * 1000.0 * (float)(int)uVar13);
        if (0 < (int)uVar16) {
          do {
            if (puVar4[lVar8] == iVar1) {
              if (iVar11 != -1) goto LAB_143767b50;
              break;
            }
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 < (longlong)uVar7);
        }
        puVar4[(int)fVar15] = iVar1;
        uVar3 = FUN_143703a50();
        FUN_14376dfe0(&local_98,uVar3,puVar4 + (int)fVar15,local_b8);
        fVar15 = (float)((int)fVar15 + 1);
        local_b8[0] = fVar15;
      } while ((int)fVar15 < (int)uVar13);
    }
    uVar12 = 0;
    puVar5 = puVar4;
    if (0 < (int)uVar13) {
      do {
        uVar2 = uVar12 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 == 0) {
          FUN_14376e1f0(&local_98,local_b0,puVar5);
        }
        uVar12 = uVar12 + 1;
        puVar5 = puVar5 + 1;
      } while ((int)uVar12 < (int)uVar13);
    }
    local_b8[0] = (float)(int)uVar13 * 0.75;
    fVar15 = ((local_b8[0] - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    FUN_143762f50(local_res8,
                  (uStack_90 & 0x7fffffff) ==
                  (int)(float)(~-(uint)(8388608.0 < ABS(local_b8[0])) &
                               (uint)((float)(int)-(uint)(local_b8[0] < fVar15) + fVar15) |
                              -(uint)(8388608.0 < ABS(local_b8[0])) & (uint)local_b8[0]),
                  "pmap.getSize() == expectedSize",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x74);
    fVar15 = 0.0;
    puVar5 = puVar4;
    if (0 < (int)uVar13) {
      do {
        uVar12 = (uint)fVar15 & 0x80000003;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
        }
        if (uVar12 != 0) {
          local_b8[0] = 0.0;
          puVar6 = (uint *)FUN_14376d6a0(&local_98,local_ac,puVar5,local_b8);
          FUN_143762f50(local_res10,~*puVar6 >> 0x1f,"pmap.get(keys[i], &out).isSuccess()",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7a);
          FUN_143762f50(local_res18,local_b8[0] == fVar15,"out == i",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7b);
        }
        fVar15 = (float)((int)fVar15 + 1);
        puVar5 = puVar5 + 1;
      } while ((int)fVar15 < (int)uVar13);
    }
    iVar1 = 0;
    if (0 < (int)uVar16) {
      do {
        if (iVar1 == (iVar1 / 3 + (iVar1 >> 0x1f) +
                     (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * 3) {
          uVar16 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar16;
          iVar11 = 0;
          lVar8 = (longlong)(int)(uVar16 - iVar1) * 4;
          if (0 < lVar8) {
            lVar9 = 0;
            do {
              iVar11 = iVar11 + 4;
              *(undefined4 *)((longlong)puVar4 + lVar9 + (longlong)iVar1 * 4) =
                   *(undefined4 *)((longlong)puVar4 + lVar9 + 4 + (longlong)iVar1 * 4);
              lVar9 = lVar9 + 4;
            } while (iVar11 < lVar8);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)uVar7);
    }
    uVar16 = (uint)uVar7;
    iVar1 = 0;
    piVar10 = local_98;
    if (-1 < iStack_8c) {
      do {
        if (*piVar10 != -1) break;
        iVar1 = iVar1 + 1;
        piVar10 = piVar10 + 2;
      } while (iVar1 <= iStack_8c);
    }
    if (iVar1 <= iStack_8c) {
      do {
        uVar12 = 0;
        iVar11 = (int)uVar7;
        lVar8 = 0;
        if (0 < iVar11) {
          do {
            if (puVar4[lVar8] == local_98[(longlong)iVar1 * 2]) goto LAB_143767dd9;
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar11);
        }
        uVar12 = 0xffffffff;
        lVar8 = -1;
LAB_143767dd9:
        FUN_143762f50(local_res20,uVar12 != 0xffffffff,"idx != -1",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x8c);
        uVar16 = iVar11 - 1;
        uVar7 = (ulonglong)uVar16;
        if (uVar16 != uVar12) {
          puVar4[lVar8] = puVar4[(int)uVar16];
        }
        iVar1 = iVar1 + 1;
        if (iVar1 <= iStack_8c) {
          piVar10 = local_98 + (longlong)iVar1 * 2;
          do {
            if (*piVar10 != -1) break;
            iVar1 = iVar1 + 1;
            piVar10 = piVar10 + 2;
          } while (iVar1 <= iStack_8c);
        }
      } while (iVar1 <= iStack_8c);
    }
    FUN_143762f50(&local_c8,uVar16 == 0,"keys.getSize() == 0",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x8f);
    iVar1 = 0;
    piVar10 = local_98;
    if (-1 < iStack_8c) {
      do {
        if (*piVar10 != -1) break;
        iVar1 = iVar1 + 1;
        piVar10 = piVar10 + 2;
      } while (iVar1 <= iStack_8c);
    }
    if (iVar1 <= iStack_8c) {
      do {
        lVar8 = (longlong)iVar1;
        iVar11 = local_98[lVar8 * 2 + 1];
        local_98[lVar8 * 2 + 1] = iVar11 * 10;
        FUN_143762f50(local_c7,local_98[lVar8 * 2 + 1] == iVar11 * 10,
                      "pmap.getValue(it) == val * 10",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x99);
        iVar1 = iVar1 + 1;
        if (iVar1 <= iStack_8c) {
          piVar10 = local_98 + (longlong)iVar1 * 2;
          do {
            if (*piVar10 != -1) break;
            iVar1 = iVar1 + 1;
            piVar10 = piVar10 + 2;
          } while (iVar1 <= iStack_8c);
        }
      } while (iVar1 <= iStack_8c);
    }
    uVar3 = FUN_143703a50();
    if (-1 < (int)uVar14) {
      FUN_143702e10(uVar3,puVar4,4,uVar14 & 0x3fffffff);
    }
    uVar3 = FUN_143703a50();
    FUN_14376d4c0(&local_98,uVar3);
    uVar13 = uVar13 + 1;
    local_a8 = local_a8 + 1;
    if (199 < (int)uVar13) {
      return;
    }
  } while( true );
}



// FUNCTION 143767f90 FUN_143767f90 body=1344 status=ok
// SIG undefined FUN_143767f90(void)

void FUN_143767f90(void)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined1 local_b8;
  undefined1 local_b7 [7];
  uint local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  uint local_90 [20];
  
  uVar14 = 1;
  do {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    iStack_bc = -1;
    uVar1 = FUN_143703a50();
    FUN_14372fea0(&local_c8,uVar1,uVar14);
    local_b0[0] = uVar14;
    uVar1 = FUN_143703a50();
    uVar16 = local_b0[0];
    uVar7 = (ulonglong)(int)local_b0[0];
    if (local_b0[0] == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_143702d60(uVar1,4,local_b0);
    }
    uVar15 = 0x80000000;
    if (local_b0[0] != 0) {
      uVar15 = local_b0[0];
    }
    iVar12 = 0;
    if (0 < (int)uVar14) {
      piVar13 = piVar2;
LAB_143768077:
      do {
        fVar18 = (float)FUN_143762fd0();
        iVar6 = 0;
        lVar3 = 0;
        iVar9 = (int)(fVar18 * 1000.0 * (float)(int)uVar14);
        if (0 < (int)uVar16) {
          do {
            if (piVar2[lVar3] == iVar9) {
              if (iVar6 != -1) goto LAB_143768077;
              break;
            }
            iVar6 = iVar6 + 1;
            lVar3 = lVar3 + 1;
          } while (lVar3 < (longlong)uVar7);
        }
        local_a0 = (longlong)iVar12;
        local_a8 = (longlong)iVar9;
        *piVar13 = iVar9;
        uVar1 = FUN_143703a50();
        FUN_14372d6e0(&local_c8,uVar1,&local_a8,&local_a0);
        iVar12 = iVar12 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar12 < (int)uVar14);
    }
    uVar11 = 0;
    piVar13 = piVar2;
    if (0 < (int)uVar14) {
      do {
        if ((uVar11 & 3) == 0) {
          local_a8 = (longlong)*piVar13;
          FUN_14376e340(&local_c8,local_98,&local_a8);
        }
        uVar11 = uVar11 + 1;
        piVar13 = piVar13 + 1;
      } while ((int)uVar11 < (int)uVar14);
    }
    fVar18 = (float)(int)uVar14 * 0.75;
    local_a0 = CONCAT44(local_a0._4_4_,fVar18);
    fVar19 = ((fVar18 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    FUN_143762f50(local_res8,
                  (uStack_c0 & 0x7fffffff) ==
                  (int)(float)(~-(uint)(8388608.0 < ABS(fVar18)) &
                               (uint)((float)(int)-(uint)(fVar18 < fVar19) + fVar19) |
                              -(uint)(8388608.0 < ABS(fVar18)) & (uint)fVar18),
                  "pmap.getSize() == expectedSize",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x74);
    uVar11 = 0;
    piVar13 = piVar2;
    if (0 < (int)uVar14) {
      do {
        if ((uVar11 & 3) != 0) {
          local_a8 = (longlong)*piVar13;
          uVar17 = 0;
          piVar4 = (int *)FUN_14372adb0(&local_c8,local_94,&local_a8,local_90);
          if (*piVar4 < 0) {
            uVar10 = 0x80040200;
          }
          else {
            uVar10 = 0;
            uVar17 = local_90[0];
          }
          FUN_143762f50(local_res10,~uVar10 >> 0x1f,"pmap.get(keys[i], &out).isSuccess()",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7a);
          FUN_143762f50(local_res18,uVar17 == uVar11,"out == i",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7b);
        }
        uVar11 = uVar11 + 1;
        piVar13 = piVar13 + 1;
      } while ((int)uVar11 < (int)uVar14);
    }
    iVar12 = 0;
    piVar13 = piVar2;
    if (0 < (int)uVar16) {
      do {
        if (iVar12 == (iVar12 / 3 + (iVar12 >> 0x1f) +
                      (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * 3) {
          uVar16 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar16;
          iVar6 = 0;
          lVar3 = (longlong)(int)(uVar16 - iVar12) * 4;
          if (0 < lVar3) {
            lVar8 = 0;
            do {
              iVar6 = iVar6 + 4;
              *(undefined4 *)((longlong)piVar13 + lVar8) =
                   *(undefined4 *)((longlong)piVar13 + lVar8 + 4);
              lVar8 = lVar8 + 4;
            } while (iVar6 < lVar3);
          }
        }
        iVar12 = iVar12 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar12 < (int)uVar7);
    }
    uVar16 = (uint)uVar7;
    iVar12 = 0;
    lVar3 = 0;
    plVar5 = local_c8;
    if (-1 < iStack_bc) {
      do {
        if (*plVar5 != -1) break;
        iVar12 = iVar12 + 1;
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 2;
      } while (lVar3 <= iStack_bc);
    }
    if (iVar12 <= iStack_bc) {
      do {
        uVar11 = 0;
        lVar3 = 0;
        iVar6 = (int)uVar7;
        if (0 < iVar6) {
          do {
            if (piVar2[lVar3] == (int)local_c8[(longlong)iVar12 * 2]) goto LAB_14376830c;
            uVar11 = uVar11 + 1;
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar6);
        }
        uVar11 = 0xffffffff;
        lVar3 = -1;
LAB_14376830c:
        FUN_143762f50(local_res20,uVar11 != 0xffffffff,"idx != -1",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x8c);
        uVar16 = iVar6 - 1;
        uVar7 = (ulonglong)uVar16;
        if (uVar16 != uVar11) {
          piVar2[lVar3] = piVar2[(int)uVar16];
        }
        iVar12 = iVar12 + 1;
        if (iVar12 <= iStack_bc) {
          lVar3 = (longlong)iVar12;
          plVar5 = local_c8 + lVar3 * 2;
          do {
            if (*plVar5 != -1) break;
            iVar12 = iVar12 + 1;
            lVar3 = lVar3 + 1;
            plVar5 = plVar5 + 2;
          } while (lVar3 <= iStack_bc);
        }
      } while (iVar12 <= iStack_bc);
    }
    FUN_143762f50(&local_b8,uVar16 == 0,"keys.getSize() == 0",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x8f);
    iVar12 = 0;
    lVar3 = 0;
    plVar5 = local_c8;
    if (-1 < iStack_bc) {
      do {
        if (*plVar5 != -1) break;
        iVar12 = iVar12 + 1;
        lVar3 = lVar3 + 1;
        plVar5 = plVar5 + 2;
      } while (lVar3 <= iStack_bc);
    }
    if (iVar12 <= iStack_bc) {
      do {
        lVar3 = (longlong)iVar12;
        iVar6 = (int)local_c8[lVar3 * 2 + 1] * 10;
        local_c8[lVar3 * 2 + 1] = (longlong)iVar6;
        FUN_143762f50(local_b7,(int)local_c8[lVar3 * 2 + 1] == iVar6,"pmap.getValue(it) == val * 10"
                      ,
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x99);
        iVar12 = iVar12 + 1;
        if (iVar12 <= iStack_bc) {
          lVar3 = (longlong)iVar12;
          plVar5 = local_c8 + lVar3 * 2;
          do {
            if (*plVar5 != -1) break;
            iVar12 = iVar12 + 1;
            lVar3 = lVar3 + 1;
            plVar5 = plVar5 + 2;
          } while (lVar3 <= iStack_bc);
        }
      } while (iVar12 <= iStack_bc);
    }
    uVar1 = FUN_143703a50();
    if (-1 < (int)uVar15) {
      FUN_143702e10(uVar1,piVar2,4,uVar15 & 0x3fffffff);
    }
    uVar1 = FUN_143703a50();
    FUN_143700a90(&local_c8,uVar1);
    uVar14 = uVar14 + 1;
    if (199 < (int)uVar14) {
      return;
    }
  } while( true );
}



// FUNCTION 1437684d0 FUN_1437684d0 body=1322 status=ok
// SIG undefined FUN_1437684d0(void)

void FUN_1437684d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong local_e8;
  undefined1 local_e0;
  undefined1 local_df [7];
  uint local_d8 [2];
  longlong local_d0;
  int local_c8;
  uint local_c4;
  undefined1 local_c0 [8];
  int local_b8;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  
  uVar14 = 1;
  local_a8 = 0x4b000000;
  uStack_a4 = 0x4b000000;
  uStack_a0 = 0x4b000000;
  uStack_9c = 0x4b000000;
  do {
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 0x80000000;
    FUN_143734b10(local_c0);
    uVar3 = FUN_143703a50();
    if ((int)(local_c4 & 0x3fffffff) < (int)uVar14) {
      uVar15 = (local_c4 & 0x3fffffff) * 2;
      uVar16 = uVar14;
      if ((int)uVar14 < (int)uVar15) {
        uVar16 = uVar15;
      }
      FUN_14370c310(uVar3,&local_d0,uVar16,8);
    }
    if (local_b8 * 2 < (int)(uVar14 * 3)) {
      FUN_143734990(local_c0,uVar14);
    }
    local_d8[0] = uVar14;
    uVar3 = FUN_143703a50();
    uVar16 = local_d8[0];
    uVar8 = (ulonglong)(int)local_d8[0];
    if (local_d8[0] == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_143702d60(uVar3,4,local_d8);
    }
    uVar15 = 0x80000000;
    if (local_d8[0] != 0) {
      uVar15 = local_d8[0];
    }
    iVar12 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    if (0 < (int)uVar14) {
LAB_1437685f8:
      do {
        fVar17 = (float)FUN_143762fd0();
        iVar7 = 0;
        lVar5 = 0;
        iVar13 = (int)(fVar17 * 1000.0 * (float)(int)uVar14);
        if (0 < (int)uVar16) {
          do {
            if (*(int *)(lVar4 + lVar5 * 4) == iVar13) {
              if (iVar7 != -1) goto LAB_1437685f8;
              break;
            }
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 < (longlong)uVar8);
        }
        piVar1 = (int *)(lVar4 + (longlong)iVar12 * 4);
        *piVar1 = iVar13;
        FUN_14376d780(&local_d0,piVar1,&local_e8);
        iVar12 = iVar12 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,iVar12);
      } while (iVar12 < (int)uVar14);
    }
    uVar11 = 0;
    lVar5 = lVar4;
    if (0 < (int)uVar14) {
      do {
        uVar2 = uVar11 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar2 == 0) && (lVar6 = FUN_14376cc30(&local_d0,lVar5), lVar6 != 0)) {
          FUN_14376ceb0(&local_d0,lVar6);
        }
        uVar11 = uVar11 + 1;
        lVar5 = lVar5 + 4;
      } while ((int)uVar11 < (int)uVar14);
    }
    fVar17 = (float)(int)uVar14 * 0.75;
    local_e8 = CONCAT44(local_e8._4_4_,fVar17);
    fVar18 = ((fVar17 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    FUN_143762f50(local_res8,
                  local_c8 ==
                  (int)(float)(~-(uint)(8388608.0 < ABS(fVar17)) &
                               (uint)((float)(int)-(uint)(fVar17 < fVar18) + fVar18) |
                              -(uint)(8388608.0 < ABS(fVar17)) & (uint)fVar17),
                  "pmap.getSize() == expectedSize",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x74);
    uVar11 = 0;
    lVar5 = lVar4;
    if (0 < (int)uVar14) {
      do {
        uVar2 = uVar11 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          uVar2 = 0;
          lVar6 = FUN_14376cc30(&local_d0,lVar5);
          if (lVar6 == 0) {
            uVar10 = 0x80040200;
          }
          else {
            uVar10 = 0;
            uVar2 = *(uint *)(local_d0 + 4 + (longlong)*(int *)(lVar6 + 4) * 8);
          }
          FUN_143762f50(local_res10,~uVar10 >> 0x1f,"pmap.get(keys[i], &out).isSuccess()",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7a);
          FUN_143762f50(local_res18,uVar2 == uVar11,"out == i",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7b);
        }
        uVar11 = uVar11 + 1;
        lVar5 = lVar5 + 4;
      } while ((int)uVar11 < (int)uVar14);
    }
    iVar12 = 0;
    if (0 < (int)uVar16) {
      do {
        if (iVar12 == (iVar12 / 3 + (iVar12 >> 0x1f) +
                      (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * 3) {
          uVar16 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar16;
          iVar7 = 0;
          lVar6 = (longlong)(int)(uVar16 - iVar12) * 4;
          lVar5 = lVar4 + (longlong)iVar12 * 4;
          if (0 < lVar6) {
            lVar9 = 0;
            do {
              iVar7 = iVar7 + 4;
              *(undefined4 *)(lVar9 + lVar5) = *(undefined4 *)(lVar9 + 4 + lVar5);
              lVar9 = lVar9 + 4;
            } while (iVar7 < lVar6);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar8);
    }
    uVar16 = (uint)uVar8;
    if (-1 < local_c8 + -1) {
      uStack_94 = 0xffffffff;
      iVar12 = local_c8 + -1;
      do {
        uVar11 = 0;
        iVar7 = (int)uVar8;
        lVar5 = 0;
        if (0 < iVar7) {
          do {
            if (*(int *)(lVar4 + lVar5 * 4) == *(int *)(local_d0 + (longlong)iVar12 * 8))
            goto LAB_14376887e;
            uVar11 = uVar11 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar7);
        }
        uVar11 = 0xffffffff;
        lVar5 = -1;
LAB_14376887e:
        FUN_143762f50(local_res20,uVar11 != 0xffffffff,"idx != -1",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x8c);
        uVar16 = iVar7 - 1;
        uVar8 = (ulonglong)uVar16;
        if (uVar16 != uVar11) {
          *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)(lVar4 + (longlong)(int)uVar16 * 4);
        }
        local_98 = iVar12 + -1;
        local_e8 = CONCAT44(uStack_94,local_98);
        iVar12 = local_98;
      } while (-1 < local_98);
    }
    FUN_143762f50(&local_e0,uVar16 == 0,"keys.getSize() == 0",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x8f);
    if (-1 < local_c8 + -1) {
      uStack_a4 = 0xffffffff;
      iVar12 = local_c8 + -1;
      do {
        lVar5 = (longlong)iVar12;
        iVar7 = *(int *)(local_d0 + 4 + lVar5 * 8) * 10;
        *(int *)(local_d0 + 4 + lVar5 * 8) = iVar7;
        FUN_143762f50(local_df,*(int *)(local_d0 + 4 + lVar5 * 8) == iVar7,
                      "pmap.getValue(it) == val * 10",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x99);
        local_a8 = iVar12 + -1;
        local_e8 = CONCAT44(uStack_a4,local_a8);
        iVar12 = local_a8;
      } while (-1 < local_a8);
    }
    uVar3 = FUN_143703a50();
    if (-1 < (int)uVar15) {
      FUN_143702e10(uVar3,lVar4,4,uVar15 & 0x3fffffff);
    }
    thunk_FUN_143734820(local_c0);
    uVar3 = FUN_143703a50();
    local_c8 = 0;
    if (-1 < (int)local_c4) {
      FUN_143702e10(uVar3,local_d0,8,local_c4 & 0x3fffffff);
    }
    uVar14 = uVar14 + 1;
    if (199 < (int)uVar14) {
      return;
    }
  } while( true );
}



// FUNCTION 143768a00 FUN_143768a00 body=1362 status=ok
// SIG undefined FUN_143768a00(void)

void FUN_143768a00(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong local_e8;
  undefined1 local_e0;
  undefined1 local_df [7];
  uint local_d8 [2];
  longlong local_d0;
  int local_c8;
  uint local_c4;
  undefined1 local_c0 [8];
  int local_b8;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  
  uVar15 = 1;
  local_a8 = 0x4b000000;
  uStack_a4 = 0x4b000000;
  uStack_a0 = 0x4b000000;
  uStack_9c = 0x4b000000;
  do {
    puVar13 = (undefined4 *)0x0;
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 0x80000000;
    FUN_143734b10(local_c0);
    uVar3 = FUN_143703a50();
    if ((int)(local_c4 & 0x3fffffff) < (int)uVar15) {
      uVar16 = (local_c4 & 0x3fffffff) * 2;
      uVar17 = uVar15;
      if ((int)uVar15 < (int)uVar16) {
        uVar17 = uVar16;
      }
      FUN_14370c310(uVar3,&local_d0,uVar17,8);
    }
    if (local_b8 * 2 < (int)(uVar15 * 3)) {
      FUN_143734990(local_c0,uVar15);
    }
    local_d8[0] = uVar15;
    uVar3 = FUN_143703a50();
    uVar17 = local_d8[0];
    uVar6 = (ulonglong)(int)local_d8[0];
    puVar4 = puVar13;
    if (local_d8[0] != 0) {
      puVar4 = (undefined4 *)FUN_143702d60(uVar3,4,local_d8);
    }
    uVar16 = 0x80000000;
    if (local_d8[0] != 0) {
      uVar16 = local_d8[0];
    }
    lVar7 = (longlong)(int)uVar15;
    puVar5 = puVar4;
    if (0 < (int)uVar15) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
    }
    local_e8 = local_e8 & 0xffffffff00000000;
    if (0 < (int)uVar15) {
      puVar5 = puVar13;
LAB_143768b47:
      do {
        fVar20 = (float)FUN_143762fd0();
        iVar1 = (int)(fVar20 * 1000.0 * (float)(int)uVar15);
        puVar8 = puVar13;
        puVar10 = puVar13;
        if (0 < (int)uVar17) {
          do {
            if (puVar4[(longlong)puVar8] == iVar1) {
              if ((int)puVar10 != -1) goto LAB_143768b47;
              break;
            }
            puVar10 = (undefined4 *)(ulonglong)((int)puVar10 + 1);
            puVar8 = (undefined4 *)((longlong)puVar8 + 1);
          } while ((longlong)puVar8 < (longlong)uVar6);
        }
        puVar4[(int)puVar5] = iVar1;
        FUN_14376dc50(&local_d0,puVar4 + (int)puVar5,&local_e8);
        uVar14 = (int)puVar5 + 1;
        puVar5 = (undefined4 *)(ulonglong)uVar14;
        local_e8 = CONCAT44(local_e8._4_4_,uVar14);
      } while ((int)uVar14 < (int)uVar15);
    }
    puVar5 = puVar13;
    puVar8 = puVar4;
    if (0 < (int)uVar15) {
      do {
        uVar14 = (uint)puVar5 & 0x80000003;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar14 == 0) && (lVar7 = FUN_14376cd80(&local_d0,puVar8), lVar7 != 0)) {
          FUN_14376d130(&local_d0,lVar7);
        }
        uVar14 = (uint)puVar5 + 1;
        puVar5 = (undefined4 *)(ulonglong)uVar14;
        puVar8 = puVar8 + 1;
      } while ((int)uVar14 < (int)uVar15);
    }
    fVar20 = (float)(int)uVar15 * 0.75;
    local_e8 = CONCAT44(local_e8._4_4_,fVar20);
    fVar21 = ((fVar20 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    FUN_143762f50(local_res8,
                  local_c8 ==
                  (int)(float)(~-(uint)(8388608.0 < ABS(fVar20)) &
                               (uint)((float)(int)-(uint)(fVar20 < fVar21) + fVar21) |
                              -(uint)(8388608.0 < ABS(fVar20)) & (uint)fVar20),
                  "pmap.getSize() == expectedSize",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x74);
    puVar5 = puVar4;
    if (0 < (int)uVar15) {
      do {
        uVar14 = 0;
        uVar12 = (uint)puVar13;
        uVar2 = uVar12 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          lVar7 = FUN_14376cd80(&local_d0,puVar5);
          if (lVar7 == 0) {
            uVar2 = 0x80040200;
          }
          else {
            uVar2 = 0;
            uVar14 = *(uint *)(local_d0 + 4 + (longlong)*(int *)(lVar7 + 4) * 8);
          }
          FUN_143762f50(local_res10,~uVar2 >> 0x1f,"pmap.get(keys[i], &out).isSuccess()",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7a);
          FUN_143762f50(local_res18,uVar14 == uVar12,"out == i",
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                        ,0x7b);
        }
        puVar13 = (undefined4 *)(ulonglong)(uVar12 + 1);
        puVar5 = puVar5 + 1;
      } while ((int)(uVar12 + 1) < (int)uVar15);
    }
    uVar19 = 0;
    uVar9 = uVar19;
    if (0 < (int)uVar17) {
      do {
        iVar1 = (int)uVar9;
        if (iVar1 == (iVar1 / 3 + (iVar1 >> 0x1f) +
                     (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * 3) {
          uVar17 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar17;
          lVar7 = (longlong)(int)(uVar17 - iVar1) * 4;
          uVar9 = uVar19;
          uVar11 = uVar19;
          if (0 < lVar7) {
            do {
              uVar17 = (int)uVar11 + 4;
              *(undefined4 *)((longlong)puVar4 + uVar9 + (longlong)iVar1 * 4) =
                   *(undefined4 *)((longlong)puVar4 + uVar9 + 4 + (longlong)iVar1 * 4);
              uVar9 = uVar9 + 4;
              uVar11 = (ulonglong)uVar17;
            } while ((int)uVar17 < lVar7);
          }
        }
        uVar9 = (ulonglong)(iVar1 + 1U);
      } while ((int)(iVar1 + 1U) < (int)uVar6);
    }
    uVar17 = (uint)uVar6;
    iVar1 = local_c8 + -1;
    if (-1 < iVar1) {
      uStack_94 = 0xffffffff;
      do {
        uVar14 = 0;
        iVar18 = (int)uVar6;
        lVar7 = 0;
        if (0 < iVar18) {
          do {
            if (puVar4[lVar7] == *(int *)(local_d0 + (longlong)iVar1 * 8)) goto LAB_143768dce;
            uVar14 = uVar14 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar18);
        }
        uVar14 = 0xffffffff;
        lVar7 = -1;
LAB_143768dce:
        FUN_143762f50(local_res20,uVar14 != 0xffffffff,"idx != -1",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x8c);
        uVar17 = iVar18 - 1;
        uVar6 = (ulonglong)uVar17;
        if (uVar17 != uVar14) {
          puVar4[lVar7] = puVar4[(int)uVar17];
        }
        iVar1 = iVar1 + -1;
        local_e8 = CONCAT44(uStack_94,iVar1);
        local_98 = iVar1;
      } while (-1 < iVar1);
    }
    FUN_143762f50(&local_e0,uVar17 == 0,"keys.getSize() == 0",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x8f);
    iVar1 = local_c8 + -1;
    if (-1 < iVar1) {
      uStack_a4 = 0xffffffff;
      do {
        lVar7 = (longlong)iVar1;
        iVar18 = *(int *)(local_d0 + 4 + lVar7 * 8) * 10;
        *(int *)(local_d0 + 4 + lVar7 * 8) = iVar18;
        FUN_143762f50(local_df,*(int *)(local_d0 + 4 + lVar7 * 8) == iVar18,
                      "pmap.getValue(it) == val * 10",
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                      ,0x99);
        iVar1 = iVar1 + -1;
        local_e8 = CONCAT44(uStack_a4,iVar1);
        local_a8 = iVar1;
      } while (-1 < iVar1);
    }
    uVar3 = FUN_143703a50();
    if (-1 < (int)uVar16) {
      FUN_143702e10(uVar3,puVar4,4,uVar16 & 0x3fffffff);
    }
    thunk_FUN_143734820(local_c0);
    uVar3 = FUN_143703a50();
    local_c8 = 0;
    if (-1 < (int)local_c4) {
      FUN_143702e10(uVar3,local_d0,8,local_c4 & 0x3fffffff);
    }
    uVar15 = uVar15 + 1;
    if (199 < (int)uVar15) {
      return;
    }
  } while( true );
}



// FUNCTION 143768f60 FUN_143768f60 body=452 status=ok
// SIG undefined FUN_143768f60(void)

/* WARNING: Removing unreachable block (ram,0x000143768fb1) */

void FUN_143768f60(void)

{
  undefined8 uVar1;
  float fVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 *local_78;
  int *local_70;
  undefined8 *local_68;
  int *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  int local_48;
  uint local_44;
  undefined1 local_40 [8];
  int local_38;
  undefined8 *local_30;
  int *local_28;
  undefined4 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_44 = 0x80000000;
  local_50 = 0;
  local_48 = 0;
  FUN_143734b10(local_40);
  uVar1 = FUN_143703a50();
  if ((local_44 & 0x3fffffff) == 0) {
    FUN_14370c310(uVar1,&local_50,1,8);
  }
  if (local_38 * 2 < 3) {
    FUN_143734990(local_40,1);
  }
  fVar2 = (float)FUN_143762fd0();
  local_res8[0] = (int)fVar2;
  local_res10[0] = 1;
  local_78 = &local_50;
  local_70 = local_res8;
  local_68 = &local_50;
  local_60 = local_res8;
  local_58 = local_res10;
  local_30 = &local_50;
  local_28 = local_res8;
  local_20 = local_res10;
  local_18 = &local_68;
  local_10 = &local_78;
  FUN_14376c7c0(&local_78);
  if (0 < local_48) {
    local_48 = 0;
    FUN_1437347e0(local_40);
  }
  uVar1 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar1,local_50,8,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  FUN_143734820(local_40);
  FUN_14376bed0(&local_30,FUN_1437661b0);
  FUN_14376bed0(&local_30,&LAB_1437661a0);
  FUN_14376bed0(&local_30,&LAB_143766120);
  FUN_14376bed0(&local_30,FUN_143766050);
  FUN_14376bed0(&local_30,FUN_1437660b0);
  thunk_FUN_143734820(local_40);
  uVar1 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar1,local_50,8,local_44 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143769130 FUN_143769130 body=452 status=ok
// SIG undefined FUN_143769130(void)

/* WARNING: Removing unreachable block (ram,0x000143769181) */

void FUN_143769130(void)

{
  undefined8 uVar1;
  float fVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 *local_78;
  int *local_70;
  undefined8 *local_68;
  int *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  int local_48;
  uint local_44;
  undefined1 local_40 [8];
  int local_38;
  undefined8 *local_30;
  int *local_28;
  undefined4 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_44 = 0x80000000;
  local_50 = 0;
  local_48 = 0;
  FUN_143734b10(local_40);
  uVar1 = FUN_143703a50();
  if ((local_44 & 0x3fffffff) == 0) {
    FUN_14370c310(uVar1,&local_50,1,8);
  }
  if (local_38 * 2 < 3) {
    FUN_143734990(local_40,1);
  }
  fVar2 = (float)FUN_143762fd0();
  local_res8[0] = (int)fVar2;
  local_res10[0] = 1;
  local_78 = &local_50;
  local_70 = local_res8;
  local_68 = &local_50;
  local_60 = local_res8;
  local_58 = local_res10;
  local_30 = &local_50;
  local_28 = local_res8;
  local_20 = local_res10;
  local_18 = &local_68;
  local_10 = &local_78;
  FUN_14376bca0(&local_78);
  if (0 < local_48) {
    local_48 = 0;
    FUN_1437347e0(local_40);
  }
  uVar1 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar1,local_50,8,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  FUN_143734820(local_40);
  FUN_14376c050(&local_30,FUN_143766010);
  FUN_14376c050(&local_30,&LAB_1437661f0);
  FUN_14376c050(&local_30,&LAB_143766000);
  FUN_14376c050(&local_30,FUN_143765fa0);
  FUN_14376c050(&local_30,FUN_143766130);
  thunk_FUN_143734820(local_40);
  uVar1 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar1,local_50,8,local_44 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143769300 FUN_143769300 body=3690 status=ok
// SIG undefined FUN_143769300(void)

void FUN_143769300(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res8;
  int local_resc;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  int local_res24;
  longlong local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f [7];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  
  uVar7 = 0;
  local_4c = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  uVar2 = FUN_143703a50();
  FUN_14376e390(&local_58,uVar2,8);
  local_38 = 0x8ae;
  local_34 = 0x8ae;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  uVar6 = uVar7;
  do {
    uVar1 = hkPseudoRandomGenerator::getRandInt16(&local_38,1000);
    uVar2 = FUN_143703a50();
    if (local_70 == (local_6c & 0x3fffffff)) {
      FUN_14370c460(uVar2,&local_78,4);
    }
    local_res8 = 1;
    *(undefined4 *)(local_78 + (longlong)(int)local_70 * 4) = uVar1;
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
    lVar4 = local_78 + (longlong)(int)local_70 * 4;
    local_resc = (int)uVar6;
    local_70 = local_70 + 1;
    uVar2 = FUN_143703a50();
    FUN_14376def0(&local_58,uVar2,lVar4,&local_res8);
    FUN_14376b4e0(&local_res8);
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while ((int)uVar5 < 8);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x13c);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res20 = 1;
  local_res24 = -0x14;
  uVar6 = uVar7;
  uVar8 = uVar7;
  do {
    puVar3 = (uint *)FUN_14376d630(&local_58,local_res18,local_78 + uVar6,&local_res20);
    FUN_143762f50(&local_res8,~*puVar3 >> 0x1f,"map.get(keys[i], &valOut).isSuccess()",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x143);
    FUN_143762f50(local_res10,local_res24 == (int)uVar8,"valOut.m_value == i",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x144);
    uVar5 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar5;
    uVar6 = uVar6 + 4;
  } while ((int)uVar5 < 8);
  FUN_14376b4e0(&local_res20);
  lVar4 = local_78;
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffffff;
  uVar2 = FUN_143703a50();
  FUN_14376def0(&local_58,uVar2,lVar4 + 0x1c,&local_res8);
  FUN_14376b4e0(&local_res8);
  lVar4 = local_78;
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xfffffffe;
  uVar2 = FUN_143703a50();
  FUN_14376def0(&local_58,uVar2,lVar4 + 0x18,&local_res8);
  FUN_14376b4e0(&local_res8);
  lVar4 = local_78;
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xfffffffd;
  uVar2 = FUN_143703a50();
  FUN_14376def0(&local_58,uVar2,lVar4 + 0x14,&local_res8);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x14d);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res20 = 1;
  local_res24 = -0x14;
  uVar6 = uVar7;
  do {
    puVar3 = (uint *)FUN_14376d630(&local_58,local_res18,local_78 + uVar7,&local_res20);
    FUN_143762f50(&local_res8,~*puVar3 >> 0x1f,"map.get(keys[i], &valOut).isSuccess()",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x154);
    FUN_143762f50(local_res10,local_res24 == (int)uVar6,"valOut.m_value == i",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x155);
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    uVar7 = uVar7 + 4;
  } while ((int)uVar5 < 5);
  puVar3 = (uint *)FUN_14376d630(&local_58,local_res10,local_78 + 0x14,&local_res20);
  FUN_143762f50(&local_res8,~*puVar3 >> 0x1f,"map.get(keys[5], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x157);
  FUN_143762f50(&local_res8,local_res24 == -3,"valOut.m_value == -3",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x158);
  puVar3 = (uint *)FUN_14376d630(&local_58,local_res10,local_78 + 0x18,&local_res20);
  FUN_143762f50(&local_res8,~*puVar3 >> 0x1f,"map.get(keys[6], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x159);
  FUN_143762f50(&local_res8,local_res24 == -2,"valOut.m_value == -2",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15a);
  puVar3 = (uint *)FUN_14376d630(&local_58,local_res10,local_78 + 0x1c,&local_res20);
  FUN_143762f50(&local_res8,~*puVar3 >> 0x1f,"map.get(keys[7], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15b);
  FUN_143762f50(&local_res8,local_res24 == -1,"valOut.m_value == -1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15c);
  local_res10[0] = 20000;
  puVar3 = (uint *)FUN_14376d630(&local_58,local_res18,local_res10,&local_res20);
  FUN_143762f50(&local_res8,*puVar3 >> 0x1f,"!map.get(20000, &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15e);
  local_res10[0] = -10;
  puVar3 = (uint *)FUN_14376d630(&local_58,local_res18,local_res10,&local_res20);
  FUN_143762f50(&local_res8,*puVar3 >> 0x1f,"!map.get(-10, &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15f);
  FUN_14376b4e0(&local_res20);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x163);
  uVar2 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar2,local_78,4,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  uVar2 = FUN_143703a50();
  FUN_14376d400(&local_58,uVar2);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 0,"PodCountLiveObjects::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x165);
  DAT_146b83ed4 = 0;
  DAT_146b83ed0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0xffffffff;
  uVar2 = FUN_143703a50();
  FUN_14376e3c0(&local_78,uVar2,8);
  DAT_146b83ed4 = DAT_146b83ed4 + 5;
  local_48 = 1;
  local_44 = 2;
  local_68 = 3;
  local_40[0] = 4;
  local_38 = 5;
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 5,"ObjKey::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x177);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 1;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_48,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 2;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_44,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 3;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_68,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 4;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,local_40,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 5;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_38,&local_res8);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x180);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x181);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,&local_48,&local_res8);
  FUN_143762f50(local_res10,*(int *)(lVar4 + 4) == 1,
                "map.getWithDefault(key1, PodCountLiveObjects(-100)).m_value == 1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x185);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,&local_44,&local_res8);
  FUN_143762f50(local_res18,*(int *)(lVar4 + 4) == 2,
                "map.getWithDefault(key2, PodCountLiveObjects(-100)).m_value == 2",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x186);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,&local_68,&local_res8);
  FUN_143762f50(&local_res20,*(int *)(lVar4 + 4) == 3,
                "map.getWithDefault(key3, PodCountLiveObjects(-100)).m_value == 3",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x187);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,local_40,&local_res8);
  FUN_143762f50(&local_64,*(int *)(lVar4 + 4) == 4,
                "map.getWithDefault(key4, PodCountLiveObjects(-100)).m_value == 4",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x188);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,&local_38,&local_res8);
  FUN_143762f50(&local_63,*(int *)(lVar4 + 4) == 5,
                "map.getWithDefault(key5, PodCountLiveObjects(-100)).m_value == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x189);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x18d);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x18e);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 6;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_68,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376d710(&local_78,&local_68,&local_res8);
  FUN_143762f50(&local_62,*(int *)(lVar4 + 4) == 6,
                "map.getWithDefault(key3, PodCountLiveObjects(-100)).m_value == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x193);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x197);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x198);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10[0] = 1;
  local_res10[1] = 7;
  local_res8 = 6;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_res8,local_res10);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(local_res10);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10[0] = 1;
  local_res10[1] = 0xffffff9c;
  local_res8 = 6;
  lVar4 = FUN_14376d710(&local_78,&local_res8,local_res10);
  FUN_143762f50(&local_61,*(int *)(lVar4 + 4) == 7,
                "map.getWithDefault(ObjKey(6), PodCountLiveObjects(-100)).m_value == 7",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x19d);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(local_res10);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0xb,"ObjKey::s_totalLiveObjectCount == 11",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a0);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 6,"PodCountLiveObjects::s_totalLiveObjectCount == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a1);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10[0] = 1;
  local_res10[1] = 8;
  local_res8 = 2;
  uVar2 = FUN_143703a50();
  FUN_14376df60(&local_78,uVar2,&local_res8,local_res10);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(local_res10);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res10[0] = 1;
  local_res10[1] = 0xffffff9c;
  local_res8 = 2;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  lVar4 = FUN_14376d710(&local_78,&local_res8,local_res10);
  FUN_143762f50(&local_60,*(int *)(lVar4 + 4) == 8,
                "map.getWithDefault(ObjKey(2), PodCountLiveObjects(-100)).m_value == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a6);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(local_res10);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0xb,"ObjKey::s_totalLiveObjectCount == 11",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a9);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 6,"PodCountLiveObjects::s_totalLiveObjectCount == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1aa);
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res8 = 1;
  FUN_14376e080(&local_78,local_res10,&local_res8);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1af);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b0);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10[0] = 1;
  local_res10[1] = 0xffffff9c;
  local_res8 = 1;
  lVar4 = FUN_14376d710(&local_78,&local_res8,local_res10);
  FUN_143762f50(local_5f,*(int *)(lVar4 + 4) == -100,
                "map.getWithDefault(ObjKey(1), PodCountLiveObjects(-100)).m_value == -100",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b3);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(local_res10);
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res8 = 1;
  FUN_14376e080(&local_78,local_res10,&local_res8);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_143762f50(&local_res8,local_res10[0] < 0,"!res.isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b9);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1ba);
  DAT_146b83ed4 = DAT_146b83ed4 + -5;
  uVar2 = FUN_143703a50();
  FUN_14376d460(&local_78,uVar2);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0,"ObjKey::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1bc);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 0,"PodCountLiveObjects::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1bd);
  return;
}



// FUNCTION 14376a170 FUN_14376a170 body=4459 status=ok
// SIG undefined FUN_14376a170(void)

void FUN_14376a170(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_res8;
  int local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  uint local_78;
  uint local_74;
  undefined1 local_70 [8];
  int local_68;
  longlong local_60;
  int local_58;
  uint local_54;
  undefined1 local_50 [8];
  int local_48;
  
  uVar10 = 0;
  local_54 = 0x80000000;
  local_60 = 0;
  local_58 = 0;
  FUN_143734b10(local_50);
  uVar3 = FUN_143703a50();
  if ((local_54 & 0x3fffffff) < 8) {
    uVar5 = (local_54 & 0x3fffffff) * 2;
    uVar9 = 8;
    if (8 < uVar5) {
      uVar9 = uVar5;
    }
    FUN_14370c310(uVar3,&local_60,uVar9,0xc);
  }
  if (local_48 * 2 < 0x18) {
    FUN_143734990(local_50,8);
  }
  local_88 = 0x8ae;
  local_84 = 0x8ae;
  local_80 = 0;
  uVar9 = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  uVar12 = uVar10;
  do {
    uVar2 = hkPseudoRandomGenerator::getRandInt16(&local_88,1000);
    uVar3 = FUN_143703a50();
    if (local_78 == (local_74 & 0x3fffffff)) {
      FUN_14370c460(uVar3,&local_80,4);
    }
    local_res8 = 1;
    *(undefined4 *)(local_80 + (longlong)(int)local_78 * 4) = uVar2;
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
    lVar4 = (longlong)(int)local_78;
    local_resc = (int)uVar12;
    local_78 = local_78 + 1;
    FUN_14376d890(&local_60,local_80 + lVar4 * 4,&local_res8);
    FUN_14376b4e0(&local_res8);
    uVar5 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar5;
  } while ((int)uVar5 < 8);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x13c);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  iVar7 = -0x14;
  iVar8 = -0x14;
  local_res1c = -0x14;
  local_res18 = 1;
  uVar12 = uVar10;
  uVar11 = uVar10;
  do {
    lVar4 = FUN_14376cc90(&local_60,local_80 + uVar11);
    if (lVar4 == 0) {
      uVar5 = 0x80040200;
    }
    else {
      FUN_14376b660(&local_res18,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
      iVar8 = local_res1c;
      uVar5 = uVar9;
    }
    FUN_143762f50(&local_res8,~uVar5 >> 0x1f,"map.get(keys[i], &valOut).isSuccess()",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x143);
    FUN_143762f50(&local_res10,iVar8 == (int)uVar12,"valOut.m_value == i",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x144);
    uVar5 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar5;
    uVar11 = uVar11 + 4;
  } while ((int)uVar5 < 8);
  FUN_14376b4e0(&local_res18);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffffff;
  FUN_14376d890(&local_60,local_80 + 0x1c,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xfffffffe;
  FUN_14376d890(&local_60,local_80 + 0x18,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xfffffffd;
  FUN_14376d890(&local_60,local_80 + 0x14,&local_res8);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x14d);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res20 = 1;
  local_res24 = -0x14;
  uVar12 = uVar10;
  do {
    lVar4 = FUN_14376cc90(&local_60,local_80 + uVar12);
    if (lVar4 == 0) {
      uVar5 = 0x80040200;
    }
    else {
      FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
      iVar7 = local_res24;
      uVar5 = uVar9;
    }
    FUN_143762f50(&local_res8,~uVar5 >> 0x1f,"map.get(keys[i], &valOut).isSuccess()",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x154);
    FUN_143762f50(&local_res10,iVar7 == (int)uVar10,"valOut.m_value == i",
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                  ,0x155);
    uVar5 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar5;
    uVar12 = uVar12 + 4;
  } while ((int)uVar5 < 5);
  lVar4 = FUN_14376cc90(&local_60,local_80 + 0x14);
  if (lVar4 == 0) {
    uVar5 = 0x80040200;
  }
  else {
    FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
    iVar7 = local_res24;
    uVar5 = uVar9;
  }
  FUN_143762f50(&local_res8,~uVar5 >> 0x1f,"map.get(keys[5], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x157);
  FUN_143762f50(&local_res8,iVar7 == -3,"valOut.m_value == -3",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x158);
  lVar4 = FUN_14376cc90(&local_60,local_80 + 0x18);
  if (lVar4 == 0) {
    uVar5 = 0x80040200;
  }
  else {
    FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
    iVar7 = local_res24;
    uVar5 = uVar9;
  }
  FUN_143762f50(&local_res10,~uVar5 >> 0x1f,"map.get(keys[6], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x159);
  FUN_143762f50(&local_res8,iVar7 == -2,"valOut.m_value == -2",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15a);
  lVar4 = FUN_14376cc90(&local_60,local_80 + 0x1c);
  if (lVar4 == 0) {
    uVar5 = 0x80040200;
  }
  else {
    FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
    iVar7 = local_res24;
    uVar5 = uVar9;
  }
  FUN_143762f50(&local_res18,~uVar5 >> 0x1f,"map.get(keys[7], &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15b);
  FUN_143762f50(&local_res8,iVar7 == -1,"valOut.m_value == -1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15c);
  local_res8 = 20000;
  lVar4 = FUN_14376cc90(&local_60,&local_res8);
  if (lVar4 == 0) {
    uVar5 = 0x80040200;
  }
  else {
    FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
    uVar5 = uVar9;
  }
  FUN_143762f50(&local_res10,uVar5 >> 0x1f,"!map.get(20000, &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15e);
  local_res10 = 0xfffffff6;
  lVar4 = FUN_14376cc90(&local_60,&local_res10);
  if (lVar4 == 0) {
    uVar5 = 0x80040200;
  }
  else {
    FUN_14376b660(&local_res20,local_60 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
    uVar5 = uVar9;
  }
  FUN_143762f50(&local_res8,uVar5 >> 0x1f,"!map.get(-10, &valOut).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x15f);
  FUN_14376b4e0(&local_res20);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 8,"PodCountLiveObjects::s_totalLiveObjectCount == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x163);
  uVar3 = FUN_143703a50();
  local_78 = 0;
  if (-1 < (int)local_74) {
    FUN_143702e10(uVar3,local_80,4,local_74 & 0x3fffffff);
  }
  local_80 = 0;
  local_74 = 0x80000000;
  thunk_FUN_143734820(local_50);
  uVar3 = FUN_143703a50();
  iVar8 = local_58 + -1;
  if (-1 < iVar8) {
    lVar4 = local_60 + ((longlong)iVar8 * 3 + 1) * 4;
    do {
      FUN_14376b4e0(lVar4);
      lVar4 = lVar4 + -0xc;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  local_58 = 0;
  if (-1 < (int)local_54) {
    FUN_143702e10(uVar3,local_60,0xc,local_54 & 0x3fffffff);
  }
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 0,"PodCountLiveObjects::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x165);
  DAT_146b83ed4 = 0;
  DAT_146b83ed0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  FUN_143734b10(local_70);
  uVar3 = FUN_143703a50();
  if ((local_74 & 0x3fffffff) < 8) {
    uVar1 = (local_74 & 0x3fffffff) * 2;
    uVar5 = 8;
    if (8 < uVar1) {
      uVar5 = uVar1;
    }
    FUN_14370c310(uVar3,&local_80,uVar5,0xc);
  }
  if (local_68 * 2 < 0x18) {
    FUN_143734990(local_70,8);
  }
  DAT_146b83ed4 = DAT_146b83ed4 + 5;
  local_res18 = 1;
  local_98 = 2;
  local_res20 = 3;
  local_94 = 4;
  local_90[0] = 5;
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 5,"ObjKey::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x177);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 1;
  FUN_14376db10(&local_80,&local_res18,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 2;
  FUN_14376db10(&local_80,&local_98,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 3;
  FUN_14376db10(&local_80,&local_res20,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 4;
  FUN_14376db10(&local_80,&local_94,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 5;
  FUN_14376db10(&local_80,local_90,&local_res8);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x180);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x181);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_88 = 1;
  local_84 = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,&local_res18);
  if (lVar4 == 0) {
    puVar6 = &local_88;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res10,puVar6[1] == 1,
                "map.getWithDefault(key1, PodCountLiveObjects(-100)).m_value == 1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x185);
  FUN_14376b4e0(&local_88);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res18 = 1;
  local_res1c = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,&local_98);
  if (lVar4 == 0) {
    puVar6 = &local_res18;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res8,puVar6[1] == 2,
                "map.getWithDefault(key2, PodCountLiveObjects(-100)).m_value == 2",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x186);
  FUN_14376b4e0(&local_res18);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res18 = 1;
  local_res1c = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,&local_res20);
  if (lVar4 == 0) {
    puVar6 = &local_res18;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res10,puVar6[1] == 3,
                "map.getWithDefault(key3, PodCountLiveObjects(-100)).m_value == 3",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x187);
  FUN_14376b4e0(&local_res18);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res18 = 1;
  local_res1c = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,&local_94);
  if (lVar4 == 0) {
    puVar6 = &local_res18;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res8,puVar6[1] == 4,
                "map.getWithDefault(key4, PodCountLiveObjects(-100)).m_value == 4",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x188);
  FUN_14376b4e0(&local_res18);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,local_90);
  if (lVar4 == 0) {
    puVar6 = &local_res8;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res10,puVar6[1] == 5,
                "map.getWithDefault(key5, PodCountLiveObjects(-100)).m_value == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x189);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x18d);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x18e);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 6;
  FUN_14376db10(&local_80,&local_res20,&local_res8);
  FUN_14376b4e0(&local_res8);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  local_res8 = 1;
  local_resc = 0xffffff9c;
  lVar4 = FUN_14376ccf0(&local_80,&local_res20);
  if (lVar4 == 0) {
    puVar6 = &local_res8;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res18,puVar6[1] == 6,
                "map.getWithDefault(key3, PodCountLiveObjects(-100)).m_value == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x193);
  FUN_14376b4e0(&local_res8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x197);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x198);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res18 = 1;
  local_res1c = 7;
  local_res8 = 6;
  FUN_14376db10(&local_80,&local_res8,&local_res18);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(&local_res18);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res20 = 1;
  local_res24 = 0xffffff9c;
  local_res8 = 6;
  lVar4 = FUN_14376ccf0(&local_80,&local_res8);
  if (lVar4 == 0) {
    puVar6 = &local_res20;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res10,puVar6[1] == 7,
                "map.getWithDefault(ObjKey(6), PodCountLiveObjects(-100)).m_value == 7",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x19d);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(&local_res20);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0xb,"ObjKey::s_totalLiveObjectCount == 11",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a0);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 6,"PodCountLiveObjects::s_totalLiveObjectCount == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a1);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10 = 1;
  local_res14 = 8;
  local_res8 = 2;
  FUN_14376db10(&local_80,&local_res8,&local_res10);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(&local_res10);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res10 = 1;
  local_res14 = 0xffffff9c;
  local_res8 = 2;
  lVar4 = FUN_14376ccf0(&local_80,&local_res8);
  if (lVar4 == 0) {
    puVar6 = &local_res10;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res18,puVar6[1] == 8,
                "map.getWithDefault(ObjKey(2), PodCountLiveObjects(-100)).m_value == 8",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a6);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(&local_res10);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0xb,"ObjKey::s_totalLiveObjectCount == 11",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1a9);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 6,"PodCountLiveObjects::s_totalLiveObjectCount == 6",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1aa);
  iVar8 = DAT_146b83ed4 + 1;
  local_res8 = 1;
  DAT_146b83ed4 = iVar8;
  lVar4 = FUN_14376ccf0(&local_80,&local_res8);
  if (lVar4 != 0) {
    FUN_14376cfd0(&local_80,lVar4);
    iVar8 = DAT_146b83ed4;
  }
  DAT_146b83ed4 = iVar8 + -1;
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1af);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b0);
  DAT_146b83ed0 = DAT_146b83ed0 + 1;
  DAT_146b83ed4 = DAT_146b83ed4 + 1;
  local_res18 = 1;
  local_res1c = 0xffffff9c;
  local_res8 = 1;
  lVar4 = FUN_14376ccf0(&local_80,&local_res8);
  if (lVar4 == 0) {
    puVar6 = &local_res18;
  }
  else {
    puVar6 = (undefined4 *)(local_80 + ((longlong)*(int *)(lVar4 + 4) * 3 + 1) * 4);
  }
  FUN_143762f50(&local_res10,puVar6[1] == -100,
                "map.getWithDefault(ObjKey(1), PodCountLiveObjects(-100)).m_value == -100",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b3);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  FUN_14376b4e0(&local_res18);
  iVar8 = DAT_146b83ed4 + 1;
  local_res8 = 1;
  DAT_146b83ed4 = iVar8;
  lVar4 = FUN_14376ccf0(&local_80,&local_res8);
  uVar5 = 0x80040200;
  if (lVar4 != 0) {
    FUN_14376cfd0(&local_80,lVar4);
    iVar8 = DAT_146b83ed4;
    uVar5 = uVar9;
  }
  DAT_146b83ed4 = iVar8 + -1;
  FUN_143762f50(&local_res8,uVar5 >> 0x1f,"!res.isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b8);
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 10,"ObjKey::s_totalLiveObjectCount == 10",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1b9);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 5,"PodCountLiveObjects::s_totalLiveObjectCount == 5",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1ba);
  DAT_146b83ed4 = DAT_146b83ed4 + -5;
  thunk_FUN_143734820(local_70);
  uVar3 = FUN_143703a50();
  lVar4 = (longlong)(int)(local_78 + -1);
  if (-1 < (int)(local_78 + -1)) {
    puVar6 = (undefined4 *)(local_80 + lVar4 * 0xc);
    do {
      FUN_14376b4e0(puVar6 + 1);
      DAT_146b83ed4 = DAT_146b83ed4 + -1;
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  local_78 = 0;
  if (-1 < (int)local_74) {
    FUN_143702e10(uVar3,local_80,0xc,local_74 & 0x3fffffff);
  }
  FUN_143762f50(&local_res8,DAT_146b83ed4 == 0,"ObjKey::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1bc);
  FUN_143762f50(&local_res8,DAT_146b83ed0 == 0,"PodCountLiveObjects::s_totalLiveObjectCount == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x1bd);
  return;
}



// FUNCTION 14376b2e0 FUN_14376b2e0 body=337 status=ok
// SIG undefined FUN_14376b2e0(void)

void FUN_14376b2e0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined4 local_res8 [2];
  undefined *local_res10;
  undefined8 local_res18;
  undefined4 uVar4;
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  local_ac = 0x80000000;
  local_b8 = 0;
  local_b0 = 0;
  FUN_143734b10(local_a8);
  local_res8[0] = 1;
  local_res10 = &DAT_145b8c23c;
  FUN_14376d9d0(&local_b8,&local_res10,local_res8);
  uVar4 = 0;
  FUN_1437452b0(&local_98,&DAT_145b12884,&DAT_145b9ef6c,&DAT_145b9ef6c,0,0,0);
  local_res18 = local_98;
  local_res10 = (undefined *)((ulonglong)local_res10 & 0xffffffff00000000);
  lVar1 = FUN_14374cc60(&local_b8,&local_res18);
  if (lVar1 == 0) {
    ppuVar3 = &local_res10;
  }
  else {
    ppuVar3 = (undefined **)(local_b8 + 8 + (longlong)*(int *)(lVar1 + 4) * 0x10);
  }
  FUN_143762f50(local_res8,*(int *)ppuVar3 == 1,"map.getWithDefault(foo, 0) == 1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,CONCAT44(uVar4,0x1c8));
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  local_98 = 0;
  local_8c = 0x80000000;
  thunk_FUN_143734820(local_a8);
  uVar2 = FUN_143703a50();
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(uVar2,local_b8,0x10,local_ac & 0x3fffffff);
  }
  return;
}



// FUNCTION 14376b440 FUN_14376b440 body=157 status=ok
// SIG undefined FUN_14376b440(void)

void FUN_14376b440(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + *param_1;
    do {
      FUN_143716650(lVar2 + 8);
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x10,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14376b4e0 FUN_14376b4e0 body=73 status=ok
// SIG undefined FUN_14376b4e0(void)

void FUN_14376b4e0(int *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143762f50(local_res8,*param_1 != 0,"m_live","UnitTest\\Algorithm\\Maps.cpp",0x1b);
  DAT_146b83ed0 = DAT_146b83ed0 + -1;
  param_1[1] = -1;
  *param_1 = 0;
  return;
}



// FUNCTION 14376b530 FUN_14376b530 body=289 status=ok
// SIG undefined FUN_14376b530(void)

longlong * FUN_14376b530(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1,iVar2,0x10);
  }
  iVar7 = ((int)param_1[1] - iVar2) + -1;
  if (-1 < iVar7) {
    lVar5 = (longlong)iVar7 * 0x10 + (longlong)iVar2 * 0x10 + *param_1;
    do {
      FUN_143716650(lVar5 + 8);
      FUN_143716650(lVar5);
      lVar5 = lVar5 + -0x10;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  iVar7 = iVar2;
  if ((int)param_1[1] < iVar2) {
    iVar7 = (int)param_1[1];
  }
  FUN_143766200(*param_1,lVar3,iVar7);
  lVar5 = *param_1;
  if (0 < iVar2 - iVar7) {
    uVar8 = (ulonglong)(uint)(iVar2 - iVar7);
    lVar6 = (longlong)iVar7 * 0x10 + lVar3;
    do {
      lVar1 = (lVar5 - lVar3) + lVar6;
      if (lVar1 != 0) {
        FUN_1437165f0(lVar1,lVar6);
        FUN_1437165f0((lVar5 - lVar3) + 8 + lVar6,lVar6 + 8);
      }
      lVar6 = lVar6 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14376b660 FUN_14376b660 body=75 status=ok
// SIG undefined FUN_14376b660(void)

int * FUN_14376b660(int *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143762f50(local_res8,*param_1 != 0,"m_live","UnitTest\\Algorithm\\Maps.cpp",0x13);
  param_1[1] = *(int *)(param_2 + 4);
  return param_1;
}



// FUNCTION 14376b6b0 FUN_14376b6b0 body=154 status=ok
// SIG undefined FUN_14376b6b0(void)

void FUN_14376b6b0(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  FUN_143766850(param_2,local_res20,param_3,local_res10);
  FUN_143762f50(local_res10,-1 < local_res20[0],"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x11d);
  FUN_143762f50(local_res10,*(int *)(*param_2 + 4 + (longlong)local_res20[0] * 8) == *param_4,
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x11e);
  return;
}



// FUNCTION 14376b750 FUN_14376b750 body=1187 status=ok
// SIG undefined FUN_14376b750(void)

void FUN_14376b750(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  int local_res10 [2];
  int local_res18 [4];
  
  uVar8 = 0;
  FUN_143762f50(&local_res8,*(int *)(*param_1 + 8) != 0,"pmap.getSize() != 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xc6);
  FUN_143762f50(&local_res8,*(int *)(*param_1 + 8) != 0,"!pmap.isEmpty()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,199);
  iVar6 = *(int *)(*param_1 + 8) + -1;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xc9);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xca);
  lVar3 = FUN_14376cd80(*param_1,param_1[1]);
  if (lVar3 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(lVar3 + 4);
  }
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcc);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcd);
  lVar3 = FUN_14376cd80(*param_1,param_1[1]);
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(lVar3 + 4);
  }
  FUN_143762f50(local_res10,~uVar5 >> 0x1f,"pmap.contains(key)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xce);
  lVar3 = FUN_14376cd80(*param_1,param_1[1]);
  uVar5 = 0x80040200;
  if (lVar3 != 0) {
    uVar5 = 0;
  }
  FUN_143762f50(&local_res8,~uVar5 >> 0x1f,"pmap.get(key, &dummy).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcf);
  plVar1 = (longlong *)*param_1;
  local_res8._0_4_ = -1;
  lVar3 = FUN_14376cd80(plVar1,param_1[1]);
  if (lVar3 == 0) {
    piVar7 = (int *)&local_res8;
  }
  else {
    piVar7 = (int *)(*plVar1 + 4 + (longlong)*(int *)(lVar3 + 4) * 8);
  }
  FUN_143762f50(local_res18,*piVar7 == *(int *)param_1[2],"pmap.getWithDefault(key, -1) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd0);
  FUN_143766720(*param_1,&local_res8,param_1[1],&local_res8);
  cVar2 = FUN_14376dc50(*param_1,param_1[1],param_1[2]);
  FUN_143762f50(&local_res8,cVar2 == '\0',"!pmap.insert(key, val)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd4);
  plVar1 = (longlong *)*param_1;
  lVar3 = plVar1[1];
  FUN_143766720(plVar1,&local_res8,param_1[1],&local_res8);
  *(undefined4 *)(*plVar1 + 4 + (longlong)(int)local_res8 * 8) = *(undefined4 *)param_1[2];
  FUN_143762f50(&local_res8,(int)lVar3 == *(int *)(*param_1 + 8),"size == pmap.getSize()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd7);
  local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
  puVar4 = (undefined8 *)FUN_1437663a0(*param_1,local_res10,param_1[1],&local_res8);
  local_res8 = *puVar4;
  iVar6 = (int)local_res8;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd9);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xda);
  puVar4 = (undefined8 *)FUN_143766980(*param_1,local_res10,param_1[1],&local_res8);
  local_res8 = *puVar4;
  iVar6 = (int)local_res8;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdc);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdd);
  plVar1 = (longlong *)*param_1;
  local_res10[0] = -1;
  FUN_1437663a0(plVar1,local_res18,param_1[1],local_res10);
  FUN_143762f50(&local_res8,
                *(int *)(*plVar1 + 4 + (longlong)local_res18[0] * 8) == *(int *)param_1[2],
                "pmap.getOrInsertKey(key, -1) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xde);
  plVar1 = (longlong *)*param_1;
  FUN_143766980(plVar1,local_res10,param_1[1],&local_res8);
  FUN_143762f50(&local_res8,
                *(int *)(*plVar1 + 4 + (longlong)local_res10[0] * 8) == *(int *)param_1[2],
                "pmap.getOrInsertKeyWithFunctor(key, []() { return -2; }) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdf);
  if ((*(int *)(*param_1 + 8) == 0) || (*(int *)(*param_1 + 0x18) != 0)) {
    uVar8 = 1;
  }
  FUN_143762f50(&local_res8,uVar8,"pmap.isOk()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xe8);
  return;
}



// FUNCTION 14376bc00 FUN_14376bc00 body=154 status=ok
// SIG undefined FUN_14376bc00(void)

void FUN_14376bc00(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  FUN_1437664e0(param_2,local_res20,param_3,local_res10);
  FUN_143762f50(local_res10,-1 < local_res20[0],"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x11d);
  FUN_143762f50(local_res10,*(int *)(*param_2 + 4 + (longlong)local_res20[0] * 8) == *param_4,
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x11e);
  return;
}



// FUNCTION 14376bca0 FUN_14376bca0 body=545 status=ok
// SIG undefined FUN_14376bca0(void)

void FUN_14376bca0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  uVar4 = 0;
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) == 0,"pmap.getSize() == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xaf);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) == 0,"pmap.isEmpty()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb0);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) + -1 < 0,"!pmap.isValid(pmap.getIterator())",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb1);
  lVar2 = FUN_14376cd80(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
  }
  FUN_143762f50(local_res10,uVar3 >> 0x1f,"!pmap.isValid(pmap.find(key))",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb2);
  lVar2 = FUN_14376cd80(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
  }
  FUN_143762f50(local_res8,uVar3 >> 0x1f,"!pmap.contains(key)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb3);
  lVar2 = FUN_14376cd80(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0x80040200;
  }
  else {
    FUN_14376d130(*param_1,lVar2);
    uVar3 = 0;
  }
  FUN_143762f50(local_res10,uVar3 >> 0x1f,"pmap.remove(key).isFailure()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb4);
  lVar2 = FUN_14376cd80(*param_1,param_1[1]);
  uVar3 = 0x80040200;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  FUN_143762f50(local_res8,uVar3 >> 0x1f,"pmap.get(key, &dummy).isFailure()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb5);
  plVar1 = (longlong *)*param_1;
  local_res8[0] = -1;
  lVar2 = FUN_14376cd80(plVar1,param_1[1]);
  if (lVar2 == 0) {
    piVar5 = local_res8;
  }
  else {
    piVar5 = (int *)(*plVar1 + 4 + (longlong)*(int *)(lVar2 + 4) * 8);
  }
  FUN_143762f50(local_res18,*piVar5 == -1,"pmap.getWithDefault(key, -1) == -1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb6);
  if ((*(int *)(*param_1 + 8) == 0) || (*(int *)(*param_1 + 0x18) != 0)) {
    uVar4 = 1;
  }
  FUN_143762f50(local_res8,uVar4,"pmap.isOk()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xbd);
  return;
}



// FUNCTION 14376bed0 FUN_14376bed0 body=370 status=ok
// SIG undefined FUN_14376bed0(void)

void FUN_14376bed0(longlong *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int local_res8;
  uint uStackX_c;
  
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376c1d0(param_1[3]);
  plVar1 = (longlong *)*param_1;
  iVar3 = (int)plVar1[1] + -1;
  if (((int)plVar1[3] != -1) || (lVar5 = plVar1[2] + -8, *(int *)(plVar1[2] + -4) != iVar3)) {
    lVar5 = FUN_14376cc30(plVar1,*plVar1 + (longlong)iVar3 * 8);
  }
  FUN_14376ceb0(plVar1,lVar5);
  FUN_14376c7c0(param_1[4]);
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376c1d0(param_1[3]);
  plVar1 = (longlong *)*param_1;
  lVar5 = FUN_14376cc30(plVar1);
  if (lVar5 == 0) {
    local_res8 = -1;
    uStackX_c = 0xffffffff;
  }
  else {
    local_res8 = *(int *)(lVar5 + 4);
    uStackX_c = (uint)(lVar5 - plVar1[2] >> 3);
  }
  if ((*(uint *)(plVar1 + 3) < uStackX_c) ||
     (lVar5 = plVar1[2] + (longlong)(int)uStackX_c * 8,
     *(int *)(plVar1[2] + 4 + (longlong)(int)uStackX_c * 8) != local_res8)) {
    lVar5 = FUN_14376cc30(plVar1,*plVar1 + (longlong)local_res8 * 8);
  }
  FUN_14376ceb0(plVar1,lVar5);
  FUN_14376c7c0(param_1[4]);
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376c1d0(param_1[3]);
  lVar5 = *param_1;
  lVar2 = FUN_14376cc30(lVar5,param_1[1]);
  if (lVar2 == 0) {
    uVar4 = 0x80040200;
  }
  else {
    FUN_14376ceb0(lVar5,lVar2);
    uVar4 = 0;
  }
  FUN_143762f50(&local_res8,~uVar4 >> 0x1f,"pmap.remove(key).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xfe);
  FUN_14376c7c0(param_1[4]);
  return;
}



// FUNCTION 14376c050 FUN_14376c050 body=370 status=ok
// SIG undefined FUN_14376c050(void)

void FUN_14376c050(longlong *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int local_res8;
  uint uStackX_c;
  
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376b750(param_1[3]);
  plVar1 = (longlong *)*param_1;
  iVar3 = (int)plVar1[1] + -1;
  if (((int)plVar1[3] != -1) || (lVar5 = plVar1[2] + -8, *(int *)(plVar1[2] + -4) != iVar3)) {
    lVar5 = FUN_14376cd80(plVar1,*plVar1 + (longlong)iVar3 * 8);
  }
  FUN_14376d130(plVar1,lVar5);
  FUN_14376bca0(param_1[4]);
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376b750(param_1[3]);
  plVar1 = (longlong *)*param_1;
  lVar5 = FUN_14376cd80(plVar1);
  if (lVar5 == 0) {
    local_res8 = -1;
    uStackX_c = 0xffffffff;
  }
  else {
    local_res8 = *(int *)(lVar5 + 4);
    uStackX_c = (uint)(lVar5 - plVar1[2] >> 3);
  }
  if ((*(uint *)(plVar1 + 3) < uStackX_c) ||
     (lVar5 = plVar1[2] + (longlong)(int)uStackX_c * 8,
     *(int *)(plVar1[2] + 4 + (longlong)(int)uStackX_c * 8) != local_res8)) {
    lVar5 = FUN_14376cd80(plVar1,*plVar1 + (longlong)local_res8 * 8);
  }
  FUN_14376d130(plVar1,lVar5);
  FUN_14376bca0(param_1[4]);
  (*param_2)(*param_1,param_1[1],param_1[2]);
  FUN_14376b750(param_1[3]);
  lVar5 = *param_1;
  lVar2 = FUN_14376cd80(lVar5,param_1[1]);
  if (lVar2 == 0) {
    uVar4 = 0x80040200;
  }
  else {
    FUN_14376d130(lVar5,lVar2);
    uVar4 = 0;
  }
  FUN_143762f50(&local_res8,~uVar4 >> 0x1f,"pmap.remove(key).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xfe);
  FUN_14376bca0(param_1[4]);
  return;
}



// FUNCTION 14376c1d0 FUN_14376c1d0 body=1187 status=ok
// SIG undefined FUN_14376c1d0(void)

void FUN_14376c1d0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  int local_res10 [2];
  int local_res18 [4];
  
  uVar8 = 0;
  FUN_143762f50(&local_res8,*(int *)(*param_1 + 8) != 0,"pmap.getSize() != 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xc6);
  FUN_143762f50(&local_res8,*(int *)(*param_1 + 8) != 0,"!pmap.isEmpty()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,199);
  iVar6 = *(int *)(*param_1 + 8) + -1;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xc9);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xca);
  lVar3 = FUN_14376cc30(*param_1,param_1[1]);
  if (lVar3 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(lVar3 + 4);
  }
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcc);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcd);
  lVar3 = FUN_14376cc30(*param_1,param_1[1]);
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(lVar3 + 4);
  }
  FUN_143762f50(local_res10,~uVar5 >> 0x1f,"pmap.contains(key)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xce);
  lVar3 = FUN_14376cc30(*param_1,param_1[1]);
  uVar5 = 0x80040200;
  if (lVar3 != 0) {
    uVar5 = 0;
  }
  FUN_143762f50(&local_res8,~uVar5 >> 0x1f,"pmap.get(key, &dummy).isSuccess()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xcf);
  plVar1 = (longlong *)*param_1;
  local_res8._0_4_ = -1;
  lVar3 = FUN_14376cc30(plVar1,param_1[1]);
  if (lVar3 == 0) {
    piVar7 = (int *)&local_res8;
  }
  else {
    piVar7 = (int *)(*plVar1 + 4 + (longlong)*(int *)(lVar3 + 4) * 8);
  }
  FUN_143762f50(local_res18,*piVar7 == *(int *)param_1[2],"pmap.getWithDefault(key, -1) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd0);
  FUN_143766ab0(*param_1,&local_res8,param_1[1],&local_res8);
  cVar2 = FUN_14376d780(*param_1,param_1[1],param_1[2]);
  FUN_143762f50(&local_res8,cVar2 == '\0',"!pmap.insert(key, val)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd4);
  plVar1 = (longlong *)*param_1;
  lVar3 = plVar1[1];
  FUN_143766ab0(plVar1,&local_res8,param_1[1],&local_res8);
  *(undefined4 *)(*plVar1 + 4 + (longlong)(int)local_res8 * 8) = *(undefined4 *)param_1[2];
  FUN_143762f50(&local_res8,(int)lVar3 == *(int *)(*param_1 + 8),"size == pmap.getSize()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd7);
  local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
  puVar4 = (undefined8 *)FUN_143766270(*param_1,local_res10,param_1[1],&local_res8);
  local_res8 = *puVar4;
  iVar6 = (int)local_res8;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xd9);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xda);
  puVar4 = (undefined8 *)FUN_143766600(*param_1,local_res10,param_1[1],&local_res8);
  local_res8 = *puVar4;
  iVar6 = (int)local_res8;
  FUN_143762f50(&local_res8,-1 < iVar6,"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdc);
  FUN_143762f50(&local_res8,
                *(int *)(*(longlong *)*param_1 + 4 + (longlong)iVar6 * 8) == *(int *)param_1[2],
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdd);
  plVar1 = (longlong *)*param_1;
  local_res10[0] = -1;
  FUN_143766270(plVar1,local_res18,param_1[1],local_res10);
  FUN_143762f50(&local_res8,
                *(int *)(*plVar1 + 4 + (longlong)local_res18[0] * 8) == *(int *)param_1[2],
                "pmap.getOrInsertKey(key, -1) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xde);
  plVar1 = (longlong *)*param_1;
  FUN_143766600(plVar1,local_res10,param_1[1],&local_res8);
  FUN_143762f50(&local_res8,
                *(int *)(*plVar1 + 4 + (longlong)local_res10[0] * 8) == *(int *)param_1[2],
                "pmap.getOrInsertKeyWithFunctor(key, []() { return -2; }) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xdf);
  if ((*(int *)(*param_1 + 8) == 0) || (*(int *)(*param_1 + 0x18) != 0)) {
    uVar8 = 1;
  }
  FUN_143762f50(&local_res8,uVar8,"pmap.isOk()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xe8);
  return;
}



// FUNCTION 14376c680 FUN_14376c680 body=149 status=ok
// SIG undefined FUN_14376c680(void)

void FUN_14376c680(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  FUN_143766270(param_2,local_res20);
  FUN_143762f50(local_res10,-1 < local_res20[0],"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x117);
  FUN_143762f50(local_res10,*(int *)(*param_2 + 4 + (longlong)local_res20[0] * 8) == *param_4,
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x118);
  return;
}



// FUNCTION 14376c720 FUN_14376c720 body=149 status=ok
// SIG undefined FUN_14376c720(void)

void FUN_14376c720(undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  FUN_1437663a0(param_2,local_res20);
  FUN_143762f50(local_res10,-1 < local_res20[0],"pmap.isValid(iter)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x117);
  FUN_143762f50(local_res10,*(int *)(*param_2 + 4 + (longlong)local_res20[0] * 8) == *param_4,
                "pmap.getValue(iter) == val",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0x118);
  return;
}



// FUNCTION 14376c7c0 FUN_14376c7c0 body=545 status=ok
// SIG undefined FUN_14376c7c0(void)

void FUN_14376c7c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  uVar4 = 0;
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) == 0,"pmap.getSize() == 0",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xaf);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) == 0,"pmap.isEmpty()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb0);
  FUN_143762f50(local_res8,*(int *)(*param_1 + 8) + -1 < 0,"!pmap.isValid(pmap.getIterator())",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb1);
  lVar2 = FUN_14376cc30(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
  }
  FUN_143762f50(local_res10,uVar3 >> 0x1f,"!pmap.isValid(pmap.find(key))",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb2);
  lVar2 = FUN_14376cc30(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 4);
  }
  FUN_143762f50(local_res8,uVar3 >> 0x1f,"!pmap.contains(key)",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb3);
  lVar2 = FUN_14376cc30(*param_1,param_1[1]);
  if (lVar2 == 0) {
    uVar3 = 0x80040200;
  }
  else {
    FUN_14376ceb0(*param_1,lVar2);
    uVar3 = 0;
  }
  FUN_143762f50(local_res10,uVar3 >> 0x1f,"pmap.remove(key).isFailure()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb4);
  lVar2 = FUN_14376cc30(*param_1,param_1[1]);
  uVar3 = 0x80040200;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  FUN_143762f50(local_res8,uVar3 >> 0x1f,"pmap.get(key, &dummy).isFailure()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb5);
  plVar1 = (longlong *)*param_1;
  local_res8[0] = -1;
  lVar2 = FUN_14376cc30(plVar1,param_1[1]);
  if (lVar2 == 0) {
    piVar5 = local_res8;
  }
  else {
    piVar5 = (int *)(*plVar1 + 4 + (longlong)*(int *)(lVar2 + 4) * 8);
  }
  FUN_143762f50(local_res18,*piVar5 == -1,"pmap.getWithDefault(key, -1) == -1",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xb6);
  if ((*(int *)(*param_1 + 8) == 0) || (*(int *)(*param_1 + 0x18) != 0)) {
    uVar4 = 1;
  }
  FUN_143762f50(local_res8,uVar4,"pmap.isOk()",
                "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/UnitTest/Algorithm/Maps.h"
                ,0xbd);
  return;
}



// FUNCTION 14376c9f0 FUN_14376c9f0 body=187 status=ok
// SIG undefined FUN_14376c9f0(void)

ulonglong FUN_14376c9f0(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14376e420(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  iVar1 = *param_3;
  lVar3 = *param_1;
  uVar4 = iVar1 * -0x61c8864f;
  uVar5 = (ulonglong)
          ((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)((longlong)param_1 + 0xc));
  iVar2 = *(int *)(lVar3 + uVar5 * 0xc);
  do {
    if (iVar2 == -1) {
LAB_14376ca78:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      if (*param_4 == 0) {
        FUN_14376b4e0(*param_1 + (uVar5 * 3 + 1) * 4);
      }
      return uVar5;
    }
    if (*(int *)(lVar3 + uVar5 * 0xc) == iVar1) {
      *param_4 = 0;
      goto LAB_14376ca78;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)((longlong)param_1 + 0xc));
    iVar2 = *(int *)(lVar3 + uVar5 * 0xc);
  } while( true );
}



// FUNCTION 14376cab0 FUN_14376cab0 body=194 status=ok
// SIG undefined FUN_14376cab0(void)

ulonglong FUN_14376cab0(longlong *param_1,undefined8 param_2,uint *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14376e590(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  uVar3 = (ulonglong)(*param_3 & *(uint *)((longlong)param_1 + 0xc));
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + uVar3 * 0xc);
  do {
    if (lVar2 == 0) {
LAB_14376cb32:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      if (*param_4 == 0) {
        DAT_146b83ed4 = DAT_146b83ed4 + -1;
        *(undefined4 *)(*param_1 + uVar3 * 0xc) = 0xffffffff;
        FUN_14376b4e0(*param_1 + uVar3 * 0xc + 4);
      }
      return uVar3;
    }
    if (*(uint *)(lVar1 + uVar3 * 0xc) == *param_3) {
      *param_4 = 0;
      goto LAB_14376cb32;
    }
    uVar3 = (ulonglong)((int)uVar3 + 1U & *(uint *)((longlong)param_1 + 0xc));
    lVar2 = *(longlong *)(lVar1 + uVar3 * 0xc);
  } while( true );
}



// FUNCTION 14376cb80 FUN_14376cb80 body=167 status=ok
// SIG undefined FUN_14376cb80(void)

void FUN_14376cb80(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14376e700(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = FUN_143766be0(param_3,0);
  lVar2 = *param_1;
  uVar4 = (ulonglong)(uVar3 & uVar1);
  if (*(int *)(lVar2 + uVar4 * 8) != -1) {
    do {
      if (*(int *)(lVar2 + uVar4 * 8) == *param_3) {
        *param_4 = 0;
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & uVar1);
    } while (*(int *)(lVar2 + uVar4 * 8) != -1);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
  return;
}



// FUNCTION 14376cc30 FUN_14376cc30 body=92 status=ok
// SIG undefined FUN_14376cc30(void)

longlong FUN_14376cc30(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar5 * 8) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 14376cc90 FUN_14376cc90 body=96 status=ok
// SIG undefined FUN_14376cc90(void)

longlong FUN_14376cc90(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar5 * 0xc) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 14376ccf0 FUN_14376ccf0 body=133 status=ok
// SIG undefined FUN_14376ccf0(void)

longlong FUN_14376ccf0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = FUN_143766bd0(param_2,0);
  uVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2];
  iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
  if (-1 < iVar4) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar4 * 0xc) == *param_2) {
        return lVar1 + uVar3 * 8;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1U & *(uint *)(param_1 + 3));
      iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 14376cd80 FUN_14376cd80 body=108 status=ok
// SIG undefined FUN_14376cd80(void)

longlong FUN_14376cd80(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = FUN_143766be0(param_2,0);
  uVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2];
  iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
  if (-1 < iVar4) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar4 * 8) == *param_2) {
        return lVar1 + uVar3 * 8;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1U & *(uint *)(param_1 + 3));
      iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 14376cdf0 FUN_14376cdf0 body=177 status=ok
// SIG undefined FUN_14376cdf0(void)

longlong FUN_14376cdf0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*param_2 & 0xfffffffffffffffe) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143740180();
  }
  uVar4 = (ulonglong)(uVar2 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2] + uVar4 * 8;
  iVar3 = *(int *)(param_1[2] + 4 + uVar4 * 8);
  do {
    if (iVar3 < 0) {
      return 0;
    }
    if ((*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x10) & 0xfffffffffffffffe) == 0) {
      iVar3 = -(uint)((*param_2 & 0xfffffffffffffffe) != 0);
LAB_14376ce6b:
      if (iVar3 == 0) {
        return lVar1;
      }
    }
    else if ((*param_2 & 0xfffffffffffffffe) != 0) {
      iVar3 = hkString::strCmp();
      goto LAB_14376ce6b;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
    lVar1 = param_1[2] + uVar4 * 8;
    iVar3 = *(int *)(param_1[2] + 4 + uVar4 * 8);
  } while( true );
}



// FUNCTION 14376ceb0 FUN_14376ceb0 body=275 status=ok
// SIG undefined FUN_14376ceb0(void)

void FUN_14376ceb0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_14376cc30(param_1,*param_1 + (longlong)(int)uVar4 * 8);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined4 *)(*param_1 + (longlong)(int)uVar2 * 8);
    lVar5 = 2;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 8) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined4 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 14376cfd0 FUN_14376cfd0 body=350 status=ok
// SIG undefined FUN_14376cfd0(void)

void FUN_14376cfd0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_14376ccf0(param_1,*param_1 + (longlong)(int)uVar4 * 0xc);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar8 = *param_1;
  lVar5 = (longlong)(int)uVar2 * 0xc;
  FUN_14376b4e0(lVar8 + 4 + lVar5);
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  *(undefined4 *)(lVar8 + lVar5) = 0xffffffff;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar6 = (undefined4 *)(*param_1 + lVar5);
    lVar5 = 3;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 0xc) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined4 *)(lVar8 + (longlong)puVar6);
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



// FUNCTION 14376d130 FUN_14376d130 body=275 status=ok
// SIG undefined FUN_14376d130(void)

void FUN_14376d130(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_14376cd80(param_1,*param_1 + (longlong)(int)uVar4 * 8);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined4 *)(*param_1 + (longlong)(int)uVar2 * 8);
    lVar5 = 2;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 8) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined4 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 14376d250 FUN_14376d250 body=166 status=ok
// SIG undefined FUN_14376d250(void)

void FUN_14376d250(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
    return;
  }
  iVar3 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar2 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar4 + *param_1) != -1) {
        FUN_14376b4e0(*param_1 + ((longlong)iVar3 * 3 + 1) * 4);
        *(undefined4 *)(lVar4 + *param_1) = 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
    return;
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 14376d300 FUN_14376d300 body=183 status=ok
// SIG undefined FUN_14376d300(void)

void FUN_14376d300(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
    return;
  }
  uVar3 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar2 = (longlong)iVar1;
  uVar4 = uVar3;
  if (iVar1 < 1) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  }
  else {
    do {
      if (*(longlong *)(uVar4 + *param_1) != 0) {
        DAT_146b83ed4 = DAT_146b83ed4 + -1;
        *(undefined4 *)(uVar4 + *param_1) = 0xffffffff;
        FUN_14376b4e0(*param_1 + ((longlong)(int)uVar3 * 3 + 1) * 4);
        *(undefined8 *)(uVar4 + *param_1) = 0;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      lVar2 = lVar2 + -1;
      uVar4 = uVar4 + 0xc;
    } while (lVar2 != 0);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  }
  return;
}



// FUNCTION 14376d3c0 FUN_14376d3c0 body=50 status=ok
// SIG undefined FUN_14376d3c0(void)

void FUN_14376d3c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
    lVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(*param_1 + lVar2 * 8) != -1) {
          *(undefined4 *)(*param_1 + lVar2 * 8) = 0xffffffff;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 14376d400 FUN_14376d400 body=84 status=ok
// SIG undefined FUN_14376d400(void)

void FUN_14376d400(longlong *param_1,longlong *param_2)

{
  FUN_14376d250();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0xc);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14376d460 FUN_14376d460 body=84 status=ok
// SIG undefined FUN_14376d460(void)

void FUN_14376d460(longlong *param_1,longlong *param_2)

{
  FUN_14376d300();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0xc);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14376d4c0 FUN_14376d4c0 body=82 status=ok
// SIG undefined FUN_14376d4c0(void)

void FUN_14376d4c0(longlong *param_1,longlong *param_2)

{
  FUN_14376d3c0();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,*(int *)((longlong)param_1 + 0xc) * 8 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14376d520 FUN_14376d520 body=80 status=ok
// SIG undefined FUN_14376d520(void)

ulonglong FUN_14376d520(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *param_2;
    lVar4 = *param_1;
    uVar5 = iVar2 * -0x61c8864f;
    uVar6 = (ulonglong)
            ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000)
            & uVar1);
    iVar3 = *(int *)(lVar4 + uVar6 * 0xc);
    while (iVar3 != -1) {
      if (*(int *)(lVar4 + uVar6 * 0xc) == iVar2) {
        return uVar6;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1U & uVar1);
      iVar3 = *(int *)(lVar4 + uVar6 * 0xc);
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 14376d570 FUN_14376d570 body=68 status=ok
// SIG undefined FUN_14376d570(void)

ulonglong FUN_14376d570(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_1;
    uVar4 = (ulonglong)(*param_2 & uVar1);
    lVar3 = *(longlong *)(lVar2 + uVar4 * 0xc);
    while (lVar3 != 0) {
      if (*(uint *)(lVar2 + uVar4 * 0xc) == *param_2) {
        return uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & uVar1);
      lVar3 = *(longlong *)(lVar2 + uVar4 * 0xc);
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 14376d5c0 FUN_14376d5c0 body=105 status=ok
// SIG undefined FUN_14376d5c0(void)

ulonglong FUN_14376d5c0(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = FUN_143766be0(param_2,0);
    lVar2 = *param_1;
    uVar4 = (ulonglong)(uVar3 & uVar1);
    if (*(int *)(lVar2 + uVar4 * 8) != -1) {
      do {
        if (*(int *)(lVar2 + uVar4 * 8) == *param_2) {
          return uVar4;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1U & uVar1);
      } while (*(int *)(lVar2 + uVar4 * 8) != -1);
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 14376d630 FUN_14376d630 body=112 status=ok
// SIG undefined FUN_14376d630(void)

undefined4 *
FUN_14376d630(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_14376d520(param_1,param_3);
  if (iVar1 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_14376b660(param_4,*param_1 + ((longlong)iVar1 * 3 + 1) * 4);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376d6a0 FUN_14376d6a0 body=100 status=ok
// SIG undefined FUN_14376d6a0(void)

undefined4 *
FUN_14376d6a0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14376d5c0(param_1,param_3);
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = *param_1;
    *param_2 = 0;
    *param_4 = *(undefined4 *)(lVar1 + 4 + (longlong)iVar2 * 8);
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376d710 FUN_14376d710 body=107 status=ok
// SIG undefined FUN_14376d710(void)

longlong FUN_14376d710(longlong *param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar2) {
    lVar3 = *param_1;
    uVar5 = (ulonglong)(*param_2 & uVar2);
    lVar1 = uVar5 * 0xc;
    lVar4 = *(longlong *)(lVar3 + lVar1);
    while (lVar4 != 0) {
      if (*(uint *)(lVar3 + lVar1) == *param_2) {
        return lVar3 + 4 + lVar1;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1U & uVar2);
      lVar1 = uVar5 * 0xc;
      lVar4 = *(longlong *)(lVar3 + lVar1);
    }
  }
  return param_3;
}



// FUNCTION 14376d780 FUN_14376d780 body=271 status=ok
// SIG undefined FUN_14376d780(void)

longlong FUN_14376d780(longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_2;
  uVar8 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar5 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar5[1] * 8) == iVar2) {
        iVar2 = *param_3;
        *(int *)(*param_1 + 4 + (longlong)(int)puVar5[1] * 8) = iVar2;
        return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar5 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar5 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar5 = uVar8;
  puVar5[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar1 = *param_2;
  iVar2 = *param_3;
  piVar1[1] = iVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}



// FUNCTION 14376d890 FUN_14376d890 body=317 status=ok
// SIG undefined FUN_14376d890(void)

undefined8 FUN_14376d890(longlong *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_2;
  uVar8 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar5 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar5[1] * 0xc) == iVar2) {
        FUN_14376b660(*param_1 + 4 + (longlong)(int)puVar5[1] * 0xc,param_3);
        return 0;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar5 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar5 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar5 = uVar8;
  puVar5[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0xc);
  }
  lVar4 = *param_1 + (longlong)(int)param_1[1] * 0xc;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 4) = 1;
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar1 = *param_2;
  FUN_14376b660(piVar1 + 1,param_3);
  return 1;
}



// FUNCTION 14376d9d0 FUN_14376d9d0 body=316 status=ok
// SIG undefined FUN_14376d9d0(void)

longlong FUN_14376d9d0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  if (*param_2 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar4 = FUN_143740180();
    uVar9 = (ulonglong)uVar4;
  }
  iVar5 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar9) * 8);
  puVar1 = (undefined4 *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar9) * 8);
  while( true ) {
    if (iVar5 < 0) {
      lVar3 = param_1[1];
      *puVar1 = (int)uVar9;
      puVar1[1] = (int)lVar3;
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_1,0x10);
      }
      plVar7 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *plVar7 = *param_2;
      uVar2 = *param_3;
      *(undefined4 *)(plVar7 + 1) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
    lVar3 = *(longlong *)((longlong)(int)puVar1[1] * 0x10 + *param_1);
    if ((lVar3 == *param_2) ||
       (((lVar3 != 0 && (*param_2 != 0)) && (iVar5 = hkString::strCmp(), iVar5 == 0)))) break;
    lVar3 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar5 = *(int *)(lVar3 + 4 + uVar8 * 8);
    puVar1 = (undefined4 *)(lVar3 + uVar8 * 8);
  }
  uVar2 = *param_3;
  *(undefined4 *)(*param_1 + 8 + (longlong)(int)puVar1[1] * 0x10) = uVar2;
  return (ulonglong)(uint3)((uint)uVar2 >> 8) << 8;
}



// FUNCTION 14376db10 FUN_14376db10 body=320 status=ok
// SIG undefined FUN_14376db10(void)

undefined8 FUN_14376db10(longlong *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = FUN_143766bd0(param_2,0);
  puVar6 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar4) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar4) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0xc) == *param_2) {
        FUN_14376b660(*param_1 + 4 + (longlong)(int)puVar6[1] * 0xc,param_3);
        return 0;
      }
      lVar3 = param_1[2];
      uVar5 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar6 = (uint *)(lVar3 + uVar5 * 8);
    } while (-1 < *(int *)(lVar3 + 4 + uVar5 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar6 = uVar4;
  puVar6[1] = uVar2;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,0xc);
  }
  lVar3 = *param_1 + (longlong)(int)param_1[1] * 0xc;
  if (lVar3 != 0) {
    DAT_146b83ed4 = DAT_146b83ed4 + 1;
    *(undefined4 *)(lVar3 + 4) = 1;
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar1 = *param_2;
  FUN_14376b660(piVar1 + 1,param_3);
  return 1;
}



// FUNCTION 14376dc50 FUN_14376dc50 body=294 status=ok
// SIG undefined FUN_14376dc50(void)

longlong FUN_14376dc50(longlong *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_143766be0(param_2,0);
  puVar8 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == *param_2) {
        iVar4 = *param_3;
        *(int *)(*param_1 + 4 + (longlong)(int)puVar8[1] * 8) = iVar4;
        return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
      }
      lVar5 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar5 + uVar7 * 8);
    } while (-1 < *(int *)(lVar5 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar6;
  puVar8[1] = uVar3;
  uVar9 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar9,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  piVar2 = (int *)(*param_1 + (longlong)(int)param_1[1] * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar2 = *param_2;
  iVar4 = *param_3;
  piVar2[1] = iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



// FUNCTION 14376dd80 FUN_14376dd80 body=361 status=ok
// SIG undefined FUN_14376dd80(void)

undefined8 FUN_14376dd80(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  if ((*param_2 & 0xfffffffffffffffe) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143740180();
    uVar8 = (ulonglong)uVar2;
  }
  iVar3 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar8) * 8);
  puVar1 = (undefined4 *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar8) * 8);
  do {
    if (iVar3 < 0) {
      lVar7 = param_1[1];
      *puVar1 = (int)uVar8;
      puVar1[1] = (int)lVar7;
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1,0x10);
      }
      puVar5 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      lVar7 = (longlong)(int)param_1[1] * 0x10 + *param_1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      FUN_143716660(lVar7,param_2);
      FUN_143716660(lVar7 + 8,param_3);
      return 1;
    }
    if ((*(ulonglong *)(*param_1 + (longlong)(int)puVar1[1] * 0x10) & 0xfffffffffffffffe) == 0) {
      iVar3 = -(uint)((*param_2 & 0xfffffffffffffffe) != 0);
LAB_14376de1c:
      if (iVar3 == 0) {
        FUN_143716660((longlong)(int)puVar1[1] * 0x10 + *param_1 + 8,param_3);
        return 0;
      }
    }
    else if ((*param_2 & 0xfffffffffffffffe) != 0) {
      iVar3 = hkString::strCmp();
      goto LAB_14376de1c;
    }
    lVar7 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar7 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar3 = *(int *)(lVar7 + 4 + uVar6 * 8);
    puVar1 = (undefined4 *)(lVar7 + uVar6 * 8);
  } while( true );
}



// FUNCTION 14376def0 FUN_14376def0 body=108 status=ok
// SIG undefined FUN_14376def0(void)

undefined4 FUN_14376def0(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_res8;
  
  iVar1 = FUN_14376c9f0();
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 0xc) = *param_3;
  puVar2 = (undefined4 *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = *(undefined4 *)(param_4 + 4);
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
  }
  return local_res8;
}



// FUNCTION 14376df60 FUN_14376df60 body=117 status=ok
// SIG undefined FUN_14376df60(void)

undefined4 FUN_14376df60(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_res8;
  
  iVar1 = FUN_14376cab0();
  puVar2 = (undefined4 *)(*param_1 + (longlong)iVar1 * 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    DAT_146b83ed4 = DAT_146b83ed4 + 1;
  }
  puVar2 = (undefined4 *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = *(undefined4 *)(param_4 + 4);
    DAT_146b83ed0 = DAT_146b83ed0 + 1;
  }
  return local_res8;
}



// FUNCTION 14376dfe0 FUN_14376dfe0 body=82 status=ok
// SIG undefined FUN_14376dfe0(void)

undefined4
FUN_14376dfe0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res8;
  
  iVar2 = FUN_14376cb80();
  puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
  }
  *(undefined4 *)(*param_1 + 4 + (longlong)iVar2 * 8) = *param_4;
  return local_res8;
}



// FUNCTION 14376e040 FUN_14376e040 body=61 status=ok
// SIG undefined FUN_14376e040(void)

undefined8 FUN_14376e040(void)

{
  FUN_143767f90();
  FUN_143767a40();
  FUN_1437684d0();
  FUN_143768a00();
  FUN_143768f60();
  FUN_143769130();
  FUN_143769300();
  FUN_14376a170();
  FUN_14376b2e0();
  FUN_143766f40();
  return 0;
}



// FUNCTION 14376e080 FUN_14376e080 body=80 status=ok
// SIG undefined FUN_14376e080(void)

undefined4 * FUN_14376e080(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14376d570(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_14376e0d0(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e0d0 FUN_14376e0d0 body=287 status=ok
// SIG undefined FUN_14376e0d0(void)

void FUN_14376e0d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  ulonglong uVar5;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  DAT_146b83ed4 = DAT_146b83ed4 + -1;
  lVar1 = (param_2 & 0xffffffff) * 0xc;
  *(undefined4 *)(lVar1 + *param_1) = 0xffffffff;
  FUN_14376b4e0(*param_1 + 4 + lVar1);
  *(undefined8 *)(lVar1 + *param_1) = 0;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  lVar1 = *param_1;
  uVar4 = uVar3 + (int)param_2 & uVar3;
  uVar5 = (ulonglong)uVar4;
  lVar2 = *(longlong *)(lVar1 + uVar5 * 0xc);
  while (lVar2 != 0) {
    uVar4 = (int)uVar5 + uVar3 & uVar3;
    uVar5 = (ulonglong)uVar4;
    lVar2 = *(longlong *)(lVar1 + uVar5 * 0xc);
  }
  uVar5 = (ulonglong)((int)param_2 + 1U & uVar3);
  uVar4 = uVar4 + 1 & uVar3;
  lVar2 = uVar5 * 0xc;
  lVar1 = *(longlong *)(lVar1 + uVar5 * 0xc);
  while (lVar1 != 0) {
    lVar1 = *param_1;
    uVar3 = *(uint *)(lVar1 + lVar2) & uVar3;
    uVar6 = (uint)uVar5;
    uVar7 = (uint)param_2;
    if ((((uVar6 < uVar4) || (uVar3 <= uVar7)) &&
        ((uVar7 <= uVar6 || ((uVar3 <= uVar7 && (uVar6 < uVar3)))))) &&
       ((uVar3 <= uVar7 || (uVar4 <= uVar3)))) {
      FGenericPlatformString::Memcpy(lVar1 + (param_2 & 0xffffffff) * 0xc,lVar1 + lVar2,0xc);
      *(undefined8 *)(lVar2 + *param_1) = 0;
      param_2 = uVar5;
    }
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    uVar5 = (ulonglong)(uVar6 + 1 & uVar3);
    lVar2 = uVar5 * 0xc;
    lVar1 = *(longlong *)(lVar2 + *param_1);
  }
  return;
}



// FUNCTION 14376e1f0 FUN_14376e1f0 body=80 status=ok
// SIG undefined FUN_14376e1f0(void)

undefined4 * FUN_14376e1f0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14376d5c0(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_14376e240(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e240 FUN_14376e240 body=245 status=ok
// SIG undefined FUN_14376e240(void)

void FUN_14376e240(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 8) = 0xffffffff;
  uVar8 = *(uint *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  uVar9 = uVar8 + (int)param_2 & uVar8;
  uVar7 = (ulonglong)uVar9;
  iVar2 = *(int *)(lVar3 + uVar7 * 8);
  while (iVar2 != -1) {
    uVar9 = (int)uVar7 + uVar8 & uVar8;
    uVar7 = (ulonglong)uVar9;
    iVar2 = *(int *)(lVar3 + uVar7 * 8);
  }
  uVar7 = (ulonglong)((int)param_2 + 1U & uVar8);
  uVar9 = uVar9 + 1 & uVar8;
  lVar1 = uVar7 * 8;
  iVar2 = *(int *)(lVar3 + uVar7 * 8);
  while (iVar2 != -1) {
    lVar4 = *param_1;
    lVar3 = lVar4 + lVar1;
    uVar5 = FUN_143766be0(lVar3,0);
    uVar5 = uVar5 & uVar8;
    uVar6 = (uint)uVar7;
    uVar8 = (uint)param_2;
    if ((((uVar6 < uVar9) || (uVar5 <= uVar8)) &&
        ((uVar8 <= uVar6 || ((uVar5 <= uVar8 && (uVar6 < uVar5)))))) &&
       ((uVar5 <= uVar8 || (uVar9 <= uVar5)))) {
      FGenericPlatformString::Memcpy(lVar4 + (param_2 & 0xffffffff) * 8,lVar3,8);
      *(undefined4 *)(lVar1 + *param_1) = 0xffffffff;
      param_2 = uVar7;
    }
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    uVar7 = (ulonglong)(uVar6 + 1 & uVar8);
    lVar1 = uVar7 * 8;
    iVar2 = *(int *)(lVar1 + *param_1);
  }
  return;
}



// FUNCTION 14376e340 FUN_14376e340 body=80 status=ok
// SIG undefined FUN_14376e340(void)

undefined4 * FUN_14376e340(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14372a960(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_14372f930(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e390 FUN_14376e390 body=44 status=ok
// SIG undefined FUN_14376e390(void)

void FUN_14376e390(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 8;
  if (8 < param_3 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3 * 2);
  }
  FUN_14376e420(param_1,local_res18,param_2);
  return;
}



// FUNCTION 14376e3c0 FUN_14376e3c0 body=44 status=ok
// SIG undefined FUN_14376e3c0(void)

void FUN_14376e3c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 8;
  if (8 < param_3 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3 * 2);
  }
  FUN_14376e590(param_1,local_res18,param_2);
  return;
}



// FUNCTION 14376e3f0 FUN_14376e3f0 body=44 status=ok
// SIG undefined FUN_14376e3f0(void)

void FUN_14376e3f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 8;
  if (8 < param_3 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3 * 2);
  }
  FUN_14376e700(param_1,local_res18,param_2);
  return;
}



// FUNCTION 14376e420 FUN_14376e420 body=354 status=ok
// SIG undefined FUN_14376e420(void)

undefined4 * FUN_14376e420(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  int *local_res18;
  int local_res20;
  
  local_res20 = (int)param_1[1];
  piVar1 = (int *)*param_1;
  iVar2 = 8;
  if (8 < param_4) {
    iVar2 = param_4;
  }
  iVar8 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res10 = param_2;
  local_res18 = piVar1;
  lVar3 = (**(code **)(*param_3 + 8))(param_3,iVar2 * 0xc);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    lVar3 = (longlong)iVar2;
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar4 + *param_1) = 0xffffffff;
        lVar3 = lVar3 + -1;
        lVar4 = lVar4 + 0xc;
      } while (lVar3 != 0);
    }
    iVar5 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar3 = (longlong)iVar8;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + -1;
    piVar7 = piVar1;
    piVar6 = piVar1;
    if (0 < iVar8) {
      do {
        if (*piVar6 != -1) {
          iVar2 = FUN_14376c9f0(param_1,param_3,piVar1 + (longlong)iVar5 * 3,local_res8);
          FGenericPlatformString::Memcpy
                    (*param_1 + (longlong)iVar2 * 0xc,piVar1 + (longlong)iVar5 * 3,0xc);
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + -1;
        piVar7 = local_res18;
        piVar6 = piVar6 + 3;
        param_2 = local_res10;
      } while (lVar3 != 0);
    }
    if (-1 < local_res20) {
      (**(code **)(*param_3 + 0x10))(param_3,piVar7,iVar8 * 0xc);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e590 FUN_14376e590 body=354 status=ok
// SIG undefined FUN_14376e590(void)

undefined4 * FUN_14376e590(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  longlong *local_res18;
  int local_res20;
  
  local_res20 = (int)param_1[1];
  plVar2 = (longlong *)*param_1;
  iVar3 = 8;
  if (8 < param_4) {
    iVar3 = param_4;
  }
  iVar9 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res10 = param_2;
  local_res18 = plVar2;
  lVar4 = (**(code **)(*param_3 + 8))(param_3,iVar3 * 0xc);
  if (lVar4 != 0) {
    uVar6 = 0;
    *param_1 = lVar4;
    lVar4 = (longlong)iVar3;
    uVar5 = uVar6;
    if (0 < iVar3) {
      do {
        *(undefined8 *)(uVar5 + *param_1) = 0;
        lVar4 = lVar4 + -1;
        uVar5 = uVar5 + 0xc;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar3 + -1;
    lVar4 = (longlong)iVar9;
    plVar8 = plVar2;
    plVar7 = plVar2;
    if (0 < iVar9) {
      do {
        if (*plVar7 != 0) {
          lVar1 = (longlong)plVar2 + (longlong)(int)uVar6 * 0xc;
          iVar3 = FUN_14376cab0(param_1,param_3,lVar1,local_res8);
          FGenericPlatformString::Memcpy(*param_1 + (longlong)iVar3 * 0xc,lVar1,0xc);
        }
        uVar6 = (ulonglong)((int)uVar6 + 1);
        lVar4 = lVar4 + -1;
        plVar8 = local_res18;
        plVar7 = (longlong *)((longlong)plVar7 + 0xc);
        param_2 = local_res10;
      } while (lVar4 != 0);
    }
    if (-1 < local_res20) {
      (**(code **)(*param_3 + 0x10))(param_3,plVar8,iVar9 * 0xc);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e700 FUN_14376e700 body=311 status=ok
// SIG undefined FUN_14376e700(void)

undefined4 * FUN_14376e700(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res18 [8];
  int local_res20;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  iVar3 = 8;
  if (8 < param_4) {
    iVar3 = param_4;
  }
  iVar7 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res20 = iVar7;
  lVar4 = (**(code **)(*param_3 + 8))(param_3,iVar3 * 8);
  if (lVar4 != 0) {
    lVar5 = 0;
    *param_1 = lVar4;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(*param_1 + lVar5 * 8) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    lVar4 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar3 + -1;
    iVar6 = 0;
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        if (*(int *)(lVar1 + lVar4 * 8) != -1) {
          lVar5 = lVar1 + (longlong)iVar6 * 8;
          iVar3 = FUN_14376cb80(param_1,param_3,lVar5,local_res18);
          FGenericPlatformString::Memcpy(*param_1 + (longlong)iVar3 * 8,lVar5,8);
        }
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        iVar3 = local_res20;
      } while (lVar4 < iVar7);
    }
    if (-1 < (int)lVar2) {
      (**(code **)(*param_3 + 0x10))(param_3,lVar1,iVar3 * 8);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376e840 FUN_14376e840 body=8 status=ok
// SIG undefined FUN_14376e840(void)

char * FUN_14376e840(void)

{
  return "Unnamed";
}



// FUNCTION 14376e850 FUN_14376e850 body=150 status=ok
// SIG undefined FUN_14376e850(void)

undefined8 * FUN_14376e850(undefined8 *param_1,longlong param_2,int param_3)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = hkBufferedStreamWriter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  iVar3 = 0x10000;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  uVar2 = FUN_143703880(*(undefined8 *)((longlong)pvVar1 + 0x58),iVar3,0x40);
  param_1[4] = uVar2;
  *(int *)((longlong)param_1 + 0x2c) = iVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 14376e8f0 FUN_14376e8f0 body=84 status=ok
// SIG undefined FUN_14376e8f0(void)

undefined8 * FUN_14376e8f0(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  
  param_1[1] = 0;
  *param_1 = hkBufferedStreamWriter::vftable;
  iVar1 = param_3 + -1;
  if (param_4 == '\0') {
    iVar1 = param_3;
  }
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(int *)((longlong)param_1 + 0x2c) = iVar1;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 != '\0') {
    FUN_14370c720(param_2,0);
  }
  return param_1;
}



// FUNCTION 14376e950 FUN_14376e950 body=106 status=ok
// SIG undefined FUN_14376e950(void)

void FUN_14376e950(undefined8 *param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkBufferedStreamWriter::vftable;
  FUN_14376ea80();
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar1 = param_1[4];
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    FUN_1437038e0(*(undefined8 *)((longlong)pvVar2 + 0x58),uVar1);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14376e9c0 FUN_14376e9c0 body=136 status=ok
// SIG undefined FUN_14376e9c0(void)

longlong FUN_14376e9c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14376e950();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14376ea50 flush body=41 status=ok
// SIG undefined flush(void)

void hkBufferedStreamWriter::flush(longlong param_1)

{
  FUN_14376ea80();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014376ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}



// FUNCTION 14376ea80 FUN_14376ea80 body=101 status=ok
// SIG undefined FUN_14376ea80(void)

int FUN_14376ea80(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                        (*(longlong **)(param_1 + 0x18),
                         (longlong)iVar3 + *(longlong *)(param_1 + 0x20),iVar1 - iVar3);
      iVar3 = iVar3 + iVar2;
      if (iVar2 == 0) {
        return iVar3;
      }
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return iVar3;
}



// FUNCTION 14376eaf0 FUN_14376eaf0 body=76 status=ok
// SIG undefined FUN_14376eaf0(void)

undefined1 * FUN_14376eaf0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c);
  return param_2;
}



// FUNCTION 14376eb40 FUN_14376eb40 body=154 status=ok
// SIG undefined FUN_14376eb40(void)

undefined4 * FUN_14376eb40(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14376ea80();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4);
    return param_2;
  }
  iVar3 = param_3;
  if (param_4 != 0) {
    if (param_4 == 1) {
      iVar3 = *(int *)(param_1 + 0x28) + param_3;
    }
    else {
      iVar3 = -1;
      if (param_4 == 2) {
        iVar3 = *(int *)(param_1 + 0x28) - param_3;
      }
    }
  }
  uVar2 = 0;
  if (iVar3 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar3 <= *(int *)(param_1 + 0x2c)) goto LAB_14376ebbb;
  }
  iVar3 = iVar1;
  uVar2 = 0x80040200;
LAB_14376ebbb:
  *(int *)(param_1 + 0x28) = iVar3;
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14376ebe0 FUN_14376ebe0 body=67 status=ok
// SIG undefined FUN_14376ebe0(void)

undefined1 * FUN_14376ebe0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14376ec30 FUN_14376ec30 body=52 status=ok
// SIG undefined FUN_14376ec30(void)

int FUN_14376ec30(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    if (iVar1 < 0) {
      return -1;
    }
  }
  return *(int *)(param_1 + 0x28) + iVar1;
}



// FUNCTION 14376ec70 FUN_14376ec70 body=158 status=ok
// SIG undefined FUN_14376ec70(void)

int FUN_14376ec70(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28);
  iVar3 = param_3;
  if (iVar2 < param_3) {
    do {
      FUN_14370c700((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20),param_2,iVar2
                   );
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
      iVar1 = *(int *)(param_1 + 0x28);
      iVar3 = iVar3 - iVar2;
      param_2 = param_2 + iVar2;
      iVar2 = FUN_14376ea80(param_1);
      if (iVar2 != iVar1) {
        return param_3 - iVar3;
      }
      iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28);
    } while (iVar2 < iVar3);
  }
  FUN_14370c700((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20),param_2,iVar3);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar3;
  return param_3;
}



// FUNCTION 14376ed10 FUN_14376ed10 body=136 status=ok
// SIG undefined FUN_14376ed10(void)

undefined8 * FUN_14376ed10(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkArrayStreamWriter::vftable;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
    puVar3 = puVar2;
  }
  param_1[3] = puVar3;
  uVar4 = FUN_143703a50();
  param_1[4] = uVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  return param_1;
}



// FUNCTION 14376eda0 FUN_14376eda0 body=214 status=ok
// SIG undefined FUN_14376eda0(void)

void FUN_14376eda0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  LPVOID pvVar4;
  
  *param_1 = hkArrayStreamWriter::vftable;
  if (*(int *)(param_1 + 7) == 2) {
    puVar1 = (undefined8 *)param_1[3];
    uVar2 = param_1[4];
    *(undefined4 *)(puVar1 + 1) = 0;
    if (-1 < (int)*(uint *)((longlong)puVar1 + 0xc)) {
      FUN_143702e10(uVar2,*puVar1,1,*(uint *)((longlong)puVar1 + 0xc) & 0x3fffffff);
    }
    *puVar1 = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x80000000;
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar4 + 0x58),lVar3,0x10);
    }
  }
  if ((*(int *)(param_1 + 7) == 0) && (lVar3 = param_1[3], lVar3 != 0)) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar4 + 0x58),lVar3,0x10);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14376ee80 FUN_14376ee80 body=88 status=ok
// SIG undefined FUN_14376ee80(void)

void FUN_14376ee80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(lVar1 + 8) + 1;
  uVar3 = *(uint *)(lVar1 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar4) {
    iVar2 = uVar3 * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_14370c310(*(undefined8 *)(param_1 + 0x20),lVar1,iVar4,1);
  }
  *(undefined1 *)
   ((longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18)) = 0;
  return;
}



// FUNCTION 14376eee0 FUN_14376eee0 body=227 status=ok
// SIG undefined FUN_14376eee0(void)

undefined4 * FUN_14376eee0(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (param_4 == 0) {
    iVar7 = param_3 - *(int *)(param_1 + 0x30);
  }
  else if (param_4 == 1) {
    iVar7 = iVar7 + param_3;
  }
  else if (param_4 == 2) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 8) - param_3;
  }
  if (-1 < iVar7) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if ((int)plVar2[1] < iVar7) {
      uVar4 = *(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff;
      iVar1 = iVar7 + 1;
      if ((int)uVar4 < iVar1) {
        iVar6 = uVar4 * 2;
        iVar3 = iVar1;
        if (iVar1 < iVar6) {
          iVar3 = iVar6;
        }
        FUN_14370c310(*(undefined8 *)(param_1 + 0x20),plVar2,iVar3,1);
      }
      iVar6 = iVar1 - (int)plVar2[1];
      if (0 < iVar6) {
        puVar8 = (undefined1 *)((longlong)(int)plVar2[1] + *plVar2);
        for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
      *(int *)(plVar2 + 1) = iVar1;
      *(int *)(*(longlong *)(param_1 + 0x18) + 8) = iVar7;
    }
    *(int *)(param_1 + 0x28) = iVar7;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14376efd0 FUN_14376efd0 body=183 status=ok
// SIG undefined FUN_14376efd0(void)

int FUN_14376efd0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (int)plVar2[1];
  iVar4 = iVar1 - *(int *)(param_1 + 0x28);
  if (iVar4 < param_3) {
    iVar4 = (iVar1 - iVar4) + param_3;
    uVar5 = *(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff;
    iVar1 = iVar4 + 1;
    if ((int)uVar5 < iVar1) {
      iVar3 = uVar5 * 2;
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      FUN_14370c310(*(undefined8 *)(param_1 + 0x20),plVar2,iVar1,1);
    }
    *(int *)(*(longlong *)(param_1 + 0x18) + 8) = iVar4;
    *(undefined1 *)((longlong)iVar4 + **(longlong **)(param_1 + 0x18)) = 0;
  }
  else if (iVar1 < (int)(*(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff)) {
    *(undefined1 *)((longlong)iVar1 + *plVar2) = 0;
  }
  FUN_14370c700((longlong)*(int *)(param_1 + 0x28) + **(longlong **)(param_1 + 0x18),param_2,param_3
               );
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  return param_3;
}



// FUNCTION 14376f090 FUN_14376f090 body=59 status=ok
// SIG undefined FUN_14376f090(void)

void FUN_14376f090(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_38 [48];
  
  FUN_14376f7d0(local_38,param_1,param_2);
  FUN_14376f710(param_1,param_2,local_38);
  return;
}



// FUNCTION 14376f0d0 FUN_14376f0d0 body=1000 status=ok
// SIG undefined FUN_14376f0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14376f0d0(float *param_1,undefined4 *param_2,undefined8 *param_3,float *param_4,int param_5,
             float param_6)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_f8 [11];
  float fStack_cc;
  float local_c8 [11];
  undefined4 uStack_9c;
  float local_98 [11];
  undefined4 uStack_6c;
  
  local_f8[8] = param_1[8];
  local_f8[9] = param_1[9];
  local_f8[10] = param_1[10];
  fStack_cc = param_1[0xb];
  uVar2 = CONCAT44(uRam00000001467f089c,uRam00000001467f0898);
  local_f8[0] = *param_1;
  local_f8[1] = param_1[1];
  local_f8[2] = param_1[2];
  local_f8[3] = param_1[3];
  local_f8[4] = param_1[4];
  local_f8[5] = param_1[5];
  local_f8[6] = param_1[6];
  local_f8[7] = param_1[7];
  *param_3 = CONCAT44(uRam00000001467f0894,_DAT_1467f0890);
  param_3[1] = uVar2;
  uVar2 = CONCAT44(uRam00000001467f08ac,uRam00000001467f08a8);
  param_3[2] = CONCAT44(uRam00000001467f08a4,_DAT_1467f08a0);
  param_3[3] = uVar2;
  uVar2 = CONCAT44(uRam00000001467f08bc,uRam00000001467f08b8);
  param_3[4] = CONCAT44(uRam00000001467f08b4,_DAT_1467f08b0);
  param_3[5] = uVar2;
  fVar10 = (param_1[5] * param_1[5] + param_1[4] * param_1[4] + param_1[6] * param_1[6] +
            param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2] +
           param_1[9] * param_1[9] + param_1[8] * param_1[8] + param_1[10] * param_1[10]) *
           param_6 * param_6;
  fVar9 = (local_f8[8] * local_f8[8] + local_f8[4] * local_f8[4] + local_f8[9] * local_f8[9]) *
          _DAT_1467f0700;
  for (iVar7 = 0; (fVar10 < fVar9 && (iVar7 < param_5)); iVar7 = iVar7 + 1) {
    lVar5 = 1;
    iVar4 = 1;
    fVar9 = ABS(local_f8[4]);
    if (ABS(local_f8[4]) < ABS(local_f8[8])) {
      lVar5 = 2;
      iVar4 = 2;
      fVar9 = ABS(local_f8[8]);
    }
    bVar1 = fVar9 < ABS(local_f8[9]);
    if (bVar1) {
      lVar5 = 2;
      iVar4 = 2;
    }
    fVar9 = local_f8[(ulonglong)bVar1 + lVar5 * 4];
    if (fVar9 == 0.0) {
      fVar8 = 1.0;
      fVar9 = 0.0;
    }
    else {
      fVar8 = (local_f8[lVar5 * 5] - local_f8[(ulonglong)bVar1 * 5]) / (fVar9 + fVar9);
      fVar9 = SQRT(fVar8 * fVar8 + 1.0);
      if (fVar8 < 0.0) {
        fVar9 = fVar8 - fVar9;
      }
      else {
        fVar9 = fVar9 + fVar8;
      }
      fVar9 = 1.0 / fVar9;
      fVar8 = 1.0 / SQRT(fVar9 * fVar9 + 1.0);
      fVar9 = fVar8 * fVar9;
    }
    lVar6 = (longlong)(int)(uint)bVar1;
    lVar3 = (longlong)iVar4;
    local_c8[0] = _DAT_1467f0890;
    local_c8[1] = (float)uRam00000001467f0894;
    local_c8[2] = (float)uRam00000001467f0898;
    local_c8[3] = (float)uRam00000001467f089c;
    local_c8[4] = (float)_DAT_1467f08a0;
    local_c8[5] = (float)uRam00000001467f08a4;
    local_c8[lVar6 * 5] = fVar8;
    local_98[0] = _DAT_1467f0890;
    local_98[1] = (float)uRam00000001467f0894;
    local_98[2] = (float)uRam00000001467f0898;
    local_98[3] = (float)uRam00000001467f089c;
    local_98[4] = (float)_DAT_1467f08a0;
    local_98[5] = (float)uRam00000001467f08a4;
    local_98[lVar6 * 5] = fVar8;
    lVar5 = lVar3 + lVar6 * 4;
    lVar6 = lVar6 + lVar3 * 4;
    local_c8[6] = (float)uRam00000001467f08a8;
    local_c8[7] = (float)uRam00000001467f08ac;
    local_c8[8] = (float)_DAT_1467f08b0;
    local_c8[9] = (float)uRam00000001467f08b4;
    local_c8[lVar6] = fVar9;
    local_98[6] = (float)uRam00000001467f08a8;
    local_98[7] = (float)uRam00000001467f08ac;
    local_98[8] = (float)_DAT_1467f08b0;
    local_98[9] = (float)uRam00000001467f08b4;
    local_98[lVar6] = -fVar9;
    local_c8[lVar5] = -fVar9;
    local_98[lVar5] = fVar9;
    local_c8[10] = (float)uRam00000001467f08b8;
    local_c8[lVar3 * 5] = fVar8;
    local_98[10] = (float)uRam00000001467f08b8;
    local_98[lVar3 * 5] = fVar8;
    uStack_9c = uRam00000001467f08bc;
    uStack_6c = uRam00000001467f08bc;
    FUN_14376f4c0(local_f8,local_c8);
    FUN_14376f710(local_f8,local_98,local_f8);
    FUN_14376f4c0(param_3);
    fVar9 = (local_f8[8] * local_f8[8] + local_f8[4] * local_f8[4] + local_f8[9] * local_f8[9]) *
            _DAT_1467f0700;
  }
  *param_4 = local_f8[0];
  param_4[1] = local_f8[5];
  param_4[2] = local_f8[10];
  param_4[3] = local_f8[10];
  if (fVar10 < fVar9) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14376f4c0 FUN_14376f4c0 body=57 status=ok
// SIG undefined FUN_14376f4c0(void)

void FUN_14376f4c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_14376f710(&local_38,param_1,param_2);
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[4] = local_18;
  param_1[5] = uStack_10;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  return;
}



// FUNCTION 14376f500 FUN_14376f500 body=103 status=ok
// SIG undefined FUN_14376f500(void)

void FUN_14376f500(undefined1 (*param_1) [16],float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  auVar2._4_4_ = 0.0 - fVar4;
  auVar2._0_4_ = fVar5;
  auVar2._8_8_ = 0;
  *param_1 = auVar2 << 0x20;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = 0.0 - fVar5;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = 0;
  param_1[1] = auVar1;
  *(ulonglong *)param_1[2] = CONCAT44(0.0 - fVar3,fVar4);
  *(undefined8 *)(param_1[2] + 8) = 0;
  return;
}



// FUNCTION 14376f570 FUN_14376f570 body=416 status=ok
// SIG undefined FUN_14376f570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14376f570(float *param_1,undefined4 *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
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
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar11 = param_3[6];
  fVar7 = param_3[8];
  fVar8 = param_3[9];
  fVar9 = param_3[10];
  fVar15 = ABS(fVar2);
  fVar16 = fVar8 * fVar5 - fVar6 * fVar7;
  fVar17 = fVar9 * fVar6 - fVar11 * fVar8;
  fVar18 = fVar7 * fVar11 - fVar5 * fVar9;
  fVar19 = fVar5 * fVar4 - fVar2 * fVar11;
  fVar20 = param_3[7] * param_3[3] - param_3[3] * param_3[7];
  fVar12 = fVar2 * fVar17;
  fVar13 = fVar3 * fVar18;
  fVar14 = fVar4 * fVar16;
  fVar21 = fVar13 + fVar12 + fVar14;
  fVar22 = fVar13 + fVar12 + fVar14;
  fVar23 = fVar13 + fVar12 + fVar14;
  fVar14 = fVar13 + fVar12 + fVar14;
  auVar10._0_8_ = CONCAT44(fVar2,fVar2) & 0x7fffffff7fffffff;
  auVar10._8_4_ = fVar15;
  auVar10._12_4_ = fVar15;
  if ((ABS(fVar8) + ABS(fVar7) + ABS(fVar9)) * (ABS(fVar6) + ABS(fVar5) + ABS(fVar11)) *
      (ABS(fVar3) + fVar15 + ABS(fVar4)) * _DAT_1467f08f0 < ABS(fVar21)) {
    auVar1._4_4_ = fVar22;
    auVar1._0_4_ = fVar21;
    auVar1._8_4_ = fVar23;
    auVar1._12_4_ = fVar14;
    auVar10 = rcpps(auVar10,auVar1);
    *param_2 = 0;
    fVar15 = (2.0 - fVar21 * auVar10._0_4_) * auVar10._0_4_;
    fVar21 = (2.0 - fVar22 * auVar10._4_4_) * auVar10._4_4_;
    fVar22 = (2.0 - fVar23 * auVar10._8_4_) * auVar10._8_4_;
    fVar14 = (2.0 - fVar14 * auVar10._12_4_) * auVar10._12_4_;
    fVar17 = fVar15 * fVar17;
    fVar12 = fVar21 * (fVar4 * fVar8 - fVar9 * fVar3);
    fVar11 = fVar22 * (fVar11 * fVar3 - fVar4 * fVar6);
    fVar13 = fVar14 * fVar19;
    param_1[4] = fVar18 * fVar15;
    param_1[5] = (fVar2 * fVar9 - fVar7 * fVar4) * fVar21;
    param_1[6] = fVar19 * fVar22;
    param_1[7] = fVar20 * fVar14;
    param_1[8] = fVar15 * fVar16;
    param_1[9] = fVar21 * (fVar3 * fVar7 - fVar8 * fVar2);
    param_1[10] = fVar22 * (fVar6 * fVar2 - fVar3 * fVar5);
    param_1[0xb] = fVar14 * fVar20;
  }
  else {
    fVar17 = 0.0;
    fVar12 = 0.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
    *param_2 = 0x80040200;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
  }
  *param_1 = fVar17;
  param_1[1] = fVar12;
  param_1[2] = fVar11;
  param_1[3] = fVar13;
  return param_2;
}



// FUNCTION 14376f710 FUN_14376f710 body=177 status=ok
// SIG undefined FUN_14376f710(void)

void FUN_14376f710(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar10 = param_2[7];
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = param_2[9];
  fVar16 = param_2[10];
  fVar17 = param_2[0xb];
  fVar18 = param_3[8];
  fVar19 = param_3[9];
  fVar20 = param_3[10];
  fVar21 = param_2[8];
  fVar22 = param_2[9];
  fVar23 = param_2[10];
  fVar24 = param_2[0xb];
  fVar25 = param_2[8];
  fVar26 = param_2[9];
  fVar27 = param_2[10];
  fVar28 = param_2[0xb];
  param_1[4] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * param_2[8];
  param_1[5] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar15;
  param_1[6] = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar16;
  param_1[7] = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar17;
  param_1[8] = fVar18 * fVar11 + fVar19 * fVar7 + fVar20 * fVar21;
  param_1[9] = fVar18 * fVar12 + fVar19 * fVar8 + fVar20 * fVar22;
  param_1[10] = fVar18 * fVar13 + fVar19 * fVar9 + fVar20 * fVar23;
  param_1[0xb] = fVar18 * fVar14 + fVar19 * fVar10 + fVar20 * fVar24;
  *param_1 = fVar4 * fVar11 + fVar5 * fVar7 + fVar6 * fVar25;
  param_1[1] = fVar4 * fVar12 + fVar5 * fVar8 + fVar6 * fVar26;
  param_1[2] = fVar4 * fVar13 + fVar5 * fVar9 + fVar6 * fVar27;
  param_1[3] = fVar4 * fVar14 + fVar5 * fVar10 + fVar6 * fVar28;
  return;
}



// FUNCTION 14376f7d0 FUN_14376f7d0 body=152 status=ok
// SIG undefined FUN_14376f7d0(void)

void FUN_14376f7d0(longlong param_1,float *param_2,longlong param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  longlong lVar18;
  float afStack_30 [6];
  float local_18 [6];
  
  pfVar17 = local_18;
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar9 = param_2[0xb];
  local_18[0] = *(float *)(param_3 + 8);
  local_18[1] = (float)*(undefined4 *)(param_3 + 0x18);
  local_18[2] = (float)*(undefined4 *)(param_3 + 0x28);
  local_18[3] = (float)*(undefined4 *)(param_3 + 0x2c);
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  lVar18 = 2;
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    pfVar1 = (float *)((param_1 - (longlong)local_18) + 0x20 + (longlong)pfVar17);
    *pfVar1 = fVar15 * fVar2 + fVar14 * fVar10 + fVar16 * fVar6;
    pfVar1[1] = fVar15 * fVar3 + fVar14 * fVar11 + fVar16 * fVar7;
    pfVar1[2] = fVar15 * fVar4 + fVar14 * fVar12 + fVar16 * fVar8;
    pfVar1[3] = fVar15 * fVar5 + fVar14 * fVar13 + fVar16 * fVar9;
    pfVar17 = pfVar17 + -4;
    lVar18 = lVar18 + -1;
  } while (-1 < lVar18);
  return;
}



// FUNCTION 14376f870 FUN_14376f870 body=48 status=ok
// SIG undefined FUN_14376f870(void)

void FUN_14376f870(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[6];
  *param_1 = *param_1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[8];
  param_1[3] = param_1[9];
  param_1[4] = uVar1;
  param_1[5] = param_1[5];
  param_1[6] = param_1[9];
  param_1[7] = param_1[0xb];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = param_1[10];
  param_1[0xb] = param_1[0xb];
  return;
}



// FUNCTION 14376f8a0 FUN_14376f8a0 body=122 status=ok
// SIG undefined FUN_14376f8a0(void)

void FUN_14376f8a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar2 = (longlong)*(int *)(lVar1 + 0x60) * 0x38 + *(longlong *)(lVar1 + 0x40);
    if (*(int *)(lVar2 + 0x34) == 0) {
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x58);
      *(undefined4 *)(lVar2 + 0x34) = 1;
    }
    else {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
    }
    if (*(uint *)(lVar1 + 0x58) == (*(uint *)(lVar1 + 0x5c) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,lVar1 + 0x50,8);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x50) + (longlong)*(int *)(lVar1 + 0x58) * 8) = param_2;
    *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x58) + 1;
  }
  return;
}



// FUNCTION 14376f920 FUN_14376f920 body=624 status=ok
// SIG undefined FUN_14376f920(void)

void FUN_14376f920(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  ulonglong local_40;
  
  if (param_3 == '\0') {
    uVar7 = *(undefined8 *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x60) * 0x38 + 0x20 +
             *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40));
  }
  else {
    uVar7 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
      FUN_14370c460(uVar7,param_1 + 8,0x20);
    }
    puVar8 = (undefined4 *)((longlong)*(int *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8));
    if (puVar8 != (undefined4 *)0x0) {
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *puVar8 = *param_2;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar8 + 6) = uVar7;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    lVar1 = *(longlong *)(param_2 + 2);
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
      lVar9 = (longlong)*(int *)(lVar2 + 0x60) * 0x38 + *(longlong *)(lVar2 + 0x40);
      if (*(int *)(lVar9 + 0x34) == 0) {
        *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar2 + 0x58);
        *(undefined4 *)(lVar9 + 0x34) = 1;
      }
      else {
        *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
      }
      if (*(uint *)(lVar2 + 0x58) == (*(uint *)(lVar2 + 0x5c) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,lVar2 + 0x50,8);
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x50) + (longlong)*(int *)(lVar2 + 0x58) * 8) = lVar1;
      *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + 1;
    }
    uVar7 = *(undefined8 *)(param_2 + 2);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  puVar3 = *(undefined **)(param_2 + 4);
  iVar10 = 1;
  if (-1 < (int)param_2[7]) {
    iVar10 = param_2[7];
  }
  local_res10 = *(undefined8 *)(param_2 + 2);
  local_40 = 0;
  if (puVar3 != (undefined *)0x0) {
    local_res18 = FUN_1437152f0(puVar3);
    local_40 = FUN_1437151a0(puVar3);
    if ((local_40 & 1) != 0) {
      FUN_1437329e0(local_40 & 0xfffffffffffffffe);
    }
    if ((puVar3 != &DAT_1467df8b8) &&
       (FUN_14374eef0(lVar1,&local_res8,puVar3), *(int *)(local_res8 + 8) != 0)) {
      if ((local_40 & 1) != 0) {
        FUN_1437329e0(local_40 & 0xfffffffffffffffe);
      }
      if (*(uint *)(lVar1 + 0x48) == (*(uint *)(lVar1 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,lVar1 + 0x40,0x38);
      }
      puVar11 = (undefined8 *)
                ((longlong)*(int *)(lVar1 + 0x48) * 0x38 + *(longlong *)(lVar1 + 0x40));
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = local_res10;
        *(undefined4 *)((longlong)puVar11 + 0x14) = local_res18;
        puVar11[1] = puVar3;
        *(int *)(puVar11 + 2) = iVar10;
        puVar11[3] = local_40;
        if ((local_40 & 1) != 0) {
          FUN_1437329e0(local_40 & 0xfffffffffffffffe);
        }
        puVar11[4] = uVar7;
        puVar11[6] = 0;
        puVar11[5] = local_res8;
      }
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
      if ((local_40 & 1) != 0) {
        FUN_143733a60(local_40 & 0xfffffffffffffffe);
      }
    }
  }
  if ((local_40 & 1) == 0) {
    return;
  }
  FUN_143733a60(local_40 & 0xfffffffffffffffe);
  return;
}



// FUNCTION 14376fb90 FUN_14376fb90 body=69 status=ok
// SIG undefined FUN_14376fb90(void)

uint FUN_14376fb90(uint param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = *(uint *)(&DAT_1467f6030 + (ulonglong)(byte)(bVar1 ^ (byte)param_1) * 4) ^
              param_1 >> 8;
  }
  return ~param_1;
}



// FUNCTION 14376fbe0 FUN_14376fbe0 body=15 status=ok
// SIG undefined FUN_14376fbe0(void)

void FUN_14376fbe0(undefined8 *param_1)

{
  *param_1 = hkReflect::TypeReg::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 14376fbf0 memCpy body=209 status=ok
// SIG undefined memCpy(void)

void hkAlgorithm::memCpy(ulonglong param_1,longlong param_2,int param_3,uint *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  *param_4 = *param_4 + 0x3fde80f;
  uVar2 = param_1;
  if (*param_4 < 0x3fde80f) {
    thunk_FUN_143719c70(0x8a9331c2);
  }
  while (uVar1 = uVar2 + 0x8ad1, uVar1 <= (longlong)param_3 + param_1) {
    FUN_14370c700(uVar2,param_2,0x8ad1);
    *param_4 = *param_4 + 0x3fff96e6;
    param_2 = param_2 + 0x8ad1;
    uVar2 = uVar1;
    if (*param_4 < 0x3fff96e6) {
      thunk_FUN_143719c70(0x8a9331c2);
    }
  }
  iVar4 = (int)((longlong)param_3 + param_1) - (int)uVar2;
  FUN_14370c700(uVar2,param_2,iVar4);
  uVar3 = iVar4 * 0x7606;
  *param_4 = *param_4 + uVar3;
  if (*param_4 < uVar3) {
    thunk_FUN_143719c70(0x8a9331c2);
  }
  return;
}



// FUNCTION 14376fcd0 FUN_14376fcd0 body=169 status=ok
// SIG undefined FUN_14376fcd0(void)

undefined8 *
FUN_14376fcd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined8 param_5)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = hkMemoryStreamReader::vftable;
  param_1[5] = param_5;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *(int *)(param_1 + 6) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  if (param_4 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    uVar2 = FUN_143703990(*(undefined8 *)((longlong)pvVar1 + 0x58),param_3);
    param_1[3] = uVar2;
    FUN_14370c700(uVar2,param_2,param_3);
    return param_1;
  }
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 14376fd80 FUN_14376fd80 body=87 status=ok
// SIG undefined FUN_14376fd80(void)

void FUN_14376fd80(undefined8 *param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkMemoryStreamReader::vftable;
  if (*(uint *)(param_1 + 6) < 2) {
    uVar1 = param_1[3];
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    FUN_1437039c0(*(undefined8 *)((longlong)pvVar2 + 0x58),uVar1);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14376fde0 FUN_14376fde0 body=136 status=ok
// SIG undefined FUN_14376fde0(void)

longlong FUN_14376fde0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14376fd80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14376fe70 FUN_14376fe70 body=9 status=ok
// SIG undefined FUN_14376fe70(void)

longlong FUN_14376fe70(longlong param_1)

{
  return (longlong)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20));
}



// FUNCTION 14376fe80 FUN_14376fe80 body=13 status=ok
// SIG undefined FUN_14376fe80(void)

undefined8 FUN_14376fe80(longlong param_1,undefined8 param_2)

{
  *(bool *)param_2 = *(char *)(param_1 + 0x34) == '\0';
  return param_2;
}



// FUNCTION 14376fe90 FUN_14376fe90 body=56 status=ok
// SIG undefined FUN_14376fe90(void)

int FUN_14376fe90(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  FGenericPlatformString::Memcpy
            (param_2,(longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18),
             (longlong)param_3);
  return param_3;
}



// FUNCTION 14376fed0 FUN_14376fed0 body=59 status=ok
// SIG undefined FUN_14376fed0(void)

longlong * FUN_14376fed0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  *param_2 = lVar2;
  param_2[1] = param_3 + lVar2;
  return param_2;
}



// FUNCTION 14376ff10 FUN_14376ff10 body=94 status=ok
// SIG undefined FUN_14376ff10(void)

int FUN_14376ff10(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  iVar1 = param_3;
  if (iVar2 < param_3) {
    iVar1 = iVar2;
  }
  FUN_14370c700(param_2,(longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18),iVar1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  if ((iVar1 == 0) && (param_3 != 0)) {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return iVar1;
}



// FUNCTION 14376ff70 FUN_14376ff70 body=107 status=ok
// SIG undefined FUN_14376ff70(void)

undefined4 * FUN_14376ff70(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (param_4 == 0) {
    iVar2 = param_3 - *(int *)(param_1 + 0x28);
  }
  else if (param_4 == 1) {
    iVar2 = *(int *)(param_1 + 0x20) + param_3;
  }
  else if (param_4 == 2) {
    iVar2 = *(int *)(param_1 + 0x24) - param_3;
  }
  *param_2 = 0;
  if (iVar2 < 0) {
    *param_2 = 0x80040200;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    return param_2;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < iVar2) {
    *param_2 = 0x80040200;
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return param_2;
}



// FUNCTION 14376ffe0 FUN_14376ffe0 body=41 status=ok
// SIG undefined FUN_14376ffe0(void)

void FUN_14376ffe0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  iVar1 = param_2;
  if (iVar2 < param_2) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  if ((iVar1 == 0) && (param_2 != 0)) {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 143770010 FUN_143770010 body=7 status=ok
// SIG undefined FUN_143770010(void)

int FUN_143770010(longlong param_1)

{
  return *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
}



// FUNCTION 143770020 FUN_143770020 body=76 status=ok
// SIG undefined FUN_143770020(void)

void FUN_143770020(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = _aligned_malloc((longlong)param_2,(longlong)*(int *)(param_1 + 8));
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + param_2;
    UNLOCK();
    if (*(uint *)(param_1 + 0x14) < (uint)(iVar2 + param_2)) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 143770070 FUN_143770070 body=63 status=ok
// SIG undefined FUN_143770070(void)

longlong FUN_143770070(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x78))();
  if (lVar1 == 0) {
    if (param_2 != 0) {
      lVar1 = FUN_143702f30(param_1,0);
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1437700b0 FUN_1437700b0 body=19 status=ok
// SIG undefined FUN_1437700b0(void)

void FUN_1437700b0(longlong param_1,void *param_2,int param_3)

{
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_3;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001437700bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _aligned_free(param_2);
  return;
}



// FUNCTION 1437700d0 FUN_1437700d0 body=21 status=ok
// SIG undefined FUN_1437700d0(void)

void FUN_1437700d0(longlong param_1,ulonglong *param_2)

{
  *param_2 = (ulonglong)*(uint *)(param_1 + 0x10);
  param_2[1] = (ulonglong)*(uint *)(param_1 + 0x10);
  param_2[2] = (ulonglong)*(uint *)(param_1 + 0x14);
  return;
}



// FUNCTION 1437700f0 FUN_1437700f0 body=55 status=ok
// SIG undefined FUN_1437700f0(void)

undefined8 FUN_1437700f0(undefined8 param_1,byte param_2)

{
  FUN_143702b50();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143770130 FUN_143770130 body=202 status=ok
// SIG undefined FUN_143770130(void)

undefined8 FUN_143770130(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x200) == (*(uint *)(param_1 + 0x204) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x1f8),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)*(int *)(param_1 + 0x200) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_3, param_3 != 0)) {
    FUN_14370c030(param_3);
  }
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  if (param_3 != 0) {
    FUN_14370c150(param_3);
  }
  lVar3 = param_3 + 0x20;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  FUN_1437702e0(param_1,param_2,lVar3,param_4);
  return param_2;
}



// FUNCTION 143770200 FUN_143770200 body=218 status=ok
// SIG undefined FUN_143770200(void)

undefined8
FUN_143770200(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x200) == (*(uint *)(param_1 + 0x204) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x1f8),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)*(int *)(param_1 + 0x200) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_3, param_3 != 0)) {
    FUN_14370c030(param_3);
  }
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  if (param_3 != 0) {
    FUN_14370c150(param_3);
  }
  lVar3 = param_3 + 0x20;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  FUN_143770380(param_1,param_2,lVar3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1437702e0 FUN_1437702e0 body=146 status=ok
// SIG undefined FUN_1437702e0(void)

undefined2 *
FUN_1437702e0(longlong param_1,undefined2 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_2 = *(undefined2 *)(param_1 + 0x20);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x18),0x18);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 0x18)
  ;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined2 *)(puVar1 + 1) = 1;
  *puVar1 = param_3;
  *(undefined1 *)((longlong)puVar1 + 10) = param_4;
  puVar1[2] = 0;
  return param_2;
}



// FUNCTION 143770380 FUN_143770380 body=155 status=ok
// SIG undefined FUN_143770380(void)

undefined2 *
FUN_143770380(longlong param_1,undefined2 *param_2,undefined8 param_3,undefined2 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_2 = *(undefined2 *)(param_1 + 0x20);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x18),0x18);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 0x18)
  ;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)((longlong)puVar1 + 0xb) = param_5;
  *(undefined1 *)((longlong)puVar1 + 10) = param_6;
  *puVar1 = param_3;
  *(undefined2 *)(puVar1 + 1) = param_4;
  puVar1[2] = 0;
  return param_2;
}



// FUNCTION 143770420 FUN_143770420 body=110 status=ok
// SIG undefined FUN_143770420(void)

void FUN_143770420(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  lVar1 = *(longlong *)(param_1 + 0x1f8);
  iVar2 = *(int *)(param_1 + 0x200) + -1;
  lVar3 = (longlong)iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  else {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  return;
}



// FUNCTION 143770490 FUN_143770490 body=546 status=ok
// SIG undefined FUN_143770490(void)

uint FUN_143770490(longlong param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte bVar11;
  ushort local_res8 [4];
  undefined1 *local_428;
  int local_420;
  uint local_41c;
  undefined1 local_418 [1024];
  
  local_428 = local_418;
  iVar6 = *(int *)(param_1 + 0x20);
  local_420 = 0;
  local_41c = 0x80000400;
  uVar4 = FUN_143703a50();
  if ((int)(local_41c & 0x3fffffff) < iVar6) {
    iVar8 = (local_41c & 0x3fffffff) * 2;
    iVar7 = iVar6;
    if (iVar6 < iVar8) {
      iVar7 = iVar8;
    }
    FUN_14370c310(uVar4,&local_428,iVar7,1);
  }
  if (0 < iVar6 - local_420) {
    puVar10 = local_428 + local_420;
    for (lVar5 = (longlong)(iVar6 - local_420); lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar10 = 1;
      puVar10 = puVar10 + 1;
    }
  }
  iVar8 = 0;
  iVar7 = iVar6;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    lVar5 = 0;
    do {
      iVar8 = iVar8 + 1;
      uVar3 = *(ushort *)(lVar5 + *(longlong *)(param_1 + 0x1a8));
      bVar11 = local_428[uVar3];
      local_428[uVar3] = 0;
      iVar7 = iVar7 - (uint)bVar11;
      lVar5 = lVar5 + 4;
    } while (iVar8 < *(int *)(param_1 + 0x1b0));
  }
  if (iVar7 == 1) {
    uVar9 = 0;
    lVar5 = 0;
    if (0 < (longlong)*(int *)(param_1 + 0x20)) {
      do {
        local_420 = iVar6;
        if (local_428[lVar5] != '\0') goto LAB_143770666;
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x20));
    }
    uVar9 = 0;
    local_420 = iVar6;
  }
  else {
    local_420 = iVar6;
    FUN_1437702e0(param_1,local_res8,0,0x40);
    bVar11 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x20) + -1) {
      do {
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + 10 + (longlong)iVar6 * 0x18);
        if (bVar11 <= bVar2) {
          bVar11 = bVar2;
        }
        if (local_428[iVar6] != '\0') {
          uVar4 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x1b0) == (*(uint *)(param_1 + 0x1b4) & 0x3fffffff)) {
            FUN_14370c460(uVar4,(longlong *)(param_1 + 0x1a8),4);
          }
          puVar1 = (undefined2 *)
                   (*(longlong *)(param_1 + 0x1a8) + (longlong)*(int *)(param_1 + 0x1b0) * 4);
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
          *puVar1 = (short)iVar6;
          puVar1[1] = local_res8[0];
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x20) + -1);
    }
    uVar9 = (uint)local_res8[0];
    *(byte *)(*(longlong *)(param_1 + 0x18) + 10 + (ulonglong)local_res8[0] * 0x18) = bVar11;
  }
LAB_143770666:
  uVar4 = FUN_143703a50();
  local_420 = 0;
  if (-1 < (int)local_41c) {
    FUN_143702e10(uVar4,local_428,1,local_41c & 0x3fffffff);
  }
  return uVar9;
}



// FUNCTION 1437706c0 FUN_1437706c0 body=90 status=ok
// SIG undefined FUN_1437706c0(void)

void FUN_1437706c0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,*(longlong *)(param_1 + 0x18) + 0x10,*(undefined4 *)(param_1 + 0x20),0x18);
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar1 = uVar1 + 0x18;
      uVar2 = (int)uVar3 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + uVar1) = 0;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 143770720 FUN_143770720 body=205 status=ok
// SIG undefined FUN_143770720(void)

void FUN_143770720(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar1 = uVar4 * 2;
    iVar3 = param_2;
    if (param_2 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x18,iVar3,0x18);
  }
  uVar2 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x1b4) & 0x3fffffff;
  if ((int)uVar4 < param_3) {
    iVar1 = uVar4 * 2;
    if (param_3 < iVar1) {
      param_3 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x1a8,param_3,4);
  }
  uVar2 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x204) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar1 = uVar4 * 2;
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x1f8,param_2,8);
  }
  return;
}



// FUNCTION 1437707f0 FUN_1437707f0 body=781 status=ok
// SIG undefined FUN_1437707f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1437707f0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *local_1038;
  int local_1030;
  uint local_102c;
  undefined1 local_1028 [4088];
  undefined8 uStack_30;
  
  uStack_30 = 0x143770812;
  thunk_FUN_143719c70(0x86810496);
  iVar4 = FUN_143770490(param_1);
  thunk_FUN_143719c70(0xf8fc114d);
  lVar9 = (longlong)*(int *)(param_1 + 0x20);
  uVar11 = 0;
  iVar2 = *(int *)(param_1 + 0x1b0);
  uVar10 = 0;
  if (0 < lVar9) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar7 = uVar11;
    lVar13 = lVar9;
    do {
      lVar3 = *plVar6;
      plVar6 = plVar6 + 3;
      uVar10 = (uint)uVar7 + 1;
      if (lVar3 != 0) {
        uVar10 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  local_102c = 0x80000100;
  local_1038 = local_1028;
  local_1030 = 0;
  iVar5 = 0;
  if (0x100 < (int)uVar10) {
    uVar12 = uVar10;
    if ((int)uVar10 < 0x200) {
      uVar12 = 0x200;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1038,uVar12,8);
    iVar5 = local_1030;
  }
  local_1030 = iVar5 + uVar10;
  (**(code **)(*param_2 + 8))(param_2,local_1038,uVar10,8);
  uVar7 = uVar11;
  uVar14 = uVar11;
  lVar13 = lVar9;
  if (0 < lVar9) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar7) == 0) {
        puVar8 = (undefined8 *)(local_1038 + uVar14);
        uVar14 = uVar14 + 8;
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar7) = *puVar8;
      }
      lVar13 = lVar13 + -1;
      uVar7 = uVar7 + 0x18;
    } while (lVar13 != 0);
  }
  local_1030 = 0;
  if (-1 < (int)local_102c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1038,8,local_102c & 0x3fffffff);
  }
  thunk_FUN_143719c70(0x87a134ac);
  if (0 < lVar9) {
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11);
      (**(code **)(*param_2 + 0x18))
                (param_2,puVar8[2],*puVar8,*(undefined1 *)((longlong)puVar8 + 10));
      if (1 < *(ushort *)(puVar8 + 1)) {
        (**(code **)(*param_2 + 0x20))
                  (param_2,puVar8[2],*(ushort *)(puVar8 + 1),*(undefined1 *)((longlong)puVar8 + 0xb)
                  );
      }
      uVar11 = uVar11 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = 0;
  thunk_FUN_143719c70(0x24526dfc);
  if (0 < iVar2) {
    local_1030 = 0;
    local_1038 = local_1028;
    local_102c = 0x80000100;
    if (0x100 < iVar2) {
      iVar5 = iVar2;
      if (iVar2 < 0x200) {
        iVar5 = 0x200;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_1038,iVar5,0x10);
    }
    lVar13 = lVar9;
    if (0 < iVar2) {
      do {
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x1a8) + lVar9 * 4);
        lVar9 = lVar9 + 1;
        *(undefined8 *)(local_1038 + lVar13) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)*puVar1 * 0x18);
        *(undefined8 *)(local_1038 + lVar13 + 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)puVar1[1] * 0x18);
        lVar13 = lVar13 + 0x10;
      } while (lVar9 < iVar2);
    }
    local_1030 = iVar2;
    (**(code **)(*param_2 + 0x30))(param_2,local_1038,iVar2);
    local_1030 = 0;
    if (-1 < (int)local_102c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_1038,0x10,local_102c & 0x3fffffff);
    }
  }
  thunk_FUN_143719c70(0xeb30a1da);
  (**(code **)(*param_2 + 0x38))
            (param_2,*(longlong *)(param_1 + 0x18) + 0x10,*(undefined4 *)(param_1 + 0x20),param_3,
             0x18);
  thunk_FUN_143719c70(0x5707b48f);
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)iVar4 * 0x18);
}



// FUNCTION 143770b00 FUN_143770b00 body=65 status=ok
// SIG undefined FUN_143770b00(void)

void FUN_143770b00(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1437707f0();
  (**(code **)(*param_2 + 0x50))(param_2,uVar1);
  FUN_1437706c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000143770b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 143770b50 FUN_143770b50 body=205 status=ok
// SIG undefined FUN_143770b50(void)

longlong FUN_143770b50(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  Semaphore::Semaphore(param_1,0,1000,0);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x1c) & 0x3fffffff;
  if ((int)uVar5 < param_2) {
    iVar2 = uVar5 * 2;
    iVar1 = param_2;
    if (param_2 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x10,iVar1,4);
  }
  *(int *)(param_1 + 0x18) = param_2;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  uVar7 = (ulonglong)((longlong)(puVar4 + param_2) + (3 - (longlong)puVar4)) >> 2;
  if (puVar4 + param_2 < puVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      uVar6 = uVar6 + 1;
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    } while (uVar6 != uVar7);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 143770c20 FUN_143770c20 body=170 status=ok
// SIG undefined FUN_143770c20(void)

undefined4 * FUN_143770c20(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  FWindowsPlatformProcess::WaitForProc();
  iVar5 = *(int *)(param_1 + 0x20);
  while (iVar5 != 0) {
    LOCK();
    iVar4 = *(int *)(param_1 + 0x20);
    bVar8 = iVar5 == iVar4;
    if (bVar8) {
      *(int *)(param_1 + 0x20) = iVar5 + -1;
      iVar4 = iVar5;
    }
    UNLOCK();
    iVar5 = iVar4;
    if (bVar8) {
      *param_2 = 0xffffffff;
      return param_2;
    }
  }
  uVar6 = *(uint *)(param_1 + 8);
  uVar7 = (ulonglong)(int)uVar6;
  lVar3 = *(longlong *)(param_1 + 0x10);
  piVar1 = (int *)(lVar3 + uVar7 * 4);
  iVar5 = *(int *)(lVar3 + uVar7 * 4);
  while (iVar5 < 0) {
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    piVar1 = piVar1 + 1;
    iVar5 = *piVar1;
  }
  uVar2 = *(undefined4 *)(lVar3 + (longlong)(int)uVar6 * 4);
  *(undefined4 *)(lVar3 + (longlong)(int)uVar6 * 4) = 0xfffffffe;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x18)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 8) * 4) != -2)
      break;
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143770cd0 FUN_143770cd0 body=20 status=ok
// SIG undefined FUN_143770cd0(void)

void FUN_143770cd0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  hkSemaphore::release(param_1,1);
  return;
}



// FUNCTION 143770cf0 FUN_143770cf0 body=31 status=ok
// SIG undefined FUN_143770cf0(void)

void FUN_143770cf0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4) = param_2;
  hkSemaphore::release(param_1,1);
  return;
}



// FUNCTION 143770d10 FUN_143770d10 body=119 status=ok
// SIG undefined FUN_143770d10(void)

void FUN_143770d10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar3 = *(int **)(param_1 + 0x10);
  piVar1 = piVar3 + *(int *)(param_1 + 0x18);
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (-1 < *piVar3) {
      FWindowsPlatformProcess::WaitForProc(param_1);
    }
    *piVar3 = -1;
  }
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = 0;
  UNLOCK();
  if (0 < (int)uVar2) {
    uVar4 = (ulonglong)uVar2;
    do {
      FWindowsPlatformProcess::WaitForProc(param_1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143770d90 FUN_143770d90 body=116 status=ok
// SIG undefined FUN_143770d90(void)

/* WARNING: Removing unreachable block (ram,0x000143770dca) */
/* WARNING: Removing unreachable block (ram,0x000143770de3) */

void FUN_143770d90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 != (undefined8 *)&DAT_00000018) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar1 = puVar1 + 7;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143770e10 FUN_143770e10 body=151 status=ok
// SIG undefined FUN_143770e10(void)

longlong FUN_143770e10(longlong param_1,uint param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_14370c000(param_1);
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



// FUNCTION 143770eb0 FUN_143770eb0 body=383 status=ok
// SIG undefined FUN_143770eb0(void)

void FUN_143770eb0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [56];
  
  local_res10[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res20,*param_2,param_2[1],
             local_res10);
  if ((int)local_res20 < 0) {
    if (DAT_146b83f08 < 2) goto LAB_143771016;
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_40,"Failed to get value from Var \'{}\'",&DAT_145ba00f8,param_2,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x239;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res20,*param_3,param_3[1],
               local_res10[0]);
    if (-1 < (int)local_res20) {
      return;
    }
    if (DAT_146b83f08 < 2) goto LAB_143771016;
    local_res20 = param_3[1];
    local_48 = param_2[1];
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_40,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &DAT_145ba0108,param_2,&local_48,&local_res20,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x23b;
  }
  *(char **)(lVar1 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_40);
LAB_143771016:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143771030 FUN_143771030 body=389 status=ok
// SIG undefined FUN_143771030(void)

void FUN_143771030(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [56];
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res10,*param_2,param_2[1],
             &local_res20);
  if ((int)local_res10 < 0) {
    if (DAT_146b83f08 < 2) goto LAB_14377119c;
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_40,"Failed to get value from Var \'{}\'",&DAT_145ba0098,param_2,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x239;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res10,*param_3,param_3[1],
               local_res20);
    if (-1 < (int)local_res10) {
      return;
    }
    if (DAT_146b83f08 < 2) goto LAB_14377119c;
    local_res10 = param_3[1];
    local_48 = param_2[1];
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_40,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &DAT_145ba00a8,param_2,&local_48,&local_res10,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x23b;
  }
  *(char **)(lVar1 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_40);
LAB_14377119c:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1437711c0 FUN_1437711c0 body=392 status=ok
// SIG undefined FUN_1437711c0(void)

void FUN_1437711c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [64];
  
  local_78 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_78
            );
  if ((int)local_res10[0] < 0) {
    if (DAT_146b83f08 < 2) goto LAB_143771331;
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_58,"Failed to get value from Var \'{}\'",&DAT_145ba0008,param_2,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x239;
  }
  else {
    local_68 = (undefined4)local_78;
    uStack_64 = local_78._4_4_;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res10,*param_3,param_3[1],
               &local_68);
    if (-1 < (int)local_res10[0]) {
      return;
    }
    if (DAT_146b83f08 < 2) goto LAB_143771331;
    local_res10[0] = param_3[1];
    local_res20 = param_2[1];
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_58,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &DAT_145ba0018,param_2,&local_res20,local_res10,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x23b;
  }
  *(char **)(lVar1 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_58);
LAB_143771331:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143771350 FUN_143771350 body=373 status=ok
// SIG undefined FUN_143771350(void)

void FUN_143771350(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [56];
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             &local_res20);
  if ((int)local_res10[0] < 0) {
    if (DAT_146b83f08 < 2) goto LAB_1437714ae;
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_50,"Failed to get value from Var \'{}\'",&DAT_145ba00c8,param_2,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x239;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res10,*param_3,param_3[1],
               local_res20);
    if (-1 < (int)local_res10[0]) {
      return;
    }
    if (DAT_146b83f08 < 2) goto LAB_1437714ae;
    local_res10[0] = param_3[1];
    local_58 = param_2[1];
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar1 = FUN_14373bbd0(local_50,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &DAT_145ba00d8,param_2,&local_58,local_res10,0);
    *(undefined8 *)(lVar1 + 0x28) = 0x23b;
  }
  *(char **)(lVar1 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_50);
LAB_1437714ae:
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1437714d0 FUN_1437714d0 body=6083 status=ok
// SIG undefined FUN_1437714d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000143772977) */
/* WARNING: Removing unreachable block (ram,0x000143772990) */

undefined8
FUN_1437714d0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  double dVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  uchar *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  float *pfVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  double *pdVar21;
  undefined8 uVar22;
  longlong lVar23;
  int iVar24;
  double *pdVar25;
  WriteBytesMem *this;
  ulonglong *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  double *pdVar30;
  double *pdVar31;
  float *pfVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  short *psVar35;
  short *psVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong ****pppplVar42;
  bool bVar43;
  float fVar44;
  longlong ****in_stack_ffffffffffffd268;
  byte *pbVar45;
  byte local_2d64 [4];
  WriteBytesMem *local_2d60;
  longlong ***local_2d58;
  longlong local_2d50;
  longlong ***local_2d48;
  longlong ***local_2d40;
  byte local_2d38;
  double *local_2d30;
  ulonglong local_2d28;
  longlong ***local_2d18;
  uint uStack_2d10;
  undefined4 uStack_2d0c;
  ulonglong local_2d08;
  longlong *local_2cf8;
  WriteBytesMem *local_2cf0;
  undefined8 local_2ce8;
  double *local_2ce0;
  int local_2cd8;
  int local_2cd4;
  int local_2cd0;
  int local_2ccc;
  int local_2cc8 [2];
  byte *local_2cc0;
  WriteBytesMem *local_2cb8;
  undefined8 local_2cb0;
  double *local_2ca8;
  longlong ***local_2ca0;
  undefined8 local_2c98;
  ulonglong local_2c90;
  undefined1 local_2c88 [4];
  undefined1 local_2c84 [4];
  undefined1 local_2c80 [4];
  undefined1 local_2c7c [4];
  undefined1 local_2c78 [16];
  longlong ***local_2c68;
  uint uStack_2c60;
  undefined4 uStack_2c5c;
  undefined1 local_2c58 [16];
  undefined1 *local_2c48;
  uint local_2c40;
  uint local_2c3c;
  undefined1 local_2c38 [3072];
  double local_2038 [1028];
  
  local_2c48 = local_2c38;
  local_2c40 = 0;
  local_2c3c = 0x80000040;
  local_2cd4 = 0;
  if (0 < param_9) {
    uVar37 = (ulonglong)param_7;
    do {
      local_2d50 = local_2cd4 * (int)uVar37 + param_3;
      pppplVar42 = (longlong ****)((int)(local_2cd4 * param_8) + param_5);
      uVar6 = param_9 - local_2cd4;
      if (0x400 < param_9 - local_2cd4) {
        uVar6 = 0x400;
      }
      local_2cd8 = 0;
      lVar23 = local_2d50;
      local_2d48 = (longlong ***)pppplVar42;
LAB_14377159a:
      for (; uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffd268 >> 0x20),
          local_2cd8 != (int)param_2[1]; local_2cd8 = local_2cd8 + 1) {
        this = (WriteBytesMem *)((longlong)local_2cd8 * 0x30 + *param_2);
        uVar40 = 0;
        if (lVar23 != 0) {
          uVar40 = (uint)*(ushort *)(this + 4);
        }
        pdVar21 = (double *)((int)uVar40 + lVar23);
        uVar40 = 0;
        if (pppplVar42 != (longlong ****)0x0) {
          uVar40 = (uint)*(ushort *)(this + 2);
        }
        pdVar25 = (double *)((longlong)(int)uVar40 + (longlong)pppplVar42);
        local_2d60 = this;
        local_2d30 = pdVar21;
        switch(*this) {
        case (WriteBytesMem)0x1:
          FUN_1436f7090(this,&local_2cf0,pdVar21);
          FUN_1436f70e0(this,&local_2d18,pdVar25);
          iVar24 = 0;
          if (0 < (int)uVar6) {
            do {
              piVar15 = (int *)FUN_143776c90(param_1,local_2c88,&local_2cf0,&local_2d18);
              if (*piVar15 < 0) {
                if ((local_2d08 & 1) != 0) {
                  FUN_143733a60(local_2d08 & 0xfffffffffffffffe);
                }
                goto LAB_143772b1a;
              }
              iVar24 = iVar24 + 1;
              local_2d18 = (longlong ***)((longlong)local_2d18 + (longlong)(int)param_8);
              local_2cf0 = local_2cf0 + (int)param_7;
            } while (iVar24 < (int)uVar6);
          }
          if ((local_2d08 & 1) != 0) {
            FUN_143733a60(local_2d08 & 0xfffffffffffffffe);
          }
          if (((ulonglong)local_2ce0 & 1) == 0) break;
          goto LAB_143771695;
        case (WriteBytesMem)0x2:
          FUN_1436f7090(this,&local_2cf0,pdVar21);
          FUN_1436f70e0(this,&local_2d18,pdVar25);
          uVar22 = local_2ce8;
          iVar24 = 0;
          local_2d28 = local_2d08;
          local_2d30 = local_2ce0;
          if (0 < (int)uVar6) {
            uVar14 = CONCAT44(uStack_2d0c,uStack_2d10);
            local_2d58 = (longlong ***)(local_2d08 & 0xfffffffffffffffe);
            local_2cf8 = (longlong *)((ulonglong)local_2ce0 & 0xfffffffffffffffe);
            local_2d60 = local_2cf0;
            local_2d40 = local_2d18;
            do {
              local_2d64[0] = 0;
              pbVar45 = local_2d64;
              (*(code *)(*local_2d58)[7])(local_2d58,local_2c84,local_2d40,uVar14,pbVar45);
              in_stack_ffffffffffffd268 =
                   (longlong ****)CONCAT71((int7)((ulonglong)pbVar45 >> 8),local_2d64[0]);
              (**(code **)(*local_2cf8 + 0x30))
                        (local_2cf8,&local_2cd0,local_2d60,uVar22,in_stack_ffffffffffffd268);
              if (local_2cd0 < 0) goto LAB_143772b04;
              iVar24 = iVar24 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d40 = (longlong ***)((longlong)local_2d40 + (longlong)(int)param_8);
            } while (iVar24 < (int)uVar6);
          }
          goto LAB_1437717b5;
        case (WriteBytesMem)0x3:
          FUN_1436f7090(this,&local_2cf0,pdVar21);
          FUN_1436f70e0(this,&local_2d18,pdVar25);
          uVar22 = local_2ce8;
          iVar24 = 0;
          local_2d28 = local_2d08;
          local_2d30 = local_2ce0;
          if (0 < (int)uVar6) {
            uVar14 = CONCAT44(uStack_2d0c,uStack_2d10);
            local_2d58 = (longlong ***)(local_2d08 & 0xfffffffffffffffe);
            local_2cf8 = (longlong *)((ulonglong)local_2ce0 & 0xfffffffffffffffe);
            local_2d60 = local_2cf0;
            local_2d40 = local_2d18;
            do {
              local_2c68 = (longlong ***)0x0;
              uStack_2c60 = uStack_2c60 & 0xffffff00;
              (*(code *)(*local_2d58)[7])(local_2d58,local_2c80,local_2d40,uVar14,&local_2c68);
              in_stack_ffffffffffffd268 = &local_2d18;
              local_2d18 = local_2c68;
              uStack_2d10 = uStack_2c60;
              uStack_2d0c = uStack_2c5c;
              (**(code **)(*local_2cf8 + 0x30))
                        (local_2cf8,&local_2ccc,local_2d60,uVar22,in_stack_ffffffffffffd268);
              if (local_2ccc < 0) goto LAB_143772b04;
              iVar24 = iVar24 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d40 = (longlong ***)((longlong)local_2d40 + (longlong)(int)param_8);
            } while (iVar24 < (int)uVar6);
          }
          goto LAB_1437717b5;
        case (WriteBytesMem)0x4:
          FUN_1436f7090(this,&local_2cf0,pdVar21);
          FUN_1436f70e0(this,&local_2d18,pdVar25);
          uVar22 = local_2ce8;
          local_2d28 = local_2d08;
          iVar24 = 0;
          local_2d30 = local_2ce0;
          if (0 < (int)uVar6) {
            uVar14 = CONCAT44(uStack_2d0c,uStack_2d10);
            local_2cc0 = (byte *)(local_2d08 & 0xfffffffffffffffe);
            local_2cf8 = (longlong *)((ulonglong)local_2ce0 & 0xfffffffffffffffe);
            local_2d60 = local_2cf0;
            local_2d58 = local_2d18;
            do {
              local_2d40 = (longlong ***)0x0;
              (**(code **)(*(longlong *)local_2cc0 + 0x38))
                        (local_2cc0,local_2c7c,local_2d58,uVar14,&local_2d40);
              in_stack_ffffffffffffd268 = (longlong ****)local_2d40;
              (**(code **)(*local_2cf8 + 0x30))(local_2cf8,local_2cc8,local_2d60,uVar22,local_2d40);
              if (local_2cc8[0] < 0) goto LAB_143772b04;
              iVar24 = iVar24 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d58 = (longlong ***)((longlong)local_2d58 + (longlong)(int)param_8);
            } while (iVar24 < (int)uVar6);
          }
LAB_1437717b5:
          pdVar21 = local_2d30;
          if ((local_2d28 & 1) != 0) {
            FUN_143733a60();
          }
          if (((ulonglong)pdVar21 & 1) != 0) {
LAB_143771695:
            FUN_143733a60();
          }
          break;
        case (WriteBytesMem)0x5:
          FUN_1436f7090(this,&local_2d18,pdVar21);
          FUN_1436f70e0(this,&local_2cf0,pdVar25);
          pdVar21 = local_2ce0;
          local_2cb8 = local_2cf0;
          local_2cb0 = local_2ce8;
          local_2d64[0] = (byte)local_2ce0 & 1;
          local_2ca8 = local_2ce0;
          if (((ulonglong)local_2ce0 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2ce0 & 0xfffffffffffffffe);
          }
          uVar41 = local_2d08;
          local_2ca0 = local_2d18;
          local_2c98 = CONCAT44(uStack_2d0c,uStack_2d10);
          local_2c90 = local_2d08;
          uVar37 = local_2d08 & 1;
          if ((local_2d08 & 1) != 0) {
            FUN_1437329e0(local_2d08 & 0xfffffffffffffffe);
          }
          in_stack_ffffffffffffd268 = (longlong ****)CONCAT44(uVar10,param_7);
          piVar15 = (int *)FUN_143776d60(param_1,local_2c78,&local_2ca0,&local_2cb8,
                                         in_stack_ffffffffffffd268,param_8,uVar6);
          if (-1 < *piVar15) {
            if (local_2d64[0] != 0) {
              FUN_143733a60();
            }
            if (uVar37 != 0) {
              FUN_143733a60();
            }
            break;
          }
          if (((ulonglong)pdVar21 & 1) != 0) {
            FUN_143733a60((ulonglong)pdVar21 & 0xfffffffffffffffe);
          }
          if ((uVar41 & 1) == 0) goto LAB_143772b28;
          FUN_143733a60(uVar41 & 0xfffffffffffffffe);
          uVar22 = 0x80040200;
          goto LAB_143772bfa;
        case (WriteBytesMem)0x6:
          uVar22 = *(undefined8 *)(this + 0x10);
          FUN_1437152f0(uVar22);
          uVar14 = FUN_1436f9ee0(this);
          FUN_1437152f0(uVar14);
          uVar14 = *(undefined8 *)(this + 0x20);
          uVar10 = FUN_1437152f0(uVar22);
          uVar22 = FUN_1436f9ee0(local_2d60);
          uVar11 = FUN_1437152f0(uVar22);
          in_stack_ffffffffffffd268 = (longlong ****)local_2d48;
          iVar24 = FUN_1437714d0(local_2c58,uVar14,local_2d50,uVar11,local_2d48,uVar10,0,0,1);
          if (iVar24 < 0) goto LAB_143772a99;
          break;
        case (WriteBytesMem)0x7:
          iVar24 = local_2c40 + uVar6;
          uVar22 = FUN_143703a50();
          if ((int)(local_2c3c & 0x3fffffff) < iVar24) {
            iVar9 = (local_2c3c & 0x3fffffff) * 2;
            if (iVar24 < iVar9) {
              iVar24 = iVar9;
            }
            FUN_14370c310(uVar22,&local_2c48,iVar24,0x30);
          }
          if ((int)uVar6 < 1) break;
          local_2d28 = (ulonglong)uVar6;
          iVar9 = 0;
          iVar24 = 0;
          local_2d58 = (longlong ***)((ulonglong)local_2d58 & 0xffffffff00000000);
          local_2d40 = (longlong ***)((ulonglong)local_2d40 & 0xffffffff00000000);
          do {
            iVar38 = 0;
            if (pdVar21 != (double *)0x0) {
              iVar38 = iVar24;
            }
            FUN_1436f7090(local_2d60,&local_2cb8,(longlong)iVar38 + (longlong)pdVar21);
            iVar24 = 0;
            if (pdVar25 != (double *)0x0) {
              iVar24 = iVar9;
            }
            FUN_1436f70e0(local_2d60,&local_2ca0,(longlong)iVar24 + (longlong)pdVar25);
            uVar37 = local_2c90;
            local_2d38 = (byte)local_2c90 & 1;
            if ((local_2c90 & 1) != 0) {
              FUN_1437329e0(local_2c90 & 0xfffffffffffffffe);
            }
            pdVar21 = local_2ca8;
            local_2d64[0] = (byte)local_2ca8 & 1;
            if (((ulonglong)local_2ca8 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2ca8 & 0xfffffffffffffffe);
            }
            if (local_2d64[0] != 0) {
              FUN_143733a60((ulonglong)pdVar21 & 0xfffffffffffffffe);
            }
            if (local_2d38 != 0) {
              FUN_143733a60(uVar37 & 0xfffffffffffffffe);
            }
            uVar22 = FUN_143703a50();
            if (local_2c40 == (local_2c3c & 0x3fffffff)) {
              FUN_14370c460(uVar22,&local_2c48,0x30);
            }
            puVar12 = (undefined8 *)(local_2c48 + (longlong)(int)local_2c40 * 0x30);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              puVar12[4] = 0;
              puVar12[5] = 0;
            }
            lVar23 = (longlong)(int)local_2c40;
            local_2c40 = local_2c40 + 1;
            FUN_1436fa270(local_2c48 + lVar23 * 0x30,&local_2cb8,&local_2ca0);
            if ((local_2c90 & 1) != 0) {
              FUN_143733a60(local_2c90 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2ca8 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2ca8 & 0xfffffffffffffffe);
            }
            uVar37 = (ulonglong)param_7;
            iVar24 = (int)local_2d40 + param_7;
            iVar9 = (int)local_2d58 + param_8;
            local_2d28 = local_2d28 - 1;
            local_2d40 = (longlong ***)CONCAT44(local_2d40._4_4_,iVar24);
            local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,iVar9);
            pdVar21 = local_2d30;
          } while (local_2d28 != 0);
          local_2d28 = 0;
          pppplVar42 = (longlong ****)local_2d48;
          goto LAB_1437716ad;
        case (WriteBytesMem)0x8:
          uVar40 = *(uint *)(this + 0x10);
          if ((uVar40 == (uint)uVar37) && (uVar40 == param_8)) {
            FUN_14370c700(pdVar21,pdVar25,uVar40 * uVar6);
          }
          else {
            if ((int)uVar6 < 1) goto LAB_1437716ad;
            uVar41 = (ulonglong)uVar6;
            do {
              if (0 < (longlong)(int)uVar40) {
                pdVar30 = pdVar21;
                lVar23 = (longlong)(int)uVar40;
                do {
                  *(undefined1 *)pdVar30 =
                       *(undefined1 *)(((longlong)pdVar25 - (longlong)pdVar21) + (longlong)pdVar30);
                  pdVar30 = (double *)((longlong)pdVar30 + 1);
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)(uint)uVar37);
              pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)param_8);
              uVar41 = uVar41 - 1;
            } while (uVar41 != 0);
          }
          break;
        case (WriteBytesMem)0x9:
          uVar22 = FUniqueNetIdString::GetBytes(this);
          puVar26 = (ulonglong *)FUN_143714420(uVar22,1);
          if (puVar26 == (ulonglong *)0x0) {
            uVar37 = 0;
          }
          else {
            uVar37 = *puVar26;
          }
          puVar13 = AK::WriteBytesMem::Bytes(local_2d60);
          puVar26 = (ulonglong *)FUN_143714420(puVar13,1);
          if (puVar26 == (ulonglong *)0x0) {
            uVar41 = 0;
          }
          else {
            uVar41 = *puVar26;
          }
          uVar27 = ((uint)(uVar41 >> 10) & 0x3fffff) + 7 >> 3;
          uVar20 = (ulonglong)uVar27;
          uVar40 = ((uint)(uVar37 >> 10) & 0x3fffff) + 7 >> 3;
          local_2d64[0] = ((byte)(uVar41 >> 8) & 1) != ((byte)(uVar37 >> 8) & 1);
          local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,uVar27);
          iVar24 = uVar40 - uVar27;
          local_2d40 = (longlong ***)CONCAT44(local_2d40._4_4_,iVar24);
          if (iVar24 < 1) {
            if ((uVar41 & 0x100) != 0) {
              pdVar25 = (double *)((longlong)pdVar25 + (longlong)-iVar24);
            }
            if ((bool)local_2d64[0]) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  if (uVar40 == 1) {
                    *(undefined1 *)pdVar21 = *(undefined1 *)pdVar25;
                  }
                  else if (uVar40 == 2) {
                    *(ushort *)pdVar21 = *(ushort *)pdVar25 >> 8 | *(ushort *)pdVar25 << 8;
                  }
                  else if (uVar40 == 4) {
                    fVar44 = *(float *)pdVar25;
                    *(uint *)pdVar21 =
                         (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                         ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                  }
                  else if (uVar40 == 8) {
                    dVar5 = *pdVar25;
                    *pdVar21 = (double)((ulonglong)dVar5 >> 0x38 |
                                        ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                        ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                        ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                        ((ulonglong)dVar5 & 0xff000000) << 8 |
                                        ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                        ((ulonglong)dVar5 & 0xff00) << 0x28 |
                                       (longlong)dVar5 << 0x38);
                  }
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)param_8);
                  pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else {
              uVar37 = (ulonglong)(int)param_7;
              if ((uVar40 == param_7) && (uVar40 == param_8)) {
                FUN_14370c700(pdVar21,pdVar25,uVar40 * uVar6);
              }
              else {
                pppplVar42 = (longlong ****)local_2d48;
                if ((int)uVar6 < 1) goto LAB_1437716ad;
                uVar41 = (ulonglong)uVar6;
                do {
                  if ((ulonglong)uVar40 != 0) {
                    pdVar30 = pdVar21;
                    uVar20 = (ulonglong)uVar40;
                    do {
                      *(undefined1 *)pdVar30 =
                           *(undefined1 *)
                            (((longlong)pdVar25 - (longlong)pdVar21) + (longlong)pdVar30);
                      pdVar30 = (double *)((longlong)pdVar30 + 1);
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  pdVar21 = (double *)((longlong)pdVar21 + uVar37);
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)param_8);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
          }
          else {
            local_2cf8 = (longlong *)0x1;
            local_2d30 = (double *)0x0;
            local_2d28 = (ulonglong)(int)(uVar27 - 1);
            if ((uVar37 & 0x100) != 0) {
              local_2d30 = (double *)(longlong)iVar24;
              local_2d28 = (ulonglong)uVar27;
              local_2cf8 = (longlong *)(longlong)-iVar24;
            }
            uVar37 = (ulonglong)uVar6;
            if (0 < (int)uVar6) {
              local_2d18 = (longlong ***)(uVar41 >> 9 & 0x7fffff);
              do {
                puVar26 = (ulonglong *)((longlong)local_2d30 + (longlong)pdVar21);
                pbVar45 = (byte *)(local_2d28 + (longlong)pdVar21);
                local_2cc0 = (byte *)((longlong)local_2cf8 + (longlong)pbVar45);
                iVar9 = (int)uVar20;
                local_2d60 = (WriteBytesMem *)uVar37;
                if (local_2d64[0] == 0) {
                  if (iVar9 == 0) {
                    FUN_14370c700(puVar26,pdVar25);
                    iVar24 = (int)local_2d40;
                  }
                  else if (0 < (longlong)uVar20) {
                    lVar23 = (longlong)pdVar25 - (longlong)puVar26;
                    do {
                      *(undefined1 *)puVar26 = *(undefined1 *)(lVar23 + (longlong)puVar26);
                      puVar26 = (ulonglong *)((longlong)puVar26 + 1);
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                }
                else if (iVar9 == 1) {
                  *(undefined1 *)puVar26 = *(undefined1 *)pdVar25;
                }
                else if (iVar9 == 2) {
                  *(ushort *)puVar26 = *(ushort *)pdVar25 >> 8 | *(ushort *)pdVar25 << 8;
                }
                else if (iVar9 == 4) {
                  fVar44 = *(float *)pdVar25;
                  *(uint *)puVar26 =
                       (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                       ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                }
                else if (iVar9 == 8) {
                  dVar5 = *pdVar25;
                  *puVar26 = (ulonglong)dVar5 >> 0x38 |
                             ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar5 & 0xff000000) << 8 |
                             ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38;
                }
                if (((ulonglong)local_2d18 & 1) != 0) {
                  FUN_14370c720(local_2cc0,-((*pbVar45 & 0x80) != 0),iVar24);
                }
                uVar20 = (ulonglong)(int)local_2d58;
                pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)param_8);
                uVar37 = (longlong)local_2d60 - 1;
                iVar24 = (int)local_2d40;
              } while (uVar37 != 0);
              local_2d60 = (WriteBytesMem *)0x0;
            }
          }
          break;
        case (WriteBytesMem)0xa:
          uVar22 = FUniqueNetIdString::GetBytes(this);
          puVar12 = (undefined8 *)FUN_143714420(uVar22,1);
          if (puVar12 == (undefined8 *)0x0) {
            local_2d60 = (WriteBytesMem *)0x0;
          }
          else {
            local_2d60 = (WriteBytesMem *)*puVar12;
          }
          puVar13 = AK::WriteBytesMem::Bytes(this);
          puVar26 = (ulonglong *)FUN_143714420(puVar13,1);
          if (puVar26 == (ulonglong *)0x0) {
            uVar37 = 0;
          }
          else {
            uVar37 = *puVar26;
          }
          lVar23 = (longlong)(int)param_8;
          uVar40 = (uint)uVar37;
          pdVar30 = local_2038;
          if ((uVar37 & 0x100) == 0) {
            pdVar30 = pdVar25;
          }
          bVar43 = (uVar37 & 0x100) != 0;
          uVar27 = param_8;
          if (bVar43) {
            uVar27 = 8;
          }
          local_2d40 = (longlong ***)CONCAT44(local_2d40._4_4_,uVar27);
          if (bVar43) {
            pdVar31 = local_2038;
            uVar16 = ((uint)(uVar37 >> 0xb) & 0x1f) + 7 +
                     ((uint)(uVar37 >> 10) & 1) + ((uint)(uVar37 >> 0x10) & 0xff) >> 3;
            if (uVar16 == 1) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  uVar1 = *(undefined1 *)pdVar25;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar23);
                  *(undefined1 *)pdVar31 = uVar1;
                  pdVar31 = pdVar31 + 1;
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar16 == 2) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  uVar4 = *(ushort *)pdVar25;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar23);
                  *(ushort *)pdVar31 = uVar4 >> 8 | uVar4 << 8;
                  uVar37 = uVar37 - 1;
                  pdVar31 = pdVar31 + 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar16 == 4) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  fVar44 = *(float *)pdVar25;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar23);
                  *(uint *)pdVar31 =
                       (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                       ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                  uVar37 = uVar37 - 1;
                  pdVar31 = pdVar31 + 1;
                } while (uVar37 != 0);
              }
            }
            else if ((uVar16 == 8) && (0 < (int)uVar6)) {
              uVar37 = (ulonglong)uVar6;
              do {
                dVar5 = *pdVar25;
                pdVar25 = (double *)((longlong)pdVar25 + lVar23);
                *pdVar31 = (double)((ulonglong)dVar5 >> 0x38 |
                                    ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar5 & 0xff000000) << 8 |
                                    ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38);
                uVar37 = uVar37 - 1;
                pdVar31 = pdVar31 + 1;
              } while (uVar37 != 0);
            }
            uVar40 = uVar40 & 0xfffffeff;
          }
          pdVar25 = local_2038;
          if (((ulonglong)local_2d60 & 0x100) == 0) {
            pdVar25 = pdVar21;
          }
          uVar16 = param_7;
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            uVar16 = 8;
          }
          uVar8 = (uint)local_2d60 & 0xfffffeff;
          if (uVar40 == 0x74605) {
            if (uVar8 == 0x74605) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  uVar3 = *(undefined2 *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *(undefined2 *)pdVar25 = uVar3;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              if (0 < (int)uVar6) {
                uVar37 = (ulonglong)uVar6;
                do {
                  sVar2 = *(short *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *(int *)pdVar25 = (int)sVar2 << 0x10;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *pdVar25 = (double)(float)((int)*(short *)pdVar30 << 0x10);
                  psVar35 = (short *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(double *)((longlong)pdVar25 + lVar39) =
                       (double)(float)((int)*(short *)((longlong)pdVar30 + lVar23) << 0x10);
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39 + lVar39);
                  psVar36 = (short *)((longlong)psVar35 + lVar23);
                  *pdVar25 = (double)(float)((int)*psVar35 << 0x10);
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39);
                  pdVar30 = (double *)((longlong)psVar36 + lVar23);
                  fVar44 = (float)((int)*psVar36 << 0x10);
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,fVar44);
                  *pdVar25 = (double)fVar44;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  sVar2 = *(short *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,(int)sVar2 << 0x10);
                  *pdVar25 = (double)(float)((int)sVar2 << 0x10);
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
          }
          else if (uVar40 == 0x174605) {
            if (uVar8 == 0x74605) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *(short *)pdVar25 = (short)((uint)(*(float *)pdVar30 * 1.0039062) >> 0x10);
                  pfVar17 = (float *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(undefined2 *)((longlong)pdVar25 + lVar39) =
                       (short)((uint)(*(float *)((longlong)pdVar30 + lVar23) * 1.0039062) >> 0x10);
                  puVar18 = (undefined2 *)((longlong)pdVar25 + lVar39 + lVar39);
                  pfVar32 = (float *)((longlong)pfVar17 + lVar23);
                  *puVar18 = (short)((uint)(*pfVar17 * 1.0039062) >> 0x10);
                  puVar18 = (undefined2 *)((longlong)puVar18 + lVar39);
                  pdVar30 = (double *)((longlong)pfVar32 + lVar23);
                  fVar44 = *pfVar32 * 1.0039062;
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,fVar44);
                  *puVar18 = (short)((uint)fVar44 >> 0x10);
                  pdVar25 = (double *)((longlong)puVar18 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  fVar44 = *(float *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,fVar44 * 1.0039062);
                  *(short *)pdVar25 = (short)((uint)(fVar44 * 1.0039062) >> 0x10);
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *(float *)pdVar25 = *(float *)pdVar30;
                  puVar33 = (undefined4 *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(undefined4 *)((longlong)pdVar25 + lVar39) =
                       *(undefined4 *)((longlong)pdVar30 + lVar23);
                  puVar19 = (undefined4 *)((longlong)pdVar25 + lVar39 + lVar39);
                  puVar34 = (undefined4 *)((longlong)puVar33 + lVar23);
                  *puVar19 = *puVar33;
                  puVar19 = (undefined4 *)((longlong)puVar19 + lVar39);
                  pdVar30 = (double *)((longlong)puVar34 + lVar23);
                  *puVar19 = *puVar34;
                  pdVar25 = (double *)((longlong)puVar19 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  fVar44 = *(float *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *(float *)pdVar25 = fVar44;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *pdVar25 = (double)*(float *)pdVar30;
                  pfVar17 = (float *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(double *)((longlong)pdVar25 + lVar39) =
                       (double)*(float *)((longlong)pdVar30 + lVar23);
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39 + lVar39);
                  pfVar32 = (float *)((longlong)pfVar17 + lVar23);
                  *pdVar25 = (double)*pfVar17;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39);
                  pdVar30 = (double *)((longlong)pfVar32 + lVar23);
                  *pdVar25 = (double)*pfVar32;
                  pdVar25 = (double *)((longlong)pdVar25 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  fVar44 = *(float *)pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *pdVar25 = (double)fVar44;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
          }
          else if (uVar40 == 0x345e05) {
            if (uVar8 == 0x74605) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *(short *)pdVar25 = (short)((uint)((float)*pdVar30 * 1.0039062) >> 0x10);
                  pdVar31 = (double *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(undefined2 *)((longlong)pdVar25 + lVar39) =
                       (short)((uint)((float)*(double *)((longlong)pdVar30 + lVar23) * 1.0039062) >>
                              0x10);
                  puVar18 = (undefined2 *)((longlong)pdVar25 + lVar39 + lVar39);
                  pdVar25 = (double *)((longlong)pdVar31 + lVar23);
                  *puVar18 = (short)((uint)((float)*pdVar31 * 1.0039062) >> 0x10);
                  puVar18 = (undefined2 *)((longlong)puVar18 + lVar39);
                  pdVar30 = (double *)((longlong)pdVar25 + lVar23);
                  fVar44 = (float)*pdVar25 * 1.0039062;
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,fVar44);
                  *puVar18 = (short)((uint)fVar44 >> 0x10);
                  pdVar25 = (double *)((longlong)puVar18 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  dVar5 = *pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  local_2d58 = (longlong ***)CONCAT44(local_2d58._4_4_,(float)dVar5 * 1.0039062);
                  *(short *)pdVar25 = (short)((uint)((float)dVar5 * 1.0039062) >> 0x10);
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *(float *)pdVar25 = (float)*pdVar30;
                  pdVar31 = (double *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(float *)((longlong)pdVar25 + lVar39) =
                       (float)*(double *)((longlong)pdVar30 + lVar23);
                  pfVar17 = (float *)((longlong)pdVar25 + lVar39 + lVar39);
                  pdVar25 = (double *)((longlong)pdVar31 + lVar23);
                  *pfVar17 = (float)*pdVar31;
                  pfVar17 = (float *)((longlong)pfVar17 + lVar39);
                  pdVar30 = (double *)((longlong)pdVar25 + lVar23);
                  *pfVar17 = (float)*pdVar25;
                  pdVar25 = (double *)((longlong)pfVar17 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  dVar5 = *pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *(float *)pdVar25 = (float)dVar5;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar24 = 0;
              if (3 < (int)uVar6) {
                lVar23 = (longlong)(int)uVar27;
                uVar40 = (uVar6 - 4 >> 2) + 1;
                lVar39 = (longlong)(int)uVar16;
                uVar37 = (ulonglong)uVar40;
                iVar24 = uVar40 * 4;
                do {
                  *pdVar25 = *pdVar30;
                  puVar28 = (undefined8 *)((longlong)pdVar30 + lVar23 + lVar23);
                  *(undefined8 *)((longlong)pdVar25 + lVar39) =
                       *(undefined8 *)((longlong)pdVar30 + lVar23);
                  puVar12 = (undefined8 *)((longlong)pdVar25 + lVar39 + lVar39);
                  puVar29 = (undefined8 *)((longlong)puVar28 + lVar23);
                  *puVar12 = *puVar28;
                  puVar12 = (undefined8 *)((longlong)puVar12 + lVar39);
                  pdVar30 = (double *)((longlong)puVar29 + lVar23);
                  *puVar12 = *puVar29;
                  pdVar25 = (double *)((longlong)puVar12 + lVar39);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              if (iVar24 < (int)uVar6) {
                uVar37 = (ulonglong)(uVar6 - iVar24);
                do {
                  dVar5 = *pdVar30;
                  pdVar30 = (double *)((longlong)pdVar30 + (longlong)(int)uVar27);
                  *pdVar25 = dVar5;
                  pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)uVar16);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
          }
          uVar37 = (ulonglong)uVar6;
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            pdVar25 = local_2038;
            uVar40 = ((uint)local_2d60 >> 0xb & 0x1f) + 7 +
                     ((uint)((ulonglong)local_2d60 >> 10) & 1) +
                     ((uint)((ulonglong)local_2d60 >> 0x10) & 0xff) >> 3;
            if (uVar40 == 1) {
              if (0 < (int)uVar6) {
                do {
                  uVar1 = *(undefined1 *)pdVar25;
                  pdVar25 = pdVar25 + 1;
                  *(undefined1 *)pdVar21 = uVar1;
                  pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar40 == 2) {
              if (0 < (int)uVar6) {
                do {
                  uVar4 = *(ushort *)pdVar25;
                  pdVar25 = pdVar25 + 1;
                  *(ushort *)pdVar21 = uVar4 >> 8 | uVar4 << 8;
                  pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if (uVar40 == 4) {
              if (0 < (int)uVar6) {
                do {
                  uVar40 = *(uint *)pdVar25;
                  pdVar25 = pdVar25 + 1;
                  *(uint *)pdVar21 =
                       uVar40 >> 0x18 | (uVar40 & 0xff0000) >> 8 | (uVar40 & 0xff00) << 8 |
                       uVar40 << 0x18;
                  pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            else if ((uVar40 == 8) && (0 < (int)uVar6)) {
              do {
                dVar5 = *pdVar25;
                pdVar25 = pdVar25 + 1;
                *pdVar21 = (double)((ulonglong)dVar5 >> 0x38 |
                                    ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar5 & 0xff000000) << 8 |
                                    ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38);
                pdVar21 = (double *)((longlong)pdVar21 + (longlong)(int)param_7);
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
          }
          break;
        case (WriteBytesMem)0xb:
          uVar22 = *(undefined8 *)(this + 0x10);
          FUN_1437152f0(uVar22);
          FUN_1437152f0(*(undefined8 *)(local_2d60 + 0x18));
          iVar24 = FUN_1437152f0(uVar22);
          iVar9 = FUN_1437152f0();
          iVar38 = 0;
          pdVar21 = local_2d30;
          if (0 < (int)uVar6) {
            do {
              if (iVar24 == 1) {
                bVar43 = *(char *)pdVar25 == '\0';
              }
              else if (iVar24 == 2) {
                bVar43 = *(short *)pdVar25 == 0;
              }
              else if (iVar24 == 4) {
                bVar43 = *(float *)pdVar25 == 0.0;
              }
              else {
                bVar43 = *pdVar25 == 0.0;
              }
              bVar43 = !bVar43;
              if (iVar9 == 1) {
                *(bool *)pdVar21 = bVar43;
              }
              else if (iVar9 == 2) {
                *(ushort *)pdVar21 = (ushort)bVar43;
              }
              else if (iVar9 == 4) {
                *(uint *)pdVar21 = (uint)bVar43;
              }
              else {
                *pdVar21 = (double)(ulonglong)bVar43;
              }
              uVar37 = (ulonglong)(int)param_7;
              iVar38 = iVar38 + 1;
              pdVar25 = (double *)((longlong)pdVar25 + (longlong)(int)param_8);
              pdVar21 = (double *)((longlong)pdVar21 + uVar37);
              pppplVar42 = (longlong ****)local_2d48;
            } while (iVar38 < (int)uVar6);
            goto LAB_1437716ad;
          }
          break;
        default:
          goto switchD_143771601_default;
        }
        uVar37 = (ulonglong)param_7;
        pppplVar42 = (longlong ****)local_2d48;
LAB_1437716ad:
        lVar23 = local_2d50;
      }
      local_2cd4 = local_2cd4 + uVar6;
    } while (local_2cd4 < param_9);
  }
  iVar24 = 0;
  if (0 < (int)local_2c40) {
    lVar23 = 0;
    do {
      puVar7 = local_2c48;
      local_2ca0 = *(longlong ****)(local_2c48 + lVar23 + 0x18);
      local_2c90 = *(ulonglong *)(local_2c48 + lVar23 + 0x28);
      local_2c98 = *(undefined8 *)(local_2c48 + lVar23 + 0x20);
      if ((local_2c90 & 1) != 0) {
        FUN_1437329e0(local_2c90 & 0xfffffffffffffffe);
      }
      local_2cb8 = *(WriteBytesMem **)(puVar7 + lVar23);
      local_2ca8 = *(double **)(puVar7 + lVar23 + 0x10);
      local_2cb0 = *(undefined8 *)(puVar7 + lVar23 + 8);
      if (((ulonglong)local_2ca8 & 1) != 0) {
        FUN_1437329e0((ulonglong)local_2ca8 & 0xfffffffffffffffe);
      }
      piVar15 = (int *)FUN_143776f30(param_1,&param_9,&local_2cb8,&local_2ca0);
      if (*piVar15 < 0) goto LAB_143772a99;
      iVar24 = iVar24 + 1;
      lVar23 = lVar23 + 0x30;
    } while (iVar24 < (int)local_2c40);
  }
  uVar22 = 0;
LAB_143772bfa:
  local_2d18 = (longlong ***)FUN_143703a50();
  lVar23 = (longlong)(int)(local_2c40 - 1);
  if (-1 < (int)(local_2c40 - 1)) {
    puVar26 = (ulonglong *)(local_2c48 + lVar23 * 0x30 + 0x10);
    do {
      if ((puVar26[3] & 1) != 0) {
        FUN_143733a60(puVar26[3] & 0xfffffffffffffffe);
      }
      if ((*puVar26 & 1) != 0) {
        FUN_143733a60(*puVar26 & 0xfffffffffffffffe);
      }
      puVar26 = puVar26 + -6;
      lVar23 = lVar23 + -1;
    } while (-1 < lVar23);
  }
  local_2c40 = 0;
  if (-1 < (int)local_2c3c) {
    FUN_143702e10(local_2d18,local_2c48,0x30,local_2c3c & 0x3fffffff);
  }
  return uVar22;
switchD_143771601_default:
  local_2cd8 = local_2cd8 + 1;
  goto LAB_14377159a;
LAB_143772b04:
  local_2ce0 = local_2d30;
  if ((local_2d28 & 1) != 0) {
    FUN_143733a60(local_2d28 & 0xfffffffffffffffe);
    local_2ce0 = local_2d30;
  }
LAB_143772b1a:
  if (((ulonglong)local_2ce0 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2ce0 & 0xfffffffffffffffe);
  }
LAB_143772b28:
  uVar22 = 0x80040200;
  goto LAB_143772bfa;
LAB_143772a99:
  uVar22 = 0x80040200;
  goto LAB_143772bfa;
}



// FUNCTION 143772cf0 FUN_143772cf0 body=174 status=ok
// SIG undefined FUN_143772cf0(void)

undefined8 FUN_143772cf0(longlong *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[1] = 0;
      *puVar2 = _anon_514D5C60::AfterReflectNewLock::vftable;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      FUN_14370d870(puVar2 + 3,0);
    }
    if (puVar2 != (undefined8 *)*param_1) {
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *param_1 = (longlong)puVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143772da0 FUN_143772da0 body=12 status=ok
// SIG undefined FUN_143772da0(void)

void FUN_143772da0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467dddc8);
  return;
}



// FUNCTION 143772db0 FUN_143772db0 body=12 status=ok
// SIG undefined FUN_143772db0(void)

void FUN_143772db0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467dd308);
  return;
}



// FUNCTION 143772dc0 FUN_143772dc0 body=12 status=ok
// SIG undefined FUN_143772dc0(void)

void FUN_143772dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467eda60);
  return;
}



// FUNCTION 143772dd0 FUN_143772dd0 body=440 status=ok
// SIG undefined FUN_143772dd0(void)

void FUN_143772dd0(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  undefined1 local_40 [56];
  
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 8) {
      local_58 = *param_3;
      lStack_50 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      local_48 = param_3[2];
    }
    if (local_58 != 0) {
      FUN_143777f20(param_1,param_2,&local_58,0);
      goto LAB_143772f60;
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_68 = param_3[1];
    local_60 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_40,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba02c0,&local_60,&local_68,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_40);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_143772f60:
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143772f90 FUN_143772f90 body=436 status=ok
// SIG undefined FUN_143772f90(void)

void FUN_143772f90(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined1 local_50 [56];
  
  uVar4 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 2) {
      lStack_60 = param_3[1];
      lVar3 = *param_3;
      local_68 = lVar3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      local_58 = uVar4;
      if (lVar3 != 0) {
        FUN_143770eb0(param_1,param_2,&local_68);
        goto LAB_143773112;
      }
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_78 = param_3[1];
    local_70 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_50,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba01d0,&local_70,&local_78,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_50);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_143773112:
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773150 FUN_143773150 body=436 status=ok
// SIG undefined FUN_143773150(void)

void FUN_143773150(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined1 local_50 [56];
  
  uVar4 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 5) {
      lStack_60 = param_3[1];
      lVar3 = *param_3;
      local_68 = lVar3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      local_58 = uVar4;
      if (lVar3 != 0) {
        FUN_143771030(param_1,param_2,&local_68);
        goto LAB_1437732d2;
      }
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_78 = param_3[1];
    local_70 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_50,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba0248,&local_70,&local_78,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_50);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_1437732d2:
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773310 FUN_143773310 body=436 status=ok
// SIG undefined FUN_143773310(void)

void FUN_143773310(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined1 local_50 [56];
  
  uVar4 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 4) {
      lStack_60 = param_3[1];
      lVar3 = *param_3;
      local_68 = lVar3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      local_58 = uVar4;
      if (lVar3 != 0) {
        FUN_1437711c0(param_1,param_2,&local_68);
        goto LAB_143773492;
      }
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_78 = param_3[1];
    local_70 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_50,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba0220,&local_70,&local_78,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_50);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_143773492:
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437734d0 FUN_1437734d0 body=468 status=ok
// SIG undefined FUN_1437734d0(void)

void FUN_1437734d0(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  uVar4 = 0;
  if (param_3[1] == 0) {
LAB_143773590:
    if (DAT_146b83f08 < 2) goto LAB_14377366d;
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_68 = param_3[1];
    local_60 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_58,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba01a8,&local_60,&local_68,local_res20,local_res18,0);
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
  }
  else {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) != 1) goto LAB_143773590;
    lVar3 = *param_3;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
    }
    uVar4 = param_3[2];
    if (lVar3 == 0) goto LAB_143773590;
    if (DAT_146b83f08 < 2) goto LAB_14377366d;
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_58,"Cannot clone an object of type Opaque",&DAT_145b909f0,0);
    *(undefined8 *)(lVar3 + 0x28) = 0x255;
  }
  *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_58);
LAB_14377366d:
  *(undefined1 *)(param_1 + 8) = 0;
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437736b0 FUN_1437736b0 body=436 status=ok
// SIG undefined FUN_1437736b0(void)

void FUN_1437736b0(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined1 local_50 [56];
  
  uVar4 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 6) {
      lStack_60 = param_3[1];
      lVar3 = *param_3;
      local_68 = lVar3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      local_58 = uVar4;
      if (lVar3 != 0) {
        FUN_143778f80(param_1,param_2,&local_68);
        goto LAB_143773832;
      }
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_78 = param_3[1];
    local_70 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_50,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba0270,&local_70,&local_78,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_50);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_143773832:
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773870 FUN_143773870 body=437 status=ok
// SIG undefined FUN_143773870(void)

void FUN_143773870(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  undefined1 local_40 [56];
  
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 7) {
      local_58 = *param_3;
      lStack_50 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      local_48 = param_3[2];
    }
    if (local_58 != 0) {
      FUN_143779030(param_1,param_2,&local_58);
      goto LAB_1437739fd;
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_68 = param_3[1];
    local_60 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_40,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_40,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba0298,&local_60,&local_68,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_40);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_1437739fd:
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773a30 FUN_143773a30 body=436 status=ok
// SIG undefined FUN_143773a30(void)

void FUN_143773a30(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined1 local_50 [56];
  
  uVar4 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 3) {
      lStack_60 = param_3[1];
      lVar3 = *param_3;
      local_68 = lVar3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      local_58 = uVar4;
      if (lVar3 != 0) {
        FUN_14377a140(param_1,param_2,&local_68);
        goto LAB_143773bb2;
      }
    }
  }
  if (1 < DAT_146b83f08) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar2;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar2;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_78 = param_3[1];
    local_70 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_50,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_50,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba01f8,&local_70,&local_78,local_res20,local_res18,0);
    *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
    FUN_14373a950(local_50);
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_143773bb2:
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773bf0 FUN_143773bf0 body=469 status=ok
// SIG undefined FUN_143773bf0(void)

void FUN_143773bf0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  uVar5 = 0;
  if (param_3[1] == 0) {
LAB_143773cb1:
    if (DAT_146b83f08 < 2) goto LAB_143773d8e;
    puVar4 = (undefined8 *)FUN_143714490(param_3[1],1);
    local_res18[0] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      local_res18[0] = (uint)*puVar4;
    }
    local_res18[0] = local_res18[0] & 0xf;
    puVar4 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_2 + 8),1);
    local_res20[0] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      local_res20[0] = (uint)*puVar4;
    }
    local_res20[0] = local_res20[0] & 0xf;
    local_68 = param_3[1];
    local_60 = *(undefined8 *)(param_2 + 8);
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_58,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&DAT_145ba0128,&local_60,&local_68,local_res20,local_res18,0);
    *(undefined8 *)(lVar3 + 0x28) = 0xf4;
  }
  else {
    puVar1 = (ulonglong *)FUN_143714490(param_3[1],1);
    uVar2 = 0;
    if (puVar1 != (ulonglong *)0x0) {
      uVar2 = *puVar1;
    }
    if ((uVar2 & 0xf) != 0) goto LAB_143773cb1;
    lVar3 = *param_3;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
    }
    uVar5 = param_3[2];
    if (lVar3 == 0) goto LAB_143773cb1;
    if (DAT_146b83f08 < 2) goto LAB_143773d8e;
    FUN_14373a730(local_58,&DAT_146b83f00,2);
    lVar3 = FUN_14373bbd0(local_58,"Cannot clone an object of type void",&DAT_145b909f0,0);
    *(undefined8 *)(lVar3 + 0x28) = 0x25a;
  }
  *(char **)(lVar3 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_58);
LAB_143773d8e:
  *(undefined1 *)(param_1 + 8) = 0;
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773dd0 FUN_143773dd0 body=199 status=ok
// SIG undefined FUN_143773dd0(void)

void FUN_143773dd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 8) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143772dd0(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773ea0 FUN_143773ea0 body=199 status=ok
// SIG undefined FUN_143773ea0(void)

void FUN_143773ea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 2) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143772f90(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143773f70 FUN_143773f70 body=199 status=ok
// SIG undefined FUN_143773f70(void)

void FUN_143773f70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 5) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143773150(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774040 FUN_143774040 body=199 status=ok
// SIG undefined FUN_143774040(void)

void FUN_143774040(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 4) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143773310(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774110 FUN_143774110 body=181 status=ok
// SIG undefined FUN_143774110(void)

void FUN_143774110(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 1) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_2[2];
      local_18 = uVar3;
    }
  }
  FUN_1437734d0(param_1,&local_28,param_3);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437741d0 FUN_1437741d0 body=181 status=ok
// SIG undefined FUN_1437741d0(void)

void FUN_1437741d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 6) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_2[2];
      local_18 = uVar3;
    }
  }
  FUN_1437736b0(param_1,&local_28,param_3);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774290 FUN_143774290 body=199 status=ok
// SIG undefined FUN_143774290(void)

void FUN_143774290(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 7) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143773870(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774360 FUN_143774360 body=199 status=ok
// SIG undefined FUN_143774360(void)

void FUN_143774360(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 3) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_143773a30(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774430 FUN_143774430 body=181 status=ok
// SIG undefined FUN_143774430(void)

void FUN_143774430(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    if ((uVar1 & 0xf) == 0) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_2[2];
      local_18 = uVar3;
    }
  }
  FUN_143773bf0(param_1,&local_28,param_3);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437744f0 FUN_1437744f0 body=217 status=ok
// SIG undefined FUN_1437744f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437744f0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b83fc8) {
    _Init_thread_header(&DAT_146b83fc8);
    if (DAT_146b83fc8 == -1) {
      _DAT_146b84010 = FUN_143773dd0;
      _DAT_146b84008 = FUN_143774290;
      _DAT_146b84000 = FUN_1437741d0;
      _DAT_146b83ff8 = FUN_143773f70;
      _DAT_146b83ff0 = FUN_143774040;
      _DAT_146b83fe8 = FUN_143774360;
      _DAT_146b83fe0 = FUN_143773ea0;
      _DAT_146b83fd8 = FUN_143774110;
      DAT_146b83fd0 = FUN_143774430;
      _Init_thread_footer(&DAT_146b83fc8);
    }
  }
  return param_1;
}



// FUNCTION 1437745d0 FUN_1437745d0 body=283 status=ok
// SIG undefined FUN_1437745d0(void)

undefined8 * FUN_1437745d0(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1437744f0();
  *(undefined2 *)(param_1 + 1) = 1;
  puVar4 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_14374e530(param_1 + 0xd);
  FUN_143750180(param_1 + 0xd);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),8);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkTypeVm::IntAndFloatConversionPass::vftable;
    puVar3 = puVar2;
  }
  FUN_14374e870(param_1 + 0xd,puVar3);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = hkTypeVm::CheckTypeKindsPass::vftable;
    puVar4 = puVar3;
  }
  FUN_14374e870(param_1 + 0xd,puVar4);
  *(undefined2 *)((longlong)param_1 + 0x69) = 0x100;
  return param_1;
}



// FUNCTION 1437746f0 FUN_1437746f0 body=88 status=ok
// SIG undefined FUN_1437746f0(void)

undefined8 * FUN_1437746f0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0xa0);
  if (lVar2 != 0) {
    uVar3 = FUN_1437745d0(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143774750 FUN_143774750 body=158 status=ok
// SIG undefined FUN_143774750(void)

void FUN_143774750(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*param_1 + 0x10 + lVar4 * 0x20);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1437747f0 FUN_1437747f0 body=402 status=ok
// SIG undefined FUN_1437747f0(void)

void FUN_1437747f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  FUN_14374e570(param_1 + 0x68);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),0x20,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar4 * 0x30);
    do {
      if ((puVar3[3] & 1) != 0) {
        FUN_143733a60(puVar3[3] & 0xfffffffffffffffe);
      }
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x30,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar4 * 0x30);
    do {
      if ((puVar3[3] & 1) != 0) {
        FUN_143733a60(puVar3[3] & 0xfffffffffffffffe);
      }
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x30,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143775d20(param_1 + 0x10,uVar1);
  return;
}



// FUNCTION 143774990 FUN_143774990 body=76 status=ok
// SIG undefined FUN_143774990(void)

void FUN_143774990(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1437747f0(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
                    /* WARNING: Could not recover jumptable at 0x0001437749d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0xa0);
    return;
  }
  return;
}



// FUNCTION 1437749e0 FUN_1437749e0 body=311 status=ok
// SIG undefined FUN_1437749e0(void)

ulonglong FUN_1437749e0(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_143777d00(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  lVar1 = *param_3;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = iVar3 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar6 = (ulonglong)
          ((uVar4 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar4) &
          *(uint *)((longlong)param_1 + 0xc));
  plVar5 = (longlong *)(uVar6 * 0x30 + *param_1);
  lVar2 = plVar5[1];
  do {
    if (lVar2 == 1) {
LAB_143774abc:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      if (*param_4 == 0) {
        if ((*(byte *)(*param_1 + 0x10 + uVar6 * 0x30) & 1) != 0) {
          FUN_143733a60(*(ulonglong *)(*param_1 + 0x10 + uVar6 * 0x30) & 0xfffffffffffffffe);
        }
        if ((*(byte *)(*param_1 + 0x28 + uVar6 * 0x30) & 1) != 0) {
          FUN_143733a60(*(ulonglong *)(*param_1 + 0x28 + uVar6 * 0x30) & 0xfffffffffffffffe);
        }
      }
      return uVar6;
    }
    if (((*plVar5 == 0) && (lVar1 == 0)) || ((*plVar5 == lVar1 && (plVar5[1] == param_3[1])))) {
      *param_4 = 0;
      goto LAB_143774abc;
    }
    uVar6 = (ulonglong)((int)uVar6 + 1U & *(uint *)((longlong)param_1 + 0xc));
    plVar5 = (longlong *)(uVar6 * 0x30 + *param_1);
    lVar2 = plVar5[1];
  } while( true );
}



// FUNCTION 143774b20 FUN_143774b20 body=220 status=ok
// SIG undefined FUN_143774b20(void)

void FUN_143774b20(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar2 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *param_2;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0(lVar2);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,0x20);
  }
  puVar6 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = uVar3;
    puVar6[1] = lVar2;
    puVar6[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    *(undefined4 *)(puVar6 + 3) = uVar1;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774c00 FUN_143774c00 body=261 status=ok
// SIG undefined FUN_143774c00(void)

void FUN_143774c00(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((((char)param_1[2] != '\0') && (*param_2 != 0)) &&
      (plVar4 = (longlong *)FUN_143714490(param_2[1],0x40000000), plVar4 != (longlong *)0x0)) &&
     (lVar1 = *plVar4, lVar1 != 0)) {
    lVar2 = param_2[1];
    lVar3 = *param_2;
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_1,0x20);
    }
    lVar6 = (longlong)(int)param_1[1] * 0x20 + *param_1;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    plVar4 = (longlong *)((longlong)(int)param_1[1] * 0x20 + *param_1);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar4[1] = lVar3;
    plVar4[3] = lVar2;
    *plVar4 = lVar1;
    *(undefined4 *)(plVar4 + 2) = param_3;
    *(undefined4 *)((longlong)plVar4 + 0x14) = param_4;
  }
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    return;
  }
  FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  return;
}



// FUNCTION 143774d10 FUN_143774d10 body=207 status=ok
// SIG undefined FUN_143774d10(void)

void FUN_143774d10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1437151a0(lVar1);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x20);
  }
  puVar5 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = uVar2;
    puVar5[1] = lVar1;
    puVar5[2] = uVar3;
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143774de0 FUN_143774de0 body=233 status=ok
// SIG undefined FUN_143774de0(void)

void FUN_143774de0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((((char)param_1[2] != '\0') && (*param_2 != 0)) &&
      (plVar4 = (longlong *)FUN_143714490(param_2[1]), plVar4 != (longlong *)0x0)) &&
     (lVar1 = *plVar4, lVar1 != 0)) {
    lVar2 = param_2[1];
    lVar3 = *param_2;
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_1,0x20);
    }
    lVar6 = (longlong)(int)param_1[1] * 0x20 + *param_1;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    plVar4 = (longlong *)((longlong)(int)param_1[1] * 0x20 + *param_1);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar4[1] = lVar3;
    plVar4[3] = lVar2;
    *plVar4 = lVar1;
    plVar4[2] = 1;
  }
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    return;
  }
  FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  return;
}



// FUNCTION 143774ed0 FUN_143774ed0 body=21 status=ok
// SIG undefined FUN_143774ed0(void)

undefined4 *
FUN_143774ed0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  *param_2 = 0;
  *param_5 = 1;
  return param_2;
}



// FUNCTION 143774ef0 FUN_143774ef0 body=673 status=ok
// SIG undefined FUN_143774ef0(void)

undefined4 *
FUN_143774ef0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res18 [16];
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  FUN_1437140a0(&local_88,param_3[1]);
  uVar9 = 0;
  if ((local_88 < 2) ||
     (puVar4 = (uint *)FUN_143714f30(&local_88,local_res18), (*puVar4 >> 6 & 1) == 0)) {
    local_80 = *param_3;
    local_78 = param_3[1];
    local_70 = param_3[2];
  }
  else {
    lVar8 = *(longlong *)(param_3[1] + 8);
    uVar6 = uVar9;
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(lVar8,1);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = FUN_1437157a0(0);
      }
      else {
        uVar6 = FUN_1437157a0((uint)*puVar5 & 0xf);
      }
    }
    local_78 = uVar9;
    if (lVar8 != 0) {
      local_78 = FUN_143772da0(lVar8,uVar6);
    }
    local_80 = *param_3;
    local_70 = uVar9;
    if (local_78 != 0) {
      local_70 = FUN_1437151a0();
    }
  }
  if ((local_70 & 1) != 0) {
    FUN_1437329e0(local_70 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  lStack_60 = 0;
  piVar7 = (int *)FUN_143742a50(param_4,local_res18,&local_68);
  if (*piVar7 < 0) {
    *param_2 = 0x80040200;
    goto LAB_14377514d;
  }
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  lStack_40 = 0;
  piVar7 = (int *)FUN_143742a50(&local_80,local_res18,&local_48);
  if (*piVar7 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    bVar1 = false;
    lVar8 = lStack_40;
    if ((lStack_40 == 0) && (lStack_60 != 0)) {
      bVar1 = true;
      lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
      if (lVar8 == 0) {
        *param_2 = 0x80040200;
        goto LAB_14377513a;
      }
    }
    iVar2 = FUN_143742950(param_4);
    if ((iVar2 != 0) || (bVar1)) {
      iVar3 = (**(code **)(*(longlong *)(local_70 & 0xfffffffffffffffe) + 0x80))
                        ((longlong *)(local_70 & 0xfffffffffffffffe),local_80,local_78,lVar8,iVar2);
      if (iVar3 == 1) {
        *param_2 = 0x80040200;
      }
      else {
        if (iVar3 != 2) goto LAB_143775137;
        if ((bVar1) && (lVar8 == 0)) {
          *param_2 = 0x80040200;
        }
        else {
          (**(code **)(*(longlong *)(local_70 & 0xfffffffffffffffe) + 0x70))
                    ((longlong *)(local_70 & 0xfffffffffffffffe),param_2,local_80,local_78,iVar2);
        }
      }
    }
    else {
      iVar2 = FUN_143742950(&local_80);
      if (iVar2 < 1) {
LAB_143775137:
        *param_2 = 0;
      }
      else {
        (**(code **)(*(longlong *)(local_70 & 0xfffffffffffffffe) + 0x70))
                  ((longlong *)(local_70 & 0xfffffffffffffffe),param_2,local_80,local_78,0);
      }
    }
  }
LAB_14377513a:
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
LAB_14377514d:
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437751a0 FUN_1437751a0 body=1204 status=ok
// SIG undefined FUN_1437751a0(void)

undefined4 *
FUN_1437751a0(longlong *param_1,undefined4 *param_2,ulonglong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res20;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  if (*param_4 == 0) {
    if (DAT_146b83f08 < 3) goto LAB_14377521f;
    FUN_14373a730(local_80,&DAT_146b83f00,3);
    lVar2 = FUN_14373bbd0(local_80,"Cannot clone null Var",&DAT_145b909f0,0);
    *(undefined8 *)(lVar2 + 0x28) = 0x3fb;
  }
  else {
    lVar2 = 0;
    local_90 = lVar2;
    if ((param_4[1] != 0) && (lVar3 = FUN_143715410(), lVar3 == 0)) {
      local_90 = FUN_1436f73d0(*param_4,param_4[1]);
    }
    uVar1 = 0;
    if (local_90 != 0) {
      FUN_143714060(&local_res20,local_90);
      if (local_res20 < 2) {
        uVar7 = (**(code **)(*param_1 + 0x18))(param_1,local_90);
        if (uVar7 != 0) {
          puVar5 = (undefined8 *)FUN_143714490(uVar7,1);
          if (puVar5 != (undefined8 *)0x0) {
            uVar1 = (uint)*puVar5;
          }
          puVar6 = (undefined *)FUN_1437157a0(uVar1 & 0xf);
LAB_1437754ba:
          uVar8 = FUN_1437151a0(puVar6);
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          *param_3 = uVar7;
          param_3[1] = (ulonglong)puVar6;
          if ((param_3[2] & 1) != 0) {
            FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
          }
          param_3[2] = uVar8;
          *param_2 = 0;
          return param_2;
        }
        if (DAT_146b83f08 < 3) goto LAB_143775468;
        FUN_14373a730(local_80,&DAT_146b83f00,3);
        lVar2 = FUN_14373bbd0(local_80,"Cannot find native type for \'{}\'. ",&DAT_145b749c8,
                              &local_90,0);
        *(undefined8 *)(lVar2 + 0x28) = 0x418;
      }
      else {
        if (local_res20 != 0) {
          lVar2 = FUN_143714de0();
        }
        local_88 = (**(code **)(*param_1 + 0x18))(param_1,lVar2);
        if (local_88 == 0) {
          if (DAT_146b83f08 < 3) goto LAB_143775468;
          if (local_res20 == 0) {
            local_98 = 0;
          }
          else {
            local_98 = FUN_143714de0();
          }
          FUN_14373a730(local_80,&DAT_146b83f00,3);
          lVar2 = FUN_14373bbd0(local_80,"Cannot find native type for \'{}\' (context of \'{}\'). ",
                                &DAT_145b9fed8,&local_98,&local_res20,0);
          *(undefined8 *)(lVar2 + 0x28) = 0x406;
        }
        else {
          uVar4 = FUN_1437151c0(&local_res20);
          FUN_143714a90(local_88,&local_48,uVar4,0);
          if (1 < local_48) {
            uVar7 = local_48;
            if (local_48 == 0) {
              puVar6 = &DAT_1467e2850;
            }
            else {
              puVar5 = (undefined8 *)FUN_143714490(local_48,1);
              if (puVar5 == (undefined8 *)0x0) {
                puVar6 = (undefined *)FUN_1437157a0(0);
              }
              else {
                puVar6 = (undefined *)FUN_1437157a0((uint)*puVar5 & 0xf);
              }
            }
            goto LAB_1437754ba;
          }
          if (DAT_146b83f08 < 3) goto LAB_143775468;
          local_98 = FUN_1437151c0(&local_res20);
          FUN_14373a730(local_80,&DAT_146b83f00,3);
          lVar2 = FUN_14373bbd0(local_80,"Cannot find decl \'{}\' in type \'{}\'.",&DAT_145b9fef0,
                                &local_98,&local_88,0);
          *(undefined8 *)(lVar2 + 0x28) = 0x40c;
        }
      }
      *(char **)(lVar2 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      FUN_14373a950(local_80);
LAB_143775468:
      *param_2 = 0x80040200;
      return param_2;
    }
    if (*param_3 != 0) {
LAB_14377564d:
      *param_2 = 0;
      return param_2;
    }
    local_res20 = (**(code **)(*param_1 + 0x18))(param_1,param_4[1]);
    if (local_res20 == 0) {
      if (DAT_146b83f08 < 3) goto LAB_14377521f;
      FUN_14373a730(local_80,&DAT_146b83f00,3);
      lVar2 = FUN_14373bbd0(local_80,"Cannot find native type for \'{}\'. ",&DAT_145b749c8,&local_90
                            ,0);
      *(undefined8 *)(lVar2 + 0x28) = 0x426;
    }
    else {
      lVar2 = FUN_14374a2b0(local_res20);
      if (lVar2 == 0) {
        if (DAT_146b83f08 < 3) goto LAB_14377521f;
        FUN_14373a730(local_80,&DAT_146b83f00,3);
        lVar2 = FUN_14373bbd0(local_80,"Type \'{}\' cannot be constructed for cloning. ",
                              &DAT_145b749c8,&local_res20,0);
        *(undefined8 *)(lVar2 + 0x28) = 0x42e;
      }
      else {
        uVar4 = FUN_143749110(local_40,param_4,local_res20);
        FUN_143732990(param_3,uVar4);
        if ((local_30 & 1) != 0) {
          FUN_143733a60(local_30 & 0xfffffffffffffffe);
        }
        if (*param_3 != 0) {
          FUN_143777a80(param_1 + 1,param_3);
          goto LAB_14377564d;
        }
        if (DAT_146b83f08 < 3) goto LAB_14377521f;
        FUN_14373a730(local_80,&DAT_146b83f00,3);
        lVar2 = FUN_14373bbd0(local_80,"Type \'{}\' cannot be allocated for cloning. ",
                              &DAT_145b749c8,&local_res20,0);
        *(undefined8 *)(lVar2 + 0x28) = 0x436;
      }
    }
  }
  *(char **)(lVar2 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_14373a950(local_80);
LAB_14377521f:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143775660 FUN_143775660 body=322 status=ok
// SIG undefined FUN_143775660(void)

void FUN_143775660(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtReflect.CallAfterReflectNew");
  }
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d190(pvVar6,"MiNumVars");
  }
  lVar3 = DAT_146b83f78;
  if ((int)param_1[1] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b83f78 + 0x18));
    iVar4 = (int)param_1[1] + -1;
    lVar10 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar8 = lVar10 << 5;
      do {
        lVar2 = *param_1;
        uVar1 = *(uint *)(lVar8 + 0x18 + lVar2);
        uVar7 = (int)uVar1 >> 0x1f;
        FUN_143749360(*(undefined8 *)(lVar8 + lVar2),*(undefined8 *)(lVar8 + 8 + lVar2),
                      (uVar1 ^ uVar7) - uVar7);
        lVar10 = lVar10 + -1;
        lVar8 = lVar8 + -0x20;
      } while (-1 < lVar10);
    }
    iVar4 = (int)param_1[1] + -1;
    lVar10 = (longlong)iVar4;
    if (-1 < iVar4) {
      puVar9 = (ulonglong *)(*param_1 + 0x10 + lVar10 * 0x20);
      do {
        if ((*puVar9 & 1) != 0) {
          FUN_143733a60(*puVar9 & 0xfffffffffffffffe);
        }
        puVar9 = puVar9 + -4;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
    return;
  }
  return;
}



// FUNCTION 1437757b0 FUN_1437757b0 body=334 status=ok
// SIG undefined FUN_1437757b0(void)

char FUN_1437757b0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_58 [64];
  
  cVar2 = '\x01';
  if (((char)param_1[2] != '\0') && (iVar7 = 0, 0 < (int)param_1[1])) {
    lVar6 = 0;
    do {
      if (cVar2 == '\0') goto LAB_143775838;
      lVar1 = *param_1;
      iVar4 = 0;
      lVar5 = *(longlong *)(lVar6 + 8 + lVar1);
      if (0 < *(int *)(lVar6 + 0x10 + lVar1)) {
        do {
          if (cVar2 == '\0') break;
          cVar2 = (**(code **)(lVar6 + lVar1))(lVar5);
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + *(int *)(lVar6 + 0x14 + lVar1);
        } while (iVar4 < *(int *)(lVar6 + 0x10 + lVar1));
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar7 < (int)param_1[1]);
    if (cVar2 == '\0') {
LAB_143775838:
      if (2 < DAT_146b83f08) {
        FUN_14373a730(local_58,&DAT_146b83f00,3);
        lVar6 = FUN_14373bbd0(local_58,"Reflect validation failed",&DAT_145b909f0,0);
        *(char **)(lVar6 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0x331;
        FUN_14373a950(local_58);
      }
    }
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar3,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return cVar2;
}



// FUNCTION 143775900 FUN_143775900 body=213 status=ok
// SIG undefined FUN_143775900(void)

/* WARNING: Removing unreachable block (ram,0x000143775989) */

void FUN_143775900(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
    return;
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar4 = (longlong)iVar2;
  if (iVar2 < 1) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
    return;
  }
  lVar5 = 0;
  do {
    lVar1 = *param_1;
    if (*(longlong *)(lVar5 + 8 + lVar1) != 1) {
      if ((*(byte *)(lVar5 + 0x10 + lVar1) & 1) != 0) {
        FUN_143733a60(*(ulonglong *)(lVar5 + 0x10 + lVar1) & 0xfffffffffffffffe);
      }
      if ((*(byte *)(lVar5 + 0x28 + *param_1) & 1) != 0) {
        FUN_143733a60(*(ulonglong *)(lVar5 + 0x28 + *param_1) & 0xfffffffffffffffe);
      }
      puVar3 = (undefined8 *)(*param_1 + lVar5);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar3[2] = 0;
      }
    }
    lVar5 = lVar5 + 0x30;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 1437759e0 FUN_1437759e0 body=818 status=ok
// SIG undefined FUN_1437759e0(void)

void FUN_1437759e0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_143714490(puVar7,1);
  puVar14 = (undefined8 *)0x0;
  bVar12 = 0;
  bVar10 = bVar12;
  if (puVar4 != (undefined8 *)0x0) {
    bVar10 = (byte)*puVar4;
  }
  puVar4 = puVar14;
  if ((bVar10 & 0xf) == 7) {
    puVar4 = puVar7;
  }
  if (puVar4 != (undefined8 *)0x0) {
    hkReflect::DeclIterAll::DeclIterAll(&local_38,param_1[1],0);
LAB_143775a40:
    puVar7 = local_38 + 1;
    if ((local_38 + 1 < local_30) ||
       (cVar3 = FUN_1437144f0(&local_38), puVar7 = local_38, cVar3 != '\0')) goto LAB_143775a65;
    bVar2 = false;
    goto LAB_143775a79;
  }
  local_res8 = 0;
  if (param_1[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar10 = bVar12;
    if (puVar7 != (undefined8 *)0x0) {
      bVar10 = (byte)*puVar7;
    }
    if ((bVar10 & 0xf) == 3) {
      local_res10 = *param_1;
      lVar1 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      local_res8 = param_1[2];
      if (local_res10 != 0) {
        plVar8 = (longlong *)FUN_1437151a0(lVar1);
        (**(code **)(*plVar8 + 0x40))(plVar8,*param_1,lVar1);
        goto LAB_143775cee;
      }
    }
  }
  local_58 = 0;
  local_68 = 0;
  lStack_60 = 0;
  if (param_1[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar10 = bVar12;
    if (puVar7 != (undefined8 *)0x0) {
      bVar10 = (byte)*puVar7;
    }
    if ((bVar10 & 0xf) == 8) {
      local_68 = *param_1;
      lStack_60 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      local_58 = param_1[2];
    }
    if (local_68 != 0) {
      FUN_143742a00(&local_68,&local_38);
      puVar7 = local_30;
      if (local_30 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_143714490(local_30,1);
        puVar4 = local_30;
        bVar11 = 0;
        bVar10 = bVar11;
        if (puVar9 != (undefined8 *)0x0) {
          bVar10 = (byte)*puVar9;
        }
        puVar9 = puVar14;
        if ((bVar10 & 0xf) == 7) {
          puVar9 = puVar7;
        }
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)FUN_143714490(local_30,1);
          puVar7 = local_30;
          if (puVar9 != (undefined8 *)0x0) {
            bVar11 = (byte)*puVar9;
          }
          puVar9 = puVar14;
          if ((bVar11 & 0xf) == 3) {
            puVar9 = puVar4;
          }
          if (puVar9 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)FUN_143714490(local_30,1);
            if (puVar4 != (undefined8 *)0x0) {
              bVar12 = (byte)*puVar4;
            }
            puVar4 = puVar14;
            if ((bVar12 & 0xf) == 8) {
              puVar4 = puVar7;
            }
            if (puVar4 == (undefined8 *)0x0) goto LAB_143775cad;
          }
        }
        if (0 < local_28) {
          do {
            local_50 = (longlong)(local_24 * (int)puVar14) + (longlong)local_38;
            local_48 = local_30;
            local_40 = ((uint)local_20 & 0xff ^ (uint)local_20) & 1 ^ local_20;
            if ((local_40 & 1) != 0) {
              FUN_1437329e0(local_40 & 0xfffffffffffffffe);
            }
            FUN_1437759e0(&local_50);
            if ((local_40 & 1) != 0) {
              FUN_143733a60(local_40 & 0xfffffffffffffffe);
            }
            uVar13 = (int)puVar14 + 1;
            puVar14 = (undefined8 *)(ulonglong)uVar13;
          } while ((int)uVar13 < local_28);
        }
      }
LAB_143775cad:
      plVar8 = (longlong *)FUN_1437151a0(lStack_60);
      (**(code **)(*plVar8 + 0x88))(plVar8,*param_1,lStack_60);
      if ((local_20 & 1) != 0) {
        FUN_143733a60(local_20 & 0xfffffffffffffffe);
      }
    }
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
LAB_143775cee:
  if ((local_res8 & 1) != 0) {
    FUN_143733a60(local_res8 & 0xfffffffffffffffe);
  }
  return;
LAB_143775a65:
  local_38 = puVar7;
  pbVar5 = (byte *)FUN_143714f30(local_38,&local_res8);
  if ((*pbVar5 & 0x20) != 0) {
    bVar2 = true;
LAB_143775a79:
    if (!bVar2) {
      return;
    }
    uVar6 = FUN_143741f50(param_1,&local_50,*local_38);
    FUN_1437759e0(uVar6);
    if ((local_40 & 1) != 0) {
      FUN_143733a60(local_40 & 0xfffffffffffffffe);
    }
  }
  goto LAB_143775a40;
}



// FUNCTION 143775d20 FUN_143775d20 body=84 status=ok
// SIG undefined FUN_143775d20(void)

void FUN_143775d20(longlong *param_1,longlong *param_2)

{
  FUN_143775900();
  if ((*param_1 != 0) && (-1 < (int)param_1[1])) {
    (**(code **)(*param_2 + 0x10))(param_2,*param_1,(*(int *)((longlong)param_1 + 0xc) + 1) * 0x30);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143775d80 FUN_143775d80 body=354 status=ok
// SIG undefined FUN_143775d80(void)

void FUN_143775d80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = FUN_143703a50();
  FUN_143775d20(param_1 + 0x10,uVar1);
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar4 * 0x30);
    do {
      if ((puVar3[3] & 1) != 0) {
        FUN_143733a60(puVar3[3] & 0xfffffffffffffffe);
      }
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x30,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar4 * 0x30);
    do {
      if ((puVar3[3] & 1) != 0) {
        FUN_143733a60(puVar3[3] & 0xfffffffffffffffe);
      }
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x30,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14374e970(param_1 + 0x68);
  return;
}



// FUNCTION 143775ef0 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FUN_143775d80(*param_1);
  return;
}



// FUNCTION 143775f00 FUN_143775f00 body=1604 status=ok
// SIG undefined FUN_143775f00(void)

void FUN_143775f00(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,int param_4)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int local_res10 [2];
  char *local_res18;
  int local_res20;
  char *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [56];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60 [4];
  
  uVar1 = param_2[2];
  local_78 = *param_2;
  local_res20 = param_4;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  local_c8 = (char *)*param_3;
  local_b8 = param_3[2];
  local_c0 = param_3[1];
  if ((local_b8 & 1) != 0) {
    FUN_1437329e0(local_b8 & 0xfffffffffffffffe);
  }
  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_res10,param_2,&local_c8);
  uVar9 = 0;
  if (local_res10[0] < 0) {
    if (((local_c0 == 0) || (lVar5 = FUN_143715410(), lVar5 != 0)) ||
       (lVar5 = FUN_1436f73d0(local_c8,local_c0), lVar5 == 0)) {
      puVar7 = (uint *)FUN_143715390(local_c0,&local_res18);
      if ((*puVar7 >> 0xb & 1) == 0) {
        if (*(char *)((longlong)param_1 + 9) != '\0') goto LAB_1437761c9;
        if (1 < DAT_146b83f08) {
          uVar6 = FUN_143714f80(local_c0,&local_78);
          FUN_14373a730(local_b0,&DAT_146b83f00,2);
          lVar5 = FUN_14373bbd0(local_b0,
                                "Cannot allocate/construct instance of type \'{}\' (unregistered type?)"
                                ,&DAT_145b9a730,uVar6,0);
          *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x2b0;
          FUN_14373a950(local_b0);
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 9) != '\0') {
LAB_1437761c9:
          if (2 < DAT_146b83f08) {
            uVar6 = FUN_143714f80(local_c0,local_60);
            FUN_14373a730(local_b0,&DAT_146b83f00,3);
            lVar5 = FUN_14373bbd0(local_b0,"Skipping instance of {} (callback returned failure)",
                                  &DAT_145b9a730,uVar6,0);
            *(undefined8 *)(lVar5 + 0x28) = 0x2b3;
            goto LAB_14377621f;
          }
          goto LAB_14377622c;
        }
        if (1 < DAT_146b83f08) {
          uVar6 = FUN_143714f80(local_c0,&local_78);
          FUN_14373a730(local_b0,&DAT_146b83f00,2);
          lVar5 = FUN_14373bbd0(local_b0,
                                "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) WinMD file. Check that WinMD files are present on disk and correctly loaded."
                                ,&DAT_145b9a730,uVar6,0);
          *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x2ac;
          FUN_14373a950(local_b0);
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1437764e5;
        }
      }
LAB_1437761bf:
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1437764e5;
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      if (1 < DAT_146b83f08) {
        uVar6 = FUN_143714f80(lVar5,&local_78);
        FUN_14373a730(local_b0,&DAT_146b83f00,2);
        lVar5 = FUN_14373bbd0(local_b0,"Cannot find native type for {} (unregistered type?)",
                              &DAT_145b9a730,uVar6,0);
        *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar5 + 0x28) = 0x2a3;
        FUN_14373a950(local_b0);
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_1437764e5;
      }
      goto LAB_1437761bf;
    }
    if (2 < DAT_146b83f08) {
      uVar6 = FUN_143714f80(lVar5,local_60);
      FUN_14373a730(local_b0,&DAT_146b83f00,3);
      lVar5 = FUN_14373bbd0(local_b0,"Skipping type {} (callback returned failure)",&DAT_145b9a730,
                            uVar6,0);
      *(undefined8 *)(lVar5 + 0x28) = 0x2a5;
LAB_14377621f:
      *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      FUN_14373a950(local_b0);
    }
LAB_14377622c:
    *param_2 = 0;
    param_2[1] = 0;
    if ((param_2[2] & 1) != 0) {
      FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
    }
    param_2[2] = 0;
  }
  if ((*param_2 == 0) ||
     (((local_c0 != 0 && (lVar5 = FUN_143715410(), lVar5 == 0)) &&
      (lVar5 = FUN_1436f73d0(local_c8,local_c0), lVar5 != 0)))) {
LAB_1437764b3:
    local_78 = *param_2;
    local_68 = param_2[2];
    local_70 = param_2[1];
    if ((local_68 & 1) != 0) {
      FUN_1437329e0(local_68 & 0xfffffffffffffffe);
    }
    FUN_143774de0(param_1 + 10,&local_78);
  }
  else {
    local_res18 = local_c8;
    if ((char *)*param_2 == local_c8) {
      if ((param_2[1] == local_c0) || (cVar2 = FUN_143714870(param_2[1],local_c0), cVar2 != '\0'))
      goto LAB_1437764b3;
      if (1 < DAT_146b83f08) {
        FUN_14373a730(local_b0,&DAT_146b83f00,2);
        lVar5 = FUN_14373bbd0(local_b0,"Cannot clone on self with a different type",&DAT_145b909f0,0
                             );
        *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar5 + 0x28) = 0x2c1;
        FUN_14373a950(local_b0);
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_1437764e5;
      }
    }
    else {
      iVar3 = FUN_1437152f0();
      local_60[0] = *param_2;
      iVar4 = FUN_1437152f0(param_2[1]);
      if (((char *)*param_2 < local_res18 + iVar3) &&
         (local_c8 < (char *)(local_60[0] + (longlong)iVar4))) {
        if (1 < DAT_146b83f08) {
          FUN_14373a730(local_b0,&DAT_146b83f00,2);
          lVar5 = FUN_14373bbd0(local_b0,"Cannot clone on a buffer overlapping with source object",
                                &DAT_145b909f0,0);
          *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x2c9;
          FUN_14373a950(local_b0);
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1437764e5;
        }
      }
      else {
        if (local_78 == 0) {
          uVar6 = FUN_143703a50();
          FUN_1437779d0(param_1 + 2,uVar6,&local_c8,param_2);
          if (local_c8 != (char *)*param_3) {
            uVar6 = FUN_143703a50();
            FUN_1437779d0(param_1 + 2,uVar6,param_3,param_2);
          }
        }
        if (((local_res20 != 1) ||
            (puVar7 = (uint *)FUN_143715390(param_2[1],&local_res18), (*puVar7 >> 3 & 1) != 0)) ||
           (iVar3 = FUN_14374a900(*param_2,param_2[1],1), -1 < iVar3)) {
          puVar8 = (undefined8 *)FUN_143714490(local_c0,1);
          if (puVar8 != (undefined8 *)0x0) {
            uVar9 = (uint)*puVar8;
          }
          (*(code *)(&DAT_146b83fd0)[uVar9 & 0xf])(param_1,&local_c8,param_2);
          goto LAB_1437764b3;
        }
        if (1 < DAT_146b83f08) {
          if (param_2[1] == 0) {
            local_res18 = "<No name>";
          }
          else {
            local_res18 = (char *)FUN_1437151f0();
          }
          FUN_14373a730(local_b0,&DAT_146b83f00,2);
          lVar5 = FUN_14373bbd0(local_b0,"Cannot construct type {}",&DAT_145b74470,&local_res18,0);
          *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x2d9;
          FUN_14373a950(local_b0);
        }
      }
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_1437764e5:
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143776550 FUN_143776550 body=1216 status=ok
// SIG undefined FUN_143776550(void)

void FUN_143776550(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar12;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_130;
  char **local_128;
  undefined *puStack_120;
  char *local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  char **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  local_100 = param_2[2];
  local_118 = "clone dst={} src={}";
  local_110 = *param_2;
  local_108 = param_2[1];
  local_res10 = param_2;
  if ((local_100 & 1) != 0) {
    FUN_1437329e0(local_100 & 0xfffffffffffffffe);
  }
  local_f8 = *param_3;
  local_e8 = param_3[2];
  local_f0 = param_3[1];
  if ((local_e8 & 1) != 0) {
    FUN_1437329e0(local_e8 & 0xfffffffffffffffe);
  }
  local_128 = &local_118;
  puStack_120 = &DAT_1467f6990;
  uStack_d0 = 0x467f6990;
  uStack_cc = 1;
  local_d8 = local_128;
  FUN_14373a6e0(local_70,&DAT_146b83f00,&local_d8,"Reflect\\Util\\hkReflectClone.cpp",
                CONCAT44(uVar12,0x94));
  (**(code **)(*param_4 + 0x20))(param_4);
  *param_1 = param_4;
  FUN_143710920(local_168);
  lVar5 = param_1[8];
  if (lVar5 == 0) {
    param_1[8] = local_168;
  }
  FUN_143775f00(param_1,param_2,param_3,1);
  iVar2 = *(int *)(param_1 + 5);
  while ((iVar2 != 0 && (*(char *)(param_1 + 1) != '\0'))) {
    puVar8 = (undefined8 *)((longlong)(*(int *)(param_1 + 5) + -1) * 0x30 + param_1[4]);
    local_158 = *puVar8;
    local_150 = puVar8[1];
    local_148 = puVar8[2];
    if ((local_148 & 1) != 0) {
      FUN_1437329e0(local_148 & 0xfffffffffffffffe);
    }
    local_140 = puVar8[3];
    local_138 = puVar8[4];
    local_130 = puVar8[5];
    if ((local_130 & 1) != 0) {
      FUN_1437329e0(local_130 & 0xfffffffffffffffe);
    }
    lVar9 = (longlong)*(int *)(param_1 + 5) * 0x30 + param_1[4];
    if ((*(byte *)(lVar9 + -8) & 1) != 0) {
      FUN_143733a60(*(ulonglong *)(lVar9 + -8) & 0xfffffffffffffffe);
    }
    if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
      FUN_143733a60(*(ulonglong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
    }
    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + -1;
    FUN_143775f00(param_1,&local_158,&local_140,0);
    if ((local_130 & 1) != 0) {
      FUN_143733a60(local_130 & 0xfffffffffffffffe);
    }
    if ((local_148 & 1) != 0) {
      FUN_143733a60(local_148 & 0xfffffffffffffffe);
    }
    iVar2 = *(int *)(param_1 + 5);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    cVar4 = FUN_1437757b0(param_1 + 10);
    *(char *)(param_1 + 1) = cVar4;
    if (cVar4 != '\0') {
      if (lVar5 == 0) {
        FUN_143775660(local_168);
        param_1[8] = 0;
      }
      (**(code **)(*param_4 + 0x28))(param_4,0);
      goto LAB_143776835;
    }
  }
  if (lVar5 == 0) {
    param_1[8] = 0;
  }
  (**(code **)(*param_4 + 0x28))(param_4,0x80040200);
  if ((param_3[1] != 0) && (1 < DAT_146b83f08)) {
    local_res18 = FUN_1437151f0();
    FUN_14373a730(local_a8,&DAT_146b83f00,2);
    lVar5 = FUN_14373bbd0(local_a8,"Unable to clone object {} or one of its dependencies",
                          &DAT_145b74470,&local_res18,0);
    *(char **)(lVar5 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
    *(undefined8 *)(lVar5 + 0x28) = 0xbe;
    FUN_14373a950(local_a8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  param_2[2] = 0;
LAB_143776835:
  if (*(char *)(param_1 + 1) != '\0') {
    plVar7 = (longlong *)param_1[6];
    plVar11 = plVar7 + (longlong)*(int *)(param_1 + 7) * 6;
    for (; plVar7 != plVar11; plVar7 = plVar7 + 6) {
      local_c8 = *plVar7;
      local_c0 = plVar7[1];
      if (local_c8 != 0) {
        lVar5 = FUN_14371aab0();
        if (lVar5 != 0) {
          LOCK();
          UNLOCK();
          LOCK();
          UNLOCK();
          if (*(short *)(lVar5 + 0x12) == 1) {
            plVar3 = (longlong *)param_1[9];
            if (plVar3 == (longlong *)0x0) {
              FUN_143777b00(param_1 + 2,local_res8,plVar7 + 3);
            }
            else {
              uVar6 = FUN_143703a50();
              if (*(uint *)(plVar3 + 1) == (*(uint *)((longlong)plVar3 + 0xc) & 0x3fffffff)) {
                FUN_14370c460(uVar6,plVar3,8);
              }
              puVar8 = (undefined8 *)(*plVar3 + (longlong)(int)plVar3[1] * 8);
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
              }
              plVar1 = (longlong *)(*plVar3 + (longlong)(int)plVar3[1] * 8);
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              FUN_14370c030(lVar5);
              if (*plVar1 != 0) {
                FUN_14370c150();
              }
              *plVar1 = lVar5;
            }
          }
          FUN_14370c150(lVar5);
        }
      }
      param_2 = local_res10;
    }
    lVar5 = (longlong)(*(int *)(param_1 + 7) + -1);
    if (-1 < *(int *)(param_1 + 7) + -1) {
      puVar10 = (ulonglong *)(param_1[6] + 0x10 + lVar5 * 0x30);
      do {
        if ((puVar10[3] & 1) != 0) {
          FUN_143733a60(puVar10[3] & 0xfffffffffffffffe);
        }
        if ((*puVar10 & 1) != 0) {
          FUN_143733a60(*puVar10 & 0xfffffffffffffffe);
        }
        puVar10 = puVar10 + -6;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    *(undefined4 *)(param_1 + 7) = 0;
    local_b8 = *param_2;
    local_b0 = param_2[1];
    if (local_b8 != 0) {
      lVar5 = FUN_14371aab0();
      if (lVar5 != 0) {
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        *(short *)(lVar5 + 0x12) = *(short *)(lVar5 + 0x12) + -1;
      }
    }
  }
  *param_1 = 0;
  FUN_143774750(local_168);
  FUN_14373a9e0(local_70);
  if ((local_e8 & 1) != 0) {
    FUN_143733a60(local_e8 & 0xfffffffffffffffe);
  }
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143776a10 FUN_143776a10 body=18 status=ok
// SIG undefined FUN_143776a10(void)

void FUN_143776a10(longlong param_1)

{
  FUN_143776bd0(param_1 + 8);
  return;
}



// FUNCTION 143776a30 FUN_143776a30 body=9 status=ok
// SIG undefined FUN_143776a30(void)

void FUN_143776a30(longlong param_1)

{
  FUN_143777eb0(param_1 + 8);
  return;
}



// FUNCTION 143776a40 FUN_143776a40 body=219 status=ok
// SIG undefined FUN_143776a40(void)

/* WARNING: Removing unreachable block (ram,0x000143776b03) */

undefined8 * FUN_143776a40(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [56];
  
  if (*param_3 == 0) {
    if (1 < DAT_146b83f08) {
      FUN_14373a730(local_40,&DAT_146b83f00,2);
      lVar1 = FUN_14373bbd0(local_40,"Attempting to clone a null var",&DAT_145b909f0,0);
      *(char **)(lVar1 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar1 + 0x28) = 0x3a7;
      FUN_14373a950(local_40);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_143776550(*param_1,&local_58);
  *param_2 = local_58;
  param_2[1] = uStack_50;
  param_2[2] = local_48;
  return param_2;
}



// FUNCTION 143776b20 FUN_143776b20 body=164 status=ok
// SIG undefined FUN_143776b20(void)

undefined8 *
FUN_143776b20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_a8 [16];
  undefined1 local_98 [144];
  
  FUN_1437745d0(local_a8);
  uVar2 = FUN_143703a50();
  FUN_1437779d0(local_98,uVar2,param_3,param_2);
  FUN_143776550(local_a8,param_2,param_3,param_4);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  FUN_1437747f0(local_a8);
  return param_1;
}



// FUNCTION 143776bd0 FUN_143776bd0 body=180 status=ok
// SIG undefined FUN_143776bd0(void)

void FUN_143776bd0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if ((param_2 < 0) && (iVar2 = 0, 0 < (int)param_1[1])) {
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      local_28 = *(longlong *)(lVar1 + lVar3);
      local_20 = *(undefined8 *)(lVar1 + 8 + lVar3);
      local_18 = *(ulonglong *)(lVar1 + 0x10 + lVar3);
      if ((local_18 & 1) != 0) {
        FUN_1437329e0(local_18 & 0xfffffffffffffffe);
      }
      if (local_28 != 0) {
        FUN_1437759e0(&local_28);
        FUN_143749c70(local_28,local_20);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (iVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 143776c90 FUN_143776c90 body=204 status=ok
// SIG undefined FUN_143776c90(void)

/* WARNING: Removing unreachable block (ram,0x000143776cfd) */
/* WARNING: Removing unreachable block (ram,0x000143776d16) */

undefined4 *
FUN_143776c90(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  param_1 = (longlong *)*param_1;
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,0x30);
  }
  puVar3 = (undefined8 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  FUN_1436fa270((longlong)(int)lVar1 * 0x30 + *param_1,param_3,param_4);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143776d60 FUN_143776d60 body=456 status=ok
// SIG undefined FUN_143776d60(void)

/* WARNING: Removing unreachable block (ram,0x000143776e92) */
/* WARNING: Removing unreachable block (ram,0x000143776dfa) */
/* WARNING: Removing unreachable block (ram,0x000143776e13) */
/* WARNING: Removing unreachable block (ram,0x000143776e4f) */

undefined4 *
FUN_143776d60(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5,
             int param_6,uint param_7)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if (0 < (int)param_7) {
    uVar7 = (ulonglong)param_7;
    do {
      plVar2 = *(longlong **)(param_1 + 8);
      uVar5 = FUN_143703a50();
      if (*(uint *)(plVar2 + 1) == (*(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,plVar2,0x30);
      }
      puVar6 = (undefined8 *)((longlong)(int)plVar2[1] * 0x30 + *plVar2);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
      }
      lVar4 = plVar2[1];
      *(int *)(plVar2 + 1) = (int)lVar4 + 1;
      FUN_1436fa270((longlong)(int)lVar4 * 0x30 + *plVar2,param_3,param_4);
      uVar3 = param_3[2];
      *param_3 = (longlong)param_5 + *param_3;
      param_3[1] = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
      }
      param_3[2] = uVar3 & 0xfffffffffffffffe;
      uVar3 = param_4[2];
      *param_4 = *param_4 + (longlong)param_6;
      param_4[1] = param_4[1];
      if ((*(byte *)(param_4 + 2) & 1) != 0) {
        FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
      }
      param_4[2] = uVar3 & 0xfffffffffffffffe;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_3 + 2);
  *param_2 = 0;
  if ((bVar1 & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143776f30 FUN_143776f30 body=243 status=ok
// SIG undefined FUN_143776f30(void)

/* WARNING: Removing unreachable block (ram,0x000143776f9d) */
/* WARNING: Removing unreachable block (ram,0x000143776fb6) */

undefined4 * FUN_143776f30(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_1 = (longlong *)*param_1;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x30);
  }
  puVar4 = (undefined8 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  FUN_1436fa270((longlong)(int)lVar2 * 0x30 + *param_1,param_3,param_4);
  bVar1 = *(byte *)(param_3 + 0x10);
  *param_2 = 0;
  if ((bVar1 & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_3 + 0x10) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_4 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_4 + 0x10) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143777030 FUN_143777030 body=167 status=ok
// SIG undefined FUN_143777030(void)

ulonglong FUN_143777030(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    uVar8 = (int)lVar2 * -0x61c8864f;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    uVar6 = iVar4 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar5 = (ulonglong)((uVar6 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar6) & uVar1);
    plVar7 = (longlong *)(uVar5 * 0x30 + *param_1);
    lVar3 = plVar7[1];
    while (lVar3 != 1) {
      if ((*plVar7 == 0) && (lVar2 == 0)) {
        return uVar5;
      }
      if ((*plVar7 == lVar2) && (plVar7[1] == param_2[1])) {
        return uVar5;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1U & uVar1);
      plVar7 = (longlong *)(uVar5 * 0x30 + *param_1);
      lVar3 = plVar7[1];
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 1437770e0 FUN_1437770e0 body=264 status=ok
// SIG undefined FUN_1437770e0(void)

undefined8 * FUN_1437770e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  if (*param_3 == 0) {
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    puVar4 = &local_40;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    puVar4 = (undefined8 *)FUN_143777210(param_1 + 0x10,param_3,&local_28);
    local_58 = *puVar4;
    local_50 = puVar4[1];
    local_48 = puVar4[2];
    if ((local_48 & 1) != 0) {
      FUN_1437329e0(local_48 & 0xfffffffffffffffe);
    }
    puVar4 = &local_58;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  puVar4[2] = 0;
  if (bVar1) {
    if ((local_30 & 1) != 0) {
      FUN_143733a60(local_30 & 0xfffffffffffffffe);
    }
  }
  if (bVar2) {
    if ((local_48 & 1) != 0) {
      FUN_143733a60(local_48 & 0xfffffffffffffffe);
    }
  }
  if ((bVar3) && ((local_18 & 1) != 0)) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437771f0 FUN_1437771f0 body=26 status=ok
// SIG undefined FUN_1437771f0(void)

undefined8 FUN_1437771f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1437770e0(*param_1);
  return param_2;
}



// FUNCTION 143777210 FUN_143777210 body=214 status=ok
// SIG undefined FUN_143777210(void)

longlong FUN_143777210(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    uVar9 = (int)lVar2 * -0x61c8864f;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = iVar5 * -0x61c8864f;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar5 * -0x4f000000;
    lVar3 = *param_1;
    uVar6 = (ulonglong)((uVar8 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar8) & uVar1);
    lVar7 = uVar6 * 0x30;
    lVar4 = *(longlong *)(lVar3 + 8 + lVar7);
    while (lVar4 != 1) {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (((lVar4 == 0) && (lVar2 == 0)) ||
         ((lVar4 == lVar2 && (((longlong *)(lVar3 + lVar7))[1] == param_2[1])))) {
        return lVar3 + 0x18 + lVar7;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1U & uVar1);
      lVar7 = uVar6 * 0x30;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar7);
    }
  }
  return param_3;
}



// FUNCTION 1437772f0 FUN_1437772f0 body=1757 status=ok
// SIG undefined FUN_1437772f0(void)

void FUN_1437772f0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong lStack_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined1 local_78 [64];
  
  if (0 < param_3) {
    lVar10 = (longlong)param_3;
    plVar9 = (longlong *)(param_2 + 8);
    local_a8 = 0;
    local_98 = lVar10;
    do {
      lVar11 = local_a8;
      local_res18[0] = 0;
      plVar8 = plVar9 + -1;
      (**(code **)(*(longlong *)*param_1 + 0x10))
                ((longlong *)*param_1,local_res20,plVar8,plVar9 + 2,local_res18);
      if (local_res20[0] < 0) {
        if (1 < DAT_146b83f08) {
          local_d0 = 0;
          lStack_c8 = 0;
          local_c0 = 0;
          (**(code **)(*(longlong *)(plVar9[1] & 0xfffffffffffffffeU) + 0x50))
                    ((longlong *)(plVar9[1] & 0xfffffffffffffffeU),local_108,*plVar8,*plVar9,
                     &local_d0);
          local_118 = lStack_c8;
          if ((local_c0 & 1) != 0) {
            FUN_143733a60(local_c0 & 0xfffffffffffffffe);
          }
          local_110 = *plVar9;
          FUN_14373a730(local_78,&DAT_146b83f00,2);
          lVar10 = FUN_14373bbd0(local_78,"Cloner callback failed on {} pointing to {}",
                                 &DAT_145b9fb10,&local_110,&local_118,0);
          *(char **)(lVar10 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar10 + 0x28) = 0x266;
          FUN_14373a950(local_78);
        }
        *(undefined1 *)(param_1 + 1) = 0;
        return;
      }
      if (local_res18[0] == 1) {
        FUN_1437140a0(&local_a0,*plVar9);
        if ((local_a0 < 2) ||
           (puVar4 = (uint *)FUN_143714f30(&local_a0,local_108), (*puVar4 >> 6 & 1) == 0)) {
          local_e8 = *plVar8;
          local_e0 = *plVar9;
          uVar7 = plVar9[1];
        }
        else {
          lVar1 = *(longlong *)(*plVar9 + 8);
          if (lVar1 == 0) {
            local_e0 = 0;
          }
          else {
            puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
            uVar3 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              uVar3 = (uint)*puVar5;
            }
            uVar6 = FUN_1437157a0(uVar3 & 0xf);
            local_e0 = FUN_143748c90(lVar1,uVar6);
          }
          local_e8 = *plVar8;
          uVar7 = 0;
          if (local_e0 != 0) {
            uVar7 = FUN_1437151a0();
          }
        }
        local_d8 = uVar7;
        if ((local_d8 & 1) != 0) {
          FUN_1437329e0(local_d8 & 0xfffffffffffffffe);
        }
        uVar7 = 0;
        local_d0 = 0;
        lStack_c8 = 0;
        local_c0 = uVar7;
        (**(code **)(*(longlong *)(plVar9[4] & 0xfffffffffffffffeU) + 0x50))
                  ((longlong *)(plVar9[4] & 0xfffffffffffffffeU),&local_b8,plVar9[2],plVar9[3],
                   &local_d0);
        if (local_b8 < 0) {
          if (1 < DAT_146b83f08) {
            local_100 = 0;
            lStack_f8 = 0;
            local_f0 = uVar7;
            (**(code **)(*(longlong *)(plVar9[4] & 0xfffffffffffffffeU) + 0x50))
                      ((longlong *)(plVar9[4] & 0xfffffffffffffffeU),local_108,plVar9[2],plVar9[3],
                       &local_100);
            local_118 = lStack_f8;
            if ((local_f0 & 1) != 0) {
              FUN_143733a60(local_f0 & 0xfffffffffffffffe);
            }
            local_110 = plVar9[3];
            FUN_14373a730(local_78,&DAT_146b83f00,2);
            lVar10 = FUN_14373bbd0(local_78,"Can\'t get var from {} pointing to {}",&DAT_145b9fb10,
                                   &local_110,&local_118,0);
            *(undefined8 *)(lVar10 + 0x28) = 0x26b;
LAB_1437778a0:
            *(char **)(lVar10 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
            FUN_14373a950(local_78);
          }
LAB_1437778b4:
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1437778b8;
        }
        local_90 = 0;
        uStack_88 = 0;
        local_80 = uVar7;
        if (local_d0 != 0) {
          plVar8 = (longlong *)FUN_143777210(param_1 + 2,&local_d0,&local_90);
          local_100 = *plVar8;
          lStack_f8 = plVar8[1];
          local_f0 = plVar8[2];
          if ((local_f0 & 1) != 0) {
            FUN_1437329e0(local_f0 & 0xfffffffffffffffe);
            uVar7 = local_80;
          }
          if ((uVar7 & 1) != 0) {
            FUN_143733a60(uVar7 & 0xfffffffffffffffe);
          }
          if (local_100 == 0) {
            FUN_143775f00(param_1,&local_100,&local_d0,1);
            uVar7 = local_f0;
            lVar10 = lStack_f8;
            if (*(char *)(param_1 + 1) != '\0') {
              local_110 = local_100;
              if ((local_f0 & 1) != 0) {
                FUN_1437329e0(local_f0 & 0xfffffffffffffffe);
              }
              uVar2 = local_c0;
              lVar11 = lStack_c8;
              local_118 = local_d0;
              if ((local_c0 & 1) != 0) {
                FUN_1437329e0(local_c0 & 0xfffffffffffffffe);
              }
              uVar6 = FUN_143703a50();
              if (*(uint *)(param_1 + 7) == (*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff)) {
                FUN_14370c460(uVar6,param_1 + 6,0x30);
              }
              plVar8 = (longlong *)((longlong)*(int *)(param_1 + 7) * 0x30 + param_1[6]);
              if (plVar8 != (longlong *)0x0) {
                *plVar8 = local_110;
                plVar8[1] = lVar10;
                plVar8[2] = uVar7;
                if ((uVar7 & 1) != 0) {
                  FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
                }
                plVar8[3] = local_118;
                plVar8[4] = lVar11;
                plVar8[5] = uVar2;
                if ((uVar2 & 1) != 0) {
                  FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
                }
              }
              *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
              if ((uVar2 & 1) != 0) {
                FUN_143733a60(uVar2 & 0xfffffffffffffffe);
              }
              lVar10 = local_98;
              lVar11 = local_a8;
              if ((uVar7 & 1) != 0) {
                FUN_143733a60(uVar7 & 0xfffffffffffffffe);
                lVar10 = local_98;
                lVar11 = local_a8;
              }
              goto LAB_143777611;
            }
          }
          else {
LAB_143777611:
            (**(code **)(*(longlong *)(local_d8 & 0xfffffffffffffffe) + 0x48))
                      ((longlong *)(local_d8 & 0xfffffffffffffffe),&local_b4,local_e8,local_e0,
                       &local_100);
            if (-1 < local_b4) {
              if ((local_f0 & 1) != 0) {
                FUN_143733a60(local_f0 & 0xfffffffffffffffe);
              }
              goto LAB_143777656;
            }
            if (1 < DAT_146b83f08) {
              FUN_1437140a0(&local_118,*plVar9);
              local_110 = lStack_f8;
              FUN_14373a730(local_78,&DAT_146b83f00,2);
              lVar10 = FUN_14373bbd0(local_78,
                                     "Cannot assign \'{:*}\' (\'{}\') to pointer of type {} at {}",
                                     &DAT_145b9fb28,&local_100,&local_110,&local_e8,&local_118,0);
              *(char **)(lVar10 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
              *(undefined8 *)(lVar10 + 0x28) = 0x28b;
              FUN_14373a950(local_78);
            }
            *(undefined1 *)(param_1 + 1) = 0;
          }
          if ((local_f0 & 1) != 0) {
            FUN_143733a60(local_f0 & 0xfffffffffffffffe);
          }
LAB_1437778b8:
          if ((local_c0 & 1) != 0) {
            FUN_143733a60(local_c0 & 0xfffffffffffffffe);
          }
          if ((local_d8 & 1) == 0) {
            return;
          }
          FUN_143733a60(local_d8 & 0xfffffffffffffffe);
          return;
        }
        (**(code **)(*(longlong *)(local_d8 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(local_d8 & 0xfffffffffffffffe),local_b0,local_e8,local_e0,&local_90)
        ;
        if ((local_80 & 1) != 0) {
          FUN_143733a60(local_80 & 0xfffffffffffffffe);
        }
        if (local_b0[0] < 0) {
          if (1 < DAT_146b83f08) {
            FUN_1437140a0(&local_118,*plVar9);
            FUN_14373a730(local_78,&DAT_146b83f00,2);
            lVar10 = FUN_14373bbd0(local_78,"Cannot assign null to pointer of type {} at {}",
                                   &DAT_145b9fb50,&local_e8,&local_118,0);
            *(undefined8 *)(lVar10 + 0x28) = 0x291;
            goto LAB_1437778a0;
          }
          goto LAB_1437778b4;
        }
LAB_143777656:
        if ((local_c0 & 1) != 0) {
          FUN_143733a60(local_c0 & 0xfffffffffffffffe);
        }
        if ((local_d8 & 1) != 0) {
          FUN_143733a60(local_d8 & 0xfffffffffffffffe);
        }
      }
      local_a8 = lVar11 + 1;
      plVar9 = plVar9 + 6;
    } while (local_a8 < lVar10);
  }
  return;
}



// FUNCTION 1437779d0 FUN_1437779d0 body=169 status=ok
// SIG undefined FUN_1437779d0(void)

undefined4
FUN_1437779d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  
  iVar2 = FUN_1437749e0();
  puVar3 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    uVar1 = param_3[2];
    puVar3[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    }
  }
  puVar3 = (undefined8 *)(*param_1 + 0x18 + (longlong)iVar2 * 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    uVar1 = param_4[2];
    puVar3[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    }
  }
  return local_res8;
}



// FUNCTION 143777a80 FUN_143777a80 body=125 status=ok
// SIG undefined FUN_143777a80(void)

void FUN_143777a80(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    uVar2 = param_2[2];
    puVar1[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 143777b00 FUN_143777b00 body=80 status=ok
// SIG undefined FUN_143777b00(void)

undefined4 * FUN_143777b00(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143777030(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_143777b50(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143777b50 FUN_143777b50 body=429 status=ok
// SIG undefined FUN_143777b50(void)

/* WARNING: Removing unreachable block (ram,0x000143777bcb) */
/* WARNING: Removing unreachable block (ram,0x000143777cbb) */

void FUN_143777b50(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar6;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar7 = (param_2 & 0xffffffff) * 0x30;
  if ((*(byte *)(lVar7 + 0x10 + *param_1) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(lVar7 + 0x10 + *param_1) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(lVar7 + 0x28 + *param_1) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(lVar7 + 0x28 + *param_1) & 0xfffffffffffffffe);
  }
  puVar3 = (undefined8 *)(*param_1 + lVar7);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 1;
    puVar3[2] = 0;
  }
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  lVar7 = *param_1;
  uVar4 = uVar10 + (int)param_2 & uVar10;
  uVar6 = (ulonglong)uVar4;
  lVar8 = *(longlong *)(lVar7 + 8 + uVar6 * 0x30);
  while (lVar8 != 1) {
    uVar4 = (int)uVar6 + uVar10 & uVar10;
    uVar6 = (ulonglong)uVar4;
    lVar8 = *(longlong *)(lVar7 + 8 + uVar6 * 0x30);
  }
  uVar6 = (ulonglong)((int)param_2 + 1U & uVar10);
  uVar4 = uVar4 + 1 & uVar10;
  lVar8 = uVar6 * 0x30;
  lVar7 = *(longlong *)(lVar7 + 8 + lVar8);
  while (lVar7 != 1) {
    lVar7 = *param_1;
    iVar1 = (int)*(undefined8 *)(lVar7 + lVar8);
    uVar9 = iVar1 * -0x61c8864f;
    iVar2 = (int)((ulonglong)*(undefined8 *)(lVar7 + lVar8) >> 0x20);
    uVar5 = iVar2 * -0x61c8864f;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar1 * -0x4f000000;
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000;
    uVar10 = (uVar9 + uVar5 * 0x40 + -0x61c88647 + (uVar9 >> 2) ^ uVar5) & uVar10;
    uVar5 = (uint)uVar6;
    uVar9 = (uint)param_2;
    if ((((uVar5 < uVar4) || (uVar10 <= uVar9)) &&
        ((uVar9 <= uVar5 || ((uVar10 <= uVar9 && (uVar5 < uVar10)))))) &&
       ((uVar10 <= uVar9 || (uVar4 <= uVar10)))) {
      FGenericPlatformString::Memcpy((param_2 & 0xffffffff) * 0x30 + lVar7,lVar7 + lVar8,0x30);
      puVar3 = (undefined8 *)(*param_1 + lVar8);
      param_2 = uVar6;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar3[2] = 0;
      }
    }
    uVar10 = *(uint *)((longlong)param_1 + 0xc);
    uVar6 = (ulonglong)(uVar5 + 1 & uVar10);
    lVar8 = uVar6 * 0x30;
    lVar7 = *(longlong *)(lVar8 + 8 + *param_1);
  }
  return;
}



// FUNCTION 143777d00 FUN_143777d00 body=390 status=ok
// SIG undefined FUN_143777d00(void)

/* WARNING: Removing unreachable block (ram,0x000143777dac) */

undefined4 * FUN_143777d00(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  longlong local_res18;
  int local_res20;
  
  local_res20 = (int)param_1[1];
  local_res18 = *param_1;
  iVar2 = 8;
  if (8 < param_4) {
    iVar2 = param_4;
  }
  iVar9 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res10 = param_2;
  lVar3 = (**(code **)(*param_3 + 8))(param_3,iVar2 * 0x30);
  lVar1 = local_res18;
  if (lVar3 == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar5 = 0;
  lVar7 = (longlong)iVar2;
  *param_1 = lVar3;
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)(*param_1 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 1;
        puVar4[2] = 0;
      }
      lVar5 = lVar5 + 0x30;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0xc) = iVar2 + -1;
  lVar3 = (longlong)iVar9;
  if (0 < iVar9) {
    plVar8 = (longlong *)(local_res18 + 8);
    do {
      if (*plVar8 != 1) {
        lVar5 = (longlong)iVar6 * 0x30 + lVar1;
        iVar2 = FUN_1437749e0(param_1,param_3,lVar5,local_res8);
        FGenericPlatformString::Memcpy((longlong)iVar2 * 0x30 + *param_1,lVar5,0x30);
      }
      iVar6 = iVar6 + 1;
      plVar8 = plVar8 + 6;
      lVar3 = lVar3 + -1;
      param_2 = local_res10;
    } while (lVar3 != 0);
  }
  if (-1 < local_res20) {
    (**(code **)(*param_3 + 0x10))(param_3,local_res18,iVar9 * 0x30);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143777e90 FUN_143777e90 body=7 status=ok
// SIG undefined FUN_143777e90(void)

void FUN_143777e90(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(*param_1 + 9) = param_2;
  return;
}



// FUNCTION 143777ea0 FUN_143777ea0 body=7 status=ok
// SIG undefined FUN_143777ea0(void)

void FUN_143777ea0(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(*param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 143777eb0 FUN_143777eb0 body=98 status=ok
// SIG undefined FUN_143777eb0(void)

void FUN_143777eb0(longlong *param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1] + -1;
  lVar3 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar2 = (ulonglong *)(*param_1 + lVar3 * 0x18 + 0x10);
    do {
      if ((*puVar2 & 1) != 0) {
        FUN_143733a60(*puVar2 & 0xfffffffffffffffe);
      }
      puVar2 = puVar2 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143777f20 FUN_143777f20 body=4190 status=ok
// SIG undefined FUN_143777f20(void)

void FUN_143777f20(undefined8 *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong **pplVar17;
  int iVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  longlong *local_res10;
  longlong **local_res18;
  char local_res20;
  undefined8 in_stack_fffffffffffff2a0;
  ulonglong in_stack_fffffffffffff2a8;
  undefined4 uVar21;
  ulonglong *local_d38;
  longlong *local_d30;
  undefined1 **local_d28;
  ulonglong local_d20;
  longlong *local_d18;
  undefined1 **ppuStack_d10;
  undefined8 local_d08;
  ulonglong local_d00;
  longlong *local_cf8;
  undefined1 **local_cf0;
  ulonglong local_ce8;
  longlong *local_ce0;
  undefined1 **ppuStack_cd8;
  undefined8 local_cd0;
  ulonglong local_cc8;
  longlong *local_ca8;
  undefined1 **ppuStack_ca0;
  ulonglong local_c98;
  longlong *local_c90;
  undefined1 **ppuStack_c88;
  ulonglong local_c80;
  ulonglong local_c78;
  longlong local_c58;
  undefined1 **local_c50;
  ulonglong local_c48;
  int local_c40 [2];
  undefined1 local_c38 [8];
  undefined1 *local_c30;
  uint local_c28;
  uint local_c24;
  undefined1 local_c20 [3080];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffff2a0 >> 0x20);
  local_c58 = *param_2;
  local_c48 = param_2[2];
  local_c50 = (undefined1 **)param_2[1];
  local_res10 = param_2;
  local_res20 = param_4;
  if ((local_c48 & 1) != 0) {
    FUN_1437329e0(local_c48 & 0xfffffffffffffffe);
  }
  lVar8 = FUN_143715410(param_3[1]);
  if (lVar8 == 0) {
    plVar9 = (longlong *)FUN_143772dc0(*param_3,param_3[1]);
  }
  else {
    plVar9 = (longlong *)0x0;
  }
  local_ca8 = plVar9;
  lVar8 = FUN_143715410(local_c50);
  uVar21 = (undefined4)(in_stack_fffffffffffff2a8 >> 0x20);
  if (lVar8 == 0) {
    local_d38 = (ulonglong *)FUN_143772dc0(local_c58,local_c50);
    uVar21 = (undefined4)(in_stack_fffffffffffff2a8 >> 0x20);
    if ((local_d38 != (ulonglong *)0x0) && (plVar9 != (longlong *)0x0)) {
      if (local_res20 == '\0') {
        local_d30 = (longlong *)(local_c58 + 0x20);
        local_d28 = local_c50;
        if (local_c50 == (undefined1 **)0x0) {
          local_d20 = 0;
        }
        else {
          local_d20 = FUN_1437151a0();
        }
        if ((local_d20 & 1) != 0) {
          FUN_1437329e0(local_d20 & 0xfffffffffffffffe);
        }
        ppuStack_c88 = (undefined1 **)param_3[1];
        local_c90 = (longlong *)(*param_3 + 0x20);
        if (ppuStack_c88 == (undefined1 **)0x0) {
          local_c80 = 0;
        }
        else {
          local_c80 = FUN_1437151a0();
        }
        if ((local_c80 & 1) != 0) {
          FUN_1437329e0(local_c80 & 0xfffffffffffffffe);
        }
        FUN_143777f20(param_1,&local_d30,&local_c90);
        if ((local_c80 & 1) != 0) {
          FUN_143733a60(local_c80 & 0xfffffffffffffffe);
        }
        if ((local_d20 & 1) != 0) {
          FUN_143733a60(local_d20 & 0xfffffffffffffffe);
        }
      }
      puVar19 = (ulonglong *)*local_d38;
      iVar18 = 0;
      puVar20 = puVar19 + (longlong)(int)local_d38[1] * 6;
      if (puVar19 == puVar20) goto LAB_143778f4b;
      do {
        uVar11 = *puVar19;
        puVar19 = puVar19 + 6;
        iVar5 = iVar18 + 1;
        if ((~(byte)(*(uint *)((uVar11 & 0xfffffffffffffffe) + 0x10) >> 2) & 1) == 0) {
          iVar5 = iVar18;
        }
        iVar18 = iVar5;
      } while (puVar19 != puVar20);
      if (iVar18 == 0) goto LAB_143778f4b;
      iVar5 = (int)local_ca8[1];
      local_res18 = (longlong **)CONCAT44(local_res18._4_4_,iVar5);
      if (iVar5 == 0) {
        iVar5 = FUN_143742950(&local_c58);
        uVar21 = (undefined4)(in_stack_fffffffffffff2a8 >> 0x20);
        if (iVar18 == iVar5) goto LAB_143778471;
        iVar5 = (int)local_res18;
      }
      iVar18 = iVar18 + iVar5;
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar18);
      uVar10 = FUN_143703a50();
      plVar9 = local_ca8;
      uVar15 = *(uint *)((longlong)local_ca8 + 0xc) & 0x3fffffff;
      if ((int)uVar15 < iVar18) {
        iVar1 = uVar15 * 2;
        iVar5 = iVar18;
        if (iVar18 < iVar1) {
          iVar5 = iVar1;
        }
        FUN_14370c310(uVar10,local_ca8,iVar5);
      }
      iVar5 = ((int)plVar9[1] - (uint)local_res10) + -1;
      if (-1 < iVar5) {
        lVar8 = (longlong)iVar5 * 0x30 + 0x10 + (longlong)iVar18 * 0x30 + *plVar9;
        do {
          FUN_1437484d0(lVar8);
          lVar8 = lVar8 + -0x30;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        plVar9 = local_ca8;
      }
      iVar18 = (uint)local_res10 - (int)plVar9[1];
      lVar8 = (longlong)iVar18;
      puVar16 = (undefined8 *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
      if (0 < iVar18) {
        do {
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = 0;
            puVar16[2] = 0;
            *(undefined1 *)(puVar16 + 3) = 0;
          }
          puVar16 = puVar16 + 6;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      local_c30 = local_c20;
      *(uint *)(plVar9 + 1) = (uint)local_res10;
      local_cf0 = &local_c30;
      local_c28 = 0;
      local_cf8 = param_1 + 4;
      local_c24 = 0x80000040;
      FUN_143742a00(&local_c58,&local_c90);
      local_ca8 = (longlong *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
      local_res10 = (longlong *)((longlong)(int)local_res18 * 0x30 + *plVar9);
      plVar9 = (longlong *)FUN_14374eef0(param_1 + 0xd,local_c38,&DAT_1467e9630);
      iVar18 = 0;
      pplVar17 = (longlong **)*plVar9;
      puVar19 = (ulonglong *)*local_d38;
      local_d38 = puVar19 + (longlong)(int)local_d38[1] * 6;
      local_res18 = pplVar17;
      if (puVar19 != local_d38) {
        do {
          if ((~(byte)(*(uint *)((*puVar19 & 0xfffffffffffffffe) + 0x10) >> 2) & 1) != 0) {
            in_stack_fffffffffffff2a8 = in_stack_fffffffffffff2a8 & 0xffffffff00000000;
            iVar5 = FUN_1437714d0(&local_cf8,pplVar17,local_res10 + (longlong)iVar18 * 6,0x30,
                                  puVar19,0x30,in_stack_fffffffffffff2a8,0,1);
            if (iVar5 < 0) {
              if (1 < DAT_146b83f08) {
                FUN_14373a730(&local_ce0,&DAT_146b83f00,2);
                lVar8 = FUN_14373bbd0(&local_ce0,"Cannot copy object",&DAT_145b909f0,0);
                *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
                *(undefined8 *)(lVar8 + 0x28) = 0x1c7;
                FUN_14373a950(&local_ce0);
              }
              *(undefined1 *)(param_1 + 1) = 0;
              goto LAB_14377837b;
            }
            iVar18 = iVar18 + 1;
            pplVar17 = local_res18;
          }
          puVar19 = puVar19 + 6;
        } while (puVar19 != local_d38);
      }
      local_ce0 = local_res10;
      ppuStack_cd8 = (undefined1 **)&DAT_1467e9630;
      local_cd0 = CONCAT44(local_cd0._4_4_,
                           (int)(((longlong)local_ca8 - (longlong)local_res10) / 0x30));
      uVar6 = FUN_1437152f0(&DAT_1467e9630);
      local_cd0 = CONCAT44(uVar6,(int)local_cd0);
      uVar11 = FUN_1437151a0(&DAT_1467e9630);
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      local_cc8 = uVar11;
      FUN_143774b20(param_1[8],&local_ce0);
      if ((uVar11 & 1) != 0) {
        FUN_143733a60(uVar11 & 0xfffffffffffffffe);
      }
      FUN_1437772f0(param_1,local_c30,local_c28);
LAB_14377837b:
      if ((local_c78 & 1) != 0) {
        FUN_143733a60(local_c78 & 0xfffffffffffffffe);
      }
      uVar10 = FUN_143703a50();
      lVar8 = (longlong)(int)(local_c28 + -1);
      if (-1 < (int)(local_c28 + -1)) {
        puVar19 = (ulonglong *)(local_c30 + lVar8 * 0x30 + 0x10);
        do {
          if ((puVar19[3] & 1) != 0) {
            FUN_143733a60(puVar19[3] & 0xfffffffffffffffe);
          }
          if ((*puVar19 & 1) != 0) {
            FUN_143733a60(*puVar19 & 0xfffffffffffffffe);
          }
          puVar19 = puVar19 + -6;
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      local_c28 = 0;
      if (-1 < (int)local_c24) {
        FUN_143702e10(uVar10,local_c30,0x30,local_c24 & 0x3fffffff);
      }
      goto LAB_143778f4b;
    }
  }
LAB_143778471:
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_c40,param_3,&local_c58);
  plVar9 = local_res10;
  if (local_c40[0] < 0) {
    if (1 < DAT_146b83f08) {
      uVar6 = FUN_143742950(local_res10);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar6);
      plVar12 = (longlong *)FUN_1437429a0(&local_c58,local_c38);
      if (*plVar12 == 0) {
        local_cf0 = (undefined1 **)0x0;
        local_cf8 = (longlong *)&DAT_145b9f148;
        local_res18 = &local_cf8;
      }
      else {
        puVar16 = (undefined8 *)FUN_1437429a0(&local_c58,&local_d38);
        local_res18 = (longlong **)FUN_143714f80(*puVar16,&local_ca8);
      }
      uVar10 = FUN_143714f80(plVar9[1],&local_d30);
      FUN_14373a730(&local_ce0,&DAT_146b83f00,2);
      pplVar17 = &local_res10;
      uVar21 = 0;
      lVar8 = FUN_14373bbd0(&local_ce0,
                            "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}"
                            ,&DAT_145b9f948,uVar10,local_res18,pplVar17,0);
      uVar6 = (undefined4)((ulonglong)pplVar17 >> 0x20);
      *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar8 + 0x28) = 0x1d9;
      FUN_14373a950(&local_ce0);
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      if (1 < DAT_146b83f08) {
        FUN_14373a730(&local_ce0,&DAT_146b83f00,2);
        lVar8 = FUN_14373bbd0(&local_ce0,&DAT_145af3922,&DAT_145b909f0,0);
        *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar8 + 0x28) = 0x1da;
        FUN_14373a950(&local_ce0);
      }
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_143778f4b;
    }
  }
  local_d18 = (longlong *)0x0;
  ppuStack_d10 = (undefined1 **)0x0;
  local_d08 = 0;
  local_d00 = 0;
  FUN_1437140a0(&local_d38,param_3[1]);
  if ((local_d38 < (ulonglong *)0x2) ||
     (puVar13 = (uint *)FUN_143714f30(&local_d38,&local_res10), (*puVar13 >> 6 & 1) == 0)) {
    local_d30 = (longlong *)*param_3;
    local_d20 = param_3[2];
    local_d28 = (undefined1 **)param_3[1];
  }
  else {
    local_ca8 = *(longlong **)(param_3[1] + 8);
    if (local_ca8 == (longlong *)0x0) {
      uVar10 = 0;
    }
    else {
      FUN_143714490(local_ca8,1);
      uVar10 = FUN_1437157a0();
    }
    if (local_ca8 == (longlong *)0x0) {
      local_d28 = (undefined1 **)0x0;
    }
    else {
      local_d28 = (undefined1 **)FUN_143772da0(local_ca8,uVar10);
    }
    local_d30 = (longlong *)*param_3;
    if (local_d28 == (undefined1 **)0x0) {
      local_d20 = 0;
    }
    else {
      local_d20 = FUN_1437151a0();
    }
  }
  if ((local_d20 & 1) != 0) {
    FUN_1437329e0(local_d20 & 0xfffffffffffffffe);
  }
  puVar13 = (uint *)FUN_143742a50(&local_d30,&local_res18,&local_d18);
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,*puVar13 >> 0x1f);
  uVar15 = *puVar13 >> 0x1f;
  if ((local_d20 & 1) != 0) {
    FUN_143733a60(local_d20 & 0xfffffffffffffffe);
    uVar15 = (uint)local_res10;
  }
  if ((char)uVar15 == '\0') {
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(int)local_d08);
    if ((int)local_d08 != 0) {
      local_cd0 = 0;
      local_cc8 = 0;
      local_ce0 = (longlong *)0x0;
      ppuStack_cd8 = (undefined1 **)0x0;
      piVar14 = (int *)FUN_143742a50(&local_c58,&local_res18,&local_ce0);
      if (*piVar14 < 0) {
        if (1 < DAT_146b83f08) {
          FUN_14373a730(&local_c90,&DAT_146b83f00,2);
          lVar8 = FUN_14373bbd0(&local_c90,"Cannot access array value",&DAT_145b909f0,0);
          *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar8 + 0x28) = 0x1e4;
          FUN_14373a950(&local_c90);
        }
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        local_c30 = local_c20;
        local_c28 = 0;
        local_c24 = 0x80000040;
        if (local_d18 == local_ce0) {
          if ((ppuStack_d10 == ppuStack_cd8) || (cVar2 = FUN_143714870(), cVar2 != '\0')) {
            if ((int)local_d08 == (int)local_cd0) goto LAB_143778ea1;
            if (1 < DAT_146b83f08) {
              FUN_14373a730(&local_c90,&DAT_146b83f00,2);
              lVar8 = FUN_14373bbd0(&local_c90,"Clone on self with different count is not supported"
                                    ,&DAT_145b909f0,0);
              *(undefined8 *)(lVar8 + 0x28) = 0x1ec;
              goto LAB_143778ab6;
            }
          }
          else if (1 < DAT_146b83f08) {
            FUN_14373a730(&local_c90,&DAT_146b83f00,2);
            lVar8 = FUN_14373bbd0(&local_c90,"Clone on self with different subtype is not supported"
                                  ,&DAT_145b909f0,0);
            *(undefined8 *)(lVar8 + 0x28) = 0x1ea;
LAB_143778ab6:
            *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
            FUN_14373a950(&local_c90);
          }
LAB_143778ac3:
          *(undefined1 *)(param_1 + 1) = 0;
          uVar10 = FUN_143703a50();
          lVar8 = (longlong)(int)(local_c28 - 1);
          if (-1 < (int)(local_c28 - 1)) {
            puVar19 = (ulonglong *)(local_c30 + lVar8 * 0x30 + 0x10);
            do {
              if ((puVar19[3] & 1) != 0) {
                FUN_143733a60(puVar19[3] & 0xfffffffffffffffe);
              }
              if ((*puVar19 & 1) != 0) {
                FUN_143733a60(*puVar19 & 0xfffffffffffffffe);
              }
              puVar19 = puVar19 + -6;
              lVar8 = lVar8 + -1;
            } while (-1 < lVar8);
          }
        }
        else {
          if (local_d18 <
              (longlong *)((longlong)(local_cd0._4_4_ * (int)local_cd0) + (longlong)local_ce0)) {
            if (local_ce0 <
                (longlong *)((longlong)(local_d08._4_4_ * (int)local_d08) + (longlong)local_d18)) {
              if (1 < DAT_146b83f08) {
                FUN_14373a730(&local_c90,&DAT_146b83f00,2);
                lVar8 = FUN_14373bbd0(&local_c90,
                                      "Cannot clone on a buffer overlapping with source array",
                                      &DAT_145b909f0,0);
                *(undefined8 *)(lVar8 + 0x28) = 0x1f2;
                goto LAB_143778ab6;
              }
              goto LAB_143778ac3;
            }
          }
          puVar13 = (uint *)FUN_143715390(param_3[1],&local_res18);
          if (((*puVar13 >> 3 & 1) == 0) &&
             (((*(byte *)(param_3 + 2) & 1) == 0 ||
              (cVar2 = (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))(),
              cVar2 == '\0')))) {
            plVar9 = (longlong *)FUN_14374ea80(param_1 + 0xd,&local_res18,ppuStack_cd8,ppuStack_d10)
            ;
            if (*plVar9 == 0) {
              if (1 < DAT_146b83f08) {
                if (ppuStack_d10 == (undefined1 **)0x0) {
                  local_res10 = (longlong *)0x145b9f908;
                }
                else {
                  local_res10 = (longlong *)FUN_1437151f0();
                }
                FUN_14373a730(&local_c90,&DAT_146b83f00,2);
                lVar8 = FUN_14373bbd0(&local_c90,"Cannot compile array subtype {}",&DAT_145b74470,
                                      &local_res10,0);
                *(undefined8 *)(lVar8 + 0x28) = 0x214;
                goto LAB_143778ab6;
              }
            }
            else {
              local_cf0 = &local_c30;
              local_cf8 = param_1 + 4;
              iVar18 = FUN_1437714d0(&local_cf8,*plVar9,local_d18,
                                     local_d08._4_4_ * (uint)local_res10,local_ce0,
                                     CONCAT44(uVar6,local_cd0._4_4_ * (uint)local_res10),
                                     CONCAT44(uVar21,local_d08._4_4_),local_cd0._4_4_,(int)local_cd0
                                    );
              if (-1 < iVar18) {
                uVar6 = local_d08._4_4_;
                local_c80 = ((uint)(byte)local_d00 ^ (uint)local_d00) & 1 ^ local_d00;
                local_c90 = local_d18;
                ppuStack_c88 = ppuStack_d10;
                if ((local_c80 & 1) != 0) {
                  FUN_1437329e0(local_c80 & 0xfffffffffffffffe);
                }
                FUN_143774c00(param_1 + 10,&local_c90,(ulonglong)local_res10 & 0xffffffff,uVar6);
                cVar2 = FUN_14374a340(param_3[1]);
                if (cVar2 != '\0') {
                  FUN_143774d10(param_1[8],param_3);
                }
                cVar2 = FUN_14374a340(ppuStack_d10);
                if (cVar2 != '\0') {
                  FUN_143774b20(param_1[8],&local_d18);
                }
                goto LAB_143778e91;
              }
              if (1 < DAT_146b83f08) {
                FUN_14373a730(&local_c90,&DAT_146b83f00,2);
                lVar8 = FUN_14373bbd0(&local_c90,"Cannot copy array",&DAT_145b909f0,0);
                *(undefined8 *)(lVar8 + 0x28) = 0x21e;
                goto LAB_143778ab6;
              }
            }
            goto LAB_143778ac3;
          }
          iVar18 = 0;
          if (0 < (int)local_d08) {
            do {
              local_cf8 = (longlong *)((longlong)(local_cd0._4_4_ * iVar18) + (longlong)local_ce0);
              local_cf0 = ppuStack_cd8;
              local_ce8 = ((uint)(byte)local_cc8 ^ (uint)local_cc8) & 1 ^ local_cc8;
              if ((local_ce8 & 1) != 0) {
                FUN_1437329e0(local_ce8 & 0xfffffffffffffffe);
              }
              local_d20 = ((uint)(byte)local_d00 ^ (uint)local_d00) & 1 ^ local_d00;
              local_d30 = (longlong *)((longlong)(local_d08._4_4_ * iVar18) + (longlong)local_d18);
              local_d28 = ppuStack_d10;
              if ((local_d20 & 1) != 0) {
                FUN_1437329e0(local_d20 & 0xfffffffffffffffe);
              }
              puVar16 = (undefined8 *)FUN_143714490(local_d28,1);
              uVar7 = 0;
              bVar3 = 0;
              uVar15 = uVar7;
              if (puVar16 != (undefined8 *)0x0) {
                uVar15 = (uint)*puVar16;
              }
              uVar15 = uVar15 & 0xf;
              if (uVar15 == 3) {
LAB_143778dff:
                uVar10 = FUN_143703a50();
                if (*(uint *)(param_1 + 5) == (*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff)) {
                  FUN_14370c460(uVar10,param_1 + 4,0x30);
                }
                if ((longlong)*(int *)(param_1 + 5) * 0x30 + param_1[4] != 0) {
                  FUN_143723b10();
                }
                iVar5 = *(int *)(param_1 + 5);
                *(int *)(param_1 + 5) = iVar5 + 1;
                FUN_1436fa270((longlong)iVar5 * 0x30 + param_1[4],&local_d30,&local_cf8);
              }
              else if (uVar15 == 6) {
                local_c80 = 0;
                local_c90 = (longlong *)0x0;
                ppuStack_c88 = (undefined1 **)0x0;
                if (local_cf0 != (undefined1 **)0x0) {
                  puVar16 = (undefined8 *)FUN_143714490(local_cf0,1);
                  bVar4 = bVar3;
                  if (puVar16 != (undefined8 *)0x0) {
                    bVar4 = (byte)*puVar16;
                  }
                  if ((bVar4 & 0xf) == 6) {
                    local_c90 = local_cf8;
                    ppuStack_c88 = local_cf0;
                    if ((local_ce8 & 1) != 0) {
                      FUN_1437329e0(local_ce8 & 0xfffffffffffffffe);
                    }
                    local_c80 = local_ce8;
                  }
                }
                local_c98 = 0;
                local_ca8 = (longlong *)0x0;
                ppuStack_ca0 = (undefined1 **)0x0;
                if (local_d28 != (undefined1 **)0x0) {
                  puVar16 = (undefined8 *)FUN_143714490(local_d28,1);
                  if (puVar16 != (undefined8 *)0x0) {
                    bVar3 = (byte)*puVar16;
                  }
                  if ((bVar3 & 0xf) == 6) {
                    local_ca8 = local_d30;
                    ppuStack_ca0 = local_d28;
                    if ((local_d20 & 1) != 0) {
                      FUN_1437329e0(local_d20 & 0xfffffffffffffffe);
                    }
                    local_c98 = local_d20;
                  }
                }
                uVar10 = FUN_143703a50();
                if (local_c28 == (local_c24 & 0x3fffffff)) {
                  FUN_14370c460(uVar10,&local_c30,0x30);
                }
                if (local_c30 + (longlong)(int)local_c28 * 0x30 != (undefined1 *)0x0) {
                  FUN_143723b10();
                }
                lVar8 = (longlong)(int)local_c28;
                local_c28 = local_c28 + 1;
                FUN_1436fa270(local_c30 + lVar8 * 0x30,&local_ca8,&local_c90);
                if ((local_c98 & 1) != 0) {
                  FUN_143733a60(local_c98 & 0xfffffffffffffffe);
                }
                if ((local_c80 & 1) != 0) {
                  FUN_143733a60(local_c80 & 0xfffffffffffffffe);
                }
              }
              else {
                if (uVar15 == 8) goto LAB_143778dff;
                puVar16 = (undefined8 *)FUN_143714490(local_cf0,1);
                if (puVar16 != (undefined8 *)0x0) {
                  uVar7 = (uint)*puVar16;
                }
                (*(code *)(&DAT_146b83fd0)[uVar7 & 0xf])(param_1,&local_cf8,&local_d30);
              }
              if ((local_d20 & 1) != 0) {
                FUN_143733a60(local_d20 & 0xfffffffffffffffe);
              }
              if ((local_ce8 & 1) != 0) {
                FUN_143733a60(local_ce8 & 0xfffffffffffffffe);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < (int)local_d08);
          }
LAB_143778e91:
          FUN_1437772f0(param_1,local_c30,local_c28);
LAB_143778ea1:
          uVar10 = FUN_143703a50();
          lVar8 = (longlong)(int)(local_c28 - 1);
          if (-1 < (int)(local_c28 - 1)) {
            puVar19 = (ulonglong *)(local_c30 + lVar8 * 0x30 + 0x10);
            do {
              if ((puVar19[3] & 1) != 0) {
                FUN_143733a60(puVar19[3] & 0xfffffffffffffffe);
              }
              if ((*puVar19 & 1) != 0) {
                FUN_143733a60(*puVar19 & 0xfffffffffffffffe);
              }
              puVar19 = puVar19 + -6;
              lVar8 = lVar8 + -1;
            } while (-1 < lVar8);
          }
        }
        local_c28 = 0;
        if (-1 < (int)local_c24) {
          FUN_143702e10(uVar10,local_c30,0x30,local_c24 & 0x3fffffff);
        }
        local_c30 = (undefined1 *)0x0;
        local_c24 = 0x80000000;
      }
      if ((local_cc8 & 1) != 0) {
        FUN_143733a60(local_cc8 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    if (1 < DAT_146b83f08) {
      FUN_14373a730(&local_ce0,&DAT_146b83f00,2);
      lVar8 = FUN_14373bbd0(&local_ce0,"Cannot access array value",&DAT_145b909f0,0);
      *(char **)(lVar8 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar8 + 0x28) = 0x1de;
      FUN_14373a950(&local_ce0);
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if ((local_d00 & 1) != 0) {
    FUN_143733a60(local_d00 & 0xfffffffffffffffe);
  }
LAB_143778f4b:
  if ((local_c48 & 1) != 0) {
    FUN_143733a60(local_c48 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143778f80 FUN_143778f80 body=164 status=ok
// SIG undefined FUN_143778f80(void)

void FUN_143778f80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_38 = *param_3;
  local_28 = param_3[2];
  local_30 = param_3[1];
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  local_20 = *param_2;
  local_10 = param_2[2];
  local_18 = param_2[1];
  if ((local_10 & 1) != 0) {
    FUN_1437329e0(local_10 & 0xfffffffffffffffe);
  }
  FUN_1437772f0(param_1,&local_38,1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143779030 FUN_143779030 body=4366 status=ok
// SIG undefined FUN_143779030(void)

/* WARNING: Removing unreachable block (ram,0x0001437792b1) */
/* WARNING: Removing unreachable block (ram,0x0001437792ca) */

void FUN_143779030(longlong param_1,undefined8 *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char *local_res18;
  int local_res20 [2];
  undefined8 in_stack_fffffffffffff1e0;
  undefined4 uVar27;
  ulonglong in_stack_fffffffffffff1e8;
  ulonglong in_stack_fffffffffffff1f0;
  longlong local_df8;
  longlong lStack_df0;
  ulonglong local_de8;
  longlong local_dd8;
  undefined8 *puStack_dd0;
  ulonglong local_dc8;
  longlong local_db8;
  longlong local_db0;
  ulonglong local_da8;
  longlong local_da0;
  longlong lStack_d98;
  ulonglong local_d90;
  undefined8 *local_d88;
  undefined8 *local_d80;
  int local_d78;
  int local_d74;
  ulonglong local_d70;
  longlong local_d68;
  longlong local_d60;
  ulonglong local_d58;
  longlong local_d50;
  longlong lStack_d48;
  ulonglong local_d40;
  longlong local_d38;
  undefined8 *local_d30;
  ulonglong local_d28;
  longlong local_d20;
  longlong local_d18;
  ulonglong local_d10;
  undefined1 local_d08 [56];
  longlong local_cd0;
  undefined1 **local_cc8;
  undefined1 local_cc0 [4];
  undefined1 local_cbc [4];
  longlong local_cb8;
  longlong lStack_cb0;
  ulonglong local_ca8;
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined1 local_c80 [16];
  undefined1 *local_c70;
  uint local_c68;
  uint local_c64;
  undefined1 local_c60 [3104];
  
  local_c70 = local_c60;
  local_c68 = 0;
  local_c64 = 0x80000040;
  local_res18 = param_3;
  puVar12 = (uint *)FUN_143715390(*(undefined8 *)(param_3 + 8),local_res20);
  if ((*puVar12 >> 3 & 1) != 0) {
    hkReflect::DeclIterAll::DeclIterAll(&local_d88,param_2[1],0);
LAB_1437790d0:
    puVar15 = local_d88 + 1;
    if ((local_d88 + 1 < local_d80) ||
       (cVar4 = FUN_1437144f0(&local_d88), puVar15 = local_d88, cVar4 != '\0')) goto LAB_1437790f5;
    bVar3 = false;
    goto LAB_14377910c;
  }
  puVar12 = (uint *)FUN_143715390(param_2[1],local_res20);
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff1e0 >> 0x20);
  if ((*puVar12 >> 0xb & 1) != 0) {
    puVar12 = (uint *)FUN_143715390(param_2[1],local_res20);
    uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff1e0 >> 0x20);
    if ((*puVar12 >> 5 & 1) != 0) {
      puVar12 = (uint *)FUN_143715390(*(undefined8 *)(param_3 + 8),local_res20);
      uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff1e0 >> 0x20);
      if ((*puVar12 >> 5 & 1) == 0) {
        uVar14 = FUN_143741ed0(param_2,&local_da0,"foreignUtil");
        plVar20 = (longlong *)FUN_143741ed0(uVar14,&local_cb8,"fields");
        local_d40 = 0;
        local_d50 = 0;
        lStack_d48 = 0;
        if (plVar20[1] != 0) {
          puVar15 = (undefined8 *)FUN_143714490(plVar20[1],1);
          bVar5 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            bVar5 = (byte)*puVar15;
          }
          if ((bVar5 & 0xf) == 8) {
            local_d50 = *plVar20;
            lStack_d48 = plVar20[1];
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              FUN_1437329e0(plVar20[2] & 0xfffffffffffffffe);
            }
            if ((local_d40 & 1) != 0) {
              FUN_143733a60(local_d40 & 0xfffffffffffffffe);
            }
            local_d40 = plVar20[2];
          }
        }
        if ((local_ca8 & 1) != 0) {
          FUN_143733a60(local_ca8 & 0xfffffffffffffffe);
        }
        if ((local_d90 & 1) != 0) {
          FUN_143733a60(local_d90 & 0xfffffffffffffffe);
        }
        if (local_d50 == 0) {
          if (1 < DAT_146b83f08) {
            FUN_14373a730(local_d08,&DAT_146b83f00,2);
            lVar23 = FUN_14373bbd0(local_d08,"No ForeignUtil found in foreign type",&DAT_145b909f0,0
                                  );
            *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar23 + 0x28) = 0x126;
            FUN_14373a950(local_d08);
          }
          *(undefined1 *)(param_1 + 8) = 0;
LAB_143779efc:
          if ((local_d40 & 1) != 0) {
            FUN_143733a60(local_d40 & 0xfffffffffffffffe);
          }
          goto LAB_14377a070;
        }
        FUN_143742a00(&local_d50,&local_d88);
        uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff1e0 >> 0x20);
        local_res20[0] = 0;
        if (0 < local_d78) {
          do {
            iVar9 = local_res20[0];
            local_dd8 = (longlong)(local_d74 * local_res20[0]) + (longlong)local_d88;
            puStack_dd0 = local_d80;
            local_dc8 = ((uint)local_d70 & 0xff ^ (uint)local_d70) & 1 ^ local_d70;
            if ((local_dc8 & 1) != 0) {
              FUN_1437329e0(local_dc8 & 0xfffffffffffffffe);
            }
            plVar20 = (longlong *)FUN_143741ed0(&local_dd8,&local_df8,&DAT_145af95b0);
            uVar25 = 0;
            local_cb8 = 0;
            lStack_cb0 = 0;
            lVar22 = lStack_cb0;
            lVar23 = local_cb8;
            if (plVar20[1] != 0) {
              puVar15 = (undefined8 *)FUN_143714490(plVar20[1],1);
              bVar5 = 0;
              if (puVar15 != (undefined8 *)0x0) {
                bVar5 = (byte)*puVar15;
              }
              lVar22 = lStack_cb0;
              lVar23 = local_cb8;
              if ((bVar5 & 0xf) == 3) {
                lVar23 = *plVar20;
                lVar22 = plVar20[1];
                if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                  FUN_1437329e0(plVar20[2] & 0xfffffffffffffffe);
                }
                uVar25 = plVar20[2];
              }
            }
            if ((local_de8 & 1) != 0) {
              FUN_143733a60(local_de8 & 0xfffffffffffffffe);
            }
            if ((local_dc8 & 1) != 0) {
              FUN_143733a60(local_dc8 & 0xfffffffffffffffe);
            }
            if (lVar23 == 0) {
              if (1 < DAT_146b83f08) {
                FUN_14373a730(local_d08,&DAT_146b83f00,2);
                lVar23 = FUN_14373bbd0(local_d08,"Name not found in dynamic field",&DAT_145b909f0,0)
                ;
                *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
                *(undefined8 *)(lVar23 + 0x28) = 300;
                FUN_14373a950(local_d08);
              }
              *(undefined1 *)(param_1 + 8) = 0;
LAB_143779ed8:
              if ((uVar25 & 1) != 0) {
                FUN_143733a60(uVar25 & 0xfffffffffffffffe);
              }
              if ((local_d70 & 1) != 0) {
                FUN_143733a60(local_d70 & 0xfffffffffffffffe);
              }
              goto LAB_143779efc;
            }
            local_dd8 = (longlong)(local_d74 * iVar9) + (longlong)local_d88;
            puStack_dd0 = local_d80;
            local_dc8 = ((uint)local_d70 & 0xff ^ (uint)local_d70) & 1 ^ local_d70;
            if ((local_dc8 & 1) != 0) {
              FUN_1437329e0(local_dc8 & 0xfffffffffffffffe);
            }
            plVar20 = (longlong *)FUN_143741ed0(&local_dd8,&local_df8,"contents");
            local_da0 = 0;
            lStack_d98 = 0;
            local_d90 = 0;
            if (plVar20[1] != 0) {
              puVar15 = (undefined8 *)FUN_143714490(plVar20[1],1);
              if (puVar15 == (undefined8 *)0x0) {
                bVar5 = 0;
              }
              else {
                bVar5 = (byte)*puVar15;
              }
              if ((bVar5 & 0xf) == 8) {
                local_da0 = *plVar20;
                lStack_d98 = plVar20[1];
                if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                  FUN_1437329e0(plVar20[2] & 0xfffffffffffffffe);
                }
                if ((local_d90 & 1) != 0) {
                  FUN_143733a60(local_d90 & 0xfffffffffffffffe);
                }
                local_d90 = plVar20[2];
              }
            }
            if ((local_de8 & 1) != 0) {
              FUN_143733a60(local_de8 & 0xfffffffffffffffe);
            }
            if ((local_dc8 & 1) != 0) {
              FUN_143733a60(local_dc8 & 0xfffffffffffffffe);
            }
            if (local_da0 == 0) {
              if (1 < DAT_146b83f08) {
                FUN_14373a730(local_d08,&DAT_146b83f00,2);
                lVar23 = FUN_14373bbd0(local_d08,"Contents not found in dynamic field",
                                       &DAT_145b909f0,0);
                *(undefined8 *)(lVar23 + 0x28) = 0x12e;
LAB_143779e53:
                *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
                FUN_14373a950(local_d08);
              }
LAB_143779e60:
              *(undefined1 *)(param_1 + 8) = 0;
              if ((local_d90 & 1) != 0) {
                FUN_143733a60(local_d90 & 0xfffffffffffffffe);
              }
              goto LAB_143779ed8;
            }
            iVar7 = FUN_143742950(&local_da0);
            if (iVar7 == 0) {
              if (1 < DAT_146b83f08) {
                FUN_14373a730(local_d08,&DAT_146b83f00,2);
                lVar23 = FUN_14373bbd0(local_d08,"Empty dynamic field in foreign object",
                                       &DAT_145b909f0,0);
                *(undefined8 *)(lVar23 + 0x28) = 0x12f;
                goto LAB_143779e53;
              }
              goto LAB_143779e60;
            }
            FUN_143741d50(&local_da0,&local_d20,0);
            local_df8 = 0;
            plVar20 = (longlong *)(uVar25 & 0xfffffffffffffffe);
            (**(code **)(*plVar20 + 0x38))(plVar20,local_cc0,lVar23,lVar22,&local_df8);
            FUN_143741ed0(local_res18,&local_d38,local_df8);
            lVar19 = local_d18;
            puVar15 = local_d30;
            if (local_d38 != 0) {
              puVar17 = (undefined8 *)FUN_143714490(local_d30,1);
              if (puVar17 == (undefined8 *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = (uint)*puVar17;
              }
              uVar6 = uVar6 & 0xf;
              if ((uVar6 == 4) || (((uVar6 - 2 & 0xfffffffc) == 0 && (uVar6 != 4)))) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              puVar17 = (undefined8 *)0x0;
              if (bVar3) {
                puVar17 = puVar15;
              }
              if (puVar17 == (undefined8 *)0x0) {
LAB_143779971:
                plVar18 = (longlong *)FUN_143714f80(lVar19,local_ca0);
                lVar24 = *plVar18;
                lVar16 = plVar18[1];
                plVar18 = (longlong *)FUN_143714f80(puVar15,local_c90);
                local_dd8 = *plVar18;
                puStack_dd0 = (undefined8 *)plVar18[1];
                local_df8 = lVar24;
                lStack_df0 = lVar16;
                iVar9 = FUN_1437145f0(&local_dd8,&local_df8);
                if (iVar9 != 0) {
                  iVar9 = local_res20[0];
                  if (1 < DAT_146b83f08) {
                    local_df8 = 0;
                    (**(code **)(*plVar20 + 0x38))(plVar20,local_cbc,lVar23,lVar22,&local_df8);
                    local_cd0 = local_df8;
                    in_stack_fffffffffffff1e8 = FUN_143714f80(lVar19,local_c80);
                    in_stack_fffffffffffff1e0 = FUN_143714f80(puVar15,&local_d68);
                    uVar14 = FUN_143714f80(*(undefined8 *)(local_res18 + 8),&local_db8);
                    FUN_14373a730(local_d08,&DAT_146b83f00,2);
                    in_stack_fffffffffffff1f0 = 0;
                    lVar23 = FUN_14373bbd0(local_d08,
                                           "Property \'{}.{}\' has type \'{}\', but a value of type \'{}\' has been found in the file. The value for the property must be reset manually."
                                           ,&DAT_145b9f7a0,uVar14,&local_cd0,
                                           in_stack_fffffffffffff1e0,in_stack_fffffffffffff1e8,0);
                    *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
                    *(undefined8 *)(lVar23 + 0x28) = 0x153;
                    FUN_14373a950(local_d08);
                    iVar9 = local_res20[0];
                  }
                  goto LAB_143779a2b;
                }
              }
              else {
                puVar17 = (undefined8 *)FUN_143714490(puVar15,1);
                if (puVar17 == (undefined8 *)0x0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (uint)*puVar17;
                }
                puVar17 = (undefined8 *)FUN_143714490(lVar19,1);
                uVar8 = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  uVar8 = (uint)*puVar17;
                }
                if (((uVar8 ^ uVar6) & 0xf) != 0) goto LAB_143779971;
              }
              puVar15 = (undefined8 *)FUN_143714490(lVar19,1);
              uVar6 = 0;
              if (puVar15 != (undefined8 *)0x0) {
                uVar6 = (uint)*puVar15;
              }
              uVar6 = uVar6 & 0xf;
              if (uVar6 == 3) {
LAB_143779c7b:
                uVar14 = FUN_143703a50();
                if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
                  FUN_14370c460(uVar14,param_1 + 0x20,0x30);
                }
                if ((longlong)*(int *)(param_1 + 0x28) * 0x30 + *(longlong *)(param_1 + 0x20) != 0)
                {
                  FUN_143723b10();
                }
                iVar9 = *(int *)(param_1 + 0x28);
                *(int *)(param_1 + 0x28) = iVar9 + 1;
                FUN_1436fa270((longlong)iVar9 * 0x30 + *(longlong *)(param_1 + 0x20),&local_d38,
                              &local_d20);
                iVar9 = local_res20[0];
              }
              else if (uVar6 == 6) {
                local_de8 = 0;
                local_df8 = 0;
                lStack_df0 = 0;
                if (local_d18 != 0) {
                  puVar15 = (undefined8 *)FUN_143714490(local_d18,1);
                  bVar5 = 0;
                  if (puVar15 != (undefined8 *)0x0) {
                    bVar5 = (byte)*puVar15;
                  }
                  if ((bVar5 & 0xf) == 6) {
                    local_df8 = local_d20;
                    lStack_df0 = local_d18;
                    if ((local_d10 & 1) != 0) {
                      FUN_1437329e0(local_d10 & 0xfffffffffffffffe);
                    }
                    local_de8 = local_d10;
                  }
                }
                local_dc8 = 0;
                local_dd8 = 0;
                puStack_dd0 = (undefined8 *)0x0;
                if (local_d30 != (undefined8 *)0x0) {
                  puVar15 = (undefined8 *)FUN_143714490(local_d30,1);
                  bVar5 = 0;
                  if (puVar15 != (undefined8 *)0x0) {
                    bVar5 = (byte)*puVar15;
                  }
                  if ((bVar5 & 0xf) == 6) {
                    local_dd8 = local_d38;
                    puStack_dd0 = local_d30;
                    if ((local_d28 & 1) != 0) {
                      FUN_1437329e0(local_d28 & 0xfffffffffffffffe);
                    }
                    local_dc8 = local_d28;
                  }
                }
                uVar14 = FUN_143703a50();
                if (local_c68 == (local_c64 & 0x3fffffff)) {
                  FUN_14370c460(uVar14,&local_c70,0x30);
                }
                if (local_c70 + (longlong)(int)local_c68 * 0x30 != (undefined1 *)0x0) {
                  FUN_143723b10();
                }
                lVar23 = (longlong)(int)local_c68;
                local_c68 = local_c68 + 1;
                FUN_1436fa270(local_c70 + lVar23 * 0x30,&local_dd8,&local_df8);
                if ((local_dc8 & 1) != 0) {
                  FUN_143733a60(local_dc8 & 0xfffffffffffffffe);
                }
                iVar9 = local_res20[0];
                if ((local_de8 & 1) != 0) {
                  FUN_143733a60(local_de8 & 0xfffffffffffffffe);
                  iVar9 = local_res20[0];
                }
              }
              else {
                if (uVar6 == 8) goto LAB_143779c7b;
                puVar15 = (undefined8 *)FUN_143714490(local_d18,1);
                uVar6 = 0;
                if (puVar15 != (undefined8 *)0x0) {
                  uVar6 = (uint)*puVar15;
                }
                (*(code *)(&DAT_146b83fd0)[uVar6 & 0xf])(param_1,&local_d20,&local_d38);
                iVar9 = local_res20[0];
              }
            }
LAB_143779a2b:
            if ((local_d28 & 1) != 0) {
              FUN_143733a60(local_d28 & 0xfffffffffffffffe);
            }
            if ((local_d10 & 1) != 0) {
              FUN_143733a60(local_d10 & 0xfffffffffffffffe);
            }
            if ((local_d90 & 1) != 0) {
              FUN_143733a60(local_d90 & 0xfffffffffffffffe);
            }
            if ((uVar25 & 1) != 0) {
              FUN_143733a60(plVar20);
            }
            uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff1e0 >> 0x20);
            local_res20[0] = iVar9 + 1;
            param_3 = local_res18;
          } while (local_res20[0] < local_d78);
        }
        if ((local_d70 & 1) != 0) {
          FUN_143733a60(local_d70 & 0xfffffffffffffffe);
        }
        if ((local_d40 & 1) != 0) {
          FUN_143733a60(local_d40 & 0xfffffffffffffffe);
        }
      }
    }
  }
  plVar20 = (longlong *)
            FUN_14374ea80(param_1 + 0x68,&local_res18,param_2[1],*(undefined8 *)(param_3 + 8));
  lVar23 = *plVar20;
  if (lVar23 == 0) {
    if (1 < DAT_146b83f08) {
      if (*(longlong *)(param_3 + 8) == 0) {
        local_res18 = "<No name>";
      }
      else {
        local_res18 = (char *)FUN_1437151f0();
      }
      FUN_14373a730(local_d08,&DAT_146b83f00,2);
      lVar23 = FUN_14373bbd0(local_d08,"Cannot compile type {}",&DAT_145b74470,&local_res18,0);
      *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar23 + 0x28) = 0x15a;
      FUN_14373a950(local_d08);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    local_cc8 = &local_c70;
    uVar14 = *param_2;
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)param_3;
    local_cd0 = param_1 + 0x20;
    uVar10 = FUN_1437152f0(param_2[1]);
    uVar11 = FUN_1437152f0(uVar1);
    iVar9 = FUN_1437714d0(&local_cd0,lVar23,uVar2,uVar11,uVar14,CONCAT44(uVar27,uVar10),
                          in_stack_fffffffffffff1e8 & 0xffffffff00000000,
                          in_stack_fffffffffffff1f0 & 0xffffffff00000000,1);
    if (iVar9 < 0) {
      if (1 < DAT_146b83f08) {
        FUN_14373a730(local_d08,&DAT_146b83f00,2);
        lVar23 = FUN_14373bbd0(local_d08,"Cannot copy object",&DAT_145b909f0,0);
        *(char **)(lVar23 + 0x20) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar23 + 0x28) = 0x162;
        FUN_14373a950(local_d08);
      }
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      cVar4 = FUN_14374a340(*(undefined8 *)(param_3 + 8));
      if (cVar4 != '\0') {
        FUN_143774d10(*(undefined8 *)(param_1 + 0x40),param_3);
      }
LAB_14377a05a:
      FUN_1437772f0(param_1,local_c70,local_c68);
    }
  }
LAB_14377a070:
  uVar14 = FUN_143703a50();
  lVar23 = (longlong)(int)(local_c68 - 1);
  if (-1 < (int)(local_c68 - 1)) {
    puVar21 = (ulonglong *)(local_c70 + lVar23 * 0x30 + 0x10);
    do {
      if ((puVar21[3] & 1) != 0) {
        FUN_143733a60(puVar21[3] & 0xfffffffffffffffe);
      }
      if ((*puVar21 & 1) != 0) {
        FUN_143733a60(*puVar21 & 0xfffffffffffffffe);
      }
      puVar21 = puVar21 + -6;
      lVar23 = lVar23 + -1;
    } while (-1 < lVar23);
  }
  local_c68 = 0;
  if (-1 < (int)local_c64) {
    FUN_143702e10(uVar14,local_c70,0x30,local_c64 & 0x3fffffff);
  }
  return;
LAB_1437790f5:
  local_d88 = puVar15;
  pbVar13 = (byte *)FUN_143714f30(local_d88,local_res20);
  if ((*pbVar13 & 0x30) == 0) goto LAB_1437790d0;
  bVar3 = true;
LAB_14377910c:
  if (!bVar3) goto LAB_14377a05a;
  FUN_143741f50(param_2,&local_d68,*local_d88);
  uVar14 = FUN_1437151c0(local_d88);
  FUN_143741ed0(param_3,&local_db8,uVar14);
  if (local_db8 == 0) goto LAB_143779396;
  puVar15 = (undefined8 *)FUN_143714490(local_db0,1);
  uVar6 = 0;
  if (puVar15 != (undefined8 *)0x0) {
    uVar6 = (uint)*puVar15;
  }
  uVar6 = uVar6 & 0xf;
  if (uVar6 != 3) {
    if (uVar6 == 6) {
      uVar25 = 0;
      local_d50 = 0;
      lStack_d48 = 0;
      lVar23 = lStack_d48;
      lVar22 = local_d50;
      if (local_d60 != 0) {
        puVar15 = (undefined8 *)FUN_143714490(local_d60,1);
        bVar5 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          bVar5 = (byte)*puVar15;
        }
        lVar23 = lStack_d48;
        lVar22 = local_d50;
        if (((bVar5 & 0xf) == 6) &&
           (lVar23 = local_d60, lVar22 = local_d68, uVar25 = local_d58, (local_d58 & 1) != 0)) {
          FUN_1437329e0(local_d58 & 0xfffffffffffffffe);
          uVar25 = local_d58;
        }
      }
      uVar26 = 0;
      local_da0 = 0;
      lStack_d98 = 0;
      lVar19 = lStack_d98;
      lVar24 = local_da0;
      if (local_db0 != 0) {
        puVar15 = (undefined8 *)FUN_143714490(local_db0,1);
        bVar5 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          bVar5 = (byte)*puVar15;
        }
        lVar19 = lStack_d98;
        lVar24 = local_da0;
        if (((bVar5 & 0xf) == 6) &&
           (lVar19 = local_db0, lVar24 = local_db8, uVar26 = local_da8, (local_da8 & 1) != 0)) {
          FUN_1437329e0(local_da8 & 0xfffffffffffffffe);
          uVar26 = local_da8;
        }
      }
      uVar14 = FUN_143703a50();
      if (local_c68 == (local_c64 & 0x3fffffff)) {
        FUN_14370c460(uVar14,&local_c70,0x30);
      }
      puVar15 = (undefined8 *)(local_c70 + (longlong)(int)local_c68 * 0x30);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
      }
      lVar16 = (longlong)(int)local_c68;
      local_c68 = local_c68 + 1;
      plVar20 = (longlong *)(local_c70 + lVar16 * 0x30);
      *plVar20 = lVar24;
      plVar20[1] = lVar19;
      if ((uVar26 & 1) != 0) {
        FUN_1437329e0(uVar26 & 0xfffffffffffffffe);
      }
      if ((*(byte *)(plVar20 + 2) & 1) != 0) {
        FUN_143733a60(plVar20[2] & 0xfffffffffffffffe);
      }
      plVar20[2] = uVar26;
      plVar20[3] = lVar22;
      plVar20[4] = lVar23;
      if ((uVar25 & 1) != 0) {
        FUN_1437329e0(uVar25 & 0xfffffffffffffffe);
      }
      if ((*(byte *)(plVar20 + 5) & 1) != 0) {
        FUN_143733a60(plVar20[5] & 0xfffffffffffffffe);
      }
      plVar20[5] = uVar25;
      if ((uVar26 & 1) != 0) {
        FUN_143733a60(uVar26 & 0xfffffffffffffffe);
      }
      param_3 = local_res18;
      if ((uVar25 & 1) != 0) {
        FUN_143733a60(uVar25 & 0xfffffffffffffffe);
        param_3 = local_res18;
      }
      goto LAB_143779396;
    }
    if (uVar6 != 8) {
      puVar15 = (undefined8 *)FUN_143714490(local_d60,1);
      uVar6 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        uVar6 = (uint)*puVar15;
      }
      (*(code *)(&DAT_146b83fd0)[uVar6 & 0xf])(param_1,&local_d68,&local_db8);
      goto LAB_143779396;
    }
  }
  uVar14 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_14370c460(uVar14,param_1 + 0x20,0x30);
  }
  puVar15 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x28) * 0x30 + *(longlong *)(param_1 + 0x20));
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    if ((*(byte *)(puVar15 + 2) & 1) != 0) {
      FUN_1437329e0(0);
    }
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    if ((*(byte *)(puVar15 + 5) & 1) != 0) {
      FUN_1437329e0(0);
    }
  }
  iVar9 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar9 + 1;
  plVar20 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)(param_1 + 0x20));
  *plVar20 = local_db8;
  plVar20[1] = local_db0;
  if ((local_da8 & 1) != 0) {
    FUN_1437329e0(local_da8 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(plVar20 + 2) & 1) != 0) {
    FUN_143733a60(plVar20[2] & 0xfffffffffffffffe);
  }
  plVar20[2] = local_da8;
  plVar20[3] = local_d68;
  plVar20[4] = local_d60;
  if ((local_d58 & 1) != 0) {
    FUN_1437329e0(local_d58 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(plVar20 + 5) & 1) != 0) {
    FUN_143733a60(plVar20[5] & 0xfffffffffffffffe);
  }
  plVar20[5] = local_d58;
LAB_143779396:
  if ((local_da8 & 1) != 0) {
    FUN_143733a60(local_da8 & 0xfffffffffffffffe);
  }
  if ((local_d58 & 1) != 0) {
    FUN_143733a60(local_d58 & 0xfffffffffffffffe);
  }
  goto LAB_1437790d0;
}



// FUNCTION 14377a140 FUN_14377a140 body=316 status=ok
// SIG undefined FUN_14377a140(void)

void FUN_14377a140(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  FUN_1437140a0(&local_res20,param_3[1]);
  if ((local_res20 < 2) ||
     (puVar2 = (uint *)FUN_143714f30(&local_res20,local_res18), (*puVar2 >> 6 & 1) == 0)) {
    local_38 = *param_3;
    uVar5 = param_3[2];
    local_30 = param_3[1];
  }
  else {
    lVar1 = *(longlong *)(param_3[1] + 8);
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_1437157a0(0);
      }
      else {
        uVar4 = FUN_1437157a0((uint)*puVar3 & 0xf);
      }
    }
    uVar5 = 0;
    local_30 = uVar5;
    if (lVar1 != 0) {
      local_30 = FUN_143772db0(lVar1,uVar4);
    }
    local_38 = *param_3;
    if (local_30 != 0) {
      uVar5 = FUN_1437151a0();
    }
  }
  local_28 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_143771350(param_1,param_2,&local_38);
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  return;
}



// FUNCTION 14377a280 FUN_14377a280 body=106 status=ok
// SIG undefined FUN_14377a280(void)

longlong FUN_14377a280(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  if (local_28 != 0) {
    if (param_2 == 0) goto LAB_14377a2c9;
    uVar2 = FUN_1437151f0(local_20);
    iVar1 = hkString::strCmp(uVar2,param_2);
    if (iVar1 == 0) goto LAB_14377a2c9;
  }
  local_28 = 0;
LAB_14377a2c9:
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return local_28;
}



// FUNCTION 14377a2f0 FUN_14377a2f0 body=102 status=ok
// SIG undefined FUN_14377a2f0(void)

longlong FUN_14377a2f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  if ((local_28 == 0) ||
     ((param_2 != 0 && (lVar1 = FUN_142b7ebc0(local_28,local_20,param_2), lVar1 == 0)))) {
    local_28 = 0;
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return local_28;
}



// FUNCTION 14377a360 FUN_14377a360 body=50 status=ok
// SIG undefined FUN_14377a360(void)

undefined8 FUN_14377a360(longlong *param_1)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,local_28);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return local_20;
}



// FUNCTION 14377a3a0 FUN_14377a3a0 body=58 status=ok
// SIG undefined FUN_14377a3a0(void)

undefined8 FUN_14377a3a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,local_28);
  uVar1 = FUN_1437151f0(local_20);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return uVar1;
}



// FUNCTION 14377a3e0 FUN_14377a3e0 body=428 status=ok
// SIG undefined FUN_14377a3e0(void)

undefined8 FUN_14377a3e0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *local_28;
  int local_20;
  uint local_1c;
  longlong local_18;
  int local_10;
  uint local_c;
  
  iVar3 = 0;
  local_c = 0x80000000;
  local_18 = 0;
  local_10 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_18,&local_28);
  plVar1 = local_28;
  if (0 < local_20) {
    do {
      if (*plVar1 == param_2) {
        FUN_1437455a0(param_3,local_28[(longlong)iVar3 * 5 + 3] & 0xfffffffffffffffe);
        uVar5 = 1;
        goto LAB_14377a458;
      }
      iVar3 = iVar3 + 1;
      plVar1 = plVar1 + 5;
    } while (iVar3 < local_20);
  }
  uVar5 = 0;
LAB_14377a458:
  uVar2 = FUN_143703a50();
  lVar6 = (longlong)(local_20 + -1);
  if (-1 < local_20 + -1) {
    puVar4 = (ulonglong *)(local_28 + lVar6 * 5 + 2);
    do {
      FUN_143716650(puVar4 + 1);
      if ((*puVar4 & 1) != 0) {
        FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
      }
      puVar4 = puVar4 + -5;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar2,local_28,0x28,local_1c & 0x3fffffff);
  }
  local_28 = (longlong *)0x0;
  local_1c = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar6 = (longlong)(local_10 + -1);
  if (-1 < local_10 + -1) {
    puVar4 = (ulonglong *)(local_18 + 0x10 + lVar6 * 0x20);
    do {
      FUN_143716650(puVar4 + 1);
      if ((*puVar4 & 1) != 0) {
        FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
      }
      puVar4 = puVar4 + -4;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar2,local_18,0x20,local_c & 0x3fffffff);
  }
  return uVar5;
}



// FUNCTION 14377a590 FUN_14377a590 body=80 status=ok
// SIG undefined FUN_14377a590(void)

undefined8 * FUN_14377a590(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  param_1[1] = 0;
  *param_1 = hkObjectResource::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  uVar1 = param_2[2];
  param_1[5] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 14377a5e0 FUN_14377a5e0 body=120 status=ok
// SIG undefined FUN_14377a5e0(void)

void FUN_14377a5e0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = hkObjectResource::vftable;
  if (param_1[4] != 0) {
    lVar1 = FUN_14371aab0(param_1[3],param_1[4]);
    if (lVar1 == 0) {
      FUN_1437428e0(param_1 + 3,3,1);
    }
    else {
      FUN_14370c150(lVar1);
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_143733a60(param_1[5] & 0xfffffffffffffffe);
  }
  *param_1 = hkResource::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14377a660 FUN_14377a660 body=139 status=ok
// SIG undefined FUN_14377a660(void)

longlong FUN_14377a660(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14377a5e0();
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



// FUNCTION 14377a6f0 FUN_14377a6f0 body=40 status=ok
// SIG undefined FUN_14377a6f0(void)

void FUN_14377a6f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 14377a720 FUN_14377a720 body=69 status=ok
// SIG undefined FUN_14377a720(void)

longlong FUN_14377a720(longlong param_1)

{
  FUN_14370d870(param_1,1000);
  FUN_14370d870(param_1 + 0x28,1000);
  Semaphore::Semaphore(param_1 + 0x50,0,1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 14377a770 ~hkReadersWriterLock body=40 status=ok
// SIG undefined ~hkReadersWriterLock(void)

void hkReadersWriterLock::~hkReadersWriterLock(LPCRITICAL_SECTION param_1)

{
  hkSemaphore::~hkSemaphore(param_1 + 2);
  FWindowsCriticalSection::~FWindowsCriticalSection(param_1 + 1);
  FWindowsCriticalSection::~FWindowsCriticalSection(param_1);
  return;
}



// FUNCTION 14377a7a0 FUN_14377a7a0 body=33 status=ok
// SIG undefined FUN_14377a7a0(void)

void FUN_14377a7a0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  param_1[2].LockCount = param_1[2].LockCount + 1;
                    /* WARNING: Could not recover jumptable at 0x00014377a7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 14377a7d0 FUN_14377a7d0 body=92 status=ok
// SIG undefined FUN_14377a7d0(void)

void FUN_14377a7d0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  EnterCriticalSection(param_1 + 1);
  if (param_1[2].LockCount == param_1[2].RecursionCount) {
                    /* WARNING: Could not recover jumptable at 0x00014377a803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1 + 1);
    return;
  }
  *(undefined1 *)&param_1[2].OwningThread = 1;
  LeaveCriticalSection(param_1 + 1);
  FWindowsPlatformProcess::WaitForProc(param_1 + 2);
  *(undefined1 *)&param_1[2].OwningThread = 0;
  return;
}



// FUNCTION 14377a830 FUN_14377a830 body=75 status=ok
// SIG undefined FUN_14377a830(void)

void FUN_14377a830(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x5c)))
  {
    hkSemaphore::release(param_1 + 0x50,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014377a874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14377a880 FUN_14377a880 body=203 status=ok
// SIG undefined FUN_14377a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14377a880(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b842d8) {
    _Init_thread_header(&DAT_146b842d8);
    if (DAT_146b842d8 == -1) {
      _DAT_146b84358 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b84370 = FUN_14377f9b0;
      _DAT_146b84350 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b84368 = FUN_14377faa0;
      _DAT_146b84360 = FUN_14377fa40;
      _DAT_146b84348 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b84338 = AK::MemoryMgr::StartProfileThreadUsage;
      DAT_146b84330 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b84340 = AK::MemoryMgr::StartProfileThreadUsage;
      _Init_thread_footer(&DAT_146b842d8);
    }
  }
  return param_1;
}



// FUNCTION 14377a950 FUN_14377a950 body=203 status=ok
// SIG undefined FUN_14377a950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14377a950(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b842dc) {
    _Init_thread_header(&DAT_146b842dc);
    if (DAT_146b842dc == -1) {
      _DAT_146b84308 = &LAB_14377ff80;
      _DAT_146b84320 = FUN_14377fc80;
      _DAT_146b84300 = &LAB_14377ff80;
      _DAT_146b84318 = FUN_1437801a0;
      _DAT_146b84310 = FUN_14377ff90;
      _DAT_146b842f8 = FUN_143780280;
      _DAT_146b842e8 = &LAB_14377ff80;
      DAT_146b842e0 = &LAB_14377ff80;
      _DAT_146b842f0 = &LAB_14377ff80;
      _Init_thread_footer(&DAT_146b842dc);
    }
  }
  return param_1;
}



// FUNCTION 14377aa20 FUN_14377aa20 body=381 status=ok
// SIG undefined FUN_14377aa20(void)

longlong FUN_14377aa20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined2 param_9)

{
  FUN_1437365b0(param_1,param_4,0x4000);
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined ***)(param_1 + 0x78) = hkReflect::Detail::CustomAllocImpl::vftable;
  *(longlong *)(param_1 + 0x80) = param_1;
  *(undefined8 *)(param_1 + 0x88) = param_5;
  *(undefined8 *)(param_1 + 0x90) = param_6;
  *(undefined8 *)(param_1 + 0x98) = param_8;
  *(undefined8 *)(param_1 + 0xa0) = param_7;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  FUN_14373bf20(param_1 + 0xe8,(undefined1)param_9);
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_14373bf20(param_1 + 0x118,(undefined1)param_9);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x150) = param_9;
  return param_1;
}



// FUNCTION 14377aba0 FUN_14377aba0 body=55 status=ok
// SIG undefined FUN_14377aba0(void)

longlong FUN_14377aba0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8;
  
  FUN_14373bf20(param_1,local_res8);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_14377b170(param_1,param_2);
  return param_1;
}



// FUNCTION 14377abe0 FUN_14377abe0 body=105 status=ok
// SIG undefined FUN_14377abe0(void)

undefined8 *
FUN_14377abe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  param_1[1] = param_6;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = param_2;
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
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = param_5;
  param_1[0xe] = param_7;
  return param_1;
}



// FUNCTION 14377ac50 FUN_14377ac50 body=617 status=ok
// SIG undefined FUN_14377ac50(void)

void FUN_14377ac50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  uVar7 = uVar3;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      FUN_14377aec0(*(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0x48)));
      uVar5 = (int)uVar7 + 1;
      uVar3 = uVar3 + 8;
      uVar7 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x50));
  }
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x140,uVar2);
  iVar1 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x140);
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x130,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x130);
  FUN_14373bf70(param_1 + 0x118);
  FUN_14373bf70(param_1 + 0xe8);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xe4)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0xd8),8,*(uint *)(param_1 + 0xe4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xd4)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 200),0x20,*(uint *)(param_1 + 0xd4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc4)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0xb8),0x20,*(uint *)(param_1 + 0xc4) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0xa8,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xa8);
  *(undefined ***)(param_1 + 0x78) = hkReflect::Detail::AllocationImpl::vftable;
  uVar2 = FUN_143703a50();
  iVar6 = *(int *)(param_1 + 0x70) + -1;
  if (-1 < iVar6) {
    lVar4 = *(longlong *)(param_1 + 0x68) + (longlong)iVar6 * 8;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x74)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x68),8,*(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x58,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x58);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x48),8,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  FUN_143736600(param_1);
  return;
}



// FUNCTION 14377aec0 FUN_14377aec0 body=314 status=ok
// SIG undefined FUN_14377aec0(void)

void FUN_14377aec0(longlong param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_1437152e0(*(undefined2 *)(*(longlong *)(param_1 + 0x60) + 8));
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    FUN_143702c60(*(undefined8 *)((longlong)pvVar2 + 0x58),uVar3,1,uVar1);
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x50),0x10,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x30),8,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}



// FUNCTION 14377b000 FUN_14377b000 body=104 status=ok
// SIG undefined FUN_14377b000(void)

void FUN_14377b000(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong local_18;
  longlong local_10;
  
  FUN_14377a880(&local_18);
  local_18 = param_1 + 0xb8;
  local_10 = param_1 + 0x118;
  puVar2 = (undefined8 *)FUN_143714490(param_2,1);
  uVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  (*(code *)(&DAT_146b84330)[uVar1 & 0xf])(&local_18,param_2);
  return;
}



// FUNCTION 14377b070 FUN_14377b070 body=78 status=ok
// SIG undefined FUN_14377b070(void)

void FUN_14377b070(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0x40),8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 8) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}



// FUNCTION 14377b0c0 FUN_14377b0c0 body=81 status=ok
// SIG undefined FUN_14377b0c0(void)

void FUN_14377b0c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xe0) == (*(uint *)(param_1 + 0xe4) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0xd8),8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(param_1 + 0xe0) * 8) = param_2;
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  return;
}



// FUNCTION 14377b120 FUN_14377b120 body=78 status=ok
// SIG undefined FUN_14377b120(void)

void FUN_14377b120(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0x30),8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8) = param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}



// FUNCTION 14377b170 FUN_14377b170 body=146 status=ok
// SIG undefined FUN_14377b170(void)

void FUN_14377b170(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(longlong **)(param_1 + 0x18) = param_2;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    iVar2 = (int)param_2[2];
    lVar3 = *param_2;
  }
  else {
    iVar2 = *(int *)((longlong)param_2 + 0x14);
  }
  FUN_14373c2f0(param_1,lVar3,(longlong)iVar2);
  iVar2 = (int)param_2[4] + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = lVar3 << 4;
    do {
      if ((*(int *)(lVar4 + param_2[3]) == 7) &&
         (puVar1 = *(undefined8 **)(lVar4 + 8 + param_2[3]), puVar1 != (undefined8 *)0x0)) {
        FUN_14373c2f0(param_1,*puVar1,(longlong)*(int *)(puVar1 + 1));
      }
      lVar4 = lVar4 + -0x10;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}


