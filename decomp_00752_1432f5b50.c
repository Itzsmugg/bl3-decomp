// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432f5b50 FUN_1432f5b50 body=26 status=ok
// SIG undefined FUN_1432f5b50(void)

void FUN_1432f5b50(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001432f5b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x38) + 0x40))
            ((longlong *)**(undefined8 **)(param_1 + 0x38),param_1,0,param_2);
  return;
}



// FUNCTION 1432f5b70 GetUseStatus body=17 status=ok
// SIG undefined GetUseStatus(void)

void Scaleform::Render::MeshCacheItem::GetUseStatus(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432f5b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x38) + 0x38))
            ((longlong *)**(undefined8 **)(param_1 + 0x38),param_1);
  return;
}



// FUNCTION 1432f5b90 FUN_1432f5b90 body=416 status=ok
// SIG undefined FUN_1432f5b90(void)

undefined8 *
FUN_1432f5b90(undefined8 *param_1,int param_2,longlong *param_3,longlong *param_4,longlong param_5,
             undefined8 *param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  puVar4 = param_1 + 4;
  uVar8 = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145af97e0;
  *puVar4 = puVar4;
  param_1[5] = puVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = (int)param_4[3];
  param_1[10] = param_6;
  param_1[9] = 0;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar6 = param_4[1];
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_8;
  *(int *)(param_1 + 0xb) = (int)lVar6;
  lVar1 = *param_3;
  param_1[9] = (param_5 + 7U & 0xfffffffffffffff8) + (longlong)param_1;
  uVar5 = uVar8;
  if ((int)lVar6 != 0) {
    do {
      uVar7 = (int)uVar5 + 1;
      *(undefined8 *)(param_1[9] + uVar5 * 8) = *(undefined8 *)(param_4[2] * uVar5 + *param_4);
      uVar5 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0xb));
  }
  *puVar4 = puVar4;
  param_1[5] = puVar4;
  if (param_2 == 0) {
    uVar5 = uVar8;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar6 = *(longlong *)(uVar5 * param_4[2] + *param_4);
        uVar2 = *(ulonglong *)(lVar6 + 0x90);
        if (uVar2 < 3) {
          lVar6 = lVar6 + 0x98;
        }
        else {
          lVar6 = *(longlong *)(lVar6 + 0x98);
        }
        uVar3 = uVar8;
        if (uVar2 != 0) {
          do {
            if (*(undefined8 **)(lVar6 + uVar3 * 8) == param_1) goto LAB_1432f5cbc;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
        }
        puVar4 = (undefined8 *)FUN_1432f7e60();
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = param_1;
        }
LAB_1432f5cbc:
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0xb));
    }
    param_6 = param_1;
    FUN_1432f74b0(lVar1 + 0x98,lVar1 + 0x98,&param_6,*(undefined4 *)((longlong)param_1 + 0x34));
  }
  else {
    *(undefined8 **)(*(longlong *)param_1[9] + 0xa8) = param_1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = param_3[2];
  param_1[1] = param_3;
  *(undefined8 **)(param_3[2] + 8) = param_1;
  param_3[2] = (longlong)param_1;
  param_3[3] = param_3[3] + param_1[10];
  return param_1;
}



// FUNCTION 1432f5d40 FUN_1432f5d40 body=27 status=ok
// SIG undefined FUN_1432f5d40(void)

void FUN_1432f5d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af97e0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f5d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1432f5d70 FUN_1432f5d70 body=26 status=ok
// SIG undefined FUN_1432f5d70(void)

void FUN_1432f5d70(longlong *param_1,longlong param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001432f5d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))
            (param_1,(param_2 + 7U & 0xfffffffffffffff8) + (ulonglong)*(uint *)(param_3 + 8) * 8,0);
  return;
}



// FUNCTION 1432f5d90 FUN_1432f5d90 body=553 status=ok
// SIG undefined FUN_1432f5d90(void)

void FUN_1432f5d90(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *local_res8;
  
  lVar3 = param_1[7];
  uVar7 = 0;
  *(undefined8 *)(param_1[1] + 0x10) = param_1[2];
  *(undefined8 *)(param_1[2] + 8) = param_1[1];
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  plVar2 = (longlong *)(lVar3 + ((longlong)*(int *)(param_1 + 8) + 1) * 0x18);
  *plVar2 = *plVar2 - param_1[10];
  if (*(uint *)(param_1 + 6) < 2) {
    puVar1 = param_1 + 4;
    for (puVar4 = (undefined8 *)param_1[5]; puVar4 != puVar1; puVar4 = (undefined8 *)puVar4[1]) {
      puVar4[2] = 0;
    }
    *puVar1 = puVar1;
    param_1[5] = puVar1;
  }
  if (*(int *)(param_1 + 6) == 0) {
    local_res8 = param_1;
    FUN_1432f73c0(*(longlong *)param_1[7] + 0x98,&local_res8);
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar3 = uVar6 * 8;
        if ((*(longlong *)(lVar3 + param_1[9]) != param_2) &&
           (0 < *(int *)(*(longlong *)(lVar3 + param_1[9]) + 8))) {
          Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1[9] + lVar3));
          plVar2 = *(longlong **)(*(longlong *)(param_1[9] + lVar3) + 0x50);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb));
    }
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar3 = *(longlong *)(uVar6 * 8 + param_1[9]);
        if ((lVar3 != param_2) && (0 < *(int *)(lVar3 + 8))) {
          plVar2 = *(longlong **)(uVar6 * 8 + param_1[9]);
          (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb));
    }
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar3 = uVar7 * 8;
        if ((*(longlong *)(lVar3 + param_1[9]) != param_2) &&
           (0 < *(int *)(*(longlong *)(lVar3 + param_1[9]) + 8))) {
          plVar2 = *(longlong **)(*(longlong *)(param_1[9] + lVar3) + 0x50);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))();
          }
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1[9] + lVar3));
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb));
    }
  }
  else if (((*(int *)(param_1 + 6) == 1) && (*(longlong *)param_1[9] != param_2)) &&
          (0 < *(int *)(*(longlong *)param_1[9] + 8))) {
    (**(code **)(**(longlong **)param_1[9] + 0x18))(*(longlong **)param_1[9],param_1);
  }
  *(undefined4 *)(param_1 + 6) = 2;
  if (param_3 != '\0') {
    (**(code **)*param_1)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001432f5faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
    return;
  }
  return;
}



// FUNCTION 1432f5fc0 FUN_1432f5fc0 body=120 status=ok
// SIG undefined FUN_1432f5fc0(void)

undefined8
FUN_1432f5fc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_2;
  while( true ) {
    puVar1 = param_2 + -1;
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    if (puVar3 == puVar1) break;
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,puVar3,param_3,0);
    if (param_4 <= uVar2) {
      return 1;
    }
    puVar3 = (undefined8 *)*param_2;
  }
  return 0;
}



// FUNCTION 1432f6040 FUN_1432f6040 body=148 status=ok
// SIG undefined FUN_1432f6040(void)

undefined8
FUN_1432f6040(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_2;
  while( true ) {
    puVar1 = param_2 + -1;
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    if ((puVar3 == puVar1) || ((ulonglong)param_2[2] <= param_5)) break;
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,puVar3,param_3,0);
    if (param_4 <= uVar2) {
      return 1;
    }
    puVar3 = (undefined8 *)*param_2;
  }
  return 0;
}



// FUNCTION 1432f60e0 FUN_1432f60e0 body=209 status=ok
// SIG undefined FUN_1432f60e0(void)

ulonglong FUN_1432f60e0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[0x11];
  while( true ) {
    puVar3 = param_1 + 0xf;
    if (param_1 == (undefined8 *)0xffffffffffffff80) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar4 == puVar3) break;
    puVar3 = (undefined8 *)puVar4[2];
    if ((((param_3 != '\0') && (lVar1 = puVar4[3], lVar1 != 0)) && (*(char *)(lVar1 + 0x18) != '\0')
        ) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      cVar2 = FUN_1432c1c90(*(longlong *)(lVar1 + 0x10),0);
      if (((cVar2 != '\0') && (lVar1 = puVar4[3], lVar1 != 0)) &&
         ((*(char *)(lVar1 + 0x18) != '\0' && (*(longlong *)(lVar1 + 0x10) != 0)))) {
        FUN_1432c1cc0(*(longlong *)(lVar1 + 0x10),0);
      }
    }
    (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,puVar4,param_2,0);
    puVar4 = puVar3;
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 1432f61c0 FUN_1432f61c0 body=265 status=ok
// SIG undefined FUN_1432f61c0(void)

void FUN_1432f61c0(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)0x0;
  puVar3 = param_1 + 2;
  puVar6 = puVar4;
  do {
    if ((int)puVar6 != 5) {
      puVar7 = puVar3 + -2;
      if (puVar3 == (undefined8 *)&DAT_00000008) {
        puVar7 = puVar4;
      }
      while ((undefined8 *)*puVar3 != puVar7) {
        (**(code **)(*(longlong *)*param_1 + 0x40))();
      }
    }
    uVar5 = (int)puVar6 + 1;
    puVar6 = (undefined8 *)(ulonglong)uVar5;
    puVar3 = puVar3 + 3;
  } while (uVar5 < 6);
  while( true ) {
    puVar3 = param_1 + 0xf;
    if (param_1 == (undefined8 *)0xffffffffffffff80) {
      puVar3 = puVar4;
    }
    if ((undefined8 *)param_1[0x11] == puVar3) break;
    puVar3 = param_1 + 0xf;
    if (param_1 == (undefined8 *)0xffffffffffffff80) {
      puVar3 = puVar4;
    }
    while (puVar6 = (undefined8 *)param_1[0x11], puVar6 != puVar3) {
      lVar1 = puVar6[3];
      if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x18) != '\0')) && (*(longlong *)(lVar1 + 0x10) != 0)
          ) && (((cVar2 = FUN_1432c1c90(*(longlong *)(lVar1 + 0x10),0), cVar2 != '\0' &&
                 (lVar1 = puVar6[3], lVar1 != 0)) &&
                ((*(char *)(lVar1 + 0x18) != '\0' && (*(longlong *)(lVar1 + 0x10) != 0)))))) {
        FUN_1432c1cc0(*(longlong *)(lVar1 + 0x10),0);
      }
      (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,puVar6,0,0);
    }
  }
  return;
}



// FUNCTION 1432f62d0 FUN_1432f62d0 body=365 status=ok
// SIG undefined FUN_1432f62d0(void)

void FUN_1432f62d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar5 = 0;
  lVar2 = param_1 + 0x18;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = lVar5;
  }
  if (*(longlong *)(param_1 + 0x28) != lVar2) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar2 = param_1 + 0x18;
    while( true ) {
      lVar3 = lVar2;
      if (plVar1 == (longlong *)0x0) {
        lVar3 = lVar5;
      }
      if (lVar4 == lVar3) break;
      *(undefined4 *)(lVar4 + 0x40) = 3;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 != lVar2) {
      lVar3 = *plVar1;
      *plVar1 = lVar2;
      *(longlong *)(param_1 + 0x28) = lVar2;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x58);
      *(longlong *)(lVar4 + 8) = param_1 + 0x48;
      *(longlong *)(*(longlong *)(param_1 + 0x58) + 8) = lVar3;
      *(longlong *)(param_1 + 0x58) = lVar4;
    }
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x48;
  while( true ) {
    lVar3 = lVar2;
    if (plVar1 == (longlong *)0x0) {
      lVar3 = lVar5;
    }
    if (lVar4 == lVar3) break;
    *(undefined4 *)(lVar4 + 0x40) = 4;
    lVar4 = *(longlong *)(lVar4 + 0x10);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != lVar2) {
    lVar3 = *plVar1;
    *plVar1 = lVar2;
    *(longlong *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x70);
    *(longlong *)(lVar4 + 8) = param_1 + 0x60;
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 8) = lVar3;
    *(longlong *)(param_1 + 0x70) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + *(longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar4 = *(longlong *)(param_1 + 0x40);
  while( true ) {
    lVar3 = lVar2;
    if (plVar1 == (longlong *)0x0) {
      lVar3 = lVar5;
    }
    if (lVar4 == lVar3) break;
    *(undefined4 *)(lVar4 + 0x40) = 3;
    lVar4 = *(longlong *)(lVar4 + 0x10);
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 != lVar2) {
    lVar4 = *plVar1;
    *plVar1 = lVar2;
    *(longlong *)(param_1 + 0x40) = lVar2;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x58);
    *(longlong *)(lVar5 + 8) = param_1 + 0x48;
    *(longlong *)(*(longlong *)(param_1 + 0x58) + 8) = lVar4;
    *(longlong *)(param_1 + 0x58) = lVar5;
  }
  *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1432f6450 FUN_1432f6450 body=326 status=ok
// SIG undefined FUN_1432f6450(void)

ulonglong FUN_1432f6450(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((longlong *)param_1[3] < param_3) {
    return in_RAX & 0xffffffffffffff00;
  }
  while( true ) {
    plVar3 = param_1 + 3;
    if (param_1 + 4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if ((longlong *)param_1[5] == plVar3) {
      *param_2 = 0;
      goto LAB_1432f6576;
    }
    plVar3 = (longlong *)param_1[5];
    plVar1 = (longlong *)param_1[4];
    plVar4 = (longlong *)(plVar3[4] + plVar3[3]);
    plVar2 = (longlong *)plVar1[4];
    if (plVar2 < plVar4) {
      plVar3 = (longlong *)(param_1[1] - (longlong)plVar4);
      plVar5 = plVar2;
      if (param_3 <= plVar3) {
        *param_2 = (longlong)plVar4;
        goto LAB_1432f6576;
      }
    }
    else {
      plVar5 = (longlong *)((longlong)plVar2 - (longlong)plVar4);
    }
    if (param_3 <= plVar5) break;
    *(longlong *)(plVar1[1] + 0x10) = plVar1[2];
    *(longlong *)(plVar1[2] + 8) = plVar1[1];
    plVar1[1] = -1;
    plVar1[2] = -1;
    if ((int)plVar1[6] == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        memmove((void *)((*param_1 - (longlong)plVar5) + plVar1[4]),(void *)(*param_1 + plVar1[4]),
                plVar1[3]);
        plVar1[5] = plVar1[5] - (longlong)plVar5;
        plVar1[4] = plVar1[4] - (longlong)plVar5;
      }
      plVar1[2] = param_1[5];
      plVar1[1] = (longlong)(param_1 + 3);
      *(longlong **)(param_1[5] + 8) = plVar1;
      param_1[5] = (longlong)plVar1;
    }
  }
  *param_2 = (longlong)plVar2 - (longlong)plVar5;
LAB_1432f6576:
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}



// FUNCTION 1432f65e0 FUN_1432f65e0 body=117 status=ok
// SIG undefined FUN_1432f65e0(void)

undefined8 FUN_1432f65e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if ((*param_1 != 0) && (param_3 != param_1[1])) {
    FUN_1432f6660();
  }
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,param_3,0);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    param_1[1] = param_3;
    param_1[3] = param_3 >> 1;
    param_1[2] = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1432f6660 FUN_1432f6660 body=170 status=ok
// SIG undefined FUN_1432f6660(void)

void FUN_1432f6660(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = param_1 + 3;
    if (param_1 == (longlong *)0xffffffffffffffe0) {
      plVar2 = (longlong *)0x0;
    }
    while ((longlong *)param_1[5] != plVar2) {
      plVar1 = (longlong *)param_1[5];
      if (plVar1 != (longlong *)0x0) {
        plVar1[4] = 0;
        plVar1[5] = 0;
        *(longlong *)(plVar1[1] + 0x10) = plVar1[2];
        *(longlong *)(plVar1[2] + 8) = plVar1[1];
        plVar1[1] = -1;
        plVar1[2] = -1;
        (**(code **)(*plVar1 + 8))();
      }
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1432f6710 FUN_1432f6710 body=164 status=ok
// SIG undefined FUN_1432f6710(void)

undefined8
FUN_1432f6710(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = param_5;
  uVar3 = param_5 * 2 + 0xf + param_3 * param_4 & 0xfffffffffffffff0;
  uVar2 = FUN_1432f6450(param_1,&param_5,uVar3);
  if ((char)uVar2 != '\0') {
    *(longlong *)(param_2 + 0x30) = param_5;
    *(longlong *)(param_2 + 0x38) = param_5 + param_3 * param_4;
    *(ulonglong *)(param_2 + 0x28) = uVar3;
    *(int *)(param_2 + 0x44) = (int)param_3;
    *(int *)(param_2 + 0x48) = (int)lVar1;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(longlong *)(param_2 + 0x18) = param_1 + 0x18;
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(lVar1 + 8) = param_2 + 0x10;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(longlong *)(param_1 + 0x28) = param_2 + 0x10;
  }
  return uVar2;
}



// FUNCTION 1432f67c0 FUN_1432f67c0 body=169 status=ok
// SIG undefined FUN_1432f67c0(void)

longlong *
FUN_1432f67c0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  *(undefined1 *)(param_1 + 2) = param_6;
  param_1[3] = param_5;
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  if (*(uint *)(param_4 + 8) != 0) {
    plVar2 = param_1 + 4;
    uVar3 = (ulonglong)*(uint *)(param_4 + 8);
    do {
      lVar1 = *(longlong *)
               ((longlong)((-0x20 - (longlong)param_1) + (longlong)plVar2) *
                ((longlong *)param_1[1])[2] + *(longlong *)param_1[1]);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        *(undefined1 *)plVar2 = 0;
      }
      else {
        if (*(int *)(lVar1 + 0x40) == 0) {
          *(longlong *)(param_3 + 0x78) =
               *(longlong *)(param_3 + 0x78) + *(longlong *)(lVar1 + 0x28);
        }
        *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
        *(undefined1 *)plVar2 = 1;
      }
      plVar2 = (longlong *)((longlong)plVar2 + 1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_1432f6870(param_1,param_2,0);
  return param_1;
}



// FUNCTION 1432f6870 FUN_1432f6870 body=560 status=ok
// SIG undefined FUN_1432f6870(void)

/* WARNING: Removing unreachable block (ram,0x0001432f690a) */

void FUN_1432f6870(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined **local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = *(uint *)(param_1[1] + 8);
  uVar6 = (ulonglong)uVar2;
  lVar3 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(char *)((longlong)param_1 + lVar5 + 0x20) == '\0') {
          lVar4 = *(longlong *)(((longlong *)param_1[1])[2] * lVar5 + *(longlong *)param_1[1]);
          if (*(longlong *)(lVar4 + 0x28) == 0) {
            local_80 = *param_1;
            local_68 = param_1[3];
            local_88 = &PTR_FUN_145af98a0;
            local_78 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 6;
            local_48 = 0;
            uStack_40 = 0;
            local_38 = 0;
            local_70 = lVar4;
            (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x18))
                      (*(longlong **)(lVar4 + 0x50),param_2,lVar4,&local_88,
                       *(undefined4 *)(lVar4 + 0x88));
          }
          if ((*(char *)((longlong)param_1 + 0x11) != '\0') || (*(int *)(lVar4 + 0x40) == 0)) {
            if (*(int *)(lVar4 + 0x40) == 0) {
              plVar1 = (longlong *)(lVar3 + 0x78);
              *plVar1 = *plVar1 + *(longlong *)(lVar4 + 0x28);
            }
            *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
          }
        }
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      *(undefined1 *)((longlong)param_1 + 0x11) = 0;
      return;
    }
  }
  else if (uVar2 != 0) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(((longlong *)param_1[1])[2] * lVar5 + *(longlong *)param_1[1]);
      if ((*(char *)((longlong)param_1 + lVar5 + 0x20) == '\0') &&
         ((*(longlong *)(lVar4 + 0x90) == 0 ||
          ((*(longlong *)(lVar4 + 0x90) == 1 && (*(longlong *)(lVar4 + 0x98) == param_3)))))) {
        if (*(longlong *)(lVar4 + 0x28) == 0) {
          local_80 = *param_1;
          local_68 = param_1[3];
          local_88 = &PTR_FUN_145af98a0;
          local_78 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 6;
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_70 = lVar4;
          (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x18))
                    (*(longlong **)(lVar4 + 0x50),param_2,lVar4,&local_88,
                     *(undefined4 *)(lVar4 + 0x88));
        }
        if ((*(char *)((longlong)param_1 + 0x11) != '\0') || (*(int *)(lVar4 + 0x40) == 0)) {
          if (*(int *)(lVar4 + 0x40) == 0) {
            plVar1 = (longlong *)(lVar3 + 0x78);
            *plVar1 = *plVar1 + *(longlong *)(lVar4 + 0x28);
          }
          *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
        }
      }
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  return;
}



// FUNCTION 1432f6b30 FUN_1432f6b30 body=193 status=ok
// SIG undefined FUN_1432f6b30(void)

undefined8 * FUN_1432f6b30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_145af97e8;
  param_1[3] = 0;
  param_1[1] = &PTR_LAB_145af9880;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = param_3[3];
  param_1[8] = param_3[4];
  param_1[9] = param_3[5];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 7);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x10;
  param_1[0x12] = param_1 + 0x10;
  param_1[0x13] = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x10;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x100010;
  return param_1;
}



// FUNCTION 1432f6c00 FUN_1432f6c00 body=165 status=ok
// SIG undefined FUN_1432f6c00(void)

void FUN_1432f6c00(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145af97e8;
  param_1[1] = &PTR_LAB_145af9880;
  if (param_1[0x13] != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(param_1[0x13] + 8) + 1;
    do {
      if (*(longlong *)(param_1[0x13] + 0x10 + lVar1) != -2) {
        *(undefined8 *)(param_1[0x13] + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x13]);
    param_1[0x13] = 0;
  }
  FUN_1432f6660(param_1 + 0xd);
  param_1[1] = &PTR_FUN_145af3848;
  *param_1 = &PTR_FUN_145af1858;
  return;
}



// FUNCTION 1432f6cb0 FUN_1432f6cb0 body=74 status=ok
// SIG undefined FUN_1432f6cb0(void)

void FUN_1432f6cb0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined8 *)0x0) {
      *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffffffe;
      *(undefined8 *)param_1[3] = 0;
    }
    param_1[3] = (longlong)param_2;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
      cVar2 = (**(code **)(*param_1 + 0x30))();
      if (cVar2 != '\0') {
        *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1432f6d40 FUN_1432f6d40 body=1130 status=ok
// SIG undefined FUN_1432f6d40(void)

bool FUN_1432f6d40(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffde0;
  undefined4 uVar14;
  undefined8 local_1f8;
  int local_1f0;
  uint local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined **local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong *local_158;
  longlong *local_150;
  byte local_148;
  undefined1 local_147;
  undefined8 local_140;
  undefined1 auStack_138 [256];
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffde0 >> 0x20);
  lVar2 = *(longlong *)(param_3 + 0x40);
  uVar8 = *(uint *)(param_4 + 1);
  uVar11 = (ulonglong)uVar8;
  if ((uVar8 != 0) && (local_1a0 = *(longlong *)*param_4, *(char *)(local_1a0 + 0xd0) != '\0')) {
    local_1b8 = &PTR_FUN_145af98a0;
    local_1a8 = param_5;
    local_188 = 0;
    local_180 = 6;
    local_198 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
    local_190 = *(undefined8 *)(param_3 + 0x30);
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_1b0 = param_1;
    (**(code **)(**(longlong **)(local_1a0 + 0x50) + 0x18))
              (*(longlong **)(local_1a0 + 0x50),param_2,local_1a0,&local_1b8,
               *(undefined4 *)(local_1a0 + 0x88));
    if (local_180 < 2) {
      lVar2 = *(longlong *)*param_4;
      if (*(ulonglong *)(lVar2 + 0x90) < 3) {
        plVar10 = (longlong *)(lVar2 + 0x98);
      }
      else {
        plVar10 = *(longlong **)(lVar2 + 0x98);
      }
      plVar1 = (longlong *)(param_3 + 0x10);
      lVar2 = *plVar10;
      if (*(longlong *)(param_3 + 0x20) != 0) {
        *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_3 + 0x18);
        **(longlong **)(param_3 + 0x18) = *plVar1;
        *plVar1 = -1;
        *(undefined8 *)(param_3 + 0x18) = 0xffffffffffffffff;
      }
      *(longlong *)(param_3 + 0x20) = lVar2;
      if (lVar2 != 0) {
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
        *plVar1 = lVar2 + 0x20;
        **(undefined8 **)(lVar2 + 0x28) = plVar1;
        *(longlong **)(lVar2 + 0x28) = plVar1;
      }
    }
    return local_180 != 3;
  }
  uVar9 = 0;
  local_148 = *(byte *)((longlong)param_1 + 0xa4) & 1;
  local_147 = 1;
  local_140 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
  uVar7 = uVar9;
  if (uVar8 != 0) {
    do {
      lVar3 = *(longlong *)(param_4[2] * uVar7 + *param_4);
      if (*(longlong *)(lVar3 + 0x28) == 0) {
        auStack_138[uVar7] = 0;
      }
      else {
        if (*(int *)(lVar3 + 0x40) == 0) {
          param_1[0xf] = param_1[0xf] + *(longlong *)(lVar3 + 0x28);
        }
        *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
        auStack_138[uVar7] = 1;
      }
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_158 = param_1;
  local_150 = param_4;
  FUN_1432f6870(&local_158,param_2,0);
  FUN_1432d3250(param_3,&local_1f0,&local_1ec);
  piVar4 = *(int **)(param_3 + 0x30);
  uVar11 = (ulonglong)(uint)(local_1f0 * *piVar4);
  if (1 < (ulonglong)*(ushort *)(param_1 + 0x15)) {
    uVar7 = (ulonglong)*(ushort *)(param_1 + 0x15) - 1;
    uVar11 = uVar11 + uVar7 & ~uVar7;
  }
  uVar7 = (ulonglong)local_1ec * 2;
  if (1 < (ulonglong)*(ushort *)((longlong)param_1 + 0xaa)) {
    uVar6 = (ulonglong)*(ushort *)((longlong)param_1 + 0xaa) - 1;
    uVar7 = uVar7 + uVar6 & ~uVar6;
  }
  uVar11 = uVar11 + uVar7;
  if (1 < (ulonglong)*(ushort *)((longlong)param_1 + 0xac)) {
    uVar7 = (ulonglong)*(ushort *)((longlong)param_1 + 0xac) - 1;
    uVar11 = uVar11 + uVar7 & ~uVar7;
  }
  if (uVar11 != 0) {
    local_1f8 = 0;
    uVar11 = (ulonglong)(uint)(*piVar4 * local_1f0);
    iVar5 = (**(code **)(*param_1 + 0x60))
                      (param_1,&local_1f8,0,param_4,uVar11,CONCAT44(uVar14,local_1f0),local_1ec,
                       param_5,piVar4);
    if (iVar5 != 3) {
      bVar13 = iVar5 != 0;
      goto LAB_1432f714d;
    }
    Scaleform::Render::PrimitiveBatch::SetCacheItem(param_3,local_1f8);
    FUN_1432f6870(&local_158,param_2,local_1f8);
    local_1e0 = param_1[0xd];
    local_1c8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
    local_1e8 = 0;
    local_1d8 = 0;
    uVar7 = uVar9;
    uVar6 = uVar9;
    uVar12 = uVar9;
    if ((int)param_4[1] != 0) {
      do {
        uVar14 = (undefined4)(uVar11 >> 0x20);
        lVar2 = *(longlong *)(uVar12 * param_4[2] + *param_4);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          uVar11 = uVar6;
          (**(code **)(*param_1 + 0x90))(param_1,lVar2,uVar12,param_3,uVar6,uVar9,(int)uVar7);
        }
        else {
          if (local_1e8 == 0) {
            (**(code **)(*param_1 + 0x68))(param_1,local_1f8,&local_1e8,&local_1d8);
          }
          local_1d0 = local_res20;
          uVar11 = CONCAT44(uVar14,*(undefined4 *)(lVar2 + 0x44));
          local_res20[0] = (undefined1)uVar12;
          FUN_1432f4ec0(local_1c8,local_1e0 + *(longlong *)(lVar2 + 0x30),
                        *(undefined8 *)(param_3 + 0x30),local_1e8 + uVar6,uVar11,&local_1d0);
          FUN_1432f5430(local_1d8 + uVar9,local_1e0 + *(longlong *)(lVar2 + 0x38),
                        *(undefined4 *)(lVar2 + 0x48),uVar7 & 0xffff);
        }
        uVar8 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar8;
        uVar7 = (ulonglong)(uint)((int)uVar7 + *(int *)(lVar2 + 0x44));
        uVar6 = uVar6 + (uint)(**(int **)(param_3 + 0x30) * *(int *)(lVar2 + 0x44));
        uVar9 = uVar9 + (ulonglong)*(uint *)(lVar2 + 0x48) * 2;
      } while (uVar8 < *(uint *)(param_4 + 1));
    }
    (**(code **)(*param_1 + 0x70))(param_1,local_1f8);
  }
  bVar13 = true;
LAB_1432f714d:
  uVar11 = 0;
  if ((int)local_150[1] != 0) {
    do {
      lVar2 = *(longlong *)(uVar11 * local_150[2] + *local_150);
      if (((*(longlong *)(lVar2 + 0x28) != 0) && (*(int *)(lVar2 + 0x40) != 0)) &&
         (iVar5 = *(int *)(lVar2 + 0x40) + -1, *(int *)(lVar2 + 0x40) = iVar5, iVar5 == 0)) {
        local_158[0xf] = local_158[0xf] - *(longlong *)(lVar2 + 0x28);
      }
      uVar8 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(local_150 + 1));
  }
  return bVar13;
}



// FUNCTION 1432f71b0 FUN_1432f71b0 body=61 status=ok
// SIG undefined FUN_1432f71b0(void)

undefined8
FUN_1432f71b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,uint *param_7,longlong param_8)

{
  FUN_1432f5070(param_3,param_5,param_7,param_4 * (ulonglong)*param_7 + param_8,param_6,0);
  return 1;
}



// FUNCTION 1432f7200 FUN_1432f7200 body=38 status=ok
// SIG undefined FUN_1432f7200(void)

undefined8 FUN_1432f7200(void)

{
  longlong in_R9;
  void *in_stack_00000028;
  uint in_stack_00000030;
  longlong in_stack_00000040;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(in_stack_00000040 + in_R9 * 2),in_stack_00000028,
             (ulonglong)in_stack_00000030 * 2);
  return 1;
}



// FUNCTION 1432f7230 FUN_1432f7230 body=183 status=ok
// SIG undefined FUN_1432f7230(void)

undefined4 *
FUN_1432f7230(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined **local_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_68 = &PTR_FUN_145af98a0;
  local_58 = param_8;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  local_30 = 6;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_60 = param_1;
  local_50 = param_4;
  (**(code **)(**(longlong **)(param_4 + 0x50) + 0x18))
            (*(longlong **)(param_4 + 0x50),param_3,param_4,&local_68,
             *(undefined4 *)(param_4 + 0x88));
  *param_2 = local_30;
  return param_2;
}



// FUNCTION 1432f72f0 FUN_1432f72f0 body=203 status=ok
// SIG undefined FUN_1432f72f0(void)

/* WARNING: Removing unreachable block (ram,0x0001432f7379) */

undefined8 FUN_1432f72f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 != 0) && (*(char *)(param_3 + 0xb0) == '\0')) {
    if (*(longlong *)(param_3 + 0xa8) == 0) {
      (**(code **)(**(longlong **)(param_3 + 0x50) + 0x18))();
    }
    else if (*(longlong *)(param_3 + 0xa8) != 0) {
      FUN_1432f7b10(param_1,1);
    }
  }
  return 1;
}



