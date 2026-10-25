// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143450bb0 FUN_143450bb0 body=726 status=ok
// SIG undefined FUN_143450bb0(void)

longlong * FUN_143450bb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar3 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar3;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar4 = puVar2[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143450810;
    lVar4 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar4;
    *puVar2 = &PTR_LAB_145b0dad0;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xd0,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_14344fd10(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,0x10,&local_res8);
  local_40[0] = *param_1;
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  (**(code **)(*plVar7 + 0x50))
            (plVar7,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1b8,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 143450e90 FUN_143450e90 body=701 status=ok
// SIG undefined FUN_143450e90(void)

void FUN_143450e90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)(param_1 + 0xe8);
  plVar1 = (longlong *)(param_2 + 0x20);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "redMultiplier",0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "greenMultiplier",0xf);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x20);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "blueMultiplier",0xe);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x40);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "alphaMultiplier",0xf);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x60);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "redOffset",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x80);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "greenOffset",0xb);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0xa0);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "blueOffset",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0xc0);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             "alphaOffset",0xb);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0xe0);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143451160 FUN_143451160 body=158 status=ok
// SIG undefined FUN_143451160(void)

ulonglong FUN_143451160(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0)) {
    uVar1 = param_1[1];
    if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0)) {
      uVar1 = param_1[2];
      if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0))
      {
        uVar1 = param_1[3];
        if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0)
           ) {
          return CONCAT71((int7)(uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143451210 FUN_143451210 body=205 status=ok
// SIG undefined FUN_143451210(void)

undefined8 * FUN_143451210(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_1434148b0();
  puVar2 = (undefined8 *)(param_2 + 0xe8);
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0db58;
  uVar1 = FUN_14341b750(*puVar2,0xf);
  FUN_1434a4d00(param_1 + 4,puVar2,uVar1);
  FUN_1434a4640(param_1 + 4,puVar2,&DAT_145b09ac8,&DAT_1467cf740);
  FUN_1434a4640(param_1 + 4,puVar2,&DAT_145b09acc,&DAT_1467cf760);
  FUN_1434a4640(param_1 + 4,puVar2,"width",&DAT_1467cf780);
  FUN_1434a4640(param_1 + 4,puVar2,"height",&DAT_1467cf7a0);
  return param_1;
}



// FUNCTION 1434512f0 FUN_1434512f0 body=368 status=ok
// SIG undefined FUN_1434512f0(void)

void FUN_1434512f0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09ac8,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09acc,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x20);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),"width"
                             ,5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x40);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             "height",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x60);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143451470 FUN_143451470 body=124 status=ok
// SIG undefined FUN_143451470(void)

void FUN_143451470(longlong param_1,undefined8 param_2,longlong param_3)

{
  param_1 = param_1 + 0x20;
  FUN_1434a4640(param_1,param_2,&DAT_145b09ac8,param_3);
  FUN_1434a4640(param_1,param_2,&DAT_145b09acc,param_3 + 0x20);
  FUN_1434a4640(param_1,param_2,"width",param_3 + 0x40);
  FUN_1434a4640(param_1,param_2,"height",param_3 + 0x60);
  return;
}



// FUNCTION 143451500 FUN_143451500 body=624 status=ok
// SIG undefined FUN_143451500(void)

void FUN_143451500(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  longlong local_res8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  byte local_68 [32];
  byte local_48 [48];
  
  plVar3 = (longlong *)(param_2 + 0xe8);
  puVar9 = local_c8;
  lVar8 = 4;
  lVar6 = 4;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 0x20;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar1 = (longlong *)(param_1 + 0x20);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09ac8,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_c8);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09acc,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_a8);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),"width",
                             5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_88);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),"height"
                             ,6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_68);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  dVar5 = (double)FUN_143411a90(local_68,param_2);
  dVar4 = (double)FUN_143411a90(local_88,param_2);
  dVar10 = (double)FUN_143411a90(local_a8,param_2);
  dVar11 = (double)FUN_143411a90(local_c8,param_2);
  param_3[1] = dVar10;
  *param_3 = dVar11;
  pbVar7 = local_48;
  param_3[2] = dVar4 + dVar11;
  param_3[3] = dVar10 + dVar5;
  do {
    pbVar7 = pbVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (4 < *pbVar7) {
      FUN_143411150(pbVar7);
    }
  } while (lVar8 != 0);
  return;
}



// FUNCTION 143451780 FUN_143451780 body=538 status=ok
// SIG undefined FUN_143451780(void)

void FUN_143451780(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  double local_30;
  
  local_30 = *param_3;
  plVar3 = (longlong *)(param_2 + 0xe8);
  plVar1 = (longlong *)(param_1 + 0x20);
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09ac8,1);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,plVar3,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = param_3[1];
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09acc,1);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,plVar3,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = param_3[2] - *param_3;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),"width"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,plVar3,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = param_3[3] - param_3[1];
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              "height",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,plVar3,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return;
}



// FUNCTION 1434519a0 FUN_1434519a0 body=945 status=ok
// SIG undefined FUN_1434519a0(void)

undefined8 FUN_1434519a0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *_Str1;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar4 = 0;
  _Str1 = *(char **)*param_3;
  lVar3 = lVar4;
  do {
    lVar8 = lVar3 + 1;
    lVar7 = lVar4;
    if (_Str1[lVar3] != (&DAT_145b068ec)[lVar3]) goto LAB_143451a50;
    lVar3 = lVar8;
  } while (lVar8 != 5);
  local_38 = 0;
  FUN_143451500(param_1 + -4,param_2,&local_38);
  uVar9 = (undefined4)local_38;
  uVar10 = (undefined4)((ulonglong)local_38 >> 0x20);
  goto LAB_143451a0f;
  while (lVar7 = lVar8, lVar8 != 6) {
LAB_143451a50:
    lVar8 = lVar7 + 1;
    lVar3 = lVar4;
    if (_Str1[lVar7] != "right"[lVar7]) goto LAB_143451a90;
  }
  local_28 = 0;
  FUN_143451500(param_1 + -4,param_2,&local_38);
  uVar9 = (undefined4)local_28;
  uVar10 = (undefined4)((ulonglong)local_28 >> 0x20);
  goto LAB_143451a0f;
  while (lVar3 = lVar8, lVar8 != 4) {
LAB_143451a90:
    lVar8 = lVar3 + 1;
    lVar7 = lVar4;
    if (_Str1[lVar3] != (&DAT_145b1237c)[lVar3]) goto LAB_143451ad0;
  }
  uStack_30 = 0;
  FUN_143451500(param_1 + -4,param_2,&local_38);
  uVar9 = (undefined4)uStack_30;
  uVar10 = (undefined4)((ulonglong)uStack_30 >> 0x20);
  goto LAB_143451a0f;
LAB_143451b10:
  while (lVar7 = lVar3 + 1, _Str1[lVar3] == "topLeft"[lVar3]) {
    lVar3 = lVar7;
    if (lVar7 == 8) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_143451500(param_1 + -4,param_2,&local_38);
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
      lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
      if (lVar3 != 0) {
        lVar4 = FUN_143457200(lVar3,param_2);
      }
      local_58 = local_38;
      uStack_50 = uStack_30;
      FUN_143457670(lVar4,param_2,&local_58);
      FUN_143410c00(&local_38,lVar4);
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80(lVar4);
      }
      FUN_143411240(param_4,&local_38);
      if ((byte)local_38 < 5) {
        return 1;
      }
      FUN_143411150(&local_38);
      return 1;
    }
  }
  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"bottomRight");
  if (iVar2 == 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_143451500(param_1 + -4,param_2,&local_38);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
    if (lVar3 != 0) {
      lVar4 = FUN_143457200(lVar3,param_2);
    }
    local_58 = local_28;
    uStack_50 = uStack_20;
    FUN_143457670(lVar4,param_2,&local_58);
    FUN_143410c00(&local_38,lVar4);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
    FUN_143411240(param_4,&local_38);
    if ((byte)local_38 < 5) {
      return 1;
    }
    FUN_143411150(&local_38);
    return 1;
  }
  do {
    lVar3 = lVar4 + 1;
    if (_Str1[lVar4] != (&DAT_145b1368c)[lVar4]) {
      uVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
      return uVar6;
    }
    lVar4 = lVar3;
  } while (lVar3 != 5);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_143451500(param_1 + -4,param_2,&local_58);
  local_38 = local_58;
  local_28 = local_48;
  uStack_30 = uStack_50;
  uStack_20 = uStack_40;
  puVar5 = (undefined8 *)FUN_1434a2ac0(&local_58,param_2,&local_38);
  goto LAB_143451a1c;
  while (lVar7 = lVar8, lVar8 != 7) {
LAB_143451ad0:
    lVar8 = lVar7 + 1;
    lVar3 = lVar4;
    if (_Str1[lVar7] != "bottom"[lVar7]) goto LAB_143451b10;
  }
  uStack_20 = 0;
  FUN_143451500(param_1 + -4,param_2,&local_38);
  uVar9 = (undefined4)uStack_20;
  uVar10 = (undefined4)((ulonglong)uStack_20 >> 0x20);
LAB_143451a0f:
  uStack_50 = CONCAT44(uVar10,uVar9);
  puVar5 = &local_58;
  local_58 = CONCAT71(local_58._1_7_,3);
LAB_143451a1c:
  FUN_143411240(param_4,puVar5);
  if (4 < (byte)local_58) {
    FUN_143411150(&local_58);
  }
  return 1;
}



// FUNCTION 143451d60 FUN_143451d60 body=814 status=ok
// SIG undefined FUN_143451d60(void)

undefined8
FUN_143451d60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             byte *param_5)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*param_5 & 4) != 0) {
    return 0;
  }
  lVar6 = 0;
  _Str1 = *(char **)*param_3;
  lVar2 = lVar6;
  do {
    lVar4 = lVar2 + 1;
    lVar5 = lVar6;
    if (_Str1[lVar2] != (&DAT_145b068ec)[lVar2]) goto LAB_143451e10;
    lVar2 = lVar4;
  } while (lVar4 != 5);
  uStack_30 = 0.0;
  uStack_40 = 0.0;
  uStack_38 = 0.0;
  FUN_143451500(param_1 + -0x20,param_2,&local_48);
  local_48 = (double)FUN_143411a90(param_4,param_2);
  goto LAB_14345203e;
  while (lVar5 = lVar4, lVar4 != 4) {
LAB_143451e10:
    lVar4 = lVar5 + 1;
    lVar2 = lVar6;
    if (_Str1[lVar5] != (&DAT_145b1237c)[lVar5]) goto LAB_143451e61;
  }
  local_48 = 0.0;
  uStack_38 = 0.0;
  uStack_30 = 0.0;
  FUN_143451500(param_1 + -0x20,param_2,&local_48);
  uStack_40 = (double)FUN_143411a90(param_4,param_2);
  goto LAB_14345203e;
  while (lVar2 = lVar4, lVar4 != 6) {
LAB_143451e61:
    lVar4 = lVar2 + 1;
    lVar5 = lVar6;
    if (_Str1[lVar2] != "right"[lVar2]) goto LAB_143451eb0;
  }
  uStack_30 = 0.0;
  local_48 = 0.0;
  uStack_40 = 0.0;
  FUN_143451500(param_1 + -0x20,param_2,&local_48);
  uStack_38 = (double)FUN_143411a90(param_4,param_2);
  goto LAB_14345203e;
  while (lVar5 = lVar4, lVar4 != 7) {
LAB_143451eb0:
    lVar4 = lVar5 + 1;
    lVar2 = lVar6;
    if (_Str1[lVar5] != "bottom"[lVar5]) goto LAB_143451f00;
  }
  uStack_38 = 0.0;
  local_48 = 0.0;
  uStack_40 = 0.0;
  FUN_143451500(param_1 + -0x20,param_2,&local_48);
  uStack_30 = (double)FUN_143411a90(param_4,param_2);
  goto LAB_14345203e;
  while (lVar2 = lVar5, lVar5 != 8) {
LAB_143451f00:
    lVar5 = lVar2 + 1;
    if (_Str1[lVar2] != "topLeft"[lVar2]) {
      iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"bottomRight");
      if (iVar1 == 0) {
        local_48 = 0.0;
        uStack_40 = 0.0;
        uStack_38 = 0.0;
        uStack_30 = 0.0;
        FUN_143451500(param_1 + -0x20,param_2,&local_48);
        lVar2 = FUN_143412120(param_4,param_2);
        if (lVar2 != 0) {
          FUN_1434570f0(param_2,lVar2,&local_58);
          uStack_38 = (double)CONCAT44(uStack_54,local_58);
          uStack_30 = (double)CONCAT44(uStack_4c,uStack_50);
        }
      }
      else {
        do {
          lVar2 = lVar6 + 1;
          if (_Str1[lVar6] != (&DAT_145b1368c)[lVar6]) {
            uVar3 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
            return uVar3;
          }
          lVar6 = lVar2;
        } while (lVar2 != 5);
        local_48 = 0.0;
        uStack_40 = 0.0;
        uStack_38 = 0.0;
        uStack_30 = 0.0;
        FUN_143451500(param_1 + -0x20,param_2,&local_48);
        lVar2 = FUN_143412120(param_4,param_2);
        if (lVar2 != 0) {
          FUN_1434570f0(param_2,lVar2,&local_58);
          uStack_30 = uStack_40 + (double)CONCAT44(uStack_4c,uStack_50);
          uStack_38 = (double)CONCAT44(uStack_54,local_58) + local_48;
        }
      }
      goto LAB_14345203e;
    }
  }
  local_48 = 0.0;
  uStack_40 = 0.0;
  uStack_38 = 0.0;
  uStack_30 = 0.0;
  FUN_143451500(param_1 + -0x20,param_2,&local_48);
  lVar2 = FUN_143412120(param_4,param_2);
  if (lVar2 != 0) {
    FUN_1434570f0(param_2,lVar2,&local_58);
    local_48 = (double)CONCAT44(uStack_54,local_58);
    uStack_40 = (double)CONCAT44(uStack_4c,uStack_50);
  }
LAB_14345203e:
  FUN_143451780(param_1 + -0x20,param_2,&local_48);
  return 1;
}



// FUNCTION 1434520a0 FUN_1434520a0 body=930 status=ok
// SIG undefined FUN_1434520a0(void)

undefined8 * FUN_1434520a0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined4 local_30;
  
  FUN_143495960();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b0dc00;
  param_1[4] = &PTR_LAB_145b0dc48;
  param_1[0xd] = &PTR_LAB_145b0dcf0;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_clone_145b08790,local_res8);
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b068ec,4,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1237c,3);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "right",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "bottom",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "topLeft",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "bottomRight",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1368c,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return param_1;
}



// FUNCTION 143452450 FUN_143452450 body=456 status=ok
// SIG undefined FUN_143452450(void)

void FUN_143452450(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  puVar5 = auStack_a8;
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x11) {
      lVar4 = 0;
      lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = lVar4;
      }
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68,0);
      if (lVar3 != 0) {
        lVar4 = FUN_143451210(lVar3,*(undefined8 *)(param_1 + 0x30));
      }
      lVar7 = 4;
      lVar3 = 4;
      do {
        puVar5 = puVar5 + 0x20;
        *puVar5 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      FUN_1434512f0(lVar8,*(longlong *)(param_1 + 0x30) + 0xe8,local_88);
      lVar8 = *(longlong *)(param_1 + 0x30) + 0xe8;
      FUN_1434a4640(lVar4 + 0x20,lVar8,&DAT_145b09ac8,local_88);
      FUN_1434a4640(lVar4 + 0x20,lVar8,&DAT_145b09acc,local_68);
      FUN_1434a4640(lVar4 + 0x20,lVar8,"width",local_48);
      FUN_1434a4640(lVar4 + 0x20,lVar8,"height",local_28);
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
      pbVar6 = &stack0xfffffffffffffff8;
      do {
        pbVar6 = pbVar6 + -0x20;
        lVar7 = lVar7 + -1;
        if (4 < *pbVar6) {
          FUN_143411150(pbVar6);
        }
      } while (lVar7 != 0);
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 143452620 FUN_143452620 body=592 status=ok
// SIG undefined FUN_143452620(void)

void FUN_143452620(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  byte local_58 [32];
  byte local_38 [48];
  
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    lVar4 = 0;
    lVar6 = lVar5;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    FUN_143410ec0(local_38,lVar6);
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    lVar6 = lVar5;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    FUN_143410ec0(local_58,lVar6);
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x11)) {
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                    "Rectangle");
    }
    else {
      local_78 = 0.0;
      dStack_70 = 0.0;
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = lVar5;
      }
      local_68 = 0.0;
      dStack_60 = 0.0;
      FUN_143451500(lVar3,*(undefined8 *)(param_1 + 0x30),&local_78);
      dVar8 = (double)FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30));
      dVar9 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
      if (((((uint)((ulonglong)dVar8 >> 0x20) & 0x7ff00000) != 0x7ff00000) ||
          (((ulonglong)dVar8 & 0xfffffffffffff) == 0)) &&
         ((((uint)((ulonglong)dVar9 >> 0x20) & 0x7ff00000) != 0x7ff00000 ||
          (((ulonglong)dVar9 & 0xfffffffffffff) == 0)))) {
        if (dVar8 == local_68) {
          dVar8 = dVar8 + 1.0;
        }
        if (dVar9 == dStack_60) {
          dVar9 = dVar9 + 1.0;
        }
        if ((((dVar8 <= local_68) && (lVar5 = lVar4, local_78 <= dVar8)) && (dVar9 <= dStack_60)) &&
           (dStack_70 <= dVar9)) {
          lVar5 = 1;
        }
      }
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      *puVar1 = 2;
      puVar1[8] = (char)lVar5;
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    return;
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 2;
  puVar1[8] = 0;
  return;
}



// FUNCTION 143452880 FUN_143452880 body=756 status=ok
// SIG undefined FUN_143452880(void)

void FUN_143452880(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  char local_78 [32];
  byte local_58 [32];
  byte local_38 [32];
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar11 = 0;
    lVar7 = lVar11;
    if (uVar1 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar5 = FUN_143412120(lVar7,lVar5);
    if (lVar5 != 0) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x11)) {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                      "Rectangle");
      }
      else {
        pcVar8 = local_78;
        lVar10 = 2;
        lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar7 = lVar11;
        }
        lVar6 = 2;
        local_98 = 0.0;
        dStack_90 = 0.0;
        local_88 = 0.0;
        dStack_80 = 0.0;
        do {
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        FUN_143451500(lVar7,*(undefined8 *)(param_1 + 0x30),&local_98);
        lVar7 = *(longlong *)(param_1 + 0x30);
        (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                  (lVar5 + 0x20,lVar7 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) + 0x540,
                   local_78);
        (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                  (lVar5 + 0x20,lVar7 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) + 0x548,
                   local_58);
        iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20);
        if ((iVar4 == 0x10) ||
           ((((local_78[0] != '\0' && (local_78[0] != '\n')) && (local_58[0] != 0)) &&
            (local_58[0] != 10)))) {
          FUN_143457560(lVar5,*(undefined8 *)(param_1 + 0x30),&local_a8);
          cVar3 = Scaleform::GFx::NumberUtil::IsNaN(SUB84(local_a8,0));
          if ((cVar3 == '\0') &&
             (cVar3 = Scaleform::GFx::NumberUtil::IsNaN(SUB84(local_a0,0)), cVar3 == '\0')) {
            if (local_a8 == local_88) {
              local_a8 = local_a8 + 1.0;
            }
            if (local_a0 == dStack_80) {
              local_a0 = local_a0 + 1.0;
            }
            if (((local_a8 <= local_88) && (local_98 <= local_a8)) &&
               ((local_a0 <= dStack_80 && (lVar11 = 0, dStack_90 <= local_a0)))) {
              lVar11 = 1;
            }
            puVar2 = *(undefined1 **)(param_1 + 8);
            FUN_143411150(puVar2);
            *puVar2 = 2;
            puVar2[8] = (char)lVar11;
            pbVar9 = local_38;
            do {
              pbVar9 = pbVar9 + -0x20;
              lVar10 = lVar10 + -1;
              if (4 < *pbVar9) {
                FUN_143411150(pbVar9);
              }
            } while (lVar10 != 0);
            return;
          }
          puVar2 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar2);
          *puVar2 = 2;
          puVar2[8] = 0;
        }
        pbVar9 = local_38;
        do {
          pbVar9 = pbVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (4 < *pbVar9) {
            FUN_143411150(pbVar9);
          }
        } while (lVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143452b80 FUN_143452b80 body=662 status=ok
// SIG undefined FUN_143452b80(void)

void FUN_143452b80(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  char local_b8 [32];
  char local_98 [32];
  char local_78 [32];
  byte local_58 [32];
  byte local_38 [48];
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar11 = 0;
    lVar8 = lVar11;
    if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar6 = FUN_143412120(lVar8,lVar6);
    if (lVar6 != 0) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x11)) {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                      "Rectangle");
      }
      else {
        pcVar9 = local_b8;
        lVar12 = 4;
        lVar7 = 4;
        lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar8 = lVar11;
        }
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        local_c8 = 0.0;
        dStack_c0 = 0.0;
        do {
          *pcVar9 = '\0';
          pcVar9 = pcVar9 + 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        FUN_143451500(lVar8,*(undefined8 *)(param_1 + 0x30),&local_d8);
        FUN_14349f980(*(undefined8 *)(param_1 + 0x30),lVar6,local_b8);
        if ((((local_b8[0] == '\0') || (local_b8[0] == '\n')) || (local_98[0] == '\0')) ||
           (((local_98[0] == '\n' || (local_78[0] == '\0')) ||
            ((local_78[0] == '\n' || ((local_58[0] == 0 || (local_58[0] == 10)))))))) {
          pbVar10 = local_38;
          do {
            pbVar10 = pbVar10 + -0x20;
            lVar12 = lVar12 + -1;
            if (4 < *pbVar10) {
              FUN_143411150(pbVar10);
            }
          } while (lVar12 != 0);
        }
        else {
          dVar4 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
          dVar3 = (double)FUN_143411a90(local_78,*(undefined8 *)(param_1 + 0x30));
          dVar13 = (double)FUN_143411a90(local_98,*(undefined8 *)(param_1 + 0x30));
          dVar14 = (double)FUN_143411a90(local_b8,*(undefined8 *)(param_1 + 0x30));
          if ((((dVar3 + dVar14 <= local_c8) && (dVar13 + dVar4 <= dStack_c0)) &&
              (local_d8 <= dVar14)) && (lVar11 = 0, dStack_d0 <= dVar13)) {
            lVar11 = 1;
          }
          puVar2 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar2);
          *puVar2 = 2;
          puVar2[8] = (char)lVar11;
          pbVar10 = local_38;
          do {
            pbVar10 = pbVar10 + -0x20;
            lVar12 = lVar12 + -1;
            if (4 < *pbVar10) {
              FUN_143411150(pbVar10);
            }
          } while (lVar12 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 143452e20 FUN_143452e20 body=443 status=ok
// SIG undefined FUN_143452e20(void)

void FUN_143452e20(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar6 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar5 = FUN_143412120(lVar6,lVar5);
    if ((lVar5 != 0) &&
       (iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar4 == 0x11)) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x11)) {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                      "Rectangle");
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x10);
      *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
      lVar7 = lVar6 + -0x20;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      local_48 = 0.0;
      dStack_40 = 0.0;
      local_38 = 0.0;
      dStack_30 = 0.0;
      local_28 = 0.0;
      dStack_20 = 0.0;
      local_18 = 0.0;
      dStack_10 = 0.0;
      FUN_143451500(lVar7,*(undefined8 *)(param_1 + 0x30),&local_48);
      FUN_143451500(lVar5,*(undefined8 *)(param_1 + 0x30),&local_28);
      cVar3 = FUN_143451160(&local_48);
      uVar8 = 0;
      if ((cVar3 != '\0') && (cVar3 = FUN_143451160(&local_28), cVar3 != '\0')) {
        if ((local_48 == local_28) &&
           (((local_38 == local_18 && (dStack_40 == dStack_20)) && (dStack_30 == dStack_10)))) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
      }
      if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
        FUN_1434a2b80(lVar5);
      }
    }
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = uVar8;
  return;
}



// FUNCTION 143452ff0 FUN_143452ff0 body=520 status=ok
// SIG undefined FUN_143452ff0(void)

void FUN_143452ff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  byte local_58 [32];
  byte local_38 [48];
  
  lVar4 = 0;
  local_38[0] = 0;
  local_58[0] = 0;
  bVar5 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x3c);
    lVar2 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar2 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    FUN_143411240(local_38,lVar2);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(int *)(param_1 + 0x3c) - 1;
      lVar2 = lVar4;
      if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar2 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      FUN_143411240(local_58,lVar2);
      bVar5 = local_58[0];
    }
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x11) {
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = lVar4;
      }
      local_78 = 0.0;
      dStack_70 = 0.0;
      local_68 = 0.0;
      dStack_60 = 0.0;
      FUN_143451500(lVar3,*(undefined8 *)(param_1 + 0x30),&local_78);
      dVar7 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
      dVar8 = (double)FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30));
      local_78 = local_78 - dVar8;
      local_68 = local_68 + dVar8;
      dStack_70 = dStack_70 - dVar7;
      dStack_60 = dStack_60 + dVar7;
      FUN_143451780(lVar3,*(undefined8 *)(param_1 + 0x30),&local_78);
      goto LAB_1434531b7;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
LAB_1434531b7:
  if (4 < bVar5) {
    FUN_143411150(local_58);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return;
}



// FUNCTION 143453200 FUN_143453200 body=468 status=ok
// SIG undefined FUN_143453200(void)

void FUN_143453200(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double local_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x11)) {
    lVar5 = 0;
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = lVar5;
    }
    if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar3 = FUN_143412120(lVar5);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x30) + 0xe8;
      FUN_1434a4640(lVar4 + 0x20,lVar3,&DAT_145b09ac8,&DAT_146b745d0);
      FUN_1434a4640(lVar4 + 0x20,lVar3,&DAT_145b09acc,&DAT_146b745f0);
      FUN_1434a4640(lVar4 + 0x20,lVar3,"width",&DAT_146b74610);
      FUN_1434a4640(lVar4 + 0x20,lVar3,"height",&DAT_146b74630);
      return;
    }
    local_28 = 0.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
    dStack_10 = 0.0;
    FUN_143451500(lVar4,*(undefined8 *)(param_1 + 0x30),&local_28);
    FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar3,&local_38);
    local_28 = local_28 - local_38;
    local_18 = local_18 + local_38;
    dStack_20 = dStack_20 - local_30;
    dStack_10 = dStack_10 + local_30;
    FUN_143451780(lVar4,*(undefined8 *)(param_1 + 0x30),&local_28);
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 1434533e0 FUN_1434533e0 body=974 status=ok
// SIG undefined FUN_1434533e0(void)

void FUN_1434533e0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  byte local_98 [32];
  byte local_78 [96];
  
  pbVar10 = local_78;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 0x11)) {
    lVar9 = 0;
    lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = lVar9;
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar7 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      lVar13 = lVar9;
      if (uVar1 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar13 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      lVar7 = FUN_143412120(lVar13);
      if (lVar7 != 0) {
        puVar12 = local_f8;
        lVar11 = 4;
        lVar13 = 4;
        local_138 = 0.0;
        dStack_130 = 0.0;
        local_128 = 0.0;
        dStack_120 = 0.0;
        do {
          *puVar12 = 0;
          puVar12 = puVar12 + 0x20;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        FUN_143451500(lVar8,*(undefined8 *)(param_1 + 0x30),&local_138);
        FUN_14349f980(*(undefined8 *)(param_1 + 0x30),lVar7,local_f8);
        dVar3 = (double)FUN_143411a90(local_98,*(undefined8 *)(param_1 + 0x30));
        dVar4 = (double)FUN_143411a90(local_b8,*(undefined8 *)(param_1 + 0x30));
        dVar14 = (double)FUN_143411a90(local_d8,*(undefined8 *)(param_1 + 0x30));
        dVar15 = (double)FUN_143411a90(local_f8,*(undefined8 *)(param_1 + 0x30));
        dVar4 = dVar4 + dVar15;
        dVar3 = dVar14 + dVar3;
        local_118 = dVar15;
        local_110 = dVar14;
        local_108 = dVar4;
        local_100 = dVar3;
        cVar5 = FUN_143451160(&local_118);
        if (cVar5 == '\0') {
          local_158 = 0.0;
          dStack_150 = 0.0;
          local_148 = 0.0;
          dStack_140 = 0.0;
        }
        else {
          if ((((dVar14 <= dStack_120) && (dStack_130 <= dVar3)) && (local_138 <= dVar4)) &&
             (dVar15 <= local_128)) {
            local_158 = dVar15;
            if (dVar15 < local_138) {
              local_158 = local_138;
            }
            local_148 = local_128;
            if (dVar4 < local_128) {
              local_148 = dVar4;
            }
            dStack_150 = dStack_130;
            if (dStack_130 <= dVar14) {
              dStack_150 = dVar14;
            }
            dStack_140 = dVar3;
            if (dStack_120 <= dVar3) {
              dStack_140 = dStack_120;
            }
          }
          dVar15 = dStack_140;
          dVar14 = local_148;
          dVar4 = dStack_150;
          dVar3 = local_158;
          cVar5 = FUN_143451160(&local_158);
          if (((cVar5 == '\0') || (dVar14 - dVar3 == 0.0)) || (dVar15 - dVar4 == 0.0)) {
            local_158 = 0.0;
            dStack_150 = 0.0;
            local_148 = 0.0;
            dStack_140 = 0.0;
          }
        }
        do {
          pbVar10 = pbVar10 + -0x20;
          lVar11 = lVar11 + -1;
          if (4 < *pbVar10) {
            FUN_143411150(pbVar10);
          }
        } while (lVar11 != 0);
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
    if (lVar8 != 0) {
      lVar9 = FUN_143451210(lVar8,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_143451780(lVar9,*(undefined8 *)(param_1 + 0x30),&local_158);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar9);
    if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
      FUN_1434a2b80(lVar9);
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 1434537c0 FUN_1434537c0 body=822 status=ok
// SIG undefined FUN_1434537c0(void)

void FUN_1434537c0(longlong param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 uVar12;
  double dVar13;
  double dVar14;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  byte local_98 [32];
  byte local_78 [96];
  
  pbVar8 = local_78;
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x11)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle")
    ;
    return;
  }
  lVar11 = 0;
  lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar7 = lVar11;
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0x38) < 1) goto LAB_143453aa9;
  lVar6 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
    lVar11 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  lVar11 = FUN_143412120(lVar11);
  uVar12 = 0;
  if (lVar11 == 0) goto LAB_143453aa9;
  puVar10 = local_f8;
  lVar9 = 4;
  lVar6 = 4;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 0x20;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_143451500(lVar7,*(undefined8 *)(param_1 + 0x30),&local_138);
  FUN_14349f980(*(undefined8 *)(param_1 + 0x30),lVar11,local_f8);
  dVar2 = (double)FUN_143411a90(local_98,*(undefined8 *)(param_1 + 0x30));
  dVar3 = (double)FUN_143411a90(local_b8,*(undefined8 *)(param_1 + 0x30));
  dVar13 = (double)FUN_143411a90(local_d8,*(undefined8 *)(param_1 + 0x30));
  dVar14 = (double)FUN_143411a90(local_f8,*(undefined8 *)(param_1 + 0x30));
  dVar3 = dVar3 + dVar14;
  dVar2 = dVar13 + dVar2;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_118 = dVar14;
  local_110 = dVar13;
  local_108 = dVar3;
  local_100 = dVar2;
  cVar4 = FUN_143451160(&local_138);
  if ((cVar4 == '\0') || (cVar4 = FUN_143451160(&local_118), cVar4 == '\0')) {
LAB_143453a41:
    uVar12 = 0;
  }
  else {
    if ((dVar13 <= dStack_120) &&
       (((dStack_130 <= dVar2 && (local_138 <= dVar3)) && (dVar14 <= local_128)))) {
      local_158 = local_138;
      if (local_138 <= dVar14) {
        local_158 = dVar14;
      }
      local_148 = dVar3;
      if (local_128 <= dVar3) {
        local_148 = local_128;
      }
      dStack_150 = dStack_130;
      if (dStack_130 <= dVar13) {
        dStack_150 = dVar13;
      }
      dStack_140 = dVar2;
      if (dStack_120 <= dVar2) {
        dStack_140 = dStack_120;
      }
    }
    dVar14 = dStack_140;
    dVar13 = local_148;
    dVar3 = dStack_150;
    dVar2 = local_158;
    uVar12 = 1;
    cVar4 = FUN_143451160(&local_158);
    if (((cVar4 == '\0') || (dVar13 - dVar2 == 0.0)) || (dVar14 - dVar3 == 0.0)) goto LAB_143453a41;
  }
  do {
    pbVar8 = pbVar8 + -0x20;
    lVar9 = lVar9 + -1;
    if (4 < *pbVar8) {
      FUN_143411150(pbVar8);
    }
  } while (lVar9 != 0);
LAB_143453aa9:
  puVar10 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar10);
  puVar10[8] = uVar12;
  *puVar10 = 2;
  return;
}



// FUNCTION 143453b00 FUN_143453b00 body=474 status=ok
// SIG undefined FUN_143453b00(void)

void FUN_143453b00(longlong param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  byte local_38 [32];
  byte local_18 [16];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 0x11)) {
    lVar9 = 4;
    lVar4 = 4;
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    puVar6 = local_98;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    FUN_1434512f0(lVar5,*(longlong *)(param_1 + 0x30) + 0xe8,local_98);
    uVar10 = FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
    if ((((uVar10 >> 0x20 & 0x7ff00000) == 0x7ff00000) && ((uVar10 & 0xfffffffffffff) != 0)) ||
       ((uVar10 = FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30)),
        (uVar10 >> 0x20 & 0x7ff00000) == 0x7ff00000 && ((uVar10 & 0xfffffffffffff) != 0)))) {
      uVar8 = 1;
    }
    else {
      FUN_143411a90(local_98,*(undefined8 *)(param_1 + 0x30));
      FUN_143411a90(local_78,*(undefined8 *)(param_1 + 0x30));
      dVar2 = (double)FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30));
      dVar1 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
      if ((dVar1 <= 0.0) || (dVar2 <= 0.0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
    }
    puVar6 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar6);
    puVar6[8] = uVar8;
    *puVar6 = 2;
    pbVar7 = local_18;
    do {
      pbVar7 = pbVar7 + -0x20;
      lVar9 = lVar9 + -1;
      if (4 < *pbVar7) {
        FUN_143411150(pbVar7);
      }
    } while (lVar9 != 0);
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 143453ce0 FUN_143453ce0 body=741 status=ok
// SIG undefined FUN_143453ce0(void)

void FUN_143453ce0(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  byte local_108 [8];
  double local_100;
  byte local_e8 [32];
  byte local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  byte local_48 [32];
  byte local_28 [16];
  
  pbVar6 = local_28;
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x11)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle")
    ;
    return;
  }
  lVar8 = 0;
  local_c8[0] = 0;
  local_e8[0] = 0;
  bVar10 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    lVar5 = lVar8;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    FUN_143411240(local_c8,lVar5);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      lVar5 = lVar8;
      if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar5 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      FUN_143411240(local_e8,lVar5);
      bVar10 = local_e8[0];
    }
  }
  puVar4 = local_a8;
  lVar7 = 4;
  lVar3 = 4;
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = 4;
    lVar5 = lVar8;
  }
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x20;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1434512f0(lVar5,*(longlong *)(param_1 + 0x30) + 0xe8,local_a8);
  local_108[0] = 3;
  dVar1 = (double)FUN_143411a90(local_a8,*(undefined8 *)(param_1 + 0x30));
  local_100 = (double)FUN_143411a90(local_c8,*(undefined8 *)(param_1 + 0x30));
  local_100 = dVar1 + local_100;
  FUN_143411240(local_a8,local_108);
  if (4 < local_108[0]) {
    FUN_143411150(local_108);
  }
  local_108[0] = 3;
  dVar1 = (double)FUN_143411a90(local_88,*(undefined8 *)(param_1 + 0x30));
  local_100 = (double)FUN_143411a90(local_e8,*(undefined8 *)(param_1 + 0x30));
  local_100 = dVar1 + local_100;
  FUN_143411240(local_88,local_108);
  if (4 < local_108[0]) {
    FUN_143411150(local_108);
  }
  lVar8 = *(longlong *)(param_1 + 0x30) + 0xe8;
  FUN_1434a4640(lVar5 + 0x20,lVar8,&DAT_145b09ac8,local_a8);
  FUN_1434a4640(lVar5 + 0x20,lVar8,&DAT_145b09acc,local_88);
  FUN_1434a4640(lVar5 + 0x20,lVar8,"width",local_68);
  FUN_1434a4640(lVar5 + 0x20,lVar8,"height",local_48);
  do {
    pbVar6 = pbVar6 + -0x20;
    lVar7 = lVar7 + -1;
    if (4 < *pbVar6) {
      FUN_143411150(pbVar6);
    }
  } while (lVar7 != 0);
  if (4 < bVar10) {
    FUN_143411150(local_e8);
  }
  if (local_c8[0] < 5) {
    return;
  }
  FUN_143411150(local_c8);
  return;
}



