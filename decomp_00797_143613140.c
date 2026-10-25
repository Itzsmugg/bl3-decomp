// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143613140 FUN_143613140 body=195 status=ok
// SIG undefined FUN_143613140(void)

void FUN_143613140(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    plVar2 = (longlong *)(*param_1 + -0x40 + (lVar3 + param_3) * 0x40);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_1435ab510(plVar2 + 2);
      if (*plVar2 != 0) {
        piVar1 = (int *)(*plVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      plVar2 = plVar2 + -8;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612860(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143612860(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613210 FUN_143613210 body=207 status=ok
// SIG undefined FUN_143613210(void)

void FUN_143613210(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    if (lVar3 != 0) {
      puVar2 = (ulonglong *)(*param_1 + -8 + (lVar3 + param_3) * 0x18);
      do {
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar2 = uVar1 - 1;
          }
        }
        puVar2 = puVar2 + -3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1436129c0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1436129c0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1436132e0 FUN_1436132e0 body=159 status=ok
// SIG undefined FUN_1436132e0(void)

void FUN_1436132e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14360f550(param_3 * 0x50 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612a70(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_143612a70(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 143613380 FUN_143613380 body=174 status=ok
// SIG undefined FUN_143613380(void)

void FUN_143613380(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2240(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2240(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613430 FUN_143613430 body=174 status=ok
// SIG undefined FUN_143613430(void)

void FUN_143613430(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a2f50(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a2f50(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1436134e0 FUN_1436134e0 body=203 status=ok
// SIG undefined FUN_1436134e0(void)

void FUN_1436134e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    puVar2 = (ulonglong *)(*param_1 + ((param_3 - 1) + lVar3) * 8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar1 - 1;
        }
      }
      puVar2 = puVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432bc070(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432bc070(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1436135b0 FUN_1436135b0 body=194 status=ok
// SIG undefined FUN_1436135b0(void)

void FUN_1436135b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar4 = param_1[1] - param_3;
    puVar3 = (ulonglong *)(*param_1 + ((param_3 - 1) + lVar4) * 8);
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          piVar1 = (int *)(uVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          *puVar3 = uVar2 - 1;
        }
      }
      puVar3 = puVar3 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612b20(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143612b20(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613680 FUN_143613680 body=203 status=ok
// SIG undefined FUN_143613680(void)

void FUN_143613680(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    puVar2 = (ulonglong *)(*param_1 + ((param_3 - 1) + lVar3) * 8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar1 - 1;
        }
      }
      puVar2 = puVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612bd0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143612bd0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613750 FUN_143613750 body=203 status=ok
// SIG undefined FUN_143613750(void)

void FUN_143613750(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    puVar2 = (ulonglong *)(*param_1 + ((param_3 - 1) + lVar3) * 8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar1 - 1;
        }
      }
      puVar2 = puVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612c80(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143612c80(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613820 FUN_143613820 body=203 status=ok
// SIG undefined FUN_143613820(void)

void FUN_143613820(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar3 = param_1[1] - param_3;
    puVar2 = (ulonglong *)(*param_1 + ((param_3 - 1) + lVar3) * 8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar1 - 1;
        }
      }
      puVar2 = puVar2 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1436127b0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1436127b0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1436138f0 FUN_1436138f0 body=175 status=ok
// SIG undefined FUN_1436138f0(void)

void FUN_1436138f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar3 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      piVar1 = (int *)(*plVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar3 = plVar3 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432f2240(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432f2240(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1436139a0 FUN_1436139a0 body=185 status=ok
// SIG undefined FUN_1436139a0(void)

void FUN_1436139a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    lVar1 = *param_1 + -0x30 + (lVar2 + param_3) * 0x30;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_1434e6250(lVar1);
      lVar1 = lVar1 + -0x30;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143612d30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143612d30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143613a60 FUN_143613a60 body=158 status=ok
// SIG undefined FUN_143613a60(void)

void FUN_143613a60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14360f5f0(param_3 * 0x20 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a30a0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a30a0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 143613b80 FUN_143613b80 body=245 status=ok
// SIG undefined FUN_143613b80(void)

ulonglong * FUN_143613b80(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *local_18;
  ulonglong *local_10;
  
  uVar3 = *param_2;
  lVar4 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  if (lVar4 != 0) {
    uVar5 = *(ulonglong *)(lVar4 + 8);
    uVar8 = uVar5 & *(uint *)(uVar3 + 0x1c);
    lVar2 = uVar8 * 3 + 2;
    puVar6 = (ulonglong *)(lVar4 + lVar2 * 8);
    if ((*(longlong *)(lVar4 + lVar2 * 8) != -2) &&
       (uVar7 = uVar8, (*(uint *)(puVar6[1] + 0x1c) & uVar5) == uVar8)) {
      while (((*(uint *)(puVar6[1] + 0x1c) & uVar5) != uVar8 || (puVar6[1] != uVar3))) {
        uVar7 = *puVar6;
        if (uVar7 == 0xffffffffffffffff) goto LAB_143613c4d;
        puVar6 = (ulonglong *)(lVar4 + uVar7 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar7) {
        *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
        puVar6 = (ulonglong *)(lVar4 + (uVar7 + 1) * 0x18);
        piVar1 = (int *)(*(longlong *)(lVar4 + (uVar7 + 1) * 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *puVar6 = uVar3;
        puVar6[1] = *param_3;
        return puVar6;
      }
    }
  }
LAB_143613c4d:
  puVar6 = (ulonglong *)FUN_143608ad0(param_1,param_1,&local_18,(ulonglong)*(uint *)(uVar3 + 0x1c));
  return puVar6;
}



// FUNCTION 143613c80 FUN_143613c80 body=254 status=ok
// SIG undefined FUN_143613c80(void)

longlong FUN_143613c80(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *local_18;
  undefined8 local_10;
  
  uVar2 = *param_2;
  lVar4 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  if (lVar4 != 0) {
    uVar3 = *(ulonglong *)(lVar4 + 8);
    uVar7 = uVar3 & *(uint *)(uVar2 + 0x1c);
    puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar7 * 0x30);
    if ((*puVar6 != 0xfffffffffffffffe) &&
       (uVar5 = uVar7, (*(uint *)(puVar6[1] + 0x1c) & uVar3) == uVar7)) {
      while (((*(uint *)(puVar6[1] + 0x1c) & uVar3) != uVar7 || (puVar6[1] != uVar2))) {
        uVar5 = *puVar6;
        if (uVar5 == 0xffffffffffffffff) goto LAB_143613d56;
        puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar5 * 0x30);
      }
      if (-1 < (longlong)uVar5) {
        *(int *)(uVar2 + 0x18) = *(int *)(uVar2 + 0x18) + 1;
        lVar4 = uVar5 * 0x30 + lVar4;
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(ulonglong *)(lVar4 + 0x18) = uVar2;
        FUN_143590140(lVar4 + 0x20,param_3);
        return lVar4 + 0x18;
      }
    }
  }
LAB_143613d56:
  lVar4 = FUN_143608c90(param_1,param_1,&local_18,(ulonglong)*(uint *)(uVar2 + 0x1c));
  return lVar4;
}



// FUNCTION 143613d80 FUN_143613d80 body=273 status=ok
// SIG undefined FUN_143613d80(void)

void FUN_143613d80(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 8) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = param_3[2];
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((longlong)param_3 + 0x12);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)((longlong)param_3 + 0x13);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar1 - 1;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x38) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x38) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x38);
    }
    else {
      piVar2 = *(int **)(param_1 + 0x40);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffde0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffe0;
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143613ea0 FUN_143613ea0 body=471 status=ok
// SIG undefined FUN_143613ea0(void)

void FUN_143613ea0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar8 = uVar1 & param_4;
  lVar10 = *(longlong *)(param_1 + 0x38);
  plVar9 = (longlong *)(uVar8 * 0x10 + lVar10);
  if (*plVar9 == -1) {
    FUN_14360de00(param_1,&local_res8,param_2,param_3,param_4);
    *plVar9 = local_res8;
    plVar9[1] = -1;
    return;
  }
  uVar5 = (ulonglong)
          (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + *plVar9 * 0x10) + 0x1c) &
           uVar1 & 0xffffff);
  if (uVar8 == uVar5) {
    do {
      lVar6 = *(longlong *)(lVar10 + uVar5 * 0x10);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar6 * 0x10);
      if (((*(uint *)(lVar2 + 0x1c) & 0xffffff) == param_4) && (lVar2 == *(longlong *)(param_2 + 8))
         ) {
        lVar10 = lVar6 * 0x20 + *(longlong *)(param_1 + 0x28);
        FUN_14360da30(lVar10,0);
        if (lVar10 == 0) {
          return;
        }
        FUN_14360ab50(lVar10,param_3);
        return;
      }
      uVar5 = *(ulonglong *)(lVar10 + 8 + uVar5 * 0x10);
    } while (uVar5 != 0xffffffffffffffff);
    FUN_14360de00(param_1,&local_res8,param_2,param_3,param_4);
    lVar10 = *(longlong *)(param_1 + 0x38);
    do {
      uVar8 = uVar8 + 1 & (ulonglong)*(uint *)(param_1 + 0x30);
    } while (*(longlong *)(lVar10 + uVar8 * 0x10) != -1);
    *(longlong *)(lVar10 + uVar8 * 0x10) = local_res8;
    *(longlong *)(lVar10 + 8 + uVar8 * 0x10) = plVar9[1];
    plVar9[1] = uVar8;
  }
  else {
    lVar6 = uVar5 * 0x10 + lVar10;
    uVar5 = *(ulonglong *)(lVar6 + 8);
    while (uVar5 != uVar8) {
      lVar6 = *(longlong *)(lVar6 + 8) * 0x10 + lVar10;
      uVar5 = *(ulonglong *)(lVar6 + 8);
    }
    do {
      uVar8 = uVar8 + 1 & (ulonglong)uVar1;
    } while (*(longlong *)(lVar10 + uVar8 * 0x10) != -1);
    puVar7 = (undefined4 *)(uVar8 * 0x10 + lVar10);
    if (puVar7 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((longlong)plVar9 + 4);
      lVar10 = plVar9[1];
      uVar4 = *(undefined4 *)((longlong)plVar9 + 0xc);
      *puVar7 = (int)*plVar9;
      puVar7[1] = uVar3;
      puVar7[2] = (int)lVar10;
      puVar7[3] = uVar4;
    }
    *(ulonglong *)(lVar6 + 8) = uVar8;
    FUN_14360de00(param_1,&local_res8,param_2,param_3,param_4);
    *plVar9 = local_res8;
    plVar9[1] = -1;
  }
  return;
}



// FUNCTION 143614080 FUN_143614080 body=117 status=ok
// SIG undefined FUN_143614080(void)

void FUN_143614080(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x40);
  if (param_2 != puVar1) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *puVar1 = uVar2 - 1;
        *puVar1 = *param_2;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar1 = *param_2;
  }
  return;
}



// FUNCTION 143614100 FUN_143614100 body=120 status=ok
// SIG undefined FUN_143614100(void)

void FUN_143614100(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x98);
  if (param_2 != puVar1) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *puVar1 = uVar2 - 1;
        *puVar1 = *param_2;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar1 = *param_2;
  }
  return;
}



// FUNCTION 143614180 SetImage body=64 status=ok
// SIG undefined SetImage(void)

void Scaleform::GFx::AS3::AvmBitmap::SetImage(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    Resource::AddRef(param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1432de450();
  }
  *(longlong *)(param_1 + 0xd0) = param_2;
  return;
}



// FUNCTION 1436141c0 FUN_1436141c0 body=273 status=ok
// SIG undefined FUN_1436141c0(void)

void FUN_1436141c0(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_48[1] = 0xffffffff;
  local_48[0] = (param_7 != '\0') + 4;
  local_38 = 0;
  local_30 = param_5;
  if (param_5 != 0) {
    *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
  }
  local_28 = param_6;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_40 = param_4;
  local_20 = lVar2;
  FUN_1435ab5d0(*(longlong *)(param_1 + 0x38) + 0x10 +
                ((param_2 & 0xffffffff) - *(longlong *)(param_1 + 0x28)) * 0x40,local_48);
  FUN_1435b4740(param_1 + 0x28,param_2,param_3);
  FUN_1435b4b70(param_1 + 0x28,local_48);
  FUN_1435ab510(local_48);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  return;
}



// FUNCTION 1436142e0 FUN_1436142e0 body=118 status=ok
// SIG undefined FUN_1436142e0(void)

void FUN_1436142e0(longlong param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)((ulonglong)param_2 + param_1);
  if (param_3 != puVar2) {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *puVar2 = uVar1 - 1;
        *puVar2 = *param_3;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar2 = *param_3;
  }
  return;
}



// FUNCTION 143614360 FUN_143614360 body=59 status=ok
// SIG undefined FUN_143614360(void)

void FUN_143614360(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((ulonglong)param_2 + param_1);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *(longlong *)((ulonglong)param_2 + param_1) = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  return;
}



// FUNCTION 1436143a0 FUN_1436143a0 body=126 status=ok
// SIG undefined FUN_1436143a0(void)

undefined8
FUN_1436143a0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (((longlong)param_3 < 0) || (param_3 < *(ulonglong *)(param_1 + 0x28))) {
    lVar2 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),param_3);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38) + 0x10 +
            ((param_3 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40;
  }
  FUN_1435acaa0(lVar2,param_2,uVar1,param_4,param_5);
  return param_2;
}



// FUNCTION 143614420 FUN_143614420 body=757 status=ok
// SIG undefined FUN_143614420(void)

void FUN_143614420(longlong *param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  undefined *puVar2;
  size_t _Size;
  undefined8 *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  code *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *local_38;
  undefined4 uStack_30;
  
  if (param_2 == 0) {
    FUN_14360e970();
    return;
  }
  if (param_2 < 8) {
    iVar9 = 8;
  }
  else {
    uVar6 = param_2 - 1 | param_2 - 1 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    iVar9 = (uVar6 >> 0x10 | uVar6) + 1;
  }
  uVar6 = (uint)(iVar9 * 4) / 5;
  if ((undefined8 *)*param_1 == (undefined8 *)&DAT_1467d9aa0) {
    if (param_3 == (longlong *)0x0) {
      param_3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
  }
  else {
    param_3 = *(longlong **)*param_1;
  }
  if (param_3 == (longlong *)0x0) {
    param_3 = DAT_146b62f28;
  }
  _Size = FUN_14360e2a0(param_3,uVar6,iVar9);
  _Dst = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,_Size,0);
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  uVar8 = 0;
  if (_Dst != (undefined8 *)0x0) {
    *_Dst = param_3;
    _Dst[1] = 0;
    FUN_14360a130(_Dst + 2,iVar9,uVar6);
  }
  pcVar10 = (code *)*param_1;
  if (pcVar10 != (code *)&DAT_1467d9aa0) {
    uVar12 = (*(longlong *)(pcVar10 + 0x10) - (longlong)pcVar10) + -0x40 >> 3;
    uVar7 = *(ulonglong *)(pcVar10 + 0x40);
    while (local_38 = pcVar10, uVar7 == 0) {
      uVar8 = uVar8 + 1;
      if (uVar12 <= uVar8) goto LAB_143614689;
      uVar7 = *(ulonglong *)(pcVar10 + uVar8 * 8 + 0x40);
    }
    uVar3 = FUN_143561b20(uVar7);
    if (uVar8 < uVar12) {
      while( true ) {
        lVar4 = uVar8 * 0x40 + uVar3;
        puVar5 = (uint *)(lVar4 * 0x20 + *(longlong *)(local_38 + 0x28));
        lVar4 = lVar4 * 0x10;
        lVar11 = *(longlong *)(pcVar10 + 0x20) + lVar4;
        FUN_14360dcf0(_Dst,lVar11,puVar5,
                      *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + 8 + lVar4) + 0x1c) &
                      0xffffff);
        piVar1 = (int *)(*(longlong *)(lVar11 + 8) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (9 < ((byte)*puVar5 & 0x1f)) {
          if ((*puVar5 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar5);
          }
          else {
            piVar1 = *(int **)(puVar5 + 2);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *puVar5 = *puVar5 & 0xfffffde0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
          }
        }
        pcVar10 = local_38;
        if (uVar12 <= uVar8) break;
        if (uVar3 < 0x3f) {
          uVar7 = uVar7 & ~(1L << (uVar3 & 0x3f));
        }
        else {
          uVar8 = uVar8 + 1;
          if (uVar12 <= uVar8) break;
          uVar7 = *(ulonglong *)(local_38 + uVar8 * 8 + 0x40);
        }
        while (uVar7 == 0) {
          uVar8 = uVar8 + 1;
          if (uVar12 <= uVar8) goto LAB_143614689;
          uVar7 = *(ulonglong *)(local_38 + uVar8 * 8 + 0x40);
        }
        uVar3 = FUN_143561b20(uVar7);
        if (uVar12 <= uVar8) break;
      }
    }
LAB_143614689:
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = (longlong)&DAT_1467d9aa0;
  }
  puVar2 = (undefined *)*param_1;
  *param_1 = (longlong)_Dst;
  if (puVar2 != &DAT_1467d9aa0) {
    local_38 = FUN_14360eaa0;
    uStack_30 = 0;
    FUN_143581310(puVar2,&local_38);
    *(undefined4 *)(puVar2 + 8) = 0;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
  }
  return;
}



// FUNCTION 143614720 FUN_143614720 body=116 status=ok
// SIG undefined FUN_143614720(void)

void FUN_143614720(uint *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      piVar1 = *(int **)(param_1 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = *param_1 & 0xfffffde0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  *param_1 = *param_1 & 0xffffffe3;
  *param_1 = *param_1 | 3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_14,param_2);
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1436147a0 FUN_1436147a0 body=192 status=ok
// SIG undefined FUN_1436147a0(void)

undefined1 * FUN_1436147a0(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  char local_res8 [8];
  double local_res10;
  
  *param_2 = 1;
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0) {
    local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar1 == 1) {
    if ((char)param_1[4] == '\0') {
      local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res10 = 1.0;
    }
  }
  else if (uVar1 == 2) {
    local_res10 = (double)(int)param_1[4];
  }
  else if (uVar1 == 3) {
    local_res10 = (double)param_1[4];
  }
  else if (uVar1 == 4) {
    local_res10 = *(double *)(param_1 + 4);
  }
  else {
    FUN_1435921c0(param_1,local_res8,&local_res10);
    if (local_res8[0] == '\0') {
      *param_2 = 0;
      return param_2;
    }
  }
  FUN_1434f06a0(param_1,SUB84(local_res10,0));
  return param_2;
}



// FUNCTION 143614860 FUN_143614860 body=1056 status=ok
// SIG undefined FUN_143614860(void)

undefined1 * FUN_143614860(uint *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 uVar13;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  int *piStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b7a928) && (_Init_thread_header(&DAT_146b7a928), DAT_146b7a928 == -1))
  {
    DAT_146b7a908 = 0;
    DAT_146b7a910 = (int *)0x0;
    atexit(FUN_143ec4e30);
    _Init_thread_footer(&DAT_146b7a928);
  }
  uStack_2c = DAT_146b7a920._4_4_;
  uStack_30 = (uint)DAT_146b7a920;
  uStack_34 = DAT_146b7a918._4_4_;
  local_38 = (uint)DAT_146b7a918;
  piVar12 = DAT_146b7a910;
  uVar5 = DAT_146b7a908;
  uVar7 = DAT_146b7a908 & 0x1f;
  local_48 = CONCAT44(local_48._4_4_,DAT_146b7a908);
  piStack_40 = DAT_146b7a910;
  if (9 < uVar7) {
    if ((DAT_146b7a908 >> 9 & 1) == 0) {
      if (uVar7 == 10) {
        piVar11 = (int *)(CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918) + 0x18);
        *piVar11 = *piVar11 + 1;
      }
      else if (10 < uVar7) {
        if (uVar7 < 0xd) {
          lVar9 = CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918);
        }
        else {
          if (0xe < uVar7) goto LAB_14361491d;
          lVar9 = CONCAT44(DAT_146b7a920._4_4_,(uint)DAT_146b7a920);
        }
        if (lVar9 != 0) {
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0x8fffffff;
        }
      }
    }
    else {
      *DAT_146b7a910 = *DAT_146b7a910 + 1;
    }
  }
LAB_14361491d:
  uVar13 = 0;
  uVar10 = *param_1 & 0x1f;
  if ((uVar10 < 5) || (uVar10 == 10)) {
    if (param_1 != (uint *)&local_48) {
      if (9 < uVar10) {
        if ((*param_1 >> 9 & 1) == 0) {
          if (uVar10 == 10) {
            *(int *)(*(longlong *)(param_1 + 4) + 0x18) =
                 *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
          }
          else if (10 < uVar10) {
            if (uVar10 < 0xd) {
              lVar9 = *(longlong *)(param_1 + 4);
            }
            else {
              if (0xe < uVar10) goto LAB_143614b3b;
              lVar9 = *(longlong *)(param_1 + 6);
            }
            if (lVar9 != 0) {
              *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(param_1 + 2) = **(int **)(param_1 + 2) + 1;
        }
      }
LAB_143614b3b:
      FUN_143603d30(&local_48);
      local_48 = *(undefined8 *)param_1;
      piStack_40 = *(int **)(param_1 + 2);
      local_38 = param_1[4];
      uStack_34 = param_1[5];
      uStack_30 = param_1[6];
      uStack_2c = param_1[7];
LAB_143614b4f:
      piVar12 = piStack_40;
      uVar5 = (uint)local_48;
    }
  }
  else {
    if ((uVar10 - 5 & 0xfffffffd) == 0) {
LAB_143614a4d:
      if (9 < uVar7) {
        if ((uVar5 >> 9 & 1) == 0) {
          if (uVar7 == 10) {
            piVar11 = (int *)(CONCAT44(uStack_34,local_38) + 0x18);
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
            if ((local_38 & 1) == 0) {
              lVar9 = CONCAT44(uStack_34,local_38);
              goto LAB_143614aa7;
            }
          }
          else if ((uVar7 - 0xd < 2) && ((uStack_30 & 1) == 0)) {
            lVar9 = CONCAT44(uStack_2c,uStack_30);
LAB_143614aa7:
            if ((lVar9 != 0) && ((*(uint *)(lVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *piVar12 = *piVar12 + -1;
          if (*piVar12 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar12);
          }
          piVar12 = (int *)0x0;
          uVar5 = uVar5 & 0xfffffde0;
        }
      }
    }
    else {
      if (uVar10 == 0xb) {
        lVar9 = *(longlong *)(param_1 + 4);
        piVar11 = (int *)(*(longlong *)(lVar9 + 0x38) + 0x18);
        *piVar11 = *piVar11 + 1;
        if (9 < uVar7) {
          if ((uVar5 >> 9 & 1) == 0) {
            if (uVar7 == 10) {
              piVar11 = (int *)(CONCAT44(uStack_34,local_38) + 0x18);
              *piVar11 = *piVar11 + -1;
              if (*piVar11 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
              if ((local_38 & 1) == 0) {
                lVar8 = CONCAT44(uStack_34,local_38);
                goto LAB_143614a0c;
              }
            }
            else if ((uVar7 - 0xd < 2) && ((uStack_30 & 1) == 0)) {
              lVar8 = CONCAT44(uStack_2c,uStack_30);
LAB_143614a0c:
              if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) & 0x3fffff) != 0)) {
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *piVar12 = *piVar12 + -1;
            if (*piVar12 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar12);
            }
            piVar12 = (int *)0x0;
            uVar5 = uVar5 & 0xfffffde0;
          }
        }
        uVar1 = *(undefined8 *)(lVar9 + 0x38);
        uVar5 = uVar5 & 0xffffffea | 10;
        local_58 = (uint)uVar1;
        uStack_54 = (uint)((ulonglong)uVar1 >> 0x20);
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        goto LAB_143614b56;
      }
      if (uVar10 - 0xd < 2) goto LAB_143614a4d;
      lVar9 = *(longlong *)(param_1 + 4);
      if (lVar9 != 0) {
        pcVar6 = (char *)FUN_1435b0690(lVar9,local_res8,&local_48,0);
        if (*pcVar6 == '\0') {
          FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 0x98));
          piVar11 = piStack_40;
          uVar7 = (uint)local_48;
          goto LAB_143614b74;
        }
        goto LAB_143614b4f;
      }
    }
    uVar5 = uVar5 & 0xffffffe4 | 4;
    local_58 = 0;
    uStack_54 = 0;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
  }
LAB_143614b56:
  uVar7 = *param_1;
  uVar10 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  piVar11 = *(int **)(param_1 + 2);
  uVar13 = 1;
  *param_1 = uVar5;
  *(int **)(param_1 + 2) = piVar12;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  param_1[7] = uStack_2c;
  local_38 = uVar10;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
LAB_143614b74:
  uVar5 = uVar7 & 0x1f;
  *param_2 = uVar13;
  if (9 < uVar5) {
    if ((uVar7 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar12 = (int *)(CONCAT44(uStack_34,local_38) + 0x18);
        *piVar12 = *piVar12 + -1;
        if (*piVar12 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          if ((local_38 & 1) != 0) {
            return param_2;
          }
          lVar9 = CONCAT44(uStack_34,local_38);
        }
        else {
          if (1 < uVar5 - 0xd) {
            return param_2;
          }
          if ((uStack_30 & 1) != 0) {
            return param_2;
          }
          lVar9 = CONCAT44(uStack_2c,uStack_30);
        }
        if ((lVar9 != 0) && ((*(uint *)(lVar9 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) - 1;
          FUN_1434ef880();
          return param_2;
        }
      }
    }
    else {
      *piVar11 = *piVar11 + -1;
      if (*piVar11 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 143614c80 FUN_143614c80 body=142 status=ok
// SIG undefined FUN_143614c80(void)

void FUN_143614c80(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_1434f0160((longlong *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98),
                *(longlong *)(param_1 + 0x88) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (*(longlong *)(param_1 + 0x88) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
    if (param_2 == 0) {
      return;
    }
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return;
}



// FUNCTION 143614d10 FUN_143614d10 body=199 status=ok
// SIG undefined FUN_143614d10(void)

void FUN_143614d10(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x1c);
    do {
      uVar1 = *(undefined8 *)(lVar5 + *(longlong *)(param_2 + 0x30));
      lVar2 = *param_1;
      cVar3 = FUN_143603ff0(lVar2,uVar1);
      if (cVar3 != '\0') {
        FUN_143614d10(lVar2 + 8,uVar1);
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar5 = 0;
  if (*(uint *)(param_2 + 0x20) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(lVar5 + *(longlong *)(param_2 + 0x38));
      cVar3 = FUN_143603ff0(lVar2,uVar1);
      if (cVar3 != '\0') {
        FUN_143614d10(lVar2 + 8,uVar1);
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143614de0 FUN_143614de0 body=149 status=ok
// SIG undefined FUN_143614de0(void)

void FUN_143614de0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = 0;
  if (*(uint *)(param_2 + 0x20) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x20);
    lVar3 = lVar1;
    do {
      if (*(longlong *)(lVar3 + *(longlong *)(param_2 + 0x38)) != 0) {
        FUN_143604bd0(*param_1);
      }
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x1c);
    do {
      if (*(longlong *)(lVar1 + *(longlong *)(param_2 + 0x30)) != 0) {
        FUN_143604bd0(*param_1);
      }
      lVar1 = lVar1 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143614e80 FUN_143614e80 body=220 status=ok
// SIG undefined FUN_143614e80(void)

void FUN_143614e80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  if (*(uint *)(param_2 + 0x20) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_2 + 0x38));
      if (lVar1 != 0) {
        lVar2 = *param_1;
        cVar3 = FUN_143603ff0(lVar2,lVar1);
        if (cVar3 != '\0') {
          FUN_143614e80(lVar2 + 8,lVar1);
        }
      }
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar4 = 0;
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x1c);
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_2 + 0x30));
      if (lVar1 != 0) {
        lVar2 = *param_1;
        cVar3 = FUN_143603ff0(lVar2,lVar1);
        if (cVar3 != '\0') {
          FUN_143614e80(lVar2 + 8,lVar1);
        }
      }
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143614f60 FUN_143614f60 body=341 status=ok
// SIG undefined FUN_143614f60(void)

void FUN_143614f60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  lVar4 = 0;
  if (*(uint *)(param_2 + 0x18) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x18);
    lVar3 = lVar4;
    do {
      uVar1 = *param_1;
      plVar6 = (longlong *)(*(longlong *)(param_2 + 0x38) + lVar3);
      lVar2 = plVar6[3];
      if (lVar2 != 0) {
        *(longlong *)(*plVar6 + 8) = plVar6[1];
        *(longlong *)plVar6[1] = *plVar6;
        *plVar6 = -1;
        plVar6[1] = -1;
        plVar6[3] = 0;
        FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
      }
      lVar3 = lVar3 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x1c);
    lVar3 = lVar4;
    do {
      uVar1 = *param_1;
      plVar6 = (longlong *)(*(longlong *)(param_2 + 0x40) + lVar3);
      lVar2 = plVar6[3];
      if (lVar2 != 0) {
        *(longlong *)(*plVar6 + 8) = plVar6[1];
        *(longlong *)plVar6[1] = *plVar6;
        *plVar6 = -1;
        plVar6[1] = -1;
        plVar6[3] = 0;
        FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
      }
      lVar3 = lVar3 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(uint *)(param_2 + 0x20) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      uVar1 = *param_1;
      plVar6 = (longlong *)(*(longlong *)(param_2 + 0x48) + lVar4);
      lVar3 = plVar6[3];
      if (lVar3 != 0) {
        *(longlong *)(*plVar6 + 8) = plVar6[1];
        *(longlong *)plVar6[1] = *plVar6;
        *plVar6 = -1;
        plVar6[1] = -1;
        plVar6[3] = 0;
        FUN_143594aa0(local_res8,uVar1,lVar3,CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
      }
      lVar4 = lVar4 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1436150c0 FUN_1436150c0 body=84 status=ok
// SIG undefined FUN_1436150c0(void)

void FUN_1436150c0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  uVar2 = *param_1;
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 8) = *(undefined8 *)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0;
    FUN_143594aa0(local_res8,uVar2,lVar1,1);
  }
  return;
}



// FUNCTION 143615120 FUN_143615120 body=84 status=ok
// SIG undefined FUN_143615120(void)

void FUN_143615120(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  uVar2 = *param_1;
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8) = *(undefined8 *)(param_2 + 0x40);
    **(undefined8 **)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0;
    FUN_143594aa0(local_res8,uVar2,lVar1,1);
  }
  return;
}



// FUNCTION 143615180 FUN_143615180 body=273 status=ok
// SIG undefined FUN_143615180(void)

void FUN_143615180(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x48);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x80);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 8) = *(undefined8 *)(param_2 + 0x70);
    **(undefined8 **)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x80) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  lVar2 = *(longlong *)(param_2 + 0xa0);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8) = *(undefined8 *)(param_2 + 0x90);
    **(undefined8 **)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  return;
}



// FUNCTION 1436152a0 FUN_1436152a0 body=171 status=ok
// SIG undefined FUN_1436152a0(void)

void FUN_1436152a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x30);
    **(undefined8 **)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x40) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x60);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 8) = *(undefined8 *)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  return;
}



// FUNCTION 143615350 FUN_143615350 body=171 status=ok
// SIG undefined FUN_143615350(void)

void FUN_143615350(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x40);
    **(undefined8 **)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x70);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 8) = *(undefined8 *)(param_2 + 0x60);
    **(undefined8 **)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  return;
}