// FUNCTION 1432f73c0 FUN_1432f73c0 body=225 status=ok
// SIG undefined FUN_1432f73c0(void)

ulonglong FUN_1432f73c0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = (ulonglong)*(uint *)(*param_2 + 0x34) & *(ulonglong *)(lVar2 + 8);
    in_RAX = uVar4 * 3;
    puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x18);
    if ((*(longlong *)(lVar2 + 0x10 + uVar4 * 0x18) != -2) && (puVar6[1] == uVar4)) {
      uVar3 = uVar4;
      uVar7 = 0xffffffffffffffff;
      while( true ) {
        uVar5 = uVar3;
        if ((puVar6[1] == uVar4) && (puVar6[2] == *param_2)) {
          uVar3 = *puVar6;
          if (uVar4 == uVar5) {
            if (uVar3 != 0xffffffffffffffff) {
              *puVar6 = 0xfffffffffffffffe;
              lVar1 = lVar2 + uVar3 * 0x18;
              *puVar6 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
              puVar6[1] = *(ulonglong *)(lVar1 + 0x18);
              puVar6[2] = *(ulonglong *)(lVar1 + 0x20);
              *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x10 + uVar7 * 0x18) = uVar3;
          }
          *puVar6 = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        uVar3 = *puVar6;
        if (uVar3 == 0xffffffffffffffff) break;
        in_RAX = uVar3 * 3;
        puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
        uVar7 = uVar5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432f74b0 FUN_1432f74b0 body=322 status=ok
// SIG undefined FUN_1432f74b0(void)

void FUN_1432f74b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432f7504;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1432f7f80(param_1,param_2,lVar10);
LAB_1432f7504:
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
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
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
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1432f7600 FUN_1432f7600 body=43 status=ok
// SIG undefined FUN_1432f7600(void)

undefined8 * FUN_1432f7600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af97b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1432f7630 FUN_1432f7630 body=52 status=ok
// SIG undefined FUN_1432f7630(void)

undefined8 FUN_1432f7630(undefined8 param_1,ulonglong param_2)

{
  FUN_1432f6c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1432f7670 FUN_1432f7670 body=73 status=ok
// SIG undefined FUN_1432f7670(void)

undefined8 * FUN_1432f7670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af97e0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1432f76c0 FUN_1432f76c0 body=43 status=ok
// SIG undefined FUN_1432f76c0(void)

undefined8 * FUN_1432f76c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af97b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432f76f0 FUN_1432f76f0 body=43 status=ok
// SIG undefined FUN_1432f76f0(void)

undefined8 * FUN_1432f76f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af97b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432f7720 FUN_1432f7720 body=300 status=ok
// SIG undefined FUN_1432f7720(void)

bool FUN_1432f7720(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  undefined8 *puVar5;
  undefined4 *puVar7;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uVar6;
  undefined4 uVar8;
  
  puVar1 = (ulonglong *)(param_1 + 0x10);
  puVar7 = local_48;
  puVar5 = &local_38;
  cVar2 = FUN_1432d35e0(*puVar1,*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,puVar5,puVar7,
                        local_res8);
  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if (cVar2 == '\0') {
    *(undefined1 *)(*puVar1 + 0xb0) = 1;
    bVar4 = false;
  }
  else {
    local_40 = 0;
    local_28 = 1;
    local_20 = 8;
    local_30 = puVar1;
    local_18 = FUN_1432f7a30(puVar1,1);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                      (*(longlong **)(param_1 + 0x18),&local_40,1,&local_30,local_38,
                       CONCAT44(uVar6,local_48[0]),CONCAT44(uVar8,local_res8[0]),
                       *(undefined1 *)(param_1 + 0x20),0);
    *(int *)(param_1 + 0x30) = iVar3;
    *(undefined8 *)(param_1 + 0x28) = param_2;
    if (iVar3 == 1) {
      *(undefined1 *)(*puVar1 + 0xb0) = 1;
    }
    bVar4 = false;
    if (*(int *)(param_1 + 0x30) == 3) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))
                (*(longlong **)(param_1 + 0x18),local_40,param_1 + 0x38,param_1 + 0x40);
      bVar4 = *(int *)(param_1 + 0x30) == 3;
    }
  }
  return bVar4;
}



// FUNCTION 1432f7850 FUN_1432f7850 body=475 status=ok
// SIG undefined FUN_1432f7850(void)

undefined4 FUN_1432f7850(longlong param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0xd0) == '\0') {
    piVar4 = *(int **)(param_1 + 0x30);
    if (piVar4 == (int *)0x0) {
      if (*(longlong *)(param_1 + 0x28) != 0) goto LAB_1432f78e7;
    }
    else if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x58) < (uint)(*param_2 * *piVar4)) ||
            ((piVar4 != (int *)0x0 &&
             (*(uint *)(*(longlong *)(param_1 + 8) + 0x60) < (uint)param_2[1]))))
    goto LAB_1432f78e7;
    cVar5 = FUN_1432f6710(*(longlong *)(param_1 + 8) + 0x68,lVar3,*param_2,
                          **(undefined4 **)(param_1 + 0x20),param_2[1]);
    uVar7 = 2;
    if (cVar5 != '\0') {
      uVar7 = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = uVar7;
  }
  else {
LAB_1432f78e7:
    local_30 = 1;
    local_28 = 8;
    local_38 = plVar1;
    local_20 = FUN_1432f7a30(plVar1,1);
    iVar6 = *param_2;
    iVar2 = **(int **)(param_1 + 0x28);
    *(int *)(lVar3 + 0x44) = iVar6;
    *(int *)(*plVar1 + 0x48) = param_2[1];
    *(undefined1 *)(*plVar1 + 0xd0) = 1;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                      (*(longlong **)(param_1 + 8),param_1 + 0x50,0,&local_38,iVar2 * iVar6,*param_2
                       ,param_2[1],*(undefined1 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      FUN_1432f7b10(*(undefined8 *)(param_1 + 8),2,*(undefined8 *)(param_1 + 0x50));
      (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x50),param_1 + 0x40,
                 param_1 + 0x48);
    }
    else if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 3;
    }
    else if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x38) = 5;
    }
    else if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x38) = 7;
    }
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + 0xb0) = *param_4;
  *(undefined4 *)(lVar3 + 0xb4) = param_4[1];
  *(undefined4 *)(lVar3 + 0xb8) = param_4[2];
  *(undefined4 *)(lVar3 + 0xbc) = param_4[3];
  *(undefined4 *)(lVar3 + 0xc0) = param_4[4];
  *(undefined4 *)(lVar3 + 0xc4) = param_4[5];
  *(undefined4 *)(lVar3 + 200) = param_4[6];
  uVar7 = param_4[7];
  *(undefined4 *)(lVar3 + 0xcc) = uVar7;
  return CONCAT31((int3)((uint)uVar7 >> 8),*(int *)(param_1 + 0x38) < 2);
}



// FUNCTION 1432f7a30 FUN_1432f7a30 body=151 status=ok
// SIG undefined FUN_1432f7a30(void)

ulonglong FUN_1432f7a30(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = 0;
  uVar5 = (ulonglong)param_2;
  if (param_2 != 0) {
    uVar3 = uVar4;
    if (3 < uVar5) {
      uVar7 = 0;
      uVar9 = 0;
      uVar6 = uVar7;
      uVar8 = uVar9;
      do {
        puVar2 = (ulonglong *)(param_1 + uVar4 * 8);
        uVar6 = *puVar2 >> 5 ^ uVar6;
        uVar8 = puVar2[1] >> 5 ^ uVar8;
        puVar2 = (ulonglong *)(param_1 + 0x10 + uVar4 * 8);
        uVar4 = uVar4 + 4;
        uVar7 = *puVar2 >> 5 ^ uVar7;
        uVar9 = puVar2[1] >> 5 ^ uVar9;
      } while (uVar4 < (uVar5 & 0xfffffffffffffffc));
      uVar3 = uVar4;
      uVar4 = uVar7 ^ uVar6 ^ uVar9 ^ uVar8;
    }
    for (; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      lVar1 = uVar3 * 8;
      uVar4 = uVar4 ^ *(ulonglong *)(param_1 + lVar1) >> 5;
    }
  }
  return uVar4;
}



// FUNCTION 1432f7b10 FUN_1432f7b10 body=146 status=ok
// SIG undefined FUN_1432f7b10(void)

void FUN_1432f7b10(undefined8 param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x38);
    *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_3 + 0x10) = 0xffffffffffffffff;
    plVar1 = (longlong *)(lVar2 + ((longlong)*(int *)(param_3 + 0x40) + 1) * 0x18);
    *plVar1 = *plVar1 - *(longlong *)(param_3 + 0x50);
    *(int *)(param_3 + 0x40) = param_2;
    lVar2 = *(longlong *)(param_3 + 0x38) + (longlong)param_2 * 0x18;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    lVar3 = lVar2;
    if (lVar2 == -8) {
      lVar3 = 0;
    }
    *(longlong *)(param_3 + 8) = lVar3;
    *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8) = param_3;
    *(longlong *)(lVar2 + 0x10) = param_3;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + *(longlong *)(param_3 + 0x50);
  }
  return;
}



// FUNCTION 1432f7bb0 SetCacheItem body=83 status=ok
// SIG undefined SetCacheItem(void)

void Scaleform::Render::PrimitiveBatch::SetCacheItem(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x18);
    **(longlong **)(param_1 + 0x18) = *plVar1;
    *plVar1 = -1;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
    *plVar1 = param_2 + 0x20;
    **(undefined8 **)(param_2 + 0x28) = plVar1;
    *(longlong **)(param_2 + 0x28) = plVar1;
  }
  return;
}



// FUNCTION 1432f7c50 FUN_1432f7c50 body=127 status=ok
// SIG undefined FUN_1432f7c50(void)

void FUN_1432f7c50(longlong param_1,int param_2,uint param_3,void *param_4,uint param_5)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x38) < 2)) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x68) +
                          *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38) +
                         (ulonglong)param_3 * 2),param_4,(ulonglong)param_5 * 2);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x58))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x20),(ulonglong)param_3,param_4,param_5,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1432f7cd0 FUN_1432f7cd0 body=93 status=ok
// SIG undefined FUN_1432f7cd0(void)

void FUN_1432f7cd0(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    lVar2 = (ulonglong)param_2 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe0);
    piVar1 = *(int **)(lVar2 + 8);
    FUN_1432f5070(*(undefined8 *)((ulonglong)param_2 * 0x20 + 8 + *(longlong *)(param_1 + 0x28)),
                  param_4,piVar1,
                  (ulonglong)(uint)(param_3 * *piVar1) + *(longlong *)(lVar2 + 0x20) +
                  *(longlong *)(param_1 + 0x38),param_5,0);
  }
  return;
}



// FUNCTION 1432f7d30 FUN_1432f7d30 body=140 status=ok
// SIG undefined FUN_1432f7d30(void)

void FUN_1432f7d30(longlong param_1,int param_2,int param_3,void *param_4,int param_5)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x38) < 2)) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)(uint)(**(int **)(param_1 + 0x20) * param_3) +
                          *(longlong *)(*(longlong *)(param_1 + 8) + 0x68) +
                         *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30)),param_4,
                 (ulonglong)(uint)(**(int **)(param_1 + 0x20) * param_5));
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x20),param_3,param_4,param_5,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1432f7dc0 FUN_1432f7dc0 body=151 status=ok
// SIG undefined FUN_1432f7dc0(void)

void * FUN_1432f7dc0(undefined8 param_1,ulonglong param_2,void *param_3,ulonglong param_4,
                    longlong param_5)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_5 * 8,0);
  if (_Dst != (void *)0x0) {
    if (param_2 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_3,param_2 * 8);
    }
    if (param_2 < param_4) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Dst + (param_2 + 1) * 8),
                 (void *)((longlong)param_3 + param_2 * 8),(param_4 - param_2) * 8);
    }
  }
  return _Dst;
}



// FUNCTION 1432f7e60 FUN_1432f7e60 body=274 status=ok
// SIG undefined FUN_1432f7e60(void)

ulonglong * FUN_1432f7e60(ulonglong *param_1,ulonglong param_2)

{
  void *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    if (param_2 < uVar1) {
      memmove(param_1 + param_2 + 1 + 1,param_1 + param_2 + 1,(uVar1 - param_2) * 8);
    }
    puVar3 = param_1 + param_2 + 1;
  }
  else if (uVar1 == 2) {
    uVar1 = FUN_1432f7dc0(param_1,param_2,param_1 + 1,2,4);
    if (uVar1 == 0) {
      return (ulonglong *)0x0;
    }
    puVar3 = (ulonglong *)(uVar1 + param_2 * 8);
    param_1[1] = uVar1;
    param_1[2] = 4;
  }
  else if (uVar1 < param_1[2]) {
    if (param_2 < uVar1) {
      _Src = (void *)(param_1[1] + param_2 * 8);
      memmove((void *)((longlong)_Src + 8),_Src,(uVar1 - param_2) * 8);
    }
    puVar3 = (ulonglong *)(param_1[1] + param_2 * 8);
  }
  else {
    uVar2 = uVar1 + 4 & 0xfffffffffffffffc;
    uVar1 = FUN_1432f7dc0(param_1,param_2,param_1[1],uVar1,uVar2);
    if (uVar1 == 0) {
      return (ulonglong *)0x0;
    }
    puVar3 = (ulonglong *)(uVar1 + param_2 * 8);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[1]);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  *param_1 = *param_1 + 1;
  return puVar3;
}



// FUNCTION 1432f7f80 FUN_1432f7f80 body=299 status=ok
// SIG undefined FUN_1432f7f80(void)

void FUN_1432f7f80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432d53c0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        plVar5 = (longlong *)(lVar1 + 0x20 + lVar3);
        FUN_1432f74b0(&local_res20,param_2,plVar5,*(undefined4 *)(*plVar5 + 0x34));
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1432f80f0 FUN_1432f80f0 body=101 status=ok
// SIG undefined FUN_1432f80f0(void)

undefined8 *
FUN_1432f80f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9998;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 7) = param_2;
  lVar2 = 7;
  puVar1 = param_1 + 8;
  do {
    *puVar1 = puVar1;
    puVar1[1] = puVar1;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1432f8160 FUN_1432f8160 body=90 status=ok
// SIG undefined FUN_1432f8160(void)

void FUN_1432f8160(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9998;
  Scaleform::Render::RBGenericImpl::RenderBufferManager::Reset();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9958;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432f81c0 FUN_1432f81c0 body=98 status=ok
// SIG undefined FUN_1432f81c0(void)

undefined8 FUN_1432f81c0(longlong param_1,RefCountImpl *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(RefCountImpl **)(param_1 + 0x10) = param_2;
  uVar2 = (**(code **)(*(longlong *)param_2 + 0x78))(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  cVar1 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2,uVar2,0x400);
  *(bool *)(param_1 + 0x34) = cVar1 == '\0';
  return 1;
}



// FUNCTION 1432f8230 Destroy body=50 status=ok
// SIG undefined Destroy(void)

void Scaleform::Render::RBGenericImpl::RenderBufferManager::Destroy(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1 + 6) = 0;
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 1432f8270 FUN_1432f8270 body=264 status=ok
// SIG undefined FUN_1432f8270(void)

void FUN_1432f8270(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1432f8e10(param_1,6);
  FUN_1432f8e10(param_1,4);
  if (((longlong *)param_1[9] != param_1 + 8) || ((longlong *)param_1[0xb] != param_1 + 10)) {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  plVar2 = (longlong *)param_1[0xb];
  plVar1 = param_1 + 10;
  plVar4 = param_1 + 0xc;
  if (plVar2 != plVar1) {
    lVar3 = *plVar1;
    *plVar1 = (longlong)plVar1;
    param_1[0xb] = (longlong)plVar1;
    *(longlong *)(lVar3 + 8) = param_1[0xd];
    *plVar2 = (longlong)plVar4;
    *(longlong *)param_1[0xd] = lVar3;
    param_1[0xd] = (longlong)plVar2;
  }
  plVar2 = (longlong *)param_1[0xf];
  plVar1 = param_1 + 0xe;
  if (plVar2 != plVar1) {
    lVar3 = *plVar1;
    *plVar1 = (longlong)plVar1;
    param_1[0xf] = (longlong)plVar1;
    *(longlong *)(lVar3 + 8) = param_1[0x11];
    *plVar2 = (longlong)(param_1 + 0x10);
    *(longlong *)param_1[0x11] = lVar3;
    param_1[0x11] = (longlong)plVar2;
  }
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != plVar4) {
    lVar3 = *plVar4;
    *plVar4 = (longlong)plVar4;
    param_1[0xd] = (longlong)plVar4;
    *(longlong *)(lVar3 + 8) = param_1[0xf];
    *plVar2 = (longlong)plVar1;
    *(longlong *)param_1[0xf] = lVar3;
    param_1[0xf] = (longlong)plVar2;
  }
  plVar1 = param_1 + 0x12;
  plVar4 = (longlong *)param_1[0x13];
  if (plVar4 != plVar1) {
    lVar3 = *plVar1;
    *plVar1 = (longlong)plVar1;
    param_1[0x13] = (longlong)plVar1;
    *(longlong *)(lVar3 + 8) = param_1[0x15];
    *plVar4 = (longlong)(param_1 + 0x14);
    *(longlong *)param_1[0x15] = lVar3;
    param_1[0x15] = (longlong)plVar4;
  }
  return;
}



// FUNCTION 1432f8380 Reset body=76 status=ok
// SIG undefined Reset(void)

void Scaleform::Render::RBGenericImpl::RenderBufferManager::Reset(undefined8 param_1)

{
  FUN_1432f8d10(param_1,2);
  FUN_1432f8d10(param_1,3);
  FUN_1432f8d10(param_1,4);
  FUN_1432f8d10(param_1,5);
  FUN_1432f8d10(param_1,6);
  return;
}



// FUNCTION 1432f83e0 FUN_1432f83e0 body=60 status=ok
// SIG undefined FUN_1432f83e0(void)

void FUN_1432f83e0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  *(ulonglong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  if (param_2 < uVar1) {
    FUN_1432f8e10(param_1,6);
    FUN_1432f8e10(param_1,4);
    return;
  }
  return;
}



// FUNCTION 1432f8480 FUN_1432f8480 body=465 status=ok
// SIG undefined FUN_1432f8480(void)

longlong * FUN_1432f8480(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  RefCountImpl *this;
  longlong *plVar4;
  ulonglong uVar5;
  int local_res8;
  int local_resc;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return (longlong *)0x0;
  }
  local_res18 = 0;
  FUN_1432f97d0(param_1,&local_res8,param_2);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  iVar3 = FUN_1432c86e0(uVar2,0);
  uVar5 = (ulonglong)((uint)(local_res8 * local_resc * iVar3) >> 3);
  iVar3 = FUN_1432f8a30(param_1,&local_res18,&local_res8,3,CONCAT44(uVar6,uVar2),uVar5);
  if (iVar3 == 0) {
    plVar4 = *(longlong **)(local_res18 + 0x10);
    (**(code **)(*(longlong *)plVar4[4] + 8))();
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
    uVar6 = *param_2;
    *(undefined4 *)((longlong)plVar4 + 0x3c) = param_2[1];
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 7) = uVar6;
    (**(code **)(*plVar4 + 8))(plVar4);
    if (plVar4[4] != 0) {
      *(undefined8 *)(plVar4[4] + 0x10) = 0;
    }
  }
  else {
    plVar4 = (longlong *)0x0;
    if (iVar3 == 1) {
      this = (RefCountImpl *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                       (*(longlong **)(param_1 + 0x10),uVar2,1,&local_res8,0x400,0,0);
      plVar4 = (longlong *)0x0;
      if (this != (RefCountImpl *)0x0) {
        local_res18 = *(longlong *)(this + 0x38);
        plVar4 = (longlong *)FUN_1432f88f0(param_1,&local_res18,3,uVar2,this);
        if (plVar4 != (longlong *)0x0) {
          *(undefined4 *)(plVar4 + 0xb) = 1;
          plVar1 = plVar4 + 8;
          plVar4[9] = *(longlong *)(param_1 + 0x58);
          *plVar1 = param_1 + 0x50;
          **(longlong **)(param_1 + 0x58) = (longlong)plVar1;
          *(longlong **)(param_1 + 0x58) = plVar1;
          uVar6 = *param_2;
          uVar2 = param_2[1];
          plVar4[6] = 0;
          *(undefined4 *)(plVar4 + 7) = uVar6;
          *(undefined4 *)((longlong)plVar4 + 0x3c) = uVar2;
          plVar4[0xc] = uVar5;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar5;
        }
        Scaleform::RefCountImpl::Release(this);
      }
    }
  }
  return plVar4;
}



// FUNCTION 1432f8660 FUN_1432f8660 body=637 status=ok
// SIG undefined FUN_1432f8660(void)

longlong * FUN_1432f8660(longlong param_1,int *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  RefCountImpl *this;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 local_res8 [2];
  int local_res20;
  int local_res24;
  int local_48;
  int local_44;
  longlong *local_40;
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x38) == 1) {
    piVar3 = &local_48;
    local_48 = *param_2;
    local_44 = param_2[1];
  }
  else {
    piVar3 = (int *)FUN_1432f97d0(param_1,local_38,param_2);
  }
  local_res24 = piVar3[1];
  local_res20 = *piVar3;
  uVar5 = (ulonglong)(uint)(local_res20 * local_res24 * 4);
  if (param_3 == '\0') {
    iVar2 = 1;
    plVar4 = plVar6;
  }
  else {
    iVar2 = FUN_1432f8a30(param_1,&local_40,&local_res20,5,0,uVar5);
    plVar4 = local_40;
  }
  if (iVar2 == 0) {
    *(longlong *)(*plVar4 + 8) = plVar4[1];
    *(longlong *)plVar4[1] = *plVar4;
    *plVar4 = -1;
    plVar4[1] = -1;
    *(undefined4 *)(plVar4 + 3) = 1;
    lVar1 = *(longlong *)(param_1 + 0x58);
    *plVar4 = param_1 + 0x50;
    plVar4[1] = lVar1;
    **(undefined8 **)(param_1 + 0x58) = plVar4;
    *(longlong **)(param_1 + 0x58) = plVar4;
    plVar4 = (longlong *)plVar4[2];
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  else {
    plVar4 = plVar6;
    if (iVar2 == 1) {
      this = (RefCountImpl *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                       (*(longlong **)(param_1 + 0x10),&local_res20,0);
      plVar4 = (longlong *)0x0;
      if (this != (RefCountImpl *)0x0) {
        local_res8[0] = 0x48;
        plVar4 = (longlong *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x60,local_res8);
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
          Scaleform::RefCountImpl::Release(this);
        }
        else {
          plVar4[1] = 0;
          plVar4[3] = param_1;
          *plVar4 = (longlong)&PTR_FUN_144f70a50;
          *(undefined4 *)(plVar4 + 1) = 1;
          *plVar4 = (longlong)&PTR_FUN_145af98f0;
          plVar4[4] = 0;
          *(uint *)((longlong)plVar4 + 0x14) = 6 - (uint)(param_3 != '\0');
          *(int *)(plVar4 + 5) = local_res20;
          *(int *)((longlong)plVar4 + 0x2c) = local_res24;
          plVar4[6] = 0;
          plVar4[7] = -1;
          plVar4[8] = -1;
          plVar4[9] = (longlong)plVar4;
          plVar4[10] = 0;
          plVar4[0xb] = 0;
          *plVar4 = (longlong)&PTR_FUN_145af9a18;
          Scaleform::GFx::LoadProcess::SetBindProcess(plVar4,this);
          if (param_3 != '\0') {
            plVar7 = plVar4 + 7;
            if (plVar4 == (longlong *)0x0) {
              plVar7 = plVar6;
            }
            *(undefined4 *)(plVar7 + 3) = 1;
            plVar7[1] = *(longlong *)(param_1 + 0x58);
            *plVar7 = param_1 + 0x50;
            **(undefined8 **)(param_1 + 0x58) = plVar7;
            *(longlong **)(param_1 + 0x58) = plVar7;
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar5;
          }
          plVar4[0xb] = uVar5;
          Scaleform::RefCountImpl::Release(this);
        }
      }
    }
  }
  return plVar4;
}



// FUNCTION 1432f88f0 FUN_1432f88f0 body=303 status=ok
// SIG undefined FUN_1432f88f0(void)

undefined8 *
FUN_1432f88f0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             RefCountImpl *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_18 [4];
  
  local_18[0] = 0x48;
  puVar3 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x78,local_18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_144f70a50;
    *puVar3 = &PTR_FUN_145af98f0;
    puVar3[3] = param_1;
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    puVar3[4] = 0;
    uVar1 = param_2[1];
    *(undefined4 *)(puVar3 + 5) = *param_2;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar1;
    *puVar3 = &PTR_FUN_145af9908;
    uVar1 = param_2[1];
    *(undefined4 *)(puVar3 + 7) = *param_2;
    puVar3[6] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar1;
    puVar3[8] = 0xffffffffffffffff;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = puVar3;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *puVar3 = &PTR_FUN_145af99e8;
    puVar3[0xd] = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = param_4;
    if (param_5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_5);
    }
    if ((RefCountImpl *)puVar3[0xd] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar3[0xd]);
    }
    puVar3[0xd] = param_5;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar2;
  }
  return puVar3;
}



// FUNCTION 1432f8a30 FUN_1432f8a30 body=394 status=ok
// SIG undefined FUN_1432f8a30(void)