// FUNCTION 143453fd0 FUN_143453fd0 body=1216 status=ok
// SIG undefined FUN_143453fd0(void)

void FUN_143453fd0(longlong param_1)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte local_108 [8];
  double local_100;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  byte local_88 [32];
  byte local_68 [32];
  byte local_48 [32];
  byte local_28 [16];
  
  pbVar7 = local_28;
  if (0 < *(int *)(param_1 + 0x38)) {
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x11)) {
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                    "Rectangle");
      return;
    }
    lVar10 = 0;
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar11 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar11 = lVar10;
    }
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar10 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_143412120(lVar10);
    lVar12 = 4;
    puVar6 = local_e8;
    lVar10 = 4;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (lVar4 == 0) {
      FUN_1434512f0(lVar11,*(longlong *)(param_1 + 0x30) + 0xe8,local_e8);
      local_108[0] = 3;
      local_100 = (double)Scaleform::GFx::NumberUtil::NaN();
      FUN_143411240(local_e8,local_108);
      if (4 < local_108[0]) {
        FUN_143411150(local_108);
      }
      local_108[0] = 3;
      local_100 = (double)Scaleform::GFx::NumberUtil::NaN();
      FUN_143411240(local_c8,local_108);
      if (4 < local_108[0]) {
        FUN_143411150(local_108);
      }
      lVar4 = *(longlong *)(param_1 + 0x30) + 0xe8;
      FUN_1434a4640(lVar11 + 0x20,lVar4,&DAT_145b09ac8,local_e8);
      FUN_1434a4640(lVar11 + 0x20,lVar4,&DAT_145b09acc,local_c8);
      FUN_1434a4640(lVar11 + 0x20,lVar4,"width",local_a8);
      FUN_1434a4640(lVar11 + 0x20,lVar4,"height",local_88);
    }
    else {
      lVar8 = 2;
      pbVar5 = local_68;
      lVar10 = 2;
      do {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 0x20;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(param_1 + 0x30);
      plVar9 = (longlong *)(lVar4 + 0x20);
      (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x58))
                (plVar9,lVar10 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0xe8) + 0x28) + 0x18) + 0x540,
                 local_68);
      (**(code **)(*plVar9 + 0x58))
                (plVar9,lVar10 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0xe8) + 0x28) + 0x18) + 0x548,
                 local_48);
      iVar3 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((iVar3 == 0x10) ||
         ((((local_68[0] != 0 && (local_68[0] != 10)) && (local_48[0] != 0)) && (local_48[0] != 10))
         )) {
        FUN_1434512f0(lVar11,*(longlong *)(param_1 + 0x30) + 0xe8,local_e8);
        local_108[0] = 3;
        dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
        local_100 = (double)FUN_143411a90(local_e8,*(undefined8 *)(param_1 + 0x30));
        local_100 = dVar2 + local_100;
        FUN_143411240(local_e8,local_108);
        if (4 < local_108[0]) {
          FUN_143411150(local_108);
        }
        local_108[0] = 3;
        dVar2 = (double)FUN_143411a90(local_48,*(undefined8 *)(param_1 + 0x30));
        local_100 = (double)FUN_143411a90(local_c8,*(undefined8 *)(param_1 + 0x30));
        local_100 = dVar2 + local_100;
        FUN_143411240(local_c8,local_108);
        if (4 < local_108[0]) {
          FUN_143411150(local_108);
        }
        FUN_143451470(lVar11,*(longlong *)(param_1 + 0x30) + 0xe8,local_e8);
        do {
          pbVar7 = pbVar7 + -0x20;
          lVar8 = lVar8 + -1;
          if (4 < *pbVar7) {
            FUN_143411150(pbVar7);
          }
        } while (lVar8 != 0);
        pbVar7 = local_68;
        do {
          pbVar7 = pbVar7 + -0x20;
          lVar12 = lVar12 + -1;
          if (4 < *pbVar7) {
            FUN_143411150(pbVar7);
          }
        } while (lVar12 != 0);
        return;
      }
      FUN_1434512f0(lVar11,*(longlong *)(param_1 + 0x30) + 0xe8,local_e8);
      local_108[0] = 3;
      local_100 = (double)Scaleform::GFx::NumberUtil::NaN();
      FUN_143411240(local_e8,local_108);
      if (4 < local_108[0]) {
        FUN_143411150(local_108);
      }
      local_108[0] = 3;
      local_100 = (double)Scaleform::GFx::NumberUtil::NaN();
      FUN_143411240(local_c8,local_108);
      if (4 < local_108[0]) {
        FUN_143411150(local_108);
      }
      FUN_143451470(lVar11,*(longlong *)(param_1 + 0x30) + 0xe8,local_e8);
      do {
        pbVar7 = pbVar7 + -0x20;
        lVar8 = lVar8 + -1;
        if (4 < *pbVar7) {
          FUN_143411150(pbVar7);
        }
      } while (lVar8 != 0);
    }
    pbVar7 = local_68;
    do {
      pbVar7 = pbVar7 + -0x20;
      lVar12 = lVar12 + -1;
      if (4 < *pbVar7) {
        FUN_143411150(pbVar7);
      }
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1434544a0 FUN_1434544a0 body=110 status=ok
// SIG undefined FUN_1434544a0(void)

void FUN_1434544a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x11) {
      local_28 = 0;
      uStack_20 = 0;
      lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = 0;
      }
      local_18 = 0;
      uStack_10 = 0;
      FUN_143451780(lVar2,*(undefined8 *)(param_1 + 0x30),&local_28);
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 143454520 FUN_143454520 body=738 status=ok
// SIG undefined FUN_143454520(void)

void FUN_143454520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong local_res8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x11)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle")
    ;
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    return;
  }
  puVar6 = local_88;
  lVar8 = 4;
  lVar4 = 4;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1434512f0(lVar5,*(longlong *)(param_1 + 0x30) + 0xe8,local_88);
  FUN_143411540(local_88,&local_a8,*(undefined8 *)(param_1 + 0x30),6,0);
  FUN_143411540(local_68,&local_a0,*(undefined8 *)(param_1 + 0x30),6,0);
  FUN_143411540(local_48,&local_98,*(undefined8 *)(param_1 + 0x30),6,0);
  FUN_143411540(local_28,&local_90,*(undefined8 *)(param_1 + 0x30),6,0);
  FUN_1432c2f70(&local_res8);
  FUN_1432c3950(&local_res8,&DAT_145b1366c,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_a8,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b13670,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_a0,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,", width=",0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_98,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,", height=",0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_90,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b12c80,0xffffffffffffffff);
  lVar5 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
                         0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  pbVar7 = *(byte **)(param_1 + 8);
  if (4 < *pbVar7) {
    FUN_143411150(pbVar7);
  }
  *pbVar7 = 5;
  *(longlong *)(pbVar7 + 8) = lVar5;
  iVar3 = *(int *)(lVar5 + 0x18);
  *(int *)(lVar5 + 0x18) = iVar3;
  if (iVar3 == 0) {
    FUN_14335f920(lVar5);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  lVar5 = 4;
  puVar6 = local_88;
  do {
    plVar1 = (longlong *)(puVar6 + -8);
    puVar6 = puVar6 + -8;
    lVar5 = lVar5 + -1;
    piVar2 = (int *)(*plVar1 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  } while (lVar5 != 0);
  pbVar7 = &stack0xfffffffffffffff8;
  do {
    pbVar7 = pbVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (4 < *pbVar7) {
      FUN_143411150(pbVar7);
    }
  } while (lVar8 != 0);
  return;
}



// FUNCTION 143454810 FUN_143454810 body=1056 status=ok
// SIG undefined FUN_143454810(void)

void FUN_143454810(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  double dVar13;
  ulonglong uVar14;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  byte local_68 [32];
  byte local_48 [48];
  
  pbVar9 = local_48;
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 0x11)) {
    lVar8 = 0;
    lVar11 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar11 = lVar8;
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68,0);
    lVar7 = lVar8;
    if (lVar6 != 0) {
      lVar7 = FUN_143451210(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
    if (*(int *)(param_1 + 0x38) < 1) {
      lVar11 = *(longlong *)(param_1 + 0x30) + 0xe8;
      FUN_1434a4640(lVar7 + 0x20,lVar11,&DAT_145b09ac8,&DAT_146b745d0);
      FUN_1434a4640(lVar7 + 0x20,lVar11,&DAT_145b09acc,&DAT_146b745f0);
      FUN_1434a4640(lVar7 + 0x20,lVar11,"width",&DAT_146b74610);
      FUN_1434a4640(lVar7 + 0x20,lVar11,"height",&DAT_146b74630);
    }
    else {
      dVar13 = (double)Scaleform::GFx::NumberUtil::NaN();
      dVar4 = (double)Scaleform::GFx::NumberUtil::NaN();
      dVar3 = (double)Scaleform::GFx::NumberUtil::NaN();
      local_128 = (double)Scaleform::GFx::NumberUtil::NaN();
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      local_120 = dVar3;
      local_118 = dVar4;
      local_110 = dVar13;
      lVar8 = FUN_143412120(lVar8);
      if (lVar8 != 0) {
        puVar12 = local_c8;
        lVar10 = 4;
        local_e8 = 0.0;
        dStack_e0 = 0.0;
        lVar6 = 4;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        do {
          *puVar12 = 0;
          puVar12 = puVar12 + 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        FUN_143451500(lVar11,*(undefined8 *)(param_1 + 0x30),&local_e8);
        FUN_14349f980(*(undefined8 *)(param_1 + 0x30),lVar8,local_c8);
        dVar4 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
        dVar3 = (double)FUN_143411a90(local_88,*(undefined8 *)(param_1 + 0x30));
        dVar13 = (double)FUN_143411a90(local_a8,*(undefined8 *)(param_1 + 0x30));
        local_108 = (double)FUN_143411a90(local_c8,*(undefined8 *)(param_1 + 0x30));
        local_f8 = dVar3 + local_108;
        local_f0 = dVar13 + dVar4;
        local_100 = dVar13;
        FUN_143488370(&local_e8);
        FUN_143488370(&local_108);
        if (local_e8 <= local_108) {
          local_128 = local_e8;
        }
        else {
          local_128 = local_108;
        }
        if (local_d8 <= local_f8) {
          local_118 = local_f8;
        }
        else {
          local_118 = local_d8;
        }
        if (dStack_e0 <= local_100) {
          local_120 = dStack_e0;
        }
        else {
          local_120 = local_100;
        }
        if (dStack_d0 <= local_f0) {
          local_110 = local_f0;
        }
        else {
          local_110 = dStack_d0;
        }
        uVar14 = FUN_143411a90(local_c8,*(undefined8 *)(param_1 + 0x30));
        if (((uVar14 >> 0x20 & 0x7ff00000) == 0x7ff00000) && ((uVar14 & 0xfffffffffffff) != 0)) {
          local_128 = (double)Scaleform::GFx::NumberUtil::NaN();
        }
        uVar14 = FUN_143411a90(local_a8,*(undefined8 *)(param_1 + 0x30));
        if (((uVar14 >> 0x20 & 0x7ff00000) == 0x7ff00000) && ((uVar14 & 0xfffffffffffff) != 0)) {
          local_120 = (double)Scaleform::GFx::NumberUtil::NaN();
        }
        do {
          pbVar9 = pbVar9 + -0x20;
          lVar10 = lVar10 + -1;
          if (4 < *pbVar9) {
            FUN_143411150(pbVar9);
          }
        } while (lVar10 != 0);
      }
      FUN_143451780(lVar7,*(undefined8 *)(param_1 + 0x30),&local_128);
    }
    if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
      FUN_1434a2b80(lVar7);
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Rectangle");
  return;
}



// FUNCTION 143454c40 FUN_143454c40 body=60 status=ok
// SIG undefined FUN_143454c40(void)

void FUN_143454c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_143451210(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143454c90 FUN_143454c90 body=758 status=ok
// SIG undefined FUN_143454c90(void)

void FUN_143454c90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  puVar6 = auStack_a8;
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x11)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar2 != '\0')) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar9 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
    lVar4 = 0;
    if (lVar9 != 0) {
      lVar4 = FUN_143451210(lVar9,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar9 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 4;
    lVar5 = 4;
    do {
      puVar6 = puVar6 + 0x20;
      *puVar6 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar11 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar9;
    if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
    }
    FUN_143411240(local_88,lVar7);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar11 = *(int *)(param_1 + 0x3c) - 1;
      lVar7 = lVar9;
      if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
      }
      FUN_143411240(local_68,lVar7);
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar11 = *(int *)(param_1 + 0x3c) - 2;
        lVar7 = lVar9;
        if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
        }
        FUN_143411240(local_48,lVar7);
        if (3 < *(int *)(param_1 + 0x38)) {
          lVar5 = *(longlong *)(param_1 + 0x30);
          uVar11 = *(int *)(param_1 + 0x3c) - 3;
          if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                              (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
            lVar9 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
          }
          FUN_143411240(local_28,lVar9);
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x30) + 0xe8;
    FUN_1434a4640(lVar4 + 0x20,lVar9,&DAT_145b09ac8,local_88);
    FUN_1434a4640(lVar4 + 0x20,lVar9,&DAT_145b09acc,local_68);
    FUN_1434a4640(lVar4 + 0x20,lVar9,"width",local_48);
    FUN_1434a4640(lVar4 + 0x20,lVar9,"height",local_28);
    pbVar10 = &stack0xfffffffffffffff8;
    do {
      pbVar10 = pbVar10 + -0x20;
      lVar8 = lVar8 + -1;
      if (4 < *pbVar10) {
        FUN_143411150(pbVar10);
      }
    } while (lVar8 != 0);
  }
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  return;
}



// FUNCTION 143454f90 FUN_143454f90 body=726 status=ok
// SIG undefined FUN_143454f90(void)

longlong * FUN_143454f90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar3 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar3;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar4 = puVar2[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143454c90;
    lVar4 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar4;
    *puVar2 = &PTR_LAB_145b0dcf8;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_1434520a0(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,0xf,&local_res8);
  local_40[0] = *param_1;
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  (**(code **)(*plVar7 + 0x50))
            (plVar7,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1b0,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 1434552a0 FUN_1434552a0 body=79 status=ok
// SIG undefined FUN_1434552a0(void)

void FUN_1434552a0(longlong param_1)

{
  int *piVar1;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 143455300 FUN_143455300 body=412 status=ok
// SIG undefined FUN_143455300(void)

undefined8 * FUN_143455300(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0dd80;
  param_1[4] = &PTR_LAB_145b0ddc8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_143455cc0(param_1,param_3);
  uVar2 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0xc);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar2);
  uVar2 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x38),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                        0x1a0,0,0xffffffff);
  lVar1 = param_1[0xf];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[0xf] = uVar2;
  uVar2 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x38),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                        0x1b8,0,0xffffffff);
  lVar1 = param_1[0x10];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[0x10] = uVar2;
  uVar2 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x38),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                        0x1b0,0,0xffffffff);
  lVar1 = param_1[0x11];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[0x11] = uVar2;
  return param_1;
}



// FUNCTION 1434554b0 FUN_1434554b0 body=1263 status=ok
// SIG undefined FUN_1434554b0(void)

undefined8 FUN_1434554b0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  char *_Str1;
  longlong *plVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  RefCountNTSImpl *pRVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  Matrix2x4<float> *pMVar10;
  longlong lVar11;
  RefCountNTSImpl *pRVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  _Str1 = *(char **)*param_3;
  iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"pixelBounds");
  if (iVar4 == 0) {
    if ((param_1[9] != 0) &&
       (pRVar5 = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_1[10]),
       pRVar5 != (RefCountNTSImpl *)0x0)) {
      *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
      lVar8 = *(longlong *)pRVar5;
      uVar6 = (**(code **)(lVar8 + 0x10))(pRVar5);
      (**(code **)(lVar8 + 0x1f0))(pRVar5,&local_88,uVar6);
      fVar13 = (uStack_80._4_4_ - local_88._4_4_) * 0.05;
      if (fVar13 <= 0.0) {
        fVar13 = fVar13 - 0.5;
      }
      else {
        fVar13 = fVar13 + 0.5;
      }
      fVar14 = ((float)uStack_80 - (float)local_88) * 0.05;
      if (fVar14 <= 0.0) {
        fVar14 = fVar14 - 0.5;
      }
      else {
        fVar14 = fVar14 + 0.5;
      }
      local_88._4_4_ = local_88._4_4_ * 0.05;
      if (local_88._4_4_ <= 0.0) {
        local_88._4_4_ = local_88._4_4_ - 0.5;
      }
      else {
        local_88._4_4_ = local_88._4_4_ + 0.5;
      }
      local_88._0_4_ = (float)local_88 * 0.05;
      if ((float)local_88 <= 0.0) {
        local_88._0_4_ = (float)local_88 - 0.5;
      }
      else {
        local_88._0_4_ = (float)local_88 + 0.5;
      }
      dStack_60 = (double)(int)local_88._4_4_;
      uStack_50 = (double)(int)fVar13 + dStack_60;
      local_68 = (double)(int)(float)local_88;
      local_58 = (double)(int)fVar14 + local_68;
      FUN_143451780(param_1[0xd],param_2,&local_68);
      FUN_143412aa0(param_4,param_1[0xd]);
      Scaleform::RefCountNTSImpl::Release(pRVar5);
      return 1;
    }
    FUN_143411150(param_4);
    *param_4 = 0;
    return 0;
  }
  iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"colorTransform");
  if (iVar4 == 0) {
    if ((param_1[9] != 0) &&
       (pRVar5 = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_1[10]),
       pRVar5 != (RefCountNTSImpl *)0x0)) {
      *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
      puVar7 = (undefined8 *)FUN_1433679a0(pRVar5);
      lVar8 = param_1[0xc];
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar8 + 0x70) = *puVar7;
      *(undefined8 *)(lVar8 + 0x78) = uVar6;
      fVar13 = *(float *)(puVar7 + 2);
      fVar14 = *(float *)((longlong)puVar7 + 0x14);
      fVar2 = *(float *)(puVar7 + 3);
      fVar3 = *(float *)((longlong)puVar7 + 0x1c);
      *(float *)(lVar8 + 0x80) = fVar13;
      *(float *)(lVar8 + 0x84) = fVar14;
      *(float *)(lVar8 + 0x88) = fVar2;
      *(float *)(lVar8 + 0x8c) = fVar3;
      *(float *)(lVar8 + 0x80) = fVar13 * 255.0;
      *(float *)(lVar8 + 0x84) = fVar14 * 255.0;
      *(float *)(lVar8 + 0x88) = fVar2 * 255.0;
      *(float *)(lVar8 + 0x8c) = fVar3 * 255.0;
      lVar8 = param_1[0xc];
LAB_1434556e5:
      FUN_143412aa0(param_4,lVar8);
      Scaleform::RefCountNTSImpl::Release(pRVar5);
      return 1;
    }
  }
  else {
    lVar9 = 0;
    lVar8 = lVar9;
    do {
      lVar11 = lVar8 + 1;
      if (_Str1[lVar8] != "matrix"[lVar8]) {
        iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"concatenatedColorTransform");
        if (iVar4 == 0) {
          FUN_1432bfaf0(&local_68);
          if (param_1[9] != 0) {
            pRVar5 = (RefCountNTSImpl *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter(param_1[10]);
            if (pRVar5 != (RefCountNTSImpl *)0x0) {
              *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
              pRVar12 = pRVar5;
              do {
                uVar6 = FUN_1433679a0(pRVar12);
                FUN_1432bfbe0(&local_68,uVar6);
                pRVar12 = *(RefCountNTSImpl **)(pRVar12 + 0x38);
              } while (pRVar12 != (RefCountNTSImpl *)0x0);
              Scaleform::RefCountNTSImpl::Release(pRVar5);
            }
          }
          plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
          lVar8 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
          if (lVar8 != 0) {
            lVar9 = FUN_14344f610(lVar8,param_2);
          }
          *(double *)(lVar9 + 0x70) = local_68;
          *(double *)(lVar9 + 0x78) = dStack_60;
          *(float *)(lVar9 + 0x80) = (float)local_58;
          *(float *)(lVar9 + 0x84) = local_58._4_4_;
          *(float *)(lVar9 + 0x88) = (float)uStack_50;
          *(float *)(lVar9 + 0x8c) = uStack_50._4_4_;
          *(float *)(lVar9 + 0x80) = (float)local_58 * 255.0;
          *(float *)(lVar9 + 0x84) = local_58._4_4_ * 255.0;
          *(float *)(lVar9 + 0x88) = (float)uStack_50 * 255.0;
          *(float *)(lVar9 + 0x8c) = uStack_50._4_4_ * 255.0;
          uVar6 = FUN_143410c00(&local_88,lVar9);
          FUN_143411240(param_4,uVar6);
          if (4 < (byte)local_88) {
            FUN_143411150(&local_88);
          }
        }
        else {
          iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"concatenatedMatrix");
          if (iVar4 != 0) {
            uVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
            return uVar6;
          }
          local_68 = 5.26354424712089e-315;
          dStack_60 = 0.0;
          local_58 = 0.0078125;
          uStack_50 = 0.0;
          if ((param_1[9] != 0) &&
             (pRVar5 = (RefCountNTSImpl *)
                       Scaleform::GFx::CharacterHandle::ResolveCharacter(param_1[10]),
             pRVar5 != (RefCountNTSImpl *)0x0)) {
            *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
            pRVar12 = pRVar5;
            do {
              pMVar10 = (Matrix2x4<float> *)(**(code **)(*(longlong *)pRVar12 + 0x10))(pRVar12);
              Scaleform::Render::Matrix2x4<float>::Prepend((Matrix2x4<float> *)&local_68,pMVar10);
              pRVar12 = *(RefCountNTSImpl **)(pRVar12 + 0x38);
            } while (pRVar12 != (RefCountNTSImpl *)0x0);
            Scaleform::RefCountNTSImpl::Release(pRVar5);
          }
          plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
          lVar8 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
          if (lVar8 != 0) {
            lVar9 = FUN_14344c520(lVar8,param_2);
          }
          FUN_14344cf70(lVar9,param_2 + 0xe8,&local_68);
          uVar6 = FUN_143410c00(&local_68,lVar9);
          FUN_143411240(param_4,uVar6);
          if (4 < (byte)local_68._0_1_) {
            FUN_143411150(&local_68);
          }
          if (lVar9 == 0) {
            return 1;
          }
        }
        if ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
          FUN_1434a2b80(lVar9);
        }
        return 1;
      }
      lVar8 = lVar11;
    } while (lVar11 != 7);
    if ((param_1[9] != 0) &&
       (pRVar5 = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ResolveCharacter(param_1[10]),
       pRVar5 != (RefCountNTSImpl *)0x0)) {
      *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)pRVar5 + 0x10))(pRVar5);
      local_88 = *puVar7;
      uStack_80 = puVar7[1];
      local_78 = puVar7[2];
      uStack_70 = puVar7[3];
      FUN_14344cf70(param_1[0xb],param_2 + 0xe8,&local_88);
      lVar8 = param_1[0xb];
      goto LAB_1434556e5;
    }
  }
  FUN_143411150(param_4);
  *param_4 = 0;
  return 0;
}



// FUNCTION 1434559b0 FUN_1434559b0 body=776 status=ok
// SIG undefined FUN_1434559b0(void)

undefined8
FUN_1434559b0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *_Str1;
  double dVar1;
  int iVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined8 local_88;
  double local_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _Str1 = *(char **)*param_3;
  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"pixelBounds");
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"colorTransform");
  if (iVar2 == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      return 1;
    }
    this = (RefCountNTSImpl *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(*(undefined8 *)(param_1 + 0x50));
    if (this == (RefCountNTSImpl *)0x0) {
      return 1;
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    lVar3 = FUN_143412120(param_4,param_2);
    if (lVar3 == 0) goto LAB_143455ab2;
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))();
    if (iVar2 == 0x12) {
      local_a8 = *(float *)(lVar3 + 0x70);
      fStack_a4 = *(float *)(lVar3 + 0x74);
      uStack_a0 = *(undefined4 *)(lVar3 + 0x78);
      fStack_9c = *(float *)(lVar3 + 0x7c);
      local_98 = *(float *)(lVar3 + 0x80);
      fStack_94 = *(float *)(lVar3 + 0x84);
      uStack_90 = *(undefined4 *)(lVar3 + 0x88);
      fStack_8c = *(float *)(lVar3 + 0x8c);
      Scaleform::Render::Cxform::Normalize(&local_a8);
      FUN_1433679d0(this,&local_a8);
      (**(code **)(*(longlong *)this + 0x1a8))(this,0);
    }
  }
  else {
    lVar3 = 0;
    do {
      lVar5 = lVar3 + 1;
      if (_Str1[lVar3] != "matrix"[lVar3]) {
        uVar4 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
        return uVar4;
      }
      lVar3 = lVar5;
    } while (lVar5 != 7);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      return 1;
    }
    this = (RefCountNTSImpl *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(*(undefined8 *)(param_1 + 0x50));
    if (this == (RefCountNTSImpl *)0x0) {
      return 1;
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    lVar3 = FUN_143412120(param_4,param_2);
    if (lVar3 == 0) goto LAB_143455ab2;
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))();
    if (iVar2 == 0xf) {
      FUN_14344c900(lVar3,&local_a8,param_2);
      fStack_9c = fStack_9c * 20.0;
      fStack_8c = fStack_8c * 20.0;
      (**(code **)(*(longlong *)this + 0x18))(this,&local_a8);
      local_78 = 100.0;
      dStack_70 = 0.0;
      local_58 = 0x3f80000000000000;
      uStack_50 = 0;
      local_68 = 0x3f800000;
      uStack_60 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_80 = 100.0;
      local_88 = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x40590000;
      FUN_14336b690(this,&local_88);
      local_88 = CONCAT44((int)fStack_8c,(int)fStack_9c);
      dVar1 = _guard_xfg_dispatch_icall_nop((double)local_98,(double)local_a8);
      dStack_70 = (dVar1 * 180.0) / 3.141592653589793;
      local_80 = _guard_xfg_dispatch_icall_nop
                           ((double)local_a8 * (double)local_a8 +
                            (double)local_98 * (double)local_98);
      local_80 = local_80 * 100.0;
      local_78 = _guard_xfg_dispatch_icall_nop
                           ((double)fStack_94 * (double)fStack_94 +
                            (double)fStack_a4 * (double)fStack_a4);
      local_78 = local_78 * 100.0;
      FUN_14336b830(this,&local_88);
    }
  }
  if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
LAB_143455ab2:
  Scaleform::RefCountNTSImpl::Release(this);
  return 1;
}



// FUNCTION 143455cc0 FUN_143455cc0 body=140 status=ok
// SIG undefined FUN_143455cc0(void)

void FUN_143455cc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x70);
    if (lVar2 == 0) {
      lVar2 = FUN_14336c170(param_2);
    }
    FUN_1432efba0(param_1 + 0x70,lVar2);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10);
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 143455d60 FUN_143455d60 body=593 status=ok
// SIG undefined FUN_143455d60(void)

undefined8 * FUN_143455d60(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [32];
  
  FUN_143495e40();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b0de70;
  param_1[4] = &PTR_LAB_145b0deb8;
  param_1[0x12] = &PTR_LAB_145b0df60;
  FUN_143422ee0(param_1 + 0x12,param_1,param_2,&DAT_145b07cc0,local_res8);
  local_38[0] = 0;
  local_res8[0] = 2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "matrix",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8[0] = 6;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "concatenatedMatrix",0x12);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8[0] = 2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "colorTransform",0xe);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8[0] = 6;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "concatenatedColorTransform",0x1a);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8[0] = 2;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "pixelBounds",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return param_1;
}



// FUNCTION 143455fc0 FUN_143455fc0 body=64 status=ok
// SIG undefined FUN_143455fc0(void)

void FUN_143455fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar2 != 0) {
    FUN_143455300(lVar2,param_2,0);
    return;
  }
  return;
}



// FUNCTION 143456010 FUN_143456010 body=337 status=ok
// SIG undefined FUN_143456010(void)

void FUN_143456010(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar7 = 0;
    lVar8 = lVar7;
    if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar6 = FUN_143419e00(lVar6,lVar8);
    if (lVar6 == 0) {
      puVar2 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar2);
      *puVar2 = 0;
    }
    else {
      if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
          (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x14)) ||
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar4 != '\0')) {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar8 = (**(code **)(*plVar3 + 0x50))(plVar3,0x90,0);
        if (lVar8 != 0) {
          lVar7 = FUN_143455300(lVar8,*(undefined8 *)(param_1 + 0x30),0);
        }
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8;
        if (lVar8 != 0) {
          *(uint *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1U & 0x8fffffff;
        }
      }
      FUN_143455cc0(lVar7,lVar6);
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
      if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
        FUN_1434a2b80(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 143456170 FUN_143456170 body=726 status=ok
// SIG undefined FUN_143456170(void)

longlong * FUN_143456170(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar3 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar3;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar4 = puVar2[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143456010;
    lVar4 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar4;
    *puVar2 = &PTR_LAB_145b0df68;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xd0,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_143455d60(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,0xc,&local_res8);
  local_40[0] = *param_1;
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  (**(code **)(*plVar7 + 0x50))
            (plVar7,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x198,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 143456450 FUN_143456450 body=305 status=ok
// SIG undefined FUN_143456450(void)

void FUN_143456450(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_28 [32];
  
  plVar2 = (longlong *)(param_2 + 0xe8);
  uVar3 = FUN_14341b750(*plVar2,0x1e);
  plVar4 = (longlong *)(param_1 + 0x20);
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))(plVar4,plVar2,uVar3);
  local_res8[0] = 4;
  local_28[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),"width"
                              ,5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar4 + 0x50))(plVar4,plVar2,&local_res10,local_28,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  local_res8[0] = 4;
  local_28[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "height",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar4 + 0x50))(plVar4,plVar2,&local_res10,local_28,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 143456590 FUN_143456590 body=77 status=ok
// SIG undefined FUN_143456590(void)

undefined8 * FUN_143456590(undefined8 *param_1,undefined8 param_2)

{
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0dff0;
  param_1[4] = &PTR_LAB_145b0e038;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_143456450(param_1,param_2);
  return param_1;
}



// FUNCTION 1434565f0 FUN_1434565f0 body=677 status=ok
// SIG undefined FUN_1434565f0(void)

void FUN_1434565f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar9;
  byte local_d8 [8];
  undefined8 local_d0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  byte local_48 [32];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1432de450();
  }
  *(longlong *)(param_1 + 0x68) = param_3;
  if (param_4 != 0) {
    Scaleform::GFx::Resource::AddRef(param_4);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1432de450();
  }
  *(longlong *)(param_1 + 0x70) = param_4;
  (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))(*(longlong **)(param_3 + 0x18),&local_b8);
  lVar8 = 4;
  puVar6 = local_a8;
  lVar3 = 4;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 0x20;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_d8[0] = 4;
  local_d0 = (double)((ulonglong)local_d0._4_4_ << 0x20);
  FUN_143411240(local_a8,local_d8);
  if (4 < local_d8[0]) {
    FUN_143411150(local_d8);
  }
  local_d8[0] = 4;
  local_d0 = (double)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_143411240(local_88,local_d8);
  if (4 < local_d8[0]) {
    FUN_143411150(local_d8);
  }
  local_d8[0] = 3;
  local_d0 = (double)(uint)(local_b0 - local_b8);
  FUN_143411240(local_68,local_d8);
  if (4 < local_d8[0]) {
    FUN_143411150(local_d8);
  }
  local_d8[0] = 3;
  local_d0 = (double)(uint)(local_ac - local_b4);
  FUN_143411240(local_48,local_d8);
  if (4 < local_d8[0]) {
    FUN_143411150(local_d8);
  }
  plVar2 = (longlong *)(param_2 + 0xe8);
  lVar4 = FUN_14341a5c0(param_2,*(undefined8 *)(*plVar2 + 0x38),
                        *(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x1b0,0,
                        CONCAT44(uVar9,0xffffffff));
  FUN_1434a4640(lVar4 + 0x20,plVar2,&DAT_145b09ac8,local_a8);
  FUN_1434a4640(lVar4 + 0x20,plVar2,&DAT_145b09acc,local_88);
  FUN_1434a4640(lVar4 + 0x20,plVar2,"width",local_68);
  FUN_1434a4640(lVar4 + 0x20,plVar2,"height",local_48);
  local_res8[0] = 4;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x618),
                              "rectangle",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar5 = FUN_143410c00(local_d8,lVar4);
  (**(code **)(lVar3 + 0x50))((longlong *)(param_1 + 0x20),plVar2,&local_res10,uVar5,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_d8[0]) {
    FUN_143411150(local_d8);
  }
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  pbVar7 = &stack0xffffffffffffffd8;
  do {
    pbVar7 = pbVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (4 < *pbVar7) {
      FUN_143411150(pbVar7);
    }
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1434568a0 FUN_1434568a0 body=127 status=ok
// SIG undefined FUN_1434568a0(void)

undefined8
FUN_1434568a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = 0;
  lVar2 = lVar1;
  do {
    lVar4 = lVar2 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar2) != "width"[lVar2]) {
      do {
        lVar2 = lVar1 + 1;
        if (*(char *)(*(longlong *)*param_3 + lVar1) != "height"[lVar1]) {
          uVar3 = FUN_143414a10(param_1,param_2,param_3,param_4);
          return uVar3;
        }
        lVar1 = lVar2;
      } while (lVar2 != 7);
      return 1;
    }
    lVar2 = lVar4;
  } while (lVar4 != 6);
  return 1;
}



// FUNCTION 143456930 FUN_143456930 body=304 status=ok
// SIG undefined FUN_143456930(void)