// FUNCTION 143615400 FUN_143615400 body=292 status=ok
// SIG undefined FUN_143615400(void)

void FUN_143615400(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x70);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x58);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x60);
    **(undefined8 **)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x90);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x78) + 8) = *(undefined8 *)(param_2 + 0x80);
    **(undefined8 **)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x90) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  if (*(uint *)(param_2 + 0x30) != 0) {
    plVar4 = (longlong *)(param_2 + 0xf0);
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x30);
    do {
      lVar2 = *plVar4;
      uVar1 = *param_1;
      if (lVar2 != 0) {
        *(longlong *)(plVar4[-3] + 8) = plVar4[-2];
        *(longlong *)plVar4[-2] = plVar4[-3];
        plVar4[-3] = -1;
        plVar4[-2] = -1;
        *plVar4 = 0;
        FUN_143594aa0(local_res8,uVar1,lVar2,1);
      }
      plVar4 = plVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143615530 FUN_143615530 body=385 status=ok
// SIG undefined FUN_143615530(void)

void FUN_143615530(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x68);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x50);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x58);
    **(undefined8 **)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x68) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 8) = *(undefined8 *)(param_2 + 0x78);
    **(undefined8 **)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x88) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  lVar2 = *(longlong *)(param_2 + 0xa8);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 8) = *(undefined8 *)(param_2 + 0x98);
    **(undefined8 **)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  if (*(uint *)(param_2 + 0x28) != 0) {
    plVar4 = (longlong *)(param_2 + 0x108);
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x28);
    do {
      lVar2 = *plVar4;
      uVar1 = *param_1;
      if (lVar2 != 0) {
        *(longlong *)(plVar4[-3] + 8) = plVar4[-2];
        *(longlong *)plVar4[-2] = plVar4[-3];
        plVar4[-3] = -1;
        plVar4[-2] = -1;
        *plVar4 = 0;
        FUN_143594aa0(local_res8,uVar1,lVar2,1);
      }
      plVar4 = plVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1436156c0 FUN_1436156c0 body=209 status=ok
// SIG undefined FUN_1436156c0(void)

void FUN_1436156c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x30);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x38);
    **(undefined8 **)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x48) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  if (*(uint *)(param_2 + 0x28) != 0) {
    plVar4 = (longlong *)(param_2 + 0x88);
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x28);
    do {
      lVar2 = *plVar4;
      uVar1 = *param_1;
      if (lVar2 != 0) {
        *(longlong *)(plVar4[-3] + 8) = plVar4[-2];
        *(longlong *)plVar4[-2] = plVar4[-3];
        plVar4[-3] = -1;
        plVar4[-2] = -1;
        *plVar4 = 0;
        FUN_143594aa0(local_res8,uVar1,lVar2,1);
      }
      plVar4 = plVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1436157a0 FUN_1436157a0 body=84 status=ok
// SIG undefined FUN_1436157a0(void)

void FUN_1436157a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  uVar2 = *param_1;
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = *(undefined8 *)(param_2 + 0x30);
    **(undefined8 **)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x40) = 0;
    FUN_143594aa0(local_res8,uVar2,lVar1,1);
  }
  return;
}



// FUNCTION 143615800 FUN_143615800 body=365 status=ok
// SIG undefined FUN_143615800(void)

void FUN_143615800(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x60);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x48);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x60) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x80);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 8) = *(undefined8 *)(param_2 + 0x70);
    **(undefined8 **)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x80) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  lVar2 = *(longlong *)(param_2 + 0xa0);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8) = *(undefined8 *)(param_2 + 0x90);
    **(undefined8 **)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  lVar2 = *(longlong *)(param_2 + 0xc0);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 8) = *(undefined8 *)(param_2 + 0xb0);
    **(undefined8 **)(param_2 + 0xb0) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xb0) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  return;
}



// FUNCTION 143615970 FUN_143615970 body=171 status=ok
// SIG undefined FUN_143615970(void)

void FUN_143615970(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x20);
    **(undefined8 **)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  }
  lVar2 = *(longlong *)(param_2 + 0x50);
  uVar1 = *param_1;
  if (lVar2 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8) = *(undefined8 *)(param_2 + 0x40);
    **(undefined8 **)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x50) = 0;
    FUN_143594aa0(local_res8,uVar1,lVar2,1);
  }
  return;
}



// FUNCTION 143615a20 FUN_143615a20 body=84 status=ok
// SIG undefined FUN_143615a20(void)

void FUN_143615a20(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  uVar2 = *param_1;
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8) = *(undefined8 *)(param_2 + 0x48);
    **(undefined8 **)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x58) = 0;
    FUN_143594aa0(local_res8,uVar2,lVar1,1);
  }
  return;
}



// FUNCTION 143615a80 FUN_143615a80 body=270 status=ok
// SIG undefined FUN_143615a80(void)

void FUN_143615a80(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_2 + 0xec) != 0) {
    lVar3 = 0;
    uVar4 = (ulonglong)*(uint *)(param_2 + 0xec);
    do {
      if (*(longlong *)(lVar3 + *(longlong *)(param_2 + 0x108)) != 0) {
        FUN_143604d00(*param_1);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (lVar3 = *(longlong *)(param_2 + 0x48); lVar3 != param_2 + 0x40;
      lVar3 = *(longlong *)(lVar3 + 8)) {
    puVar2 = (uint *)*param_1;
    uVar1 = *puVar2;
    if (*(uint *)(lVar3 + 0x10) >> 5 != uVar1) {
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0x1f;
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | uVar1 << 5;
      puVar2 = puVar2 + 2;
      switch(*(uint *)(lVar3 + 0x10) & 0x1f) {
      case 1:
        FUN_143615a80(puVar2,lVar3);
        break;
      case 4:
      case 0x17:
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          FUN_143604d00(*(undefined8 *)puVar2);
        }
        break;
      case 5:
        FUN_143615bc0(puVar2,lVar3);
        break;
      case 6:
        FUN_143615c50(puVar2,lVar3);
        break;
      case 7:
        FUN_143615d00(puVar2,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 143615bc0 FUN_143615bc0 body=140 status=ok
// SIG undefined FUN_143615bc0(void)

void FUN_143615bc0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  puVar3 = (uint *)*param_1;
  uVar1 = *puVar3;
  if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
    *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FUN_143604d00(*(undefined8 *)(puVar3 + 2));
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  puVar3 = (uint *)*param_1;
  uVar1 = *puVar3;
  if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
    *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FUN_143604d00(*(undefined8 *)(puVar3 + 2));
    }
  }
  return;
}



// FUNCTION 143615c50 FUN_143615c50 body=176 status=ok
// SIG undefined FUN_143615c50(void)

void FUN_143615c50(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  puVar3 = (uint *)*param_1;
  uVar1 = *puVar3;
  if ((*(uint *)(lVar2 + 0x10) >> 5 != uVar1) &&
     (*(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f,
     *(longlong *)(lVar2 + 0x30) != 0)) {
    FUN_143604d00(*(undefined8 *)(puVar3 + 2));
  }
  if (*(uint *)(param_2 + 0x18) != 0) {
    plVar4 = (longlong *)(param_2 + 0x48);
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x18);
    do {
      lVar2 = *plVar4;
      puVar3 = (uint *)*param_1;
      uVar1 = *puVar3;
      if ((*(uint *)(lVar2 + 0x10) >> 5 != uVar1) &&
         (*(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f,
         *(longlong *)(lVar2 + 0x30) != 0)) {
        FUN_143604d00(*(undefined8 *)(puVar3 + 2));
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143615d00 FUN_143615d00 body=187 status=ok
// SIG undefined FUN_143615d00(void)

void FUN_143615d00(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(param_2 + 0x28);
  puVar2 = (uint *)*param_1;
  uVar1 = *puVar2;
  if ((*(uint *)(lVar4 + 0x10) >> 5 != uVar1) &&
     (*(uint *)(lVar4 + 0x10) = uVar1 << 5 | *(uint *)(lVar4 + 0x10) & 0x1f,
     *(longlong *)(lVar4 + 0x30) != 0)) {
    FUN_143604d00(*(undefined8 *)(puVar2 + 2));
  }
  if (*(uint *)(param_2 + 0x20) != 0) {
    lVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      puVar2 = (uint *)*param_1;
      lVar3 = *(longlong *)(lVar4 + *(longlong *)(param_2 + 0x38));
      uVar1 = *puVar2;
      if ((*(uint *)(lVar3 + 0x10) >> 5 != uVar1) &&
         (*(uint *)(lVar3 + 0x10) = uVar1 << 5 | *(uint *)(lVar3 + 0x10) & 0x1f,
         *(longlong *)(lVar3 + 0x30) != 0)) {
        FUN_143604d00(*(undefined8 *)(puVar2 + 2));
      }
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143615dc0 FUN_143615dc0 body=52 status=ok
// SIG undefined FUN_143615dc0(void)

void FUN_143615dc0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 != 0) {
    puVar3 = (uint *)*param_1;
    uVar1 = *puVar3;
    if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
      *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
      FUN_143615e00(puVar3 + 2);
      return;
    }
  }
  return;
}



// FUNCTION 143615e00 FUN_143615e00 body=212 status=ok
// SIG undefined FUN_143615e00(void)

void FUN_143615e00(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(uint *)(param_2 + 0xec) != 0) {
    lVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_2 + 0xec);
    do {
      lVar2 = *(longlong *)(lVar5 + *(longlong *)(param_2 + 0x108));
      if (lVar2 != 0) {
        puVar3 = (uint *)*param_1;
        uVar1 = *puVar3;
        if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
          *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
          FUN_143615e00(puVar3 + 2);
        }
      }
      lVar5 = lVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (lVar5 = *(longlong *)(param_2 + 0x48); lVar5 != param_2 + 0x40;
      lVar5 = *(longlong *)(lVar5 + 8)) {
    lVar2 = *param_1;
    cVar4 = FUN_143605050(lVar2,lVar5);
    if (cVar4 != '\0') {
      FUN_143616bf0(lVar2 + 8,lVar5);
    }
  }
  return;
}



// FUNCTION 143615ee0 FUN_143615ee0 body=206 status=ok
// SIG undefined FUN_143615ee0(void)

void FUN_143615ee0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (uint *)*param_1;
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar1 = *puVar2;
  if (*(uint *)(lVar3 + 0x10) >> 5 != uVar1) {
    *(uint *)(lVar3 + 0x10) = uVar1 << 5 | *(uint *)(lVar3 + 0x10) & 0x1f;
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 != 0) {
      puVar2 = *(uint **)(puVar2 + 2);
      uVar1 = *puVar2;
      if (*(uint *)(lVar3 + 0x10) >> 5 != uVar1) {
        *(uint *)(lVar3 + 0x10) = uVar1 << 5 | *(uint *)(lVar3 + 0x10) & 0x1f;
        FUN_143615e00(puVar2 + 2);
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x30);
  puVar2 = (uint *)*param_1;
  uVar1 = *puVar2;
  if (*(uint *)(lVar3 + 0x10) >> 5 != uVar1) {
    lVar4 = *(longlong *)(lVar3 + 0x30);
    *(uint *)(lVar3 + 0x10) = uVar1 << 5 | *(uint *)(lVar3 + 0x10) & 0x1f;
    if (lVar4 != 0) {
      puVar2 = *(uint **)(puVar2 + 2);
      uVar1 = *puVar2;
      if (*(uint *)(lVar4 + 0x10) >> 5 != uVar1) {
        *(uint *)(lVar4 + 0x10) = uVar1 << 5 | *(uint *)(lVar4 + 0x10) & 0x1f;
        FUN_143615e00(puVar2 + 2);
      }
    }
  }
  return;
}



// FUNCTION 143615fb0 FUN_143615fb0 body=240 status=ok
// SIG undefined FUN_143615fb0(void)

void FUN_143615fb0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  puVar3 = (uint *)*param_1;
  uVar1 = *puVar3;
  if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
    lVar4 = *(longlong *)(lVar2 + 0x30);
    *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
    if (lVar4 != 0) {
      puVar3 = *(uint **)(puVar3 + 2);
      uVar1 = *puVar3;
      if (*(uint *)(lVar4 + 0x10) >> 5 != uVar1) {
        *(uint *)(lVar4 + 0x10) = uVar1 << 5 | *(uint *)(lVar4 + 0x10) & 0x1f;
        FUN_143615e00(puVar3 + 2);
      }
    }
  }
  if (*(uint *)(param_2 + 0x18) != 0) {
    plVar5 = (longlong *)(param_2 + 0x48);
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x18);
    do {
      lVar2 = *plVar5;
      puVar3 = (uint *)*param_1;
      uVar1 = *puVar3;
      if (*(uint *)(lVar2 + 0x10) >> 5 != uVar1) {
        lVar4 = *(longlong *)(lVar2 + 0x30);
        *(uint *)(lVar2 + 0x10) = uVar1 << 5 | *(uint *)(lVar2 + 0x10) & 0x1f;
        if (lVar4 != 0) {
          puVar3 = *(uint **)(puVar3 + 2);
          uVar1 = *puVar3;
          if (*(uint *)(lVar4 + 0x10) >> 5 != uVar1) {
            *(uint *)(lVar4 + 0x10) = uVar1 << 5 | *(uint *)(lVar4 + 0x10) & 0x1f;
            FUN_143615e00(puVar3 + 2);
          }
        }
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1436160a0 FUN_1436160a0 body=253 status=ok
// SIG undefined FUN_1436160a0(void)

void FUN_1436160a0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar2 = (uint *)*param_1;
  lVar5 = *(longlong *)(param_2 + 0x28);
  uVar1 = *puVar2;
  if (*(uint *)(lVar5 + 0x10) >> 5 != uVar1) {
    *(uint *)(lVar5 + 0x10) = uVar1 << 5 | *(uint *)(lVar5 + 0x10) & 0x1f;
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) {
      puVar2 = *(uint **)(puVar2 + 2);
      uVar1 = *puVar2;
      if (*(uint *)(lVar5 + 0x10) >> 5 != uVar1) {
        *(uint *)(lVar5 + 0x10) = uVar1 << 5 | *(uint *)(lVar5 + 0x10) & 0x1f;
        FUN_143615e00(puVar2 + 2);
      }
    }
  }
  if (*(uint *)(param_2 + 0x20) != 0) {
    lVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      puVar2 = (uint *)*param_1;
      lVar3 = *(longlong *)(lVar5 + *(longlong *)(param_2 + 0x38));
      uVar1 = *puVar2;
      if (*(uint *)(lVar3 + 0x10) >> 5 != uVar1) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
        *(uint *)(lVar3 + 0x10) = uVar1 << 5 | *(uint *)(lVar3 + 0x10) & 0x1f;
        if (lVar4 != 0) {
          puVar2 = *(uint **)(puVar2 + 2);
          uVar1 = *puVar2;
          if (*(uint *)(lVar4 + 0x10) >> 5 != uVar1) {
            *(uint *)(lVar4 + 0x10) = uVar1 << 5 | *(uint *)(lVar4 + 0x10) & 0x1f;
            FUN_143615e00(puVar2 + 2);
          }
        }
      }
      lVar5 = lVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1436161a0 FUN_1436161a0 body=176 status=ok
// SIG undefined FUN_1436161a0(void)

void FUN_1436161a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  if ((*(longlong *)(param_2 + 0x60) != 0) && (*(longlong *)(param_2 + 0x68) != 0)) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
    *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x1c);
    do {
      uVar1 = *(undefined8 *)(lVar4 + *(longlong *)(param_2 + 0x30));
      lVar2 = *param_1;
      cVar3 = FUN_143610c40(lVar2,uVar1);
      if (cVar3 != '\0') {
        FUN_1436161a0(lVar2 + 8,uVar1);
      }
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143616250 FUN_143616250 body=401 status=ok
// SIG undefined FUN_143616250(void)

void FUN_143616250(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 0;
  if (*(uint *)(param_2 + 0xe0) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0xe0);
    lVar8 = lVar7;
    do {
      lVar5 = *(longlong *)(param_2 + 0xf0) + lVar8;
      if (lVar5 != 0) {
        for (lVar1 = *(longlong *)(lVar5 + 0x18); lVar1 != lVar5 + 0x10;
            lVar1 = *(longlong *)(lVar1 + 8)) {
          uVar2 = *(undefined8 *)(lVar1 + 0x10);
          lVar3 = *param_1;
          cVar4 = FUN_143616e60(lVar3,uVar2);
          if (cVar4 != '\0') {
            FUN_143616c70(lVar3 + 0x18,uVar2);
          }
        }
      }
      lVar8 = lVar8 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(uint *)(param_2 + 0xe4) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0xe4);
    lVar8 = lVar7;
    do {
      lVar5 = *(longlong *)(param_2 + 0xf8) + lVar8;
      if (lVar5 != 0) {
        for (lVar1 = *(longlong *)(lVar5 + 0x18); lVar1 != lVar5 + 0x10;
            lVar1 = *(longlong *)(lVar1 + 8)) {
          uVar2 = *(undefined8 *)(lVar1 + 0x10);
          lVar3 = *param_1;
          cVar4 = FUN_143616e60(lVar3,uVar2);
          if (cVar4 != '\0') {
            FUN_143616c70(lVar3 + 0x18,uVar2);
          }
        }
      }
      lVar8 = lVar8 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(uint *)(param_2 + 0xe8) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0xe8);
    do {
      lVar8 = *(longlong *)(param_2 + 0x100) + lVar7;
      if (lVar8 != 0) {
        for (lVar5 = *(longlong *)(lVar8 + 0x18); lVar5 != lVar8 + 0x10;
            lVar5 = *(longlong *)(lVar5 + 8)) {
          uVar2 = *(undefined8 *)(lVar5 + 0x10);
          lVar1 = *param_1;
          cVar4 = FUN_143616e60(lVar1,uVar2);
          if (cVar4 != '\0') {
            FUN_143616c70(lVar1 + 0x18,uVar2);
          }
        }
      }
      lVar7 = lVar7 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1436163f0 FUN_1436163f0 body=65 status=ok
// SIG undefined FUN_1436163f0(void)

void FUN_1436163f0(undefined8 param_1,longlong param_2)

{
  FUN_143610980(param_1,param_2 + 0x68);
  FUN_143610980(param_1,param_2 + 0x88);
  FUN_143610980(param_1,param_2 + 0xa8);
  return;
}



// FUNCTION 143616440 FUN_143616440 body=47 status=ok
// SIG undefined FUN_143616440(void)

void FUN_143616440(undefined8 param_1,longlong param_2)

{
  FUN_143610980(param_1,param_2 + 0x58);
  FUN_143610980(param_1,param_2 + 0x78);
  return;
}



// FUNCTION 143616470 FUN_143616470 body=94 status=ok
// SIG undefined FUN_143616470(void)

void FUN_143616470(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_2 + 0x1c) != 0) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x1c);
    do {
      FUN_143610980(param_1,*(longlong *)(param_2 + 0x30) + lVar1);
      lVar1 = lVar1 + 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1436164d0 FUN_1436164d0 body=332 status=ok
// SIG undefined FUN_1436164d0(void)

void FUN_1436164d0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (*(uint *)(param_2 + 0xe0) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0xe0);
    lVar2 = lVar4;
    do {
      lVar1 = *(longlong *)(param_2 + 0xf0) + 0x10 + lVar2;
      if ((((*(longlong *)(lVar1 + 8) != lVar1) ||
           ((lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xf0) + lVar2),
            ((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar1 + 0x18) == 0xc)))
           ) || ((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf &&
                 (*(int *)(lVar1 + 0x18) == 0xd)))) ||
         ((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar1 + 0x18) == 6))))
      {
        *param_1 = 1;
      }
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(uint *)(param_2 + 0xe4) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0xe4);
    lVar2 = lVar4;
    do {
      lVar1 = *(longlong *)(param_2 + 0xf8) + 0x10 + lVar2;
      if ((((*(longlong *)(lVar1 + 8) != lVar1) ||
           ((lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + lVar2),
            ((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar1 + 0x18) == 0xc)))
           ) || ((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf &&
                 (*(int *)(lVar1 + 0x18) == 0xd)))) ||
         ((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar1 + 0x18) == 6))))
      {
        *param_1 = 1;
      }
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(uint *)(param_2 + 0xe8) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0xe8);
    do {
      lVar2 = *(longlong *)(param_2 + 0x100) + 0x10 + lVar4;
      if ((((*(longlong *)(lVar2 + 8) != lVar2) ||
           ((lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x100) + lVar4),
            ((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xc)))
           ) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf &&
                 (*(int *)(lVar2 + 0x18) == 0xd)))) ||
         ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar2 + 0x18) == 6))))
      {
        *param_1 = 1;
      }
      lVar4 = lVar4 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143616bf0 FUN_143616bf0 body=74 status=ok
// SIG undefined FUN_143616bf0(void)

void FUN_143616bf0(undefined8 param_1,longlong param_2)

{
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  default:
    return;
  case 1:
    FUN_143615e00();
    return;
  case 4:
    FUN_143615dc0();
    return;
  case 5:
    FUN_143615ee0();
    return;
  case 6:
    FUN_143615fb0();
    return;
  case 7:
    FUN_1436160a0();
    return;
  case 0x17:
    FUN_143615dc0();
    return;
  }
}



// FUNCTION 143616c70 FUN_143616c70 body=152 status=ok
// SIG undefined FUN_143616c70(void)

void FUN_143616c70(undefined8 param_1,longlong param_2)

{
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  default:
    return;
  case 1:
    FUN_143616250();
    return;
  case 2:
    FUN_143610980(param_1,param_2 + 0x18);
    return;
  case 3:
    FUN_143610980(param_1,param_2 + 0x20);
    return;
  case 7:
    FUN_143616470();
    return;
  case 8:
    FUN_143610980(param_1,param_2 + 0xb8);
    return;
  case 9:
    FUN_143610980(param_1,param_2 + 0xd0);
    return;
  case 10:
    FUN_143610980(param_1,param_2 + 0x50);
    return;
  case 0xf:
    FUN_143610980(param_1,param_2 + 0x88);
    return;
  case 0x10:
  case 0x13:
    FUN_143610980(param_1,param_2 + 0x58);
    return;
  case 0x11:
    FUN_143610980(param_1,param_2 + 0x68);
    return;
  case 0x12:
    FUN_143610980(param_1,param_2 + 200);
    return;
  case 0x14:
    FUN_143616440();
    return;
  case 0x15:
    FUN_1436163f0();
    return;
  }
}



// FUNCTION 143616d70 FUN_143616d70 body=130 status=ok
// SIG undefined FUN_143616d70(void)

void FUN_143616d70(undefined8 param_1,longlong param_2)

{
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  default:
    return;
  case 4:
    FUN_143614f60();
    return;
  case 5:
    FUN_143615350();
    return;
  case 6:
    FUN_1436157a0();
    return;
  case 7:
    FUN_143615a20();
    return;
  case 8:
    FUN_143615400();
    return;
  case 9:
    FUN_143615530();
    return;
  case 10:
    FUN_1436156c0();
    return;
  case 0xb:
    FUN_143614f60();
    return;
  case 0xc:
    FUN_1436157a0();
    return;
  case 0xd:
    FUN_1436152a0();
    return;
  case 0xe:
    FUN_143615800();
    return;
  case 0xf:
    FUN_1436150c0();
    return;
  case 0x10:
    FUN_143615120();
    return;
  case 0x11:
    FUN_1436152a0();
    return;
  case 0x12:
    FUN_143615180();
    return;
  case 0x13:
    FUN_143615120();
    return;
  case 0x14:
    FUN_143615970();
    return;
  case 0x15:
    FUN_1436152a0();
    return;
  case 0x17:
    FUN_143614f60();
    return;
  }
}