undefined8
FUN_1432f8a30(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
             undefined4 param_5,ulonglong param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 & 0xffffffff;
  if ((*(ulonglong *)(param_1 + 0x20) != 0) && (*(ulonglong *)(param_1 + 0x20) < param_6)) {
    return 2;
  }
  lVar2 = FUN_1432f8bc0(param_1,6,param_3,param_4,param_5);
  *param_2 = lVar2;
  if (lVar2 == 0) {
    lVar2 = FUN_1432f8bc0(param_1,5,param_3,uVar4,param_5);
    *param_2 = lVar2;
  }
  if (*param_2 == 0) {
    cVar1 = FUN_1432f8f20(param_1,6,param_6);
    if (cVar1 == '\0') {
      lVar2 = FUN_1432f8bc0(param_1,4,param_3,uVar4,param_5);
      *param_2 = lVar2;
      if (lVar2 != 0) goto LAB_1432f8b6b;
      cVar1 = FUN_1432f8f20(param_1,4,param_6);
      if ((cVar1 == '\0') && (cVar1 = FUN_1432f8f20(param_1,5,param_6), cVar1 == '\0')) {
        lVar2 = FUN_1432f8bc0(param_1,3,param_3,uVar4,param_5);
        *param_2 = lVar2;
        if (lVar2 != 0) goto LAB_1432f8b6b;
        cVar1 = FUN_1432f8f20(param_1,3,param_6);
        if (cVar1 == '\0') {
          lVar2 = FUN_1432f8bc0(param_1,2,param_3,uVar4,param_5);
          *param_2 = lVar2;
          if (lVar2 != 0) goto LAB_1432f8b6b;
          cVar1 = FUN_1432f8f20(param_1,2,param_6);
          if (((cVar1 == '\0') && (*(ulonglong *)(param_1 + 0x20) != 0)) &&
             (*(ulonglong *)(param_1 + 0x20) < *(longlong *)(param_1 + 0x28) + param_6)) {
            return 2;
          }
        }
      }
    }
    uVar3 = 1;
  }
  else {
LAB_1432f8b6b:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1432f8bc0 FUN_1432f8bc0 body=214 status=ok
// SIG undefined FUN_1432f8bc0(void)

undefined8 * FUN_1432f8bc0(longlong param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + ((longlong)param_2 + 4) * 0x10);
  do {
    if (puVar1 == (undefined8 *)(((longlong)param_2 + 4) * 0x10 + param_1)) {
      return (undefined8 *)0x0;
    }
    if (param_4 == 5) {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar3 = 0;
    }
    lVar2 = puVar1[2];
    if ((*(int *)(lVar2 + 0x14) == param_4) && (*(int *)((longlong)puVar1 + 0x1c) == param_5)) {
      if (iVar3 == 1) {
        if ((*param_3 == *(uint *)(lVar2 + 0x28)) && (param_3[1] == *(uint *)(lVar2 + 0x2c))) {
          return puVar1;
        }
      }
      else if (iVar3 == 2) {
        if ((*param_3 <= *(uint *)(lVar2 + 0x28)) && (param_3[1] <= *(uint *)(lVar2 + 0x2c))) {
          return puVar1;
        }
      }
      else if (*param_3 <= *(uint *)(lVar2 + 0x28)) {
        if ((param_3[1] <= *(uint *)(lVar2 + 0x2c)) &&
           (*(uint *)(lVar2 + 0x2c) * *(uint *)(lVar2 + 0x28) * 0x1b >> 5 <= param_3[1] * *param_3))
        {
          return puVar1;
        }
      }
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



// FUNCTION 1432f8d10 FUN_1432f8d10 body=247 status=ok
// SIG undefined FUN_1432f8d10(void)

void FUN_1432f8d10(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = ((longlong)param_2 + 4) * 0x10 + param_1;
  if (*(longlong *)(lVar4 + 8) != lVar4) {
    do {
      plVar1 = *(longlong **)(param_1 + (longlong)param_2 * 0x10 + 0x48);
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - plVar1[4];
      plVar1[4] = 0;
      puVar2 = (undefined8 *)plVar1[2];
      if (*(int *)((longlong)puVar2 + 0x14) == 3) {
        if ((RefCountImpl *)puVar2[0xd] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[0xd]);
        }
        puVar2[0xd] = 0;
        puVar3 = (undefined8 *)puVar2[4];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          puVar2[4] = 0;
        }
        *(undefined4 *)(puVar2 + 0xe) = 3;
        if (*(int *)(puVar2 + 1) == 0) {
LAB_1432f8dd6:
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      else if ((*(int *)((longlong)puVar2 + 0x14) == 5) && (puVar2 != (undefined8 *)0x0))
      goto LAB_1432f8dd6;
    } while (*(longlong *)(lVar4 + 8) != lVar4);
  }
  return;
}



// FUNCTION 1432f8e10 FUN_1432f8e10 body=264 status=ok
// SIG undefined FUN_1432f8e10(void)

void FUN_1432f8e10(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x28)) {
    do {
      plVar1 = *(longlong **)(param_1 + ((longlong)param_2 + 4) * 0x10);
      if (plVar1 == (longlong *)(((longlong)param_2 + 4) * 0x10 + param_1)) {
        return;
      }
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - plVar1[4];
      plVar1[4] = 0;
      puVar2 = (undefined8 *)plVar1[2];
      if (*(int *)((longlong)puVar2 + 0x14) == 3) {
        if ((RefCountImpl *)puVar2[0xd] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[0xd]);
        }
        puVar2[0xd] = 0;
        puVar3 = (undefined8 *)puVar2[4];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          puVar2[4] = 0;
        }
        *(undefined4 *)(puVar2 + 0xe) = 3;
        if (*(int *)(puVar2 + 1) == 0) {
LAB_1432f8ee3:
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      else if ((*(int *)((longlong)puVar2 + 0x14) == 5) && (puVar2 != (undefined8 *)0x0))
      goto LAB_1432f8ee3;
    } while (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1432f8f20 FUN_1432f8f20 body=295 status=ok
// SIG undefined FUN_1432f8f20(void)

bool FUN_1432f8f20(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(longlong *)(param_1 + 0x28) + param_3)) {
    do {
      plVar1 = *(longlong **)(param_1 + ((longlong)param_2 + 4) * 0x10);
      if (plVar1 == (longlong *)(((longlong)param_2 + 4) * 0x10 + param_1)) break;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - plVar1[4];
      plVar1[4] = 0;
      puVar2 = (undefined8 *)plVar1[2];
      if (*(int *)((longlong)puVar2 + 0x14) == 3) {
        if ((RefCountImpl *)puVar2[0xd] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar2[0xd]);
        }
        puVar2[0xd] = 0;
        puVar3 = (undefined8 *)puVar2[4];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          puVar2[4] = 0;
        }
        *(undefined4 *)(puVar2 + 0xe) = 3;
        if (*(int *)(puVar2 + 1) == 0) {
LAB_1432f9000:
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      else if ((*(int *)((longlong)puVar2 + 0x14) == 5) && (puVar2 != (undefined8 *)0x0))
      goto LAB_1432f9000;
    } while (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(longlong *)(param_1 + 0x28) + param_3));
  }
  return (ulonglong)(*(longlong *)(param_1 + 0x28) + param_3) <= *(ulonglong *)(param_1 + 0x18);
}



// FUNCTION 1432f91e0 FUN_1432f91e0 body=97 status=ok
// SIG undefined FUN_1432f91e0(void)

void FUN_1432f91e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 3;
  if (*(int *)(param_1 + 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f9238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432f9310 FUN_1432f9310 body=153 status=ok
// SIG undefined FUN_1432f9310(void)

RefCountImplCore * FUN_1432f9310(RefCountImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af9938;
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_145af98f0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
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



// FUNCTION 1432f93b0 FUN_1432f93b0 body=153 status=ok
// SIG undefined FUN_1432f93b0(void)

RefCountImplCore * FUN_1432f93b0(RefCountImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af9938;
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_145af98f0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
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



// FUNCTION 1432f9450 FUN_1432f9450 body=129 status=ok
// SIG undefined FUN_1432f9450(void)

RefCountImplCore * FUN_1432f9450(RefCountImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af98f0;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1432f94e0 FUN_1432f94e0 body=160 status=ok
// SIG undefined FUN_1432f94e0(void)

RefCountImplCore * FUN_1432f94e0(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9998;
  Scaleform::Render::RBGenericImpl::RenderBufferManager::Reset();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9958;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1432f9580 FUN_1432f9580 body=99 status=ok
// SIG undefined FUN_1432f9580(void)

RefCountImplCore * FUN_1432f9580(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9958;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432f95f0 FUN_1432f95f0 body=143 status=ok
// SIG undefined FUN_1432f95f0(void)

RefCountImplCore * FUN_1432f95f0(RefCountImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_145af98f0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1432f9680 FUN_1432f9680 body=129 status=ok
// SIG undefined FUN_1432f9680(void)

RefCountImplCore * FUN_1432f9680(RefCountImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af98f0;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432f9790 FUN_1432f9790 body=56 status=ok
// SIG undefined FUN_1432f9790(void)

void FUN_1432f9790(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if ((iVar1 == 1) && (param_1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001432f97bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432f97d0 FUN_1432f97d0 body=167 status=ok
// SIG undefined FUN_1432f97d0(void)

uint * FUN_1432f97d0(longlong param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar1 = param_3[1] - 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
    uVar1 = *param_3 - 1U | *param_3 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = (uVar1 >> 0x10 | uVar1) + 1;
    if ((int)uVar1 < 0x20) {
      uVar1 = 0x20;
    }
    *param_2 = uVar1;
    if ((int)uVar2 < 0x20) {
      uVar2 = 0x20;
    }
    param_2[1] = uVar2;
    return param_2;
  }
  uVar1 = *param_3 + 0x1fU & 0xffffffe0;
  uVar2 = param_3[1] + 0x1fU & 0xffffffe0;
  if ((int)uVar1 < 0x20) {
    uVar1 = 0x20;
  }
  *param_2 = uVar1;
  if ((int)uVar2 < 0x20) {
    uVar2 = 0x20;
  }
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1432f9880 SetBindProcess body=58 status=ok
// SIG undefined SetBindProcess(void)

void Scaleform::GFx::LoadProcess::SetBindProcess(longlong param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  *(RefCountImpl **)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1432f98c0 RoundUpToPowerOfTwo body=22 status=ok
// SIG undefined RoundUpToPowerOfTwo(void)

int Scaleform::Alg::RoundUpToPowerOfTwo(byte param_1)

{
  return 1 << ((&DAT_1467cdc30)[param_1] & 0x1f);
}



// FUNCTION 1432f98e0 GetImageFormatRescaleType body=38 status=ok
// SIG undefined GetImageFormatRescaleType(void)

undefined4 Scaleform::Render::GetImageFormatRescaleType(int param_1)

{
  if (0 < param_1) {
    if (param_1 < 3) {
      return 2;
    }
    if (param_1 < 5) {
      return 1;
    }
    if (param_1 == 9) {
      return 4;
    }
  }
  return 0;
}



// FUNCTION 1432f9910 FUN_1432f9910 body=244 status=ok
// SIG undefined FUN_1432f9910(void)

void FUN_1432f9910(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = Scaleform::Render::ImageData::GetPlaneCount(param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      FUN_1432c7ad0(param_2,uVar2,&local_58);
      FUN_1432c7ad0(param_1,uVar2,&local_38);
      FUN_14338adf0(local_20,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,local_40,
                    (undefined4)local_58,local_58._4_4_,(undefined4)local_50,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1432f9a10 FUN_1432f9a10 body=182 status=ok
// SIG undefined FUN_1432f9a10(void)

void FUN_1432f9a10(longlong param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1432c86e0(param_3,param_4);
  lVar2 = FUN_1432c89d0(param_3,param_2[1],param_4);
  lVar3 = *(longlong *)(param_2 + 6);
  lVar4 = *(longlong *)(param_1 + 0x18);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    (*param_5)(lVar4,lVar3,(ulonglong)*param_2 * (ulonglong)uVar1 >> 3,param_6,param_7);
    lVar3 = lVar3 + *(longlong *)(param_2 + 2);
    lVar4 = lVar4 + *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 1432f9ad0 FUN_1432f9ad0 body=337 status=ok
// SIG undefined FUN_1432f9ad0(void)

void FUN_1432f9ad0(longlong param_1,undefined4 *param_2,code *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar1 = *param_2;
  uVar3 = FUN_1432c86a0(uVar1);
  uVar4 = Scaleform::Render::ImageData::GetPlaneCount();
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_78 = 0;
      local_58 = 0;
      FUN_1432c7ad0(param_2,uVar8,&local_78);
      FUN_1432c7ad0(param_1,uVar8,&local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = FUN_1432c86e0(uVar1,(ulonglong)uVar4 % (ulonglong)uVar3);
      lVar6 = FUN_1432c89d0(uVar1,local_78._4_4_,(ulonglong)uVar4 % (ulonglong)uVar3);
      lVar9 = local_60;
      lVar7 = local_40;
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        (*param_3)(lVar7,lVar9,(local_78 & 0xffffffff) * (ulonglong)uVar5 >> 3,uVar2,param_4);
        lVar9 = lVar9 + local_70;
        lVar7 = lVar7 + local_50;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return;
}



// FUNCTION 1432f9c30 FUN_1432f9c30 body=1459 status=ok
// SIG undefined FUN_1432f9c30(void)

void FUN_1432f9c30(uint *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint local_50;
  uint local_48;
  
  lVar13 = *(longlong *)(param_2 + 2);
  lVar14 = *(longlong *)(param_1 + 2);
  uVar21 = *param_1;
  iVar17 = param_2[1];
  uVar19 = param_1[1];
  uVar25 = (uint)(*param_2 << 10) / uVar21;
  uVar15 = (uint)(iVar17 << 10) / uVar19;
  if (*param_2 == 1) {
    if (iVar17 != 1) {
      puVar26 = *(undefined1 **)(param_1 + 6);
      lVar24 = *(longlong *)(param_2 + 6);
      param_3 = param_3 & 0xffefffff;
      if (0 < (int)param_3) {
        if ((int)param_3 < 3) {
          uVar21 = 0;
          uVar25 = uVar15 - 1 >> 2;
          if (uVar19 != 0) {
            do {
              uVar19 = uVar25 & 0x3ff;
              uVar21 = uVar21 + 1;
              pbVar18 = (byte *)((ulonglong)(uVar25 >> 10) * lVar13 + lVar24);
              iVar17 = 0x3ff - uVar19;
              uVar25 = uVar25 + uVar15;
              bVar1 = pbVar18[lVar13 + 2];
              bVar2 = pbVar18[lVar13 + 3];
              bVar3 = pbVar18[lVar13];
              bVar4 = pbVar18[2];
              bVar5 = pbVar18[3];
              bVar6 = *pbVar18;
              puVar26[1] = (char)((uint)pbVar18[lVar13 + 1] * iVar17 + pbVar18[1] * uVar19 >> 10);
              puVar26[2] = (char)((uint)bVar1 * iVar17 + bVar4 * uVar19 >> 10);
              puVar26[3] = (char)((uint)bVar2 * iVar17 + bVar5 * uVar19 >> 10);
              *puVar26 = (char)((uint)bVar3 * iVar17 + bVar6 * uVar19 >> 10);
              puVar26 = puVar26 + lVar14;
            } while (uVar21 < param_1[1]);
          }
        }
        else if ((param_3 == 9) || (param_3 - 200 < 2)) {
          uVar21 = 0;
          uVar25 = uVar15 - 1 >> 2;
          if (uVar19 != 0) {
            do {
              uVar19 = uVar25 & 0x3ff;
              uVar21 = uVar21 + 1;
              pbVar18 = (byte *)((ulonglong)(uVar25 >> 10) * lVar13 + lVar24);
              uVar25 = uVar25 + uVar15;
              *puVar26 = (char)((uint)pbVar18[lVar13] * (0x3ff - uVar19) + *pbVar18 * uVar19 >> 10);
              puVar26 = puVar26 + lVar14;
            } while (uVar21 < param_1[1]);
          }
        }
      }
    }
  }
  else if (iVar17 == 1) {
    puVar26 = *(undefined1 **)(param_1 + 6);
    lVar13 = *(longlong *)(param_2 + 6);
    param_3 = param_3 & 0xffefffff;
    if (0 < (int)param_3) {
      if ((int)param_3 < 3) {
        uVar19 = 0;
        uVar15 = uVar25 - 1 >> 2;
        if (uVar21 != 0) {
          do {
            uVar21 = uVar15 & 0x3ff;
            pbVar18 = (byte *)((ulonglong)((uVar15 >> 10) << 2) + lVar13);
            iVar17 = 0x3ff - uVar21;
            uVar19 = uVar19 + 1;
            uVar15 = uVar15 + uVar25;
            bVar1 = pbVar18[6];
            bVar2 = pbVar18[7];
            bVar3 = pbVar18[4];
            bVar4 = pbVar18[2];
            bVar5 = pbVar18[3];
            bVar6 = *pbVar18;
            puVar26[1] = (char)((uint)pbVar18[5] * iVar17 + pbVar18[1] * uVar21 >> 10);
            puVar26[2] = (char)((uint)bVar1 * iVar17 + bVar4 * uVar21 >> 10);
            puVar26[3] = (char)((uint)bVar2 * iVar17 + bVar5 * uVar21 >> 10);
            *puVar26 = (char)((uint)bVar3 * iVar17 + bVar6 * uVar21 >> 10);
            puVar26 = puVar26 + 4;
          } while (uVar19 < *param_1);
        }
      }
      else if ((param_3 == 9) || (param_3 - 200 < 2)) {
        uVar19 = 0;
        uVar15 = uVar25 - 1 >> 2;
        if (uVar21 != 0) {
          do {
            uVar21 = uVar15 >> 10;
            uVar16 = uVar15 & 0x3ff;
            uVar19 = uVar19 + 1;
            uVar15 = uVar15 + uVar25;
            *puVar26 = (char)((uint)*(byte *)((ulonglong)uVar21 + 1 + lVar13) * (0x3ff - uVar16) +
                              *(byte *)((ulonglong)uVar21 + lVar13) * uVar16 >> 10);
            puVar26 = puVar26 + 1;
          } while (uVar19 < *param_1);
        }
      }
    }
  }
  else {
    uVar16 = uVar15 - 1 >> 2;
    local_48 = 0;
    if (uVar19 != 0) {
      param_3 = param_3 & 0xffefffff;
      do {
        uVar19 = 0;
        puVar26 = (undefined1 *)((ulonglong)local_48 * lVar14 + *(longlong *)(param_1 + 6));
        lVar24 = (ulonglong)(uVar16 >> 10) * lVar13 + *(longlong *)(param_2 + 6);
        uVar20 = uVar16 & 0x3ff;
        iVar17 = 0x3ff - uVar20;
        if (0 < (int)param_3) {
          if ((int)param_3 < 3) {
            local_50 = 0;
            uVar19 = uVar25 - 1 >> 2;
            if (uVar21 != 0) {
              do {
                uVar21 = uVar19 & 0x3ff;
                iVar23 = 0x3ff - uVar21;
                pbVar18 = (byte *)((ulonglong)((uVar19 >> 10) << 2) + lVar24);
                bVar1 = pbVar18[lVar13 + 2];
                bVar2 = pbVar18[lVar13 + 3];
                bVar3 = pbVar18[lVar13 + 6];
                bVar4 = pbVar18[6];
                bVar5 = pbVar18[2];
                bVar6 = pbVar18[lVar13 + 7];
                bVar7 = pbVar18[7];
                bVar8 = pbVar18[3];
                bVar9 = pbVar18[lVar13 + 4];
                bVar10 = pbVar18[lVar13];
                bVar11 = pbVar18[4];
                bVar12 = *pbVar18;
                puVar26[1] = (char)((pbVar18[lVar13 + 1] * uVar21 +
                                    (uint)pbVar18[lVar13 + 5] * iVar23) * iVar17 +
                                    ((uint)pbVar18[5] * iVar23 + pbVar18[1] * uVar21) * uVar20 >>
                                   0x14);
                puVar26[2] = (char)((bVar1 * uVar21 + (uint)bVar3 * iVar23) * iVar17 +
                                    ((uint)bVar4 * iVar23 + bVar5 * uVar21) * uVar20 >> 0x14);
                puVar26[3] = (char)((bVar2 * uVar21 + (uint)bVar6 * iVar23) * iVar17 +
                                    ((uint)bVar7 * iVar23 + bVar8 * uVar21) * uVar20 >> 0x14);
                uVar19 = uVar19 + uVar25;
                *puVar26 = (char)(((uint)bVar9 * iVar23 + bVar10 * uVar21) * iVar17 +
                                  ((uint)bVar11 * iVar23 + bVar12 * uVar21) * uVar20 >> 0x14);
                uVar21 = *param_1;
                local_50 = local_50 + 1;
                puVar26 = puVar26 + 4;
              } while (local_50 < uVar21);
            }
          }
          else if (((param_3 == 9) || (param_3 - 200 < 2)) &&
                  (uVar22 = uVar25 - 1 >> 2, uVar21 != 0)) {
            do {
              pbVar18 = (byte *)((ulonglong)(uVar22 >> 10) + lVar24);
              uVar21 = uVar22 & 0x3ff;
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + uVar25;
              *puVar26 = (char)((pbVar18[lVar13] * uVar21 +
                                (uint)pbVar18[lVar13 + 1] * (0x3ff - uVar21)) * iVar17 +
                                ((uint)pbVar18[1] * (0x3ff - uVar21) + *pbVar18 * uVar21) * uVar20
                               >> 0x14);
              uVar21 = *param_1;
              puVar26 = puVar26 + 1;
            } while (uVar19 < uVar21);
          }
        }
        uVar16 = uVar16 + uVar15;
        local_48 = local_48 + 1;
      } while (local_48 < param_1[1]);
    }
  }
  return;
}



// FUNCTION 1432fa1f0 FUN_1432fa1f0 body=56 status=ok
// SIG undefined FUN_1432fa1f0(void)

undefined1 * FUN_1432fa1f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    puVar2 = &DAT_1467cdd40;
    iVar3 = DAT_1467cdd40;
    while (iVar3 != 0) {
      if ((iVar3 == param_2) && (puVar2[1] == param_1)) {
        return *(undefined1 **)(puVar2 + 2);
      }
      piVar1 = puVar2 + 4;
      puVar2 = puVar2 + 4;
      iVar3 = *piVar1;
    }
  }
  return &LAB_1432caa10;
}



// FUNCTION 1432fab40 FUN_1432fab40 body=81 status=ok
// SIG undefined FUN_1432fab40(void)

bool FUN_1432fab40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((DAT_146b644e0 == 0) && (DAT_146b744f8 == 0)) {
    FUN_14338d690();
    FUN_14338fa60(&DAT_146b631a0,param_1);
  }
  lVar1 = FUN_1432fad00(param_2);
  return lVar1 != 0;
}



// FUNCTION 1432faba0 shutdownHeapEngine body=84 status=ok
// SIG undefined shutdownHeapEngine(void)

undefined1 Scaleform::SysAllocPaged::shutdownHeapEngine(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1432fadc0();
  if ((DAT_146b644e0 != 0) && (DAT_146b744f8 != 0)) {
    FUN_14338fcf0();
    DAT_146b644e0 = 0;
    HeapPT::HeapRoot::~HeapRoot(DAT_146b744f8);
    DAT_146b744f8 = 0;
  }
  return uVar1;
}



// FUNCTION 1432fac00 FUN_1432fac00 body=60 status=ok
// SIG undefined FUN_1432fac00(void)

void FUN_1432fac00(undefined8 param_1)

{
  if ((DAT_146b644e0 == 0) && (DAT_146b744f8 == 0)) {
    FUN_14338d690();
    FUN_14338fa60(&DAT_146b631a0,param_1);
    return;
  }
  return;
}



// FUNCTION 1432fac50 FUN_1432fac50 body=70 status=ok
// SIG undefined FUN_1432fac50(void)

void FUN_1432fac50(void)

{
  if ((DAT_146b644e0 != 0) && (DAT_146b744f8 != 0)) {
    FUN_14338fcf0();
    DAT_146b644e0 = 0;
    Scaleform::HeapPT::HeapRoot::~HeapRoot(DAT_146b744f8);
    DAT_146b744f8 = 0;
  }
  return;
}



// FUNCTION 1432faca0 FUN_1432faca0 body=79 status=ok
// SIG undefined FUN_1432faca0(void)

void FUN_1432faca0(void)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_48[0] = 8;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  FUN_1432fad00(local_48);
  return;
}



// FUNCTION 1432fad00 FUN_1432fad00 body=175 status=ok
// SIG undefined FUN_1432fad00(void)

undefined8 FUN_1432fad00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_146b744f8 != 0) {
    lVar1 = DAT_146b744f8 + 0x888;
    Scaleform::Lock::DoLock(lVar1);
    if (DAT_146b62f28 == 0) {
      local_38 = param_1[2];
      uStack_30 = param_1[3];
      local_48 = *param_1;
      uStack_40 = param_1[1];
      uStack_10 = *(undefined4 *)(param_1 + 7);
      uStack_c = *(undefined4 *)((longlong)param_1 + 0x3c);
      local_28 = *(undefined4 *)(param_1 + 4);
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_20 = *(undefined4 *)(param_1 + 5);
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_18 = 1;
      DAT_146b62f28 = FUN_14338ff40(DAT_146b744f8,"Global",0,&local_48);
      Scaleform::Lock::DoLock(lVar1);
      return DAT_146b62f28;
    }
    Scaleform::Lock::DoLock(lVar1);
  }
  return 0;
}



// FUNCTION 1432fadc0 FUN_1432fadc0 body=129 status=ok
// SIG undefined FUN_1432fadc0(void)

bool FUN_1432fadc0(void)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  lVar1 = DAT_146b744f8;
  if (DAT_146b744f8 == 0) {
    return true;
  }
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  if (DAT_146b62f28 == (longlong *)0x0) {
    bVar3 = true;
  }
  else {
    cVar2 = (**(code **)(*DAT_146b62f28 + 0x100))();
    bVar3 = cVar2 == '\0';
    (**(code **)(*DAT_146b62f28 + 0xe8))();
    DAT_146b62f28 = (longlong *)0x0;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  return bVar3;
}



// FUNCTION 1432fae50 UMovieScene3DConstraintSection body=49 status=ok
// SIG undefined UMovieScene3DConstraintSection(void)

undefined8 * UMovieScene3DConstraintSection::UMovieScene3DConstraintSection(undefined8 *param_1)

{
  FUN_1432bdd30();
  *param_1 = &PTR_FUN_145af9c40;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1432faef0 FUN_1432faef0 body=185 status=ok
// SIG undefined FUN_1432faef0(void)

longlong FUN_1432faef0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_146b744f8;
  Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
  lVar2 = FUN_14338ff40(DAT_146b744f8,param_2,param_1,param_3);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x888);
  if (lVar2 != 0) {
    Scaleform::Lock::DoLock(param_1 + 0x98);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x88);
    *(longlong *)(lVar2 + 0x10) = param_1 + 0x80;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = lVar2;
    *(longlong *)(param_1 + 0x88) = lVar2;
    Scaleform::Lock::DoLock(param_1 + 0x98);
  }
  return lVar2;
}



// FUNCTION 1432fafb0 FUN_1432fafb0 body=74 status=ok
// SIG undefined FUN_1432fafb0(void)

void FUN_1432fafb0(longlong param_1,undefined8 param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x98);
  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x740) = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fb000 FUN_1432fb000 body=117 status=ok
// SIG undefined FUN_1432fb000(void)

void FUN_1432fb000(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  if (param_2 < *(ulonglong *)(param_1 + 0x60)) {
    uVar1 = USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
    if (param_2 < uVar1) {
      param_2 = USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
    }
  }
  uVar2 = FUN_143390780(*(undefined8 *)(param_1 + 0xd0),param_2);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fb080 AddRef body=57 status=ok
// SIG undefined AddRef(void)

void Scaleform::MemoryHeapPT::AddRef(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_146b744f8;
  Lock::DoLock(DAT_146b744f8 + 0x888);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  Lock::DoLock(lVar1 + 0x888);
  return;
}



// FUNCTION 1432fb0c0 FUN_1432fb0c0 body=259 status=ok
// SIG undefined FUN_1432fb0c0(void)

void FUN_1432fb0c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = DAT_146b744f8;
  plVar4 = (longlong *)param_1[0xf];
  if (plVar4 == (longlong *)0x0) {
    Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
    Scaleform::Lock::DoLock(lVar3 + 0x888);
  }
  else {
    plVar2 = plVar4 + 0x13;
    Scaleform::Lock::DoLock(plVar2);
    lVar3 = DAT_146b744f8;
    Scaleform::Lock::DoLock(DAT_146b744f8 + 0x888);
    plVar1 = param_1 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_1 + 0x100))(param_1);
      *(longlong *)(param_1[1] + 0x10) = param_1[2];
      *(longlong *)(param_1[2] + 8) = param_1[1];
      param_1[1] = -1;
      param_1[2] = -1;
      FUN_143390160(DAT_146b744f8,param_1);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    Scaleform::Lock::DoLock(lVar3 + 0x888);
    Scaleform::Lock::DoLock(plVar2);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fb18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x40))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1432fb1d0 Alloc body=112 status=ok
// SIG undefined Alloc(void)

undefined8 Scaleform::MemoryHeapPT::Alloc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 200) != '\0') {
    Lock::DoLock(param_1 + 0x98);
    uVar1 = FUN_143390910(*(undefined8 *)(param_1 + 0xd0),param_2);
    Lock::DoLock(param_1 + 0x98);
    return uVar1;
  }
  uVar1 = FUN_143390910(*(undefined8 *)(param_1 + 0xd0));
  return uVar1;
}



// FUNCTION 1432fb250 Alloc body=133 status=ok
// SIG undefined Alloc(void)

undefined8 Scaleform::MemoryHeapPT::Alloc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 200) != '\0') {
    Lock::DoLock(param_1 + 0x98);
    uVar1 = FUN_1433909d0(*(undefined8 *)(param_1 + 0xd0),param_2,param_3);
    Lock::DoLock(param_1 + 0x98);
    return uVar1;
  }
  uVar1 = FUN_1433909d0(*(undefined8 *)(param_1 + 0xd0));
  return uVar1;
}



// FUNCTION 1432fb2e0 FUN_1432fb2e0 body=238 status=ok
// SIG undefined FUN_1432fb2e0(void)

undefined8 FUN_1432fb2e0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
               (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
             (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8);
  lVar2 = *(longlong *)(lVar1 + 0x28);
  if (*(char *)(lVar2 + 200) == '\0') {
    uVar3 = FUN_143390ad0(*(undefined8 *)(lVar2 + 0xd0),lVar1,param_2,param_3);
  }
  else {
    Scaleform::Lock::DoLock(lVar2 + 0x98);
    uVar3 = FUN_143390ad0(*(undefined8 *)(lVar2 + 0xd0),lVar1,param_2,param_3);
    Scaleform::Lock::DoLock(lVar2 + 0x98);
  }
  return uVar3;
}



// FUNCTION 1432fb3e0 FUN_1432fb3e0 body=235 status=ok
// SIG undefined FUN_1432fb3e0(void)

void FUN_1432fb3e0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                   (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
               (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8);
    plVar2 = *(longlong **)(lVar1 + 0x28);
    if ((char)plVar2[0x19] == '\0') {
      FUN_143390bf0(plVar2[0x1a],lVar1,param_2);
    }
    else {
      Scaleform::Lock::DoLock(plVar2 + 0x13);
      FUN_143390bf0(plVar2[0x1a],lVar1,param_2);
      Scaleform::Lock::DoLock(plVar2 + 0x13);
    }
    if (param_2 == plVar2[6]) {
      (**(code **)(*plVar2 + 0x40))(plVar2);
    }
  }
  return;
}



// FUNCTION 1432fb4e0 FUN_1432fb4e0 body=212 status=ok
// SIG undefined FUN_1432fb4e0(void)

undefined8 FUN_1432fb4e0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                   (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
               (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8) + 0x28);
  if (*(char *)(lVar1 + 200) != '\0') {
    Scaleform::Lock::DoLock(lVar1 + 0x98);
    uVar2 = FUN_143390910(*(undefined8 *)(lVar1 + 0xd0),param_3);
    Scaleform::Lock::DoLock(lVar1 + 0x98);
    return uVar2;
  }
  uVar2 = FUN_143390910(*(undefined8 *)(lVar1 + 0xd0),param_3);
  return uVar2;
}



// FUNCTION 1432fb5c0 FUN_1432fb5c0 body=236 status=ok
// SIG undefined FUN_1432fb5c0(void)

undefined8 FUN_1432fb5c0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                   (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
               (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8) + 0x28);
  if (*(char *)(lVar1 + 200) != '\0') {
    Scaleform::Lock::DoLock(lVar1 + 0x98);
    uVar2 = FUN_1433909d0(*(undefined8 *)(lVar1 + 0xd0),param_3,param_4);
    Scaleform::Lock::DoLock(lVar1 + 0x98);
    return uVar2;
  }
  uVar2 = FUN_1433909d0(*(undefined8 *)(lVar1 + 0xd0),param_3,param_4);
  return uVar2;
}



// FUNCTION 1432fb740 FUN_1432fb740 body=230 status=ok
// SIG undefined FUN_1432fb740(void)

undefined8 FUN_1432fb740(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(DAT_146b644e0 + 8 + (param_2 >> 0x34) * 0x10) +
                 (ulonglong)((uint)(param_2 >> 0x28) & 0xfff) * 0x10) +
               (ulonglong)((uint)(param_2 >> 0x1c) & 0xfff) * 0x10) +
             (param_2 >> 0x14 & 0xff) * 0x10) + (param_2 >> 0xc & 0xff) * 8);
  lVar2 = *(longlong *)(lVar1 + 0x28);
  if (*(char *)(lVar2 + 200) != '\0') {
    Scaleform::Lock::DoLock(lVar2 + 0x98);
    uVar3 = Scaleform::HeapPT::AllocEngine::GetUsableSize
                      (*(undefined8 *)(lVar2 + 0xd0),lVar1,param_2);
    Scaleform::Lock::DoLock(lVar2 + 0x98);
    return uVar3;
  }
  uVar3 = Scaleform::HeapPT::AllocEngine::GetUsableSize(*(undefined8 *)(lVar2 + 0xd0),lVar1,param_2)
  ;
  return uVar3;
}



// FUNCTION 1432fb870 FUN_1432fb870 body=170 status=ok
// SIG undefined FUN_1432fb870(void)

undefined8 FUN_1432fb870(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_28 [8];
  longlong local_20;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
  FUN_143390eb0(*(undefined8 *)(param_1 + 0xd0));
  FUN_1433911b0(*(undefined8 *)(param_1 + 0xd0),local_28);
  local_20 = local_20 + *(longlong *)(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar1 = (longlong *)0x0;
  }
  for (; plVar2 != plVar1; plVar2 = (longlong *)plVar2[2]) {
    if ((*(uint *)(plVar2 + 7) & 0x1000) == 0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return 1;
}



// FUNCTION 1432fb920 FUN_1432fb920 body=65 status=ok
// SIG undefined FUN_1432fb920(void)

undefined8 FUN_1432fb920(longlong param_1)

{
  undefined8 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  uVar1 = USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return uVar1;
}



// FUNCTION 1432fb970 FUN_1432fb970 body=163 status=ok
// SIG undefined FUN_1432fb970(void)

longlong * FUN_1432fb970(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  plVar1 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0x38) & 0x1000) == 0) {
    plVar1 = (longlong *)USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar3 = (longlong *)0x0;
  }
  for (; plVar4 != plVar3; plVar4 = (longlong *)plVar4[2]) {
    lVar2 = (**(code **)(*plVar4 + 0xa8))(plVar4);
    plVar1 = (longlong *)((longlong)plVar1 + lVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return plVar1;
}



// FUNCTION 1432fba20 FUN_1432fba20 body=65 status=ok
// SIG undefined FUN_1432fba20(void)

undefined8 FUN_1432fba20(longlong param_1)

{
  undefined8 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  uVar1 = FUN_143390eb0(*(undefined8 *)(param_1 + 0xd0));
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return uVar1;
}



// FUNCTION 1432fba70 FUN_1432fba70 body=163 status=ok
// SIG undefined FUN_1432fba70(void)

longlong * FUN_1432fba70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  plVar1 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0x38) & 0x1000) == 0) {
    plVar1 = (longlong *)FUN_143390eb0(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar3 = (longlong *)0x0;
  }
  for (; plVar4 != plVar3; plVar4 = (longlong *)plVar4[2]) {
    lVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4);
    plVar1 = (longlong *)((longlong)plVar1 + lVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return plVar1;
}



// FUNCTION 1432fbb20 GetRootStats body=56 status=ok
// SIG undefined GetRootStats(void)

void Scaleform::MemoryHeapPT::GetRootStats(undefined8 param_1,longlong param_2)

{
  FUN_143390340(DAT_146b744f8);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001432fbb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x110))(DAT_146b62f28,param_2);
  return;
}



// FUNCTION 1432fbb60 FUN_1432fbb60 body=91 status=ok
// SIG undefined FUN_1432fbb60(void)