undefined8 FUN_143456930(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[9];
  if (lVar3 == 0) {
LAB_143456a3d:
                    /* WARNING: Could not recover jumptable at 0x000143456a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
    return uVar4;
  }
  uVar7 = 0;
  uVar6 = uVar7;
  do {
    uVar8 = uVar6 + 1;
    uVar5 = uVar7;
    if (*(char *)(*(longlong *)*param_3 + uVar6) != "width"[uVar6]) goto LAB_1434569e0;
    uVar6 = uVar8;
  } while (uVar8 != 6);
  plVar1 = *(longlong **)(lVar3 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (uint *)(**(code **)(*plVar1 + 0x28))(plVar1,local_res8);
    uVar7 = (ulonglong)*puVar2;
  }
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
LAB_1434569a8:
  *param_4 = 3;
  *(double *)(param_4 + 8) = (double)uVar7;
  return CONCAT71((int7)(uVar7 >> 8),1);
  while (uVar5 = uVar6, uVar6 != 7) {
LAB_1434569e0:
    uVar6 = uVar5 + 1;
    if (*(char *)(*(longlong *)*param_3 + uVar5) != "height"[uVar5]) goto LAB_143456a3d;
  }
  plVar1 = *(longlong **)(lVar3 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res8);
    uVar7 = (ulonglong)*(uint *)(lVar3 + 4);
  }
  if (4 < *param_4) {
    FUN_143411150(param_4);
    *param_4 = 3;
    *(double *)(param_4 + 8) = (double)uVar7;
    return CONCAT71((int7)(uVar7 >> 8),1);
  }
  goto LAB_1434569a8;
}



// FUNCTION 143456a80 FUN_143456a80 body=103 status=ok
// SIG undefined FUN_143456a80(void)

undefined8 * FUN_143456a80(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494a60();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0e0e0;
  param_1[4] = &PTR_LAB_145b0e128;
  param_1[0xf] = &PTR_LAB_145b0e1d0;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_loadBitmap_145b08240,local_res8);
  return param_1;
}



// FUNCTION 143456af0 FUN_143456af0 body=157 status=ok
// SIG undefined FUN_143456af0(void)

undefined8 * FUN_143456af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143456ba0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0ae70;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_loadBitmap_145b08100,7);
  return param_1;
}



// FUNCTION 143456ba0 FUN_143456ba0 body=183 status=ok
// SIG undefined FUN_143456ba0(void)

void FUN_143456ba0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    FUN_1434148b0(puVar3,uVar2);
    *puVar3 = &PTR_LAB_145b0dff0;
    puVar3[4] = &PTR_LAB_145b0e038;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    FUN_143456450(puVar3,uVar2);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),puVar3);
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
    return;
  }
  return;
}



// FUNCTION 143456c60 FUN_143456c60 body=205 status=ok
// SIG undefined FUN_143456c60(void)

void FUN_143456c60(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar5,&local_res8,lVar4,0xffffffff,0);
    lVar4 = FUN_14348fbc0(*(undefined8 *)(param_1 + 0x30),&local_res8);
    if (lVar4 != 0) {
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
      if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80(lVar4);
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 143456d40 FUN_143456d40 body=808 status=ok
// SIG undefined FUN_143456d40(void)

longlong * FUN_143456d40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar7 = (undefined8 *)0x0;
  puVar4 = puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143456ba0;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_58,&PTR_s_loadBitmap_145b08100,7);
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb8,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143494a60(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0e0e0;
    puVar4[4] = &PTR_LAB_145b0e128;
    puVar4[0xf] = &PTR_LAB_145b0e1d0;
    FUN_143422ee0(puVar4 + 0xf,puVar4,&local_58,&PTR_s_loadBitmap_145b08240,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar7 = puVar4;
  }
  local_res8 = puVar7;
  FUN_1434a4b90(param_2,0x1e,&local_res8);
  local_40[0] = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x50) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x228,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar7 != (undefined8 *)0x0) && ((*(uint *)(puVar7 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar7 + 3) = *(uint *)(puVar7 + 3) - 1;
    FUN_1434a2b80(puVar7);
  }
  return param_1;
}



// FUNCTION 143457070 FUN_143457070 body=114 status=ok
// SIG undefined FUN_143457070(void)

void FUN_143457070(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0xe8);
  plVar1 = (longlong *)(param_2 + 0x20);
  (**(code **)(*(longlong *)(param_2 + 0x20) + 0x58))
            (plVar1,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x540,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001434570de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))
            (plVar1,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x548,
             param_3 + 0x20);
  return;
}



// FUNCTION 1434570f0 FUN_1434570f0 body=265 status=ok
// SIG undefined FUN_1434570f0(void)

void FUN_1434570f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 local_58 [32];
  byte local_38 [32];
  byte local_18 [16];
  
  lVar6 = 2;
  lVar4 = 2;
  puVar7 = local_58;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar1 = (longlong *)(param_2 + 0x20);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_1 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x540,
             local_58);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_1 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x548,
             local_38);
  uVar3 = FUN_143411a90(local_38,param_1);
  uVar2 = FUN_143411a90(local_58,param_1);
  *param_3 = uVar2;
  pbVar5 = local_18;
  param_3[1] = uVar3;
  do {
    pbVar5 = pbVar5 + -0x20;
    lVar6 = lVar6 + -1;
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
  } while (lVar6 != 0);
  return;
}



// FUNCTION 143457200 FUN_143457200 body=211 status=ok
// SIG undefined FUN_143457200(void)

undefined8 * FUN_143457200(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  FUN_1434148b0();
  plVar2 = (longlong *)(param_2 + 0xe8);
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e1d8;
  uVar1 = FUN_14341b750(*plVar2,0xe);
  FUN_1434a4d00(param_1 + 4,plVar2,uVar1);
  local_res8[0] = 0;
  (**(code **)(param_1[4] + 0x50))
            (param_1 + 4,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x540,
             &DAT_1467cf700,local_res8);
  local_res8[0] = 0;
  (**(code **)(param_1[4] + 0x50))
            (param_1 + 4,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x548,
             &DAT_1467cf720,local_res8);
  return param_1;
}



// FUNCTION 1434572e0 FUN_1434572e0 body=378 status=ok
// SIG undefined FUN_1434572e0(void)

undefined8 * FUN_1434572e0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_58 [32];
  byte local_38 [32];
  
  FUN_1434148b0();
  plVar6 = (longlong *)(param_2 + 0xe8);
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e1d8;
  uVar1 = FUN_14341b750(*plVar6,0xe);
  FUN_1434a4d00(param_1 + 4,plVar6,uVar1);
  lVar5 = 2;
  puVar3 = local_58;
  lVar2 = 2;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x20;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)(*(longlong *)(param_3 + 0x20) + 0x58))
            (param_3 + 0x20,plVar6,*(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x540,
             local_58);
  (**(code **)(*(longlong *)(param_3 + 0x20) + 0x58))
            (param_3 + 0x20,plVar6,*(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x548,
             local_38);
  local_res8[0] = 0;
  (**(code **)(param_1[4] + 0x50))
            (param_1 + 4,plVar6,*(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x540,local_58
             ,local_res8);
  local_res8[0] = 0;
  (**(code **)(param_1[4] + 0x50))
            (param_1 + 4,plVar6,*(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x548,local_38
             ,local_res8);
  pbVar4 = &stack0xffffffffffffffe8;
  do {
    pbVar4 = pbVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (4 < *pbVar4) {
      FUN_143411150(pbVar4);
    }
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 143457460 FUN_143457460 body=106 status=ok
// SIG undefined FUN_143457460(void)

void FUN_143457460(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x540,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001434574c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x548,
             param_3 + 0x20);
  return;
}



// FUNCTION 1434574d0 FUN_1434574d0 body=137 status=ok
// SIG undefined FUN_1434574d0(void)

void FUN_1434574d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_res8[0] = 0;
  (**(code **)(*plVar1 + 0x50))
            (plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x540,param_3,
             local_res8);
  local_res8[0] = 0;
  (**(code **)(*plVar1 + 0x50))
            (plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x548,
             param_3 + 0x20,local_res8);
  return;
}



// FUNCTION 143457560 FUN_143457560 body=265 status=ok
// SIG undefined FUN_143457560(void)

void FUN_143457560(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 local_58 [32];
  byte local_38 [32];
  byte local_18 [16];
  
  lVar6 = 2;
  lVar4 = 2;
  puVar7 = local_58;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar1 = (longlong *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_2 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x540,
             local_58);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_2 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x548,
             local_38);
  uVar3 = FUN_143411a90(local_38,param_2);
  uVar2 = FUN_143411a90(local_58,param_2);
  *param_3 = uVar2;
  pbVar5 = local_18;
  param_3[1] = uVar3;
  do {
    pbVar5 = pbVar5 + -0x20;
    lVar6 = lVar6 + -1;
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
  } while (lVar6 != 0);
  return;
}



// FUNCTION 143457670 FUN_143457670 body=213 status=ok
// SIG undefined FUN_143457670(void)

void FUN_143457670(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  byte local_28 [8];
  undefined8 local_20;
  
  local_20 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar2 = (longlong *)(param_2 + 0xe8);
  local_28[0] = 3;
  local_res8[0] = 0;
  (**(code **)(*plVar1 + 0x50))
            (plVar1,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x540,local_28,
             local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  local_20 = param_3[1];
  local_28[0] = 3;
  local_res8[0] = 0;
  (**(code **)(*plVar1 + 0x50))
            (plVar1,plVar2,*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x548,local_28,
             local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 143457750 FUN_143457750 body=152 status=ok
// SIG undefined FUN_143457750(void)

undefined8 FUN_143457750(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double local_38;
  double local_30;
  byte local_28 [8];
  double local_20;
  
  if (*param_3 ==
      *(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x610)) {
    FUN_143457560(param_1 + -4,param_2,&local_38);
    local_28[0] = 3;
    local_20 = _guard_xfg_dispatch_icall_nop(local_38 * local_38 + local_30 * local_30);
    FUN_143411240(param_4,local_28);
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434577e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,(longlong *)(param_2 + 0xe8),param_3,param_4);
  return uVar1;
}



// FUNCTION 1434577f0 FUN_1434577f0 body=241 status=ok
// SIG undefined FUN_1434577f0(void)

undefined8 * FUN_1434577f0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_28 [8];
  undefined4 local_20;
  
  FUN_1434958a0();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b0e280;
  param_1[4] = &PTR_LAB_145b0e2c8;
  param_1[0xd] = &PTR_LAB_145b0e370;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_DAT_145b08280,local_res8);
  local_res8[0] = 2;
  local_28[0] = 4;
  local_20 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "length",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_28,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_1;
}



// FUNCTION 1434578f0 FUN_1434578f0 body=518 status=ok
// SIG undefined FUN_1434578f0(void)

void FUN_1434578f0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
  lVar6 = 0;
  lVar5 = lVar6;
  if (lVar4 != 0) {
    lVar5 = FUN_143457200(lVar4,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) < 1) {
LAB_143457a32:
    lVar4 = *(longlong *)(param_1 + 0x30);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
              (lVar5 + 0x20,lVar4 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x540,
               &DAT_146b74650,local_res8);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
              (lVar5 + 0x20,lVar4 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x548,
               &DAT_146b74670,local_res8);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar6;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_143412120(lVar7);
    if (lVar4 == 0) goto LAB_143457a32;
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x10)) {
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
      goto LAB_143457ac0;
    }
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = lVar6;
    }
    FUN_143457560(lVar7,*(undefined8 *)(param_1 + 0x30),&local_28);
    FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar4,&local_18);
    local_28 = local_28 + local_18;
    local_20 = local_20 + local_10;
    FUN_143457670(lVar5,*(undefined8 *)(param_1 + 0x30),&local_28);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
LAB_143457ac0:
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
    return;
  }
  return;
}



// FUNCTION 143457b00 FUN_143457b00 body=510 status=ok
// SIG undefined FUN_143457b00(void)

void FUN_143457b00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_58 [32];
  byte local_38 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x10) {
      lVar3 = 0;
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = lVar3;
      }
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      lVar2 = (**(code **)(*plVar8 + 0x50))(plVar8,0x68,0);
      if (lVar2 != 0) {
        lVar3 = FUN_143457200(lVar2,*(undefined8 *)(param_1 + 0x30));
      }
      puVar4 = local_58;
      lVar7 = 2;
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar2 = 2;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 0x20;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                (lVar5 + 0x20,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x540,
                 local_58);
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                (lVar5 + 0x20,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x548,
                 local_38);
      local_res8[0] = 0;
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
                (lVar3 + 0x20,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x540,
                 local_58,local_res8);
      local_res8[0] = 0;
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
                (lVar3 + 0x20,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x548,
                 local_38,local_res8);
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      pbVar6 = &stack0xffffffffffffffe8;
      do {
        pbVar6 = pbVar6 + -0x20;
        lVar7 = lVar7 + -1;
        if (4 < *pbVar6) {
          FUN_143411150(pbVar6);
        }
      } while (lVar7 != 0);
      if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
  return;
}



// FUNCTION 143457d10 FUN_143457d10 body=306 status=ok
// SIG undefined FUN_143457d10(void)

void FUN_143457d10(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_143412120(lVar5,lVar4);
    if ((lVar4 != 0) &&
       (iVar3 = (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x10))(lVar4 + 0x20), iVar3 == 0x10)) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x10)) {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point")
        ;
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = 0;
      }
      FUN_143457560(lVar5,*(undefined8 *)(param_1 + 0x30),&local_28);
      FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar4,&local_18);
      if ((local_28 == local_18) && (local_20 == local_10)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = uVar6;
  return;
}



// FUNCTION 143457e50 FUN_143457e50 body=537 status=ok
// SIG undefined FUN_143457e50(void)

void FUN_143457e50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 local_res8 [8];
  double local_68;
  double local_60;
  byte local_58 [80];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x10) {
      lVar4 = 0;
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = lVar4;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        FUN_143410ec0(local_58,lVar4);
        FUN_143457560(lVar5,*(undefined8 *)(param_1 + 0x30),&local_68);
        dVar6 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
        dVar7 = _guard_xfg_dispatch_icall_nop(local_60 * local_60 + local_68 * local_68);
        local_68 = local_68 * (dVar6 / dVar7);
        local_60 = local_60 * (dVar6 / dVar7);
        FUN_143457670(lVar5,*(undefined8 *)(param_1 + 0x30),&local_68);
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        return;
      }
      local_res8[0] = 0;
      lVar4 = *(longlong *)(param_1 + 0x30);
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
                (lVar5 + 0x20,lVar4 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x540,
                 &DAT_146b74650,local_res8);
      local_res8[0] = 0;
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
                (lVar5 + 0x20,lVar4 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x548,
                 &DAT_146b74670,local_res8);
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
  return;
}



// FUNCTION 143458070 FUN_143458070 body=469 status=ok
// SIG undefined FUN_143458070(void)

void FUN_143458070(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  double local_68;
  double local_60;
  byte local_58 [32];
  byte local_38 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x10)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
    return;
  }
  lVar6 = 0;
  lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar7 = lVar6;
  }
  local_38[0] = 0;
  local_58[0] = 0;
  bVar8 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    lVar5 = lVar6;
    if (uVar9 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    FUN_143411240(local_38,lVar5);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar9 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      FUN_143411240(local_58,lVar6);
      bVar8 = local_58[0];
    }
  }
  FUN_143457560(lVar7,*(undefined8 *)(param_1 + 0x30),&local_68);
  dVar3 = (double)FUN_143411a90(local_58,*(undefined8 *)(param_1 + 0x30));
  dVar2 = (double)FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30));
  local_68 = local_68 + dVar2;
  local_60 = local_60 + dVar3;
  FUN_143457670(lVar7,*(undefined8 *)(param_1 + 0x30),&local_68);
  if (4 < bVar8) {
    FUN_143411150(local_58);
  }
  if (local_38[0] < 5) {
    return;
  }
  FUN_143411150(local_38);
  return;
}



// FUNCTION 143458250 FUN_143458250 body=544 status=ok
// SIG undefined FUN_143458250(void)

void FUN_143458250(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
  lVar6 = 0;
  lVar5 = lVar6;
  if (lVar4 != 0) {
    lVar5 = FUN_143457200(lVar4,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) < 1) {
LAB_1434583ac:
    lVar4 = *(longlong *)(param_1 + 0x30);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
              (lVar5 + 0x20,lVar4 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x540,
               &DAT_146b74650,local_res8);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x50))
              (lVar5 + 0x20,lVar4 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x548,
               &DAT_146b74670,local_res8);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar6;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_143412120(lVar7);
    if (lVar4 == 0) goto LAB_1434583ac;
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x10)) {
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
      goto LAB_14345843a;
    }
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = lVar6;
    }
    FUN_143457560(lVar7,*(undefined8 *)(param_1 + 0x30),&local_28);
    FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar4,&local_18);
    local_28 = local_28 + -local_18;
    local_20 = local_20 + -local_10;
    FUN_143457670(lVar5,*(undefined8 *)(param_1 + 0x30),&local_28);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
LAB_14345843a:
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
    return;
  }
  return;
}



// FUNCTION 143458480 FUN_143458480 body=722 status=ok
// SIG undefined FUN_143458480(void)

void FUN_143458480(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong local_res8;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_48 [32];
  byte local_28 [32];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 0x10)) {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      puVar6 = local_48;
      lVar8 = 2;
      lVar4 = 2;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x20;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar4 = *(longlong *)(param_1 + 0x30);
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                (lVar5 + 0x20,lVar4 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x540,
                 local_48);
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x58))
                (lVar5 + 0x20,lVar4 + 0xe8,
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x548,
                 local_28);
      FUN_143411540(local_48,&local_58,*(undefined8 *)(param_1 + 0x30),6,0);
      FUN_143411540(local_28,&local_50,*(undefined8 *)(param_1 + 0x30),6,0);
      FUN_1432c2f70(&local_res8);
      FUN_1432c3950(&local_res8,&DAT_145b1366c,0xffffffffffffffff);
      FUN_1432c3950(&local_res8,*local_58,0xffffffffffffffff);
      FUN_1432c3950(&local_res8,&DAT_145b13670,0xffffffffffffffff);
      FUN_1432c3950(&local_res8,*local_50,0xffffffffffffffff);
      FUN_1432c3950(&local_res8,&DAT_145b12c80,0xffffffffffffffff);
      lVar5 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18
                               ) + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      pbVar7 = *(byte **)(param_1 + 8);
      if (4 < *pbVar7) {
        FUN_143411150(pbVar7);
      }
      *pbVar7 = 5;
      *(longlong *)(pbVar7 + 8) = lVar5;
      iVar3 = *(int *)(lVar5 + 0x18);
      *(int *)(lVar5 + 0x18) = iVar3;
      if (iVar3 == 0) {
        FUN_14335f920(lVar5);
      }
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
      lVar5 = 2;
      puVar6 = local_48;
      do {
        plVar1 = (longlong *)(puVar6 + -8);
        puVar6 = puVar6 + -8;
        lVar5 = lVar5 + -1;
        piVar2 = (int *)(*plVar1 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
      } while (lVar5 != 0);
      pbVar7 = &stack0xfffffffffffffff8;
      do {
        pbVar7 = pbVar7 + -0x20;
        lVar8 = lVar8 + -1;
        if (4 < *pbVar7) {
          FUN_143411150(pbVar7);
        }
      } while (lVar8 != 0);
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Point");
  return;
}



// FUNCTION 143458760 FUN_143458760 body=1045 status=ok
// SIG undefined FUN_143458760(void)

void FUN_143458760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  byte local_118 [8];
  double local_110;
  byte local_f8 [8];
  double local_f0;
  undefined1 local_d8 [8];
  double local_d0;
  undefined1 local_b8 [32];
  byte local_98 [32];
  byte local_78 [32];
  byte local_58 [32];
  byte local_38 [32];
  
  pbVar6 = local_38;
  uVar11 = Scaleform::GFx::NumberUtil::NaN();
  pbVar5 = *(byte **)(param_1 + 8);
  if (4 < *pbVar5) {
    FUN_143411150(pbVar5);
  }
  *(undefined8 *)(pbVar5 + 8) = uVar11;
  *pbVar5 = 3;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    uVar8 = *(uint *)(param_1 + 0x3c);
    lVar9 = lVar4;
    if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    lVar9 = FUN_143412120(lVar9);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    lVar2 = FUN_143412120(lVar4,lVar2);
    if ((lVar9 != 0) && (lVar2 != 0)) {
      plVar7 = (longlong *)(lVar9 + 0x20);
      iVar1 = (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))(plVar7);
      if ((iVar1 == 0x10) ||
         (iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))(lVar2 + 0x20), iVar1 == 0x10)) {
        pbVar5 = local_78;
        lVar4 = 2;
        lVar9 = 2;
        do {
          *pbVar5 = 0;
          pbVar5 = pbVar5 + 0x20;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar9 = 2;
        puVar3 = local_b8;
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 0x20;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar9 = *(longlong *)(param_1 + 0x30);
        (**(code **)(*plVar7 + 0x58))
                  (plVar7,lVar9 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x540,
                   local_78);
        (**(code **)(*plVar7 + 0x58))
                  (plVar7,lVar9 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x548,
                   local_58);
        lVar9 = *(longlong *)(param_1 + 0x30);
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x58))
                  (lVar2 + 0x20,lVar9 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x540,
                   local_b8);
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x58))
                  (lVar2 + 0x20,lVar9 + 0xe8,
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x548,
                   local_98);
        FUN_143410ec0(local_118,local_b8);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        dVar12 = (double)FUN_143411a90(local_118,uVar11);
        local_110 = (double)FUN_143411a90(local_78,uVar11);
        if (4 < local_118[0]) {
          FUN_143411150(local_118);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        local_110 = dVar12 - local_110;
        local_118[0] = 3;
        dVar12 = (double)FUN_143411a90(local_118,uVar11);
        local_110 = (double)FUN_143411a90(local_118,uVar11);
        local_110 = local_110 * dVar12;
        local_118[0] = 3;
        FUN_143410ec0(local_f8,local_98);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        dVar12 = (double)FUN_143411a90(local_f8,uVar11);
        local_f0 = (double)FUN_143411a90(local_58,uVar11);
        if (4 < local_f8[0]) {
          FUN_143411150(local_f8);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        local_f0 = dVar12 - local_f0;
        local_f8[0] = 3;
        dVar12 = (double)FUN_143411a90(local_f8,uVar11);
        local_f0 = (double)FUN_143411a90(local_f8,uVar11);
        local_f0 = local_f0 * dVar12;
        local_f8[0] = 3;
        FUN_1434136e0(local_118,*(undefined8 *)(param_1 + 0x30),local_f8);
        local_d8[0] = 3;
        dVar12 = (double)FUN_143411a90(local_118,*(undefined8 *)(param_1 + 0x30));
        local_d0 = _guard_xfg_dispatch_icall_nop(dVar12);
        uVar10 = FUN_143411a90(local_d8,*(undefined8 *)(param_1 + 0x30));
        FUN_1434a4b40(*(undefined8 *)(param_1 + 8),uVar10);
        if (4 < local_f8[0]) {
          FUN_143411150(local_f8);
        }
        if (4 < local_118[0]) {
          FUN_143411150(local_118);
        }
        lVar2 = 2;
        pbVar5 = local_78;
        do {
          pbVar5 = pbVar5 + -0x20;
          lVar2 = lVar2 + -1;
          if (4 < *pbVar5) {
            FUN_143411150(pbVar5);
          }
        } while (lVar2 != 0);
        do {
          pbVar6 = pbVar6 + -0x20;
          lVar4 = lVar4 + -1;
          if (4 < *pbVar6) {
            FUN_143411150(pbVar6);
          }
        } while (lVar4 != 0);
      }
      else {
        puVar3 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar3);
        *puVar3 = 0;
      }
    }
  }
  return;
}



// FUNCTION 143458b80 FUN_143458b80 body=737 status=ok
// SIG undefined FUN_143458b80(void)

void FUN_143458b80(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 local_res8 [8];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  byte local_38 [32];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  lVar6 = 0;
  lVar4 = lVar6;
  if (lVar3 != 0) {
    lVar4 = FUN_143457200(lVar3,*(undefined8 *)(param_1 + 0x30));
  }
  bVar2 = false;
  if (2 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(uint *)(param_1 + 0x3c);
    lVar8 = lVar6;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    lVar5 = FUN_143412120(lVar8);
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    lVar8 = lVar6;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    lVar8 = FUN_143412120(lVar8,lVar3);
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 2;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
    }
    FUN_143410ec0(local_38,lVar6);
    if ((lVar5 != 0) && (lVar8 != 0)) {
      FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar5,&local_68);
      FUN_1434570f0(*(undefined8 *)(param_1 + 0x30),lVar8,&local_58);
      dVar9 = (double)FUN_143411a90(local_38,*(undefined8 *)(param_1 + 0x30));
      local_48 = (local_68 - local_58) * dVar9 + local_58;
      local_40 = (local_60 - local_50) * dVar9 + local_50;
      FUN_143457670(lVar4,*(undefined8 *)(param_1 + 0x30),&local_48);
      bVar2 = true;
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    if (bVar2) goto LAB_143458e18;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_res8[0] = 0;
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,lVar3 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) + 0x540,
             &DAT_146b74650,local_res8);
  local_res8[0] = 0;
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,lVar3 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) + 0x548,
             &DAT_146b74670,local_res8);
LAB_143458e18:
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  return;
}



// FUNCTION 143458e70 FUN_143458e70 body=619 status=ok
// SIG undefined FUN_143458e70(void)

void FUN_143458e70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  double dVar7;
  double _X;
  undefined1 local_res8 [8];
  double local_78;
  double local_70;
  byte local_68 [32];
  byte local_48 [64];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  lVar5 = 0;
  lVar3 = lVar5;
  if (lVar2 != 0) {
    lVar3 = FUN_143457200(lVar2,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) < 2) {
    local_res8[0] = 0;
    lVar2 = *(longlong *)(param_1 + 0x30);
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar2 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) + 0x540,
               &DAT_146b74650,local_res8);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar2 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) + 0x548,
               &DAT_146b74670,local_res8);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x3c);
    lVar4 = lVar5;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    FUN_143410ec0(local_48,lVar4);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    FUN_143410ec0(local_68,lVar5);
    dVar7 = (double)FUN_143411a90(local_48,*(undefined8 *)(param_1 + 0x30));
    _X = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
    local_78 = _guard_xfg_dispatch_icall_nop(_X);
    local_78 = local_78 * dVar7;
    local_70 = _guard_xfg_dispatch_icall_nop(_X);
    local_70 = local_70 * dVar7;
    FUN_143457670(lVar3,*(undefined8 *)(param_1 + 0x30),&local_78);
    if (4 < local_68[0]) {
      FUN_143411150(local_68);
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  return;
}



// FUNCTION 1434590f0 FUN_1434590f0 body=157 status=ok
// SIG undefined FUN_1434590f0(void)

undefined8 * FUN_1434590f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_1434591a0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0e378;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_interpolate_145b08330,7);
  return param_1;
}



// FUNCTION 1434591a0 FUN_1434591a0 body=600 status=ok
// SIG undefined FUN_1434591a0(void)

void FUN_1434591a0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x10)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar2 != '\0')) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar9 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
    lVar4 = 0;
    if (lVar9 != 0) {
      lVar4 = FUN_143457200(lVar9,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar9 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar6 = local_48;
    lVar8 = 2;
    lVar5 = 2;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar11 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar9;
    if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
    }
    FUN_143411240(local_48,lVar7);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar11 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar11 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar11 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar11 >> 5) * 8);
      }
      FUN_143411240(local_28,lVar9);
    }
    lVar9 = *(longlong *)(param_1 + 0x30);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
              (lVar4 + 0x20,lVar9 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x540,
               local_48,local_res8);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
              (lVar4 + 0x20,lVar9 + 0xe8,
               *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18) + 0x548,
               local_28,local_res8);
    pbVar10 = &stack0xfffffffffffffff8;
    do {
      pbVar10 = pbVar10 + -0x20;
      lVar8 = lVar8 + -1;
      if (4 < *pbVar10) {
        FUN_143411150(pbVar10);
      }
    } while (lVar8 != 0);
  }
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
    return;
  }
  return;
}



// FUNCTION 143459400 FUN_143459400 body=60 status=ok
// SIG undefined FUN_143459400(void)

void FUN_143459400(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_143457200(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143459450 FUN_143459450 body=749 status=ok
// SIG undefined FUN_143459450(void)

longlong * FUN_143459450(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar3 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar3;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar4 = puVar2[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_1434591a0;
    lVar4 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar4;
    *puVar2 = &PTR_LAB_145b0e378;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_58,&PTR_s_interpolate_145b08330,7);
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_1434577f0(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,0xe,&local_res8);
  local_40[0] = *param_1;
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  (**(code **)(*plVar7 + 0x50))
            (plVar7,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1a8,local_48,
             &local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 143459750 FUN_143459750 body=102 status=ok
// SIG undefined FUN_143459750(void)

undefined8 * FUN_143459750(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0e400;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x12);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434597c0 FUN_1434597c0 body=103 status=ok
// SIG undefined FUN_1434597c0(void)

undefined8 * FUN_1434597c0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495140();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0e4a8;
  param_1[4] = &PTR_LAB_145b0e4f0;
  param_1[0xd] = &PTR_LAB_145b0e598;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addListener_145b08200,local_res8);
  return param_1;
}



// FUNCTION 143459830 FUN_143459830 body=216 status=ok
// SIG undefined FUN_143459830(void)

undefined1 * FUN_143459830(undefined1 *param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  *param_1 = 0;
  lVar1 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x38),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                        0x1b0,0,0xffffffff);
  local_28 = (double)*param_3;
  local_20 = (double)param_3[1];
  local_18 = (double)param_3[2];
  local_10 = (double)param_3[3];
  FUN_143451780(lVar1,param_2,&local_28);
  FUN_143412aa0(param_1,lVar1);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80(lVar1);
  }
  return param_1;
}



// FUNCTION 143459910 FUN_143459910 body=649 status=ok
// SIG undefined FUN_143459910(void)

undefined8 * FUN_143459910(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined1 local_30;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&PTR_LAB_145b0aef8;
  param_1[0xd] = Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor;
  uVar3 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(plVar1,param_2,uVar3);
  param_1[0xe] = param_3;
  *param_1 = &PTR_LAB_145b0e5a0;
  *plVar1 = (longlong)&PTR_LAB_145b0e628;
  if (plVar1 != (longlong *)0x0) {
    FUN_14340b610(plVar1,param_2,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_2,plVar1);
  local_res8[0] = 0;
  local_38[0] = 10;
  FUN_143415510(plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x528,local_38
                ,local_res8);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_res8[0] = 0;
  local_38[0] = 10;
  FUN_143415510(plVar1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x530,local_38
                ,local_res8);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_38[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "scaleMode",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_38[0] = 10;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "align",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_38[0] = 2;
  local_30 = 1;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "showMenu",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return param_1;
}



// FUNCTION 143459ba0 FUN_143459ba0 body=391 status=ok
// SIG undefined FUN_143459ba0(void)

undefined8 FUN_143459ba0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  float *pfVar3;
  longlong *plVar4;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  byte local_38 [32];
  
  if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
    cVar1 = FUN_14349e5e0(param_2 + 0xe8,param_3,"visibleRect");
    if (cVar1 == '\0') {
      cVar1 = FUN_14349e5e0(param_2 + 0xe8,param_3,"safeRect");
      if (cVar1 == '\0') {
        cVar1 = FUN_14349e5e0(param_2 + 0xe8,param_3,"originalRect");
        if (cVar1 == '\0') goto LAB_143459cf5;
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10) + 8))()
        ;
        (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
        (**(code **)(*plVar4 + 0x98))(plVar4,&local_48);
        if ((fStack_40 <= local_48) || (fStack_3c <= fStack_44)) {
          plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
          pfVar3 = (float *)(**(code **)(*plVar4 + 0x90))(plVar4,local_38);
          local_48 = *pfVar3;
          fStack_44 = pfVar3[1];
          fStack_40 = pfVar3[2];
          fStack_3c = pfVar3[3];
        }
      }
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
      (**(code **)(*plVar4 + 0x90))(plVar4,&local_48);
    }
    uVar2 = FUN_143459830(local_38,param_2,&local_48);
    FUN_143411240(param_4,uVar2);
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    uVar2 = 1;
  }
  else {
LAB_143459cf5:
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 143459d30 FUN_143459d30 body=652 status=ok
// SIG undefined FUN_143459d30(void)

undefined8 FUN_143459d30(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar7 = *param_3;
    bVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x528) + 0x10) == *(longlong *)(lVar7 + 0x10);
  }
  else {
    lVar7 = *param_3;
    bVar8 = *(longlong *)(lVar4 + 0x528) == lVar7;
  }
  if (bVar8) {
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x108) -
            *(float *)(*(longlong *)(param_1 + 0x50) + 0x100);
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar7 + 0x10) == 0) {
        FUN_14335f970(lVar7);
      }
      bVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x530) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar8 = *(longlong *)(lVar4 + 0x530) == lVar7;
    }
    if (!bVar8) {
      cVar1 = FUN_14349e5e0(param_2,param_3);
      if (cVar1 == '\0') {
        cVar1 = FUN_14349e5e0(param_2,param_3);
        if (cVar1 == '\0') {
          uVar5 = FUN_1434158c0(param_1,param_2,param_3,param_4);
          return uVar5;
        }
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x88))();
        switch(uVar3) {
        case 1:
          pcVar6 = "T";
          break;
        case 2:
          pcVar6 = "B";
          break;
        case 3:
          pcVar6 = "L";
          break;
        case 4:
          pcVar6 = "R";
          break;
        case 5:
          pcVar6 = "LT";
          break;
        case 6:
          pcVar6 = "TR";
          break;
        case 7:
          pcVar6 = "LB";
          break;
        case 8:
          pcVar6 = "RB";
          break;
        default:
          pcVar6 = "";
        }
        lVar7 = -1;
        lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
        do {
          lVar7 = lVar7 + 1;
        } while (pcVar6[lVar7] != '\0');
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))();
        if (iVar2 == 0) {
          pcVar6 = "noScale";
        }
        else if (iVar2 == 2) {
          pcVar6 = "exactFit";
        }
        else if (iVar2 == 3) {
          pcVar6 = "noBorder";
        }
        else {
          pcVar6 = "showAll";
        }
        lVar7 = -1;
        lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
        do {
          lVar7 = lVar7 + 1;
        } while (pcVar6[lVar7] != '\0');
      }
      lVar4 = FUN_143360950(*(undefined8 *)(lVar4 + 0x618),pcVar6,lVar7,0);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 5;
      *(longlong *)(param_4 + 8) = lVar4;
      iVar2 = *(int *)(lVar4 + 0x18);
      *(int *)(lVar4 + 0x18) = iVar2;
      if (iVar2 != 0) {
        return 1;
      }
      FUN_14335f920(lVar4);
      return 1;
    }
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x10c) -
            *(float *)(*(longlong *)(param_1 + 0x50) + 0x104);
  }
  if (4 < *param_4) {
    FUN_143411150(param_4);
  }
  *param_4 = 4;
  *(int *)(param_4 + 8) = (int)(fVar9 * 0.05);
  return 1;
}



// FUNCTION 143459ff0 FUN_143459ff0 body=619 status=ok
// SIG undefined FUN_143459ff0(void)

undefined8
FUN_143459ff0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffffc8;
  longlong local_28 [2];
  
  cVar2 = FUN_14349e5e0(param_2 + 0xe8,param_3,"scaleMode");
  if (cVar2 != '\0') {
    FUN_143411540(param_4,&local_res10,param_2,0xffffffff,
                  in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))();
    cVar2 = FUN_14349e690(param_2 + 0xe8,&local_res10,"noScale");
    if (cVar2 == '\0') {
      cVar2 = FUN_14349e690(param_2 + 0xe8,&local_res10,"exactFit");
      if (cVar2 == '\0') {
        cVar2 = FUN_14349e690(param_2 + 0xe8,&local_res10,"noBorder");
        iVar5 = 1;
        if (cVar2 != '\0') {
          iVar5 = 3;
        }
      }
      else {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x70))(*(longlong **)(param_1 + 0x50),iVar5);
    if ((iVar3 != iVar5) && (iVar5 == 0)) {
      FUN_14345a360(param_1 + -0x20,param_2);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return 1;
    }
    FUN_14335f920();
    return 1;
  }
  cVar2 = FUN_14349e5e0(param_2 + 0xe8,param_3,"align");
  if (cVar2 == '\0') {
    uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  }
  FUN_143411540(param_4,local_28,param_2,0xffffffff,in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  local_res10 = FUN_14335fe70(local_28);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  piVar1 = (int *)(local_28[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  iVar3 = 0;
  uVar4 = FUN_14335fa60(&local_res10);
  if (uVar4 == 0) {
LAB_14345a1fc:
    uVar7 = 0;
    goto LAB_14345a1fe;
  }
  iVar5 = FUN_14335fad0(&local_res10,0);
  uVar7 = 1;
  if (1 < uVar4) {
    iVar3 = FUN_14335fad0(&local_res10,1);
  }
  if (iVar5 == 0x54) {
    if (iVar3 != 0x4c) {
      if (iVar3 != 0x52) goto LAB_14345a1fe;
LAB_14345a1c7:
      uVar7 = 6;
      goto LAB_14345a1fe;
    }
  }
  else {
    if (iVar5 != 0x4c) {
      if (iVar5 == 0x52) {
        if (iVar3 == 0x54) goto LAB_14345a1c7;
        if (iVar3 != 0x42) {
          uVar7 = 4;
          goto LAB_14345a1fe;
        }
      }
      else {
        if (iVar5 != 0x42) goto LAB_14345a1fc;
        if (iVar3 == 0x4c) goto LAB_14345a1f5;
        if (iVar3 != 0x52) {
          uVar7 = 2;
          goto LAB_14345a1fe;
        }
      }
      uVar7 = 8;
      goto LAB_14345a1fe;
    }
    if (iVar3 != 0x54) {
      if (iVar3 != 0x42) {
        uVar7 = 3;
        goto LAB_14345a1fe;
      }
LAB_14345a1f5:
      uVar7 = 7;
      goto LAB_14345a1fe;
    }
  }
  uVar7 = 5;
LAB_14345a1fe:
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x80))(*(longlong **)(param_1 + 0x50),uVar7);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return 1;
  }
  FUN_14335f920();
  return 1;
}



// FUNCTION 14345a270 FUN_14345a270 body=231 status=ok
// SIG undefined FUN_14345a270(void)

undefined8
FUN_14345a270(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined7 uVar4;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar5 = *param_3;
    lVar2 = *(longlong *)(lVar5 + 0x10);
    bVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x528) + 0x10) == lVar2;
  }
  else {
    lVar5 = *param_3;
    bVar6 = *(longlong *)(lVar1 + 0x528) == lVar5;
  }
  uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
  if (!bVar6) {
    lVar2 = *param_2;
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        FUN_14335f970(lVar5);
      }
      lVar2 = *param_3;
      bVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x530) + 0x10) == *(longlong *)(lVar2 + 0x10);
    }
    else {
      bVar6 = *(longlong *)(lVar1 + 0x530) == lVar5;
    }
    uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
    if (!bVar6) {
      uVar3 = FUN_143415510(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
  }
  return CONCAT71(uVar4,1);
}



// FUNCTION 14345a360 FUN_14345a360 body=623 status=ok
// SIG undefined FUN_14345a360(void)

void FUN_14345a360(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined **local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  byte local_38 [32];
  
  if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_68);
    local_38[0] = 0;
    lVar5 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x38),
                          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                          + 0x1b0,0,0xffffffff);
    local_58 = (undefined **)(double)local_68;
    local_50 = (double)local_64;
    local_48 = (double)local_60;
    local_40 = (double)local_5c;
    FUN_143451780(lVar5,param_2,&local_58);
    FUN_143412aa0(local_38,lVar5);
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
    if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
      FUN_1434a29d0(param_2 + 8);
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(param_2 + 8),local_38);
    }
    lVar5 = *(longlong *)(param_2 + 8);
    lVar6 = param_1 + 0x20;
    if (param_1 == 0) {
      lVar6 = 0;
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x30);
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"onResize",8);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    if (lVar6 != 0) {
      local_58 = &PTR_FUN_145b11e98;
      local_50 = (double)CONCAT44(iVar2 * 0x20 + -0x20 + (int)(lVar5 - lVar4 >> 5),1);
      FUN_1434649e0(param_2,lVar6,&local_res10,&local_58);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < **(byte **)(param_2 + 8)) {
      FUN_143411150();
    }
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1434a25c0(param_2 + 8);
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
  }
  else {
    lVar5 = param_1 + 0x20;
    if (param_1 == 0) {
      lVar5 = 0;
    }
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"onResize",8,0);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    if (lVar5 != 0) {
      local_50 = 0.0;
      local_58 = &PTR_FUN_145b11e98;
      FUN_1434649e0(param_2,lVar5,&local_res10,&local_58);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 14345a5e0 FUN_14345a5e0 body=137 status=ok
// SIG undefined FUN_14345a5e0(void)

void FUN_14345a5e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte local_28 [32];
  
  local_28[0] = 0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  lVar2 = *plVar4;
  plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x60) + 0x20);
  cVar1 = (**(code **)(*plVar3 + 0x58))
                    (plVar3,plVar4,*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x1c8,
                     local_28);
  if ((cVar1 != '\0') && (local_28[0] != 0xb)) {
    lVar2 = FUN_143412120(local_28,*(undefined8 *)(param_1 + 0x30));
    if ((lVar2 != 0) && (lVar2 != -0x20)) {
      FUN_14345a360(lVar2,*(undefined8 *)(param_1 + 0x30));
    }
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 14345a670 GlobalCtor body=27 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 14345a6a0 FUN_14345a6a0 body=456 status=ok
// SIG undefined FUN_14345a6a0(void)

longlong * FUN_14345a6a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_res8;
  longlong local_38;
  undefined1 local_30;
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_30 = 8;
  local_38 = param_2;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x78)
  ;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_143459910(lVar1,&local_38,*(undefined8 *)(param_2 + 0x28));
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = FUN_14341b750(param_2,1);
    FUN_143495140(puVar3,&local_38,uVar4,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar3 = &PTR_LAB_145b0e4a8;
    puVar3[4] = &PTR_LAB_145b0e4f0;
    puVar3[0xd] = &PTR_LAB_145b0e598;
    FUN_143422ee0(puVar3 + 0xd,puVar3,&local_38,&PTR_s_addListener_145b08200,&local_res8);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_res8 = puVar3;
  FUN_1434a4b90(param_2,0x12,&local_res8);
  local_20[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_20,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_38,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1c8,
             local_28,&local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  return param_1;
}



// FUNCTION 14345a870 FUN_14345a870 body=61 status=ok
// SIG undefined FUN_14345a870(void)

void FUN_14345a870(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),3);
                    /* WARNING: Could not recover jumptable at 0x00014345a8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 14345a8c0 FUN_14345a8c0 body=135 status=ok
// SIG undefined FUN_14345a8c0(void)

undefined8 * FUN_14345a8c0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0e6d0;
  param_1[4] = &PTR_LAB_145b0e718;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x138);
  param_1[0xd] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  uVar3 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),3);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar3);
  return param_1;
}



// FUNCTION 14345a950 FUN_14345a950 body=130 status=ok
// SIG undefined FUN_14345a950(void)

undefined8 * FUN_14345a950(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0e6d0;
  param_1[4] = &PTR_LAB_145b0e718;
  lVar2 = *param_3;
  param_1[0xd] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  uVar3 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),3);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar3);
  return param_1;
}



// FUNCTION 14345a9e0 FUN_14345a9e0 body=204 status=ok
// SIG undefined FUN_14345a9e0(void)

bool FUN_14345a9e0(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x610) + 0x10) == *(longlong *)(*param_3 + 0x10);
  }
  else {
    bVar4 = *(longlong *)(lVar1 + 0x610) == *param_3;
  }
  if (bVar4) {
    cVar2 = FUN_1434158c0(param_1,param_2,param_3,param_4);
    if ((cVar2 == '\0') || (*param_4 == 10)) {
      uVar3 = FUN_14335fa60(param_1 + 0x48);
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 4;
      *(undefined4 *)(param_4 + 8) = uVar3;
    }
    bVar4 = true;
  }
  else {
    cVar2 = FUN_1434158c0(param_1,param_2,param_3,param_4);
    bVar4 = cVar2 != '\0';
  }
  return bVar4;
}



// FUNCTION 14345aad0 FUN_14345aad0 body=79 status=ok
// SIG undefined FUN_14345aad0(void)

void FUN_14345aad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *local_res8 [4];
  
  FUN_143411540(param_3,local_res8,param_2,0xffffffff,0);
  FUN_1433601c0(param_1 + 0x68,*local_res8[0]);
  piVar1 = (int *)(local_res8[0] + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8[0]);
    return;
  }
  return;
}



// FUNCTION 14345ab50 FUN_14345ab50 body=166 status=ok
// SIG undefined FUN_14345ab50(void)

undefined8 * FUN_14345ab50(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  FUN_143495aa0();
  *param_1 = &PTR_LAB_145b0e7c0;
  param_1[4] = &PTR_LAB_145b0e808;
  param_1[0xe] = &PTR_LAB_145b0e8b0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3d8);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(param_1[0xd] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0xd] = lVar2;
  local_res8[0] = 1;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_charAt_145b07cd0,local_res8);
  return param_1;
}



// FUNCTION 14345ac00 FUN_14345ac00 body=353 status=ok
// SIG undefined FUN_14345ac00(void)

void FUN_14345ac00(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  longlong local_res8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 8)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x10) + 0x48;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = 0x68;
  }
  lVar9 = 0;
  local_res8 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                + 0x138);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
  }
  dVar10 = (double)FUN_143411a90(lVar9);
  iVar5 = (int)dVar10;
  if ((-1 < iVar5) && (iVar6 = FUN_14335fa60(lVar8), iVar5 < iVar6)) {
    uVar7 = FUN_14335fad0(lVar8,iVar5);
    lVar8 = FUN_14335fc20(&local_res8,uVar7);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    local_res8 = lVar8;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar8);
    }
  }
  pbVar4 = *(byte **)(param_1 + 8);
  if (4 < *pbVar4) {
    FUN_143411150(pbVar4);
  }
  *pbVar4 = 5;
  *(longlong *)(pbVar4 + 8) = local_res8;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 14345ad70 FUN_14345ad70 body=298 status=ok
// SIG undefined FUN_14345ad70(void)

void FUN_14345ad70(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 8) {
      lVar8 = *(longlong *)(param_1 + 0x10) + 0x48;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = 0x68;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        lVar9 = 0;
        uVar7 = *(uint *)(param_1 + 0x3c);
        if (uVar7 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar9);
        iVar5 = (int)dVar3;
        if (-1 < iVar5) {
          iVar6 = FUN_14335fa60(lVar8);
          if (iVar5 < iVar6) {
            uVar7 = FUN_14335fad0(lVar8,iVar5);
            FUN_1434a4b40(*(undefined8 *)(param_1 + 8),(double)uVar7);
            return;
          }
        }
      }
      uVar4 = Scaleform::GFx::NumberUtil::NaN();
      pbVar2 = *(byte **)(param_1 + 8);
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *(undefined8 *)(pbVar2 + 8) = uVar4;
      *pbVar2 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345aea0 FUN_14345aea0 body=425 status=ok
// SIG undefined FUN_14345aea0(void)

void FUN_14345aea0(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *local_res8;
  undefined1 *local_38;
  undefined8 local_30;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 8)) {
    uVar9 = 0;
    uVar7 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar7 = uVar9;
    }
    FUN_1432c5a90(&local_38,**(undefined8 **)(uVar7 + 0x68),
                  *(undefined4 *)(*(undefined8 **)(uVar7 + 0x68) + 4),DAT_146b62f28);
    uVar7 = uVar9;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - (int)uVar7;
        uVar10 = uVar9;
        if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
          uVar10 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        FUN_143411540(uVar10,&local_res8,lVar5,0xffffffff,0);
        puVar3 = local_res8;
        Scaleform::StringBuffer::AppendString(&local_38,*local_res8,0xffffffffffffffff);
        piVar1 = (int *)(puVar3 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(puVar3);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0x38));
    }
    puVar8 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar8 = local_38;
    }
    lVar5 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                           + 0x618),puVar8,local_30);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 5;
    *(longlong *)(pbVar2 + 8) = lVar5;
    iVar4 = *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x18) = iVar4;
    if (iVar4 == 0) {
      FUN_14335f920(lVar5);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_38);
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345b050 FUN_14345b050 body=647 status=ok
// SIG undefined FUN_14345b050(void)

void FUN_14345b050(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_38 [2];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 8)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x38) < 1) {
    pbVar3 = *(byte **)(param_1 + 8);
    if (4 < *pbVar3) {
      FUN_143411150(pbVar3);
    }
    *pbVar3 = 3;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0xf0;
    pbVar3[0xf] = 0xbf;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar12 = 0;
    uVar13 = uVar12;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      uVar13 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    FUN_143411540(uVar13,local_38,lVar4,0xffffffff,0);
    iVar5 = FUN_14335fa60(local_38);
    if (iVar5 == 0) {
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 3;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
    else {
      iVar5 = 0;
      local_res8 = *local_38[0];
      puVar9 = (undefined8 *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        puVar9 = (undefined8 *)&DAT_00000068;
      }
      local_res10 = *(longlong *)*puVar9;
      if (1 < *(int *)(param_1 + 0x38)) {
        uVar10 = FUN_1434141c0(param_1,1);
        dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
        iVar5 = (int)dVar14;
      }
      iVar6 = FUN_143307250(&local_res8);
      if (iVar6 == 0) {
        local_res8 = local_res8 + -1;
      }
      while (iVar7 = FUN_143307250(&local_res10), iVar7 != 0) {
        iVar11 = (int)uVar12;
        if ((iVar5 <= iVar11) && (iVar7 == iVar6)) {
          local_res18 = local_res10;
          local_res20 = local_res8;
          do {
            iVar7 = FUN_143307250(&local_res18);
            if (iVar7 == 0) {
              local_res18 = local_res18 + -1;
            }
            iVar8 = FUN_143307250(&local_res20);
            if (iVar8 == 0) {
              local_res20 = local_res20 + -1;
            }
            if (iVar7 == 0) break;
            if (iVar8 == 0) goto LAB_14345b24c;
          } while (iVar7 == iVar8);
          if (iVar8 == 0) {
LAB_14345b24c:
            pbVar3 = *(byte **)(param_1 + 8);
            if (4 < *pbVar3) {
              FUN_143411150(pbVar3);
            }
            *pbVar3 = 4;
            *(int *)(pbVar3 + 8) = iVar11;
            goto LAB_14345b296;
          }
          if (iVar7 == 0) {
            pbVar3 = *(byte **)(param_1 + 8);
            if (4 < *pbVar3) {
              FUN_143411150(pbVar3);
            }
            *pbVar3 = 4;
            pbVar3[8] = 0xff;
            pbVar3[9] = 0xff;
            pbVar3[10] = 0xff;
            pbVar3[0xb] = 0xff;
            goto LAB_14345b296;
          }
        }
        uVar12 = (ulonglong)(iVar11 + 1);
      }
      pbVar3 = *(byte **)(param_1 + 8);
      local_res10 = local_res10 + -1;
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 3;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0xf0;
      pbVar3[0xf] = 0xbf;
    }
LAB_14345b296:
    local_38[0] = local_38[0] + 3;
    *(int *)local_38[0] = (int)*local_38[0] + -1;
    if ((int)*local_38[0] == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14345b2e0 FUN_14345b2e0 body=619 status=ok
// SIG undefined FUN_14345b2e0(void)

void FUN_14345b2e0(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_58;
  longlong *local_50 [3];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 8) {
      if (*(int *)(param_1 + 0x38) < 1) {
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 3;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0xf0;
        pbVar2[0xf] = 0xbf;
      }
      else {
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          puVar9 = (undefined8 *)&DAT_00000068;
        }
        lVar12 = 0;
        local_50[0] = (longlong *)*puVar9;
        *(int *)(local_50[0] + 3) = (int)local_50[0][3] + 1;
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(uint *)(param_1 + 0x3c);
        if (uVar5 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          lVar12 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        FUN_143411540(lVar12,&local_58,lVar3,0xffffffff,0);
        iVar4 = FUN_14335fa60(&local_58);
        if (iVar4 == 0) {
          uVar5 = FUN_14335fa60(local_50);
          pbVar2 = *(byte **)(param_1 + 8);
          if (4 < *pbVar2) {
            FUN_143411150(pbVar2);
          }
          *(double *)(pbVar2 + 8) = (double)uVar5;
          *pbVar2 = 3;
        }
        else {
          iVar4 = 0x7ffffff;
          local_res10 = *local_50[0];
          local_res8 = *local_58;
          if (1 < *(int *)(param_1 + 0x38)) {
            uVar10 = FUN_1434141c0(param_1,1);
            dVar14 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
            iVar4 = (int)dVar14;
          }
          iVar6 = FUN_143307250(&local_res8);
          iVar11 = 0;
          iVar13 = -1;
          if (iVar6 == 0) {
            local_res8 = local_res8 + -1;
            iVar11 = 0;
            iVar13 = -1;
          }
          while( true ) {
            iVar7 = FUN_143307250(&local_res10);
            if (iVar7 == 0) break;
            if ((iVar11 <= iVar4) && (iVar7 == iVar6)) {
              local_res18 = local_res10;
              local_res20 = local_res8;
              do {
                iVar7 = FUN_143307250(&local_res18);
                if (iVar7 == 0) {
                  local_res18 = local_res18 + -1;
                }
                iVar8 = FUN_143307250(&local_res20);
                if (iVar8 == 0) {
                  local_res20 = local_res20 + -1;
                }
                if (iVar7 == 0) break;
                if (iVar8 == 0) goto LAB_14345b4c4;
              } while (iVar7 == iVar8);
              if (iVar8 == 0) {
LAB_14345b4c4:
                iVar13 = iVar11;
              }
              if (iVar7 == 0) goto LAB_14345b4d3;
            }
            iVar11 = iVar11 + 1;
          }
          local_res10 = local_res10 + -1;
LAB_14345b4d3:
          pbVar2 = *(byte **)(param_1 + 8);
          if (4 < *pbVar2) {
            FUN_143411150(pbVar2);
          }
          *pbVar2 = 4;
          *(int *)(pbVar2 + 8) = iVar13;
        }
        local_58 = local_58 + 3;
        *(int *)local_58 = (int)*local_58 + -1;
        if ((int)*local_58 == 0) {
          FUN_14335f920();
        }
        plVar1 = local_50[0] + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920();
          return;
        }
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345b560 FUN_14345b560 body=379 status=ok
// SIG undefined FUN_14345b560(void)

void FUN_14345b560(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 *local_res8;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x68) == '\x01') {
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar7 != 8)) {
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar10 = *(longlong *)(param_1 + 0x30);
      lVar11 = 0;
      uVar2 = *(uint *)(param_1 + 0x3c);
      if (uVar2 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143411540(lVar11,&local_res8,lVar10,0xffffffff,0);
      bVar12 = true;
      if (1 < *(int *)(param_1 + 0x38)) {
        uVar9 = FUN_1434141c0(param_1,1);
        cVar6 = FUN_143411fd0(uVar9,*(undefined8 *)(param_1 + 0x30));
        bVar12 = cVar6 == '\0';
      }
      uVar9 = *local_res8;
      uVar8 = FUN_14335fa60(&local_res8);
      lVar10 = lVar4 + 0x48;
      if (lVar4 == 0) {
        lVar10 = 0x68;
      }
      iVar7 = FUN_14335ff80(lVar10,uVar9,uVar8,bVar12);
      pbVar5 = *(byte **)(param_1 + 8);
      if (4 < *pbVar5) {
        FUN_143411150(pbVar5);
      }
      *pbVar5 = 3;
      *(double *)(pbVar5 + 8) = (double)iVar7;
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 14345b6f0 FUN_14345b6f0 body=456 status=ok
// SIG undefined FUN_14345b6f0(void)

void FUN_14345b6f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  longlong local_res8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 8)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
    return;
  }
  lVar7 = 0;
  iVar4 = 0;
  lVar11 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar11 = lVar7;
  }
  iVar8 = -1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    lVar10 = lVar7;
    if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    dVar12 = (double)FUN_143411a90(lVar10);
    iVar4 = (int)dVar12;
    if (iVar4 < 0) {
      iVar5 = FUN_14335fa60(lVar11 + 0x68);
      iVar4 = iVar4 + iVar5;
    }
  }
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    dVar12 = (double)FUN_143411a90(lVar7);
    iVar8 = (int)dVar12;
    if (iVar8 < 0) {
      iVar5 = FUN_14335fa60(lVar11 + 0x68);
      iVar8 = iVar8 + iVar5;
    }
    if (iVar8 < iVar4) {
      pbVar3 = *(byte **)(param_1 + 8);
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 5;
      lVar11 = *(longlong *)(lVar11 + 0x138);
      *(longlong *)(pbVar3 + 8) = lVar11;
      piVar1 = (int *)(lVar11 + 0x18);
      *piVar1 = *piVar1 + 1;
      return;
    }
    iVar8 = iVar8 - iVar4;
  }
  plVar6 = (longlong *)FUN_14345c050(&local_res8,lVar11 + 0x68,iVar4,iVar8);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *pbVar3 = 5;
  lVar11 = *plVar6;
  *(longlong *)(pbVar3 + 8) = lVar11;
  piVar1 = (int *)(lVar11 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14345b8c0 FUN_14345b8c0 body=471 status=ok
// SIG undefined FUN_14345b8c0(void)

void FUN_14345b8c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  longlong *local_res8;
  uint in_stack_ffffffffffffffd8;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 8) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      plVar3 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                + 0x138);
      *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
      plVar5 = plVar3;
      lVar6 = lVar8;
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        uVar7 = *(uint *)(param_1 + 0x3c);
        lVar9 = lVar8;
        if (uVar7 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        FUN_143411540(lVar9,&local_res8,lVar6,0xffffffff,in_stack_ffffffffffffffd8 & 0xffffff00);
        plVar5 = local_res8;
        *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
        plVar1 = plVar3 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920(plVar3);
        }
        plVar3 = plVar5 + 3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        if ((int)*plVar3 == 0) {
          FUN_14335f920(plVar5);
        }
        lVar6 = *plVar5;
      }
      iVar4 = 0x3fffffff;
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar9 = *(longlong *)(param_1 + 0x30);
        uVar7 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar7 <= (uint)(*(int *)(lVar9 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        dVar10 = (double)FUN_143411a90(lVar8);
        iVar4 = (int)dVar10;
        if ((int)dVar10 < 0) {
          iVar4 = 0;
        }
      }
      lVar8 = lVar2 + 0x48;
      if (lVar2 == 0) {
        lVar8 = 0x68;
      }
      FUN_14345c110(&local_res8,*(undefined8 *)(param_1 + 0x30),lVar8,lVar6,iVar4);
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),local_res8);
      if ((local_res8 != (longlong *)0x0) && ((*(uint *)(local_res8 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(local_res8 + 3) = *(uint *)(local_res8 + 3) - 1;
        FUN_1434a2b80(local_res8);
      }
      plVar3 = plVar5 + 3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      if ((int)*plVar3 == 0) {
        FUN_14335f920(plVar5);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345baa0 FUN_14345baa0 body=394 status=ok
// SIG undefined FUN_14345baa0(void)

void FUN_14345baa0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  longlong local_res8;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 8) {
      lVar10 = 0;
      lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = lVar10;
      }
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(uint *)(param_1 + 0x3c);
        lVar9 = lVar10;
        if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        dVar11 = (double)FUN_143411a90(lVar9);
        iVar4 = (int)dVar11;
        if (iVar4 < 0) {
          iVar5 = FUN_14335fa60(lVar7 + 0x68);
          iVar4 = iVar4 + iVar5;
        }
      }
      iVar5 = -1;
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        dVar11 = (double)FUN_143411a90(lVar10);
        iVar5 = (int)dVar11;
        if ((int)dVar11 < 0) {
          iVar5 = 0;
        }
      }
      plVar6 = (longlong *)FUN_14345c050(&local_res8,lVar7 + 0x68,iVar4,iVar5);
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 5;
      lVar7 = *plVar6;
      *(longlong *)(pbVar3 + 8) = lVar7;
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345bc30 FUN_14345bc30 body=438 status=ok
// SIG undefined FUN_14345bc30(void)

void FUN_14345bc30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  longlong local_res8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 8)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
    return;
  }
  lVar12 = 0;
  iVar4 = 0;
  lVar13 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar13 = lVar12;
  }
  iVar8 = -1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(uint *)(param_1 + 0x3c);
    lVar11 = lVar12;
    if (uVar10 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar11 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
    }
    dVar14 = (double)FUN_143411a90(lVar11);
    iVar4 = (int)dVar14;
  }
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar10 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar12 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
    }
    dVar14 = (double)FUN_143411a90(lVar12);
    iVar7 = (int)dVar14;
    iVar8 = iVar7;
    iVar9 = iVar4;
    if ((iVar7 < iVar4) &&
       (iVar5 = FUN_14335fa60(lVar13 + 0x68), iVar8 = iVar4, iVar9 = iVar7, iVar5 <= iVar4)) {
      FUN_1434a4c10(*(undefined8 *)(param_1 + 8),
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                     0x18) + 0x138);
      return;
    }
    iVar4 = 0;
    if (-1 < iVar9) {
      iVar4 = iVar9;
    }
    iVar8 = iVar8 - iVar4;
  }
  plVar6 = (longlong *)FUN_14345c050(&local_res8,lVar13 + 0x68,iVar4,iVar8);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *pbVar3 = 5;
  lVar13 = *plVar6;
  *(longlong *)(pbVar3 + 8) = lVar13;
  piVar1 = (int *)(lVar13 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14345bdf0 FUN_14345bdf0 body=146 status=ok
// SIG undefined FUN_14345bdf0(void)

void FUN_14345bdf0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 8) {
      lVar3 = *(longlong *)(param_1 + 0x10) + 0x48;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0x68;
      }
      lVar3 = Scaleform::GFx::ASConstString::ToLowerNode(lVar3);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      pbVar1 = *(byte **)(param_1 + 8);
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *pbVar1 = 5;
      *(longlong *)(pbVar1 + 8) = lVar3;
      iVar2 = *(int *)(lVar3 + 0x18);
      *(int *)(lVar3 + 0x18) = iVar2;
      if (iVar2 == 0) {
        FUN_14335f920(lVar3);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345be90 FUN_14345be90 body=123 status=ok
// SIG undefined FUN_14345be90(void)

void FUN_14345be90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 8) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 5;
      plVar5 = (longlong *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        plVar5 = (longlong *)&DAT_00000068;
      }
      lVar2 = *plVar5;
      *(longlong *)(pbVar3 + 8) = lVar2;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345bf20 FUN_14345bf20 body=146 status=ok
// SIG undefined FUN_14345bf20(void)

void FUN_14345bf20(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 8) {
      lVar3 = *(longlong *)(param_1 + 0x10) + 0x48;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0x68;
      }
      lVar3 = FUN_14335fe70(lVar3);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      pbVar1 = *(byte **)(param_1 + 8);
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *pbVar1 = 5;
      *(longlong *)(pbVar1 + 8) = lVar3;
      iVar2 = *(int *)(lVar3 + 0x18);
      *(int *)(lVar3 + 0x18) = iVar2;
      if (iVar2 == 0) {
        FUN_14335f920(lVar3);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345bfc0 FUN_14345bfc0 body=123 status=ok
// SIG undefined FUN_14345bfc0(void)

void FUN_14345bfc0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 8) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      pbVar3 = *(byte **)(param_1 + 8);
      if (4 < *pbVar3) {
        FUN_143411150(pbVar3);
      }
      *pbVar3 = 5;
      plVar5 = (longlong *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        plVar5 = (longlong *)&DAT_00000068;
      }
      lVar2 = *plVar5;
      *(longlong *)(pbVar3 + 8) = lVar2;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","String");
  return;
}



// FUNCTION 14345c050 FUN_14345c050 body=174 status=ok
// SIG undefined FUN_14345c050(void)

longlong * FUN_14345c050(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_4 == 0) {
    lVar3 = *(longlong *)(*param_2 + 8);
    *param_1 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  iVar4 = 0;
  if (-1 < param_3) {
    iVar4 = param_3;
  }
  iVar2 = FUN_14335fa60(param_2);
  if (iVar4 < iVar2) {
    if ((param_4 < 0) || (iVar2 < iVar4 + param_4)) {
      param_4 = iVar2 - iVar4;
    }
    lVar3 = FUN_14335fd10(param_2,iVar4,iVar4 + param_4);
    *param_1 = lVar3;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  }
  else {
    lVar3 = *(longlong *)(*param_2 + 8);
    *param_1 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 14345c110 FUN_14345c110 body=1411 status=ok
// SIG undefined FUN_14345c110(void)

longlong *
FUN_14345c110(longlong *param_1,longlong param_2,longlong *param_3,char *param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  char *local_res20;
  undefined8 local_98;
  longlong local_90;
  char *local_88;
  longlong local_80;
  longlong local_78;
  byte local_70 [8];
  longlong *local_68;
  
  uVar15 = 0xffffffffffffffff;
  local_res20 = param_4;
  lVar7 = FUN_14341a5c0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x60),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                        0x148,0,0xffffffff);
  *param_1 = lVar7;
  param_3 = (longlong *)*param_3;
  iVar4 = 0;
  if (-1 < param_5) {
    iVar4 = param_5;
  }
  lVar7 = *param_3;
  local_90 = lVar7;
  if (param_4 == (char *)0x0) {
    *(int *)(param_3 + 3) = (int)param_3[3] + 1;
    local_70[0] = 5;
    local_68 = param_3;
    FUN_14345e390(*param_1,local_70);
    if (local_70[0] < 5) {
      return param_1;
    }
    FUN_143411150(local_70);
    return param_1;
  }
  if (*param_4 == '\0') {
    FUN_1432c2f70(&local_res20);
    do {
      iVar4 = FUN_143307250(&local_90);
      if (iVar4 == 0) {
        local_90 = local_90 + -1;
        uVar15 = (ulonglong)local_res20 & 0xfffffffffffffffc;
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffffffffffff)
        ;
        if (iVar4 != 1) {
          return param_1;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
        return param_1;
      }
      FUN_1432c3510(&local_res20);
      FUN_1432c3700(&local_res20,iVar4);
      lVar8 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618)
                            ,(longlong)((ulonglong)local_res20 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)((ulonglong)local_res20 & 0xfffffffffffffffc) &
                            0x7fffffffffffffff);
      param_5 = 0x143;
      bVar16 = 5;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
      lVar7 = *param_1;
      local_70[0] = 5;
      local_68 = (longlong *)lVar8;
      lVar9 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar7,0x20,&param_5);
      uVar10 = 0;
      if (lVar9 != 0) {
        uVar10 = FUN_143410ec0(lVar9);
        bVar16 = local_70[0];
      }
      lVar9 = *(longlong *)(lVar7 + 0x78);
      plVar13 = (longlong *)(lVar7 + 0x70);
      uVar15 = lVar9 + 1;
      if (uVar15 < *(ulonglong *)(lVar7 + 0x78)) {
        uVar11 = uVar15;
        if (uVar15 < *(ulonglong *)(lVar7 + 0x80) >> 1) {
LAB_14345c2cf:
          FUN_1432cfd30(plVar13,plVar13,uVar11);
        }
      }
      else if (*(ulonglong *)(lVar7 + 0x80) < uVar15) {
        uVar11 = (uVar15 >> 2) + uVar15;
        goto LAB_14345c2cf;
      }
      *(ulonglong *)(lVar7 + 0x78) = uVar15;
      puVar2 = (undefined8 *)(*plVar13 + lVar9 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = uVar10;
      }
      if (4 < bVar16) {
        FUN_143411150(local_70);
      }
      piVar1 = (int *)(lVar8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar8);
      }
    } while( true );
  }
  param_5 = 0;
  do {
    lVar8 = local_90;
    local_78 = local_90;
    lVar9 = 0;
    local_88 = param_4;
    do {
      local_80 = local_90;
      iVar5 = FUN_143307250(&local_90);
      if (iVar5 == 0) {
        local_90 = local_90 + -1;
      }
      iVar6 = FUN_143307250(&local_88);
      if (iVar6 == 0) {
        local_88 = local_88 + -1;
      }
      if (lVar9 == 0) {
        lVar9 = local_90;
      }
      lVar3 = local_90;
      if (iVar5 == 0) break;
      if (iVar6 == 0) goto LAB_14345c3d0;
      lVar3 = lVar9;
    } while (iVar5 == iVar6);
    local_90 = lVar3;
    if (iVar6 == 0) {
LAB_14345c3d0:
      if (iVar4 <= param_5) {
        return param_1;
      }
      if (lVar8 == 0) {
        uVar11 = 0xffffffffffffffff;
        do {
          uVar11 = uVar11 + 1;
        } while (*(char *)(lVar7 + uVar11) != '\0');
      }
      else {
        uVar11 = (ulonglong)(uint)((int)lVar8 - (int)lVar7);
      }
      iVar12 = 0;
      if (-1 < (int)uVar11) {
        iVar12 = (int)uVar11;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28);
      if (iVar12 < 1) {
        lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x138);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
      else {
        lVar7 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x618),lVar7,
                              (longlong)iVar12);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      bVar16 = 5;
      local_98 = CONCAT44(local_98._4_4_,0x143);
      local_70[0] = 5;
      lVar8 = *param_1;
      local_68 = (longlong *)lVar7;
      lVar9 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar8,0x20,&local_98);
      if (lVar9 == 0) {
        local_98 = 0;
      }
      else {
        local_98 = FUN_143410ec0(lVar9,local_70);
        bVar16 = local_70[0];
      }
      plVar13 = (longlong *)(lVar8 + 0x70);
      uVar11 = *(longlong *)(lVar8 + 0x78) + 1;
      if (uVar11 < *(ulonglong *)(lVar8 + 0x78)) {
        uVar14 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x80) >> 1) {
LAB_14345c4c5:
          FUN_1432cfd30(plVar13,plVar13,uVar14);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x80) < uVar11) {
        uVar14 = (uVar11 >> 2) + uVar11;
        goto LAB_14345c4c5;
      }
      *(ulonglong *)(lVar8 + 0x78) = uVar11;
      puVar2 = (undefined8 *)(*plVar13 + -8 + uVar11 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = local_98;
      }
      if (4 < bVar16) {
        FUN_143411150(local_70);
      }
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar7);
      }
      param_5 = param_5 + 1;
      local_90 = local_80;
      lVar8 = local_78;
      lVar7 = local_80;
    }
    uVar10 = 0;
    param_4 = local_res20;
  } while (iVar5 != 0);
  if (iVar4 <= param_5) {
    return param_1;
  }
  if (iVar6 == 0) {
    if (lVar8 == 0) {
      do {
        uVar15 = uVar15 + 1;
      } while (*(char *)(lVar7 + uVar15) != '\0');
    }
    else {
      uVar15 = (ulonglong)(uint)((int)lVar8 - (int)lVar7);
    }
  }
  else {
    do {
      uVar15 = uVar15 + 1;
    } while (*(char *)(lVar7 + uVar15) != '\0');
  }
  iVar4 = 0;
  if (-1 < (int)uVar15) {
    iVar4 = (int)uVar15;
  }
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28);
  if (iVar4 < 1) {
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x138);
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  }
  else {
    lVar7 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x618),lVar7,(longlong)iVar4
                         );
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  }
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  param_5 = 0x143;
  lVar8 = *param_1;
  local_70[0] = 5;
  local_68 = (longlong *)lVar7;
  lVar9 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar8,0x20,&param_5);
  bVar16 = 5;
  if (lVar9 != 0) {
    uVar10 = FUN_143410ec0(lVar9,local_70);
    bVar16 = local_70[0];
  }
  plVar13 = (longlong *)(lVar8 + 0x70);
  uVar15 = *(ulonglong *)(lVar8 + 0x78) + 1;
  if (uVar15 < *(ulonglong *)(lVar8 + 0x78)) {
    uVar11 = uVar15;
    if (*(ulonglong *)(lVar8 + 0x80) >> 1 <= uVar15) goto LAB_14345c63f;
  }
  else {
    if (uVar15 <= *(ulonglong *)(lVar8 + 0x80)) goto LAB_14345c63f;
    uVar11 = (uVar15 >> 2) + uVar15;
  }
  FUN_1432cfd30(plVar13,plVar13,uVar11);
LAB_14345c63f:
  *(ulonglong *)(lVar8 + 0x78) = uVar15;
  puVar2 = (undefined8 *)(*plVar13 + -8 + uVar15 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar10;
  }
  if (4 < bVar16) {
    FUN_143411150(local_70);
  }
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  return param_1;
}



// FUNCTION 14345c6a0 FUN_14345c6a0 body=127 status=ok
// SIG undefined FUN_14345c6a0(void)

longlong * FUN_14345c6a0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_4 == 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(param_3 + uVar2) != '\0');
  }
  else {
    uVar2 = (ulonglong)(uint)((int)param_4 - (int)param_3);
  }
  iVar4 = 0;
  if (-1 < (int)uVar2) {
    iVar4 = (int)uVar2;
  }
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (iVar4 < 1) {
    lVar3 = *(longlong *)(lVar3 + 0x138);
    *param_1 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  lVar3 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x618),param_3,(longlong)iVar4);
  *param_1 = lVar3;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  return param_1;
}



// FUNCTION 14345c730 FUN_14345c730 body=267 status=ok
// SIG undefined FUN_14345c730(void)

void FUN_14345c730(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 *local_38;
  undefined8 local_30;
  
  FUN_1432c5960(&local_38,DAT_146b62f28);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar6 = 0;
      uVar5 = *(int *)(param_1 + 0x3c) - iVar4;
      if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      FUN_1432c5df0(&local_38,(longlong)dVar7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  puVar3 = &DAT_145af3922;
  if (local_38 != (undefined1 *)0x0) {
    puVar3 = local_38;
  }
  lVar2 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
                         0x618),puVar3,local_30);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  pbVar1 = *(byte **)(param_1 + 8);
  if (4 < *pbVar1) {
    FUN_143411150(pbVar1);
  }
  *pbVar1 = 5;
  *(longlong *)(pbVar1 + 8) = lVar2;
  iVar4 = *(int *)(lVar2 + 0x18);
  *(int *)(lVar2 + 0x18) = iVar4;
  if (iVar4 == 0) {
    FUN_14335f920(lVar2);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_38);
  return;
}



// FUNCTION 14345c850 FUN_14345c850 body=157 status=ok
// SIG undefined FUN_14345c850(void)

undefined8 * FUN_14345c850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_14345c9a0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0e8b8;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_fromCharCode_145b076f0,7);
  return param_1;
}



// FUNCTION 14345c900 FUN_14345c900 body=151 status=ok
// SIG undefined FUN_14345c900(void)

longlong FUN_14345c900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  byte local_28 [32];
  
  plVar1 = (longlong *)(param_2 + 0xe8);
  lVar2 = (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x50))(*(longlong **)(*plVar1 + 0x30),0x70)
  ;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14345a8c0(lVar2,param_2);
  }
  local_res10[0] = 0;
  local_28[0] = 10;
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            ((longlong *)(lVar2 + 0x20),plVar1,
             *(longlong *)(*(longlong *)(*plVar1 + 0x28) + 0x18) + 0x610,local_28,local_res10);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return lVar2;
}



// FUNCTION 14345c9a0 FUN_14345c9a0 body=541 status=ok
// SIG undefined FUN_14345c9a0(void)

void FUN_14345c9a0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  byte local_68 [8];
  longlong local_60;
  byte local_48 [32];
  byte local_28 [32];
  
  plVar10 = (longlong *)0x0;
  local_res8 = 0;
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 != 8)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        plVar10 = (longlong *)
                  ((ulonglong)(uVar2 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
      }
      FUN_143411540(plVar10,&local_res8,lVar3,0xffffffff,0);
      pbVar8 = *(byte **)(param_1 + 8);
      if (4 < *pbVar8) {
        FUN_143411150(pbVar8);
      }
      lVar3 = CONCAT44(uStackX_c,local_res8);
      *pbVar8 = 5;
      *(longlong *)(pbVar8 + 8) = lVar3;
      iVar6 = *(int *)(lVar3 + 0x18);
      *(int *)(lVar3 + 0x18) = iVar6;
      if (iVar6 == 0) {
        FUN_14335f920();
      }
      return;
    }
    pbVar8 = *(byte **)(param_1 + 8);
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    if (4 < *pbVar8) {
      FUN_143411150(pbVar8);
    }
    *pbVar8 = 5;
    lVar3 = *(longlong *)(lVar3 + 0x138);
    *(longlong *)(pbVar8 + 8) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    return;
  }
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar9 = plVar10;
  }
  bVar4 = *(int *)(param_1 + 0x38) < 1;
  if (bVar4) {
    local_68[0] = 5;
    local_60 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18)
                + 0x138);
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
    pbVar8 = local_68;
  }
  else {
    uVar7 = FUN_1434141c0(param_1,0);
    pbVar8 = (byte *)FUN_143410ec0(local_28,uVar7);
  }
  FUN_143410ec0(local_48,pbVar8);
  if ((bVar4) && (4 < local_68[0])) {
    FUN_143411150(local_68);
  }
  if ((!bVar4) && (4 < local_28[0])) {
    FUN_143411150(local_28);
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,*(undefined8 *)(param_1 + 0x30),local_48);
  FUN_143411240(*(undefined8 *)(param_1 + 8),local_48);
  if (local_48[0] < 5) {
    return;
  }
  FUN_143411150(local_48);
  return;
}



// FUNCTION 14345cbd0 FUN_14345cbd0 body=872 status=ok
// SIG undefined FUN_14345cbd0(void)

longlong * FUN_14345cbd0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar7 = (undefined8 *)0x0;
  puVar5 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar5;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar4 = puVar3[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ae70;
    puVar3[4] = &PTR_LAB_145b0aef8;
    puVar3[0xd] = FUN_14345c9a0;
    lVar4 = FUN_14341b750(local_58,7);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar2 = puVar3[6];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar4;
    *puVar3 = &PTR_LAB_145b0e8b8;
    puVar3[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar3 + 4,&local_58,&PTR_s_fromCharCode_145b076f0,7);
    puVar5 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar5;
  param_1[1] = 0;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = FUN_14341b750(param_2,1);
    FUN_143495aa0(puVar5,&local_58,uVar6,param_1);
    *puVar5 = &PTR_LAB_145b0e7c0;
    puVar5[4] = &PTR_LAB_145b0e808;
    puVar5[0xe] = &PTR_LAB_145b0e8b0;
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3d8);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(puVar5[0xd] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar5[0xd] = lVar4;
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    FUN_143422ee0(puVar5 + 0xe,puVar5,&local_58,&PTR_s_charAt_145b07cd0,&local_res8);
    *(uint *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1U & 0x8fffffff;
    puVar7 = puVar5;
  }
  local_res8 = puVar7;
  FUN_1434a4b90(param_2,3,&local_res8);
  local_40[0] = *param_1;
  lVar4 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x150,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar7 != (undefined8 *)0x0) && ((*(uint *)(puVar7 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar7 + 3) = *(uint *)(puVar7 + 3) - 1;
    FUN_1434a2b80(puVar7);
  }
  return param_1;
}



// FUNCTION 14345cf80 FUN_14345cf80 body=1025 status=ok
// SIG undefined FUN_14345cf80(void)

uint FUN_14345cf80(undefined8 *param_1,byte *param_2,byte *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  byte *pbVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 *local_res10;
  byte local_d8 [32];
  byte local_b8 [32];
  undefined **local_98;
  byte *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_60;
  int local_5c;
  
  pbVar11 = local_b8;
  if (param_2 != (byte *)0x0) {
    pbVar11 = param_2;
  }
  local_b8[0] = 0;
  pbVar14 = local_b8;
  if (param_3 != (byte *)0x0) {
    pbVar14 = param_3;
  }
  uVar9 = 0;
  if (param_1[2] == 0) {
    if ((*(byte *)(param_1 + 1) & 0x10) != 0) {
      if ((byte)(*pbVar11 - 3) < 2) {
        dVar15 = (double)FUN_143411a90(pbVar11,param_1[5]);
        bVar8 = true;
      }
      else {
        FUN_143411540(pbVar11,&local_res8,param_1[5],0xffffffff,0);
        plVar2 = local_res8;
        pbVar6 = (byte *)*local_res8;
        dVar15 = 0.0;
        if ((((pbVar6 == (byte *)0x0) || (dVar15 = 0.0, 0x39 < *pbVar6)) ||
            (dVar15 = 0.0, (0x3ff680000000000U >> ((longlong)(char)*pbVar6 & 0x3fU) & 1) == 0)) ||
           ((dVar15 = (double)FUN_14331b260(pbVar6,&local_res8), local_res8 != (longlong *)0x0 &&
            ((char)*local_res8 != '\0')))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        plVar1 = plVar2 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920(plVar2);
        }
      }
      if ((byte)(*pbVar14 - 3) < 2) {
        dVar16 = (double)FUN_143411a90(pbVar14,param_1[5]);
        bVar7 = true;
      }
      else {
        FUN_143411540(pbVar14,&local_res8,param_1[5],0xffffffff,0);
        plVar2 = local_res8;
        pbVar6 = (byte *)*local_res8;
        dVar16 = 0.0;
        if (((pbVar6 == (byte *)0x0) || (dVar16 = 0.0, 0x39 < *pbVar6)) ||
           ((dVar16 = 0.0, (0x3ff680000000000U >> ((longlong)(char)*pbVar6 & 0x3fU) & 1) == 0 ||
            ((dVar16 = (double)FUN_14331b260(pbVar6,&local_res8), local_res8 != (longlong *)0x0 &&
             ((char)*local_res8 != '\0')))))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        plVar1 = plVar2 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920(plVar2);
        }
      }
      if ((bVar8) && (bVar7)) {
        if (dVar15 < dVar16) {
          uVar9 = 0xffffffff;
        }
        if (dVar16 < dVar15) {
          uVar9 = 1;
        }
        if ((*(byte *)(param_1 + 1) & 2) != 0) {
          uVar9 = -uVar9;
        }
        goto LAB_14345d268;
      }
    }
    FUN_143411540(pbVar11,&local_res10,param_1[5],0xffffffff,0);
    FUN_143411540(pbVar14,&local_res8,param_1[5],0xffffffff,0);
    uVar5 = *(uint *)(param_1 + 1);
    if ((uVar5 >> 10 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        pbVar11 = (byte *)*local_res10;
        lVar12 = *local_res8 - (longlong)pbVar11;
        do {
          bVar4 = *pbVar11;
          if (bVar4 != pbVar11[lVar12]) {
            uVar9 = -(uint)(bVar4 < pbVar11[lVar12]) | 1;
            break;
          }
          pbVar11 = pbVar11 + 1;
        } while (bVar4 != 0);
      }
      else {
        uVar9 = _stricmp((char *)*local_res10,(char *)*local_res8);
      }
    }
    else {
      lVar12 = *local_res8;
      uVar10 = FUN_14335fa60(&local_res8);
      uVar9 = FUN_14335ff80(&local_res10,lVar12,uVar10,~(byte)uVar5 & 1);
    }
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      uVar9 = -uVar9;
    }
    plVar2 = local_res8 + 3;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      FUN_14335f920(local_res8);
    }
    piVar3 = (int *)(local_res10 + 3);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar12 = param_1[5];
    local_d8[0] = 0;
    *(longlong *)(lVar12 + 8) = *(longlong *)(lVar12 + 8) + 0x20;
    if (*(ulonglong *)(lVar12 + 0x18) <= *(ulonglong *)(lVar12 + 8)) {
      FUN_1434a29d0(lVar12 + 8);
    }
    if (*(longlong *)(lVar12 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar12 + 8),pbVar14);
    }
    lVar12 = param_1[5];
    *(longlong *)(lVar12 + 8) = *(longlong *)(lVar12 + 8) + 0x20;
    if (*(ulonglong *)(lVar12 + 0x18) <= *(ulonglong *)(lVar12 + 8)) {
      FUN_1434a29d0(lVar12 + 8);
    }
    if (*(longlong *)(lVar12 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar12 + 8),pbVar11);
    }
    local_68 = param_1[5];
    local_90 = local_d8;
    iVar13 = 2;
    local_5c = *(int *)(local_68 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(local_68 + 8) - *(longlong *)(local_68 + 0x10) >> 5);
    local_88 = *param_1;
    local_98 = &PTR_FUN_145b0ab98;
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_60 = 2;
    (**(code **)(*(longlong *)param_1[2] + 0x50))((longlong *)param_1[2],&local_98,param_1[3],0);
    lVar12 = param_1[5];
    do {
      if (4 < **(byte **)(lVar12 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar12 + 8) = *(longlong *)(lVar12 + 8) + -0x20;
      if (*(ulonglong *)(lVar12 + 8) < *(ulonglong *)(lVar12 + 0x10)) {
        FUN_1434a25c0(lVar12 + 8);
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    if ((local_90 != (byte *)0x0) &&
       (uVar9 = FUN_143411e30(local_90,param_1[5]), (*(byte *)(param_1 + 1) & 2) != 0)) {
      uVar9 = -uVar9;
    }
    local_98 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_80);
    local_98 = &PTR_FUN_145af8cf0;
    if (4 < local_d8[0]) {
      FUN_143411150(local_d8);
    }
LAB_14345d268:
    if (4 < local_b8[0]) {
      FUN_143411150(local_b8);
    }
  }
  return uVar9;
}



// FUNCTION 14345d390 FUN_14345d390 body=235 status=ok
// SIG undefined FUN_14345d390(void)

undefined8 *
FUN_14345d390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = 0;
  param_1[2] = param_5;
  param_1[3] = param_6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1434a3720(param_1 + 4,param_4[1]);
  if (param_1[5] != 0) {
    do {
      local_58 = 0;
      uStack_50 = 0;
      puVar1 = (undefined8 *)(uVar2 * 0x38 + param_1[4]);
      local_48 = 0;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(*param_4 + uVar2 * 4);
      local_40 = param_5;
      local_38 = param_6;
      *puVar1 = param_2;
      FUN_143410a60(puVar1 + 2,&local_58);
      uVar2 = (ulonglong)((int)uVar2 + 1);
      puVar1[5] = param_5;
      puVar1[6] = param_6;
    } while (uVar2 < (ulonglong)param_1[5]);
  }
  return param_1;
}



// FUNCTION 14345d490 FUN_14345d490 body=385 status=ok
// SIG undefined FUN_14345d490(void)

int FUN_14345d490(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  byte local_88 [32];
  byte local_68 [32];
  undefined1 local_48 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_48[0] = 0;
  puVar9 = local_48;
  if (param_2 != (undefined1 *)0x0) {
    puVar9 = param_2;
  }
  puVar7 = local_48;
  if (param_3 != (undefined1 *)0x0) {
    puVar7 = param_3;
  }
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    do {
      plVar5 = (longlong *)FUN_1434123a0(puVar9,*(undefined8 *)(param_1 + 0x10));
      plVar6 = (longlong *)FUN_1434123a0(puVar7,*(undefined8 *)(param_1 + 0x10));
      if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
        local_68[0] = 0;
        local_88[0] = 0;
        lVar1 = **(longlong **)(param_1 + 8) + uVar8 * 8;
        cVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar2 + 0xe8,lVar1,local_68);
        if ((cVar3 != '\0') &&
           ((cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,lVar2 + 0xe8,lVar1,local_88),
            cVar3 != '\0' &&
            (iVar4 = FUN_14345cf80(uVar8 * 0x38 + *(longlong *)(param_1 + 0x20),local_68,local_88),
            iVar4 != 0)))) {
          if (4 < local_88[0]) {
            FUN_143411150(local_88);
          }
          if (local_68[0] < 5) {
            return iVar4;
          }
          FUN_143411150(local_68);
          return iVar4;
        }
        if (4 < local_88[0]) {
          FUN_143411150(local_88);
        }
        if (4 < local_68[0]) {
          FUN_143411150(local_68);
        }
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar8 < *(ulonglong *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 14345d650 FUN_14345d650 body=196 status=ok
// SIG undefined FUN_14345d650(void)

void FUN_14345d650(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = *(ulonglong *)(param_1 + 0x78);
  if (uVar5 != 0) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x70) + uVar4 * 8);
      if ((pbVar2 != (byte *)0x0) &&
         ((bVar1 = *pbVar2, 9 < bVar1 || ((0x35fU >> (bVar1 & 0x1f) & 1) == 0)))) {
        FUN_143411150();
      }
      (**(code **)(*DAT_146b62f28 + 0x60))
                (DAT_146b62f28,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  uVar5 = *(ulonglong *)(param_1 + 0x88) & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14345d720 FUN_14345d720 body=153 status=ok
// SIG undefined FUN_14345d720(void)

undefined8 * FUN_14345d720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0e940;
  param_1[0xd] = 0;
  param_1[4] = &PTR_LAB_145b0e988;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1432c5250(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 14345d7c0 FUN_14345d7c0 body=255 status=ok
// SIG undefined FUN_14345d7c0(void)

void FUN_14345d7c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 *in_stack_ffffffffffffffb8;
  undefined1 local_38 [8];
  int local_30;
  
  bVar5 = 0;
  iVar6 = 0;
  local_38[0] = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      if (4 < bVar5) {
        FUN_143411150(local_38);
      }
      lVar2 = *(longlong *)(param_2 + 0x30);
      lVar4 = 0;
      bVar5 = 4;
      local_res10[0] = 0;
      uVar3 = *(int *)(param_2 + 0x3c) - iVar6;
      local_38[0] = 4;
      if (uVar3 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar3 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar3 >> 5) * 8);
      }
      local_30 = iVar6;
      FUN_143411540(local_38,&local_res18,lVar2,0xffffffff,
                    (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      in_stack_ffffffffffffffb8 = local_res10;
      (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))
                ((longlong *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x30),&local_res18,lVar4,
                 in_stack_ffffffffffffffb8);
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 14345d8d0 FUN_14345d8d0 body=172 status=ok
// SIG undefined FUN_14345d8d0(void)

undefined8 * FUN_14345d8d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0e940;
  param_1[4] = &PTR_LAB_145b0e988;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x268))();
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1432c5250(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),2);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 14345d990 FUN_14345d990 body=148 status=ok
// SIG undefined FUN_14345d990(void)

undefined8 * FUN_14345d990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0e940;
  param_1[0xd] = 0;
  param_1[4] = &PTR_LAB_145b0e988;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1432c5250(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  uVar1 = FUN_14341b750(*param_2,2);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  return param_1;
}



// FUNCTION 14345da30 FUN_14345da30 body=120 status=ok
// SIG undefined FUN_14345da30(void)

void FUN_14345da30(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_145b0e940;
  param_1[4] = &PTR_LAB_145b0e988;
  FUN_14345e160(param_1,0);
  uVar1 = param_1[0x11];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xe]);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 14345dab0 FUN_14345dab0 body=363 status=ok
// SIG undefined FUN_14345dab0(void)

undefined8
FUN_14345dab0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  char *_Str;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
  if (*(byte *)(param_2 + 0xf0) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    puVar9 = (undefined8 *)*param_3;
    bVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x610) + 0x10) == puVar9[2];
  }
  else {
    puVar9 = (undefined8 *)*param_3;
    bVar10 = *(undefined8 **)(lVar3 + 0x610) == puVar9;
  }
  if (bVar10) {
    iVar5 = FUN_143411e30(param_4,0);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_14345e160(param_1 + -0x20,iVar5);
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  else {
    _Str = (char *)*puVar9;
    cVar2 = *_Str;
    pcVar8 = _Str;
    while (cVar2 != '\0') {
      if (9 < (byte)(cVar2 - 0x30U)) {
        if (*pcVar8 != '\0') goto LAB_14345db42;
        break;
      }
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    }
    iVar5 = atoi(_Str);
    if (-1 < iVar5) {
      *(undefined1 *)(param_1 + 0x74) = 0;
      if (*(int *)(param_1 + 0x58) <= iVar5) {
        FUN_14345e160(param_1 + -0x20,iVar5 + 1);
      }
      lVar3 = (longlong)iVar5 * 8;
      if (*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x50)) == 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
        puVar7 = (undefined1 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x20);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          *puVar7 = 0;
        }
        *(undefined1 **)(lVar3 + *(longlong *)(param_1 + 0x50)) = puVar7;
      }
      FUN_143411240(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x50)),param_4);
      return 1;
    }
  }
LAB_14345db42:
  uVar6 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}



// FUNCTION 14345dc30 FUN_14345dc30 body=302 status=ok
// SIG undefined FUN_14345dc30(void)

undefined8 FUN_14345dc30(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  char *_Str;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  
  _Str = *(char **)*param_3;
  cVar1 = *_Str;
  pcVar6 = _Str;
  do {
    if (cVar1 == '\0') {
LAB_14345dc7b:
      iVar4 = atoi(_Str);
      if (iVar4 < 0) {
LAB_14345dcbb:
        lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
        if (*(byte *)(param_2 + 1) < 7) {
          if (*(longlong *)(*param_3 + 0x10) == 0) {
            FUN_14335f970();
          }
          bVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x610) + 0x10) ==
                  *(longlong *)(*param_3 + 0x10);
        }
        else {
          bVar7 = *(longlong *)(lVar2 + 0x610) == *param_3;
        }
        if ((bVar7) && ((*(char *)(param_1 + 0x74) == '\0' || (*(longlong *)(param_1 + 0x58) != 0)))
           ) {
          uVar3 = *(undefined8 *)(param_1 + 0x58);
          if (4 < *param_4) {
            FUN_143411150(param_4);
          }
          *param_4 = 4;
          uVar5 = 1;
          *(int *)(param_4 + 8) = (int)uVar3;
          *(undefined1 *)(param_1 + 0x74) = 0;
        }
        else {
          uVar5 = FUN_1434158c0(param_1,param_2,param_3,param_4);
        }
      }
      else if ((iVar4 < *(int *)(param_1 + 0x58)) &&
              (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8) != 0)) {
        FUN_143411240(param_4);
        uVar5 = 1;
      }
      else {
        FUN_143411150(param_4);
        uVar5 = 1;
        *param_4 = 0;
      }
      return uVar5;
    }
    if (9 < (byte)(cVar1 - 0x30U)) {
      if (*pcVar6 != '\0') goto LAB_14345dcbb;
      goto LAB_14345dc7b;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
  } while( true );
}



// FUNCTION 14345dd70 FUN_14345dd70 body=209 status=ok
// SIG undefined FUN_14345dd70(void)

undefined8 FUN_14345dd70(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  char *_Str;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte local_28 [32];
  
  if ((*(int *)((undefined8 *)*param_3 + 4) == 0) ||
     (iVar2 = isdigit((int)**(char **)*param_3), iVar2 == 0)) {
    uVar3 = FUN_143415040(param_1,param_2,param_3);
    return uVar3;
  }
  _Str = *(char **)*param_3;
  cVar1 = *_Str;
  pcVar4 = _Str;
  do {
    if (cVar1 == '\0') {
LAB_14345ddcd:
      iVar2 = atoi(_Str);
      if (iVar2 < 0) {
        return 0;
      }
      local_28[0] = 0;
      FUN_14345e250(param_1 + -0x20,iVar2,local_28);
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
      return 1;
    }
    if (9 < (byte)(cVar1 - 0x30U)) {
      if (*pcVar4 != '\0') {
        return 0;
      }
      goto LAB_14345ddcd;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
  } while( true );
}



// FUNCTION 14345de50 FUN_14345de50 body=381 status=ok
// SIG undefined FUN_14345de50(void)

void FUN_14345de50(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_res8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined **local_70;
  
  FUN_143415200();
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar5 = uVar2;
  if (7 < uVar2) {
    uVar5 = 8;
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8);
      if (lVar3 != 0) {
        (**(code **)(*param_3 + 8))
                  (param_3,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x138 +
                           (longlong)((int)uVar4 + 0x8f) * 8,lVar3,0,param_5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8) != 0) {
      FUN_143354c50(local_88,uVar4);
      FUN_143355390(local_88);
      FUN_143355620(local_88,&local_98);
      lVar3 = *(longlong *)(param_1 + 0x50);
      local_res8 = FUN_143360a90(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                 local_98,local_90);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      (**(code **)(*param_3 + 8))(param_3,&local_res8,*(undefined8 *)(lVar3 + uVar4 * 8),0);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      local_70 = &PTR_FUN_145af1858;
      FUN_143353a80(local_88);
    }
  }
  return;
}



// FUNCTION 14345dfe0 FUN_14345dfe0 body=168 status=ok
// SIG undefined FUN_14345dfe0(void)

ulonglong FUN_14345dfe0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  char *pcVar5;
  
  pcVar2 = *(char **)*param_3;
  cVar1 = *pcVar2;
  pcVar5 = pcVar2;
  do {
    if (cVar1 == '\0') {
LAB_14345e02b:
      iVar3 = atoi(pcVar2);
      uVar4 = CONCAT44(extraout_var,iVar3);
      if (iVar3 < 0) {
LAB_14345e061:
        uVar4 = FUN_143415420(param_1,param_2,param_3,param_4);
      }
      else {
        if (iVar3 < *(int *)(param_1 + 0x58)) {
          uVar4 = *(ulonglong *)(param_1 + 0x50);
          pcVar2 = *(char **)(uVar4 + (longlong)iVar3 * 8);
          if (pcVar2 != (char *)0x0) {
            cVar1 = *pcVar2;
            uVar4 = 0;
            if (((cVar1 != '\0') && (cVar1 != '\n')) && (cVar1 != '\x01')) {
              return 1;
            }
          }
        }
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      return uVar4;
    }
    if (9 < (byte)(cVar1 - 0x30U)) {
      if (*pcVar5 != '\0') goto LAB_14345e061;
      goto LAB_14345e02b;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 1;
  } while( true );
}



// FUNCTION 14345e090 FUN_14345e090 body=180 status=ok
// SIG undefined FUN_14345e090(void)

undefined1 * FUN_14345e090(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined4 local_res8 [2];
  undefined1 local_38 [48];
  
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if (*(int *)(param_1 + 0x70) < 0xff) {
    FUN_1432c5960(local_38,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x30));
    FUN_14345e7e0(param_1 + -0x20,param_2,local_38,&DAT_145b0a66c);
    FUN_1432c4ec0(param_1 + 0x68,local_38);
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    Scaleform::StringBuffer::~StringBuffer(local_38);
    puVar2 = (undefined1 *)((uVar1 & 0xfffffffffffffffc) + 0xc);
  }
  else {
    local_res8[0] = 0x34000;
    FUN_1432c19d0(*(undefined8 *)(param_1 + 0x48),local_res8,"256 levels of recursion is reached\n")
    ;
    puVar2 = &DAT_145af3922;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  return puVar2;
}



// FUNCTION 14345e160 FUN_14345e160 body=233 status=ok
// SIG undefined FUN_14345e160(void)

void FUN_14345e160(longlong param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_1 + 0x78);
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  uVar4 = (ulonglong)iVar2;
  for (uVar5 = uVar4; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
    if (pbVar1 != (byte *)0x0) {
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pbVar1);
    }
  }
  if (uVar4 < *(ulonglong *)(param_1 + 0x78)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x80) >> 1 <= uVar4) goto LAB_14345e20c;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x80)) goto LAB_14345e20c;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(param_1 + 0x70,param_1 + 0x70,uVar5);
LAB_14345e20c:
  *(ulonglong *)(param_1 + 0x78) = uVar4;
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar3 * 8) = 0;
  }
  return;
}



// FUNCTION 14345e250 FUN_14345e250 body=153 status=ok
// SIG undefined FUN_14345e250(void)

void FUN_14345e250(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    *(undefined1 *)(param_1 + 0x94) = 0;
    lVar1 = (longlong)param_2 * 8;
    if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x70)) == 0) {
      local_res10[0] = 0x143;
      puVar2 = (undefined1 *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res10);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      *(undefined1 **)(lVar1 + *(longlong *)(param_1 + 0x70)) = puVar2;
    }
    FUN_143411240(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar1),param_3);
  }
  return;
}



// FUNCTION 14345e2f0 FUN_14345e2f0 body=152 status=ok
// SIG undefined FUN_14345e2f0(void)

void FUN_14345e2f0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (*(int *)(param_1 + 0x78) <= param_2) {
    FUN_14345e160(param_1,param_2 + 1);
  }
  lVar1 = (longlong)param_2 * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x70)) == 0) {
    local_res10[0] = 0x143;
    puVar2 = (undefined1 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res10);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined1 **)(lVar1 + *(longlong *)(param_1 + 0x70)) = puVar2;
  }
  FUN_143411240(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar1),param_3);
  return;
}



// FUNCTION 14345e390 FUN_14345e390 body=179 status=ok
// SIG undefined FUN_14345e390(void)

void FUN_14345e390(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0x143;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143410ec0(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  plVar4 = (longlong *)(param_1 + 0x70);
  uVar5 = lVar2 + 1;
  if (uVar5 < *(ulonglong *)(param_1 + 0x78)) {
    uVar6 = uVar5;
    if (*(ulonglong *)(param_1 + 0x80) >> 1 <= uVar5) goto LAB_14345e41d;
  }
  else {
    if (uVar5 <= *(ulonglong *)(param_1 + 0x80)) goto LAB_14345e41d;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_1432cfd30(plVar4,plVar4,uVar6);
LAB_14345e41d:
  *(ulonglong *)(param_1 + 0x78) = uVar5;
  puVar1 = (undefined8 *)(*plVar4 + lVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uVar3;
  }
  return;
}



// FUNCTION 14345e450 FUN_14345e450 body=109 status=ok
// SIG undefined FUN_14345e450(void)

void FUN_14345e450(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar3 = *(longlong *)(param_1 + 0x78) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0x78)) {
    uVar4 = uVar3;
    if (*(ulonglong *)(param_1 + 0x80) >> 1 <= uVar3) goto LAB_14345e497;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x80)) goto LAB_14345e497;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar4);
LAB_14345e497:
  *(ulonglong *)(param_1 + 0x78) = uVar3;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  return;
}



// FUNCTION 14345e4f0 PopFront body=211 status=ok
// SIG undefined PopFront(void)

void Scaleform::GFx::AS2::ArrayObject::PopFront(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x70);
  if (pbVar3 != (byte *)0x0) {
    if (4 < *pbVar3) {
      FUN_143411150(pbVar3);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pbVar3);
  }
  uVar6 = 1;
  if (1 < *(ulonglong *)(param_1 + 0x78)) {
    uVar5 = 1;
    do {
      uVar4 = uVar6 - 1;
      uVar6 = uVar6 + 1;
      lVar2 = uVar5 * 8;
      uVar5 = (ulonglong)uVar6;
      *(undefined8 *)(*plVar1 + (ulonglong)uVar4 * 8) = *(undefined8 *)(*plVar1 + lVar2);
    } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
  }
  *(undefined8 *)(*plVar1 + -8 + *(longlong *)(param_1 + 0x78) * 8) = 0;
  uVar5 = *(longlong *)(param_1 + 0x78) - 1;
  if (uVar5 < *(ulonglong *)(param_1 + 0x78)) {
    uVar7 = uVar5;
    if (*(ulonglong *)(param_1 + 0x80) >> 1 <= uVar5) goto LAB_14345e5b4;
  }
  else {
    if (uVar5 <= *(ulonglong *)(param_1 + 0x80)) goto LAB_14345e5b4;
    uVar7 = (uVar5 >> 2) + uVar5;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar7);
LAB_14345e5b4:
  *(ulonglong *)(param_1 + 0x78) = uVar5;
  return;
}



// FUNCTION 14345e5d0 FUN_14345e5d0 body=300 status=ok
// SIG undefined FUN_14345e5d0(void)

void FUN_14345e5d0(longlong param_1,int param_2,int param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_3;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  if (0 < param_3) {
    lVar4 = (longlong)param_2 * 8;
    lVar3 = lVar6;
    do {
      pbVar1 = *(byte **)(lVar4 + *(longlong *)(param_1 + 0x70));
      if (pbVar1 != (byte *)0x0) {
        if (4 < *pbVar1) {
          FUN_143411150(pbVar1);
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pbVar1);
      }
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_2 = param_2 + param_3;
  if (param_2 < *(int *)(param_1 + 0x78)) {
    lVar4 = (longlong)param_2 * 8;
    do {
      param_2 = param_2 + 1;
      *(undefined8 *)(lVar6 * -8 + lVar4 + *(longlong *)(param_1 + 0x70)) =
           *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x70));
      *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x70)) = 0;
      lVar4 = lVar4 + 8;
    } while (param_2 < *(int *)(param_1 + 0x78));
  }
  uVar2 = *(longlong *)(param_1 + 0x78) - lVar6;
  if (uVar2 < *(ulonglong *)(param_1 + 0x78)) {
    uVar5 = uVar2;
    if (*(ulonglong *)(param_1 + 0x80) >> 1 <= uVar2) goto LAB_14345e6e9;
  }
  else {
    if (uVar2 <= *(ulonglong *)(param_1 + 0x80)) goto LAB_14345e6e9;
    uVar5 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432cfd30(param_1 + 0x70,param_1 + 0x70,uVar5);
LAB_14345e6e9:
  *(ulonglong *)(param_1 + 0x78) = uVar2;
  return;
}



// FUNCTION 14345e710 FUN_14345e710 body=190 status=ok
// SIG undefined FUN_14345e710(void)

void FUN_14345e710(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  lVar2 = (longlong)param_3;
  FUN_1433cc430(param_1 + 0x70);
  if (iVar1 != 0) {
    lVar3 = (longlong)(*(int *)(param_1 + 0x78) + -1);
    if (param_2 + param_3 <= lVar3) {
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar3 * 8) =
             *(undefined8 *)(lVar2 * -8 + lVar3 * 8 + *(longlong *)(param_1 + 0x70));
        lVar3 = lVar3 + -1;
      } while (param_2 + param_3 <= lVar3);
    }
  }
  if (0 < param_3) {
    lVar3 = (longlong)param_2 * 8;
    do {
      *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x70)) = 0;
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14345e7e0 FUN_14345e7e0 body=222 status=ok
// SIG undefined FUN_14345e7e0(void)

void FUN_14345e7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_res8;
  undefined8 *local_48;
  undefined1 local_40 [40];
  
  FUN_1432c5cb0(param_3);
  uVar4 = 0;
  local_40[0] = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    do {
      if ((int)uVar4 != 0) {
        Scaleform::StringBuffer::AppendString(param_3,param_4,0xffffffffffffffff);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8);
      if (lVar2 == 0) {
        FUN_143411540(local_40,&local_48,param_2,0xffffffff,0);
        puVar3 = local_48;
      }
      else {
        FUN_143411540(lVar2,&local_res8,param_2,0xffffffff,0);
        puVar3 = local_res8;
      }
      Scaleform::StringBuffer::AppendString(param_3,*puVar3,0xffffffffffffffff);
      piVar1 = (int *)(puVar3 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar3);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 14345e8d0 FUN_14345e8d0 body=430 status=ok
// SIG undefined FUN_14345e8d0(void)

void FUN_14345e8d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 local_res8 [2];
  
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  if (0xfe < *(int *)(param_1 + 0x90)) {
    local_res8[0] = 0x34000;
    FUN_1432c19d0(*(undefined8 *)(param_1 + 0x68),local_res8,"256 levels of recursion is reached\n")
    ;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar5 = FUN_143412120(param_3);
  if ((lVar5 != 0) &&
     (iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar4 == 7)) {
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      uVar2 = *(uint *)(param_1 + 0x78);
      FUN_14345e160(param_1,*(int *)(lVar5 + 0x78) + uVar2);
      if (*(longlong *)(lVar5 + 0x78) != 0) {
        uVar9 = 0;
        do {
          lVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
          uVar7 = 0;
          if (lVar6 != 0) {
            uVar7 = FUN_143410ec0(lVar6,*(undefined8 *)(*(longlong *)(lVar5 + 0x70) + uVar9 * 8));
          }
          lVar6 = uVar9 * 8;
          uVar9 = uVar9 + 1;
          *(ulonglong *)((ulonglong)uVar2 * 8 + lVar6 + *(longlong *)(param_1 + 0x70)) = uVar7;
        } while (uVar9 < *(ulonglong *)(lVar5 + 0x78));
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
      return;
    }
    goto LAB_14345ea73;
  }
  lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_143410ec0(lVar5,param_3);
  }
  uVar9 = *(longlong *)(param_1 + 0x78) + 1;
  if (uVar9 < *(ulonglong *)(param_1 + 0x78)) {
    uVar7 = uVar9;
    if (uVar9 < *(ulonglong *)(param_1 + 0x80) >> 1) {
LAB_14345ea4e:
      FUN_1432cfd30(param_1 + 0x70,param_1 + 0x70,uVar7);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x80) < uVar9) {
    uVar7 = (uVar9 >> 2) + uVar9;
    goto LAB_14345ea4e;
  }
  *(ulonglong *)(param_1 + 0x78) = uVar9;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + -8 + uVar9 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uVar8;
  }
LAB_14345ea73:
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  return;
}



// FUNCTION 14345ea90 FUN_14345ea90 body=88 status=ok
// SIG undefined FUN_14345ea90(void)

void FUN_14345ea90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_1433cc430(param_1 + 0x70,*(undefined8 *)(param_2 + 0x78));
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar2 * 8) =
           *(undefined8 *)(*(longlong *)(param_2 + 0x70) + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 14345eaf0 MakeDeepCopy body=141 status=ok
// SIG undefined MakeDeepCopy(void)

void Scaleform::GFx::AS2::ArrayObject::MakeDeepCopy(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8) != 0) {
        lVar2 = (**(code **)(*param_2 + 0x50))(param_2,0x20);
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_143410ec0(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8) = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



// FUNCTION 14345eb90 MakeDeepCopyFrom body=161 status=ok
// SIG undefined MakeDeepCopyFrom(void)

void Scaleform::GFx::AS2::ArrayObject::MakeDeepCopyFrom
               (longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  FUN_1433cc430((longlong *)(param_1 + 0x70),*(undefined8 *)(param_3 + 0x78));
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_3 + 0x70) + uVar4 * 8) != 0) {
        lVar2 = (**(code **)(*param_2 + 0x50))(param_2,0x20);
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_143410ec0(lVar2,*(undefined8 *)(*(longlong *)(param_3 + 0x70) + uVar4 * 8));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar4 * 8) = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



// FUNCTION 14345ec40 DetachAll body=105 status=ok
// SIG undefined DetachAll(void)

void Scaleform::GFx::AS2::ArrayObject::DetachAll(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x78) != 0) &&
      ((*(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x80) != 0)) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14345ed40 FUN_14345ed40 body=59 status=ok
// SIG undefined FUN_14345ed40(void)

undefined1 FUN_14345ed40(longlong param_1)

{
  undefined4 local_res8 [8];
  
  if (0xfe < *(int *)(param_1 + 0x90)) {
    local_res8[0] = 0x34000;
    FUN_1432c19d0(*(undefined8 *)(param_1 + 0x68),local_res8,"256 levels of recursion is reached\n")
    ;
    return 1;
  }
  return 0;
}



// FUNCTION 14345ed90 FUN_14345ed90 body=364 status=ok
// SIG undefined FUN_14345ed90(void)

void FUN_14345ed90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte local_28 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 7) {
      uVar4 = 0;
      uVar5 = *(longlong *)(param_1 + 0x10) - 0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar5 = uVar4;
      }
      *(undefined1 *)(uVar5 + 0x94) = 0;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x60),
                            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x148,0,0xffffffff);
      if (lVar3 != 0) {
        FUN_143410c00(local_28,uVar5);
        FUN_14345e8d0(lVar3,*(undefined8 *)(param_1 + 0x30),local_28);
        if (4 < local_28[0]) {
          FUN_143411150(local_28);
        }
        uVar5 = uVar4;
        if (0 < *(int *)(param_1 + 0x38)) {
          do {
            lVar1 = *(longlong *)(param_1 + 0x30);
            uVar7 = *(int *)(param_1 + 0x3c) - (int)uVar5;
            uVar6 = uVar4;
            if (uVar7 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                               (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5)))
            {
              uVar6 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
            }
            FUN_14345e8d0(lVar3,lVar1,uVar6);
            uVar7 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar7;
          } while ((int)uVar7 < *(int *)(param_1 + 0x38));
        }
      }
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345ef10 FUN_14345ef10 body=407 status=ok
// SIG undefined FUN_14345ef10(void)

void FUN_14345ef10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *local_res8;
  undefined1 *local_38;
  undefined8 local_30;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 7) {
      lVar8 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar8;
      }
      *(undefined1 *)(lVar6 + 0x94) = 0;
      FUN_1432c5960(&local_38,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30));
      if (*(int *)(param_1 + 0x38) == 0) {
        FUN_14345e7e0(lVar6,*(undefined8 *)(param_1 + 0x30),&local_38,&DAT_145b0a66c);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar2 = *(uint *)(param_1 + 0x3c);
        if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
        }
        FUN_143411540(lVar8,&local_res8,lVar3,0xffffffff,0);
        FUN_14345e7e0(lVar6,*(undefined8 *)(param_1 + 0x30),&local_38,*local_res8);
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_res8);
        }
      }
      puVar7 = &DAT_145af3922;
      if (local_38 != (undefined1 *)0x0) {
        puVar7 = local_38;
      }
      lVar6 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18
                               ) + 0x618),puVar7,local_30);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      pbVar4 = *(byte **)(param_1 + 8);
      if (4 < *pbVar4) {
        FUN_143411150(pbVar4);
      }
      *pbVar4 = 5;
      *(longlong *)(pbVar4 + 8) = lVar6;
      iVar5 = *(int *)(lVar6 + 0x18);
      *(int *)(lVar6 + 0x18) = iVar5;
      if (iVar5 == 0) {
        FUN_14335f920(lVar6);
      }
      Scaleform::StringBuffer::~StringBuffer(&local_38);
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f0b0 FUN_14345f0b0 body=201 status=ok
// SIG undefined FUN_14345f0b0(void)

void FUN_14345f0b0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 7) {
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0;
      }
      *(undefined1 *)(lVar3 + 0x94) = 0;
      if (*(int *)(lVar3 + 0x78) != 0) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + (longlong)(*(int *)(lVar3 + 0x78) + -1) * 8)
            == 0) {
          puVar1 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar1);
          *puVar1 = 0;
        }
        else {
          FUN_143411240(*(undefined8 *)(param_1 + 8));
        }
        if (*(longlong *)(lVar3 + 0x78) != 0) {
          FUN_14345e160(lVar3,*(int *)(lVar3 + 0x78) + -1);
        }
        return;
      }
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      *puVar1 = 0;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f180 FUN_14345f180 body=255 status=ok
// SIG undefined FUN_14345f180(void)

void FUN_14345f180(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 7)) {
    uVar6 = 0;
    uVar7 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar7 = uVar6;
    }
    *(undefined1 *)(uVar7 + 0x94) = 0;
    uVar8 = uVar6;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - (int)uVar8;
        uVar5 = uVar6;
        if (uVar9 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          uVar5 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        FUN_14345e390(uVar7,uVar5);
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x38));
    }
    pbVar2 = *(byte **)(param_1 + 8);
    uVar3 = *(undefined8 *)(uVar7 + 0x78);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(int *)(pbVar2 + 8) = (int)uVar3;
    *pbVar2 = 4;
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f290 FUN_14345f290 body=158 status=ok
// SIG undefined FUN_14345f290(void)

void FUN_14345f290(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 7)) {
    lVar8 = 0;
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = lVar8;
    }
    iVar5 = *(int *)(lVar6 + 0x78) + -1;
    *(undefined1 *)(lVar6 + 0x94) = 0;
    lVar7 = (longlong)iVar5;
    if (0 < iVar5) {
      do {
        lVar3 = *(longlong *)(lVar6 + 0x70);
        uVar4 = *(undefined8 *)(lVar3 + lVar8 * 8);
        lVar1 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        puVar2 = (undefined8 *)(lVar3 + lVar7 * 8);
        lVar7 = lVar7 + -1;
        *(undefined8 *)(lVar3 + lVar1) = *puVar2;
        *puVar2 = uVar4;
      } while (lVar8 < lVar7);
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f340 FUN_14345f340 body=196 status=ok
// SIG undefined FUN_14345f340(void)

void FUN_14345f340(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 7) {
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0;
      }
      if (*(int *)(lVar3 + 0x78) == 0) {
        puVar1 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar1);
        *puVar1 = 0;
        return;
      }
      *(undefined1 *)(lVar3 + 0x94) = 0;
      if (**(longlong **)(lVar3 + 0x70) != 0) {
        FUN_143411240(*(undefined8 *)(param_1 + 8));
        Scaleform::GFx::AS2::ArrayObject::PopFront(lVar3);
        return;
      }
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      *puVar1 = 0;
      Scaleform::GFx::AS2::ArrayObject::PopFront(lVar3);
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f410 FUN_14345f410 body=482 status=ok
// SIG undefined FUN_14345f410(void)

void FUN_14345f410(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar1 == 7)) {
    lVar8 = 0;
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = lVar8;
    }
    iVar1 = *(int *)(lVar3 + 0x78);
    *(undefined1 *)(lVar3 + 0x94) = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(uint *)(param_1 + 0x3c);
      lVar7 = lVar8;
      if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      iVar2 = FUN_143411e30(lVar7);
      bVar9 = false;
      if (iVar2 < 0) {
        iVar2 = iVar2 + *(int *)(lVar3 + 0x78);
        bVar9 = iVar2 < 0;
      }
      if (!bVar9) {
        iVar4 = iVar2;
      }
      if (*(int *)(lVar3 + 0x78) < iVar4) {
        iVar4 = *(int *)(lVar3 + 0x78);
      }
    }
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar6 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      iVar2 = FUN_143411e30(lVar8);
      if (iVar2 < 0) {
        iVar2 = iVar2 + *(int *)(lVar3 + 0x78);
      }
      iVar1 = 0;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if (*(int *)(lVar3 + 0x78) < iVar1) {
        iVar1 = *(int *)(lVar3 + 0x78);
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    lVar8 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar8 + 0x60),
                          *(longlong *)(*(longlong *)(lVar8 + 0x28) + 0x18) + 0x148,0,0xffffffff);
    if (lVar8 != 0) {
      for (lVar5 = (longlong)iVar4; lVar5 < iVar1; lVar5 = lVar5 + 1) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar5 * 8) == 0) {
          FUN_14345e450(lVar8);
        }
        else {
          FUN_14345e390();
        }
      }
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar8);
    if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
      FUN_1434a2b80(lVar8);
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 14345f600 FUN_14345f600 body=1485 status=ok
// SIG undefined FUN_14345f600(void)

void FUN_14345f600(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  byte bVar15;
  longlong lVar16;
  uint local_res10;
  longlong local_118;
  ulonglong uStack_110;
  byte local_108;
  longlong local_100;
  longlong lStack_f8;
  byte local_f0;
  char *local_e8;
  uint local_e0;
  longlong local_d8;
  longlong local_d0;
  byte local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  uint local_a8;
  longlong local_a0 [2];
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [64];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 7)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
    return;
  }
  pcVar14 = (char *)0x0;
  local_100 = 0;
  lStack_f8 = 0;
  pcVar10 = (char *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pcVar10 = pcVar14;
  }
  local_res10 = 0;
  bVar15 = 0;
  local_f0 = 0;
  pcVar10[0x94] = '\0';
  lVar16 = local_100;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar16 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(uint *)(param_1 + 0x3c);
    pcVar9 = pcVar14;
    if (uVar8 <= (uint)(*(int *)(lVar16 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar16 + 8) - *(longlong *)(lVar16 + 0x10) >> 5))) {
      pcVar9 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar16 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
    }
    if ((*pcVar9 == '\b') || (*pcVar9 == '\v')) {
      pcVar9 = pcVar14;
      if (uVar8 <= (uint)(*(int *)(lVar16 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar16 + 8) - *(longlong *)(lVar16 + 0x10) >> 5))) {
        pcVar9 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                         *(longlong *)(*(longlong *)(lVar16 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
      }
      if (*pcVar9 == '\b') {
        local_118 = *(longlong *)(pcVar9 + 8);
        local_108 = 0;
        if (local_118 != 0) {
          *(uint *)(local_118 + 0x18) = *(int *)(local_118 + 0x18) + 1U & 0x8fffffff;
        }
        uVar13 = *(ulonglong *)(pcVar9 + 0x10);
        uStack_110 = 0;
        if ((uVar13 != 0) &&
           (local_108 = (pcVar9[0x18] & 1U) != 0, uStack_110 = uVar13, !(bool)local_108)) {
          *(uint *)(uVar13 + 0x18) = *(int *)(uVar13 + 0x18) + 1U & 0x8fffffff;
        }
      }
      else if (*pcVar9 == '\v') {
        FUN_143413f20(pcVar9,&local_118);
      }
      else {
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
      }
      bVar15 = local_108;
      uVar13 = uStack_110;
      lVar16 = local_118;
      FUN_143410a60(&local_100,&local_118);
      if ((((bVar15 & 2) == 0) && (lVar16 != 0)) && ((*(uint *)(lVar16 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) - 1;
        FUN_1434a2b80(lVar16);
      }
      if ((((bVar15 & 1) == 0) && (uVar13 != 0)) && ((*(uint *)(uVar13 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(uVar13 + 0x18) = *(uint *)(uVar13 + 0x18) - 1;
        FUN_1434a2b80(uVar13);
      }
      lVar16 = local_100;
      bVar15 = local_f0;
      if ((local_100 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          pcVar14 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                            *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8)
                            );
        }
        local_res10 = FUN_143411e30(pcVar14,lVar1);
        bVar15 = local_f0;
      }
    }
    else {
      if (uVar8 <= (uint)(*(int *)(lVar16 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar16 + 8) - *(longlong *)(lVar16 + 0x10) >> 5))) {
        pcVar14 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar16 + 0x28) + (ulonglong)(uVar8 >> 5) * 8))
        ;
      }
      local_res10 = FUN_143411e30(pcVar14,lVar16);
      lVar16 = local_100;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  uVar13 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x18) + 0x148;
  pcVar14 = (char *)FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x60),uVar13
                                  ,0,0xffffffff);
  lVar1 = lStack_f8;
  if (pcVar14 != (char *)0x0) {
    FUN_14345ea90(pcVar14);
    uVar7 = *(undefined8 *)(pcVar10 + 0x68);
    local_e8 = pcVar14 + 0x20;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_e0 = local_res10;
    local_c8 = 0;
    if (lVar16 != 0) {
      *(uint *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1U & 0x8fffffff;
    }
    local_d0 = 0;
    local_d8 = lVar16;
    if (lVar1 != 0) {
      FUN_1434109d0(&local_d8,lVar1,bVar15 & 1);
      uVar13 = (ulonglong)local_c8;
    }
    local_c0 = uVar2;
    local_b8 = uVar7;
    if (*(longlong *)(pcVar14 + 0x78) != 0) {
      local_118 = *(longlong *)(pcVar14 + 0x70);
      uVar11 = (ulonglong)*(uint *)(pcVar14 + 0x78);
      local_90 = 0;
      if (local_d8 != 0) {
        *(uint *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + 1U & 0x8fffffff;
      }
      local_a0[1] = 0;
      uStack_110 = uVar11;
      local_b0 = local_e8;
      local_a8 = local_e0;
      local_a0[0] = local_d8;
      if (local_d0 != 0) {
        FUN_1434109d0(local_a0,local_d0,uVar13 & 0xffffffffffffff01);
      }
      local_88 = uVar2;
      local_80 = uVar7;
      uVar7 = FUN_143496020(local_78,&local_b0);
      cVar4 = FUN_1434900c0(&local_118,0,uVar11,uVar7);
      FUN_14349ebc0(local_a0);
      if (cVar4 == '\0') {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Array.sort - sorting failed, check your sort functor");
      }
    }
    if (((local_res10 & 4) != 0) && (iVar5 = 1, 1 < *(int *)(pcVar14 + 0x78))) {
      lVar12 = 8;
      do {
        iVar6 = FUN_14345cf80(&local_e8,*(undefined8 *)(*(longlong *)(pcVar14 + 0x70) + -8 + lVar12)
                              ,*(undefined8 *)(*(longlong *)(pcVar14 + 0x70) + lVar12));
        if (iVar6 == 0) {
          pbVar3 = *(byte **)(param_1 + 8);
          if (4 < *pbVar3) {
            FUN_143411150(pbVar3);
          }
          *pbVar3 = 4;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          Scaleform::GFx::AS2::ArrayObject::DetachAll(pcVar14);
          goto LAB_14345fb08;
        }
        iVar5 = iVar5 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar5 < *(int *)(pcVar14 + 0x78));
    }
    if ((local_res10 & 8) == 0) {
      FUN_14345ea90(pcVar10,pcVar14);
      Scaleform::GFx::AS2::ArrayObject::DetachAll(pcVar14);
    }
    else {
      Scaleform::GFx::AS2::ArrayObject::MakeDeepCopy
                (pcVar14,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30)
                );
      pcVar10 = pcVar14;
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),pcVar10);
LAB_14345fb08:
    FUN_14349ebc0(&local_d8);
    if ((*(uint *)(pcVar14 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(pcVar14 + 0x18) = *(uint *)(pcVar14 + 0x18) - 1;
      FUN_1434a2b80(pcVar14);
    }
  }
  if ((((bVar15 & 2) == 0) && (lVar16 != 0)) && ((*(uint *)(lVar16 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) - 1;
    FUN_1434a2b80(lVar16);
  }
  if ((((bVar15 & 1) == 0) && (lVar1 != 0)) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80(lVar1);
  }
  return;
}



// FUNCTION 14345fbe0 FUN_14345fbe0 body=2668 status=ok
// SIG undefined FUN_14345fbe0(void)

void FUN_14345fbe0(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint local_res10;
  longlong local_res18;
  ulonglong local_res20;
  uint in_stack_fffffffffffffeb8;
  uint *local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [72];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 7)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
    return;
  }
  uVar15 = 0;
  uVar8 = *(longlong *)(param_1 + 0x10) - 0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar8 = uVar15;
  }
  plVar16 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  local_res20 = uVar8;
  local_e8 = (longlong *)(**(code **)(*plVar16 + 0x50))(plVar16,0x20,0);
  if (local_e8 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
  }
  else {
    lVar19 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    *local_e8 = 0;
    local_e8[1] = 0;
    local_e8[2] = 0;
    lVar19 = *(longlong *)(lVar19 + 0x138);
    local_e8[3] = lVar19;
    piVar1 = (int *)(lVar19 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  plVar16 = local_e8;
  local_138 = (uint *)0x0;
  local_130 = 0;
  local_128 = 0;
  local_res10 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 0;
    goto LAB_14346058a;
  }
  *(undefined1 *)(uVar8 + 0x94) = 0;
  lVar19 = *(longlong *)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
            0x2b8);
  *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
  uVar8 = uVar15;
  local_a8 = lVar19;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    uVar21 = *(uint *)(param_1 + 0x3c);
    uVar20 = uVar15;
    if (uVar21 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
      uVar20 = (ulonglong)(uVar21 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar21 >> 5) * 8);
    }
    lVar7 = FUN_143412120(uVar20,lVar7);
    if ((lVar7 == 0) ||
       (iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20), iVar5 != 7)) {
      uVar9 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar9,&local_res18,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_fffffffffffffeb8 & 0xffffff00);
      FUN_1434a3a90(plVar16,plVar16,plVar16[1] + 1);
      plVar18 = (longlong *)(*plVar16 + (plVar16[1] + -1) * 8);
      if (plVar18 != (longlong *)0x0) {
        *plVar18 = local_res18;
        *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      }
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        uVar8 = 0;
      }
    }
    else if (0 < *(int *)(lVar7 + 0x78)) {
      lVar14 = 0;
      uVar20 = uVar15;
      do {
        lVar3 = *(longlong *)(lVar14 + *(longlong *)(lVar7 + 0x70));
        if (lVar3 == 0) {
          FUN_1434a3a90(plVar16,plVar16,plVar16[1] + 1);
          plVar18 = (longlong *)(*plVar16 + (plVar16[1] + -1) * 8);
          if (plVar18 != (longlong *)0x0) {
            *plVar18 = lVar19;
            *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
          }
        }
        else {
          in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffff00;
          FUN_143411540(lVar3,&local_res18,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                        in_stack_fffffffffffffeb8);
          FUN_1434a3a90(plVar16,plVar16,plVar16[1] + 1);
          plVar18 = (longlong *)(*plVar16 + (plVar16[1] + -1) * 8);
          if (plVar18 != (longlong *)0x0) {
            *plVar18 = local_res18;
            *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
          }
          piVar1 = (int *)(local_res18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        uVar21 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar21;
        lVar14 = lVar14 + 8;
        uVar8 = local_128;
      } while ((int)uVar21 < *(int *)(lVar7 + 0x78));
    }
  }
  iVar5 = 0;
  puVar10 = local_138;
  uVar20 = uVar15;
  if (0 < (int)plVar16[1]) {
    do {
      uVar15 = uVar20 + 1;
      if (uVar15 < uVar20) {
        uVar12 = uVar15;
        if (uVar15 < uVar8 >> 1) {
LAB_14345ff00:
          FUN_143300ed0(&local_138,&local_138,uVar12);
          puVar10 = local_138;
          uVar8 = local_128;
        }
      }
      else if (uVar8 < uVar15) {
        uVar12 = (uVar15 >> 2) + uVar15;
        goto LAB_14345ff00;
      }
      if (puVar10 + uVar20 != (uint *)0x0) {
        puVar10[uVar20] = 0;
      }
      iVar5 = iVar5 + 1;
      uVar20 = uVar15;
      local_130 = uVar15;
    } while (iVar5 < (int)plVar16[1]);
  }
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    lVar14 = 0;
    uVar21 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar21 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
      lVar14 = (ulonglong)(uVar21 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar21 >> 5) * 8);
    }
    lVar7 = FUN_143412120(lVar14,lVar7);
    if ((lVar7 == 0) ||
       (iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20), iVar5 != 7)) {
      lVar14 = 0;
      lVar7 = *(longlong *)(param_1 + 0x30);
      uVar21 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar21 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        lVar14 = (ulonglong)(uVar21 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar21 >> 5) * 8);
      }
      local_res10 = FUN_143411e30(lVar14);
      iVar5 = 0;
      puVar10 = local_138;
      if (0 < (int)plVar16[1]) {
        do {
          *puVar10 = local_res10;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar5 < (int)plVar16[1]);
      }
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)(lVar7 + 0x78)) {
        lVar14 = 0;
        puVar10 = local_138;
        do {
          if ((int)plVar16[1] <= iVar5) break;
          lVar3 = *(longlong *)(lVar14 + *(longlong *)(lVar7 + 0x70));
          if (lVar3 != 0) {
            uVar21 = FUN_143411e30(lVar3,*(undefined8 *)(param_1 + 0x30));
            *puVar10 = uVar21;
          }
          iVar5 = iVar5 + 1;
          lVar14 = lVar14 + 8;
          puVar10 = puVar10 + 1;
        } while (iVar5 < *(int *)(lVar7 + 0x78));
      }
    }
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  uVar8 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar7 + 0x60),
                        *(longlong *)(*(longlong *)(lVar7 + 0x28) + 0x18) + 0x148,0,0xffffffff);
  if (uVar8 != 0) {
    plVar18 = (longlong *)(uVar8 + 0x70);
    uVar20 = *(ulonglong *)(local_res20 + 0x78);
    if (uVar20 < *(ulonglong *)(uVar8 + 0x78)) {
      uVar12 = uVar20;
      if (uVar20 < *(ulonglong *)(uVar8 + 0x80) >> 1) {
LAB_1434600f4:
        FUN_1432cfd30(plVar18,plVar18,uVar12);
      }
    }
    else if (*(ulonglong *)(uVar8 + 0x80) < uVar20) {
      uVar12 = (uVar20 >> 2) + uVar20;
      goto LAB_1434600f4;
    }
    *(ulonglong *)(uVar8 + 0x78) = uVar20;
    uVar12 = 0;
    uVar20 = *(ulonglong *)(uVar8 + 0x78);
    if (uVar20 != 0) {
      do {
        *(undefined8 *)(*plVar18 + uVar12 * 8) =
             *(undefined8 *)(*(longlong *)(local_res20 + 0x70) + uVar12 * 8);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar20);
    }
    local_108 = *(longlong *)(local_res20 + 0x68);
    local_120 = uVar8 + 0x20;
    local_110 = *(longlong *)(param_1 + 0x30);
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_118 = plVar16;
    local_98 = local_108;
    local_90 = local_110;
    FUN_1434a3b40(&local_100,&local_100,uVar15);
    lVar14 = local_90;
    lVar7 = local_98;
    uVar20 = local_f8;
    if (uVar15 != 0) {
      puVar11 = (undefined8 *)(local_100 + 0x18);
      do {
        if (puVar11 != (undefined8 *)&DAT_00000018) {
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar11[-1] = 0;
          *puVar11 = 0;
        }
        puVar11 = puVar11 + 7;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (local_f8 != 0) {
      uVar15 = 0;
      do {
        local_d0 = 0;
        lStack_c8 = 0;
        uVar21 = local_138[uVar15];
        plVar16 = (longlong *)(uVar15 * 0x38 + local_100);
        local_d8 = (longlong *)CONCAT44(local_d8._4_4_,uVar21);
        local_c0 = local_c0 & 0xffffffffffffff00;
        local_b8 = lVar14;
        local_b0 = lVar7;
        *plVar16 = uVar8 + 0x20;
        *(uint *)(plVar16 + 1) = uVar21;
        local_e0 = uVar8 + 0x20;
        FUN_143410a60(plVar16 + 2,&local_d0);
        uVar15 = (ulonglong)((int)uVar15 + 1);
        plVar16[5] = lVar14;
        plVar16[6] = lVar7;
        lVar19 = local_a8;
        plVar16 = local_e8;
      } while (uVar15 < uVar20);
    }
    plVar18 = (longlong *)(uVar8 + 0x70);
    if (*(longlong *)(uVar8 + 0x78) != 0) {
      local_a8 = *plVar18;
      uVar15 = (ulonglong)*(uint *)(uVar8 + 0x78);
      local_e0 = local_120;
      local_d8 = local_118;
      local_d0 = local_110;
      lStack_c8 = local_108;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a0 = uVar15;
      if (uVar20 != 0) {
        FUN_1434a3b40(&local_c0,&local_c0,uVar20);
        FUN_14349e780(local_c0,uVar20,local_100);
      }
      uVar9 = FUN_1434960a0(local_88,&local_e0);
      FUN_143490410(&local_a8,0,uVar15,uVar9);
      uVar15 = local_c0;
      FUN_14349e960(local_c0);
      if (uVar15 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
    if (((local_res10 & 4) != 0) && (iVar5 = 1, 1 < *(int *)(uVar8 + 0x78))) {
      lVar7 = 8;
      do {
        iVar6 = FUN_14345d490(&local_120,*(undefined8 *)(*plVar18 + -8 + lVar7),
                              *(undefined8 *)(*plVar18 + lVar7));
        if (iVar6 == 0) {
          pbVar4 = *(byte **)(param_1 + 8);
          if (4 < *pbVar4) {
            FUN_143411150(pbVar4);
          }
          *pbVar4 = 4;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          if (uVar20 != 0) {
            plVar18 = (longlong *)(local_100 + -0x20 + uVar20 * 0x38);
            do {
              if ((((*(byte *)(plVar18 + 1) & 2) == 0) && (lVar7 = plVar18[-1], lVar7 != 0)) &&
                 ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
                *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
                FUN_1434a2b80();
              }
              plVar18[-1] = 0;
              if ((((*(byte *)(plVar18 + 1) & 1) == 0) && (lVar7 = *plVar18, lVar7 != 0)) &&
                 ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
                *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
                FUN_1434a2b80();
              }
              *plVar18 = 0;
              plVar18 = plVar18 + -7;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          goto LAB_143460537;
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar5 < *(int *)(uVar8 + 0x78));
    }
    uVar15 = local_res20;
    if ((local_res10 & 8) == 0) {
      uVar12 = *(ulonglong *)(uVar8 + 0x78);
      plVar17 = (longlong *)(local_res20 + 0x70);
      if (uVar12 < *(ulonglong *)(local_res20 + 0x78)) {
        uVar13 = uVar12;
        if (uVar12 < *(ulonglong *)(local_res20 + 0x80) >> 1) {
LAB_143460422:
          FUN_1432cfd30(plVar17,plVar17,uVar13);
        }
      }
      else if (*(ulonglong *)(local_res20 + 0x80) < uVar12) {
        uVar13 = (uVar12 >> 2) + uVar12;
        goto LAB_143460422;
      }
      uVar13 = local_res20;
      *(ulonglong *)(uVar15 + 0x78) = uVar12;
      uVar12 = 0;
      uVar15 = *(ulonglong *)(local_res20 + 0x78);
      if (uVar15 != 0) {
        do {
          *(undefined8 *)(*plVar17 + uVar12 * 8) = *(undefined8 *)(*plVar18 + uVar12 * 8);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar15);
      }
      if (((*(longlong *)(uVar8 + 0x78) != 0) &&
          ((*(ulonglong *)(uVar8 + 0x80) & 0xfffffffffffffffe) != 0)) &&
         (*(ulonglong *)(uVar8 + 0x80) != 0)) {
        if (*plVar18 != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *plVar18 = 0;
        }
        *(undefined8 *)(uVar8 + 0x80) = 0;
      }
      *(undefined8 *)(uVar8 + 0x78) = 0;
      uVar9 = *(undefined8 *)(param_1 + 8);
    }
    else {
      Scaleform::GFx::AS2::ArrayObject::MakeDeepCopy
                (uVar8,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30));
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar13 = uVar8;
    }
    FUN_143412aa0(uVar9,uVar13);
    if (uVar20 != 0) {
      plVar18 = (longlong *)(local_100 + -0x20 + uVar20 * 0x38);
      do {
        if ((((*(byte *)(plVar18 + 1) & 2) == 0) && (lVar7 = plVar18[-1], lVar7 != 0)) &&
           ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          FUN_1434a2b80();
        }
        plVar18[-1] = 0;
        if ((((*(byte *)(plVar18 + 1) & 1) == 0) && (lVar7 = *plVar18, lVar7 != 0)) &&
           ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *plVar18 = 0;
        plVar18 = plVar18 + -7;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
LAB_143460537:
    if (local_100 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    if ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
      FUN_1434a2b80(uVar8);
    }
  }
  piVar1 = (int *)(lVar19 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar19);
  }
  if (local_138 != (uint *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
LAB_14346058a:
  if (plVar16 != (longlong *)0x0) {
    piVar1 = (int *)(plVar16[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    lVar19 = plVar16[1];
    plVar18 = (longlong *)(*plVar16 + (lVar19 + -1) * 8);
    for (; lVar19 != 0; lVar19 = lVar19 + -1) {
      piVar1 = (int *)(*plVar18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar18 = plVar18 + -1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar16);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar16);
  }
  return;
}



// FUNCTION 143460660 FUN_143460660 body=703 status=ok
// SIG undefined FUN_143460660(void)

void FUN_143460660(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 7)) {
    lVar8 = 0;
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = lVar8;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      *puVar1 = 0;
    }
    else {
      *(undefined1 *)(lVar4 + 0x94) = 0;
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(uint *)(param_1 + 0x3c);
      lVar7 = lVar8;
      if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      iVar2 = FUN_143411e30(lVar7);
      if (iVar2 < 0) {
        iVar2 = iVar2 + *(int *)(lVar4 + 0x78);
      }
      iVar10 = *(int *)(lVar4 + 0x78);
      iVar9 = 0;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      if (iVar10 < iVar9) {
        iVar9 = iVar10;
      }
      iVar10 = iVar10 - iVar9;
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - 1;
        lVar7 = lVar8;
        if (uVar6 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        iVar10 = FUN_143411e30(lVar7);
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        if (*(int *)(lVar4 + 0x78) <= iVar10 + iVar9) {
          iVar10 = *(int *)(lVar4 + 0x78) - iVar9;
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      lVar3 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x60),
                            *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x148,0,0xffffffff);
      if (lVar3 != 0) {
        lVar7 = (longlong)iVar10;
        if (0 < iVar10) {
          lVar5 = (longlong)iVar9 * 8;
          do {
            if (*(longlong *)(lVar5 + *(longlong *)(lVar4 + 0x70)) == 0) {
              FUN_14345e450(lVar3);
            }
            else {
              FUN_14345e390();
            }
            lVar5 = lVar5 + 8;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
        if (iVar10 != 0) {
          FUN_14345e5d0(lVar4,iVar9,iVar10);
        }
        if (2 < *(int *)(param_1 + 0x38)) {
          FUN_14345e710(lVar4,iVar9,*(int *)(param_1 + 0x38) + -2);
          iVar2 = 2;
          if (2 < *(int *)(param_1 + 0x38)) {
            do {
              lVar7 = *(longlong *)(param_1 + 0x30);
              uVar6 = *(int *)(param_1 + 0x3c) - iVar2;
              lVar5 = lVar8;
              if (uVar6 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                                 (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))
                 ) {
                lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
              }
              FUN_14345e250(lVar4,iVar2 + iVar9 + -2,lVar5);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 0x38));
          }
        }
        if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80(lVar3);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 143460930 FUN_143460930 body=391 status=ok
// SIG undefined FUN_143460930(void)

void FUN_143460930(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined1 *local_38;
  undefined8 local_30;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 7) {
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = 0;
      }
      *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + 1;
      if (*(int *)(lVar6 + 0x90) < 0xff) {
        FUN_1432c5960(&local_38,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30));
        FUN_14345e7e0(lVar6,*(undefined8 *)(param_1 + 0x30),&local_38,&DAT_145b0a66c);
        puVar5 = &DAT_145af3922;
        if (local_38 != (undefined1 *)0x0) {
          puVar5 = local_38;
        }
        lVar4 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),puVar5,local_30);
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 5;
        *(longlong *)(pbVar2 + 8) = lVar4;
        iVar3 = *(int *)(lVar4 + 0x18);
        *(int *)(lVar4 + 0x18) = iVar3;
        if (iVar3 == 0) {
          FUN_14335f920(lVar4);
        }
        Scaleform::StringBuffer::~StringBuffer(&local_38);
      }
      else {
        local_res8[0] = 0x34000;
        FUN_1432c19d0(*(undefined8 *)(lVar6 + 0x68),local_res8,
                      "256 levels of recursion is reached\n");
        pbVar2 = *(byte **)(param_1 + 8);
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 5;
        lVar4 = *(longlong *)(lVar4 + 0x138);
        *(longlong *)(pbVar2 + 8) = lVar4;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -1;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 143460ac0 FUN_143460ac0 body=273 status=ok
// SIG undefined FUN_143460ac0(void)

void FUN_143460ac0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 7)) {
    uVar6 = 0;
    uVar7 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar7 = uVar6;
    }
    *(undefined1 *)(uVar7 + 0x94) = 0;
    if ((0 < *(int *)(param_1 + 0x38)) &&
       (FUN_14345e710(uVar7,0), uVar5 = uVar6, 0 < *(int *)(param_1 + 0x38))) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - (int)uVar5;
        uVar8 = uVar6;
        if (uVar9 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          uVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        FUN_14345e250(uVar7,uVar5,uVar8);
        uVar9 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x38));
    }
    pbVar2 = *(byte **)(param_1 + 8);
    uVar3 = *(undefined8 *)(uVar7 + 0x78);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(int *)(pbVar2 + 8) = (int)uVar3;
    *pbVar2 = 4;
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 143460be0 FUN_143460be0 body=119 status=ok
// SIG undefined FUN_143460be0(void)

void FUN_143460be0(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 7) {
      pbVar1 = *(byte **)(param_1 + 8);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        puVar4 = (undefined8 *)&DAT_00000078;
      }
      uVar2 = *puVar4;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(int *)(pbVar1 + 8) = (int)uVar2;
      *pbVar1 = 4;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Array");
  return;
}



// FUNCTION 143460c70 FUN_143460c70 body=106 status=ok
// SIG undefined FUN_143460c70(void)

undefined8 * FUN_143460c70(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494890();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0ea30;
  param_1[4] = &PTR_LAB_145b0ea78;
  param_1[0x13] = &PTR_LAB_145b0eb20;
  FUN_143422ee0(param_1 + 0x13,param_1,param_2,&PTR_s_concat_145b07510,local_res8);
  return param_1;
}



// FUNCTION 143460ce0 FUN_143460ce0 body=334 status=ok
// SIG undefined FUN_143460ce0(void)

undefined8 * FUN_143460ce0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined4 local_30;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143460e40;
  FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2);
  *param_1 = &PTR_LAB_145b0eb28;
  param_1[4] = &PTR_LAB_145b0aef8;
  lVar4 = 0;
  ppuVar2 = &PTR_s_CASEINSENSITIVE_145b07430;
  lVar3 = lVar4;
  do {
    local_30 = *(undefined4 *)((longlong)&DAT_145b07438 + lVar4);
    lVar4 = -1;
    local_res8[0] = 3;
    local_38[0] = 4;
    do {
      lVar4 = lVar4 + 1;
    } while ((*ppuVar2)[lVar4] != '\0');
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                *ppuVar2,lVar4,0);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
    lVar3 = lVar3 + 1;
    lVar4 = lVar3 * 0x10;
    ppuVar2 = &PTR_s_CASEINSENSITIVE_145b07430 + lVar3 * 2;
  } while ((&PTR_s_CASEINSENSITIVE_145b07430)[lVar3 * 2] != (undefined *)0x0);
  return param_1;
}



// FUNCTION 143460e40 FUN_143460e40 body=461 status=ok
// SIG undefined FUN_143460e40(void)

void FUN_143460e40(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_res8 [8];
  byte local_28 [8];
  undefined4 local_20;
  
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 7)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar3 != '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x98,0);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_14345d8d0(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
    }
  }
  pcVar8 = (char *)0x0;
  local_res8[0] = 1;
  local_28[0] = 4;
  local_20 = 0;
  (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x18))
            ((longlong *)(lVar7 + 0x20),*(longlong *)(param_1 + 0x30),
             *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
             0x610,local_28,local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x38) == 1) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      pcVar9 = pcVar8;
      if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        pcVar9 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                         *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
      }
      if ((byte)(*pcVar9 - 3U) < 2) {
        if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
          pcVar8 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                           *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8))
          ;
        }
        uVar5 = FUN_143411e30(pcVar8);
        FUN_14345e160(lVar7,uVar5);
        goto LAB_143460fda;
      }
    }
    FUN_14345d7c0(lVar7,param_1);
  }
LAB_143460fda:
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 143461020 FUN_143461020 body=505 status=ok
// SIG undefined FUN_143461020(void)

void FUN_143461020(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong local_50;
  byte local_48;
  byte local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14345d8d0(lVar2,*(undefined8 *)(param_1 + 0x30));
  }
  local_res8[0] = 1;
  local_40[0] = 4;
  local_38 = (ulonglong)local_38._4_4_ << 0x20;
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x18))
            (lVar3 + 0x20,*(longlong *)(param_1 + 0x30),
             *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
             0x610,local_40,local_res8);
  if (4 < local_40[0]) {
    FUN_143411150(local_40);
  }
  FUN_14341a730(*(undefined8 *)(param_1 + 0x30),&local_58,2);
  lVar2 = *(longlong *)(param_1 + 0x30);
  local_res8[0] = 3;
  local_40[0] = 8;
  local_28 = 0;
  local_38 = local_58;
  if (local_58 != 0) {
    *(uint *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1U & 0x8fffffff;
  }
  local_30 = 0;
  if (local_50 != 0) {
    FUN_1434109d0(&local_38,local_50,local_48 & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,lVar2 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) + 0x3b0,
             local_40,local_res8);
  if (4 < local_40[0]) {
    FUN_143411150(local_40);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_14345d7c0(lVar3,param_1);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
  if ((((local_48 & 2) == 0) && (local_58 != 0)) && ((*(uint *)(local_58 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_58 + 0x18) = *(uint *)(local_58 + 0x18) - 1;
    FUN_1434a2b80(local_58);
  }
  if ((((local_48 & 1) == 0) && (local_50 != 0)) && ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
    FUN_1434a2b80(local_50);
  }
  if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  return;
}



// FUNCTION 143461220 FUN_143461220 body=61 status=ok
// SIG undefined FUN_143461220(void)

void FUN_143461220(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  if (lVar2 != 0) {
    FUN_14345d8d0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143461270 FUN_143461270 body=852 status=ok
// SIG undefined FUN_143461270(void)

longlong * FUN_143461270(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_143460ce0(lVar2,&local_58);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xd8,0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,1);
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0e940;
    puVar3[0xd] = 0;
    puVar3[4] = &PTR_LAB_145b0e988;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    FUN_1432c5250(puVar3 + 0x11);
    *(undefined4 *)(puVar3 + 0x12) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x94) = 0;
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    puVar4 = puVar3 + 0x13;
    *(undefined1 *)(puVar3 + 0x16) = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    *(undefined1 *)(puVar3 + 0x19) = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1a] = 0;
    *puVar3 = &PTR_LAB_145b0ea30;
    puVar3[4] = &PTR_LAB_145b0ea78;
    *puVar4 = &PTR_LAB_145b0eb20;
    FUN_1434230f0(puVar4,puVar3,&local_58,param_1);
    local_res10[0] = 1;
    *puVar3 = &PTR_LAB_145b0ea30;
    puVar3[4] = &PTR_LAB_145b0ea78;
    *puVar4 = &PTR_LAB_145b0eb20;
    FUN_143422ee0(puVar4,puVar3,&local_58,&PTR_s_concat_145b07510,local_res10);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    puVar4 = puVar3;
  }
  local_res8 = puVar4;
  FUN_1434a4b90(param_2,2,&local_res8);
  local_40[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x148,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar4 != (undefined8 *)0x0) && ((*(uint *)(puVar4 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar4 + 3) = *(uint *)(puVar4 + 3) - 1;
    FUN_1434a2b80(puVar4);
  }
  return param_1;
}



// FUNCTION 1434615d0 FUN_1434615d0 body=61 status=ok
// SIG undefined FUN_1434615d0(void)

void FUN_1434615d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),4);
                    /* WARNING: Could not recover jumptable at 0x000143461609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 143461620 FUN_143461620 body=122 status=ok
// SIG undefined FUN_143461620(void)

undefined8 * FUN_143461620(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ebb0;
  param_1[4] = &PTR_LAB_145b0ebf8;
  FUN_1432c5250(param_1 + 0xe);
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),4);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434616a0 FUN_1434616a0 body=132 status=ok
// SIG undefined FUN_1434616a0(void)

undefined8 * FUN_1434616a0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  param_1[0xd] = param_3;
  *param_1 = &PTR_LAB_145b0ebb0;
  param_1[4] = &PTR_LAB_145b0ebf8;
  FUN_1432c5250(param_1 + 0xe);
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),4);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143461730 FUN_143461730 body=64 status=ok
// SIG undefined FUN_143461730(void)

longlong FUN_143461730(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_48 [64];
  
  uVar1 = FUN_143364c20(*(undefined8 *)(param_1 + 0x48),local_48,0x40);
  Scaleform::String::operator=(param_1 + 0x50,uVar1);
  return (*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xc;
}



// FUNCTION 143461780 FUN_143461780 body=63 status=ok
// SIG undefined FUN_143461780(void)

longlong FUN_143461780(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [64];
  
  uVar1 = FUN_143364c20(*(undefined8 *)(param_1 + 0x68),local_48,0x40,param_2);
  Scaleform::String::operator=(param_1 + 0x70,uVar1);
  return (*(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc) + 0xc;
}



// FUNCTION 1434617d0 SetValue body=28 status=ok
// SIG undefined SetValue(void)

void Scaleform::GFx::AS2::NumberObject::SetValue
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143411a90(param_3);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 143461820 FUN_143461820 body=564 status=ok
// SIG undefined FUN_143461820(void)

undefined8 FUN_143461820(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  longlong *local_48;
  longlong local_40;
  byte local_38;
  byte local_30 [8];
  longlong *local_28;
  longlong local_20;
  byte local_18;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
  if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0) < 7) {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar5 = *param_2;
    bVar6 = *(longlong *)(*(longlong *)(lVar3 + 1000) + 0x10) == *(longlong *)(lVar5 + 0x10);
  }
  else {
    lVar5 = *param_2;
    bVar6 = *(longlong *)(lVar3 + 1000) == lVar5;
  }
  if (!bVar6) {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0) < 7) {
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        FUN_14335f970(lVar5);
      }
      bVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x3f0) + 0x10) == *(longlong *)(*param_2 + 0x10);
    }
    else {
      bVar6 = *(longlong *)(lVar3 + 0x3f0) == lVar5;
    }
    if (!bVar6) goto LAB_143461956;
  }
  local_30[0] = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)&DAT_00000020;
  }
  cVar2 = (**(code **)(*plVar4 + 0x58))
                    (plVar4,*(longlong *)(param_1 + 0x30) + 0xe8,param_2,local_30);
  if (cVar2 != '\0') {
    if (local_30[0] == 8) {
      bVar7 = 0;
      if (local_28 != (longlong *)0x0) {
        *(int *)(local_28 + 3) = (int)local_28[3] + 1;
        *(uint *)(local_28 + 3) = *(uint *)(local_28 + 3) & 0x8fffffff;
      }
      lVar3 = 0;
      if ((local_20 != 0) && (bVar7 = (local_18 & 1) != 0, lVar3 = local_20, !(bool)bVar7)) {
        *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
        *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) & 0x8fffffff;
      }
LAB_1434619e2:
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x50))(local_28,param_1,lVar3,0);
        if ((bVar7 & 2) == 0) {
          if ((*(uint *)(local_28 + 3) & 0x3ffffff) != 0) {
            *(uint *)(local_28 + 3) = *(uint *)(local_28 + 3) - 1;
            FUN_1434a2b80(local_28);
          }
        }
        if (((bVar7 & 1) == 0) && (lVar3 != 0)) {
          if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
            FUN_1434a2b80(lVar3);
          }
        }
        if (4 < local_30[0]) {
          FUN_143411150(local_30);
        }
        return 1;
      }
    }
    else {
      if (local_30[0] == 0xb) {
        FUN_143413f20(local_30,&local_48,*(undefined8 *)(param_1 + 0x30));
        lVar3 = local_40;
        local_28 = local_48;
        bVar7 = local_38;
        goto LAB_1434619e2;
      }
      bVar7 = 0;
      lVar3 = 0;
    }
    if ((((bVar7 & 1) == 0) && (lVar3 != 0)) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  if (4 < local_30[0]) {
    FUN_143411150(local_30);
  }
LAB_143461956:
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return 0;
}



// FUNCTION 143461a60 FUN_143461a60 body=103 status=ok
// SIG undefined FUN_143461a60(void)

undefined8 * FUN_143461a60(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495720();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0eca0;
  param_1[4] = &PTR_LAB_145b0ece8;
  param_1[0xf] = &PTR_LAB_145b0ed90;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_toString_145b07890,local_res8);
  return param_1;
}



// FUNCTION 143461ad0 FUN_143461ad0 body=360 status=ok
// SIG undefined FUN_143461ad0(void)

undefined8 * FUN_143461ad0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [8];
  undefined8 local_40;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143461c90;
  FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2);
  *param_1 = &PTR_LAB_145b0ed98;
  param_1[4] = &PTR_LAB_145b0aef8;
  ppuVar2 = &PTR_s_MAX_VALUE_145b07980;
  lVar4 = 0;
  lVar3 = lVar4;
  do {
    local_res8[0] = 7;
    local_40 = (**(code **)((longlong)&PTR_FUN_145b07988 + lVar4))();
    lVar4 = -1;
    local_48[0] = 3;
    do {
      lVar4 = lVar4 + 1;
    } while ((*ppuVar2)[lVar4] != '\0');
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                                *ppuVar2,lVar4,0);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_48,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    lVar3 = lVar3 + 1;
    lVar4 = lVar3 * 0x10;
    ppuVar2 = &PTR_s_MAX_VALUE_145b07980 + lVar3 * 2;
  } while ((&PTR_s_MAX_VALUE_145b07980)[lVar3 * 2] != (undefined *)0x0);
  return param_1;
}



// FUNCTION 143461c40 FUN_143461c40 body=60 status=ok
// SIG undefined FUN_143461c40(void)

void FUN_143461c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_143461620(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143461c90 FUN_143461c90 body=424 status=ok
// SIG undefined FUN_143461c90(void)

void FUN_143461c90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte local_78 [32];
  byte local_58 [32];
  byte local_38 [48];
  
  plVar9 = (longlong *)0x0;
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 9)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar6 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        plVar9 = (longlong *)
                 ((ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
      }
      uVar6 = FUN_143411a90(plVar9);
    }
    pbVar7 = *(byte **)(param_1 + 8);
    if (4 < *pbVar7) {
      FUN_143411150(pbVar7);
    }
    *(undefined8 *)(pbVar7 + 8) = uVar6;
    *pbVar7 = 3;
    return;
  }
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar8 = plVar9;
  }
  bVar3 = *(int *)(param_1 + 0x38) < 1;
  if (bVar3) {
    local_58[0] = 0;
    pbVar7 = local_58;
  }
  else {
    uVar6 = FUN_1434141c0(param_1,0);
    pbVar7 = (byte *)FUN_143410ec0(local_38,uVar6);
  }
  FUN_143410ec0(local_78,pbVar7);
  if ((bVar3) && (4 < local_58[0])) {
    FUN_143411150(local_58);
  }
  if ((!bVar3) && (4 < local_38[0])) {
    FUN_143411150(local_38);
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,*(undefined8 *)(param_1 + 0x30),local_78);
  FUN_143411240(*(undefined8 *)(param_1 + 8),local_78);
  if (local_78[0] < 5) {
    return;
  }
  FUN_143411150(local_78);
  return;
}



// FUNCTION 143461e40 FUN_143461e40 body=838 status=ok
// SIG undefined FUN_143461e40(void)

longlong * FUN_143461e40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_143461ad0(lVar2,&local_58);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb8,0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar2 = FUN_14341b750(param_2,1);
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar3[1] = puVar4;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ac50;
    puVar3[4] = &PTR_LAB_145b0ac98;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = 0;
    *puVar3 = &PTR_LAB_145b0ebb0;
    puVar3[0xd] = 0;
    puVar3[4] = &PTR_LAB_145b0ebf8;
    FUN_1432c5250(puVar3 + 0xe);
    if (puVar3[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar3[4] + 0x50))
                (puVar3 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar3[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar3[6] = lVar2;
    *(undefined1 *)(puVar3 + 0x12) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x16] = 0;
    *puVar3 = &PTR_LAB_145b0eca0;
    puVar3[4] = &PTR_LAB_145b0ece8;
    puVar3[0xf] = &PTR_LAB_145b0ed90;
    FUN_1434230f0(puVar3 + 0xf,puVar3,&local_58,param_1);
    local_res10[0] = 1;
    *puVar3 = &PTR_LAB_145b0eca0;
    puVar3[4] = &PTR_LAB_145b0ece8;
    puVar3[0xf] = &PTR_LAB_145b0ed90;
    FUN_143422ee0(puVar3 + 0xf,puVar3,&local_58,&PTR_s_toString_145b07890,local_res10);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    puVar4 = puVar3;
  }
  local_res8 = puVar4;
  FUN_1434a4b90(param_2,4,&local_res8);
  local_40[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x158,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar4 != (undefined8 *)0x0) && ((*(uint *)(puVar4 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar4 + 3) = *(uint *)(puVar4 + 3) - 1;
    FUN_1434a2b80(puVar4);
  }
  return param_1;
}



// FUNCTION 143462190 FUN_143462190 body=61 status=ok
// SIG undefined FUN_143462190(void)

void FUN_143462190(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),5);
                    /* WARNING: Could not recover jumptable at 0x0001434621c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 1434621e0 FUN_1434621e0 body=109 status=ok
// SIG undefined FUN_1434621e0(void)

undefined8 * FUN_1434621e0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_145b0ee20;
  param_1[4] = &PTR_LAB_145b0ee68;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),5);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143462260 FUN_143462260 body=125 status=ok
// SIG undefined FUN_143462260(void)

undefined8 * FUN_143462260(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *(undefined1 *)(param_1 + 0xd) = param_3;
  *param_1 = &PTR_LAB_145b0ee20;
  param_1[4] = &PTR_LAB_145b0ee68;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),5);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143462310 SetValue body=26 status=ok
// SIG undefined SetValue(void)

void Scaleform::GFx::AS2::BooleanObject::SetValue
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143411fd0(param_3);
  *(undefined1 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 143462350 FUN_143462350 body=564 status=ok
// SIG undefined FUN_143462350(void)

undefined8 FUN_143462350(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  longlong *local_48;
  longlong local_40;
  byte local_38;
  byte local_30 [8];
  longlong *local_28;
  longlong local_20;
  byte local_18;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
  if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0) < 7) {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar5 = *param_2;
    bVar6 = *(longlong *)(*(longlong *)(lVar3 + 1000) + 0x10) == *(longlong *)(lVar5 + 0x10);
  }
  else {
    lVar5 = *param_2;
    bVar6 = *(longlong *)(lVar3 + 1000) == lVar5;
  }
  if (!bVar6) {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0) < 7) {
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        FUN_14335f970(lVar5);
      }
      bVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x3f0) + 0x10) == *(longlong *)(*param_2 + 0x10);
    }
    else {
      bVar6 = *(longlong *)(lVar3 + 0x3f0) == lVar5;
    }
    if (!bVar6) goto LAB_143462486;
  }
  local_30[0] = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)&DAT_00000020;
  }
  cVar2 = (**(code **)(*plVar4 + 0x58))
                    (plVar4,*(longlong *)(param_1 + 0x30) + 0xe8,param_2,local_30);
  if (cVar2 != '\0') {
    if (local_30[0] == 8) {
      bVar7 = 0;
      if (local_28 != (longlong *)0x0) {
        *(int *)(local_28 + 3) = (int)local_28[3] + 1;
        *(uint *)(local_28 + 3) = *(uint *)(local_28 + 3) & 0x8fffffff;
      }
      lVar3 = 0;
      if ((local_20 != 0) && (bVar7 = (local_18 & 1) != 0, lVar3 = local_20, !(bool)bVar7)) {
        *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
        *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) & 0x8fffffff;
      }
LAB_143462512:
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x50))(local_28,param_1,lVar3,0);
        if ((bVar7 & 2) == 0) {
          if ((*(uint *)(local_28 + 3) & 0x3ffffff) != 0) {
            *(uint *)(local_28 + 3) = *(uint *)(local_28 + 3) - 1;
            FUN_1434a2b80(local_28);
          }
        }
        if (((bVar7 & 1) == 0) && (lVar3 != 0)) {
          if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
            FUN_1434a2b80(lVar3);
          }
        }
        if (4 < local_30[0]) {
          FUN_143411150(local_30);
        }
        return 1;
      }
    }
    else {
      if (local_30[0] == 0xb) {
        FUN_143413f20(local_30,&local_48,*(undefined8 *)(param_1 + 0x30));
        lVar3 = local_40;
        local_28 = local_48;
        bVar7 = local_38;
        goto LAB_143462512;
      }
      bVar7 = 0;
      lVar3 = 0;
    }
    if ((((bVar7 & 1) == 0) && (lVar3 != 0)) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  if (4 < local_30[0]) {
    FUN_143411150(local_30);
  }
LAB_143462486:
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return 0;
}



// FUNCTION 143462590 FUN_143462590 body=103 status=ok
// SIG undefined FUN_143462590(void)

undefined8 * FUN_143462590(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494c70();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0ef10;
  param_1[4] = &PTR_LAB_145b0ef58;
  param_1[0xe] = &PTR_LAB_145b0f000;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_toString_145b07e50,local_res8);
  return param_1;
}



// FUNCTION 143462600 FUN_143462600 body=126 status=ok
// SIG undefined FUN_143462600(void)

undefined8 * FUN_143462600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_1434626e0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0f008;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143462690 FUN_143462690 body=60 status=ok
// SIG undefined FUN_143462690(void)

void FUN_143462690(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_1434621e0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1434626e0 FUN_1434626e0 body=393 status=ok
// SIG undefined FUN_1434626e0(void)

void FUN_1434626e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte local_68 [32];
  byte local_48 [32];
  byte local_28 [32];
  
  plVar11 = (longlong *)0x0;
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar7 != 10)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        plVar11 = (longlong *)
                  ((ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
      }
      bVar6 = FUN_143411fd0(plVar11);
      plVar11 = (longlong *)(ulonglong)bVar6;
    }
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    puVar3[8] = (char)plVar11;
    *puVar3 = 2;
    return;
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar10 = plVar11;
  }
  bVar4 = *(int *)(param_1 + 0x38) < 1;
  if (bVar4) {
    local_48[0] = 0;
    pbVar9 = local_48;
  }
  else {
    uVar8 = FUN_1434141c0(param_1,0);
    pbVar9 = (byte *)FUN_143410ec0(local_28,uVar8);
  }
  FUN_143410ec0(local_68,pbVar9);
  if ((bVar4) && (4 < local_48[0])) {
    FUN_143411150(local_48);
  }
  if ((!bVar4) && (4 < local_28[0])) {
    FUN_143411150(local_28);
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)(param_1 + 0x30),local_68);
  FUN_143411240(*(undefined8 *)(param_1 + 8),local_68);
  if (local_68[0] < 5) {
    return;
  }
  FUN_143411150(local_68);
  return;
}



// FUNCTION 143462870 FUN_143462870 body=786 status=ok
// SIG undefined FUN_143462870(void)

longlong * FUN_143462870(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_1434626e0;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0f008;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143494c70(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0ef10;
    puVar4[4] = &PTR_LAB_145b0ef58;
    puVar4[0xe] = &PTR_LAB_145b0f000;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_58,&PTR_s_toString_145b07e50,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,5,&local_res8);
  local_40[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x160,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
    FUN_1434a2b80(puVar6);
  }
  return param_1;
}



// FUNCTION 143462b90 FUN_143462b90 body=102 status=ok
// SIG undefined FUN_143462b90(void)

undefined8 * FUN_143462b90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0ac98;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x19);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143462c00 FUN_143462c00 body=296 status=ok
// SIG undefined FUN_143462c00(void)

ulonglong FUN_143462c00(longlong param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  RefCountImpl *this;
  ulonglong uVar4;
  ulonglong local_res8;
  undefined1 local_68 [24];
  undefined **local_50;
  undefined8 local_40;
  
  this = (RefCountImpl *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,0x23);
  if (this == (RefCountImpl *)0x0) {
    uVar4 = Scaleform::Alg::Random::NextRandom();
    return uVar4;
  }
  Scaleform::RefCountImpl::Release(this);
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = Scaleform::Alg::Random::NextRandom();
    uVar4 = (ulonglong)uVar1;
    FUN_143354b50(local_68,uVar1);
    FUN_143355390(local_68);
    (**(code **)(*(longlong *)this + 0x10))(this,"random",local_40);
    local_50 = &PTR_FUN_145af1858;
    FUN_143353a80(local_68);
  }
  else {
    FUN_1432c2f70(&local_res8);
    (**(code **)(*(longlong *)this + 8))(this,"random",&local_res8);
    uVar2 = strtoul((char *)((local_res8 & 0xfffffffffffffffc) + 0xc),(char **)0x0,10);
    uVar4 = (ulonglong)uVar2;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 143462d30 FUN_143462d30 body=55 status=ok
// SIG undefined FUN_143462d30(void)

undefined8 * FUN_143462d30(undefined8 *param_1)

{
  FUN_143495410();
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  return param_1;
}



// FUNCTION 143462d70 FUN_143462d70 body=92 status=ok
// SIG undefined FUN_143462d70(void)

void FUN_143462d70(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = FUN_143462c00(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20)
                         + 0x10));
  pbVar1 = *(byte **)(param_1 + 8);
  if (4 < *pbVar1) {
    FUN_143411150(pbVar1);
  }
  *(double *)(pbVar1 + 8) = (double)uVar2 / 4294967295.0;
  *pbVar1 = 3;
  return;
}



// FUNCTION 143462de0 FUN_143462de0 body=135 status=ok
// SIG undefined FUN_143462de0(void)

void FUN_143462de0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(lVar4,lVar2);
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5 + 0.5);
  pbVar3 = *(byte **)(param_1 + 8);
  if (4 < *pbVar3) {
    FUN_143411150(pbVar3);
  }
  *(double *)(pbVar3 + 8) = dVar5;
  *pbVar3 = 3;
  return;
}



// FUNCTION 143462e70 FUN_143462e70 body=1156 status=ok
// SIG undefined FUN_143462e70(void)

undefined8 * FUN_143462e70(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined8 local_30;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor;
  uVar2 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar2);
  *param_1 = &PTR_LAB_145b0ae70;
  local_30 = 0x4005bf0a8b145769;
  param_1[4] = &PTR_LAB_145b0aef8;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145af83d0,1);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x3fe62e42fefa39ef;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13208,3);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x3ff71547652b82fe;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "LOG2E",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x40026bb1bbb55516;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13214,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x3fdbcb7b1526e50e;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "LOG10E",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x400921fb54442d18;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13224,2);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x3fe6a09e667f3bcd;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "SQRT1_2",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  local_30 = 0x3ff6a09e667f3bcd;
  local_38[0] = 3;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "SQRT2",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  FUN_14340b610(param_1 + 4,param_2,&PTR_DAT_145b07fd0,7);
  return param_1;
}



// FUNCTION 143463300 GlobalCtor body=27 status=ok
// SIG undefined GlobalCtor(void)

void Scaleform::GFx::AS2::KeyCtorFunction::GlobalCtor(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 143463330 FUN_143463330 body=414 status=ok
// SIG undefined FUN_143463330(void)

longlong * FUN_143463330(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_res8;
  longlong local_38;
  undefined1 local_30;
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_30 = 8;
  local_38 = param_2;
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))(*(longlong **)(param_2 + 0x30),0x70)
  ;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_143462e70(lVar1,&local_38);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = FUN_14341b750(param_2,1);
    FUN_143495410(puVar3,&local_38,uVar4,param_1);
    *puVar3 = &PTR_LAB_145b0b588;
    puVar3[4] = &PTR_LAB_145b0b5d0;
    puVar3[0xd] = &PTR_LAB_145b0b678;
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  }
  local_res8 = puVar3;
  FUN_1434a4b90(param_2,0x19,&local_res8);
  local_20[0] = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_20,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x50))
            (lVar2 + 0x20,&local_38,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x200,
             local_28,&local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
    FUN_1434a2b80(puVar3);
  }
  return param_1;
}



// FUNCTION 143463530 FUN_143463530 body=205 status=ok
// SIG undefined FUN_143463530(void)

undefined8 * FUN_143463530(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b0f090;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar2 = *param_2;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[3] = 0;
  if (param_2[1] != 0) {
    FUN_1434109d0(param_1 + 2,param_2[1],*(byte *)(param_2 + 2) & 1);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x138);
  param_1[7] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 143463610 FUN_143463610 body=122 status=ok
// SIG undefined FUN_143463610(void)

undefined8 * FUN_143463610(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b0f090;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[5] = param_2;
  param_1[6] = 0;
  lVar2 = *param_3;
  param_1[7] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 143463690 FUN_143463690 body=156 status=ok
// SIG undefined FUN_143463690(void)

undefined8 * FUN_143463690(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b0f090;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    uVar3 = FUN_1432be180(param_2);
  }
  param_1[6] = uVar3;
  lVar2 = *param_3;
  param_1[7] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 143463760 FUN_143463760 body=1570 status=ok
// SIG undefined FUN_143463760(void)

ulonglong FUN_143463760(longlong param_1,longlong param_2,float param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  RefCountNTSImpl *pRVar5;
  RefCountNTSImpl *pRVar6;
  RefCountNTSImpl *pRVar7;
  longlong lVar8;
  RefCountNTSImpl *pRVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  RefCountNTSImpl *pRVar13;
  byte bVar14;
  RefCountNTSImpl *pRVar15;
  undefined8 in_R8;
  int iVar16;
  int iVar17;
  RefCountNTSImpl *local_res8;
  longlong local_res10;
  longlong local_res20;
  RefCountNTSImpl *pRVar18;
  longlong local_f0;
  longlong lStack_e8;
  byte local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  byte local_c8;
  byte local_c0 [8];
  longlong local_b8;
  longlong local_b0;
  byte local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined **local_90;
  byte *local_88;
  RefCountNTSImpl *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  longlong local_60;
  int local_58;
  int local_54;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  local_a0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = *(ulonglong *)(param_2 + 0x268);
  bVar14 = 0;
  if (local_98 < *(ulonglong *)(param_1 + 0x60)) goto LAB_143463d61;
  pRVar9 = (RefCountNTSImpl *)0x0;
  local_c8 = 0;
  pRVar18 = (RefCountNTSImpl *)0x0;
  local_d8 = (longlong *)0x0;
  lStack_d0 = 0;
  local_res20 = 0;
  pRVar15 = pRVar9;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    if (lVar8 != 0) {
      *(uint *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1U & 0x8fffffff;
    }
    pRVar13 = *(RefCountNTSImpl **)(param_1 + 0x28);
    if (pRVar13 == (RefCountNTSImpl *)0x0) {
LAB_14346385f:
      FUN_1432efd10(param_1 + 0x30,&local_res8,in_R8,param_4,0);
      pRVar15 = local_res8;
      if (local_res8 != (RefCountNTSImpl *)0x0) {
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        if (local_res8 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(local_res8);
          Scaleform::RefCountNTSImpl::Release(pRVar15);
          lVar8 = (**(code **)(*(longlong *)(pRVar15 + (ulonglong)(byte)pRVar15[0x6d] * 4) + 8))
                            (pRVar15 + (ulonglong)(byte)pRVar15[0x6d] * 4);
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)(pRVar15 + (ulonglong)(byte)pRVar15[0x6d] * 4) + 8))
                             (pRVar15 + (ulonglong)(byte)pRVar15[0x6d] * 4);
          local_res20 = (**(code **)(*plVar4 + 0xf0))(plVar4);
          pRVar6 = (RefCountNTSImpl *)(lVar8 + 8);
          if (lVar8 == 0) {
            pRVar6 = (RefCountNTSImpl *)0x0;
          }
          goto LAB_1434638da;
        }
      }
    }
    else {
      iVar16 = *(int *)(pRVar13 + 0x18);
      uVar3 = iVar16 + 1U & 0x8fffffff;
      *(uint *)(pRVar13 + 0x18) = uVar3;
      if (pRVar13 == (RefCountNTSImpl *)0x0) goto LAB_14346385f;
      if ((iVar16 + 1U & 0x3ffffff) != 0) {
        *(uint *)(pRVar13 + 0x18) = uVar3 - 1;
        FUN_1434a2b80(pRVar13);
      }
      pRVar6 = pRVar13 + 0x20;
LAB_1434638da:
      if (pRVar6 != (RefCountNTSImpl *)0x0) {
        local_c0[0] = 0;
        pRVar18 = pRVar6;
        lVar8 = FUN_143437b70(local_a0,0);
        pRVar5 = pRVar9;
        if (lVar8 != 0) {
          pRVar5 = (RefCountNTSImpl *)
                   (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 8))
                             ();
        }
        lVar8 = (**(code **)(*(longlong *)pRVar5 + 0xf0))();
        cVar2 = (**(code **)(*(longlong *)pRVar6 + 0x58))
                          (pRVar6,lVar8 + 0xe8,param_1 + 0x38,local_c0);
        if (cVar2 != '\0') {
          if (local_c0[0] == 8) {
            local_e0 = 0;
            local_f0 = local_b8;
            if (local_b8 != 0) {
              *(int *)(local_b8 + 0x18) = *(int *)(local_b8 + 0x18) + 1;
              *(uint *)(local_b8 + 0x18) = *(uint *)(local_b8 + 0x18) & 0x8fffffff;
            }
            lStack_e8 = 0;
            if (local_b0 != 0) {
              local_e0 = (local_a8 & 1) != 0;
              lStack_e8 = local_b0;
              if (!(bool)local_e0) {
                *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + 1;
                *(uint *)(local_b0 + 0x18) = *(uint *)(local_b0 + 0x18) & 0x8fffffff;
              }
            }
          }
          else if (local_c0[0] == 0xb) {
            FUN_143413f20(local_c0,&local_f0,local_res20);
          }
          else {
            local_f0 = 0;
            lStack_e8 = 0;
            local_e0 = 0;
          }
          bVar14 = local_e0;
          lVar10 = lStack_e8;
          lVar8 = local_f0;
          FUN_143410a60(&local_d8,&local_f0);
          if ((((bVar14 & 2) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0))
          {
            *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
            FUN_1434a2b80(lVar8);
          }
          param_2 = local_res10;
          if ((((bVar14 & 1) == 0) && (lVar10 != 0)) &&
             ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
            FUN_1434a2b80(lVar10);
            param_2 = local_res10;
          }
        }
        if (4 < local_c0[0]) {
          FUN_143411150(local_c0);
        }
        goto LAB_143463a4e;
      }
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
    plVar4 = local_d8;
    lVar8 = lStack_d0;
  }
  else {
    FUN_143410a60(&local_d8);
    pRVar13 = pRVar9;
LAB_143463a4e:
    plVar4 = local_d8;
    lVar8 = lStack_d0;
    if (local_d8 != (longlong *)0x0) {
      local_c0[0] = 0;
      if (local_res20 == 0) {
        if ((*(longlong *)(param_1 + 0x70) != 0) &&
           (pRVar6 = (RefCountNTSImpl *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (*(longlong *)(param_1 + 0x70),param_2),
           pRVar6 != (RefCountNTSImpl *)0x0)) {
          *(int *)(pRVar6 + 8) = *(int *)(pRVar6 + 8) + 1;
          pRVar5 = pRVar9;
          if ((char)pRVar6[0x6a] < '\0') {
            pRVar5 = pRVar6;
          }
          pRVar7 = pRVar9;
          if (pRVar5 != (RefCountNTSImpl *)0x0) {
            pRVar7 = (RefCountNTSImpl *)
                     (**(code **)(*(longlong *)(pRVar5 + (ulonglong)(byte)pRVar5[0x6d] * 4) + 8))();
          }
          local_res20 = (**(code **)(*(longlong *)pRVar7 + 0xf0))();
          Scaleform::RefCountNTSImpl::Release(pRVar6);
          if (local_res20 != 0) goto LAB_143463b09;
        }
        lVar8 = FUN_143437b70(local_a0,0);
        if (lVar8 != 0) {
          pRVar9 = (RefCountNTSImpl *)
                   (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 8))
                             ();
        }
        local_res20 = (**(code **)(*(longlong *)pRVar9 + 0xf0))(pRVar9);
      }
LAB_143463b09:
      iVar16 = *(int *)(param_1 + 0x48);
      if ((0 < iVar16) && (iVar17 = iVar16 + -1, -1 < iVar17)) {
        puVar1 = (ulonglong *)(local_res20 + 8);
        lVar8 = (longlong)iVar17 << 5;
        do {
          lVar10 = *(longlong *)(param_1 + 0x40);
          *puVar1 = *puVar1 + 0x20;
          local_res8 = (RefCountNTSImpl *)(lVar10 + lVar8);
          if (*(ulonglong *)(local_res20 + 0x18) <= *puVar1) {
            FUN_1434a29d0(puVar1);
          }
          if (*puVar1 != 0) {
            FUN_143410ec0(*puVar1,local_res8);
          }
          lVar8 = lVar8 + -0x20;
          iVar17 = iVar17 + -1;
        } while (-1 < iVar17);
      }
      lVar8 = lStack_d0;
      plVar4 = local_d8;
      puVar1 = (ulonglong *)(local_res20 + 8);
      local_90 = &PTR_FUN_145b0ab98;
      local_88 = local_c0;
      local_54 = *(int *)(local_res20 + 0x30) * 0x20 + -0x20 +
                 (int)((longlong)(*puVar1 - *(longlong *)(local_res20 + 0x10)) >> 5);
      local_60 = local_res20;
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_80 = pRVar18;
      local_58 = iVar16;
      (**(code **)(*local_d8 + 0x50))(local_d8,&local_90,lStack_d0,0);
      local_90 = &PTR_FUN_145b0ab98;
      FUN_14349ebc0(&local_78);
      if (0 < iVar16) {
        do {
          if (4 < *(byte *)*puVar1) {
            FUN_143411150();
          }
          *puVar1 = *puVar1 - 0x20;
          if (*puVar1 < *(ulonglong *)(local_res20 + 0x10)) {
            FUN_1434a25c0(puVar1);
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      if (4 < local_c0[0]) {
        FUN_143411150(local_c0);
      }
    }
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    param_3 = param_3 * 1e+06;
    lVar10 = 0;
    if ((9.223372e+18 <= param_3) && (param_3 = param_3 - 9.223372e+18, param_3 < 9.223372e+18)) {
      lVar10 = -0x8000000000000000;
    }
    uVar11 = *(ulonglong *)(param_1 + 0x58);
    uVar12 = (ulonglong)((longlong)param_3 + lVar10) / 10;
    if (uVar11 < uVar12) {
      uVar11 = uVar12 & 0xffffffff;
    }
    if (uVar11 != 0) {
      uVar12 = (uVar11 - *(longlong *)(param_1 + 0x60)) + local_98;
      lVar10 = uVar12 - uVar12 % uVar11;
      if (lVar10 != 0) {
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + lVar10;
        goto LAB_143463cca;
      }
    }
    *(ulonglong *)(param_1 + 0x60) = local_98;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
LAB_143463cca:
  bVar14 = 1;
  if (pRVar15 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar15);
  }
  if ((pRVar13 != (RefCountNTSImpl *)0x0) && ((*(uint *)(pRVar13 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(pRVar13 + 0x18) = *(uint *)(pRVar13 + 0x18) - 1;
    FUN_1434a2b80(pRVar13);
  }
  if ((((local_c8 & 2) == 0) && (plVar4 != (longlong *)0x0)) &&
     ((*(uint *)(plVar4 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(plVar4 + 3) = *(uint *)(plVar4 + 3) - 1;
    FUN_1434a2b80(plVar4);
  }
  if ((((local_c8 & 1) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
    FUN_1434a2b80(lVar8);
  }
LAB_143463d61:
  return (ulonglong)bVar14;
}



// FUNCTION 143463db0 FUN_143463db0 body=187 status=ok
// SIG undefined FUN_143463db0(void)

void FUN_143463db0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x20) + 0x10);
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    dVar5 = (double)FUN_143411a90(lVar4,lVar2);
    if ((((ulonglong)dVar5 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar5 & 0xfffffffffffff) == 0)) {
      FUN_1432e7070(uVar3,(int)dVar5);
      return;
    }
  }
  return;
}



// FUNCTION 143463ea0 FUN_143463ea0 body=1483 status=ok
// SIG undefined FUN_143463ea0(void)

void FUN_143463ea0(longlong param_1,RefCountImpl param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  RefCountImpl *this;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  double dVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_48;
  longlong lStack_40;
  byte local_38;
  
  iVar6 = 0;
  local_res8 = 0;
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  if (*(int *)(param_1 + 0x38) < 2) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  pcVar10 = (char *)0x0;
  uVar13 = *(uint *)(param_1 + 0x3c);
  iVar14 = 1;
  plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0xe8) + 0x30);
  if (uVar13 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
    pcVar10 = (char *)((ulonglong)(uVar13 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar13 >> 5) * 8));
  }
  if ((*pcVar10 == '\b') || (*pcVar10 == '\v')) {
    lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,0x80,0);
    if (lVar7 == 0) {
      this = (RefCountImpl *)0x0;
      lVar9 = local_48;
      lVar12 = lStack_40;
      bVar15 = local_38;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x30);
      pcVar10 = (char *)0x0;
      uVar13 = *(uint *)(param_1 + 0x3c);
      if (uVar13 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        pcVar10 = (char *)((ulonglong)(uVar13 & 0x1f) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar13 >> 5) * 8))
        ;
      }
      if (*pcVar10 == '\b') {
        local_48 = *(longlong *)(pcVar10 + 8);
        local_38 = 0;
        if (local_48 != 0) {
          *(uint *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1U & 0x8fffffff;
        }
        lVar9 = *(longlong *)(pcVar10 + 0x10);
        lStack_40 = 0;
        if ((lVar9 != 0) &&
           (local_38 = (pcVar10[0x18] & 1U) != 0, lStack_40 = lVar9, !(bool)local_38)) {
          *(uint *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1U & 0x8fffffff;
        }
      }
      else if (*pcVar10 == '\v') {
        FUN_143413f20(pcVar10,&local_48);
      }
      else {
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
      }
      bVar15 = local_38;
      lVar12 = lStack_40;
      lVar9 = local_48;
      this = (RefCountImpl *)FUN_143463530(lVar7,&local_48,lVar4 + 0xe8);
      iVar6 = 1;
    }
    iVar11 = 1;
    if (iVar6 != 0) {
      if ((((bVar15 & 2) == 0) && (lVar9 != 0)) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
        FUN_1434a2b80(lVar9);
      }
      iVar11 = iVar14;
      if ((((bVar15 & 1) == 0) && (lVar12 != 0)) && ((*(uint *)(lVar12 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) - 1;
        FUN_1434a2b80(lVar12);
      }
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (uVar13 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
      pcVar10 = (char *)((ulonglong)(uVar13 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar13 >> 5) * 8));
    }
    if (*pcVar10 == '\x06') {
      lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,0x80,0);
      if (lVar7 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        uVar8 = FUN_1434141c0(param_1,1);
        FUN_143411540(uVar8,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
        uVar8 = FUN_1434141c0(param_1,0);
        uVar8 = FUN_143412120(uVar8,*(undefined8 *)(param_1 + 0x30));
        this = (RefCountImpl *)FUN_143463610(lVar7,uVar8,&local_res8);
        piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
    }
    else {
      pcVar10 = (char *)0x0;
      if (uVar13 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        pcVar10 = (char *)((ulonglong)(uVar13 & 0x1f) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar13 >> 5) * 8))
        ;
      }
      if (*pcVar10 != '\a') {
        return;
      }
      lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,0x80,0);
      if (lVar7 == 0) {
        this = (RefCountImpl *)0x0;
      }
      else {
        uVar8 = FUN_1434141c0(param_1,1);
        FUN_143411540(uVar8,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
        uVar8 = FUN_1434141c0(param_1,0);
        uVar8 = Scaleform::GFx::AS2::Value::ToCharacter(uVar8,*(undefined8 *)(param_1 + 0x30));
        this = (RefCountImpl *)FUN_143463690(lVar7,uVar8,&local_res8);
        piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
          iVar11 = 2;
          goto LAB_143464296;
        }
      }
    }
    iVar11 = 2;
  }
LAB_143464296:
  if (iVar11 < *(int *)(param_1 + 0x38)) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
    if (plVar3 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar3 + 0x228))(plVar3,0);
      lVar7 = *(longlong *)(lVar9 + 0x70);
      if (lVar7 == 0) {
        lVar7 = FUN_14336c170(lVar9);
      }
      FUN_1432efba0(this + 0x70,lVar7);
    }
    dVar16 = (double)FUN_143411a90();
    if (9.223372036854776e+18 <= dVar16) {
      dVar16 = dVar16 - 9.223372036854776e+18;
    }
    iVar11 = iVar11 + 1;
    this[0x79] = param_2;
    *(longlong *)(this + 0x58) = (longlong)dVar16 * 1000;
    if (iVar11 < *(int *)(param_1 + 0x38)) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x30);
        lVar9 = 0;
        uVar13 = *(int *)(param_1 + 0x3c) - iVar11;
        if (uVar13 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
        }
        FUN_1434a3be0(this + 0x40,this + 0x40,*(longlong *)(this + 0x48) + 1);
        lVar7 = *(longlong *)(this + 0x48) * 0x20 + -0x20 + *(longlong *)(this + 0x40);
        if (lVar7 != 0) {
          FUN_143410ec0(lVar7,lVar9);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x38));
    }
    uVar8 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
    iVar6 = FUN_1432e6fd0(uVar8,this);
    pbVar5 = *(byte **)(param_1 + 8);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 3;
    *(double *)(pbVar5 + 8) = (double)iVar6;
    (**(code **)(*(longlong *)this + 8))(this,uVar8);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143464480 FUN_143464480 body=61 status=ok
// SIG undefined FUN_143464480(void)

void FUN_143464480(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x13);
                    /* WARNING: Could not recover jumptable at 0x0001434644b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 1434644d0 FUN_1434644d0 body=105 status=ok
// SIG undefined FUN_1434644d0(void)

undefined8 * FUN_1434644d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0f0d8;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x13);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143464540 FUN_143464540 body=63 status=ok
// SIG undefined FUN_143464540(void)

void FUN_143464540(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14340b610(param_2,param_1,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_1,param_2);
  return;
}



// FUNCTION 143464590 FUN_143464590 body=45 status=ok
// SIG undefined FUN_143464590(void)

undefined8 FUN_143464590(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  FUN_14340b610(param_2,param_1,&PTR_s_addListener_145b07c80,1);
  return 1;
}



// FUNCTION 1434645d0 FUN_1434645d0 body=227 status=ok
// SIG undefined FUN_1434645d0(void)

undefined8 FUN_1434645d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  byte local_38 [32];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(**(longlong **)(*param_1 + 0x30) + 0x50))
                    (*(longlong **)(*param_1 + 0x30),0x98,0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14345d990(lVar3,param_1);
  }
  lVar1 = *param_2;
  local_res10[0] = 1;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18);
  uVar4 = FUN_143410c00(local_38,lVar3);
  (**(code **)(lVar1 + 0x50))(param_2,param_1,lVar2 + 0x3c0,uVar4,local_res10);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (lVar3 != 0) {
    if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  return 1;
}



// FUNCTION 1434646c0 FUN_1434646c0 body=385 status=ok
// SIG undefined FUN_1434646c0(void)

undefined1 * FUN_1434646c0(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte local_48 [32];
  byte local_28 [32];
  
  if ((param_2 == (longlong *)0x0) || (param_3 == 0)) {
    return &stack0x00000000;
  }
  local_28[0] = 0;
  cVar2 = (**(code **)(*param_2 + 0x58))
                    (param_2,(longlong *)(param_1 + 0xe8),
                     *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                     0x3c0,local_28);
  if (((cVar2 != '\0') && (lVar4 = FUN_143412120(local_28,param_1), lVar4 != 0)) &&
     (iVar3 = (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x10))(lVar4 + 0x20), iVar3 == 7)) {
    uVar7 = 0;
    *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    uVar1 = *(uint *)(lVar4 + 0x78);
    if (uVar1 != 0) {
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)(int)uVar7 * 8);
        if ((lVar5 != 0) && (lVar5 = FUN_1434123a0(lVar5,param_1), lVar5 == param_3)) {
          if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
            FUN_1434a2b80(lVar4);
          }
          puVar6 = (undefined1 *)0x0;
          goto LAB_1434647e0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    local_48[0] = 0;
    FUN_143412c40(local_48,param_3);
    FUN_14345e390(lVar4,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
  }
  puVar6 = (undefined1 *)0x1;
LAB_1434647e0:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return puVar6;
}



// FUNCTION 143464850 FUN_143464850 body=326 status=ok
// SIG undefined FUN_143464850(void)

ulonglong FUN_143464850(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte local_28 [32];
  
  if ((param_2 == (longlong *)0x0) || (param_3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_28[0] = 0;
  cVar1 = (**(code **)(*param_2 + 0x58))
                    (param_2,(longlong *)(param_1 + 0xe8),
                     *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                     0x3c0,local_28);
  if (cVar1 != '\0') {
    lVar3 = FUN_143412120(local_28,param_1);
    if (lVar3 != 0) {
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))(lVar3 + 0x20);
      if (iVar2 == 7) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
        iVar2 = *(int *)(lVar3 + 0x78) + -1;
        lVar6 = (longlong)iVar2;
        if (-1 < iVar2) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar6 * 8);
            if (lVar4 != 0) {
              lVar4 = FUN_1434123a0(lVar4,param_1);
              if (lVar4 == param_3) {
                FUN_14345e5d0(lVar3,iVar2,1);
                if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
                  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
                  FUN_1434a2b80(lVar3);
                }
                uVar5 = 1;
                goto LAB_14346492e;
              }
            }
            iVar2 = iVar2 + -1;
            lVar6 = lVar6 + -1;
          } while (-1 < lVar6);
        }
        if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80(lVar3);
        }
      }
    }
  }
  uVar5 = 0;
LAB_14346492e:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return uVar5;
}



// FUNCTION 1434649a0 FUN_1434649a0 body=58 status=ok
// SIG undefined FUN_1434649a0(void)

undefined8 FUN_1434649a0(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  FUN_1434649e0();
  return 1;
}



// FUNCTION 1434649e0 FUN_1434649e0 body=911 status=ok
// SIG undefined FUN_1434649e0(void)

undefined8 FUN_1434649e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  RefCountNTSImpl *this;
  longlong lVar8;
  uint uVar9;
  longlong local_98;
  longlong lStack_90;
  byte local_88;
  byte local_80 [8];
  longlong local_78;
  longlong local_70;
  byte local_68;
  byte local_60 [40];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  local_60[0] = 0;
  cVar3 = (**(code **)(*param_2 + 0x58))
                    (param_2,param_1 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                     0x3c0,local_60);
  if (((cVar3 != '\0') && (lVar5 = FUN_143412120(local_60,param_1), lVar5 != 0)) &&
     (iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar4 == 7)) {
    *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    if (0 < *(int *)(lVar5 + 0x78)) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
      lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,0x98,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_14345d8d0(lVar6,param_1);
      }
      Scaleform::GFx::AS2::ArrayObject::MakeDeepCopyFrom
                (lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x30),lVar5);
      uVar1 = *(uint *)(lVar6 + 0x78);
      uVar9 = 0;
      if (uVar1 != 0) {
        do {
          pcVar2 = *(char **)(*(longlong *)(lVar6 + 0x70) + (longlong)(int)uVar9 * 8);
          if ((pcVar2 != (char *)0x0) &&
             (plVar7 = (longlong *)FUN_1434123a0(pcVar2,param_1), plVar7 != (longlong *)0x0)) {
            lVar8 = 0;
            if (*pcVar2 == '\a') {
              this = (RefCountNTSImpl *)Scaleform::GFx::AS2::Value::ToCharacter();
              if (this != (RefCountNTSImpl *)0x0) {
                *(int *)(this + 8) = *(int *)(this + 8) + 1;
              }
            }
            else {
              lVar8 = FUN_143412120(pcVar2,param_1);
              this = (RefCountNTSImpl *)0x0;
              if (lVar8 != 0) {
                *(uint *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1U & 0x8fffffff;
                this = (RefCountNTSImpl *)0x0;
              }
            }
            local_80[0] = 0;
            cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,param_1 + 0xe8,param_3,local_80);
            if (cVar3 != '\0') {
              if (local_80[0] == 8) {
                local_88 = 0;
                local_98 = local_78;
                if (local_78 != 0) {
                  *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
                  *(uint *)(local_78 + 0x18) = *(uint *)(local_78 + 0x18) & 0x8fffffff;
                }
                lStack_90 = 0;
                if (local_70 != 0) {
                  lStack_90 = local_70;
                  local_88 = (local_68 & 1) != 0;
                  if (!(bool)local_88) {
                    *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
                    *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
                  }
                }
LAB_143464c35:
                if (local_98 != 0) {
                  (**(code **)(*param_4 + 8))(param_4,param_1,plVar7,&local_98);
                }
              }
              else {
                if (local_80[0] == 0xb) {
                  FUN_143413f20(local_80,&local_98,param_1);
                  goto LAB_143464c35;
                }
                local_88 = 0;
                local_98 = 0;
                lStack_90 = 0;
              }
              if ((((local_88 & 2) == 0) && (local_98 != 0)) &&
                 ((*(uint *)(local_98 + 0x18) & 0x3ffffff) != 0)) {
                *(uint *)(local_98 + 0x18) = *(uint *)(local_98 + 0x18) - 1;
                FUN_1434a2b80(local_98);
              }
              local_98 = 0;
              if ((((local_88 & 1) == 0) && (lStack_90 != 0)) &&
                 ((*(uint *)(lStack_90 + 0x18) & 0x3ffffff) != 0)) {
                *(uint *)(lStack_90 + 0x18) = *(uint *)(lStack_90 + 0x18) - 1;
                FUN_1434a2b80();
              }
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if (this != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release(this);
            }
            if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
              *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
              FUN_1434a2b80(lVar8);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
      }
    }
    if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
  }
  if (4 < local_60[0]) {
    FUN_143411150(local_60);
  }
  return 1;
}



// FUNCTION 143464d80 FUN_143464d80 body=103 status=ok
// SIG undefined FUN_143464d80(void)

undefined8 * FUN_143464d80(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494920();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0f180;
  param_1[4] = &PTR_LAB_145b0f1c8;
  param_1[0xd] = &PTR_LAB_145b0f270;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addListener_145b07c80,local_res8);
  return param_1;
}



// FUNCTION 143464df0 FUN_143464df0 body=125 status=ok
// SIG undefined FUN_143464df0(void)

void FUN_143464df0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    uVar4 = FUN_1434123a0(lVar5,lVar2);
    FUN_1434646c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10),uVar4);
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 2;
    puVar3[8] = 1;
  }
  return;
}



// FUNCTION 143464e80 FUN_143464e80 body=216 status=ok
// SIG undefined FUN_143464e80(void)

void FUN_143464e80(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8 [4];
  undefined **local_18;
  int local_10;
  int local_c;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar5,local_res8,lVar3,0xffffffff,0);
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      local_18 = &PTR_FUN_145b11e98;
      local_10 = *(int *)(param_1 + 0x38) + -1;
      local_c = *(int *)(lVar3 + 0x30) * 0x20 + -0x24 +
                (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5);
      FUN_1434649e0(lVar3,*(longlong *)(param_1 + 0x10),local_res8,&local_18);
    }
    puVar4 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar4);
    *puVar4 = 0;
    piVar1 = (int *)(local_res8[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 143464f60 FUN_143464f60 body=138 status=ok
// SIG undefined FUN_143464f60(void)

void FUN_143464f60(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar6 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    uVar5 = FUN_1434123a0(lVar6,lVar2);
    uVar4 = FUN_143464850(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10),uVar5);
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    puVar3[8] = uVar4;
    *puVar3 = 2;
  }
  return;
}



// FUNCTION 143464ff0 FUN_143464ff0 body=181 status=ok
// SIG undefined FUN_143464ff0(void)

void FUN_143464ff0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar4 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_1434123a0(lVar4,lVar2);
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (lVar4 != 0) {
      FUN_14340b610(lVar4,lVar2 + 0xe8,&PTR_s_addListener_145b07c80,1);
    }
    FUN_1434645d0(lVar2 + 0xe8,lVar4);
  }
  return;
}



// FUNCTION 1434650b0 FUN_1434650b0 body=157 status=ok
// SIG undefined FUN_1434650b0(void)

undefined8 * FUN_1434650b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143465160;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0f278;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_initialize_145b07410,7);
  return param_1;
}



// FUNCTION 143465160 FUN_143465160 body=161 status=ok
// SIG undefined FUN_143465160(void)

void FUN_143465160(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x24)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar2 != '\0')) {
    puVar1 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar1);
    *puVar1 = 1;
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
  if (lVar4 == 0) {
    return;
  }
  if ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) == 0) {
    return;
  }
  *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
  FUN_1434a2b80(lVar4);
  return;
}



// FUNCTION 143465210 FUN_143465210 body=60 status=ok
// SIG undefined FUN_143465210(void)

void FUN_143465210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_1434644d0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143465260 FUN_143465260 body=809 status=ok
// SIG undefined FUN_143465260(void)

longlong * FUN_143465260(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  local_50 = 8;
  local_58 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar3 = puVar2[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar2[0xd] = FUN_143465160;
    lVar3 = FUN_14341b750(local_58,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_48[0] = 10;
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_58,*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x3a8,
                 local_48,&local_res8);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = puVar2[6];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar3;
    *puVar2 = &PTR_LAB_145b0f278;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_58,&PTR_s_initialize_145b07410,7);
    puVar4 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xa8,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = FUN_14341b750(param_2,1);
    FUN_143494920(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0f180;
    puVar4[4] = &PTR_LAB_145b0f1c8;
    puVar4[0xd] = &PTR_LAB_145b0f270;
    FUN_143422ee0(puVar4 + 0xd,puVar4,&local_58,&PTR_s_addListener_145b07c80,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,0x13,&local_res8);
  local_40[0] = *param_1;
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48[0] = 8;
  local_30 = 0;
  if (local_40[0] != 0) {
    *(int *)(local_40[0] + 0x18) = *(int *)(local_40[0] + 0x18) + 1;
    *(uint *)(local_40[0] + 0x18) = *(uint *)(local_40[0] + 0x18) & 0x8fffffff;
  }
  local_40[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_40,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1d0,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
    FUN_1434a2b80(puVar6);
  }
  return param_1;
}



// FUNCTION 143465590 FUN_143465590 body=93 status=ok
// SIG undefined FUN_143465590(void)

void FUN_143465590(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x14);
                    /* WARNING: Could not recover jumptable at 0x0001434655e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))
            (param_1 + 0x20,(undefined8 *)(param_2 + 0xe8),uVar1);
  return;
}



// FUNCTION 143465600 FUN_143465600 body=420 status=ok
// SIG undefined FUN_143465600(void)

void FUN_143465600(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar7 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x94);
  uVar1 = *(uint *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x88) = uVar7;
  *(longlong *)(param_1 + 0x80) = (longlong)*(int *)(param_1 + 0x94) + *(longlong *)(param_1 + 0x68)
  ;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x8c) = uVar1;
  if (86399999 < uVar7) {
    iVar6 = (int)(uVar7 + 864000000) / 86400000 + -10;
    iVar9 = *(int *)(param_1 + 0x78) + iVar6;
    *(int *)(param_1 + 0x90) = iVar9;
    *(uint *)(param_1 + 0x88) = uVar7 + iVar6 * -86400000;
    uVar7 = uVar1 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    bVar3 = 0;
    uVar8 = 0;
    bVar4 = 1;
    bVar2 = bVar3;
    if ((uVar7 == 0) && ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))
       ) {
      bVar2 = bVar4;
    }
    if ((int)(bVar2 + 0x16d) <= iVar9) {
      uVar7 = uVar1 & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar7 != 0) ||
         ((uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400)))) {
        bVar4 = bVar3;
      }
      *(uint *)(param_1 + 0x8c) = uVar1 + 1;
      *(uint *)(param_1 + 0x90) = iVar9 - ((bVar4 != 0) + 0x16d);
      return;
    }
    if (iVar9 < 0) {
      *(uint *)(param_1 + 0x8c) = uVar1 - 1;
      cVar5 = FDateTime::IsLeapYear();
      *(int *)(param_1 + 0x90) =
           (int)CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar5 != '\0') + 0x16d + iVar9;
    }
  }
  return;
}



// FUNCTION 1434657b0 FUN_1434657b0 body=393 status=ok
// SIG undefined FUN_1434657b0(void)

void FUN_1434657b0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x94);
  uVar1 = *(uint *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x70) = uVar6;
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x80) - (longlong)*(int *)(param_1 + 0x94)
  ;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x74) = uVar1;
  if (86399999 < uVar6) {
    iVar5 = (int)(uVar6 + 864000000) / 86400000 + -10;
    iVar7 = *(int *)(param_1 + 0x90) + iVar5;
    *(int *)(param_1 + 0x78) = iVar7;
    *(uint *)(param_1 + 0x70) = uVar6 + iVar5 * -86400000;
    uVar6 = uVar1 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    bVar2 = 0;
    bVar3 = 1;
    bVar4 = bVar2;
    if ((uVar6 == 0) && ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))
       ) {
      bVar4 = bVar3;
    }
    if ((int)(bVar4 + 0x16d) <= iVar7) {
      uVar6 = uVar1 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar6 != 0) ||
         ((uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400)))) {
        bVar3 = bVar2;
      }
      *(uint *)(param_1 + 0x74) = uVar1 + 1;
      *(uint *)(param_1 + 0x78) = iVar7 - ((bVar3 != 0) + 0x16d);
      return;
    }
    if (iVar7 < 0) {
      *(uint *)(param_1 + 0x74) = uVar1 - 1;
      bVar4 = FDateTime::IsLeapYear();
      *(uint *)(param_1 + 0x78) = (uint)bVar4 + iVar7;
    }
  }
  return;
}



// FUNCTION 143465940 FUN_143465940 body=137 status=ok
// SIG undefined FUN_143465940(void)

undefined8 * FUN_143465940(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0f300;
  param_1[4] = &PTR_LAB_145b0f348;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x14);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434659d0 FUN_1434659d0 body=164 status=ok
// SIG undefined FUN_1434659d0(void)

undefined8 * FUN_1434659d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0f300;
  param_1[4] = &PTR_LAB_145b0f348;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x14);
  (**(code **)(param_1[4] + 0x68))(param_1 + 4,param_2 + 0xe8,uVar1);
  FUN_143465a90(param_1,param_3);
  return param_1;
}



// FUNCTION 143465a90 FUN_143465a90 body=591 status=ok
// SIG undefined FUN_143465a90(void)

void FUN_143465a90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = param_2 / 86400000;
  *(int *)(param_1 + 0x70) = (int)param_2 + (int)lVar1 * -86400000;
  uVar5 = lVar1 % 0x23ab1;
  *(int *)(param_1 + 0x74) = (int)(lVar1 / 0x23ab1) * 400 + 0x7b2;
  if (param_2 < 0) {
    while( true ) {
      uVar4 = *(uint *)(param_1 + 0x74);
      uVar3 = uVar4 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar3 == 0) &&
         ((uVar4 != ((int)uVar4 / 100) * 100 || (uVar4 == ((int)uVar4 / 400) * 400)))) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      if ((longlong)((uVar5 ^ (longlong)uVar5 >> 0x3f) - ((longlong)uVar5 >> 0x3f)) <
          (longlong)((ulonglong)bVar2 + 0x16d)) break;
      uVar4 = uVar4 - 1;
      *(uint *)(param_1 + 0x74) = uVar4;
      uVar3 = uVar4 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar3 == 0) &&
         ((uVar4 != ((int)uVar4 / 100) * 100 || (uVar4 == ((int)uVar4 / 400) * 400)))) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      uVar5 = uVar5 + (ulonglong)bVar2 + 0x16d;
    }
  }
  else {
    while( true ) {
      uVar4 = *(uint *)(param_1 + 0x74);
      uVar3 = uVar4 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar3 == 0) &&
         ((uVar4 != ((int)uVar4 / 100) * 100 || (uVar4 == ((int)uVar4 / 400) * 400)))) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      if ((longlong)uVar5 < (longlong)((ulonglong)bVar2 + 0x16d)) break;
      uVar3 = uVar4 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar3 == 0) &&
         ((uVar4 != ((int)uVar4 / 100) * 100 || (uVar4 == ((int)uVar4 / 400) * 400)))) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      uVar5 = uVar5 - ((ulonglong)bVar2 + 0x16d);
      *(uint *)(param_1 + 0x74) = uVar4 + 1;
    }
  }
  *(int *)(param_1 + 0x78) = (int)uVar5;
  *(longlong *)(param_1 + 0x68) = param_2;
  FUN_143465600(param_1);
  return;
}



// FUNCTION 143465d00 FUN_143465d00 body=106 status=ok
// SIG undefined FUN_143465d00(void)

undefined8 * FUN_143465d00(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495000();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0f3f0;
  param_1[4] = &PTR_LAB_145b0f438;
  param_1[0x13] = &PTR_LAB_145b0f4e0;
  FUN_143422ee0(param_1 + 0x13,param_1,param_2,&PTR_s_getDate_145b07a00,local_res8);
  return param_1;
}



// FUNCTION 143465d70 FUN_143465d70 body=578 status=ok
// SIG undefined FUN_143465d70(void)

void FUN_143465d70(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = 0;
  }
  uVar1 = *(uint *)(lVar8 + 0x8c);
  uVar6 = uVar1 & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  bVar3 = 0;
  bVar4 = bVar3;
  if ((uVar6 == 0) && ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400))))
  {
    bVar4 = 1;
  }
  iVar5 = *(int *)(lVar8 + 0x90);
  if (iVar5 < *(int *)(&DAT_145b08a40 + (ulonglong)bVar4 * 0x30)) {
LAB_143465e44:
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    *(double *)(pbVar2 + 8) = (double)(iVar5 + 1);
  }
  else {
    lVar8 = 1;
    uVar6 = uVar1 & 0x80000003;
    iVar7 = 1;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      iVar7 = 1;
    }
    do {
      bVar4 = bVar3;
      if ((uVar6 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar4 = 1;
      }
      if (iVar5 < *(int *)(&DAT_145b08a40 + (lVar8 + (ulonglong)bVar4 * 0xc) * 4)) {
        uVar6 = uVar1 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar6 != 0) ||
           ((lVar8 = 1, uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400))))
        {
          lVar8 = 0;
        }
        iVar5 = iVar5 - *(int *)(&DAT_145b08a40 + ((longlong)(iVar7 + -1) + lVar8 * 0xc) * 4);
        goto LAB_143465e44;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0xc);
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0xf0;
    pbVar2[0xf] = 0xbf;
  }
  return;
}



// FUNCTION 143465fc0 FUN_143465fc0 body=187 status=ok
// SIG undefined FUN_143465fc0(void)

void FUN_143465fc0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)&DAT_00000080;
      }
      lVar2 = *plVar4;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(((int)(lVar2 / 86400000) + 4) % 7);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466090 FUN_143466090 body=126 status=ok
// SIG undefined FUN_143466090(void)

void FUN_143466090(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x6c);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_0000008c;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)iVar2;
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466120 FUN_143466120 body=143 status=ok
// SIG undefined FUN_143466120(void)

void FUN_143466120(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x68);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000088;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 / 3600000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434661c0 FUN_1434661c0 body=157 status=ok
// SIG undefined FUN_1434661c0(void)

void FUN_1434661c0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x68);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000088;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 % 1000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466270 FUN_143466270 body=178 status=ok
// SIG undefined FUN_143466270(void)

void FUN_143466270(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x68);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000088;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)((iVar2 % 3600000) / 60000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466330 FUN_143466330 body=333 status=ok
// SIG undefined FUN_143466330(void)

void FUN_143466330(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0x23)) {
    uVar6 = 0;
    uVar5 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar5 = uVar6;
    }
    uVar1 = *(uint *)(uVar5 + 0x8c);
    uVar8 = uVar1 & 0x80000003;
    uVar7 = uVar6;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    while( true ) {
      if ((uVar8 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (*(int *)(uVar5 + 0x90) < *(int *)(&DAT_145b08a40 + (uVar7 + (ulonglong)bVar3 * 0xc) * 4))
      break;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar7 = uVar7 + 1;
      if (0xb < (longlong)uVar7) {
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 3;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0xf0;
        pbVar2[0xf] = 0xbf;
        return;
      }
    }
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    *(double *)(pbVar2 + 8) = (double)(int)uVar6;
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466490 FUN_143466490 body=178 status=ok
// SIG undefined FUN_143466490(void)

void FUN_143466490(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x68);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000088;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)((iVar2 % 60000) / 1000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466550 FUN_143466550 body=126 status=ok
// SIG undefined FUN_143466550(void)

void FUN_143466550(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)&DAT_00000068;
      }
      lVar2 = *plVar4;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)lVar2;
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434665e0 FUN_1434665e0 body=143 status=ok
// SIG undefined FUN_1434665e0(void)

void FUN_1434665e0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x74);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000094;
      }
      iVar2 = (int)((ulonglong)((longlong)*piVar3 * -0x45e7b273) >> 0x20);
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)((iVar2 >> 0xe) - (iVar2 >> 0x1f));
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466680 FUN_143466680 body=133 status=ok
// SIG undefined FUN_143466680(void)

void FUN_143466680(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x6c);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_0000008c;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 + -0x76c);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466710 FUN_143466710 body=439 status=ok
// SIG undefined FUN_143466710(void)

void FUN_143466710(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
    return;
  }
  uVar7 = 0;
  iVar5 = 0;
  uVar6 = *(longlong *)(param_1 + 0x10) - 0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar6 = uVar7;
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar9 = uVar7;
    if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      uVar9 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    dVar11 = (double)FUN_143411a90(uVar9);
    uVar1 = *(uint *)(uVar6 + 0x8c);
    iVar2 = *(int *)(uVar6 + 0x90);
    uVar8 = uVar1 & 0x80000003;
    uVar9 = uVar7;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    do {
      iVar10 = (int)uVar9;
      if ((uVar8 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      if (iVar2 < *(int *)(&DAT_145b08a40 + (uVar7 + (ulonglong)bVar4 * 0xc) * 4)) {
        if (iVar10 != 0) {
          bVar4 = FDateTime::IsLeapYear(uVar1);
          iVar5 = *(int *)(&DAT_145b08a40 + ((longlong)(iVar10 + -1) + (ulonglong)bVar4 * 0xc) * 4);
        }
        iVar5 = (int)dVar11 + -1 + (iVar5 - iVar2);
        *(int *)(uVar6 + 0x90) = iVar2 + iVar5;
        *(longlong *)(uVar6 + 0x80) = *(longlong *)(uVar6 + 0x80) + (longlong)iVar5 * 86400000;
        FUN_1434657b0(uVar6);
        return;
      }
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)(iVar10 + 1);
    } while ((longlong)uVar7 < 0xc);
  }
  return;
}



// FUNCTION 1434668d0 FUN_1434668d0 body=368 status=ok
// SIG undefined FUN_1434668d0(void)

void FUN_1434668d0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  double dVar8;
  ulonglong uVar7;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar5);
        iVar3 = *(int *)(lVar4 + 0x90);
        uVar6 = (uint)dVar8;
        uVar7 = (ulonglong)uVar6;
        if (0x3b < iVar3) {
          bVar2 = FDateTime::IsLeapYear(*(undefined4 *)(lVar4 + 0x8c));
          uVar6 = (uint)uVar7;
          iVar3 = iVar3 - (uint)bVar2;
          bVar2 = FDateTime::IsLeapYear(uVar7 & 0xffffffff);
          *(uint *)(lVar4 + 0x90) = iVar3 + (uint)bVar2;
        }
        *(uint *)(lVar4 + 0x8c) = uVar6;
        *(longlong *)(lVar4 + 0x80) =
             (longlong)
             (int)((uVar6 - 0x7b2) * 0x16d +
                   ((int)(uVar6 - 0x641) / 400 - (int)(uVar6 - 0x76d) / 100) +
                   ((int)((uVar6 - 0x7b1) + ((int)(uVar6 - 0x7b1) >> 0x1f & 3U)) >> 2) +
                  *(int *)(lVar4 + 0x90)) * 86400000 + (longlong)*(int *)(lVar4 + 0x88);
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466a50 FUN_143466a50 body=244 status=ok
// SIG undefined FUN_143466a50(void)

void FUN_143466a50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - *(int *)(lVar4 + 0x88) / 3600000) * 3600000;
        *(longlong *)(lVar4 + 0x80) = *(longlong *)(lVar4 + 0x80) + (longlong)iVar3;
        *(int *)(lVar4 + 0x88) = *(int *)(lVar4 + 0x88) + iVar3;
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466b50 FUN_143466b50 body=248 status=ok
// SIG undefined FUN_143466b50(void)

void FUN_143466b50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = (int)dVar6 - *(int *)(lVar4 + 0x88) % 1000;
        *(longlong *)(lVar4 + 0x80) = *(longlong *)(lVar4 + 0x80) + (longlong)iVar3;
        *(int *)(lVar4 + 0x88) = *(int *)(lVar4 + 0x88) + iVar3;
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466c50 FUN_143466c50 body=272 status=ok
// SIG undefined FUN_143466c50(void)

void FUN_143466c50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - (*(int *)(lVar4 + 0x88) % 3600000) / 60000) * 60000;
        *(longlong *)(lVar4 + 0x80) = *(longlong *)(lVar4 + 0x80) + (longlong)iVar3;
        *(int *)(lVar4 + 0x88) = *(int *)(lVar4 + 0x88) + iVar3;
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466d70 FUN_143466d70 body=372 status=ok
// SIG undefined FUN_143466d70(void)

void FUN_143466d70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 0x23) {
      lVar9 = 0;
      iVar5 = 0;
      lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = lVar9;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar12 = (double)FUN_143411a90(lVar9);
        iVar7 = (int)dVar12;
        FUN_143465d70(param_1);
        dVar12 = (double)FUN_143411a90(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x30))
        ;
        iVar11 = *(int *)(lVar8 + 0x90);
        iVar10 = (int)dVar12;
        if (0 < iVar7) {
          bVar4 = FDateTime::IsLeapYear(*(undefined4 *)(lVar8 + 0x8c));
          iVar5 = *(int *)(&DAT_145b08a40 + ((longlong)(iVar7 + -1) + (ulonglong)bVar4 * 0xc) * 4);
        }
        bVar4 = FDateTime::IsLeapYear(*(undefined4 *)(lVar8 + 0x8c));
        iVar6 = *(int *)(&DAT_145b08a40 + ((longlong)iVar7 + (ulonglong)bVar4 * 0xc) * 4) - iVar5;
        if (iVar10 <= *(int *)(&DAT_145b08a40 + ((longlong)iVar7 + (ulonglong)bVar4 * 0xc) * 4) -
                      iVar5) {
          iVar6 = iVar10;
        }
        iVar5 = iVar6 + -1 + iVar5;
        *(int *)(lVar8 + 0x90) = iVar5;
        *(longlong *)(lVar8 + 0x80) =
             *(longlong *)(lVar8 + 0x80) + (longlong)(iVar5 - iVar11) * 86400000;
        puVar3 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar3);
        *puVar3 = 0;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143466ef0 FUN_143466ef0 body=272 status=ok
// SIG undefined FUN_143466ef0(void)

void FUN_143466ef0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        iVar3 = ((int)dVar6 - (*(int *)(lVar4 + 0x88) % 60000) / 1000) * 1000;
        *(longlong *)(lVar4 + 0x80) = *(longlong *)(lVar4 + 0x80) + (longlong)iVar3;
        *(int *)(lVar4 + 0x88) = *(int *)(lVar4 + 0x88) + iVar3;
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467010 FUN_143467010 body=181 status=ok
// SIG undefined FUN_143467010(void)

void FUN_143467010(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar6 = (double)FUN_143411a90(lVar5);
        FUN_143465a90(lVar4,(longlong)dVar6);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434670d0 FUN_1434670d0 body=381 status=ok
// SIG undefined FUN_1434670d0(void)

void FUN_1434670d0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  double dVar8;
  ulonglong uVar7;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar8 = (double)FUN_143411a90(lVar5);
        uVar6 = (uint)dVar8;
        if (uVar6 < 100) {
          uVar6 = uVar6 + 0x76c;
        }
        uVar7 = (ulonglong)uVar6;
        iVar3 = *(int *)(lVar4 + 0x90);
        if (0x3b < iVar3) {
          bVar2 = FDateTime::IsLeapYear(*(undefined4 *)(lVar4 + 0x8c));
          uVar6 = (uint)uVar7;
          iVar3 = iVar3 - (uint)bVar2;
          bVar2 = FDateTime::IsLeapYear(uVar7 & 0xffffffff);
          *(uint *)(lVar4 + 0x90) = iVar3 + (uint)bVar2;
        }
        *(uint *)(lVar4 + 0x8c) = uVar6;
        *(longlong *)(lVar4 + 0x80) =
             (longlong)
             (int)((uVar6 - 0x7b2) * 0x16d +
                   ((int)(uVar6 - 0x641) / 400 - (int)(uVar6 - 0x76d) / 100) +
                   ((int)((uVar6 - 0x7b1) + ((int)(uVar6 - 0x7b1) >> 0x1f & 3U)) >> 2) +
                  *(int *)(lVar4 + 0x90)) * 86400000 + (longlong)*(int *)(lVar4 + 0x88);
        FUN_1434657b0(lVar4);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467260 FUN_143467260 body=568 status=ok
// SIG undefined FUN_143467260(void)

void FUN_143467260(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x23)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                  &DAT_145b09d8c);
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = 0;
  }
  uVar1 = *(uint *)(lVar8 + 0x74);
  uVar6 = uVar1 & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  bVar3 = 0;
  bVar4 = bVar3;
  if ((uVar6 == 0) && ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400))))
  {
    bVar4 = 1;
  }
  iVar5 = *(int *)(lVar8 + 0x78);
  if (iVar5 < *(int *)(&DAT_145b08a40 + (ulonglong)bVar4 * 0x30)) {
LAB_14346732e:
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    *(double *)(pbVar2 + 8) = (double)(iVar5 + 1);
  }
  else {
    lVar8 = 1;
    uVar6 = uVar1 & 0x80000003;
    iVar7 = 1;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      iVar7 = 1;
    }
    do {
      bVar4 = bVar3;
      if ((uVar6 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar4 = 1;
      }
      if (iVar5 < *(int *)(&DAT_145b08a40 + (lVar8 + (ulonglong)bVar4 * 0xc) * 4)) {
        uVar6 = uVar1 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar6 != 0) ||
           ((lVar8 = 1, uVar1 == ((int)uVar1 / 100) * 100 && (uVar1 != ((int)uVar1 / 400) * 400))))
        {
          lVar8 = 0;
        }
        iVar5 = iVar5 - *(int *)(&DAT_145b08a40 + ((longlong)(iVar7 + -1) + lVar8 * 0xc) * 4);
        goto LAB_14346732e;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0xc);
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0xf0;
    pbVar2[0xf] = 0xbf;
  }
  return;
}



// FUNCTION 1434674a0 FUN_1434674a0 body=187 status=ok
// SIG undefined FUN_1434674a0(void)

void FUN_1434674a0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)&DAT_00000068;
      }
      lVar2 = *plVar4;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(((int)(lVar2 / 86400000) + 4) % 7);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467570 FUN_143467570 body=126 status=ok
// SIG undefined FUN_143467570(void)

void FUN_143467570(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x54);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000074;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)iVar2;
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467600 FUN_143467600 body=143 status=ok
// SIG undefined FUN_143467600(void)

void FUN_143467600(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000070;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 / 3600000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 1434676a0 FUN_1434676a0 body=157 status=ok
// SIG undefined FUN_1434676a0(void)

void FUN_1434676a0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000070;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)(iVar2 % 1000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467750 FUN_143467750 body=178 status=ok
// SIG undefined FUN_143467750(void)

void FUN_143467750(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000070;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)((iVar2 % 3600000) / 60000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467810 FUN_143467810 body=328 status=ok
// SIG undefined FUN_143467810(void)

void FUN_143467810(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0x23)) {
    uVar6 = 0;
    uVar5 = *(longlong *)(param_1 + 0x10) - 0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar5 = uVar6;
    }
    uVar1 = *(uint *)(uVar5 + 0x74);
    uVar8 = uVar1 & 0x80000003;
    uVar7 = uVar6;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    while( true ) {
      if ((uVar8 == 0) &&
         ((uVar1 != ((int)uVar1 / 100) * 100 || (uVar1 == ((int)uVar1 / 400) * 400)))) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (*(int *)(uVar5 + 0x78) < *(int *)(&DAT_145b08a40 + (uVar7 + (ulonglong)bVar3 * 0xc) * 4))
      break;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar7 = uVar7 + 1;
      if (0xb < (longlong)uVar7) {
        pbVar2 = *(byte **)(param_1 + 8);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 3;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0xf0;
        pbVar2[0xf] = 0xbf;
        return;
      }
    }
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 3;
    *(double *)(pbVar2 + 8) = (double)(int)uVar6;
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}



// FUNCTION 143467960 FUN_143467960 body=178 status=ok
// SIG undefined FUN_143467960(void)

void FUN_143467960(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x23) {
      pbVar1 = *(byte **)(param_1 + 8);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        piVar3 = (int *)&DAT_00000070;
      }
      iVar2 = *piVar3;
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      *(double *)(pbVar1 + 8) = (double)((iVar2 % 60000) / 1000);
      *pbVar1 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",&DAT_145b09d8c
               );
  return;
}