// FUNCTION 143616e60 FUN_143616e60 body=171 status=ok
// SIG undefined FUN_143616e60(void)

ulonglong FUN_143616e60(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  case 0:
  case 2:
  case 3:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x16:
  case 0x17:
    uVar1 = FUN_143610f30();
    break;
  case 1:
    uVar1 = FUN_143604d80();
    return uVar1;
  case 4:
    uVar1 = FUN_143604fc0();
    return uVar1;
  case 5:
    uVar1 = FUN_143604f70();
    return uVar1;
  case 6:
    uVar1 = FUN_143610c70();
    return uVar1;
  case 7:
    uVar1 = FUN_143610dd0();
    return uVar1;
  case 8:
    uVar1 = FUN_143604020();
    return uVar1;
  case 10:
    uVar1 = FUN_1436040a0();
    return uVar1;
  case 0xf:
    uVar1 = FUN_143604de0();
    return uVar1;
  case 0x10:
    uVar1 = FUN_143604ed0();
    return uVar1;
  case 0x11:
    uVar1 = FUN_143604e80();
    return uVar1;
  case 0x13:
    uVar1 = FUN_143604e30();
    return uVar1;
  case 0x14:
    uVar1 = FUN_143605000();
    return uVar1;
  case 0x15:
    uVar1 = FUN_143604f20();
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143616f70 FUN_143616f70 body=1247 status=ok
// SIG undefined FUN_143616f70(void)

void FUN_143616f70(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  default:
    return;
  case 1:
    FUN_1436164d0();
    return;
  case 2:
    if (*(longlong *)(param_2 + 0x30) != param_2 + 0x28) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x18);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 3:
    if (*(longlong *)(param_2 + 0x38) != param_2 + 0x30) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 7:
    if (*(uint *)(param_2 + 0x1c) != 0) {
      lVar2 = 0;
      uVar3 = (ulonglong)*(uint *)(param_2 + 0x1c);
      do {
        lVar1 = *(longlong *)(param_2 + 0x30) + 0x10 + lVar2;
        if (((*(longlong *)(lVar1 + 8) != lVar1) ||
            ((lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + lVar2),
             ((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar1 + 0x18) == 0xc))
            )) || (((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0xf &&
                    (*(int *)(lVar1 + 0x18) == 0xd)) ||
                   ((((byte)*(undefined4 *)(lVar1 + 0x10) & 0x1f) == 0x10 &&
                    (*(int *)(lVar1 + 0x18) == 6)))))) {
          *param_1 = 1;
        }
        lVar2 = lVar2 + 0x20;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  case 8:
    if (*(longlong *)(param_2 + 0xd0) != param_2 + 200) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0xb8);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 9:
    if (*(longlong *)(param_2 + 0xe8) != param_2 + 0xe0) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0xd0);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 10:
    if (*(longlong *)(param_2 + 0x68) != param_2 + 0x60) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x50);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 0xf:
    if (*(longlong *)(param_2 + 0xa0) != param_2 + 0x98) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x88);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 0x10:
    break;
  case 0x11:
    if (*(longlong *)(param_2 + 0x80) != param_2 + 0x78) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x68);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 0x12:
    if (*(longlong *)(param_2 + 0xe0) != param_2 + 0xd8) {
      *param_1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 200);
    if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 0x13:
    break;
  case 0x14:
    if (*(longlong *)(param_2 + 0x70) == param_2 + 0x68) {
      lVar2 = *(longlong *)(param_2 + 0x58);
      if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc)
           ) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf &&
                 (*(int *)(lVar2 + 0x18) == 0xd)))) ||
         ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar2 + 0x18) == 6))))
      {
        *param_1 = 1;
      }
    }
    else {
      *param_1 = 1;
    }
    if ((((*(longlong *)(param_2 + 0x90) != param_2 + 0x88) ||
         ((lVar2 = *(longlong *)(param_2 + 0x78),
          ((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xc))))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    return;
  case 0x15:
    if (*(longlong *)(param_2 + 0x80) == param_2 + 0x78) {
      lVar2 = *(longlong *)(param_2 + 0x68);
      if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc)
           ) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf &&
                 (*(int *)(lVar2 + 0x18) == 0xd)))) ||
         ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar2 + 0x18) == 6))))
      {
        *param_1 = 1;
      }
    }
    else {
      *param_1 = 1;
    }
    if ((((*(longlong *)(param_2 + 0xa0) != param_2 + 0x98) ||
         ((lVar2 = *(longlong *)(param_2 + 0x88),
          ((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xc))))
        || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd))
           )) || ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 &&
                  (*(int *)(lVar2 + 0x18) == 6)))) {
      *param_1 = 1;
    }
    if (((*(longlong *)(param_2 + 0xc0) != param_2 + 0xb8) ||
        ((lVar2 = *(longlong *)(param_2 + 0xa8), ((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf
         && (*(int *)(lVar2 + 0x18) == 0xc)))) ||
       (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd)) ||
        ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar2 + 0x18) == 6))))))
    {
      *param_1 = 1;
    }
    return;
  }
  if (*(longlong *)(param_2 + 0x70) != param_2 + 0x68) {
    *param_1 = 1;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x58);
  if ((((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf) && (*(int *)(lVar2 + 0x18) == 0xc)) ||
      ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0xf && (*(int *)(lVar2 + 0x18) == 0xd)))) ||
     ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) == 0x10 && (*(int *)(lVar2 + 0x18) == 6)))) {
    *param_1 = 1;
  }
  return;
}



// FUNCTION 143617040 FUN_143617040 body=506 status=ok
// SIG undefined FUN_143617040(void)

void FUN_143617040(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  case 1:
    lVar3 = 0;
    if (*(uint *)(param_2 + 0xe0) != 0) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0xe0);
      lVar2 = lVar3;
      do {
        lVar1 = *(longlong *)(param_2 + 0xf0) + 0x10 + lVar2;
        if (*(longlong *)(lVar1 + 8) != lVar1) {
          *param_1 = 1;
        }
        lVar2 = lVar2 + 0x20;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (*(uint *)(param_2 + 0xe4) != 0) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0xe4);
      lVar2 = lVar3;
      do {
        lVar1 = *(longlong *)(param_2 + 0xf8) + 0x10 + lVar2;
        if (*(longlong *)(lVar1 + 8) != lVar1) {
          *param_1 = 1;
        }
        lVar2 = lVar2 + 0x20;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (*(uint *)(param_2 + 0xe8) != 0) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0xe8);
      do {
        lVar2 = *(longlong *)(param_2 + 0x100) + 0x10 + lVar3;
        if (*(longlong *)(lVar2 + 8) != lVar2) {
          *param_1 = 1;
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  case 2:
    if (*(longlong *)(param_2 + 0x30) != param_2 + 0x28) {
      *param_1 = 1;
      return;
    }
    break;
  case 3:
    if (*(longlong *)(param_2 + 0x38) != param_2 + 0x30) {
      *param_1 = 1;
      return;
    }
    break;
  case 7:
    if (*(uint *)(param_2 + 0x1c) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x1c);
      do {
        lVar2 = *(longlong *)(param_2 + 0x30) + 0x10 + lVar3;
        if (*(longlong *)(lVar2 + 8) != lVar2) {
          *param_1 = 1;
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  case 8:
    if (*(longlong *)(param_2 + 0xd0) != param_2 + 200) {
      *param_1 = 1;
      return;
    }
    break;
  case 9:
    if (*(longlong *)(param_2 + 0xe8) != param_2 + 0xe0) {
      *param_1 = 1;
      return;
    }
    break;
  case 10:
    if (*(longlong *)(param_2 + 0x68) != param_2 + 0x60) {
      *param_1 = 1;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)(param_2 + 0xa0) != param_2 + 0x98) {
      *param_1 = 1;
      return;
    }
    break;
  case 0x10:
  case 0x13:
    if (*(longlong *)(param_2 + 0x70) != param_2 + 0x68) {
      *param_1 = 1;
      return;
    }
    break;
  case 0x11:
    if (*(longlong *)(param_2 + 0x80) != param_2 + 0x78) {
      *param_1 = 1;
      return;
    }
    break;
  case 0x12:
    if (*(longlong *)(param_2 + 0xe0) != param_2 + 0xd8) {
      *param_1 = 1;
      return;
    }
    break;
  case 0x14:
    if (*(longlong *)(param_2 + 0x70) != param_2 + 0x68) {
      *param_1 = 1;
    }
    if (*(longlong *)(param_2 + 0x90) != param_2 + 0x88) {
      *param_1 = 1;
      return;
    }
    break;
  case 0x15:
    if (*(longlong *)(param_2 + 0x80) != param_2 + 0x78) {
      *param_1 = 1;
    }
    if (*(longlong *)(param_2 + 0xa0) != param_2 + 0x98) {
      *param_1 = 1;
    }
    if (*(longlong *)(param_2 + 0xc0) != param_2 + 0xb8) {
      *param_1 = 1;
    }
    return;
  }
  return;
}



// FUNCTION 143617190 FUN_143617190 body=132 status=ok
// SIG undefined FUN_143617190(void)

void FUN_143617190(undefined8 param_1,longlong param_2)

{
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  default:
    return;
  case 4:
    FUN_143617280();
    return;
  case 5:
    FUN_1436174c0();
    return;
  case 6:
  case 0xc:
    Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x28);
    return;
  case 7:
    Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x40);
    return;
  case 8:
    FUN_1436174f0();
    return;
  case 9:
    FUN_1436175c0();
    return;
  case 10:
    FUN_1436176a0();
    return;
  case 0xb:
    FUN_143617280();
    return;
  case 0xd:
    FUN_143617440();
    return;
  case 0xe:
    FUN_143617750();
    return;
  case 0xf:
    FUN_143617440();
    return;
  case 0x10:
  case 0x13:
    Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x38);
    return;
  case 0x11:
    FUN_143617440();
    return;
  case 0x12:
    FUN_143617470();
    return;
  case 0x14:
    FUN_1436177b0();
    return;
  case 0x15:
    FUN_143617440();
    return;
  case 0x17:
    FUN_143617280();
    return;
  }
}



// FUNCTION 143617280 FUN_143617280 body=439 status=ok
// SIG undefined FUN_143617280(void)

void FUN_143617280(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x50);
  lVar5 = 0;
  if (*(uint *)(param_2 + 0x18) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x18);
    lVar4 = lVar5;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x38) + lVar4);
      puVar1 = (undefined8 *)plVar3[3];
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        *(longlong *)plVar3[1] = *plVar3;
        lVar2 = plVar3[2];
        *plVar3 = -1;
        plVar3[1] = -1;
        plVar3[3] = 0;
        if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar2 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      lVar4 = lVar4 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(uint *)(param_2 + 0x1c) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x1c);
    lVar4 = lVar5;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x40) + lVar4);
      puVar1 = (undefined8 *)plVar3[3];
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        *(longlong *)plVar3[1] = *plVar3;
        lVar2 = plVar3[2];
        *plVar3 = -1;
        plVar3[1] = -1;
        plVar3[3] = 0;
        if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar2 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      lVar4 = lVar4 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(uint *)(param_2 + 0x20) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x20);
    do {
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x48) + lVar5);
      puVar1 = (undefined8 *)plVar3[3];
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        *(longlong *)plVar3[1] = *plVar3;
        lVar4 = plVar3[2];
        *plVar3 = -1;
        plVar3[1] = -1;
        plVar3[3] = 0;
        if (((((byte)*(undefined4 *)(lVar4 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar4 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar4 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar4 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      lVar5 = lVar5 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 143617440 FUN_143617440 body=47 status=ok
// SIG undefined FUN_143617440(void)

void FUN_143617440(undefined8 param_1,longlong param_2)

{
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x28);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x48);
  return;
}



// FUNCTION 143617470 FUN_143617470 body=74 status=ok
// SIG undefined FUN_143617470(void)

void FUN_143617470(undefined8 param_1,longlong param_2)

{
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x28);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x48);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x68);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x88);
  return;
}



// FUNCTION 1436174c0 FUN_1436174c0 body=47 status=ok
// SIG undefined FUN_1436174c0(void)

void FUN_1436174c0(undefined8 param_1,longlong param_2)

{
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x38);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x58);
  return;
}



// FUNCTION 1436174f0 FUN_1436174f0 body=204 status=ok
// SIG undefined FUN_1436174f0(void)

void FUN_1436174f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x38);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x58);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x78);
  if (*(uint *)(param_2 + 0x30) != 0) {
    plVar3 = (longlong *)(param_2 + 0xf0);
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x30);
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(plVar3[-3] + 8) = plVar3[-2];
        *(longlong *)plVar3[-2] = plVar3[-3];
        lVar2 = plVar3[-1];
        plVar3[-3] = -1;
        plVar3[-2] = -1;
        *plVar3 = 0;
        if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar2 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      plVar3 = plVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1436175c0 FUN_1436175c0 body=220 status=ok
// SIG undefined FUN_1436175c0(void)

void FUN_1436175c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x30);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x50);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x70);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x90);
  if (*(uint *)(param_2 + 0x28) != 0) {
    plVar3 = (longlong *)(param_2 + 0x108);
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x28);
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(plVar3[-3] + 8) = plVar3[-2];
        *(longlong *)plVar3[-2] = plVar3[-3];
        lVar2 = plVar3[-1];
        plVar3[-3] = -1;
        plVar3[-2] = -1;
        *plVar3 = 0;
        if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar2 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      plVar3 = plVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1436176a0 FUN_1436176a0 body=174 status=ok
// SIG undefined FUN_1436176a0(void)

void FUN_1436176a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x30);
  if (*(uint *)(param_2 + 0x28) != 0) {
    plVar3 = (longlong *)(param_2 + 0x88);
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x28);
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        *(longlong *)(plVar3[-3] + 8) = plVar3[-2];
        *(longlong *)plVar3[-2] = plVar3[-3];
        lVar2 = plVar3[-1];
        plVar3[-3] = -1;
        plVar3[-2] = -1;
        *plVar3 = 0;
        if (((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0xf) ||
            (*(int *)(lVar2 + 0x18) != 0xb)) &&
           ((((byte)*(undefined4 *)(lVar2 + 0x10) & 0x1f) != 0x10 || (*(int *)(lVar2 + 0x18) != 7)))
           ) {
          FUN_143594910(local_res8,*puVar1);
        }
      }
      plVar3 = plVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143617750 FUN_143617750 body=89 status=ok
// SIG undefined FUN_143617750(void)

void FUN_143617750(undefined8 param_1,longlong param_2)

{
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x28);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x48);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x68);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x88);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0xa8);
  return;
}



// FUNCTION 1436177b0 FUN_1436177b0 body=47 status=ok
// SIG undefined FUN_1436177b0(void)

void FUN_1436177b0(undefined8 param_1,longlong param_2)

{
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x18);
  Scaleform::GFx::AS3::TR::RemoveUseConservativeVisitor::HandleUse(param_1,param_2 + 0x38);
  return;
}



// FUNCTION 1436177e0 Visit body=48 status=ok
// SIG undefined Visit(void)

undefined1
`Scaleform::GFx::AS3::MovieRoot::UnloadMovie'::`44'::TextFormatVisitor::Visit
          (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1433e0b90(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) == *(longlong *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143617810 FUN_143617810 body=138 status=ok
// SIG undefined FUN_143617810(void)

void FUN_143617810(longlong param_1)

{
  undefined1 local_res8 [32];
  uint local_38 [2];
  int *local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint *local_18;
  
  local_18 = *(uint **)(param_1 + 0x58);
  local_38[0] = *local_18;
  local_28 = local_18[4];
  uStack_24 = local_18[5];
  uStack_20 = local_18[6];
  uStack_1c = local_18[7];
  local_30 = *(int **)(local_18 + 2);
  local_18 = local_18 + -8;
  *(uint **)(param_1 + 0x58) = local_18;
  FUN_143593540(local_res8,*(undefined8 *)(param_1 + 0x10),local_18,local_18,local_38);
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143617887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1436178a0 FUN_1436178a0 body=41 status=ok
// SIG undefined FUN_1436178a0(void)

void FUN_1436178a0(longlong param_1)

{
  char local_18 [4];
  int local_14;
  int *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 + local_14;
  }
  return;
}



// FUNCTION 1436178d0 FUN_1436178d0 body=41 status=ok
// SIG undefined FUN_1436178d0(void)

void FUN_1436178d0(longlong param_1)

{
  char local_18 [4];
  uint local_14;
  uint *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 & local_14;
  }
  return;
}



// FUNCTION 143617900 FUN_143617900 body=53 status=ok
// SIG undefined FUN_143617900(void)

void FUN_143617900(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  uint local_res10 [6];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  pcVar2 = (char *)FUN_143590b70(uVar1,local_res8,local_res10);
  if (*pcVar2 != '\0') {
    FUN_1434f0780(uVar1,~local_res10[0]);
  }
  return;
}



// FUNCTION 143617940 FUN_143617940 body=41 status=ok
// SIG undefined FUN_143617940(void)

void FUN_143617940(longlong param_1)

{
  char local_18 [4];
  uint local_14;
  uint *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 | local_14;
  }
  return;
}



// FUNCTION 143617970 FUN_143617970 body=41 status=ok
// SIG undefined FUN_143617970(void)

void FUN_143617970(longlong param_1)

{
  char local_18 [4];
  uint local_14;
  uint *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 ^ local_14;
  }
  return;
}



// FUNCTION 1436179a0 FUN_1436179a0 body=117 status=ok
// SIG undefined FUN_1436179a0(void)

void FUN_1436179a0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  uVar3 = *puVar2 & 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar5 = *(longlong *)(puVar2 + 4) == 0;
    }
    else {
      if (uVar3 != 10) {
        return;
      }
      bVar5 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
    }
    if (!bVar5) {
      return;
    }
  }
  uVar4 = FUN_1435c8e40(local_18,0x3f1,param_1);
  FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143617a20 FUN_143617a20 body=171 status=ok
// SIG undefined FUN_143617a20(void)

void FUN_143617a20(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  double local_res8;
  char local_res10 [24];
  
  puVar1 = (uint *)((param_2 & 0xffffffff) * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar1 & 0x1f;
  if (uVar2 == 0) {
    local_res8 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar2 == 1) {
    if ((char)puVar1[4] == '\0') {
      local_res8 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res8 = 1.0;
    }
  }
  else if (uVar2 == 2) {
    local_res8 = (double)(int)puVar1[4];
  }
  else if (uVar2 == 3) {
    local_res8 = (double)puVar1[4];
  }
  else if (uVar2 == 4) {
    local_res8 = *(double *)(puVar1 + 4);
  }
  else {
    FUN_1435921c0(puVar1,local_res10,&local_res8);
    if (local_res10[0] == '\0') {
      return;
    }
  }
  FUN_1434f06a0(puVar1,SUB84(local_res8 - 1.0,0));
  return;
}



// FUNCTION 143617ad0 FUN_143617ad0 body=109 status=ok
// SIG undefined FUN_143617ad0(void)

void FUN_143617ad0(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar3 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar3 & 0x1f;
  if (uVar2 != 2) {
    if (uVar2 == 3) {
      *puVar3 = *puVar3 & 0xffffffe2 | 2;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_14,puVar3[4] - 1);
      *(undefined8 *)(puVar3 + 6) = uStack_10;
      return;
    }
    pcVar1 = (char *)FUN_143590b70(puVar3,local_res10,local_res8);
    if (*pcVar1 == '\0') {
      return;
    }
    FUN_1434f0780(puVar3,local_res8[0]);
  }
  puVar3[4] = puVar3[4] - 1;
  return;
}



// FUNCTION 143617b40 FUN_143617b40 body=109 status=ok
// SIG undefined FUN_143617b40(void)

void FUN_143617b40(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar3 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar3 & 0x1f;
  if (uVar2 == 2) {
    *puVar3 = *puVar3 & 0xffffffe3 | 3;
    *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_14,puVar3[4] - 1);
    *(undefined8 *)(puVar3 + 6) = uStack_10;
    return;
  }
  if (uVar2 != 3) {
    pcVar1 = (char *)FUN_143590eb0(puVar3,local_res10,local_res8);
    if (*pcVar1 == '\0') {
      return;
    }
    FUN_143614720(puVar3,local_res8[0]);
  }
  puVar3[4] = puVar3[4] - 1;
  return;
}



// FUNCTION 143617bb0 FUN_143617bb0 body=73 status=ok
// SIG undefined FUN_143617bb0(void)

void FUN_143617bb0(longlong param_1)

{
  longlong lVar1;
  char local_res8 [8];
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  FUN_14360f380(lVar1,local_res8,local_res10);
  if (local_res8[0] != '\0') {
    FUN_1434f06a0(lVar1,local_res10[0]);
    *(double *)(lVar1 + 0x10) = *(double *)(lVar1 + 0x10) - 1.0;
  }
  return;
}



// FUNCTION 143617c00 FUN_143617c00 body=54 status=ok
// SIG undefined FUN_143617c00(void)

void FUN_143617c00(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  pcVar2 = (char *)FUN_143590b70(lVar1,local_res8,local_res10);
  if (*pcVar2 != '\0') {
    FUN_1434f0780(lVar1,local_res10[0]);
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 143617c40 FUN_143617c40 body=49 status=ok
// SIG undefined FUN_143617c40(void)

void FUN_143617c40(longlong param_1)

{
  char local_28 [8];
  double local_20;
  double *local_18;
  
  FUN_14360a070(local_28,param_1 + 0x58);
  if (local_28[0] != '\0') {
    *local_18 = *local_18 / local_20;
  }
  return;
}



// FUNCTION 143617c80 FUN_143617c80 body=172 status=ok
// SIG undefined FUN_143617c80(void)

void FUN_143617c80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong local_res8;
  
  uVar2 = FUN_1435ba6d0(param_2,param_3);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
  }
  puVar3 = (ulonglong *)(param_1 + 0x2b0);
  if (&local_res8 != puVar3) {
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar1 - 1;
      }
    }
    *puVar3 = uVar2;
  }
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  return;
}



// FUNCTION 143617d30 FUN_143617d30 body=236 status=ok
// SIG undefined FUN_143617d30(void)

bool FUN_143617d30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar4 + -0x20);
  if ((param_2 == 2) || (param_2 == 3)) {
    bVar6 = *(int *)(lVar4 + -0x10) == *(int *)(lVar4 + 0x10);
  }
  else {
    if (param_2 != 4) {
      if (param_2 == 10) {
        FUN_1434f05f0(puVar2,*(longlong *)(lVar4 + -0x10) == *(longlong *)(lVar4 + 0x10));
        FUN_143611f90(plVar1);
        return false;
      }
      pcVar5 = (char *)FUN_1435929f0(local_res10,local_res8,puVar2,lVar4);
      cVar3 = *pcVar5;
      FUN_1434f05f0(puVar2,local_res8[0]);
      FUN_143611f90(plVar1);
      return cVar3 == '\0';
    }
    if (*(double *)(lVar4 + -0x10) == *(double *)(lVar4 + 0x10)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
  }
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar4 + -0x10) = CONCAT71(uStack_17,bVar6);
  *(undefined8 *)(lVar4 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return false;
}



// FUNCTION 143617e20 FUN_143617e20 body=376 status=ok
// SIG undefined FUN_143617e20(void)