void FUN_1432fbb60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  Scaleform::Lock::DoLock(param_1 + 0x98);
  FUN_143390f50(*(undefined8 *)(param_1 + 0xd0),param_2,param_3);
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fbbf0 FUN_1432fbbf0 body=75 status=ok
// SIG undefined FUN_1432fbbf0(void)

void FUN_1432fbbf0(longlong param_1,undefined8 param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x98);
  FUN_143391110(*(undefined8 *)(param_1 + 0xd0),param_2);
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fbc60 FUN_1432fbc60 body=101 status=ok
// SIG undefined FUN_1432fbc60(void)

void FUN_1432fbc60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar3 = (longlong *)0x0;
  }
  while (plVar2 != plVar3) {
    lVar1 = *plVar2;
    plVar2 = (longlong *)plVar2[2];
    (**(code **)(lVar1 + 0xe8))();
  }
  FUN_143390160(DAT_146b744f8,param_1);
  return;
}



// FUNCTION 1432fbce0 FUN_1432fbce0 body=131 status=ok
// SIG undefined FUN_1432fbce0(void)

void FUN_1432fbce0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  Scaleform::Lock::DoLock();
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar1 = (longlong *)0x0;
  }
  for (; plVar2 != plVar1; plVar2 = (longlong *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xf8))(plVar2);
  }
  FUN_143390ee0(*(undefined8 *)(param_1 + 0xd0));
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fbd80 FUN_1432fbd80 body=126 status=ok
// SIG undefined FUN_1432fbd80(void)

void FUN_1432fbd80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  FUN_14338f130(*(longlong *)(param_1 + 0xd0) + 0x30,
                *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x28));
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar1 = (longlong *)0x0;
  }
  for (; plVar2 != plVar1; plVar2 = (longlong *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x108))(plVar2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fbe10 FUN_1432fbe10 body=166 status=ok
// SIG undefined FUN_1432fbe10(void)

void FUN_1432fbe10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  Scaleform::Lock::DoLock();
  if ((*(uint *)(param_1 + 0x38) & 0x1000) != 0) {
    lVar1 = USkinnedMeshComponent::GetRefPoseOverride(*(undefined8 *)(param_1 + 0xd0));
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + lVar1;
    lVar1 = FUN_143390eb0();
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1;
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (param_1 == -0x88) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar3 != plVar2; plVar3 = (longlong *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x110))(plVar3,param_2);
  }
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432fbec0 FUN_1432fbec0 body=111 status=ok
// SIG undefined FUN_1432fbec0(void)

void FUN_1432fbec0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    if (param_3 == -1) {
      param_3 = Scaleform::SFwcslen(param_2);
    }
    FUN_1433924d0(*(undefined8 *)(param_1 + 8),param_3 + 1);
    FUN_14331b340(**(undefined8 **)(param_1 + 8),param_3 + 1,param_2,param_3);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  }
  return;
}



// FUNCTION 1432fbf40 FUN_1432fbf40 body=132 status=ok
// SIG undefined FUN_1432fbf40(void)

void FUN_1432fbf40(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 == -1) {
      param_3 = -1;
      do {
        param_3 = param_3 + 1;
      } while (*(char *)(param_2 + param_3) != '\0');
    }
    iVar1 = FUN_143305cd0(param_2,0xffffffffffffffff);
    FUN_1433924d0(*(undefined8 *)(param_1 + 8),(longlong)(iVar1 + 1));
    FUN_143306bc0(**(undefined8 **)(param_1 + 8),(longlong)(iVar1 + 1),param_2,param_3);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  }
  return;
}



// FUNCTION 1432fbfd0 FUN_1432fbfd0 body=284 status=ok
// SIG undefined FUN_1432fbfd0(void)

undefined8 FUN_1432fbfd0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  if (((uVar1 & 7) != 0) && (param_2[4] != 0)) {
    lVar5 = FUN_143392930(uVar1,param_2[8],*param_2,param_2[1],param_2[3],param_2[4]);
    if (lVar5 == -1) {
      return 0;
    }
    param_2[8] = lVar5;
    return 1;
  }
  if (((uVar1 & 8) != 0) && (uVar2 = param_2[8], uVar2 != 0)) {
    uVar8 = param_2[4];
    lVar5 = *param_2 + param_2[3] * 2;
    iVar4 = FUN_143301000(*(undefined2 *)(lVar5 + -2 + uVar2 * 2));
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = uVar2;
    }
    if (uVar6 < uVar8) {
      puVar7 = (undefined2 *)(lVar5 + (uVar8 - 1) * 2);
      do {
        sVar3 = FUN_14331b480(*puVar7);
        if ((((ushort)(sVar3 - 0x61U) < 0x15) &&
            ((0x104111U >> ((ushort)(sVar3 - 0x61U) & 0x1f) & 1) != 0)) &&
           (*(float *)(param_2[2] + -4 + uVar8 * 4) + *(float *)((longlong)param_2 + 0x34) <
            *(float *)(param_2 + 5))) {
          param_2[8] = uVar8;
          *(undefined1 *)(param_2 + 9) = 1;
          return 1;
        }
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + -1;
      } while (uVar6 < uVar8);
    }
  }
  return 0;
}



// FUNCTION 1432fc100 FUN_1432fc100 body=980 status=ok
// SIG undefined FUN_1432fc100(void)

char FUN_1432fc100(undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char local_res18;
  
  uVar9 = 0;
  uVar11 = param_3 - 1;
  cVar14 = '\0';
  bVar5 = false;
  if (param_3 == 0) {
    return '\0';
  }
  do {
    uVar1 = *(ushort *)(param_2 + uVar9 * 2);
    uVar2 = *(ushort *)(&DAT_145aff8c0 + (ulonglong)(uVar1 >> 8) * 2);
    if (uVar2 == 0) {
      bVar16 = false;
LAB_1432fc1aa:
      local_res18 = '\0';
      if (cVar14 != '\0') goto LAB_1432fc1b4;
    }
    else {
      if (uVar2 == 1) {
        bVar16 = true;
      }
      else {
        bVar16 = (*(ushort *)(&DAT_145aff8c0 + (ulonglong)((uVar1 >> 4 & 0xf) + (uint)uVar2) * 2) >>
                  (uVar1 & 0xf) & 1) != 0;
        if (!bVar16) goto LAB_1432fc1aa;
      }
LAB_1432fc1b4:
      local_res18 = '\x01';
    }
    uVar2 = *(ushort *)(&DAT_145aff1e0 + (ulonglong)(uVar1 >> 8) * 2);
    if (uVar2 == 0) {
      bVar17 = false;
    }
    else if (uVar2 == 1) {
      bVar17 = true;
    }
    else {
      bVar17 = (*(ushort *)(&DAT_145aff1e0 + (ulonglong)((uint)uVar2 + (uVar1 >> 4 & 0xf)) * 2) >>
                (uVar1 & 0xf) & 1) != 0;
    }
    uVar15 = uVar9 + 1;
    bVar18 = bVar16;
    if (uVar15 < param_3) {
      uVar2 = *(ushort *)(param_2 + 2 + uVar9 * 2);
      uVar3 = *(ushort *)(&DAT_145aff8c0 + (ulonglong)(uVar2 >> 8) * 2);
      if (uVar3 == 0) {
        bVar18 = false;
      }
      else if (uVar3 == 1) {
        bVar18 = true;
      }
      else {
        bVar18 = (*(ushort *)(&DAT_145aff8c0 + (ulonglong)((uint)uVar3 + (uVar2 >> 4 & 0xf)) * 2) >>
                  (uVar2 & 0xf) & 1) != 0;
      }
    }
    if ((bVar16) || (bVar17)) {
      if (((bVar5) || (bVar18)) && (bVar17)) {
        switch(uVar1) {
        case 0x28:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x29;
          break;
        case 0x29:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x28;
          break;
        default:
          goto switchD_1432fc413_caseD_2a;
        case 0x3c:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x3e;
          break;
        case 0x3e:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x3c;
          break;
        case 0x5b:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x5d;
          break;
        case 0x5d:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x5b;
          break;
        case 0x7b:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x7d;
          break;
        case 0x7d:
          *(undefined2 *)(param_4 + uVar11 * 2) = 0x7b;
        }
      }
      else {
switchD_1432fc413_caseD_2a:
        *(ushort *)(param_4 + uVar11 * 2) = uVar1;
      }
      *(int *)(param_5 + uVar11 * 4) = (int)uVar9;
      *(undefined1 *)(uVar11 + param_6) = 0;
      uVar13 = uVar11 - 1;
      uVar9 = uVar15;
    }
    else {
      lVar8 = 1;
      lVar12 = 0;
      while (uVar15 < param_3) {
        uVar1 = *(ushort *)(param_2 + uVar15 * 2);
        lVar4 = (ulonglong)(uVar1 >> 8) * 2;
        uVar2 = *(ushort *)(&DAT_145aff8c0 + lVar4);
        if ((uVar2 != 0) &&
           ((uVar2 == 1 ||
            ((*(ushort *)(&DAT_145aff8c0 + (ulonglong)((uint)uVar2 + (uVar1 >> 4 & 0xf)) * 2) >>
              (uVar1 & 0xf) & 1) != 0)))) break;
        uVar2 = *(ushort *)(&DAT_145aff1e0 + lVar4);
        if (uVar2 == 0) {
          bVar18 = false;
        }
        else if (uVar2 == 1) {
          bVar18 = true;
        }
        else {
          bVar18 = (*(ushort *)(&DAT_145aff1e0 + (ulonglong)((uint)uVar2 + (uVar1 >> 4 & 0xf)) * 2)
                    >> (uVar1 & 0xf) & 1) != 0;
        }
        uVar15 = uVar15 + 1;
        lVar8 = lVar8 + 1;
        lVar12 = lVar12 + 1;
        if (!bVar18) {
          lVar12 = 0;
        }
      }
      uVar13 = (lVar12 - lVar8) + uVar11;
      uVar15 = uVar13 + 1;
      if (uVar15 <= uVar11) {
        puVar10 = (undefined2 *)(param_4 + uVar15 * 2);
        puVar6 = (undefined1 *)(param_6 + uVar15);
        lVar12 = (uVar11 - uVar15) + 1;
        puVar7 = (undefined4 *)(param_5 + uVar15 * 4);
        do {
          *puVar10 = *(undefined2 *)(param_2 + uVar9 * 2);
          puVar10 = puVar10 + 1;
          *puVar7 = (int)uVar9;
          uVar9 = uVar9 + 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
          lVar12 = lVar12 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar12 != 0);
      }
    }
    if (bVar17) {
      bVar16 = bVar5;
    }
    uVar11 = uVar13;
    cVar14 = local_res18;
    bVar5 = bVar16;
    if (param_3 <= uVar9) {
      return local_res18;
    }
  } while( true );
}



// FUNCTION 1432fc560 FUN_1432fc560 body=216 status=ok
// SIG undefined FUN_1432fc560(void)

void FUN_1432fc560(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined4 param_6,longlong *param_7)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  *(undefined2 *)(param_1 + 6) = param_2;
  *param_1 = param_3;
  puVar2 = &DAT_145af3922;
  if (param_5 != (undefined1 *)0x0) {
    puVar2 = param_5;
  }
  Scaleform::String::operator=(param_1 + 8,puVar2);
  puVar2 = &DAT_145af3922;
  if (param_4 != (undefined1 *)0x0) {
    puVar2 = param_4;
  }
  Scaleform::String::operator=(param_1 + 10,puVar2);
  *(ulonglong *)(param_1 + 4) = (*(ulonglong *)(param_1 + 10) & 0xfffffffffffffffc) + 0xc;
  *(ulonglong *)(param_1 + 2) = (*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffc) + 0xc;
  param_1[7] = param_6;
  if (param_7 == (longlong *)0x0) {
    Scaleform::
    ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
    ::Clear(param_1 + 0xc);
  }
  else {
    FUN_143300f80(param_1 + 0xc,param_7[1]);
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0xe) != 0) {
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xc) + uVar1 * 4) =
             *(undefined4 *)(*param_7 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulonglong *)(param_1 + 0xe));
    }
  }
  return;
}



// FUNCTION 1432fc640 FUN_1432fc640 body=1009 status=ok
// SIG undefined FUN_1432fc640(void)

void FUN_1432fc640(uint *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint local_74;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar14 = 0;
  local_74 = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 2) {
    FUN_143396c40(param_2,2);
  }
  uVar16 = *(uint *)(param_2 + 0x4c);
  uVar2 = *(undefined1 *)((ulonglong)(uVar16 + 1) + *(longlong *)(param_2 + 0x60));
  uVar3 = *(undefined1 *)((ulonglong)uVar16 + *(longlong *)(param_2 + 0x60));
  uVar20 = CONCAT11(uVar2,uVar3);
  *(uint *)(param_2 + 0x4c) = uVar16 + 2;
  if (0x109 < uVar20) {
    local_74 = FUN_143300e60(param_2);
  }
  *(undefined1 *)(param_2 + 0x29) = 0;
  if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 2) {
    FUN_143396c40(param_2,2);
  }
  uVar16 = *(uint *)(param_2 + 0x4c);
  uVar4 = *(undefined1 *)((ulonglong)(uVar16 + 1) + *(longlong *)(param_2 + 0x60));
  uVar5 = *(undefined1 *)((ulonglong)uVar16 + *(longlong *)(param_2 + 0x60));
  *(uint *)(param_2 + 0x4c) = uVar16 + 2;
  FUN_1432c2f70(&local_68);
  FUN_1432c2f70(&local_70);
  FUN_143396040(param_2,&local_68);
  FUN_143396040(param_2,&local_70);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar19 = uVar14;
  uVar23 = uVar14;
  if (0x400 < uVar20) {
    *(undefined1 *)(param_2 + 0x29) = 0;
    if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 2) {
      FUN_143396c40(param_2,2);
    }
    uVar16 = *(uint *)(param_2 + 0x4c);
    uVar18 = CONCAT11(*(undefined1 *)((ulonglong)(uVar16 + 1) + *(longlong *)(param_2 + 0x60)),
                      *(undefined1 *)((ulonglong)uVar16 + *(longlong *)(param_2 + 0x60)));
    *(uint *)(param_2 + 0x4c) = uVar16 + 2;
    if (uVar18 != 0) {
      uVar21 = (ulonglong)uVar18;
      uVar15 = uVar14;
      uVar22 = uVar14;
      do {
        *(undefined1 *)(param_2 + 0x29) = 0;
        if (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) < 4) {
          FUN_143396c40(param_2,4);
        }
        uVar16 = *(uint *)(param_2 + 0x4c);
        uVar23 = uVar22 + 1;
        lVar10 = *(longlong *)(param_2 + 0x60);
        uVar6 = *(undefined1 *)((ulonglong)(uVar16 + 3) + lVar10);
        uVar7 = *(undefined1 *)((ulonglong)(uVar16 + 2) + lVar10);
        uVar8 = *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar10);
        uVar9 = *(undefined1 *)((ulonglong)uVar16 + lVar10);
        *(uint *)(param_2 + 0x4c) = uVar16 + 4;
        if (uVar23 < uVar22) {
          uVar17 = uVar23;
          if (uVar23 < uVar15 >> 1) {
LAB_1432fc82f:
            FUN_143300ed0(&local_60,&local_60,uVar17);
            uVar19 = local_60;
            uVar15 = local_50;
          }
        }
        else if (uVar15 < uVar23) {
          uVar17 = (uVar23 >> 2) + uVar23;
          goto LAB_1432fc82f;
        }
        puVar1 = (undefined4 *)(uVar19 + uVar22 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9);
        }
        uVar21 = uVar21 - 1;
        uVar22 = uVar23;
        local_58 = uVar23;
      } while (uVar21 != 0);
    }
  }
  uVar16 = (uint)CONCAT11(uVar4,uVar5);
  FUN_143300df0(param_2,
                "  ExportInfo: tagType = %d, tool ver = %d.%d, imgfmt = %d, prefix = \'%s\', swfname = \'%s\', flags = 0x%X\n"
                ,param_3,uVar2,uVar3,uVar16,(local_68 & 0xfffffffffffffffc) + 0xc,
                (local_70 & 0xfffffffffffffffc) + 0xc,local_74);
  uVar15 = local_70 & 0xfffffffffffffffc;
  *param_1 = uVar16;
  puVar12 = (undefined1 *)((local_68 & 0xfffffffffffffffc) + 0xc);
  *(ushort *)(param_1 + 6) = uVar20;
  puVar13 = &DAT_145af3922;
  if (puVar12 != (undefined1 *)0x0) {
    puVar13 = puVar12;
  }
  Scaleform::String::operator=(param_1 + 8,puVar13);
  puVar12 = (undefined1 *)(uVar15 + 0xc);
  puVar13 = &DAT_145af3922;
  if (puVar12 != (undefined1 *)0x0) {
    puVar13 = puVar12;
  }
  Scaleform::String::operator=(param_1 + 10,puVar13);
  *(ulonglong *)(param_1 + 4) = (*(ulonglong *)(param_1 + 10) & 0xfffffffffffffffc) + 0xc;
  *(ulonglong *)(param_1 + 2) = (*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffc) + 0xc;
  param_1[7] = local_74;
  if (uVar23 < *(ulonglong *)(param_1 + 0xe)) {
    uVar15 = uVar23;
    if (*(ulonglong *)(param_1 + 0x10) >> 1 <= uVar23) goto LAB_1432fc98c;
  }
  else {
    if (uVar23 <= *(ulonglong *)(param_1 + 0x10)) goto LAB_1432fc98c;
    uVar15 = (uVar23 >> 2) + uVar23;
  }
  FUN_143300ed0(param_1 + 0xc,param_1 + 0xc,uVar15);
LAB_1432fc98c:
  *(ulonglong *)(param_1 + 0xe) = uVar23;
  if (uVar23 != 0) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xc) + uVar14 * 4) =
           *(undefined4 *)(uVar19 + uVar14 * 4);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulonglong *)(param_1 + 0xe));
  }
  if (uVar19 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar19);
  }
  iVar11 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                     ((local_70 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar11 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_70 & 0xfffffffffffffffc);
  }
  iVar11 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                     ((local_68 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar11 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432fca40 FUN_1432fca40 body=1117 status=ok
// SIG undefined FUN_1432fca40(void)

ulonglong FUN_1432fca40(longlong param_1,RefCountImpl *param_2,longlong param_3,longlong *param_4,
                       longlong *param_5,longlong param_6,char param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  RefCountImpl *pRVar9;
  longlong lVar10;
  uint uVar11;
  int local_res8 [2];
  uint local_res10 [2];
  int local_38;
  uint local_34;
  
  uVar5 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
  *(undefined4 *)(param_1 + 0x270) = uVar5;
  local_res10[0] = 0;
  (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_res10,4);
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_res8,4);
  *(int *)(param_1 + 0x280) = local_res8[0];
  *(int *)(param_1 + 0x274) = local_res8[0] + *(int *)(param_1 + 0x270);
  uVar11 = local_res10[0] & 0xff;
  *(uint *)(param_1 + 0x284) = local_res10[0] >> 0x18;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if ((uVar11 == 0x43) || (uVar11 == 0x5a)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  *(undefined2 *)(param_1 + 0x300) = 0;
  uVar6 = local_res10[0] & 0xffffff;
  uVar8 = (ulonglong)uVar6;
  if ((((0x17 < uVar6 - 0x535743) || ((0x800009U >> (uVar6 - 0x535743 & 0x1f) & 1) == 0)) &&
      (uVar6 != 0x584647)) && (uVar6 != 0x584643)) {
    if (param_3 != 0) {
      uVar8 = FUN_143300d50(param_3 + 0x18,
                            "Loader read failed - file does not start with a SWF header");
    }
    return uVar8 & 0xffffffffffffff00;
  }
  if ((local_res10[0] & 0xff0000) == 0x580000) {
    *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 0x10;
  }
  if (bVar3) {
    if (uVar11 == 0x43) {
      *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 1;
    }
    else {
      *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) | 2;
    }
  }
  if (((param_3 == 0) || (param_6 == 0)) || ((*(byte *)(param_6 + 0x18) & 1) == 0)) {
    param_7 = '\0';
  }
  if ((param_3 != 0) && (param_7 != '\0')) {
    local_res8[0] = 0x5000;
    FUN_1432e0850(param_3,local_res8,"SWF File version = %d, File length = %d\n",
                  *(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x280));
    if (bVar3) {
      local_res8[0] = 0x5000;
      FUN_1432e0850(param_3,local_res8,"SWF file is compressed.\n");
    }
  }
  Scaleform::RefCountImpl::AddRef(param_2);
  if (uVar11 == 0x43) {
    if (param_4 != (longlong *)0x0) {
      lVar10 = *param_4;
LAB_1432fcc3a:
      pRVar9 = (RefCountImpl *)(**(code **)(lVar10 + 8))(param_4,param_2);
      Scaleform::RefCountImpl::Release(param_2);
      *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x280) + -8;
      param_2 = pRVar9;
LAB_1432fcc5d:
      lVar10 = *(longlong *)(param_3 + 0x20);
      if (lVar10 == 0) {
        lVar10 = Scaleform::Log::GetGlobalLog();
      }
      FUN_1433957e0(param_1,param_2,lVar10,param_6);
      FUN_143396900(param_1,param_1 + 0x290);
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
        FUN_143396c40(param_1,2);
      }
      uVar11 = *(uint *)(param_1 + 0x4c);
      uVar1 = *(undefined1 *)((ulonglong)(uVar11 + 1) + *(longlong *)(param_1 + 0x60));
      uVar2 = *(undefined1 *)((ulonglong)uVar11 + *(longlong *)(param_1 + 0x60));
      *(uint *)(param_1 + 0x4c) = uVar11 + 2;
      *(float *)(param_1 + 0x2a0) = (float)CONCAT11(uVar1,uVar2) * 0.00390625;
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
        FUN_143396c40(param_1,2);
      }
      uVar11 = *(uint *)(param_1 + 0x4c);
      uVar1 = *(undefined1 *)((ulonglong)(uVar11 + 1) + *(longlong *)(param_1 + 0x60));
      uVar2 = *(undefined1 *)((ulonglong)uVar11 + *(longlong *)(param_1 + 0x60));
      *(uint *)(param_1 + 0x4c) = uVar11 + 2;
      *(uint *)(param_1 + 0x2a4) = (uint)CONCAT11(uVar1,uVar2);
      if ((*(uint *)(param_1 + 0x2a8) >> 4 & 1) == 0) {
        if ((8 < *(int *)(param_1 + 0x284)) &&
           ((uint)((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c))
            < *(uint *)(param_1 + 0x274))) {
          iVar7 = FUN_143395db0(param_1,&local_38);
          if (iVar7 == 0x45) {
            uVar4 = FUN_143300e10(param_1);
            *(undefined2 *)(param_1 + 0x300) = uVar4;
          }
          FUN_143395ea0(param_1);
          goto LAB_1432fce68;
        }
      }
      else {
        if ((uint)((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) + *(int *)(param_1 + 0x4c))
            < *(uint *)(param_1 + 0x274)) {
          iVar7 = FUN_143395d00(param_1);
          if (iVar7 != 1000) {
            FUN_143300d50(param_3 + 0x18,
                          "Loader read failed - no mExporterInfo tag in GFX file header");
            goto LAB_1432fce1c;
          }
          FUN_1432fc640(param_1 + 0x2b0,param_1,1000);
          FUN_143395ea0(param_1);
        }
        if ((8 < *(int *)(param_1 + 0x284)) &&
           (uVar11 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) +
                     *(int *)(param_1 + 0x4c), uVar11 < *(uint *)(param_1 + 0x274))) {
          iVar7 = FUN_143395db0(param_1,&local_38);
          while (999 < iVar7) {
            FUN_143395ea0(param_1);
            iVar7 = FUN_143395db0(param_1,&local_38);
          }
          if (local_38 == 0x45) {
            uVar4 = FUN_143300e10(param_1);
            *(undefined2 *)(param_1 + 0x300) = uVar4;
          }
          FUN_143395ea0(param_1);
          local_34 = uVar11;
LAB_1432fce68:
          FUN_143395c80(param_1,local_34);
        }
      }
      uVar8 = 1;
      goto LAB_1432fce73;
    }
    if (param_3 != 0) {
      FUN_143300d50(param_3 + 0x18,
                    "Loader - unable to read compressed SWF data; GFxZlibState is not set.");
      uVar8 = 0;
      goto LAB_1432fce73;
    }
  }
  else {
    if (uVar11 != 0x5a) goto LAB_1432fcc5d;
    if (param_5 != (longlong *)0x0) {
      lVar10 = *param_5;
      param_4 = param_5;
      goto LAB_1432fcc3a;
    }
    if (param_3 != 0) {
      FUN_143300d50(param_3 + 0x18,
                    "Loader - unable to read compressed SWF data; GFxLZMAState is not set.");
      uVar8 = 0;
      goto LAB_1432fce73;
    }
  }
LAB_1432fce1c:
  uVar8 = 0;
LAB_1432fce73:
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
  }
  return uVar8;
}



// FUNCTION 1432fceb0 FUN_1432fceb0 body=113 status=ok
// SIG undefined FUN_1432fceb0(void)

undefined8 * FUN_1432fceb0(undefined8 *param_1,RefCountImpl *param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = &PTR_FUN_145af9d70;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  FUN_1432ff4d0(*(undefined8 *)(param_2 + 0x68),param_1);
  return param_1;
}



// FUNCTION 1432fcf30 FUN_1432fcf30 body=72 status=ok
// SIG undefined FUN_1432fcf30(void)

void FUN_1432fcf30(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9d70;
  FUN_1432ff560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),param_1);
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432fcf80 FUN_1432fcf80 body=571 status=ok
// SIG undefined FUN_1432fcf80(void)

longlong FUN_1432fcf80(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong local_res8;
  int local_38 [2];
  RefCountImpl *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = 0;
  local_38[0] = 0;
  local_30 = (RefCountImpl *)0x0;
  FUN_143310ea0(&local_28,param_2,uVar1);
  iVar2 = FUN_1432dee30(*(undefined8 *)(param_1 + 0x60),local_38,&local_28);
  if (iVar2 != 3) {
    lVar4 = FUN_1432dea40(local_38);
    if ((lVar4 == 0) && (lVar4 = 0, *(longlong *)(param_1 + 0x18) != 0)) {
      if (local_38[0] < 2) {
        puVar6 = &DAT_145af3922;
      }
      else {
        puVar6 = (undefined1 *)Scaleform::GFx::ResourceLib::ResourceSlot::GetError(local_30);
      }
      FUN_143300d50(*(longlong *)(param_1 + 0x18) + 0x18,&DAT_145afa01c,puVar6);
    }
    goto LAB_1432fd119;
  }
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x78,0);
  lVar4 = lVar7;
  if (lVar3 != 0) {
    lVar4 = FUN_143310770(lVar3,param_2,uVar1,*(longlong *)(param_1 + 0x68),param_3,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x20),DAT_146b62f28,0,
                          param_7);
  }
  if (param_4 == (longlong *)0x0) {
LAB_1432fd104:
    if (lVar4 != 0) {
      FUN_1432de8f0(local_30,lVar4);
      goto LAB_1432fd119;
    }
  }
  else {
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x60);
    lVar3 = lVar7;
    if (lVar5 != 0) {
      lVar3 = FUN_143312550(lVar5,param_1,lVar4,param_6);
    }
    *param_4 = lVar3;
    if (lVar3 != 0) goto LAB_1432fd104;
    if (lVar4 != 0) {
      FUN_1432de450(lVar4);
    }
  }
  FUN_1432c3060(&local_res8,"Failed to bind SWF file \"",
                (*(ulonglong *)(*(longlong *)(param_2 + 0x40) + 0x48) & 0xfffffffffffffffc) + 0xc,
                &DAT_145af9fc0);
  FUN_1432de9d0(local_30,(local_res8 & 0xfffffffffffffffc) + 0xc);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  lVar4 = lVar7;
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
LAB_1432fd119:
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28,local_20);
  }
  if (local_38[0] == 1) {
    FUN_1432de450(local_30);
  }
  else if (1 < local_38[0]) {
    Scaleform::RefCountImpl::Release(local_30);
  }
  return lVar4;
}



// FUNCTION 1432fd1d0 FUN_1432fd1d0 body=665 status=ok
// SIG undefined FUN_1432fd1d0(void)

undefined8 * FUN_1432fd1d0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  RefCountImpl *pRVar2;
  longlong lVar3;
  RefCountImpl *pRVar4;
  RefCountImpl *pRVar5;
  
  param_1[1] = 0;
  pRVar5 = (RefCountImpl *)0x0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d90;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = &PTR_LAB_145af9d98;
  param_1[3] = &PTR_LAB_145af9dc0;
  param_1[4] = 0;
  puVar1 = param_1 + 6;
  param_1[5] = 0;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  FUN_1432bdc50(param_1 + 8,0);
  *(undefined1 *)(param_1 + 0xe) = param_3;
  param_1[0xf] = 0;
  if (param_2 != 0) {
    pRVar4 = *(RefCountImpl **)(param_2 + 0x10);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar4);
    }
    if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
    }
    param_1[5] = pRVar4;
  }
  pRVar2 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x60);
  pRVar4 = pRVar5;
  if (pRVar2 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar2 + 8) = 0;
    *(undefined ***)pRVar2 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar2 = &PTR_FUN_145af9240;
    *(undefined ***)(pRVar2 + 0x10) = &PTR_GetPoolName_145af9248;
    *(undefined ***)(pRVar2 + 0x18) = &PTR_LAB_145af9270;
    *(undefined4 *)(pRVar2 + 8) = 1;
    *(undefined8 *)(pRVar2 + 0x20) = 0;
    *(undefined8 *)(pRVar2 + 0x28) = 0;
    FUN_1432bdc50(pRVar2 + 0x30,0);
    if (*(RefCountImpl **)(pRVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x20));
    }
    *(undefined8 *)(pRVar2 + 0x20) = 0;
    pRVar4 = pRVar2;
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = pRVar4;
  if (pRVar4 != (RefCountImpl *)0x0) {
    pRVar2 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
    pRVar4 = pRVar5;
    if (pRVar2 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar2 + 8) = 0;
      *(undefined ***)pRVar2 = &PTR_FUN_144f70a50;
      *(undefined ***)pRVar2 = &PTR_FUN_144f70a70;
      *(undefined4 *)(pRVar2 + 8) = 1;
      pRVar4 = pRVar2;
    }
    FUN_1432e06c0(param_1[4] + 0x10,pRVar4);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar4);
    }
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
    pRVar4 = pRVar5;
    if (lVar3 != 0) {
      pRVar4 = (RefCountImpl *)FUN_1432e0e80(lVar3,0);
    }
    (**(code **)(*(longlong *)(param_1[4] + 0x10) + 0x10))
              ((longlong *)(param_1[4] + 0x10),0xe,pRVar4);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar4);
    }
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
    pRVar4 = pRVar5;
    if (lVar3 != 0) {
      pRVar4 = (RefCountImpl *)FUN_143392fd0(lVar3);
    }
    (**(code **)(*(longlong *)(param_1[4] + 0x10) + 0x10))
              ((longlong *)(param_1[4] + 0x10),0x19,pRVar4);
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar4);
    }
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
    if (lVar3 != 0) {
      pRVar5 = (RefCountImpl *)FUN_143393210(lVar3);
    }
    pRVar5 = (RefCountImpl *)FUN_143393250(pRVar5);
    (**(code **)(*(longlong *)(param_1[4] + 0x10) + 0x10))
              ((longlong *)(param_1[4] + 0x10),0x1a,pRVar5);
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar5);
    }
  }
  return param_1;
}



