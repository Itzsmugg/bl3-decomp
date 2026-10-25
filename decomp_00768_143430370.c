// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143430370 FUN_143430370 body=150 status=ok
// SIG undefined FUN_143430370(void)

undefined8 * FUN_143430370(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1434148b0();
  puVar3 = (undefined8 *)(param_2 + 0xe8);
  *param_1 = &PTR_LAB_145b0bdd8;
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&PTR_LAB_145b0be48;
  param_1[0xd] = 0;
  uVar2 = FUN_14341b750(*puVar3,0x1d);
  (**(code **)(*plVar1 + 0x68))(plVar1,puVar3,uVar2);
  if (plVar1 != (longlong *)0x0) {
    FUN_14340b610(plVar1,puVar3,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(puVar3,plVar1);
  return param_1;
}



// FUNCTION 143430410 FUN_143430410 body=323 status=ok
// SIG undefined FUN_143430410(void)

void FUN_143430410(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_28;
  undefined4 local_20;
  int local_1c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 7;
    if (param_3 == 0) {
      *(undefined8 *)(puVar2 + 8) = 0;
    }
    else {
      piVar5 = *(int **)(param_3 + 0x70);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)FUN_14336c170(param_3);
      }
      *(int **)(puVar2 + 8) = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoadStart",0xb);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_20 = 1;
    local_28 = &PTR_FUN_145b11e98;
    local_1c = iVar1 * 0x20 + -0x20 + (int)(lVar3 - lVar4 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_28);
  }
  piVar5 = (int *)(local_res8 + 0x18);
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    FUN_14335f920();
  }
  if (4 < **(byte **)(param_2 + 8)) {
    FUN_143411150();
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1434a25c0(param_2 + 8);
  }
  return;
}



// FUNCTION 143430560 FUN_143430560 body=335 status=ok
// SIG undefined FUN_143430560(void)

void FUN_143430560(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_28;
  undefined4 local_20;
  int local_1c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 4;
    *(undefined4 *)(puVar2 + 8) = param_4;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 7;
    if (param_3 == 0) {
      *(undefined8 *)(puVar2 + 8) = 0;
    }
    else {
      piVar5 = *(int **)(param_3 + 0x70);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)FUN_14336c170(param_3);
      }
      *(int **)(puVar2 + 8) = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoadComplete",0xe);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_20 = 2;
    local_28 = &PTR_FUN_145b11e98;
    local_1c = iVar1 * 0x20 + -0x20 + (int)(lVar3 - lVar4 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_28);
  }
  piVar5 = (int *)(local_res8 + 0x18);
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    FUN_14335f920();
  }
  FUN_1434a23f0(param_2 + 8);
  return;
}



// FUNCTION 1434306c0 FUN_1434306c0 body=323 status=ok
// SIG undefined FUN_1434306c0(void)

void FUN_1434306c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_28;
  undefined4 local_20;
  int local_1c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 7;
    if (param_3 == 0) {
      *(undefined8 *)(puVar2 + 8) = 0;
    }
    else {
      piVar5 = *(int **)(param_3 + 0x70);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)FUN_14336c170(param_3);
      }
      *(int **)(puVar2 + 8) = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoadInit",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_20 = 1;
    local_28 = &PTR_FUN_145b11e98;
    local_1c = iVar1 * 0x20 + -0x20 + (int)(lVar3 - lVar4 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_28);
  }
  piVar5 = (int *)(local_res8 + 0x18);
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    FUN_14335f920();
  }
  if (4 < **(byte **)(param_2 + 8)) {
    FUN_143411150();
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1434a25c0(param_2 + 8);
  }
  return;
}



// FUNCTION 143430810 FUN_143430810 body=451 status=ok
// SIG undefined FUN_143430810(void)

void FUN_143430810(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_28;
  undefined4 local_20;
  int local_1c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 8) = param_5;
    *puVar2 = 4;
  }
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(param_4 + lVar6) != '\0');
  lVar6 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                         + 0x618),param_4,lVar6,0);
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 5;
    *(longlong *)(puVar2 + 8) = lVar6;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
  }
  piVar4 = (int *)(lVar6 + 0x18);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_14335f920(lVar6);
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 7;
    if (param_3 == 0) {
      *(undefined8 *)(puVar2 + 8) = 0;
    }
    else {
      piVar4 = *(int **)(param_3 + 0x70);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_14336c170(param_3);
      }
      *(int **)(puVar2 + 8) = piVar4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  lVar6 = *(longlong *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x30);
  lVar5 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar5 = 0;
  }
  lVar3 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoadError",0xb);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar5 != 0) {
    local_20 = 3;
    local_28 = &PTR_FUN_145b11e98;
    local_1c = iVar1 * 0x20 + -0x20 + (int)(lVar6 - lVar3 >> 5);
    FUN_1434649e0(param_2,lVar5,&local_res8,&local_28);
  }
  piVar4 = (int *)(local_res8 + 0x18);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_14335f920();
  }
  FUN_1434a2470(param_2 + 8);
  return;
}



// FUNCTION 1434309e0 FUN_1434309e0 body=778 status=ok
// SIG undefined FUN_1434309e0(void)

void FUN_1434309e0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined *local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined **local_48;
  undefined8 local_40;
  
  if (param_3 != 0) {
    FUN_1432c2f70(&local_res8);
    Scaleform::GFx::DisplayObject::GetAbsolutePath(param_3);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uVar6 = FUN_1432c4390((longlong)((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)((ulonglong)local_res8 & 0xfffffffffffffffc) &
                            0x7fffffffffffffff,0x1505);
      lVar14 = *(longlong *)(param_1 + 0x68);
      uVar6 = *(ulonglong *)(lVar14 + 8) & uVar6;
      puVar12 = (ulonglong *)(lVar14 + 0x10 + uVar6 * 0x20);
      if ((*puVar12 != 0xfffffffffffffffe) && (uVar13 = uVar6, puVar12[1] == uVar6)) {
        do {
          if (puVar12[1] == uVar6) {
            pcVar7 = (char *)((puVar12[2] & 0xfffffffffffffffc) + 0xc);
            lVar11 = (((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar7;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[lVar11];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              if (-1 < (longlong)uVar13) {
                lVar14 = (uVar13 + 1) * 0x20 + lVar14;
                goto LAB_143430b00;
              }
              break;
            }
          }
          uVar13 = *puVar12;
          if (uVar13 == 0xffffffffffffffff) break;
          puVar12 = (ulonglong *)(lVar14 + 0x10 + uVar13 * 0x20);
        } while( true );
      }
    }
    lVar14 = 0;
LAB_143430b00:
    puVar8 = (undefined4 *)(lVar14 + 8);
    if (lVar14 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 == (undefined4 *)0x0) {
      local_48 = &local_res8;
      local_res14 = param_5;
      local_40 = &local_res10;
      local_res10 = param_4;
      uVar9 = FUN_1432c4390((longlong)((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)((ulonglong)local_res8 & 0xfffffffffffffffc) &
                            0x7fffffffffffffff,0x1505);
      FUN_1434938b0(param_1 + 0x68,param_1 + 0x68,&local_48,uVar9);
    }
    else {
      *puVar8 = param_4;
      puVar8[1] = param_5;
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      (((ulonglong)local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,(ulonglong)local_res8 & 0xfffffffffffffffc)
      ;
    }
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 4;
    *(undefined4 *)(puVar3 + 8) = param_5;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 4;
    *(undefined4 *)(puVar3 + 8) = param_4;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 7;
    if (param_3 == 0) {
      *(undefined8 *)(puVar3 + 8) = 0;
    }
    else {
      piVar10 = *(int **)(param_3 + 0x70);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)FUN_14336c170(param_3);
      }
      *(int **)(puVar3 + 8) = piVar10;
      if (piVar10 != (int *)0x0) {
        *piVar10 = *piVar10 + 1;
      }
    }
  }
  lVar14 = *(longlong *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x30);
  lVar11 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar11 = 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_res8 = (undefined *)
               FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoadProgress",0xe);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar11 != 0) {
    local_48 = &PTR_FUN_145b11e98;
    local_40 = (undefined4 *)CONCAT44(iVar5 * 0x20 + -0x20 + (int)(lVar14 - lVar4 >> 5),3);
    FUN_1434649e0(param_2,lVar11,&local_res8,&local_48);
  }
  piVar10 = (int *)(local_res8 + 0x18);
  *piVar10 = *piVar10 + -1;
  if (*piVar10 == 0) {
    FUN_14335f920();
  }
  FUN_1434a2470(param_2 + 8);
  return;
}



// FUNCTION 143430cf0 FUN_143430cf0 body=323 status=ok
// SIG undefined FUN_143430cf0(void)

uint * FUN_143430cf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong local_res8;
  
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::DisplayObject::GetAbsolutePath(param_2,&local_res8);
  puVar8 = (uint *)0x0;
  puVar12 = puVar8;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar5 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                          0x1505);
    lVar3 = *(longlong *)(param_1 + 0x68);
    uVar5 = *(ulonglong *)(lVar3 + 8) & uVar5;
    puVar10 = (ulonglong *)(lVar3 + 0x10 + uVar5 * 0x20);
    if ((*puVar10 != 0xfffffffffffffffe) && (uVar11 = uVar5, puVar10[1] == uVar5)) {
      do {
        if (puVar10[1] == uVar5) {
          pcVar6 = (char *)((puVar10[2] & 0xfffffffffffffffc) + 0xc);
          lVar9 = ((local_res8 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar9];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            if (-1 < (longlong)uVar11) {
              puVar12 = (uint *)((uVar11 + 1) * 0x20 + lVar3);
            }
            break;
          }
        }
        uVar11 = *puVar10;
        if (uVar11 == 0xffffffffffffffff) break;
        puVar10 = (ulonglong *)(lVar3 + 0x10 + uVar11 * 0x20);
      } while( true );
    }
  }
  puVar7 = puVar12 + 2;
  if (puVar12 == (uint *)0x0) {
    puVar7 = puVar8;
  }
  if (puVar7 != (uint *)0x0) {
    puVar8 = (uint *)(ulonglong)*puVar7;
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return puVar8;
}



// FUNCTION 143430e40 FUN_143430e40 body=324 status=ok
// SIG undefined FUN_143430e40(void)

ulonglong FUN_143430e40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::DisplayObject::GetAbsolutePath(param_2,&local_res8);
  uVar7 = 0;
  uVar11 = uVar7;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar5 = FUN_1432c4390((longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                          0x1505);
    lVar3 = *(longlong *)(param_1 + 0x68);
    uVar5 = *(ulonglong *)(lVar3 + 8) & uVar5;
    puVar9 = (ulonglong *)(lVar3 + 0x10 + uVar5 * 0x20);
    if ((*puVar9 != 0xfffffffffffffffe) && (uVar10 = uVar5, puVar9[1] == uVar5)) {
      do {
        if (puVar9[1] == uVar5) {
          pcVar6 = (char *)((puVar9[2] & 0xfffffffffffffffc) + 0xc);
          lVar8 = ((local_res8 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar8];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            if (-1 < (longlong)uVar10) {
              uVar11 = (uVar10 + 1) * 0x20 + lVar3;
            }
            break;
          }
        }
        uVar10 = *puVar9;
        if (uVar10 == 0xffffffffffffffff) break;
        puVar9 = (ulonglong *)(lVar3 + 0x10 + uVar10 * 0x20);
      } while( true );
    }
  }
  uVar5 = uVar11 + 8;
  if (uVar11 == 0) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    uVar7 = (ulonglong)*(uint *)(uVar5 + 4);
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return uVar7;
}



// FUNCTION 143430f90 FUN_143430f90 body=103 status=ok
// SIG undefined FUN_143430f90(void)

undefined8 * FUN_143430f90(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495590();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0bef0;
  param_1[4] = &PTR_LAB_145b0bf60;
  param_1[0xe] = &PTR_LAB_145b0c008;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_getProgress_145b08140,local_res8);
  return param_1;
}



// FUNCTION 143431000 FUN_143431000 body=875 status=ok
// SIG undefined FUN_143431000(void)

void FUN_143431000(longlong param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 local_res8;
  undefined7 uStackX_9;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong in_stack_ffffffffffffff98;
  byte local_58 [8];
  undefined4 local_50;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar5 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar5);
    *puVar5 = 0;
    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar8 == 0x19) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      plVar13 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      lVar9 = (**(code **)(*plVar13 + 0x50))(plVar13,0x68,0);
      puVar17 = (undefined4 *)0x0;
      puVar10 = puVar17;
      if (lVar9 != 0) {
        puVar10 = (undefined4 *)FUN_1434148b0(lVar9,*(undefined8 *)(param_1 + 0x30));
      }
      lVar9 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_1 + 0x3c);
      puVar15 = puVar17;
      if (uVar4 <= (uint)(*(int *)(lVar9 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x10) >> 5))) {
        puVar15 = (undefined4 *)
                  ((ulonglong)(uVar4 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar4 >> 5) * 8));
      }
      FUN_143411540(puVar15,&local_res8,lVar9,0xffffffff,
                    in_stack_ffffffffffffff98 & 0xffffffffffffff00);
      puVar7 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
      FUN_1432c2fb0(&local_res10,*puVar7);
      plVar13 = (longlong *)(lVar6 + 0x48);
      if (lVar6 == 0) {
        plVar13 = (longlong *)&DAT_00000068;
      }
      puVar15 = puVar17;
      if (*plVar13 != 0) {
        uVar11 = FUN_1432c4390((longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff
                               ,0x1505);
        lVar6 = *plVar13;
        uVar11 = *(ulonglong *)(lVar6 + 8) & uVar11;
        puVar14 = (ulonglong *)(lVar6 + 0x10 + uVar11 * 0x20);
        if ((*puVar14 != 0xfffffffffffffffe) && (uVar16 = uVar11, puVar14[1] == uVar11)) {
          do {
            if (puVar14[1] == uVar11) {
              pcVar12 = (char *)((puVar14[2] & 0xfffffffffffffffc) + 0xc);
              lVar9 = ((local_res10 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar12;
              do {
                cVar2 = *pcVar12;
                cVar3 = pcVar12[lVar9];
                if (cVar2 != cVar3) break;
                pcVar12 = pcVar12 + 1;
              } while (cVar3 != '\0');
              if (cVar2 == cVar3) {
                if (-1 < (longlong)uVar16) {
                  puVar15 = (undefined4 *)((uVar16 + 1) * 0x20 + lVar6);
                }
                break;
              }
            }
            uVar16 = *puVar14;
            if (uVar16 == 0xffffffffffffffff) break;
            puVar14 = (ulonglong *)(lVar6 + 0x10 + uVar16 * 0x20);
          } while( true );
        }
      }
      puVar18 = puVar15 + 2;
      if (puVar15 == (undefined4 *)0x0) {
        puVar18 = puVar17;
      }
      uVar11 = local_res10 & 0xfffffffffffffffc;
      iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar11 + 8,0xffffffff);
      if (iVar8 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar11);
      }
      if (puVar18 != (undefined4 *)0x0) {
        local_50 = *puVar18;
        lVar6 = *(longlong *)(param_1 + 0x30);
        local_58[0] = 4;
        local_res8 = 0;
        local_res18 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) +
                                     0x618),"bytesLoaded",0xb);
        *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
        (**(code **)(*(longlong *)(puVar10 + 8) + 0x50))
                  (puVar10 + 8,lVar6 + 0xe8,&local_res18,local_58,&local_res8);
        piVar1 = (int *)(local_res18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_50 = puVar18[1];
        lVar6 = *(longlong *)(param_1 + 0x30);
        local_58[0] = 4;
        local_res8 = 0;
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) +
                                     0x618),"bytesTotal",10);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(puVar10 + 8) + 0x50))
                  (puVar10 + 8,lVar6 + 0xe8,&local_res10,local_58,&local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
      }
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),puVar10);
      piVar1 = (int *)(puVar7 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar7);
      }
      if ((puVar10 != (undefined4 *)0x0) && ((puVar10[6] & 0x3ffffff) != 0)) {
        puVar10[6] = puVar10[6] - 1;
        FUN_1434a2b80(puVar10);
      }
    }
  }
  return;
}



// FUNCTION 143431380 FUN_143431380 body=925 status=ok
// SIG undefined FUN_143431380(void)

void FUN_143431380(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  RefCountNTSImpl *pRVar8;
  uint uVar9;
  RefCountNTSImpl *pRVar10;
  RefCountNTSImpl *pRVar11;
  RefCountNTSImpl *pRVar12;
  undefined8 *local_res8;
  undefined8 *local_res10;
  ulonglong in_stack_ffffffffffffffc8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 0;
  if (*(int *)(param_1 + 0x38) < 2) {
    return;
  }
  pRVar11 = (RefCountNTSImpl *)0x0;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  pRVar12 = pRVar11;
  if ((iVar6 == 0x19) &&
     (pRVar12 = (RefCountNTSImpl *)(*(longlong *)(param_1 + 0x10) + -0x20),
     *(longlong *)(param_1 + 0x10) == 0)) {
    pRVar12 = (RefCountNTSImpl *)0x0;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar9 = *(uint *)(param_1 + 0x3c);
  pRVar10 = pRVar11;
  if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pRVar10 = (RefCountNTSImpl *)
              ((ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
  }
  in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
  FUN_143411540(pRVar10,&local_res10,lVar3,0xffffffff,in_stack_ffffffffffffffc8);
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar9 = *(int *)(param_1 + 0x3c) - 1;
  pRVar10 = pRVar11;
  if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pRVar10 = (RefCountNTSImpl *)
              ((ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
  }
  uVar7 = *(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
          (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5);
  if (*pRVar10 == (RefCountNTSImpl)0x7) {
    pRVar8 = pRVar11;
    if (uVar9 <= uVar7) {
      pRVar8 = (RefCountNTSImpl *)
               ((ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    pRVar10 = pRVar11;
    if ((((*pRVar8 == (RefCountNTSImpl)0x7) && (lVar3 != 0)) && (*(longlong *)(pRVar8 + 8) != 0)) &&
       (pRVar8 = (RefCountNTSImpl *)
                 Scaleform::GFx::CharacterHandle::ResolveCharacter
                           (*(longlong *)(pRVar8 + 8),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10)),
       pRVar8 != (RefCountNTSImpl *)0x0)) {
      if ((char)pRVar8[0x6a] < '\0') {
        pRVar10 = pRVar8;
      }
      if (pRVar10 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
      }
    }
  }
  else {
    pRVar10 = pRVar11;
    if (uVar9 <= uVar7) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
    FUN_143411540(pRVar10,&local_res8,lVar3,0xffffffff,in_stack_ffffffffffffffc8);
    pRVar10 = (RefCountNTSImpl *)FUN_143419c20(*(undefined8 *)(param_1 + 0x30),&local_res8,0);
    if (pRVar10 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
    }
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (pRVar10 == (RefCountNTSImpl *)0x0) {
    uVar9 = FUN_14336b320();
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar7 = *(int *)(param_1 + 0x3c) - 1;
    pRVar8 = pRVar11;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar8 = (RefCountNTSImpl *)
               ((ulonglong)(uVar7 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
    }
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
    FUN_143411540(pRVar8,&local_res8,lVar3,0xffffffff,in_stack_ffffffffffffffc8);
    puVar5 = local_res8;
    iVar6 = FUN_143437bb0(*local_res8,&local_res8,6 < uVar9);
    piVar1 = (int *)(puVar5 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar5);
    }
    if (iVar6 == -1) goto LAB_1434316f4;
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar4 = *local_res10;
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar11 = (RefCountNTSImpl *)
                ((ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
    FUN_143411540(pRVar11,&local_res8,lVar3,0xffffffff,in_stack_ffffffffffffffc8);
    FUN_143438700(*(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                     0x10) + 0x18),*local_res8,uVar4,*(longlong *)(param_1 + 0x30),
                  in_stack_ffffffffffffffc8 & 0xffffffff00000000,pRVar12);
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res8);
    }
  }
  else {
    FUN_143438ae0(*(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                     0x10) + 0x18),pRVar10,*local_res10,0,pRVar12);
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 1;
  if (pRVar10 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar10);
  }
LAB_1434316f4:
  piVar1 = (int *)(local_res10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res10);
  }
  return;
}



// FUNCTION 143431730 FUN_143431730 body=671 status=ok
// SIG undefined FUN_143431730(void)

void FUN_143431730(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  RefCountNTSImpl *pRVar7;
  RefCountNTSImpl *this;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffe8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 0;
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  pcVar10 = (char *)0x0;
  uVar9 = *(uint *)(param_1 + 0x3c);
  if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pcVar10 = (char *)((ulonglong)(uVar9 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
  }
  uVar5 = *(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
          (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5);
  if (*pcVar10 == '\a') {
    pcVar10 = (char *)0x0;
    if (uVar9 <= uVar5) {
      pcVar10 = (char *)((ulonglong)(uVar9 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    if ((((*pcVar10 == '\a') && (lVar3 != 0)) && (*(longlong *)(pcVar10 + 8) != 0)) &&
       (pRVar7 = (RefCountNTSImpl *)
                 Scaleform::GFx::CharacterHandle::ResolveCharacter
                           (*(longlong *)(pcVar10 + 8),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10)),
       pRVar7 != (RefCountNTSImpl *)0x0)) {
      this = (RefCountNTSImpl *)0x0;
      if ((char)pRVar7[0x6a] < '\0') {
        this = pRVar7;
      }
      if (this == (RefCountNTSImpl *)0x0) {
        return;
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      goto LAB_143431972;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (uVar9 <= uVar5) {
      pcVar10 = (char *)((ulonglong)(uVar9 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    if (1 < (byte)(*pcVar10 - 3U)) {
      lVar11 = 0;
      if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      FUN_143411540(lVar11,&local_res8,lVar3,0xffffffff,
                    in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
      this = (RefCountNTSImpl *)FUN_143419c20(*(undefined8 *)(param_1 + 0x30),&local_res8,0);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_143431972;
    }
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x20) + 0x10) + 0x18);
    iVar6 = FUN_143411e30();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    uVar9 = 0;
    uVar4 = *(ulonglong *)(lVar3 + 0x68);
    if (uVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x60);
      uVar8 = 0;
      do {
        if (*(int *)(lVar3 + uVar8 * 0x10) == iVar6) {
          this = *(RefCountNTSImpl **)(lVar3 + 8 + (ulonglong)uVar9 * 0x10);
          if (this == (RefCountNTSImpl *)0x0) {
            return;
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          goto LAB_143431972;
        }
        uVar9 = uVar9 + 1;
        uVar8 = (ulonglong)uVar9;
      } while (uVar8 < uVar4);
    }
  }
  this = (RefCountNTSImpl *)0x0;
LAB_143431972:
  if (this != (RefCountNTSImpl *)0x0) {
    FUN_143438ae0(*(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                     0x10) + 0x18),this,&DAT_145af3922,0,0);
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 1;
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1434319e0 FUN_1434319e0 body=126 status=ok
// SIG undefined FUN_1434319e0(void)

undefined8 * FUN_1434319e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143431ac0;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0c010;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143431a70 FUN_143431a70 body=60 status=ok
// SIG undefined FUN_143431a70(void)

void FUN_143431a70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_143430370(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143431ac0 FUN_143431ac0 body=143 status=ok
// SIG undefined FUN_143431ac0(void)

void FUN_143431ac0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
      (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 0x19)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar2 == '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    lVar4 = lVar5 + 0x20;
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    FUN_1434646c0(*(undefined8 *)(param_1 + 0x30),lVar4,lVar4);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
    return;
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 143431b60 FUN_143431b60 body=786 status=ok
// SIG undefined FUN_143431b60(void)

longlong * FUN_143431b60(longlong *param_1,longlong param_2)

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
    puVar2[0xd] = FUN_143431ac0;
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
    *puVar2 = &PTR_LAB_145b0c010;
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
    FUN_143495590(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0bef0;
    puVar4[4] = &PTR_LAB_145b0bf60;
    puVar4[0xe] = &PTR_LAB_145b0c008;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_58,&PTR_s_getProgress_145b08140,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,0x1d,&local_res8);
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
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x220,
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



// FUNCTION 143431e80 FUN_143431e80 body=472 status=ok
// SIG undefined FUN_143431e80(void)

undefined8 * FUN_143431e80(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  longlong local_30;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0c098;
  puVar1 = param_1 + 4;
  *puVar1 = &PTR_LAB_145b0c0e0;
  plVar3 = (longlong *)(param_2 + 0xe8);
  uVar4 = FUN_14341b750(*plVar3,0x1f);
  FUN_1434a4d00(puVar1,plVar3,uVar4);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14340b610(puVar1,plVar3,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(plVar3,puVar1);
  param_1[0xd] = 0xbff0000000000000;
  param_1[0xe] = 0xbff0000000000000;
  FUN_1434646c0(param_2,puVar1,puVar1);
  local_res8[0] = 1;
  lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618)
                        ,"application/x-www-form-urlencoded",0x21);
  local_38[0] = 5;
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
  local_30 = lVar5;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              "contentType",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(puVar1,plVar3,&local_res10,local_38,local_res8);
  piVar2 = (int *)(local_res10 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  piVar2 = (int *)(lVar5 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(lVar5);
  }
  local_res8[0] = 1;
  local_38[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              "loaded",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(puVar1,plVar3,&local_res10,local_38,local_res8);
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



// FUNCTION 143432060 FUN_143432060 body=100 status=ok
// SIG undefined FUN_143432060(void)

void FUN_143432060(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  
  FUN_143415170(param_1,param_2 + 0xe8,param_3,0);
  local_res8[0] = 0;
  FUN_143414a10(param_1,param_2,param_3,param_4,local_res8);
  return;
}



// FUNCTION 1434320d0 FUN_1434320d0 body=286 status=ok
// SIG undefined FUN_1434320d0(void)

void FUN_1434320d0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_18;
  undefined4 local_10;
  int local_c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 5;
    lVar4 = *param_3;
    *(longlong *)(puVar3 + 8) = lVar4;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onData",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_10 = 1;
    local_18 = &PTR_FUN_145b11e98;
    local_c = iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar5 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_18);
  }
  piVar1 = (int *)(local_res8 + 0x18);
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
  return;
}



// FUNCTION 143432200 FUN_143432200 body=290 status=ok
// SIG undefined FUN_143432200(void)

void FUN_143432200(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_28;
  undefined4 local_20;
  int local_1c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 8) = param_3;
    *puVar3 = 3;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onHTTPStatus",0xc);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_20 = 1;
    local_28 = &PTR_FUN_145b11e98;
    local_1c = iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar5 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_28);
  }
  piVar1 = (int *)(local_res8 + 0x18);
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
  return;
}



// FUNCTION 143432330 FUN_143432330 body=280 status=ok
// SIG undefined FUN_143432330(void)

void FUN_143432330(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined **local_18;
  undefined4 local_10;
  int local_c;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 2;
    puVar3[8] = param_3;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoad",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar6 != 0) {
    local_10 = 1;
    local_18 = &PTR_FUN_145b11e98;
    local_c = iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar5 >> 5);
    FUN_1434649e0(param_2,lVar6,&local_res8,&local_18);
  }
  piVar1 = (int *)(local_res8 + 0x18);
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
  return;
}



// FUNCTION 143432450 FUN_143432450 body=391 status=ok
// SIG undefined FUN_143432450(void)

undefined8 * FUN_143432450(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  FUN_143495340();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0c188;
  param_1[4] = &PTR_LAB_145b0c1d0;
  param_1[0xf] = &PTR_LAB_145b0c278;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_addRequestHeader_145b07dc0,local_res8);
  local_res8[0] = 1;
  local_38[0] = 8;
  local_30 = (undefined8 *)
             (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                       (*(longlong **)(*param_2 + 0x30),0x70);
  if (local_30 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
  }
  else {
    FUN_143414770(local_30,param_2);
    *local_30 = &PTR_LAB_145b0ae70;
    local_30[4] = &PTR_LAB_145b0aef8;
    local_30[0xd] = FUN_143432cc0;
    uVar2 = FUN_14341b750(*param_2,7);
    FUN_1434a4d00(local_30 + 4,param_2,uVar2);
  }
  local_20 = 0;
  local_28 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "onData",6);
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
  return param_1;
}



// FUNCTION 1434325e0 FUN_1434325e0 body=122 status=ok
// SIG undefined FUN_1434325e0(void)

void FUN_1434325e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x1b) {
      lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
      if (lVar2 != 0) {
        local_res8[0] = 0x34000;
        FUN_1432c19d0(lVar2,local_res8,"LoadVars.addRequestHeader is not implemented.");
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432660 FUN_143432660 body=338 status=ok
// SIG undefined FUN_143432660(void)

void FUN_143432660(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0x1b)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar7 = 0;
      lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = lVar7;
      }
      lVar9 = lVar7;
      if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143411540(lVar9,&local_res10,lVar6,0xffffffff,0);
      FUN_1432c2f70(&local_res8);
      uVar3 = *local_res10;
      uVar5 = FUN_14335fa60(&local_res10);
      FUN_143364700(uVar3,uVar5,&local_res8);
      lVar6 = lVar8 + 0x20;
      if (lVar8 == 0) {
        lVar6 = lVar7;
      }
      FUN_143432ea0(*(undefined8 *)(param_1 + 0x30),lVar6,&local_res8);
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  }
  return;
}



// FUNCTION 1434327c0 FUN_1434327c0 body=151 status=ok
// SIG undefined FUN_1434327c0(void)

void FUN_1434327c0(longlong param_1)

{
  double dVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x1b) {
      pbVar2 = *(byte **)(param_1 + 8);
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = 0;
      }
      dVar1 = *(double *)(lVar4 + 0x68);
      if (dVar1 < 0.0) {
        FUN_143411150(pbVar2);
        *pbVar2 = 0;
        return;
      }
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *(double *)(pbVar2 + 8) = dVar1;
      *pbVar2 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432860 FUN_143432860 body=151 status=ok
// SIG undefined FUN_143432860(void)

void FUN_143432860(longlong param_1)

{
  double dVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x1b) {
      pbVar2 = *(byte **)(param_1 + 8);
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = 0;
      }
      dVar1 = *(double *)(lVar4 + 0x70);
      if (dVar1 < 0.0) {
        FUN_143411150(pbVar2);
        *pbVar2 = 0;
        return;
      }
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *(double *)(pbVar2 + 8) = dVar1;
      *pbVar2 = 3;
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432900 FUN_143432900 body=309 status=ok
// SIG undefined FUN_143432900(void)

void FUN_143432900(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 2;
    puVar3[8] = 0;
    return;
  }
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 0x1b)) {
    lVar7 = 0;
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = lVar7;
    }
    if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar7,&local_res8,lVar4,0xffffffff,0);
    *(undefined8 *)(lVar6 + 0x68) = 0;
    FUN_143439680(*(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                     0x10) + 0x18),lVar6,*local_res8,0);
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 2;
    puVar3[8] = 1;
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920(local_res8);
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432a40 FUN_143432a40 body=122 status=ok
// SIG undefined FUN_143432a40(void)

void FUN_143432a40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x1b) {
      lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
      if (lVar2 != 0) {
        local_res8[0] = 0x34000;
        FUN_1432c19d0(lVar2,local_res8,"LoadVars.send is not implemented.");
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432ac0 FUN_143432ac0 body=122 status=ok
// SIG undefined FUN_143432ac0(void)

void FUN_143432ac0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x1b) {
      lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
      if (lVar2 != 0) {
        local_res8[0] = 0x34000;
        FUN_1432c19d0(lVar2,local_res8,"LoadVars.sendAndLoad is not implemented.");
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432b40 FUN_143432b40 body=364 status=ok
// SIG undefined FUN_143432b40(void)

void FUN_143432b40(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong local_res8;
  undefined **local_28;
  longlong local_20;
  ulonglong *local_18;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x1b) {
      plVar4 = *(longlong **)(param_1 + 0x10);
      FUN_1432c2f70(&local_res8);
      local_20 = *(longlong *)(param_1 + 0x30);
      local_28 = &PTR_FUN_145b131f0;
      local_18 = &local_res8;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)&DAT_00000020;
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,local_20 + 0xe8,&local_28,0,0);
      lVar3 = FUN_1432c3580(&local_res8);
      FUN_1432c3c60(&local_res8,lVar3 + -1,1);
      lVar3 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18
                               ) + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
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
      local_28 = &PTR_FUN_145af1858;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432cc0 FUN_143432cc0 body=474 status=ok
// SIG undefined FUN_143432cc0(void)

void FUN_143432cc0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *local_res8;
  undefined8 *local_res10;
  ulonglong local_res18;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 0x1b) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar7 = 0;
      lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = lVar7;
      }
      lVar9 = lVar7;
      if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143411540(lVar9,&local_res8,lVar6,0xffffffff,0);
      puVar3 = local_res8;
      FUN_1432c2fb0(&local_res18,*local_res8);
      piVar1 = (int *)(puVar3 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar3);
      }
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar9 = lVar7;
      if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143411540(lVar9,&local_res10,lVar6,0xffffffff,0);
      FUN_1432c2fb0(&local_res8,*local_res10);
      lVar6 = lVar8 + 0x20;
      if (lVar8 == 0) {
        lVar6 = lVar7;
      }
      uVar4 = FUN_143432ea0(*(undefined8 *)(param_1 + 0x30),lVar6,&local_res8);
      FUN_143432330(lVar8,*(undefined8 *)(param_1 + 0x30),uVar4);
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        (((ulonglong)local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))
                  (DAT_146b62f28,(ulonglong)local_res8 & 0xfffffffffffffffc);
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res10);
      }
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","LoadVars");
  return;
}



// FUNCTION 143432ea0 FUN_143432ea0 body=685 status=ok
// SIG undefined FUN_143432ea0(void)

undefined8 FUN_143432ea0(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 local_res18 [8];
  longlong local_res20;
  byte local_b8 [8];
  longlong local_b0;
  undefined1 local_98 [8];
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 *local_60;
  undefined8 local_58;
  
  FUN_1432c5960(&local_90,DAT_146b62f28);
  FUN_1432c5960(&local_60,DAT_146b62f28);
  if ((*(ulonglong *)(*param_3 & 0xfffffffffffffffc) & 0x7fffffffffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    bVar2 = true;
    iVar3 = FUN_1432c3650(param_3,0,local_98);
    while (iVar3 != 0) {
      if (iVar3 == 0xd) {
        iVar3 = 10;
      }
      if (iVar3 == 0x26) {
        puVar6 = &DAT_145af3922;
        if (local_60 != (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        lVar4 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                               0x618),puVar6,local_58);
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        local_b8[0] = 5;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        local_res18[0] = 0;
        puVar6 = &DAT_145af3922;
        if (local_90 != (undefined1 *)0x0) {
          puVar6 = local_90;
        }
        local_b0 = lVar4;
        local_res20 = FUN_143360a90(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18)
                                     + 0x618),puVar6,local_88);
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        (**(code **)(*param_2 + 0x18))(param_2,param_1,&local_res20,local_b8,local_res18);
        piVar1 = (int *)(local_res20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_b8[0]) {
          FUN_143411150(local_b8);
        }
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar4);
        }
        FUN_1432c5cb0(&local_90);
        FUN_1432c5cb0(&local_60);
        bVar2 = true;
      }
      else {
        if (bVar2) {
          if (iVar3 == 0x3d) {
            bVar2 = false;
            goto LAB_143433033;
          }
          ppuVar5 = &local_90;
        }
        else {
          ppuVar5 = &local_60;
        }
        FUN_1432c5df0(ppuVar5,iVar3);
      }
LAB_143433033:
      iVar3 = Scaleform::String::GetNextChar(param_3,local_98);
    }
    lVar4 = Scaleform::StringBuffer::GetLength(&local_90);
    if (lVar4 != 0) {
      puVar6 = &DAT_145af3922;
      if (local_60 != (undefined1 *)0x0) {
        puVar6 = local_60;
      }
      lVar4 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x618)
                            ,puVar6,local_58);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      local_b8[0] = 5;
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      local_res18[0] = 0;
      puVar6 = &DAT_145af3922;
      if (local_90 != (undefined1 *)0x0) {
        puVar6 = local_90;
      }
      local_b0 = lVar4;
      local_res20 = FUN_143360a90(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                                   0x618),puVar6,local_88);
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      (**(code **)(*param_2 + 0x18))(param_2,param_1,&local_res20,local_b8,local_res18);
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (4 < local_b8[0]) {
        FUN_143411150(local_b8);
      }
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar4);
      }
    }
    uVar7 = 1;
  }
  Scaleform::StringBuffer::~StringBuffer(&local_60);
  Scaleform::StringBuffer::~StringBuffer(&local_90);
  return uVar7;
}



// FUNCTION 143433160 FUN_143433160 body=126 status=ok
// SIG undefined FUN_143433160(void)

undefined8 * FUN_143433160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143433240;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0c280;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 1434331f0 FUN_1434331f0 body=60 status=ok
// SIG undefined FUN_1434331f0(void)

void FUN_1434331f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_143431e80(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143433240 FUN_143433240 body=98 status=ok
// SIG undefined FUN_143433240(void)

void FUN_143433240(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x1b) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
      if (cVar2 == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar4 = 0;
        }
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
        return;
      }
    }
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 1;
  return;
}



// FUNCTION 1434332b0 FUN_1434332b0 body=727 status=ok
// SIG undefined FUN_1434332b0(void)

longlong * FUN_1434332b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
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
    puVar2[0xd] = FUN_143433240;
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
    *puVar2 = &PTR_LAB_145b0c280;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xb8,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_143432450(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,0x1f,&local_res8);
  local_40[0] = *param_1;
  lVar4 = *(longlong *)(param_2 + 0x60);
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
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x230,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 143433590 FUN_143433590 body=213 status=ok
// SIG undefined FUN_143433590(void)

undefined8 * FUN_143433590(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0c340;
  puVar1 = param_1 + 4;
  *puVar1 = &PTR_LAB_145b0c388;
  param_1[0xd] = &PTR__scalar_deleting_destructor__145b0c308;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 2;
  FUN_1432c5250(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar2 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x21);
  FUN_1434a4d00(puVar1,param_2 + 0xe8,uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14340b610(puVar1,param_2 + 0xe8,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(param_2 + 0xe8,puVar1);
  FUN_1434646c0(param_2,puVar1,puVar1);
  return param_1;
}



// FUNCTION 143433670 FUN_143433670 body=288 status=ok
// SIG undefined FUN_143433670(void)

void FUN_143433670(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined **local_18;
  undefined4 local_10;
  int local_c;
  
  *(uint *)(param_1 + 0x90) = 3 - (uint)(param_3 != '\0');
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 2;
    puVar3[8] = param_3;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x30);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),"onLoad",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (param_1 + 0x20 != 0) {
    local_10 = 1;
    local_18 = &PTR_FUN_145b11e98;
    local_c = iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar5 >> 5);
    FUN_1434649e0(param_2,param_1 + 0x20,&local_res8,&local_18);
  }
  piVar1 = (int *)(local_res8 + 0x18);
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
  return;
}



// FUNCTION 1434337a0 FUN_1434337a0 body=106 status=ok
// SIG undefined FUN_1434337a0(void)

undefined8 * FUN_1434337a0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495b80();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0c430;
  param_1[4] = &PTR_LAB_145b0c478;
  param_1[0x13] = &PTR_LAB_145b0c520;
  FUN_143422ee0(param_1 + 0x13,param_1,param_2,&PTR_s_clear_145b08180,local_res8);
  return param_1;
}



// FUNCTION 143433810 FUN_143433810 body=99 status=ok
// SIG undefined FUN_143433810(void)

void FUN_143433810(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0x1f) {
      lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = 0;
      }
      if (lVar2 != 0) {
        Scaleform::GFx::Text::StyleManager::ClearStyles(lVar2 + 0x68);
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet");
  return;
}



// FUNCTION 143433880 FUN_143433880 body=3612 status=ok
// SIG undefined FUN_143433880(void)

void FUN_143433880(double param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  ulonglong *puVar11;
  double dVar12;
  ulonglong uVar13;
  uint uVar14;
  double dVar15;
  longlong lVar16;
  longlong *plVar17;
  double dVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 local_res10;
  byte bStackX_11;
  undefined2 uStackX_12;
  undefined4 uStackX_14;
  longlong local_res18;
  ulonglong local_res20;
  ulonglong in_stack_ffffffffffffff58;
  longlong local_88;
  byte local_80 [8];
  double local_78;
  
  lVar16 = 0;
  uVar19 = 0;
  local_res10 = 0;
  bStackX_11 = 0;
  uStackX_12 = 0;
  if ((*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))(), iVar8 == 0x1f)) {
    lVar9 = *(longlong *)((longlong)param_1 + 0x10) + -0x20;
    if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
      lVar9 = lVar16;
    }
    if (lVar9 != 0) {
      if (*(int *)((longlong)param_1 + 0x38) < 1) {
        puVar3 = *(undefined1 **)((longlong)param_1 + 8);
        FUN_143411150(puVar3);
        *puVar3 = 1;
      }
      else {
        lVar4 = *(longlong *)((longlong)param_1 + 0x30);
        uVar2 = *(uint *)((longlong)param_1 + 0x3c);
        if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
          lVar16 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
        }
        FUN_143411540(lVar16,&local_res10,lVar4,0xffffffff,
                      in_stack_ffffffffffffff58 & 0xffffffffffffff00);
        puVar6 = (undefined8 *)
                 CONCAT44(uStackX_14,CONCAT22(uStackX_12,CONCAT11(bStackX_11,local_res10)));
        iVar8 = *(int *)(puVar6 + 4);
        if ((iVar8 == 0) || (*(char *)*puVar6 != '.')) {
          lVar16 = (**(code **)(*(longlong *)(lVar9 + 0x68) + 0x10))(lVar9 + 0x68,0,*puVar6,iVar8);
        }
        else {
          lVar16 = (**(code **)(*(longlong *)(lVar9 + 0x68) + 0x10))
                             (lVar9 + 0x68,1,(char *)*puVar6 + 1,iVar8 + -1);
        }
        if (lVar16 == 0) {
          puVar3 = *(undefined1 **)((longlong)param_1 + 8);
          FUN_143411150(puVar3);
          *puVar3 = 1;
        }
        else {
          plVar17 = *(longlong **)
                     (*(longlong *)(*(longlong *)((longlong)param_1 + 0x30) + 0xe8) + 0x30);
          lVar9 = (**(code **)(*plVar17 + 0x50))(plVar17,0x68);
          if (lVar9 == 0) {
            local_res18 = 0;
          }
          else {
            local_res18 = FUN_1434148b0(lVar9,*(undefined8 *)((longlong)param_1 + 0x30));
          }
          plVar17 = (longlong *)(*(longlong *)((longlong)param_1 + 0x30) + 0xe8);
          if ((*(byte *)(lVar16 + 0x4c) & 1) != 0) {
            FUN_1432c2f70(&local_res20);
            FUN_1432c3700(&local_res20,0x23);
            uVar2 = *(uint *)(lVar16 + 0x40);
            local_res10 = (undefined1)uVar2;
            bStackX_11 = (byte)(uVar2 >> 8);
            uStackX_12 = (undefined2)(uVar2 >> 0x10);
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[(uVar2 >> 0x10 & 0xff) >> 4]);
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[uVar2 >> 0x10 & 0xf]);
            uVar14 = (uint)bStackX_11;
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[bStackX_11 >> 4]);
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[uVar14 & 0xf]);
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[(uVar2 & 0xff) >> 4]);
            FUN_1432c3700(&local_res20,(int)"0123456789ABCDEF"[uVar2 & 0xf]);
            dVar10 = (double)FUN_143360a90(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                            0x618),(longlong)(local_res20 & 0xfffffffffffffffc) +
                                                   0xc,
                                           *(ulonglong *)(local_res20 & 0xfffffffffffffffc) &
                                           0x7fffffffffffffff);
            lVar9 = local_res18;
            *(int *)((longlong)dVar10 + 0x18) = *(int *)((longlong)dVar10 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)dVar10 + 0x18) = *(int *)((longlong)dVar10 + 0x18) + 1;
            local_res10 = 0;
            local_78 = dVar10;
            local_88 = FUN_143360a60(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618)
                                     ,"color");
            *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_88,local_80,
                       &local_res10);
            piVar1 = (int *)(local_88 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            piVar1 = (int *)((longlong)dVar10 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(dVar10);
            }
            uVar13 = local_res20 & 0xfffffffffffffffc;
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
            }
          }
          if ((*(byte *)(lVar16 + 0x4c) >> 2 & 1) != 0) {
            puVar11 = (ulonglong *)FUN_1433ddd30(lVar16);
            dVar10 = (double)FUN_143360a90(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                            0x618),(longlong)(*puVar11 & 0xfffffffffffffffc) + 0xc,
                                           *(ulonglong *)(*puVar11 & 0xfffffffffffffffc) &
                                           0x7fffffffffffffff);
            lVar9 = local_res18;
            *(int *)((longlong)dVar10 + 0x18) = *(int *)((longlong)dVar10 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)dVar10 + 0x18) = *(int *)((longlong)dVar10 + 0x18) + 1;
            local_res10 = 0;
            local_78 = dVar10;
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"fontFamily");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            piVar1 = (int *)((longlong)dVar10 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(dVar10);
            }
          }
          lVar9 = local_res18;
          if ((*(byte *)(lVar16 + 0x4c) >> 3 & 1) != 0) {
            local_80[0] = 3;
            local_res10 = 0;
            local_78 = (double)((float)*(ushort *)(lVar16 + 0x48) * 0.05);
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"fontSize");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
          }
          if ((*(byte *)(lVar16 + 0x4c) >> 5 & 1) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618);
            if ((*(byte *)(lVar16 + 0x4a) & 2) == 0) {
              local_78 = (double)FUN_143360a60(uVar5,"normal");
              uVar19 = 2;
              dVar10 = local_78;
              dVar15 = param_1;
            }
            else {
              local_78 = (double)FUN_143360a60(uVar5,"italic");
              uVar19 = 1;
              dVar10 = param_1;
              dVar15 = local_78;
            }
            lVar9 = local_res18;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_res10 = 0;
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"fontStyle");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if ((uVar19 & 2) != 0) {
              uVar19 = uVar19 & 0xfffffffd;
              piVar1 = (int *)((longlong)dVar10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar10);
              }
            }
            if ((uVar19 & 1) != 0) {
              uVar19 = uVar19 & 0xfffffffe;
              piVar1 = (int *)((longlong)dVar15 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar15);
              }
            }
          }
          if ((*(byte *)(lVar16 + 0x4c) >> 4 & 1) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618);
            if ((*(byte *)(lVar16 + 0x4a) & 1) == 0) {
              uVar19 = uVar19 | 8;
              local_78 = (double)FUN_143360a60(uVar5,"normal");
              dVar10 = param_1;
              dVar15 = local_78;
            }
            else {
              uVar19 = uVar19 | 4;
              local_78 = (double)FUN_143360a60(uVar5,&DAT_145b139e4);
              dVar10 = local_78;
              dVar15 = param_1;
            }
            lVar9 = local_res18;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_res10 = 0;
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"fontWeight");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if ((uVar19 & 8) != 0) {
              uVar19 = uVar19 & 0xfffffff7;
              piVar1 = (int *)((longlong)dVar15 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar15);
              }
            }
            if ((uVar19 & 4) != 0) {
              uVar19 = uVar19 & 0xfffffffb;
              piVar1 = (int *)((longlong)dVar10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar10);
              }
            }
          }
          if (*(char *)(lVar16 + 0x4c) < '\0') {
            uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618);
            if ((*(byte *)(lVar16 + 0x4a) & 8) == 0) {
              uVar19 = uVar19 | 0x20;
              local_78 = (double)FUN_143360a60(uVar5,"false");
              dVar10 = local_78;
              dVar15 = param_1;
            }
            else {
              uVar19 = uVar19 | 0x10;
              local_78 = (double)FUN_143360a60(uVar5,&DAT_145af3900);
              dVar10 = param_1;
              dVar15 = local_78;
            }
            lVar9 = local_res18;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_res10 = 0;
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"kerning");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if ((uVar19 & 0x20) != 0) {
              uVar19 = uVar19 & 0xffffffdf;
              piVar1 = (int *)((longlong)dVar10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar10);
              }
            }
            if ((uVar19 & 0x10) != 0) {
              uVar19 = uVar19 & 0xffffffef;
              piVar1 = (int *)((longlong)dVar15 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar15);
              }
            }
          }
          lVar9 = local_res18;
          if ((*(byte *)(lVar16 + 0x4c) >> 1 & 1) != 0) {
            local_80[0] = 3;
            local_res10 = 0;
            local_78 = (double)(*(float *)(lVar16 + 0x44) * 0.05);
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"letterSpacing");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
          }
          if ((*(byte *)(lVar16 + 0x72) >> 4 & 1) != 0) {
            local_80[0] = 3;
            local_res10 = 0;
            local_78 = (double)*(ushort *)(lVar16 + 0x6e);
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"marginLeft");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
          }
          if ((*(byte *)(lVar16 + 0x72) >> 5 & 1) != 0) {
            local_80[0] = 3;
            local_res10 = 0;
            local_78 = (double)*(ushort *)(lVar16 + 0x70);
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"marginRight");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
          }
          if ((*(byte *)(lVar16 + 0x72) & 1) != 0) {
            uVar7 = *(ushort *)(lVar16 + 0x72) & 0x600;
            dVar12 = param_1;
            dVar10 = param_1;
            dVar15 = param_1;
            dVar21 = param_1;
            if (uVar7 == 0) {
              local_res20 = (ulonglong)(uVar19 | 0x40);
              local_78 = (double)FUN_143360a60(*(undefined8 *)
                                                (*(longlong *)
                                                  (*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618),
                                               &DAT_145b068ec);
              *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
              dVar18 = local_78;
              dVar20 = param_1;
            }
            else {
              if (uVar7 == 0x600) {
                local_res20 = (ulonglong)(uVar19 | 0x80);
                local_78 = (double)FUN_143360a60(*(undefined8 *)
                                                  (*(longlong *)
                                                    (*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618)
                                                 ,"center");
                *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
                dVar21 = local_78;
              }
              else {
                if (uVar7 == 0x200) {
                  uVar19 = uVar19 | 0x100;
                  dVar12 = (double)FUN_143360a60(*(undefined8 *)
                                                  (*(longlong *)
                                                    (*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618)
                                                 ,"right");
                  dVar10 = dVar12;
                }
                else {
                  uVar19 = uVar19 | 0x200;
                  dVar12 = (double)FUN_143360a60(*(undefined8 *)
                                                  (*(longlong *)
                                                    (*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618)
                                                 ,"justify");
                  dVar15 = dVar12;
                }
                *(int *)((longlong)dVar12 + 0x18) = *(int *)((longlong)dVar12 + 0x18) + 1;
                local_res20 = (ulonglong)(uVar19 | 0x400);
                *(int *)((longlong)dVar12 + 0x18) = *(int *)((longlong)dVar12 + 0x18) + 1;
                local_78 = dVar12;
              }
              local_res20 = local_res20 | 0x800;
              *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
              dVar18 = param_1;
              dVar20 = local_78;
            }
            local_80[0] = 5;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_res10 = 0;
            local_88 = FUN_143360a60(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618)
                                     ,"textAlign");
            *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + 1;
            (**(code **)(*(longlong *)(local_res18 + 0x20) + 0x18))
                      ((longlong *)(local_res18 + 0x20),*(undefined8 *)((longlong)param_1 + 0x30),
                       &local_88,local_80,&local_res10);
            piVar1 = (int *)(local_88 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if (((uint)local_res20 >> 0xb & 1) != 0) {
              local_res20 = (ulonglong)((uint)local_res20 & 0xfffff7ff);
              piVar1 = (int *)((longlong)dVar20 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar20);
              }
            }
            uVar13 = local_res20;
            if (((uint)local_res20 >> 10 & 1) != 0) {
              uVar13 = (ulonglong)((uint)local_res20 & 0xfffffbff);
              piVar1 = (int *)((longlong)dVar12 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar12);
              }
            }
            if (((uint)uVar13 >> 9 & 1) != 0) {
              uVar13 = (ulonglong)((uint)uVar13 & 0xfffffdff);
              piVar1 = (int *)((longlong)dVar15 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar15);
              }
            }
            if (((uint)uVar13 >> 8 & 1) != 0) {
              uVar13 = (ulonglong)((uint)uVar13 & 0xfffffeff);
              piVar1 = (int *)((longlong)dVar10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar10);
              }
            }
            if ((char)uVar13 < '\0') {
              uVar13 = (ulonglong)((uint)uVar13 & 0xffffff7f);
              piVar1 = (int *)((longlong)dVar21 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar21);
              }
            }
            uVar19 = (uint)uVar13;
            if ((uVar13 & 0x40) != 0) {
              uVar19 = uVar19 & 0xffffffbf;
              piVar1 = (int *)((longlong)dVar18 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar18);
              }
            }
          }
          if ((*(byte *)(lVar16 + 0x4c) >> 6 & 1) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) + 0x618);
            if ((*(byte *)(lVar16 + 0x4a) & 4) == 0) {
              uVar19 = uVar19 | 0x2000;
              local_78 = (double)FUN_143360a60(uVar5,&DAT_145b122f4);
              dVar10 = param_1;
              dVar15 = local_78;
            }
            else {
              uVar19 = uVar19 | 0x1000;
              local_78 = (double)FUN_143360a60(uVar5,"underline");
              dVar10 = local_78;
              dVar15 = param_1;
            }
            lVar9 = local_res18;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_80[0] = 5;
            *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
            local_res10 = 0;
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"textDecoration");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
            if ((uVar19 >> 0xd & 1) != 0) {
              uVar19 = uVar19 & 0xffffdfff;
              piVar1 = (int *)((longlong)dVar15 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar15);
              }
            }
            if ((uVar19 >> 0xc & 1) != 0) {
              piVar1 = (int *)((longlong)dVar10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920(dVar10);
              }
            }
          }
          lVar9 = local_res18;
          if ((*(byte *)(lVar16 + 0x72) >> 2 & 1) != 0) {
            local_80[0] = 3;
            local_res10 = 0;
            local_78 = (double)(int)*(short *)(lVar16 + 0x6a);
            local_res20 = FUN_143360a60(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*plVar17 + 0x28) + 0x18) +
                                         0x618),"textIndent");
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                      (lVar9 + 0x20,*(undefined8 *)((longlong)param_1 + 0x30),&local_res20,local_80,
                       &local_res10);
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (4 < local_80[0]) {
              FUN_143411150(local_80);
            }
          }
          lVar16 = local_res18;
          FUN_143412aa0(*(undefined8 *)((longlong)param_1 + 8),local_res18);
          if ((lVar16 != 0) && ((*(uint *)(lVar16 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) - 1;
            FUN_1434a2b80(lVar16);
          }
        }
        piVar1 = (int *)(puVar6 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(puVar6);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)((longlong)param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet");
  return;
}



// FUNCTION 1434346b0 FUN_1434346b0 body=989 status=ok
// SIG undefined FUN_1434346b0(void)

void FUN_1434346b0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong *plVar15;
  undefined4 local_res10 [2];
  ulonglong local_res18;
  longlong local_res20;
  longlong *local_68;
  ulonglong uStack_60;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0x1f)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet"
                 );
    return;
  }
  uVar12 = 0;
  uVar6 = *(longlong *)(param_1 + 0x10) - 0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar6 = uVar12;
  }
  if (uVar6 == 0) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  lVar5 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x60),
                        *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x148,0,0xffffffff);
  lVar3 = *(longlong *)(param_1 + 0x30);
  FUN_1432c2f70(&local_res18);
  lVar10 = uVar6 + 0x68;
  local_res20 = lVar10;
  local_68 = (longlong *)
             UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>
             ::GetAddress(lVar10);
  lVar7 = *local_68;
  if (lVar7 == 0) {
    local_68 = (longlong *)0x0;
    uVar12 = 0;
    uStack_60 = uVar12;
    plVar15 = local_68;
  }
  else {
    plVar9 = (longlong *)(lVar7 + 0x10);
    do {
      uStack_60 = uVar12;
      plVar15 = local_68;
      if (*plVar9 != -2) break;
      uVar12 = uVar12 + 1;
      plVar9 = plVar9 + 5;
      uStack_60 = uVar12;
    } while (uVar12 <= *(ulonglong *)(lVar7 + 8));
  }
  do {
    uVar8 = 0;
    UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
    GetAddress(lVar10);
    if (((plVar15 == (longlong *)0x0) || (*plVar15 == 0)) ||
       (*(longlong *)(*plVar15 + 8) < (longlong)uVar12)) {
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
      }
      if (lVar5 == 0) {
        return;
      }
      if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) == 0) {
        return;
      }
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
      return;
    }
    FUN_1432c3510(&local_res18);
    if (*(int *)(uVar12 * 0x28 + 0x18 + *plVar15) == 1) {
      FUN_1432c3700(&local_res18,0x2e);
    }
    FUN_1432c4fd0(&local_res18,*plVar15 + 0x20 + uVar12 * 0x28);
    uVar6 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(local_res18 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(local_res18 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    local_res10[0] = 0x143;
    *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 2;
    local_68 = (longlong *)CONCAT71(local_68._1_7_,5);
    uStack_60 = uVar6;
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar5,0x20,local_res10);
    bVar14 = 5;
    if (lVar7 != 0) {
      uVar8 = FUN_143410ec0(lVar7,&local_68);
      bVar14 = (byte)local_68;
    }
    lVar7 = *(longlong *)(lVar5 + 0x78);
    uVar11 = lVar7 + 1;
    if (uVar11 < *(ulonglong *)(lVar5 + 0x78)) {
      uVar13 = uVar11;
      if (uVar11 < *(ulonglong *)(lVar5 + 0x80) >> 1) {
LAB_14343490d:
        FUN_1432cfd30(lVar5 + 0x70,lVar5 + 0x70,uVar13);
      }
    }
    else if (*(ulonglong *)(lVar5 + 0x80) < uVar11) {
      uVar13 = (uVar11 >> 2) + uVar11;
      goto LAB_14343490d;
    }
    *(ulonglong *)(lVar5 + 0x78) = uVar11;
    puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + lVar7 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = uVar8;
    }
    if (4 < bVar14) {
      FUN_143411150(&local_68);
    }
    piVar1 = (int *)(uVar6 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar6);
    }
    uVar6 = *(ulonglong *)(*plVar15 + 8);
    lVar10 = local_res20;
    if (((longlong)uVar12 <= (longlong)uVar6) && (uVar12 = uVar12 + 1, uVar12 <= uVar6)) {
      plVar9 = (longlong *)(*plVar15 + (uVar12 * 5 + 2) * 8);
      do {
        if (*plVar9 != -2) break;
        uVar12 = uVar12 + 1;
        plVar9 = plVar9 + 5;
      } while (uVar12 <= uVar6);
    }
  } while( true );
}



// FUNCTION 143434aa0 FUN_143434aa0 body=426 status=ok
// SIG undefined FUN_143434aa0(void)

void FUN_143434aa0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  RefCountImpl *this;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  undefined8 *local_res8;
  uint in_stack_ffffffffffffffe8;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0x1f)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet"
                 );
    return;
  }
  this = (RefCountImpl *)0x0;
  pRVar6 = (RefCountImpl *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pRVar6 = this;
  }
  if (pRVar6 != (RefCountImpl *)0x0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      *puVar3 = 2;
      puVar3[8] = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      pRVar7 = this;
      if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        pRVar7 = (RefCountImpl *)
                 ((ulonglong)(uVar2 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
      }
      FUN_143411540(pRVar7,&local_res8,lVar4,0xffffffff,in_stack_ffffffffffffffe8 & 0xffffff00);
      *(undefined4 *)(pRVar6 + 0x90) = 1;
      pRVar7 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
      if (pRVar7 != (RefCountImpl *)0x0) {
        *(undefined8 *)(pRVar7 + 8) = 0;
        *(undefined ***)pRVar7 = &PTR_FUN_144f70a50;
        *(undefined ***)pRVar7 = &PTR_FUN_145b13998;
        *(undefined4 *)(pRVar7 + 8) = 1;
        *(undefined4 *)(pRVar7 + 0x10) = 0;
        *(undefined8 *)(pRVar7 + 0x18) = 0;
        *(undefined4 *)(pRVar7 + 0x20) = 0;
        this = pRVar7;
      }
      FUN_143439f20(*(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) +
                       0x10) + 0x18),pRVar6,this,*local_res8,0);
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      *puVar3 = 2;
      puVar3[8] = 1;
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143434c50 FUN_143434c50 body=332 status=ok
// SIG undefined FUN_143434c50(void)

void FUN_143434c50(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *local_res8;
  byte local_28 [32];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 != 0x1f)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet"
                 );
    return;
  }
  lVar7 = 0;
  lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = lVar7;
  }
  if (lVar8 != 0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      *puVar3 = 2;
      puVar3[8] = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143410ec0(local_28,lVar7);
      FUN_143411540(local_28,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
      uVar5 = FUN_143dee3d0(lVar8 + 0x68,*local_res8,*(undefined4 *)(local_res8 + 4));
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      *puVar3 = 2;
      puVar3[8] = uVar5;
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143434db0 FUN_143434db0 body=609 status=ok
// SIG undefined FUN_143434db0(void)

void FUN_143434db0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *local_res8;
  undefined8 *local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  undefined **local_38;
  longlong local_30;
  undefined8 **local_28;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x1f)) {
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x38))) {
      if ((*(int *)(param_1 + 0x38) < 2) ||
         (pcVar3 = (char *)FUN_1434141c0(param_1,1), *pcVar3 == '\x01')) {
        uVar4 = FUN_1434141c0(param_1,0);
        FUN_143411540(uVar4,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                      in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
        if (*(int *)(local_res8 + 4) != 0) {
          FUN_143dee8d0(lVar6 + 0x68,*(char *)*local_res8 == '.');
        }
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_res8);
        }
      }
      else {
        uVar4 = FUN_1434141c0(param_1,0);
        FUN_143411540(uVar4,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                      in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
        uVar4 = FUN_1434141c0(param_1,1);
        lVar5 = FUN_143412120(uVar4,*(undefined8 *)(param_1 + 0x30));
        if (lVar5 == 0) {
          piVar1 = (int *)(local_res10 + 3);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
        }
        else {
          FUN_1432c2f70(&local_res8);
          FUN_1432c3950(&local_res8,*local_res10,0xffffffffffffffff);
          FUN_1432c3700(&local_res8,0x7b);
          local_30 = *(longlong *)(param_1 + 0x30);
          local_38 = &PTR_FUN_145b13a80;
          local_28 = &local_res8;
          (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x40))
                    ((longlong *)(lVar5 + 0x20),local_30 + 0xe8,&local_38,0,0);
          FUN_1432c3700(&local_res8,0x7d);
          FUN_143dee3d0(lVar6 + 0x68,(longlong)((ulonglong)local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)((ulonglong)local_res8 & 0xfffffffffffffffc) &
                        0x7fffffffffffffff);
          local_38 = &PTR_FUN_145af1858;
          iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                            (((ulonglong)local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
          if (iVar2 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))
                      (DAT_146b62f28,(ulonglong)local_res8 & 0xfffffffffffffffc);
          }
          piVar1 = (int *)(local_res10 + 3);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
        }
        if (iVar2 == 0) {
          FUN_14335f920(local_res10);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet");
  return;
}



// FUNCTION 143435020 FUN_143435020 body=377 status=ok
// SIG undefined FUN_143435020(void)

void FUN_143435020(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x1f)) {
    lVar4 = 0;
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x38))) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      lVar3 = FUN_143412120(lVar4);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
        lVar4 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar4 + 0x60),
                              *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x18) + 0x238,0,
                              CONCAT44(uVar5,0xffffffff));
        local_20 = *(longlong *)(param_1 + 0x30);
        local_28 = &PTR_FUN_145b13b30;
        local_18 = lVar4;
        (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x40))
                  ((longlong *)(lVar3 + 0x20),local_20 + 0xe8,&local_28,0,0);
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
        local_28 = &PTR_FUN_145af1858;
        if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
          FUN_1434a2b80(lVar4);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","StyleSheet");
  return;
}



// FUNCTION 1434351a0 FUN_1434351a0 body=126 status=ok
// SIG undefined FUN_1434351a0(void)

undefined8 * FUN_1434351a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143435230;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0c528;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143435230 FUN_143435230 body=193 status=ok
// SIG undefined FUN_143435230(void)

void FUN_143435230(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x1f) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
      if (cVar2 == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar4 = 0;
        }
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
        }
        goto LAB_1434352be;
      }
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_143433590(lVar4,*(undefined8 *)(param_1 + 0x30));
  }
LAB_1434352be:
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  return;
}



// FUNCTION 143435300 FUN_143435300 body=61 status=ok
// SIG undefined FUN_143435300(void)

void FUN_143435300(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
  if (lVar2 != 0) {
    FUN_143433590(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143435350 FUN_143435350 body=1327 status=ok
// SIG undefined FUN_143435350(void)

longlong * FUN_143435350(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined1 local_60;
  byte local_58 [8];
  longlong local_50 [2];
  undefined1 local_40;
  
  local_60 = 8;
  local_68 = param_2;
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar2 = puVar5;
  if (puVar1 != (undefined8 *)0x0) {
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar1[1] = puVar2;
    *(undefined4 *)(puVar1 + 3) = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_LAB_145b0ac50;
    puVar1[4] = &PTR_LAB_145b0ac98;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    lVar3 = puVar1[6];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar1[6] = 0;
    *puVar1 = &PTR_LAB_145b0ae70;
    puVar1[4] = &PTR_LAB_145b0aef8;
    puVar1[0xd] = FUN_143435230;
    lVar3 = FUN_14341b750(local_68,7);
    if (puVar1[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar1[4] + 0x50))
                (puVar1 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar4 = puVar1[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar1[6] = lVar3;
    *puVar1 = &PTR_LAB_145b0c528;
    puVar1[4] = &PTR_LAB_145b0aef8;
    puVar2 = puVar1;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar2;
  param_1[1] = 0;
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0xd8,0);
  puVar2 = puVar5;
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = FUN_14341b750(param_2,1);
    if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar1[1] = puVar2;
    *(undefined4 *)(puVar1 + 3) = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_LAB_145b0ac50;
    puVar1[4] = &PTR_LAB_145b0ac98;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    lVar4 = puVar1[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar1[6] = 0;
    *puVar1 = &PTR_LAB_145b0c340;
    puVar1[4] = &PTR_LAB_145b0c388;
    puVar1[0xd] = &PTR__scalar_deleting_destructor__145b0c308;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 2;
    FUN_1432c5250(puVar1 + 0x10);
    *(undefined4 *)(puVar1 + 0x12) = 0;
    if (puVar1[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_58[0] = 10;
      (**(code **)(puVar1[4] + 0x50))
                (puVar1 + 4,&local_68,*(longlong *)(*(longlong *)(local_68 + 0x28) + 0x18) + 0x3a8,
                 local_58,&local_res8);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    lVar4 = puVar1[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar1[6] = lVar3;
    puVar2 = puVar1 + 0x13;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    *puVar1 = &PTR_LAB_145b0c430;
    puVar1[4] = &PTR_LAB_145b0c478;
    *puVar2 = &PTR_LAB_145b0c520;
    FUN_1434230f0(puVar2,puVar1,&local_68,param_1);
    local_res10[0] = 1;
    *puVar1 = &PTR_LAB_145b0c430;
    puVar1[4] = &PTR_LAB_145b0c478;
    *puVar2 = &PTR_LAB_145b0c520;
    FUN_143422ee0(puVar2,puVar1,&local_68,&PTR_s_clear_145b08180,local_res10);
    *(uint *)(puVar1 + 3) = *(int *)(puVar1 + 3) + 1U & 0x8fffffff;
    puVar2 = puVar1;
  }
  local_res8 = puVar2;
  FUN_1434a4b90(param_2,0x21,&local_res8);
  lVar4 = FUN_14341b750(param_2,10);
  bVar6 = false;
  lVar3 = *(longlong *)(lVar4 + 0x80);
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
  }
  puVar1 = *(undefined8 **)(lVar4 + 0x88);
  if ((puVar1 != (undefined8 *)0x0) &&
     (bVar6 = (*(byte *)(lVar4 + 0x90) & 1) != 0, puVar5 = puVar1, !bVar6)) {
    *(uint *)(puVar1 + 3) = *(int *)(puVar1 + 3) + 1U & 0x8fffffff;
  }
  local_50[0] = *param_1;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_58[0] = 8;
  local_40 = 0;
  if (local_50[0] != 0) {
    *(int *)(local_50[0] + 0x18) = *(int *)(local_50[0] + 0x18) + 1;
    *(uint *)(local_50[0] + 0x18) = *(uint *)(local_50[0] + 0x18) & 0x8fffffff;
  }
  local_50[1] = 0;
  if (param_1[1] != 0) {
    FUN_1434109d0(local_50,param_1[1],*(byte *)(param_1 + 2) & 1);
  }
  (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
            ((longlong *)(lVar3 + 0x20),&local_68,
             *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x240,local_58,&local_res8);
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  if (((!bVar6) && (puVar5 != (undefined8 *)0x0)) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((*(uint *)(puVar2 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar2 + 3) = *(uint *)(puVar2 + 3) - 1;
    FUN_1434a2b80(puVar2);
  }
  return param_1;
}



// FUNCTION 143435890 FUN_143435890 body=566 status=ok
// SIG undefined FUN_143435890(void)

undefined8 * FUN_143435890(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  RefCountNTSImpl *this;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  RefCountImpl *this_00;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  FUN_143388a90();
  plVar6 = (longlong *)0x0;
  *param_1 = &PTR_FUN_145b0c5e8;
  bVar10 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x10001;
  lVar2 = param_1[4];
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    iVar1 = *(int *)(lVar2 + 0x28);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(*(longlong *)(param_1[3] + 0x18) + 0x10);
      plVar3 = *(longlong **)(lVar5 + 0x68);
      plVar7 = plVar6;
      plVar9 = plVar6;
      if (plVar3 != (longlong *)0x0) {
        lVar11 = *(longlong *)(lVar5 + 0x60);
        plVar8 = plVar6;
        do {
          if (*(int *)(lVar11 + (longlong)plVar8 * 0x10) == iVar1) {
            if (*(longlong *)(lVar11 + 8 + (longlong)plVar8 * 0x10) != 0) {
              if (plVar3 != (longlong *)0x0) goto LAB_1434359b1;
              goto LAB_1434359ca;
            }
            break;
          }
          plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
        } while (plVar8 < plVar3);
      }
      if (plVar3 != (longlong *)0x0) {
        lVar11 = *(longlong *)(lVar5 + 0x60);
        plVar8 = plVar6;
        do {
          if (*(int *)(lVar11 + (longlong)plVar8 * 0x10) == 0) {
            if (*(longlong *)(lVar11 + 8 + (longlong)plVar8 * 0x10) != 0) {
              if (plVar3 != (longlong *)0x0) goto LAB_143435aa0;
              goto LAB_1434359ca;
            }
            break;
          }
          plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
        } while (plVar8 < plVar3);
      }
    }
  }
  else {
    this = (RefCountNTSImpl *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter(*(longlong *)(lVar2 + 0x30),param_1[3])
    ;
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      plVar3 = (longlong *)(**(code **)(*(longlong *)this + 0x218))(this);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x58))(plVar3,local_res8);
      bVar10 = (byte)(*puVar4 >> 4) & 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  goto LAB_1434359eb;
  while (plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1), plVar9 < plVar3) {
LAB_1434359b1:
    if (*(int *)(lVar11 + (longlong)plVar9 * 0x10) == iVar1) goto LAB_143435ab7;
  }
  goto LAB_1434359ca;
LAB_143435ab7:
  plVar7 = *(longlong **)(lVar11 + 8 + (longlong)plVar9 * 0x10);
  goto LAB_1434359ca;
  while (plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1), plVar9 < plVar3) {
LAB_143435aa0:
    if (*(int *)(lVar11 + (longlong)plVar9 * 0x10) == 0) goto LAB_143435ab7;
  }
LAB_1434359ca:
  plVar3 = (longlong *)(**(code **)(*plVar7 + 0x218))();
  puVar4 = (uint *)(**(code **)(*plVar3 + 0x58))(plVar3,local_res8);
  bVar10 = (byte)(*puVar4 >> 4) & 1;
LAB_1434359eb:
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
  if (lVar5 != 0) {
    plVar6 = (longlong *)
             FUN_143388b00(lVar5,param_1[3],lVar2 + 0x18,bVar10,*(undefined1 *)(param_2 + 0x24));
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = plVar6;
  this_00 = (RefCountImpl *)
            (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                      ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this_00 + 8))(this_00,param_1[5]);
  Scaleform::RefCountImpl::Release(this_00);
  return param_1;
}



// FUNCTION 143435ad0 FUN_143435ad0 body=74 status=ok
// SIG undefined FUN_143435ad0(void)

void FUN_143435ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b0c5e8;
  if ((RefCountNTSImpl *)param_1[8] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[8]);
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  return;
}



// FUNCTION 143435b20 FUN_143435b20 body=2540 status=ok
// SIG undefined FUN_143435b20(void)

undefined1 FUN_143435b20(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  RefCountNTSImpl *pRVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  RefCountNTSImpl *pRVar14;
  longlong lVar15;
  RefCountNTSImpl *pRVar16;
  RefCountNTSImpl *local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 *in_stack_ffffffffffffff58;
  uint uVar17;
  undefined4 uVar18;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  
  cVar4 = Scaleform::GFx::MoviePreloadTask::IsDone(*(undefined8 *)(param_1 + 0x28));
  lVar15 = *(longlong *)(param_1 + 0x20);
  if ((*(char *)(lVar15 + 0x25) != '\0') && (cVar4 != '\0')) {
    return 1;
  }
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
  if (cVar4 == '\0') {
    return 0;
  }
  pRVar14 = (RefCountNTSImpl *)0x0;
  if ((*(longlong *)(param_1 + 0x40) == 0) && (*(longlong *)(lVar15 + 0x30) != 0)) {
    pRVar8 = (RefCountNTSImpl *)Scaleform::GFx::CharacterHandle::ForceResolveCharacter();
    uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    if (pRVar8 == (RefCountNTSImpl *)0x0) {
      lVar9 = FUN_143437b70(plVar11,0);
      if (lVar9 == 0) {
        return 1;
      }
      uVar10 = (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 0xf0))()
      ;
      plVar11 = (longlong *)FUN_143412120(lVar15 + 0x38,uVar10);
      if (plVar11 == (longlong *)0x0) {
        return 1;
      }
      (**(code **)(*plVar11 + 0x60))(plVar11,uVar10,0,"Error",(ulonglong)uVar6 << 0x20);
      return 1;
    }
    pRVar16 = pRVar14;
    if ((char)pRVar8[0x6a] < '\0') {
      pRVar16 = pRVar8;
    }
    FUN_143499e70(param_1 + 0x40,pRVar16);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x28);
  }
  pRVar8 = *(RefCountNTSImpl **)(plVar11[2] + 0x68);
  if (pRVar8 == (RefCountNTSImpl *)0x0) {
    return 1;
  }
  lVar9 = *(longlong *)(plVar11[2] + 0x60);
  pRVar16 = pRVar14;
  while (*(int *)(lVar9 + (longlong)pRVar16 * 0x10) != 0) {
    pRVar16 = (RefCountNTSImpl *)(ulonglong)((int)pRVar16 + 1);
    if (pRVar8 <= pRVar16) {
      return 1;
    }
  }
  lVar9 = *(longlong *)((longlong)pRVar16 * 0x10 + 8 + lVar9);
  if (lVar9 == 0) {
    return 1;
  }
  lVar9 = (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 0xf0))();
  plVar12 = (longlong *)FUN_143412120(lVar15 + 0x38,lVar9);
  cVar4 = *(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68);
  plVar13 = (longlong *)FWmfMediaPlayer::GetSamples(*(undefined8 *)(param_1 + 0x28));
  if (plVar13 == (longlong *)0x0) {
    if (*(longlong *)(lVar15 + 0x30) == 0) {
      if (*(int *)(lVar15 + 0x28) != -1) {
        uVar10 = FUN_143437b70(plVar11);
        FUN_143499e70(param_1 + 0x40,uVar10);
      }
    }
    else {
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
      if (plVar13 == (longlong *)0x0) {
        return 1;
      }
      local_res10 = (RefCountNTSImpl *)CONCAT44(local_res10._4_4_,0x10001);
      uVar10 = (**(code **)(*plVar13 + 0x218))(plVar13);
      FUN_143310f20(uVar10,local_68,&local_res10);
      local_res18[0] = *(undefined4 *)(param_1 + 0x48);
      in_stack_ffffffffffffff58 = local_res18;
      pRVar14 = (RefCountNTSImpl *)
                (**(code **)(*(longlong *)plVar11[6] + 0x20))
                          ((longlong *)plVar11[6],*(undefined8 *)(param_1 + 0x18),local_68,plVar13,
                           in_stack_ffffffffffffff58,3);
      *(undefined4 *)(pRVar14 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30);
      *(undefined4 *)(pRVar14 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
      if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x88) >> 1 & 1) == 0) {
        lVar9 = *(longlong *)pRVar14;
        uVar10 = Scaleform::GFx::DisplayObject::GetName(*(longlong *)(param_1 + 0x40),&local_90);
        (**(code **)(lVar9 + 1000))(pRVar14,uVar10);
        piVar1 = (int *)(local_90 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar14);
      plVar11 = (longlong *)
                (**(code **)(*(longlong *)
                              ((longlong)plVar13 +
                              (ulonglong)*(byte *)((longlong)plVar13 + 0x6d) * 4) + 8))
                          ((longlong)plVar13 + (ulonglong)*(byte *)((longlong)plVar13 + 0x6d) * 4);
      (**(code **)(*plVar11 + 0xd8))(plVar11,*(undefined8 *)(param_1 + 0x40),pRVar14);
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38) = 0;
      *(int *)(pRVar14 + 8) = *(int *)(pRVar14 + 8) + 1;
      if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
      }
      *(RefCountNTSImpl **)(param_1 + 0x40) = pRVar14;
      Scaleform::RefCountNTSImpl::Release(pRVar14);
    }
    lVar9 = *(longlong *)(param_1 + 0x40);
    if ((lVar9 != 0) && (plVar12 != (longlong *)0x0)) {
      plVar11 = (longlong *)
                (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 8))();
      uVar10 = (**(code **)(*plVar11 + 0xf0))(plVar11);
      (**(code **)(*plVar12 + 0x60))
                (plVar12,uVar10,*(undefined8 *)(param_1 + 0x40),"URLNotFound",
                 (ulonglong)in_stack_ffffffffffffff58 & 0xffffffff00000000);
    }
    if (*(int *)(lVar15 + 0x28) != -1) {
      FUN_1432e35c0(*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (lVar9 != 0) {
    if ((*(byte *)(lVar9 + 0x6a) >> 4 & 1) != 0) {
      return 1;
    }
    if ((*(ushort *)(lVar9 + 0x6a) & 0x1000) != 0) {
      return 1;
    }
    if (*(int *)(lVar9 + 0x2c) < -1) {
      return 1;
    }
  }
  iVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
  if (iVar5 != -1) {
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13);
    uVar17 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    if ((8 < uVar6) &&
       (0x10 < ((byte)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(plVar13[0xe] + 0x18) + 0x40) + 0xd0) & 8 | 0x10)
       )) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x25) = 1;
      lVar9 = FUN_1434a0340(plVar11);
      if ((lVar9 != 0) && (*(char *)(lVar15 + 0x24) == '\0')) {
        uVar3 = *(ulonglong *)(lVar15 + 0x18);
        lVar15 = FUN_1434a0340(plVar11);
        FUN_1434a1650(lVar15 + 0x18,"Failed loading SWF \"%s\": ActionScript version mismatch",
                      (uVar3 & 0xfffffffffffffffc) + 0xc);
      }
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (lVar15 == 0) {
        return 1;
      }
      if (plVar12 == (longlong *)0x0) {
        return 1;
      }
      plVar11 = (longlong *)
                (**(code **)(*(longlong *)(lVar15 + (ulonglong)*(byte *)(lVar15 + 0x6d) * 4) + 8))()
      ;
      uVar10 = (**(code **)(*plVar11 + 0xf0))(plVar11);
      (**(code **)(*plVar12 + 0x60))
                (plVar12,uVar10,*(undefined8 *)(param_1 + 0x40),"ActionScriptMismatch",
                 (ulonglong)uVar17 << 0x20);
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    local_res10 = (RefCountNTSImpl *)0x0;
    pRVar8 = pRVar14;
    if (*(int *)(lVar15 + 0x28) == -1) {
      if ((*(longlong *)(lVar15 + 0x30) != 0) &&
         (pRVar8 = *(RefCountNTSImpl **)(*(longlong *)(param_1 + 0x40) + 0x38), local_res10 = pRVar8
         , pRVar8 == (RefCountNTSImpl *)0x0)) {
        return 1;
      }
    }
    else {
      FUN_1432e35c0(*(undefined8 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x48) = 0x40000;
    }
    in_stack_ffffffffffffff58 = local_res20;
    local_80 = *(undefined8 *)(plVar13[0xe] + 0x18);
    local_res20[0] = *(undefined4 *)(param_1 + 0x48);
    local_70 = 0;
    local_78 = plVar13;
    pRVar8 = (RefCountNTSImpl *)
             (**(code **)(*(longlong *)plVar11[3] + 0x20))
                       ((longlong *)plVar11[3],plVar11[2],&local_80,pRVar8,in_stack_ffffffffffffff58
                        ,3);
    FUN_143383050(pRVar8,1);
    if (cVar4 != '\x01') {
      *(uint *)(pRVar8 + 0xb8) = *(uint *)(pRVar8 + 0xb8) | 4;
    }
    if (*(longlong *)(lVar15 + 0x30) == 0) {
      FUN_143426a80(pRVar8 + (ulonglong)(byte)pRVar8[0x6d] * 4,*(undefined4 *)(lVar15 + 0x28));
      FUN_1432e3300(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar15 + 0x28),pRVar8);
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x52f0);
      *puVar2 = *puVar2 & 0xfffffeff;
    }
    else {
      Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar8);
      *(undefined4 *)(pRVar8 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30);
      *(undefined4 *)(pRVar8 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
      if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x88) >> 1 & 1) == 0) {
        lVar9 = *(longlong *)pRVar8;
        uVar10 = Scaleform::GFx::DisplayObject::GetName(*(longlong *)(param_1 + 0x40),&local_88);
        (**(code **)(lVar9 + 1000))(pRVar8,uVar10);
        piVar1 = (int *)(local_88 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      pRVar16 = pRVar14;
      if (local_res10 != (RefCountNTSImpl *)0x0) {
        pRVar16 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)(local_res10 + (ulonglong)(byte)local_res10[0x6d] * 4) +
                              8))();
      }
      (**(code **)(*(longlong *)pRVar16 + 0xe0))(pRVar16,*(undefined8 *)(param_1 + 0x40),pRVar8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38) = 0;
    }
    (**(code **)(*(longlong *)pRVar8 + 0x398))(pRVar8,1);
    *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
    if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
    }
    uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    *(RefCountNTSImpl **)(param_1 + 0x40) = pRVar8;
    if (plVar12 != (longlong *)0x0) {
      pRVar16 = pRVar14;
      if (pRVar8 != (RefCountNTSImpl *)0x0) {
        pRVar16 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)(pRVar8 + (ulonglong)(byte)pRVar8[0x6d] * 4) + 8))
                            (pRVar8 + (ulonglong)(byte)pRVar8[0x6d] * 4);
      }
      uVar10 = (**(code **)(*(longlong *)pRVar16 + 0xf0))(pRVar16);
      (**(code **)(*plVar12 + 0x48))(plVar12,uVar10,*(undefined8 *)(param_1 + 0x40));
      uVar7 = *(undefined4 *)(plVar13[0xe] + 0x104);
      *(undefined4 *)(param_1 + 0x50) = uVar7;
      in_stack_ffffffffffffff58 =
           (undefined4 *)
           CONCAT44(uVar18,*(undefined4 *)
                            (*(longlong *)(*(longlong *)(plVar13[0xe] + 0x18) + 0x40) + 0x50));
      (**(code **)(*plVar12 + 0x68))
                (plVar12,uVar10,*(undefined8 *)(param_1 + 0x40),uVar7,in_stack_ffffffffffffff58);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    Scaleform::RefCountNTSImpl::Release(pRVar8);
  }
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if ((*(int *)(param_1 + 0x50) != *(int *)(plVar13[0xe] + 0x104)) && (plVar12 != (longlong *)0x0))
  {
    lVar9 = *(longlong *)(param_1 + 0x40);
    pRVar8 = pRVar14;
    if (lVar9 != 0) {
      pRVar8 = (RefCountNTSImpl *)
               (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 8))();
    }
    uVar10 = (**(code **)(*(longlong *)pRVar8 + 0xf0))(pRVar8);
    uVar7 = *(undefined4 *)(plVar13[0xe] + 0x104);
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    in_stack_ffffffffffffff58 =
         (undefined4 *)
         CONCAT44(uVar18,*(undefined4 *)
                          (*(longlong *)(*(longlong *)(plVar13[0xe] + 0x18) + 0x40) + 0x50));
    (**(code **)(*plVar12 + 0x68))
              (plVar12,uVar10,*(undefined8 *)(param_1 + 0x40),uVar7,in_stack_ffffffffffffff58);
  }
  if (((cVar4 != '\x01') || (*(char *)(param_1 + 0x54) != '\0')) ||
     ((*(uint *)(plVar13[0xe] + 0xf0) >> 8 & 1) == 0)) goto LAB_14343633f;
  if (*(int *)(lVar15 + 0x28) == -1) {
    pRVar8 = pRVar14;
    if (((byte)((ushort)*(undefined2 *)(*(RefCountNTSImpl **)(param_1 + 0x40) + 0x6a) >> 10) & 1) !=
        0) {
      pRVar8 = *(RefCountNTSImpl **)(param_1 + 0x40);
    }
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
      goto LAB_1434362b8;
    }
  }
  else {
    pRVar8 = (RefCountNTSImpl *)FUN_143437b70(plVar11);
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
    }
LAB_1434362b8:
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      (**(code **)(*(longlong *)pRVar8 + 0x398))(pRVar8,0);
      uVar18 = *(undefined4 *)(plVar13[0xe] + 0x104);
      uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
      Scaleform::GFx::Sprite::SetRootNodeLoadingStat(pRVar8,uVar18,uVar7);
      (**(code **)(*(longlong *)pRVar8 + 0x388))(pRVar8);
      (**(code **)(*plVar11 + 0x38))(plVar11);
      if (plVar12 != (longlong *)0x0) {
        uVar10 = (**(code **)(*(longlong *)(pRVar8 + (ulonglong)(byte)pRVar8[0x6d] * 4) + 0xf0))
                           (pRVar8 + (ulonglong)(byte)pRVar8[0x6d] * 4);
        (**(code **)(*plVar12 + 0x58))(plVar12,uVar10,pRVar8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (pRVar8 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar8);
  }
LAB_14343633f:
  uVar6 = *(uint *)(plVar13[0xe] + 0xf0) & 0xf;
  if (uVar6 < 2) {
    return 0;
  }
  if (uVar6 == 2) {
    if (*(int *)(lVar15 + 0x28) == -1) {
      if ((*(ushort *)(*(RefCountNTSImpl **)(param_1 + 0x40) + 0x6a) >> 10 & 1) != 0) {
        pRVar14 = *(RefCountNTSImpl **)(param_1 + 0x40);
      }
      if (pRVar14 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar14 + 8) = *(int *)(pRVar14 + 8) + 1;
      }
      (**(code **)(*plVar11 + 0x140))(plVar11,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      pRVar14 = (RefCountNTSImpl *)FUN_143437b70(plVar11);
      if (pRVar14 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar14 + 8) = *(int *)(pRVar14 + 8) + 1;
      }
    }
    if (pRVar14 != (RefCountNTSImpl *)0x0) {
      if (cVar4 != '\x01') {
        *(uint *)(pRVar14 + 0xb8) = *(uint *)(pRVar14 + 0xb8) & 0xfffffffb;
      }
      if (plVar12 != (longlong *)0x0) {
        uVar10 = (**(code **)(*(longlong *)(pRVar14 + (ulonglong)(byte)pRVar14[0x6d] * 4) + 0xf0))
                           (pRVar14 + (ulonglong)(byte)pRVar14[0x6d] * 4);
        (**(code **)(*plVar12 + 0x50))(plVar12,uVar10,pRVar14,0);
      }
      if (*(char *)(param_1 + 0x54) == '\0') {
        (**(code **)(*(longlong *)pRVar14 + 0x398))(pRVar14,0);
        uVar18 = *(undefined4 *)(plVar13[0xe] + 0x104);
        uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
        Scaleform::GFx::Sprite::SetRootNodeLoadingStat(pRVar14,uVar18,uVar7);
        (**(code **)(*(longlong *)pRVar14 + 0x388))(pRVar14);
        (**(code **)(*plVar11 + 0x38))(plVar11);
        if (plVar12 != (longlong *)0x0) {
          uVar10 = (**(code **)(*(longlong *)(pRVar14 + (ulonglong)(byte)pRVar14[0x6d] * 4) + 0xf0))
                             (pRVar14 + (ulonglong)(byte)pRVar14[0x6d] * 4);
          (**(code **)(*plVar12 + 0x58))(plVar12,uVar10,pRVar14);
        }
      }
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
    if (pRVar14 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar14);
      return 1;
    }
    return 1;
  }
  if ((uVar6 - 3 < 2) && (plVar12 != (longlong *)0x0)) {
    lVar15 = *(longlong *)(param_1 + 0x40);
    if (lVar15 != 0) {
      pRVar14 = (RefCountNTSImpl *)
                (**(code **)(*(longlong *)(lVar15 + (ulonglong)*(byte *)(lVar15 + 0x6d) * 4) + 8))()
      ;
    }
    uVar10 = (**(code **)(*(longlong *)pRVar14 + 0xf0))(pRVar14);
    if (*(int *)(*(longlong *)(*(longlong *)(plVar13[0xe] + 0x18) + 0x40) + 0xe4) == 4) {
      (**(code **)(*plVar12 + 0x60))();
      return 1;
    }
    (**(code **)(*plVar12 + 0x60))
              (plVar12,uVar10,*(undefined8 *)(param_1 + 0x40),"Canceled",
               (ulonglong)in_stack_ffffffffffffff58 & 0xffffffff00000000);
  }
  return 1;
}



// FUNCTION 143436530 FUN_143436530 body=215 status=ok
// SIG undefined FUN_143436530(void)

undefined8 *
FUN_143436530(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x20001;
  *param_1 = &PTR_FUN_145b0c600;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  FUN_1432c31e0(param_1 + 4,param_3);
  FUN_1432c31e0(param_1 + 5,param_4);
  if (*(RefCountImpl **)(param_5 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_5 + 0x20));
  }
  param_1[6] = *(undefined8 *)(param_5 + 0x20);
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(RefCountImpl **)(param_5 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_5 + 0x20));
  }
  if (4 < *param_5) {
    FUN_143411150(param_5);
  }
  return param_1;
}



// FUNCTION 143436610 FUN_143436610 body=315 status=ok
// SIG undefined FUN_143436610(void)

void FUN_143436610(longlong param_1)

{
  int iVar1;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined4 local_28 [2];
  ulonglong local_20;
  ulonglong local_18 [2];
  
  local_28[0] = 5;
  FUN_1432c31e0(&local_20,param_1 + 0x28);
  FUN_1432c31e0(local_18,param_1 + 0x20);
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::LoadStates::BuildURL(*(undefined8 *)(param_1 + 0x18),&local_res8,local_28);
  FUN_1432c2fb0(&local_res10,(local_res8 & 0xfffffffffffffffc) + 0xc);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
            (*(longlong **)(param_1 + 0x30),&local_res10,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x10));
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18[0] & 0xfffffffffffffffc);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_20 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143436770 FUN_143436770 body=519 status=ok
// SIG undefined FUN_143436770(void)

undefined8 * FUN_143436770(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  RefCountImpl *this;
  ulonglong local_res8;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  FUN_143388a90(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  uVar8 = 0;
  *param_1 = &PTR_FUN_145b0c618;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_3;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  uVar6 = uVar8;
  if (lVar4 != 0) {
    lVar1 = param_1[3];
    uVar7 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
    uVar5 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
    uVar6 = FUN_143318b20(lVar4,uVar7,uVar5,0);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = uVar6;
  FUN_1432c2f70(&local_res8);
  lVar4 = *(longlong *)(param_1[7] + 0x10);
  if (*(ulonglong *)(lVar4 + 0x68) != 0) {
    uVar6 = uVar8;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x60) + uVar6 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + uVar6 * 0x10) != 0) {
          uVar7 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_res8,uVar7);
          cVar2 = FUN_1432bad10(&local_res8);
          if (cVar2 != '\0') goto LAB_143436889;
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(lVar4 + 0x68));
  }
  FUN_1432c3510(&local_res8);
LAB_143436889:
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
  if (lVar4 != 0) {
    FUN_143410ec0(local_48,param_2 + 0x78);
    if (*(RefCountImpl **)(param_2 + 0x98) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x98));
    }
    local_28 = *(undefined8 *)(param_2 + 0x98);
    uVar8 = FUN_143436530(lVar4,param_1[6],&local_res8,param_2 + 0x18,local_48);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = uVar8;
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                   ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this + 8))(this,param_1[5]);
  Scaleform::RefCountImpl::Release(this);
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 143436980 FUN_143436980 body=60 status=ok
// SIG undefined FUN_143436980(void)

void FUN_143436980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b0c618;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  return;
}



// FUNCTION 1434369d0 FUN_1434369d0 body=207 status=ok
// SIG undefined FUN_1434369d0(void)

undefined8 FUN_1434369d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  bVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x38) == 1;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x25) == '\0') {
    if (bVar9) {
      uVar8 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      uVar3 = *(ulonglong *)(lVar2 + 0x68);
      if (uVar3 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x60);
        uVar7 = uVar8;
        do {
          if (*(int *)(lVar2 + uVar7 * 0x10) == 0) {
            uVar8 = *(ulonglong *)(lVar2 + 8 + uVar7 * 0x10);
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < uVar3);
      }
      uVar5 = (**(code **)(*(longlong *)(uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4) + 0xf0))
                        (uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4);
      plVar4 = *(longlong **)(lVar1 + 0x98);
      lVar2 = *plVar4;
      uVar6 = FUN_143412120(lVar1 + 0x78,uVar5);
      (**(code **)(lVar2 + 0x10))(plVar4,uVar5,uVar6);
      return 1;
    }
  }
  else if (bVar9) {
    return 1;
  }
  return 0;
}



// FUNCTION 143436ab0 FUN_143436ab0 body=215 status=ok
// SIG undefined FUN_143436ab0(void)

undefined8 *
FUN_143436ab0(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x20001;
  *param_1 = &PTR_FUN_145b0c630;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  FUN_1432c31e0(param_1 + 4,param_3);
  FUN_1432c31e0(param_1 + 5,param_4);
  if (*(RefCountImpl **)(param_5 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_5 + 0x20));
  }
  param_1[6] = *(undefined8 *)(param_5 + 0x20);
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(RefCountImpl **)(param_5 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_5 + 0x20));
  }
  if (4 < *param_5) {
    FUN_143411150(param_5);
  }
  return param_1;
}



// FUNCTION 143436b90 FUN_143436b90 body=315 status=ok
// SIG undefined FUN_143436b90(void)

void FUN_143436b90(longlong param_1)

{
  int iVar1;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined4 local_28 [2];
  ulonglong local_20;
  ulonglong local_18 [2];
  
  local_28[0] = 6;
  FUN_1432c31e0(&local_20,param_1 + 0x28);
  FUN_1432c31e0(local_18,param_1 + 0x20);
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::LoadStates::BuildURL(*(undefined8 *)(param_1 + 0x18),&local_res8,local_28);
  FUN_1432c2fb0(&local_res10,(local_res8 & 0xfffffffffffffffc) + 0xc);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
            (*(longlong **)(param_1 + 0x30),&local_res10,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x10));
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18[0] & 0xfffffffffffffffc);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_20 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143436cf0 FUN_143436cf0 body=520 status=ok
// SIG undefined FUN_143436cf0(void)

undefined8 * FUN_143436cf0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  RefCountImpl *this;
  ulonglong local_res8;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  FUN_143388a90(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  uVar8 = 0;
  *param_1 = &PTR_FUN_145b0c648;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  uVar6 = uVar8;
  if (lVar4 != 0) {
    lVar1 = param_1[3];
    uVar7 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
    uVar5 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
    uVar6 = FUN_143318b20(lVar4,uVar7,uVar5,0);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = uVar6;
  FUN_1432c2f70(&local_res8);
  lVar4 = *(longlong *)(*(longlong *)(param_1[3] + 0x18) + 0x10);
  if (*(ulonglong *)(lVar4 + 0x68) != 0) {
    uVar6 = uVar8;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x60) + uVar6 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + uVar6 * 0x10) != 0) {
          uVar7 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_res8,uVar7);
          cVar2 = FUN_1432bad10(&local_res8);
          if (cVar2 != '\0') goto LAB_143436e07;
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(lVar4 + 0x68));
  }
  FUN_1432c3510(&local_res8);
LAB_143436e07:
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
  if (lVar4 != 0) {
    FUN_143410ec0(local_48,param_2 + 0xa0);
    if (*(RefCountImpl **)(param_2 + 0xc0) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0xc0));
    }
    local_28 = *(undefined8 *)(param_2 + 0xc0);
    uVar8 = FUN_143436ab0(lVar4,param_1[6],&local_res8,param_2 + 0x18,local_48);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = uVar8;
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                   ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this + 8))(this,param_1[5]);
  Scaleform::RefCountImpl::Release(this);
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 143436f00 FUN_143436f00 body=60 status=ok
// SIG undefined FUN_143436f00(void)

void FUN_143436f00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b0c648;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  return;
}



// FUNCTION 143436f50 FUN_143436f50 body=161 status=ok
// SIG undefined FUN_143436f50(void)

undefined8 FUN_143436f50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  bVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x38) == 1;
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x25) == '\0') {
    if (bVar5) {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x10) + 0x58);
      uVar3 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 0xf0))();
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0xc0);
      lVar1 = *plVar2;
      uVar4 = FUN_143412120(*(longlong *)(param_1 + 0x20) + 0xa0,uVar3);
      (**(code **)(lVar1 + 0x10))(plVar2,uVar3,uVar4);
      return 1;
    }
  }
  else if (bVar5) {
    return 1;
  }
  return 0;
}



// FUNCTION 143437000 FUN_143437000 body=226 status=ok
// SIG undefined FUN_143437000(void)

void FUN_143437000(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x6a) >> 4 & 1) == 0)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 1) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001434370d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x120))(plVar3,*(undefined8 *)(param_1 + 0x18));
      return;
    }
    if (iVar1 == 2) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001434370b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x128))(plVar3,param_1 + 0x20);
      return;
    }
    if (iVar1 == 3) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014343708d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x130))(plVar3,param_1 + 0x38,param_1 + 0x58);
      return;
    }
    if (iVar1 == 4) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143437065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x138))(plVar3,*(undefined8 *)(param_1 + 0x50),param_1 + 0x58);
      return;
    }
  }
  return;
}



// FUNCTION 143437150 FUN_143437150 body=350 status=ok
// SIG undefined FUN_143437150(void)

void FUN_143437150(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_28[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = param_1;
  do {
    lVar3 = FUN_1434375b0(local_28);
  } while (lVar3 != 0);
  if (local_18 != 0) {
    FUN_143437390(local_20);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x98);
  while (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[0xc];
    puVar1 = (undefined8 *)*puVar2;
    pbVar4 = (byte *)(puVar2[0xb] + -0x20 + lVar3 * 0x20);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (4 < *pbVar4) {
        FUN_143411150(pbVar4);
      }
      pbVar4 = pbVar4 + -0x20;
    }
    if (puVar2[0xb] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    if ((((*(byte *)(puVar2 + 9) & 2) == 0) && (lVar3 = puVar2[7], lVar3 != 0)) &&
       ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[7] = 0;
    if ((((*(byte *)(puVar2 + 9) & 1) == 0) && (lVar3 = puVar2[8], lVar3 != 0)) &&
       ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[8] = 0;
    if ((RefCountNTSImpl *)puVar2[3] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar2[3]);
    }
    if ((RefCountNTSImpl *)puVar2[2] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar2[2]);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 1434372c0 FUN_1434372c0 body=194 status=ok
// SIG undefined FUN_1434372c0(void)

longlong * FUN_1434372c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
  lVar4 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x98) = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
LAB_14343731e:
    plVar1 = *(longlong **)(param_1 + 8 + lVar4 * 0x18);
    if (plVar1 == (longlong *)0x0) {
      *plVar3 = *(longlong *)(param_1 + lVar4 * 0x18);
      *(longlong **)(param_1 + lVar4 * 0x18) = plVar3;
    }
    else {
      *plVar3 = *plVar1;
      **(undefined8 **)(param_1 + 8 + lVar4 * 0x18) = plVar3;
    }
    *(longlong **)(param_1 + 8 + lVar4 * 0x18) = plVar3;
    if (*plVar3 == 0) {
      *(longlong **)(param_1 + 0x10 + lVar4 * 0x18) = plVar3;
    }
    *(undefined4 *)(plVar3 + 0xe) = *(undefined4 *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return plVar3;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x50))(*(longlong **)(param_1 + 0xb0),0x78)
  ;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_143495fb0(lVar2);
    if (plVar3 != (longlong *)0x0) goto LAB_14343731e;
  }
  return (longlong *)0x0;
}



// FUNCTION 143437390 FUN_143437390 body=209 status=ok
// SIG undefined FUN_143437390(void)

void FUN_143437390(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  if ((RefCountNTSImpl *)param_2[3] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_2[3]);
  }
  param_2[3] = 0;
  if ((RefCountNTSImpl *)param_2[2] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_2[2]);
  }
  param_2[2] = 0;
  FUN_14349ebc0(param_2 + 7);
  FUN_1434a3be0(param_2 + 0xb,param_2 + 0xb,0);
  if (*(uint *)(param_1 + 0xa4) < 0x32) {
    *param_2 = *(undefined8 *)(param_1 + 0x98);
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    *(undefined8 **)(param_1 + 0x98) = param_2;
  }
  else {
    FUN_1434976a0(param_2 + 0xb);
    FUN_14349ebc0(param_2 + 7);
    if ((RefCountNTSImpl *)param_2[3] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_2[3]);
    }
    if ((RefCountNTSImpl *)param_2[2] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_2[2]);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  }
  return;
}



// FUNCTION 143437470 FUN_143437470 body=76 status=ok
// SIG undefined FUN_143437470(void)

void FUN_143437470(undefined8 param_1)

{
  longlong lVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_28[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = param_1;
  do {
    lVar1 = FUN_1434375b0(local_28);
  } while (lVar1 != 0);
  if (local_18 != 0) {
    FUN_143437390(local_20);
    return;
  }
  return;
}



// FUNCTION 1434375b0 FUN_1434375b0 body=217 status=ok
// SIG undefined FUN_1434375b0(void)

undefined8 * FUN_1434375b0(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (*(int *)(lVar1 + 0x90) != *param_1) {
    param_1[6] = 0;
    *param_1 = *(int *)(lVar1 + 0x90);
  }
  puVar2 = *(undefined8 **)(lVar1 + (longlong)param_1[6] * 0x18);
  while (puVar2 == (undefined8 *)0x0) {
    param_1[6] = param_1[6] + 1;
    if (5 < param_1[6]) goto LAB_14343763d;
    puVar2 = *(undefined8 **)(lVar1 + (longlong)param_1[6] * 0x18);
  }
  if (puVar2 == *(undefined8 **)(lVar1 + 8 + (longlong)param_1[6] * 0x18)) {
    *(undefined8 *)(lVar1 + 8 + (longlong)param_1[6] * 0x18) = *puVar2;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)param_1[6] * 0x18) = *puVar2;
  *puVar2 = 0;
LAB_14343763d:
  if (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)param_1[6] * 0x18) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + (longlong)param_1[6] * 0x18) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10 + (longlong)param_1[6] * 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_143437390(*(undefined8 *)(param_1 + 2));
  }
  *(undefined8 **)(param_1 + 4) = puVar2;
  return puVar2;
}



// FUNCTION 1434376b0 FUN_1434376b0 body=242 status=ok
// SIG undefined FUN_1434376b0(void)

longlong * FUN_1434376b0(int *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (*(int *)(lVar1 + 0x90) != *param_1) {
    param_1[6] = 0;
    *param_1 = *(int *)(lVar1 + 0x90);
  }
  iVar2 = param_1[6];
  plVar5 = (longlong *)0x0;
  do {
    if (5 < iVar2) {
LAB_14343777e:
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_143437390(*(undefined8 *)(param_1 + 2));
      }
      *(longlong **)(param_1 + 4) = plVar5;
      return plVar5;
    }
    plVar3 = *(longlong **)(lVar1 + (longlong)param_1[6] * 0x18);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      plVar5 = plVar3;
      do {
        if ((int)plVar5[0xe] == param_1[8]) {
          if (plVar4 == (longlong *)0x0) {
            *(longlong *)(lVar1 + (longlong)param_1[6] * 0x18) = *plVar5;
          }
          else {
            *plVar4 = *plVar5;
          }
          if (*plVar5 == 0) {
            *(longlong **)(*(longlong *)(param_1 + 2) + 0x10 + (longlong)param_1[6] * 0x18) = plVar4
            ;
          }
          if (plVar5 == *(longlong **)(*(longlong *)(param_1 + 2) + 8 + (longlong)param_1[6] * 0x18)
             ) {
            plVar3 = (longlong *)*plVar5;
            if ((longlong *)*plVar5 == (longlong *)0x0) {
              plVar3 = plVar4;
            }
            *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)param_1[6] * 0x18 + 8) = plVar3;
          }
          *plVar5 = 0;
          goto LAB_14343777e;
        }
        plVar3 = (longlong *)*plVar5;
        plVar4 = plVar5;
        plVar5 = plVar3;
      } while (plVar3 != (longlong *)0x0);
    }
    iVar2 = param_1[6] + 1;
    param_1[6] = iVar2;
    plVar5 = plVar3;
  } while( true );
}



// FUNCTION 1434377b0 FUN_1434377b0 body=428 status=ok
// SIG undefined FUN_1434377b0(void)

undefined8 *
FUN_1434377b0(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,RefCountImpl *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b0a870;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[3] = param_4;
  uVar3 = (**(code **)(*(longlong *)param_4 + 0x30))(param_4);
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *param_1 = &PTR_FUN_145b0c670;
  param_1[5] = 0;
  Scaleform::RefCountImpl::AddRef(param_4);
  param_1[6] = param_4;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[7] = param_2;
  puVar4 = param_1 + 0x12;
  param_1[8] = 0;
  lVar5 = 6;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  do {
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[-2] = 0;
    puVar4 = puVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x26] = uVar2;
  *(undefined4 *)(param_1 + 0x22) = 1;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 1;
  param_1[0x24] = 1;
  FUN_14340b580(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18));
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[2] = param_3;
  param_1[9] = 0;
  param_1[0xf] = 0;
  if ((RefCountNTSImpl *)param_1[10] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[10]);
  }
  param_1[10] = 0;
  Scaleform::GFx::MovieImpl::SetASMovieRoot(param_1[2],param_1);
  lVar5 = param_1[2];
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(lVar5 + 0x48) + 0x50))(*(longlong **)(lVar5 + 0x48),0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar5 + 0x40) = 0;
  }
  else {
    puVar1 = puVar4 + 2;
    puVar4[1] = lVar5;
    *puVar1 = puVar1;
    puVar4[3] = puVar1;
    *puVar4 = &PTR_FUN_145b12ea0;
    *(undefined8 **)(lVar5 + 0x40) = puVar4;
  }
  return param_1;
}



// FUNCTION 143437970 FUN_143437970 body=260 status=ok
// SIG undefined FUN_143437970(void)

void FUN_143437970(RefCountImplCore *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_145b0c670;
  lVar3 = *(longlong *)(param_1 + 0x630);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x628) + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((RefCountNTSImpl *)*puVar2 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar2);
    }
    puVar2 = puVar2 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x628));
  FUN_1433611b0(*(undefined8 *)(param_1 + 0x618),param_1 + 0x138,0x9c);
  FUN_143437150(param_1 + 0x80);
  if (4 < (byte)param_1[0x58]) {
    FUN_143411150(param_1 + 0x58);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x50) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x50));
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0a870;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143437a80 FUN_143437a80 body=84 status=ok
// SIG undefined FUN_143437a80(void)

void FUN_143437a80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 2;
    puVar3[1] = param_2;
    *puVar1 = puVar1;
    puVar3[3] = puVar1;
    *puVar3 = &PTR_FUN_145b12ea0;
    *(undefined8 **)(param_2 + 0x40) = puVar3;
    return;
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 143437ae0 FUN_143437ae0 body=103 status=ok
// SIG undefined FUN_143437ae0(void)

undefined8
FUN_143437ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  param_5._0_4_ = *param_5;
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),&local_28,
                     param_4,&param_5,3);
  FUN_143383050(uVar1,param_6);
  return uVar1;
}



// FUNCTION 143437b50 FUN_143437b50 body=20 status=ok
// SIG undefined FUN_143437b50(void)

undefined1 FUN_143437b50(longlong param_1)

{
  FUN_1432e3300(*(undefined8 *)(param_1 + 0x10));
  return 1;
}



// FUNCTION 143437b70 FUN_143437b70 body=57 status=ok
// SIG undefined FUN_143437b70(void)

undefined8 FUN_143437b70(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    do {
      if (*(int *)(lVar2 + uVar3 * 0x10) == param_2) {
        return *(undefined8 *)(lVar2 + 8 + uVar3 * 0x10);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < uVar1);
  }
  return 0;
}



// FUNCTION 143437bb0 FUN_143437bb0 body=215 status=ok
// SIG undefined FUN_143437bb0(void)

long FUN_143437bb0(char *param_1,undefined8 *param_2,char param_3)

{
  long lVar1;
  char *local_res8 [3];
  char *local_res20;
  
  if ((byte)(*param_1 - 0x30U) < 10) {
    local_res8[0] = (char *)0x0;
    lVar1 = strtol(param_1,local_res8,10);
    *param_2 = local_res8[0];
    return lVar1;
  }
  if (*param_1 == '_') {
    if (param_3 == '\0') {
      if ((param_1[1] + 0xb4U & 0xdf) != 0) {
        return -1;
      }
      if ((param_1[2] + 0xbbU & 0xdf) != 0) {
        return -1;
      }
      if ((param_1[3] + 0xaaU & 0xdf) != 0) {
        return -1;
      }
      if ((param_1[4] + 0xbbU & 0xdf) != 0) {
        return -1;
      }
      if ((param_1[5] + 0xb4U & 0xdf) != 0) {
        return -1;
      }
    }
    else {
      if (param_1[1] != 'l') {
        return -1;
      }
      if (param_1[2] != 'e') {
        return -1;
      }
      if (param_1[3] != 'v') {
        return -1;
      }
      if (param_1[4] != 'e') {
        return -1;
      }
      if (param_1[5] != 'l') {
        return -1;
      }
    }
    if ((byte)(param_1[6] - 0x30U) < 10) {
      local_res20 = (char *)0x0;
      lVar1 = strtol(param_1 + 6,&local_res20,10);
      *param_2 = local_res20;
      return lVar1;
    }
  }
  return -1;
}



// FUNCTION 143437c90 FUN_143437c90 body=382 status=ok
// SIG undefined FUN_143437c90(void)

ulonglong FUN_143437c90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar6 = 0;
    uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    if (uVar5 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      uVar3 = uVar6;
      do {
        if (*(int *)(lVar2 + uVar3 * 0x10) == 0) {
          if (*(longlong *)(lVar2 + 8 + uVar3 * 0x10) == 0) {
            return 0;
          }
          uVar3 = uVar6;
          uVar4 = uVar6;
          if (uVar5 == 0) goto LAB_143437d18;
          goto LAB_143437d00;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
      } while (uVar3 < uVar5);
    }
  }
  return 0;
  while (uVar4 = (ulonglong)((int)uVar4 + 1), uVar4 < uVar5) {
LAB_143437d00:
    if (*(int *)(lVar2 + uVar4 * 0x10) == 0) {
      uVar3 = *(ulonglong *)(lVar2 + 8 + uVar4 * 0x10);
      break;
    }
  }
LAB_143437d18:
  lVar2 = (**(code **)(*(longlong *)(uVar3 + (ulonglong)*(byte *)(uVar3 + 0x6d) * 4) + 0xf0))();
  uVar3 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) +
                         0x618),param_2);
  iVar1 = *(int *)(uVar3 + 0x18);
  *(int *)(uVar3 + 0x18) = iVar1 + 1;
  lVar2 = **(longlong **)(param_1 + 0x78);
  uVar5 = uVar6;
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
    uVar9 = *(uint *)(uVar3 + 0x1c) & uVar4;
    puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar9 * 0x38);
    if ((*puVar8 != 0xfffffffffffffffe) &&
       (uVar7 = uVar9, (*(uint *)(puVar8[1] + 0x1c) & uVar4) == uVar9)) {
      while (((*(uint *)(puVar8[1] + 0x1c) & uVar4) != uVar9 || (puVar8[1] != uVar3))) {
        uVar7 = *puVar8;
        if (uVar7 == 0xffffffffffffffff) goto LAB_143437dde;
        puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar7 * 0x38);
      }
      if (-1 < (longlong)uVar7) {
        uVar5 = lVar2 + 0x18 + uVar7 * 0x38;
      }
    }
  }
LAB_143437dde:
  *(int *)(uVar3 + 0x18) = iVar1;
  uVar4 = uVar5 + 8;
  if (uVar5 == 0) {
    uVar4 = uVar6;
  }
  if (iVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return uVar4;
}



// FUNCTION 143437e20 FUN_143437e20 body=540 status=ok
// SIG undefined FUN_143437e20(void)

ulonglong FUN_143437e20(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong in_RAX;
  RefCountNTSImpl *this;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  byte local_38 [8];
  longlong local_30 [2];
  undefined1 local_20;
  
  uVar7 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = 0;
    do {
      if (*(int *)(lVar2 + in_RAX * 0x10) == 0) {
        in_RAX = (ulonglong)uVar7 * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar2) != 0) {
          lVar2 = *param_3;
          if (lVar2 != 0) {
            *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
          }
          this = (RefCountNTSImpl *)0x0;
          lVar2 = *param_3;
          if ((param_3[1] != 0) &&
             (this = (RefCountNTSImpl *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (param_3[1],*(undefined8 *)(param_1 + 0x10)),
             this != (RefCountNTSImpl *)0x0)) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
          }
          if (lVar2 == 0) {
            if ((this == (RefCountNTSImpl *)0x0) ||
               (lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))(),
               lVar4 == 0)) {
              lVar4 = 0;
            }
            else {
              lVar4 = lVar4 + 8;
            }
          }
          else {
            lVar4 = lVar2 + 0x20;
          }
          uVar7 = 0;
          uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
          if (uVar1 == 0) goto LAB_143437f37;
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
          uVar5 = 0;
          goto LAB_143437f20;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      in_RAX = (ulonglong)uVar7;
    } while (in_RAX < uVar1);
  }
  return in_RAX & 0xffffffffffffff00;
  while( true ) {
    uVar7 = uVar7 + 1;
    uVar5 = (ulonglong)uVar7;
    if (uVar1 <= uVar5) break;
LAB_143437f20:
    if (*(int *)(lVar6 + uVar5 * 0x10) == 0) {
      lVar6 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar7 * 0x10);
      goto LAB_143437f39;
    }
  }
LAB_143437f37:
  lVar6 = 0;
LAB_143437f39:
  lVar6 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) + 0xf0))();
  local_30[0] = param_3[2];
  local_38[0] = 8;
  local_20 = 0;
  if (local_30[0] != 0) {
    *(uint *)(local_30[0] + 0x18) = *(int *)(local_30[0] + 0x18) + 1U & 0x8fffffff;
  }
  local_30[1] = 0;
  if (param_3[3] != 0) {
    FUN_1434109d0(local_30,param_3[3],*(byte *)(param_3 + 4) & 1);
  }
  bVar3 = FUN_14341e410(local_38,param_4,lVar4,lVar6,param_5,
                        (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5) +
                        *(int *)(lVar6 + 0x30) * 0x20 + -0x20,param_2);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return (ulonglong)bVar3;
}



// FUNCTION 143438050 FUN_143438050 body=527 status=ok
// SIG undefined FUN_143438050(void)

ulonglong FUN_143438050(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong in_RAX;
  RefCountNTSImpl *this;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  byte local_38 [8];
  longlong local_30 [2];
  undefined1 local_20;
  
  uVar8 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = 0;
    do {
      if (*(int *)(lVar2 + in_RAX * 0x10) == 0) {
        in_RAX = (ulonglong)uVar8 * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar2) != 0) {
          lVar2 = *param_3;
          if (lVar2 != 0) {
            *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
          }
          this = (RefCountNTSImpl *)0x0;
          lVar2 = *param_3;
          if ((param_3[1] != 0) &&
             (this = (RefCountNTSImpl *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (param_3[1],*(undefined8 *)(param_1 + 0x10)),
             this != (RefCountNTSImpl *)0x0)) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
          }
          if (lVar2 == 0) {
            if ((this == (RefCountNTSImpl *)0x0) ||
               (lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))(),
               lVar4 == 0)) {
              lVar4 = 0;
            }
            else {
              lVar4 = lVar4 + 8;
            }
          }
          else {
            lVar4 = lVar2 + 0x20;
          }
          uVar8 = 0;
          uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
          if (uVar1 == 0) goto LAB_143438167;
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
          uVar5 = 0;
          goto LAB_143438150;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      in_RAX = (ulonglong)uVar8;
    } while (in_RAX < uVar1);
  }
  return in_RAX & 0xffffffffffffff00;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar5 = (ulonglong)uVar8;
    if (uVar1 <= uVar5) break;
LAB_143438150:
    if (*(int *)(lVar7 + uVar5 * 0x10) == 0) {
      lVar7 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar8 * 0x10);
      goto LAB_143438169;
    }
  }
LAB_143438167:
  lVar7 = 0;
LAB_143438169:
  uVar6 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0xf0))();
  local_30[0] = param_3[2];
  local_38[0] = 8;
  local_20 = 0;
  if (local_30[0] != 0) {
    *(uint *)(local_30[0] + 0x18) = *(int *)(local_30[0] + 0x18) + 1U & 0x8fffffff;
  }
  local_30[1] = 0;
  if (param_3[3] != 0) {
    FUN_1434109d0(local_30,param_3[3],*(byte *)(param_3 + 4) & 1);
  }
  bVar3 = FUN_14341def0(local_38,param_4,lVar4,uVar6,param_5,param_6,param_2);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return (ulonglong)bVar3;
}



// FUNCTION 143438270 FUN_143438270 body=124 status=ok
// SIG undefined FUN_143438270(void)

undefined8 FUN_143438270(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x68) != 0) {
    do {
      if (*(int *)(*(longlong *)(lVar1 + 0x60) + uVar4 * 0x10) == 0) {
        if (*(longlong *)(uVar4 * 0x10 + 8 + *(longlong *)(lVar1 + 0x60)) != 0) {
          uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x60))();
          Scaleform::String::operator=(param_2,uVar3);
          cVar2 = FUN_1432bad10(param_2);
          if (cVar2 != '\0') {
            return 1;
          }
        }
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)(lVar1 + 0x68));
  }
  FUN_1432c3510(param_2);
  return 0;
}



// FUNCTION 143438300 FUN_143438300 body=692 status=ok
// SIG undefined FUN_143438300(void)

void FUN_143438300(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar3 = *(uint *)(param_2 + 2);
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x10) == 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
        lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x58);
        if ((lVar7 == 0) ||
           (lVar7 = FUN_143435890(lVar7,param_2,*(undefined8 *)(param_1 + 0x10)), lVar7 == 0))
        goto LAB_14343858e;
        lVar5 = *(longlong *)(lVar7 + 0x20);
        for (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5300); lVar8 != 0;
            lVar8 = *(longlong *)(lVar8 + 8)) {
          lVar6 = *(longlong *)(lVar5 + 0x30);
          lVar9 = *(longlong *)(lVar8 + 0x20);
          if (lVar6 == 0) {
            if (*(int *)(lVar9 + 0x28) != -1) {
              bVar10 = *(int *)(lVar9 + 0x28) == *(int *)(lVar5 + 0x28);
              goto LAB_14343856c;
            }
          }
          else if (*(longlong *)(lVar9 + 0x30) != 0) {
            bVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x18) ==
                     *(longlong *)(lVar6 + 0x18);
LAB_14343856c:
            if (bVar10) {
              *(undefined1 *)(lVar9 + 0x25) = 1;
            }
          }
        }
      }
      else {
        lVar7 = FUN_1432c3580(param_2 + 3);
        if (((lVar7 == 0) ||
            (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48),
            lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x38), lVar7 == 0)) ||
           (lVar7 = FUN_143436cf0(lVar7,param_2,param_1), lVar7 == 0)) goto LAB_14343858e;
        lVar5 = *(longlong *)(lVar7 + 0x20);
        lVar8 = FUN_143412120(lVar5 + 0xa0,0);
        if (lVar8 != 0) {
          lVar8 = FUN_143412120(lVar5 + 0xa0,0);
          for (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5300); lVar5 != 0;
              lVar5 = *(longlong *)(lVar5 + 8)) {
            lVar6 = *(longlong *)(lVar5 + 0x20);
            pcVar1 = (char *)(lVar6 + 0xa0);
            cVar2 = *pcVar1;
            if (((cVar2 != '\0') && (cVar2 != '\n')) &&
               (lVar9 = FUN_143412120(pcVar1,0), lVar8 == lVar9)) {
              *(undefined1 *)(lVar6 + 0x25) = 1;
            }
          }
        }
      }
    }
    else {
      lVar7 = FUN_1432c3580(param_2 + 3);
      if (((lVar7 == 0) ||
          (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48),
          lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x40), lVar7 == 0)) ||
         (lVar7 = FUN_143436770(lVar7,param_2,param_1), lVar7 == 0)) goto LAB_14343858e;
      lVar5 = *(longlong *)(lVar7 + 0x20);
      lVar8 = FUN_143412120(lVar5 + 0x78,0);
      if (lVar8 != 0) {
        lVar8 = FUN_143412120(lVar5 + 0x78,0);
        for (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5300); lVar5 != 0;
            lVar5 = *(longlong *)(lVar5 + 8)) {
          lVar6 = *(longlong *)(lVar5 + 0x20);
          if (((*(char *)(lVar6 + 0x78) != '\0') && (*(char *)(lVar6 + 0x78) != '\n')) &&
             (lVar9 = FUN_143412120(lVar6 + 0x78,0), lVar8 == lVar9)) {
            *(undefined1 *)(lVar6 + 0x25) = 1;
          }
        }
      }
    }
  }
  else {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x38);
    if (lVar7 == 0) goto LAB_14343858e;
    lVar7 = FUN_1433891d0(lVar7,param_2,*(undefined8 *)(param_1 + 0x10));
  }
  if (lVar7 != 0) {
    FUN_1432e40d0(*(undefined8 *)(param_1 + 0x10),lVar7);
    return;
  }
LAB_14343858e:
  (**(code **)*param_2)(param_2,1);
  return;
}



// FUNCTION 1434385c0 FUN_1434385c0 body=309 status=ok
// SIG undefined FUN_1434385c0(void)

void FUN_1434385c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  RefCountImpl *this;
  RefCountImpl *this_00;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  this = (RefCountImpl *)0x0;
  local_res10 = 0;
  cVar4 = FUN_1432ff890(param_2 + 3,0,&local_res10);
  if ((cVar4 != '\0') && ((char)local_res10 != '\0')) {
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
    if (lVar5 != 0) {
      lVar1 = param_1[2];
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
      uVar6 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
      this = (RefCountImpl *)FUN_143318b20(lVar5,uVar2,uVar6,0);
    }
    (**(code **)(*param_1 + 0x120))(param_1,param_2,this);
    (**(code **)*param_2)(param_2,1);
    if (this == (RefCountImpl *)0x0) {
      return;
    }
    Scaleform::RefCountImpl::Release(this);
    return;
  }
  lVar5 = FUN_1432c3580(param_2 + 3);
  if ((lVar5 == 0) || (cVar4 != '\0')) {
    this_00 = (RefCountImpl *)CONCAT44(uStackX_14,local_res10);
  }
  else {
    this_00 = (RefCountImpl *)
              (**(code **)(*(longlong *)(param_1[2] + 0x10) + 0x18))
                        ((longlong *)(param_1[2] + 0x10),0x18);
    this = (RefCountImpl *)0x1;
    if (this_00 != (RefCountImpl *)0x0) {
      bVar3 = true;
      goto LAB_1434386b6;
    }
  }
  bVar3 = false;
LAB_1434386b6:
  if ((this != (RefCountImpl *)0x0) && (this_00 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(this_00);
  }
  if (bVar3) {
    FUN_143438300(param_1);
  }
  else {
    FUN_1432e4090(param_1[2],param_2);
  }
  return;
}



// FUNCTION 143438700 FUN_143438700 body=981 status=ok
// SIG undefined FUN_143438700(void)

void FUN_143438700(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  char *local_res20;
  char *local_38;
  longlong local_30;
  
  puVar9 = (undefined8 *)0x0;
  local_res20 = (char *)((ulonglong)local_res20 & 0xffffffff00000000);
  bVar10 = param_4 == 0;
  if (bVar10) {
    local_30 = FUN_143360a60(param_1[0xc3]);
    *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x40))(param_1,&local_30);
    pcVar4 = local_res20;
  }
  else {
    pcVar4 = (char *)FUN_143360a60(param_1[0xc3]);
    *(int *)(pcVar4 + 0x18) = *(int *)(pcVar4 + 0x18) + 1;
    local_res20 = pcVar4;
    puVar5 = (undefined8 *)FUN_143419c20(param_4,&local_res20,0);
  }
  if (bVar10) {
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (!bVar10) {
    piVar1 = (int *)(pcVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(pcVar4);
    }
  }
  bVar10 = false;
  if (puVar5 == (undefined8 *)0x0) {
    local_res20 = "";
    puVar5 = *(undefined8 **)(param_1[2] + 0x68);
    puVar6 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      lVar7 = *(longlong *)(param_1[2] + 0x60);
      puVar8 = puVar9;
      do {
        if (*(int *)(lVar7 + (longlong)puVar8 * 0x10) == 0) {
          puVar6 = *(undefined8 **)(lVar7 + 8 + (longlong)puVar8 * 0x10);
          break;
        }
        puVar8 = (undefined8 *)(ulonglong)((int)puVar8 + 1);
      } while (puVar8 < puVar5);
    }
    uVar3 = FUN_14336b320(puVar6);
    iVar2 = FUN_143437bb0(param_2,&local_res20,6 < uVar3);
    if (*local_res20 != '\0') {
      return;
    }
    if (iVar2 == -1) {
      return;
    }
  }
  else {
    puVar6 = puVar9;
    if ((*(ushort *)((longlong)puVar5 + 0x6a) >> 10 & 1) != 0) {
      puVar6 = puVar5;
    }
    if ((puVar6 == (undefined8 *)0x0) ||
       (iVar2 = (**(code **)(*(longlong *)
                              ((longlong)puVar6 +
                              (ulonglong)*(byte *)((longlong)puVar6 + 0x6d) * 4 + 0x30) + 0xf8))
                          ((longlong)puVar6 +
                           (ulonglong)*(byte *)((longlong)puVar6 + 0x6d) * 4 + 0x30), iVar2 == -1))
    {
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                         (*(longlong **)(param_1[2] + 0x48),200,0);
      pcVar4 = local_38;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1432c2fb0(&local_38,param_3);
        lVar7 = puVar5[0xe];
        bVar10 = true;
        if (lVar7 == 0) {
          lVar7 = FUN_14336c170(puVar5);
        }
        *puVar6 = &PTR_FUN_145b0aac0;
        FUN_1432c2f70(puVar6 + 3);
        puVar6[1] = 0;
        *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
        *(uint *)(puVar6 + 2) =
             (uint)(((ulonglong)local_38 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
        FUN_1432c4d80(puVar6 + 3,&local_38);
        *(undefined4 *)(puVar6 + 4) = 0xffffffff;
        *puVar6 = &PTR_FUN_145b0c5e0;
        *(undefined2 *)((longlong)puVar6 + 0x24) = 0;
        puVar6[6] = 0;
        *(undefined1 *)(puVar6 + 7) = 0;
        *(undefined1 *)(puVar6 + 0xb) = 0;
        *(undefined1 *)(puVar6 + 0xf) = 0;
        puVar6[0x13] = 0;
        *(undefined1 *)(puVar6 + 0x14) = 0;
        puVar6[0x18] = 0;
        FUN_1432efba0(puVar6 + 6,lVar7);
        *(undefined4 *)(puVar6 + 5) = 0xffffffff;
        puVar9 = puVar6;
        pcVar4 = local_38;
      }
      goto joined_r0x000143438a6b;
    }
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                     (*(longlong **)(param_1[2] + 0x48),200,0);
  pcVar4 = local_res20;
  bVar10 = false;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1432c2fb0(&local_res20,param_3);
    *puVar5 = &PTR_FUN_145b0aac0;
    FUN_1432c2f70(puVar5 + 3);
    puVar5[1] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = param_5;
    *(uint *)(puVar5 + 2) =
         (uint)(((ulonglong)local_res20 & 0xfffffffffffffffc) == 0xfffffffffffffff4);
    FUN_1432c4d80(puVar5 + 3,&local_res20);
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    *puVar5 = &PTR_FUN_145b0c5e0;
    *(undefined2 *)((longlong)puVar5 + 0x24) = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    *(undefined1 *)(puVar5 + 0xb) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    puVar5[0x13] = 0;
    *(undefined1 *)(puVar5 + 0x14) = 0;
    puVar5[0x18] = 0;
    piVar1 = (int *)puVar5[6];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    puVar5[6] = 0;
    *(int *)(puVar5 + 5) = iVar2;
    *(uint *)(puVar5 + 2) = ((ulonglong)local_res20 & 0xfffffffffffffffc) == 0xfffffffffffffff4 | 2;
    puVar9 = puVar5;
    pcVar4 = local_res20;
    bVar10 = true;
  }
joined_r0x000143438a6b:
  if (bVar10) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      (((ulonglong)pcVar4 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,(ulonglong)pcVar4 & 0xfffffffffffffffc);
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_143412aa0(puVar9 + 7,param_6);
    FUN_1434385c0(param_1,puVar9);
  }
  return;
}



// FUNCTION 143438ae0 FUN_143438ae0 body=531 status=ok
// SIG undefined FUN_143438ae0(void)

void FUN_143438ae0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_res10;
  undefined4 uStackX_14;
  ulonglong local_28 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)0x0;
  local_res10 = 0;
  puVar5 = puVar6;
  if ((*(ushort *)((longlong)param_2 + 0x6a) >> 10 & 1) != 0) {
    puVar5 = param_2;
  }
  puVar4 = puVar6;
  if ((puVar5 == (undefined8 *)0x0) ||
     (iVar2 = (**(code **)(*(longlong *)
                            ((longlong)puVar5 +
                            (ulonglong)*(byte *)((longlong)puVar5 + 0x6d) * 4 + 0x30) + 0xf8))
                        ((longlong)puVar5 + (ulonglong)*(byte *)((longlong)puVar5 + 0x6d) * 4 + 0x30
                        ), iVar2 == -1)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,200,0);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1432c2fb0(&local_res10,param_3);
      lVar3 = param_2[0xe];
      if (lVar3 == 0) {
        lVar3 = FUN_14336c170(param_2);
      }
      *puVar5 = &PTR_FUN_145b0aac0;
      FUN_1432c2f70(puVar5 + 3);
      *(undefined4 *)((longlong)puVar5 + 0x14) = param_4;
      puVar5[1] = 0;
      *(uint *)(puVar5 + 2) =
           (uint)((CONCAT44(uStackX_14,local_res10) & 0xfffffffffffffffc) == 0xfffffffffffffff4);
      FUN_1432c4d80(puVar5 + 3,&local_res10);
      *(undefined4 *)(puVar5 + 4) = 0xffffffff;
      *puVar5 = &PTR_FUN_145b0c5e0;
      *(undefined2 *)((longlong)puVar5 + 0x24) = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      *(undefined1 *)(puVar5 + 0xf) = 0;
      puVar5[0x13] = 0;
      *(undefined1 *)(puVar5 + 0x14) = 0;
      puVar5[0x18] = 0;
      FUN_1432efba0(puVar5 + 6,lVar3);
      *(undefined4 *)(puVar5 + 5) = 0xffffffff;
      puVar6 = (undefined8 *)0x1;
      puVar4 = puVar5;
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_143438cb9;
    local_28[0] = CONCAT44(uStackX_14,local_res10);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,200,0);
    if (lVar3 != 0) {
      FUN_1432c2fb0(local_28,param_3);
      puVar4 = (undefined8 *)FUN_143496a00(lVar3,iVar2,local_28,param_4,0,0);
      puVar6 = (undefined8 *)0x2;
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_143438cb9;
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_28[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28[0] & 0xfffffffffffffffc);
  }
LAB_143438cb9:
  if (puVar4 != (undefined8 *)0x0) {
    FUN_143412aa0(puVar4 + 7,param_5);
    FUN_1434385c0(param_1,puVar4);
  }
  return;
}



// FUNCTION 143438d00 FUN_143438d00 body=855 status=ok
// SIG undefined FUN_143438d00(void)

void FUN_143438d00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  RefCountImpl *this;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *local_res8;
  char *local_38 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_res8 = (char *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res8 = (char *)FUN_143360a60(param_1[0xc3]);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x40))(param_1,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  puVar9 = puVar8;
  if (puVar4 == (undefined8 *)0x0) {
    local_res8 = "";
    puVar4 = *(undefined8 **)(param_1[2] + 0x68);
    puVar5 = puVar8;
    if (puVar4 != (undefined8 *)0x0) {
      lVar6 = *(longlong *)(param_1[2] + 0x60);
      puVar7 = puVar8;
      do {
        if (*(int *)(lVar6 + (longlong)puVar7 * 0x10) == 0) {
          puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar7 * 0x10);
          break;
        }
        puVar7 = (undefined8 *)(ulonglong)((int)puVar7 + 1);
      } while (puVar7 < puVar4);
    }
    uVar3 = FUN_14336b320(puVar5);
    iVar2 = FUN_143437bb0(param_2,&local_res8,6 < uVar3);
    if (*local_res8 != '\0') {
      return;
    }
    if (iVar2 == -1) {
      return;
    }
  }
  else {
    puVar5 = puVar8;
    if ((*(ushort *)((longlong)puVar4 + 0x6a) >> 10 & 1) != 0) {
      puVar5 = puVar4;
    }
    if ((puVar5 == (undefined8 *)0x0) ||
       (iVar2 = (**(code **)(*(longlong *)
                              ((longlong)puVar5 +
                              (ulonglong)*(byte *)((longlong)puVar5 + 0x6d) * 4 + 0x30) + 0xf8))
                          ((longlong)puVar5 +
                           (ulonglong)*(byte *)((longlong)puVar5 + 0x6d) * 4 + 0x30), iVar2 == -1))
    {
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                         (*(longlong **)(param_1[2] + 0x48),200,0);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1432c2fb0(local_38,param_3);
        lVar6 = puVar4[0xe];
        if (lVar6 == 0) {
          lVar6 = FUN_14336c170(puVar4);
        }
        *puVar5 = &PTR_FUN_145b0aac0;
        FUN_1432c2f70(puVar5 + 3);
        *(undefined4 *)(puVar5 + 2) = 4;
        *(undefined4 *)((longlong)puVar5 + 0x14) = param_4;
        puVar5[1] = 0;
        FUN_1432c4d80(puVar5 + 3,local_38);
        *(undefined4 *)(puVar5 + 4) = 0xffffffff;
        *puVar5 = &PTR_FUN_145b0c5e0;
        *(undefined2 *)((longlong)puVar5 + 0x24) = 0;
        puVar5[6] = 0;
        *(undefined1 *)(puVar5 + 7) = 0;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        *(undefined1 *)(puVar5 + 0xf) = 0;
        puVar5[0x13] = 0;
        *(undefined1 *)(puVar5 + 0x14) = 0;
        puVar5[0x18] = 0;
        FUN_1432efba0(puVar5 + 6,lVar6);
        *(undefined4 *)(puVar5 + 5) = 0xffffffff;
        puVar8 = puVar5;
        puVar9 = (undefined8 *)0x1;
      }
      goto joined_r0x000143438fd6;
    }
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                     (*(longlong **)(param_1[2] + 0x48),200,0);
  local_38[0] = local_res8;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1432c2fb0(&local_res8,param_3);
    *puVar4 = &PTR_FUN_145b0aac0;
    FUN_1432c2f70(puVar4 + 3);
    *(undefined4 *)(puVar4 + 2) = 4;
    *(undefined4 *)((longlong)puVar4 + 0x14) = param_4;
    puVar4[1] = 0;
    FUN_1432c4d80(puVar4 + 3,&local_res8);
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    *puVar4 = &PTR_FUN_145b0c5e0;
    *(undefined2 *)((longlong)puVar4 + 0x24) = 0;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    *(undefined1 *)(puVar4 + 0xf) = 0;
    puVar4[0x13] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puVar4[0x18] = 0;
    piVar1 = (int *)puVar4[6];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    puVar4[6] = 0;
    *(int *)(puVar4 + 5) = iVar2;
    *(undefined4 *)(puVar4 + 2) = 6;
    puVar8 = puVar4;
    local_38[0] = local_res8;
    puVar9 = (undefined8 *)0x2;
  }
joined_r0x000143438fd6:
  if (puVar9 != (undefined8 *)0x0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      (((ulonglong)local_38[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))
                (DAT_146b62f28,(ulonglong)local_38[0] & 0xfffffffffffffffc);
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    this = (RefCountImpl *)
           (**(code **)(*(longlong *)(param_1[2] + 0x10) + 0x18))
                     ((longlong *)(param_1[2] + 0x10),0x18);
    if (this == (RefCountImpl *)0x0) {
      FUN_1432e4090(param_1[2],puVar8);
    }
    else {
      Scaleform::RefCountImpl::Release(this);
      FUN_143438300(param_1,puVar8);
    }
  }
  return;
}



// FUNCTION 143439060 FUN_143439060 body=693 status=ok
// SIG undefined FUN_143439060(void)

void FUN_143439060(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  RefCountImpl *this;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res10;
  undefined4 uStackX_14;
  ulonglong local_38 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)0x0;
  local_res10 = 0;
  puVar3 = puVar6;
  if ((*(ushort *)((longlong)param_2 + 0x6a) >> 10 & 1) != 0) {
    puVar3 = param_2;
  }
  puVar7 = puVar6;
  if ((puVar3 == (undefined8 *)0x0) ||
     (iVar2 = (**(code **)(*(longlong *)
                            ((longlong)puVar3 +
                            (ulonglong)*(byte *)((longlong)puVar3 + 0x6d) * 4 + 0x30) + 0xf8))
                        ((longlong)puVar3 + (ulonglong)*(byte *)((longlong)puVar3 + 0x6d) * 4 + 0x30
                        ), iVar2 == -1)) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,200,0);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1432c2fb0(local_38,param_3);
      lVar4 = param_2[0xe];
      if (lVar4 == 0) {
        lVar4 = FUN_14336c170(param_2);
      }
      *puVar3 = &PTR_FUN_145b0aac0;
      FUN_1432c2f70(puVar3 + 3);
      *(undefined4 *)(puVar3 + 2) = 4;
      *(undefined4 *)((longlong)puVar3 + 0x14) = param_4;
      puVar3[1] = 0;
      FUN_1432c4d80(puVar3 + 3,local_38);
      *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      *puVar3 = &PTR_FUN_145b0c5e0;
      *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)(puVar3 + 0xf) = 0;
      puVar3[0x13] = 0;
      *(undefined1 *)(puVar3 + 0x14) = 0;
      puVar3[0x18] = 0;
      FUN_1432efba0(puVar3 + 6,lVar4);
      *(undefined4 *)(puVar3 + 5) = 0xffffffff;
      puVar6 = (undefined8 *)0x1;
      puVar7 = puVar3;
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_1434392b2;
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,200,0);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1432c2fb0(&local_res10,param_3);
      *puVar3 = &PTR_FUN_145b0aac0;
      FUN_1432c2f70(puVar3 + 3);
      *(undefined4 *)(puVar3 + 2) = 4;
      *(undefined4 *)((longlong)puVar3 + 0x14) = param_4;
      puVar3[1] = 0;
      FUN_1432c4d80(puVar3 + 3,&local_res10);
      *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      *puVar3 = &PTR_FUN_145b0c5e0;
      *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)(puVar3 + 0xf) = 0;
      puVar3[0x13] = 0;
      *(undefined1 *)(puVar3 + 0x14) = 0;
      puVar3[0x18] = 0;
      piVar1 = (int *)puVar3[6];
      if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
        FUN_14336bed0(piVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
      }
      puVar3[6] = 0;
      puVar6 = (undefined8 *)0x2;
      *(int *)(puVar3 + 5) = iVar2;
      *(undefined4 *)(puVar3 + 2) = 6;
      puVar7 = puVar3;
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_1434392b2;
    local_38[0] = CONCAT44(uStackX_14,local_res10);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_38[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38[0] & 0xfffffffffffffffc);
  }
LAB_1434392b2:
  if (puVar7 != (undefined8 *)0x0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    this = (RefCountImpl *)(**(code **)(*plVar5 + 0x18))(plVar5,0x18);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
      FUN_143438300(param_1,puVar7);
      return;
    }
    FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),puVar7);
  }
  return;
}



// FUNCTION 143439350 FUN_143439350 body=180 status=ok
// SIG undefined FUN_143439350(void)

void FUN_143439350(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  ulonglong local_res20;
  
  FUN_1432c2f70(&local_res20);
  FUN_143364700((longlong)(*param_4 & 0xfffffffffffffffc) + 0xc,
                *(ulonglong *)(*param_4 & 0xfffffffffffffffc) & 0x7fffffffffffffff,&local_res20);
  FUN_143439410(param_1,param_2,param_3,&local_res20,param_5,param_6);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143439410 FUN_143439410 body=605 status=ok
// SIG undefined FUN_143439410(void)

void FUN_143439410(longlong param_1,longlong param_2,undefined8 param_3,ulonglong *param_4,
                  longlong param_5)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  RefCountNTSImpl *pRVar9;
  RefCountNTSImpl *pRVar10;
  ulonglong uVar11;
  RefCountNTSImpl *pRVar12;
  double dVar13;
  longlong local_res10;
  
  lVar3 = FUN_143412120(param_2 + 0x58,0);
  if (lVar3 != 0) {
    lVar3 = FUN_143412120(param_2 + 0x58,0);
    uVar8 = 0;
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    if (uVar2 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      uVar11 = uVar8;
      do {
        if (*(int *)(lVar4 + uVar11 * 0x10) == 0) {
          uVar8 = *(ulonglong *)(lVar4 + 8 + uVar11 * 0x10);
          break;
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (uVar11 < uVar2);
    }
    lVar4 = (**(code **)(*(longlong *)(uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4) + 0xf0))();
    lVar5 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18)
                           + 0x618),(longlong)(*param_4 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_4 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    dVar13 = (double)param_5;
    if (param_5 < 0) {
      dVar13 = dVar13 + 1.8446744073709552e+19;
    }
    if (*(double *)(lVar3 + 0x70) <= 0.0 && *(double *)(lVar3 + 0x70) != 0.0) {
      *(undefined8 *)(lVar3 + 0x70) = 0;
    }
    *(double *)(lVar3 + 0x68) = dVar13;
    *(double *)(lVar3 + 0x70) = dVar13 + *(double *)(lVar3 + 0x70);
    local_res10 = lVar5;
    FUN_1434320d0(lVar3,lVar4,&local_res10);
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920(lVar5);
    return;
  }
  pRVar12 = (RefCountNTSImpl *)0x0;
  if (*(int *)(param_2 + 0x28) == -1) {
    this = (RefCountNTSImpl *)
           Scaleform::GFx::CharacterHandle::ResolveCharacter
                     (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x10));
    pRVar6 = pRVar12;
    if ((this == (RefCountNTSImpl *)0x0) ||
       (*(int *)(this + 8) = *(int *)(this + 8) + 1, this == (RefCountNTSImpl *)0x0))
    goto LAB_1434395d4;
  }
  else {
    pRVar6 = *(RefCountNTSImpl **)(*(longlong *)(param_1 + 0x10) + 0x68);
    this = pRVar12;
    if (pRVar6 != (RefCountNTSImpl *)0x0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      pRVar9 = pRVar12;
      do {
        if (*(int *)(lVar3 + (longlong)pRVar9 * 0x10) == *(int *)(param_2 + 0x28)) {
          this = *(RefCountNTSImpl **)(lVar3 + 8 + (longlong)pRVar9 * 0x10);
          if (this == (RefCountNTSImpl *)0x0) goto LAB_1434395aa;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          break;
        }
        pRVar9 = (RefCountNTSImpl *)(ulonglong)((int)pRVar9 + 1);
      } while (pRVar9 < pRVar6);
    }
    if (this == (RefCountNTSImpl *)0x0) {
LAB_1434395aa:
      this = (RefCountNTSImpl *)FUN_143439b60(param_1,param_3,*(undefined4 *)(param_2 + 0x28));
      if (this == (RefCountNTSImpl *)0x0) {
        return;
      }
    }
  }
  pRVar6 = (RefCountNTSImpl *)
           (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                     (this + (ulonglong)(byte)this[0x6d] * 4);
LAB_1434395d4:
  pRVar9 = pRVar6 + 8;
  if (pRVar6 == (RefCountNTSImpl *)0x0) {
    pRVar9 = pRVar12;
  }
  pRVar6 = *(RefCountNTSImpl **)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (pRVar6 != (RefCountNTSImpl *)0x0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    pRVar10 = pRVar12;
    do {
      if (*(int *)(lVar3 + (longlong)pRVar10 * 0x10) == 0) {
        pRVar12 = *(RefCountNTSImpl **)(lVar3 + 8 + (longlong)pRVar10 * 0x10);
        break;
      }
      pRVar10 = (RefCountNTSImpl *)(ulonglong)((int)pRVar10 + 1);
    } while (pRVar10 < pRVar6);
  }
  uVar7 = (**(code **)(*(longlong *)(pRVar12 + (ulonglong)(byte)pRVar12[0x6d] * 4) + 0xf0))
                    (pRVar12 + (ulonglong)(byte)pRVar12[0x6d] * 4);
  FUN_143432ea0(uVar7,pRVar9,param_4);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143439680 FUN_143439680 body=402 status=ok
// SIG undefined FUN_143439680(void)

void FUN_143439680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  RefCountImpl *this;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  puVar6 = (undefined8 *)0x0;
  local_res8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,200,0);
  puVar7 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432c2fb0(&local_res8,param_3);
    *puVar3 = &PTR_FUN_145b0aac0;
    FUN_1432c2f70(puVar3 + 3);
    *(undefined4 *)(puVar3 + 2) = 4;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_4;
    puVar3[1] = 0;
    FUN_1432c4d80(puVar3 + 3,&local_res8);
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    *puVar3 = &PTR_FUN_145b0c5e0;
    *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)(puVar3 + 0xf) = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    puVar3[0x18] = 0;
    piVar1 = (int *)puVar3[6];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    puVar3[6] = 0;
    puVar6 = (undefined8 *)0x1;
    *(undefined4 *)(puVar3 + 5) = 0xffffffff;
    puVar7 = puVar3;
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_143412aa0(puVar7 + 0xb,param_2);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    this = (RefCountImpl *)(**(code **)(*plVar4 + 0x18))(plVar4,0x18);
    if (this == (RefCountImpl *)0x0) {
      FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),puVar7);
    }
    else {
      Scaleform::RefCountImpl::Release(this);
      FUN_143438300(param_1,puVar7);
    }
  }
  return;
}



// FUNCTION 143439820 FUN_143439820 body=825 status=ok
// SIG undefined FUN_143439820(void)

void FUN_143439820(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  RefCountImpl *this;
  undefined4 uVar5;
  RefCountImpl *pRVar6;
  int local_res8 [2];
  ulonglong local_res10 [2];
  ulonglong local_res20;
  ulonglong in_stack_ffffffffffffff68;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  ulonglong local_50;
  ulonglong local_48 [2];
  
  FUN_1432c2f70(&local_res20);
  lVar4 = *(longlong *)(param_1 + 0x10);
  this = (RefCountImpl *)0x0;
  if (*(RefCountImpl **)(lVar4 + 0x68) != (RefCountImpl *)0x0) {
    pRVar6 = this;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x60) + (longlong)pRVar6 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + (longlong)pRVar6 * 0x10) != 0) {
          uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_res20,uVar3);
          cVar1 = FUN_1432bad10(&local_res20);
          if (cVar1 != '\0') goto LAB_1434398bf;
        }
        break;
      }
      pRVar6 = (RefCountImpl *)(ulonglong)((int)pRVar6 + 1);
    } while (pRVar6 < *(RefCountImpl **)(lVar4 + 0x68));
  }
  FUN_1432c3510(&local_res20);
LAB_1434398bf:
  FUN_1432c2f70(&local_78);
  local_res8[0] = 0;
  lVar4 = FUN_1432c3580(param_2 + 0x18);
  if (lVar4 == 0) goto LAB_143439abd;
  uVar5 = 4;
  local_58[0] = 4;
  FUN_1432c31e0(&local_50,param_2 + 0x18);
  FUN_1432c31e0(local_48,&local_res20);
  FUN_1432c2f70(local_res10);
  Scaleform::GFx::LoadStates::BuildURL(param_3,local_res10,local_58);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  cVar1 = FUN_1432badc0(local_res10);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)FUN_143319140(param_3,(local_res10[0] & 0xfffffffffffffffc) + 0xc,0);
LAB_1434399e5:
    if (this != (RefCountImpl *)0x0) {
      if (*(char *)(param_2 + 0x58) == '\x06') {
        cVar1 = FUN_1432ec380(&local_78,this,local_res8,1);
        if (cVar1 == '\0') {
          FUN_143411150(param_2 + 0x58);
        }
      }
      else {
        FUN_1432ec380(&local_78,this,local_res8,1);
      }
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 1) {
      uVar5 = 1;
LAB_14343996d:
      cVar1 = FUN_1432bae80(&local_70,local_res10,uVar5,0,
                            in_stack_ffffffffffffff68 & 0xffffffff00000000,0,0);
      if ((cVar1 != '\0') && (local_68 != 0)) {
        lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
        if (lVar4 != 0) {
          this = (RefCountImpl *)FUN_1432e1570(lVar4,local_res10,local_70,local_68 & 0xffffffff);
        }
        goto LAB_1434399e5;
      }
    }
    else {
      if (iVar2 == 2) {
        uVar5 = 2;
        goto LAB_14343996d;
      }
      if (iVar2 == 3) {
        uVar5 = 3;
        goto LAB_14343996d;
      }
      if (iVar2 == 4) goto LAB_14343996d;
    }
  }
  if (local_70 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48[0] & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_50 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_50 & 0xfffffffffffffffc);
  }
LAB_143439abd:
  FUN_143439410(param_1,param_2,param_3,&local_78,(longlong)local_res8[0],1);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_78 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_78 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143439b60 FUN_143439b60 body=462 status=ok
// SIG undefined FUN_143439b60(void)

longlong FUN_143439b60(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  longlong *plVar5;
  ulonglong in_stack_ffffffffffffff90;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  
  lVar2 = 0;
  lVar4 = 0;
  FUN_14330f6a0(&local_48,&DAT_145af3922,0,0,0);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  plVar3 = DAT_146b62f28;
  if (plVar5 != (longlong *)0x0) {
    plVar3 = plVar5;
  }
  lVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,0x48,0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14330f260(lVar1,&local_48,0,&DAT_145af3922,plVar5,
                          in_stack_ffffffffffffff90 & 0xffffffffffffff00,0);
    lVar4 = lVar2;
    if (lVar1 != 0) {
      Scaleform::GFx::MovieDataDef::LoadTaskData::InitEmptyMovieDef(*(undefined8 *)(lVar1 + 0x40));
      FUN_1433190c0(param_2,lVar1);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
      lVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x78,0);
      if (lVar2 != 0) {
        lVar2 = FUN_143310770(lVar2,lVar1,*(undefined8 *)(param_2 + 0x10),
                              *(undefined8 *)(param_2 + 0x68),(ulonglong)plVar5 & 0xffffffff00000000
                              ,*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + 0x20),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48),1,0);
        if (lVar2 != 0) {
          local_28 = 0;
          local_res8[0] = 0x40000;
          local_38 = lVar1;
          local_30 = lVar2;
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                             &local_38,0,local_res8,3);
          FUN_143383050(lVar4,1);
          FUN_143426a80(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4,param_3);
          FUN_1432e3300(*(undefined8 *)(param_1 + 0x10),param_3,lVar4);
          FUN_1432de450(lVar2);
        }
      }
    }
  }
  if (lVar1 != 0) {
    FUN_1432de450(lVar1);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_48,local_40);
  }
  return lVar4;
}



// FUNCTION 143439d40 FUN_143439d40 body=463 status=ok
// SIG undefined FUN_143439d40(void)

void FUN_143439d40(longlong param_1,undefined8 param_2,RefCountImpl *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  RefCountImpl *this;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  puVar6 = (undefined8 *)0x0;
  local_res8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,200,0);
  puVar7 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432c2fb0(&local_res8,param_4);
    *puVar3 = &PTR_FUN_145b0aac0;
    FUN_1432c2f70(puVar3 + 3);
    puVar3[1] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_5;
    *(uint *)(puVar3 + 2) =
         (uint)((CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc) == 0xfffffffffffffff4);
    FUN_1432c4d80(puVar3 + 3,&local_res8);
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    *puVar3 = &PTR_FUN_145b0c5e0;
    *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)(puVar3 + 0xf) = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    puVar3[0x18] = 0;
    piVar1 = (int *)puVar3[6];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    puVar3[6] = 0;
    puVar6 = (undefined8 *)0x1;
    *(undefined4 *)(puVar3 + 5) = 0xffffffff;
    puVar7 = puVar3;
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 8;
    FUN_143412aa0(puVar7 + 0xf,param_2);
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if ((RefCountImpl *)puVar7[0x13] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar7[0x13]);
    }
    puVar7[0x13] = param_3;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    this = (RefCountImpl *)(**(code **)(*plVar4 + 0x18))(plVar4,0x18);
    if (this == (RefCountImpl *)0x0) {
      FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),puVar7);
    }
    else {
      Scaleform::RefCountImpl::Release(this);
      FUN_143438300(param_1,puVar7);
    }
  }
  return;
}



// FUNCTION 143439f20 FUN_143439f20 body=466 status=ok
// SIG undefined FUN_143439f20(void)

void FUN_143439f20(longlong param_1,undefined8 param_2,RefCountImpl *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  RefCountImpl *this;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  puVar6 = (undefined8 *)0x0;
  local_res8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,200,0);
  puVar7 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432c2fb0(&local_res8,param_4);
    *puVar3 = &PTR_FUN_145b0aac0;
    FUN_1432c2f70(puVar3 + 3);
    puVar3[1] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_5;
    *(uint *)(puVar3 + 2) =
         (uint)((CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc) == 0xfffffffffffffff4);
    FUN_1432c4d80(puVar3 + 3,&local_res8);
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    *puVar3 = &PTR_FUN_145b0c5e0;
    *(undefined2 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)(puVar3 + 0xf) = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    puVar3[0x18] = 0;
    piVar1 = (int *)puVar3[6];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
      FUN_14336bed0(piVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
    }
    puVar3[6] = 0;
    puVar6 = (undefined8 *)0x1;
    *(undefined4 *)(puVar3 + 5) = 0xffffffff;
    puVar7 = puVar3;
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar5 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar5);
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 0x10;
    FUN_143412aa0(puVar7 + 0x14,param_2);
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if ((RefCountImpl *)puVar7[0x18] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar7[0x18]);
    }
    puVar7[0x18] = param_3;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    this = (RefCountImpl *)(**(code **)(*plVar4 + 0x18))(plVar4,0x18);
    if (this == (RefCountImpl *)0x0) {
      FUN_1432e4090(*(undefined8 *)(param_1 + 0x10),puVar7);
    }
    else {
      Scaleform::RefCountImpl::Release(this);
      FUN_143438300(param_1,puVar7);
    }
  }
  return;
}



// FUNCTION 14343a100 FUN_14343a100 body=605 status=ok
// SIG undefined FUN_14343a100(void)

void FUN_14343a100(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  ulonglong local_res10 [2];
  ulonglong local_res20;
  undefined4 local_48 [2];
  ulonglong local_40;
  ulonglong local_38 [2];
  
  FUN_1432c2f70(&local_res8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  if (*(ulonglong *)(lVar4 + 0x68) != 0) {
    uVar9 = uVar8;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x60) + uVar9 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + uVar9 * 0x10) != 0) {
          uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_res8,uVar5);
          cVar2 = FUN_1432bad10(&local_res8);
          if (cVar2 != '\0') goto LAB_14343a188;
        }
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (uVar9 < *(ulonglong *)(lVar4 + 0x68));
  }
  FUN_1432c3510(&local_res8);
LAB_14343a188:
  lVar4 = FUN_1432c3580(param_2 + 0x18);
  if (lVar4 != 0) {
    local_48[0] = 5;
    FUN_1432c31e0(&local_40,param_2 + 0x18);
    FUN_1432c31e0(local_38,&local_res8);
    FUN_1432c2f70(local_res10);
    Scaleform::GFx::LoadStates::BuildURL(param_3,local_res10,local_48);
    FUN_1432c2fb0(&local_res20,(local_res10[0] & 0xfffffffffffffffc) + 0xc);
    (**(code **)(**(longlong **)(param_2 + 0x98) + 8))
              (*(longlong **)(param_2 + 0x98),&local_res20,
               *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x10));
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    if (uVar9 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      uVar7 = uVar8;
      do {
        if (*(int *)(lVar4 + uVar7 * 0x10) == 0) {
          uVar8 = *(ulonglong *)(lVar4 + 8 + uVar7 * 0x10);
          break;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar7 < uVar9);
    }
    uVar5 = (**(code **)(*(longlong *)(uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4) + 0xf0))
                      (uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4);
    plVar1 = *(longlong **)(param_2 + 0x98);
    lVar4 = *plVar1;
    uVar6 = FUN_143412120(param_2 + 0x78,uVar5);
    (**(code **)(lVar4 + 0x10))(plVar1,uVar5,uVar6);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_38[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38[0] & 0xfffffffffffffffc);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_40 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40 & 0xfffffffffffffffc);
    }
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14343a370 FUN_14343a370 body=608 status=ok
// SIG undefined FUN_14343a370(void)

void FUN_14343a370(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  ulonglong local_res10 [2];
  ulonglong local_res20;
  undefined4 local_48 [2];
  ulonglong local_40;
  ulonglong local_38 [2];
  
  FUN_1432c2f70(&local_res8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  if (*(ulonglong *)(lVar4 + 0x68) != 0) {
    uVar9 = uVar8;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x60) + uVar9 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + uVar9 * 0x10) != 0) {
          uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_res8,uVar5);
          cVar2 = FUN_1432bad10(&local_res8);
          if (cVar2 != '\0') goto LAB_14343a3f8;
        }
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (uVar9 < *(ulonglong *)(lVar4 + 0x68));
  }
  FUN_1432c3510(&local_res8);
LAB_14343a3f8:
  lVar4 = FUN_1432c3580(param_2 + 0x18);
  if (lVar4 != 0) {
    local_48[0] = 6;
    FUN_1432c31e0(&local_40,param_2 + 0x18);
    FUN_1432c31e0(local_38,&local_res8);
    FUN_1432c2f70(local_res10);
    Scaleform::GFx::LoadStates::BuildURL(param_3,local_res10,local_48);
    FUN_1432c2fb0(&local_res20,(local_res10[0] & 0xfffffffffffffffc) + 0xc);
    (**(code **)(**(longlong **)(param_2 + 0xc0) + 8))
              (*(longlong **)(param_2 + 0xc0),&local_res20,
               *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x10));
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
    }
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    if (uVar9 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      uVar7 = uVar8;
      do {
        if (*(int *)(lVar4 + uVar7 * 0x10) == 0) {
          uVar8 = *(ulonglong *)(lVar4 + 8 + uVar7 * 0x10);
          break;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar7 < uVar9);
    }
    uVar5 = (**(code **)(*(longlong *)(uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4) + 0xf0))
                      (uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4);
    plVar1 = *(longlong **)(param_2 + 0xc0);
    lVar4 = *plVar1;
    uVar6 = FUN_143412120(param_2 + 0xa0,uVar5);
    (**(code **)(lVar4 + 0x10))(plVar1,uVar5,uVar6);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10[0] & 0xfffffffffffffffc);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_38[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38[0] & 0xfffffffffffffffc);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_40 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40 & 0xfffffffffffffffc);
    }
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14343a5e0 FUN_14343a5e0 body=2856 status=ok
// SIG undefined FUN_14343a5e0(void)

void FUN_14343a5e0(longlong *param_1,longlong param_2,undefined8 *****param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  RefCountNTSImpl *this;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ***pppuVar9;
  longlong *plVar10;
  RefCountNTSImpl *this_00;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined4 uVar15;
  RefCountNTSImpl *pRVar16;
  bool bVar17;
  undefined1 local_res10;
  undefined7 uStackX_11;
  undefined8 ****local_res18;
  undefined4 local_res20;
  undefined8 *****in_stack_fffffffffffffed8;
  ulonglong local_118;
  undefined8 ***local_110;
  RefCountNTSImpl *local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  undefined8 **local_e8;
  undefined4 local_e0 [2];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined4 local_c8 [2];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 **local_98;
  undefined8 **ppuStack_90;
  undefined8 ***local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  local_res18 = param_3;
  FUN_1432c2f70(&local_100);
  lVar8 = param_1[2];
  uVar12 = 0;
  if (*(ulonglong *)(lVar8 + 0x68) != 0) {
    do {
      if (*(int *)(*(longlong *)(lVar8 + 0x60) + uVar12 * 0x10) == 0) {
        if (*(longlong *)(*(longlong *)(lVar8 + 0x60) + 8 + uVar12 * 0x10) != 0) {
          uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x60))();
          Scaleform::String::operator=(&local_100,uVar7);
          cVar1 = FUN_1432bad10(&local_100);
          if (cVar1 != '\0') goto LAB_14343a689;
        }
        break;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while (uVar12 < *(ulonglong *)(lVar8 + 0x68));
  }
  FUN_1432c3510(&local_100);
LAB_14343a689:
  FUN_1432c31e0(&local_118);
  FUN_1432c2f70(&local_f0);
  local_108 = (RefCountNTSImpl *)param_3[3];
  this = (RefCountNTSImpl *)0x0;
  lVar8 = param_1[2];
  plVar10 = (longlong *)0x0;
  this_00 = (RefCountNTSImpl *)0x0;
  bVar11 = 0;
  local_f8 = (longlong *)0x0;
  local_110 = (undefined8 ***)
              CONCAT44(local_110._4_4_,
                       *(undefined4 *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x70) + 0x28));
  if (*(longlong *)(param_2 + 0x30) == 0) {
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 == -1) goto LAB_14343b050;
    uVar12 = *(ulonglong *)(lVar8 + 0x68);
    uVar3 = 0;
    if (uVar12 != 0) {
      lVar13 = *(longlong *)(lVar8 + 0x60);
      uVar6 = 0;
      do {
        if (*(int *)(lVar13 + uVar6 * 0x10) == iVar2) {
          if (*(longlong *)(lVar13 + 8 + (ulonglong)uVar3 * 0x10) != 0) {
            uVar6 = 0;
            if (uVar12 != 0) goto LAB_14343a7b0;
            goto LAB_14343a7c6;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (uVar6 < uVar12);
    }
    uVar3 = 0;
    if (uVar12 != 0) {
      lVar13 = *(longlong *)(lVar8 + 0x60);
      uVar6 = 0;
      do {
        if (*(int *)(lVar13 + uVar6 * 0x10) == 0) {
          if (*(longlong *)(lVar13 + 8 + (ulonglong)uVar3 * 0x10) != 0) {
            uVar6 = 0;
            if (uVar12 != 0) goto LAB_14343a914;
            goto LAB_14343a7c6;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (uVar6 < uVar12);
    }
    goto LAB_14343a7e8;
  }
  this = (RefCountNTSImpl *)
         Scaleform::GFx::CharacterHandle::ForceResolveCharacter(*(longlong *)(param_2 + 0x30),lVar8)
  ;
  if (this == (RefCountNTSImpl *)0x0) goto LAB_14343b050;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  local_f8 = *(longlong **)(this + 0x38);
  if (local_f8 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x218))(this);
    puVar5 = (uint *)(**(code **)(*plVar4 + 0x58))(plVar4,&local_res10);
    uVar15 = *(undefined4 *)(this + 0x28);
    bVar11 = (byte)(*puVar5 >> 4) & 1;
    goto LAB_14343a7fb;
  }
  goto LAB_14343b043;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar12) {
LAB_14343a7b0:
    if (*(int *)(lVar13 + uVar6 * 0x10) == iVar2) goto LAB_14343a92b;
  }
  goto LAB_14343a7c6;
LAB_14343a92b:
  plVar4 = *(longlong **)(lVar13 + 8 + uVar6 * 0x10);
  goto LAB_14343a7c8;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar12) {
LAB_14343a914:
    if (*(int *)(lVar13 + uVar6 * 0x10) == 0) goto LAB_14343a92b;
  }
LAB_14343a7c6:
  plVar4 = (longlong *)0x0;
LAB_14343a7c8:
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x218))();
  puVar5 = (uint *)(**(code **)(*plVar4 + 0x58))(plVar4,&local_res10);
  bVar11 = (byte)(*puVar5 >> 4) & 1;
LAB_14343a7e8:
  FUN_1432e35c0(param_1[2],*(undefined4 *)(param_2 + 0x28));
  uVar15 = 0x40000;
LAB_14343a7fb:
  local_res20 = 0;
  if (bVar11 != 0) {
    uVar7 = FUN_143389a50(&local_res10,&local_118);
    FUN_1432c4d80(&local_f0,uVar7);
    uVar12 = CONCAT71(uStackX_11,local_res10) & 0xfffffffffffffffc;
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar12 + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar12);
    }
  }
  lVar8 = FUN_1432c3580();
  if (lVar8 == 0) {
    for (lVar8 = *(longlong *)(param_1[2] + 0x5300); this_00 = (RefCountNTSImpl *)0x0,
        pRVar16 = local_108, lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 8)) {
      lVar13 = *(longlong *)(lVar8 + 0x20);
      if (*(uint *)(lVar13 + 0x20) < *(uint *)(param_2 + 0x20)) {
        if ((*(int *)(param_2 + 0x28) == -1) || (*(int *)(lVar13 + 0x28) == -1)) {
          if ((*(longlong *)(param_2 + 0x30) == 0) || (*(longlong *)(lVar13 + 0x30) == 0))
          goto LAB_14343ad11;
          bVar17 = *(longlong *)(param_2 + 0x30) == *(longlong *)(lVar13 + 0x30);
        }
        else {
          bVar17 = *(int *)(param_2 + 0x28) == *(int *)(lVar13 + 0x28);
        }
        if (bVar17) {
          *(undefined1 *)(lVar13 + 0x25) = 1;
        }
      }
LAB_14343ad11:
    }
    goto LAB_14343ad1f;
  }
  local_res10 = 0;
  cVar1 = FUN_1432ff890(&local_118,&local_res10,0);
  if (cVar1 == '\0') {
    uVar3 = (uint)local_110 | 0x210001;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar3 = (uint)local_110 | 0x10001;
    }
    lVar8 = FUN_1432c3580(&local_f0);
    if (lVar8 == 0) {
LAB_14343ab03:
      local_c8[0] = 3;
      FUN_1432c31e0(local_c0,&local_118);
      FUN_1432c31e0(local_b8,&local_100);
      in_stack_fffffffffffffed8 = (undefined8 *****)0x0;
      plVar10 = (longlong *)FUN_1432fe2b0(local_res18,local_c8,uVar3,0,0);
      FUN_143316010();
      pRVar16 = local_108;
      if (plVar10 != (longlong *)0x0) goto LAB_14343ab4f;
      if ((local_108 != (RefCountNTSImpl *)0x0) && (*(char *)(param_2 + 0x24) == '\0')) {
        FUN_1434a1650(local_108 + 0x18,"Failed loading URL \"%s\"",
                      (local_118 & 0xfffffffffffffffc) + 0xc);
      }
    }
    else {
      local_e0[0] = 3;
      FUN_1432c31e0(local_d8,&local_f0);
      FUN_1432c31e0(local_d0,&local_100);
      in_stack_fffffffffffffed8 = (undefined8 *****)0x0;
      plVar10 = (longlong *)FUN_1432fe2b0(local_res18,local_e0,uVar3,0,0);
      FUN_143316010(local_e0);
      if (plVar10 == (longlong *)0x0) goto LAB_14343ab03;
LAB_14343ab4f:
      local_res20 = *(undefined4 *)(*(longlong *)(*(longlong *)(plVar10[0xe] + 0x18) + 0x40) + 0x50)
      ;
      pRVar16 = local_108;
    }
LAB_14343ab95:
    if (plVar10 == (longlong *)0x0) goto LAB_14343ad1f;
    iVar2 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if (((iVar2 == -1) || (uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10), uVar3 < 9)) ||
       (((byte)*(undefined4 *)(*(longlong *)(*(longlong *)(plVar10[0xe] + 0x18) + 0x40) + 0xd0) & 8
        | 0x10) < 0x11)) {
      in_stack_fffffffffffffed8 = &local_res18;
      local_res18 = (undefined8 ****)CONCAT44(local_res18._4_4_,uVar15);
      local_78 = *(undefined8 *)(plVar10[0xe] + 0x18);
      local_68 = 0;
      local_70 = plVar10;
      this_00 = (RefCountNTSImpl *)
                (**(code **)(*(longlong *)param_1[3] + 0x20))
                          ((longlong *)param_1[3],param_1[2],&local_78,local_f8,
                           in_stack_fffffffffffffed8,3);
      FUN_143383050(this_00,1);
      goto LAB_14343ad1f;
    }
    if ((pRVar16 != (RefCountNTSImpl *)0x0) && (*(char *)(param_2 + 0x24) == '\0')) {
      FUN_1434a1650(pRVar16 + 0x18,"Failed loading SWF \"%s\": ActionScript version mismatch",
                    (local_118 & 0xfffffffffffffffc) + 0xc);
    }
    if (this != (RefCountNTSImpl *)0x0) {
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                         (this + (ulonglong)(byte)this[0x6d] * 4);
      uVar7 = (**(code **)(*plVar4 + 0xf0))(plVar4);
      plVar4 = (longlong *)FUN_143412120(param_2 + 0x38,uVar7);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x60))
                  (plVar4,uVar7,this,"ActionScriptMismatch",
                   (ulonglong)in_stack_fffffffffffffed8 & 0xffffffff00000000);
      }
    }
  }
  else {
    plVar4 = (longlong *)Scaleform::GFx::LoadStates::GetImageCreator();
    pRVar16 = local_108;
    if (plVar4 == (longlong *)0x0) {
      if (local_108 != (RefCountNTSImpl *)0x0) {
        FUN_1434a1650(local_108 + 0x18,"ImageCreator is not installed,failed to load image \"%s\"",
                      (local_118 & 0xfffffffffffffffc) + 0xc);
      }
    }
    else {
      local_a8 = *(undefined8 *)(param_1[2] + 0x48);
      local_110 = local_res18[7];
      local_b0[0] = 0;
      local_a0 = 1;
      local_9c = 1;
      local_98 = (undefined8 **)0x0;
      ppuStack_90 = (undefined8 **)0x0;
      local_88 = (undefined8 ***)0x0;
      lStack_80 = 0;
      local_e8 = local_res18[2][2];
      pppuVar9 = (undefined8 ***)0x0;
      if (((undefined8 ****)local_res18[3] != (undefined8 ****)0x0) &&
         (pppuVar9 = (undefined8 ***)local_res18[3][4], pppuVar9 == (undefined8 ***)0x0)) {
        pppuVar9 = (undefined8 ***)Scaleform::Log::GetGlobalLog();
      }
      lStack_80 = param_1[2];
      local_98 = pppuVar9;
      ppuStack_90 = local_e8;
      local_88 = local_110;
      FUN_1432c2fb0(&local_110,(local_118 & 0xfffffffffffffffc) + 0xc);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_b0,&local_110);
      uVar12 = (ulonglong)local_110 & 0xfffffffffffffffc;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar12 + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar12);
      }
      pRVar16 = local_108;
      if (plVar4 != (longlong *)0x0) {
        lVar8 = (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                          (*(longlong **)(param_1[2] + 0x48),0x68);
        if ((lVar8 != 0) && (lVar8 = FUN_1432ef310(lVar8,plVar4,1), lVar8 != 0)) {
          in_stack_fffffffffffffed8 = (undefined8 *****)local_res18;
          plVar10 = (longlong *)
                    FUN_1432e4290(param_1[2],lVar8,local_res10,
                                  (local_118 & 0xfffffffffffffffc) + 0xc,local_res18);
          FUN_1432de450(lVar8);
        }
        (**(code **)(*plVar4 + 0x10))();
        pRVar16 = local_108;
        goto LAB_14343ab95;
      }
      if (local_108 != (RefCountNTSImpl *)0x0) {
        FUN_1434a1650(local_108 + 0x18,"ImageCreator::LoadProtocolImage failed to load image \"%s\""
                      ,(local_118 & 0xfffffffffffffffc) + 0xc);
      }
    }
LAB_14343ad1f:
    plVar4 = local_f8;
    local_108 = this_00;
    if (*(int *)(param_2 + 0x28) == -1) {
      if (this_00 == (RefCountNTSImpl *)0x0) {
        local_110._0_4_ = 0x10001;
        uVar7 = (**(code **)(*local_f8 + 0x218))(local_f8);
        FUN_143310f20(uVar7,local_60,&local_110);
        in_stack_fffffffffffffed8 = (undefined8 *****)&local_110;
        local_110 = (undefined8 ***)CONCAT44(local_110._4_4_,uVar15);
        this_00 = (RefCountNTSImpl *)
                  (**(code **)(*(longlong *)param_1[6] + 0x20))
                            ((longlong *)param_1[6],param_1[2],local_60,plVar4,
                             in_stack_fffffffffffffed8,3);
        if (this_00 == (RefCountNTSImpl *)0x0) goto LAB_14343ae34;
      }
      Scaleform::GFx::InteractiveObject::AddToPlayList(this_00);
      *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
      *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
      if (((byte)this[0x88] >> 1 & 1) == 0) {
        lVar8 = *(longlong *)this_00;
        uVar7 = Scaleform::GFx::DisplayObject::GetName(this,&local_e8);
        (**(code **)(lVar8 + 1000))(this_00,uVar7);
        pppuVar9 = (undefined8 ***)(local_e8 + 3);
        *(int *)pppuVar9 = *(int *)pppuVar9 + -1;
        if (*(int *)pppuVar9 == 0) {
          FUN_14335f920();
        }
      }
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)
                 (**(code **)(*(longlong *)
                               ((longlong)plVar4 + (ulonglong)*(byte *)((longlong)plVar4 + 0x6d) * 4
                               ) + 8))
                           ((longlong)plVar4 + (ulonglong)*(byte *)((longlong)plVar4 + 0x6d) * 4);
      }
      (**(code **)(*plVar4 + 0xe0))(plVar4,this,this_00);
      *(undefined8 *)(this + 0x38) = 0;
      (**(code **)(*param_1 + 0x140))(param_1,this_00);
      FUN_143384e20();
LAB_14343ae34:
      uVar3 = 0;
      uVar12 = *(ulonglong *)(param_1[2] + 0x68);
      if (uVar12 != 0) {
        lVar8 = *(longlong *)(param_1[2] + 0x60);
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 0x10) == 0) {
            lVar8 = *(longlong *)(lVar8 + 8 + (ulonglong)uVar3 * 0x10);
            goto LAB_14343ae69;
          }
          uVar3 = uVar3 + 1;
          uVar6 = (ulonglong)uVar3;
        } while (uVar6 < uVar12);
      }
      lVar8 = 0;
LAB_14343ae69:
      uVar7 = (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 0xf0))();
      plVar4 = (longlong *)FUN_143412120(param_2 + 0x38,uVar7);
      uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
      if (local_108 == (RefCountNTSImpl *)0x0) {
        if (plVar4 != (longlong *)0x0) {
          lVar8 = FUN_1432c3580(&local_118);
          pcVar14 = "URLNotFound";
          if (lVar8 == 0) {
            pcVar14 = "Unknown error";
          }
          (**(code **)(*plVar4 + 0x60))
                    (plVar4,uVar7,this_00,pcVar14,
                     (ulonglong)in_stack_fffffffffffffed8 & 0xffffffff00000000);
        }
      }
      else {
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x48))(plVar4,uVar7,this_00);
          (**(code **)(*plVar4 + 0x68))
                    (plVar4,uVar7,this_00,local_res20,CONCAT44(uVar15,local_res20));
          (**(code **)(*plVar4 + 0x50))(plVar4,uVar7,this_00,0);
        }
        (**(code **)(*(longlong *)this_00 + 0x388))(this_00);
        (**(code **)(*param_1 + 0x38))(param_1);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x58))(plVar4,uVar7,this_00);
        }
      }
      lVar8 = FUN_1432c3580(&local_118);
      if (lVar8 == 0) {
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        this = (RefCountNTSImpl *)0x0;
        FUN_143410760(param_1[7] + 0x30,*(undefined8 *)(param_1[2] + 0x48));
      }
    }
    else {
      if (this_00 != (RefCountNTSImpl *)0x0) {
        FUN_143426a80(this_00 + (ulonglong)(byte)this_00[0x6d] * 4);
        FUN_1432e3300(param_1[2],*(undefined4 *)(param_2 + 0x28),this_00);
        *(uint *)(param_1[2] + 0x52f0) = *(uint *)(param_1[2] + 0x52f0) & 0xfffffeff;
        (**(code **)(*param_1 + 0x140))(param_1,this_00);
      }
      uVar6 = 0;
      uVar12 = *(ulonglong *)(param_1[2] + 0x68);
      if (uVar12 != 0) {
        lVar8 = *(longlong *)(param_1[2] + 0x60);
        do {
          if (*(int *)(lVar8 + uVar6 * 0x10) == 0) {
            if (*(longlong *)(lVar8 + 8 + uVar6 * 0x10) != 0) goto LAB_14343ae34;
            break;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < uVar12);
      }
      if (pRVar16 == (RefCountNTSImpl *)0x0) goto LAB_14343ae34;
      FUN_1434a1650(pRVar16 + 0x18,"_level0 unloaded - no further playback possible");
    }
    if (this_00 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_1432de450(plVar10);
  }
LAB_14343b043:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
LAB_14343b050:
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_f0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_f0 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_118 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_118 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_100 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_100 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14343b110 FUN_14343b110 body=170 status=ok
// SIG undefined FUN_14343b110(void)

void FUN_14343b110(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  lVar3 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) +
                         0x618),param_3);
  local_28[0] = 5;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  local_20 = lVar3;
  FUN_14343bb60(param_1,lVar2,local_28,param_2);
  FUN_143411150(local_28);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14343b1c0 FUN_14343b1c0 body=219 status=ok
// SIG undefined FUN_14343b1c0(void)

void FUN_14343b1c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  lVar3 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) +
                         0x618),param_3,0xffffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
              (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x87;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  local_28[0] = 5;
  local_20 = lVar3;
  FUN_14343bb60(param_1,lVar2,local_28,param_2);
  FUN_143411150(local_28);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14343b2b0 FUN_14343b2b0 body=1236 status=ok
// SIG undefined FUN_14343b2b0(void)

void FUN_14343b2b0(longlong param_1,longlong param_2,char *param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong local_res18 [2];
  byte local_168 [32];
  longlong local_148;
  char acStack_139 [257];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))
                    (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
  if (param_3 == (char *)0x0) {
    lVar7 = FUN_14341a5c0(lVar3,*(undefined8 *)(*(longlong *)(lVar3 + 0xe8) + 0x60),
                          *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                          0x140,0,0xffffffff);
    uVar8 = FUN_143410c00(local_168,lVar7);
    FUN_14343bb60(param_1,lVar3,uVar8,param_2);
    if (4 < local_168[0]) {
      FUN_143411150(local_168);
    }
  }
  else {
    if ((param_5 != 0) && (-1 < (int)(param_5 - 1))) {
      param_4 = (longlong)(int)(param_5 - 1) * 0x30 + param_4;
      uVar9 = (ulonglong)param_5;
      do {
        local_168[0] = 0;
        FUN_14343b9a0(param_1,param_4,local_168);
        *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
        if (*(ulonglong *)(lVar3 + 0x18) <= *(ulonglong *)(lVar3 + 8)) {
          FUN_1434a29d0(lVar3 + 8);
        }
        if (*(longlong *)(lVar3 + 8) != 0) {
          FUN_143410ec0(*(longlong *)(lVar3 + 8),local_168);
        }
        if (4 < local_168[0]) {
          FUN_143411150(local_168);
        }
        param_4 = param_4 + -0x30;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pcVar4 = strchr(param_3,0x2e);
    if (pcVar4 == (char *)0x0) {
      local_res18[0] =
           FUN_143360a60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                          0x618),param_3);
      *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
      lVar7 = FUN_14341a5c0(lVar3,*(undefined8 *)(*(longlong *)(lVar3 + 0xe8) + 0x60),local_res18,
                            param_5,0xffffffff);
      piVar1 = (int *)(local_res18[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      lVar7 = *(longlong *)(lVar3 + 0xe8);
      lVar6 = *(longlong *)(lVar7 + 0x60);
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
      }
      lVar7 = *(longlong *)(lVar7 + 0x60);
      do {
        pcVar5 = strchr(param_3,0x2e);
        lVar6 = lVar7;
        pcVar4 = param_3;
        if (pcVar5 == (char *)0x0) break;
        pcVar10 = pcVar5 + (1 - (longlong)param_3);
        pcVar4 = pcVar5 + 1;
        if ((char *)0x100 < pcVar10) {
          pcVar10 = (char *)0x100;
        }
        _guard_xfg_dispatch_icall_nop(acStack_139 + 1,param_3,(size_t)(pcVar10 + -1));
        lVar6 = *(longlong *)(lVar3 + 0xe8);
        acStack_139[(longlong)pcVar10] = '\0';
        local_168[0] = 0;
        local_res18[0] =
             FUN_143360a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar6 + 0x28) + 0x18) + 0x618),
                           acStack_139 + 1);
        *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
        cVar2 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x58))
                          ((longlong *)(lVar7 + 0x20),lVar3 + 0xe8,local_res18,local_168);
        if (cVar2 == '\0') {
          if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
            (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                      (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
            *(undefined8 *)(param_2 + 0x10) = 0;
          }
          *(undefined4 *)(param_2 + 0x18) = 0;
          piVar1 = (int *)(local_res18[0] + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (4 < local_168[0]) {
            FUN_143411150(local_168);
          }
          if (lVar7 == 0) {
            return;
          }
          if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) == 0) {
            return;
          }
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          goto LAB_14343b764;
        }
        lVar6 = FUN_143412120(local_168,0);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0x18) = (*(int *)(lVar6 + 0x18) + 1U & 0x8fffffff) + 1 & 0x8fffffff;
        }
        if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
          FUN_1434a2b80(lVar7);
        }
        piVar1 = (int *)(local_res18[0] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
          FUN_1434a2b80(lVar6);
        }
        if (4 < local_168[0]) {
          FUN_143411150(local_168);
        }
        lVar7 = lVar6;
        param_3 = pcVar4;
      } while (pcVar4 != (char *)0x0);
      local_148 = FUN_143360a60(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) +
                                 0x618),pcVar4);
      *(int *)(local_148 + 0x18) = *(int *)(local_148 + 0x18) + 1;
      lVar7 = FUN_14341a5c0(lVar3,lVar6,&local_148,param_5,0xffffffff);
      piVar1 = (int *)(local_148 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
      }
    }
    if (lVar7 == 0) {
      if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                  (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    else {
      uVar8 = FUN_143410c00(local_168,lVar7);
      FUN_14343bb60(param_1,lVar3,uVar8,param_2);
      if (4 < local_168[0]) {
        FUN_143411150(local_168);
      }
    }
    for (; param_5 != 0; param_5 = param_5 - 1) {
      if (4 < **(byte **)(lVar3 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + -0x20;
      if (*(ulonglong *)(lVar3 + 8) < *(ulonglong *)(lVar3 + 0x10)) {
        FUN_1434a25c0(lVar3 + 8);
      }
    }
  }
  if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
LAB_14343b764:
    FUN_1434a2b80(lVar7);
  }
  return;
}



// FUNCTION 14343b790 FUN_14343b790 body=202 status=ok
// SIG undefined FUN_14343b790(void)

void FUN_14343b790(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte local_28 [32];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 0xf0))
                    (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  lVar2 = FUN_14341a5c0(lVar1,*(undefined8 *)(*(longlong *)(lVar1 + 0xe8) + 0x60),
                        *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xe8) + 0x28) + 0x18) +
                        0x148,0,0xffffffff);
  FUN_143410c00(local_28,lVar2);
  FUN_14343bb60(param_1,lVar1,local_28,param_2);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return;
}



// FUNCTION 14343b860 FUN_14343b860 body=310 status=ok
// SIG undefined FUN_14343b860(void)

void FUN_14343b860(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0xf0))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  local_38[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0xe8) + 0x30);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1434973b0(lVar3,lVar2 + 0xe8,param_3,param_4);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
  }
  FUN_143411150(local_38);
  local_38[0] = 8;
  local_20 = 0;
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
  }
  local_28 = 0;
  local_30 = lVar3;
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  FUN_14343bb60(param_1,lVar2,local_38,param_2);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  FUN_143411150(local_38);
  return;
}



// FUNCTION 14343b9a0 FUN_14343b9a0 body=388 status=ok
// SIG undefined FUN_14343b9a0(void)

void FUN_14343b9a0(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  switch(uVar2 & 0x8f) {
  case 0:
    FUN_143411150(param_3);
    *param_3 = 0;
    return;
  case 1:
    FUN_143411150(param_3);
    *param_3 = 1;
    return;
  case 2:
    bVar1 = *(byte *)(param_2 + 0x20);
    FUN_143411150(param_3);
    param_3[8] = bVar1;
    *param_3 = 2;
    return;
  case 3:
    FUN_1434a47f0(param_3,*(undefined4 *)(param_2 + 0x20));
    return;
  case 4:
    FUN_1434a47f0(param_3,*(undefined4 *)(param_2 + 0x20));
    return;
  case 5:
    FUN_1434a4b40(param_3,*(undefined8 *)(param_2 + 0x20));
    return;
  case 6:
    if ((uVar2 >> 6 & 1) == 0) {
      lVar4 = FUN_143360a60(*(undefined8 *)(param_1 + 0x618),*(undefined8 *)(param_2 + 0x20));
LAB_14343bab4:
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x20);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    }
    break;
  case 7:
    if ((uVar2 >> 6 & 1) == 0) {
      lVar4 = FUN_143360fd0(*(undefined8 *)(param_1 + 0x618),*(undefined8 *)(param_2 + 0x20),
                            0xffffffffffffffff);
      goto LAB_14343bab4;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + -8);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    break;
  case 8:
  case 9:
    lVar4 = *(longlong *)(param_2 + 0x20) + -0x20;
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar4 = 0;
    }
    FUN_143412aa0(param_3,lVar4);
    return;
  case 10:
    Scaleform::GFx::AS2::Value::SetAsCharacterHandle(param_3,*(undefined8 *)(param_2 + 0x20));
  default:
    goto switchD_14343b9d7_default;
  }
  if (4 < *param_3) {
    FUN_143411150(param_3);
  }
  *param_3 = 5;
  *(longlong *)(param_3 + 8) = lVar4;
  iVar3 = *(int *)(lVar4 + 0x18);
  *(int *)(lVar4 + 0x18) = iVar3;
  if (iVar3 == 0) {
    FUN_14335f920(lVar4);
    return;
  }
switchD_14343b9d7_default:
  return;
}



// FUNCTION 14343bb60 FUN_14343bb60 body=774 status=ok
// SIG undefined FUN_14343bb60(void)

void FUN_14343bb60(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  RefCountImpl *this;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_res20;
  
  this = (RefCountImpl *)0x0;
  uVar2 = *(uint *)(param_4 + 0x18);
  uVar10 = 8;
  uVar9 = 0;
  if ((char)uVar2 < '\0') {
    uVar9 = uVar2 & 0xf;
  }
  else {
    switch(*param_3) {
    case 0:
      break;
    case 1:
      uVar9 = 1;
      break;
    case 2:
      uVar9 = 2;
      break;
    case 3:
    case 4:
      uVar9 = 5;
      break;
    default:
      uVar9 = 6;
      break;
    case 6:
    case 8:
      uVar9 = uVar10;
      break;
    case 7:
      uVar9 = 10;
    }
  }
  if ((uVar2 >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_4 + 0x10) + 0x10))
              (*(longlong **)(param_4 + 0x10),param_4,*(undefined8 *)(param_4 + 0x20));
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  switch(uVar9) {
  case 0:
  case 1:
    *(uint *)(param_4 + 0x18) = uVar9;
    break;
  case 2:
    *(undefined4 *)(param_4 + 0x18) = 2;
    uVar4 = FUN_143411fd0(param_3,param_2);
    *(undefined1 *)(param_4 + 0x20) = uVar4;
    break;
  case 3:
    *(undefined4 *)(param_4 + 0x18) = 3;
    dVar11 = (double)FUN_143411a90(param_3,param_2);
    *(int *)(param_4 + 0x20) = (int)dVar11;
    break;
  case 4:
    *(undefined4 *)(param_4 + 0x18) = 4;
    dVar11 = (double)FUN_143411a90(param_3,param_2);
    *(int *)(param_4 + 0x20) = (int)(longlong)dVar11;
    break;
  case 5:
    *(undefined4 *)(param_4 + 0x18) = 5;
    uVar12 = FUN_143411a90(param_3,param_2);
    *(undefined8 *)(param_4 + 0x20) = uVar12;
    break;
  case 6:
    FUN_143411540(param_3,&local_res20,param_2,0xffffffff,0);
    *(longlong *)(param_4 + 0x20) = local_res20;
    *(undefined4 *)(param_4 + 0x18) = 0x46;
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar8 + 8))(plVar8,param_4,local_res20);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res20);
    }
    break;
  case 7:
    FUN_143411540(param_3,&local_res20,param_2,0xffffffff,0);
    lVar7 = local_res20;
    iVar5 = FUN_14335fa60(&local_res20);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,(ulonglong)(iVar5 + 1U) * 2 + 0x1f,0);
    *(undefined4 *)(param_4 + 0x18) = 0x47;
    if (lVar6 != 0) {
      this = (RefCountImpl *)FUN_143497440(lVar6,lVar7,iVar5 + 1U);
    }
    *(RefCountImpl **)(param_4 + 0x20) = this + 0x18;
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar8 + 8))(plVar8,param_4);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    break;
  case 8:
    plVar8 = (longlong *)FUN_1434123a0(param_3,param_2);
    iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (iVar5 - 6U < 0x27) {
      lVar7 = Scaleform::GFx::AS2::ObjectInterface::ToASObject(plVar8);
      iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20);
      if (iVar5 == 7) {
        uVar10 = 9;
      }
    }
    *(longlong **)(param_4 + 0x20) = plVar8;
    *(uint *)(param_4 + 0x18) = uVar10 | 0x40;
    goto LAB_14343be2c;
  case 10:
    lVar7 = FUN_1434123a0(param_3,param_2);
    if (lVar7 == 0) {
      *(undefined4 *)(param_4 + 0x18) = 0;
      return;
    }
    lVar7 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(lVar7);
    *(undefined4 *)(param_4 + 0x18) = 0x4a;
    plVar8 = *(longlong **)(lVar7 + 0x70);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_14336c170(lVar7);
    }
    *(longlong **)(param_4 + 0x20) = plVar8;
LAB_14343be2c:
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    (**(code **)(*plVar3 + 8))(plVar3,param_4,plVar8);
  }
  return;
}



// FUNCTION 14343bec0 FUN_14343bec0 body=214 status=ok
// SIG undefined FUN_14343bec0(void)

undefined8
FUN_14343bec0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (param_5 == '\0') {
    iVar1 = (**(code **)(*param_4 + 0x10))();
    if (iVar1 - 6U < 0x27) {
      plVar3 = param_4 + -4;
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    iVar1 = (**(code **)(plVar3[4] + 0x10))(plVar3 + 4);
    uVar4 = 8;
    if (iVar1 == 7) {
      uVar4 = 9;
    }
  }
  else {
    lVar2 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                      (param_4,*(undefined8 *)(param_1 + 0x10));
    if ((lVar2 == 0) || (uVar4 = 10, (*(ushort *)(lVar2 + 0x6a) & 0x480) == 0)) {
      return 0;
    }
  }
  if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
              (*(longlong **)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(longlong **)(param_2 + 0x20) = param_4;
  *(uint *)(param_2 + 0x18) = uVar4 | 0x40;
  *(longlong **)(param_2 + 0x10) = param_3;
  (**(code **)(*param_3 + 8))(param_3,param_2,param_4);
  return 1;
}



// FUNCTION 14343bfa0 FUN_14343bfa0 body=108 status=ok
// SIG undefined FUN_14343bfa0(void)

void FUN_14343bfa0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_20 = param_1 + 0x80;
  local_28[0] = 0;
  local_10 = 0;
  local_18 = 0;
  lVar1 = FUN_1434375b0(local_28);
  while (lVar1 != 0) {
    FUN_143437000(lVar1,param_1);
    lVar1 = FUN_1434375b0(local_28);
  }
  if (local_18 == 0) {
    return;
  }
  FUN_143437390(local_20);
  return;
}



// FUNCTION 14343c020 FUN_14343c020 body=121 status=ok
// SIG undefined FUN_14343c020(void)

void FUN_14343c020(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 local_38 [2];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  local_30 = param_1 + 0x80;
  local_38[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = param_2;
  lVar1 = FUN_1434376b0(local_38);
  while (lVar1 != 0) {
    FUN_143437000(lVar1,param_1);
    lVar1 = FUN_1434376b0(local_38);
  }
  if (local_28 != 0) {
    FUN_143437390(local_30);
    return;
  }
  return;
}



// FUNCTION 14343c0a0 FUN_14343c0a0 body=615 status=ok
// SIG undefined FUN_14343c0a0(void)

void FUN_14343c0a0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  local_38 = 8;
  local_res8 = *(undefined8 **)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x138);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  local_48 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x138);
  *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
  local_40 = lVar2;
  cVar5 = FUN_14341a820(&local_40,param_2,&local_res8,&local_48);
  lVar4 = local_48;
  if (cVar5 == '\0') {
    if (*(int *)(local_48 + 0x20) == 0) goto LAB_14343c2cb;
    puVar7 = *(undefined8 **)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x348);
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (4 < *(uint *)(local_res8 + 4)) {
      if ((*(int *)*local_res8 == 0x6f6f725f) && ((char)((int *)*local_res8)[1] == 't')) {
        uVar6 = FUN_14335fa60(&local_res8);
        local_48 = FUN_14335fd10(&local_res8,5,uVar6);
        *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
        puVar7 = (undefined8 *)
                 Scaleform::GFx::ASString::operator+
                           (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x348,&local_40,
                            &local_48);
        puVar7 = (undefined8 *)*puVar7;
        *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        local_res8 = puVar7;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        piVar1 = (int *)(local_48 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if ((*(int *)*local_res8 == 0x76656c5f) &&
         (puVar7 = local_res8, (short)((int *)*local_res8)[1] == 0x6c65)) goto LAB_14343c265;
    }
    puVar7 = (undefined8 *)
             Scaleform::GFx::ASString::operator+
                       (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x350,&local_40,
                        &local_res8);
    puVar7 = (undefined8 *)*puVar7;
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      local_res8 = puVar7;
      FUN_14335f920();
      puVar7 = local_res8;
    }
  }
LAB_14343c265:
  local_res8 = puVar7;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_145b0ab20;
    puVar7[1] = lVar4;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_145b0c660;
    *(bool *)(puVar7 + 3) = param_4 == 2;
    FUN_143410ec0(puVar7 + 4,param_3);
    FUN_1432e77e0(*(undefined8 *)(param_1 + 0x10),&local_res8,puVar7);
  }
LAB_14343c2cb:
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14343c310 FUN_14343c310 body=467 status=ok
// SIG undefined FUN_14343c310(void)

void FUN_14343c310(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (lVar1 == 0) {
    lVar1 = FUN_14336c170(param_2);
  }
  plVar6 = (longlong *)(lVar1 + 0x18);
  local_res18 = plVar6;
  local_res10 = (longlong *)
                (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                          (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x4c60);
  lVar1 = *plVar4;
  if (((lVar1 != 0) &&
      (lVar2 = FUN_1432ef240(plVar4,plVar6,
                             (ulonglong)*(uint *)(*plVar6 + 0x1c) & *(ulonglong *)(lVar1 + 8)),
      plVar4 = local_res10, -1 < lVar2)) && (lVar1 = lVar1 + (lVar2 * 3 + 3) * 8, lVar1 != 0)) {
    plVar5 = *(longlong **)(lVar1 + 8);
    plVar7 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
    local_res20 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      do {
        lVar1 = plVar4[1];
        local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
        uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4);
        (**(code **)(lVar1 + 0x18))(plVar4 + 1,uVar3,plVar5 + 1,plVar5 + 4,&local_res10);
        plVar6 = (longlong *)plVar5[2];
        if ((char)plVar5[3] == '\0') {
          (**(code **)*plVar5)(plVar5,1);
        }
        else if (plVar7 == (longlong *)0x0) {
          plVar5[2] = 0;
          plVar7 = plVar5;
          plVar8 = plVar5;
        }
        else {
          plVar8[2] = (longlong)plVar5;
          plVar5[2] = 0;
          plVar8 = plVar5;
        }
        plVar5 = plVar6;
      } while (plVar6 != (longlong *)0x0);
      plVar6 = local_res18;
      if (plVar7 != (longlong *)0x0) {
        if (plVar7 == local_res20) {
          return;
        }
        local_res10 = plVar7;
        FUN_1432f2c70(*(longlong *)(param_1 + 0x10) + 0x4c60,local_res18,&local_res10);
        return;
      }
    }
    FUN_143490b30(*(longlong *)(param_1 + 0x10) + 0x4c60,plVar6);
  }
  return;
}



// FUNCTION 14343c4f0 FUN_14343c4f0 body=148 status=ok
// SIG undefined FUN_14343c4f0(void)

void FUN_14343c4f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                     (*(longlong **)(param_2 + 0x48),0x78);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_145b0b0e8;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    FUN_14341c8a0(puVar1,param_2);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x50) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x50));
  }
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  return;
}



// FUNCTION 14343c590 FUN_14343c590 body=472 status=ok
// SIG undefined FUN_14343c590(void)

bool FUN_14343c590(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  undefined4 local_res8 [2];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1[2] + 0x48) + 0x50))
                     (*(longlong **)(param_1[2] + 0x48),0x78);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = param_1[2];
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_145b0b0e8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[0xc] = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar2[0xe] = 0;
    FUN_14341c8a0(puVar2,lVar4);
    puVar3 = puVar2;
  }
  if ((RefCountNTSImpl *)param_1[10] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[10]);
  }
  param_1[10] = (longlong)puVar3;
  lVar4 = param_1[2];
  plVar1 = *(longlong **)(lVar4 + 0x5350);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xa0,0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar3,2);
    *puVar3 = &PTR_FUN_145af8f68;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
  }
  lVar4 = FUN_1432ceba0(lVar4 + 0x5350,puVar3);
  if (param_1[5] != 0) {
    plVar1 = (longlong *)(param_1[5] + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  param_1[5] = lVar4;
  FUN_143364100(*(undefined8 *)(param_1[2] + 0x90),0,lVar4);
  local_28 = 0;
  local_res8[0] = 0x40000;
  local_38 = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x18);
  local_30 = param_2;
  this = (RefCountNTSImpl *)
         (**(code **)(*(longlong *)param_1[3] + 0x20))
                   ((longlong *)param_1[3],param_1[2],&local_38,0,local_res8,3);
  FUN_143383050(this,1);
  if (this != (RefCountNTSImpl *)0x0) {
    FUN_143426a80(this + (ulonglong)(byte)this[0x6d] * 4,0);
    FUN_1432e3300(param_1[2],0,this);
    (**(code **)(*param_1 + 0x138))(param_1);
    (**(code **)(*param_1 + 0x140))(param_1,this);
    (**(code **)(*(longlong *)this + 0x138))(this,0x404b800000000000);
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return this != (RefCountNTSImpl *)0x0;
}



// FUNCTION 14343c770 FUN_14343c770 body=194 status=ok
// SIG undefined FUN_14343c770(void)

void FUN_14343c770(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (lVar2 != 0) {
    lVar3 = lVar2 << 4;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) + -8 + lVar3);
      FUN_1433d4de0(lVar1 + 0xd8,lVar1);
      FSettingsModule::ShutdownModule(lVar1);
      lVar3 = lVar3 + -0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (lVar2 != 0) {
    lVar3 = lVar2 << 4;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) + -8 + lVar3)
                  + 0x1e0))();
      lVar3 = lVar3 + -0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x10) + 0x60;
  FUN_1432f2860(lVar2,lVar2,0);
  return;
}



// FUNCTION 14343c840 FUN_14343c840 body=108 status=ok
// SIG undefined FUN_14343c840(void)

void FUN_14343c840(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_145b0aac8;
    *(undefined4 *)(puVar1 + 3) = 1;
    puVar1[4] = param_3;
    *(undefined1 *)(puVar1 + 6) = param_4;
    puVar1[7] = 0;
    return;
  }
  return;
}



// FUNCTION 14343c8c0 FUN_14343c8c0 body=61 status=ok
// SIG undefined FUN_14343c8c0(void)

void FUN_14343c8c0(longlong param_1)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 8;
  local_18 = *(longlong *)(param_1 + 0x50);
  FUN_14348a760(local_18,&local_18,*(undefined8 *)(local_18 + 0x60));
  FUN_14348a8b0(*(longlong *)(param_1 + 0x50),&local_18,
                *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x60));
  return;
}



// FUNCTION 14343c960 FUN_14343c960 body=74 status=ok
// SIG undefined FUN_14343c960(void)

void FUN_14343c960(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x20);
  FUN_14340b9f0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (((*(byte *)(lVar1 + 0x68) & 1) == 0) && (*(longlong *)(lVar1 + 0x18) == 0)) {
    Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
    ClearAndRelease(lVar1 + 0x10);
  }
  *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(lVar1 + 0x90);
  *(undefined4 *)(lVar1 + 0x78) = 0;
  return;
}



// FUNCTION 14343c9b0 FUN_14343c9b0 body=1546 status=ok
// SIG undefined FUN_14343c9b0(void)

void FUN_14343c9b0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar10;
  RefCountNTSImpl *pRVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  byte local_5c;
  RefCountNTSImpl local_58;
  undefined1 local_57;
  undefined2 local_56;
  
  uVar12 = 0;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar3 != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    do {
      if (*(int *)(lVar8 + uVar12 * 0x10) == 0) {
        lVar8 = *(longlong *)(lVar8 + 8 + uVar12 * 0x10);
        goto LAB_14343c9f9;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while (uVar12 < uVar3);
  }
  lVar8 = 0;
LAB_14343c9f9:
  lVar8 = (**(code **)(*(longlong *)(lVar8 + (ulonglong)*(byte *)(lVar8 + 0x6d) * 4) + 0xf0))();
  bVar6 = 1;
  if (*(char *)(*(longlong *)(lVar8 + 0xe8) + 0x68) == '\x01') {
    bVar6 = 0x10;
  }
  if (param_2 < 6) {
    puVar15 = (undefined8 *)(((ulonglong)param_2 + 0x6d) * 0x50 + *(longlong *)(param_1 + 0x10));
  }
  else {
    puVar15 = (undefined8 *)0x0;
  }
  this = (RefCountNTSImpl *)0x0;
  piVar4 = (int *)puVar15[2];
  if (piVar4 != (int *)0x0) {
    pRVar11 = *(RefCountNTSImpl **)(piVar4 + 2);
    if (pRVar11 == (RefCountNTSImpl *)0x0) {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar15[2] = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(pRVar11 + 8) != 0) {
      *(int *)(pRVar11 + 8) = *(int *)(pRVar11 + 8) + 1;
      *(int *)(pRVar11 + 8) = *(int *)(pRVar11 + 8) + 1;
      this = pRVar11;
    }
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  pRVar11 = (RefCountNTSImpl *)0x0;
  piVar4 = (int *)*puVar15;
  if (piVar4 != (int *)0x0) {
    pRVar10 = *(RefCountNTSImpl **)(piVar4 + 2);
    if (pRVar10 == (RefCountNTSImpl *)0x0) {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar15 = 0;
      pRVar11 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(pRVar10 + 8) != 0) {
      *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
      *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
      pRVar11 = pRVar10;
    }
  }
  if (pRVar11 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar11);
  }
  if ((this != (RefCountNTSImpl *)0x0) && (((byte)this[0x6a] >> 4 & 1) != 0)) {
    Scaleform::RefCountNTSImpl::Release(this);
    this = (RefCountNTSImpl *)0x0;
  }
  if ((pRVar11 != (RefCountNTSImpl *)0x0) && (((byte)pRVar11[0x6a] >> 4 & 1) != 0)) {
    Scaleform::RefCountNTSImpl::Release(pRVar11);
    pRVar11 = (RefCountNTSImpl *)0x0;
  }
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  uVar1 = *(uint *)(puVar15 + 6);
  bVar13 = 0;
  uVar2 = *(uint *)((longlong)puVar15 + 0x34);
  bVar14 = *(byte *)((longlong)puVar15 + 0x4c) >> 2 & 1;
  bVar5 = false;
  pRVar10 = this;
  do {
    uVar16 = 1 << (bVar13 & 0x1f);
    uVar7 = (undefined1)param_2;
    if (((uVar1 ^ uVar2) >> (bVar13 & 0x1f) & 1) == 0) {
      if ((*(uint *)(puVar15 + 6) & uVar16) != 0) {
        if ((*(byte *)((longlong)puVar15 + 0x4c) & 4) == 0) {
          if (pRVar11 == this) {
            if (this != (RefCountNTSImpl *)0x0) {
              local_58 = this[0xc0];
              uStack_64 = 0;
              uStack_60 = 0;
              local_56 = 0;
              this[0xc0] = (RefCountNTSImpl)((char)local_58 + '\x01');
              local_68 = 0x8000;
              if (bVar13 != 0) {
                local_68 = 0x400000;
              }
              local_5c = bVar13;
              local_57 = uVar7;
              (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
            }
            bVar14 = 1;
          }
        }
        else if (pRVar11 != this) {
          if (this != (RefCountNTSImpl *)0x0) {
            if (this[0xc0] == (RefCountNTSImpl)0x0) {
              local_58 = (RefCountNTSImpl)0xff;
            }
            else {
              local_58 = (RefCountNTSImpl)((char)this[0xc0] + -1);
              this[0xc0] = local_58;
            }
            uStack_64 = 0;
            uStack_60 = 0;
            local_56 = 0;
            local_68 = 0x10000;
            if (bVar13 != 0) {
              local_68 = 0x800000;
            }
            local_5c = bVar13;
            local_57 = uVar7;
            (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
          }
          bVar14 = 0;
        }
        if ((((this == (RefCountNTSImpl *)0x0) || ((*(uint *)(this + 0xb8) >> 0xe & 1) != 0)) &&
            (pRVar11 != (RefCountNTSImpl *)0x0)) &&
           ((pRVar11 != this && ((*(uint *)(pRVar11 + 0xb8) >> 0xe & 1) != 0)))) {
          *(int *)(pRVar11 + 8) = *(int *)(pRVar11 + 8) + 1;
          if (pRVar10 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRVar10);
          }
          local_58 = pRVar11[0xc0];
          pRVar11[0xc0] = (RefCountNTSImpl)((char)local_58 + '\x01');
          local_68 = 0x8000;
          if (bVar13 != 0) {
            local_68 = 0x400000;
          }
          uStack_64 = 0;
          uStack_60 = 0;
          local_56 = 0;
          local_5c = bVar13;
          local_57 = uVar7;
          (**(code **)(*(longlong *)pRVar11 + 0x328))(pRVar11,&local_68);
          bVar14 = 1;
          pRVar10 = pRVar11;
        }
      }
    }
    else {
      if ((*(uint *)((longlong)puVar15 + 0x34) & uVar16) != 0) {
        if (((*(uint *)(puVar15 + 6) & uVar16) == 0) && (this != (RefCountNTSImpl *)0x0)) {
          if ((*(byte *)((longlong)puVar15 + 0x4c) & 4) == 0) {
            if ((*(uint *)(this + 0xb8) >> 0xe & 1) == 0) {
              uStack_64 = 0;
              uStack_60 = 0;
              local_56 = 0;
              local_68 = 0x1000;
              if (bVar13 != 0) {
                local_68 = 0x200000;
              }
              local_58 = (RefCountNTSImpl)0x0;
              local_5c = bVar13;
              local_57 = uVar7;
              (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
            }
            bVar5 = true;
          }
          else {
            uStack_64 = 0;
            uStack_60 = 0;
            local_56 = 0;
            local_68 = 0x800;
            if (bVar13 != 0) {
              local_68 = 0x100000;
            }
            local_58 = (RefCountNTSImpl)0x0;
            local_5c = bVar13;
            local_57 = uVar7;
            (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
          }
        }
        if ((*(uint *)((longlong)puVar15 + 0x34) & uVar16) != 0) goto LAB_14343ccb6;
      }
      if ((*(uint *)(puVar15 + 6) & uVar16) != 0) {
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar11 + 8) = *(int *)(pRVar11 + 8) + 1;
        }
        if (pRVar10 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar10);
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          local_58 = (RefCountNTSImpl)0x0;
          local_68 = 0x400;
          if (bVar13 != 0) {
            local_68 = 0x80000;
          }
          uStack_64 = 0;
          uStack_60 = 0;
          local_56 = 0;
          local_5c = bVar13;
          local_57 = uVar7;
          (**(code **)(*(longlong *)pRVar11 + 0x328))(pRVar11,&local_68);
        }
        bVar14 = 1;
        pRVar10 = pRVar11;
      }
    }
LAB_14343ccb6:
    bVar13 = bVar13 + 1;
    if (bVar6 <= bVar13) {
      if (((*(byte *)((longlong)puVar15 + 0x34) & 3) == 0) && (pRVar11 != this)) {
        if ((!bVar5) && (this != (RefCountNTSImpl *)0x0)) {
          if (this[0xc0] == (RefCountNTSImpl)0x0) {
            local_58 = (RefCountNTSImpl)0xff;
          }
          else {
            local_58 = (RefCountNTSImpl)((char)this[0xc0] + -1);
            this[0xc0] = local_58;
          }
          local_68 = 0x4000;
          uStack_64 = 0;
          uStack_60 = 0;
          local_56 = 0;
          local_5c = 0;
          local_57 = uVar7;
          (**(code **)(*(longlong *)this + 0x328))(this,&local_68);
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar11 + 8) = *(int *)(pRVar11 + 8) + 1;
        }
        if (pRVar10 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar10);
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          local_58 = pRVar11[0xc0];
          local_68 = 0x2000;
          uStack_64 = 0;
          uStack_60 = 0;
          local_56 = 0;
          pRVar11[0xc0] = (RefCountNTSImpl)((char)local_58 + '\x01');
          local_5c = 0;
          local_57 = uVar7;
          (**(code **)(*(longlong *)pRVar11 + 0x328))(pRVar11,&local_68);
        }
        bVar14 = 1;
        pRVar10 = pRVar11;
      }
      *(byte *)((longlong)puVar15 + 0x4c) = *(byte *)((longlong)puVar15 + 0x4c) & 0xfb;
      *(byte *)((longlong)puVar15 + 0x4c) = *(byte *)((longlong)puVar15 + 0x4c) | bVar14 << 2;
      if (pRVar10 == (RefCountNTSImpl *)0x0) {
        piVar4 = (int *)puVar15[2];
        if ((piVar4 != (int *)0x0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        puVar15[2] = 0;
      }
      else {
        uVar9 = FUN_1432be180(pRVar10);
        piVar4 = (int *)puVar15[2];
        if ((piVar4 != (int *)0x0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        puVar15[2] = uVar9;
        Scaleform::RefCountNTSImpl::Release(pRVar10);
      }
      if (pRVar11 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar11);
      }
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      return;
    }
  } while( true );
}



// FUNCTION 14343d010 FUN_14343d010 body=547 status=ok
// SIG undefined FUN_14343d010(void)

ulonglong FUN_14343d010(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong *in_RAX;
  longlong *extraout_RAX;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_res8;
  RefCountImpl *local_48;
  byte local_40 [40];
  
  plVar10 = (longlong *)0x0;
  lVar6 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar6 + 0x68);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *(longlong *)(lVar6 + 0x60);
    in_RAX = plVar10;
    do {
      if (*(int *)(lVar3 + (longlong)in_RAX * 0x10) == 0) {
        in_RAX = (longlong *)((longlong)in_RAX * 0x10);
        if (*(longlong *)((longlong)in_RAX + lVar3 + 8) != 0) {
          if (param_2 != 0) {
            plVar9 = plVar10;
            plVar8 = plVar10;
            if (plVar2 == (longlong *)0x0) goto LAB_14343d118;
            goto LAB_14343d100;
          }
          in_RAX = (longlong *)Scaleform::GFx::StateBag::GetLog(lVar6 + 0x10,&local_48);
          lVar6 = *in_RAX;
          if (local_48 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_48);
            in_RAX = extraout_RAX;
          }
          if (lVar6 != 0) {
            puVar5 = (undefined8 *)
                     Scaleform::GFx::StateBag::GetLog
                               (*(longlong *)(param_1 + 0x10) + 0x10,&local_48);
            uVar7 = *puVar5;
            if (local_48 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(local_48);
            }
            in_RAX = (longlong *)
                     FUN_1432bbf90(uVar7,"NULL pathToVar passed to SetVariable/SetDouble()");
          }
        }
        break;
      }
      in_RAX = (longlong *)(ulonglong)((int)in_RAX + 1);
    } while (in_RAX < plVar2);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
  while (plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1), plVar8 < plVar2) {
LAB_14343d100:
    if (*(int *)(lVar3 + (longlong)plVar8 * 0x10) == 0) {
      plVar9 = *(longlong **)(lVar3 + 8 + (longlong)plVar8 * 0x10);
      break;
    }
  }
LAB_14343d118:
  lVar6 = (**(code **)(*(longlong *)
                        ((longlong)plVar9 + (ulonglong)*(byte *)((longlong)plVar9 + 0x6d) * 4) +
                      0xf0))();
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x618),
                             param_2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  local_40[0] = 0;
  FUN_14343b9a0(param_1,param_3,local_40);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    plVar9 = plVar10;
    do {
      if (*(int *)(lVar6 + (longlong)plVar9 * 0x10) == 0) {
        plVar10 = *(longlong **)(lVar6 + 8 + (longlong)plVar9 * 0x10);
        break;
      }
      plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1);
    } while (plVar9 < plVar2);
  }
  uVar7 = (**(code **)(*(longlong *)
                        ((longlong)plVar10 + (ulonglong)*(byte *)((longlong)plVar10 + 0x6d) * 4) +
                      0xf0))((longlong)plVar10 + (ulonglong)*(byte *)((longlong)plVar10 + 0x6d) * 4)
  ;
  bVar4 = FUN_143419290(uVar7,&local_res8,local_40,0,param_4 == 0);
  if (((bVar4 == 0) && (param_4 != 0)) || (param_4 == 2)) {
    FUN_14343c0a0(param_1,&local_res8,local_40,param_4);
  }
  if (4 < local_40[0]) {
    FUN_143411150(local_40);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)bVar4;
}



// FUNCTION 14343d240 FUN_14343d240 body=366 status=ok
// SIG undefined FUN_14343d240(void)

ulonglong FUN_14343d240(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_res8;
  byte local_28 [32];
  
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar2 != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = 0;
    do {
      if (*(int *)(lVar5 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if ((*(longlong *)(in_RAX + 8 + lVar5) != 0) && (param_2 != 0)) {
          uVar6 = 0;
          if (uVar2 == 0) goto LAB_14343d2d7;
          uVar4 = 0;
          goto LAB_14343d2c0;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar2);
  }
  return in_RAX & 0xffffffffffffff00;
  while( true ) {
    uVar6 = uVar6 + 1;
    uVar4 = (ulonglong)uVar6;
    if (uVar2 <= uVar4) break;
LAB_14343d2c0:
    if (*(int *)(lVar5 + uVar4 * 0x10) == 0) {
      lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar6 * 0x10);
      goto LAB_14343d2d9;
    }
  }
LAB_14343d2d7:
  lVar5 = 0;
LAB_14343d2d9:
  lVar5 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 0xf0))();
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) + 0x618),
                             param_3);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  local_28[0] = 0;
  cVar3 = FUN_1434175f0(lVar5,&local_res8,local_28,0,0,0,0);
  if (cVar3 != '\0') {
    FUN_14343bb60(param_1,lVar5,local_28,param_2);
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)(cVar3 != '\0');
}



// FUNCTION 14343d3c0 FUN_14343d3c0 body=1299 status=ok
// SIG undefined FUN_14343d3c0(void)

ulonglong FUN_14343d3c0(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,
                       double *param_5,uint param_6,int param_7)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong local_98;
  byte local_90 [32];
  byte local_70 [32];
  byte local_50 [8];
  double local_48;
  
  uVar14 = 0;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar2 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar14;
    do {
      if (*(int *)(lVar7 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar7) != 0) {
          uVar12 = uVar14;
          uVar11 = uVar14;
          if (uVar2 == 0) goto LAB_14343d46c;
          goto LAB_14343d453;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar2);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar11 = (ulonglong)((int)uVar11 + 1), uVar11 < uVar2) {
LAB_14343d453:
    if (*(int *)(lVar7 + uVar11 * 0x10) == 0) {
      uVar12 = *(ulonglong *)(lVar7 + 8 + uVar11 * 0x10);
      break;
    }
  }
LAB_14343d46c:
  lVar7 = (**(code **)(*(longlong *)(uVar12 + (ulonglong)*(byte *)(uVar12 + 0x6d) * 4) + 0xf0))();
  local_98 = FUN_143360a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18)
                            + 0x618),param_3);
  *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + 1;
  local_70[0] = 0;
  cVar4 = FUN_1434175f0(lVar7,&local_98,local_70,0,0,0,0);
  if ((((cVar4 == '\0') || (local_70[0] != 6)) ||
      (lVar7 = FUN_143412120(local_70,lVar7), lVar7 == 0)) ||
     (iVar6 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20), iVar6 != 7)) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar7 = (**(code **)(*plVar8 + 0x50))(plVar8,0x98,0);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      plVar8 = (longlong *)FUN_14349fd40(param_1,0);
      uVar10 = (**(code **)(*plVar8 + 0xf0))(plVar8);
      lVar7 = FUN_14345d8d0(lVar7,uVar10);
    }
  }
  else {
    *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
  }
  if (*(uint *)(lVar7 + 0x78) < param_4 + param_6) {
    FUN_14345e160(lVar7);
  }
  switch(param_2) {
  case 0:
    if (param_6 != 0) {
      do {
        local_48 = (double)CONCAT44(local_48._4_4_,*(float *)param_5);
        local_50[0] = 4;
        FUN_14345e250(lVar7,(int)uVar14 + param_4,local_50);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        param_5 = (double *)((longlong)param_5 + 4);
      } while (uVar13 < param_6);
    }
    break;
  case 1:
    if (param_6 != 0) {
      do {
        local_48 = *param_5;
        local_50[0] = 3;
        FUN_14345e250(lVar7,(int)uVar14 + param_4,local_50);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        param_5 = param_5 + 1;
      } while (uVar13 < param_6);
    }
    break;
  case 2:
    if (param_6 != 0) {
      do {
        local_48 = (double)*(float *)param_5;
        local_50[0] = 3;
        FUN_14345e250(lVar7,(int)uVar14 + param_4,local_50);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        param_5 = (double *)((longlong)param_5 + 4);
      } while (uVar13 < param_6);
    }
    break;
  case 3:
    if (param_6 != 0) {
      do {
        dVar9 = (double)FUN_143360a60(*(undefined8 *)(param_1 + 0x618),*param_5);
        local_50[0] = 5;
        *(int *)((longlong)dVar9 + 0x18) = *(int *)((longlong)dVar9 + 0x18) + 2;
        local_48 = dVar9;
        FUN_14345e250(lVar7,(int)uVar14 + param_4,local_50);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        piVar1 = (int *)((longlong)dVar9 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(dVar9);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        param_5 = param_5 + 1;
      } while (uVar13 < param_6);
    }
    break;
  case 4:
    if (param_6 != 0) {
      do {
        dVar9 = (double)FUN_143360fd0(*(undefined8 *)(param_1 + 0x618),*param_5,0xffffffffffffffff);
        local_50[0] = 5;
        *(int *)((longlong)dVar9 + 0x18) = *(int *)((longlong)dVar9 + 0x18) + 2;
        local_48 = dVar9;
        FUN_14345e250(lVar7,(int)uVar14 + param_4);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        piVar1 = (int *)((longlong)dVar9 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(dVar9);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        param_5 = param_5 + 1;
      } while (uVar13 < param_6);
    }
    break;
  case 5:
    if (param_6 != 0) {
      do {
        local_50[0] = 0;
        FUN_14343b9a0(param_1,param_5 + uVar14 * 6,local_50);
        FUN_14345e250(lVar7,(int)uVar14 + param_4,local_50);
        if (4 < local_50[0]) {
          FUN_143411150(local_50);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < param_6);
    }
  }
  uVar14 = 0;
  local_90[0] = 0;
  FUN_143412aa0(local_90,lVar7);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar12 = uVar14;
    do {
      if (*(int *)(lVar3 + uVar12 * 0x10) == 0) {
        uVar14 = *(ulonglong *)(lVar3 + 8 + uVar12 * 0x10);
        break;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while (uVar12 < uVar2);
  }
  uVar10 = (**(code **)(*(longlong *)((ulonglong)*(byte *)(uVar14 + 0x6d) * 4 + uVar14) + 0xf0))();
  bVar5 = FUN_143419290(uVar10,&local_98,local_90,0,param_7 == 0);
  if (((bVar5 == 0) && (param_7 != 0)) || (param_7 == 2)) {
    FUN_14343c0a0(param_1,&local_98,local_90,param_7);
  }
  if (4 < local_90[0]) {
    FUN_143411150(local_90);
  }
  if (4 < local_70[0]) {
    FUN_143411150(local_70);
  }
  if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  piVar1 = (int *)(local_98 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)bVar5;
}



// FUNCTION 14343d900 FUN_14343d900 body=763 status=ok
// SIG undefined FUN_14343d900(void)

ulonglong FUN_14343d900(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_res8;
  byte local_58 [32];
  byte local_38 [32];
  
  uVar12 = 0;
  uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar12;
    do {
      if (*(int *)(lVar7 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar7) != 0) {
          uVar11 = uVar12;
          uVar10 = uVar12;
          if (uVar8 == 0) goto LAB_14343d9a8;
          goto LAB_14343d990;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar8);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar10 = (ulonglong)((int)uVar10 + 1), uVar10 < uVar8) {
LAB_14343d990:
    if (*(int *)(lVar7 + uVar10 * 0x10) == 0) {
      uVar11 = *(ulonglong *)(lVar7 + 8 + uVar10 * 0x10);
      break;
    }
  }
LAB_14343d9a8:
  lVar7 = (**(code **)(*(longlong *)(uVar11 + (ulonglong)*(byte *)(uVar11 + 0x6d) * 4) + 0xf0))();
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) + 0x618),
                             param_2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  local_38[0] = 0;
  cVar4 = FUN_1434175f0(lVar7,&local_res8,local_38,0,0,0,0);
  if ((((cVar4 == '\0') || (local_38[0] != 6)) ||
      (uVar8 = FUN_143412120(local_38,lVar7), uVar8 == 0)) ||
     (iVar6 = (**(code **)(*(longlong *)(uVar8 + 0x20) + 0x10))(uVar8 + 0x20), iVar6 != 7)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,0x98,0);
    uVar8 = uVar12;
    if (lVar7 != 0) {
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
      uVar11 = uVar12;
      if (uVar8 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
        uVar10 = uVar12;
        do {
          if (*(int *)(lVar3 + uVar10 * 0x10) == 0) {
            uVar11 = *(ulonglong *)(lVar3 + 8 + uVar10 * 0x10);
            break;
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
        } while (uVar10 < uVar8);
      }
      uVar9 = (**(code **)(*(longlong *)(uVar11 + (ulonglong)*(byte *)(uVar11 + 0x6d) * 4) + 0xf0))
                        ();
      uVar8 = FUN_14345d8d0(lVar7,uVar9);
    }
    FUN_14345e160(uVar8,param_3);
    local_58[0] = 0;
    FUN_143412aa0(local_58,uVar8);
    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    if (uVar11 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
      uVar10 = uVar12;
      do {
        if (*(int *)(lVar7 + uVar10 * 0x10) == 0) {
          uVar12 = *(ulonglong *)(lVar7 + 8 + uVar10 * 0x10);
          break;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
      } while (uVar10 < uVar11);
    }
    uVar9 = (**(code **)(*(longlong *)(uVar12 + (ulonglong)*(byte *)(uVar12 + 0x6d) * 4) + 0xf0))();
    bVar5 = FUN_143419290(uVar9,&local_res8,local_58,0,param_4 == 0);
    if (((bVar5 == 0) && (param_4 != 0)) || (param_4 == 2)) {
      FUN_14343c0a0(param_1,&local_res8,local_58,param_4);
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
  }
  else {
    *(uint *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + 1U & 0x8fffffff;
    if (param_3 != *(int *)(uVar8 + 0x78)) {
      FUN_14345e160(uVar8,param_3);
    }
    bVar5 = 1;
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  if ((uVar8 != 0) && ((*(uint *)(uVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar8 + 0x18) = *(uint *)(uVar8 + 0x18) - 1;
    FUN_1434a2b80(uVar8);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)bVar5;
}



// FUNCTION 14343dc10 FUN_14343dc10 body=354 status=ok
// SIG undefined FUN_14343dc10(void)

ulonglong FUN_14343dc10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  byte local_28 [32];
  
  uVar8 = 0;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar2 != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar7 = uVar8;
    do {
      if (*(int *)(lVar5 + uVar7 * 0x10) == 0) {
        if (*(longlong *)(lVar5 + 8 + uVar7 * 0x10) == 0) {
          return 0;
        }
        uVar7 = uVar8;
        uVar6 = uVar8;
        if (uVar2 == 0) goto LAB_14343dc99;
        goto LAB_14343dc80;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (uVar7 < uVar2);
  }
  return 0;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar2) {
LAB_14343dc80:
    if (*(int *)(lVar5 + uVar6 * 0x10) == 0) {
      uVar7 = *(ulonglong *)(lVar5 + 8 + uVar6 * 0x10);
      break;
    }
  }
LAB_14343dc99:
  lVar5 = (**(code **)(*(longlong *)(uVar7 + (ulonglong)*(byte *)(uVar7 + 0x6d) * 4) + 0xf0))();
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) + 0x618),
                             param_2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  local_28[0] = 0;
  cVar3 = FUN_1434175f0(lVar5,&local_res8,local_28,0,0,0,0);
  if ((((cVar3 != '\0') && (local_28[0] == 6)) &&
      (lVar5 = FUN_143412120(local_28,lVar5), lVar5 != 0)) &&
     (iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), uVar8 = 0, iVar4 == 7
     )) {
    uVar8 = (ulonglong)*(uint *)(lVar5 + 0x78);
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar8;
}



// FUNCTION 14343dd80 FUN_14343dd80 body=1473 status=ok
// SIG undefined FUN_14343dd80(void)

ulonglong FUN_14343dd80(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,
                       float *param_5,uint param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined2 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  double dVar18;
  undefined8 uVar19;
  longlong local_res8;
  ulonglong uVar20;
  uint local_68;
  undefined4 uStack_64;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  byte local_48 [32];
  
  uVar16 = 0;
  iVar6 = 0;
  uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar20 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar16;
    do {
      if (*(int *)(lVar7 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar7) != 0) {
          uVar12 = uVar16;
          uVar11 = uVar16;
          if (uVar20 != 0) goto LAB_14343de00;
          goto LAB_14343de19;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar20);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar11 = (ulonglong)((int)uVar11 + 1), uVar11 < uVar20) {
LAB_14343de00:
    if (*(int *)(lVar7 + uVar11 * 0x10) == 0) {
      uVar12 = *(ulonglong *)(lVar7 + 8 + uVar11 * 0x10);
      break;
    }
  }
LAB_14343de19:
  local_res8 = param_1;
  lVar7 = (**(code **)(*(longlong *)(uVar12 + (ulonglong)*(byte *)(uVar12 + 0x6d) * 4) + 0xf0))();
  local_60 = FUN_143360a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18)
                            + 0x618),param_3);
  *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
  local_48[0] = 0;
  uVar20 = 0;
  cVar4 = FUN_1434175f0(lVar7,&local_60,local_48,0,0,0,0);
  if ((((cVar4 == '\0') || (local_48[0] != 6)) ||
      (lVar8 = FUN_143412120(local_48,lVar7), lVar8 == 0)) ||
     (iVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x10))(lVar8 + 0x20), iVar5 != 7)) {
    uVar20 = 0;
  }
  else {
    lVar9 = FUN_1432ecc50(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(lVar9 + 0x30) = 0;
    FUN_1434a3ec0(lVar9,0);
    uVar17 = *(uint *)(lVar8 + 0x78);
    switch(param_2) {
    case 0:
      if (uVar17 < param_6) {
        param_6 = uVar17;
      }
      if (param_6 != 0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          if (lVar9 == 0) {
            *param_5 = 0.0;
          }
          else {
            dVar18 = (double)FUN_143411a90(lVar9,lVar7);
            *param_5 = (float)(int)dVar18;
          }
          uVar17 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar17;
          param_5 = param_5 + 1;
        } while (uVar17 < param_6);
      }
      break;
    case 1:
      if (uVar17 < param_6) {
        param_6 = uVar17;
      }
      if (param_6 != 0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          if (lVar9 == 0) {
            param_5[0] = 0.0;
            param_5[1] = 0.0;
          }
          else {
            uVar19 = FUN_143411a90(lVar9,lVar7);
            *(undefined8 *)param_5 = uVar19;
          }
          uVar17 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar17;
          param_5 = param_5 + 2;
        } while (uVar17 < param_6);
      }
      break;
    case 2:
      if (uVar17 < param_6) {
        param_6 = uVar17;
      }
      if (param_6 != 0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          if (lVar9 == 0) {
            *param_5 = 0.0;
          }
          else {
            dVar18 = (double)FUN_143411a90(lVar9,lVar7);
            *param_5 = (float)dVar18;
          }
          uVar17 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar17;
          param_5 = param_5 + 1;
        } while (uVar17 < param_6);
      }
      break;
    case 3:
      if (uVar17 < param_6) {
        param_6 = uVar17;
      }
      local_res8 = CONCAT44(local_res8._4_4_,param_6);
      FUN_1434a3ec0(lVar9,param_6);
      if (param_6 != 0) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          if (lVar2 == 0) {
            param_5[0] = 0.0;
            param_5[1] = 0.0;
          }
          else {
            uVar20 = uVar20 & 0xffffffffffffff00;
            FUN_143411540(lVar2,&local_68,lVar7,0xffffffff,uVar20);
            puVar3 = (undefined8 *)CONCAT44(uStack_64,local_68);
            *(undefined8 *)param_5 = *puVar3;
            local_58 = (ulonglong)*(uint *)(lVar9 + 0x30);
            *(uint *)(lVar9 + 0x30) = *(uint *)(lVar9 + 0x30) + 1;
            local_50 = *(longlong *)(lVar9 + 0x10);
            *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
            lVar2 = *(longlong *)(local_50 + local_58 * 8);
            piVar1 = (int *)(lVar2 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(lVar2);
            }
            *(undefined8 **)(local_50 + local_58 * 8) = puVar3;
            piVar1 = (int *)(puVar3 + 3);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920(puVar3);
            }
          }
          uVar17 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar17;
          param_5 = param_5 + 2;
        } while (uVar17 < (uint)local_res8);
      }
      break;
    case 4:
      local_68 = param_6;
      if (uVar17 < param_6) {
        local_68 = uVar17;
      }
      FUN_1434a3ec0(lVar9,local_68);
      uVar12 = uVar16;
      uVar11 = uVar16;
      if (uVar17 != 0) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          if (lVar2 != 0) {
            uVar20 = uVar20 & 0xffffffffffffff00;
            FUN_143411540(lVar2,&local_res8,lVar7,0xffffffff,uVar20);
            local_58 = *(ulonglong *)(lVar9 + 0x10);
            local_50 = local_res8;
            *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
            piVar1 = (int *)(*(longlong *)(uVar11 + local_58) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *(longlong *)(uVar11 + local_58) = local_50;
            iVar6 = FUN_14335fa60(&local_res8);
            uVar12 = (ulonglong)(uint)((int)uVar12 + iVar6 + 1);
            piVar1 = (int *)(local_res8 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          uVar11 = uVar11 + 8;
        } while (uVar15 < uVar17);
        iVar6 = (int)uVar12;
        local_res8 = CONCAT44(local_res8._4_4_,iVar6);
      }
      lVar7 = 0;
      puVar10 = (undefined2 *)FUN_1434a2680(lVar9,iVar6 * 2);
      if (local_68 != 0) {
        uVar20 = (ulonglong)local_68;
        do {
          local_res8 = **(longlong **)(lVar7 + *(longlong *)(lVar9 + 0x10));
          puVar14 = puVar10;
          while (iVar6 = FUN_143307250(&local_res8), iVar6 != 0) {
            *puVar14 = (short)iVar6;
            puVar14 = puVar14 + 1;
          }
          local_res8 = local_res8 + -1;
          *puVar14 = 0;
          *(undefined2 **)(lVar7 + (longlong)param_5) = puVar10;
          lVar7 = lVar7 + 8;
          uVar20 = uVar20 - 1;
          puVar10 = puVar14 + 1;
        } while (uVar20 != 0);
      }
      FUN_1434a3ec0(lVar9,0);
      break;
    case 5:
      if (uVar17 < param_6) {
        param_6 = uVar17;
      }
      if (param_6 != 0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + (longlong)((int)uVar16 + param_4) * 8)
          ;
          pfVar13 = param_5 + uVar16 * 0xc;
          FUN_142055bf0(pfVar13);
          if (lVar9 == 0) {
            FUN_142055bf0(pfVar13);
          }
          else {
            FUN_14343bb60(local_res8,lVar7,lVar9,pfVar13);
          }
          uVar17 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar17;
        } while (uVar17 < param_6);
      }
    }
    uVar20 = 1;
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  piVar1 = (int *)(local_60 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar20;
}



// FUNCTION 14343e370 FUN_14343e370 body=235 status=ok
// SIG undefined FUN_14343e370(void)

ulonglong FUN_14343e370(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_res8;
  
  uVar6 = 0;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar2 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar6;
    do {
      if (*(int *)(lVar4 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar4) != 0) {
          uVar5 = uVar6;
          if (uVar2 != 0) goto LAB_14343e3d0;
          goto LAB_14343e3ee;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar2);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar5 = (ulonglong)((int)uVar5 + 1), uVar5 < uVar2) {
LAB_14343e3d0:
    if (*(int *)(lVar4 + uVar5 * 0x10) == 0) {
      uVar6 = *(ulonglong *)(lVar4 + 8 + uVar5 * 0x10);
      break;
    }
  }
LAB_14343e3ee:
  lVar4 = (**(code **)(*(longlong *)(uVar6 + (ulonglong)*(byte *)(uVar6 + 0x6d) * 4) + 0xf0))
                    (uVar6 + (ulonglong)*(byte *)(uVar6 + 0x6d) * 4);
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x618),
                             param_2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  bVar3 = FUN_1434179c0(lVar4,&local_res8,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)bVar3;
}



// FUNCTION 14343e470 FUN_14343e470 body=110 status=ok
// SIG undefined FUN_14343e470(void)

void FUN_14343e470(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1[2] + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1[2] + 0x60);
    uVar4 = uVar3;
    do {
      if (*(int *)(lVar2 + uVar4 * 0x10) == 0) {
        uVar3 = *(ulonglong *)(lVar2 + 8 + uVar4 * 0x10);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar1);
  }
  (**(code **)(*param_1 + 0x1f0))(param_1,uVar3,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 14343e4f0 FUN_14343e4f0 body=403 status=ok
// SIG undefined FUN_14343e4f0(void)

ulonglong FUN_14343e4f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  RefCountNTSImpl *this;
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_58 [32];
  
  uVar7 = 0;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar3 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar7;
    do {
      if (*(int *)(lVar2 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar2) != 0) {
          local_58[0] = 0;
          if ((*(longlong *)(param_1 + 0x78) != 0) && (lVar2 = FUN_143437c90(), lVar2 != 0)) {
            bVar1 = FUN_143438050(param_1,param_2,lVar2,local_58,param_4,&stack0x00000028);
            goto LAB_14343e629;
          }
          uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
          if (uVar3 == 0) goto LAB_14343e5e1;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
          uVar6 = uVar7;
          goto LAB_14343e5c3;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar3);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar3) {
LAB_14343e5c3:
    if (*(int *)(lVar2 + uVar6 * 0x10) == 0) {
      uVar7 = *(ulonglong *)(lVar2 + 8 + uVar6 * 0x10);
      break;
    }
  }
LAB_14343e5e1:
  uVar3 = (ulonglong)*(byte *)(uVar7 + 0x6d);
  this = *(RefCountNTSImpl **)(uVar7 + 0x20 + uVar3 * 4);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  bVar1 = FUN_14341dbd0(param_2,local_58,uVar7 + (uVar3 + 2) * 4,uVar7 + (uVar3 + 0xe) * 4,param_4,
                        &stack0x00000028);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
LAB_14343e629:
  if ((bVar1 != 0) && (param_3 != 0)) {
    plVar4 = (longlong *)FUN_14349fd40(param_1,0);
    uVar5 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    FUN_14343bb60(param_1,uVar5,local_58,param_3);
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return (ulonglong)bVar1;
}



// FUNCTION 14343e690 FUN_14343e690 body=398 status=ok
// SIG undefined FUN_14343e690(void)

ulonglong FUN_14343e690(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  RefCountNTSImpl *this;
  byte bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_38 [32];
  
  uVar7 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    in_RAX = uVar7;
    do {
      if (*(int *)(lVar3 + in_RAX * 0x10) == 0) {
        in_RAX = in_RAX * 0x10;
        if (*(longlong *)(in_RAX + 8 + lVar3) != 0) {
          local_38[0] = 0;
          if ((*(longlong *)(param_1 + 0x78) != 0) && (lVar3 = FUN_143437c90(), lVar3 != 0)) {
            bVar2 = FUN_143438050(param_1,param_2,lVar3,local_38,param_4,param_5);
            goto LAB_14343e7d1;
          }
          uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
          if (uVar1 == 0) goto LAB_14343e785;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
          uVar6 = uVar7;
          goto LAB_14343e767;
        }
        break;
      }
      in_RAX = (ulonglong)((int)in_RAX + 1);
    } while (in_RAX < uVar1);
  }
  return in_RAX & 0xffffffffffffff00;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar1) {
LAB_14343e767:
    if (*(int *)(lVar3 + uVar6 * 0x10) == 0) {
      uVar7 = *(ulonglong *)(lVar3 + 8 + uVar6 * 0x10);
      break;
    }
  }
LAB_14343e785:
  lVar3 = uVar7 + (ulonglong)*(byte *)(uVar7 + 0x6d) * 4;
  this = *(RefCountNTSImpl **)(uVar7 + 0x20 + (ulonglong)*(byte *)(uVar7 + 0x6d) * 4);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  bVar2 = FUN_14341dbd0(param_2,local_38,lVar3 + 8,lVar3 + 0x38,param_4,param_5);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
LAB_14343e7d1:
  if ((bVar2 != 0) && (param_3 != 0)) {
    plVar4 = (longlong *)FUN_14349fd40(param_1,0);
    uVar5 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    FUN_14343bb60(param_1,uVar5,local_38,param_3);
  }
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return (ulonglong)bVar2;
}



// FUNCTION 14343e830 FUN_14343e830 body=550 status=ok
// SIG undefined FUN_14343e830(void)

ulonglong FUN_14343e830(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       longlong param_5,int param_6)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  byte bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  byte local_68 [32];
  byte local_48 [32];
  
  if ((param_2 != (longlong *)0x0) &&
     (in_RAX = (**(code **)(*param_2 + 0x290))(param_2), (int)in_RAX == 3)) {
    local_68[0] = 0;
    lVar1 = (longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4;
    lVar3 = (**(code **)(*(longlong *)
                          ((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4) +
                        0xf0))(lVar1);
    iVar5 = param_6 + -1;
    if (-1 < iVar5) {
      param_5 = (longlong)iVar5 * 0x30 + param_5;
      do {
        local_48[0] = 0;
        FUN_14343b9a0(param_1,param_5,local_48);
        *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
        if (*(ulonglong *)(lVar3 + 0x18) <= *(ulonglong *)(lVar3 + 8)) {
          FUN_1434a29d0(lVar3 + 8);
        }
        if (*(longlong *)(lVar3 + 8) != 0) {
          FUN_143410ec0(*(longlong *)(lVar3 + 8),local_48);
        }
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
        param_5 = param_5 + -0x30;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    if ((*(longlong *)(param_1 + 0x78) == 0) || (lVar4 = FUN_143437c90(param_1,param_3), lVar4 == 0)
       ) {
      this = *(RefCountNTSImpl **)(lVar1 + 0x20);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      bVar2 = FUN_14341e8b0(param_3,local_68,lVar1 + 8,lVar1 + 0x38,param_6,
                            (int)(*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x48) >> 5) +
                            *(int *)(lVar1 + 0x68) * 0x20 + -0x20);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    else {
      bVar2 = FUN_143437e20(param_1,param_3,lVar4,local_68,param_6);
    }
    for (; param_6 != 0; param_6 = param_6 + -1) {
      if (4 < **(byte **)(lVar3 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + -0x20;
      if (*(ulonglong *)(lVar3 + 8) < *(ulonglong *)(lVar3 + 0x10)) {
        FUN_1434a25c0(lVar3 + 8);
      }
    }
    if ((bVar2 != 0) && (param_4 != 0)) {
      FUN_14343bb60(param_1,lVar3,local_68,param_4);
    }
    if (4 < local_68[0]) {
      FUN_143411150(local_68);
    }
    return (ulonglong)bVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14343ea60 FUN_14343ea60 body=164 status=ok
// SIG undefined FUN_14343ea60(void)

undefined8 FUN_14343ea60(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar4 = uVar5;
    do {
      if (*(int *)(lVar2 + uVar4 * 0x10) == 0) {
        if (*(longlong *)(lVar2 + 8 + uVar4 * 0x10) == 0) {
          return 0;
        }
        if (*(int *)(*param_2 + 0x20) == 0) {
          return 0;
        }
        uVar4 = uVar5;
        if (uVar1 == 0) goto LAB_14343eade;
        goto LAB_14343eac0;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar1);
  }
  return 0;
  while (uVar4 = (ulonglong)((int)uVar4 + 1), uVar4 < uVar1) {
LAB_14343eac0:
    if (*(int *)(lVar2 + uVar4 * 0x10) == 0) {
      uVar5 = *(ulonglong *)(lVar2 + 8 + uVar4 * 0x10);
      break;
    }
  }
LAB_14343eade:
  uVar3 = (**(code **)(*(longlong *)(uVar5 + (ulonglong)*(byte *)(uVar5 + 0x6d) * 4) + 0xf0))
                    (uVar5 + (ulonglong)*(byte *)(uVar5 + 0x6d) * 4);
  uVar3 = FUN_143419c20(uVar3,param_2,0);
  return uVar3;
}



// FUNCTION 14343eb10 FUN_14343eb10 body=237 status=ok
// SIG undefined FUN_14343eb10(void)

void FUN_14343eb10(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar2 = 0;
    while (*(int *)(lVar3 + uVar2 * 0x10) != 0) {
      uVar4 = uVar4 + 1;
      uVar2 = (ulonglong)uVar4;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    if ((*(longlong *)(lVar3 + 8 + (ulonglong)uVar4 * 0x10) != 0) &&
       (lVar3 = FUN_1434372c0(), lVar3 != 0)) {
      uVar4 = 0;
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
      if (uVar1 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
        uVar2 = 0;
        do {
          if (*(int *)(lVar5 + uVar2 * 0x10) == 0) {
            lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar4 * 0x10);
            goto LAB_14343eba4;
          }
          uVar4 = uVar4 + 1;
          uVar2 = (ulonglong)uVar4;
        } while (uVar2 < uVar1);
      }
      lVar5 = 0;
LAB_14343eba4:
      *(undefined4 *)(lVar3 + 8) = 4;
      if (lVar5 != 0) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      if (*(RefCountNTSImpl **)(lVar3 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x10));
      }
      *(longlong *)(lVar3 + 0x10) = lVar5;
      if (*(RefCountNTSImpl **)(lVar3 + 0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x18));
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(code **)(lVar3 + 0x50) = FUN_14345a5e0;
    }
  }
  return;
}



// FUNCTION 14343ec10 FUN_14343ec10 body=478 status=ok
// SIG undefined FUN_14343ec10(void)

void FUN_14343ec10(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar5 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    do {
      if (*(int *)(lVar3 + uVar5 * 0x10) == 0) {
        lVar3 = *(longlong *)(lVar3 + 8 + uVar5 * 0x10);
        goto LAB_14343ec59;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < uVar1);
  }
  lVar3 = 0;
LAB_14343ec59:
  lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
  if (((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(), cVar2 == '\0')) &&
     ((bVar4 = *(byte *)(param_3 + 0x4c) & 8, bVar4 != 0 ||
      ((*(short *)(param_2 + 0x10) != 0 || ((*(byte *)(param_2 + 0x13) & 0x20) != 0)))))) {
    cVar2 = *(char *)(*(longlong *)(lVar3 + 0xe8) + 0x68);
    if (bVar4 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                (*(longlong **)(param_1 + 0x48),lVar3,param_4);
    }
    if (((*(byte *)(param_2 + 0x13) & 0x20) != 0) || (*(short *)(param_2 + 0x10) != 0)) {
      local_res8 = *(undefined4 *)(param_2 + 8);
      local_resc = *(undefined4 *)(param_2 + 0xc);
      this = (RefCountNTSImpl *)
             FUN_1432e79b0(*(undefined8 *)(param_1 + 0x10),&local_res8,param_4,1,0);
      if ((this == (RefCountNTSImpl *)0x0) ||
         (*(int *)(this + 8) = *(int *)(this + 8) + 1,
         *(char *)(*(longlong *)(this + 0x20) + 0x20) == '\x01')) {
        if ((*(byte *)(param_2 + 0x13) & 0x20) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                    (*(longlong **)(param_1 + 0x48),lVar3,param_4,(int)*(char *)(param_2 + 0x12),
                     this);
        }
        if (*(short *)(param_2 + 0x10) != 0) {
          uVar7 = 1;
          iVar6 = 1;
          do {
            if ((uVar7 & *(ushort *)(param_2 + 0x10)) != 0) {
              if (((*(byte *)(param_2 + 0x13) & 0xc0) == 0) && (*(short *)(param_2 + 0x10) != 0)) {
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
                          (*(longlong **)(param_1 + 0x48),lVar3,param_4,iVar6,this);
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                          (*(longlong **)(param_1 + 0x48),lVar3,param_4,iVar6,this);
              }
            }
            if (cVar2 != '\x01') break;
            uVar7 = uVar7 * 2;
            iVar6 = iVar6 + 1;
          } while (uVar7 != 0);
        }
        if (this == (RefCountNTSImpl *)0x0) {
          return;
        }
      }
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14343ee00 FUN_14343ee00 body=860 status=ok
// SIG undefined FUN_14343ee00(void)

void FUN_14343ee00(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  byte local_b8 [8];
  longlong *local_b0;
  ulonglong local_a8;
  byte local_a0;
  byte local_98 [32];
  undefined **local_78 [3];
  undefined1 local_60 [56];
  
  uVar10 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  uVar8 = uVar10;
  if (uVar1 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar11 = uVar10;
    do {
      if (*(int *)(lVar6 + uVar11 * 0x10) == 0) {
        uVar8 = *(ulonglong *)(lVar6 + 8 + uVar11 * 0x10);
        break;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while (uVar11 < uVar1);
  }
  lVar5 = (**(code **)(*(longlong *)(uVar8 + (ulonglong)*(byte *)(uVar8 + 0x6d) * 4) + 0xf0))();
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (((*(uint *)(lVar6 + 0x52f0) >> 0xc & 1) == 0) ||
     (lVar2 = *(longlong *)(lVar5 + 0xe8), *(char *)(lVar2 + 0x68) != '\x01')) {
    if (param_3 == *(uint *)(lVar6 + 0x2254 + (ulonglong)param_2 * 0x50)) {
      return;
    }
    plVar9 = *(longlong **)(lVar6 + 0x238);
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    uVar1 = (ulonglong)local_d8 >> 0x20;
    local_d8 = (longlong *)CONCAT44((uint)uVar1 & 0xffffff00,0x17);
    uStack_d0 = CONCAT44(param_2,param_3);
    (**(code **)(*plVar9 + 8))(plVar9,lVar6,&local_d8);
    return;
  }
  local_98[0] = 0;
  plVar9 = (longlong *)(*(longlong *)(lVar2 + 0x60) + 0x20);
  cVar4 = (**(code **)(*plVar9 + 0x58))
                    (plVar9,lVar5 + 0xe8,*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) + 0x210,
                     local_98);
  if ((cVar4 == '\0') || (lVar6 = FUN_143412120(local_98,lVar5), lVar6 == 0)) goto LAB_14343f0fb;
  local_b8[0] = 0;
  cVar4 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x20))
                    (lVar6 + 0x20,lVar5,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) + 0x578
                     ,local_b8);
  if (cVar4 != '\0') {
    if (local_b8[0] == 8) {
      bVar12 = 0;
      if (local_b0 != (longlong *)0x0) {
        *(int *)(local_b0 + 3) = (int)local_b0[3] + 1;
        *(uint *)(local_b0 + 3) = *(uint *)(local_b0 + 3) & 0x8fffffff;
      }
      plVar9 = local_b0;
      if ((local_a8 != 0) && (bVar12 = (local_a0 & 1) != 0, uVar10 = local_a8, !(bool)bVar12)) {
        *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + 1;
        *(uint *)(local_a8 + 0x18) = *(uint *)(local_a8 + 0x18) & 0x8fffffff;
      }
LAB_14343efaa:
      if (plVar9 != (longlong *)0x0) {
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
        local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
        if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
          FUN_1434a29d0(lVar5 + 8);
        }
        puVar3 = *(undefined1 **)(lVar5 + 8);
        if (puVar3 != (undefined1 *)0x0) {
          *(double *)(puVar3 + 8) = (double)param_2;
          *puVar3 = 3;
        }
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
        if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
          FUN_1434a29d0(lVar5 + 8);
        }
        puVar3 = *(undefined1 **)(lVar5 + 8);
        if (puVar3 != (undefined1 *)0x0) {
          *(double *)(puVar3 + 8) = (double)param_3;
          *puVar3 = 3;
        }
        uVar7 = FUN_143496870(local_78,&local_d8,local_98,lVar5,2,
                              *(int *)(lVar5 + 0x30) * 0x20 +
                              (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5) +
                              -0x20);
        (**(code **)(*plVar9 + 0x50))(plVar9,uVar7,uVar10,0);
        local_78[0] = &PTR_FUN_145b0ab98;
        FUN_14349ebc0(local_60);
        FUN_1434a23f0(lVar5 + 8);
        if (4 < (byte)local_d8) {
          FUN_143411150(&local_d8);
        }
      }
    }
    else {
      if (local_b8[0] == 0xb) {
        FUN_143413f20(local_b8,&local_d8,lVar5);
        plVar9 = local_d8;
        uVar10 = uStack_d0;
        bVar12 = local_c8;
        goto LAB_14343efaa;
      }
      bVar12 = 0;
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      uVar10 = 0;
      plVar9 = (longlong *)0x0;
    }
    if ((((bVar12 & 2) == 0) && (plVar9 != (longlong *)0x0)) &&
       ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
      FUN_1434a2b80(plVar9);
    }
    if ((((bVar12 & 1) == 0) && (uVar10 != 0)) && ((*(uint *)(uVar10 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(uVar10 + 0x18) = *(uint *)(uVar10 + 0x18) - 1;
      FUN_1434a2b80(uVar10);
    }
  }
  if (4 < local_b8[0]) {
    FUN_143411150(local_b8);
  }
LAB_14343f0fb:
  if (4 < local_98[0]) {
    FUN_143411150(local_98);
  }
  return;
}



// FUNCTION 14343f170 FUN_14343f170 body=300 status=ok
// SIG undefined FUN_14343f170(void)

void FUN_14343f170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  FUN_1432f2b40(param_1 + 0x628,param_1 + 0x628,0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar3 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar3 != 0) {
    FUN_1434978a0(lVar3);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_143411150(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_14341c600(*(undefined8 *)(param_1 + 0x50),1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28) = 0;
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(lVar3 + 0x60);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(undefined8 *)(lVar3 + 0x60) = 0;
  FUN_143497ab0(lVar3 + 0x18);
  FUN_1434977f0(lVar3 + 0x20);
  FUN_143497de0(lVar3 + 0x10);
  local_20 = param_1 + 0x80;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  local_28[0] = 0;
  local_10 = 0;
  local_18 = 0;
  do {
    lVar3 = FUN_1434375b0(local_28);
  } while (lVar3 != 0);
  if (local_18 != 0) {
    FUN_143437390(local_20);
  }
  FUN_14340b9f0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x20),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  return;
}



// FUNCTION 14343f2b0 FUN_14343f2b0 body=140 status=ok
// SIG undefined FUN_14343f2b0(void)

void FUN_14343f2b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar5 = uVar4;
    do {
      if (*(int *)(lVar2 + uVar5 * 0x10) == 0) {
        uVar4 = *(ulonglong *)(lVar2 + 8 + uVar5 * 0x10);
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < uVar1);
  }
  uVar3 = (**(code **)(*(longlong *)(uVar4 + (ulonglong)*(byte *)(uVar4 + 0x6d) * 4) + 0xf0))
                    (uVar4 + (ulonglong)*(byte *)(uVar4 + 0x6d) * 4);
  FUN_14346dc50(uVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 14343f350 FUN_14343f350 body=140 status=ok
// SIG undefined FUN_14343f350(void)

void FUN_14343f350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar5 = uVar4;
    do {
      if (*(int *)(lVar2 + uVar5 * 0x10) == 0) {
        uVar4 = *(ulonglong *)(lVar2 + 8 + uVar5 * 0x10);
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < uVar1);
  }
  uVar3 = (**(code **)(*(longlong *)(uVar4 + (ulonglong)*(byte *)(uVar4 + 0x6d) * 4) + 0xf0))
                    (uVar4 + (ulonglong)*(byte *)(uVar4 + 0x6d) * 4);
  FUN_14346de90(uVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 14343f3f0 FUN_14343f3f0 body=87 status=ok
// SIG undefined FUN_14343f3f0(void)

undefined8
FUN_14343f3f0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  
  if (param_5 != 1) {
    return 1;
  }
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,1), cVar1 != '\0')) {
    return 1;
  }
  if ((param_3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_3 + 0x2d0))(param_3,1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14343f450 FUN_14343f450 body=259 status=ok
// SIG undefined FUN_14343f450(void)

void FUN_14343f450(longlong param_1,undefined8 param_2,int *param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_38;
  int *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
    }
    *(undefined8 **)(param_1 + 0x78) = puVar2;
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_4 != 0) {
    *(uint *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1U & 0x8fffffff;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  local_38 = param_4;
  local_30 = param_3;
  FUN_143410a60(&local_28,param_5);
  FUN_1434a3f30(*(undefined8 *)(param_1 + 0x78),param_2,&local_38);
  FUN_14349ebc0(&local_28);
  piVar1 = local_30;
  if ((local_30 != (int *)0x0) && (*local_30 = *local_30 + -1, *local_30 < 1)) {
    FUN_14336bed0(local_30);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  if ((local_38 != 0) && ((*(uint *)(local_38 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_38 + 0x18) = *(uint *)(local_38 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}



// FUNCTION 14343f560 FUN_14343f560 body=135 status=ok
// SIG undefined FUN_14343f560(void)

undefined8 FUN_14343f560(longlong param_1)

{
  RefCountNTSImpl *this;
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))(*(longlong **)(lVar1 + 0x10),0x90,0)
    ;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1433e8cf0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10),0);
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    this = *(RefCountNTSImpl **)(lVar1 + 0x28);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  return *(undefined8 *)(lVar1 + 0x28);
}



// FUNCTION 14343f5f0 FUN_14343f5f0 body=103 status=ok
// SIG undefined FUN_14343f5f0(void)

longlong * FUN_14343f5f0(longlong *param_1,longlong param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = *param_3;
  if (uVar2 < 0x800001) {
    bVar4 = Scaleform::Alg::BitCount32(uVar2);
    uVar6 = (ulonglong)bVar4;
  }
  else {
    uVar6 = (ulonglong)(uVar2 - 0xffffe7);
  }
  if ((int)uVar6 - 1U < 0x22) {
    iVar5 = *(int *)(&DAT_145b13550 + uVar6 * 4);
  }
  else {
    iVar5 = 0x2e;
  }
  lVar3 = *(longlong *)(param_2 + (longlong)iVar5 * 8);
  *param_1 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 14343f660 FUN_14343f660 body=254 status=ok
// SIG undefined FUN_14343f660(void)

undefined8 * FUN_14343f660(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[1] = &PTR_LAB_145b0b230;
  param_1[4] = param_2;
  param_1[5] = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  *param_1 = &PTR_FUN_145b0c868;
  param_1[1] = &PTR_LAB_145b0c9a8;
  param_1[6] = &PTR_LAB_145b0ca50;
  param_1[7] = 0;
  lVar3 = *(longlong *)(param_1[4] + 0x38);
  do {
    if (lVar3 == 0) {
LAB_14343f6ff:
      lVar3 = FUN_14341b890(*(undefined8 *)(*(longlong *)(param_1[4] + 0x20) + 0x50),uVar2,9);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      lVar1 = param_1[3];
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80();
      }
      param_1[3] = lVar3;
      return param_1;
    }
    if ((*(ushort *)(lVar3 + 0x6a) >> 10 & 1) != 0) {
      uVar2 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
      goto LAB_14343f6ff;
    }
    lVar3 = *(longlong *)(lVar3 + 0x38);
  } while( true );
}



// FUNCTION 14343f770 FUN_14343f770 body=175 status=ok
// SIG undefined FUN_14343f770(void)

undefined8 FUN_14343f770(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte local_28 [32];
  
  lVar2 = (**(code **)(*param_1 + 0xe8))();
  local_28[0] = 0;
  if ((lVar2 != 0) && ((*(uint *)(param_1[4] + 0xb8) >> 4 & 1) != 0)) {
    if (param_1[7] == 0) {
      if (param_1[3] != 0) {
        param_1 = (longlong *)(param_1[3] + 0x20);
        goto LAB_14343f7c2;
      }
    }
    else {
      param_1 = param_1 + 1;
LAB_14343f7c2:
      (**(code **)(*param_1 + 0x58))
                (param_1,(longlong *)(lVar2 + 0xe8),
                 *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) + 0x538,
                 local_28);
    }
    cVar1 = FUN_143411fd0(local_28,lVar2);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_14343f801;
    }
  }
  uVar3 = 0;
LAB_14343f801:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return uVar3;
}



// FUNCTION 14343f850 FUN_14343f850 body=996 status=ok
// SIG undefined FUN_14343f850(void)

undefined1 FUN_14343f850(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  RefCountNTSImpl *this;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  uint *local_res10;
  uint local_res18;
  uint local_res20;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  byte local_68 [40];
  
  uVar18 = 0;
  local_res10 = param_2;
  if ((char)param_2[4] == '\0') {
    uVar12 = *param_2;
    local_res18 = 0;
    local_res20 = 0;
    if (uVar12 == 0x2000) {
      local_res18 = 1;
    }
    else if (uVar12 == 0x4000) {
      local_res18 = 2;
    }
    else if (uVar12 == 0x400) {
      local_res18 = 4;
    }
    else if (uVar12 == 0x800) {
      local_res18 = 8;
    }
    else if (uVar12 == 0x10000) {
      local_res18 = 0x10;
    }
    else if (uVar12 == 0x8000) {
      local_res18 = 0x20;
    }
    else if (uVar12 == 0x1000) {
      local_res18 = 0x40;
    }
    else if (uVar12 == 0x20000) {
      local_res20 = FUN_14338a780(param_2);
    }
    uVar12 = local_res20;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + -0x10) + 0x38);
    if (lVar11 != 0) {
      lVar14 = 0;
      if ((*(ushort *)(lVar11 + 0x6a) >> 10 & 1) != 0) {
        lVar14 = lVar11;
      }
      if (lVar14 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + -0x10) + 0xd8);
        uVar19 = 0;
        uVar3 = *(ulonglong *)(lVar11 + 0x40);
        uVar17 = local_res20;
        uVar16 = local_res18;
        if (uVar3 != 0) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + uVar19 * 8);
            if (((uVar16 & *(uint *)(lVar4 + 0x10)) != 0) ||
               ((0 < (int)uVar12 && (((int)*(uint *)(lVar4 + 0x10) >> 9 & 0x7fU) == uVar17)))) {
              lVar2 = lVar14 + (ulonglong)*(byte *)(lVar14 + 0x6d) * 4;
              lVar9 = (**(code **)(*(longlong *)(lVar14 + (ulonglong)*(byte *)(lVar14 + 0x6d) * 4) +
                                  0xf0))(lVar2);
              uVar5 = *(ulonglong *)(lVar4 + 0x20);
              uVar15 = 0;
              uVar17 = local_res20;
              uVar16 = local_res18;
              if (uVar5 != 0) {
                do {
                  lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + uVar15 * 8);
                  if ((*(int *)(lVar10 + 0x18) != 0) && (**(char **)(lVar10 + 0x10) != '\0')) {
                    plVar6 = *(longlong **)(*(longlong *)(lVar9 + 0xe8) + 0x30);
                    lVar10 = (**(code **)(*plVar6 + 0x50))(plVar6,0x40);
                    if (lVar10 == 0) {
                      this = (RefCountNTSImpl *)0x0;
                    }
                    else {
                      this = (RefCountNTSImpl *)FUN_14340bd30(lVar10,lVar9 + 0xe8);
                    }
                    lVar10 = FUN_1434372c0(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20) + 0x80,
                                           4);
                    if (lVar10 != 0) {
                      FUN_1434a4030(lVar10,*(undefined8 *)(lVar2 + 0x20));
                    }
                    if (this != (RefCountNTSImpl *)0x0) {
                      Scaleform::RefCountNTSImpl::Release(this);
                    }
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar5);
                uVar17 = local_res20;
                uVar16 = local_res18;
                if (uVar5 != 0) {
                  uVar18 = 1;
                }
              }
            }
            uVar19 = uVar19 + 1;
            param_2 = local_res10;
          } while (uVar19 < uVar3);
        }
      }
    }
  }
  lVar11 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))(param_1 + -0x30);
  if (lVar11 != 0) {
    lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe8) + 0x28) + 0x18);
    if (*param_2 < 0x800001) {
      bVar7 = Scaleform::Alg::BitCount32();
      uVar12 = (uint)bVar7;
    }
    else {
      uVar12 = *param_2 - 0xffffe7;
    }
    if (uVar12 - 1 < 0x22) {
      iVar13 = *(int *)(&DAT_145b13550 + (ulonglong)uVar12 * 4);
    }
    else {
      iVar13 = 0x2e;
    }
    local_res10 = *(uint **)(lVar14 + 0x138 + (longlong)iVar13 * 8);
    local_res10[6] = local_res10[6] + 1;
    if (local_res10[8] != 0) {
      local_68[0] = 0;
      cVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x58))
                        (param_1 + -0x28,(longlong *)(lVar11 + 0xe8),&local_res10,local_68);
      if (cVar8 != '\0') {
        uVar18 = 1;
        lVar11 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x80,4);
        if (lVar11 != 0) {
          local_78 = param_2[4];
          local_88 = *param_2;
          uStack_84 = param_2[1];
          uStack_80 = param_2[2];
          uStack_7c = param_2[3];
          FUN_1434a40a0(lVar11,*(undefined8 *)(param_1 + -0x10),&local_88);
        }
      }
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
    }
    puVar1 = local_res10 + 6;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      FUN_14335f920();
    }
  }
  return uVar18;
}



// FUNCTION 14343fc40 FUN_14343fc40 body=365 status=ok
// SIG undefined FUN_14343fc40(void)

undefined8 FUN_14343fc40(longlong param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong local_res8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  byte local_38 [32];
  
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))(param_1 + -0x30);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18);
  if (*param_2 < 0x800001) {
    bVar3 = Scaleform::Alg::BitCount32();
    uVar7 = (uint)bVar3;
  }
  else {
    uVar7 = *param_2 - 0xffffe7;
  }
  if (uVar7 - 1 < 0x22) {
    iVar8 = *(int *)(&DAT_145b13550 + (ulonglong)uVar7 * 4);
  }
  else {
    iVar8 = 0x2e;
  }
  local_res8 = *(longlong *)(lVar6 + 0x138 + (longlong)iVar8 * 8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x10);
  if (*(int *)(local_res8 + 0x20) != 0) {
    local_38[0] = 0;
    if ((*param_2 - 0x40 & 0xffffffbf) == 0) {
      cVar4 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x58))
                        (param_1 + -0x28,lVar5 + 0xe8,&local_res8,local_38);
      if (((cVar4 != '\0') && (5 < *(byte *)(lVar5 + 0xf0))) &&
         (cVar4 = FUN_143385110(uVar2,*(undefined8 *)(param_1 + -0x10),
                                (int)*(char *)((longlong)param_2 + 0x11)), cVar4 != '\0')) {
        lVar6 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x80,4);
        if (lVar6 != 0) {
          local_48 = param_2[4];
          local_58 = *param_2;
          uStack_54 = param_2[1];
          uStack_50 = param_2[2];
          uStack_4c = param_2[3];
          FUN_1434a40a0(lVar6,*(undefined8 *)(param_1 + -0x10),&local_58);
        }
      }
      if (4 < local_38[0]) {
        FUN_143411150(local_38);
      }
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return 1;
}



// FUNCTION 14343fe00 FUN_14343fe00 body=317 status=ok
// SIG undefined FUN_14343fe00(void)

undefined8 FUN_14343fe00(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
    uVar3 = FUN_14341f910(param_1 + -8,param_3);
    cVar2 = (**(code **)(lVar1 + 0x118))(param_1 + -8,uVar3,param_4,0);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014343fe8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x20))(lVar1 + 0x20,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_2 != 0) &&
     (*param_3 ==
      *(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x3a8))) {
    FUN_143412aa0(param_4,*(undefined8 *)(param_1 + 0x10));
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) &&
     (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x20))
                        (lVar1 + 0x20,param_2,param_3,param_4), cVar2 != '\0')) {
    return 1;
  }
  if ((param_2 != 0) &&
     (*param_3 ==
      *(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x330))) {
    FUN_143412aa0(param_4,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x60));
    return 1;
  }
  return 0;
}



// FUNCTION 14343ff50 FUN_14343ff50 body=476 status=ok
// SIG undefined FUN_14343ff50(void)

undefined8 FUN_14343ff50(longlong *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  cVar3 = FUN_143420480();
  if (cVar3 != '\0') {
    return 1;
  }
  if (param_2 == 0x25) {
    lVar4 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (7 < *(byte *)(lVar4 + 0xf0)) {
      pfVar5 = (float *)FUN_143367db0(param_1[4],&local_38);
      if ((pfVar5[2] <= *pfVar5) || (pfVar5[3] <= pfVar5[1])) {
        FUN_143411150(param_3);
        *param_3 = 0;
        return 1;
      }
      lVar4 = (**(code **)(*param_1 + 0xe8))(param_1);
      FUN_143367db0(param_1[4],&local_38);
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0xe8) + 0x30);
      lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_143451210(lVar6,lVar4);
      }
      local_28 = (double)(local_38 * 0.05);
      local_20 = (double)(local_34 * 0.05);
      local_18 = (double)(local_30 * 0.05);
      local_10 = (double)(local_2c * 0.05);
      FUN_143451780(lVar6,lVar4,&local_28);
      FUN_143412aa0(param_3,lVar6);
      if (lVar6 == 0) {
        return 1;
      }
      if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) == 0) {
        return 1;
      }
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
      FUN_1434a2b80(lVar6);
      return 1;
    }
  }
  else if ((param_2 == 0x47) &&
          (lVar4 = (**(code **)(*param_1 + 0xe8))(param_1),
          *(char *)(*(longlong *)(lVar4 + 0xe8) + 0x68) == '\x01')) {
    uVar1 = *(uint *)(param_1[4] + 0xb8);
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = (byte)(uVar1 >> 0xb) & 1;
    return 1;
  }
  return 0;
}



// FUNCTION 143440140 FUN_143440140 body=753 status=ok
// SIG undefined FUN_143440140(void)

undefined8 FUN_143440140(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  FUN_143410ec0(local_58,param_3);
  if (0x15 < param_2) {
    lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (lVar5 != 0) {
      lVar6 = FUN_143440440(param_1);
      if ((lVar6 != 0) && (*(longlong *)(param_1[7] + 0x58) != 0)) {
        local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while ((&PTR_DAT_1467ce9e0)[(longlong)param_2 * 2][lVar6] != '\0');
        local_68 = FUN_143360950(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) +
                                  0x618),(&PTR_DAT_1467ce9e0)[(longlong)param_2 * 2],lVar6,0);
        *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
        cVar3 = FUN_143415e30(param_1[7],lVar5,&local_68,local_58,&local_38);
        piVar1 = (int *)(local_68 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (cVar3 != '\0') {
          FUN_143411240(local_58,&local_38);
        }
        if (4 < local_38._0_1_) {
          FUN_143411150(&local_38);
        }
      }
    }
  }
  cVar3 = FUN_14341fc60(param_1,param_2,local_58,param_4);
  if (cVar3 == '\0') {
    if (param_2 == 0x25) {
      lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (7 < *(byte *)(lVar5 + 0xf0)) {
        uVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
        lVar5 = FUN_143412120(local_58,uVar7);
        if (lVar5 != 0) {
          iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20);
          if (iVar4 == 0x11) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_28 = 0.0;
            dStack_20 = 0.0;
            FUN_143451500(lVar5,uVar7,&local_38);
            local_68 = CONCAT44((float)dStack_30 * 20.0,(float)local_38 * 20.0);
            uStack_60 = CONCAT44((float)(dStack_20 - dStack_30) * 20.0 + (float)dStack_30 * 20.0,
                                 (float)(local_28 - local_38) * 20.0 + (float)local_38 * 20.0);
            (**(code **)(*(longlong *)param_1[4] + 0x98))((longlong *)param_1[4],&local_68);
            goto LAB_1434402c7;
          }
        }
        local_68 = 0;
        uStack_60 = 0;
        (**(code **)(*(longlong *)param_1[4] + 0x98))((longlong *)param_1[4],&local_68);
        goto LAB_1434402c7;
      }
    }
    else if (param_2 == 0x47) {
      lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) == '\x01') {
        lVar5 = param_1[4];
        uVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
        cVar3 = FUN_143411fd0(local_58,uVar7);
        if (cVar3 == '\0') {
          puVar2 = (uint *)(lVar5 + 0xb8);
          *puVar2 = *puVar2 & 0xfffff7ff;
        }
        else {
          puVar2 = (uint *)(lVar5 + 0xb8);
          *puVar2 = *puVar2 | 0x800;
        }
        goto LAB_1434402c7;
      }
    }
    uVar7 = 0;
  }
  else {
LAB_1434402c7:
    uVar7 = 1;
  }
  if (4 < local_58[0]) {
    FUN_143411150(local_58);
  }
  return uVar7;
}



// FUNCTION 143440440 FUN_143440440 body=172 status=ok
// SIG undefined FUN_143440440(void)

longlong FUN_143440440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  if (param_1[7] == 0) {
    local_res8[0] = 0x143;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x70,local_res8);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar1 = param_1[4];
      uVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
      lVar2 = FUN_1434963c0(lVar2,uVar3,lVar1);
    }
    lVar1 = param_1[7];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    param_1[7] = lVar2;
    return lVar2;
  }
  return param_1[7];
}



// FUNCTION 143440520 FUN_143440520 body=1418 status=ok
// SIG undefined FUN_143440520(void)

void FUN_143440520(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  RefCountNTSImpl *pRVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  RefCountNTSImpl *pRVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  RefCountNTSImpl *pRVar19;
  undefined4 local_res20 [2];
  longlong local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  RefCountNTSImpl *local_88 [2];
  longlong local_78 [4];
  undefined1 local_58 [24];
  
  plVar8 = *(longlong **)(param_1 + 0x20);
  lVar16 = plVar8[0x1b];
  local_a0 = lVar16;
  local_90 = plVar8;
  iVar5 = FUN_143de5170(param_2);
  pRVar19 = (RefCountNTSImpl *)0x0;
  pRVar9 = pRVar19;
  do {
    iVar15 = (int)pRVar9;
    if ((iVar15 != iVar5) && (iVar15 != 3)) {
      FUN_143de50d0(plVar8,pRVar9);
    }
    pRVar9 = (RefCountNTSImpl *)(ulonglong)(iVar15 + 1U);
    pRVar14 = pRVar19;
  } while (iVar15 + 1U < 4);
  do {
    iVar15 = (int)pRVar14;
    if ((iVar15 == iVar5) || (iVar15 == 3)) {
      plVar18 = plVar8 + (longlong)iVar15 * 4 + 0x1d;
      lVar17 = plVar8[((longlong)iVar15 + 7) * 4];
      if (lVar17 != 0) {
        *(longlong *)(lVar17 + 0x18) = *(longlong *)(lVar17 + 0x18) + 1;
      }
      if (plVar18[1] == 0) {
        if (lVar17 == 0) {
          plVar7 = (longlong *)FUN_143de4d90(plVar8,&local_98,pRVar14);
          if (*plVar7 != 0) {
            plVar1 = (longlong *)(*plVar7 + 0x18);
            *plVar1 = *plVar1 + 1;
          }
          lVar17 = *plVar7;
          if (local_98 != 0) {
            plVar7 = (longlong *)(local_98 + 0x18);
            *plVar7 = *plVar7 + -1;
            if (*plVar7 == 0) {
              FUN_1432ccf00();
            }
          }
        }
        local_a8 = *(longlong *)(lVar16 + 0x28);
        if (local_a8 != 0) {
          local_b8 = 0;
          do {
            lVar16 = *(longlong *)(lVar16 + 0x20) + local_b8;
            if (iVar15 == 3) {
              bVar4 = *(byte *)(lVar16 + 0x54) & 1;
joined_r0x00014344066f:
              if (bVar4 != 0) {
LAB_143440675:
                if (iVar15 == 3) {
LAB_143440785:
                  local_res20[0] = *(undefined4 *)(lVar16 + 0x48);
                  FUN_143310f20(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xb0),local_78,
                                local_res20);
                  if (local_78[0] == 0) goto LAB_1434409c1;
                  lVar12 = *(longlong *)(param_1 + 0x20);
                  plVar8 = *(longlong **)(*(longlong *)(lVar12 + 0x20) + 0x18);
                  local_b0[0] = *(undefined4 *)(lVar16 + 0x48);
                  pRVar9 = (RefCountNTSImpl *)
                           (**(code **)(*plVar8 + 0x20))
                                     (plVar8,*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0x10),
                                      local_78,lVar12,local_b0,0);
                  if (pRVar9 != (RefCountNTSImpl *)0x0) {
                    *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
                  }
                  FUN_1433a65a0(plVar18,plVar18,plVar18[1] + 1);
                  puVar13 = (undefined8 *)(*plVar18 + -0x10 + plVar18[1] * 0x10);
                  if (puVar13 != (undefined8 *)0x0) {
                    if (pRVar9 != (RefCountNTSImpl *)0x0) {
                      *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
                    }
                    *puVar13 = pRVar9;
                    puVar13[1] = lVar16;
                  }
                  if (pRVar9 != (RefCountNTSImpl *)0x0) {
                    Scaleform::RefCountNTSImpl::Release(pRVar9);
                  }
                  uVar11 = FUN_14336b350(pRVar9);
                  lVar12 = FUN_1432cd1e0(lVar17);
                  uVar3 = *(ulonglong *)(lVar12 + 0x90);
                  pRVar14 = pRVar19;
                  if (uVar3 != 0) {
                    if ((uVar3 & 1) == 0) {
                      pRVar14 = (RefCountNTSImpl *)
                                ((ulonglong)(*(longlong *)(lVar12 + 0x98) != 0) + 1);
                    }
                    else {
                      pRVar14 = *(RefCountNTSImpl **)((uVar3 & 0xfffffffffffffffe) + 8);
                    }
                  }
                  FUN_143364100(lVar17,pRVar14,uVar11);
                  if (*(longlong *)(lVar16 + 0x40) != 0) {
                    (**(code **)(*(longlong *)pRVar9 + 0x1c0))(pRVar9);
                  }
                  (**(code **)(*(longlong *)pRVar9 + 0x18))(pRVar9,lVar16);
                  FUN_1433679d0(pRVar9,lVar16 + 0x20);
                  (**(code **)(*(longlong *)pRVar9 + 0x80))(pRVar9,*(undefined4 *)(lVar16 + 0x50));
                  lVar12 = *(longlong *)(pRVar9 + 0x38);
                  *(ushort *)(pRVar9 + 0x6a) = *(ushort *)(pRVar9 + 0x6a) & 0xfffe;
                  for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x38)) {
                    pfVar10 = (float *)FUN_143367db0(lVar12,local_58);
                    if ((*pfVar10 < pfVar10[2]) && (pfVar10[1] < pfVar10[3])) {
                      *(ushort *)(pRVar9 + 0x6a) = *(ushort *)(pRVar9 + 0x6a) | 1;
                      (**(code **)(*(longlong *)pRVar9 + 0xa0))(pRVar9);
                      break;
                    }
                  }
                  pRVar14 = pRVar19;
                  if ((char)pRVar9[0x6a] < '\0') {
                    pRVar14 = pRVar9;
                  }
                  if (pRVar14 != (RefCountNTSImpl *)0x0) {
                    FUN_143440ab0(param_1,pRVar14,lVar16);
                    Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar14);
                    if (((*(uint *)(pRVar14 + 0xb8) >> 0x15 & 1) == 0) ||
                       ((*(uint *)(pRVar14 + 0xb8) >> 0x16 & 1) != 0)) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = 1;
                    }
                    iVar6 = (**(code **)(*(longlong *)pRVar14 + 0x340))(pRVar14,uVar11);
                    if (iVar6 == -1) {
                      *(uint *)(pRVar14 + 0xb8) = *(uint *)(pRVar14 + 0xb8) | 0x400000;
                    }
                    else if (iVar6 == 1) {
                      FUN_14336e960(pRVar14);
                    }
                    (**(code **)(*(longlong *)pRVar9 + 0x250))(pRVar9);
                  }
                }
                else {
                  plVar8 = (longlong *)FUN_143440ee0(param_1,local_88,lVar16);
                  if (*plVar8 != 0) {
                    piVar2 = (int *)(*plVar8 + 8);
                    *piVar2 = *piVar2 + 1;
                  }
                  pRVar9 = (RefCountNTSImpl *)*plVar8;
                  lVar12 = plVar8[1];
                  if (local_88[0] != (RefCountNTSImpl *)0x0) {
                    Scaleform::RefCountNTSImpl::Release(local_88[0]);
                  }
                  if (pRVar9 == (RefCountNTSImpl *)0x0) goto LAB_143440785;
                  FUN_1433a65a0(plVar18,plVar18,plVar18[1] + 1);
                  plVar8 = (longlong *)(*plVar18 + -0x10 + plVar18[1] * 0x10);
                  if (plVar8 != (longlong *)0x0) {
                    *(int *)(pRVar9 + 8) = *(int *)(pRVar9 + 8) + 1;
                    *plVar8 = (longlong)pRVar9;
                    plVar8[1] = lVar12;
                  }
                  uVar11 = FUN_14336b350(pRVar9);
                  lVar12 = FUN_1432cd1e0(lVar17);
                  uVar3 = *(ulonglong *)(lVar12 + 0x90);
                  pRVar14 = pRVar19;
                  if (uVar3 != 0) {
                    if ((uVar3 & 1) == 0) {
                      pRVar14 = (RefCountNTSImpl *)
                                ((ulonglong)(*(longlong *)(lVar12 + 0x98) != 0) + 1);
                    }
                    else {
                      pRVar14 = *(RefCountNTSImpl **)((uVar3 & 0xfffffffffffffffe) + 8);
                    }
                  }
                  FUN_143364100(lVar17,pRVar14,uVar11);
                  if (*(longlong *)(lVar16 + 0x40) != 0) {
                    (**(code **)(*(longlong *)pRVar9 + 0x1c0))(pRVar9);
                  }
                  (**(code **)(*(longlong *)pRVar9 + 0x18))(pRVar9,lVar16);
                  FUN_1433679d0(pRVar9,lVar16 + 0x20);
                  (**(code **)(*(longlong *)pRVar9 + 0x80))(pRVar9,*(undefined4 *)(lVar16 + 0x50));
                }
                Scaleform::RefCountNTSImpl::Release(pRVar9);
              }
            }
            else {
              if (param_2 == 0) {
                bVar4 = *(byte *)(lVar16 + 0x54) & 8;
                goto joined_r0x00014344066f;
              }
              if (param_2 == 1) {
                if ((*(byte *)(lVar16 + 0x54) & 2) == 0) goto LAB_1434409c1;
                goto LAB_143440675;
              }
              if (param_2 == 2) {
                bVar4 = *(byte *)(lVar16 + 0x54) & 4;
                goto joined_r0x00014344066f;
              }
            }
LAB_1434409c1:
            local_b8 = local_b8 + 0x60;
            local_a8 = local_a8 + -1;
            lVar16 = local_a0;
          } while (local_a8 != 0);
          local_a8 = 0;
          plVar8 = local_90;
        }
      }
      if ((iVar15 != 3) && (*(longlong *)(lVar17 + 0x30) == 0)) {
        uVar11 = (**(code **)(*plVar8 + 0x230))(plVar8);
        lVar12 = FUN_1432cd1e0(uVar11);
        uVar3 = *(ulonglong *)(lVar12 + 0x90);
        pRVar9 = pRVar19;
        if (uVar3 != 0) {
          if ((uVar3 & 1) == 0) {
            pRVar9 = (RefCountNTSImpl *)((ulonglong)(*(longlong *)(lVar12 + 0x98) != 0) + 1);
          }
          else {
            pRVar9 = *(RefCountNTSImpl **)((uVar3 & 0xfffffffffffffffe) + 8);
          }
        }
        FUN_143364100(uVar11,pRVar9,lVar17);
      }
      if (lVar17 != 0) {
        plVar18 = (longlong *)(lVar17 + 0x18);
        *plVar18 = *plVar18 + -1;
        if (*plVar18 == 0) {
          FUN_1432ccf00(lVar17);
        }
      }
    }
    pRVar14 = (RefCountNTSImpl *)(ulonglong)(iVar15 + 1U);
    if (3 < iVar15 + 1U) {
      do {
        iVar15 = (int)pRVar19;
        if ((iVar15 != iVar5) && (iVar15 != 3)) {
          FUN_143de4f80(plVar8,pRVar19);
        }
        pRVar19 = (RefCountNTSImpl *)(ulonglong)(iVar15 + 1U);
      } while (iVar15 + 1U < 4);
      return;
    }
  } while( true );
}



// FUNCTION 143440ab0 FUN_143440ab0 body=1062 status=ok
// SIG undefined FUN_143440ab0(void)

void FUN_143440ab0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong *local_res10;
  ulonglong local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong uStack_70;
  undefined4 local_68;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong lStack_38;
  byte local_30;
  
  if ((*(ushort *)((longlong)param_2 + 0x6a) >> 10 & 1) == 0) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0xb8))();
  bVar9 = 0;
  local_res10 = (ulonglong *)CONCAT44(local_res10._4_4_,*(undefined4 *)(param_3 + 0x48));
  local_30 = 0;
  local_40 = 0;
  lStack_38 = 0;
  uVar4 = (**(code **)(*param_2 + 0x218))(param_2);
  puVar5 = (ulonglong *)FUN_143312150(uVar4,&local_res10);
  lVar6 = local_40;
  if (puVar5 == (ulonglong *)0x0) goto LAB_143440e7a;
  lVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  local_res20 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x618)
                              ,(longlong)(*puVar5 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(*puVar5 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  lVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (*(byte *)(lVar6 + 0xf0) < 7) {
    local_res10 = &local_res20;
    if (*(longlong *)(local_res20 + 0x10) == 0) {
      FUN_14335f970(local_res20);
    }
    if (((*(longlong *)(lVar3 + 0x18) != 0) &&
        (lVar6 = FUN_143493ca0(lVar3 + 0x18,&local_res10,
                               (ulonglong)*(uint *)(local_res20 + 0x1c) &
                               *(ulonglong *)(*(longlong *)(lVar3 + 0x18) + 8)), -1 < lVar6)) &&
       (lVar6 = *(longlong *)(lVar3 + 0x18) + (lVar6 * 5 + 3) * 8, lVar6 != 0)) {
      lVar6 = lVar6 + 8;
      goto LAB_143440ca7;
    }
LAB_143440d95:
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_78 = CONCAT31(local_78._1_3_,5);
    uStack_70 = local_res20;
    FUN_1434a3be0(&local_58,&local_58,1);
    lVar6 = uStack_50 * 0x20 + local_58 + -0x20;
    if (lVar6 == 0) {
LAB_143440de3:
      FUN_143411150(&local_78);
    }
    else {
      FUN_143410ec0(lVar6,&local_78);
      if (4 < (byte)local_78) goto LAB_143440de3;
    }
    lVar6 = FUN_1434372c0(*(longlong *)(param_1[4] + 0x20) + 0x80,3);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 8) = 4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      if (*(RefCountNTSImpl **)(lVar6 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x10));
      }
      *(longlong **)(lVar6 + 0x10) = param_2;
      if (*(RefCountNTSImpl **)(lVar6 + 0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x18));
      }
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(code **)(lVar6 + 0x50) = FUN_14342e790;
      FUN_143499890(lVar6 + 0x58,&local_58);
    }
    FUN_1434976a0(&local_58);
    lVar6 = local_40;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    if (lVar3 != 0) {
      uVar2 = *(ulonglong *)(lVar3 + 8);
      uVar8 = *(uint *)(local_res20 + 0x1c) & uVar2;
      lVar6 = uVar8 * 5 + 2;
      puVar5 = (ulonglong *)(lVar3 + lVar6 * 8);
      if ((*(longlong *)(lVar3 + lVar6 * 8) != -2) &&
         (uVar7 = uVar8, (*(uint *)(puVar5[1] + 0x1c) & uVar2) == uVar8)) {
        while (((*(uint *)(puVar5[1] + 0x1c) & uVar2) != uVar8 || (puVar5[1] != local_res20))) {
          uVar7 = *puVar5;
          if (uVar7 == 0xffffffffffffffff) goto code_r0x000143440c3b;
          puVar5 = (ulonglong *)(lVar3 + uVar7 * 0x28 + 0x10);
        }
        if (-1 < (longlong)uVar7) {
          lVar3 = lVar3 + (uVar7 * 5 + 3) * 8;
          lVar6 = lVar3 + 8;
          if (lVar3 == 0) {
            lVar6 = 0;
          }
          goto LAB_143440ca7;
        }
      }
    }
code_r0x000143440c3b:
    lVar6 = 0;
LAB_143440ca7:
    if (lVar6 == 0) goto LAB_143440d95;
    FUN_143410a60(&local_40);
    uVar4 = (**(code **)(*(longlong *)
                          ((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4) +
                        8))((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_2 + 0x6d) * 4);
    lVar6 = local_40;
    lVar3 = local_40 + 0x20;
    if (local_40 == 0) {
      lVar3 = 0;
    }
    FUN_143421c00(uVar4,lVar3);
    lVar3 = FUN_1434372c0(*(longlong *)(param_1[4] + 0x20) + 0x80,3);
    if (lVar3 != 0) {
      local_58 = 0x40000;
      uStack_70 = uStack_50 >> 0x28;
      uStack_50 = uStack_70 << 0x28;
      local_48 = CONCAT44(local_48._4_4_,0xff00);
      local_78 = 0x40000;
      uStack_74 = 0;
      uStack_70 = uStack_70 << 0x28;
      local_68 = 0xff00;
      FUN_1434a40a0(lVar3,param_2,&local_78);
    }
    lVar3 = FUN_1434372c0(*(longlong *)(param_1[4] + 0x20) + 0x80,3);
    bVar9 = local_30;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 8) = 3;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      if (*(RefCountNTSImpl **)(lVar3 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x10));
      }
      *(longlong **)(lVar3 + 0x10) = param_2;
      if (*(RefCountNTSImpl **)(lVar3 + 0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x18));
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      FUN_143410a60(lVar3 + 0x38,&local_40);
      bVar9 = local_30;
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_143440e7a:
  if ((((bVar9 & 2) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  if ((((bVar9 & 1) == 0) && (lStack_38 != 0)) && ((*(uint *)(lStack_38 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(lStack_38 + 0x18) = *(uint *)(lStack_38 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}



// FUNCTION 143440ee0 FUN_143440ee0 body=291 status=ok
// SIG undefined FUN_143440ee0(void)

undefined8 * FUN_143440ee0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  RefCountNTSImpl *this;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  uVar5 = 0;
  do {
    if (uVar5 != 3) {
      uVar6 = 0;
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0xe8 + (longlong)(int)uVar5 * 0x20);
      if (plVar7[1] != 0) {
        plVar4 = (longlong *)(*plVar7 + 8);
        do {
          if (*plVar4 == param_3) {
            lVar2 = *plVar7;
            lVar8 = uVar6 * 0x10;
            if (*(longlong *)(lVar2 + lVar8) != 0) {
              piVar1 = (int *)(*(longlong *)(lVar2 + lVar8) + 8);
              *piVar1 = *piVar1 + 1;
            }
            this = *(RefCountNTSImpl **)(lVar2 + lVar8);
            uVar3 = *(undefined8 *)(lVar2 + 8 + lVar8);
            if (plVar7[1] == 1) {
              FUN_1433a65a0(plVar7,plVar7,0);
            }
            else {
              if (*(RefCountNTSImpl **)(lVar8 + *plVar7) != (RefCountNTSImpl *)0x0) {
                Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar8 + *plVar7));
              }
              memmove((void *)(*plVar7 + lVar8),(void *)(*plVar7 + lVar8 + 0x10),
                      (plVar7[1] - uVar6) * 0x10 - 0x10);
              plVar7[1] = plVar7[1] + -1;
            }
            if (this != (RefCountNTSImpl *)0x0) {
              *(int *)(this + 8) = *(int *)(this + 8) + 1;
            }
            *param_2 = this;
            param_2[1] = uVar3;
            if (this != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release(this);
            }
            return param_2;
          }
          uVar6 = uVar6 + 1;
          plVar4 = plVar4 + 2;
        } while (uVar6 < (ulonglong)plVar7[1]);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143441020 FUN_143441020 body=190 status=ok
// SIG undefined FUN_143441020(void)

undefined8 * FUN_143441020(undefined8 *param_1,longlong *param_2)

{
  undefined1 local_res8 [8];
  byte local_28 [8];
  undefined1 local_20;
  
  FUN_143494d30();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0cc10;
  param_1[4] = &PTR_LAB_145b0cc58;
  param_1[0xe] = &PTR_LAB_145b0cd00;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_getDepth_145b074f0,local_res8);
  local_res8[0] = 3;
  local_28[0] = 2;
  local_20 = 1;
  FUN_143415510(param_1 + 4,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x538,
                local_28,local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_1;
}



// FUNCTION 1434410f0 FUN_1434410f0 body=60 status=ok
// SIG undefined FUN_1434410f0(void)

void FUN_1434410f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (lVar2 != 0) {
    FUN_143496350(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143441150 FUN_143441150 body=727 status=ok
// SIG undefined FUN_143441150(void)

longlong * FUN_143441150(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
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
    puVar2[0xd] = &DAT_143441140;
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
    *puVar2 = &PTR_LAB_145b0cd08;
    puVar2[4] = &PTR_LAB_145b0aef8;
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xb0,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_143441020(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,9,&local_res8);
  local_40[0] = *param_1;
  lVar4 = *(longlong *)(param_2 + 0x60);
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
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x180,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 143441430 FUN_143441430 body=375 status=ok
// SIG undefined FUN_143441430(void)

undefined8 *
FUN_143441430(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,longlong *param_6,int param_7)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FUN_1434148b0();
  uVar10 = 0;
  *param_1 = &PTR_LAB_145b0cd90;
  param_1[4] = &PTR_LAB_145b0ce18;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  param_1[0xf] = param_3;
  plVar1 = param_1 + 0x10;
  *plVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_5;
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x138);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = lVar5;
  iVar4 = *(int *)(lVar5 + 0x18);
  *(int *)(lVar5 + 0x18) = iVar4;
  if (iVar4 == 0) {
    FUN_14335f920();
  }
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(char *)((longlong)param_1 + 0xca) = (char)param_7;
  *(undefined1 *)((longlong)param_1 + 0xcb) = 0;
  if ((param_6 != (longlong *)0x0) &&
     (FUN_1434a3790(plVar1,param_6[1]), uVar11 = uVar10, param_1[0x11] != 0)) {
    do {
      uVar11 = uVar11 + 1;
      puVar2 = (undefined4 *)(uVar10 + *param_6);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(uVar10 + *plVar1);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      uVar10 = uVar10 + 0x10;
    } while (uVar11 < (ulonglong)param_1[0x11]);
  }
  if (1 < param_7 - 3U) {
    lVar5 = *(longlong *)(param_2 + 0xe0);
    lVar9 = *(longlong *)(lVar5 + 0x70);
    if (lVar9 == 0) {
      lVar9 = FUN_14336c170(lVar5);
    }
    FUN_1432efba0(param_1 + 0xe,lVar9);
    param_1[0xd] = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x10);
  }
  return param_1;
}



// FUNCTION 1434415b0 FUN_1434415b0 body=202 status=ok
// SIG undefined FUN_1434415b0(void)

RefCountNTSImpl * FUN_1434415b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  RefCountNTSImpl *pRVar1;
  longlong *plVar2;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar3;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    this = (RefCountNTSImpl *)0x0;
    pRVar3 = this;
  }
  else {
    pRVar1 = (RefCountNTSImpl *)
             Scaleform::GFx::CharacterHandle::ResolveCharacter(*(undefined8 *)(param_1 + 0x70));
    if (pRVar1 == (RefCountNTSImpl *)0x0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      pRVar3 = (RefCountNTSImpl *)0x0;
      this = (RefCountNTSImpl *)0x0;
      if ((char)pRVar1[0x6a] < '\0') {
        this = pRVar1;
      }
      if (this == (RefCountNTSImpl *)0x0) goto LAB_14344162f;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    pRVar3 = (RefCountNTSImpl *)0x0;
    if (this != (RefCountNTSImpl *)0x0) {
      plVar2 = (longlong *)
               (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                         (this + (ulonglong)(byte)this[0x6d] * 4);
      pRVar3 = (RefCountNTSImpl *)(**(code **)(*plVar2 + 0xf0))(plVar2);
    }
  }
LAB_14344162f:
  if (param_3 != (undefined8 *)0x0) {
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if ((RefCountNTSImpl *)*param_3 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_3);
    }
    *param_3 = this;
  }
  if (pRVar3 == (RefCountNTSImpl *)0x0) {
    pRVar3 = *(RefCountNTSImpl **)(param_2 + 0x30);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return pRVar3;
}



// FUNCTION 143441680 FUN_143441680 body=396 status=ok
// SIG undefined FUN_143441680(void)

void FUN_143441680(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  RefCountNTSImpl *local_40;
  RefCountNTSImpl *local_38;
  RefCountNTSImpl *pRStack_30;
  longlong local_28;
  longlong lStack_20;
  
  local_38 = (RefCountNTSImpl *)0x0;
  pRStack_30 = (RefCountNTSImpl *)0x0;
  local_28 = 0;
  lStack_20 = 0;
  local_40 = (RefCountNTSImpl *)0x0;
  local_68 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  local_60 = (longlong *)(**(code **)(*param_1 + 0x48))(0,0,&local_40);
  if ((*(byte *)(local_60[0x1c] + 0x6a) >> 4 & 1) != 0) {
    local_60 = *(longlong **)(param_2 + 0x30);
  }
  uVar1 = *(ushort *)((longlong)local_60 + 0x17c);
  *(ushort *)((longlong)local_60 + 0x17c) = uVar1 + 1;
  if (uVar1 < 0xff) {
    FUN_143483400(&local_68);
    FUN_14340be30(param_1[0xf],local_60,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c)
                  ,*(undefined8 *)(param_2 + 8),param_1 + 0x10,
                  *(undefined1 *)((longlong)param_1 + 0xca));
    FUN_1434845d0(&local_68);
  }
  else {
    cVar2 = (**(code **)(*local_60 + 8))();
    if (cVar2 != '\0') {
      FUN_1434171c0(local_60,"Stack overflow, max level of 255 nested calls is reached.");
    }
  }
  *(short *)((longlong)local_60 + 0x17c) = *(short *)((longlong)local_60 + 0x17c) + -1;
  if ((lStack_20 != 0) && ((*(uint *)(lStack_20 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lStack_20 + 0x18) = *(uint *)(lStack_20 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if ((local_28 != 0) && ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if (pRStack_30 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_30);
  }
  if (local_38 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_38);
  }
  if (local_40 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_40);
  }
  return;
}



// FUNCTION 143441820 FUN_143441820 body=60 status=ok
// SIG undefined FUN_143441820(void)

void FUN_143441820(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_1434148b0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143441870 FUN_143441870 body=61 status=ok
// SIG undefined FUN_143441870(void)

longlong FUN_143441870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter(*(undefined8 *)(param_1 + 0x70));
    if (lVar1 != 0) {
      lVar2 = 0;
      if (*(char *)(lVar1 + 0x6a) < '\0') {
        lVar2 = lVar1;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1434418c0 FUN_1434418c0 body=2527 status=ok
// SIG undefined FUN_1434418c0(void)

void FUN_1434418c0(longlong param_1,longlong param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  RefCountImpl *pRVar10;
  RefCountNTSImpl *pRVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong *local_res20;
  undefined8 local_148;
  int local_140;
  int local_13c;
  byte local_138 [32];
  undefined1 local_118 [40];
  RefCountNTSImpl *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if (param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 != '\x06') {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar9 = FUN_143412120(param_4,*(undefined8 *)(param_2 + 0x30));
  local_138[0] = 0;
  local_d0 = Scaleform::GFx::TextField::CreateImageSubstitutor(lVar3);
  if (local_d0 == 0) goto LAB_143442234;
  plVar15 = (longlong *)(lVar9 + 0x20);
  local_f0 = (RefCountNTSImpl *)0x0;
  plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
  local_e0 = plVar15;
  local_res20 = (longlong *)
                FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar13 + 0x28) + 0x18) + 0x618),
                              "subString",9);
  *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
  cVar6 = (**(code **)(*plVar15 + 0x58))(plVar15,plVar13,&local_res20,local_138);
  plVar13 = local_res20 + 3;
  *(int *)plVar13 = (int)*plVar13 + -1;
  if ((int)*plVar13 == 0) {
    FUN_14335f920();
  }
  if (cVar6 == '\0') {
    Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x20),&local_res20);
    pcVar12 = "%s.setImageSubstitutions() failed for #%d element - subString should be specified";
LAB_1434421fd:
    FUN_1434a1590(lVar3 + 0x18,pcVar12,*local_res20,param_3);
LAB_143442214:
    plVar15 = local_res20 + 3;
    *(int *)plVar15 = (int)*plVar15 + -1;
    if ((int)*plVar15 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_143411540(local_138,&local_res20,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
    uVar7 = FUN_14335fa60(&local_res20);
    if (0xf < uVar7) {
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x20),&local_148);
      FUN_1434a1590(lVar3 + 0x18,
                    "%s.setImageSubstitutions() failed for #%d element - length of subString should not exceed 15 characters"
                    ,*local_148,param_3);
      piVar1 = (int *)(local_148 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_143442214;
    }
    FUN_143306bc0(local_118,0x14,*local_res20,(int)local_res20[4] + 1);
    local_e8 = (undefined1)uVar7;
    plVar13 = local_res20 + 3;
    *(int *)plVar13 = (int)*plVar13 + -1;
    if ((int)*plVar13 == 0) {
      FUN_14335f920();
    }
    fVar17 = 0.0;
    local_d8 = 0;
    plVar14 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
    plVar13 = (longlong *)0x0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar21 = 0.0;
    fVar20 = 0.0;
    local_res20 = (longlong *)
                  FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                "image",5,0);
    *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
    cVar6 = (**(code **)(*plVar15 + 0x58))(plVar15,plVar14,&local_res20,local_138);
    plVar15 = local_res20 + 3;
    *(int *)plVar15 = (int)*plVar15 + -1;
    if ((int)*plVar15 == 0) {
      FUN_14335f920();
    }
    if (((cVar6 == '\0') ||
        (lVar9 = FUN_143412120(local_138,*(undefined8 *)(param_2 + 0x30)), lVar9 == 0)) ||
       (iVar8 = (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))(lVar9 + 0x20), iVar8 != 0x1a)) {
LAB_1434421d4:
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x20),&local_res20);
      pcVar12 = 
      "%s.setImageSubstitutions() failed for #%d element - \'image\' is not specified or not a BitmapData"
      ;
      goto LAB_1434421fd;
    }
    puVar4 = *(undefined8 **)(lVar9 + 0x68);
    local_148 = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      Scaleform::GFx::DisplayObject::GetName(*(longlong **)(param_1 + 0x20),&local_res20);
      pcVar12 = "%s.setImageSubstitutions() failed for #%d element - failed to get ImageResource";
      goto LAB_1434421fd;
    }
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x218))();
    if (lVar9 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar9);
    }
    iVar8 = (**(code **)(*(longlong *)puVar4[3] + 0x18))();
    if (iVar8 == 0) {
      pRVar10 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar9 + 0x18) + 0x18))(lVar9 + 0x18,0xe);
      local_res20 = (longlong *)CONCAT71(local_res20._1_7_,pRVar10 == (RefCountImpl *)0x0);
      cVar6 = pRVar10 == (RefCountImpl *)0x0;
      if (pRVar10 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar10);
        cVar6 = (char)local_res20;
      }
      if (cVar6 == '\0') {
        local_c0 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
        local_c8[0] = 3;
        local_b8 = 1;
        local_b4 = 1;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        pRVar10 = (RefCountImpl *)
                  (**(code **)(*(longlong *)(lVar9 + 0x18) + 0x18))(lVar9 + 0x18,0xe);
        plVar13 = (longlong *)
                  (**(code **)(*(longlong *)pRVar10 + 0x20))(pRVar10,local_c8,local_148[3]);
        Scaleform::RefCountImpl::Release(pRVar10);
        goto LAB_143441e9c;
      }
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,0x21000);
      FUN_1433db230(&local_res20,"ImageCreator is null in ProceedImageSubstitution");
LAB_143441be8:
      if (lVar9 != 0) {
        FUN_1432de450(lVar9);
      }
      if (plVar13 == (longlong *)0x0) goto LAB_1434421d4;
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
      local_res20 = (longlong *)
                    FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*plVar15 + 0x28) + 0x18) + 0x618),
                                  "width",5);
      plVar14 = local_e0;
      *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
      cVar6 = (**(code **)(*local_e0 + 0x58))(local_e0,plVar15,&local_res20,local_138);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      if (cVar6 != '\0') {
        dVar5 = (double)FUN_143411a90(local_138,*(undefined8 *)(param_2 + 0x30));
        fVar18 = (float)(dVar5 * 20.0);
      }
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
      local_res20 = (longlong *)
                    FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*plVar15 + 0x28) + 0x18) + 0x618),
                                  "height",6);
      *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
      cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,plVar15,&local_res20,local_138);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      if (cVar6 != '\0') {
        dVar5 = (double)FUN_143411a90(local_138,*(undefined8 *)(param_2 + 0x30));
        fVar19 = (float)(dVar5 * 20.0);
      }
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
      local_res20 = (longlong *)
                    FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*plVar15 + 0x28) + 0x18) + 0x618),
                                  "baseLineX",9);
      *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
      cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,plVar15,&local_res20,local_138);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      if (cVar6 != '\0') {
        dVar5 = (double)FUN_143411a90(local_138,*(undefined8 *)(param_2 + 0x30));
        fVar17 = (float)(dVar5 * 20.0);
      }
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
      local_res20 = (longlong *)
                    FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*plVar15 + 0x28) + 0x18) + 0x618),
                                  "baseLineY",9);
      *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
      cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,plVar15,&local_res20,local_138);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      if (cVar6 == '\0') {
        fVar16 = fVar20 - 20.0;
      }
      else {
        dVar5 = (double)FUN_143411a90(local_138,*(undefined8 *)(param_2 + 0x30));
        fVar16 = (float)(dVar5 * 20.0);
      }
      plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8);
      local_res20 = (longlong *)
                    FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*plVar15 + 0x28) + 0x18) + 0x618),
                                  &DAT_145af4d5c,2);
      *(int *)(local_res20 + 3) = (int)local_res20[3] + 1;
      cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,plVar15,&local_res20,local_138);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      lVar9 = local_d8;
      if (cVar6 != '\0') {
        FUN_143411540(local_138,&local_res20,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
        lVar9 = *local_res20;
        plVar15 = local_res20 + 3;
        *(int *)plVar15 = (int)*plVar15 + -1;
        if ((int)*plVar15 == 0) {
          FUN_14335f920();
        }
      }
      plVar15 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8) + 0x30);
      pRVar11 = (RefCountNTSImpl *)(**(code **)(*plVar15 + 0x50))(plVar15,0x50);
      if (pRVar11 == (RefCountNTSImpl *)0x0) {
        pRVar11 = (RefCountNTSImpl *)0x0;
      }
      else {
        *(undefined8 *)(pRVar11 + 8) = 0;
        *(undefined ***)pRVar11 = &PTR_FUN_145b06ce0;
        *(undefined4 *)(pRVar11 + 8) = 1;
        *(undefined8 *)(pRVar11 + 0x10) = 0;
        *(undefined8 *)(pRVar11 + 0x18) = 0;
        *(undefined8 *)(pRVar11 + 0x20) = 0;
        *(undefined8 *)(pRVar11 + 0x30) = 0x3f800000;
        *(undefined8 *)(pRVar11 + 0x38) = 0;
        *(undefined4 *)(pRVar11 + 0x40) = 0;
        *(undefined8 *)(pRVar11 + 0x44) = 0x3f800000;
        *(undefined4 *)(pRVar11 + 0x4c) = 0;
      }
      if (local_f0 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_f0);
      }
      local_f0 = pRVar11;
      (**(code **)(*plVar13 + 8))(plVar13);
      if (*(longlong **)(pRVar11 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pRVar11 + 0x10) + 0x10))();
      }
      *(longlong **)(pRVar11 + 0x10) = plVar13;
      *(float *)(local_f0 + 0x18) = fVar17 * 0.05;
      *(float *)(local_f0 + 0x1c) = fVar16 * 0.05;
      *(float *)(local_f0 + 0x20) = fVar18;
      *(float *)(local_f0 + 0x24) = fVar19;
      if (lVar9 != 0) {
        FUN_143de9050(lVar3,lVar9,local_f0);
      }
      *(float *)(local_f0 + 0x3c) = -*(float *)(local_f0 + 0x18) + *(float *)(local_f0 + 0x3c);
      *(float *)(local_f0 + 0x4c) = -*(float *)(local_f0 + 0x1c) + *(float *)(local_f0 + 0x4c);
      fVar21 = *(float *)(local_f0 + 0x20) / fVar21;
      fVar20 = *(float *)(local_f0 + 0x24) / fVar20;
      *(float *)(local_f0 + 0x30) = fVar21 * *(float *)(local_f0 + 0x30);
      *(float *)(local_f0 + 0x34) = fVar21 * *(float *)(local_f0 + 0x34);
      *(float *)(local_f0 + 0x38) = fVar21 * *(float *)(local_f0 + 0x38);
      *(float *)(local_f0 + 0x3c) = fVar21 * *(float *)(local_f0 + 0x3c);
      *(float *)(local_f0 + 0x40) = fVar20 * *(float *)(local_f0 + 0x40);
      *(float *)(local_f0 + 0x44) = fVar20 * *(float *)(local_f0 + 0x44);
      *(float *)(local_f0 + 0x48) = fVar20 * *(float *)(local_f0 + 0x48);
      *(float *)(local_f0 + 0x4c) = fVar20 * *(float *)(local_f0 + 0x4c);
      FUN_1433faf80(local_d0,local_118);
      pbVar2 = (byte *)(*(longlong *)(lVar3 + 0xe0) + 0x15b);
      *pbVar2 = *pbVar2 | 2;
      FUN_143de5880(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else {
      plVar13 = (longlong *)puVar4[3];
      if (plVar13 == (longlong *)0x0) goto LAB_143441be8;
      (**(code **)(*plVar13 + 8))(plVar13);
LAB_143441e9c:
      if (plVar13 == (longlong *)0x0) goto LAB_143441be8;
      (**(code **)(*plVar13 + 0x30))(plVar13,&local_148);
      fVar21 = (float)(uint)(local_140 - (int)local_148);
      fVar20 = (float)(uint)(local_13c - local_148._4_4_);
      fVar19 = fVar20 * 20.0;
      fVar18 = fVar21 * 20.0;
      if ((fVar21 != 0.0) && (fVar20 != 0.0)) goto LAB_143441be8;
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x20),&local_res20);
      FUN_1434a1590(lVar3 + 0x18,
                    "%s.setImageSubstitutions() failed for #%d element - image has one zero dimension"
                    ,*local_res20,param_3);
      plVar15 = local_res20 + 3;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FUN_14335f920();
      }
      if (lVar9 != 0) {
        FUN_1432de450(lVar9);
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (local_f0 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_f0);
  }
LAB_143442234:
  if (4 < local_138[0]) {
    FUN_143411150(local_138);
  }
  return;
}



// FUNCTION 1434422b0 FUN_1434422b0 body=447 status=ok
// SIG undefined FUN_1434422b0(void)

undefined8 * FUN_1434422b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  
  uVar4 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[4] = param_2;
  param_1[1] = &PTR_LAB_145b0b230;
  param_1[5] = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  *param_1 = &PTR_FUN_145b0cef0;
  param_1[1] = &PTR_LAB_145b0d030;
  param_1[6] = &PTR_LAB_145b0d0d8;
  lVar3 = *(longlong *)(param_2 + 0xd8);
  uVar2 = Scaleform::GFx::InteractiveObject::GetStringManager(param_2);
  puVar5 = (ulonglong *)(*(ulonglong *)(lVar3 + 0x78) & 0xfffffffffffffffc);
  lVar3 = FUN_143360a90(uVar2,(longlong)puVar5 + 0xc,*puVar5 & 0x7fffffffffffffff);
  param_1[7] = lVar3;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  if (*(int *)(param_1[7] + 0x20) != 0) {
    *(uint *)(param_2 + 0xfc) = *(uint *)(param_2 + 0xfc) | 0x8000;
  }
  lVar3 = *(longlong *)(param_1[4] + 0x38);
  do {
    if (lVar3 == 0) {
LAB_1434423bc:
      lVar3 = FUN_14341b890(*(undefined8 *)(*(longlong *)(param_1[4] + 0x20) + 0x50),uVar4,10);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      lVar1 = param_1[3];
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80();
      }
      param_1[3] = lVar3;
      lVar3 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 0xf0)
              )(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
      FUN_1434645d0(lVar3 + 0xe8,param_1 + 1);
      uVar2 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 0xf0)
              )(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
      FUN_1434646c0(uVar2,param_1 + 1,param_1 + 1);
      return param_1;
    }
    if ((*(ushort *)(lVar3 + 0x6a) >> 10 & 1) != 0) {
      uVar4 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 0xf0))();
      goto LAB_1434423bc;
    }
    lVar3 = *(longlong *)(lVar3 + 0x38);
  } while( true );
}



// FUNCTION 143442480 FUN_143442480 body=279 status=ok
// SIG undefined FUN_143442480(void)

void FUN_143442480(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  byte local_28 [32];
  
  lVar1 = param_1[4];
  lVar3 = FUN_1432c3580(*(longlong *)(lVar1 + 0xd8) + 0x70);
  if (lVar3 == 0) {
    FUN_143dec020(lVar1,&DAT_145af3922,
                  CONCAT31((uint3)(*(uint *)(lVar1 + 0xfc) >> 9),
                           (char)(*(uint *)(lVar1 + 0xfc) >> 1)) & 0xffffff01,0);
  }
  else {
    if (*(int *)(param_1[7] + 0x20) != 0) {
      *(uint *)(lVar1 + 0xfc) = *(uint *)(lVar1 + 0xfc) | 0x8000;
      lVar3 = (**(code **)(*param_1 + 0xf0))();
      if (lVar3 != 0) {
        local_28[0] = 0;
        cVar2 = FUN_1434175f0(lVar3,param_1 + 7,local_28,0,0,0,0);
        if (4 < local_28[0]) {
          FUN_143411150(local_28);
        }
        if (cVar2 != '\0') goto LAB_143442579;
      }
    }
    FUN_143dec020(lVar1,(*(ulonglong *)(*(longlong *)(param_1[4] + 0xd8) + 0x70) &
                        0xfffffffffffffffc) + 0xc,
                  CONCAT31((uint3)(*(uint *)(lVar1 + 0xfc) >> 9),
                           (char)(*(uint *)(lVar1 + 0xfc) >> 1)) & 0xffffff01,1);
    (**(code **)(param_1[6] + 0x100))(param_1 + 6);
  }
LAB_143442579:
                    /* WARNING: Could not recover jumptable at 0x000143442590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[6] + 0xf8))(param_1 + 6);
  return;
}



// FUNCTION 1434425a0 FUN_1434425a0 body=253 status=ok
// SIG undefined FUN_1434425a0(void)

bool FUN_1434425a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong local_res8;
  byte local_28 [32];
  
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    local_28[0] = 0;
    lVar6 = (**(code **)(*param_1 + 0xe8))();
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),"tabEnabled",10);
    plVar1 = (longlong *)(lVar3 + 0x20);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    cVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,(longlong *)(lVar6 + 0xe8),&local_res8,local_28);
    piVar2 = (int *)(local_res8 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    if (((cVar4 != '\0') && (local_28[0] != 0)) && (local_28[0] != 10)) {
      uVar5 = FUN_143411fd0(local_28,lVar6);
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
      return (bool)uVar5;
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  cVar4 = Scaleform::GFx::TextField::IsReadOnly(param_1[4]);
  return cVar4 == '\0';
}



// FUNCTION 1434426b0 HasStyleSheet body=39 status=ok
// SIG undefined HasStyleSheet(void)

undefined1 Scaleform::GFx::AS2::AvmTextField::HasStyleSheet(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + -0x10));
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1434426e0 FUN_1434426e0 body=462 status=ok
// SIG undefined FUN_1434426e0(void)

void FUN_1434426e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong local_res8;
  undefined **local_38;
  undefined8 local_30;
  
  lVar6 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))(param_1 + -0x30);
  if (lVar6 == 0) {
    return;
  }
  iVar8 = 1;
  if ((*(char *)(*(longlong *)(lVar6 + 0xe8) + 0x68) == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + -0x10) + 0x128), iVar2 != -1)) {
    *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 0x20;
    if (*(ulonglong *)(lVar6 + 0x18) <= *(ulonglong *)(lVar6 + 8)) {
      FUN_1434a29d0(lVar6 + 8);
    }
    puVar3 = *(undefined1 **)(lVar6 + 8);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 4;
      *(int *)(puVar3 + 8) = iVar2;
    }
    iVar8 = 2;
  }
  local_38 = (undefined **)CONCAT71(local_38._1_7_,7);
  if (*(longlong *)(param_1 + -0x10) == 0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = *(int **)(*(longlong *)(param_1 + -0x10) + 0x70);
    if (local_30 == (int *)0x0) {
      local_30 = (int *)FUN_14336c170();
    }
    if (local_30 != (int *)0x0) {
      *local_30 = *local_30 + 1;
    }
  }
  *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 0x20;
  if (*(ulonglong *)(lVar6 + 0x18) <= *(ulonglong *)(lVar6 + 8)) {
    FUN_1434a29d0(lVar6 + 8);
  }
  if (*(longlong *)(lVar6 + 8) != 0) {
    FUN_143410ec0(*(longlong *)(lVar6 + 8),&local_38);
    if ((byte)local_38 < 5) goto LAB_1434427d6;
  }
  FUN_143411150(&local_38);
LAB_1434427d6:
  lVar4 = *(longlong *)(lVar6 + 8);
  lVar7 = param_1 + -0x28;
  if (param_1 + -0x30 == 0) {
    lVar7 = 0;
  }
  lVar5 = *(longlong *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x30);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x618),
                             "onChanged",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (lVar7 != 0) {
    local_38 = &PTR_FUN_145b11e98;
    local_30 = (int *)CONCAT44(iVar2 * 0x20 + (int)(lVar4 - lVar5 >> 5) + -0x20,iVar8);
    FUN_1434649e0(lVar6,lVar7,&local_res8,&local_38);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  do {
    if (4 < **(byte **)(lVar6 + 8)) {
      FUN_143411150();
    }
    *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + -0x20;
    if (*(ulonglong *)(lVar6 + 8) < *(ulonglong *)(lVar6 + 0x10)) {
      FUN_1434a25c0(lVar6 + 8);
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}



// FUNCTION 1434428c0 FUN_1434428c0 body=754 status=ok
// SIG undefined FUN_1434428c0(void)

undefined8 FUN_1434428c0(longlong param_1,int *param_2)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  RefCountNTSImpl *pRVar6;
  ulonglong uVar7;
  char *_Str;
  undefined4 uVar8;
  ulonglong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  char *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (*param_2 != 0x800) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + -0x10);
  if ((*(uint *)(lVar1 + 0xfc) >> 1 & 1) == 0) {
    return 1;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x10) + 0x40) & 1) == 0) {
    return 1;
  }
  cVar2 = FUN_143dea940(lVar1,(int)*(char *)((longlong)param_2 + 0x11),&local_res18,0);
  if (cVar2 == '\0') {
    return 1;
  }
  lVar4 = FUN_1433fe9a0(*(undefined8 *)(lVar1 + 0xe0),local_res18,local_res1c);
  if (lVar4 == -1) {
    return 1;
  }
  cVar2 = FUN_1433e6590(*(undefined8 *)(*(longlong *)(lVar1 + 0xe0) + 0x10),&local_res20,0,lVar4);
  if (cVar2 == '\0') {
    return 1;
  }
  cVar2 = Scaleform::Render::Text::TextFormat::IsUrlSet(local_res20);
  if (cVar2 == '\0') {
    return 1;
  }
  uVar7 = *(ulonglong *)(local_res20 + 0x20) & 0xfffffffffffffffc;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x10);
  if (lVar1 == 0) {
    return 1;
  }
  iVar3 = FUN_1432c42c0(uVar7 + 0xc,"asfunction:",0xb);
  if (iVar3 != 0) {
    return 1;
  }
  _Str = (char *)(uVar7 + 0x17);
  pcVar5 = strchr(_Str,0x2c);
  FUN_1432c2f70(&local_res10);
  local_88 = (longlong *)0x0;
  uVar8 = 0;
  local_80 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  if (pcVar5 == (char *)0x0) {
    Scaleform::String::operator=(&local_res10,_Str);
  }
  else {
    FUN_1432c3950(&local_res10,_Str,(longlong)pcVar5 - (longlong)_Str);
    uVar8 = 1;
    if ((local_80 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
      local_88 = (longlong *)0x0;
    }
    local_80 = 6;
    local_78 = pcVar5 + 1;
  }
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  this = *(RefCountNTSImpl **)(*(longlong *)(param_1 + -0x10) + 0x38);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    pRVar6 = (RefCountNTSImpl *)0x0;
    if ((*(ushort *)(this + 0x6a) >> 10 & 1) != 0) {
      pRVar6 = this;
    }
    if (pRVar6 != (RefCountNTSImpl *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1f0))
                (*(longlong **)(lVar1 + 0x18),pRVar6,(local_res10 & 0xfffffffffffffffc) + 0xc,
                 &local_68,&local_98,uVar8);
      goto LAB_143442afc;
    }
  }
  (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1c8))
            (*(longlong **)(lVar1 + 0x18),(local_res10 & 0xfffffffffffffffc) + 0xc,&local_68,
             &local_98,CONCAT44(uVar9,uVar8));
LAB_143442afc:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
    local_58 = (longlong *)0x0;
  }
  local_50 = 0;
  if ((local_80 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
    local_88 = (longlong *)0x0;
  }
  local_80 = 0;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  return 1;
}



// FUNCTION 143442bd0 FUN_143442bd0 body=685 status=ok
// SIG undefined FUN_143442bd0(void)

void FUN_143442bd0(longlong param_1)

{
  RefCountNTSImpl *pRVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  byte local_c0 [8];
  int *local_b8;
  undefined8 local_98;
  undefined4 local_90;
  RefCountNTSImpl *local_88;
  RefCountNTSImpl *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  pRVar1 = *(RefCountNTSImpl **)(param_1 + -0x10);
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))(param_1 + -0x30);
  if (lVar3 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0xff00;
    local_50 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_98 = 0;
    local_28 = 0;
    local_90 = 4;
    if (pRVar1 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar1 + 8) = *(int *)(pRVar1 + 8) + 1;
    }
    local_80 = (RefCountNTSImpl *)0x0;
    local_48 = FUN_1434489b0;
    for (puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0xe0);
        local_88 = pRVar1, puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (((((*(int *)(puVar2 + 1) == 4) && (puVar2[3] == 0)) &&
           ((RefCountNTSImpl *)puVar2[2] == pRVar1)) &&
          (((code *)puVar2[10] == FUN_1434489b0 && (puVar2[7] == 0)))) &&
         (*(int *)(puVar2 + 4) == 0)) goto LAB_143442e34;
    }
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    lVar4 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18)
                           + 0x618),"onScroller",10);
    local_c0[0] = 5;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    local_b8 = (int *)lVar4;
    FUN_1434a3be0(&local_d8,&local_d8,1);
    lVar3 = local_d0;
    lVar6 = local_d0 * 0x20 + local_d8 + -0x20;
    if ((lVar6 == 0) || (FUN_143410ec0(lVar6,local_c0), 4 < local_c0[0])) {
      FUN_143411150(local_c0);
    }
    piVar5 = (int *)(lVar4 + 0x18);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_14335f920(lVar4);
    }
    local_c0[0] = 7;
    if (pRVar1 == (RefCountNTSImpl *)0x0) {
      local_b8 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(pRVar1 + 0x70);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)FUN_14336c170(pRVar1);
      }
      local_b8 = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
    }
    FUN_1434a3be0(&local_d8,&local_d8,lVar3 + 1);
    lVar3 = local_d0 * 0x20 + local_d8 + -0x20;
    if ((lVar3 == 0) || (FUN_143410ec0(lVar3,local_c0), 4 < local_c0[0])) {
      FUN_143411150(local_c0);
    }
    lVar3 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x80,4);
    *(undefined4 *)(lVar3 + 8) = 4;
    if (pRVar1 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar1 + 8) = *(int *)(pRVar1 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(lVar3 + 0x10) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x10));
    }
    *(RefCountNTSImpl **)(lVar3 + 0x10) = pRVar1;
    if (*(RefCountNTSImpl **)(lVar3 + 0x18) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(code **)(lVar3 + 0x50) = FUN_1434489b0;
    FUN_143499890(lVar3 + 0x58,&local_d8);
    FUN_1434976a0(&local_d8);
LAB_143442e34:
    FUN_1434976a0(&local_40);
    FUN_14349ebc0(&local_60);
    if (local_80 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_80);
    }
    if (local_88 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_88);
    }
  }
  return;
}



// FUNCTION 143442e90 FUN_143442e90 body=337 status=ok
// SIG undefined FUN_143442e90(void)

undefined8 FUN_143442e90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *local_res8;
  ulonglong uVar5;
  byte local_28 [32];
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x20) == 0) {
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + -0x10);
  *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) | 0x8000;
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))();
  if (lVar4 != 0) {
    local_28[0] = 0;
    uVar5 = 0;
    cVar3 = FUN_1434175f0(lVar4,param_1 + 8,local_28,0,0,0,0);
    if (cVar3 == '\0') {
      FUN_143dec020(lVar2,&DAT_145af3922,0,0);
    }
    else {
      cVar3 = FUN_143412de0(local_28,lVar4,param_1 + 0x10);
      if (cVar3 == '\0') {
        FUN_143411240(param_1 + 0x10,local_28);
        FUN_143411540(local_28,&local_res8,lVar4,0xffffffff,uVar5 & 0xffffffffffffff00);
        FUN_143dec020(lVar2,*local_res8,0,0);
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_res8);
        }
        if (4 < local_28[0]) {
          FUN_143411150(local_28);
        }
        return 1;
      }
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  return 0;
}



// FUNCTION 143442ff0 FUN_143442ff0 body=169 status=ok
// SIG undefined FUN_143442ff0(void)

void FUN_143442ff0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res8;
  
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x20) != 0) &&
     (lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0xf0))(param_1 + -0x30), lVar3 != 0)) {
    plVar4 = (longlong *)FUN_143de9da0(*(undefined8 *)(param_1 + -0x10),&local_res8,0);
    if (4 < *(byte *)(param_1 + 0x10)) {
      FUN_143411150(param_1 + 0x10);
    }
    *(undefined1 *)(param_1 + 0x10) = 5;
    lVar2 = *plVar4;
    *(longlong *)(param_1 + 0x18) = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143419290(lVar3,param_1 + 8,param_1 + 0x10,0,1);
  }
  return;
}



// FUNCTION 1434430c0 FUN_1434430c0 body=4104 status=ok
// SIG undefined FUN_1434430c0(void)

undefined8 FUN_1434430c0(longlong param_1,longlong param_2,longlong *param_3,byte *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  byte bVar9;
  char *pcVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  double dVar16;
  undefined8 local_res8;
  
  lVar12 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  iVar3 = FUN_14341f910(param_1 + -8,param_3);
  lVar13 = *(longlong *)(param_1 + 0x18);
  if (0x55 < iVar3 - 0x19U) {
switchD_14344311b_caseD_1a:
    cVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x118))(param_1 + -8,iVar3,param_4,0);
    if (cVar2 == '\0') goto switchD_14344311b_caseD_6e;
    goto LAB_143443136;
  }
  pcVar10 = IMAGE_DOS_HEADER_140000000.e_magic +
            (&switchD_14344311b::switchdataD_1434440c8)[(int)(iVar3 - 0x19U)];
  switch(iVar3) {
  case 0x19:
    FUN_143411150(param_4);
    *param_4 = 0;
    lVar13 = (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x268))();
    if (lVar13 != 0) {
      FUN_14337ae30(lVar13,"Retrieval of the TextField.filters property is not implemented.");
      return 1;
    }
    goto LAB_143443136;
  default:
    goto switchD_14344311b_caseD_1a;
  case 0x28:
    uVar8 = 0;
    goto LAB_143443140;
  case 0x29:
    uVar8 = Scaleform::GFx::TextField::GetTextWidth(lVar13);
    FUN_1434a4b40(param_4,uVar8);
    return 1;
  case 0x2a:
    uVar8 = Scaleform::GFx::TextField::GetTextHeight(lVar13);
    FUN_1434a4b40(param_4,uVar8);
    return 1;
  case 0x2b:
    uVar4 = FUN_143dea830(lVar13);
    FUN_1434a47f0(param_4,uVar4);
    return 1;
  case 0x2c:
    lVar13 = Scaleform::Render::Text::StyledText::GetLength
                       (*(undefined8 *)(*(longlong *)(lVar13 + 0xe0) + 0x10));
LAB_14344375d:
    dVar16 = (double)lVar13;
    if (lVar13 < 0) {
      FUN_1434a4b40(param_4,dVar16 + 1.8446744073709552e+19);
      return 1;
    }
    goto LAB_1434433c5;
  case 0x2d:
    bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 1);
    goto LAB_143443125;
  case 0x2e:
    uVar8 = 1;
LAB_143443140:
    uVar8 = FUN_143de9da0(lVar13,&local_res8,uVar8);
    FUN_1434a4c10(param_4,uVar8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return 1;
    }
    goto LAB_143443136;
  case 0x2f:
    FUN_143411150(param_4);
    *param_4 = 0;
    lVar13 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
    if ((lVar13 != 0) &&
       (lVar13 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18)),
       *(longlong *)(lVar13 + 0x50) != 0)) {
      lVar13 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
      FUN_143412aa0(param_4,*(undefined8 *)(lVar13 + 0x50));
      return 1;
    }
    goto LAB_143443136;
  case 0x30:
    if ((*(byte *)(lVar13 + 0xfc) & 1) == 0) {
      pcVar10 = "none";
LAB_14344322c:
      uVar4 = 4;
    }
    else {
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x159);
      bVar9 = bVar11 & 3;
      if ((bVar11 & 3) == 0) {
        pcVar10 = "left";
        goto LAB_14344322c;
      }
      if (bVar9 == 1) {
        uVar4 = 5;
        pcVar10 = "right";
      }
      else {
        if (bVar9 != 2) {
LAB_143443b74:
          FUN_143411150(param_4);
          *param_4 = 0;
          return 1;
        }
        uVar4 = 6;
        pcVar10 = "center";
      }
    }
    lVar13 = FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618),
                           pcVar10,uVar4,0);
    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
    if (4 < *param_4) {
      FUN_143411150(param_4);
    }
    *param_4 = 5;
    *(longlong *)(param_4 + 8) = lVar13;
    iVar3 = *(int *)(lVar13 + 0x18);
    *(int *)(lVar13 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_14335f920(lVar13);
      return 1;
    }
    goto LAB_143443136;
  case 0x31:
    bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) >> 3;
    goto LAB_143443125;
  case 0x32:
    bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) >> 2;
    goto LAB_143443125;
  case 0x33:
    uVar4 = *(undefined4 *)(*(longlong *)(lVar13 + 0xe0) + 0x148);
    goto LAB_1434432c0;
  case 0x34:
    pcVar10 = (char *)(param_1 + 0x30);
    if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) != 0) {
      FUN_1434a4c10();
      return 1;
    }
LAB_14344357b:
    FUN_143411150(param_4,pcVar10);
    *param_4 = 1;
    return 1;
  case 0x35:
    bVar11 = FUN_143de5950(lVar13);
    goto LAB_143443128;
  case 0x36:
    bVar11 = ~(*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) >> 5);
    goto LAB_143443125;
  case 0x37:
    bVar15 = (*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) & 0x40) == 0;
    uVar8 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618);
    if (bVar15) {
      uVar7 = FUN_143360950(uVar8,"normal",6);
      cVar2 = '\0';
    }
    else {
      uVar7 = FUN_143360950(uVar8,"advanced",8);
      cVar2 = '\x04';
    }
    *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
    local_res8 = uVar7;
    FUN_1434a4c10(param_4,&local_res8);
    if (bVar15) {
      piVar1 = (int *)(uVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar7);
      }
    }
    goto LAB_143443548;
  case 0x38:
    dVar16 = (double)FUN_1434a0310(lVar13);
    goto LAB_1434433b6;
  case 0x39:
    iVar3 = Scaleform::Render::Text::DocView::GetVScrollOffset(*(undefined8 *)(lVar13 + 0xe0));
    goto LAB_1434433e0;
  case 0x3a:
    iVar3 = FUN_1433fe300(*(undefined8 *)(lVar13 + 0xe0));
LAB_1434433e0:
    FUN_1434a4b40(param_4,(double)(iVar3 + 1));
    return 1;
  case 0x3b:
    uVar5 = FUN_1433fe2c0(*(undefined8 *)(lVar13 + 0xe0));
    dVar16 = (double)uVar5 * 0.05;
LAB_1434433b6:
    uVar7 = (longlong)dVar16 & 0xffffffff;
LAB_1434433bd:
    dVar16 = (double)uVar7;
LAB_1434433c5:
    FUN_1434a4b40(param_4,dVar16);
    return 1;
  case 0x3c:
    uVar4 = *(undefined4 *)(*(longlong *)(lVar13 + 0xe0) + 0x14c);
LAB_1434432c0:
    local_res8 = CONCAT44(local_res8._4_4_,uVar4);
    FUN_143411150(param_4);
    *param_4 = 2;
    param_4[8] = local_res8._3_1_ != '\0';
    return 1;
  case 0x3d:
    FUN_1434a4b40(param_4,(double)(*(uint *)(*(longlong *)(lVar13 + 0xe0) + 0x14c) & 0xffffff));
    return 1;
  case 0x3e:
    FUN_1434a4b40(param_4,(double)(*(uint *)(*(longlong *)(lVar13 + 0xe0) + 0x148) & 0xffffff));
    return 1;
  case 0x3f:
    iVar3 = FUN_1433ffa20(*(undefined8 *)(lVar13 + 0xe0));
    FUN_1434a4b40(param_4,(double)(iVar3 + 1));
    return 1;
  case 0x40:
    cVar2 = Scaleform::GFx::TextField::IsReadOnly(lVar13);
    bVar15 = cVar2 == '\0';
    uVar8 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x618);
    if (bVar15) {
      uVar7 = FUN_143360950(uVar8,"input",5);
    }
    else {
      uVar7 = FUN_143360950(uVar8,"dynamic",7);
    }
    cVar2 = !bVar15;
    *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
    local_res8 = uVar7;
    FUN_1434a4c10(param_4,&local_res8);
    if (bVar15) {
      piVar1 = (int *)(uVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar7);
      }
    }
LAB_143443548:
    if (cVar2 != '\0') {
      piVar1 = (int *)(uVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      bVar15 = *piVar1 == 0;
LAB_143443552:
      if (bVar15) {
        FUN_14335f920(uVar7);
        return 1;
      }
    }
    goto LAB_143443136;
  case 0x41:
    uVar5 = *(uint *)(*(longlong *)(lVar13 + 0xe0) + 200);
    uVar7 = (ulonglong)uVar5;
    if (uVar5 == 0) goto LAB_14344357b;
    goto LAB_1434433bd;
  case 0x42:
    bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 4);
    goto LAB_143443125;
  case 0x43:
    bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 7);
    goto LAB_143443125;
  case 0x44:
    bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 2);
LAB_143443125:
    bVar11 = bVar11 & 1;
LAB_143443128:
    FUN_143411150(param_4);
    param_4[8] = bVar11;
    *param_4 = 2;
    goto LAB_143443136;
  case 0x45:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') break;
    uVar8 = FUN_143dea730(lVar13,&local_res8);
    FUN_1434a4c10(param_4,uVar8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return 1;
    }
    goto LAB_143443136;
  case 0x46:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a47f0(param_4,*(uint *)(*(longlong *)(lVar13 + 0xe0) + 0x11c) & 0xffffff);
      return 1;
    }
    break;
  case 0x47:
    lVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    if (*(char *)(*(longlong *)(lVar6 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(lVar13 + 0xb8) >> 0xb);
      goto LAB_143443125;
    }
    break;
  case 0x48:
    lVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    if (*(char *)(*(longlong *)(lVar6 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 3);
      goto LAB_143443125;
    }
    break;
  case 0x49:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      lVar13 = FUN_143de9d40(lVar13);
      FUN_1434a4b40(param_4,(double)lVar13);
      return 1;
    }
    break;
  case 0x4a:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      uVar5 = Scaleform::Render::Text::DocView::GetLinesCount(*(undefined8 *)(lVar13 + 0xe0));
      FUN_1434a4b40(param_4,(double)uVar5);
      return 1;
    }
    break;
  case 0x4b:
    lVar6 = *(longlong *)(param_2 + 0xe8);
    if (*(char *)(lVar6 + 0x68) != '\x01') break;
    if (((*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) & 2) == 0) ||
       (bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x159) >> 2, bVar9 = bVar11 & 3,
       (bVar11 & 3) == 0)) {
      lVar13 = *(longlong *)(lVar6 + 0x28);
      uVar8 = 4;
      pcVar10 = "none";
    }
    else if (bVar9 == 1) {
      lVar13 = *(longlong *)(lVar6 + 0x28);
      uVar8 = 3;
      pcVar10 = "top";
    }
    else if (bVar9 == 2) {
      lVar13 = *(longlong *)(lVar6 + 0x28);
      uVar8 = 6;
      pcVar10 = "bottom";
    }
    else {
      if (bVar9 != 3) goto LAB_143443b74;
      lVar13 = *(longlong *)(lVar6 + 0x28);
      uVar8 = 6;
      pcVar10 = "center";
    }
    uVar7 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 0x618),pcVar10,uVar8,0);
    *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
    if (4 < *param_4) {
      FUN_143411150(param_4);
    }
    *param_4 = 5;
    *(ulonglong *)(param_4 + 8) = uVar7;
    bVar15 = *(int *)(uVar7 + 0x18) == 0;
    *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18);
    goto LAB_143443552;
  case 0x4c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)((float)*(ushort *)(*(longlong *)(lVar13 + 0xe0) + 0x152) * 0.05
                                    ));
    }
    break;
  case 0x4d:
    lVar6 = *(longlong *)(param_2 + 0xe8);
    if (*(char *)(lVar6 + 0x68) == '\x01') {
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x159) >> 2;
      bVar9 = bVar11 & 3;
      if ((bVar11 & 3) == 0) {
        lVar13 = *(longlong *)(lVar6 + 0x28);
        uVar4 = 4;
        pcVar10 = "none";
      }
      else if (bVar9 == 1) {
        lVar13 = *(longlong *)(lVar6 + 0x28);
        uVar4 = 3;
        pcVar10 = "top";
      }
      else if (bVar9 == 2) {
        lVar13 = *(longlong *)(lVar6 + 0x28);
        uVar4 = 6;
        pcVar10 = "bottom";
      }
      else {
        if (bVar9 != 3) goto LAB_143443b74;
        lVar13 = *(longlong *)(lVar6 + 0x28);
        uVar4 = 6;
        pcVar10 = "center";
      }
      uVar7 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 0x618),pcVar10,uVar4,0);
      *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 5;
      *(ulonglong *)(param_4 + 8) = uVar7;
      bVar15 = *(int *)(uVar7 + 0x18) == 0;
      *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18);
      goto LAB_143443552;
    }
    break;
  case 0x4e:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28);
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x159) >> 4 & 3;
      if (bVar11 == 1) {
        pcVar10 = "shrink";
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x618);
        uVar14 = 6;
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x618);
        if (bVar11 == 2) {
          uVar14 = 3;
          pcVar10 = "fit";
        }
        else {
          uVar14 = 4;
          pcVar10 = "none";
        }
      }
      lVar13 = FUN_143360950(uVar8,pcVar10,uVar14);
      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
      if (4 < *param_4) {
        FUN_143411150(param_4);
      }
      *param_4 = 5;
      *(longlong *)(param_4 + 8) = lVar13;
      iVar3 = *(int *)(lVar13 + 0x18);
      *(int *)(lVar13 + 0x18) = iVar3;
      if (iVar3 == 0) {
        FUN_14335f920(lVar13);
      }
    }
    break;
  case 0x4f:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)((uint)*(undefined4 *)(lVar13 + 0xfc) >> 8);
LAB_143443dce:
      FUN_143411150(param_4);
      *param_4 = 2;
      param_4[8] = bVar11 & 1;
    }
    break;
  case 0x50:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 9);
      goto LAB_143443dce;
    }
    break;
  case 0x51:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      cVar2 = FUN_143de5950(lVar13);
      if ((cVar2 == '\0') || (*(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8) == 0)) {
LAB_143443785:
        FUN_1434a4b40(param_4,0xbff0000000000000);
        return 1;
      }
      lVar13 = Scaleform::GFx::TextField::GetBeginIndex(lVar13);
      goto LAB_14344375d;
    }
    break;
  case 0x52:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      cVar2 = FUN_143de5950(lVar13);
      if ((cVar2 == '\0') || (*(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8) == 0))
      goto LAB_143443785;
      lVar13 = Scaleform::GFx::TextField::GetEndIndex(lVar13);
      goto LAB_14344375d;
    }
    break;
  case 0x53:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') &&
       (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8), lVar13 != 0)) {
      FUN_1434a4b40(param_4,(double)*(uint *)(lVar13 + 0x90));
      return 1;
    }
    break;
  case 0x54:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') &&
       (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8), lVar13 != 0)) {
      FUN_1434a4b40(param_4,(double)*(uint *)(lVar13 + 0x94));
      return 1;
    }
    break;
  case 0x55:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') &&
       (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8), lVar13 != 0)) {
      FUN_1434a4b40(param_4,(double)*(uint *)(lVar13 + 0x98));
      return 1;
    }
    break;
  case 0x56:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') &&
       (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8), lVar13 != 0)) {
      FUN_1434a4b40(param_4,(double)*(uint *)(lVar13 + 0x9c));
      return 1;
    }
    break;
  case 0x57:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 10);
      goto LAB_143443125;
    }
    break;
  case 0x58:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(lVar13 + 0xfc) >> 0xb);
      goto LAB_143443125;
    }
    break;
  case 0x5c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      if ((((*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x15a) & 4) != 0) &&
          (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0x20), lVar13 != 0)) &&
         ((*(byte *)(lVar13 + 0x10) & 0x10) != 0)) {
        lVar12 = 1;
      }
      FUN_143411150(param_4);
      param_4[8] = (byte)lVar12;
      *param_4 = 2;
      return 1;
    }
    break;
  case 0x5d:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x158) >> 7;
      goto LAB_143443128;
    }
    break;
  case 0x5e:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0xf0) * 0.05);
      return 1;
    }
    break;
  case 0x5f:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0xf4) * 0.05);
      return 1;
    }
    break;
  case 0x60:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0xf8));
      return 1;
    }
    break;
  case 0x61:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x154));
      return 1;
    }
    break;
  case 0x62:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x15a);
      goto LAB_143443125;
    }
    break;
  case 99:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = *(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x15a) >> 1;
      goto LAB_143443125;
    }
    break;
  case 0x65:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)((float)*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x13c) / 255.0)
                   );
      return 1;
    }
    break;
  case 0x66:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)(*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x134) * 57.295784));
      return 1;
    }
    break;
  case 0x67:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x108) * 0.05);
      return 1;
    }
    break;
  case 0x68:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x10c) * 0.05);
      return 1;
    }
    break;
  case 0x69:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x138) * 0.05);
      return 1;
    }
    break;
  case 0x6a:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(*(longlong *)(lVar13 + 0xe0) + 0x130) >> 6);
      goto LAB_143443125;
    }
    break;
  case 0x6b:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      bVar11 = (byte)(*(uint *)(*(longlong *)(lVar13 + 0xe0) + 0x130) >> 5);
      goto LAB_143443125;
    }
    break;
  case 0x6c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)(byte)(((*(byte *)(*(longlong *)(lVar13 + 0xe0) + 0x130) & 0x80)
                                           != 0) + 1));
      return 1;
    }
    break;
  case 0x6d:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_1434a4b40(param_4,(double)*(float *)(*(longlong *)(lVar13 + 0xe0) + 0x118));
      return 1;
    }
    break;
  case 0x6e:
    break;
  }
switchD_14344311b_caseD_6e:
  lVar13 = *(longlong *)(param_1 + 0x58);
  if (lVar13 == 0) {
    if ((param_2 == 0) ||
       (*param_3 !=
        *(longlong *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x3a8))) {
      lVar13 = *(longlong *)(param_1 + 0x10);
      if ((lVar13 == 0) ||
         (cVar2 = (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x20))
                            (lVar13 + 0x20,param_2,param_3,param_4), cVar2 == '\0')) {
        do {
          lVar13 = lVar12 + 1;
          if (*(char *)(*(longlong *)*param_3 + lVar12) != "_global"[lVar12]) goto LAB_1434440af;
          lVar12 = lVar13;
        } while (lVar13 != 8);
        if (param_2 == 0) {
LAB_1434440af:
          uVar8 = 0;
        }
        else {
          FUN_143412aa0(param_4,*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x60));
          uVar8 = 1;
        }
      }
      else {
LAB_143443136:
        uVar8 = 1;
      }
    }
    else {
      FUN_143412aa0(param_4,*(undefined8 *)(param_1 + 0x10));
      uVar8 = 1;
    }
  }
  else {
    uVar8 = (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x20))
                      (lVar13 + 0x20,param_2,param_3,param_4);
  }
  return uVar8;
}



// FUNCTION 143444240 FUN_143444240 body=6579 status=ok
// SIG undefined FUN_143444240(void)

undefined1
FUN_143444240(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  RefCountImpl *pRVar1;
  int *piVar2;
  ushort *puVar3;
  byte *pbVar4;
  uint *puVar5;
  float fVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  char local_res8;
  undefined7 uStackX_9;
  byte *in_stack_fffffffffffffef8;
  uint7 uVar29;
  byte local_f8 [32];
  RefCountImpl *local_d8;
  byte local_d0 [40];
  RefCountNTSImplCore local_a8 [72];
  RefCountImpl *local_60;
  
  uVar13 = FUN_14341f910(param_1 + -8,param_3);
  FUN_143410ec0(local_f8,param_4);
  if ((((0x15 < uVar13) && (param_2 != 0)) && (lVar16 = FUN_143445dc0(param_1 + -8), lVar16 != 0))
     && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x58) != 0)) {
    in_stack_fffffffffffffef8 = local_d0;
    local_d0[0] = 0;
    cVar8 = FUN_143415e30(*(longlong *)(param_1 + 0x58),param_2,param_3,local_f8,
                          in_stack_fffffffffffffef8);
    if (cVar8 != '\0') {
      FUN_143411240(local_f8,local_d0);
    }
    if (4 < local_d0[0]) {
      FUN_143411150(local_d0);
    }
  }
  cVar8 = (**(code **)(*(longlong *)(param_1 + -8) + 0x110))(param_1 + -8,uVar13,param_4,0);
  if (cVar8 != '\0') goto LAB_1434446c0;
  plVar7 = *(longlong **)(param_1 + 0x18);
  uVar29 = (uint7)((ulonglong)in_stack_fffffffffffffef8 >> 8);
  switch(uVar13) {
  case 0x19:
    lVar16 = FUN_143412120(local_f8,param_2);
    if (lVar16 != 0) {
      uVar18 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),2);
      cVar8 = (**(code **)(*(longlong *)(lVar16 + 0x20) + 0x90))(lVar16 + 0x20,param_2,uVar18,1);
      if (cVar8 != '\0') {
        FUN_1433a5d80(local_a8);
        cVar8 = '\0';
        iVar14 = 0;
        local_res8 = '\0';
        if (0 < *(int *)(lVar16 + 0x78)) {
          lVar20 = 0;
          do {
            lVar21 = *(longlong *)(lVar20 + *(longlong *)(lVar16 + 0x70));
            if ((lVar21 != 0) &&
               (lVar21 = FUN_143412120(lVar21,param_2), cVar8 = local_res8, lVar21 != 0)) {
              uVar18 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x25);
              cVar11 = (**(code **)(*(longlong *)(lVar21 + 0x20) + 0x90))
                                 (lVar21 + 0x20,param_2,uVar18,1);
              cVar8 = local_res8;
              if (cVar11 != '\0') {
                FUN_1433f1f10(local_a8,*(undefined8 *)(lVar21 + 0x68));
                local_res8 = '\x01';
                cVar8 = '\x01';
              }
            }
            iVar14 = iVar14 + 1;
            lVar20 = lVar20 + 8;
          } while (iVar14 < *(int *)(lVar16 + 0x78));
          if (cVar8 != '\0') {
            Scaleform::GFx::TextField::SetTextFilters(plVar7,local_a8);
            FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
            (**(code **)(*plVar7 + 0x1a8))(plVar7,0);
          }
        }
        if (local_60 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_60);
        }
        Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(local_a8);
      }
    }
    break;
  default:
    goto switchD_14344434b_caseD_1a;
  case 0x28:
    FUN_143deb440(plVar7,0x140000001,0);
    iVar14 = FUN_14336b320(*(undefined8 *)(param_1 + 0x18));
    if ((local_f8[0] == 0) || (local_f8[0] == 10)) {
      lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
      if (iVar14 - 1U < 6) {
        puVar25 = *(undefined8 **)(lVar16 + 0x138);
        *(int *)(puVar25 + 3) = *(int *)(puVar25 + 3) + 1;
        bVar10 = 0;
      }
      else {
        puVar25 = *(undefined8 **)(lVar16 + 0x2d0);
        *(int *)(puVar25 + 3) = *(int *)(puVar25 + 3) + 1;
        bVar10 = 0;
      }
    }
    else {
      FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,
                    (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
      puVar25 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
      bVar10 = 0;
    }
    goto LAB_1434443eb;
  case 0x2b:
    uVar15 = FUN_143411f00(local_f8,param_2);
    FUN_143debf40(plVar7,uVar15);
    break;
  case 0x2d:
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffffd;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 2;
    }
    break;
  case 0x2e:
    iVar14 = FUN_14336b320(plVar7);
    if ((local_f8[0] == 0) || (local_f8[0] == 10)) {
      if (iVar14 - 1U < 6) {
        puVar25 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                   0x138);
      }
      else {
        puVar25 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) +
                   0x2d0);
      }
      *(int *)(puVar25 + 3) = *(int *)(puVar25 + 3) + 1;
    }
    else {
      FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,
                    (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
      puVar25 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
    }
    bVar10 = (byte)(*(uint *)((longlong)plVar7 + 0xfc) >> 1) & 1;
LAB_1434443eb:
    FUN_143dec020(plVar7,*puVar25,bVar10,1);
LAB_1434443f9:
    piVar2 = (int *)(puVar25 + 3);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920(puVar25);
    }
    break;
  case 0x2f:
    lVar16 = FUN_143412120(local_f8,param_2);
    if ((lVar16 == 0) ||
       (iVar14 = (**(code **)(*(longlong *)(lVar16 + 0x20) + 0x10))(lVar16 + 0x20), iVar14 != 0x1f))
    {
      lVar16 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
      if (lVar16 != 0) {
        lVar20 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
        lVar16 = *(longlong *)(lVar20 + 0x50);
        if ((lVar16 != 0) && ((*(uint *)(lVar16 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar20 + 0x50) = 0;
      }
    }
    else {
      lVar20 = USceneComponent::GetAttachParent(plVar7);
      if (lVar20 == 0) {
        lVar20 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58);
        if (lVar20 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = FUN_143496500(lVar20);
        }
        FUN_143de6160(plVar7,uVar18);
      }
      lVar20 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
      FUN_143499df0(lVar20 + 0x50,lVar16);
      if (*(longlong *)(plVar7[0x1c] + 0xd8) != 0) {
        puVar3 = (ushort *)(*(longlong *)(plVar7[0x1c] + 0xd8) + 0xa0);
        *puVar3 = *puVar3 | 1;
      }
      FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
      lVar16 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + 0x18));
      if (*(int *)(*(longlong *)(lVar16 + 0x50) + 0x90) == 1) {
        FUN_14348fde0(plVar7);
      }
    }
    FUN_143de97c0(plVar7);
    FUN_143decb70(plVar7);
    *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x10000;
    break;
  case 0x30:
    FUN_143411540(local_f8,&local_d8,param_2,0xffffffff,
                  (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
    if (local_f8[0] == 2) {
      cVar8 = FUN_143411fd0(local_f8,param_2);
      puVar23 = &DAT_145b122f4;
      if (cVar8 != '\0') {
        puVar23 = &DAT_145b068ec;
      }
    }
    else {
      puVar23 = *(undefined1 **)local_d8;
    }
    FUN_1432c2fb0(&local_res8,puVar23);
    lVar16 = plVar7[0x1c];
    bVar10 = *(byte *)((longlong)plVar7 + 0xfc);
    uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
    bVar9 = *(byte *)(lVar16 + 0x159);
    lVar21 = 0;
    lVar20 = lVar21;
    do {
      lVar22 = lVar20 + 1;
      if (*(char *)(uVar24 + 0xc + lVar20) != (&DAT_145b122f4)[lVar20]) {
        *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 1;
        lVar20 = lVar21;
        goto LAB_143444580;
      }
      lVar20 = lVar22;
    } while (lVar22 != 5);
    *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffffe;
    *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfc;
    goto LAB_143444603;
  case 0x31:
    bVar10 = *(byte *)(plVar7[0x1c] + 0x158);
    bVar9 = FUN_143411fd0(local_f8,param_2);
    if (bVar9 != (bVar10 >> 3 & 1)) {
      if (bVar9 == 0) {
        Scaleform::Render::Text::DocView::ClearWordWrap(plVar7[0x1c]);
      }
      else {
        Scaleform::Render::Text::DocView::SetWordWrap();
      }
LAB_1434446ae:
      Scaleform::GFx::AS2::AvmTextField::UpdateAutosizeSettings(param_1 + -8);
    }
    goto LAB_1434446b7;
  case 0x32:
    bVar10 = *(byte *)(plVar7[0x1c] + 0x158);
    bVar9 = FUN_143411fd0(local_f8,param_2);
    if ((bVar10 >> 2 & 1) != bVar9) {
      if (bVar9 == 0) {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 & 0xfb;
      }
      else {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 | 4;
      }
      goto LAB_1434446ae;
    }
    goto LAB_1434446b7;
  case 0x33:
    uVar12 = FUN_143411fd0(local_f8,param_2);
    Scaleform::GFx::TextField::SetBorder(plVar7,uVar12);
    break;
  case 0x34:
    FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
    lVar16 = CONCAT71(uStackX_9,local_res8);
    *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 0x30) = lVar16;
    piVar2 = (int *)(lVar16 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920(lVar16);
    }
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0xf8))(param_1 + 0x28);
    *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x8000;
    FUN_14348fde0(plVar7);
    break;
  case 0x35:
    uVar12 = FUN_143411fd0(local_f8,param_2);
    Scaleform::GFx::TextField::SetSelectable(plVar7,uVar12);
    break;
  case 0x36:
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
      *pbVar4 = *pbVar4 | 0x20;
      *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
    }
    else {
      pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
      *pbVar4 = *pbVar4 & 0xdf;
      *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
    }
    goto LAB_1434446b7;
  case 0x37:
    FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
    cVar8 = FUN_14349e5e0(param_2 + 0xe8,&local_res8,"normal");
    if (cVar8 == '\0') {
      cVar8 = FUN_14349e5e0(param_2 + 0xe8,&local_res8,"advanced");
      if (cVar8 != '\0') {
        *(byte *)(plVar7[0x1c] + 0x158) = *(byte *)(plVar7[0x1c] + 0x158) | 0x40;
      }
    }
    else {
      *(byte *)(plVar7[0x1c] + 0x158) = *(byte *)(plVar7[0x1c] + 0x158) & 0xbf;
    }
    FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
    piVar2 = (int *)(CONCAT71(uStackX_9,local_res8) + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    break;
  case 0x38:
    iVar14 = FUN_143411e30(local_f8,param_2);
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    Scaleform::Render::Text::DocView::SetHScrollOffset
              (plVar7[0x1c],(longlong)((double)iVar14 * 20.0));
    goto LAB_1434446b7;
  case 0x39:
    iVar14 = FUN_143411e30(local_f8,param_2);
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    Scaleform::Render::Text::DocView::SetVScrollOffset(plVar7[0x1c],iVar14 + -1);
    goto LAB_1434446b7;
  case 0x3c:
    uVar12 = FUN_143411fd0(local_f8,param_2);
    Scaleform::GFx::TextField::SetBackground(plVar7,uVar12);
    break;
  case 0x3d:
    FUN_143411a90(local_f8,param_2);
    cVar8 = Scaleform::GFx::NumberUtil::IsNaN();
    if (cVar8 == '\0') {
      uVar15 = FUN_143411f00(local_f8,param_2);
      Scaleform::GFx::TextField::SetBackgroundColor(plVar7,uVar15);
    }
    break;
  case 0x3e:
    FUN_143411a90(local_f8,param_2);
    cVar8 = Scaleform::GFx::NumberUtil::IsNaN();
    if (cVar8 == '\0') {
      uVar15 = FUN_143411f00(local_f8,param_2);
      Scaleform::GFx::TextField::SetBorderColor(plVar7,uVar15);
    }
    break;
  case 0x40:
    FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
    cVar8 = FUN_14349e5e0(param_2 + 0xe8,&local_res8,"dynamic");
    if (cVar8 == '\0') {
      cVar8 = FUN_14349e5e0(param_2 + 0xe8,&local_res8,"input");
      if ((cVar8 != '\0') &&
         (cVar8 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0xb8))(param_1 + 0x28), cVar8 == '\0'
         )) {
        plVar17 = (longlong *)FUN_143de59e0(plVar7,&local_d8);
        lVar16 = *plVar17;
        if (local_d8 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_d8);
        }
        *(ushort *)(lVar16 + 0xa0) = *(ushort *)(lVar16 + 0xa0) & 0xfffe;
      }
    }
    else if (*(longlong *)(plVar7[0x1c] + 0xd8) != 0) {
      puVar3 = (ushort *)(*(longlong *)(plVar7[0x1c] + 0xd8) + 0xa0);
      *puVar3 = *puVar3 | 1;
    }
    *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 1;
    piVar2 = (int *)(CONCAT71(uStackX_9,local_res8) + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    break;
  case 0x41:
    dVar28 = (double)FUN_143411a90(local_f8,param_2);
    cVar8 = Scaleform::GFx::NumberUtil::IsNaN();
    if ((cVar8 == '\0') && (0.0 <= dVar28)) {
      uVar15 = FUN_143411f00(local_f8,param_2);
      *(undefined4 *)(plVar7[0x1c] + 200) = uVar15;
    }
    break;
  case 0x42:
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xffffffef;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x10;
    }
    break;
  case 0x43:
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xffffff7f;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x80;
    }
    break;
  case 0x44:
    uVar13 = *(uint *)((longlong)plVar7 + 0xfc);
    bVar10 = FUN_143411fd0(local_f8,param_2);
    if (((byte)(uVar13 >> 2) & 1) != bVar10) {
      if (bVar10 == 0) {
        *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffffb;
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 & 0xef;
        *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
      }
      else {
        *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 4;
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 | 0x10;
        *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
      }
    }
LAB_1434446b7:
    FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x45:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
    puVar25 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
    FUN_143deba70(plVar7,*puVar25);
    goto LAB_1434443f9;
  case 0x46:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    uVar15 = FUN_143411f00(local_f8,param_2);
    FUN_143deb9f0(plVar7,uVar15);
    break;
  case 0x47:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    uVar18 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    cVar8 = FUN_143411fd0(local_f8,uVar18);
    if (cVar8 == '\0') {
      *(uint *)(plVar7 + 0x17) = *(uint *)(plVar7 + 0x17) & 0xfffff7ff;
    }
    else {
      *(uint *)(plVar7 + 0x17) = *(uint *)(plVar7 + 0x17) | 0x800;
    }
    break;
  case 0x48:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    uVar18 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    cVar8 = FUN_143411fd0(local_f8,uVar18);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffff7;
      *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 8;
      *(byte *)(plVar7[0x1c] + 0x15b) = *(byte *)(plVar7[0x1c] + 0x15b) | 2;
    }
    break;
  case 0x4b:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_143411540(local_f8,&local_d8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
      FUN_1432c2fb0(&local_res8,*(undefined8 *)local_d8);
      lVar20 = 0;
      lVar16 = lVar20;
      do {
        lVar21 = lVar16 + 1;
        if (*(char *)((CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc) + 0xc + lVar16) !=
            (&DAT_145b122f4)[lVar16]) {
          Scaleform::Render::Text::DocView::SetAutoSizeY(plVar7[0x1c]);
          uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
          lVar16 = lVar20;
          goto LAB_143445380;
        }
        lVar16 = lVar21;
      } while (lVar21 != 5);
      *(byte *)(plVar7[0x1c] + 0x158) = *(byte *)(plVar7[0x1c] + 0x158) & 0xfd;
      lVar16 = plVar7[0x1c];
      *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xf3;
      goto LAB_143445422;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x4c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      if ((0.0 < dVar28) && (dVar28 < 1000.0)) {
        FUN_1433fe950(plVar7[0x1c],(float)dVar28);
      }
      FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
    }
    goto switchD_14344434b_caseD_1a;
  case 0x4d:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_143411540(local_f8,&local_d8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
      FUN_1432c2fb0(&local_res8,*(undefined8 *)local_d8);
      uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
      lVar20 = 0;
      lVar16 = lVar20;
      do {
        lVar22 = lVar16 + 1;
        lVar21 = lVar20;
        if (*(char *)(uVar24 + 0xc + lVar16) != (&DAT_145b122f4)[lVar16]) goto LAB_143445570;
        lVar16 = lVar22;
      } while (lVar22 != 5);
      lVar16 = plVar7[0x1c];
      *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xf3;
      goto LAB_143445612;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x4e:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      FUN_143411540(local_f8,&local_d8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
      FUN_1432c2fb0(&local_res8,*(undefined8 *)local_d8);
      uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
      lVar20 = 0;
      lVar16 = lVar20;
      do {
        lVar22 = lVar16 + 1;
        lVar21 = lVar20;
        if (*(char *)(uVar24 + 0xc + lVar16) != (&DAT_145b122f4)[lVar16]) goto LAB_1434456f0;
        lVar16 = lVar22;
      } while (lVar22 != 5);
      lVar16 = plVar7[0x1c];
      *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xcf;
      goto LAB_143445759;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x4f:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    uVar18 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    cVar8 = FUN_143411fd0(local_f8,uVar18);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffeff;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x100;
    }
    lVar16 = *(longlong *)(plVar7[0x1c] + 0xd8);
    if (lVar16 != 0) {
      if ((*(uint *)((longlong)plVar7 + 0xfc) >> 8 & 1) == 0) {
        *(ushort *)(lVar16 + 0xa0) = *(ushort *)(lVar16 + 0xa0) & 0xfffb;
      }
      else {
        *(ushort *)(lVar16 + 0xa0) = *(ushort *)(lVar16 + 0xa0) | 4;
      }
    }
    break;
  case 0x50:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    uVar18 = (**(code **)(*(longlong *)(param_1 + -8) + 0xf0))(param_1 + -8);
    cVar8 = FUN_143411fd0(local_f8,uVar18);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffdff;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x200;
    }
    break;
  case 0x53:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') ||
       (lVar16 = *(longlong *)(plVar7[0x1c] + 0xd8), lVar16 == 0)) goto switchD_14344434b_caseD_1a;
    uVar15 = FUN_143411f00(local_f8,param_2);
    *(undefined4 *)(lVar16 + 0x90) = uVar15;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(lVar16);
    break;
  case 0x54:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') ||
       (lVar16 = *(longlong *)(plVar7[0x1c] + 0xd8), lVar16 == 0)) goto switchD_14344434b_caseD_1a;
    uVar15 = FUN_143411f00(local_f8,param_2);
    *(undefined4 *)(lVar16 + 0x94) = uVar15;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(lVar16);
    break;
  case 0x55:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') ||
       (lVar16 = *(longlong *)(plVar7[0x1c] + 0xd8), lVar16 == 0)) goto switchD_14344434b_caseD_1a;
    uVar15 = FUN_143411f00(local_f8,param_2);
    *(undefined4 *)(lVar16 + 0x98) = uVar15;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(lVar16);
    break;
  case 0x56:
    if ((*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') ||
       (lVar16 = *(longlong *)(plVar7[0x1c] + 0xd8), lVar16 == 0)) goto switchD_14344434b_caseD_1a;
    uVar15 = FUN_143411f00(local_f8,param_2);
    *(undefined4 *)(lVar16 + 0x9c) = uVar15;
    Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(lVar16);
    break;
  case 0x57:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffffbff;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x400;
    }
    break;
  case 0x58:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) & 0xfffff7ff;
    }
    else {
      *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x800;
    }
    break;
  case 0x5c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) != '\x01') goto switchD_14344434b_caseD_1a;
    cVar8 = FUN_143411fd0(local_f8,param_2);
    if (cVar8 == '\0') {
      pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
      *pbVar4 = *pbVar4 & 0xfb;
    }
    else {
      pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
      *pbVar4 = *pbVar4 | 4;
    }
    break;
  case 0x5d:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      cVar8 = FUN_143411fd0(local_f8,param_2);
      if (cVar8 == '\0') {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 & 0x7f;
      }
      else {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x158);
        *pbVar4 = *pbVar4 | 0x80;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x5e:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0xf0) = (float)(dVar28 * 20.0);
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x5f:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0xf4) = (float)(dVar28 * 20.0);
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x60:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0xf8) = (float)dVar28;
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x61:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0x154) = (float)dVar28;
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x62:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      cVar8 = FUN_143411fd0(local_f8,param_2);
      if (cVar8 == '\0') {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
        *pbVar4 = *pbVar4 & 0xfe;
      }
      else {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
        *pbVar4 = *pbVar4 | 1;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 99:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      cVar8 = FUN_143411fd0(local_f8,param_2);
      if (cVar8 == '\0') {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
        *pbVar4 = *pbVar4 & 0xfd;
      }
      else {
        pbVar4 = (byte *)(plVar7[0x1c] + 0x15a);
        *pbVar4 = *pbVar4 | 2;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 100:
    if ((local_f8[0] < 2) || (local_f8[0] == 10)) {
      FUN_143deacc0(plVar7);
    }
    else {
      FUN_143411540(local_f8,&local_res8,param_2,0xffffffff,(ulonglong)uVar29 << 8);
      FUN_143deabf0(plVar7,&local_res8);
      piVar2 = (int *)(CONCAT71(uStackX_9,local_res8) + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
    }
    goto switchD_14344434b_caseD_1a;
  case 0x65:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      lVar16 = plVar7[0x1c];
      fVar27 = (float)dVar28 * 255.0;
      if (255.0 <= fVar27) {
        fVar27 = 255.0;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar27) {
        fVar6 = fVar27;
      }
      *(char *)(lVar16 + 0x13c) = (char)(longlong)fVar6;
      *(char *)(lVar16 + 0x11f) = (char)(longlong)fVar6;
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x66:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      lVar16 = plVar7[0x1c];
      fVar27 = (float)dVar28 * 0.017453292;
      *(float *)(lVar16 + 0x134) = fVar27;
LAB_143445064:
      fVar26 = _guard_xfg_dispatch_icall_nop(fVar27);
      fVar6 = *(float *)(lVar16 + 0x138);
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar27);
      *(float *)(lVar16 + 0x110) = fVar26 * fVar6;
      *(float *)(lVar16 + 0x114) = fVar27 * *(float *)(lVar16 + 0x138);
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x67:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0x108) = (float)(dVar28 * 20.0);
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x68:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0x10c) = (float)(dVar28 * 20.0);
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x69:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      lVar16 = plVar7[0x1c];
      *(float *)(lVar16 + 0x138) = (float)dVar28 * 20.0;
      fVar27 = *(float *)(lVar16 + 0x134);
      goto LAB_143445064;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x6a:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      cVar8 = FUN_143411fd0(local_f8,param_2);
      if (cVar8 == '\0') {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 & 0xffffffbf;
      }
      else {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 | 0x40;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x6b:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      cVar8 = FUN_143411fd0(local_f8,param_2);
      if (cVar8 == '\0') {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 & 0xffffffdf;
      }
      else {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 | 0x20;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x6c:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      uVar13 = FUN_143411f00(local_f8,param_2);
      if (uVar13 < 2) {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 & 0xffffff7f;
      }
      else {
        puVar5 = (uint *)(plVar7[0x1c] + 0x130);
        *puVar5 = *puVar5 | 0x80;
      }
      goto LAB_1434446b7;
    }
    goto switchD_14344434b_caseD_1a;
  case 0x6d:
    if (*(char *)(*(longlong *)(param_2 + 0xe8) + 0x68) == '\x01') {
      *(uint *)(plVar7[0x1c] + 0x130) = *(uint *)(plVar7[0x1c] + 0x130) & 0xfffffffe;
      dVar28 = (double)FUN_143411a90(local_f8,param_2);
      *(float *)(plVar7[0x1c] + 0x118) = (float)dVar28;
      goto LAB_1434446b7;
    }
switchD_14344434b_caseD_1a:
    uVar12 = FUN_143420eb0(param_1,param_2,param_3,local_f8,param_5);
    goto LAB_1434446c2;
  }
LAB_1434446c0:
  uVar12 = 1;
LAB_1434446c2:
  if (4 < local_f8[0]) {
    FUN_143411150(local_f8);
  }
  return uVar12;
  while (lVar21 = lVar16, lVar16 != 7) {
LAB_1434456f0:
    lVar16 = lVar21 + 1;
    if (*(char *)(uVar24 + 0xc + lVar21) != "shrink"[lVar21]) goto LAB_143445730;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xdf;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 0x10;
  goto LAB_143445759;
  while (lVar20 = lVar16, lVar16 != 4) {
LAB_143445730:
    lVar16 = lVar20 + 1;
    if (*(char *)(uVar24 + 0xc + lVar20) != (&DAT_145b12390)[lVar20]) goto LAB_143445760;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xef;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 0x20;
LAB_143445759:
  *(byte *)(lVar16 + 0x15b) = *(byte *)(lVar16 + 0x15b) | 1;
LAB_143445760:
  FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
  uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
  iVar14 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar24 + 8,0xffffffff);
  if (iVar14 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar24);
  }
  pRVar1 = local_d8 + 0x18;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
    FUN_14335f920(local_d8);
  }
  goto LAB_1434446c0;
  while (lVar21 = lVar22, lVar22 != 4) {
LAB_143445570:
    lVar22 = lVar21 + 1;
    lVar16 = lVar20;
    if (*(char *)(uVar24 + 0xc + lVar21) != (&DAT_145b1237c)[lVar21]) goto LAB_1434455b0;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xf7;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 4;
  goto LAB_143445612;
  while (lVar16 = lVar21, lVar21 != 7) {
LAB_1434455b0:
    lVar21 = lVar16 + 1;
    if (*(char *)(uVar24 + 0xc + lVar16) != "bottom"[lVar16]) goto LAB_1434455f0;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfb;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 8;
  goto LAB_143445612;
  while (lVar20 = lVar16, lVar16 != 7) {
LAB_1434455f0:
    lVar16 = lVar20 + 1;
    if (*(char *)(uVar24 + 0xc + lVar20) != "center"[lVar20]) goto LAB_143445619;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 0xc;
LAB_143445612:
  *(byte *)(lVar16 + 0x15b) = *(byte *)(lVar16 + 0x15b) | 1;
LAB_143445619:
  FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
  uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
  iVar14 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar24 + 8,0xffffffff);
  if (iVar14 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar24);
  }
  pRVar1 = local_d8 + 0x18;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
    FUN_14335f920(local_d8);
  }
  goto LAB_1434446c0;
  while (lVar16 = lVar22, lVar22 != 4) {
LAB_143445380:
    lVar22 = lVar16 + 1;
    lVar21 = lVar20;
    if (*(char *)(uVar24 + 0xc + lVar16) != (&DAT_145b1237c)[lVar16]) goto LAB_1434453c0;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xf7;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 4;
  goto LAB_143445422;
  while (lVar21 = lVar16, lVar16 != 7) {
LAB_1434453c0:
    lVar16 = lVar21 + 1;
    if (*(char *)(uVar24 + 0xc + lVar21) != "bottom"[lVar21]) goto LAB_143445400;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfb;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 8;
  goto LAB_143445422;
  while (lVar20 = lVar16, lVar16 != 7) {
LAB_143445400:
    lVar16 = lVar20 + 1;
    if (*(char *)(uVar24 + 0xc + lVar20) != "center"[lVar20]) goto LAB_143445429;
  }
  lVar16 = plVar7[0x1c];
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 0xc;
LAB_143445422:
  *(byte *)(lVar16 + 0x15b) = *(byte *)(lVar16 + 0x15b) | 1;
LAB_143445429:
  *(uint *)((longlong)plVar7 + 0xfc) = *(uint *)((longlong)plVar7 + 0xfc) | 0x2000;
  FUN_143de5880(plVar7);
  FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
  uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
  iVar14 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar24 + 8,0xffffffff);
  if (iVar14 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar24);
  }
  pRVar1 = local_d8 + 0x18;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
    FUN_14335f920(local_d8);
  }
  goto LAB_1434446c0;
  while (lVar20 = lVar19, lVar19 != 5) {
LAB_143444580:
    lVar19 = lVar20 + 1;
    lVar22 = lVar21;
    if (*(char *)(uVar24 + 0xc + lVar20) != (&DAT_145b068ec)[lVar20]) goto LAB_1434445b0;
  }
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfc;
  goto LAB_143444603;
  while (lVar22 = lVar20, lVar20 != 6) {
LAB_1434445b0:
    lVar20 = lVar22 + 1;
    if (*(char *)(uVar24 + 0xc + lVar22) != "right"[lVar22]) goto LAB_1434445e0;
  }
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfd;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 1;
  goto LAB_143444603;
  while (lVar21 = lVar20, lVar20 != 7) {
LAB_1434445e0:
    lVar20 = lVar21 + 1;
    if (*(char *)(uVar24 + 0xc + lVar21) != "center"[lVar21]) goto LAB_14344460a;
  }
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) & 0xfe;
  *(byte *)(lVar16 + 0x159) = *(byte *)(lVar16 + 0x159) | 2;
LAB_143444603:
  *(byte *)(lVar16 + 0x15b) = *(byte *)(lVar16 + 0x15b) | 1;
LAB_14344460a:
  if (((bVar9 & 3) != (*(byte *)(plVar7[0x1c] + 0x159) & 3)) ||
     ((bVar10 & 1) != (*(byte *)((longlong)plVar7 + 0xfc) & 1))) {
    Scaleform::GFx::AS2::AvmTextField::UpdateAutosizeSettings(param_1 + -8);
  }
  FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
  uVar24 = CONCAT71(uStackX_9,local_res8) & 0xfffffffffffffffc;
  iVar14 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar24 + 8,0xffffffff);
  if (iVar14 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar24);
  }
  pRVar1 = local_d8 + 0x18;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
    FUN_14335f920(local_d8);
  }
  goto LAB_1434446c0;
}



// FUNCTION 143445d50 FUN_143445d50 body=73 status=ok
// SIG undefined FUN_143445d50(void)

longlong FUN_143445d50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = USceneComponent::GetAttachParent(param_1[-2]);
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (cVar1 != '\0') {
    return *(longlong *)(lVar2 + 0x50) + 0x68;
  }
  return 0;
}



// FUNCTION 143445dc0 FUN_143445dc0 body=159 status=ok
// SIG undefined FUN_143445dc0(void)

longlong FUN_143445dc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  if (param_1[0xc] == 0) {
    local_res8[0] = 0x143;
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x78,local_res8);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
      lVar2 = FUN_143448b70(lVar2,uVar3,param_1[4]);
    }
    lVar1 = param_1[0xc];
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    param_1[0xc] = lVar2;
    return lVar2;
  }
  return param_1[0xc];
}



// FUNCTION 143445e70 UpdateAutosizeSettings body=142 status=ok
// SIG undefined UpdateAutosizeSettings(void)

void Scaleform::GFx::AS2::AvmTextField::UpdateAutosizeSettings(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  bVar4 = *(byte *)(lVar2 + 0xfc) & 1;
  if ((bVar4 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158) & 8) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    Render::Text::DocView::SetAutoSizeX(*(undefined8 *)(lVar2 + 0xe0));
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (bVar4 == 0) {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    Render::Text::DocView::SetAutoSizeY(*(undefined8 *)(lVar2 + 0xe0));
  }
  *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) | 0x2000;
  FUN_143de5880(lVar2);
  return;
}



// FUNCTION 143445f10 FUN_143445f10 body=640 status=ok
// SIG undefined FUN_143445f10(void)

void FUN_143445f10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar3 - 2U < 4) {
      lVar7 = plVar1[3];
    }
    else {
      lVar7 = 0;
    }
    cVar2 = FUN_143dea8d0(lVar7);
    if (cVar2 == '\0') {
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 == 1) {
        uVar4 = FUN_1434141c0(param_1,0);
        lVar5 = FUN_143412120(uVar4,*(undefined8 *)(param_1 + 0x30));
        if ((lVar5 != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar3 == 0x1e))
        {
          Scaleform::Render::Text::DocView::SetTextFormat
                    (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0x68,0,0xffffffffffffffff);
          Scaleform::Render::Text::DocView::SetParagraphFormat
                    (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0xb8,0,0xffffffffffffffff);
          FUN_143de5880(lVar7);
          return;
        }
      }
      else if (iVar3 == 2) {
        uVar4 = FUN_1434141c0(param_1,1);
        lVar5 = FUN_143412120(uVar4,*(undefined8 *)(param_1 + 0x30));
        if ((lVar5 != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar3 == 0x1e))
        {
          uVar4 = FUN_1434141c0(param_1,0);
          dVar8 = (double)FUN_143411a90(uVar4,*(undefined8 *)(param_1 + 0x30));
          if (0.0 <= dVar8) {
            uVar6 = (ulonglong)dVar8;
            iVar3 = (int)uVar6 + 1;
            Scaleform::Render::Text::DocView::SetTextFormat
                      (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0x68,uVar6 & 0xffffffff,iVar3);
            Scaleform::Render::Text::DocView::SetParagraphFormat
                      (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0xb8,uVar6 & 0xffffffff,iVar3);
            FUN_143de5880(lVar7);
          }
        }
      }
      else if (2 < iVar3) {
        uVar4 = FUN_1434141c0(param_1,2);
        lVar5 = FUN_143412120(uVar4,*(undefined8 *)(param_1 + 0x30));
        if ((lVar5 != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar3 == 0x1e))
        {
          uVar4 = FUN_1434141c0(param_1,0);
          dVar8 = (double)FUN_143411a90(uVar4,*(undefined8 *)(param_1 + 0x30));
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
          if (0.0 <= dVar8) {
            uVar11 = SUB84(dVar8,0);
            uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
          }
          uVar4 = FUN_1434141c0(param_1,1);
          dVar8 = (double)FUN_143411a90(uVar4,*(undefined8 *)(param_1 + 0x30));
          if (0.0 <= dVar8) {
            uVar9 = SUB84(dVar8,0);
            uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
          }
          if ((double)CONCAT44(uVar12,uVar11) <= (double)CONCAT44(uVar10,uVar9)) {
            Scaleform::Render::Text::DocView::SetTextFormat
                      (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0x68,
                       (longlong)(double)CONCAT44(uVar12,uVar11) & 0xffffffff,
                       (longlong)(double)CONCAT44(uVar10,uVar9) & 0xffffffff);
            Scaleform::Render::Text::DocView::SetParagraphFormat
                      (*(undefined8 *)(lVar7 + 0xe0),lVar5 + 0xb8,
                       (longlong)(double)CONCAT44(uVar12,uVar11) & 0xffffffff,
                       (longlong)(double)CONCAT44(uVar10,uVar9) & 0xffffffff);
            FUN_143de5880(lVar7);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1434461a0 FUN_1434461a0 body=315 status=ok
// SIG undefined FUN_1434461a0(void)

void FUN_1434461a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_58 [80];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar4 - 2U < 4) {
      lVar8 = plVar1[3];
    }
    else {
      lVar8 = 0;
    }
    cVar3 = FUN_143dea8d0(lVar8);
    if ((cVar3 == '\0') && (0 < *(int *)(param_1 + 0x38))) {
      uVar5 = FUN_1434141c0(param_1,0);
      lVar6 = FUN_143412120(uVar5,*(undefined8 *)(param_1 + 0x30));
      if ((lVar6 != 0) &&
         (iVar4 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x10))(lVar6 + 0x20), iVar4 == 0x1e)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0xe0) + 0x10);
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar7 = FUN_1433ddf20(*(undefined8 *)(lVar2 + 0x38),local_58,lVar6 + 0x68);
        FUN_1433e69f0(*(undefined8 *)(*(longlong *)(lVar8 + 0xe0) + 0x10),uVar7);
        *(uint *)(lVar8 + 0xfc) = *(uint *)(lVar8 + 0xfc) | 0x10000;
        FUN_1433dd700(local_58);
        uVar5 = FUN_1433deff0(uVar5,local_58,lVar6 + 0xb8);
        FUN_1433e6ac0(*(undefined8 *)(*(longlong *)(lVar8 + 0xe0) + 0x10),uVar5);
        *(uint *)(lVar8 + 0xfc) = *(uint *)(lVar8 + 0xfc) | 0x10000;
        FUN_1433dedf0(local_58);
      }
    }
  }
  return;
}



// FUNCTION 1434462f0 FUN_1434462f0 body=698 status=ok
// SIG undefined FUN_1434462f0(void)

void FUN_1434462f0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_68 [96];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 4)) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 0;
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar6 = 0;
  uVar11 = uVar6;
  if (iVar3 - 2U < 4) {
    uVar11 = plVar1[3];
  }
  uVar8 = 0xffffffffffffffff;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    uVar10 = uVar6;
    if (uVar9 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    dVar12 = (double)FUN_143411a90(uVar10);
    dVar13 = 0.0;
    if (0.0 <= dVar12) {
      dVar13 = dVar12;
    }
    if (0.0 <= dVar13) {
      uVar7 = (longlong)dVar13 & 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x38) < 2) {
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_143446454;
    uVar4 = FUN_1434141c0(param_1,0);
    dVar13 = (double)FUN_143411a90(uVar4,*(undefined8 *)(param_1 + 0x30));
    dVar13 = dVar13 + 1.0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    uVar10 = uVar6;
    if (uVar9 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
      uVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    dVar13 = (double)FUN_143411a90(uVar10);
  }
  dVar12 = 0.0;
  if (0.0 <= dVar13) {
    dVar12 = dVar13;
  }
  if (0.0 <= dVar12) {
    uVar8 = (longlong)dVar12 & 0xffffffff;
  }
LAB_143446454:
  if (uVar8 < uVar7) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 0;
  }
  else {
    FUN_1433dd540(local_68,*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30));
    local_98 = 0;
    local_90 = 1;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_1433e6310(*(undefined8 *)(*(longlong *)(uVar11 + 0xe0) + 0x10),local_68,&local_98,uVar7,
                  uVar8);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
    if (lVar5 != 0) {
      uVar6 = FUN_1434712a0(lVar5,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_143472850(uVar6,*(longlong *)(param_1 + 0x30) + 0xe8,local_68);
    FUN_143472ec0(uVar6,*(longlong *)(param_1 + 0x30) + 0xe8,&local_98);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),uVar6);
    if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
      FUN_1434a2b80(uVar6);
    }
    FUN_1433dedf0(&local_98);
    FUN_1433dd700(local_68);
  }
  return;
}



// FUNCTION 1434465b0 FUN_1434465b0 body=291 status=ok
// SIG undefined FUN_1434465b0(void)

void FUN_1434465b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 4)) {
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = 0;
    lVar5 = lVar7;
    if (iVar4 - 2U < 4) {
      lVar5 = plVar1[3];
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x10);
    lVar2 = *(longlong *)(lVar5 + 0x38);
    lVar5 = *(longlong *)(lVar5 + 0x30);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
    if (lVar6 != 0) {
      lVar7 = FUN_1434712a0(lVar6,*(undefined8 *)(param_1 + 0x30));
    }
    if (lVar2 != 0) {
      FUN_143472850(lVar7,*(longlong *)(param_1 + 0x30) + 0xe8,lVar2);
    }
    if (lVar5 != 0) {
      FUN_143472ec0(lVar7,*(longlong *)(param_1 + 0x30) + 0xe8,lVar5);
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
    if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
      FUN_1434a2b80(lVar7);
      return;
    }
  }
  return;
}



// FUNCTION 1434466e0 FUN_1434466e0 body=724 status=ok
// SIG undefined FUN_1434466e0(void)

void FUN_1434466e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *local_res8;
  ulonglong in_stack_fffffffffffff7c8;
  undefined1 local_828 [2048];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar8 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar8 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar8 - 2U < 4) {
      lVar11 = plVar2[3];
    }
    else {
      lVar11 = 0;
    }
    cVar7 = FUN_143dea8d0(lVar11);
    if (((cVar7 == '\0') && (0 < *(int *)(param_1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0xe0) + 0xd8) != 0)) {
      uVar10 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar10,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_fffffffffffff7c8 & 0xffffffffffffff00);
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe0) + 0x10) + 0x38);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      }
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe0) + 0x10) + 0x30);
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      uVar9 = FUN_14335fa60(&local_res8);
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0xe0) + 0xd8) + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x38);
      uVar13 = *(ulonglong *)(lVar5 + 0x40);
      if (uVar6 < *(ulonglong *)(lVar5 + 0x40)) {
        uVar13 = uVar6;
      }
      uVar12 = *(ulonglong *)(lVar5 + 0x40);
      if (*(ulonglong *)(lVar5 + 0x40) < uVar6) {
        uVar12 = uVar6;
      }
      if (uVar9 < 0x400) {
        FUN_143306bc0(local_828,0x400,*local_res8,0xffffffffffffffff);
        FUN_143deb360(lVar11,local_828,uVar13,uVar12,0xffffffffffffffff);
      }
      else {
        uVar10 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)(uVar9 + 1) * 2,0);
        FUN_143306bc0(uVar10,(ulonglong)(uVar9 + 1),*local_res8,0xffffffffffffffff);
        FUN_143deb360(lVar11,uVar10,uVar13,uVar12,0xffffffffffffffff);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
      }
      lVar5 = uVar13 + uVar9;
      FUN_143df1be0(*(undefined8 *)(*(longlong *)(lVar11 + 0xe0) + 0xd8),lVar5,0);
      if (lVar4 != 0) {
        Scaleform::Render::Text::DocView::SetParagraphFormat
                  (*(undefined8 *)(lVar11 + 0xe0),lVar4,uVar13,lVar5);
      }
      if (lVar3 != 0) {
        Scaleform::Render::Text::DocView::SetTextFormat
                  (*(undefined8 *)(lVar11 + 0xe0),lVar3,uVar13,lVar5);
      }
      FUN_143de5880(lVar11);
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dedf0(lVar4);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
        }
      }
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1433dd700(lVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
        }
      }
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 1434469c0 FUN_1434469c0 body=1045 status=ok
// SIG undefined FUN_1434469c0(void)

void FUN_1434469c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined8 *local_res10;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_fffffffffffff788;
  undefined1 local_868 [2088];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar4 - 2U < 4) {
      lVar13 = plVar2[3];
    }
    else {
      lVar13 = 0;
    }
    cVar3 = FUN_143dea8d0(lVar13);
    if ((cVar3 == '\0') && (2 < *(int *)(param_1 + 0x38))) {
      uVar6 = FUN_1434141c0(param_1,0);
      dVar15 = (double)FUN_143411a90(uVar6,*(undefined8 *)(param_1 + 0x30));
      uVar6 = FUN_1434141c0(param_1,1);
      dVar16 = (double)FUN_143411a90(uVar6,*(undefined8 *)(param_1 + 0x30));
      uVar6 = FUN_1434141c0(param_1,2);
      FUN_143411540(uVar6,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_fffffffffffff788 & 0xffffffffffffff00);
      uVar5 = FUN_14335fa60(&local_res10);
      if ((0.0 <= dVar15) && (0.0 <= dVar16)) {
        uVar9 = (uint)(longlong)dVar16;
        uVar12 = (uint)(longlong)dVar15;
        if (uVar12 <= uVar9) {
          uVar7 = Scaleform::Render::Text::StyledText::GetLength
                            (*(undefined8 *)(*(longlong *)(lVar13 + 0xe0) + 0x10));
          uVar11 = (longlong)dVar15 & 0xffffffff;
          uVar14 = ((ulonglong)uVar5 - (ulonglong)(uVar9 - uVar12)) + uVar7;
          if (uVar11 < uVar7) {
            FUN_1433e6590(*(undefined8 *)(*(longlong *)(lVar13 + 0xe0) + 0x10),&local_res18,
                          &local_res20,uVar11);
            lVar8 = local_res18;
            lVar10 = local_res20;
            if (local_res18 != 0) {
              *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
              *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
              if (local_res18 != 0) {
                piVar1 = (int *)(local_res18 + 8);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_1433dd700(local_res18);
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18);
                  lVar10 = local_res20;
                }
              }
            }
          }
          else {
            lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0x10) + 0x38);
            if (lVar8 != 0) {
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              if (lVar8 != 0) {
                piVar1 = (int *)(lVar8 + 8);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_1433dd700(lVar8);
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar8);
                }
              }
            }
            lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0x10) + 0x30);
          }
          if (lVar10 != 0) {
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            if (lVar10 != 0) {
              piVar1 = (int *)(lVar10 + 8);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_1433dedf0(lVar10);
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
              }
            }
          }
          if (uVar5 < 0x400) {
            FUN_143306bc0(local_868,0x400,*local_res10,0xffffffffffffffff);
            FUN_143deb360(lVar13,local_868,uVar11,(longlong)dVar16 & 0xffffffff,0xffffffffffffffff);
          }
          else {
            uVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)(uVar5 + 1) * 2,0)
            ;
            FUN_143306bc0(uVar6,(ulonglong)(uVar5 + 1),*local_res10,0xffffffffffffffff);
            FUN_143deb360(lVar13,uVar6,uVar11,(longlong)dVar16 & 0xffffffff,0xffffffffffffffff);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
          }
          if ((*(longlong *)(*(longlong *)(lVar13 + 0xe0) + 0xd8) != 0) &&
             (uVar7 = FUN_143df1d50(), uVar14 < uVar7)) {
            FUN_143df1be0(*(undefined8 *)(*(longlong *)(lVar13 + 0xe0) + 0xd8),uVar14,0);
          }
          if (lVar10 != 0) {
            Scaleform::Render::Text::DocView::SetParagraphFormat
                      (*(undefined8 *)(lVar13 + 0xe0),lVar10,uVar11,uVar5 + uVar12);
          }
          if (lVar8 != 0) {
            Scaleform::Render::Text::DocView::SetTextFormat
                      (*(undefined8 *)(lVar13 + 0xe0),lVar8,uVar11,uVar5 + uVar12);
          }
          FUN_143de5880(lVar13);
          if (lVar10 != 0) {
            piVar1 = (int *)(lVar10 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1433dedf0(lVar10);
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar10);
            }
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
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 143446de0 FUN_143446de0 body=140 status=ok
// SIG undefined FUN_143446de0(void)

void FUN_143446de0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_res8 [4];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 4) {
      plVar2 = *(longlong **)(param_1 + 0x10);
      iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (iVar3 - 2U < 4) {
        lVar5 = plVar2[3];
      }
      else {
        lVar5 = 0;
      }
      if (0x3fff < *(int *)(lVar5 + 0x2c)) {
        FUN_14336ee70(lVar5);
        return;
      }
      puVar4 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar5,local_res8);
      FUN_1434a1590(lVar5 + 0x18,"%s.removeMovieClip() failed - depth must be >= 0",
                    *(undefined8 *)*puVar4);
      piVar1 = (int *)(local_res8[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143446e80 FUN_143446e80 body=431 status=ok
// SIG undefined FUN_143446e80(void)

void FUN_143446e80(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar9 = 0;
    lVar8 = lVar9;
    if (iVar6 - 2U < 4) {
      lVar8 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      lVar10 = lVar9;
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      uVar7 = FUN_143411f00(lVar10);
      local_38 = 0;
      uStack_30 = 0;
      cVar5 = FUN_1433ff300(*(undefined8 *)(lVar8 + 0xe0),&local_38,uVar7);
      if (cVar5 == '\0') {
        puVar4 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar4);
        *puVar4 = 1;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
        if (lVar8 != 0) {
          lVar9 = FUN_143451210(lVar8,*(undefined8 *)(param_1 + 0x30));
        }
        local_28 = (double)(float)local_38 * 0.05;
        local_18 = (double)(float)uStack_30 * 0.05;
        local_20 = (double)local_38._4_4_ * 0.05;
        local_10 = (double)uStack_30._4_4_ * 0.05;
        FUN_143451780(lVar9,*(undefined8 *)(param_1 + 0x30),&local_28);
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar9);
        if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
          FUN_1434a2b80(lVar9);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143447040 FUN_143447040 body=345 status=ok
// SIG undefined FUN_143447040(void)

void FUN_143447040(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar5 = 0;
    lVar4 = lVar5;
    if (iVar3 - 2U < 4) {
      lVar4 = plVar1[3];
    }
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(uint *)(param_1 + 0x3c);
      lVar7 = lVar5;
      if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      dVar8 = (double)FUN_143411a90(lVar7);
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      dVar9 = (double)FUN_143411a90(lVar5);
      lVar4 = FUN_1433fe9a0(*(undefined8 *)(lVar4 + 0xe0),(float)(dVar8 * 20.0),
                            (float)(dVar9 * 20.0));
      if (lVar4 == -1) {
        dVar8 = -1.0;
      }
      else {
        dVar8 = (double)lVar4;
        if (lVar4 < 0) {
          dVar8 = dVar8 + 1.8446744073709552e+19;
        }
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar8);
    }
  }
  return;
}



// FUNCTION 1434471a0 FUN_1434471a0 body=431 status=ok
// SIG undefined FUN_1434471a0(void)

void FUN_1434471a0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar9 = 0;
    lVar8 = lVar9;
    if (iVar6 - 2U < 4) {
      lVar8 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      lVar10 = lVar9;
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      uVar7 = FUN_143411f00(lVar10);
      local_38 = 0;
      uStack_30 = 0;
      cVar5 = FUN_1433ff5d0(*(undefined8 *)(lVar8 + 0xe0),&local_38,uVar7);
      if (cVar5 == '\0') {
        puVar4 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar4);
        *puVar4 = 1;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
        if (lVar8 != 0) {
          lVar9 = FUN_143451210(lVar8,*(undefined8 *)(param_1 + 0x30));
        }
        local_28 = (double)(float)local_38 * 0.05;
        local_18 = (double)(float)uStack_30 * 0.05;
        local_20 = (double)local_38._4_4_ * 0.05;
        local_10 = (double)uStack_30._4_4_ * 0.05;
        FUN_143451780(lVar9,*(undefined8 *)(param_1 + 0x30),&local_28);
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar9);
        if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
          FUN_1434a2b80(lVar9);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143447360 FUN_143447360 body=333 status=ok
// SIG undefined FUN_143447360(void)

void FUN_143447360(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = 0;
    lVar5 = lVar4;
    if (iVar3 - 2U < 4) {
      lVar5 = plVar1[3];
    }
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(uint *)(param_1 + 0x3c);
      lVar7 = lVar4;
      if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      dVar8 = (double)FUN_143411a90(lVar7);
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
      }
      dVar9 = (double)FUN_143411a90(lVar4);
      uVar6 = FUN_1433fedf0(*(undefined8 *)(lVar5 + 0xe0),(float)(dVar8 * 20.0),
                            (float)(dVar9 * 20.0));
      if (uVar6 == 0xffffffff) {
        dVar8 = -1.0;
      }
      else {
        dVar8 = (double)uVar6;
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar8);
    }
  }
  return;
}



// FUNCTION 1434474c0 FUN_1434474c0 body=215 status=ok
// SIG undefined FUN_1434474c0(void)

void FUN_1434474c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar6 = 0;
    lVar5 = lVar6;
    if (iVar3 - 2U < 4) {
      lVar5 = plVar1[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_1 + 0x3c);
      if (uVar4 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar4 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar4 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      if (((int)dVar7 < 0) ||
         (uVar4 = FUN_1433fee70(*(undefined8 *)(lVar5 + 0xe0),(int)dVar7), uVar4 == 0xffffffff)) {
        dVar7 = -1.0;
      }
      else {
        dVar7 = (double)uVar4;
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar7);
    }
  }
  return;
}



// FUNCTION 1434475a0 FUN_1434475a0 body=229 status=ok
// SIG undefined FUN_1434475a0(void)

void FUN_1434475a0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = 0;
    lVar5 = lVar6;
    if (iVar4 - 2U < 4) {
      lVar5 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      if (((int)dVar7 < 0) || (lVar5 = FUN_1433feee0(*(undefined8 *)(lVar5 + 0xe0)), lVar5 == -1)) {
        dVar7 = -1.0;
      }
      else {
        dVar7 = (double)lVar5;
        if (lVar5 < 0) {
          dVar7 = dVar7 + 1.8446744073709552e+19;
        }
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar7);
    }
  }
  return;
}



// FUNCTION 143447690 FUN_143447690 body=232 status=ok
// SIG undefined FUN_143447690(void)

void FUN_143447690(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = 0;
    lVar5 = lVar6;
    if (iVar4 - 2U < 4) {
      lVar5 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      if (((int)dVar7 < 0) ||
         (lVar5 = Scaleform::Render::Text::DocView::GetLineLength
                            (*(undefined8 *)(lVar5 + 0xe0),(int)dVar7,0), lVar5 == -1)) {
        dVar7 = -1.0;
      }
      else {
        dVar7 = (double)lVar5;
        if (lVar5 < 0) {
          dVar7 = dVar7 + 1.8446744073709552e+19;
        }
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar7);
    }
  }
  return;
}



// FUNCTION 143447780 FUN_143447780 body=777 status=ok
// SIG undefined FUN_143447780(void)

void FUN_143447780(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  byte local_40 [8];
  double local_38;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar8 = 0;
    lVar7 = lVar8;
    if (iVar6 - 2U < 4) {
      lVar7 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      lVar9 = lVar8;
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      dVar10 = (double)FUN_143411a90(lVar9);
      if (((int)dVar10 < 0) ||
         (cVar5 = FUN_1433ff1b0(*(undefined8 *)(lVar7 + 0xe0),(int)dVar10,&local_58), cVar5 == '\0')
         ) {
        puVar4 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar4);
        *puVar4 = 0;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
        if (lVar7 != 0) {
          lVar8 = FUN_1434148b0(lVar7,*(undefined8 *)(param_1 + 0x30));
        }
        local_40[0] = 3;
        local_38 = (double)local_50 * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,"ascent",local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        local_40[0] = 3;
        local_38 = (double)local_4c * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,"descent",local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        local_40[0] = 3;
        local_38 = (double)local_58 * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,"width",local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        local_40[0] = 3;
        local_38 = (double)local_54 * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,"height",local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        local_40[0] = 3;
        local_38 = (double)local_44 * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,"leading",local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        local_40[0] = 3;
        local_38 = (double)local_48 * 0.05;
        FUN_1434a4640(lVar8 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,&DAT_145b09ac8,local_40);
        if (4 < local_40[0]) {
          FUN_143411150(local_40);
        }
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar8);
        if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
          FUN_1434a2b80(lVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 143447a90 FUN_143447a90 body=515 status=ok
// SIG undefined FUN_143447a90(void)

void FUN_143447a90(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  ulonglong local_res8;
  undefined8 local_res10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar6 - 2U < 4) {
      lVar7 = plVar2[3];
    }
    else {
      lVar7 = 0;
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar8 = 0;
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      dVar9 = (double)FUN_143411a90(lVar8);
      if ((int)dVar9 < 0) {
        puVar4 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar4);
        *puVar4 = 0;
        return;
      }
      local_res10 = 0;
      lVar7 = FUN_1433ff010(*(undefined8 *)(lVar7 + 0xe0),(int)dVar9,&local_res10);
      if (lVar7 == 0) {
        lVar7 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),&DAT_145af3922,0,0);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        pbVar5 = *(byte **)(param_1 + 8);
        if (4 < *pbVar5) {
          FUN_143411150(pbVar5);
        }
        *pbVar5 = 5;
        *(longlong *)(pbVar5 + 8) = lVar7;
        iVar6 = *(int *)(lVar7 + 0x18);
        *(int *)(lVar7 + 0x18) = iVar6;
        if (iVar6 == 0) {
          FUN_14335f920(lVar7);
        }
      }
      else {
        FUN_1432c2f70(&local_res8);
        FUN_1432c3830(&local_res8,lVar7,local_res10);
        lVar7 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        pbVar5 = *(byte **)(param_1 + 8);
        if (4 < *pbVar5) {
          FUN_143411150(pbVar5);
        }
        *pbVar5 = 5;
        *(longlong *)(pbVar5 + 8) = lVar7;
        iVar6 = *(int *)(lVar7 + 0x18);
        *(int *)(lVar7 + 0x18) = iVar6;
        if (iVar6 == 0) {
          FUN_14335f920(lVar7);
        }
        iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar6 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143447ca0 FUN_143447ca0 body=231 status=ok
// SIG undefined FUN_143447ca0(void)

void FUN_143447ca0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = 0;
    lVar5 = lVar6;
    if (iVar4 - 2U < 4) {
      lVar5 = plVar2[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      if (((int)dVar7 < 0) ||
         (lVar5 = FUN_1433fed80(*(undefined8 *)(lVar5 + 0xe0),(int)dVar7), lVar5 == -1)) {
        dVar7 = -1.0;
      }
      else {
        dVar7 = (double)lVar5;
        if (lVar5 < 0) {
          dVar7 = dVar7 + 1.8446744073709552e+19;
        }
      }
      FUN_1434a4b40(*(undefined8 *)(param_1 + 8),dVar7);
    }
  }
  return;
}



// FUNCTION 143447d90 FUN_143447d90 body=455 status=ok
// SIG undefined FUN_143447d90(void)

void FUN_143447d90(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  longlong local_res8;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 2;
  puVar3[8] = 0;
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 4)) {
    plVar4 = *(longlong **)(param_1 + 0x10);
    iVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    pcVar10 = (char *)0x0;
    pcVar9 = pcVar10;
    if (iVar5 - 2U < 4) {
      pcVar9 = (char *)plVar4[3];
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar7 = *(longlong *)(param_1 + 0x30);
      pcVar11 = pcVar10;
      if (uVar2 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
        pcVar11 = (char *)((ulonglong)(uVar2 & 0x1f) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
      }
      if (*pcVar11 == '\x01') {
        Scaleform::GFx::TextField::ClearIdImageDescAssoc(pcVar9);
        Scaleform::GFx::TextField::ClearImageSubstitutor(pcVar9);
        *(byte *)(*(longlong *)(pcVar9 + 0xe0) + 0x15b) =
             *(byte *)(*(longlong *)(pcVar9 + 0xe0) + 0x15b) | 2;
        FUN_143de5880(pcVar9);
        return;
      }
      uVar6 = FUN_1434141c0(param_1,0);
      lVar7 = FUN_143412120(uVar6,lVar7);
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(pcVar9,&local_res8);
        FUN_1434a1590(pcVar9 + 0x18,
                      "%s.setImageSubstitutions() failed: parameter should be either \'null\', object or array"
                      ,*(undefined8 *)*puVar8);
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20);
        if (iVar5 == 7) {
          iVar5 = *(int *)(lVar7 + 0x78);
          pcVar11 = pcVar10;
          if (0 < (longlong)iVar5) {
            do {
              FUN_1434418c0(pcVar9 + (ulonglong)(byte)pcVar9[0x6d] * 4,param_1,pcVar11,
                            *(undefined8 *)(*(longlong *)(lVar7 + 0x70) + (longlong)pcVar10 * 8));
              pcVar11 = (char *)(ulonglong)((int)pcVar11 + 1);
              pcVar10 = pcVar10 + 1;
            } while ((longlong)pcVar10 < (longlong)iVar5);
          }
        }
        else {
          uVar6 = FUN_1434141c0(param_1,0);
          FUN_1434418c0(pcVar9 + (ulonglong)(byte)pcVar9[0x6d] * 4,param_1,0,uVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 143447f60 FUN_143447f60 body=1113 status=ok
// SIG undefined FUN_143447f60(void)

void FUN_143447f60(longlong param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  RefCountImpl *pRVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar5);
  *puVar5 = 2;
  puVar5[8] = 0;
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    return;
  }
  iVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (iVar8 != 4) {
    return;
  }
  plVar18 = *(longlong **)(param_1 + 0x10);
  iVar8 = (**(code **)(*plVar18 + 0x10))(plVar18);
  plVar14 = (longlong *)0x0;
  plVar21 = plVar14;
  if (iVar8 - 2U < 4) {
    plVar21 = (longlong *)plVar18[3];
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x3c);
  plVar18 = plVar14;
  if (uVar4 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
    plVar18 = (longlong *)
              ((ulonglong)(uVar4 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar4 >> 5) * 8));
  }
  FUN_143411540(plVar18,&local_res8,lVar6,0xffffffff,0);
  plVar18 = (longlong *)plVar21[0x24];
  puVar7 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
  if (plVar18 == (longlong *)0x0) goto LAB_14344838c;
  FUN_1432c2fb0(&local_res8,*puVar7);
  plVar20 = plVar14;
  if (*plVar18 != 0) {
    puVar15 = (ulonglong *)(CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc);
    uVar9 = FUN_1432c4390((longlong)puVar15 + 0xc,*puVar15 & 0x7fffffffffffffff,0x1505);
    lVar6 = *plVar18;
    uVar9 = *(ulonglong *)(lVar6 + 8) & uVar9;
    puVar15 = (ulonglong *)(lVar6 + 0x10 + uVar9 * 0x20);
    if ((*puVar15 != 0xfffffffffffffffe) && (puVar15[1] == uVar9)) {
      uVar16 = CONCAT44(uStackX_c,local_res8);
      uVar19 = uVar9;
      do {
        if (puVar15[1] == uVar9) {
          pcVar10 = (char *)((puVar15[2] & 0xfffffffffffffffc) + 0xc);
          lVar17 = ((uVar16 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar10;
          do {
            cVar2 = *pcVar10;
            cVar3 = pcVar10[lVar17];
            if (cVar2 != cVar3) break;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            if (-1 < (longlong)uVar19) {
              plVar20 = (longlong *)((uVar19 + 1) * 0x20 + lVar6);
            }
            goto LAB_14344812d;
          }
        }
        uVar19 = *puVar15;
        if (uVar19 == 0xffffffffffffffff) goto LAB_14344812d;
        puVar15 = (ulonglong *)(lVar6 + 0x10 + uVar19 * 0x20);
      } while( true );
    }
  }
  uVar16 = CONCAT44(uStackX_c,local_res8);
LAB_14344812d:
  plVar18 = plVar20 + 1;
  if (plVar20 == (longlong *)0x0) {
    plVar18 = plVar14;
  }
  iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar16 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar8 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16 & 0xfffffffffffffffc);
  }
  if ((plVar18 == (longlong *)0x0) || (lVar6 = *plVar18, *(int *)(param_1 + 0x38) < 2))
  goto LAB_14344838c;
  pcVar10 = (char *)FUN_1434141c0(param_1,1);
  if (*pcVar10 != '\x01') {
    pcVar10 = (char *)FUN_1434141c0(param_1,1);
    if ((*pcVar10 != '\0') && (*pcVar10 != '\n')) {
      uVar11 = FUN_1434141c0(param_1,1);
      lVar17 = FUN_143412120(uVar11,*(undefined8 *)(param_1 + 0x30));
      if ((lVar17 == 0) ||
         (iVar8 = (**(code **)(*(longlong *)(lVar17 + 0x20) + 0x10))(lVar17 + 0x20), iVar8 != 0x1a))
      goto LAB_14344838c;
      lVar17 = *(longlong *)(lVar17 + 0x68);
      lVar12 = (**(code **)(*plVar21 + 0x218))(plVar21);
      if (lVar12 != 0) {
        Scaleform::GFx::Resource::AddRef(lVar12);
      }
      iVar8 = (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x18))();
      if (iVar8 == 0) {
        pRVar13 = (RefCountImpl *)
                  (**(code **)(*(longlong *)(lVar12 + 0x18) + 0x18))(lVar12 + 0x18,0xe);
        if (pRVar13 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(pRVar13);
          local_60 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,plVar21);
          local_68[0] = 3;
          local_58 = 1;
          local_54 = 1;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          pRVar13 = (RefCountImpl *)
                    (**(code **)(*(longlong *)(lVar12 + 0x18) + 0x18))(lVar12 + 0x18,0xe);
          plVar14 = (longlong *)
                    (**(code **)(*(longlong *)pRVar13 + 0x20))
                              (pRVar13,local_68,*(undefined8 *)(lVar17 + 0x18));
          Scaleform::RefCountImpl::Release(pRVar13);
          goto LAB_143448300;
        }
        local_res8 = 0x21000;
        FUN_1433db230(&local_res8,"ImageCreator is null in UpdateImageSubstitution");
      }
      else {
        plVar14 = *(longlong **)(lVar17 + 0x18);
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 8))(plVar14);
LAB_143448300:
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
      }
      *(longlong **)(lVar6 + 0x10) = plVar14;
      FUN_143de5880(plVar21);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      if (lVar12 != 0) {
        FUN_1432de450(lVar12);
      }
      goto LAB_14344838c;
    }
  }
  lVar17 = Scaleform::GFx::TextField::CreateImageSubstitutor(plVar21);
  if (lVar17 != 0) {
    FUN_1433fb0b0(lVar17,lVar6);
    *(byte *)(plVar21[0x1c] + 0x15b) = *(byte *)(plVar21[0x1c] + 0x15b) | 2;
    FUN_143deb2f0(plVar21,*puVar7);
    FUN_143de5880(plVar21);
  }
LAB_14344838c:
  piVar1 = (int *)(puVar7 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar7);
  }
  return;
}



// FUNCTION 1434483c0 FUN_1434483c0 body=192 status=ok
// SIG undefined FUN_1434483c0(void)

void FUN_1434483c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *local_res8;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar4 - 2U < 4) {
      lVar6 = plVar2[3];
    }
    else {
      lVar6 = 0;
    }
    cVar3 = FUN_143dea8d0(lVar6);
    if ((cVar3 == '\0') && (0 < *(int *)(param_1 + 0x38))) {
      uVar5 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar5,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
      FUN_1433fc260(*(undefined8 *)(lVar6 + 0xe0),*local_res8,0xffffffffffffffff);
      *(uint *)(lVar6 + 0xfc) = *(uint *)(lVar6 + 0xfc) | 0x10000;
      FUN_143de5880(lVar6);
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
      }
    }
  }
  return;
}



// FUNCTION 143448490 FUN_143448490 body=315 status=ok
// SIG undefined FUN_143448490(void)

void FUN_143448490(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *local_res8;
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 4)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar4 - 2U < 4) {
      lVar6 = plVar2[3];
    }
    else {
      lVar6 = 0;
    }
    cVar3 = FUN_143dea8d0(lVar6);
    if ((cVar3 == '\0') && (0 < *(int *)(param_1 + 0x38))) {
      uVar5 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar5,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
      local_10 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,lVar6);
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      Scaleform::Render::Text::DocView::AppendHtml
                (*(undefined8 *)(lVar6 + 0xe0),*local_res8,0xffffffffffffffff,0,&local_28);
      *(uint *)(lVar6 + 0xfc) = *(uint *)(lVar6 + 0xfc) | 0x10000;
      if (local_20 != 0) {
        FUN_143deace0(lVar6,&local_28);
      }
      FUN_143de5880(lVar6);
      FUN_1434082b0(local_28,local_20);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28);
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
      }
    }
  }
  return;
}



// FUNCTION 1434485e0 FUN_1434485e0 body=295 status=ok
// SIG undefined FUN_1434485e0(void)

void FUN_1434485e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  ulonglong uVar11;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar5 - 2U < 4) {
      lVar8 = plVar1[3];
    }
    else {
      lVar8 = 0;
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xe0) + 0xd8);
    if (lVar8 != 0) {
      lVar2 = *(longlong *)(lVar8 + 0x10);
      uVar3 = *(ulonglong *)(lVar2 + 0x38);
      bVar10 = *(byte *)(lVar8 + 0xa0) >> 2 & 1;
      uVar11 = *(ulonglong *)(lVar2 + 0x40);
      if (uVar3 < *(ulonglong *)(lVar2 + 0x40)) {
        uVar11 = uVar3;
      }
      uVar11 = uVar11 & 0xffffffff;
      uVar4 = *(ulonglong *)(lVar2 + 0x40);
      if (*(ulonglong *)(lVar2 + 0x40) < uVar3) {
        uVar4 = uVar3;
      }
      uVar7 = (undefined4)uVar4;
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar9 = FUN_1434141c0(param_1,0);
        bVar10 = FUN_143411fd0(uVar9,*(undefined8 *)(param_1 + 0x30));
      }
      if (1 < *(int *)(param_1 + 0x38)) {
        uVar9 = FUN_1434141c0(param_1,1);
        uVar6 = FUN_143411f00(uVar9,*(undefined8 *)(param_1 + 0x30));
        uVar11 = (ulonglong)uVar6;
      }
      if (2 < *(int *)(param_1 + 0x38)) {
        uVar9 = FUN_1434141c0(param_1,2);
        uVar7 = FUN_143411f00(uVar9,*(undefined8 *)(param_1 + 0x30));
      }
      FUN_143df3330(lVar8,uVar11,uVar7,bVar10);
    }
  }
  return;
}



// FUNCTION 143448710 FUN_143448710 body=315 status=ok
// SIG undefined FUN_143448710(void)

void FUN_143448710(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar5 - 2U < 4) {
      lVar9 = plVar1[3];
    }
    else {
      lVar9 = 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0xe0) + 0xd8);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      uVar4 = *(ulonglong *)(lVar3 + 0x38);
      bVar8 = *(byte *)(lVar2 + 0xa0) >> 2 & 1;
      uVar11 = *(ulonglong *)(lVar3 + 0x40);
      if (uVar4 < *(ulonglong *)(lVar3 + 0x40)) {
        uVar11 = uVar4;
      }
      uVar11 = uVar11 & 0xffffffff;
      uVar10 = *(ulonglong *)(lVar3 + 0x40);
      if (*(ulonglong *)(lVar3 + 0x40) < uVar4) {
        uVar10 = uVar4;
      }
      uVar10 = uVar10 & 0xffffffff;
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,0);
        bVar8 = FUN_143411fd0(uVar7,*(undefined8 *)(param_1 + 0x30));
      }
      if (1 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,1);
        uVar6 = FUN_143411f00(uVar7,*(undefined8 *)(param_1 + 0x30));
        uVar11 = (ulonglong)uVar6;
      }
      if (2 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,2);
        uVar6 = FUN_143411f00(uVar7,*(undefined8 *)(param_1 + 0x30));
        uVar10 = (ulonglong)uVar6;
      }
      FUN_143df3440(lVar2,uVar11,uVar10,bVar8);
      FUN_143de5880(lVar9);
    }
  }
  return;
}



// FUNCTION 143448860 FUN_143448860 body=315 status=ok
// SIG undefined FUN_143448860(void)

void FUN_143448860(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 == 4)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar5 - 2U < 4) {
      lVar9 = plVar1[3];
    }
    else {
      lVar9 = 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0xe0) + 0xd8);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      uVar4 = *(ulonglong *)(lVar3 + 0x38);
      bVar8 = *(byte *)(lVar2 + 0xa0) >> 2 & 1;
      uVar11 = *(ulonglong *)(lVar3 + 0x40);
      if (uVar4 < *(ulonglong *)(lVar3 + 0x40)) {
        uVar11 = uVar4;
      }
      uVar11 = uVar11 & 0xffffffff;
      uVar10 = *(ulonglong *)(lVar3 + 0x40);
      if (*(ulonglong *)(lVar3 + 0x40) < uVar4) {
        uVar10 = uVar4;
      }
      uVar10 = uVar10 & 0xffffffff;
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,0);
        bVar8 = FUN_143411fd0(uVar7,*(undefined8 *)(param_1 + 0x30));
      }
      if (1 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,1);
        uVar6 = FUN_143411f00(uVar7,*(undefined8 *)(param_1 + 0x30));
        uVar11 = (ulonglong)uVar6;
      }
      if (2 < *(int *)(param_1 + 0x38)) {
        uVar7 = FUN_1434141c0(param_1,2);
        uVar6 = FUN_143411f00(uVar7,*(undefined8 *)(param_1 + 0x30));
        uVar10 = (ulonglong)uVar6;
      }
      FUN_143df34e0(lVar2,uVar11,uVar10,bVar8);
      FUN_143de5880(lVar9);
    }
  }
  return;
}



// FUNCTION 1434489b0 FUN_1434489b0 body=191 status=ok
// SIG undefined FUN_1434489b0(void)

void FUN_1434489b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8 [4];
  undefined **local_18;
  int local_10;
  int local_c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x3c);
  lVar4 = 0;
  if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    lVar4 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
  }
  FUN_143411540(lVar4,local_res8,lVar3,0xffffffff,0);
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_18 = &PTR_FUN_145b11e98;
    local_10 = *(int *)(param_1 + 0x38) + -1;
    local_c = *(int *)(lVar3 + 0x30) * 0x20 + -0x21 +
              (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5);
    FUN_1434649e0(lVar3,*(longlong *)(param_1 + 0x10),local_res8,&local_18);
  }
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143448a80 FUN_143448a80 body=93 status=ok
// SIG undefined FUN_143448a80(void)

undefined8 * FUN_143448a80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 143448af0 FUN_143448af0 body=110 status=ok
// SIG undefined FUN_143448af0(void)

undefined8 * FUN_143448af0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),10);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 143448b70 FUN_143448b70 body=281 status=ok
// SIG undefined FUN_143448b70(void)

undefined8 * FUN_143448b70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  byte local_28 [32];
  
  if (*(longlong *)(param_2 + 0x28) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x38) + 0x20);
  }
  FUN_143416140(param_1,uVar3);
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1432be180(param_3);
  }
  param_1[0xd] = uVar3;
  plVar1 = (longlong *)(param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4);
  lVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1);
  lVar2 = plVar1[3];
  if (param_1[6] == 0) {
    local_res8[0] = 3;
    local_28[0] = 10;
    (**(code **)(param_1[4] + 0x50))
              (param_1 + 4,(longlong *)(lVar4 + 0xe8),
               *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x3a8,
               local_28,local_res8);
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar4 = param_1[6];
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[6] = lVar2;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 143448c90 FUN_143448c90 body=87 status=ok
// SIG undefined FUN_143448c90(void)

void FUN_143448c90(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xe]);
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143448cf0 GetIMECompositionStringStyles body=66 status=ok
// SIG undefined GetIMECompositionStringStyles(void)

undefined8 Scaleform::GFx::AS2::TextFieldObject::GetIMECompositionStringStyles(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  while( true ) {
    if (lVar1 != 0) {
      return *(undefined8 *)(param_1 + 0x70);
    }
    param_1 = *(longlong *)(param_1 + 0x30);
    if ((param_1 == 0) ||
       (iVar2 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x10))(param_1 + 0x20), iVar2 != 0xd))
    break;
    lVar1 = *(longlong *)(param_1 + 0x70);
  }
  return 0;
}



// FUNCTION 143448d40 FUN_143448d40 body=268 status=ok
// SIG undefined FUN_143448d40(void)

void FUN_143448d40(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_2 + 7);
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
    puVar1[0xe] = param_2[0xe];
    *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    puVar1[0x10] = param_2[0x10];
    puVar1[0x11] = param_2[0x11];
    puVar1[0x12] = param_2[0x12];
    *(undefined1 *)(puVar1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    return;
  }
  local_res8[0] = 0x145;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x54,local_res8);
  if (lVar2 != 0) {
    uVar3 = FUN_143496c10(lVar2,param_2);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    return;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 143448e60 FUN_143448e60 body=1434 status=ok
// SIG undefined FUN_143448e60(void)

uint * FUN_143448e60(uint *param_1,longlong param_2,int param_3,uint *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char *_Str1;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  longlong *local_res8;
  byte local_48 [32];
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  *(char *)(param_1 + 3) = (char)param_4[3];
  if (*(int *)(param_2 + 0x38) < 1) {
    return param_1;
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  uVar9 = *(int *)(param_2 + 0x3c) - param_3;
  lVar8 = 0;
  lVar10 = lVar8;
  if (uVar9 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
    lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
  }
  lVar5 = FUN_143412120(lVar10);
  if (lVar5 == 0) {
    return param_1;
  }
  local_48[0] = 0;
  *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
  local_res8 = (longlong *)
               FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8) + 0x28) +
                                0x18) + 0x618),"textColor",9);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x20))
                    (lVar5 + 0x20,*(undefined8 *)(param_2 + 0x30),&local_res8,local_48);
  plVar1 = local_res8 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar3 != '\0') {
    FUN_143411540(local_48,&local_res8,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
    lVar10 = lVar8;
    do {
      lVar7 = lVar10;
      bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
      if (!bVar11) goto LAB_143448fda;
      lVar10 = lVar7 + 1;
    } while (lVar7 + 1 != 5);
    bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
LAB_143448fda:
    plVar1 = local_res8 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920();
    }
    if (bVar11) {
      *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xef;
    }
    else {
      local_res8 = (longlong *)FUN_143411a90(local_48,*(undefined8 *)(param_2 + 0x30));
      if (((ulonglong)local_res8 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar9 = FUN_143411f00(local_48,*(undefined8 *)(param_2 + 0x30));
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 0x10;
        param_1[1] = uVar9 | 0xff000000;
      }
    }
  }
  local_res8 = (longlong *)
               FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8) + 0x28) +
                                0x18) + 0x618),"backgroundColor",0xf);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x20))
                    (lVar5 + 0x20,*(undefined8 *)(param_2 + 0x30),&local_res8,local_48);
  plVar1 = local_res8 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar3 != '\0') {
    FUN_143411540(local_48,&local_res8,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
    lVar10 = lVar8;
    do {
      lVar7 = lVar10;
      bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
      if (!bVar11) goto LAB_1434490da;
      lVar10 = lVar7 + 1;
    } while (lVar7 + 1 != 5);
    bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
LAB_1434490da:
    plVar1 = local_res8 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920();
    }
    if (bVar11) {
      *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xf7;
    }
    else {
      local_res8 = (longlong *)FUN_143411a90(local_48,*(undefined8 *)(param_2 + 0x30));
      if (((ulonglong)local_res8 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar9 = FUN_143411f00(local_48,*(undefined8 *)(param_2 + 0x30));
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 8;
        *param_1 = uVar9 | 0xff000000;
      }
    }
  }
  local_res8 = (longlong *)
               FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8) + 0x28) +
                                0x18) + 0x618),"underlineColor",0xe);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x20))
                    (lVar5 + 0x20,*(undefined8 *)(param_2 + 0x30),&local_res8,local_48);
  plVar1 = local_res8 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar3 != '\0') {
    FUN_143411540(local_48,&local_res8,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
    lVar10 = lVar8;
    do {
      lVar7 = lVar10;
      bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
      if (!bVar11) goto LAB_1434491da;
      lVar10 = lVar7 + 1;
    } while (lVar7 + 1 != 5);
    bVar11 = *(char *)(*local_res8 + lVar7) == (&DAT_145b122f4)[lVar7];
LAB_1434491da:
    plVar1 = local_res8 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920();
    }
    if (bVar11) {
      *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xdf;
    }
    else {
      local_res8 = (longlong *)FUN_143411a90(local_48,*(undefined8 *)(param_2 + 0x30));
      if (((ulonglong)local_res8 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar9 = FUN_143411f00(local_48,*(undefined8 *)(param_2 + 0x30));
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 0x20;
        param_1[2] = uVar9 | 0xff000000;
      }
    }
  }
  local_res8 = (longlong *)
               FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8) + 0x28) +
                                0x18) + 0x618),"underlineStyle",0xe);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x20))
                    (lVar5 + 0x20,*(undefined8 *)(param_2 + 0x30),&local_res8,local_48);
  plVar1 = local_res8 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') goto LAB_1434493aa;
  FUN_143411540(local_48,&local_res8,*(undefined8 *)(param_2 + 0x30),0xffffffff,0);
  plVar1 = local_res8;
  _Str1 = (char *)*local_res8;
  lVar10 = lVar8;
  do {
    lVar6 = lVar10 + 1;
    lVar7 = lVar8;
    if (_Str1[lVar10] != "dotted"[lVar10]) goto LAB_143449310;
    lVar10 = lVar6;
  } while (lVar6 != 7);
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfb;
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 3;
  goto LAB_14344939c;
  while (lVar7 = lVar10, lVar10 != 7) {
LAB_143449310:
    lVar10 = lVar7 + 1;
    if (_Str1[lVar7] != "single"[lVar7]) goto LAB_143449340;
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xf9;
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
  goto LAB_14344939c;
  while (lVar8 = lVar10, lVar10 != 6) {
LAB_143449340:
    lVar10 = lVar8 + 1;
    if (_Str1[lVar8] != "thick"[lVar8]) {
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"ditheredSingle");
      if (iVar4 == 0) {
        *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfd;
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 5;
      }
      else {
        iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"ditheredThick");
        if (iVar4 == 0) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfe;
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 6;
        }
        else {
          *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xf8;
        }
      }
      goto LAB_14344939c;
    }
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfa;
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
LAB_14344939c:
  plVar2 = plVar1 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar1);
  }
LAB_1434493aa:
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return param_1;
}



// FUNCTION 143449400 FUN_143449400 body=961 status=ok
// SIG undefined FUN_143449400(void)

void FUN_143449400(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  byte bVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_48 [8];
  double local_40;
  
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1434148b0(lVar3,*(undefined8 *)(param_1 + 0x30));
  }
  if (((byte)param_2[3] & 7) != 0) {
    bVar5 = (byte)param_2[3] & 7;
    if (bVar5 == 1) {
      pcVar6 = "single";
    }
    else if (bVar5 == 2) {
      pcVar6 = "thick";
    }
    else if (bVar5 == 3) {
      pcVar6 = "dotted";
    }
    else if (bVar5 == 5) {
      pcVar6 = "ditheredSingle";
    }
    else {
      if (bVar5 != 6) goto LAB_143449599;
      pcVar6 = "ditheredThick";
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pcVar6[lVar7] != '\0');
    dVar4 = (double)FUN_143360950(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28)
                                     + 0x18) + 0x618),pcVar6,lVar7,0);
    local_res8[0] = 0;
    *(int *)((longlong)dVar4 + 0x18) = *(int *)((longlong)dVar4 + 0x18) + 1;
    local_48[0] = 5;
    *(int *)((longlong)dVar4 + 0x18) = *(int *)((longlong)dVar4 + 0x18) + 1;
    lVar7 = *(longlong *)(param_1 + 0x30);
    local_40 = dVar4;
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"underlineStyle",0xe);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar7 + 0xe8,&local_res10,local_48,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    piVar1 = (int *)((longlong)dVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar4);
    }
  }
LAB_143449599:
  if ((param_2[3] & 0x20) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    local_48[0] = 3;
    local_res8[0] = 0;
    local_40 = (double)(param_2[2] & 0xffffff);
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"underlineColor",0xe);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar7 + 0xe8,&local_res10,local_48,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  if ((param_2[3] & 8) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    local_48[0] = 3;
    local_res8[0] = 0;
    local_40 = (double)(*param_2 & 0xffffff);
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"backgroundColor",0xf);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar7 + 0xe8,&local_res10,local_48,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  if ((param_2[3] & 0x10) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    local_48[0] = 3;
    local_res8[0] = 0;
    local_40 = (double)(param_2[1] & 0xffffff);
    local_res10 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) +
                                 0x618),"textColor",9);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x50))
              (lVar3 + 0x20,lVar7 + 0xe8,&local_res10,local_48,local_res8);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
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



// FUNCTION 1434497d0 FUN_1434497d0 body=3628 status=ok
// SIG undefined FUN_1434497d0(void)

undefined8 * FUN_1434497d0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [32];
  
  FUN_143495c10();
  *param_1 = &PTR_LAB_145b0d2d0;
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&PTR_LAB_145b0d318;
  param_1[0xf] = &PTR_LAB_145b0d3c0;
  if (plVar1 != (longlong *)0x0) {
    FUN_14340b610(plVar1,param_2,&PTR_s_addListener_145b07c80,1);
  }
  local_res8[0] = 1;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_getDepth_145b07660,local_res8);
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "scroll",6);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "hscroll",7);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "maxscroll",9);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "maxhscroll",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "background",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "backgroundColor",0xf);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "border",6);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "borderColor",0xb);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "bottomScroll",0xc);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "mouseWheelEnabled",0x11);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "antiAliasType",0xd);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "autoSize",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "condenseWhite",0xd);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "embedFonts",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b09100,4);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "htmlText",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "length",6);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "maxChars",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "multiline",9);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "password",8);
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
  local_res8[0] = 2;
  local_38[0] = 1;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "restrict",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "selectable",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "styleSheet",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "tabIndex",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b0907c,4);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "textColor",9);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "textHeight",10);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "textWidth",9);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145af4d3c,4);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "variable",8);
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
  local_res8[0] = 2;
  local_38[0] = 10;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "wordWrap",8);
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
  local_res8[0] = 1;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_appendText_145b07710,local_res8);
  return param_1;
}



// FUNCTION 14344a610 FUN_14344a610 body=664 status=ok
// SIG undefined FUN_14344a610(void)

void FUN_14344a610(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  byte local_28;
  
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    return;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (iVar4 == 4) {
    lVar6 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    lVar6 = FUN_143445dc0(lVar6);
    if (lVar6 == 0) goto LAB_14344a6a0;
    iVar4 = *(int *)(lVar6 + 0x18);
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 != 0xd) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    if (lVar6 == 0) {
      return;
    }
    iVar4 = *(int *)(lVar6 + 0x18);
  }
  *(uint *)(lVar6 + 0x18) = iVar4 + 1U & 0x8fffffff;
LAB_14344a6a0:
  lVar10 = 0;
  if (lVar6 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar9 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x3c);
      if (uVar5 <= (uint)(*(int *)(lVar9 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      FUN_143411540(lVar10,&local_res8,lVar9,0xffffffff,0);
      uVar5 = FUN_14349fb00(&local_res8);
      lVar10 = (longlong)(int)uVar5;
      if ((int)uVar5 < 5) {
        puVar7 = (undefined4 *)
                 Scaleform::GFx::AS2::TextFieldObject::GetIMECompositionStringStyles(lVar6);
        puVar8 = &local_74;
        lVar9 = 5;
        do {
          *puVar8 = 0;
          *(undefined4 *)((longlong)puVar8 + -4) = 0;
          *(undefined1 *)(puVar8 + 1) = 0;
          puVar8 = puVar8 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        local_28 = 0;
        if (puVar7 != (undefined4 *)0x0) {
          local_78 = *puVar7;
          local_28 = *(byte *)(puVar7 + 0x14);
          local_74._0_4_ = puVar7[1];
          local_74._4_4_ = puVar7[2];
          local_6c[0] = *(undefined1 *)(puVar7 + 3);
          local_68 = puVar7[4];
          local_64 = puVar7[5];
          local_60 = puVar7[6];
          local_5c = *(undefined1 *)(puVar7 + 7);
          local_58 = puVar7[8];
          local_54 = puVar7[9];
          local_50 = puVar7[10];
          local_4c = *(undefined1 *)(puVar7 + 0xb);
          local_48 = puVar7[0xc];
          local_44 = puVar7[0xd];
          local_40 = puVar7[0xe];
          local_3c = *(undefined1 *)(puVar7 + 0xf);
          local_38 = puVar7[0x10];
          local_34 = puVar7[0x11];
          local_30 = puVar7[0x12];
          local_2c = *(undefined1 *)(puVar7 + 0x13);
        }
        bVar3 = local_28;
        puVar7 = (undefined4 *)FUN_143448e60(local_88,param_1,1,&local_78 + lVar10 * 4);
        local_28 = bVar3 | (byte)(1 << (uVar5 & 0x1f));
        (&local_78)[lVar10 * 4] = *puVar7;
        *(undefined4 *)(local_6c + lVar10 * 0x10 + -8) = puVar7[1];
        uVar2 = *(undefined1 *)(puVar7 + 3);
        *(undefined4 *)(local_6c + lVar10 * 0x10 + -4) = puVar7[2];
        local_6c[lVar10 * 0x10] = uVar2;
        FUN_143448d40(lVar6,&local_78);
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
      FUN_1434a2b80(lVar6);
    }
  }
  return;
}



// FUNCTION 14344a8b0 FUN_14344a8b0 body=393 status=ok
// SIG undefined FUN_14344a8b0(void)

void FUN_14344a8b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res8;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    return;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (iVar5 == 4) {
    lVar6 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    lVar6 = FUN_143445dc0(lVar6);
    if (lVar6 == 0) goto LAB_14344a946;
    iVar5 = *(int *)(lVar6 + 0x18);
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 != 0xd) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    if (lVar6 == 0) {
      return;
    }
    iVar5 = *(int *)(lVar6 + 0x18);
  }
  *(uint *)(lVar6 + 0x18) = iVar5 + 1U & 0x8fffffff;
LAB_14344a946:
  lVar8 = 0;
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x70);
    if ((lVar7 != 0) ||
       (((lVar7 = *(longlong *)(lVar6 + 0x30), lVar7 != 0 &&
         (iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20), iVar5 == 0xd)) &&
        (lVar7 = Scaleform::GFx::AS2::TextFieldObject::GetIMECompositionStringStyles(lVar7),
        lVar7 != 0)))) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      if (uVar2 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      FUN_143411540(lVar8,&local_res8,lVar4,0xffffffff,0);
      iVar5 = FUN_14349fb00(&local_res8);
      if (iVar5 < 5) {
        FUN_143449400(param_1,(longlong)iVar5 * 0x10 + lVar7);
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
      FUN_1434a2b80(lVar6);
    }
  }
  return;
}



// FUNCTION 14344aa40 FUN_14344aa40 body=157 status=ok
// SIG undefined FUN_14344aa40(void)

undefined8 * FUN_14344aa40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = &DAT_14344ab40;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0d3c8;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_getFontList_145b07870,7);
  return param_1;
}



// FUNCTION 14344aaf0 FUN_14344aaf0 body=60 status=ok
// SIG undefined FUN_14344aaf0(void)

void FUN_14344aaf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_143448af0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14344ab50 FUN_14344ab50 body=765 status=ok
// SIG undefined FUN_14344ab50(void)

longlong * FUN_14344ab50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
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
    puVar2[0xd] = &DAT_14344ab40;
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
    *puVar2 = &PTR_LAB_145b0d3c8;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_58,&PTR_s_getFontList_145b07870,7);
    puVar3 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xb8,0);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14341b750(param_2,1);
    uVar6 = FUN_1434497d0(lVar4,&local_58,uVar5,param_1);
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  local_res8 = uVar6;
  FUN_1434a4b90(param_2,10,&local_res8);
  local_40[0] = *param_1;
  lVar4 = *(longlong *)(param_2 + 0x60);
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
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x50))
            (lVar4 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x188,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  FUN_14348b330(param_2,&local_58,*param_1);
  if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) - 1;
    FUN_1434a2b80(uVar6);
  }
  return param_1;
}



// FUNCTION 14344ae60 FUN_14344ae60 body=872 status=ok
// SIG undefined FUN_14344ae60(void)

void FUN_14344ae60(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  RefCountImpl *pRVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong lStack_50;
  
  plVar9 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
  plVar4 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9);
  local_res10 = 0;
  local_68 = &PTR_FUN_145b12700;
  local_60 = &local_res10;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_68,1);
  plVar4 = plVar9 + 2;
  pRVar5 = (RefCountImpl *)(**(code **)(plVar9[2] + 0x18))(plVar4,0x14);
  if (pRVar5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar5);
    FUN_1432bc970(pRVar5,&local_res10);
  }
  pRVar5 = (RefCountImpl *)(**(code **)(*plVar4 + 0x18))(plVar4,0x16);
  if (pRVar5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar5);
    (**(code **)(*(longlong *)pRVar5 + 0x10))(pRVar5,&local_res10);
  }
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,0x98,0);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_14345d8d0(lVar6,*(undefined8 *)(param_1 + 0x30));
  }
  if (local_res10 == 0) {
    local_58 = 0;
    lStack_50 = 0;
    uVar11 = 0;
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar11 = 0;
    plVar4 = (longlong *)(local_res10 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar11 = uVar11 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar11 <= *(ulonglong *)(local_res10 + 8));
    plVar4 = &local_res10;
  }
  do {
    if (((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) ||
       (*(longlong *)(*plVar4 + 8) < (longlong)uVar11)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar6);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
      }
      local_68 = &PTR_FUN_145af1858;
      FUN_1432bd3b0(&local_res10);
      return;
    }
    puVar10 = (ulonglong *)(*(ulonglong *)((uVar11 + 1) * 0x20 + *plVar4) & 0xfffffffffffffffc);
    lStack_50 = FUN_143360a90(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) +
                                 0x18) + 0x618),(longlong)puVar10 + 0xc,
                              *puVar10 & 0x7fffffffffffffff);
    bVar14 = 5;
    local_58 = CONCAT71(local_58._1_7_,5);
    piVar1 = (int *)(lStack_50 + 0x18);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
      FUN_14335f920(lStack_50);
    }
    local_res8[0] = 0x143;
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar6,0x20,local_res8);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_143410ec0(lVar7,&local_58);
      bVar14 = (byte)local_58;
    }
    lVar7 = *(longlong *)(lVar6 + 0x78);
    uVar12 = lVar7 + 1;
    if (uVar12 < *(ulonglong *)(lVar6 + 0x78)) {
      uVar13 = uVar12;
      if (uVar12 < *(ulonglong *)(lVar6 + 0x80) >> 1) {
LAB_14344b0c6:
        FUN_1432cfd30(lVar6 + 0x70,lVar6 + 0x70,uVar13);
      }
    }
    else if (*(ulonglong *)(lVar6 + 0x80) < uVar12) {
      uVar13 = (uVar12 >> 2) + uVar12;
      goto LAB_14344b0c6;
    }
    *(ulonglong *)(lVar6 + 0x78) = uVar12;
    puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + lVar7 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = uVar8;
    }
    if (4 < bVar14) {
      FUN_143411150(&local_58);
    }
    uVar12 = *(ulonglong *)(*plVar4 + 8);
    if (((longlong)uVar11 <= (longlong)uVar12) && (uVar11 = uVar11 + 1, uVar11 <= uVar12)) {
      plVar9 = (longlong *)(uVar11 * 0x20 + 0x10 + *plVar4);
      do {
        if (*plVar9 != -2) break;
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 4;
      } while (uVar11 <= uVar12);
    }
  } while( true );
}



// FUNCTION 14344b1d0 FUN_14344b1d0 body=103 status=ok
// SIG undefined FUN_14344b1d0(void)

undefined8 * FUN_14344b1d0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143494e70();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0d540;
  param_1[4] = &PTR_LAB_145b0d588;
  param_1[0xe] = &PTR_LAB_145b0d630;
  FUN_143422ee0(param_1 + 0xe,param_1,param_2,&PTR_s_setTransform_145b08680,local_res8);
  return param_1;
}



// FUNCTION 14344b240 FUN_14344b240 body=1345 status=ok
// SIG undefined FUN_14344b240(void)

void FUN_14344b240(longlong param_1)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float *pfVar7;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar8;
  longlong *plVar9;
  longlong local_res8;
  byte local_68 [32];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0x15)) {
    pRVar8 = (RefCountNTSImpl *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      pRVar8 = (RefCountNTSImpl *)0x0;
    }
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      piVar1 = *(int **)(pRVar8 + 0x68);
      this = (RefCountNTSImpl *)0x0;
      if (piVar1 != (int *)0x0) {
        this = *(RefCountNTSImpl **)(piVar1 + 2);
        if (this == (RefCountNTSImpl *)0x0) {
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(pRVar8 + 0x68) = 0;
          this = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(this + 8) == 0) {
          this = (RefCountNTSImpl *)0x0;
        }
        else {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        if (this == (RefCountNTSImpl *)0x0) {
          return;
        }
        uVar5 = FUN_1434141c0(param_1,0);
        plVar6 = (longlong *)FUN_1434123a0(uVar5,*(undefined8 *)(param_1 + 0x30));
        if (plVar6 != (longlong *)0x0) {
          pfVar7 = (float *)FUN_1433679a0(this);
          local_48 = *pfVar7;
          fStack_44 = pfVar7[1];
          fStack_40 = pfVar7[2];
          fStack_3c = pfVar7[3];
          local_38 = pfVar7[4];
          fStack_34 = pfVar7[5];
          fStack_30 = pfVar7[6];
          fStack_2c = pfVar7[7];
          local_68[0] = 0;
          plVar9 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b48,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_40 = (float)dVar2 / 100.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b4c,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_44 = (float)dVar2 / 100.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b50,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            local_48 = (float)dVar2 / 100.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b54,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_3c = (float)dVar2 / 100.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b58,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_30 = (float)dVar2 / 255.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b12b5c,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_34 = (float)dVar2 / 255.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145af4754,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            local_38 = (float)dVar2 / 255.0;
          }
          local_res8 = FUN_143360950(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x618),
                                     &DAT_145b01570,2);
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,plVar9,&local_res8,local_68);
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (cVar3 != '\0') {
            dVar2 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
            fStack_2c = (float)dVar2 / 255.0;
          }
          FUN_1433679d0(this,&local_48);
          (**(code **)(*(longlong *)this + 0x1a8))(this,0);
          if (4 < local_68[0]) {
            FUN_143411150(local_68);
          }
        }
      }
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Color");
  return;
}



// FUNCTION 14344b790 FUN_14344b790 body=1453 status=ok
// SIG undefined FUN_14344b790(void)

void FUN_14344b790(longlong param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_58 [8];
  double local_50;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar10 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar10 == 0x15)) {
    lVar13 = 0;
    lVar12 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar12 = lVar13;
    }
    if ((lVar12 != 0) && (piVar1 = *(int **)(lVar12 + 0x68), piVar1 != (int *)0x0)) {
      this = *(RefCountNTSImpl **)(piVar1 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar12 + 0x68) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        pfVar11 = (float *)FUN_1433679a0(this);
        fVar2 = *pfVar11;
        fVar3 = pfVar11[1];
        fVar4 = pfVar11[2];
        fVar5 = pfVar11[3];
        fVar6 = pfVar11[4];
        fVar7 = pfVar11[5];
        fVar8 = pfVar11[6];
        fVar9 = pfVar11[7];
        plVar14 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar12 = (**(code **)(*plVar14 + 0x50))(plVar14,0x68,0);
        if (lVar12 != 0) {
          lVar13 = FUN_1434148b0(lVar12,*(undefined8 *)(param_1 + 0x30));
        }
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar4 * 100.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b48,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar3 * 100.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b4c,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar2 * 100.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b50,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar5 * 100.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b54,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar8 * 255.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b58,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar7 * 255.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b12b5c,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar6 * 255.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145af4754,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        local_58[0] = 3;
        local_res8[0] = 0;
        local_50 = (double)(fVar9 * 255.0);
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x18) + 0x618),
                                    &DAT_145b01570,2);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x50))
                  (lVar13 + 0x20,plVar14,&local_res10,local_58,local_res8);
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
        }
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar13);
        if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
          FUN_1434a2b80(lVar13);
        }
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Color");
  return;
}



// FUNCTION 14344bd50 FUN_14344bd50 body=393 status=ok
// SIG undefined FUN_14344bd50(void)

void FUN_14344bd50(longlong param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  RefCountNTSImpl *pRVar6;
  ulonglong uVar7;
  RefCountNTSImpl *this;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 0x15)) {
    pRVar6 = (RefCountNTSImpl *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      pRVar6 = (RefCountNTSImpl *)0x0;
    }
    if (pRVar6 != (RefCountNTSImpl *)0x0) {
      piVar1 = *(int **)(pRVar6 + 0x68);
      this = (RefCountNTSImpl *)0x0;
      if (piVar1 != (int *)0x0) {
        this = *(RefCountNTSImpl **)(piVar1 + 2);
        if (this == (RefCountNTSImpl *)0x0) {
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(undefined8 *)(pRVar6 + 0x68) = 0;
          this = (RefCountNTSImpl *)0x0;
        }
        else if (*(int *)(this + 8) == 0) {
          this = (RefCountNTSImpl *)0x0;
        }
        else {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        if (this == (RefCountNTSImpl *)0x0) {
          return;
        }
        uVar4 = FUN_1434141c0(param_1,0);
        dVar2 = (double)FUN_143411a90(uVar4,*(undefined8 *)(param_1 + 0x30));
        uVar7 = (ulonglong)dVar2;
        lVar5 = FUN_1433679a0(this);
        uStack_1c = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 8) >> 0x20);
        uStack_c = *(undefined4 *)(lVar5 + 0x1c);
        uStack_24 = 0;
        uStack_20 = 0;
        local_28 = 0;
        local_18 = (float)(uVar7 >> 0x10 & 0xff);
        fStack_14 = (float)(uVar7 >> 8 & 0xff);
        fStack_10 = (float)(uVar7 & 0xff);
        Scaleform::Render::Cxform::Normalize(&local_28);
        FUN_1433679d0(this,&local_28);
        (**(code **)(*(longlong *)this + 0x1a8))(this,0);
      }
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Color");
  return;
}



// FUNCTION 14344bee0 FUN_14344bee0 body=302 status=ok
// SIG undefined FUN_14344bee0(void)

void FUN_14344bee0(longlong param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar6 == 0x15)) {
    lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
    if ((lVar7 != 0) && (piVar1 = *(int **)(lVar7 + 0x68), piVar1 != (int *)0x0)) {
      this = *(RefCountNTSImpl **)(piVar1 + 2);
      if (this == (RefCountNTSImpl *)0x0) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar7 + 0x68) = 0;
      }
      else if (*(int *)(this + 8) != 0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        Scaleform::RefCountNTSImpl::Release(this);
        lVar7 = FUN_1433679a0(this);
        pbVar2 = *(byte **)(param_1 + 8);
        fVar3 = *(float *)(lVar7 + 0x10);
        fVar4 = *(float *)(lVar7 + 0x14);
        fVar5 = *(float *)(lVar7 + 0x18);
        if (4 < *pbVar2) {
          FUN_143411150(pbVar2);
        }
        *pbVar2 = 4;
        *(uint *)(pbVar2 + 8) =
             -(int)(longlong)fVar5 & 0xffU | (int)(longlong)fVar3 * -0x10000 & 0xff0000U |
             (int)(longlong)fVar4 * -0x100 & 0xff00U;
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Color");
  return;
}



// FUNCTION 14344c020 FUN_14344c020 body=292 status=ok
// SIG undefined FUN_14344c020(void)

void FUN_14344c020(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  lVar4 = lVar5;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar6 = lVar5;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar4 = FUN_143419e00(lVar4,lVar6);
  }
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 != 0x15)) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x70);
    if (lVar6 != 0) {
      lVar5 = FUN_143496690(lVar6,*(undefined8 *)(param_1 + 0x30),lVar4);
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = lVar5;
    }
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    }
    FUN_1432efc10(lVar6 + 0x68,lVar4);
    lVar5 = lVar6;
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return;
}



// FUNCTION 14344c150 FUN_14344c150 body=161 status=ok
// SIG undefined FUN_14344c150(void)

undefined8 * FUN_14344c150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1434148b0(puVar2,param_2);
    *puVar2 = &PTR_LAB_145b0d450;
    puVar2[4] = &PTR_LAB_145b0d498;
    puVar2[0xd] = 0;
    uVar3 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0xb);
    FUN_1434a4d00(puVar2 + 4,param_2 + 0xe8,uVar3);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14344c200 FUN_14344c200 body=786 status=ok
// SIG undefined FUN_14344c200(void)

longlong * FUN_14344c200(longlong *param_1,longlong param_2)

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
    puVar2[0xd] = FUN_14344c020;
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
    *puVar2 = &PTR_LAB_145b0d638;
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
    FUN_143494e70(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0d540;
    puVar4[4] = &PTR_LAB_145b0d588;
    puVar4[0xe] = &PTR_LAB_145b0d630;
    FUN_143422ee0(puVar4 + 0xe,puVar4,&local_58,&PTR_s_setTransform_145b08680,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar6 = puVar4;
  }
  local_res8 = puVar6;
  FUN_1434a4b90(param_2,0xb,&local_res8);
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
            (lVar3 + 0x20,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 400,
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



// FUNCTION 14344c520 FUN_14344c520 body=154 status=ok
// SIG undefined FUN_14344c520(void)

undefined8 * FUN_14344c520(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0ac50;
  param_1[4] = &PTR_LAB_145b0d6c0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0xd);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  FUN_14344cc50(param_1,param_2,&local_28);
  return param_1;
}



// FUNCTION 14344c5c0 FUN_14344c5c0 body=826 status=ok
// SIG undefined FUN_14344c5c0(void)

longlong FUN_14344c5c0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong local_res8;
  byte local_48 [8];
  undefined4 local_40;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b07098,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 1;
    FUN_143411240(param_3,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b122d4,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x20);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 0;
    FUN_143411240(param_3 + 0x20,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b13238,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x40);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 0;
    FUN_143411240(param_3 + 0x40,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b122cc,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x60);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 1;
    FUN_143411240(param_3 + 0x60,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b1323c,2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0x80);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 0;
    FUN_143411240(param_3 + 0x80,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                             &DAT_145b13240,2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,&local_res8,param_3 + 0xa0);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar3 == '\0') {
    local_48[0] = 4;
    local_40 = 0;
    FUN_143411240(param_3 + 0xa0,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  return param_3;
}



// FUNCTION 14344c900 FUN_14344c900 body=832 status=ok
// SIG undefined FUN_14344c900(void)

float * FUN_14344c900(longlong param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  double dVar6;
  longlong local_res8;
  byte local_48 [32];
  
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  local_48[0] = 0;
  plVar3 = (longlong *)(param_3 + 0xe8);
  lVar4 = *plVar3;
  plVar1 = (longlong *)(param_1 + 0x20);
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 1.0;
  param_2[6] = 0.0;
  lVar4 = *(longlong *)(lVar4 + 0x28);
  param_2[7] = 0.0;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x618),&DAT_145b07098,1,0
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    *param_2 = 1.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    *param_2 = (float)dVar6;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b122d4,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    param_2[4] = 0.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    param_2[4] = (float)dVar6;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b13238,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    param_2[1] = 0.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    param_2[1] = (float)dVar6;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b122cc,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    param_2[5] = 1.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    param_2[5] = (float)dVar6;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b1323c,2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    param_2[3] = 0.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    param_2[3] = (float)dVar6;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b13240,2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,local_48);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  if (cVar5 == '\0') {
    param_2[7] = 0.0;
  }
  else {
    dVar6 = (double)FUN_143411a90(local_48,param_3);
    param_2[7] = (float)dVar6;
  }
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  return param_2;
}



// FUNCTION 14344cc50 FUN_14344cc50 body=789 status=ok
// SIG undefined FUN_14344cc50(void)

void FUN_14344cc50(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  double local_30;
  
  plVar3 = (longlong *)(param_2 + 0xe8);
  plVar1 = (longlong *)(param_1 + 0x20);
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)*param_3;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b07098,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[4];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b122d4,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[1];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13238,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[5];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b122cc,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[3];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1323c,2);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[7];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13240,2);
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



// FUNCTION 14344cf70 FUN_14344cf70 body=801 status=ok
// SIG undefined FUN_14344cf70(void)

void FUN_14344cf70(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  double local_30;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)*param_3;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b07098,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[4];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b122d4,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[1];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13238,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[5];
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b122cc,1);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[3] * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b1323c,2);
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
  local_38[0] = 3;
  local_res8[0] = 0;
  local_30 = (double)param_3[7] * 0.05;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              &DAT_145b13240,2);
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
  return;
}



// FUNCTION 14344d2a0 FUN_14344d2a0 body=103 status=ok
// SIG undefined FUN_14344d2a0(void)

undefined8 * FUN_14344d2a0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_1434954d0();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0d768;
  param_1[4] = &PTR_LAB_145b0d7b0;
  param_1[0xd] = &PTR_LAB_145b0d858;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_toString_145b08960,local_res8);
  return param_1;
}



// FUNCTION 14344d310 FUN_14344d310 body=1106 status=ok
// SIG undefined FUN_14344d310(void)

void FUN_14344d310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong local_res8;
  byte local_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 != 0xf)) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar7 = 0;
  }
  if (lVar7 == 0) {
    return;
  }
  puVar8 = local_c8;
  lVar10 = 6;
  lVar5 = 6;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_14344c5c0(lVar7,*(longlong *)(param_1 + 0x30) + 0xe8,local_c8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_c8,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_f8,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_a8,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_f0,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_88,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_e8,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_68,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_e0,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_48,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_d8,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_143412550(local_28,local_118,uVar3,0);
  FUN_143411540(uVar6,&local_d0,uVar3,6,0);
  if (4 < local_118[0]) {
    FUN_143411150(local_118);
  }
  FUN_1432c2f70(&local_res8);
  FUN_1432c3950(&local_res8,&DAT_145b13244,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_f8,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b13248,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_f0,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b13250,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_e8,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b13258,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_e0,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,", tx=",0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_d8,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,", ty=",0xffffffffffffffff);
  FUN_1432c3950(&local_res8,*local_d0,0xffffffffffffffff);
  FUN_1432c3950(&local_res8,&DAT_145b12c80,0xffffffffffffffff);
  lVar7 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
                         0x618),(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  pbVar9 = *(byte **)(param_1 + 8);
  if (4 < *pbVar9) {
    FUN_143411150(pbVar9);
  }
  *pbVar9 = 5;
  *(longlong *)(pbVar9 + 8) = lVar7;
  iVar4 = *(int *)(lVar7 + 0x18);
  *(int *)(lVar7 + 0x18) = iVar4;
  if (iVar4 == 0) {
    FUN_14335f920(lVar7);
  }
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  lVar7 = 6;
  puVar8 = local_c8;
  do {
    plVar1 = (longlong *)(puVar8 + -8);
    puVar8 = puVar8 + -8;
    lVar7 = lVar7 + -1;
    piVar2 = (int *)(*plVar1 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  } while (lVar7 != 0);
  pbVar9 = &stack0xfffffffffffffff8;
  do {
    pbVar9 = pbVar9 + -0x20;
    lVar10 = lVar10 + -1;
    if (4 < *pbVar9) {
      FUN_143411150(pbVar9);
    }
  } while (lVar10 != 0);
  return;
}



// FUNCTION 14344d770 FUN_14344d770 body=263 status=ok
// SIG undefined FUN_14344d770(void)

void FUN_14344d770(longlong param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0xf) {
      lVar5 = 0;
      lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = lVar5;
      }
      if (lVar7 == 0) {
        puVar1 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar1);
        *puVar1 = 0;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
        if (lVar4 != 0) {
          lVar5 = FUN_14344c520(lVar4,*(undefined8 *)(param_1 + 0x30));
        }
        uVar6 = FUN_14344c900(lVar7,local_28,*(undefined8 *)(param_1 + 0x30));
        FUN_14344cc50(lVar5,*(undefined8 *)(param_1 + 0x30),uVar6);
        FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
          FUN_1434a2b80(lVar5);
          return;
        }
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344d880 FUN_14344d880 body=278 status=ok
// SIG undefined FUN_14344d880(void)

void FUN_14344d880(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  Matrix2x4<float> *pMVar4;
  longlong lVar5;
  longlong lVar6;
  Matrix2x4<float> local_48 [32];
  undefined1 local_28 [32];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar3 == 0xf)) {
    lVar6 = 0;
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = lVar6;
    }
    if ((lVar5 != 0) && (0 < *(int *)(param_1 + 0x38))) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      lVar6 = FUN_143412120(lVar6);
      iVar3 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x10))(lVar6 + 0x20);
      if (iVar3 == 0xf) {
        FUN_14344c900(lVar5,local_48,*(undefined8 *)(param_1 + 0x30));
        pMVar4 = (Matrix2x4<float> *)FUN_14344c900(lVar6,local_28,*(undefined8 *)(param_1 + 0x30));
        Scaleform::Render::Matrix2x4<float>::Append(local_48,pMVar4);
        FUN_14344cc50(lVar5,*(undefined8 *)(param_1 + 0x30),local_48);
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344d9a0 FUN_14344d9a0 body=952 status=ok
// SIG undefined FUN_14344d9a0(void)

void FUN_14344d9a0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float _X;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  undefined8 local_70;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0xf) {
      lVar5 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = lVar5;
      }
      if ((lVar4 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        local_a8 = 1.0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        local_98 = 0.0;
        fStack_94 = 1.0;
        fStack_90 = 0.0;
        fStack_8c = 0.0;
        lVar7 = lVar5;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar7);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(int *)(param_1 + 0x3c) - 1;
        fVar12 = (float)dVar2;
        lVar7 = lVar5;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar7);
        _X = 0.0;
        fVar10 = 0.0;
        fVar11 = (float)dVar2;
        fVar9 = 0.0;
        if (2 < *(int *)(param_1 + 0x38)) {
          lVar1 = *(longlong *)(param_1 + 0x30);
          uVar6 = *(int *)(param_1 + 0x3c) - 2;
          lVar7 = lVar5;
          if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
            lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
          }
          dVar2 = (double)FUN_143411a90(lVar7);
          _X = (float)dVar2;
          if (3 < *(int *)(param_1 + 0x38)) {
            lVar1 = *(longlong *)(param_1 + 0x30);
            uVar6 = *(int *)(param_1 + 0x3c) - 3;
            lVar7 = lVar5;
            if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                               (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5)))
            {
              lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
            }
            dVar2 = (double)FUN_143411a90(lVar7);
            fVar10 = (float)dVar2;
            if (4 < *(int *)(param_1 + 0x38)) {
              lVar1 = *(longlong *)(param_1 + 0x30);
              uVar6 = *(int *)(param_1 + 0x3c) - 4;
              if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                                 (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))
                 ) {
                lVar5 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
              }
              dVar2 = (double)FUN_143411a90(lVar5);
              fVar9 = (float)dVar2;
            }
          }
        }
        fVar8 = _guard_xfg_dispatch_icall_nop(_X);
        local_78 = _guard_xfg_dispatch_icall_nop(_X);
        local_84 = -local_78;
        local_80 = 0;
        local_70 = 0;
        local_88 = fVar8;
        local_74 = fVar8;
        Scaleform::Render::Matrix2x4<float>::Append
                  ((Matrix2x4<float> *)&local_a8,(Matrix2x4<float> *)&local_88);
        local_a8 = local_a8 * fVar12;
        fStack_a4 = fStack_a4 * fVar12;
        fStack_a0 = fStack_a0 * fVar12;
        fStack_94 = fStack_94 * fVar11;
        local_98 = local_98 * fVar11;
        fStack_9c = fStack_9c * fVar12 + fVar10;
        fStack_90 = fStack_90 * fVar11;
        fStack_8c = fStack_8c * fVar11 + fVar9;
        FUN_14344cc50(lVar4,*(undefined8 *)(param_1 + 0x30),&local_a8);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344dd60 FUN_14344dd60 body=996 status=ok
// SIG undefined FUN_14344dd60(void)

void FUN_14344dd60(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float _X;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  undefined8 local_70;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 0xf) {
      lVar7 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar7;
      }
      if ((lVar6 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(uint *)(param_1 + 0x3c);
        local_a8 = 1.0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        local_98 = 0.0;
        fStack_94 = 1.0;
        fStack_90 = 0.0;
        fStack_8c = 0.0;
        lVar9 = lVar7;
        if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar9);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 1;
        lVar9 = lVar7;
        if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar9);
        _X = 0.0;
        fVar12 = (float)dVar2 * 0.5;
        fVar11 = (float)dVar3 * 0.5;
        if (2 < *(int *)(param_1 + 0x38)) {
          lVar1 = *(longlong *)(param_1 + 0x30);
          uVar8 = *(int *)(param_1 + 0x3c) - 2;
          lVar9 = lVar7;
          if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                             (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
            lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
          }
          dVar4 = (double)FUN_143411a90(lVar9);
          _X = (float)dVar4;
          if (3 < *(int *)(param_1 + 0x38)) {
            lVar1 = *(longlong *)(param_1 + 0x30);
            uVar8 = *(int *)(param_1 + 0x3c) - 3;
            lVar9 = lVar7;
            if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                               (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5)))
            {
              lVar9 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
            }
            dVar4 = (double)FUN_143411a90(lVar9);
            fVar12 = fVar12 + (float)dVar4;
            if (4 < *(int *)(param_1 + 0x38)) {
              lVar1 = *(longlong *)(param_1 + 0x30);
              uVar8 = *(int *)(param_1 + 0x3c) - 4;
              if (uVar8 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                                 (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))
                 ) {
                lVar7 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
              }
              dVar4 = (double)FUN_143411a90(lVar7);
              fVar11 = fVar11 + (float)dVar4;
            }
          }
        }
        fVar14 = (float)dVar2 * 0.00061035156;
        fVar13 = (float)dVar3 * 0.00061035156;
        fVar10 = _guard_xfg_dispatch_icall_nop(_X);
        local_78 = _guard_xfg_dispatch_icall_nop(_X);
        local_84 = -local_78;
        local_80 = 0;
        local_70 = 0;
        local_88 = fVar10;
        local_74 = fVar10;
        Scaleform::Render::Matrix2x4<float>::Append
                  ((Matrix2x4<float> *)&local_a8,(Matrix2x4<float> *)&local_88);
        local_a8 = local_a8 * fVar14;
        fStack_a4 = fStack_a4 * fVar14;
        fStack_a0 = fStack_a0 * fVar14;
        fStack_94 = fStack_94 * fVar13;
        local_98 = local_98 * fVar13;
        fStack_9c = fStack_9c * fVar14 + fVar12;
        fStack_90 = fStack_90 * fVar13;
        fStack_8c = fStack_8c * fVar13 + fVar11;
        FUN_14344cc50(lVar6,*(undefined8 *)(param_1 + 0x30),&local_a8);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e150 FUN_14344e150 body=1043 status=ok
// SIG undefined FUN_14344e150(void)

void FUN_14344e150(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  byte local_118 [8];
  double local_110;
  byte local_f8 [8];
  double local_f0;
  float local_d8;
  float local_d4;
  float local_c8;
  float local_c4;
  undefined1 local_b8 [32];
  byte local_98 [32];
  byte local_78 [32];
  byte local_58 [32];
  byte local_38 [32];
  
  pbVar10 = local_38;
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0xf)) {
    lVar7 = 0;
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = lVar7;
    }
    if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x38))) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar11 = lVar7;
      if (uVar2 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      lVar5 = FUN_143412120(lVar11);
      if (lVar5 != 0) {
        plVar1 = (longlong *)(lVar5 + 0x20);
        iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(plVar1);
        if (iVar4 == 0x10) {
          FUN_14344c900(lVar6,&local_d8,*(undefined8 *)(param_1 + 0x30));
          lVar5 = 2;
          pbVar9 = local_78;
          lVar6 = 2;
          do {
            *pbVar9 = 0;
            pbVar9 = pbVar9 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          lVar6 = *(longlong *)(param_1 + 0x30);
          (**(code **)(*plVar1 + 0x58))
                    (plVar1,lVar6 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x540
                     ,local_78);
          (**(code **)(*plVar1 + 0x58))
                    (plVar1,lVar6 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x548
                     ,local_58);
          plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
          lVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
          if (lVar6 != 0) {
            lVar7 = FUN_143457200(lVar6,*(undefined8 *)(param_1 + 0x30));
          }
          lVar6 = 2;
          puVar8 = local_b8;
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          local_110 = (double)local_d8;
          local_118[0] = 3;
          dVar12 = (double)FUN_143411a90(local_118,uVar3);
          local_110 = (double)FUN_143411a90(local_78,uVar3);
          local_110 = local_110 * dVar12;
          local_118[0] = 3;
          local_f8[0] = 3;
          local_f0 = (double)local_d4;
          FUN_143411240(local_b8,local_f8);
          if (4 < local_f8[0]) {
            FUN_143411150(local_f8);
          }
          FUN_143413a30(local_b8,*(undefined8 *)(param_1 + 0x30),local_58);
          FUN_1434136e0(local_b8,*(undefined8 *)(param_1 + 0x30),local_118);
          local_f0 = (double)local_c8;
          local_f8[0] = 3;
          FUN_143411240(local_118,local_f8);
          if (4 < local_f8[0]) {
            FUN_143411150(local_f8);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          dVar12 = (double)FUN_143411a90(local_118,uVar3);
          dVar13 = (double)FUN_143411a90(local_78,uVar3);
          if (4 < local_118[0]) {
            FUN_143411150(local_118);
          }
          local_f0 = (double)local_c4;
          local_118[0] = 3;
          local_f8[0] = 3;
          local_110 = dVar13 * dVar12;
          FUN_143411240(local_98,local_f8);
          if (4 < local_f8[0]) {
            FUN_143411150(local_f8);
          }
          FUN_143413a30(local_98,*(undefined8 *)(param_1 + 0x30),local_58);
          FUN_1434136e0(local_98,*(undefined8 *)(param_1 + 0x30),local_118);
          FUN_1434574d0(lVar7,*(longlong *)(param_1 + 0x30) + 0xe8,local_b8);
          FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
          if (4 < local_118[0]) {
            FUN_143411150(local_118);
          }
          lVar6 = 2;
          pbVar9 = local_78;
          do {
            pbVar9 = pbVar9 + -0x20;
            lVar6 = lVar6 + -1;
            if (4 < *pbVar9) {
              FUN_143411150(pbVar9);
            }
          } while (lVar6 != 0);
          if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
            FUN_1434a2b80(lVar7);
          }
          do {
            pbVar10 = pbVar10 + -0x20;
            lVar5 = lVar5 + -1;
            if (4 < *pbVar10) {
              FUN_143411150(pbVar10);
            }
          } while (lVar5 != 0);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e570 FUN_14344e570 body=129 status=ok
// SIG undefined FUN_14344e570(void)

void FUN_14344e570(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0xf) {
      lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = 0;
      }
      if (lVar2 != 0) {
        local_28 = 0x3f800000;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        local_18 = 0;
        uStack_14 = 0x3f800000;
        uStack_10 = 0;
        uStack_c = 0;
        FUN_14344cc50(0x3f800000,*(undefined8 *)(param_1 + 0x30),&local_28);
        return;
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e600 FUN_14344e600 body=170 status=ok
// SIG undefined FUN_14344e600(void)

void FUN_14344e600(longlong param_1)

{
  int iVar1;
  Matrix2x4<float> *this;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar1 == 0xf) {
      lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = 0;
      }
      if (lVar2 != 0) {
        this = (Matrix2x4<float> *)FUN_14344c900(lVar2,local_28,*(undefined8 *)(param_1 + 0x30));
        local_48 = *(undefined8 *)this;
        uStack_40 = *(undefined8 *)(this + 8);
        local_38 = *(undefined8 *)(this + 0x10);
        uStack_30 = *(undefined8 *)(this + 0x18);
        Scaleform::Render::Matrix2x4<float>::SetInverse(this,(Matrix2x4<float> *)&local_48);
        FUN_14344cc50(lVar2,*(undefined8 *)(param_1 + 0x30),this);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e6b0 FUN_14344e6b0 body=347 status=ok
// SIG undefined FUN_14344e6b0(void)

void FUN_14344e6b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined8 local_50;
  Matrix2x4<float> local_48 [64];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 0xf) {
      lVar6 = 0;
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = lVar6;
      }
      if ((lVar5 != 0) && (0 < *(int *)(param_1 + 0x38))) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar6 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar6);
        FUN_14344c900(lVar5,local_48,*(undefined8 *)(param_1 + 0x30));
        fVar7 = _guard_xfg_dispatch_icall_nop((float)dVar3);
        local_58 = _guard_xfg_dispatch_icall_nop((float)dVar3);
        local_64 = -local_58;
        local_60 = 0;
        local_50 = 0;
        local_68 = fVar7;
        local_54 = fVar7;
        Scaleform::Render::Matrix2x4<float>::Append(local_48,(Matrix2x4<float> *)&local_68);
        FUN_14344cc50(lVar5,*(undefined8 *)(param_1 + 0x30),local_48);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e820 FUN_14344e820 body=368 status=ok
// SIG undefined FUN_14344e820(void)

void FUN_14344e820(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0xf) {
      lVar4 = 0;
      lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = lVar4;
      }
      if ((lVar5 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x3c);
        lVar7 = lVar4;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar7);
        lVar1 = *(longlong *)(param_1 + 0x30);
        fVar9 = (float)dVar2;
        uVar6 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar6 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar4);
        fVar8 = (float)dVar2;
        FUN_14344c900(lVar5,&local_48,*(undefined8 *)(param_1 + 0x30));
        local_48 = local_48 * fVar9;
        fStack_44 = fStack_44 * fVar9;
        fStack_40 = fStack_40 * fVar9;
        fStack_3c = fStack_3c * fVar9;
        local_38 = local_38 * fVar8;
        fStack_34 = fStack_34 * fVar8;
        fStack_30 = fStack_30 * fVar8;
        fStack_2c = fStack_2c * fVar8;
        FUN_14344cc50(lVar5,*(undefined8 *)(param_1 + 0x30),&local_48);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344e9a0 FUN_14344e9a0 body=1251 status=ok
// SIG undefined FUN_14344e9a0(void)

void FUN_14344e9a0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  byte local_138 [8];
  double local_130;
  byte local_118 [8];
  double local_110;
  byte local_f8 [8];
  double local_f0;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  undefined1 local_b8 [32];
  byte local_98 [32];
  byte local_78 [32];
  byte local_58 [32];
  byte local_38 [32];
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar4 == 0xf)) {
    lVar7 = 0;
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = lVar7;
    }
    if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x38))) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x3c);
      lVar10 = lVar7;
      if (uVar2 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
      }
      lVar5 = FUN_143412120(lVar10);
      if (lVar5 != 0) {
        plVar1 = (longlong *)(lVar5 + 0x20);
        iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(plVar1);
        if (iVar4 == 0x10) {
          FUN_14344c900(lVar6,&local_d8,*(undefined8 *)(param_1 + 0x30));
          lVar5 = 2;
          pbVar9 = local_78;
          lVar6 = 2;
          do {
            *pbVar9 = 0;
            pbVar9 = pbVar9 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          lVar6 = *(longlong *)(param_1 + 0x30);
          (**(code **)(*plVar1 + 0x58))
                    (plVar1,lVar6 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x540
                     ,local_78);
          (**(code **)(*plVar1 + 0x58))
                    (plVar1,lVar6 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x548
                     ,local_58);
          plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
          lVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
          if (lVar6 != 0) {
            lVar7 = FUN_143457200(lVar6,*(undefined8 *)(param_1 + 0x30));
          }
          lVar6 = 2;
          puVar8 = local_b8;
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          local_f0 = (double)local_d8;
          local_f8[0] = 3;
          dVar11 = (double)FUN_143411a90(local_f8,uVar3);
          local_f0 = (double)FUN_143411a90(local_78,uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          local_f0 = local_f0 * dVar11;
          local_f8[0] = 3;
          local_118[0] = 3;
          local_110 = (double)local_d4;
          dVar11 = (double)FUN_143411a90(local_118,uVar3);
          local_110 = (double)FUN_143411a90(local_58,uVar3);
          local_110 = local_110 * dVar11;
          local_118[0] = 3;
          local_138[0] = 3;
          local_130 = (double)local_cc;
          FUN_143411240(local_b8,local_138);
          if (4 < local_138[0]) {
            FUN_143411150(local_138);
          }
          FUN_1434136e0(local_b8,*(undefined8 *)(param_1 + 0x30),local_f8);
          FUN_1434136e0(local_b8,*(undefined8 *)(param_1 + 0x30),local_118);
          local_130 = (double)local_c8;
          local_138[0] = 3;
          FUN_143411240(local_f8,local_138);
          if (4 < local_138[0]) {
            FUN_143411150(local_138);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          dVar11 = (double)FUN_143411a90(local_f8,uVar3);
          dVar12 = (double)FUN_143411a90(local_78,uVar3);
          if (4 < local_f8[0]) {
            FUN_143411150(local_f8);
          }
          local_130 = (double)local_c4;
          local_f8[0] = 3;
          local_138[0] = 3;
          local_f0 = dVar12 * dVar11;
          FUN_143411240(local_118,local_138);
          if (4 < local_138[0]) {
            FUN_143411150(local_138);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          dVar11 = (double)FUN_143411a90(local_118,uVar3);
          dVar12 = (double)FUN_143411a90(local_58,uVar3);
          if (4 < local_118[0]) {
            FUN_143411150(local_118);
          }
          local_130 = (double)local_bc;
          local_118[0] = 3;
          local_138[0] = 3;
          local_110 = dVar12 * dVar11;
          FUN_143411240(local_98,local_138);
          if (4 < local_138[0]) {
            FUN_143411150(local_138);
          }
          FUN_1434136e0(local_98,*(undefined8 *)(param_1 + 0x30),local_f8);
          FUN_1434136e0(local_98,*(undefined8 *)(param_1 + 0x30),local_118);
          FUN_1434574d0(lVar7,*(longlong *)(param_1 + 0x30) + 0xe8,local_b8);
          FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar7);
          if (4 < local_118[0]) {
            FUN_143411150(local_118);
          }
          if (4 < local_f8[0]) {
            FUN_143411150(local_f8);
          }
          lVar6 = 2;
          pbVar9 = local_78;
          do {
            pbVar9 = pbVar9 + -0x20;
            lVar6 = lVar6 + -1;
            if (4 < *pbVar9) {
              FUN_143411150(pbVar9);
            }
          } while (lVar6 != 0);
          if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
            FUN_1434a2b80(lVar7);
          }
          pbVar9 = local_38;
          do {
            pbVar9 = pbVar9 + -0x20;
            lVar5 = lVar5 + -1;
            if (4 < *pbVar9) {
              FUN_143411150(pbVar9);
            }
          } while (lVar5 != 0);
        }
      }
    }
    return;
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344ee90 FUN_14344ee90 body=366 status=ok
// SIG undefined FUN_14344ee90(void)

void FUN_14344ee90(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_48 [12];
  float local_3c;
  float local_2c;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar4 == 0xf) {
      lVar5 = 0;
      lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar6 = lVar5;
      }
      if ((lVar6 != 0) && (1 < *(int *)(param_1 + 0x38))) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar7 = *(uint *)(param_1 + 0x3c);
        lVar8 = lVar5;
        if (uVar7 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        dVar2 = (double)FUN_143411a90(lVar8);
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar7 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar7 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
          lVar5 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar5);
        FUN_14344c900(lVar6,local_48,*(undefined8 *)(param_1 + 0x30));
        local_3c = local_3c + (float)dVar2;
        local_2c = local_2c + (float)dVar3;
        FUN_14344cc50(lVar6,*(undefined8 *)(param_1 + 0x30),local_48);
      }
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n","Matrix");
  return;
}



// FUNCTION 14344f010 FUN_14344f010 body=60 status=ok
// SIG undefined FUN_14344f010(void)

void FUN_14344f010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_14344c520(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14344f060 FUN_14344f060 body=647 status=ok
// SIG undefined FUN_14344f060(void)

void FUN_14344f060(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
      (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar5 != 0xf)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(), cVar4 != '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0x68);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = FUN_14344c520(lVar8,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
    }
  }
  lVar8 = 0;
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar6);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    lVar1 = lVar3 + 0xe8;
    lVar10 = lVar8;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b07098,lVar10);
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 1;
      lVar10 = lVar8;
      if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b122d4,lVar10);
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b13238,lVar8);
        if (3 < *(int *)(param_1 + 0x38)) {
          uVar7 = FUN_1434141c0(param_1,3);
          FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b122cc,uVar7);
          if (4 < *(int *)(param_1 + 0x38)) {
            uVar7 = FUN_1434141c0(param_1,4);
            FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b1323c,uVar7);
            if (5 < *(int *)(param_1 + 0x38)) {
              uVar7 = FUN_1434141c0(param_1,5);
              FUN_1434a4640(lVar6 + 0x20,lVar1,&DAT_145b13240,uVar7);
            }
          }
        }
      }
    }
  }
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
    return;
  }
  return;
}



// FUNCTION 14344f2f0 FUN_14344f2f0 body=785 status=ok
// SIG undefined FUN_14344f2f0(void)

longlong * FUN_14344f2f0(longlong *param_1,longlong param_2)

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
    puVar2[0xd] = FUN_14344f060;
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
    *puVar2 = &PTR_LAB_145b0d860;
    puVar2[4] = &PTR_LAB_145b0aef8;
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
    FUN_1434954d0(puVar4,&local_58,uVar5,param_1);
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    *puVar4 = &PTR_LAB_145b0d768;
    puVar4[4] = &PTR_LAB_145b0d7b0;
    puVar4[0xd] = &PTR_LAB_145b0d858;
    FUN_143422ee0(puVar4 + 0xd,puVar4,&local_58,&PTR_s_toString_145b08960,&local_res8);
    *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    puVar7 = puVar4;
  }
  local_res8 = puVar7;
  FUN_1434a4b90(param_2,0xd,&local_res8);
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
  plVar6 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x20);
  (**(code **)(*plVar6 + 0x50))
            (plVar6,&local_58,*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) + 0x1a0,local_48,
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



// FUNCTION 14344f610 FUN_14344f610 body=111 status=ok
// SIG undefined FUN_14344f610(void)

undefined8 * FUN_14344f610(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b0d8e8;
  param_1[4] = &PTR_LAB_145b0d930;
  FUN_1432bfaf0(param_1 + 0xe);
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x10);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 14344f690 FUN_14344f690 body=44 status=ok
// SIG undefined FUN_14344f690(void)

undefined4 * FUN_14344f690(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *param_2 = *(undefined4 *)(param_1 + 0x70);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  param_2[4] = *(undefined4 *)(param_1 + 0x80);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  Scaleform::Render::Cxform::Normalize(param_2);
  return param_2;
}



// FUNCTION 14344f700 FUN_14344f700 body=882 status=ok
// SIG undefined FUN_14344f700(void)

undefined8 FUN_14344f700(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  float fVar1;
  char *_Str1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte local_58 [8];
  double local_50;
  
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"redMultiplier");
  if (iVar3 == 0) {
    local_50 = (double)*(float *)(param_1 + 10);
    local_58[0] = 3;
    FUN_143411240(param_4,local_58);
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
  }
  else {
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"greenMultiplier");
    if (iVar3 == 0) {
      local_50 = (double)*(float *)((longlong)param_1 + 0x54);
      local_58[0] = 3;
      FUN_143411240(param_4,local_58);
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
        return 1;
      }
    }
    else {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"blueMultiplier");
      if (iVar3 == 0) {
        local_50 = (double)*(float *)(param_1 + 0xb);
        local_58[0] = 3;
        FUN_143411240(param_4,local_58);
        if (4 < local_58[0]) {
          FUN_143411150(local_58);
          return 1;
        }
      }
      else {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alphaMultiplier");
        if (iVar3 == 0) {
          local_50 = (double)*(float *)((longlong)param_1 + 0x5c);
          local_58[0] = 3;
          FUN_143411240(param_4,local_58);
          if (4 < local_58[0]) {
            FUN_143411150(local_58);
            return 1;
          }
        }
        else {
          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"redOffset");
          if (iVar3 == 0) {
            local_50 = (double)*(float *)(param_1 + 0xc);
            local_58[0] = 3;
            FUN_143411240(param_4,local_58);
            if (4 < local_58[0]) {
              FUN_143411150(local_58);
              return 1;
            }
          }
          else {
            iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"greenOffset");
            if (iVar3 == 0) {
              local_50 = (double)*(float *)((longlong)param_1 + 100);
              local_58[0] = 3;
              FUN_143411240(param_4,local_58);
              if (4 < local_58[0]) {
                FUN_143411150(local_58);
                return 1;
              }
            }
            else {
              iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"blueOffset");
              if (iVar3 == 0) {
                local_50 = (double)*(float *)(param_1 + 0xd);
                local_58[0] = 3;
                FUN_143411240(param_4,local_58);
                if (4 < local_58[0]) {
                  FUN_143411150(local_58);
                  return 1;
                }
              }
              else {
                iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alphaOffset");
                if (iVar3 == 0) {
                  local_50 = (double)*(float *)((longlong)param_1 + 0x6c);
                  local_58[0] = 3;
                  FUN_143411240(param_4,local_58);
                  if (4 < local_58[0]) {
                    FUN_143411150(local_58);
                    return 1;
                  }
                }
                else {
                  lVar5 = 0;
                  do {
                    lVar6 = lVar5 + 1;
                    if (_Str1[lVar5] != (&DAT_145b12be4)[lVar5]) {
                      uVar4 = (**(code **)(*param_1 + 0x58))(param_1,param_2 + 0xe8,param_3,param_4)
                      ;
                      return uVar4;
                    }
                    lVar5 = lVar6;
                  } while (lVar6 != 4);
                  fVar8 = *(float *)(param_1 + 0xc);
                  cVar2 = Scaleform::GFx::NumberUtil::IsNaN((double)fVar8);
                  if (cVar2 != '\0') {
                    fVar8 = 0.0;
                  }
                  fVar9 = *(float *)((longlong)param_1 + 100);
                  cVar2 = Scaleform::GFx::NumberUtil::IsNaN((double)fVar9);
                  if (cVar2 != '\0') {
                    fVar9 = 0.0;
                  }
                  fVar1 = *(float *)(param_1 + 0xd);
                  cVar2 = Scaleform::GFx::NumberUtil::IsNaN((double)fVar1);
                  fVar7 = 0.0;
                  if (cVar2 == '\0') {
                    fVar7 = fVar1;
                  }
                  local_58[0] = 3;
                  local_50 = (double)((uint)(longlong)fVar7 & 0xff |
                                     (((uint)(longlong)fVar8 & 0xff) << 8 |
                                     (uint)(longlong)fVar9 & 0xff) << 8);
                  FUN_143411240(param_4,local_58);
                  if (4 < local_58[0]) {
                    FUN_143411150(local_58);
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
  return 1;
}



// FUNCTION 14344fa80 FUN_14344fa80 body=644 status=ok
// SIG undefined FUN_14344fa80(void)

undefined8
FUN_14344fa80(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *_Str1;
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  
  _Str1 = *(char **)*param_3;
  iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"redMultiplier");
  if (iVar3 == 0) {
    FUN_143411a90(param_4,param_2);
    *(float *)(param_1 + 0x50) = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  }
  else {
    iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"greenMultiplier");
    if (iVar3 == 0) {
      FUN_143411a90(param_4,param_2);
      *(float *)(param_1 + 0x54) = (float)(double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    }
    else {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"blueMultiplier");
      if (iVar3 == 0) {
        FUN_143411a90(param_4,param_2);
        *(float *)(param_1 + 0x58) =
             (float)(double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      }
      else {
        iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alphaMultiplier");
        if (iVar3 == 0) {
          FUN_143411a90(param_4,param_2);
          *(float *)(param_1 + 0x5c) =
               (float)(double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        }
        else {
          iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"redOffset");
          if (iVar3 == 0) {
            FUN_143411a90(param_4,param_2);
            *(float *)(param_1 + 0x60) =
                 (float)(double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
          }
          else {
            iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"greenOffset");
            if (iVar3 == 0) {
              FUN_143411a90(param_4,param_2);
              *(float *)(param_1 + 100) =
                   (float)(double)CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
            }
            else {
              iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"blueOffset");
              if (iVar3 == 0) {
                FUN_143411a90(param_4,param_2);
                *(float *)(param_1 + 0x68) =
                     (float)(double)CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
              }
              else {
                iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"alphaOffset");
                if (iVar3 == 0) {
                  FUN_143411a90(param_4,param_2);
                  *(float *)(param_1 + 0x6c) =
                       (float)(double)CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06);
                }
                else {
                  uVar7 = 0;
                  uVar5 = uVar7;
                  do {
                    uVar6 = uVar5 + 1;
                    if (_Str1[uVar5] != (&DAT_145b12be4)[uVar5]) {
                      uVar4 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
                      return uVar4;
                    }
                    uVar5 = uVar6;
                  } while (uVar6 != 4);
                  *(undefined8 *)(param_1 + 0x50) = 0;
                  *(undefined4 *)(param_1 + 0x58) = 0;
                  FUN_143411a90(param_4,param_2);
                  cVar2 = Scaleform::GFx::NumberUtil::IsNaN();
                  uVar5 = uVar7;
                  uVar6 = uVar7;
                  if (cVar2 == '\0') {
                    dVar1 = (double)FUN_143411a90(param_4,param_2);
                    uVar7 = (ulonglong)dVar1;
                    uVar6 = uVar7 & 0xff;
                    uVar5 = uVar7 >> 0x10 & 0xff;
                    uVar7 = uVar7 >> 8 & 0xff;
                  }
                  *(float *)(param_1 + 0x60) = (float)uVar5;
                  *(float *)(param_1 + 100) = (float)uVar7;
                  *(float *)(param_1 + 0x68) = (float)uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 14344fd10 FUN_14344fd10 body=1163 status=ok
// SIG undefined FUN_14344fd10(void)

undefined8 * FUN_14344fd10(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_38 [8];
  undefined4 local_30;
  
  FUN_143494f30();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b0d9d8;
  param_1[4] = &PTR_LAB_145b0da20;
  param_1[0x12] = &PTR_LAB_145b0dac8;
  FUN_143422ee0(param_1 + 0x12,param_1,param_2,&PTR_s_concat_145b08300,local_res8);
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              "redMultiplier",0xd,0);
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
                              "greenMultiplier",0xf);
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
                              "blueMultiplier",0xe);
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
                              "alphaMultiplier",0xf);
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
                              "redOffset",9);
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
                              "greenOffset",0xb);
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
                              "blueOffset",10);
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
                              "alphaOffset",0xb);
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
                              &DAT_145b12be4,3);
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



// FUNCTION 1434501b0 FUN_1434501b0 body=602 status=ok
// SIG undefined FUN_1434501b0(void)

void FUN_1434501b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  longlong lVar8;
  double dVar9;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  byte local_28 [32];
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar5 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    lVar3 = FUN_143412120(lVar5,lVar3);
    if (lVar3 != 0) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x12)) {
        FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                      "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                      "ColorTransform");
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar5 = 0;
        }
        iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))();
        if (iVar2 == 0x12) {
          FUN_1432bfbe0(lVar5 + 0x70,lVar3 + 0x70);
        }
        else {
          lVar8 = 8;
          puVar6 = local_108;
          lVar4 = 8;
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + 0x20;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          FUN_143450e90(*(undefined8 *)(param_1 + 0x30),lVar3,local_108);
          FUN_1432bfaf0(&local_128);
          dVar9 = (double)FUN_143411a90(local_108,*(undefined8 *)(param_1 + 0x30));
          local_128 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_e8,*(undefined8 *)(param_1 + 0x30));
          local_124 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_c8,*(undefined8 *)(param_1 + 0x30));
          local_120 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_a8,*(undefined8 *)(param_1 + 0x30));
          local_11c = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_88,*(undefined8 *)(param_1 + 0x30));
          local_118 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
          local_114 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_48,*(undefined8 *)(param_1 + 0x30));
          local_110 = (float)dVar9;
          dVar9 = (double)FUN_143411a90(local_28,*(undefined8 *)(param_1 + 0x30));
          local_10c = (float)dVar9;
          FUN_1432bfbe0(lVar5 + 0x70,&local_128);
          pbVar7 = &stack0xfffffffffffffff8;
          do {
            pbVar7 = pbVar7 + -0x20;
            lVar8 = lVar8 + -1;
            if (4 < *pbVar7) {
              FUN_143411150(pbVar7);
            }
          } while (lVar8 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 143450410 FUN_143450410 body=1004 status=ok
// SIG undefined FUN_143450410(void)

void FUN_143450410(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  float *pfVar6;
  undefined1 local_98 [8];
  double local_90;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar3 == 0x12) {
      local_98[0] = 3;
      pfVar6 = (float *)(*(longlong *)(param_1 + 0x10) + 0x50);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        pfVar6 = (float *)&DAT_00000070;
      }
      local_90 = (double)*pfVar6;
      FUN_143411540(local_98,&local_48,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[1];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_40,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[2];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_38,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[3];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_30,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[4];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_28,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[5];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_20,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[6];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_18,*(undefined8 *)(param_1 + 0x30),6,0);
      local_90 = (double)pfVar6[7];
      local_98[0] = 3;
      FUN_143411540(local_98,&local_10,*(undefined8 *)(param_1 + 0x30),6,0);
      FUN_1432c5960(&local_78,DAT_146b62f28);
      Scaleform::StringBuffer::AppendString(&local_78,"(redMultiplier=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_48,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", greenMultiplier=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_40,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", blueMultiplier=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_38,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", alphaMultiplier=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_30,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", redOffset=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_28,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", greenOffset=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_20,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", blueOffset=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_18,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,", alphaOffset=",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,*local_10,0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_78,&DAT_145b12c80,0xffffffffffffffff);
      puVar5 = &DAT_145af3922;
      if (local_78 != (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      lVar4 = FUN_143360a90(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18
                               ) + 0x618),puVar5,local_70);
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
      Scaleform::StringBuffer::~StringBuffer(&local_78);
      lVar4 = 8;
      puVar5 = (undefined1 *)register0x00000020;
      do {
        lVar4 = lVar4 + -1;
        piVar1 = (int *)(*(longlong *)(puVar5 + -0x10) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        puVar5 = puVar5 + -8;
      } while (lVar4 != 0);
      return;
    }
  }
  FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                "Error: Null or invalid \'this\' is used for a method of %s class.\n",
                "ColorTransform");
  return;
}



// FUNCTION 143450810 FUN_143450810 body=839 status=ok
// SIG undefined FUN_143450810(void)

void FUN_143450810(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 == 0x12)) {
    lVar4 = 0;
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
    if (7 < *(int *)(param_1 + 0x38)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x3c);
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x70) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 1;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x74) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 2;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x78) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 3;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x7c) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 4;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x80) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 5;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x84) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 6;
      lVar6 = lVar4;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar6);
      *(float *)(lVar3 + 0x88) = (float)dVar7;
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(int *)(param_1 + 0x3c) - 7;
      if (uVar5 <= (uint)(*(int *)(lVar1 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x10) >> 5))) {
        lVar4 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      dVar7 = (double)FUN_143411a90(lVar4);
      *(float *)(lVar3 + 0x8c) = (float)dVar7;
    }
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  return;
}



// FUNCTION 143450b60 FUN_143450b60 body=61 status=ok
// SIG undefined FUN_143450b60(void)

void FUN_143450b60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar2 != 0) {
    FUN_14344f610(lVar2,param_2);
    return;
  }
  return;
}