void FUN_143617e20(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  int *local_20;
  undefined8 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  uVar4 = (uint)param_2 & 2;
  uVar6 = param_2 - uVar4;
  if ((param_2 & 2) == 0) {
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
    }
    local_28[0] = 0xc;
    uStack_10 = uStack_30;
    uStack_c = uStack_2c;
  }
  else {
    uVar6 = CONCAT44(local_18._4_4_,(undefined4)local_18);
    if (uVar4 == 2) {
      FUN_1434ae820(local_28);
      uVar6 = CONCAT44(local_18._4_4_,(undefined4)local_18);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  puVar5 = (uint *)(lVar2 + 0x20);
  *(uint **)(param_1 + 0x58) = puVar5;
  if (puVar5 != (uint *)0x0) {
    *puVar5 = local_28[0];
    *(int **)(lVar2 + 0x28) = local_20;
    *(ulonglong *)(lVar2 + 0x30) = uVar6;
    *(uint *)(lVar2 + 0x38) = uStack_10;
    *(undefined4 *)(lVar2 + 0x3c) = uStack_c;
    uVar4 = local_28[0] & 0x1f;
    if (9 < uVar4) {
      if ((local_28[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
        }
        else if (10 < uVar4) {
          if (uVar4 < 0xd) {
            if (uVar6 != 0) {
              *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
              *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) & 0x8fffffff;
            }
          }
          else if ((uVar4 < 0xf) && (lVar2 = CONCAT44(uStack_c,uStack_10), lVar2 != 0)) {
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) & 0x8fffffff;
          }
        }
      }
      else {
        *local_20 = *local_20 + 1;
      }
    }
  }
  uVar4 = local_28[0] & 0x1f;
  if (9 < uVar4) {
    local_18 = uVar6;
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(uVar6 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar3 = uVar6;
        if ((uVar4 != 0xb) && (uVar4 != 0xc)) {
          if (1 < uVar4 - 0xd) {
            return;
          }
          uVar6 = CONCAT44(uStack_c,uStack_10);
          uVar3 = (ulonglong)uStack_10;
        }
        if ((((uVar3 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
          return;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143617fa0 FUN_143617fa0 body=122 status=ok
// SIG undefined FUN_143617fa0(void)

void FUN_143617fa0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  FUN_14360e8c0(param_1,lVar2);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  uVar1 = param_2 - 1;
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (((longlong)uVar1 < 0) || (uVar1 < *(ulonglong *)(lVar4 + 0x28))) {
    lVar4 = FUN_1434ef150(*(undefined8 *)(lVar4 + 0x30));
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x38) + 0x10 +
            ((uVar1 & 0xffffffff) - *(ulonglong *)(lVar4 + 0x28)) * 0x40;
  }
  FUN_1435ab950(lVar4,local_res8,lVar2,lVar3);
  return;
}



// FUNCTION 143618020 FUN_143618020 body=183 status=ok
// SIG undefined FUN_143618020(void)

void FUN_143618020(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x108) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(longlong *)(param_1 + 0x108) - 1;
    uVar3 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar3 >> 6) * 8) + 0x38 +
             (ulonglong)((uint)uVar3 & 0x3f) * 0xa0);
  }
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  puVar2 = (undefined4 *)(lVar1 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0xc;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    local_18 = (undefined4)uVar3;
    uStack_14 = (undefined4)(uVar3 >> 0x20);
    *(undefined4 *)(lVar1 + 0x30) = local_18;
    *(undefined4 *)(lVar1 + 0x34) = uStack_14;
    *(undefined4 *)(lVar1 + 0x38) = uStack_10;
    *(undefined4 *)(lVar1 + 0x3c) = uStack_c;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((uVar3 & 1) == 0) && (uVar3 != 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880();
    return;
  }
  return;
}



// FUNCTION 1436180e0 FUN_1436180e0 body=485 status=ok
// SIG undefined FUN_1436180e0(void)

void FUN_1436180e0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_68 [8];
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48 [2];
  int *local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint *local_28;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  local_48[0] = *puVar3;
  local_40 = *(int **)(puVar3 + 2);
  local_38 = puVar3[4];
  uStack_34 = puVar3[5];
  uStack_30 = puVar3[6];
  uStack_2c = puVar3[7];
  local_28 = puVar3 + -8;
  *(uint **)(param_1 + 0x58) = local_28;
  uVar2 = *local_28;
  uVar7 = uVar2 & 0x1f;
  if (uVar7 == 0) {
LAB_143618250:
    uVar8 = FUN_1435c8e40(local_68,0x3f1,param_1);
    FUN_1435ccf60(param_1,uVar8,&DAT_145b155b0);
    piVar4 = (int *)(local_60 + 0x18);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (uVar7 == 0xc) {
      bVar9 = *(longlong *)(puVar3 + -4) == 0;
LAB_143618140:
      if (bVar9) goto LAB_143618250;
    }
    else if (uVar7 == 10) {
      bVar9 = *(longlong *)(puVar3 + -4) == *(longlong *)(*(longlong *)(puVar3 + -4) + 8) + 0x80;
      goto LAB_143618140;
    }
    local_58 = puVar3[-4];
    uStack_54 = puVar3[-3];
    uStack_50 = puVar3[-2];
    uStack_4c = puVar3[-1];
    piVar4 = *(int **)(puVar3 + -6);
    *local_28 = 0;
    local_res10[0] = 0;
    FUN_143590eb0(local_48,local_res8,local_res10);
    plVar5 = (longlong *)CONCAT44(uStack_54,local_58);
    (**(code **)(*plVar5 + 0x30))(plVar5,local_res8,local_res10[0],local_28);
    uVar7 = uVar2 & 0x1f;
    if (9 < uVar7) {
      if ((uVar2 >> 9 & 1) == 0) {
        if (uVar7 == 10) {
          plVar1 = plVar5 + 3;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            FUN_14335f920(plVar5);
          }
        }
        else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
          if (((local_58 & 1) == 0) && ((*(uint *)(plVar5 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) - 1;
            FUN_1434ef880(plVar5);
          }
        }
        else if ((((uVar7 - 0xd < 2) && ((uStack_50 & 1) == 0)) &&
                 (lVar6 = CONCAT44(uStack_4c,uStack_50), lVar6 != 0)) &&
                ((*(uint *)(lVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
        }
      }
    }
  }
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1436182d0 FUN_1436182d0 body=283 status=ok
// SIG undefined FUN_1436182d0(void)

bool FUN_1436182d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar6 + -0x20);
  if (param_2 == 2) {
    bVar8 = *(int *)(lVar6 + 0x10) <= *(int *)(lVar6 + -0x10);
  }
  else if (param_2 == 3) {
    bVar8 = *(uint *)(lVar6 + 0x10) <= *(uint *)(lVar6 + -0x10);
  }
  else {
    if (param_2 != 4) {
      pcVar7 = (char *)FUN_143593d70(local_res8,local_res10,puVar2,lVar6);
      cVar5 = *pcVar7;
      FUN_1434f05f0(puVar2,local_res10[0] == 2);
      FUN_143611f90(plVar1);
      return cVar5 == '\0';
    }
    dVar3 = *(double *)(lVar6 + -0x10);
    if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar3 & 0xfffffffffffff) == 0)) {
      dVar4 = *(double *)(lVar6 + 0x10);
      if (((((ulonglong)dVar4 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
          (((ulonglong)dVar4 & 0xfffffffffffff) == 0)) && (dVar4 <= dVar3)) {
        bVar8 = true;
        goto LAB_1436183c7;
      }
    }
    bVar8 = false;
  }
LAB_1436183c7:
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar6 + -0x10) = CONCAT71(uStack_17,bVar8);
  *(undefined8 *)(lVar6 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return false;
}



// FUNCTION 1436183f0 FUN_1436183f0 body=280 status=ok
// SIG undefined FUN_1436183f0(void)

bool FUN_1436183f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar6 + -0x20);
  if (param_2 == 2) {
    bVar7 = *(int *)(lVar6 + 0x10) < *(int *)(lVar6 + -0x10);
  }
  else if (param_2 == 3) {
    bVar7 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar6 + -0x10);
  }
  else {
    if (param_2 != 4) {
      pcVar8 = (char *)FUN_143593d70(local_res8,local_res10,lVar6,puVar2);
      cVar5 = *pcVar8;
      FUN_1434f05f0(puVar2,local_res10[0] == 1);
      FUN_143611f90(plVar1);
      return cVar5 == '\0';
    }
    dVar3 = *(double *)(lVar6 + -0x10);
    if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar3 & 0xfffffffffffff) == 0)) {
      dVar4 = *(double *)(lVar6 + 0x10);
      if (((((ulonglong)dVar4 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
          (((ulonglong)dVar4 & 0xfffffffffffff) == 0)) && (dVar4 < dVar3)) {
        bVar7 = true;
        goto LAB_1436184e4;
      }
    }
    bVar7 = false;
  }
LAB_1436184e4:
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar6 + -0x10) = CONCAT71(uStack_17,bVar7);
  *(undefined8 *)(lVar6 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return false;
}



// FUNCTION 143618510 FUN_143618510 body=240 status=ok
// SIG undefined FUN_143618510(void)

undefined4 FUN_143618510(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  char local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar4 = 0;
  param_2 = param_2 >> 8;
  if (param_2 == 2) {
    bVar5 = *(int *)(lVar2 + -0x10) == *(int *)(lVar2 + 0x10);
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) {
        if (*(double *)(lVar2 + -0x10) == *(double *)(lVar2 + 0x10)) {
          uVar4 = param_3;
        }
        *plVar1 = *plVar1 + -0x40;
        return uVar4;
      }
      if (param_2 == 10) {
        if (*(longlong *)(lVar2 + -0x10) != *(longlong *)(lVar2 + 0x10)) {
          param_3 = uVar4;
        }
        FUN_143611c50(plVar1);
        return param_3;
      }
      pcVar3 = (char *)FUN_1435929f0(local_res10,local_res8,lVar2 + -0x20,lVar2);
      if ((*pcVar3 != '\0') && (local_res8[0] != '\0')) {
        uVar4 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar4;
    }
    bVar5 = *(int *)(lVar2 + -0x10) == *(int *)(lVar2 + 0x10);
  }
  if (!bVar5) {
    param_3 = uVar4;
  }
  *plVar1 = *plVar1 + -0x40;
  return param_3;
}



// FUNCTION 143618600 FUN_143618600 body=77 status=ok
// SIG undefined FUN_143618600(void)

undefined4 FUN_143618600(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar3 = FUN_1435909c0(lVar2);
  FUN_1434f05f0(lVar2,uVar3);
  cVar1 = *(char *)(lVar2 + 0x10);
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
  uVar4 = 0;
  if (cVar1 == '\0') {
    uVar4 = param_2;
  }
  return uVar4;
}



// FUNCTION 143618650 FUN_143618650 body=258 status=ok
// SIG undefined FUN_143618650(void)

undefined4 FUN_143618650(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar7 = 0;
  param_2 = param_2 >> 8;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + -0x10) < *(int *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + -0x10) < *(uint *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] == 2)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) &&
       (uVar5 = 0, dVar3 <= dVar2)) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618760 FUN_143618760 body=257 status=ok
// SIG undefined FUN_143618760(void)

undefined4 FUN_143618760(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  uVar7 = 0;
  lVar4 = *plVar1;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + -0x10) <= *(int *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + -0x10) <= *(uint *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] == 1)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) && (uVar5 = 0, dVar3 < dVar2)
       ) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618870 FUN_143618870 body=257 status=ok
// SIG undefined FUN_143618870(void)

undefined4 FUN_143618870(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  uVar7 = 0;
  lVar4 = *plVar1;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + 0x10) < *(int *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + 0x10) < *(uint *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] == 2)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) &&
       (uVar5 = 0, dVar2 <= dVar3)) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618980 FUN_143618980 body=258 status=ok
// SIG undefined FUN_143618980(void)

undefined4 FUN_143618980(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar7 = 0;
  param_2 = param_2 >> 8;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + 0x10) <= *(int *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + 0x10) <= *(uint *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] == 1)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) && (uVar5 = 0, dVar2 < dVar3)
       ) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618a90 FUN_143618a90 body=240 status=ok
// SIG undefined FUN_143618a90(void)

undefined4 FUN_143618a90(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  char local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar4 = 0;
  param_2 = param_2 >> 8;
  if (param_2 == 2) {
    bVar5 = *(int *)(lVar2 + -0x10) == *(int *)(lVar2 + 0x10);
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) {
        if (*(double *)(lVar2 + -0x10) != *(double *)(lVar2 + 0x10)) {
          uVar4 = param_3;
        }
        *plVar1 = *plVar1 + -0x40;
        return uVar4;
      }
      if (param_2 == 10) {
        if (*(longlong *)(lVar2 + -0x10) == *(longlong *)(lVar2 + 0x10)) {
          param_3 = uVar4;
        }
        FUN_143611c50(plVar1);
        return param_3;
      }
      pcVar3 = (char *)FUN_1435929f0(local_res10,local_res8,lVar2 + -0x20,lVar2);
      if ((*pcVar3 != '\0') && (local_res8[0] == '\0')) {
        uVar4 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar4;
    }
    bVar5 = *(int *)(lVar2 + -0x10) == *(int *)(lVar2 + 0x10);
  }
  if (bVar5) {
    param_3 = uVar4;
  }
  *plVar1 = *plVar1 + -0x40;
  return param_3;
}



// FUNCTION 143618b80 FUN_143618b80 body=258 status=ok
// SIG undefined FUN_143618b80(void)

undefined4 FUN_143618b80(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar7 = 0;
  param_2 = param_2 >> 8;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + 0x10) <= *(int *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + 0x10) <= *(uint *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] != 2)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) && (uVar5 = 0, dVar2 < dVar3)
       ) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618c90 FUN_143618c90 body=257 status=ok
// SIG undefined FUN_143618c90(void)

undefined4 FUN_143618c90(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  uVar7 = 0;
  lVar4 = *plVar1;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + 0x10) < *(int *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + 0x10) < *(uint *)(lVar4 + -0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] != 1)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) &&
       (uVar5 = 0, dVar2 <= dVar3)) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618da0 FUN_143618da0 body=257 status=ok
// SIG undefined FUN_143618da0(void)

undefined4 FUN_143618da0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  uVar7 = 0;
  lVar4 = *plVar1;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + -0x10) <= *(int *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + -0x10) <= *(uint *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] != 2)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) && (uVar5 = 0, dVar3 < dVar2)
       ) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618eb0 FUN_143618eb0 body=258 status=ok
// SIG undefined FUN_143618eb0(void)

undefined4 FUN_143618eb0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar7 = 0;
  param_2 = param_2 >> 8;
  uVar5 = param_3;
  if (param_2 == 2) {
    if (*(int *)(lVar4 + -0x10) < *(int *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else if (param_2 == 3) {
    if (*(uint *)(lVar4 + -0x10) < *(uint *)(lVar4 + 0x10)) {
      uVar5 = uVar7;
    }
  }
  else {
    if (param_2 != 4) {
      pcVar6 = (char *)FUN_143593d70(local_res8,local_res10);
      if ((*pcVar6 != '\0') && (local_res10[0] != 1)) {
        uVar7 = param_3;
      }
      FUN_143611c50(plVar1);
      return uVar7;
    }
    dVar2 = *(double *)(lVar4 + -0x10);
    if ((((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
         (uVar5 = uVar7, ((ulonglong)dVar2 & 0xfffffffffffff) == 0)) &&
        ((dVar3 = *(double *)(lVar4 + 0x10),
         ((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
         (uVar5 = uVar7, ((ulonglong)dVar3 & 0xfffffffffffff) == 0)))) &&
       (uVar5 = 0, dVar3 <= dVar2)) {
      uVar5 = param_3;
    }
  }
  *plVar1 = *plVar1 + -0x40;
  return uVar5;
}



// FUNCTION 143618fc0 FUN_143618fc0 body=77 status=ok
// SIG undefined FUN_143618fc0(void)

undefined4 FUN_143618fc0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar3 = FUN_1435909c0(lVar2);
  FUN_1434f05f0(lVar2,uVar3);
  cVar1 = *(char *)(lVar2 + 0x10);
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
  uVar4 = 0;
  if (cVar1 != '\0') {
    uVar4 = param_2;
  }
  return uVar4;
}



// FUNCTION 143619010 FUN_143619010 body=154 status=ok
// SIG undefined FUN_143619010(void)

undefined4 FUN_143619010(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  uint local_28 [2];
  int *local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  local_18 = puVar2[4];
  uStack_14 = puVar2[5];
  uStack_10 = puVar2[6];
  uStack_c = puVar2[7];
  uVar1 = *puVar2;
  piVar3 = *(int **)(puVar2 + 2);
  *(uint **)(param_1 + 0x58) = puVar2 + -8;
  local_28[0] = uVar1;
  local_20 = piVar3;
  cVar4 = FUN_1435c8c20(local_18,local_28,param_2);
  uVar5 = 0;
  if (cVar4 != '\0') {
    uVar5 = param_3;
  }
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1436190b0 FUN_1436190b0 body=171 status=ok
// SIG undefined FUN_1436190b0(void)

void FUN_1436190b0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  double local_res8;
  char local_res10 [24];
  
  puVar1 = (uint *)((param_2 & 0xffffffff) * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar1 & 0x1f;
  if (uVar2 == 0) {
    local_res8 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar2 == 1) {
    if ((char)puVar1[4] == '\0') {
      local_res8 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res8 = 1.0;
    }
  }
  else if (uVar2 == 2) {
    local_res8 = (double)(int)puVar1[4];
  }
  else if (uVar2 == 3) {
    local_res8 = (double)puVar1[4];
  }
  else if (uVar2 == 4) {
    local_res8 = *(double *)(puVar1 + 4);
  }
  else {
    FUN_1435921c0(puVar1,local_res10,&local_res8);
    if (local_res10[0] == '\0') {
      return;
    }
  }
  FUN_1434f06a0(puVar1,SUB84(local_res8 + 1.0,0));
  return;
}



// FUNCTION 143619160 FUN_143619160 body=109 status=ok
// SIG undefined FUN_143619160(void)

void FUN_143619160(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar3 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar3 & 0x1f;
  if (uVar2 != 2) {
    if (uVar2 == 3) {
      *puVar3 = *puVar3 & 0xffffffe2 | 2;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_14,puVar3[4] + 1);
      *(undefined8 *)(puVar3 + 6) = uStack_10;
      return;
    }
    pcVar1 = (char *)FUN_143590b70(puVar3,local_res10,local_res8);
    if (*pcVar1 == '\0') {
      return;
    }
    FUN_1434f0780(puVar3,local_res8[0]);
  }
  puVar3[4] = puVar3[4] + 1;
  return;
}



// FUNCTION 1436191d0 FUN_1436191d0 body=109 status=ok
// SIG undefined FUN_1436191d0(void)

void FUN_1436191d0(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar3 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar2 = *puVar3 & 0x1f;
  if (uVar2 == 2) {
    *puVar3 = *puVar3 & 0xffffffe3 | 3;
    *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_14,puVar3[4] + 1);
    *(undefined8 *)(puVar3 + 6) = uStack_10;
    return;
  }
  if (uVar2 != 3) {
    pcVar1 = (char *)FUN_143590eb0(puVar3,local_res10,local_res8);
    if (*pcVar1 == '\0') {
      return;
    }
    FUN_143614720(puVar3,local_res8[0]);
  }
  puVar3[4] = puVar3[4] + 1;
  return;
}



// FUNCTION 143619240 FUN_143619240 body=73 status=ok
// SIG undefined FUN_143619240(void)

void FUN_143619240(longlong param_1)

{
  longlong lVar1;
  char local_res8 [8];
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  FUN_14360f380(lVar1,local_res8,local_res10);
  if (local_res8[0] != '\0') {
    FUN_1434f06a0(lVar1,local_res10[0]);
    *(double *)(lVar1 + 0x10) = *(double *)(lVar1 + 0x10) + 1.0;
  }
  return;
}



// FUNCTION 143619290 FUN_143619290 body=54 status=ok
// SIG undefined FUN_143619290(void)

void FUN_143619290(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  pcVar2 = (char *)FUN_143590b70(lVar1,local_res8,local_res10);
  if (*pcVar2 != '\0') {
    FUN_1434f0780(lVar1,local_res10[0]);
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  }
  return;
}



// FUNCTION 1436192d0 FUN_1436192d0 body=251 status=ok
// SIG undefined FUN_1436192d0(void)

void FUN_1436192d0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  int *local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint *local_18;
  
  puVar4 = *(uint **)(param_1 + 0x58);
  uVar3 = *puVar4;
  puVar1 = puVar4 + -8;
  local_28 = puVar4[4];
  uStack_24 = puVar4[5];
  lVar6 = *(longlong *)(puVar4 + 4);
  uStack_20 = puVar4[6];
  uStack_1c = puVar4[7];
  piVar5 = *(int **)(puVar4 + 2);
  *(uint **)(param_1 + 0x58) = puVar1;
  local_38[0] = uVar3;
  local_30 = piVar5;
  local_18 = puVar1;
  if ((((uVar3 & 0x1f) == 0xc) && (lVar6 != 0)) &&
     ((*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x88) >> 5 & 1) != 0)) {
    uVar7 = FUN_1435c8c20(local_28,puVar1);
    FUN_1434f05f0(puVar1,uVar7);
  }
  else {
    uVar8 = FUN_1435c8e40(local_48,0x411,param_1);
    FUN_1435ccf60(param_1,uVar8,&DAT_145b155b0);
    piVar2 = (int *)(local_40 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  if (9 < (uVar3 & 0x1f)) {
    if ((uVar3 >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar5);
      }
    }
  }
  return;
}



// FUNCTION 1436193d0 FUN_1436193d0 body=290 status=ok
// SIG undefined FUN_1436193d0(void)

void FUN_1436193d0(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b7a928) && (_Init_thread_header(&DAT_146b7a928), DAT_146b7a928 == -1))
  {
    DAT_146b7a908 = 0;
    DAT_146b7a910 = (int *)0x0;
    atexit(FUN_143ec4e30);
    _Init_thread_footer(&DAT_146b7a928);
  }
  puVar4 = (undefined8 *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  if ((uint *)puVar4 != &DAT_146b7a908) {
    uVar2 = DAT_146b7a908 & 0x1f;
    if (9 < uVar2) {
      if ((DAT_146b7a908 >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          *(int *)(DAT_146b7a918 + 0x18) = *(int *)(DAT_146b7a918 + 0x18) + 1;
        }
        else if ((10 < uVar2) &&
                (((lVar3 = DAT_146b7a918, uVar2 < 0xd || (lVar3 = DAT_146b7a920, uVar2 < 0xf)) &&
                 (lVar3 != 0)))) {
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0x8fffffff;
        }
      }
      else {
        *DAT_146b7a910 = *DAT_146b7a910 + 1;
      }
    }
    FUN_143603d30(puVar4);
    piVar1 = DAT_146b7a910;
    *puVar4 = CONCAT44(uRam0000000146b7a90c,DAT_146b7a908);
    puVar4[1] = piVar1;
    lVar3 = DAT_146b7a920;
    puVar4[2] = DAT_146b7a918;
    puVar4[3] = lVar3;
  }
  return;
}



// FUNCTION 143619500 FUN_143619500 body=280 status=ok
// SIG undefined FUN_143619500(void)

bool FUN_143619500(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar6 + -0x20);
  if (param_2 == 2) {
    bVar7 = *(int *)(lVar6 + -0x10) <= *(int *)(lVar6 + 0x10);
  }
  else if (param_2 == 3) {
    bVar7 = *(uint *)(lVar6 + -0x10) <= *(uint *)(lVar6 + 0x10);
  }
  else {
    if (param_2 != 4) {
      pcVar8 = (char *)FUN_143593d70(local_res8,local_res10,lVar6,puVar2);
      cVar5 = *pcVar8;
      FUN_1434f05f0(puVar2,local_res10[0] == 2);
      FUN_143611f90(plVar1);
      return cVar5 == '\0';
    }
    dVar3 = *(double *)(lVar6 + -0x10);
    if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar3 & 0xfffffffffffff) == 0)) {
      dVar4 = *(double *)(lVar6 + 0x10);
      if (((((ulonglong)dVar4 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
          (((ulonglong)dVar4 & 0xfffffffffffff) == 0)) && (dVar3 <= dVar4)) {
        bVar7 = true;
        goto LAB_1436195f4;
      }
    }
    bVar7 = false;
  }
LAB_1436195f4:
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar6 + -0x10) = CONCAT71(uStack_17,bVar7);
  *(undefined8 *)(lVar6 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return false;
}



// FUNCTION 143619620 FUN_143619620 body=283 status=ok
// SIG undefined FUN_143619620(void)

bool FUN_143619620(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar6 + -0x20);
  if (param_2 == 2) {
    bVar8 = *(int *)(lVar6 + -0x10) < *(int *)(lVar6 + 0x10);
  }
  else if (param_2 == 3) {
    bVar8 = *(uint *)(lVar6 + -0x10) < *(uint *)(lVar6 + 0x10);
  }
  else {
    if (param_2 != 4) {
      pcVar7 = (char *)FUN_143593d70(local_res8,local_res10,puVar2,lVar6);
      cVar5 = *pcVar7;
      FUN_1434f05f0(puVar2,local_res10[0] == 1);
      FUN_143611f90(plVar1);
      return cVar5 == '\0';
    }
    dVar3 = *(double *)(lVar6 + -0x10);
    if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)dVar3 & 0xfffffffffffff) == 0)) {
      dVar4 = *(double *)(lVar6 + 0x10);
      if (((((ulonglong)dVar4 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
          (((ulonglong)dVar4 & 0xfffffffffffff) == 0)) && (dVar3 < dVar4)) {
        bVar8 = true;
        goto LAB_143619717;
      }
    }
    bVar8 = false;
  }
LAB_143619717:
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar6 + -0x10) = CONCAT71(uStack_17,bVar8);
  *(undefined8 *)(lVar6 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return false;
}



// FUNCTION 143619740 FUN_143619740 body=44 status=ok
// SIG undefined FUN_143619740(void)

void FUN_143619740(longlong param_1)

{
  char local_18 [4];
  byte local_14;
  int *local_10;
  
  FUN_143609ef0(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 << (local_14 & 0x1f);
  }
  return;
}



// FUNCTION 143619770 FUN_143619770 body=64 status=ok
// SIG undefined FUN_143619770(void)

void FUN_143619770(longlong param_1)

{
  double dVar1;
  char local_28 [8];
  double local_20;
  double *local_18;
  
  FUN_14360a070(local_28,param_1 + 0x58);
  if (local_28[0] != '\0') {
    dVar1 = _guard_xfg_dispatch_icall_nop(*local_18,local_20);
    *local_18 = dVar1;
  }
  return;
}



// FUNCTION 1436197b0 FUN_1436197b0 body=440 status=ok
// SIG undefined FUN_1436197b0(void)

void FUN_1436197b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_res8 [2];
  double local_res10;
  double local_res18;
  uint local_58 [2];
  int *local_50;
  double local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  local_res8[0] = 0;
  puVar1 = *(uint **)(param_1 + 0x58);
  local_res10 = 0.0;
  puVar4 = puVar1 + -8;
  uVar2 = *puVar1;
  piVar3 = *(int **)(puVar1 + 2);
  local_48 = *(double *)(puVar1 + 4);
  uStack_40 = *(undefined8 *)(puVar1 + 6);
  *(uint **)(param_1 + 0x58) = puVar4;
  uVar5 = *puVar4 & 0x1f;
  local_58[0] = uVar2;
  local_50 = piVar3;
  local_38 = puVar4;
  if (uVar5 == 0) {
    local_res18 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar5 == 1) {
    if ((char)puVar1[-4] == '\0') {
      local_res18 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res18 = 1.0;
    }
  }
  else if (uVar5 == 2) {
    local_res18 = (double)(int)puVar1[-4];
  }
  else if (uVar5 == 3) {
    local_res18 = (double)puVar1[-4];
  }
  else if (uVar5 == 4) {
    local_res18 = *(double *)(puVar1 + -4);
  }
  else {
    FUN_1435921c0(puVar4,local_res8,&local_res18);
    if ((char)local_res8[0] == '\0') goto LAB_143619922;
  }
  uVar5 = uVar2 & 0x1f;
  if (uVar5 == 0) {
    local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar5 == 1) {
    if (local_48._0_1_ == '\0') {
      local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res10 = 1.0;
    }
  }
  else if (uVar5 == 2) {
    local_res10 = (double)local_48._0_4_;
  }
  else if (uVar5 == 3) {
    local_res10 = (double)((ulonglong)local_48 & 0xffffffff);
  }
  else if (uVar5 == 4) {
    local_res10 = local_48;
  }
  else {
    FUN_1435921c0(local_58,local_res8,&local_res10);
    piVar3 = local_50;
    puVar4 = local_38;
    uVar2 = local_58[0];
    if ((char)local_res8[0] == '\0') goto LAB_143619922;
  }
  FUN_1434f06a0(puVar4,local_res18 * local_res10);
LAB_143619922:
  if (9 < ((byte)uVar2 & 0x1f)) {
    if ((uVar2 >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
      }
    }
  }
  return;
}



// FUNCTION 143619970 FUN_143619970 body=44 status=ok
// SIG undefined FUN_143619970(void)

void FUN_143619970(longlong param_1)

{
  char local_18 [4];
  int local_14;
  int *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 * local_14;
  }
  return;
}



// FUNCTION 1436199a0 FUN_1436199a0 body=72 status=ok
// SIG undefined FUN_1436199a0(void)

void FUN_1436199a0(longlong param_1)

{
  longlong lVar1;
  char local_res8 [8];
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  FUN_14360f380(lVar1,local_res8,local_res10);
  if (local_res8[0] != '\0') {
    FUN_1434f06a0(lVar1,local_res10[0]);
    *(ulonglong *)(lVar1 + 0x10) = *(ulonglong *)(lVar1 + 0x10) ^ 0x8000000000000000;
  }
  return;
}



// FUNCTION 1436199f0 FUN_1436199f0 body=59 status=ok
// SIG undefined FUN_1436199f0(void)

void FUN_1436199f0(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  pcVar2 = (char *)FUN_143590b70(lVar1,local_res8,local_res10);
  if (*pcVar2 != '\0') {
    FUN_1434f0780(lVar1,local_res10[0]);
    *(int *)(lVar1 + 0x10) = -*(int *)(lVar1 + 0x10);
  }
  return;
}



// FUNCTION 143619a30 FUN_143619a30 body=197 status=ok
// SIG undefined FUN_143619a30(void)