// FUNCTION 1432fd470 FUN_1432fd470 body=422 status=ok
// SIG undefined FUN_1432fd470(void)

undefined8 * FUN_1432fd470(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  RefCountImpl *pRVar2;
  RefCountImpl *pRVar3;
  RefCountImpl *this;
  
  param_1[1] = 0;
  this = (RefCountImpl *)0x0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d90;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = &PTR_LAB_145af9d98;
  param_1[3] = &PTR_LAB_145af9dc0;
  param_1[4] = 0;
  if (*(RefCountImpl **)(param_2 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x28));
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  puVar1 = param_1 + 6;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  FUN_1432bdc50(param_1 + 8,0);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  pRVar2 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x60);
  pRVar3 = this;
  if (pRVar2 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar2 + 8) = 0;
    *(undefined ***)pRVar2 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar2 = &PTR_FUN_145af9240;
    *(undefined ***)(pRVar2 + 0x10) = &PTR_GetPoolName_145af9248;
    *(undefined ***)(pRVar2 + 0x18) = &PTR_LAB_145af9270;
    *(undefined4 *)(pRVar2 + 8) = 1;
    *(undefined8 *)(pRVar2 + 0x20) = 0;
    *(undefined8 *)(pRVar2 + 0x28) = 0;
    FUN_1432bdc50(pRVar2 + 0x30,0);
    if (*(RefCountImpl **)(pRVar2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pRVar2 + 0x20));
    }
    *(undefined8 *)(pRVar2 + 0x20) = 0;
    pRVar3 = pRVar2;
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = pRVar3;
  if (pRVar3 != (RefCountImpl *)0x0) {
    if (*(longlong *)(param_2 + 0x20) == 0) {
      pRVar3 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
      if (pRVar3 != (RefCountImpl *)0x0) {
        *(undefined8 *)(pRVar3 + 8) = 0;
        *(undefined ***)pRVar3 = &PTR_FUN_144f70a50;
        *(undefined ***)pRVar3 = &PTR_FUN_144f70a70;
        *(undefined4 *)(pRVar3 + 8) = 1;
        this = pRVar3;
      }
      FUN_1432e06c0(param_1[4] + 0x10,this);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
    }
    else {
      FUN_143300af0(pRVar3);
    }
  }
  return param_1;
}



// FUNCTION 1432fd620 FUN_1432fd620 body=246 status=ok
// SIG undefined FUN_1432fd620(void)

undefined8 * FUN_1432fd620(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  RefCountImpl *pRVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af9d90;
  param_1[2] = &PTR_LAB_145af9d98;
  param_1[3] = &PTR_LAB_145af9dc0;
  puVar1 = param_1 + 6;
  param_1[4] = 0;
  param_1[5] = 0;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  FUN_1432bdc50(param_1 + 8,0);
  *(undefined1 *)(param_1 + 0xe) = param_4;
  param_1[0xf] = 0;
  if (param_3 != 0) {
    pRVar2 = *(RefCountImpl **)(param_3 + 0x10);
    if (pRVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar2);
    }
    if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
    }
    param_1[5] = pRVar2;
  }
  pRVar2 = (RefCountImpl *)(param_2 + -0x10);
  if (param_2 == 0) {
    pRVar2 = (RefCountImpl *)0x0;
  }
  if (pRVar2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar2);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = pRVar2;
  return param_1;
}



// FUNCTION 1432fd720 ~LoaderImpl body=127 status=ok
// SIG undefined ~LoaderImpl(void)

void Scaleform::GFx::LoaderImpl::~LoaderImpl(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9d90;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af9d98;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145af9dc0;
  FUN_1432ff5f0();
  FUN_1433003f0(param_1 + 0x78);
  Lock::~Lock(param_1 + 0x40);
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af8cf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_GetPoolName_145af7910;
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432fd7b0 FUN_1432fd7b0 body=1327 status=ok
// SIG undefined FUN_1432fd7b0(void)

ulonglong FUN_1432fd7b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char param_4,
                       undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  RefCountImpl *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  RefCountImpl *this_00;
  int *piVar9;
  ulonglong uVar10;
  ulonglong local_res18;
  ulonglong local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined4 local_350 [2];
  ulonglong local_348;
  ulonglong local_340;
  undefined1 local_338 [76];
  int local_2ec;
  int local_2e8;
  int local_2e4;
  uint local_c4;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_88 [20];
  undefined2 local_38;
  
  if (param_3 == (undefined8 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  this = (RefCountImpl *)0x0;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)((longlong)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined2 *)((longlong)param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  if (lVar4 != 0) {
    this = (RefCountImpl *)FUN_143318b20(lVar4,param_1,0,0);
  }
  if (*(longlong *)(this + 0x60) == 0) {
    uVar10 = 0;
    goto LAB_1432fdba0;
  }
  FUN_1432c2fb0(&local_368,&DAT_145af3922);
  FUN_1432c2fb0(&local_360,param_2);
  local_350[0] = 0;
  FUN_1432c31e0(&local_348,&local_360);
  FUN_1432c31e0(&local_340,&local_368);
  uVar10 = (ulonglong)local_360 & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
  }
  uVar10 = local_368 & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
  }
  FUN_1432c2f70(&local_res18);
  Scaleform::GFx::LoadStates::BuildURL(this,&local_res18,local_350);
  uVar5 = Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(this,param_5);
  plVar1 = *(longlong **)(*(longlong *)(this + 0x10) + 0x10);
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,(local_res18 & 0xfffffffffffffffc) + 0xc);
  }
  FUN_14330f6a0(&local_360,(local_res18 & 0xfffffffffffffffc) + 0xc,uVar6,plVar1,uVar5);
  lVar4 = FUN_1432ded60(*(undefined8 *)(this + 0x60),&local_360);
  if (local_360 != (longlong *)0x0) {
    (**(code **)(*local_360 + 0x10))(local_360,local_358);
  }
  if (lVar4 == 0) {
    cVar2 = FUN_1432badc0(&local_res18);
    if (cVar2 == '\0') {
      this_00 = (RefCountImpl *)FUN_143319140(this,(local_res18 & 0xfffffffffffffffc) + 0xc,0);
LAB_1432fda87:
      if (this_00 != (RefCountImpl *)0x0) {
        FUN_143395610(local_338,0,DAT_146b62f28,0,0);
        FUN_143300290(local_b8);
        local_38 = 0;
        cVar2 = FUN_1432fca40(local_338,this_00,*(undefined8 *)(this + 0x18),
                              *(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),
                              *(undefined8 *)(this + 0x20),0);
        if (cVar2 != '\0') {
          *(undefined4 *)(param_3 + 2) = local_98;
          piVar9 = local_88;
          if (local_88[0] == 0) {
            piVar9 = (int *)0x0;
          }
          *(undefined4 *)param_3 = local_b4;
          *(undefined4 *)((longlong)param_3 + 4) = local_90;
          *(undefined4 *)((longlong)param_3 + 0x14) = local_94;
          *(int *)(param_3 + 1) = (int)((local_a0 - local_a8) / 20.0 + 0.5);
          *(int *)((longlong)param_3 + 0xc) = (int)((local_9c - local_a4) / 20.0 + 0.5);
          if (piVar9 == (int *)0x0) {
            *(undefined2 *)((longlong)param_3 + 0x1c) = 0;
            *(undefined4 *)(param_3 + 4) = 0;
          }
          else {
            *(short *)((longlong)param_3 + 0x1c) = (short)piVar9[6];
            *(int *)(param_3 + 4) = piVar9[7];
          }
          if ((param_4 != '\0') && ((uint)((local_2e4 - local_2e8) + local_2ec) < local_c4)) {
            do {
              FUN_143395d00(local_338);
              FUN_143395ea0(local_338);
              *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
            } while ((uint)((local_2e4 - local_2e8) + local_2ec) < local_c4);
          }
          FUN_1433004b0(local_88);
          FUN_143395770(local_338);
          Scaleform::RefCountImpl::Release(this_00);
          goto LAB_1432fdcc6;
        }
        FUN_1433004b0();
        FUN_143395770(local_338);
        Scaleform::RefCountImpl::Release(this_00);
      }
    }
    else {
      FUN_1432c2fb0(&local_368,param_2);
      puVar7 = (undefined8 *)FUN_1432fe0f0(param_1,&local_368);
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_368 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_368 & 0xfffffffffffffffc);
      }
      if ((puVar7 != (undefined8 *)0x0) && (puVar7[1] != 0)) {
        lVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
        if (lVar8 == 0) {
          this_00 = (RefCountImpl *)0x0;
        }
        else {
          this_00 = (RefCountImpl *)FUN_143300200(lVar8,param_2,*puVar7,*(undefined4 *)(puVar7 + 1))
          ;
        }
        goto LAB_1432fda87;
      }
    }
    uVar10 = 0;
  }
  else {
    FUN_1433005b0(param_3,*(longlong *)(lVar4 + 0x40) + 0x50);
    if (param_4 != '\0') {
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(*(longlong *)(lVar4 + 0x40) + 0xf0);
    }
LAB_1432fdcc6:
    uVar10 = 1;
    if (lVar4 != 0) {
      FUN_1432de450(lVar4);
    }
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_340 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_340 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_348 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_348 & 0xfffffffffffffffc);
  }
LAB_1432fdba0:
  Scaleform::RefCountImpl::Release(this);
  return uVar10;
}



// FUNCTION 1432fdcf0 FUN_1432fdcf0 body=587 status=ok
// SIG undefined FUN_1432fdcf0(void)

RefCountImpl * FUN_1432fdcf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  RefCountImpl *pRVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  ulonglong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  ulonglong local_20;
  
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  pRVar5 = (RefCountImpl *)0x0;
  this = pRVar5;
  if (lVar3 != 0) {
    this = (RefCountImpl *)FUN_143318b20(lVar3,param_1,0,0);
  }
  if (*(longlong *)(this + 0x60) != 0) {
    FUN_1432c2fb0(&local_40,&DAT_145af3922);
    FUN_1432c2fb0(&local_48,param_2);
    local_30[0] = 0;
    FUN_1432c31e0(&local_28,&local_48);
    FUN_1432c31e0(&local_20,&local_40);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
    }
    uVar6 = (ulonglong)local_40 & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
    }
    FUN_1432c2f70(&local_res20);
    Scaleform::GFx::LoadStates::BuildURL(this,&local_res20,local_30);
    uVar4 = Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(this,param_3);
    plVar1 = *(longlong **)(*(longlong *)(this + 0x10) + 0x10);
    if (plVar1 != (longlong *)0x0) {
      pRVar5 = (RefCountImpl *)
               (**(code **)(*plVar1 + 0x10))(plVar1,(local_res20 & 0xfffffffffffffffc) + 0xc);
    }
    FUN_14330f6a0(&local_40,(local_res20 & 0xfffffffffffffffc) + 0xc,pRVar5,plVar1,uVar4);
    lVar3 = FUN_1432ded60(*(undefined8 *)(this + 0x60),&local_40);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))(local_40,local_38);
    }
    pRVar5 = (RefCountImpl *)(ulonglong)(lVar3 != 0);
    if (lVar3 != 0) {
      FUN_1432de450(lVar3);
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_20 & 0xfffffffffffffffc);
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_28 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28 & 0xfffffffffffffffc);
    }
  }
  Scaleform::RefCountImpl::Release(this);
  return pRVar5;
}



// FUNCTION 1432fdf50 FUN_1432fdf50 body=406 status=ok
// SIG undefined FUN_1432fdf50(void)

RefCountImpl * FUN_1432fdf50(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  RefCountImpl *this;
  RefCountImpl *pRVar3;
  ulonglong local_48;
  ulonglong local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  ulonglong local_28 [2];
  
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  pRVar3 = (RefCountImpl *)0x0;
  this = pRVar3;
  if (lVar2 != 0) {
    this = (RefCountImpl *)FUN_143318b20(lVar2,param_1,0,0);
  }
  if ((param_3 & 0x40) != 0) {
    this[0x78] = (RefCountImpl)0x1;
  }
  if (*(longlong *)(this + 0x60) != 0) {
    FUN_1432c2fb0(&local_40,&DAT_145af3922);
    FUN_1432c2fb0(&local_48,param_2);
    local_38[0] = 0;
    FUN_1432c31e0(&local_30,&local_48);
    FUN_1432c31e0(local_28,&local_40);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
    }
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_40 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40 & 0xfffffffffffffffc);
    }
    pRVar3 = (RefCountImpl *)FUN_1432fe2b0(this,local_38,param_3,0,param_4);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_28[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28[0] & 0xfffffffffffffffc);
    }
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_30 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_30 & 0xfffffffffffffffc);
    }
  }
  Scaleform::RefCountImpl::Release(this);
  return pRVar3;
}



// FUNCTION 1432fe0f0 FUN_1432fe0f0 body=342 status=ok
// SIG undefined FUN_1432fe0f0(void)

RefCountImpl * FUN_1432fe0f0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  RefCountImpl *local_res18 [2];
  ulonglong *local_28;
  RefCountImpl **local_20;
  
  lVar1 = param_1 + 0x78;
  lVar3 = FUN_1432ffa70(lVar1);
  if ((lVar3 != 0) && ((longlong *)(lVar3 + 8) != (longlong *)0x0)) {
    return (RefCountImpl *)(*(longlong *)(lVar3 + 8) + 0x10);
  }
  local_res8[0] = 2;
  this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res8)
  ;
  if (this != (RefCountImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145af9d88;
    *(undefined4 *)(this + 8) = 1;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  cVar2 = FUN_1432bae80(this + 0x10,param_2,1,0,0,0,0);
  if (cVar2 != '\0') {
    local_20 = local_res18;
    local_res18[0] = this;
    local_28 = param_2;
    uVar4 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    FUN_1432ffe20(lVar1,lVar1,&local_28,uVar4);
    if (local_res18[0] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res18[0]);
    }
    return this + 0x10;
  }
  Scaleform::RefCountImpl::Release(this);
  return (RefCountImpl *)0x0;
}



// FUNCTION 1432fe250 FUN_1432fe250 body=81 status=ok
// SIG undefined FUN_1432fe250(void)

void FUN_1432fe250(longlong param_1)

{
  int iVar1;
  ulonglong local_res8 [4];
  
  FUN_1432c2fb0(local_res8);
  FUN_1432ffb00(param_1 + 0x78,local_res8);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8[0] & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432fe2b0 FUN_1432fe2b0 body=1707 status=ok
// SIG undefined FUN_1432fe2b0(void)

RefCountImpl *
FUN_1432fe2b0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5
             )

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RefCountImpl *pRVar4;
  longlong lVar5;
  RefCountImpl *pRVar6;
  undefined1 *puVar7;
  RefCountImpl *this;
  RefCountImpl *pRVar8;
  char *pcVar9;
  RefCountImpl *pRVar10;
  ulonglong uVar11;
  char *pcVar12;
  RefCountImpl *pRVar13;
  RefCountImpl *pRVar14;
  RefCountImpl *pRVar15;
  uint uVar16;
  ulonglong uVar17;
  RefCountImpl *local_res8;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff50;
  ulonglong local_98;
  uint local_90;
  longlong local_88;
  int local_80 [2];
  RefCountImpl *local_78;
  uint local_70;
  undefined4 local_6c;
  RefCountImpl *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  FUN_1432c2f70(&local_98);
  Scaleform::GFx::LoadStates::BuildURL(param_1,&local_98,param_2);
  local_60 = *(longlong *)(param_1 + 0x18);
  this = (RefCountImpl *)0x0;
  pRVar13 = (RefCountImpl *)0x0;
  local_80[0] = 0;
  local_78 = (RefCountImpl *)0x0;
  pRVar10 = (RefCountImpl *)0x0;
  local_88 = 0;
  pRVar14 = (RefCountImpl *)0x0;
  uVar16 = param_3 | 0x11;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) == 0) {
    uVar16 = param_3;
  }
  local_68 = (RefCountImpl *)0x0;
  local_6c = 0;
  local_70 = CONCAT31((uint3)(uVar16 >> 0xc),~(byte)(uVar16 >> 4)) & 0xffffff01;
  local_90 = uVar16;
  local_48 = Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(param_1,uVar16);
  local_res8 = *(RefCountImpl **)(*(longlong *)(param_1 + 0x10) + 0x10);
  pRVar4 = this;
  if (local_res8 != (RefCountImpl *)0x0) {
    pRVar4 = (RefCountImpl *)
             (**(code **)(*(longlong *)local_res8 + 0x10))
                       (local_res8,(local_98 & 0xfffffffffffffffc) + 0xc);
  }
  uVar17 = local_48;
  FUN_14330f6a0(&local_58,(local_98 & 0xfffffffffffffffc) + 0xc,pRVar4,local_res8,local_48);
  iVar3 = FUN_1432dee30(*(undefined8 *)(param_1 + 0x60),local_80,&local_58);
  pRVar4 = this;
  pRVar6 = this;
  pRVar8 = pRVar13;
  pRVar15 = pRVar14;
  if (iVar3 != 3) {
    pRVar10 = (RefCountImpl *)FUN_1432dea40(local_80);
    lVar5 = local_60;
    if (pRVar10 == (RefCountImpl *)0x0) {
      pRVar4 = (RefCountImpl *)0x0;
      pRVar8 = this;
      if (local_60 != 0) {
        if (local_80[0] < 2) {
          puVar7 = &DAT_145af3922;
        }
        else {
          puVar7 = (undefined1 *)Scaleform::GFx::ResourceLib::ResourceSlot::GetError(local_78);
        }
        FUN_143300d50(lVar5 + 0x18,&DAT_145afa01c,puVar7);
        pRVar4 = (RefCountImpl *)0x0;
        pRVar6 = (RefCountImpl *)0x0;
        pRVar8 = pRVar13;
      }
      goto LAB_1432fe8ab;
    }
    local_res8 = (RefCountImpl *)CONCAT44(local_res8._4_4_,*(undefined4 *)(pRVar10 + 0x38));
    FUN_1433190c0(param_1,pRVar10);
    bVar1 = false;
    goto LAB_1432fe719;
  }
  cVar2 = FUN_1432badc0(&local_98);
  pRVar15 = this;
  if (cVar2 != '\0') {
    local_res8 = (RefCountImpl *)FUN_1432fe0f0(*(undefined8 *)(param_1 + 0x68),&local_98);
    if ((local_res8 != (RefCountImpl *)0x0) &&
       (pRVar6 = (RefCountImpl *)0x0, *(longlong *)(local_res8 + 8) != 0)) {
      lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
      pRVar6 = this;
      if (lVar5 != 0) {
        pRVar6 = (RefCountImpl *)
                 FUN_1432e1570(lVar5,&local_98,*(longlong *)local_res8,
                               *(undefined4 *)(local_res8 + 8));
      }
      goto LAB_1432fe432;
    }
LAB_1432fe437:
    FUN_1432c3060(&local_res8,"Loader failed to open \"",(local_98 & 0xfffffffffffffffc) + 0xc,
                  &DAT_145af9fc0);
    pRVar10 = this;
    goto LAB_1432fe673;
  }
  pRVar6 = (RefCountImpl *)FUN_143319140(param_1,(local_98 & 0xfffffffffffffffc) + 0xc,uVar16);
LAB_1432fe432:
  if (pRVar6 == (RefCountImpl *)0x0) goto LAB_1432fe437;
  local_6c = FUN_1432ff190(pRVar6);
  switch(local_6c) {
  case 2:
    if ((uVar16 >> 0x13 & 1) == 0) goto switchD_1432fe492_caseD_3;
    pcVar12 = "\" - GFX file format expected";
    pcVar9 = "Failed loading SWF file \"";
    break;
  case 3:
switchD_1432fe492_caseD_3:
    local_res8 = (RefCountImpl *)CONCAT44(local_res8._4_4_,1);
    goto LAB_1432fe4c9;
  default:
switchD_1432fe492_caseD_4:
    pcVar12 = "\"";
    pcVar9 = "Unknown file format at URL \"";
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1b:
    if ((uVar16 >> 0x10 & 1) == 0) goto switchD_1432fe492_caseD_4;
    local_res8 = (RefCountImpl *)CONCAT44(local_res8._4_4_,2);
LAB_1432fe4c9:
    uVar11 = local_98 & 0xfffffffffffffffc;
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    pRVar10 = this;
    if (lVar5 != 0) {
      uVar17 = 0;
      pRVar10 = (RefCountImpl *)
                FUN_14330f260(lVar5,&local_58,(ulonglong)local_res8 & 0xffffffff,uVar11 + 0xc,0,
                              CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff50 >> 8),
                                       (byte)(uVar16 >> 0x1c)) & 0xffffffffffffff01,param_5);
    }
    if (pRVar10 != (RefCountImpl *)0x0) {
      FUN_1433190c0(param_1,pRVar10);
      if ((int)local_res8 != 1) {
LAB_1432fe5c6:
        pRVar13 = (RefCountImpl *)&local_68;
        if ((int)local_res8 != 1) {
          pRVar13 = this;
        }
        uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
        local_88 = FUN_1432fcf80(param_1,pRVar10,uVar16,pRVar13,uVar17,param_4,param_5);
        pRVar15 = local_68;
LAB_1432fe5fe:
        FUN_1432de8f0(local_78,pRVar10);
        bVar1 = true;
        if ((char)local_70 == '\0') {
          bVar1 = true;
          if (local_88 == 0) {
LAB_1432fe719:
            pRVar13 = (RefCountImpl *)&local_68;
            if ((int)local_res8 != 1) {
              pRVar13 = this;
            }
            uVar17 = uVar17 & 0xffffffffffffff00;
            local_88 = FUN_1432fcf80(param_1,pRVar10,uVar16,pRVar13,uVar17,param_4,param_5);
            pRVar15 = local_68;
            goto LAB_1432fe759;
          }
LAB_1432fe76a:
          uVar18 = (undefined4)(uVar17 >> 0x20);
          pRVar14 = pRVar15;
          if ((int)local_res8 == 1) {
            local_res8 = pRVar15;
            if ((uVar16 & 0x10) != 0) {
              local_res8 = this;
            }
            if (local_res8 != (RefCountImpl *)0x0) {
              Scaleform::GFx::LoadProcess::SetBindProcess(pRVar4,local_res8);
            }
            if (pRVar15 != (RefCountImpl *)0x0) {
              *(undefined8 *)(pRVar4 + 0x370) = *(undefined8 *)(pRVar15 + 0x58);
            }
            if (((uVar16 & 1) != 0) ||
               (cVar2 = Scaleform::GFx::LoadStates::SubmitBackgroundTask(param_1,pRVar4),
               cVar2 == '\0')) {
              (**(code **)(*(longlong *)pRVar4 + 8))(pRVar4);
            }
            if ((local_res8 != (RefCountImpl *)0x0) &&
               (pRVar14 = this, pRVar15 != (RefCountImpl *)0x0)) {
              Scaleform::RefCountImpl::Release(pRVar15);
            }
            if (pRVar4 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(pRVar4);
            }
            pRVar4 = this;
            pRVar13 = this;
            if (pRVar6 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(pRVar6);
            }
          }
          else {
            lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
            if (lVar5 != 0) {
              this = (RefCountImpl *)
                     FUN_143300300(lVar5,pRVar10,local_88,pRVar6,CONCAT44(uVar18,local_6c),param_1);
            }
            if ((((local_90 & 0x11) != 0) ||
                (cVar2 = Scaleform::GFx::LoadStates::SubmitBackgroundTask(param_1,this),
                cVar2 == '\0')) &&
               ((**(code **)(*(longlong *)this + 8))(this), *(longlong *)(this + 0x40) == 0)) {
              if (local_88 != 0) {
                FUN_1432de450(local_88);
              }
              Scaleform::RefCountImpl::Release(this);
              goto LAB_1432fe8ab;
            }
            pRVar13 = pRVar6;
            uVar16 = local_90;
            if (this != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(this);
              uVar16 = local_90;
            }
          }
        }
        else {
LAB_1432fe759:
          if (local_88 == 0) goto LAB_1432fe8ab;
          pRVar13 = pRVar6;
          pRVar14 = pRVar15;
          if (bVar1) goto LAB_1432fe76a;
        }
        pRVar8 = (RefCountImpl *)FUN_1432ff020(local_88,pRVar14,param_1,uVar16,param_4);
        pRVar6 = pRVar13;
        pRVar15 = pRVar14;
        goto LAB_1432fe8ab;
      }
      lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x420,0);
      if (lVar5 != 0) {
        pRVar4 = (RefCountImpl *)FUN_143319240(lVar5,pRVar10,param_1,uVar16);
      }
      if (pRVar4 != (RefCountImpl *)0x0) {
        cVar2 = FUN_1433195d0(pRVar4,pRVar6);
        if (cVar2 != '\0') {
          if ((char)local_70 != '\0') {
            goto LAB_1432fe5c6;
          }
          goto LAB_1432fe5fe;
        }
        Scaleform::RefCountImpl::Release(pRVar4);
      }
      FUN_1432de450(pRVar10);
      pRVar10 = this;
    }
    FUN_1432c3060(&local_res8,"Failed to load SWF file \"",(local_98 & 0xfffffffffffffffc) + 0xc,
                  &DAT_145af9fc0);
    goto LAB_1432fe673;
  }
  FUN_1432c3060(&local_res8,pcVar9,(local_98 & 0xfffffffffffffffc) + 0xc,pcVar12);
  if (local_60 != 0) {
    FUN_143300d50(local_60 + 0x18,&DAT_145afa01c,((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc)
    ;
  }
LAB_1432fe673:
  FUN_1432de9d0(local_78,((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc);
  uVar17 = (ulonglong)local_res8 & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar17 + 8,0xffffffff);
  pRVar4 = this;
  pRVar8 = this;
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar17);
    pRVar4 = (RefCountImpl *)0x0;
    pRVar15 = pRVar14;
  }
LAB_1432fe8ab:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))(local_58,local_50);
  }
  if (pRVar6 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar6);
  }
  if (pRVar4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar4);
  }
  if (pRVar15 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar15);
  }
  if (pRVar10 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar10);
  }
  if (local_80[0] == 1) {
    FUN_1432de450(local_78);
  }
  else if (1 < local_80[0]) {
    Scaleform::RefCountImpl::Release(local_78);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_98 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98 & 0xfffffffffffffffc);
  }
  return pRVar8;
}



// FUNCTION 1432fe990 FUN_1432fe990 body=151 status=ok
// SIG undefined FUN_1432fe990(void)

undefined8 FUN_1432fe990(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  RefCountImpl *this;
  longlong lVar1;
  undefined8 uVar2;
  RefCountImpl *local_res10;
  ulonglong in_stack_ffffffffffffffc8;
  
  if (param_2 != 0) {
    FUN_1433190c0();
  }
  uVar2 = 0;
  local_res10 = (RefCountImpl *)0x0;
  lVar1 = FUN_1432fcf80(param_1,param_2,param_3,&local_res10,
                        in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0,param_4);
  this = local_res10;
  if (lVar1 != 0) {
    uVar2 = FUN_1432ff020(lVar1,local_res10,param_1,param_3,0);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar2;
}



// FUNCTION 1432fea30 FUN_1432fea30 body=1461 status=ok
// SIG undefined FUN_1432fea30(void)

RefCountImpl *
FUN_1432fea30(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  longlong lVar5;
  RefCountImpl *pRVar6;
  longlong lVar7;
  RefCountImpl *pRVar8;
  RefCountImpl *pRVar9;
  RefCountImpl *this_00;
  RefCountImpl *pRVar10;
  ulonglong uVar11;
  RefCountImpl *pRVar12;
  undefined8 uVar13;
  undefined8 in_stack_fffffffffffffed0;
  int local_118;
  RefCountImpl *local_110;
  int local_108 [2];
  RefCountImpl *local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  
  uVar4 = Scaleform::Timer::GetRawTicks();
  FUN_1432f2bf0(local_b8,0x80,"*Bytes@%p*",uVar4);
  local_d8 = *(longlong *)(param_1 + 0x18);
  pRVar9 = (RefCountImpl *)0x0;
  pRVar10 = (RefCountImpl *)0x0;
  local_108[0] = 0;
  local_100 = (RefCountImpl *)0x0;
  uVar11 = (ulonglong)((uint)param_3 | 0x11);
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) == 0) {
    uVar11 = param_3 & 0xffffffff;
  }
  local_110 = (RefCountImpl *)0x0;
  uVar13 = 0;
  pRVar12 = (RefCountImpl *)0x0;
  FUN_14330f6a0(&local_d0,local_b8,uVar4,0,0);
  FUN_1432dee30(*(undefined8 *)(param_1 + 0x60),local_108,&local_d0);
  this = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
  local_118 = 1;
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    local_f8 = param_2[1];
    lVar5 = *param_2;
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined4 *)(this + 8) = 1;
    *(undefined ***)this = &PTR_FUN_145af8dd8;
    FUN_1432c2fb0(this + 0x10,local_b8);
    *(int *)(this + 0x20) = (int)local_f8;
    *(longlong *)(this + 0x18) = lVar5;
    *(undefined4 *)(this + 0x24) = 0;
    if ((lVar5 == 0) || ((int)local_f8 < 1)) {
      this[0x28] = (RefCountImpl)0x0;
    }
    else {
      this[0x28] = (RefCountImpl)0x1;
    }
  }
  uVar2 = FUN_1432ff190(this);
  local_f8 = CONCAT44(local_f8._4_4_,uVar2);
  pRVar6 = pRVar9;
  switch(uVar2) {
  case 2:
    if (((uint)uVar11 >> 0x13 & 1) == 0) goto switchD_1432febab_caseD_3;
    FUN_1432c3060(&local_f0,"Failed loading SWF file \"",local_b8,"\" - GFX file format expected");
    if (local_d8 != 0) {
      FUN_143300d50(local_d8 + 0x18,&DAT_145afa01c,(local_f0 & 0xfffffffffffffffc) + 0xc);
    }
    FUN_1432de9d0(local_100,(local_f0 & 0xfffffffffffffffc) + 0xc);
    local_e8 = local_f0;
    break;
  case 3:
switchD_1432febab_caseD_3:
    uVar4 = 1;
    goto LAB_1432fec35;
  default:
switchD_1432febab_caseD_4:
    FUN_1432c3060(&local_e8,"Unknown file format at URL \"",local_b8,&DAT_145afa020);
    if (local_d8 != 0) {
      FUN_143300d50(local_d8 + 0x18,&DAT_145afa01c,(local_e8 & 0xfffffffffffffffc) + 0xc);
    }
    FUN_1432de9d0(local_100,(local_e8 & 0xfffffffffffffffc) + 0xc);
    pRVar12 = pRVar9;
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    if (((uint)uVar11 >> 0x10 & 1) == 0) goto switchD_1432febab_caseD_4;
    uVar4 = 2;
    local_118 = 2;
LAB_1432fec35:
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    pRVar12 = pRVar9;
    if (lVar5 != 0) {
      uVar13 = 0;
      pRVar12 = (RefCountImpl *)
                FUN_14330f260(lVar5,&local_d0,uVar4,local_b8,0,
                              CONCAT71((int7)((ulonglong)in_stack_fffffffffffffed0 >> 8),
                                       (char)(uVar11 >> 0x1c)) & 0xffffffffffffff01,param_5);
    }
    if (pRVar12 != (RefCountImpl *)0x0) {
      FUN_1433190c0(param_1,pRVar12);
      if (local_118 != 1) {
LAB_1432fed37:
        pRVar8 = (RefCountImpl *)&local_110;
        if (local_118 != 1) {
          pRVar8 = pRVar9;
        }
        uVar4 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        lVar5 = FUN_1432fcf80(param_1,pRVar12,uVar11,pRVar8,uVar4,param_4,param_5);
        uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
        FUN_1432de8f0(local_100,pRVar12);
        pRVar8 = local_110;
        this_00 = local_110;
        if (lVar5 != 0) {
          if (local_118 == 1) {
            pRVar10 = local_110;
            if ((uVar11 & 0x10) != 0) {
              pRVar10 = pRVar9;
            }
            if (pRVar10 != (RefCountImpl *)0x0) {
              Scaleform::GFx::LoadProcess::SetBindProcess(pRVar6,pRVar10);
            }
            if (pRVar8 != (RefCountImpl *)0x0) {
              *(undefined8 *)(pRVar6 + 0x370) = *(undefined8 *)(pRVar8 + 0x58);
            }
            if (((uVar11 & 1) != 0) ||
               (cVar1 = Scaleform::GFx::LoadStates::SubmitBackgroundTask(param_1,pRVar6),
               cVar1 == '\0')) {
              (**(code **)(*(longlong *)pRVar6 + 8))(pRVar6);
            }
            this_00 = pRVar8;
            if ((pRVar10 != (RefCountImpl *)0x0) &&
               (this_00 = pRVar9, pRVar8 != (RefCountImpl *)0x0)) {
              Scaleform::RefCountImpl::Release(pRVar8);
            }
            if (pRVar6 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(pRVar6);
            }
            pRVar6 = pRVar9;
            if (this != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(this);
            }
          }
          else {
            lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
            pRVar8 = pRVar9;
            if (lVar7 != 0) {
              pRVar8 = (RefCountImpl *)
                       FUN_143300300(lVar7,pRVar12,lVar5,this,CONCAT44(uVar2,(undefined4)local_f8),
                                     param_1);
            }
            if ((((uVar11 & 0x11) != 0) ||
                (cVar1 = Scaleform::GFx::LoadStates::SubmitBackgroundTask(param_1,pRVar8),
                cVar1 == '\0')) &&
               ((**(code **)(*(longlong *)pRVar8 + 8))(pRVar8), *(longlong *)(pRVar8 + 0x40) == 0))
            {
              FUN_1432de450(lVar5);
              Scaleform::RefCountImpl::Release(pRVar8);
              this_00 = local_110;
              goto LAB_1432fef5c;
            }
            pRVar9 = this;
            this_00 = local_110;
            if (pRVar8 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(pRVar8);
              this_00 = local_110;
            }
          }
          pRVar10 = (RefCountImpl *)FUN_1432ff020(lVar5,this_00,param_1,uVar11,param_4);
          this = pRVar9;
        }
        goto LAB_1432fef5c;
      }
      lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x420,0);
      if (lVar5 != 0) {
        pRVar6 = (RefCountImpl *)FUN_143319240(lVar5,pRVar12,param_1,uVar11);
      }
      if (pRVar6 != (RefCountImpl *)0x0) {
        cVar1 = FUN_1433195d0(pRVar6,this);
        if (cVar1 != '\0') goto LAB_1432fed37;
        Scaleform::RefCountImpl::Release(pRVar6);
      }
      FUN_1432de450(pRVar12);
      pRVar12 = pRVar9;
    }
    FUN_1432c3060(&local_e0,"Failed to load SWF file \"",local_b8,&DAT_145af9fc0);
    FUN_1432de9d0(local_100,(local_e0 & 0xfffffffffffffffc) + 0xc);
    local_e8 = local_e0;
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_e8 & 0xfffffffffffffffc) + 8,0xffffffff);
  this_00 = pRVar9;
  pRVar6 = pRVar9;
  pRVar10 = pRVar9;
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_e8 & 0xfffffffffffffffc);
    this_00 = (RefCountImpl *)0x0;
    pRVar6 = (RefCountImpl *)0x0;
  }
LAB_1432fef5c:
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0,local_c8);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  if (pRVar6 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar6);
  }
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (pRVar12 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar12);
  }
  if (local_108[0] == 1) {
    FUN_1432de450(local_100);
  }
  else if (1 < local_108[0]) {
    Scaleform::RefCountImpl::Release(local_100);
  }
  return pRVar10;
}



// FUNCTION 1432ff020 FUN_1432ff020 body=357 status=ok
// SIG undefined FUN_1432ff020(void)

longlong *
FUN_1432ff020(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *local_38 [6];
  
  plVar1 = param_5;
  if ((param_2 != (longlong *)0x0) &&
     (((param_4 & 1) != 0 ||
      (cVar2 = Scaleform::GFx::LoadStates::SubmitBackgroundTask(param_3), cVar2 == '\0')))) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  do {
    if (plVar1 == (longlong *)0x0) {
      if ((param_4 & 1) == 0) {
        if ((param_4 & 2) == 0) {
          return param_1;
        }
        uVar3 = 0x100;
      }
      else {
        uVar3 = 0x200;
      }
      cVar2 = FUN_14330fd50(param_1[0xe],uVar3);
      if (cVar2 == '\0') {
LAB_1432ff161:
        FUN_1432de450(param_1);
        param_1 = (longlong *)0x0;
      }
      return param_1;
    }
    if ((longlong *)*plVar1 == param_1) {
      if (plVar1[1] == 0) {
        return param_1;
      }
      if (*(longlong *)(param_3 + 0x18) != 0) {
        FUN_1432c5960(local_38,DAT_146b62f28);
        do {
          uVar3 = (**(code **)(*(longlong *)*param_5 + 0x60))();
          Scaleform::StringBuffer::AppendString(local_38,uVar3,0xffffffffffffffff);
          FUN_1432c5df0(local_38,10);
          param_5 = (longlong *)param_5[1];
        } while (param_5 != (longlong *)0x0);
        uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
        Scaleform::StringBuffer::AppendString(local_38,uVar3,0xffffffffffffffff);
        puVar4 = &DAT_145af3922;
        if (local_38[0] != (undefined1 *)0x0) {
          puVar4 = local_38[0];
        }
        FUN_143300d50(*(longlong *)(param_3 + 0x18) + 0x18,
                      "Recursive import detected. Import stack:\n%s",puVar4);
        Scaleform::StringBuffer::~StringBuffer(local_38);
        FUN_1432de450(param_1);
        return (longlong *)0x0;
      }
      goto LAB_1432ff161;
    }
    plVar1 = (longlong *)plVar1[1];
  } while( true );
}



// FUNCTION 1432ff190 FUN_1432ff190 body=235 status=ok
// SIG undefined FUN_1432ff190(void)

ulonglong FUN_1432ff190(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_res8 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  uVar6 = 1;
  local_res8[0] = 0;
  iVar2 = (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
  if (0 < iVar2) {
    uVar3 = (local_res8[0] & 0xff) - 0x34;
    if (uVar3 < 0xcc) {
      uVar4 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_1432ff3d4 + (ulonglong)(byte)(&DAT_1432ff3f8)[(int)uVar3] * 4
                                 )))
                        (IMAGE_DOS_HEADER_140000000.e_magic +
                         *(uint *)(&DAT_1432ff3d4 +
                                  (ulonglong)(byte)(&DAT_1432ff3f8)[(int)uVar3] * 4));
      return uVar4;
    }
    (**(code **)(*param_1 + 0x70))(param_1,uVar1,0);
    pcVar5 = (char *)(**(code **)(*param_1 + 8))(param_1);
    if (((pcVar5 != (char *)0x0) && (pcVar5 = strrchr(pcVar5,0x2e), pcVar5 != (char *)0x0)) &&
       (iVar2 = _stricmp(pcVar5,".tga"), uVar6 = 1, iVar2 == 0)) {
      uVar6 = 0xd;
    }
  }
  return (ulonglong)uVar6;
}



// FUNCTION 1432ff4d0 FUN_1432ff4d0 body=131 status=ok
// SIG undefined FUN_1432ff4d0(void)

void FUN_1432ff4d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x40);
  puVar3 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    puVar3[2] = param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x30);
  puVar3[1] = plVar1;
  *puVar3 = uVar2;
  *(undefined8 **)(*plVar1 + 8) = puVar3;
  *plVar1 = (longlong)puVar3;
  Scaleform::Lock::DoLock(param_1 + 0x40);
  return;
}



// FUNCTION 1432ff560 FUN_1432ff560 body=137 status=ok
// SIG undefined FUN_1432ff560(void)

void FUN_1432ff560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x38);
  do {
    if (plVar1 == (longlong *)(param_1 + 0x30)) {
LAB_1432ff5d2:
      Scaleform::Lock::DoLock(param_1 + 0x40);
      return;
    }
    if (plVar1[2] == param_2) {
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      (**(code **)(*DAT_146b62f28 + 0x60))();
      goto LAB_1432ff5d2;
    }
    plVar1 = (longlong *)plVar1[1];
  } while( true );
}



// FUNCTION 1432ff5f0 FUN_1432ff5f0 body=198 status=ok
// SIG undefined FUN_1432ff5f0(void)

void FUN_1432ff5f0(longlong param_1)

{
  RefCountImpl *this;
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  this = (RefCountImpl *)(**(code **)(*plVar1 + 0x18))(plVar1,0x18);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::Lock::DoLock(param_1 + 0x40);
    plVar1 = *(longlong **)(param_1 + 0x38);
    while (plVar1 != (longlong *)(param_1 + 0x30)) {
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      *(longlong *)plVar1[1] = *plVar1;
      *plVar1 = -1;
      plVar1[1] = -1;
      (**(code **)(*(longlong *)this + 0x10))(this,plVar1[2]);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
      plVar1 = *(longlong **)(param_1 + 0x38);
    }
    Scaleform::Lock::DoLock(param_1 + 0x40);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1432ff6c0 FUN_1432ff6c0 body=281 status=ok
// SIG undefined FUN_1432ff6c0(void)

undefined8
FUN_1432ff6c0(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  RefCountImpl *this;
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar4 = 0;
  uVar2 = (**(code **)(*param_1 + 8))();
  iVar1 = FUN_1432ff7e0(param_2);
  if (iVar1 == 1) {
    if (param_5 != 0) {
      FUN_143300db0(param_5,"Default image loader failed to load \'%s\'",uVar2);
    }
    uVar4 = 0;
  }
  else {
    this = *(RefCountImpl **)(param_4 + 0x38);
    if (this == (RefCountImpl *)0x0) {
      if (param_5 != 0) {
        FUN_1432bbf90(param_5,
                      "Image file handler registry is not installed - can\'t load image data");
      }
    }
    else {
      Scaleform::RefCountImpl::AddRef(this);
      plVar3 = (longlong *)Scaleform::Render::ImageFileHandlerRegistry::GetReader(this + 0x18,iVar1)
      ;
      if (plVar3 == (longlong *)0x0) {
        if (param_5 != 0) {
          FUN_1432bbf90(param_5,"Can\'t load image %s - appropriate reader is not installed.",uVar2)
          ;
          Scaleform::RefCountImpl::Release(this);
          return 0;
        }
      }
      else {
        local_40 = param_6;
        local_48[0] = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,local_48);
      }
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return uVar4;
}



// FUNCTION 1432ff7e0 FUN_1432ff7e0 body=84 status=ok
// SIG undefined FUN_1432ff7e0(void)

undefined8 FUN_1432ff7e0(undefined4 param_1)

{
  switch(param_1) {
  case 10:
    return 2;
  case 0xb:
    return 4;
  default:
    return 1;
  case 0xd:
    return 5;
  case 0xe:
    return 3;
  case 0x15:
    return 6;
  case 0x17:
    return 0xb;
  case 0x18:
    return 8;
  case 0x1b:
    return 7;
  }
}



// FUNCTION 1432ff890 FUN_1432ff890 body=465 status=ok
// SIG undefined FUN_1432ff890(void)

undefined8 FUN_1432ff890(ulonglong *param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong local_res20;
  ulonglong local_38 [2];
  
  uVar5 = FUN_1432c3580();
  if (6 < uVar5) {
    iVar8 = (int)*(char *)((*param_1 & 0xfffffffffffffffc) + 0xc);
    if (iVar8 - 0x41U < 0x1a) {
      iVar8 = iVar8 + 0x20;
    }
    if ((iVar8 == 0x69) || (iVar8 == 0x73)) {
      bVar9 = iVar8 == 0x73;
      FUN_1432c4000(param_1,&local_res20);
      puVar6 = (ulonglong *)FUN_1432c3de0(&local_res20,local_38,bVar9,bVar9 + '\x06');
      lVar2 = 0;
      do {
        lVar7 = lVar2;
        cVar1 = *(char *)((*puVar6 & 0xfffffffffffffffc) + 0xc + lVar7);
        bVar10 = cVar1 == (&DAT_145afa184)[lVar7];
        if (!bVar10) goto LAB_1432ff939;
        lVar2 = lVar7 + 1;
      } while (lVar7 + 1 != 7);
      bVar10 = cVar1 == (&DAT_145afa184)[lVar7];
LAB_1432ff939:
      uVar5 = local_38[0] & 0xfffffffffffffffc;
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
      }
      if (bVar10) {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
      }
      else {
        puVar6 = (ulonglong *)FUN_1432c3de0(&local_res20,local_38,bVar9,bVar9 + '\b');
        iVar3 = _guard_xfg_dispatch_icall_nop
                          ((char *)((*puVar6 & 0xfffffffffffffffc) + 0xc),"imgps://");
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_38[0] & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar4 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38[0] & 0xfffffffffffffffc);
        }
        if (iVar3 != 0) {
          iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                            ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
          if (iVar8 != 1) {
            return 0;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
          return 0;
        }
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 0;
        }
      }
      if (param_3 != 0) {
        *(bool *)param_3 = iVar8 == 0x73;
      }
      iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar8 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1432ffa70 FUN_1432ffa70 body=135 status=ok
// SIG undefined FUN_1432ffa70(void)

longlong FUN_1432ffa70(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    uVar2 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    lVar1 = *param_1;
    lVar3 = FUN_143300010(param_1,param_2,*(ulonglong *)(lVar1 + 8) & uVar2);
    if (-1 < lVar3) {
      return (lVar3 + 1) * 0x20 + lVar1;
    }
  }
  return 0;
}



// FUNCTION 1432ffb00 FUN_1432ffb00 body=345 status=ok
// SIG undefined FUN_1432ffb00(void)

ulonglong FUN_1432ffb00(longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar5 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505);
  lVar3 = *param_1;
  uVar5 = *(ulonglong *)(lVar3 + 8) & uVar5;
  pcVar6 = (char *)(uVar5 * 0x20);
  puVar7 = (ulonglong *)(pcVar6 + lVar3 + 0x10);
  if ((*puVar7 == 0xfffffffffffffffe) || (puVar7[1] != uVar5)) {
    return ((uVar5 & 0x7ffffffffffffff) >> 3) << 8;
  }
  uVar4 = uVar5;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar9 = uVar4;
    if (puVar7[1] == uVar5) {
      pcVar6 = (char *)((puVar7[2] & 0xfffffffffffffffc) + 0xc);
      lVar8 = ((*param_2 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar6;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar8];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        uVar4 = *puVar7;
        if (uVar5 == uVar9) {
          if (uVar4 != 0xffffffffffffffff) {
            lVar3 = uVar4 * 0x20 + lVar3;
            FUN_143300a90(puVar7);
            FUN_1433000b0(puVar7,lVar3 + 0x10);
            puVar7 = (ulonglong *)(lVar3 + 0x10);
          }
        }
        else {
          *(ulonglong *)(uVar10 * 0x20 + 0x10 + lVar3) = uVar4;
        }
        FUN_143300a90(puVar7);
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
    }
    uVar4 = *puVar7;
    if (uVar4 == 0xffffffffffffffff) {
      return (ulonglong)pcVar6 & 0xffffffffffffff00;
    }
    pcVar6 = (char *)(uVar4 * 0x20);
    puVar7 = (ulonglong *)(pcVar6 + lVar3 + 0x10);
    uVar10 = uVar9;
  } while( true );
}



// FUNCTION 1432ffc60 FUN_1432ffc60 body=438 status=ok
// SIG undefined FUN_1432ffc60(void)

longlong FUN_1432ffc60(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1433009d0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar7 = param_4 * 0x20 + lVar2;
  uVar4 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c5160(lVar7 + 0x20,param_3);
    if (*(RefCountImpl **)(param_3 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 8));
    }
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar6 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar6 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_1433000b0(lVar6 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      if (*(RefCountImpl **)(param_3 + 8) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 8));
      }
      if (*(RefCountImpl **)(lVar7 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x28));
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
      *(ulonglong *)(lVar7 + 0x10) = uVar4;
    }
    else {
      puVar5 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar3 = *puVar5;
      while (uVar3 != param_4) {
        puVar5 = (ulonglong *)(lVar2 + 0x10 + *puVar5 * 0x20);
        uVar3 = *puVar5;
      }
      *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c5160(lVar6 + 0x20,lVar7 + 0x20);
      if (*(RefCountImpl **)(lVar7 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar7 + 0x28));
      }
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
      *puVar5 = uVar4;
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      if (*(RefCountImpl **)(param_3 + 8) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 8));
      }
      if (*(RefCountImpl **)(lVar7 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x28));
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 1432ffe20 FUN_1432ffe20 body=490 status=ok
// SIG undefined FUN_1432ffe20(void)

longlong FUN_1432ffe20(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  RefCountImpl *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1432ffe73;
    lVar7 = plVar1[1] * 2 + 2;
  }
  FUN_143301050(param_1,param_2,lVar7);
LAB_1432ffe73:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar9 = param_4 * 0x20 + lVar7;
  uVar5 = param_4;
  if (*(longlong *)(lVar9 + 0x10) == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    FUN_1432c5160(lVar9 + 0x20,*param_3);
    puVar2 = (undefined8 *)param_3[1];
    pRVar3 = (RefCountImpl *)*puVar2;
    if (pRVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar3);
    }
    *(undefined8 *)(lVar9 + 0x28) = *puVar2;
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar8 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      FUN_1433000b0(lVar8 + 0x10,lVar9 + 0x10);
      FUN_1432c4d80(lVar9 + 0x20,*param_3);
      puVar2 = (undefined8 *)param_3[1];
      pRVar3 = (RefCountImpl *)*puVar2;
      if (pRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x28));
      }
      *(undefined8 *)(lVar9 + 0x28) = *puVar2;
      *(ulonglong *)(lVar9 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar9 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar7 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar9 + 0x10);
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      FUN_1432c5160(lVar8 + 0x20,lVar9 + 0x20);
      if (*(RefCountImpl **)(lVar9 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar9 + 0x28));
      }
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      *puVar6 = uVar5;
      FUN_1432c4d80(lVar9 + 0x20,*param_3);
      puVar2 = (undefined8 *)param_3[1];
      pRVar3 = (RefCountImpl *)*puVar2;
      if (pRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar3);
      }
      if (*(RefCountImpl **)(lVar9 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar9 + 0x28));
      }
      *(undefined8 *)(lVar9 + 0x28) = *puVar2;
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 143300010 FUN_143300010 body=157 status=ok
// SIG undefined FUN_143300010(void)

longlong FUN_143300010(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar5 == -2) || (lVar6 = param_3, plVar5[1] != param_3)) {
    return -1;
  }
  do {
    if (plVar5[1] == param_3) {
      pcVar3 = (char *)((plVar5[2] & 0xfffffffffffffffcU) + 0xc);
      lVar4 = ((*param_2 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return lVar6;
      }
    }
    lVar6 = *plVar5;
    if (lVar6 == -1) {
      return -1;
    }
    plVar5 = (longlong *)(*param_1 + 0x10 + lVar6 * 0x20);
  } while( true );
}



// FUNCTION 1433000b0 FUN_1433000b0 body=89 status=ok
// SIG undefined FUN_1433000b0(void)

undefined8 * FUN_1433000b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c5160(param_1 + 2,param_2 + 2);
  if ((RefCountImpl *)param_2[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[3]);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 143300110 FUN_143300110 body=236 status=ok
// SIG undefined FUN_143300110(void)

undefined8 * FUN_143300110(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 4;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f8c5e0;
  param_1[3] = 0;
  param_1[5] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f70a50;
  *plVar1 = (longlong)&PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f8c510;
  FUN_1432de310(param_1 + 10);
  plVar2 = (longlong *)param_1[3];
  if ((plVar2 != (longlong *)0x0) && (plVar2 != plVar1)) {
    (**(code **)(*plVar2 + 0x10))();
  }
  param_1[3] = param_2;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[9] = 0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 8))();
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return param_1;
}



// FUNCTION 143300200 FUN_143300200 body=136 status=ok
// SIG undefined FUN_143300200(void)

undefined8 * FUN_143300200(undefined8 *param_1,longlong param_2,longlong param_3,int param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af8dd8;
  FUN_1432c2fb0(param_1 + 2);
  param_1[3] = param_3;
  *(int *)(param_1 + 4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 < 1)) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



// FUNCTION 143300290 FUN_143300290 body=111 status=ok
// SIG undefined FUN_143300290(void)

undefined4 * FUN_143300290(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0x3f800000;
  param_1[10] = 0;
  FUN_1432c2f70(param_1 + 0x14);
  FUN_1432c2f70(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[9] = 1;
  return param_1;
}



// FUNCTION 143300300 FUN_143300300 body=235 status=ok
// SIG undefined FUN_143300300(void)

undefined8 *
FUN_143300300(undefined8 *param_1,longlong param_2,longlong param_3,RefCountImpl *param_4,
             undefined4 param_5,RefCountImpl *param_6)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x20002;
  *param_1 = &PTR_FUN_145af9d70;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_6 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_6);
  }
  param_1[3] = param_6;
  FUN_1432ff4d0(*(undefined8 *)(param_6 + 0x68),param_1);
  *param_1 = &PTR_FUN_145af9fa8;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  param_1[4] = param_2;
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  param_1[5] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_5;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1433003f0 FUN_1433003f0 body=183 status=ok
// SIG undefined FUN_1433003f0(void)

void FUN_1433003f0(longlong *param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar4 + 0x10 + lVar1) != -2) {
        this = *(RefCountImpl **)(lVar4 + 0x28 + lVar1);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x20 + lVar1) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar4 + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1433004b0 FUN_1433004b0 body=128 status=ok
// SIG undefined FUN_1433004b0(void)

void FUN_1433004b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  return;
}



// FUNCTION 143300530 FUN_143300530 body=128 status=ok
// SIG undefined FUN_143300530(void)

void FUN_143300530(RefCountImplCore *param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1432de450();
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1432de450();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1432de450();
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d70;
  FUN_1432ff560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),param_1);
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433005b0 FUN_1433005b0 body=141 status=ok
// SIG undefined FUN_1433005b0(void)

undefined4 * FUN_1433005b0(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = *(undefined4 *)(param_2 + 0x28);
  param_1[4] = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined4 *)(param_2 + 0x24);
  param_1[2] = (int)((*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x10)) / 20.0 + 0.5);
  param_1[3] = (int)((*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x14)) / 20.0 + 0.5);
  piVar1 = (int *)0x0;
  if (*(int *)(param_2 + 0x30) != 0) {
    piVar1 = (int *)(param_2 + 0x30);
  }
  if (piVar1 != (int *)0x0) {
    *(short *)(param_1 + 7) = (short)piVar1[6];
    param_1[8] = piVar1[7];
    return param_1;
  }
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143300660 FUN_143300660 body=114 status=ok
// SIG undefined FUN_143300660(void)

RefCountImplCore * FUN_143300660(RefCountImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1433006e0 FUN_1433006e0 body=89 status=ok
// SIG undefined FUN_1433006e0(void)

undefined8 FUN_1433006e0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::LoaderImpl::~LoaderImpl();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143300740 FUN_143300740 body=142 status=ok
// SIG undefined FUN_143300740(void)

RefCountImplCore * FUN_143300740(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9d70;
  FUN_1432ff560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),param_1);
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
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



// FUNCTION 1433007d0 FUN_1433007d0 body=89 status=ok
// SIG undefined FUN_1433007d0(void)

undefined8 FUN_1433007d0(undefined8 param_1,ulonglong param_2)

{
  FUN_143300530();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143300830 FUN_143300830 body=99 status=ok
// SIG undefined FUN_143300830(void)

RefCountImplCore * FUN_143300830(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1433008a0 FUN_1433008a0 body=298 status=ok
// SIG undefined FUN_1433008a0(void)

void FUN_1433008a0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  FUN_14207f9b0();
  if (((longlong *)*param_3 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_3, lVar1 == 0)) {
    return;
  }
  uVar5 = 0;
  uVar3 = uVar5;
  if ((ulonglong *)*param_1 != (ulonglong *)0x0) {
    uVar3 = *(ulonglong *)*param_1;
  }
  if (uVar3 < (ulonglong)(lVar1 * 5) >> 2) {
    FUN_1432f3cd0(param_1,param_2);
  }
  lVar1 = *param_3;
  if (lVar1 == 0) {
    param_3 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      uVar3 = uVar5;
      if (param_3 == (longlong *)0x0) {
        return;
      }
      lVar1 = *param_3;
      if (lVar1 == 0) {
        return;
      }
      if (*(longlong *)(lVar1 + 8) < (longlong)uVar3) {
        return;
      }
      plVar4 = (longlong *)(lVar1 + uVar3 * 0x18 + 0x20);
      FUN_1432ef070(param_1,param_2,plVar4,(longlong)*(int *)(*plVar4 + 0x10));
      uVar2 = *(ulonglong *)(*param_3 + 8);
      uVar5 = uVar3;
    } while (((longlong)uVar2 < (longlong)uVar3) || (uVar5 = uVar3 + 1, uVar2 < uVar5));
    plVar4 = (longlong *)(*param_3 + (uVar5 + (uVar3 + 2) * 2) * 8);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 1433009d0 FUN_1433009d0 body=67 status=ok
// SIG undefined FUN_1433009d0(void)

void FUN_1433009d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143301050(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143301050(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143300a20 Clear body=97 status=ok
// SIG undefined Clear(void)

void Scaleform::
     ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
     ::Clear(longlong *param_1)

{
  if (((param_1[1] != 0) && ((param_1[2] & 0xfffffffffffffffeU) != 0)) && (param_1[2] != 0)) {
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *param_1 = 0;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 143300a90 FUN_143300a90 body=86 status=ok
// SIG undefined FUN_143300a90(void)

void FUN_143300a90(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  uVar1 = param_1[2];
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 143300af0 FUN_143300af0 body=98 status=ok
// SIG undefined FUN_143300af0(void)

void FUN_143300af0(longlong param_1,longlong param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x30);
  Scaleform::Lock::DoLock(param_2 + 0x30);
  FUN_1433008a0(param_1 + 0x28,param_1 + 0x28,param_2 + 0x28);
  Scaleform::Lock::DoLock(param_2 + 0x30);
  Scaleform::Lock::DoLock(param_1 + 0x30);
  return;
}



// FUNCTION 143300b60 FUN_143300b60 body=490 status=ok
// SIG undefined FUN_143300b60(void)

void FUN_143300b60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  RefCountImpl *this;
  longlong *plVar9;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x50);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  lVar5 = 0;
  if ((lVar7 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x20), lVar5 == 0)) {
    lVar5 = Scaleform::Log::GetGlobalLog();
  }
  plVar6 = (longlong *)
           FUN_1432ff6c0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),1,
                         *(undefined8 *)(param_1 + 0x18),lVar5,plVar1);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_143300110(lVar7,plVar6,1);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1432de450();
    }
    *(undefined8 *)(param_1 + 0x40) = uVar8;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar8 = 4;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    lVar5 = 0;
    if ((lVar7 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x20), lVar5 == 0)) {
      lVar5 = Scaleform::Log::GetGlobalLog();
    }
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    this = (RefCountImpl *)(**(code **)(*plVar9 + 0x18))(plVar9,0xe);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    lVar7 = *(longlong *)(param_1 + 0x20);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
    cVar2 = FUN_14330db00(*(undefined8 *)(lVar7 + 0x40),uVar3,uVar8,this,lVar5,1);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    if (cVar2 == '\0') {
      FUN_14330fc80(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x70),4);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1432de450();
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      goto LAB_143300d12;
    }
    uVar3 = *(undefined4 *)((*(longlong **)(param_1 + 0x20))[8] + 0x50);
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x70);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))();
    Scaleform::GFx::MovieDefImpl::BindTaskData::UpdateBindingFrame(uVar8,uVar4,uVar3);
    uVar8 = 0x302;
  }
  FUN_14330fc80(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x70),uVar8);
LAB_143300d12:
  FUN_14330fd10(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x70));
  if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143300d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return;
  }
  return;
}



// FUNCTION 143300d50 FUN_143300d50 body=92 status=ok
// SIG undefined FUN_143300d50(void)

void FUN_143300d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  plVar2 = *(longlong **)(lVar1 + 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)Scaleform::Log::GetGlobalLog();
  }
  local_18[0] = 0x31000;
  (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 143300db0 FUN_143300db0 body=51 status=ok
// SIG undefined FUN_143300db0(void)

void FUN_143300db0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x1000;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 143300df0 FUN_143300df0 body=19 status=ok
// SIG undefined FUN_143300df0(void)

void FUN_143300df0(void)

{
  return;
}



// FUNCTION 143300e10 FUN_143300e10 body=75 status=ok
// SIG undefined FUN_143300e10(void)

undefined2 FUN_143300e10(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 2) {
    FUN_143396c40(param_1,2);
  }
  uVar3 = *(uint *)(param_1 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(param_1 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(param_1 + 0x60));
  *(uint *)(param_1 + 0x4c) = uVar3 + 2;
  return CONCAT11(uVar1,uVar2);
}



// FUNCTION 143300e60 FUN_143300e60 body=104 status=ok
// SIG undefined FUN_143300e60(void)

undefined4 FUN_143300e60(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) < 4) {
    FUN_143396c40(param_1,4);
  }
  uVar5 = *(uint *)(param_1 + 0x4c);
  lVar6 = *(longlong *)(param_1 + 0x60);
  uVar1 = *(undefined1 *)((ulonglong)(uVar5 + 3) + lVar6);
  uVar2 = *(undefined1 *)((ulonglong)(uVar5 + 1) + lVar6);
  uVar3 = *(undefined1 *)((ulonglong)(uVar5 + 2) + lVar6);
  uVar4 = *(undefined1 *)((ulonglong)uVar5 + lVar6);
  *(uint *)(param_1 + 0x4c) = uVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar3),uVar2),uVar4);
}



// FUNCTION 143300ed0 FUN_143300ed0 body=167 status=ok
// SIG undefined FUN_143300ed0(void)

void FUN_143300ed0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 4);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143300f80 FUN_143300f80 body=114 status=ok
// SIG undefined FUN_143300f80(void)