void FUN_143619a30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_1434bad30(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  puVar4 = (undefined4 *)(lVar2 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xc;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    local_18 = (undefined4)uVar3;
    uStack_14 = (undefined4)(uVar3 >> 0x20);
    *(undefined4 *)(lVar2 + 0x30) = local_18;
    *(undefined4 *)(lVar2 + 0x34) = uStack_14;
    *(undefined4 *)(lVar2 + 0x38) = uStack_10;
    *(undefined4 *)(lVar2 + 0x3c) = uStack_c;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((uVar3 & 1) == 0) && (uVar3 != 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143619b00 FUN_143619b00 body=45 status=ok
// SIG undefined FUN_143619b00(void)

void FUN_143619b00(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar2 = FUN_1435909c0(lVar1);
  FUN_1434f05f0(lVar1,uVar2);
  *(bool *)(lVar1 + 0x10) = *(char *)(lVar1 + 0x10) == '\0';
  return;
}



// FUNCTION 143619b30 FUN_143619b30 body=73 status=ok
// SIG undefined FUN_143619b30(void)

void FUN_143619b30(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
  local_18 = (uint)param_2;
  uStack_14 = (uint)((ulonglong)param_2 >> 0x20);
  **(undefined8 **)(param_1 + 0x58) = 0;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  puVar2 = *(uint **)(param_1 + 0x58);
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  *puVar2 = *puVar2 & 0xffffffea;
  *puVar2 = *puVar2 | 10;
  puVar2[4] = local_18;
  puVar2[5] = uStack_14;
  puVar2[6] = uStack_10;
  puVar2[7] = uStack_c;
  piVar1 = (int *)(param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(param_2);
    return;
  }
  return;
}



// FUNCTION 143619b80 FUN_143619b80 body=44 status=ok
// SIG undefined FUN_143619b80(void)

void FUN_143619b80(longlong param_1)

{
  char local_18 [4];
  byte local_14;
  int *local_10;
  
  FUN_143609ef0(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 >> (local_14 & 0x1f);
  }
  return;
}



// FUNCTION 143619bb0 FUN_143619bb0 body=75 status=ok
// SIG undefined FUN_143619bb0(void)

void FUN_143619bb0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  puVar11 = (undefined4 *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar1 = *puVar2;
  uVar3 = *(undefined8 *)(puVar2 + 2);
  uVar4 = puVar2[4];
  uVar5 = puVar2[5];
  uVar6 = puVar2[6];
  uVar7 = puVar2[7];
  *puVar2 = *puVar11;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar11 + 2);
  uVar8 = puVar11[5];
  uVar9 = puVar11[6];
  uVar10 = puVar11[7];
  puVar2[4] = puVar11[4];
  puVar2[5] = uVar8;
  puVar2[6] = uVar9;
  puVar2[7] = uVar10;
  *puVar11 = uVar1;
  *(undefined8 *)(puVar11 + 2) = uVar3;
  puVar11[4] = uVar4;
  puVar11[5] = uVar5;
  puVar11[6] = uVar6;
  puVar11[7] = uVar7;
  FUN_143611f90(param_1 + 0x58);
  return;
}



// FUNCTION 143619c00 FUN_143619c00 body=69 status=ok
// SIG undefined FUN_143619c00(void)

void FUN_143619c00(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  puVar3 = *(undefined4 **)(param_1 + 0x58);
  uVar1 = *puVar3;
  uVar4 = *(undefined8 *)(puVar3 + 2);
  uVar5 = puVar3[4];
  uVar6 = puVar3[5];
  uVar7 = puVar3[6];
  uVar8 = puVar3[7];
  *puVar3 = *(undefined4 *)(lVar2 + 0x20);
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined4 *)(lVar2 + 0x34);
  uVar10 = *(undefined4 *)(lVar2 + 0x38);
  uVar11 = *(undefined4 *)(lVar2 + 0x3c);
  puVar3[4] = *(undefined4 *)(lVar2 + 0x30);
  puVar3[5] = uVar9;
  puVar3[6] = uVar10;
  puVar3[7] = uVar11;
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined4 *)(lVar2 + 0x30) = uVar5;
  *(undefined4 *)(lVar2 + 0x34) = uVar6;
  *(undefined4 *)(lVar2 + 0x38) = uVar7;
  *(undefined4 *)(lVar2 + 0x3c) = uVar8;
  FUN_143611f90((undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 143619c50 FUN_143619c50 body=69 status=ok
// SIG undefined FUN_143619c50(void)

void FUN_143619c50(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  puVar3 = *(undefined4 **)(param_1 + 0x58);
  uVar1 = *puVar3;
  uVar4 = *(undefined8 *)(puVar3 + 2);
  uVar5 = puVar3[4];
  uVar6 = puVar3[5];
  uVar7 = puVar3[6];
  uVar8 = puVar3[7];
  *puVar3 = *(undefined4 *)(lVar2 + 0x40);
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar2 + 0x48);
  uVar9 = *(undefined4 *)(lVar2 + 0x54);
  uVar10 = *(undefined4 *)(lVar2 + 0x58);
  uVar11 = *(undefined4 *)(lVar2 + 0x5c);
  puVar3[4] = *(undefined4 *)(lVar2 + 0x50);
  puVar3[5] = uVar9;
  puVar3[6] = uVar10;
  puVar3[7] = uVar11;
  *(undefined4 *)(lVar2 + 0x40) = uVar1;
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  *(undefined4 *)(lVar2 + 0x50) = uVar5;
  *(undefined4 *)(lVar2 + 0x54) = uVar6;
  *(undefined4 *)(lVar2 + 0x58) = uVar7;
  *(undefined4 *)(lVar2 + 0x5c) = uVar8;
  FUN_143611f90((undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 143619ca0 FUN_143619ca0 body=69 status=ok
// SIG undefined FUN_143619ca0(void)

void FUN_143619ca0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  puVar3 = *(undefined4 **)(param_1 + 0x58);
  uVar1 = *puVar3;
  uVar4 = *(undefined8 *)(puVar3 + 2);
  uVar5 = puVar3[4];
  uVar6 = puVar3[5];
  uVar7 = puVar3[6];
  uVar8 = puVar3[7];
  *puVar3 = *(undefined4 *)(lVar2 + 0x60);
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar2 + 0x68);
  uVar9 = *(undefined4 *)(lVar2 + 0x74);
  uVar10 = *(undefined4 *)(lVar2 + 0x78);
  uVar11 = *(undefined4 *)(lVar2 + 0x7c);
  puVar3[4] = *(undefined4 *)(lVar2 + 0x70);
  puVar3[5] = uVar9;
  puVar3[6] = uVar10;
  puVar3[7] = uVar11;
  *(undefined4 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = uVar4;
  *(undefined4 *)(lVar2 + 0x70) = uVar5;
  *(undefined4 *)(lVar2 + 0x74) = uVar6;
  *(undefined4 *)(lVar2 + 0x78) = uVar7;
  *(undefined4 *)(lVar2 + 0x7c) = uVar8;
  FUN_143611f90((undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 143619cf0 FUN_143619cf0 body=189 status=ok
// SIG undefined FUN_143619cf0(void)

void FUN_143619cf0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x58);
  param_2 = param_2 >> 8;
  puVar2 = (uint *)(lVar3 + -0x20);
  if ((param_2 == 2) || (param_2 == 3)) {
    bVar5 = *(int *)(lVar3 + -0x10) == *(int *)(lVar3 + 0x10);
  }
  else {
    if (param_2 != 4) {
      if (param_2 == 10) {
        FUN_1434f05f0(puVar2,*(longlong *)(lVar3 + -0x10) == *(longlong *)(lVar3 + 0x10));
        FUN_143611f90(plVar1);
        return;
      }
      uVar4 = FUN_1435927d0(puVar2,lVar3);
      FUN_1434f05f0(puVar2,uVar4);
      FUN_143611f90(plVar1);
      return;
    }
    if (*(double *)(lVar3 + -0x10) == *(double *)(lVar3 + 0x10)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  *puVar2 = *puVar2 & 0xffffffe1;
  *puVar2 = *puVar2 | 1;
  *(ulonglong *)(lVar3 + -0x10) = CONCAT71(uStack_17,bVar5);
  *(undefined8 *)(lVar3 + -8) = uStack_10;
  *plVar1 = *plVar1 + -0x20;
  return;
}



// FUNCTION 143619db0 FUN_143619db0 body=440 status=ok
// SIG undefined FUN_143619db0(void)

void FUN_143619db0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_res8 [2];
  double local_res10;
  double local_res18;
  uint local_58 [2];
  int *local_50;
  double local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  local_res8[0] = 0;
  puVar1 = *(uint **)(param_1 + 0x58);
  local_res10 = 0.0;
  puVar4 = puVar1 + -8;
  uVar2 = *puVar1;
  piVar3 = *(int **)(puVar1 + 2);
  local_48 = *(double *)(puVar1 + 4);
  uStack_40 = *(undefined8 *)(puVar1 + 6);
  *(uint **)(param_1 + 0x58) = puVar4;
  uVar5 = *puVar4 & 0x1f;
  local_58[0] = uVar2;
  local_50 = piVar3;
  local_38 = puVar4;
  if (uVar5 == 0) {
    local_res18 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar5 == 1) {
    if ((char)puVar1[-4] == '\0') {
      local_res18 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res18 = 1.0;
    }
  }
  else if (uVar5 == 2) {
    local_res18 = (double)(int)puVar1[-4];
  }
  else if (uVar5 == 3) {
    local_res18 = (double)puVar1[-4];
  }
  else if (uVar5 == 4) {
    local_res18 = *(double *)(puVar1 + -4);
  }
  else {
    FUN_1435921c0(puVar4,local_res8,&local_res18);
    if ((char)local_res8[0] == '\0') goto LAB_143619f22;
  }
  uVar5 = uVar2 & 0x1f;
  if (uVar5 == 0) {
    local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (uVar5 == 1) {
    if (local_48._0_1_ == '\0') {
      local_res10 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      local_res10 = 1.0;
    }
  }
  else if (uVar5 == 2) {
    local_res10 = (double)local_48._0_4_;
  }
  else if (uVar5 == 3) {
    local_res10 = (double)((ulonglong)local_48 & 0xffffffff);
  }
  else if (uVar5 == 4) {
    local_res10 = local_48;
  }
  else {
    FUN_1435921c0(local_58,local_res8,&local_res10);
    piVar3 = local_50;
    puVar4 = local_38;
    uVar2 = local_58[0];
    if ((char)local_res8[0] == '\0') goto LAB_143619f22;
  }
  FUN_1434f06a0(puVar4,local_res18 - local_res10);
LAB_143619f22:
  if (9 < ((byte)uVar2 & 0x1f)) {
    if ((uVar2 >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
      }
    }
  }
  return;
}



// FUNCTION 143619f70 FUN_143619f70 body=41 status=ok
// SIG undefined FUN_143619f70(void)

void FUN_143619f70(longlong param_1)

{
  char local_18 [4];
  int local_14;
  int *local_10;
  
  FUN_143609e30(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 - local_14;
  }
  return;
}



// FUNCTION 143619fa0 FUN_143619fa0 body=92 status=ok
// SIG undefined FUN_143619fa0(void)

void FUN_143619fa0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_143611bd0(param_1 + 0xc0,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 0x28);
  FUN_1435cd480(param_1,(param_2 - **(longlong **)(param_3 + 0x10) >> 3) + -1,param_3);
  return;
}



// FUNCTION 14361a000 FUN_14361a000 body=56 status=ok
// SIG undefined FUN_14361a000(void)

void FUN_14361a000(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = FUN_1435c7bf0(param_1,local_res8,uVar2);
  FUN_143590250(uVar2,uVar3);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14361a040 FUN_14361a040 body=44 status=ok
// SIG undefined FUN_14361a040(void)

void FUN_14361a040(longlong param_1)

{
  char local_18 [4];
  byte local_14;
  uint *local_10;
  
  FUN_143609fb0(local_18,param_1 + 0x58);
  if (local_18[0] != '\0') {
    *local_10 = *local_10 >> (local_14 & 0x1f);
  }
  return;
}



// FUNCTION 14361a070 FUN_14361a070 body=141 status=ok
// SIG undefined FUN_14361a070(void)

void FUN_14361a070(undefined8 param_1,undefined4 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b7a928) {
    _Init_thread_header(&DAT_146b7a928);
    if (DAT_146b7a928 == -1) {
      DAT_146b7a908 = 0;
      DAT_146b7a910 = 0;
      atexit(FUN_143ec4e30);
      _Init_thread_footer(&DAT_146b7a928);
    }
  }
  FUObjectAnnotationDense<FLinkerIndexPair,0>::NotifyUObjectDeleted(param_1,&DAT_146b7a908,param_2);
  return;
}



// FUNCTION 14361a100 FUN_14361a100 body=312 status=ok
// SIG undefined FUN_14361a100(void)

void FUN_14361a100(longlong *param_1,longlong *param_2,ulonglong param_3)

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
  lVar5 = 0;
  local_res18[0] = 2;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar3 * 0x18 + 0x10,local_res18);
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
        uVar2 = Scaleform::FixedSizeHash<Scaleform::GFx::ASString>::operator()
                          (local_res18,lVar4 + 0x20);
        FUN_143605970(&local_res20,param_2,lVar4 + 0x20,uVar2);
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



// FUNCTION 14361a240 FUN_14361a240 body=331 status=ok
// SIG undefined FUN_14361a240(void)

void FUN_14361a240(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ba7a0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar3 * 0x18 + 0x10,local_res18);
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
        uVar2 = Scaleform::FixedSizeHash<Scaleform::GFx::ASString>::operator()
                          (local_res18,lVar4 + 0x20);
        FUN_143606040(&local_res20,param_2,lVar4 + 0x20,uVar2);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361a390 FUN_14361a390 body=407 status=ok
// SIG undefined FUN_14361a390(void)

void FUN_14361a390(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360aef0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar4 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar5 = lVar4;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x20;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar4;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143606190(&local_res20,param_2,lVar5 + 0x18,(longlong)*(int *)(lVar5 + 0x18));
        lVar1 = *(longlong *)(lVar5 + 0x20);
        if (lVar1 != 0) {
          if (*(char *)(lVar5 + 0x28) != '\0') {
            *(undefined1 *)(lVar5 + 0x28) = 0;
            FUN_14360ad20(lVar1);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
          }
          *(undefined8 *)(lVar5 + 0x20) = 0;
        }
        *(undefined1 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  local_res20 = (undefined8 *)0x0;
  FUN_14360aef0(&local_res20);
  return;
}



// FUNCTION 14361a530 FUN_14361a530 body=327 status=ok
// SIG undefined FUN_14361a530(void)

void FUN_14361a530(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  local_res18[0] = 0x155;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 4;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143606310(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361a680 FUN_14361a680 body=399 status=ok
// SIG undefined FUN_14361a680(void)

void FUN_14361a680(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360afc0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x155;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 4;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143606470(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x28);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x28) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361a810 FUN_14361a810 body=366 status=ok
// SIG undefined FUN_14361a810(void)

void FUN_14361a810(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b070();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x149;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar2 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar2 + lVar7);
        } while (lVar4 != 0);
        FUN_143606600(&local_res20,param_2,lVar7 + 0x20,lVar8);
        piVar1 = (int *)(*(longlong *)(lVar7 + 0x28) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361a980 FUN_14361a980 body=332 status=ok
// SIG undefined FUN_14361a980(void)

void FUN_14361a980(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432e0080();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 8;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143606790(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361aad0 FUN_14361aad0 body=295 status=ok
// SIG undefined FUN_14361aad0(void)

void FUN_14361aad0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
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
        puVar5 = (undefined8 *)(lVar1 + 0x18 + lVar3);
        FUN_1436068c0(&local_res20,param_2,puVar5,*puVar5);
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



// FUNCTION 14361ac00 FUN_14361ac00 body=328 status=ok
// SIG undefined FUN_14361ac00(void)

void FUN_14361ac00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 8;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_1436069d0(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361ad50 FUN_14361ad50 body=415 status=ok
// SIG undefined FUN_14361ad50(void)

void FUN_14361ad50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b100();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x156;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x28;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 0x10;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143606b00(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x30);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x30) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361aef0 FUN_14361aef0 body=428 status=ok
// SIG undefined FUN_14361aef0(void)

void FUN_14361aef0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1434e8840();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  lVar6 = 0;
  local_res18[0] = 2;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar4 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar5 = lVar6;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x28;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar6;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143606ca0(&local_res20,param_2,lVar5 + 0x20,
                      (uint)((*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x28) << 0x3c) >> 0x3c) ^
                      (*(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x38) + 0x1c) &
                      0xffffff) << 2 ^ *(uint *)(*(longlong *)(lVar5 + 0x20) + 0x1c) & 0xffffff);
        uVar2 = *(ulonglong *)(lVar5 + 0x28);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar5 + 0x28) = uVar2 - 1;
          }
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x20) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b0a0 FUN_14361b0a0 body=338 status=ok
// SIG undefined FUN_14361b0a0(void)

void FUN_14361b0a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b1b0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x14e;
  lVar4 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar5 = lVar4;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar4;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143606e60(&local_res20,param_2,lVar5 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x1c));
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b200 FUN_14361b200 body=399 status=ok
// SIG undefined FUN_14361b200(void)

void FUN_14361b200(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143561f90();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143607030(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x20);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x20) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b390 FUN_14361b390 body=333 status=ok
// SIG undefined FUN_14361b390(void)

void FUN_14361b390(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ef9e0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x149;
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
        FUN_143607210(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
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



// FUNCTION 14361b4e0 FUN_14361b4e0 body=436 status=ok
// SIG undefined FUN_14361b4e0(void)

void FUN_14361b4e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b240();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar4 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x30 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar5 = lVar4;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x30;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar4;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143607380(&local_res20,param_2,lVar5 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x1c));
        if (9 < ((byte)*(uint *)(lVar5 + 0x20) & 0x1f)) {
          if ((*(uint *)(lVar5 + 0x20) >> 9 & 1) == 0) {
            FUN_1435920c0(lVar5 + 0x20);
          }
          else {
            piVar1 = *(int **)(lVar5 + 0x28);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) & 0xfffffde0;
            *(undefined8 *)(lVar5 + 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x30) = 0;
            *(undefined8 *)(lVar5 + 0x38) = 0;
          }
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b6a0 FUN_14361b6a0 body=366 status=ok
// SIG undefined FUN_14361b6a0(void)

void FUN_14361b6a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143562100();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar2 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar2 + lVar7);
        } while (lVar4 != 0);
        FUN_143607520(&local_res20,param_2,lVar7 + 0x20,lVar8);
        piVar1 = (int *)(*(longlong *)(lVar7 + 0x20) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b810 FUN_14361b810 body=435 status=ok
// SIG undefined FUN_14361b810(void)

void FUN_14361b810(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  local_res20 = (undefined8 *)0x0;
  local_res18[0] = 0x15c;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar4;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        lVar3 = 0;
        switch(**(uint **)(lVar6 + 0x20) >> 3 & 0xf) {
        case 0:
        case 1:
        case 2:
        case 3:
          lVar3 = 0x10;
          lVar7 = 0x1505;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          lVar3 = 0x18;
          lVar7 = 0x1505;
          break;
        case 10:
          lVar3 = 0x10;
        default:
          lVar7 = 0x1505;
          goto joined_r0x00014361b940;
        }
        do {
          lVar1 = lVar3 + -1;
          lVar3 = lVar3 + -1;
          lVar7 = lVar7 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)*(uint **)(lVar6 + 0x20))
          ;
joined_r0x00014361b940:
        } while (lVar3 != 0);
        FUN_1436076b0(&local_res20,param_2,lVar6 + 0x20,lVar7);
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361b9f0 FUN_14361b9f0 body=321 status=ok
// SIG undefined FUN_14361b9f0(void)

void FUN_14361b9f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b2d0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res18[0] = 0x15c;
  local_res20 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,(lVar3 + 1) * 0x10,local_res18)
  ;
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar4 = lVar4 + 0x10;
    *(undefined8 *)(lVar4 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_143609030(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361bb40 FUN_14361bb40 body=337 status=ok
// SIG undefined FUN_14361bb40(void)

void FUN_14361bb40(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b2d0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x155;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,(lVar3 + 1) * 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar4 = lVar4 + 0x10;
    *(undefined8 *)(lVar4 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_1436091a0(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361bca0 FUN_14361bca0 body=399 status=ok
// SIG undefined FUN_14361bca0(void)

void FUN_14361bca0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b360();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  lVar6 = 0;
  local_res18[0] = 2;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*param_2 + 0x50))(param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143609310(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x20);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x20) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361be30 FUN_14361be30 body=415 status=ok
// SIG undefined FUN_14361be30(void)

void FUN_14361be30(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b360();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x155;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_1436094d0(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x20);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x20) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361bfd0 FUN_14361bfd0 body=415 status=ok
// SIG undefined FUN_14361bfd0(void)

void FUN_14361bfd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b360();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x155;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar6;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        lVar4 = 8;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143609690(&local_res20,param_2,lVar7 + 0x20,lVar8);
        uVar2 = *(ulonglong *)(lVar7 + 0x20);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar7 + 0x20) = uVar2 - 1;
          }
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361c170 FUN_14361c170 body=332 status=ok
// SIG undefined FUN_14361c170(void)

void FUN_14361c170(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14360b410();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x155;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,(lVar3 + 1) * 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar4 = lVar4 + 0x10;
    *(undefined8 *)(lVar4 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_143609890(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14361c2c0 FUN_14361c2c0 body=29 status=ok
// SIG undefined FUN_14361c2c0(void)

undefined4 FUN_14361c2c0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_1;
  uVar1 = FUN_14358f8b0(local_res8);
  return uVar1;
}



// FUNCTION 14361c2f0 FUN_14361c2f0 body=222 status=ok
// SIG undefined FUN_14361c2f0(void)

ulonglong FUN_14361c2f0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if ((((*puVar2 & 0xfffffffb) == 0) && (*(longlong *)(puVar2 + 4) == 0)) && (local_10 == 7)) {
      if (local_18 == "Boolean") {
LAB_14361c3b4:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"Boolean",7);
        puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) goto LAB_14361c3b4;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c3e0 FUN_14361c3e0 body=222 status=ok
// SIG undefined FUN_14361c3e0(void)

ulonglong FUN_14361c3e0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if ((((*puVar2 & 0xfffffffb) == 0) && (*(longlong *)(puVar2 + 4) == 0)) && (local_10 == 3)) {
      if (local_18 == "int") {
LAB_14361c4a4:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"int",3);
        puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) goto LAB_14361c4a4;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c4d0 FUN_14361c4d0 body=222 status=ok
// SIG undefined FUN_14361c4d0(void)

ulonglong FUN_14361c4d0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if ((((*puVar2 & 0xfffffffb) == 0) && (*(longlong *)(puVar2 + 4) == 0)) && (local_10 == 4)) {
      if (local_18 == "uint") {
LAB_14361c594:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"uint",4);
        puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) goto LAB_14361c594;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c5c0 FUN_14361c5c0 body=222 status=ok
// SIG undefined FUN_14361c5c0(void)

ulonglong FUN_14361c5c0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if ((((*puVar2 & 0xfffffffb) == 0) && (*(longlong *)(puVar2 + 4) == 0)) && (local_10 == 6)) {
      if (local_18 == "Number") {
LAB_14361c684:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"Number",6);
        puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) goto LAB_14361c684;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c6b0 FUN_14361c6b0 body=222 status=ok
// SIG undefined FUN_14361c6b0(void)

ulonglong FUN_14361c6b0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if ((((*puVar2 & 0xfffffffb) == 0) && (*(longlong *)(puVar2 + 4) == 0)) && (local_10 == 6)) {
      if (local_18 == "String") {
LAB_14361c774:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"String",6);
        puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) goto LAB_14361c774;
      }
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c7a0 FUN_14361c7a0 body=274 status=ok
// SIG undefined FUN_14361c7a0(void)

ulonglong FUN_14361c7a0(int *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong local_res8;
  char *local_18;
  longlong local_10;
  
  puVar2 = (uint *)((ulonglong)(uint)param_1[3] & 0xffffffffffffff03);
  if ((byte)puVar2 < 2) {
    local_res8 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res8 == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar1 = FUN_14358f8b0(&local_res8);
      FUN_14358f9b0(&local_18,&local_res8,(longlong)iVar1);
    }
    if ((longlong)*param_1 == 0) {
      puVar2 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if (((*puVar2 & 0xfffffffb) != 0) || (*(longlong *)(puVar2 + 4) != 0)) goto LAB_14361c8a5;
    if (local_10 == 3) {
      if (local_18 == "int") goto LAB_14361c898;
      if (local_18 == (char *)0x0) goto LAB_14361c8a5;
      iVar1 = strncmp(local_18,"int",3);
      puVar2 = (uint *)CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) goto LAB_14361c898;
    }
    if (local_10 == 4) {
      if (local_18 == "uint") {
LAB_14361c898:
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      if (local_18 != (char *)0x0) {
        iVar1 = strncmp(local_18,"uint",4);
        puVar2 = (uint *)CONCAT44(extraout_var_00,iVar1);
        if (iVar1 == 0) goto LAB_14361c898;
      }
    }
  }
LAB_14361c8a5:
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}



// FUNCTION 14361c8c0 FUN_14361c8c0 body=276 status=ok
// SIG undefined FUN_14361c8c0(void)

ulonglong FUN_14361c8c0(int *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_var;
  uint *puVar3;
  longlong local_res18 [2];
  char *local_18;
  longlong local_10;
  
  bVar1 = FUN_14361c7a0();
  if ((bVar1 == 0) && (((byte)param_1[3] & 3) < 2)) {
    local_res18[0] = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
    if (local_res18[0] == 0) {
      local_18 = "";
      local_10 = 0;
    }
    else {
      iVar2 = FUN_14358f8b0(local_res18);
      FUN_14358f9b0(&local_18,local_res18,(longlong)iVar2);
    }
    if ((longlong)*param_1 == 0) {
      puVar3 = (uint *)(param_2 + 0xa0);
    }
    else {
      puVar3 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
    }
    if (((*puVar3 & 0xfffffffb) == 0) && (*(longlong *)(puVar3 + 4) == 0)) {
      if (local_10 == 6) {
        if (local_18 == "Number") {
LAB_14361c99d:
          return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
        }
        if (local_18 != (char *)0x0) {
          iVar2 = strncmp(local_18,"Number",6);
          puVar3 = (uint *)CONCAT44(extraout_var,iVar2);
          if (iVar2 == 0) goto LAB_14361c99d;
        }
      }
      return (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return (ulonglong)bVar1;
}



// FUNCTION 14361c9e0 FUN_14361c9e0 body=336 status=ok
// SIG undefined FUN_14361c9e0(void)

ulonglong FUN_14361c9e0(int *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint *puVar3;
  longlong local_res18 [2];
  char *local_18;
  longlong local_10;
  
  bVar1 = FUN_14361c8c0();
  if ((bVar1 != 0) || (1 < ((byte)param_1[3] & 3))) {
LAB_14361cb1d:
    return (ulonglong)bVar1;
  }
  local_res18[0] = *(longlong *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)param_1[2] * 8);
  if (local_res18[0] == 0) {
    local_18 = "";
    local_10 = 0;
  }
  else {
    iVar2 = FUN_14358f8b0(local_res18);
    FUN_14358f9b0(&local_18,local_res18,(longlong)iVar2);
  }
  if ((longlong)*param_1 == 0) {
    puVar3 = (uint *)(param_2 + 0xa0);
  }
  else {
    puVar3 = (uint *)(*(longlong *)(param_2 + 0x58) + (longlong)*param_1 * 0x18);
  }
  if (((*puVar3 & 0xfffffffb) != 0) || (*(longlong *)(puVar3 + 4) != 0)) goto LAB_14361cb1d;
  if (local_10 == 7) {
    if (local_18 == "Boolean") goto LAB_14361caf9;
    if (local_18 == (char *)0x0) goto LAB_14361cb0b;
    iVar2 = strncmp(local_18,"Boolean",7);
    puVar3 = (uint *)CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) goto LAB_14361caf9;
  }
  if (local_10 == 6) {
    if (local_18 == "String") {
LAB_14361caf9:
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
    if (local_18 != (char *)0x0) {
      iVar2 = strncmp(local_18,"String",6);
      puVar3 = (uint *)CONCAT44(extraout_var_00,iVar2);
      if (iVar2 == 0) goto LAB_14361caf9;
    }
  }
LAB_14361cb0b:
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 14361cb40 FUN_14361cb40 body=84 status=ok
// SIG undefined FUN_14361cb40(void)

undefined8 * FUN_14361cb40(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if (local_res8[0] == 0) {
    param_2[1] = 0;
    *param_2 = &DAT_145af3922;
    return param_2;
  }
  iVar1 = FUN_14358f8b0(local_res8);
  FUN_14358f9b0(param_2,local_res8,(longlong)iVar1);
  return param_2;
}



// FUNCTION 14361cba0 FUN_14361cba0 body=131 status=ok
// SIG undefined FUN_14361cba0(void)

longlong FUN_14361cba0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 **)(param_1 + 0xa8) = &DAT_145af3922;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return param_1;
}



// FUNCTION 14361cc30 FUN_14361cc30 body=48 status=ok
// SIG undefined FUN_14361cc30(void)

undefined8 FUN_14361cc30(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = *(longlong *)(param_1 + 8) + (param_2 + -1) * 8;
    uVar1 = FUN_14358f900(local_res10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14361cc60 Read body=58 status=ok
// SIG undefined Read(void)

undefined8 Scaleform::GFx::AS3::Abc::Read(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  uVar2 = FUN_14358f8b0();
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar1 = *(undefined1 *)*param_1;
  puVar3 = (undefined1 *)*param_1 + 1;
  *param_1 = puVar3;
  *param_2 = uVar1;
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),-1 < *(int *)(param_2 + 4));
}



// FUNCTION 14361cca0 ReadMethodInfoSmallHeader body=47 status=ok
// SIG undefined ReadMethodInfoSmallHeader(void)

undefined4
Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14358f8b0();
  *param_2 = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[1] = uVar1;
  return 1;
}



// FUNCTION 14361cce0 FUN_14361cce0 body=169 status=ok
// SIG undefined FUN_14361cce0(void)

undefined8 FUN_14361cce0(longlong *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_14358f8b0();
  *param_2 = uVar2;
  uVar2 = FUN_14358f8b0(param_1);
  param_2[1] = uVar2;
  *(longlong *)(param_2 + 4) = *param_1;
  if (*param_2 != 0) {
    uVar4 = (ulonglong)*param_2;
    do {
      FUN_14358f8b0(param_1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_14358f8b0(param_1);
  bVar1 = *(byte *)*param_1;
  *param_1 = (longlong)((byte *)*param_1 + 1);
  *(byte *)(param_2 + 2) = bVar1;
  if ((bVar1 & 8) != 0) {
    uVar2 = FUN_14358f8b0(param_1);
    param_2[3] = uVar2;
    uVar3 = 0;
    *(longlong *)(param_2 + 6) = *param_1;
    if (uVar2 != 0) {
      do {
        FUN_14358f8b0(param_1);
        *param_1 = *param_1 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2[3]);
    }
  }
  if (0x7f < (byte)param_2[2]) {
    *(longlong *)(param_2 + 8) = *param_1;
  }
  return 1;
}



// FUNCTION 14361cd90 FUN_14361cd90 body=102 status=ok
// SIG undefined FUN_14361cd90(void)

undefined8 FUN_14361cd90(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_14358f8b0();
  if (uVar1 != 0) {
    FUN_14361cb40(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar1 * 8,&local_18);
  }
  *param_3 = (undefined4)local_18;
  param_3[1] = local_18._4_4_;
  param_3[2] = (undefined4)uStack_10;
  param_3[3] = uStack_10._4_4_;
  uVar2 = FUN_14358f8b0(param_1);
  param_3[4] = uVar2;
  return 1;
}



// FUNCTION 14361ce00 FUN_14361ce00 body=59 status=ok
// SIG undefined FUN_14361ce00(void)

bool FUN_14361ce00(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_14358f8b0();
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar1 = *(undefined1 *)*param_1;
  *param_1 = (undefined1 *)*param_1 + 1;
  *param_2 = uVar1;
  return -1 < *(int *)(param_2 + 4);
}



// FUNCTION 14361ce50 ReadTraitInfoHeader body=120 status=ok
// SIG undefined ReadTraitInfoHeader(void)

ulonglong Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_14358f8b0();
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar1 = *(undefined1 *)*param_1;
  puVar4 = (undefined1 *)*param_1 + 1;
  *param_1 = puVar4;
  *param_2 = uVar1;
  if (*(int *)(param_2 + 4) < 0) {
    return (ulonglong)puVar4 & 0xffffffffffffff00;
  }
  uVar2 = FUN_14358f8b0(param_1);
  *(undefined4 *)(param_2 + 8) = uVar2;
  iVar3 = FUN_14358f8b0(param_1);
  *(int *)(param_2 + 0xc) = iVar3;
  if ((-1 < *(int *)(param_2 + 8)) && (-1 < iVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14361ced0 FUN_14361ced0 body=196 status=ok
// SIG undefined FUN_14361ced0(void)

ulonglong FUN_14361ced0(undefined8 *param_1,byte *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res18;
  
  uVar5 = Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader();
  uVar6 = uVar5 & 0xff;
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  uVar5 = 0;
  if (((*param_2 & 0xf) == 0) || ((*param_2 & 0xf) == 6)) {
    iVar4 = FUN_14358f8b0(param_1);
    uVar6 = 1;
    if (iVar4 == 0) goto LAB_14361cf70;
    uVar1 = *(undefined1 *)*param_1;
    *param_1 = (undefined1 *)*param_1 + 1;
    cVar2 = FUN_14358f9d0();
    local_res18 = CONCAT31(local_res18._1_3_,uVar1);
    uVar6 = (ulonglong)(cVar2 != '\0');
    uVar5 = CONCAT44(iVar4,local_res18);
    *(ulonglong *)(param_2 + 0x10) = uVar5;
  }
  if ((char)uVar6 == '\0') {
    return uVar5 & 0xffffffffffffff00;
  }
LAB_14361cf70:
  if ((*param_2 & 0x40) != 0) {
    bVar3 = FUN_14361cfa0(param_1,param_2);
    uVar6 = (ulonglong)bVar3;
  }
  return uVar6;
}



// FUNCTION 14361cfa0 FUN_14361cfa0 body=64 status=ok
// SIG undefined FUN_14361cfa0(void)

undefined4 FUN_14361cfa0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_14358f8b0();
  *(uint *)(param_2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = *param_1;
  if (uVar1 != 0) {
    uVar2 = (ulonglong)uVar1;
    do {
      FUN_14358f8b0(param_1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 1;
}



// FUNCTION 14361cff0 FUN_14361cff0 body=233 status=ok
// SIG undefined FUN_14361cff0(void)

undefined8 FUN_14361cff0(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar4 = FUN_14358f8b0();
  *param_2 = uVar4;
  uVar8 = 0;
  *(undefined8 *)(param_2 + 2) = *param_1;
  while( true ) {
    if (uVar4 <= uVar8) {
      return 1;
    }
    iVar5 = FUN_14358f8b0(param_1);
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    if (iVar5 < 0) {
      return 0;
    }
    iVar5 = FUN_14358f8b0(param_1);
    iVar6 = FUN_14358f8b0(param_1);
    if (iVar5 < 0) {
      return 0;
    }
    if (iVar6 < 0) break;
    if ((((bVar1 & 0xf) == 0) || ((bVar1 & 0xf) == 6)) &&
       (iVar5 = FUN_14358f8b0(param_1), iVar5 != 0)) {
      uVar2 = *(undefined1 *)*param_1;
      *param_1 = (undefined1 *)*param_1 + 1;
      cVar3 = FUN_14358f9d0(uVar2);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    if (((bVar1 & 0x40) != 0) && (uVar7 = FUN_14358f8b0(param_1), uVar7 != 0)) {
      uVar9 = (ulonglong)uVar7;
      do {
        FUN_14358f8b0(param_1);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar8 = uVar8 + 1;
  }
  return 0;
}



// FUNCTION 14361d0e0 FUN_14361d0e0 body=71 status=ok
// SIG undefined FUN_14361d0e0(void)

undefined4 FUN_14361d0e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_14358f8b0();
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  cVar1 = FUN_14361cff0(param_1,param_2);
  if ((cVar1 != '\0') && (-1 < *(int *)(param_2 + 0x10))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14361d130 FUN_14361d130 body=66 status=ok
// SIG undefined FUN_14361d130(void)

undefined4 FUN_14361d130(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_14358f8b0();
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    FUN_14358f8b0(param_1);
  }
  return 1;
}



// FUNCTION 14361d180 ReadInstanceHeader body=113 status=ok
// SIG undefined ReadInstanceHeader(void)

char Scaleform::GFx::AS3::Abc::ReadInstanceHeader(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_14358f8b0();
  *(undefined4 *)(param_2 + 4) = uVar3;
  uVar3 = FUN_14358f8b0(param_1);
  *(undefined4 *)(param_2 + 8) = uVar3;
  bVar1 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  *param_2 = bVar1;
  if ((*(int *)(param_2 + 4) < 0) || (*(int *)(param_2 + 8) < 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if ((bVar1 & 8) != 0) {
    if (cVar2 != '\0') {
      uVar3 = FUN_14358f8b0(param_1);
      *(undefined4 *)(param_2 + 0xc) = uVar3;
      return '\x01';
    }
    cVar2 = '\0';
  }
  return cVar2;
}



// FUNCTION 14361d200 Read body=80 status=ok
// SIG undefined Read(void)

undefined4 Scaleform::GFx::AS3::Abc::Read(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14358f8b0();
  *param_2 = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[1] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[2] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[3] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[4] = uVar1;
  return 1;
}



// FUNCTION 14361d260 Read body=80 status=ok
// SIG undefined Read(void)

undefined4 Scaleform::GFx::AS3::Abc::Read(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14358f8b0();
  *param_2 = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[1] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[2] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[3] = uVar1;
  uVar1 = FUN_14358f8b0(param_1);
  param_2[4] = uVar1;
  return 1;
}



// FUNCTION 14361d2c0 FUN_14361d2c0 body=84 status=ok
// SIG undefined FUN_14361d2c0(void)

undefined8
FUN_14361d2c0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = FUN_14358f8b0();
  if (uVar1 == 0) {
    local_18 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
  }
  else {
    FUN_14361cb40(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar1 * 8,&local_18);
  }
  *param_3 = local_18;
  param_3[1] = uStack_14;
  param_3[2] = uStack_10;
  param_3[3] = uStack_c;
  return 1;
}



// FUNCTION 14361d320 FUN_14361d320 body=88 status=ok
// SIG undefined FUN_14361d320(void)

undefined8 FUN_14361d320(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = FUN_14358f8b0(param_1 + 8);
  if (uVar1 == 0) {
    local_18 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
  }
  else {
    FUN_14361cb40(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar1 * 8,&local_18);
  }
  *param_3 = local_18;
  param_3[1] = uStack_14;
  param_3[2] = uStack_10;
  param_3[3] = uStack_c;
  return 1;
}



// FUNCTION 14361d380 FUN_14361d380 body=307 status=ok
// SIG undefined FUN_14361d380(void)

undefined8 FUN_14361d380(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  uVar1 = **(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = *(undefined1 **)(param_1 + 8) + 1;
  local_18 = &DAT_145af3922;
  uVar2 = FUN_14358f8b0();
  if (uVar2 != 0) {
    FUN_14361cb40(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar2 * 8,&local_18);
  }
  *(undefined1 **)(param_3 + 2) = local_18;
  *(undefined8 *)(param_3 + 4) = uStack_10;
  switch(uVar1) {
  case 5:
    *param_3 = 3;
    return 1;
  default:
    return 0;
  case 8:
  case 0x16:
    *param_3 = 0;
    return 1;
  case 0x17:
    *param_3 = 5;
    return 1;
  case 0x18:
    *param_3 = 1;
    return 1;
  case 0x19:
    *param_3 = 4;
    return 1;
  case 0x1a:
    *param_3 = 2;
    return 1;
  }
}



// FUNCTION 14361d4f0 FUN_14361d4f0 body=94 status=ok
// SIG undefined FUN_14361d4f0(void)

undefined8 FUN_14361d4f0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *param_2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_14358f8b0(param_1 + 8);
  uVar3 = 0;
  while( true ) {
    if (uVar1 <= uVar3) {
      return 1;
    }
    iVar2 = FUN_14358f8b0(param_1 + 8);
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
  }
  return 0;
}



// FUNCTION 14361d560 FUN_14361d560 body=230 status=ok
// SIG undefined FUN_14361d560(void)

ulonglong FUN_14361d560(longlong param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  byte bVar6;
  
  *param_4 = 0;
  pbVar2 = *(byte **)(param_1 + 8);
  bVar6 = 1;
  bVar1 = *pbVar2;
  pcVar5 = (char *)(ulonglong)bVar1;
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  if (bVar1 - 7 < 0x17) {
    pcVar5 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_14361d5b1::switchdataD_14361d708)[(int)(bVar1 - 7)];
    switch(bVar1) {
    case 7:
      uVar3 = 0;
      break;
    default:
      goto switchD_14361d5b1_caseD_8;
    case 9:
      uVar3 = 2;
      break;
    case 0xd:
      uVar3 = 8;
      break;
    case 0xe:
      uVar3 = 10;
      break;
    case 0xf:
      uVar3 = 1;
      break;
    case 0x10:
      uVar3 = 9;
      break;
    case 0x11:
      uVar3 = 5;
      break;
    case 0x12:
      uVar3 = 0xd;
      break;
    case 0x1b:
      uVar3 = 6;
      break;
    case 0x1c:
      uVar3 = 0xe;
      break;
    case 0x1d:
      uVar3 = 0x10;
    }
  }
  else {
switchD_14361d5b1_caseD_8:
    uVar3 = 0x20;
    bVar6 = 0;
  }
  *(uint *)(param_3 + 0xc) = uVar3;
  if (uVar3 < 0x11) {
    uVar4 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14361d764)[(int)uVar3]))
                      (pcVar5,IMAGE_DOS_HEADER_140000000.e_magic +
                              (uint)(&DAT_14361d764)[(int)uVar3]);
    return uVar4;
  }
  if (bVar6 == 0) {
    *(undefined4 *)(param_3 + 0xc) = 0x20;
  }
  return (ulonglong)bVar6;
}



// FUNCTION 14361d7b0 FUN_14361d7b0 body=1996 status=ok
// SIG undefined FUN_14361d7b0(void)

ulonglong FUN_14361d7b0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong *local_res18;
  ulonglong local_res20;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  ulonglong uStack_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  
  puVar17 = (ulonglong *)(param_1 + 8);
  local_res18 = puVar17;
  uVar5 = FUN_14358f8b0(puVar17);
  if (*(ulonglong *)(param_2 + 8) < (ulonglong)uVar5) {
    FUN_14361e8f0(param_2 + 4,param_2 + 4,uVar5);
  }
  uVar12 = *(ulonglong *)(param_2 + 6) + 1;
  if (uVar12 < *(ulonglong *)(param_2 + 6)) {
    uVar14 = uVar12;
    if (uVar12 < *(ulonglong *)(param_2 + 8) >> 1) {
LAB_14361d82b:
      FUN_14361e8f0(param_2 + 4,param_2 + 4,uVar14);
    }
  }
  else if (*(ulonglong *)(param_2 + 8) < uVar12) {
    uVar14 = (uVar12 >> 2) + uVar12;
    goto LAB_14361d82b;
  }
  uVar18 = 0;
  *(ulonglong *)(param_2 + 6) = uVar12;
  *(undefined4 *)(*(longlong *)(param_2 + 4) + -4 + uVar12 * 4) = 0;
  if (1 < uVar5) {
    uVar12 = (ulonglong)(uVar5 - 1);
    do {
      uVar6 = FUN_14358f8b0(puVar17);
      uVar14 = *(longlong *)(param_2 + 6) + 1;
      if (uVar14 < *(ulonglong *)(param_2 + 6)) {
        uVar10 = uVar14;
        if (uVar14 < *(ulonglong *)(param_2 + 8) >> 1) {
LAB_14361d889:
          FUN_14361e8f0(param_2 + 4,param_2 + 4,uVar10);
        }
      }
      else if (*(ulonglong *)(param_2 + 8) < uVar14) {
        uVar10 = (uVar14 >> 2) + uVar14;
        goto LAB_14361d889;
      }
      *(ulonglong *)(param_2 + 6) = uVar14;
      *(undefined4 *)(*(longlong *)(param_2 + 4) + -4 + uVar14 * 4) = uVar6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar5 = FUN_14358f8b0(puVar17);
  if (*(ulonglong *)(param_2 + 0xe) < (ulonglong)uVar5) {
    FUN_14361e8f0(param_2 + 10,param_2 + 10,uVar5);
  }
  uVar12 = *(ulonglong *)(param_2 + 0xc) + 1;
  if (uVar12 < *(ulonglong *)(param_2 + 0xc)) {
    uVar14 = uVar12;
    if (uVar12 < *(ulonglong *)(param_2 + 0xe) >> 1) {
LAB_14361d8f7:
      FUN_14361e8f0(param_2 + 10,param_2 + 10,uVar14);
    }
  }
  else if (*(ulonglong *)(param_2 + 0xe) < uVar12) {
    uVar14 = (uVar12 >> 2) + uVar12;
    goto LAB_14361d8f7;
  }
  *(ulonglong *)(param_2 + 0xc) = uVar12;
  *(undefined4 *)(*(longlong *)(param_2 + 10) + -4 + uVar12 * 4) = 0;
  if (1 < uVar5) {
    uVar12 = (ulonglong)(uVar5 - 1);
    do {
      uVar6 = FUN_14358f8b0(puVar17);
      uVar14 = *(longlong *)(param_2 + 0xc) + 1;
      if (uVar14 < *(ulonglong *)(param_2 + 0xc)) {
        uVar10 = uVar14;
        if (uVar14 < *(ulonglong *)(param_2 + 0xe) >> 1) {
LAB_14361d951:
          FUN_14361e8f0(param_2 + 10,param_2 + 10,uVar10);
        }
      }
      else if (*(ulonglong *)(param_2 + 0xe) < uVar14) {
        uVar10 = (uVar14 >> 2) + uVar14;
        goto LAB_14361d951;
      }
      *(ulonglong *)(param_2 + 0xc) = uVar14;
      *(undefined4 *)(*(longlong *)(param_2 + 10) + -4 + uVar14 * 4) = uVar6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar7 = FUN_14358f8b0(puVar17);
  *param_2 = iVar7;
  *(ulonglong *)(param_2 + 2) = *puVar17;
  if (iVar7 != 0) {
    *puVar17 = *puVar17 + (ulonglong)(iVar7 * 8 - 8);
  }
  uVar5 = FUN_14358f8b0(puVar17);
  if (*(ulonglong *)(param_2 + 0x14) < (ulonglong)uVar5) {
    FUN_14361ebb0(param_2 + 0x10,param_2 + 0x10,uVar5);
  }
  uVar12 = *(ulonglong *)(param_2 + 0x12) + 1;
  if (uVar12 < *(ulonglong *)(param_2 + 0x12)) {
    uVar14 = uVar12;
    if (uVar12 < *(ulonglong *)(param_2 + 0x14) >> 1) {
LAB_14361d9e8:
      FUN_14361ebb0(param_2 + 0x10,param_2 + 0x10,uVar14);
    }
  }
  else if (*(ulonglong *)(param_2 + 0x14) < uVar12) {
    uVar14 = (uVar12 >> 2) + uVar12;
    goto LAB_14361d9e8;
  }
  *(ulonglong *)(param_2 + 0x12) = uVar12;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + -8 + uVar12 * 8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &DAT_145b4e330;
  }
  if (uVar5 != 0) {
    for (; uVar18 < uVar5 - 1; uVar18 = uVar18 + 1) {
      uVar12 = *puVar17;
      uVar14 = *(longlong *)(param_2 + 0x12) + 1;
      if (uVar14 < *(ulonglong *)(param_2 + 0x12)) {
        uVar10 = uVar14;
        if (uVar14 < *(ulonglong *)(param_2 + 0x14) >> 1) {
LAB_14361da56:
          FUN_14361ebb0(param_2 + 0x10,param_2 + 0x10,uVar10);
        }
      }
      else if (*(ulonglong *)(param_2 + 0x14) < uVar14) {
        uVar10 = (uVar14 >> 2) + uVar14;
        goto LAB_14361da56;
      }
      *(ulonglong *)(param_2 + 0x12) = uVar14;
      puVar13 = (ulonglong *)(*(longlong *)(param_2 + 0x10) + -8 + uVar14 * 8);
      if (puVar13 != (ulonglong *)0x0) {
        *puVar13 = uVar12;
      }
      iVar7 = FUN_14358f8b0(puVar17);
      *puVar17 = *puVar17 + (longlong)iVar7;
    }
  }
  uVar5 = FUN_14358f8b0(puVar17);
  bVar3 = true;
  if (*(ulonglong *)(param_2 + 0x1a) < (ulonglong)uVar5) {
    FUN_14361eb00(param_2 + 0x16,param_2 + 0x16,uVar5);
  }
  uVar14 = *(ulonglong *)(param_2 + 0x18);
  local_a8 = &DAT_145af3922;
  uStack_a0 = 0;
  uVar12 = uVar14 + 1;
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  puStack_90 = &DAT_145af3922;
  uStack_88 = 0;
  if (uVar12 < uVar14) {
    uVar10 = uVar12;
    if (uVar12 < *(ulonglong *)(param_2 + 0x1a) >> 1) {
LAB_14361dafe:
      FUN_14361eb00(param_2 + 0x16,param_2 + 0x16,uVar10);
    }
  }
  else if (*(ulonglong *)(param_2 + 0x1a) < uVar12) {
    uVar10 = (uVar12 >> 2) + uVar12;
    goto LAB_14361dafe;
  }
  *(ulonglong *)(param_2 + 0x18) = uVar12;
  puVar13 = (ulonglong *)(*(longlong *)(param_2 + 0x16) + uVar14 * 0x18);
  if (puVar13 != (ulonglong *)0x0) {
    *puVar13 = local_98;
    puVar13[1] = (ulonglong)puStack_90;
    puVar13[2] = uStack_88;
  }
  if (1 < uVar5) {
    uVar12 = (ulonglong)(uVar5 - 1);
    local_a8 = &DAT_145af3922;
    uStack_a0 = 0;
    do {
      local_98 = local_98 & 0xffffffff00000000;
      puStack_90 = &DAT_145af3922;
      uStack_88 = 0;
      if ((bVar3) && (cVar4 = FUN_14361d380(param_1,param_2,&local_98), cVar4 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      lVar1 = *(longlong *)(param_2 + 0x18);
      uVar14 = lVar1 + 1;
      if (uVar14 < *(ulonglong *)(param_2 + 0x18)) {
        uVar10 = uVar14;
        if (uVar14 < *(ulonglong *)(param_2 + 0x1a) >> 1) {
LAB_14361dbb6:
          FUN_14361eb00(param_2 + 0x16,param_2 + 0x16,uVar10);
        }
      }
      else if (*(ulonglong *)(param_2 + 0x1a) < uVar14) {
        uVar10 = (uVar14 >> 2) + uVar14;
        goto LAB_14361dbb6;
      }
      uVar10 = *(ulonglong *)(param_2 + 0x16);
      *(ulonglong *)(param_2 + 0x18) = uVar14;
      puVar17 = (ulonglong *)(uVar10 + lVar1 * 0x18);
      if (puVar17 != (ulonglong *)0x0) {
        *puVar17 = local_98;
        puVar17[1] = (ulonglong)puStack_90;
        puVar17[2] = uStack_88;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    puVar17 = local_res18;
    if (!bVar3) goto LAB_14361dd23;
  }
  uVar5 = FUN_14358f8b0(puVar17);
  bVar3 = true;
  puVar13 = (ulonglong *)(param_2 + 0x1c);
  if (*(ulonglong *)(param_2 + 0x20) < (ulonglong)uVar5) {
    FUN_14361ebb0(puVar13,puVar13,uVar5);
  }
  uVar12 = *(ulonglong *)(param_2 + 0x1e) + 1;
  if (uVar12 < *(ulonglong *)(param_2 + 0x1e)) {
    uVar14 = uVar12;
    if (uVar12 < *(ulonglong *)(param_2 + 0x20) >> 1) {
LAB_14361dc63:
      FUN_14361ebb0(puVar13,puVar13,uVar14);
    }
  }
  else if (*(ulonglong *)(param_2 + 0x20) < uVar12) {
    uVar14 = (uVar12 >> 2) + uVar12;
    goto LAB_14361dc63;
  }
  *(ulonglong *)(param_2 + 0x1e) = uVar12;
  *(undefined8 *)((*puVar13 - 8) + uVar12 * 8) = 0;
  *(undefined8 *)((*puVar13 - 8) + *(longlong *)(param_2 + 0x1e) * 8) = 0;
  if (1 < uVar5) {
    uVar12 = (ulonglong)(uVar5 - 1);
    piVar9 = param_2;
    do {
      if (bVar3) {
        piVar9 = (int *)*puVar17;
        uVar18 = FUN_14358f8b0(puVar17);
        for (uVar5 = 0; uVar5 < uVar18; uVar5 = uVar5 + 1) {
          iVar7 = FUN_14358f8b0(puVar17);
          if (iVar7 == 0) goto LAB_14361dcd0;
        }
        bVar3 = true;
      }
      else {
LAB_14361dcd0:
        bVar3 = false;
      }
      uVar14 = *(longlong *)(param_2 + 0x1e) + 1;
      if (uVar14 < *(ulonglong *)(param_2 + 0x1e)) {
        uVar10 = uVar14;
        if (uVar14 < *(ulonglong *)(param_2 + 0x20) >> 1) {
LAB_14361dd01:
          FUN_14361ebb0(puVar13,puVar13,uVar10);
        }
      }
      else if (*(ulonglong *)(param_2 + 0x20) < uVar14) {
        uVar10 = (uVar14 >> 2) + uVar14;
        goto LAB_14361dd01;
      }
      uVar10 = *puVar13;
      *(ulonglong *)(param_2 + 0x1e) = uVar14;
      *(int **)((uVar10 - 8) + uVar14 * 8) = piVar9;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (!bVar3) {
LAB_14361dd23:
      return uVar10 & 0xffffffffffffff00;
    }
  }
  uVar12 = 0;
  uVar5 = FUN_14358f8b0(puVar17);
  bVar3 = true;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,*puVar17);
  plVar15 = (longlong *)(param_2 + 0x22);
  local_res18 = (ulonglong *)((ulonglong)local_res18 & 0xffffffffffffff00);
  if (*(ulonglong *)(param_2 + 0x26) < (ulonglong)(uVar5 + 1)) {
    FUN_14361ea50(plVar15,plVar15);
  }
  uVar14 = *(ulonglong *)(param_2 + 0x24) + 1;
  if (uVar14 < *(ulonglong *)(param_2 + 0x24)) {
    uVar10 = uVar14;
    if (*(ulonglong *)(param_2 + 0x26) >> 1 <= uVar14) goto LAB_14361ddbc;
  }
  else {
    if (uVar14 <= *(ulonglong *)(param_2 + 0x26)) goto LAB_14361ddbc;
    uVar10 = (uVar14 >> 2) + uVar14;
  }
  FUN_14361ea50(plVar15,plVar15,uVar10);
LAB_14361ddbc:
  *(ulonglong *)(param_2 + 0x24) = uVar14;
  puVar8 = (undefined8 *)(*plVar15 + -0x10 + uVar14 * 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0xffffffff00000000;
    puVar8[1] = 0;
  }
  if (1 < uVar5) {
    local_res20 = (ulonglong)(uVar5 - 1);
    uVar14 = uVar12;
    do {
      puVar2 = (undefined1 *)*puVar17;
      local_a8 = (undefined1 *)0xffffffffffffffff;
      uStack_a0 = 0;
      if ((bVar3) && (cVar4 = FUN_14361d560(param_1,param_2,&local_a8,&local_res18), cVar4 != '\0'))
      {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar10 = *(longlong *)(param_2 + 0x24) + 1;
      if (uVar10 < *(ulonglong *)(param_2 + 0x24)) {
        uVar16 = uVar10;
        if (uVar10 < *(ulonglong *)(param_2 + 0x26) >> 1) {
LAB_14361de54:
          FUN_14361ea50(plVar15,plVar15,uVar16);
        }
      }
      else if (*(ulonglong *)(param_2 + 0x26) < uVar10) {
        uVar16 = (uVar10 >> 2) + uVar10;
        goto LAB_14361de54;
      }
      *(ulonglong *)(param_2 + 0x24) = uVar10;
      puVar8 = (undefined8 *)(*plVar15 + -0x10 + uVar10 * 0x10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = local_a8;
        puVar8[1] = uStack_a0;
      }
      if ((char)local_res18 != '\0') {
        uVar10 = uVar14 + 1;
        local_98 = *(longlong *)(param_2 + 0x24) - 1;
        puStack_90 = puVar2;
        if (uVar10 < uVar14) {
          uVar14 = uVar10;
          if (uVar10 < uVar12 >> 1) {
LAB_14361debe:
            FUN_1434efcd0(&local_80,local_68,uVar14);
            uVar12 = local_70;
          }
        }
        else if (uVar12 < uVar10) {
          uVar14 = (uVar10 >> 2) + uVar10;
          goto LAB_14361debe;
        }
        local_80[uVar10 * 2 + -2] = local_98;
        (local_80 + uVar10 * 2 + -2)[1] = (longlong)puStack_90;
        uVar14 = uVar10;
        local_78 = uVar10;
      }
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
    local_res20 = 0;
    if (uVar14 != 0) {
      uVar12 = *puVar17;
      if (bVar3 != false) {
        plVar11 = local_80;
        for (uVar10 = 0; uVar10 < uVar14; uVar10 = uVar10 + 1) {
          *puVar17 = plVar11[1];
          if ((bVar3 == false) ||
             (cVar4 = FUN_14361d560(param_1,param_2,*plVar11 * 0x10 + *plVar15,&local_res18),
             cVar4 == '\0')) {
            bVar3 = false;
            break;
          }
          bVar3 = true;
          plVar11 = plVar11 + 2;
        }
      }
      *puVar17 = uVar12;
    }
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_80);
  return (ulonglong)bVar3;
}



// FUNCTION 14361df90 FUN_14361df90 body=441 status=ok
// SIG undefined FUN_14361df90(void)

undefined8 FUN_14361df90(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar4 = FUN_14358f8b0(plVar1);
  uVar8 = (ulonglong)(int)uVar4;
  uVar7 = (ulonglong)uVar4;
  if ((ulonglong)param_2[2] < uVar8) {
    FUN_14361e9a0(param_2,param_2,uVar8);
  }
  if ((ulonglong)param_3[2] < uVar8) {
    FUN_14361e840(param_3,param_3,uVar8);
  }
  if (0 < (int)uVar4) {
    do {
      uVar8 = param_3[1] + 1;
      if (uVar8 < (ulonglong)param_3[1]) {
        uVar9 = uVar8;
        if (uVar8 < (ulonglong)param_3[2] >> 1) {
LAB_14361e02e:
          FUN_14361e840(param_3,param_3,uVar9);
        }
      }
      else if ((ulonglong)param_3[2] < uVar8) {
        uVar9 = (uVar8 >> 2) + uVar8;
        goto LAB_14361e02e;
      }
      param_3[1] = uVar8;
      *(undefined4 *)(*param_3 + uVar8 * 4 + -4) = 0xffffffff;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar10 = 0;
  do {
    if ((int)uVar4 <= iVar10) {
      return 1;
    }
    lVar3 = *plVar1;
    uVar7 = param_2[1] + 1;
    if (uVar7 < (ulonglong)param_2[1]) {
      uVar8 = uVar7;
      if (uVar7 < (ulonglong)param_2[2] >> 1) {
LAB_14361e08b:
        FUN_14361e9a0(param_2,param_2,uVar8);
      }
    }
    else if ((ulonglong)param_2[2] < uVar7) {
      uVar8 = (uVar7 >> 2) + uVar7;
      goto LAB_14361e08b;
    }
    param_2[1] = uVar7;
    *(longlong *)(*param_2 + -8 + uVar7 * 8) = lVar3;
    uVar5 = FUN_14358f8b0(plVar1);
    FUN_14358f8b0(plVar1);
    if (uVar5 != 0) {
      uVar7 = (ulonglong)uVar5;
      do {
        FUN_14358f8b0(plVar1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_14358f8b0(plVar1);
    bVar2 = *(byte *)*plVar1;
    *plVar1 = (longlong)((byte *)*plVar1 + 1);
    if (((bVar2 & 8) != 0) && (uVar6 = FUN_14358f8b0(plVar1), uVar6 != 0)) {
      uVar7 = (ulonglong)uVar6;
      do {
        FUN_14358f8b0(plVar1);
        *plVar1 = *plVar1 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((char)bVar2 < '\0') {
      for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
        FUN_14358f8b0(plVar1);
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}



// FUNCTION 14361e150 FUN_14361e150 body=282 status=ok
// SIG undefined FUN_14361e150(void)

undefined8 FUN_14361e150(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_28 [16];
  
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar4 = FUN_14358f8b0(puVar1);
  if ((ulonglong)param_2[2] < (ulonglong)uVar4) {
    FUN_14361e9a0(param_2,param_2,uVar4);
  }
  uVar7 = 0;
  do {
    if (uVar4 <= uVar7) {
      return 1;
    }
    uVar3 = *puVar1;
    uVar2 = param_2[1] + 1;
    if (uVar2 < (ulonglong)param_2[1]) {
      uVar8 = uVar2;
      if (uVar2 < (ulonglong)param_2[2] >> 1) {
LAB_14361e1da:
        FUN_14361e9a0(param_2,param_2,uVar8);
      }
    }
    else if ((ulonglong)param_2[2] < uVar2) {
      uVar8 = (uVar2 >> 2) + uVar2;
      goto LAB_14361e1da;
    }
    param_2[1] = uVar2;
    *(undefined8 *)(*param_2 + -8 + uVar2 * 8) = uVar3;
    uVar5 = FUN_14358f8b0(puVar1);
    if (uVar5 != 0) {
      FUN_14361cb40(*(longlong *)(param_3 + 0x40) + (ulonglong)uVar5 * 8,local_28);
    }
    uVar5 = FUN_14358f8b0(puVar1);
    for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
      FUN_14358f8b0(puVar1);
    }
    for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
      FUN_14358f8b0(puVar1);
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



// FUNCTION 14361e270 FUN_14361e270 body=513 status=ok
// SIG undefined FUN_14361e270(void)

char FUN_14361e270(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 local_48 [2];
  undefined8 local_40;
  int local_38;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  local_38 = -1;
  uVar14 = 0;
  local_48[0] = 0;
  local_40 = 0;
  iVar6 = FUN_14358f8b0(puVar1);
  uVar13 = (ulonglong)iVar6;
  if ((ulonglong)param_2[2] < uVar13) {
    FUN_14361e9a0(param_2,param_2,uVar13);
  }
  uVar12 = uVar14;
  if ((ulonglong)param_3[2] < uVar13) {
    FUN_14361e9a0(param_3,param_3,uVar13);
  }
  for (; cVar5 = '\x01', (int)uVar12 < iVar6; uVar12 = uVar12 + 1) {
    uVar3 = *puVar1;
    uVar13 = param_3[1] + 1;
    if (uVar13 < (ulonglong)param_3[1]) {
      uVar11 = uVar13;
      if (uVar13 < (ulonglong)param_3[2] >> 1) {
LAB_14361e31d:
        FUN_14361e9a0(param_3,param_3,uVar11);
      }
    }
    else if ((ulonglong)param_3[2] < uVar13) {
      uVar11 = (uVar13 >> 2) + uVar13;
      goto LAB_14361e31d;
    }
    param_3[1] = uVar13;
    *(undefined8 *)(*param_3 + -8 + uVar13 * 8) = uVar3;
    iVar7 = FUN_14358f8b0(puVar1);
    iVar8 = FUN_14358f8b0(puVar1);
    bVar2 = *(byte *)*puVar1;
    *puVar1 = (byte *)*puVar1 + 1;
    if ((iVar7 < 0) || (iVar8 < 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar2 & 8) == 0) {
      if (bVar4) goto LAB_14361e377;
LAB_14361e3bf:
      cVar5 = '\0';
      break;
    }
    if (!bVar4) goto LAB_14361e3bf;
    FUN_14358f8b0(puVar1);
LAB_14361e377:
    uVar9 = FUN_14358f8b0(puVar1);
    for (uVar10 = uVar14; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      FUN_14358f8b0(puVar1);
    }
    local_38 = FUN_14358f8b0(puVar1);
    cVar5 = FUN_14361cff0(puVar1,local_48);
    if ((cVar5 == '\0') || (local_38 < 0)) goto LAB_14361e3bf;
  }
  do {
    if ((cVar5 == '\0') || (iVar6 <= (int)uVar14)) {
      return cVar5;
    }
    uVar3 = *puVar1;
    uVar13 = param_2[1] + 1;
    if (uVar13 < (ulonglong)param_2[1]) {
      uVar11 = uVar13;
      if (uVar13 < (ulonglong)param_2[2] >> 1) {
LAB_14361e406:
        FUN_14361e9a0(param_2,param_2,uVar11);
      }
    }
    else if ((ulonglong)param_2[2] < uVar13) {
      uVar11 = (uVar13 >> 2) + uVar13;
      goto LAB_14361e406;
    }
    param_2[1] = uVar13;
    *(undefined8 *)(*param_2 + -8 + uVar13 * 8) = uVar3;
    local_38 = FUN_14358f8b0(puVar1);
    cVar5 = FUN_14361cff0(puVar1,local_48);
    if ((cVar5 == '\0') || (local_38 < 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    uVar14 = uVar14 + 1;
  } while( true );
}



// FUNCTION 14361e480 FUN_14361e480 body=132 status=ok
// SIG undefined FUN_14361e480(void)

char FUN_14361e480(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28 [2];
  undefined8 local_20;
  int local_18;
  
  lVar1 = param_1 + 8;
  *param_2 = *(undefined8 *)(param_1 + 8);
  iVar3 = FUN_14358f8b0(lVar1);
  iVar4 = 0;
  local_18 = -1;
  local_28[0] = 0;
  local_20 = 0;
  cVar2 = '\x01';
  do {
    if (iVar3 <= iVar4) {
      return cVar2;
    }
    local_18 = FUN_14358f8b0(lVar1);
    cVar2 = FUN_14361cff0(lVar1,local_28);
    if ((cVar2 == '\0') || (local_18 < 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (cVar2 != '\0');
  return '\0';
}



// FUNCTION 14361e510 FUN_14361e510 body=559 status=ok
// SIG undefined FUN_14361e510(void)

undefined8 FUN_14361e510(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar6 = FUN_14358f8b0(plVar1);
  if ((ulonglong)param_2[2] < (ulonglong)(longlong)iVar6) {
    FUN_14361e9a0(param_2,param_2,(longlong)iVar6);
  }
  iVar16 = 0;
  if (iVar6 < 1) {
    return 1;
  }
  do {
    lVar4 = *plVar1;
    uVar14 = param_2[1] + 1;
    if (uVar14 < (ulonglong)param_2[1]) {
      uVar15 = uVar14;
      if (uVar14 < (ulonglong)param_2[2] >> 1) {
LAB_14361e5a1:
        FUN_14361e9a0(param_2,param_2,uVar15);
      }
    }
    else if ((ulonglong)param_2[2] < uVar14) {
      uVar15 = (uVar14 >> 2) + uVar14;
      goto LAB_14361e5a1;
    }
    param_2[1] = uVar14;
    *(longlong *)(*param_2 + -8 + uVar14 * 8) = lVar4;
    uVar7 = FUN_14358f8b0(plVar1);
    FUN_14358f8b0(plVar1);
    FUN_14358f8b0(plVar1);
    FUN_14358f8b0(plVar1);
    FUN_14358f8b0(plVar1);
    uVar8 = FUN_14358f8b0(plVar1);
    *plVar1 = *plVar1 + (ulonglong)uVar8;
    uVar8 = FUN_14358f8b0(plVar1);
    for (uVar13 = 0; uVar13 < uVar8; uVar13 = uVar13 + 1) {
      DSP::CAkRectifier::CAkRectifier(&local_58);
      local_58 = FUN_14358f8b0(plVar1);
      local_54 = FUN_14358f8b0(plVar1);
      local_50 = FUN_14358f8b0(plVar1);
      local_4c = FUN_14358f8b0(plVar1);
      FUN_14358f8b0(plVar1);
    }
    uVar8 = FUN_14358f8b0(plVar1);
    for (uVar13 = 0; uVar12 = 1, uVar13 < uVar8; uVar13 = uVar13 + 1) {
      iVar9 = FUN_14358f8b0(plVar1);
      bVar2 = *(byte *)*plVar1;
      *plVar1 = (longlong)((byte *)*plVar1 + 1);
      if (iVar9 < 0) {
LAB_14361e6ec:
        uVar12 = 0;
        goto LAB_14361e6ff;
      }
      iVar9 = FUN_14358f8b0(plVar1);
      iVar10 = FUN_14358f8b0(plVar1);
      if ((iVar9 < 0) || (iVar10 < 0)) goto LAB_14361e6ec;
      if ((((bVar2 & 0xf) == 0) || ((bVar2 & 0xf) == 6)) &&
         (iVar9 = FUN_14358f8b0(plVar1), iVar9 != 0)) {
        uVar3 = *(undefined1 *)*plVar1;
        *plVar1 = (longlong)((undefined1 *)*plVar1 + 1);
        cVar5 = FUN_14358f9d0(uVar3);
        if (cVar5 == '\0') goto LAB_14361e6ec;
      }
      if (((bVar2 & 0x40) != 0) && (uVar11 = FUN_14358f8b0(plVar1), uVar11 != 0)) {
        uVar14 = (ulonglong)uVar11;
        do {
          FUN_14358f8b0(plVar1);
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    *(int *)(*param_3 + (ulonglong)uVar7 * 4) = iVar16;
LAB_14361e6ff:
    iVar16 = iVar16 + 1;
    if (iVar6 <= iVar16) {
      return uVar12;
    }
  } while( true );
}



// FUNCTION 14361e750 FUN_14361e750 body=227 status=ok
// SIG undefined FUN_14361e750(void)

undefined2 FUN_14361e750(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  
  uVar2 = FUN_14358f850(param_1 + 8);
  *(undefined2 *)(param_2 + 0x20) = uVar2;
  sVar3 = FUN_14358f850(param_1 + 8);
  *(short *)(param_2 + 0x22) = sVar3;
  if (((((sVar3 == 0x2e) && (*(short *)(param_2 + 0x20) == 0x10)) &&
       (cVar1 = FUN_14361d7b0(param_1,param_2 + 0xc0), cVar1 != '\0')) &&
      ((cVar1 = FUN_14361df90(param_1,param_2 + 0x30,param_2 + 0xa8), cVar1 != '\0' &&
       (cVar1 = FUN_14361e150(param_1,param_2 + 0x48,param_2 + 0xc0), cVar1 != '\0')))) &&
     ((cVar1 = FUN_14361e270(param_1,param_2 + 0x60,param_2 + 0x78), cVar1 != '\0' &&
      ((cVar1 = FUN_14361e480(param_1,param_2 + 0x28), cVar1 != '\0' &&
       (cVar1 = FUN_14361e510(param_1,param_2 + 0x90,param_2 + 0xa8), cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14361e840 FUN_14361e840 body=165 status=ok
// SIG undefined FUN_14361e840(void)

void FUN_14361e840(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x153;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361e8f0 FUN_14361e8f0 body=165 status=ok
// SIG undefined FUN_14361e8f0(void)

void FUN_14361e8f0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x154;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361e9a0 FUN_14361e9a0 body=165 status=ok
// SIG undefined FUN_14361e9a0(void)

void FUN_14361e9a0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x153;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361ea50 FUN_14361ea50 body=164 status=ok
// SIG undefined FUN_14361ea50(void)

void FUN_14361ea50(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x154;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361eb00 FUN_14361eb00 body=165 status=ok
// SIG undefined FUN_14361eb00(void)

void FUN_14361eb00(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x154;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x18,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361ebb0 FUN_14361ebb0 body=165 status=ok
// SIG undefined FUN_14361ebb0(void)

void FUN_14361ebb0(longlong *param_1,undefined8 param_2,longlong param_3)

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
      local_res8[0] = 0x154;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14361ec60 FUN_14361ec60 body=145 status=ok
// SIG undefined FUN_14361ec60(void)

void FUN_14361ec60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7aaa8)((longlong)DAT_146b7aab0 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14361ed60 FUN_14361ed60 body=144 status=ok
// SIG undefined FUN_14361ed60(void)

void FUN_14361ed60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b7aad8)((longlong)DAT_146b7aae0 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14361edf0 FUN_14361edf0 body=112 status=ok
// SIG undefined FUN_14361edf0(void)

void FUN_14361edf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b7aae8)(DAT_146b7aaf0 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14361ee60 FUN_14361ee60 body=145 status=ok
// SIG undefined FUN_14361ee60(void)

void FUN_14361ee60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b7ac18)((longlong)DAT_146b7ac20 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14361ef00 FUN_14361ef00 body=33 status=ok
// SIG undefined FUN_14361ef00(void)

undefined8 * FUN_14361ef00(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14361ef30 FUN_14361ef30 body=228 status=ok
// SIG undefined FUN_14361ef30(void)

undefined8 * FUN_14361ef30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b4e3e8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b4e3e8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b4e5e0;
  }
  return param_1;
}



// FUNCTION 14361f020 FUN_14361f020 body=33 status=ok
// SIG undefined FUN_14361f020(void)

undefined8 * FUN_14361f020(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b4e5e0;
  return param_1;
}



// FUNCTION 14361f050 FUN_14361f050 body=649 status=ok
// SIG undefined FUN_14361f050(void)

ulonglong FUN_14361f050(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  ulonglong *local_40;
  
  lVar4 = *(longlong *)(param_1[5] + 0x98);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2,&local_res20,0);
  uVar6 = (**(code **)(*param_1 + 0x78))(param_1,&local_res18);
  uVar6 = FUN_143360200(uVar6,&local_res10,&DAT_145b4e0e8);
  Scaleform::GFx::ASString::operator+(uVar6,&local_res8,uVar5);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar7 = FUN_1435b5230(param_2);
  uVar8 = FUN_1435c7e90(lVar4,&local_res8,*(undefined8 *)(lVar4 + 0x1e8),lVar7);
  if (uVar8 == 0) {
    lVar9 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x50))(*(longlong **)(lVar4 + 0x48),0xe8,0)
    ;
    if (lVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_143625c40(lVar9,lVar4,&local_res8,param_2);
    }
    lVar9 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar9 == 0) {
      local_res10 = 0;
      uVar5 = FUN_1435b4fe0(*(undefined8 *)(uVar8 + 0xd8));
      lVar9 = *(longlong *)(lVar4 + 0x1e8);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434e8000(*(undefined8 *)(lVar4 + 0x2c0),lVar7,uVar5,lVar9,&local_res10);
    }
    else {
      plVar2 = (longlong *)(lVar9 + 0x78);
      FUN_143613750(plVar2,plVar2,*(longlong *)(lVar9 + 0x80) + 1);
      puVar3 = (ulonglong *)(*plVar2 + (*(longlong *)(lVar9 + 0x80) + -1) * 8);
      if ((puVar3 != (ulonglong *)0x0) && (*puVar3 = uVar8, uVar8 != 0)) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      local_50 = *(ulonglong *)(lVar4 + 0x1e8);
      local_58 = local_res8;
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      if (local_50 != 0) {
        *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
      }
      local_48 = &local_58;
      local_40 = &local_res10;
      local_res10 = uVar8;
      FUN_1434e5270(lVar7 + 0x30,*(undefined8 *)(lVar7 + 0x38),&local_48,
                    (uint)((*(longlong *)(local_50 + 0x28) << 0x3c) >> 0x3c) ^
                    (*(uint *)(*(longlong *)(local_50 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                    *(uint *)(local_res8 + 0x1c) & 0xffffff);
      if (local_50 != 0) {
        if ((local_50 & 1) == 0) {
          if ((*(uint *)(local_50 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_50 = local_50 - 1;
        }
      }
      piVar1 = (int *)(local_58 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
      FUN_1434ef880(uVar8);
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar8;
}



// FUNCTION 14361f2e0 FUN_14361f2e0 body=459 status=ok
// SIG undefined FUN_14361f2e0(void)

undefined8 FUN_14361f2e0(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (param_2 != 1) {
    uVar4 = FUN_1435c8e40(local_18,0x468,lVar3);
    FUN_1435cbe70(lVar3,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto LAB_14361f332;
  }
  lVar5 = FUN_1435caba0(lVar3,param_3);
  uVar6 = *param_3 & 0x1f;
  if (uVar6 != 0) {
    if (uVar6 == 0xc) {
      bVar7 = *(longlong *)(param_3 + 4) == 0;
LAB_14361f37b:
      if (bVar7) goto LAB_14361f3d6;
    }
    else if (uVar6 == 10) {
      bVar7 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_14361f37b;
    }
    if ((*(byte *)(lVar5 + 0x88) >> 5 & 1) == 0) {
      uVar4 = FUN_1435c8e40(local_18,0x453,lVar3);
      FUN_1435cbe70(lVar3,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return *(undefined8 *)(param_1 + 0x28);
      }
LAB_14361f332:
      return *(undefined8 *)(param_1 + 0x28);
    }
  }
LAB_14361f3d6:
  if (uVar6 == 0) {
LAB_14361f407:
    lVar5 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(lVar3 + 0x208) + 0xd8));
  }
  else {
    if (uVar6 == 0xc) {
      bVar7 = *(longlong *)(param_3 + 4) == 0;
LAB_14361f3fa:
      if (bVar7) goto LAB_14361f407;
    }
    else if (uVar6 == 10) {
      bVar7 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_14361f3fa;
    }
    lVar5 = *(longlong *)(param_3 + 4);
  }
  iVar2 = *(int *)(*(longlong *)(lVar5 + 0x28) + 0x90);
  if (iVar2 == 2) {
    return *(undefined8 *)(lVar3 + 0x268);
  }
  if (iVar2 == 3) {
    return *(undefined8 *)(lVar3 + 0x270);
  }
  if (iVar2 == 4) {
    return *(undefined8 *)(lVar3 + 0x278);
  }
  if (iVar2 != 5) {
    uVar4 = FUN_14361f050(param_1);
    return uVar4;
  }
  return *(undefined8 *)(lVar3 + 0x280);
}



// FUNCTION 14361f4c0 FUN_14361f4c0 body=283 status=ok
// SIG undefined FUN_14361f4c0(void)

ulonglong FUN_14361f4c0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_1[2] != '\0') {
    if (*param_1 == '\0') {
      cVar1 = param_1[1];
      uVar8 = *(undefined8 *)*param_3;
      uVar4 = FUN_14335fa60(param_3);
    }
    else {
      cVar1 = param_1[1];
      uVar8 = *(undefined8 *)*param_2;
      uVar4 = FUN_14335fa60(param_2);
      param_2 = param_3;
    }
    uVar6 = FUN_14335ff80(param_2,uVar8,uVar4,cVar1 == '\0');
    return uVar6;
  }
  if (param_1[1] != '\0') {
    uVar5 = _stricmp(*(char **)*param_2,*(char **)*param_3);
    uVar3 = -uVar5;
    if (*param_1 == '\0') {
      uVar3 = uVar5;
    }
    return (ulonglong)uVar3;
  }
  pbVar7 = *(byte **)*param_2;
  lVar9 = *(longlong *)*param_3 - (longlong)pbVar7;
  do {
    bVar2 = *pbVar7;
    if (bVar2 != pbVar7[lVar9]) {
      uVar5 = -(uint)(bVar2 < pbVar7[lVar9]) | 1;
      uVar3 = -uVar5;
      if (*param_1 == '\0') {
        uVar3 = uVar5;
      }
      return (ulonglong)uVar3;
    }
    pbVar7 = pbVar7 + 1;
  } while (bVar2 != 0);
  return 0;
}



// FUNCTION 14361f5f0 FUN_14361f5f0 body=492 status=ok
// SIG undefined FUN_14361f5f0(void)

undefined4 FUN_14361f5f0(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  double local_res8;
  double local_res18 [2];
  uint local_88 [2];
  undefined8 local_80;
  uint local_68 [2];
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48 [2];
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_60 = *(undefined8 *)(param_3 + 2);
  uVar3 = 0;
  local_58 = param_3[4];
  uStack_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  local_68[0] = *param_3;
  local_88[0] = 0;
  local_80 = 0;
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_143592070(param_3);
    }
    else {
      FUN_143592140();
    }
  }
  local_40 = *(undefined8 *)(param_4 + 2);
  local_48[0] = *param_4;
  local_38 = param_4[4];
  uStack_34 = param_4[5];
  uStack_30 = param_4[6];
  uStack_2c = param_4[7];
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  lVar7 = 2;
  local_res8 = (double)CONCAT44(local_res8._4_4_,2);
  uVar4 = FUN_143590540();
  FUN_1435ce880(param_1,param_2,uVar4,local_88,&local_res8,local_68,0,1);
  if ((*(char *)(param_1 + 0xb8) == '\0') &&
     (pcVar5 = (char *)FUN_143590af0(local_88,&local_res8,local_res18), *pcVar5 != '\0')) {
    local_res8 = local_res18[0];
    if (local_res18[0] == -INFINITY) {
      uVar3 = 0xffffffff;
    }
    else if (local_res18[0] == INFINITY) {
      uVar3 = 1;
    }
    else {
      cVar2 = FUN_143364c00();
      if (cVar2 == '\0') {
        cVar2 = FUN_143364be0(SUB84(local_res18[0],0));
        if (cVar2 == '\0') {
          if ((local_res18[0] != 0.0) && (uVar3 = 1, local_res18[0] < 0.0)) {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
  }
  puVar6 = &stack0xffffffffffffffd8;
  do {
    puVar1 = (uint *)(puVar6 + -0x20);
    puVar6 = puVar6 + -0x20;
    lVar7 = lVar7 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar6);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar7 != 0);
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  return uVar3;
}



// FUNCTION 14361f810 FUN_14361f810 body=11 status=ok
// SIG undefined FUN_14361f810(void)

void FUN_14361f810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b4e6b8;
  return;
}



// FUNCTION 14361f830 FUN_14361f830 body=123 status=ok
// SIG undefined FUN_14361f830(void)

undefined1 *
FUN_14361f830(longlong param_1,undefined1 *param_2,uint param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar4 * 0x20 + param_4);
      cVar1 = FUN_1435b5020(param_5,uVar2);
      if (cVar1 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < param_3);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14361f8c0 FUN_14361f8c0 body=133 status=ok
// SIG undefined FUN_14361f8c0(void)

undefined1 * FUN_14361f8c0(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar1 = (ulonglong *)(param_3 + 0x40);
  if (*puVar1 != 0) {
    do {
      uVar3 = FUN_1434b4f50(puVar1,uVar4);
      uVar3 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar3);
      cVar2 = FUN_1435b5020(param_4,uVar3);
      if (cVar2 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *puVar1);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14361f950 FUN_14361f950 body=104 status=ok
// SIG undefined FUN_14361f950(void)

undefined8 FUN_14361f950(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_1435c8e40(local_18,0x466,uVar2);
    FUN_1435cbdf0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *(bool *)param_2 = *(char *)(param_1 + 8) == '\0';
  return param_2;
}



// FUNCTION 14361f9c0 FUN_14361f9c0 body=179 status=ok
// SIG undefined FUN_14361f9c0(void)

undefined1 *
FUN_14361f9c0(longlong param_1,undefined1 *param_2,uint param_3,longlong param_4,undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar6 = 0;
  if (param_3 == 0) {
    *param_2 = 1;
  }
  else {
    do {
      uVar3 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar6 * 0x20 + param_4);
      cVar2 = FUN_1435b5020(param_5,uVar3);
      if (cVar2 == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = FUN_1435c8e40(local_28,0x40a,uVar3);
        FUN_1435cbe70(uVar3,uVar4);
        piVar1 = (int *)(local_20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = 0;
        return param_2;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_3);
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 14361fa80 FUN_14361fa80 body=187 status=ok
// SIG undefined FUN_14361fa80(void)

undefined1 * FUN_14361fa80(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar6 = 0;
  puVar1 = (ulonglong *)(param_3 + 0x40);
  if (*puVar1 == 0) {
    *param_2 = 1;
  }
  else {
    do {
      uVar4 = FUN_1434b4f50(puVar1,uVar6);
      uVar4 = FUN_1435ca910(*(undefined8 *)(param_1 + 0x10),uVar4);
      cVar3 = FUN_1435b5020(param_4,uVar4);
      if (cVar3 == '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = FUN_1435c8e40(local_18,0x40a,uVar4);
        FUN_1435cbe70(uVar4,uVar5);
        piVar2 = (int *)(local_10 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        *param_2 = 0;
        return param_2;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *puVar1);
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 14361fb50 FUN_14361fb50 body=111 status=ok
// SIG undefined FUN_14361fb50(void)

undefined1 * FUN_14361fb50(longlong param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((4 < (*param_3 & 0x1f)) && (3 < (*param_3 & 0x1f) - 8)) {
    *param_2 = 1;
    return param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_1435c8e40(local_18,0x40a,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14361fbd0 FUN_14361fbd0 body=123 status=ok
// SIG undefined FUN_14361fbd0(void)

undefined1 *
FUN_14361fbd0(longlong param_1,undefined1 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  cVar3 = (**(code **)(*param_3 + 0x58))(param_3,param_4,param_5);
  if (cVar3 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_1435c8e40(local_18,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14361fc60 FUN_14361fc60 body=324 status=ok
// SIG undefined FUN_14361fc60(void)

longlong * FUN_14361fc60(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  uint local_68 [2];
  undefined8 local_60;
  undefined1 *local_48;
  undefined8 local_40;
  
  FUN_1432c5960(&local_48,*(undefined8 *)(param_1[2] + 0x48));
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar5 != 0) {
        Scaleform::StringBuffer::AppendString(&local_48,*(undefined8 *)*param_3,0xffffffffffffffff);
      }
      local_68[0] = 0;
      local_60 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,uVar5,local_68);
      pcVar2 = (char *)FUN_143591800(local_68,local_res8);
      if (*pcVar2 == '\0') {
        if (9 < ((byte)local_68[0] & 0x1f)) {
          if ((local_68[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_68);
          }
          else {
            FUN_143592150();
          }
        }
        break;
      }
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  puVar4 = &DAT_145af3922;
  if (local_48 != (undefined1 *)0x0) {
    puVar4 = local_48;
  }
  lVar3 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1[2] + 0x10) + 0x218),puVar4,local_40);
  *param_2 = lVar3;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  Scaleform::StringBuffer::~StringBuffer(&local_48);
  return param_2;
}



// FUNCTION 14361fdb0 FUN_14361fdb0 body=86 status=ok
// SIG undefined FUN_14361fdb0(void)

longlong * FUN_14361fdb0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((longlong)param_3 < 0) {
    if (iVar1 != 0) {
      *param_2 = 0;
      return param_2;
    }
  }
  else if (param_3 < iVar1 - 1) {
    *param_2 = param_3 + 1;
    return param_2;
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14361fe10 FUN_14361fe10 body=253 status=ok
// SIG undefined FUN_14361fe10(void)

void FUN_14361fe10(longlong *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar5 = 0;
  uVar6 = (ulonglong)param_2;
  if ((char)param_1[1] != '\0') {
    lVar2 = param_1[2];
    uVar4 = FUN_1435c8e40(local_28,0x466,lVar2);
    FUN_1435cbdf0(lVar2,uVar4);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((char)param_1[1] == '\0') {
    if (param_2 != 0) {
      do {
        uVar4 = FUN_1435ca910(param_1[2],(ulonglong)uVar5 * 0x20 + param_3);
        cVar3 = FUN_1435b5020(param_4,uVar4);
        if (cVar3 == '\0') {
          lVar2 = param_1[2];
          uVar4 = FUN_1435c8e40(local_28,0x40a,lVar2);
          FUN_1435cbe70(lVar2,uVar4);
          piVar1 = (int *)(local_20 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_2);
    }
    if (param_2 != 0) {
      do {
        (**(code **)(*param_1 + 0x20))(param_1,param_3);
        param_3 = param_3 + 0x20;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14361ff20 FUN_14361ff20 body=286 status=ok
// SIG undefined FUN_14361ff20(void)

void FUN_14361ff20(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar5 = 0;
  if ((char)param_1[1] != '\0') {
    lVar2 = param_1[2];
    uVar4 = FUN_1435c8e40(local_28,0x466,lVar2);
    FUN_1435cbdf0(lVar2,uVar4);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (((char)param_1[1] == '\0') && (uVar6 = uVar5, *(longlong *)(param_2 + 0x40) != 0)) {
    do {
      uVar4 = FUN_1434b4f50(param_2 + 0x40,uVar6);
      uVar4 = FUN_1435ca910(param_1[2],uVar4);
      cVar3 = FUN_1435b5020(param_3,uVar4);
      if (cVar3 == '\0') {
        lVar2 = param_1[2];
        uVar4 = FUN_1435c8e40(local_28,0x40a,lVar2);
        FUN_1435cbe70(lVar2,uVar4);
        piVar1 = (int *)(local_20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(param_2 + 0x40));
    if (*(longlong *)(param_2 + 0x40) != 0) {
      do {
        uVar4 = FUN_1434b4f50(param_2 + 0x40,uVar5);
        (**(code **)(*param_1 + 0x20))(param_1,uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulonglong *)(param_2 + 0x40));
    }
  }
  return;
}



// FUNCTION 143620050 FUN_143620050 body=346 status=ok
// SIG undefined FUN_143620050(void)

void FUN_143620050(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  undefined8 local_30;
  
  if ((char)param_1[1] != '\0') {
    lVar2 = param_1[2];
    uVar5 = FUN_1435c8e40(local_48,0x466,lVar2);
    FUN_1435cbdf0(lVar2,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((char)param_1[1] == '\0') {
    uVar6 = 0;
    uVar3 = *(ulonglong *)(param_2 + 0x40);
    if (uVar3 != 0) {
      do {
        local_38[0] = 0;
        local_30 = 0;
        uVar5 = FUN_1434b4f50(param_2 + 0x40,uVar6);
        cVar4 = (**(code **)(*param_3 + 0x58))(param_3,uVar5,local_38);
        if (cVar4 == '\0') {
          lVar2 = param_1[2];
          uVar5 = FUN_1435c8e40(local_48,0x40a,lVar2);
          FUN_1435cbe70(lVar2,uVar5);
          piVar1 = (int *)(local_40 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (((byte)local_38[0] & 0x1f) < 10) {
            return;
          }
          if ((local_38[0] >> 9 & 1) != 0) {
            FUN_143592150();
            return;
          }
          FUN_1435920c0(local_38);
          return;
        }
        (**(code **)(*param_1 + 0x20))(param_1,local_38);
        if (9 < ((byte)local_38[0] & 0x1f)) {
          if ((local_38[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_38);
          }
          else {
            FUN_143592150();
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  return;
}



// FUNCTION 1436201b0 FUN_1436201b0 body=451 status=ok
// SIG undefined FUN_1436201b0(void)

void FUN_1436201b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_68 [8];
  longlong local_60;
  uint local_58 [2];
  undefined8 local_50;
  uint local_38 [2];
  undefined8 local_30;
  
  if ((char)param_1[1] != '\0') {
    lVar2 = param_1[2];
    uVar5 = FUN_1435c8e40(local_68,0x466,lVar2);
    FUN_1435cbdf0(lVar2,uVar5);
    piVar1 = (int *)(local_60 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((char)param_1[1] == '\0') {
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        local_38[0] = 0;
        local_30 = 0;
        local_58[0] = 0;
        local_50 = 0;
        (**(code **)(*param_2 + 0x18))(param_2,uVar6,local_58);
        cVar3 = (**(code **)(*param_3 + 0x58))(param_3,local_58,local_38);
        if (cVar3 == '\0') {
          lVar2 = param_1[2];
          uVar5 = FUN_1435c8e40(local_68,0x40a,lVar2);
          FUN_1435cbe70(lVar2,uVar5);
          piVar1 = (int *)(local_60 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (9 < ((byte)local_58[0] & 0x1f)) {
            if ((local_58[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_58);
            }
            else {
              FUN_143592150();
            }
          }
          if (((byte)local_38[0] & 0x1f) < 10) {
            return;
          }
          if ((local_38[0] >> 9 & 1) != 0) {
            FUN_143592150();
            return;
          }
          FUN_1435920c0(local_38);
          return;
        }
        (**(code **)(*param_1 + 0x20))(param_1,local_38);
        if (9 < ((byte)local_58[0] & 0x1f)) {
          if ((local_58[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_58);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_38[0] & 0x1f)) {
          if ((local_38[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_38);
          }
          else {
            FUN_143592150();
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  return;
}



// FUNCTION 143620380 FUN_143620380 body=182 status=ok
// SIG undefined FUN_143620380(void)

bool FUN_143620380(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1435caba0(lVar1);
  if ((~(*(byte *)(lVar2 + 0x88) >> 5) & 1) != 0) {
    switch(*(int *)(lVar2 + 0x90) + -7) {
    case 0:
      FUN_143620050(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
      return *(char *)(*(longlong *)(param_1 + 0x10) + 0xb8) == '\0';
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      FUN_1436201b0(param_1,*(longlong *)(param_2 + 0x10) + 0x40,param_3);
      return *(char *)(lVar1 + 0xb8) == '\0';
    }
  }
  return false;
}



// FUNCTION 143620470 FUN_143620470 body=920 status=ok
// SIG undefined FUN_143620470(void)

ulonglong FUN_143620470(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  uint local_58 [8];
  
  uVar9 = *param_2 & 0x1f;
  if (uVar9 == 0) goto LAB_1436207f8;
  if (uVar9 == 0xc) {
    bVar10 = *(longlong *)(param_2 + 4) == 0;
LAB_1436204bf:
    in_RAX = CONCAT71((int7)(in_RAX >> 8),bVar10);
    if (bVar10 != false) goto LAB_1436207f8;
  }
  else if (uVar9 == 10) {
    in_RAX = *(longlong *)(*(ulonglong *)(param_2 + 4) + 8) + 0x80;
    bVar10 = *(ulonglong *)(param_2 + 4) == in_RAX;
    goto LAB_1436204bf;
  }
  local_res20 = param_4;
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    lVar7 = param_1[2];
    uVar5 = FUN_1435c8e40(local_d8,0x40a,lVar7);
    in_RAX = FUN_1435cbe70(lVar7,uVar5);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_RAX = FUN_14335f920();
    }
LAB_1436207f8:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar9 = 0;
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) {
LAB_143620530:
    bVar10 = true;
  }
  else {
    if (uVar3 == 0xc) {
      bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_143620525:
      if (bVar10) goto LAB_143620530;
    }
    else if (uVar3 == 10) {
      bVar10 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_143620525;
    }
    bVar10 = false;
  }
  puVar4 = param_2;
  if (!bVar10) {
    puVar4 = param_3;
  }
  local_b0 = *(undefined8 *)(puVar4 + 2);
  local_b8[0] = *puVar4;
  local_a8 = puVar4[4];
  uStack_a4 = puVar4[5];
  uStack_a0 = puVar4[6];
  uStack_9c = puVar4[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  if (uVar3 != 0) {
    lVar7 = 3;
    uVar9 = 0;
    do {
      puVar4 = (uint *)FUN_143590540();
      local_98[0] = *puVar4;
      local_90 = *(undefined8 *)(puVar4 + 2);
      local_88 = puVar4[4];
      uStack_84 = puVar4[5];
      uStack_80 = puVar4[6];
      uStack_7c = puVar4[7];
      if (9 < ((byte)*puVar4 & 0x1f)) {
        if ((*puVar4 >> 9 & 1) == 0) {
          FUN_143592070(puVar4);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = uVar9;
      FUN_143590110(local_58,param_4);
      local_d8[0] = 0;
      local_d0 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,uVar9,local_98);
      local_res10[0] = 3;
      FUN_1435ce880(param_1[2],param_2,local_b8,local_d8,local_res10,local_98,0,1);
      bVar2 = (byte)local_d8[0];
      if (*(char *)(param_1[2] + 0xb8) != '\0') {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar6 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar6 + -0x20);
          puVar6 = puVar6 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar6);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      if (((bVar2 & 0x1f) != 1) || (local_c8 == '\0')) {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar6 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar6 + -0x20);
          puVar6 = puVar6 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar6);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      lVar8 = 3;
      puVar6 = &stack0xffffffffffffffc8;
      do {
        puVar4 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar8 = lVar8 + -1;
        if (9 < ((byte)*puVar4 & 0x1f)) {
          if ((*puVar4 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar8 != 0);
      uVar9 = uVar9 + 1;
      param_4 = local_res20;
    } while (uVar9 < uVar3);
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return (ulonglong)(uVar9 == uVar3);
    }
    FUN_1435920c0(local_b8);
  }
  return (ulonglong)(uVar9 == uVar3);
}



// FUNCTION 143620810 FUN_143620810 body=826 status=ok
// SIG undefined FUN_143620810(void)

void FUN_143620810(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  uint local_d8 [2];
  longlong local_d0;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  uint local_58 [8];
  
  uVar7 = *param_2 & 0x1f;
  if (uVar7 == 0) {
    return;
  }
  if (uVar7 == 0xc) {
    bVar9 = *(longlong *)(param_2 + 4) == 0;
LAB_14362085f:
    if (bVar9) {
      return;
    }
  }
  else if (uVar7 == 10) {
    bVar9 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
    goto LAB_14362085f;
  }
  local_res20 = param_4;
  if ((uVar7 < 5) || (uVar7 - 8 < 4)) {
    lVar5 = param_1[2];
    uVar3 = FUN_1435c8e40(local_d8,0x40a,lVar5);
    FUN_1435cbe70(lVar5,uVar3);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar8 = 0;
  uVar7 = *param_3 & 0x1f;
  if (uVar7 == 0) {
LAB_1436208cd:
    bVar9 = true;
  }
  else {
    if (uVar7 == 0xc) {
      bVar9 = *(longlong *)(param_3 + 4) == 0;
LAB_1436208c2:
      if (bVar9) goto LAB_1436208cd;
    }
    else if (uVar7 == 10) {
      bVar9 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1436208c2;
    }
    bVar9 = false;
  }
  puVar2 = param_2;
  if (!bVar9) {
    puVar2 = param_3;
  }
  local_b0 = *(undefined8 *)(puVar2 + 2);
  local_b8[0] = *puVar2;
  local_a8 = puVar2[4];
  uStack_a4 = puVar2[5];
  uStack_a0 = puVar2[6];
  uStack_9c = puVar2[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  uVar7 = (**(code **)(*param_1 + 8))(param_1);
  if (uVar7 != 0) {
    lVar5 = 3;
    do {
      puVar2 = (uint *)FUN_143590540();
      local_98[0] = *puVar2;
      local_90 = *(undefined8 *)(puVar2 + 2);
      local_88 = puVar2[4];
      uStack_84 = puVar2[5];
      uStack_80 = puVar2[6];
      uStack_7c = puVar2[7];
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_143592070(puVar2);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = uVar8;
      FUN_143590110(local_58,param_4);
      local_d8[0] = 0;
      local_d0 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,uVar8,local_98);
      local_res10[0] = 3;
      FUN_1435ce880(param_1[2],param_2,local_b8,local_d8,local_res10,local_98,0,1);
      if (*(char *)(param_1[2] + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar4 = &stack0xffffffffffffffc8;
        do {
          puVar2 = (uint *)(puVar4 + -0x20);
          puVar4 = puVar4 + -0x20;
          lVar5 = lVar5 + -1;
          if (9 < ((byte)*puVar2 & 0x1f)) {
            if ((*puVar2 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar4);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar5 != 0);
        break;
      }
      if (9 < ((byte)local_d8[0] & 0x1f)) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_d8);
        }
        else {
          FUN_143592150();
        }
      }
      lVar6 = 3;
      puVar4 = &stack0xffffffffffffffc8;
      do {
        puVar2 = (uint *)(puVar4 + -0x20);
        puVar4 = puVar4 + -0x20;
        lVar6 = lVar6 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar4);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar6 != 0);
      uVar8 = uVar8 + 1;
      param_4 = local_res20;
    } while (uVar8 < uVar7);
  }
  if (((byte)local_b8[0] & 0x1f) < 10) {
    return;
  }
  if ((local_b8[0] >> 9 & 1) != 0) {
    FUN_143592150();
    return;
  }
  FUN_1435920c0(local_b8);
  return;
}



// FUNCTION 143620b50 FUN_143620b50 body=927 status=ok
// SIG undefined FUN_143620b50(void)

ulonglong FUN_143620b50(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  ulonglong in_RAX;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  uint local_d8 [2];
  longlong local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  uint local_58 [8];
  
  uVar9 = *param_2 & 0x1f;
  if (uVar9 == 0) goto LAB_143620edf;
  if (uVar9 == 0xc) {
    bVar11 = *(longlong *)(param_2 + 4) == 0;
LAB_143620b9f:
    in_RAX = CONCAT71((int7)(in_RAX >> 8),bVar11);
    if (bVar11 != false) goto LAB_143620edf;
  }
  else if (uVar9 == 10) {
    in_RAX = *(longlong *)(*(ulonglong *)(param_2 + 4) + 8) + 0x80;
    bVar11 = *(ulonglong *)(param_2 + 4) == in_RAX;
    goto LAB_143620b9f;
  }
  local_res20 = param_4;
  if ((uVar9 < 5) || (uVar9 - 8 < 4)) {
    lVar6 = param_1[2];
    uVar4 = FUN_1435c8e40(local_d8,0x40a,lVar6);
    in_RAX = FUN_1435cbe70(lVar6,uVar4);
    piVar1 = (int *)(local_d0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_RAX = FUN_14335f920();
    }
LAB_143620edf:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar10 = 0;
  uVar9 = *param_3 & 0x1f;
  if (uVar9 == 0) {
LAB_143620c0d:
    bVar11 = true;
  }
  else {
    if (uVar9 == 0xc) {
      bVar11 = *(longlong *)(param_3 + 4) == 0;
LAB_143620c02:
      if (bVar11) goto LAB_143620c0d;
    }
    else if (uVar9 == 10) {
      bVar11 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_143620c02;
    }
    bVar11 = false;
  }
  puVar3 = param_2;
  if (!bVar11) {
    puVar3 = param_3;
  }
  local_b0 = *(undefined8 *)(puVar3 + 2);
  local_b8[0] = *puVar3;
  local_a8 = puVar3[4];
  uStack_a4 = puVar3[5];
  uStack_a0 = puVar3[6];
  uStack_9c = puVar3[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070();
    }
    else {
      FUN_143592140();
    }
  }
  uVar9 = (**(code **)(*param_1 + 8))(param_1);
  if (uVar9 != 0) {
    lVar6 = 3;
    do {
      puVar3 = (uint *)FUN_143590540();
      local_98[0] = *puVar3;
      local_90 = *(undefined8 *)(puVar3 + 2);
      local_88 = puVar3[4];
      uStack_84 = puVar3[5];
      uStack_80 = puVar3[6];
      uStack_7c = puVar3[7];
      if (9 < ((byte)*puVar3 & 0x1f)) {
        if ((*puVar3 >> 9 & 1) == 0) {
          FUN_143592070(puVar3);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = uVar10;
      FUN_143590110(local_58,param_4);
      local_d8[0] = 0;
      local_d0 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,uVar10,local_98);
      local_res10[0] = 3;
      FUN_1435ce880(param_1[2],param_2,local_b8,local_d8,local_res10,local_98,0,1);
      bVar2 = (byte)local_d8[0];
      if (*(char *)(param_1[2] + 0xb8) != '\0') {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar3 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar6 = lVar6 + -1;
          if (9 < ((byte)*puVar3 & 0x1f)) {
            if ((*puVar3 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar6 != 0);
        break;
      }
      if ((bVar2 & 0x1f) != 1) {
        uVar8 = 0;
LAB_143620d8c:
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar3 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar6 = lVar6 + -1;
          if (9 < ((byte)*puVar3 & 0x1f)) {
            if ((*puVar3 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar6 != 0);
        goto LAB_143620e42;
      }
      if (local_c8 == '\x01') {
        uVar8 = 1;
        goto LAB_143620d8c;
      }
      lVar7 = 3;
      puVar5 = &stack0xffffffffffffffc8;
      do {
        puVar3 = (uint *)(puVar5 + -0x20);
        puVar5 = puVar5 + -0x20;
        lVar7 = lVar7 + -1;
        if (9 < ((byte)*puVar3 & 0x1f)) {
          if ((*puVar3 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar5);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar7 != 0);
      uVar10 = uVar10 + 1;
      param_4 = local_res20;
    } while (uVar10 < uVar9);
  }
  uVar8 = 0;
LAB_143620e42:
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return uVar8;
    }
    FUN_1435920c0(local_b8);
  }
  return uVar8;
}



// FUNCTION 143620f00 FUN_143620f00 body=93 status=ok
// SIG undefined FUN_143620f00(void)

undefined8 * FUN_143620f00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4e758;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4e730;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143620f70 FUN_143620f70 body=145 status=ok
// SIG undefined FUN_143620f70(void)

undefined8 *
FUN_143620f70(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [8];
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b4e758;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[10] = *(longlong *)(param_2 + 0x98);
  param_1[8] = &PTR_FUN_145b4e730;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = uVar1;
  pcVar2 = (char *)FUN_143636070(param_1 + 8,local_res18,param_3);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(param_1 + 9) = param_4;
  }
  return param_1;
}



// FUNCTION 143621010 FUN_143621010 body=208 status=ok
// SIG undefined FUN_143621010(void)

void FUN_143621010(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  if (param_2 != 0) {
    pcVar4 = (char *)FUN_143590eb0(param_3,local_res10,local_res20);
    if (*pcVar4 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = FUN_1435c8e40(local_38,0x466,uVar2);
      FUN_1435cbdf0(uVar2,uVar5);
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
    }
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    FUN_1434f0030(param_1 + 0x58,(ulonglong)local_res20[0]);
    for (; uVar6 < local_res20[0]; uVar6 = uVar6 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + uVar6 * 4) = 0;
    }
  }
  if (1 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x20);
    *(undefined1 *)(param_1 + 0x48) = uVar3;
  }
  return;
}



// FUNCTION 1436210f0 FUN_1436210f0 body=130 status=ok
// SIG undefined FUN_1436210f0(void)

void FUN_1436210f0(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *param_2;
  bVar2 = (byte)uVar1 & 0x1f;
  if (param_3 != 0) {
    if (9 < bVar2) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe3;
    *param_2 = *param_2 | 3;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 + -1);
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < bVar2) {
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe0;
  return;
}



// FUNCTION 143621180 FUN_143621180 body=106 status=ok
// SIG undefined FUN_143621180(void)

int * FUN_143621180(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  *param_2 = 0;
  iVar2 = (**(code **)(lVar1 + 8))(param_1 + 0x40);
  if ((longlong)((ulonglong)param_3 - 1) < 0) {
    param_3 = 0;
    if (iVar2 == 0) {
      return param_2;
    }
  }
  else if ((ulonglong)(iVar2 - 1) <= (ulonglong)param_3 - 1) {
    return param_2;
  }
  *param_2 = param_3 + 1;
  return param_2;
}



// FUNCTION 1436211f0 FUN_1436211f0 body=138 status=ok
// SIG undefined FUN_1436211f0(void)

undefined8 FUN_1436211f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_143636480(param_1 + 0x40,param_2,local_18[0],param_4,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x230));
  }
  return param_2;
}



// FUNCTION 143621280 FUN_143621280 body=112 status=ok
// SIG undefined FUN_143621280(void)

undefined8 FUN_143621280(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18[0]);
  }
  return param_2;
}



// FUNCTION 143621300 FUN_143621300 body=202 status=ok
// SIG undefined FUN_143621300(void)

undefined1 * FUN_143621300(longlong param_1,undefined1 *param_2,ulonglong param_3,uint *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  longlong lStack_10;
  
  if ((-1 < (longlong)param_3) && (*(uint *)(param_1 + 0x60) <= param_3)) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x465,uVar3);
    FUN_1435cbdf0(uVar3,uVar4);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x60)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (param_3 & 0xffffffff) * 4);
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
    *(longlong *)(param_4 + 6) = lStack_10;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1436213d0 FUN_1436213d0 body=116 status=ok
// SIG undefined FUN_1436213d0(void)

undefined8 FUN_1436213d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char local_res18 [8];
  undefined4 local_res20 [2];
  
  FUN_1435bdeb0(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] != '\0') {
    FUN_143635eb0(param_1 + 0x40,param_2,local_res20[0]);
    return param_2;
  }
  FUN_1435b0650(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143621450 FUN_143621450 body=110 status=ok
// SIG undefined FUN_143621450(void)

ulonglong FUN_143621450(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  uint local_res20 [2];
  
  FUN_1435bdeb0(local_res10,param_2 + 0x10,local_res20);
  if (local_res10[0] != '\0') {
    return (ulonglong)(local_res20[0] < *(uint *)(param_1 + 0x60));
  }
  uVar1 = FUN_1435b0590(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 1436214d0 deltaGet body=6 status=ok
// SIG undefined deltaGet(void)

void Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 1436214e0 FUN_1436214e0 body=26 status=ok
// SIG undefined FUN_1436214e0(void)

void FUN_1436214e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  
  FUN_143636070(param_1 + 0x40,local_res18,param_3);
  return;
}



// FUNCTION 143621510 FUN_143621510 body=7 status=ok
// SIG undefined FUN_143621510(void)

void FUN_143621510(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  return;
}