void FUN_143300f80(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143300ed0(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143300ed0(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143301000 FUN_143301000 body=68 status=ok
// SIG undefined FUN_143301000(void)

bool FUN_143301000(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)(param_1 >> 8) * 2);
  if (uVar1 == 0) {
    return false;
  }
  if (uVar1 == 1) {
    return true;
  }
  return (*(ushort *)(&DAT_145afe6e0 + (ulonglong)((param_1 >> 4 & 0xf) + (uint)uVar1) * 2) >>
          (param_1 & 0xf) & 1) != 0;
}



// FUNCTION 143301050 FUN_143301050 body=421 status=ok
// SIG undefined FUN_143301050(void)

void FUN_143301050(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1433003f0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_1432ffc60(&local_res20,param_2,lVar7 + 0x20,uVar3);
        if (*(RefCountImpl **)(lVar7 + 0x28) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar7 + 0x28));
        }
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143301200 FUN_143301200 body=111 status=ok
// SIG undefined FUN_143301200(void)

undefined8 * FUN_143301200(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x17;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a0;
  *(undefined4 *)(param_1 + 1) = 1;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    param_1[3] = puVar1;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143301280 FUN_143301280 body=84 status=ok
// SIG undefined FUN_143301280(void)

void FUN_143301280(RefCountImplCore *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_145afa1a0;
  if (lVar1 != 0) {
    FUN_143301e70(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1433012e0 FUN_1433012e0 body=461 status=ok
// SIG undefined FUN_1433012e0(void)

ulonglong FUN_1433012e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong local_res8;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (param_2 != 0)) {
    FUN_1432c2fb0(&local_res8);
    plVar1 = *(longlong **)(param_1 + 0x18);
    local_48 = &local_res8;
    lVar6 = 0;
    lVar5 = lVar6;
    if (*plVar1 != 0) {
      uVar3 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                            0x1505);
      lVar4 = FUN_143301c30(plVar1,&local_48,*(ulonglong *)(*plVar1 + 8) & uVar3);
      if (-1 < lVar4) {
        lVar5 = *plVar1 + 0x20 + lVar4 * 0x30;
      }
    }
    lVar4 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar4 = lVar6;
    }
    if (lVar4 == 0) {
      FUN_1432c2fb0(&local_48,param_3);
      FUN_1432c31e0(&local_38,&local_48);
      uVar3 = (ulonglong)local_48 & 0xfffffffffffffffc;
      local_30 = param_5;
      local_28 = param_6;
      local_2c = param_4;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar3 + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
      }
      local_48 = &local_res8;
      local_40 = &local_38;
      FUN_1433017c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18),&local_48);
      uVar3 = 1;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_38 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38 & 0xfffffffffffffffc);
      }
    }
    else {
      uVar3 = 0;
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433014c0 FUN_1433014c0 body=459 status=ok
// SIG undefined FUN_1433014c0(void)

ulonglong FUN_1433014c0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (param_2 != 0)) {
    FUN_1432c3480(&local_res8);
    plVar1 = *(longlong **)(param_1 + 0x18);
    local_48 = &local_res8;
    lVar7 = 0;
    lVar6 = lVar7;
    if (*plVar1 != 0) {
      uVar3 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                            0x1505);
      lVar4 = FUN_143301c30(plVar1,&local_48,*(ulonglong *)(*plVar1 + 8) & uVar3);
      if (-1 < lVar4) {
        lVar6 = *plVar1 + 0x20 + lVar4 * 0x30;
      }
    }
    lVar4 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar4 = lVar7;
    }
    if (lVar4 == 0) {
      uVar5 = FUN_1432c3480(&local_48,param_3);
      FUN_1432c31e0(&local_38,uVar5);
      uVar3 = (ulonglong)local_48 & 0xfffffffffffffffc;
      local_30 = param_5;
      local_28 = param_6;
      local_2c = param_4;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar3 + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
      }
      local_48 = &local_res8;
      local_40 = &local_38;
      FUN_1433017c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18),&local_48);
      uVar3 = 1;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_38 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38 & 0xfffffffffffffffc);
      }
    }
    else {
      uVar3 = 0;
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433016a0 FUN_1433016a0 body=284 status=ok
// SIG undefined FUN_1433016a0(void)

ulonglong FUN_1433016a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  ulonglong *local_res20;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_1432c2fb0(&local_res8,param_3);
  plVar2 = *(longlong **)(param_1 + 0x18);
  local_res20 = &local_res8;
  lVar7 = 0;
  lVar6 = lVar7;
  if (*plVar2 != 0) {
    uVar4 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                          0x1505);
    lVar5 = FUN_143301c30(plVar2,&local_res20,*(ulonglong *)(*plVar2 + 8) & uVar4);
    if (-1 < lVar5) {
      lVar6 = *plVar2 + 0x20 + lVar5 * 0x30;
    }
  }
  lVar5 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar5 = lVar7;
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  uVar4 = (ulonglong)(iVar3 - 1U);
  if (iVar3 - 1U == 0) {
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  if (lVar5 == 0) {
    return uVar4 & 0xffffffffffffff00;
  }
  FUN_1432c4d80(param_2,lVar5);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar5 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1433017c0 FUN_1433017c0 body=217 status=ok
// SIG undefined FUN_1433017c0(void)

longlong FUN_1433017c0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1432c4390((longlong)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*(ulonglong *)*param_3 & 0xfffffffffffffffc) &
                        0x7fffffffffffffff,0x1505);
  lVar3 = *param_1;
  if ((lVar3 != 0) &&
     (lVar2 = FUN_143301ce0(param_1,param_3,*(ulonglong *)(lVar3 + 8) & uVar1), -1 < lVar2)) {
    lVar3 = lVar2 * 0x30 + lVar3;
    FUN_1432c4d80(lVar3 + 0x20,*param_3);
    lVar2 = param_3[1];
    FUN_1432c4d80(lVar3 + 0x28,lVar2);
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(lVar2 + 0xc);
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar2 + 0x10);
    return lVar3 + 0x20;
  }
  lVar3 = FUN_143301a60(param_1,param_2,param_3,uVar1);
  return lVar3;
}



// FUNCTION 1433018a0 FUN_1433018a0 body=443 status=ok
// SIG undefined FUN_1433018a0(void)

longlong FUN_1433018a0(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  FUN_143301ff0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar5 = param_4 * 0x30 + lVar2;
  uVar6 = param_4;
  if (*(longlong *)(lVar5 + 0x10) == -2) {
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    FUN_1432c5160(lVar5 + 0x20,param_3);
    FUN_1432c31e0(lVar5 + 0x28,param_3 + 8);
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_3 + 0x18);
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar4 = uVar6 * 0x30 + lVar2;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar5 + 0x18) == param_4) {
      FUN_143301e00(lVar4 + 0x10,lVar5 + 0x10);
      FUN_1432c4d80(lVar5 + 0x20,param_3);
      FUN_1432c4d80(lVar5 + 0x28,param_3 + 8);
      *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_3 + 0x18);
      *(ulonglong *)(lVar5 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar5 + 0x18) * 0x30);
      uVar3 = *puVar7;
      while (uVar3 != param_4) {
        puVar7 = (ulonglong *)(lVar2 + 0x10 + *puVar7 * 0x30);
        uVar3 = *puVar7;
      }
      *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar5 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
      FUN_1432c5160(lVar4 + 0x20,lVar5 + 0x20);
      FUN_1432c31e0(lVar4 + 0x28,lVar5 + 0x28);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
      *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar5 + 0x34);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar5 + 0x38);
      *puVar7 = uVar6;
      FUN_1432c4d80(lVar5 + 0x20,param_3);
      FUN_1432c4d80(lVar5 + 0x28,param_3 + 8);
      *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_3 + 0x18);
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar5 + 0x18) = param_4;
  return lVar5 + 0x20;
}



// FUNCTION 143301a60 FUN_143301a60 body=464 status=ok
// SIG undefined FUN_143301a60(void)

longlong FUN_143301a60(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143301ab0;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_143302040(param_1,param_2,lVar5);
LAB_143301ab0:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar4 = param_4 * 0x30 + lVar5;
  uVar6 = param_4;
  if (*(longlong *)(lVar4 + 0x10) == -2) {
    FUN_143301d90(lVar4 + 0x10,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar3 = uVar6 * 0x30 + lVar5;
    } while (*(longlong *)(lVar3 + 0x10) != -2);
    if (*(ulonglong *)(lVar4 + 0x18) == param_4) {
      FUN_143301e00(lVar3 + 0x10,lVar4 + 0x10);
      FUN_1432c4d80(lVar4 + 0x20,*param_3);
      lVar5 = param_3[1];
      FUN_1432c4d80(lVar4 + 0x28,lVar5);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 8);
      *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar5 + 0xc);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar5 + 0x10);
      *(ulonglong *)(lVar4 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar4 + 0x18) * 0x30);
      uVar2 = *puVar7;
      while (uVar2 != param_4) {
        puVar7 = (ulonglong *)(lVar5 + 0x10 + *puVar7 * 0x30);
        uVar2 = *puVar7;
      }
      *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar4 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      FUN_1432c5160(lVar3 + 0x20,lVar4 + 0x20);
      FUN_1432c31e0(lVar3 + 0x28,lVar4 + 0x28);
      *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar4 + 0x30);
      *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(lVar4 + 0x34);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar4 + 0x38);
      *puVar7 = uVar6;
      FUN_1432c4d80(lVar4 + 0x20,*param_3);
      lVar5 = param_3[1];
      FUN_1432c4d80(lVar4 + 0x28,lVar5);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 8);
      *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar5 + 0xc);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar4 + 0x18) = param_4;
  return lVar4 + 0x20;
}



// FUNCTION 143301c30 FUN_143301c30 body=174 status=ok
// SIG undefined FUN_143301c30(void)

longlong FUN_143301c30(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(*param_1 + 0x10 + param_3 * 0x30);
  if ((*plVar3 != -2) && (lVar2 = param_3, plVar3[1] == param_3)) {
    while( true ) {
      if ((plVar3[1] == param_3) &&
         (iVar1 = _stricmp((char *)((plVar3[2] & 0xfffffffffffffffcU) + 0xc),
                           (char *)((*(ulonglong *)*param_2 & 0xfffffffffffffffc) + 0xc)),
         iVar1 == 0)) {
        return lVar2;
      }
      lVar2 = *plVar3;
      if (lVar2 == -1) break;
      plVar3 = (longlong *)(*param_1 + 0x10 + lVar2 * 0x30);
    }
  }
  return -1;
}



// FUNCTION 143301ce0 FUN_143301ce0 body=162 status=ok
// SIG undefined FUN_143301ce0(void)

longlong FUN_143301ce0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(*param_1 + 0x10 + param_3 * 0x30);
  if ((*plVar6 == -2) || (lVar5 = param_3, plVar6[1] != param_3)) {
    return -1;
  }
  do {
    if (plVar6[1] == param_3) {
      pcVar3 = (char *)((plVar6[2] & 0xfffffffffffffffcU) + 0xc);
      lVar4 = ((*(ulonglong *)*param_2 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return lVar5;
      }
    }
    lVar5 = *plVar6;
    if (lVar5 == -1) {
      return -1;
    }
    plVar6 = (longlong *)(*param_1 + 0x10 + lVar5 * 0x30);
  } while( true );
}



// FUNCTION 143301d90 FUN_143301d90 body=97 status=ok
// SIG undefined FUN_143301d90(void)

undefined8 * FUN_143301d90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_3;
  param_1[1] = 0;
  FUN_1432c5160(param_1 + 2,*param_2);
  lVar1 = param_2[1];
  FUN_1432c31e0(param_1 + 3,lVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x10);
  return param_1;
}



// FUNCTION 143301e00 FUN_143301e00 body=98 status=ok
// SIG undefined FUN_143301e00(void)

undefined8 * FUN_143301e00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c5160(param_1 + 2,param_2 + 2);
  FUN_1432c31e0(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 143301e70 FUN_143301e70 body=209 status=ok
// SIG undefined FUN_143301e70(void)

void FUN_143301e70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar3;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x28) & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar1 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x20) & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar1 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143301f50 FUN_143301f50 body=160 status=ok
// SIG undefined FUN_143301f50(void)

RefCountImplCore * FUN_143301f50(RefCountImplCore *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined ***)param_1 = &PTR_FUN_145afa1a0;
  if (lVar1 != 0) {
    FUN_143301e70(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
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



// FUNCTION 143301ff0 FUN_143301ff0 body=67 status=ok
// SIG undefined FUN_143301ff0(void)

void FUN_143301ff0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143302040(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143302040(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143302040 FUN_143302040 body=491 status=ok
// SIG undefined FUN_143302040(void)

void FUN_143302040(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143301e70();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar7 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x30 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar8 = lVar7;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar8 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar8 = lVar8 + 0x30;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar8 = *param_1 + lVar7;
      if (*(longlong *)(lVar8 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_1433018a0(&local_res20,param_2,lVar8 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        uVar6 = *(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar8 + 0x10) = 0xfffffffffffffffe;
      }
      lVar7 = lVar7 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  local_res20 = (undefined8 *)0x0;
  FUN_143301e70(&local_res20);
  return;
}



// FUNCTION 143302230 FUN_143302230 body=384 status=ok
// SIG undefined FUN_143302230(void)

undefined8 * FUN_143302230(undefined8 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char *_Dst;
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar4;
  longlong lVar3;
  
  puVar4 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afa1a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145afa270;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_2 == (char *)0x0) {
    param_1[7] = 0;
  }
  else {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_2[lVar2] != '\0');
    _Dst = (char *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar3 + 2,0);
    param_1[7] = _Dst;
    lVar2 = -1;
    if (_Dst != (char *)0x0) {
      do {
        lVar3 = lVar2;
        lVar2 = lVar3 + 1;
      } while (param_2[lVar3 + 1] != '\0');
      strcpy_s(_Dst,lVar3 + 2,param_2);
    }
  }
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_145afa268;
    *(undefined4 *)(puVar1 + 2) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 3;
    *(undefined4 *)(puVar1 + 3) = 0x400;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x400;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 1;
    FUN_143302e40(puVar1 + 4,param_4);
    puVar4 = puVar1;
  }
  if ((RefCountNTSImpl *)param_1[8] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[8]);
  }
  param_1[8] = puVar4;
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x7000;
  return param_1;
}



// FUNCTION 1433023c0 FUN_1433023c0 body=186 status=ok
// SIG undefined FUN_1433023c0(void)

void FUN_1433023c0(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145afa270;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
  }
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Scaleform::Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143302480 FUN_143302480 body=287 status=ok
// SIG undefined FUN_143302480(void)

void FUN_143302480(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_3 + 0x18);
  local_40 = 1;
  local_48 = &PTR_FUN_145afa260;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  local_10 = 0xffffffff;
  uVar3 = (ulonglong)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = *param_5;
  local_14 = param_5[1];
  local_38 = plVar1;
  Scaleform::GFx::TextureGlyphData::AddTextureGlyph(*(undefined8 *)(param_1 + 0x40),uVar3,&local_48)
  ;
  if (*(ulonglong *)(param_1 + 0x58) <= uVar3) {
    FUN_143302dc0(param_1 + 0x50,param_2 + 1);
    if (*(ulonglong *)(param_1 + 0x58) <= uVar3) goto LAB_14330256d;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(lVar2 + uVar3 * 0xc) = *param_6;
  *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = *(undefined4 *)(param_6 + 1);
LAB_14330256d:
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_48);
  return;
}



// FUNCTION 143302610 FUN_143302610 body=142 status=ok
// SIG undefined FUN_143302610(void)

ulonglong FUN_143302610(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    uVar1 = *(ulonglong *)(lVar3 + 8);
    uVar5 = param_2 & uVar1;
    puVar2 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar3);
    if ((*puVar2 != 0xfffffffffffffffe) && (uVar4 = uVar5, ((ushort)puVar2[1] & uVar1) == uVar5)) {
      while ((((ushort)puVar2[1] & uVar1) != uVar5 || ((ushort)puVar2[1] != param_2))) {
        uVar4 = *puVar2;
        if (uVar4 == 0xffffffffffffffff) {
          return 0xffffffff;
        }
        puVar2 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar3);
      }
      if ((-1 < (longlong)uVar4) && (lVar3 = lVar3 + 0x18 + uVar4 * 0x10, lVar3 != 0)) {
        return (ulonglong)*(ushort *)(lVar3 + 2);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1433026b0 FUN_1433026b0 body=186 status=ok
// SIG undefined FUN_1433026b0(void)

ulonglong FUN_1433026b0(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)(param_1 + 0x48);
  plVar4 = (longlong *)*plVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    puVar1 = (ulonglong *)(plVar4 + 1);
    uVar6 = 0;
    do {
      plVar4 = plVar4 + 2;
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *puVar1);
  }
  do {
    do {
      uVar5 = uVar6;
      if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar5)) {
        return 0xffffffff;
      }
      if (*(ushort *)(lVar2 + 0x1a + uVar5 * 0x10) == param_2) {
        return (ulonglong)*(ushort *)(lVar2 + 0x18 + uVar5 * 0x10);
      }
      uVar3 = *(ulonglong *)(lVar2 + 8);
      uVar6 = uVar5;
    } while (((longlong)uVar3 < (longlong)uVar5) || (uVar6 = uVar5 + 1, uVar3 < uVar6));
    plVar4 = (longlong *)((uVar5 + 2) * 0x10 + lVar2);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 2;
    } while (uVar6 <= uVar3);
  } while( true );
}



// FUNCTION 143302820 FUN_143302820 body=254 status=ok
// SIG undefined FUN_143302820(void)

float * FUN_143302820(longlong *param_1,uint param_2,float *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 0xffffffff) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    fVar5 = (float)(**(code **)(*param_1 + 0x28))(param_1,0xffffffff);
    param_3[2] = fVar5 + *param_3;
    fVar5 = (float)(**(code **)(*param_1 + 0x30))(param_1,0xffffffff);
    param_3[3] = fVar5 + param_3[1];
    return param_3;
  }
  uVar4 = (ulonglong)param_2;
  if ((ulonglong)param_1[0xb] <= uVar4) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    return param_3;
  }
  lVar3 = param_1[10];
  fVar5 = (float)*(ushort *)(lVar3 + 8 + uVar4 * 0xc) / 20.0;
  if (fVar5 == 0.0) {
    fVar5 = *(float *)(lVar3 + uVar4 * 0xc);
  }
  uVar1 = *(ushort *)(lVar3 + 10 + uVar4 * 0xc);
  fVar6 = (float)(int)*(short *)(lVar3 + 4 + uVar4 * 0xc) / 20.0;
  *param_3 = fVar6;
  sVar2 = *(short *)(lVar3 + 6 + uVar4 * 0xc);
  param_3[2] = fVar5 + fVar6;
  fVar5 = (float)(int)sVar2 / 20.0;
  param_3[1] = fVar5;
  param_3[3] = (float)uVar1 / 20.0 + fVar5;
  return param_3;
}



// FUNCTION 143302920 FUN_143302920 body=100 status=ok
// SIG undefined FUN_143302920(void)

void FUN_143302920(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x40 + lVar2 * 0x40);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    (**(code **)*puVar1)(puVar1,0);
    puVar1 = puVar1 + -8;
  }
                    /* WARNING: Could not recover jumptable at 0x000143302980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143302990 FUN_143302990 body=140 status=ok
// SIG undefined FUN_143302990(void)

void FUN_143302990(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1 + lVar3;
      if (*(longlong *)(lVar1 + 0x10) != -2) {
        if ((*(int *)(lVar1 + 0x28) == 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
          FUN_1432de450();
        }
        *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143302a20 FUN_143302a20 body=111 status=ok
// SIG undefined FUN_143302a20(void)

RefCountImplCore * FUN_143302a20(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145afa1a8;
  Scaleform::Render::FontCacheHandleRef::releaseFont(param_1 + 0x28);
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



// FUNCTION 143302a90 FUN_143302a90 body=89 status=ok
// SIG undefined FUN_143302a90(void)

undefined8 FUN_143302a90(undefined8 param_1,ulonglong param_2)

{
  FUN_1433023c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143302af0 FUN_143302af0 body=107 status=ok
// SIG undefined FUN_143302af0(void)

RefCountImplCore * FUN_143302af0(RefCountImplCore *param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143302b60 FUN_143302b60 body=110 status=ok
// SIG undefined FUN_143302b60(void)

RefCountNTSImplCore * FUN_143302b60(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  FUN_143302990(param_1 + 0x38);
  FUN_143302920(param_1 + 0x20);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143302bd0 FUN_143302bd0 body=33 status=ok
// SIG undefined FUN_143302bd0(void)

undefined8 FUN_143302bd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1432c2fb0(param_2,&DAT_145af3922);
  return param_2;
}



// FUNCTION 143302c60 FUN_143302c60 body=165 status=ok
// SIG undefined FUN_143302c60(void)

void FUN_143302c60(longlong *param_1,undefined8 param_2,longlong param_3)

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
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0xc,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143302d10 FUN_143302d10 body=164 status=ok
// SIG undefined FUN_143302d10(void)

void FUN_143302d10(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x105;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143302dc0 FUN_143302dc0 body=114 status=ok
// SIG undefined FUN_143302dc0(void)

void FUN_143302dc0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143302c60(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143302c60(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143302e40 FUN_143302e40 body=152 status=ok
// SIG undefined FUN_143302e40(void)

void FUN_143302e40(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = param_1[1];
  FUN_143302ee0();
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(uVar1 * 0x40 + *param_1);
    lVar4 = param_2 - uVar1;
    if (lVar4 != 0) {
      puVar3 = puVar2 + 5;
      do {
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[1] = 0;
          *puVar2 = &PTR_FUN_144f70a50;
          *(undefined4 *)(puVar3 + -4) = 1;
          *puVar2 = &PTR_FUN_145afa260;
          puVar3[-3] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 2) = 0xffffffff;
        }
        puVar2 = puVar2 + 8;
        puVar3 = puVar3 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143302ee0 FUN_143302ee0 body=177 status=ok
// SIG undefined FUN_143302ee0(void)

void FUN_143302ee0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x40 + (lVar2 + param_3) * 0x40);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      (**(code **)*puVar1)(puVar1,0);
      puVar1 = puVar1 + -8;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143302d10(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143302d10(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143302fa0 FUN_143302fa0 body=146 status=ok
// SIG undefined FUN_143302fa0(void)

void FUN_143302fa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_2 = 0;
  uVar3 = param_1 + 0xfffU & 0xfffffffffffff000;
  param_2[1] = 0;
  uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar3 - uVar4;
  uVar6 = param_1 + 0x1000U & 0xfffffffffffffff0;
  if (0x10 < uVar5) {
    *param_2 = uVar3 - 0x10;
  }
  param_2[3] = uVar4;
  uVar2 = uVar6 - uVar3;
  param_2[4] = uVar6;
  param_2[5] = uVar3;
  param_2[6] = 0;
  uVar4 = param_2[1];
  if (0x10 < uVar2) {
    uVar4 = uVar3;
  }
  param_2[1] = uVar4;
  lVar1 = 0x10;
  if (uVar2 < uVar5) {
    lVar1 = -0x50;
  }
  param_2[2] = lVar1 + uVar3;
  return;
}



// FUNCTION 143303040 FUN_143303040 body=112 status=ok
// SIG undefined FUN_143303040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143303040(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  FUN_1432bdc50(param_1 + 1,0);
  puVar1 = param_1 + 7;
  *puVar1 = puVar1;
  param_1[8] = puVar1;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar1 = &DAT_146b63a88;
  param_1[10] = 0;
  _DAT_1467cdf40 = 0;
  uRam00000001467cdf48 = 0;
  do {
    puVar1[-1] = &DAT_1467cdf30;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((longlong)puVar1 < 0x146b64288);
  DAT_146b63a70 = param_1;
  return param_1;
}



// FUNCTION 1433030c0 ~RootMH body=39 status=ok
// SIG undefined ~RootMH(void)

void Scaleform::HeapMH::RootMH::~RootMH(longlong param_1)

{
  FUN_1433030f0();
  DAT_146b63a70 = 0;
  Lock::~Lock(param_1 + 8);
  return;
}



// FUNCTION 1433030f0 FUN_1433030f0 body=129 status=ok
// SIG undefined FUN_1433030f0(void)

void FUN_1433030f0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = &DAT_146b63a88;
  lVar2 = 0x80;
  do {
    if ((undefined *)plVar1[-1] != &DAT_1467cdf30) {
      (**(code **)(*(longlong *)*param_1 + 0x20))
                ((longlong *)*param_1,(undefined *)plVar1[-1],(*plVar1 + 1) * 0x20,8);
    }
    plVar1[-1] = (longlong)&DAT_1467cdf30;
    *plVar1 = 0;
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143303180 FUN_143303180 body=330 status=ok
// SIG undefined FUN_143303180(void)

longlong FUN_143303180(undefined8 *param_1,void *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar8 = -1;
  do {
    lVar5 = lVar8;
    lVar8 = lVar5 + 1;
  } while (*(char *)((longlong)param_2 + lVar8) != '\0');
  uVar9 = lVar5 + 0x349U & 0xfffffffffffffff0;
  lVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,uVar9,8);
  lVar8 = 0;
  if (lVar5 != 0) {
    lVar8 = UMovieScene3DConstraintSection::UMovieScene3DConstraintSection(lVar5);
    uVar6 = 0;
    if (lVar5 + 0xe0 != 0) {
      uVar6 = FUN_143303760(lVar5 + 0xe0,*param_1,lVar8,*(undefined8 *)(param_4 + 2),
                            *(undefined8 *)(param_4 + 10));
    }
    *(ulonglong *)(lVar8 + 0x18) = uVar9;
    *(undefined4 *)(lVar8 + 0x20) = 1;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    uVar2 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)param_4;
    *(undefined8 *)(lVar8 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(lVar8 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(lVar8 + 0x60) = uVar2;
    uVar2 = *(undefined8 *)(param_4 + 0xc);
    uVar3 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(lVar8 + 0x78) = param_3;
    *(void **)(lVar8 + 0x80) = (void *)(lVar5 + 0x338);
    *(undefined8 *)(lVar8 + 0x68) = uVar2;
    *(undefined8 *)(lVar8 + 0x70) = uVar3;
    *(byte *)(lVar8 + 200) = ~(byte)*param_4 & 1;
    uVar1 = *param_4;
    *(undefined8 *)(lVar8 + 0xd0) = uVar6;
    *(byte *)(lVar8 + 0xc9) = ~(byte)(uVar1 >> 4) & 1;
    lVar4 = -1;
    do {
      lVar7 = lVar4;
      lVar4 = lVar7 + 1;
    } while (*(char *)((longlong)param_2 + lVar7 + 1) != '\0');
    _guard_xfg_dispatch_icall_nop((void *)(lVar5 + 0x338),param_2,lVar7 + 2);
  }
  return lVar8;
}



// FUNCTION 1433032d0 FUN_1433032d0 body=84 status=ok
// SIG undefined FUN_1433032d0(void)

void FUN_1433032d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[3];
  FUN_1433037e0(param_2[0x1a]);
  (**(code **)*param_2)(param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000143303320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_2,uVar1,8);
  return;
}



// FUNCTION 143303330 FUN_143303330 body=269 status=ok
// SIG undefined FUN_143303330(void)

longlong * FUN_143303330(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if ((undefined8 *)param_1[8] == param_1 + 7) {
    cVar2 = FUN_1433035b0();
    if (cVar2 == '\0') {
      return (longlong *)0x0;
    }
  }
  plVar1 = (longlong *)param_1[8];
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,0x1000,8);
  plVar1[3] = lVar3;
  if (lVar3 == 0) {
    plVar1[2] = 0;
    return (longlong *)0x0;
  }
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  *(longlong *)plVar1[1] = *plVar1;
  lVar3 = plVar1[3];
  *plVar1 = -1;
  plVar1[1] = -1;
  plVar1[2] = param_2;
  puVar6 = (undefined2 *)(lVar3 + 0xfffU & 0xfffffffffffff000);
  puVar5 = puVar6 + -8;
  if ((longlong)puVar6 - (lVar3 + 0xfU & 0xfffffffffffffff0) < 0x11) {
    puVar5 = (undefined2 *)0x0;
  }
  puVar4 = (undefined2 *)0x0;
  if (0x10 < (lVar3 + 0x1000U & 0xfffffffffffffff0) - (longlong)puVar6) {
    puVar4 = puVar6;
  }
  if (puVar5 != (undefined2 *)0x0) {
    *puVar5 = 0x5fc0;
  }
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0x5fc0;
  }
  return plVar1;
}



// FUNCTION 143303450 FUN_143303450 body=96 status=ok
// SIG undefined FUN_143303450(void)

void FUN_143303450(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1433036f0(param_2[3]);
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_2[2] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,uVar2,0x1000,8);
  plVar1 = param_1 + 7;
  *param_2 = param_1[7];
  param_2[1] = plVar1;
  *(undefined8 **)(*plVar1 + 8) = param_2;
  *plVar1 = (longlong)param_2;
  return;
}



// FUNCTION 1433034c0 GetPageIndex body=75 status=ok
// SIG undefined GetPageIndex(void)

ulonglong Scaleform::HeapMH::RootMH::GetPageIndex(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x48) != 0) {
    plVar2 = &DAT_146b63a80;
    do {
      uVar1 = param_2 - *plVar2 >> 5;
      if (uVar1 <= (ulonglong)plVar2[1]) {
        return uVar1 << 7 | (ulonglong)uVar3;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (uVar3 < *(uint *)(param_1 + 0x48));
  }
  return 0xffffffff;
}



// FUNCTION 143303520 FUN_143303520 body=132 status=ok
// SIG undefined FUN_143303520(void)

longlong FUN_143303520(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short *psVar3;
  
  psVar3 = (short *)(param_2 & 0xfffffffffffff000);
  if (((*psVar3 != 0x5fc0) ||
      (uVar2 = (ulonglong)(*(uint *)(psVar3 + 2) & 0x7f),
      lVar1 = ((ulonglong)(*(uint *)(psVar3 + 2) >> 7) & (&DAT_146b63a88)[uVar2 * 2]) * 0x20 +
              (&DAT_146b63a80)[uVar2 * 2], 0xfff < param_2 - *(longlong *)(lVar1 + 0x18))) &&
     ((psVar3[0x7f8] != 0x5fc0 ||
      (uVar2 = (ulonglong)(*(uint *)(psVar3 + 0x7fa) & 0x7f),
      lVar1 = ((ulonglong)(*(uint *)(psVar3 + 0x7fa) >> 7) & (&DAT_146b63a88)[uVar2 * 2]) * 0x20 +
              (&DAT_146b63a80)[uVar2 * 2], 0xfff < param_2 - *(longlong *)(lVar1 + 0x18))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1433035b0 FUN_1433035b0 body=198 status=ok
// SIG undefined FUN_1433035b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1433035b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0x7f < *(uint *)(param_1 + 9)) {
    _DAT_00000004 = 0;
    return 0;
  }
  lVar3 = (longlong)(0x80 << ((byte)(*(uint *)(param_1 + 9) >> 4) & 0x1f));
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,lVar3 << 5,8);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  (&DAT_146b63a80)[(ulonglong)*(uint *)(param_1 + 9) * 2] = plVar2;
  (&DAT_146b63a88)[(ulonglong)*(uint *)(param_1 + 9) * 2] = lVar3 + -1;
  if (lVar3 != 0) {
    plVar1 = param_1 + 7;
    do {
      plVar2[2] = 0;
      plVar2[3] = 0;
      *plVar2 = *plVar1;
      plVar2[1] = (longlong)plVar1;
      *(longlong **)(*plVar1 + 8) = plVar2;
      *plVar1 = (longlong)plVar2;
      plVar2 = plVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  return 1;
}



// FUNCTION 143303680 FUN_143303680 body=102 status=ok
// SIG undefined FUN_143303680(void)

void FUN_143303680(longlong param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(param_1 + 0xfffU & 0xfffffffffffff000);
  puVar2 = puVar3 + -8;
  if ((longlong)puVar3 - (param_1 + 0xfU & 0xfffffffffffffff0) < 0x11) {
    puVar2 = (undefined2 *)0x0;
  }
  puVar1 = (undefined2 *)0x0;
  if (0x10 < (param_1 + 0x1000U & 0xfffffffffffffff0) - (longlong)puVar3) {
    puVar1 = puVar3;
  }
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = param_2;
  }
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 1433036f0 FUN_1433036f0 body=112 status=ok
// SIG undefined FUN_1433036f0(void)

void FUN_1433036f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0xfffU & 0xfffffffffffff000);
  puVar2 = puVar3 + -2;
  if ((longlong)puVar3 - (param_1 + 0xfU & 0xfffffffffffffff0) < 0x11) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)0x0;
  if (0x10 < (param_1 + 0x1000U & 0xfffffffffffffff0) - (longlong)puVar3) {
    puVar1 = puVar3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 143303760 FUN_143303760 body=106 status=ok
// SIG undefined FUN_143303760(void)

undefined8 *
FUN_143303760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_4 < 8) {
    param_4 = 8;
  }
  param_1[2] = param_4;
  FUN_1433a18f0();
  puVar1 = param_1 + 0x44;
  *puVar1 = puVar1;
  param_1[0x45] = puVar1;
  param_1[0x48] = param_5;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 1433037e0 FUN_1433037e0 body=3 status=ok
// SIG undefined FUN_1433037e0(void)

void FUN_1433037e0(void)

{
  return;
}



// FUNCTION 1433037f0 FUN_1433037f0 body=257 status=ok
// SIG undefined FUN_1433037f0(void)

longlong FUN_1433037f0(longlong param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  char local_res8 [8];
  
  if (0x10 < *(ulonglong *)(param_1 + 0x10)) {
    lVar1 = FUN_143303900();
    return lVar1;
  }
  if (0x200 < param_2) {
    if (param_4 == '\0') {
      lVar1 = DAT_146b63a70 + 8;
      Scaleform::Lock::DoLock(lVar1);
      local_res8[0] = '\0';
      do {
        lVar2 = FUN_1433042e0(param_1,param_2,*(undefined8 *)(param_1 + 0x10),local_res8,param_3);
        if (lVar2 != 0) {
          Scaleform::Lock::DoLock(lVar1);
          return lVar2;
        }
      } while (local_res8[0] != '\0');
      Scaleform::Lock::DoLock(lVar1);
    }
    else {
      local_res8[0] = '\0';
      do {
        lVar1 = FUN_1433042e0(param_1,param_2,*(undefined8 *)(param_1 + 0x10),local_res8,param_3);
        if (lVar1 != 0) {
          return lVar1;
        }
      } while (local_res8[0] != '\0');
    }
    return 0;
  }
  lVar1 = FUN_143304510(param_1,param_2 + 0xf & 0xfffffffffffffff0,param_3);
  return lVar1;
}



// FUNCTION 143303900 FUN_143303900 body=282 status=ok
// SIG undefined FUN_143303900(void)

longlong FUN_143303900(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                      char param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char local_res10 [8];
  
  if (param_2 < 0x201) {
    uVar4 = 0x10;
    if (0xf < param_3) {
      uVar4 = param_3;
    }
    lVar1 = FUN_1433045e0(param_1,param_2 + 0xf & 0xfffffffffffffff0,uVar4);
    return lVar1;
  }
  uVar4 = 8;
  if (7 < param_3) {
    uVar4 = param_3;
  }
  if (param_2 < uVar4) {
    param_2 = uVar4;
  }
  uVar3 = param_2 + 7 & 0xfffffffffffffff8;
  if (param_5 == '\0') {
    lVar1 = DAT_146b63a70 + 8;
    Scaleform::Lock::DoLock(lVar1);
    local_res10[0] = '\0';
    do {
      lVar2 = FUN_1433042e0(param_1,uVar3,uVar4,local_res10,param_4);
      if (lVar2 != 0) {
        Scaleform::Lock::DoLock(lVar1);
        return lVar2;
      }
    } while (local_res10[0] != '\0');
    Scaleform::Lock::DoLock(lVar1);
  }
  else {
    local_res10[0] = '\0';
    do {
      lVar1 = FUN_1433042e0(param_1,uVar3,uVar4,local_res10,param_4);
      if (lVar1 != 0) {
        return lVar1;
      }
    } while (local_res10[0] != '\0');
  }
  return 0;
}



// FUNCTION 143303a20 FUN_143303a20 body=136 status=ok
// SIG undefined FUN_143303a20(void)

longlong FUN_143303a20(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_res20;
  undefined1 local_48 [48];
  undefined8 local_18;
  
  if (param_4 < 0x800) {
    uVar2 = param_4 + 0xf & 0xfffffffffffffff0;
    lVar1 = FUN_1433a1f90(param_1 + 0x18,param_2,param_3,uVar2,&local_res20,local_48);
    if (lVar1 != 0) {
      param_5[2] = uVar2;
      *param_5 = local_18;
      param_5[1] = 0;
      *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) + (uVar2 - local_res20);
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 143303ab0 FUN_143303ab0 body=155 status=ok
// SIG undefined FUN_143303ab0(void)

undefined8
FUN_143303ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,char param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_146b63a70;
  if (param_6 == '\0') {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    uVar2 = FUN_1433046c0(param_1,param_2,param_3,param_4 + 7U & 0xfffffffffffffff8,param_5);
    Scaleform::Lock::DoLock(lVar1 + 8);
  }
  else {
    uVar2 = FUN_1433046c0();
  }
  return uVar2;
}



// FUNCTION 143303b60 ReallocGeneral body=155 status=ok
// SIG undefined ReallocGeneral(void)

void * Scaleform::HeapMH::AllocEngineMH::ReallocGeneral
                 (longlong param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                 longlong param_5,undefined1 param_6)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  _Dst = (void *)FUN_1433037f0(param_1,param_4,param_5,param_6);
  if (_Dst != (void *)0x0) {
    uVar1 = FUN_1433a23d0(param_1 + 0x18,param_2,param_3);
    _Size = *(ulonglong *)(param_5 + 0x10);
    if (uVar1 < *(ulonglong *)(param_5 + 0x10)) {
      _Size = uVar1;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
    FUN_143303d60(param_1,param_2,param_3,param_6);
  }
  return _Dst;
}



// FUNCTION 143303c10 FUN_143303c10 body=328 status=ok
// SIG undefined FUN_143303c10(void)

void * FUN_143303c10(longlong param_1,void *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  lVar2 = FUN_143303520(DAT_146b63a70);
  lVar1 = DAT_146b63a70;
  if (lVar2 == 0) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    lVar2 = DAT_146b63a70;
    uVar4 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
    uVar3 = param_3 + 7U & 0xfffffffffffffff8;
    if (param_4 == '\0') {
      Scaleform::Lock::DoLock(lVar2 + 8);
      _Dst = (void *)FUN_1433046c0(param_1,uVar4,param_2,uVar3,local_38);
      Scaleform::Lock::DoLock(lVar2 + 8);
    }
    else {
      _Dst = (void *)FUN_1433046c0(param_1,uVar4,param_2,uVar3,local_38);
    }
    Scaleform::Lock::DoLock(lVar1 + 8);
  }
  else {
    _Dst = (void *)FUN_1433037f0(param_1,param_3,local_38,param_4);
    if (_Dst != (void *)0x0) {
      uVar3 = FUN_1433a23d0(param_1 + 0x18,lVar2,param_2);
      if (uVar3 < local_28) {
        local_28 = uVar3;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,local_28);
      FUN_143303d60(param_1,lVar2,param_2,param_4);
    }
  }
  return _Dst;
}



// FUNCTION 143303d60 FUN_143303d60 body=149 status=ok
// SIG undefined FUN_143303d60(void)

void FUN_143303d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  short sVar1;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_1433a2230();
  sVar1 = 0;
  *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) - local_res8;
  if (local_48 != 0) {
    *(short *)(local_48 + 2) = *(short *)(local_48 + 2) + -1;
    sVar1 = *(short *)(local_48 + 2);
  }
  if (local_40 != 0) {
    *(short *)(local_40 + 2) = *(short *)(local_40 + 2) + -1;
    sVar1 = *(short *)(local_40 + 2);
  }
  if (sVar1 == 0) {
    FUN_143304430(param_1,param_2,param_4);
  }
  *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + -1;
  return;
}



// FUNCTION 143303e00 FUN_143303e00 body=149 status=ok
// SIG undefined FUN_143303e00(void)

void FUN_143303e00(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_143304920(DAT_146b63a70 + 0x50);
  uVar1 = (uint)*(undefined8 *)(param_2 + 0x18) & 3;
  if (uVar1 < 3) {
    uVar3 = 1L << (char)uVar1 + 2;
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
  }
  lVar2 = 0x20;
  if (0x10 < uVar3) {
    lVar2 = 0x28;
  }
  param_1[0x4a] = param_1[0x4a] + -1;
  param_2 = (lVar2 - param_3) + param_2;
  param_1[0x46] = param_1[0x46] - param_2;
  param_1[0x47] = param_1[0x47] + (lVar2 - param_2);
                    /* WARNING: Could not recover jumptable at 0x000143303e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_3);
  return;
}



// FUNCTION 143303ea0 FUN_143303ea0 body=206 status=ok
// SIG undefined FUN_143303ea0(void)

void FUN_143303ea0(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_143303520(DAT_146b63a70);
  lVar1 = DAT_146b63a70;
  if (lVar2 != 0) {
    FUN_143303d60(param_1,lVar2,param_2,param_3);
    return;
  }
  if (param_3 != '\0') {
    uVar3 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
    FUN_143303e00(param_1,uVar3,param_2,1);
    return;
  }
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  uVar3 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
  FUN_143303e00(param_1,uVar3,param_2,0);
  Scaleform::Lock::DoLock(lVar1 + 8);
  return;
}



// FUNCTION 143303fc0 FUN_143303fc0 body=56 status=ok
// SIG undefined FUN_143303fc0(void)

void FUN_143303fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar1 = FUN_1433a23d0(param_1 + 0x18);
  *param_4 = param_2;
  param_4[2] = uVar1;
  return;
}



// FUNCTION 143304000 FUN_143304000 body=20 status=ok
// SIG undefined FUN_143304000(void)

void FUN_143304000(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = param_2;
  param_4[2] = param_2 - param_3;
  return;
}



// FUNCTION 143304020 FUN_143304020 body=132 status=ok
// SIG undefined FUN_143304020(void)

longlong FUN_143304020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_143303520(DAT_146b63a70);
  lVar2 = DAT_146b63a70;
  if (lVar1 != 0) {
    lVar2 = FUN_1433a23d0(param_1 + 0x18,lVar1,param_2);
    return lVar2;
  }
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  lVar1 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
  Scaleform::Lock::DoLock(lVar2 + 8);
  return lVar1 - param_2;
}



// FUNCTION 1433040b0 FUN_1433040b0 body=265 status=ok
// SIG undefined FUN_1433040b0(void)

longlong * FUN_1433040b0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = DAT_146b63a70;
  if (((*(ulonglong *)(param_1 + 0x240) != 0) &&
      (*(ulonglong *)(param_1 + 0x240) < *(longlong *)(param_1 + 0x230) + 0x1000U)) &&
     (*(longlong *)(param_1 + 0x248) != 0)) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    *piVar1 = *piVar1 + 1;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x248) + 8))
                      (*(longlong **)(param_1 + 0x248),*(undefined8 *)(param_1 + 8),
                       (*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x240)) + 0x1000);
    *param_2 = uVar3;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    *piVar1 = *piVar1 + -1;
    Scaleform::Lock::DoLock(lVar2 + 8);
  }
  *param_2 = 0;
  plVar5 = (longlong *)FUN_143303330(DAT_146b63a70,*(undefined8 *)(param_1 + 8));
  if (plVar5 != (longlong *)0x0) {
    uVar4 = Scaleform::HeapMH::RootMH::GetPageIndex(DAT_146b63a70,plVar5);
    FUN_1433a1910(param_1 + 0x18,plVar5,uVar4);
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x230) + 0x1000;
    plVar5[1] = *(longlong *)(param_1 + 0x228);
    *plVar5 = param_1 + 0x220;
    **(undefined8 **)(param_1 + 0x228) = plVar5;
    *(longlong **)(param_1 + 0x228) = plVar5;
    *param_2 = 1;
  }
  return plVar5;
}



// FUNCTION 1433041c0 FUN_1433041c0 body=275 status=ok
// SIG undefined FUN_1433041c0(void)

longlong * FUN_1433041c0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if (((*(ulonglong *)(param_1 + 0x240) != 0) &&
      (*(ulonglong *)(param_1 + 0x240) < *(longlong *)(param_1 + 0x230) + 0x1000U)) &&
     (*(longlong *)(param_1 + 0x248) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    *piVar1 = *piVar1 + 1;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x248) + 8))
                      (*(longlong **)(param_1 + 0x248),*(undefined8 *)(param_1 + 8),
                       (*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x240)) + 0x1000);
    *param_2 = uVar3;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    *piVar1 = *piVar1 + -1;
  }
  *param_2 = 0;
  lVar2 = DAT_146b63a70;
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  plVar5 = (longlong *)FUN_143303330(DAT_146b63a70,*(undefined8 *)(param_1 + 8));
  if (plVar5 != (longlong *)0x0) {
    uVar4 = Scaleform::HeapMH::RootMH::GetPageIndex(DAT_146b63a70,plVar5);
    FUN_1433a1910(param_1 + 0x18,plVar5,uVar4);
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x230) + 0x1000;
    plVar5[1] = *(longlong *)(param_1 + 0x228);
    *plVar5 = param_1 + 0x220;
    **(undefined8 **)(param_1 + 0x228) = plVar5;
    *(longlong **)(param_1 + 0x228) = plVar5;
    *param_2 = 1;
  }
  Scaleform::Lock::DoLock(lVar2 + 8);
  return plVar5;
}



// FUNCTION 1433042e0 FUN_1433042e0 body=320 status=ok
// SIG undefined FUN_1433042e0(void)

longlong FUN_1433042e0(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined1 *param_4,
                      undefined8 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = DAT_146b63a70;
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  lVar5 = 0x20;
  if (0x10 < param_3) {
    lVar5 = 0x28;
  }
  if (((param_1[0x48] != 0) && ((ulonglong)param_1[0x48] < param_1[0x46] + lVar5 + uVar4)) &&
     (param_1[0x49] != 0)) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    *(int *)(param_1[0x49] + 8) = *(int *)(param_1[0x49] + 8) + 1;
    uVar1 = (**(code **)(*(longlong *)param_1[0x49] + 8))
                      ((longlong *)param_1[0x49],param_1[1],
                       (param_1[0x46] - param_1[0x48]) + lVar5 + uVar4);
    *param_4 = uVar1;
    *(int *)(param_1[0x49] + 8) = *(int *)(param_1[0x49] + 8) + -1;
    Scaleform::Lock::DoLock(lVar2 + 8);
  }
  *param_4 = 0;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,lVar5 + uVar4,param_3);
  if (lVar2 != 0) {
    uVar3 = FUN_143304870(DAT_146b63a70,lVar2,uVar4,param_3,param_1[1]);
    param_5[1] = uVar3;
    param_5[2] = uVar4;
    *param_5 = 0;
    param_1[0x46] = param_1[0x46] + lVar5 + uVar4;
    param_1[0x4a] = param_1[0x4a] + 1;
    param_1[0x47] = param_1[0x47] + uVar4;
    *param_4 = 1;
  }
  return lVar2;
}



// FUNCTION 143304430 FUN_143304430 body=208 status=ok
// SIG undefined FUN_143304430(void)

void FUN_143304430(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = DAT_146b63a70;
  if (param_3 == '\0') {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    FUN_1433a1bc0(param_1 + 0x18,param_2[3]);
    *(longlong *)(*param_2 + 8) = param_2[1];
    *(longlong *)param_2[1] = *param_2;
    *param_2 = -1;
    param_2[1] = -1;
    FUN_143303450(DAT_146b63a70,param_2);
    Scaleform::Lock::DoLock(lVar1 + 8);
  }
  else {
    FUN_1433a1bc0(param_1 + 0x18,param_2[3]);
    *(longlong *)(*param_2 + 8) = param_2[1];
    *(longlong *)param_2[1] = *param_2;
    *param_2 = -1;
    param_2[1] = -1;
    FUN_143303450(DAT_146b63a70,param_2);
  }
  *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x230) + -0x1000;
  return;
}



// FUNCTION 143304510 FUN_143304510 body=201 status=ok
// SIG undefined FUN_143304510(void)

longlong FUN_143304510(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  char local_res8 [8];
  longlong local_58;
  longlong local_50;
  undefined8 local_28;
  
  local_res8[0] = '\0';
  do {
    lVar1 = FUN_1433a1c20(param_1 + 0x18,param_2,&local_58);
    if (lVar1 != 0) {
      if (local_58 != 0) {
        *(short *)(local_58 + 2) = *(short *)(local_58 + 2) + 1;
      }
      if (local_50 != 0) {
        *(short *)(local_50 + 2) = *(short *)(local_50 + 2) + 1;
      }
      *param_3 = local_28;
      param_3[2] = param_2;
      param_3[1] = 0;
      *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 1;
      *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) + param_2;
      return lVar1;
    }
    if (param_4 == '\0') {
      FUN_1433041c0(param_1,local_res8);
    }
    else {
      FUN_1433040b0();
    }
  } while (local_res8[0] != '\0');
  return 0;
}



// FUNCTION 1433045e0 FUN_1433045e0 body=209 status=ok
// SIG undefined FUN_1433045e0(void)

longlong FUN_1433045e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      char param_5)

{
  longlong lVar1;
  char local_res8 [8];
  longlong local_58;
  longlong local_50;
  undefined8 local_28;
  
  local_res8[0] = '\0';
  do {
    lVar1 = FUN_1433a1d90(param_1 + 0x18,param_2,param_3,&local_58);
    if (lVar1 != 0) {
      if (local_58 != 0) {
        *(short *)(local_58 + 2) = *(short *)(local_58 + 2) + 1;
      }
      if (local_50 != 0) {
        *(short *)(local_50 + 2) = *(short *)(local_50 + 2) + 1;
      }
      *param_4 = local_28;
      param_4[2] = param_2;
      param_4[1] = 0;
      *(longlong *)(param_1 + 0x250) = *(longlong *)(param_1 + 0x250) + 1;
      *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) + param_2;
      return lVar1;
    }
    if (param_5 == '\0') {
      FUN_1433041c0(param_1,local_res8);
    }
    else {
      FUN_1433040b0();
    }
  } while (local_res8[0] != '\0');
  return 0;
}



// FUNCTION 1433046c0 FUN_1433046c0 body=431 status=ok
// SIG undefined FUN_1433046c0(void)

longlong FUN_1433046c0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                      undefined8 *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar3 = DAT_146b63a70;
  uVar2 = (uint)*(undefined8 *)(param_2 + 0x18) & 3;
  if (uVar2 < 3) {
    uVar5 = 1L << (char)uVar2 + 2;
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 0x20);
  }
  lVar8 = 0x20;
  if (0x10 < uVar5) {
    lVar8 = 0x28;
  }
  uVar7 = param_4 + 7U & 0xfffffffffffffff8;
  uVar6 = (lVar8 - param_3) + param_2;
  uVar1 = lVar8 + uVar7;
  if ((((uVar6 < uVar1) && (param_1[0x48] != 0)) &&
      ((ulonglong)param_1[0x48] < (param_1[0x46] - uVar6) + uVar1)) && (param_1[0x49] != 0)) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    *(int *)(param_1[0x49] + 8) = *(int *)(param_1[0x49] + 8) + 1;
    (**(code **)(*(longlong *)param_1[0x49] + 8))
              ((longlong *)param_1[0x49],param_1[1],
               ((param_1[0x46] - param_1[0x48]) - uVar6) + uVar1);
    *(int *)(param_1[0x49] + 8) = *(int *)(param_1[0x49] + 8) + -1;
    Scaleform::Lock::DoLock(lVar3 + 8);
  }
  FUN_143304920(DAT_146b63a70 + 0x50,param_2);
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))
                    ((longlong *)*param_1,param_3,uVar6,uVar1,uVar5);
  if (lVar3 == 0) {
    FUN_143304870(DAT_146b63a70,param_3,uVar6 - lVar8,uVar5,param_1[1]);
  }
  else {
    uVar4 = FUN_143304870(DAT_146b63a70,lVar3,uVar7,uVar5,param_1[1]);
    param_5[1] = uVar4;
    param_5[2] = uVar7;
    *param_5 = 0;
    param_1[0x46] = param_1[0x46] + (uVar1 - uVar6);
    param_1[0x47] = param_1[0x47] + (uVar1 - uVar6);
  }
  return lVar3;
}



// FUNCTION 143304870 FUN_143304870 body=169 status=ok
// SIG undefined FUN_143304870(void)

void FUN_143304870(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_2 + param_3);
  if (param_4 != 0) {
    if ((param_4 < 3) || (param_4 == 4)) goto LAB_1433048be;
    if (param_4 == 8) {
      param_5 = param_5 | 1;
      goto LAB_1433048be;
    }
    if (param_4 == 0x10) {
      param_5 = param_5 | 2;
      goto LAB_1433048be;
    }
  }
  param_5 = param_5 | 3;
  puVar1[4] = param_4;
LAB_1433048be:
  puVar1[3] = param_5;
  puVar1[2] = 0;
  puVar4 = (undefined8 *)(param_1 + 0x50);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar3 = (undefined8 *)*puVar4;
  if (puVar3 == (undefined8 *)0x0) {
    *puVar4 = puVar1;
    *puVar1 = puVar4;
    return;
  }
  puVar4 = puVar1;
  if (puVar3 != puVar1) {
    while( true ) {
      puVar2 = (undefined8 *)puVar3[1 - ((longlong)puVar4 >> 0x3f)];
      if (puVar2 == (undefined8 *)0x0) break;
      puVar3 = puVar2;
      puVar4 = (undefined8 *)((longlong)puVar4 * 2);
      if (puVar2 == puVar1) {
        return;
      }
    }
    puVar3[1 - ((longlong)puVar4 >> 0x3f)] = puVar1;
    *puVar1 = puVar3;
  }
  return;
}



// FUNCTION 143304920 FUN_143304920 body=183 status=ok
// SIG undefined FUN_143304920(void)

void FUN_143304920(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)param_2[2];
  plVar4 = param_2 + 2;
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar6 = (longlong *)param_2[1];
    plVar3 = plVar6;
    plVar4 = param_2 + 1;
    if (plVar6 == (longlong *)0x0) goto LAB_143304975;
  }
  do {
    do {
      plVar7 = plVar4;
      plVar6 = plVar3;
      plVar3 = (longlong *)plVar6[2];
      plVar4 = plVar6 + 2;
    } while ((longlong *)plVar6[2] != (longlong *)0x0);
    plVar3 = (longlong *)plVar6[1];
    plVar4 = plVar6 + 1;
  } while ((longlong *)plVar6[1] != (longlong *)0x0);
  *plVar7 = 0;
LAB_143304975:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (param_2 == (longlong *)*param_1) {
      *param_1 = plVar6;
    }
    else {
      lVar5 = 8;
      if (*(longlong **)(lVar1 + 8) != param_2) {
        lVar5 = 0x10;
      }
      *(longlong **)(lVar5 + lVar1) = plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = lVar1;
      puVar2 = (undefined8 *)param_2[1];
      if (puVar2 != (undefined8 *)0x0) {
        plVar6[1] = (longlong)puVar2;
        *puVar2 = plVar6;
      }
      puVar2 = (undefined8 *)param_2[2];
      if (puVar2 != (undefined8 *)0x0) {
        plVar6[2] = (longlong)puVar2;
        *puVar2 = plVar6;
      }
    }
  }
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



// FUNCTION 1433049e0 FUN_1433049e0 body=65 status=ok
// SIG undefined FUN_1433049e0(void)

ulonglong * FUN_1433049e0(ulonglong *param_1,undefined8 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = FUN_14207c6a0(param_2);
  uVar2 = 1L << (bVar1 & 0x3f);
  param_1[1] = uVar2;
  param_1[2] = uVar2 - 1;
  *param_1 = (ulonglong)bVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143304a30 InitSegment body=28 status=ok
// SIG undefined InitSegment(void)

void Scaleform::HeapPT::AllocLite::InitSegment(undefined8 *param_1,longlong param_2)

{
  FUN_143305860(param_1,*(undefined8 *)(param_2 + 0x20),param_2,
                *(ulonglong *)(param_2 + 0x28) >> ((byte)*param_1 & 0x3f));
  return;
}



// FUNCTION 143304a60 FUN_143304a60 body=59 status=ok
// SIG undefined FUN_143304a60(void)

void FUN_143304a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - *(longlong *)(lVar1 + 0x48);
  FUN_1433057a0(param_1 + 0x18,lVar1);
  FUN_1432f4c10(param_1 + 0x20,lVar1);
  return;
}



// FUNCTION 143304ab0 FUN_143304ab0 body=191 status=ok
// SIG undefined FUN_143304ab0(void)

ulonglong FUN_143304ab0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    param_2 = uVar2;
  }
  if (param_3 < uVar2) {
    param_3 = uVar2;
  }
  uVar2 = param_3 - 1;
  uVar4 = (param_3 - 1) + param_2 & ~uVar2;
  lVar1 = FUN_1433050a0(param_1,uVar4 >> ((byte)*param_1 & 0x3f),uVar2);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = uVar2 + lVar1 & ~uVar2;
    for (uVar2 = uVar3 - lVar1; (uVar2 != 0 && (uVar2 < 0x80)); uVar2 = uVar2 + param_3) {
      uVar3 = uVar3 + param_3;
    }
    *param_4 = *(undefined8 *)(lVar1 + 0x40);
    FUN_143305270(param_1,lVar1,uVar3,uVar4);
  }
  return uVar3;
}



// FUNCTION 143304b80 FUN_143304b80 body=301 status=ok
// SIG undefined FUN_143304b80(void)

void FUN_143304b80(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_1[1];
  if (param_4 < uVar4) {
    param_4 = uVar4;
  }
  if (param_5 < uVar4) {
    param_5 = uVar4;
  }
  uVar4 = (param_4 - 1) + param_5 & ~(param_5 - 1);
  lVar2 = FUN_143305670(param_1 + 4,param_3);
  lVar1 = param_3 + uVar4;
  lVar3 = FUN_143305500(param_1 + 4,lVar1);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x40) != param_2)) ||
     ((*(longlong *)(lVar2 + 0x48) << ((byte)*param_1 & 0x3f)) + lVar2 != param_3)) {
    lVar2 = 0;
  }
  if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x40) != param_2)) || (lVar3 != lVar1)) {
    lVar3 = 0;
  }
  uVar4 = uVar4 >> ((byte)*param_1 & 0x3f);
  *(ulonglong *)(param_3 + 0x48) = uVar4;
  *(longlong *)(param_3 + 0x40) = param_2;
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x48);
    param_1[5] = param_1[5] - lVar1;
    uVar4 = uVar4 + lVar1;
    FUN_1433057a0(param_1 + 3,lVar2);
    FUN_1432f4c10(param_1 + 4,lVar2);
    param_3 = lVar2;
  }
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x48);
    param_1[5] = param_1[5] - lVar1;
    uVar4 = uVar4 + lVar1;
    FUN_1433057a0(param_1 + 3,lVar3);
    FUN_1432f4c10(param_1 + 4,lVar3);
  }
  FUN_143305860(param_1,param_3,param_2,uVar4);
  return;
}



// FUNCTION 143304cc0 FUN_143304cc0 body=324 status=ok
// SIG undefined FUN_143304cc0(void)

char FUN_143304cc0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  
  if (param_6 < (ulonglong)param_1[1]) {
    param_6 = param_1[1];
  }
  uVar3 = param_4 + -1 + param_6 & ~(param_6 - 1);
  uVar4 = param_5 + -1 + param_6 & ~(param_6 - 1);
  if (uVar4 == uVar3) {
    cVar6 = '\0';
  }
  else if (uVar3 < uVar4) {
    lVar1 = param_3 + uVar3;
    lVar2 = FUN_143305500(param_1 + 4,lVar1);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) == param_2)) && (lVar2 == lVar1)) {
      uVar5 = (*(longlong *)(lVar2 + 0x48) << ((byte)*param_1 & 0x3f)) + lVar2;
      if (param_3 + uVar4 <= uVar5) {
        FUN_143305820(param_1,lVar2);
        FUN_143305270(param_1,lVar2,lVar2,uVar4 - uVar3);
        return '\0';
      }
      if (uVar5 == *(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x20)) {
        return '\x03';
      }
    }
    cVar6 = (lVar1 == *(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x20)) + '\x02';
  }
  else {
    FUN_143304b80(param_1,param_2,param_3 + uVar4,uVar3 - uVar4,param_6);
    cVar6 = (*(longlong *)(param_3 + uVar4 + 0x48) << ((byte)*param_1 & 0x3f)) + param_3 + uVar4 ==
            *(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x20);
  }
  return cVar6;
}



// FUNCTION 143304e10 FUN_143304e10 body=187 status=ok
// SIG undefined FUN_143304e10(void)

void FUN_143304e10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x20) + *(longlong *)(param_2 + 0x28);
  lVar1 = FUN_143305670(param_1 + 4,lVar2 + -1);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) != param_2)) ||
     ((*(longlong *)(lVar1 + 0x48) << ((byte)*param_1 & 0x3f)) + lVar1 != lVar2)) {
    uVar3 = param_3 >> ((byte)*param_1 & 0x3f);
  }
  else {
    param_1[5] = param_1[5] - *(longlong *)(lVar1 + 0x48);
    FUN_1433057a0(param_1 + 3,lVar1);
    FUN_1432f4c10(param_1 + 4,lVar1);
    uVar3 = (param_3 >> ((byte)*param_1 & 0x3f)) + *(longlong *)(lVar1 + 0x48);
    lVar2 = lVar1;
  }
  FUN_143305860(param_1,lVar2,param_2,uVar3);
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + param_3;
  return;
}



// FUNCTION 143304ee0 FUN_143304ee0 body=193 status=ok
// SIG undefined FUN_143304ee0(void)

undefined8 FUN_143304ee0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_143305670(param_1 + 4,param_3);
  if ((((uVar1 == 0) || (*(longlong *)(uVar1 + 0x40) != param_2)) || (param_3 < uVar1)) ||
     ((*(longlong *)(uVar1 + 0x48) << ((byte)*param_1 & 0x3f)) + uVar1 <= param_3)) {
    uVar2 = 0;
  }
  else {
    FUN_143305820(param_1,uVar1);
    uVar3 = ((*(longlong *)(uVar1 + 0x48) << ((byte)*param_1 & 0x3f)) - param_3) + uVar1;
    if (uVar1 < param_3) {
      FUN_143305860(param_1,uVar1,param_2,(longlong)(param_3 - uVar1) >> ((byte)*param_1 & 0x3f));
      *(longlong *)(param_3 + 0x40) = param_2;
      *(ulonglong *)(param_3 + 0x48) = uVar3 >> ((byte)*param_1 & 0x3f);
    }
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) - uVar3;
    uVar2 = 1;
  }
  return uVar2;
}


