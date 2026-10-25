// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143304fb0 FUN_143304fb0 body=76 status=ok
// SIG undefined FUN_143304fb0(void)

void FUN_143304fb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = 0;
  local_30 = 0x10;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_143305300(0xffffffffffffffff,*(undefined8 *)(param_1 + 0x18),&local_48,param_2,param_3);
  return;
}



// FUNCTION 143305010 FUN_143305010 body=15 status=ok
// SIG undefined FUN_143305010(void)

void FUN_143305010(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143305430(param_1,*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  return;
}



// FUNCTION 143305030 FUN_143305030 body=92 status=ok
// SIG undefined FUN_143305030(void)

longlong FUN_143305030(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1433055b0(param_1 + 0x18);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    FUN_1433057a0(param_1 + 0x18,lVar2);
    if (lVar2 != 0) {
      FUN_1432f4c10(param_1 + 0x20,lVar2);
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - *(longlong *)(lVar2 + 0x48);
    }
  }
  return lVar2;
}



// FUNCTION 1433050a0 FUN_1433050a0 body=456 status=ok
// SIG undefined FUN_1433050a0(void)

longlong * FUN_1433050a0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((ulonglong)param_1[2] < param_3) {
    plVar4 = (longlong *)FUN_1433055b0(param_1 + 3);
    if (plVar4 != (longlong *)0x0) {
      uVar1 = *param_1;
      plVar8 = plVar4;
      do {
        uVar7 = (longlong)plVar4 + param_3 & ~param_3;
        for (uVar5 = uVar7 - (longlong)plVar4; (uVar5 != 0 && (uVar5 < 0x80));
            uVar5 = uVar5 + param_3 + 1) {
          uVar7 = uVar7 + param_3 + 1;
        }
        if (uVar7 + (param_2 << ((byte)uVar1 & 0x3f)) <=
            (ulonglong)((plVar4[9] << ((byte)uVar1 & 0x3f)) + (longlong)plVar4)) {
          plVar8 = (longlong *)*plVar4;
          if (plVar8 == plVar4) {
            FUN_1432f4b50(param_1 + 3,plVar4);
          }
          else {
            plVar2 = (longlong *)plVar4[1];
            *plVar2 = (longlong)plVar8;
            plVar8[1] = (longlong)plVar2;
            lVar3 = plVar4[2];
            if (lVar3 != 0) {
              if (plVar4 == (longlong *)param_1[3]) {
                param_1[3] = plVar8;
              }
              else {
                lVar6 = 0x18;
                if (*(longlong **)(lVar3 + 0x18) != plVar4) {
                  lVar6 = 0x20;
                }
                *(longlong **)(lVar6 + lVar3) = plVar8;
              }
              plVar8[2] = lVar3;
              lVar3 = plVar4[3];
              if (lVar3 != 0) {
                plVar8[3] = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar8;
              }
              lVar3 = plVar4[4];
              if (lVar3 != 0) {
                plVar8[4] = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar8;
              }
            }
            plVar4[4] = 0;
            plVar4[3] = 0;
            plVar4[2] = 0;
          }
          FUN_1432f4c10(param_1 + 4,plVar4);
          param_1[5] = param_1[5] - plVar4[9];
          return plVar4;
        }
        plVar4 = (longlong *)plVar4[1];
      } while ((plVar4 != plVar8) ||
              (plVar4 = (longlong *)FUN_1433055b0(param_1 + 3,plVar4[9] + 1), plVar8 = plVar4,
              plVar4 != (longlong *)0x0));
    }
  }
  else {
    lVar3 = FUN_1433055b0(param_1 + 3);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 8);
      FUN_1433057a0(param_1 + 3,plVar4);
      if (plVar4 != (longlong *)0x0) {
        FUN_1432f4c10(param_1 + 4,plVar4);
        param_1[5] = param_1[5] - plVar4[9];
        return plVar4;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143305270 FUN_143305270 body=136 status=ok
// SIG undefined FUN_143305270(void)

void FUN_143305270(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = (((*(longlong *)(param_2 + 0x48) << ((byte)*param_1 & 0x3f)) - param_3) - param_4) +
          param_2;
  if (param_3 - param_2 != 0) {
    FUN_143305860(param_1,param_2,uVar1,(ulonglong)(param_3 - param_2) >> ((byte)*param_1 & 0x3f));
  }
  if (uVar2 != 0) {
    FUN_143305860(param_1,param_3 + param_4,uVar1,uVar2 >> ((byte)*param_1 & 0x3f));
  }
  return;
}



// FUNCTION 143305300 FUN_143305300 body=187 status=ok
// SIG undefined FUN_143305300(void)

void FUN_143305300(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x20)) {
    FUN_143305300(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4,param_5);
    lVar1 = param_2;
    do {
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x28);
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x20);
      (**(code **)(*param_4 + 8))
                (param_4,param_3,lVar1,*(longlong *)(lVar1 + 0x48) << ((byte)*param_1 & 0x3f),
                 param_5);
      lVar1 = *(longlong *)(lVar1 + 8);
    } while (lVar1 != param_2);
  }
  return;
}



// FUNCTION 1433053d0 FUN_1433053d0 body=86 status=ok
// SIG undefined FUN_1433053d0(void)

void FUN_1433053d0(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2 + 0xfffU & 0xfffffffffffff000;
  uVar2 = (*(longlong *)(param_2 + 0x48) << ((byte)*param_1 & 0x3f)) + param_2 & 0xfffffffffffff000;
  if (uVar1 + 0x1000 <= uVar2) {
    (**(code **)(*param_3 + 8))(param_3,param_4,0,uVar1,uVar2 - uVar1);
  }
  return;
}



// FUNCTION 143305430 FUN_143305430 body=197 status=ok
// SIG undefined FUN_143305430(void)

void FUN_143305430(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x20)) {
    FUN_143305430(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
    lVar2 = param_2;
    do {
      uVar3 = lVar2 + 0xfffU & 0xfffffffffffff000;
      uVar1 = (*(longlong *)(lVar2 + 0x48) << ((byte)*param_1 & 0x3f)) + lVar2 & 0xfffffffffffff000;
      if (uVar3 + 0x1000 <= uVar1) {
        (**(code **)(*param_3 + 8))(param_3,param_4,0,uVar3,uVar1 - uVar3);
      }
      lVar2 = *(longlong *)(lVar2 + 8);
    } while (lVar2 != param_2);
  }
  return;
}



// FUNCTION 143305500 FUN_143305500 body=170 status=ok
// SIG undefined FUN_143305500(void)

ulonglong FUN_143305500(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = *param_1;
  uVar1 = 0;
  uVar6 = 0xffffffffffffffff;
  uVar4 = uVar1;
  uVar7 = param_2;
  if (uVar5 != 0) {
    while( true ) {
      uVar2 = uVar5 - param_2;
      if (((param_2 <= uVar5) && (uVar2 < uVar6)) && (uVar4 = uVar5, uVar6 = uVar2, uVar2 == 0)) {
        return uVar5;
      }
      uVar2 = *(ulonglong *)(uVar5 + 0x38);
      uVar5 = *(ulonglong *)(uVar5 + 0x30 + ((longlong)uVar7 >> 0x3f) * -8);
      if ((uVar2 != 0) && (uVar2 != uVar5)) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      if (uVar5 == 0) break;
      uVar7 = uVar7 * 2;
    }
    for (; uVar1 = uVar4, uVar2 != 0; uVar2 = *(ulonglong *)(lVar3 + uVar2)) {
      if ((param_2 <= uVar2) && (uVar2 - param_2 < uVar6)) {
        uVar1 = uVar2;
        uVar6 = uVar2 - param_2;
      }
      lVar3 = 0x30;
      if (*(longlong *)(uVar2 + 0x30) == 0) {
        lVar3 = 0x38;
      }
      uVar4 = uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 1433055b0 FUN_1433055b0 body=184 status=ok
// SIG undefined FUN_1433055b0(void)

longlong FUN_1433055b0(longlong *param_1,ulonglong param_2)

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
      uVar4 = *(longlong *)(lVar3 + 0x48) - param_2;
      if (((param_2 <= *(ulonglong *)(lVar3 + 0x48)) && (uVar4 < uVar7)) &&
         (lVar6 = lVar3, uVar7 = uVar4, uVar4 == 0)) {
        return lVar3;
      }
      lVar1 = *(longlong *)(lVar3 + 0x20);
      lVar3 = *(longlong *)(lVar3 + 0x18 + ((longlong)uVar5 >> 0x3f) * -8);
      if ((lVar1 != 0) && (lVar1 != lVar3)) {
        lVar2 = lVar1;
      }
      lVar1 = lVar2;
      if (lVar3 == 0) break;
      uVar5 = uVar5 * 2;
    }
    for (; lVar2 = lVar6, lVar1 != 0; lVar1 = *(longlong *)(lVar3 + lVar1)) {
      uVar5 = *(longlong *)(lVar1 + 0x48) - param_2;
      if ((param_2 <= *(ulonglong *)(lVar1 + 0x48)) && (uVar5 < uVar7)) {
        lVar2 = lVar1;
        uVar7 = uVar5;
      }
      lVar3 = 0x18;
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        lVar3 = 0x20;
      }
      lVar6 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 143305670 FUN_143305670 body=170 status=ok
// SIG undefined FUN_143305670(void)

ulonglong FUN_143305670(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = *param_1;
  uVar1 = 0;
  uVar6 = 0xffffffffffffffff;
  uVar4 = uVar1;
  uVar7 = param_2;
  if (uVar5 != 0) {
    while( true ) {
      uVar2 = param_2 - uVar5;
      if (((uVar5 <= param_2) && (uVar2 < uVar6)) && (uVar4 = uVar5, uVar6 = uVar2, uVar2 == 0)) {
        return uVar5;
      }
      uVar2 = *(ulonglong *)(uVar5 + 0x30);
      uVar5 = *(ulonglong *)(uVar5 + 0x30 + ((longlong)uVar7 >> 0x3f) * -8);
      if ((uVar2 != 0) && (uVar2 != uVar5)) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      if (uVar5 == 0) break;
      uVar7 = uVar7 * 2;
    }
    for (; uVar1 = uVar4, uVar2 != 0; uVar2 = *(ulonglong *)(lVar3 + uVar2)) {
      if ((uVar2 <= param_2) && (param_2 - uVar2 < uVar6)) {
        uVar1 = uVar2;
        uVar6 = param_2 - uVar2;
      }
      lVar3 = 0x30;
      if (*(longlong *)(uVar2 + 0x38) != 0) {
        lVar3 = 0x38;
      }
      uVar4 = uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 143305720 FUN_143305720 body=115 status=ok
// SIG undefined FUN_143305720(void)

void FUN_143305720(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = (longlong)param_2;
  param_2[1] = (longlong)param_2;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_1 = (longlong)param_2;
    param_2[2] = (longlong)param_1;
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 0x48);
  lVar4 = param_2[9];
  while( true ) {
    if (lVar2 == param_2[9]) {
      param_2[1] = *(longlong *)(lVar1 + 8);
      *param_2 = lVar1;
      *(longlong **)(lVar1 + 8) = param_2;
      *(longlong **)param_2[1] = param_2;
      return;
    }
    lVar3 = *(longlong *)(lVar1 + 0x18 + (lVar4 >> 0x3f) * -8);
    if (lVar3 == 0) break;
    lVar2 = *(longlong *)(lVar3 + 0x48);
    lVar1 = lVar3;
    lVar4 = lVar4 * 2;
  }
  *(longlong **)(lVar1 + (lVar4 >> 0x3f) * -8 + 0x18) = param_2;
  param_2[2] = lVar1;
  return;
}



// FUNCTION 1433057a0 FUN_1433057a0 body=117 status=ok
// SIG undefined FUN_1433057a0(void)

void FUN_1433057a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != param_2) {
    plVar2 = (longlong *)param_2[1];
    *plVar2 = (longlong)plVar1;
    plVar1[1] = (longlong)plVar2;
    lVar3 = param_2[2];
    if (lVar3 != 0) {
      if (param_2 == (longlong *)*param_1) {
        *param_1 = (longlong)plVar1;
      }
      else {
        lVar4 = 0x18;
        if (*(longlong **)(lVar3 + 0x18) != param_2) {
          lVar4 = 0x20;
        }
        *(longlong **)(lVar4 + lVar3) = plVar1;
      }
      plVar1[2] = lVar3;
      lVar3 = param_2[3];
      if (lVar3 != 0) {
        plVar1[3] = lVar3;
        *(longlong **)(lVar3 + 0x10) = plVar1;
      }
      lVar3 = param_2[4];
      if (lVar3 != 0) {
        plVar1[4] = lVar3;
        *(longlong **)(lVar3 + 0x10) = plVar1;
      }
    }
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return;
  }
  FUN_1432f4b50();
  return;
}



// FUNCTION 143305820 FUN_143305820 body=55 status=ok
// SIG undefined FUN_143305820(void)

void FUN_143305820(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_2 + 0x48);
  FUN_1433057a0(param_1 + 0x18);
  FUN_1432f4c10(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 143305860 FUN_143305860 body=158 status=ok
// SIG undefined FUN_143305860(void)

void FUN_143305860(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(longlong *)(param_2 + 0x48) = param_4;
  *(undefined8 *)(param_2 + 0x40) = param_3;
  FUN_143305720(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar2 = *plVar1;
  lVar5 = param_2;
  if (*plVar1 == 0) {
    *plVar1 = param_2;
    *(longlong **)(param_2 + 0x28) = plVar1;
  }
  else {
    do {
      lVar4 = lVar2;
      if (lVar4 == param_2) goto LAB_1433058ea;
      lVar3 = lVar5 >> 0x3f;
      lVar2 = *(longlong *)(lVar4 + 0x30 + lVar3 * -8);
      lVar5 = lVar5 * 2;
    } while (lVar2 != 0);
    *(longlong *)(lVar4 + lVar3 * -8 + 0x30) = param_2;
    *(longlong *)(param_2 + 0x28) = lVar4;
  }
LAB_1433058ea:
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_4;
  return;
}



// FUNCTION 143305900 GetTicksMs body=40 status=ok
// SIG undefined GetTicksMs(void)

void Scaleform::Timer::GetTicksMs(void)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  if (DAT_146b642c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014330591f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b642c0 + 8))(DAT_146b642c0,DVar1);
    return;
  }
  return;
}



// FUNCTION 143305930 GetTicks body=115 status=ok
// SIG undefined GetTicks(void)

longlong Scaleform::Timer::GetTicks(void)

{
  DWORD DVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b64280);
  DVar1 = timeGetTime();
  if (DAT_146b642c0 != (longlong *)0x0) {
    DVar1 = (**(code **)(*DAT_146b642c0 + 8))(DAT_146b642c0,DVar1);
  }
  if (DVar1 < DAT_146b642a8) {
    DAT_146b642ac = DAT_146b642ac + 1;
  }
  lVar2 = CONCAT44(DAT_146b642ac,DVar1);
  DAT_146b642a8 = DVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b64280);
  return lVar2 * 1000;
}



// FUNCTION 1433059b0 FUN_1433059b0 body=141 status=ok
// SIG undefined FUN_1433059b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1433059b0(void)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER LVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(&local_res8);
  LVar1 = local_res8;
  if (DAT_146b642c0 != (longlong *)0x0) {
    LVar1.QuadPart = (**(code **)(*DAT_146b642c0 + 0x10))(DAT_146b642c0,local_res8.QuadPart);
  }
  if (DAT_146b642b8.QuadPart == 0) {
    QueryPerformanceFrequency(local_res10);
    DAT_146b642b8 = local_res10[0];
  }
  LVar2 = DAT_146b642b8;
  if (DAT_146b642c0 != (longlong *)0x0) {
    LVar2.QuadPart = (**(code **)(*DAT_146b642c0 + 0x18))(DAT_146b642c0,DAT_146b642b8.QuadPart);
  }
  return (ulonglong)((LVar1.QuadPart - _DAT_146b642b0) * 1000000) / (ulonglong)LVar2.QuadPart;
}



// FUNCTION 143305a50 FUN_143305a50 body=83 status=ok
// SIG undefined FUN_143305a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143305a50(void)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  if (DAT_146b642c0 != (longlong *)0x0) {
    lVar1 = (**(code **)(*DAT_146b642c0 + 0x10))(DAT_146b642c0,local_res8[0].QuadPart);
    FUN_143305c50(lVar1 - _DAT_146b642b0);
    return;
  }
  FUN_143305c50(local_res8[0].QuadPart - _DAT_146b642b0);
  return;
}



// FUNCTION 143305ab0 GetRawTicks body=53 status=ok
// SIG undefined GetRawTicks(void)

undefined8 Scaleform::Timer::GetRawTicks(void)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  if (DAT_146b642c0 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_146b642c0 + 0x10))(DAT_146b642c0,local_res8[0].QuadPart);
    return uVar1;
  }
  return local_res8[0].s;
}



// FUNCTION 143305af0 GetRawFrequency body=76 status=ok
// SIG undefined GetRawFrequency(void)

longlong Scaleform::Timer::GetRawFrequency(void)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_146b642b8.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_146b642b8 = local_res8[0];
  }
  if (DAT_146b642c0 != (longlong *)0x0) {
    lVar1 = (**(code **)(*DAT_146b642c0 + 0x18))(DAT_146b642c0,DAT_146b642b8.QuadPart);
    return lVar1;
  }
  return (longlong)DAT_146b642b8.s;
}



// FUNCTION 143305b70 initializeTimerSystem body=89 status=ok
// SIG undefined initializeTimerSystem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Scaleform::Timer::initializeTimerSystem(void)

{
  LARGE_INTEGER local_res8 [4];
  
  timeBeginPeriod(1);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b64280);
  QueryPerformanceCounter(local_res8);
  _DAT_146b642b0 = local_res8[0];
  if (DAT_146b642b8.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_146b642b8 = local_res8[0];
  }
  return;
}



// FUNCTION 143305bd0 FUN_143305bd0 body=33 status=ok
// SIG undefined FUN_143305bd0(void)

void FUN_143305bd0(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_146b64280);
                    /* WARNING: Could not recover jumptable at 0x000143305bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  timeEndPeriod(1);
  return;
}



// FUNCTION 143305c00 FUN_143305c00 body=25 status=ok
// SIG undefined FUN_143305c00(void)

LARGE_INTEGER FUN_143305c00(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (LARGE_INTEGER)local_res8[0].QuadPart;
}



// FUNCTION 143305c20 FUN_143305c20 body=44 status=ok
// SIG undefined FUN_143305c20(void)

void FUN_143305c20(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_146b642b8.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_146b642b8 = local_res8[0];
  }
  return;
}



// FUNCTION 143305c50 FUN_143305c50 body=117 status=ok
// SIG undefined FUN_143305c50(void)

double FUN_143305c50(longlong param_1)

{
  LARGE_INTEGER LVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_146b642b8.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_146b642b8 = local_res8[0];
  }
  LVar1 = DAT_146b642b8;
  if (DAT_146b642c0 != (longlong *)0x0) {
    LVar1.QuadPart = (**(code **)(*DAT_146b642c0 + 0x18))();
  }
  dVar2 = (double)param_1;
  if (param_1 < 0) {
    dVar2 = dVar2 + 1.8446744073709552e+19;
  }
  dVar3 = (double)LVar1.QuadPart;
  if (LVar1.QuadPart < 0) {
    dVar3 = dVar3 + 1.8446744073709552e+19;
  }
  return dVar2 / dVar3;
}



// FUNCTION 143305cd0 FUN_143305cd0 body=442 status=ok
// SIG undefined FUN_143305cd0(void)

longlong FUN_143305cd0(byte *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *local_res8 [4];
  
  lVar5 = 0;
  if (param_2 == -1) {
    local_res8[0] = param_1;
    iVar2 = FUN_143307250(local_res8);
    while (iVar2 != 0) {
      lVar5 = lVar5 + 1;
      iVar2 = FUN_143307250(local_res8);
    }
  }
  else {
    lVar4 = lVar5;
    if (0 < param_2) {
      do {
        bVar1 = *param_1;
        lVar3 = lVar5 + 1;
        pbVar6 = param_1 + 1;
        if (bVar1 < 0x80) goto LAB_143305e47;
        if ((bVar1 & 0xe0) == 0xc0) {
LAB_143305e31:
          if ((*pbVar6 != 0) && ((*pbVar6 & 0xc0) == 0x80)) {
            pbVar6 = pbVar6 + 1;
            lVar3 = lVar3 + 1;
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
LAB_143305d37:
          bVar1 = *pbVar6;
joined_r0x000143305e21:
          if ((bVar1 != 0) && ((bVar1 & 0xc0) == 0x80)) {
            pbVar6 = pbVar6 + 1;
            lVar3 = lVar3 + 1;
            goto LAB_143305e31;
          }
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
LAB_143305d6b:
          if ((*pbVar6 != 0) && ((*pbVar6 & 0xc0) == 0x80)) {
            pbVar6 = pbVar6 + 1;
            lVar3 = lVar3 + 1;
            goto LAB_143305d37;
          }
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          if ((*pbVar6 != 0) && ((*pbVar6 & 0xc0) == 0x80)) {
            pbVar6 = param_1 + 2;
            lVar3 = lVar5 + 2;
            goto LAB_143305d6b;
          }
        }
        else if ((((bVar1 & 0xfe) == 0xfc) && (*pbVar6 != 0)) && ((*pbVar6 & 0xc0) == 0x80)) {
          pbVar6 = param_1 + 2;
          lVar3 = lVar5 + 2;
          if ((param_1[2] != 0) && ((param_1[2] & 0xc0) == 0x80)) {
            pbVar6 = param_1 + 3;
            lVar3 = lVar5 + 3;
            if ((param_1[3] != 0) && ((param_1[3] & 0xc0) == 0x80)) {
              bVar1 = param_1[4];
              pbVar6 = param_1 + 4;
              lVar3 = lVar5 + 4;
              goto joined_r0x000143305e21;
            }
          }
        }
LAB_143305e47:
        lVar4 = lVar4 + 1;
        lVar5 = lVar3;
        param_1 = pbVar6;
        if (param_2 <= lVar3) {
          return lVar4;
        }
      } while( true );
    }
  }
  return lVar5;
}



// FUNCTION 143305e90 FUN_143305e90 body=1023 status=ok
// SIG undefined FUN_143305e90(void)

ulonglong FUN_143305e90(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  byte *local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == -1) {
    while( true ) {
      uVar8 = FUN_143307250(local_res10);
      param_1 = param_1 + -1;
      if ((int)uVar8 == 0) break;
      if (param_1 < 0) {
        return uVar8;
      }
    }
  }
  else if (0 < param_3) {
    lVar10 = 0;
    do {
      bVar1 = *param_2;
      lVar11 = lVar10 + 1;
      pbVar9 = param_2 + 1;
      if (bVar1 == 0) {
        uVar8 = 0;
      }
      else if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) {
            uVar8 = 0;
          }
          else {
            if ((bVar2 & 0xc0) != 0x80) goto LAB_143306251;
            pbVar9 = param_2 + 2;
            lVar11 = lVar10 + 2;
            uVar7 = ((int)(char)bVar1 & 0x1fU) << 6 | (int)(char)bVar2 & 0x3fU;
            uVar8 = (ulonglong)uVar7;
            if (uVar7 < 0x80) {
              uVar8 = 0xfffd;
            }
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) {
            uVar8 = 0;
          }
          else if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            lVar11 = lVar10 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) {
              uVar8 = 0;
            }
            else {
              if ((bVar3 & 0xc0) != 0x80) goto LAB_143306251;
              pbVar9 = param_2 + 3;
              lVar11 = lVar10 + 3;
              uVar7 = ((int)(char)bVar1 & 0xfU) << 0xc | ((int)(char)bVar2 & 0x3fU) << 6 |
                      (int)(char)bVar3 & 0x3fU;
              uVar8 = (ulonglong)uVar7;
              if (uVar7 < 0x800) {
                uVar8 = 0xfffd;
              }
            }
          }
          else {
LAB_143306251:
            uVar8 = 0xfffd;
          }
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) {
            uVar8 = 0;
          }
          else {
            if ((bVar2 & 0xc0) != 0x80) goto LAB_143306251;
            pbVar9 = param_2 + 2;
            lVar11 = lVar10 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) {
              uVar8 = 0;
            }
            else {
              if ((bVar3 & 0xc0) != 0x80) goto LAB_143306251;
              pbVar9 = param_2 + 3;
              lVar11 = lVar10 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) {
                uVar8 = 0;
              }
              else {
                if ((bVar4 & 0xc0) != 0x80) goto LAB_143306251;
                pbVar9 = param_2 + 4;
                lVar11 = lVar10 + 4;
                uVar7 = ((int)(char)bVar1 & 7U) << 0x12 | ((int)(char)bVar2 & 0x3fU) << 0xc |
                        ((int)(char)bVar3 & 0x3fU) << 6 | (int)(char)bVar4 & 0x3fU;
                uVar8 = (ulonglong)uVar7;
                if (uVar7 < 0x10000) {
                  uVar8 = 0xfffd;
                }
              }
            }
          }
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) {
            uVar8 = 0;
          }
          else {
            if ((bVar2 & 0xc0) != 0x80) goto LAB_143306251;
            pbVar9 = param_2 + 2;
            lVar11 = lVar10 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) {
              uVar8 = 0;
            }
            else {
              if ((bVar3 & 0xc0) != 0x80) goto LAB_143306251;
              pbVar9 = param_2 + 3;
              lVar11 = lVar10 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) {
                uVar8 = 0;
              }
              else {
                if ((bVar4 & 0xc0) != 0x80) goto LAB_143306251;
                pbVar9 = param_2 + 4;
                lVar11 = lVar10 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) {
                  uVar8 = 0;
                }
                else {
                  if ((bVar5 & 0xc0) != 0x80) goto LAB_143306251;
                  pbVar9 = param_2 + 5;
                  lVar11 = lVar10 + 5;
                  uVar7 = ((int)(char)bVar1 & 3U) << 0x18 | ((int)(char)bVar2 & 0x3fU) << 0x12 |
                          ((int)(char)bVar3 & 0x3fU) << 0xc | ((int)(char)bVar4 & 0x3fU) << 6 |
                          (int)(char)bVar5 & 0x3fU;
                  uVar8 = (ulonglong)uVar7;
                  if (uVar7 < 0x200000) {
                    uVar8 = 0xfffd;
                  }
                }
              }
            }
          }
        }
        else {
          if ((bVar1 & 0xfe) != 0xfc) goto LAB_143306251;
          bVar2 = *pbVar9;
          if (bVar2 == 0) {
            uVar8 = 0;
          }
          else {
            if ((bVar2 & 0xc0) != 0x80) goto LAB_143306251;
            pbVar9 = param_2 + 2;
            lVar11 = lVar10 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) {
              uVar8 = 0;
            }
            else {
              if ((bVar3 & 0xc0) != 0x80) goto LAB_143306251;
              pbVar9 = param_2 + 3;
              lVar11 = lVar10 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) {
                uVar8 = 0;
              }
              else {
                if ((bVar4 & 0xc0) != 0x80) goto LAB_143306251;
                pbVar9 = param_2 + 4;
                lVar11 = lVar10 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) {
                  uVar8 = 0;
                }
                else {
                  if ((bVar5 & 0xc0) != 0x80) goto LAB_143306251;
                  pbVar9 = param_2 + 5;
                  lVar11 = lVar10 + 5;
                  bVar6 = *pbVar9;
                  if (bVar6 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    if ((bVar6 & 0xc0) != 0x80) goto LAB_143306251;
                    pbVar9 = param_2 + 6;
                    lVar11 = lVar10 + 6;
                    uVar7 = ((int)(char)bVar1 & 1U) << 0x1e | ((int)(char)bVar2 & 0x3fU) << 0x18 |
                            ((int)(char)bVar3 & 0x3fU) << 0x12 | ((int)(char)bVar4 & 0x3fU) << 0xc |
                            ((int)(char)bVar5 & 0x3fU) << 6 | (int)(char)bVar6 & 0x3fU;
                    uVar8 = (ulonglong)uVar7;
                    if (uVar7 < 0x4000000) {
                      uVar8 = 0xfffd;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar8 = (ulonglong)(uint)(int)(char)bVar1;
      }
      if (param_1 == 0) {
        return uVar8;
      }
      param_1 = param_1 + -1;
      param_2 = pbVar9;
      lVar10 = lVar11;
      if (param_3 <= lVar11) {
        return uVar8;
      }
    } while( true );
  }
  return 0;
}



// FUNCTION 1433062a0 FUN_1433062a0 body=481 status=ok
// SIG undefined FUN_1433062a0(void)

longlong FUN_1433062a0(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *local_res10 [3];
  
  pbVar6 = param_2;
  if (param_3 == -1) {
    local_res10[0] = param_2;
    if (0 < param_1) {
      do {
        param_1 = param_1 + -1;
        iVar2 = FUN_143307250(local_res10);
        if (iVar2 == 0) {
          return (longlong)local_res10[0] - (longlong)param_2;
        }
      } while (0 < param_1);
      return (longlong)local_res10[0] - (longlong)param_2;
    }
  }
  else if (0 < param_3) {
    lVar3 = 0;
    do {
      if (param_1 < 1) break;
      bVar1 = *pbVar6;
      lVar4 = lVar3 + 1;
      pbVar5 = pbVar6 + 1;
      if (bVar1 < 0x80) goto LAB_143306420;
      if ((bVar1 & 0xe0) == 0xc0) {
LAB_14330640a:
        if ((*pbVar5 != 0) && ((*pbVar5 & 0xc0) == 0x80)) {
          pbVar5 = pbVar5 + 1;
          lVar4 = lVar4 + 1;
        }
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
LAB_143306310:
        bVar1 = *pbVar5;
joined_r0x0001433063fa:
        if ((bVar1 != 0) && ((bVar1 & 0xc0) == 0x80)) {
          pbVar5 = pbVar5 + 1;
          lVar4 = lVar4 + 1;
          goto LAB_14330640a;
        }
      }
      else if ((bVar1 & 0xf8) == 0xf0) {
LAB_143306344:
        if ((*pbVar5 != 0) && ((*pbVar5 & 0xc0) == 0x80)) {
          pbVar5 = pbVar5 + 1;
          lVar4 = lVar4 + 1;
          goto LAB_143306310;
        }
      }
      else if ((bVar1 & 0xfc) == 0xf8) {
        if ((*pbVar5 != 0) && ((*pbVar5 & 0xc0) == 0x80)) {
          pbVar5 = pbVar6 + 2;
          lVar4 = lVar3 + 2;
          goto LAB_143306344;
        }
      }
      else if ((((bVar1 & 0xfe) == 0xfc) && (*pbVar5 != 0)) && ((*pbVar5 & 0xc0) == 0x80)) {
        pbVar5 = pbVar6 + 2;
        lVar4 = lVar3 + 2;
        if ((pbVar6[2] != 0) && ((pbVar6[2] & 0xc0) == 0x80)) {
          pbVar5 = pbVar6 + 3;
          lVar4 = lVar3 + 3;
          if ((pbVar6[3] != 0) && ((pbVar6[3] & 0xc0) == 0x80)) {
            bVar1 = pbVar6[4];
            pbVar5 = pbVar6 + 4;
            lVar4 = lVar3 + 4;
            goto joined_r0x0001433063fa;
          }
        }
      }
LAB_143306420:
      param_1 = param_1 + -1;
      lVar3 = lVar4;
      pbVar6 = pbVar5;
    } while (lVar4 < param_3);
  }
  return (longlong)pbVar6 - (longlong)param_2;
}



// FUNCTION 143306490 FUN_143306490 body=133 status=ok
// SIG undefined FUN_143306490(void)

longlong FUN_143306490(ushort *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0;
  if (param_2 == -1) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (uVar1 < 0x80) {
          lVar3 = 1;
        }
        else {
          lVar3 = (ulonglong)(0x7ff < uVar1) + 2;
        }
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + lVar3;
        uVar1 = param_1[lVar2];
      } while (uVar1 != 0);
    }
  }
  else {
    iVar5 = 0;
    if (0 < param_2) {
      do {
        if (*param_1 < 0x80) {
          lVar2 = 1;
        }
        else {
          lVar2 = (ulonglong)(0x7ff < *param_1) + 2;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + lVar2;
        param_1 = param_1 + 1;
      } while (iVar5 < param_2);
      return lVar4;
    }
  }
  return lVar4;
}



// FUNCTION 143306520 FUN_143306520 body=523 status=ok
// SIG undefined FUN_143306520(void)

void FUN_143306520(undefined1 *param_1,ushort *param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong local_res8;
  ulonglong uVar5;
  
  uVar5 = 0;
  local_res8 = 0;
  if (param_3 == -1) {
    uVar2 = *param_2;
    if (uVar2 == 0) {
      *param_1 = 0;
      return;
    }
    do {
      FUN_143306ff0(param_1,&local_res8,uVar2);
      uVar2 = param_2[uVar5 + 1];
      uVar5 = uVar5 + 1;
    } while (uVar2 != 0);
    param_1[local_res8] = 0;
    return;
  }
  uVar6 = uVar5;
  if (param_3 < 1) {
    *param_1 = 0;
    return;
  }
  do {
    uVar2 = *param_2;
    bVar3 = (byte)uVar2;
    if (uVar2 < 0x80) {
      param_1[uVar6] = bVar3;
      uVar6 = uVar6 + 1;
    }
    else if (uVar2 < 0x800) {
      param_1[uVar6] = (byte)(uVar2 >> 6) | 0xc0;
      param_1[uVar6 + 1] = bVar3 & 0x3f | 0x80;
      uVar6 = uVar6 + 2;
    }
    else {
      uVar4 = (uint)uVar2;
      bVar1 = (byte)(uVar2 >> 8);
      if (uVar4 < 0x10000) {
        param_1[uVar6] = bVar1 >> 4 | 0xe0;
        param_1[uVar6 + 1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[uVar6 + 2] = bVar3 & 0x3f | 0x80;
        uVar6 = uVar6 + 3;
      }
      else if (uVar4 < 0x200000) {
        param_1[uVar6] = 0xf0;
        param_1[uVar6 + 1] = bVar1 >> 4 | 0x80;
        param_1[uVar6 + 2] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[uVar6 + 3] = bVar3 & 0x3f | 0x80;
        uVar6 = uVar6 + 4;
      }
      else if (uVar4 < 0x4000000) {
        param_1[uVar6] = 0xf8;
        param_1[uVar6 + 1] = 0x80;
        param_1[uVar6 + 2] = bVar1 >> 4 | 0x80;
        param_1[uVar6 + 3] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[uVar6 + 4] = bVar3 & 0x3f | 0x80;
        uVar6 = uVar6 + 5;
      }
      else if (uVar4 < 0x80000000) {
        param_1[uVar6] = 0xfc;
        param_1[uVar6 + 1] = 0x80;
        param_1[uVar6 + 2] = 0x80;
        param_1[uVar6 + 3] = bVar1 >> 4 | 0x80;
        param_1[uVar6 + 4] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[uVar6 + 5] = bVar3 & 0x3f | 0x80;
        uVar6 = uVar6 + 6;
      }
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    param_2 = param_2 + 1;
  } while ((int)uVar4 < param_3);
  param_1[uVar6] = 0;
  return;
}



// FUNCTION 143306740 FUN_143306740 body=217 status=ok
// SIG undefined FUN_143306740(void)

void FUN_143306740(longlong param_1,ulonglong param_2,short *param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong local_res10;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    local_res10 = 0;
    uVar3 = uVar2;
    if (param_4 == -1) {
      if (0 < (longlong)param_2) {
        do {
          uVar3 = local_res10;
          if (*param_3 == 0) break;
          FUN_143307100(param_1,param_2 - local_res10,&local_res10,*param_3);
          param_3 = param_3 + 1;
          uVar3 = local_res10;
        } while ((longlong)local_res10 < (longlong)param_2);
      }
    }
    else if (0 < param_4) {
      do {
        uVar3 = local_res10;
        if ((longlong)param_2 <= (longlong)local_res10) break;
        FUN_143307100(param_1,param_2 - local_res10,&local_res10,*param_3);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        param_3 = param_3 + 1;
        uVar3 = local_res10;
      } while ((int)uVar1 < param_4);
    }
    if (param_2 != uVar3 && -1 < (longlong)(param_2 - uVar3)) {
      *(undefined1 *)(uVar3 + param_1) = 0;
      return;
    }
    *(undefined1 *)(param_1 + -1 + param_2) = 0;
  }
  return;
}



// FUNCTION 143306820 FUN_143306820 body=921 status=ok
// SIG undefined FUN_143306820(void)

longlong FUN_143306820(undefined2 *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  bool bVar11;
  byte *local_res8;
  
  puVar10 = param_1;
  if (param_3 == -1) {
    while( true ) {
      bVar1 = *param_2;
      pbVar9 = param_2 + 1;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            uVar8 = ((int)(char)bVar1 & 0x1fU) << 6 | (int)(char)bVar2 & 0x3fU;
            bVar11 = uVar8 < 0x80;
LAB_1433068a0:
            if (!bVar11) goto LAB_143306b44;
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_2 + 3;
              uVar8 = ((int)(char)bVar1 & 0xfU) << 0xc | ((int)(char)bVar2 & 0x3fU) << 6 |
                      (int)(char)bVar3 & 0x3fU;
              bVar11 = uVar8 < 0x800;
              goto LAB_1433068a0;
            }
          }
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_2 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_2 + 4;
                uVar8 = ((int)(char)bVar1 & 7U) << 0x12 | ((int)(char)bVar2 & 0x3fU) << 0xc |
                        ((int)(char)bVar3 & 0x3fU) << 6 | (int)(char)bVar4 & 0x3fU;
                bVar11 = uVar8 < 0x10000;
                goto LAB_1433068a0;
              }
            }
          }
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_2 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_2 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) break;
                if ((bVar5 & 0xc0) == 0x80) {
                  pbVar9 = param_2 + 5;
                  uVar8 = ((int)(char)bVar1 & 3U) << 0x18 | ((int)(char)bVar2 & 0x3fU) << 0x12 |
                          ((int)(char)bVar3 & 0x3fU) << 0xc | ((int)(char)bVar4 & 0x3fU) << 6 |
                          (int)(char)bVar5 & 0x3fU;
                  bVar11 = uVar8 < 0x200000;
                  goto LAB_1433068a0;
                }
              }
            }
          }
        }
        else if ((bVar1 & 0xfe) == 0xfc) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_2 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_2 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_2 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) break;
                if ((bVar5 & 0xc0) == 0x80) {
                  pbVar9 = param_2 + 5;
                  bVar6 = *pbVar9;
                  if (bVar6 == 0) break;
                  if ((bVar6 & 0xc0) == 0x80) {
                    pbVar9 = param_2 + 6;
                    uVar8 = ((int)(char)bVar1 & 1U) << 0x1e | ((int)(char)bVar2 & 0x3fU) << 0x18 |
                            ((int)(char)bVar3 & 0x3fU) << 0x12 | ((int)(char)bVar4 & 0x3fU) << 0xc |
                            ((int)(char)bVar5 & 0x3fU) << 6 | (int)(char)bVar6 & 0x3fU;
                    if (0x3ffffff < uVar8) goto LAB_143306b44;
                  }
                }
              }
            }
          }
        }
        *puVar10 = 0xfffd;
        param_2 = pbVar9;
        puVar10 = puVar10 + 1;
      }
      else {
        uVar8 = (uint)(char)bVar1;
LAB_143306b44:
        if (uVar8 == 0) break;
        if (0xfffe < uVar8) {
          uVar8 = 0xfffd;
        }
        *puVar10 = (short)uVar8;
        param_2 = pbVar9;
        puVar10 = puVar10 + 1;
      }
    }
  }
  else {
    local_res8 = param_2;
    if (0 < param_3) {
      do {
        uVar8 = FUN_143307250(&local_res8);
        uVar7 = (undefined2)uVar8;
        if (0xfffe < uVar8) {
          uVar7 = 0xfffd;
        }
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
      } while ((longlong)local_res8 - (longlong)param_2 < param_3);
    }
  }
  *puVar10 = 0;
  return (longlong)puVar10 - (longlong)param_1 >> 1;
}



// FUNCTION 143306bc0 FUN_143306bc0 body=963 status=ok
// SIG undefined FUN_143306bc0(void)

longlong FUN_143306bc0(undefined2 *param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  bool bVar11;
  byte *local_res10;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar10 = param_1;
  if (param_4 == -1) {
    for (; puVar10 < param_1 + param_2; puVar10 = puVar10 + 1) {
      bVar1 = *param_3;
      pbVar9 = param_3 + 1;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_3 + 2;
            uVar8 = ((int)(char)bVar1 & 0x1fU) << 6 | (int)(char)bVar2 & 0x3fU;
            bVar11 = uVar8 < 0x80;
LAB_143306c60:
            if (!bVar11) goto LAB_143306f0c;
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_3 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_3 + 3;
              uVar8 = ((int)(char)bVar1 & 0xfU) << 0xc | ((int)(char)bVar2 & 0x3fU) << 6 |
                      (int)(char)bVar3 & 0x3fU;
              bVar11 = uVar8 < 0x800;
              goto LAB_143306c60;
            }
          }
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_3 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_3 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_3 + 4;
                uVar8 = ((int)(char)bVar1 & 7U) << 0x12 | ((int)(char)bVar2 & 0x3fU) << 0xc |
                        ((int)(char)bVar3 & 0x3fU) << 6 | (int)(char)bVar4 & 0x3fU;
                bVar11 = uVar8 < 0x10000;
                goto LAB_143306c60;
              }
            }
          }
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_3 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_3 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_3 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) break;
                if ((bVar5 & 0xc0) == 0x80) {
                  pbVar9 = param_3 + 5;
                  uVar8 = ((int)(char)bVar1 & 3U) << 0x18 | ((int)(char)bVar2 & 0x3fU) << 0x12 |
                          ((int)(char)bVar3 & 0x3fU) << 0xc | ((int)(char)bVar4 & 0x3fU) << 6 |
                          (int)(char)bVar5 & 0x3fU;
                  bVar11 = uVar8 < 0x200000;
                  goto LAB_143306c60;
                }
              }
            }
          }
        }
        else if ((bVar1 & 0xfe) == 0xfc) {
          bVar2 = *pbVar9;
          if (bVar2 == 0) break;
          if ((bVar2 & 0xc0) == 0x80) {
            pbVar9 = param_3 + 2;
            bVar3 = *pbVar9;
            if (bVar3 == 0) break;
            if ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = param_3 + 3;
              bVar4 = *pbVar9;
              if (bVar4 == 0) break;
              if ((bVar4 & 0xc0) == 0x80) {
                pbVar9 = param_3 + 4;
                bVar5 = *pbVar9;
                if (bVar5 == 0) break;
                if ((bVar5 & 0xc0) == 0x80) {
                  pbVar9 = param_3 + 5;
                  bVar6 = *pbVar9;
                  if (bVar6 == 0) break;
                  if ((bVar6 & 0xc0) == 0x80) {
                    pbVar9 = param_3 + 6;
                    uVar8 = ((int)(char)bVar1 & 1U) << 0x1e | ((int)(char)bVar2 & 0x3fU) << 0x18 |
                            ((int)(char)bVar3 & 0x3fU) << 0x12 | ((int)(char)bVar4 & 0x3fU) << 0xc |
                            ((int)(char)bVar5 & 0x3fU) << 6 | (int)(char)bVar6 & 0x3fU;
                    if (0x3ffffff < uVar8) goto LAB_143306f0c;
                  }
                }
              }
            }
          }
        }
        uVar7 = 0xfffd;
      }
      else {
        uVar8 = (uint)(char)bVar1;
LAB_143306f0c:
        if (uVar8 == 0) break;
        if (0xfffe < uVar8) {
          uVar8 = 0xfffd;
        }
        uVar7 = (undefined2)uVar8;
      }
      *puVar10 = uVar7;
      param_3 = pbVar9;
    }
  }
  else {
    local_res10 = param_3;
    if (0 < param_4) {
      do {
        if (param_1 + param_2 <= puVar10) break;
        uVar8 = FUN_143307250(&local_res10);
        uVar7 = (undefined2)uVar8;
        if (0xfffe < uVar8) {
          uVar7 = 0xfffd;
        }
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
      } while ((longlong)local_res10 - (longlong)param_3 < param_4);
    }
  }
  *puVar10 = 0;
  return (longlong)puVar10 - (longlong)param_1 >> 1;
}



// FUNCTION 143306f90 GetEncodeCharSize body=84 status=ok
// SIG undefined GetEncodeCharSize(void)

undefined8 Scaleform::UTF8Util::GetEncodeCharSize(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x800) {
    return 2;
  }
  if (param_1 < 0x10000) {
    return 3;
  }
  if (param_1 < 0x200000) {
    return 4;
  }
  if (param_1 < 0x4000000) {
    return 5;
  }
  uVar1 = 0;
  if (param_1 < 0x80000000) {
    uVar1 = 6;
  }
  return uVar1;
}



// FUNCTION 143306ff0 FUN_143306ff0 body=261 status=ok
// SIG undefined FUN_143306ff0(void)

void FUN_143306ff0(longlong param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  
  if (param_3 < 0x80) {
    *(byte *)(param_1 + *param_2) = (byte)param_3;
    *param_2 = *param_2 + 1;
    return;
  }
  if (param_3 < 0x800) {
    *(byte *)(param_1 + *param_2) = (byte)(param_3 >> 6) | 0xc0;
  }
  else {
    if (param_3 < 0x10000) {
      *(byte *)(param_1 + *param_2) = (byte)(param_3 >> 0xc) | 0xe0;
    }
    else {
      if (param_3 < 0x200000) {
        *(byte *)(param_1 + *param_2) = (byte)(param_3 >> 0x12) | 0xf0;
      }
      else {
        bVar1 = (byte)(param_3 >> 0x18);
        if (param_3 < 0x4000000) {
          *(byte *)(param_1 + *param_2) = bVar1 | 0xf8;
        }
        else {
          if (0x7fffffff < param_3) {
            return;
          }
          *(byte *)(param_1 + *param_2) = bVar1 >> 6 | 0xfc;
          *param_2 = *param_2 + 1;
          *(byte *)(*param_2 + param_1) = bVar1 & 0x3f | 0x80;
        }
        *param_2 = *param_2 + 1;
        *(byte *)(*param_2 + param_1) = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
      }
      *param_2 = *param_2 + 1;
      *(byte *)(*param_2 + param_1) = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
    }
    *param_2 = *param_2 + 1;
    *(byte *)(*param_2 + param_1) = (byte)(param_3 >> 6) & 0x3f | 0x80;
  }
  *param_2 = *param_2 + 1;
  *(byte *)(*param_2 + param_1) = (byte)param_3 & 0x3f | 0x80;
  *param_2 = *param_2 + 1;
  return;
}



// FUNCTION 143307100 FUN_143307100 body=317 status=ok
// SIG undefined FUN_143307100(void)

void FUN_143307100(longlong param_1,ulonglong param_2,longlong *param_3,uint param_4)

{
  byte bVar1;
  
  if (param_4 < 0x80) {
    if (param_2 != 0) {
      *(byte *)(param_1 + *param_3) = (byte)param_4;
      *param_3 = *param_3 + 1;
      return;
    }
  }
  else {
    if (param_4 < 0x800) {
      if (param_2 < 2) {
        return;
      }
      *(byte *)(param_1 + *param_3) = (byte)(param_4 >> 6) | 0xc0;
    }
    else {
      if (param_4 < 0x10000) {
        if (param_2 < 3) {
          return;
        }
        *(byte *)(param_1 + *param_3) = (byte)(param_4 >> 0xc) | 0xe0;
      }
      else {
        if (param_4 < 0x200000) {
          if (param_2 < 4) {
            return;
          }
          *(byte *)(param_1 + *param_3) = (byte)(param_4 >> 0x12) | 0xf0;
        }
        else {
          bVar1 = (byte)(param_4 >> 0x18);
          if (param_4 < 0x4000000) {
            if (param_2 < 5) {
              return;
            }
            *(byte *)(param_1 + *param_3) = bVar1 | 0xf8;
          }
          else {
            if (0x7fffffff < param_4) {
              return;
            }
            if (param_2 < 6) {
              return;
            }
            *(byte *)(param_1 + *param_3) = bVar1 >> 6 | 0xfc;
            *param_3 = *param_3 + 1;
            *(byte *)(*param_3 + param_1) = bVar1 & 0x3f | 0x80;
          }
          *param_3 = *param_3 + 1;
          *(byte *)(*param_3 + param_1) = (byte)(param_4 >> 0x12) & 0x3f | 0x80;
        }
        *param_3 = *param_3 + 1;
        *(byte *)(*param_3 + param_1) = (byte)(param_4 >> 0xc) & 0x3f | 0x80;
      }
      *param_3 = *param_3 + 1;
      *(byte *)(*param_3 + param_1) = (byte)(param_4 >> 6) & 0x3f | 0x80;
    }
    *param_3 = *param_3 + 1;
    *(byte *)(*param_3 + param_1) = (byte)param_4 & 0x3f | 0x80;
    *param_3 = *param_3 + 1;
  }
  return;
}



// FUNCTION 143307250 FUN_143307250 body=862 status=ok
// SIG undefined FUN_143307250(void)

uint FUN_143307250(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar8 = (byte *)*param_1;
  bVar2 = *pbVar8;
  pbVar1 = pbVar8 + 1;
  *param_1 = (longlong)pbVar1;
  if (bVar2 != 0) {
    if (-1 < (char)bVar2) {
      return (int)(char)bVar2;
    }
    if ((bVar2 & 0xe0) != 0xc0) {
      if ((bVar2 & 0xf0) == 0xe0) {
        bVar3 = *pbVar1;
        if (bVar3 == 0) {
          return 0;
        }
        if ((bVar3 & 0xc0) == 0x80) {
          *param_1 = (longlong)(pbVar8 + 2);
          bVar4 = pbVar8[2];
          if (bVar4 == 0) {
            return 0;
          }
          if ((bVar4 & 0xc0) == 0x80) {
            *param_1 = (longlong)(pbVar8 + 3);
            uVar9 = ((int)(char)bVar2 & 0xfU) << 0xc | ((int)(char)bVar3 & 0x3fU) << 6 |
                    (int)(char)bVar4 & 0x3fU;
            if (uVar9 < 0x800) {
              uVar9 = 0xfffd;
            }
            return uVar9;
          }
        }
      }
      else if ((bVar2 & 0xf8) == 0xf0) {
        bVar3 = *pbVar1;
        if (bVar3 == 0) {
          return 0;
        }
        if ((bVar3 & 0xc0) == 0x80) {
          *param_1 = (longlong)(pbVar8 + 2);
          bVar4 = pbVar8[2];
          if (bVar4 == 0) {
            return 0;
          }
          if ((bVar4 & 0xc0) == 0x80) {
            *param_1 = (longlong)(pbVar8 + 3);
            bVar5 = pbVar8[3];
            if (bVar5 == 0) {
              return 0;
            }
            if ((bVar5 & 0xc0) == 0x80) {
              *param_1 = (longlong)(pbVar8 + 4);
              uVar9 = ((int)(char)bVar2 & 7U) << 0x12 | ((int)(char)bVar3 & 0x3fU) << 0xc |
                      ((int)(char)bVar4 & 0x3fU) << 6 | (int)(char)bVar5 & 0x3fU;
              if (uVar9 < 0x10000) {
                uVar9 = 0xfffd;
              }
              return uVar9;
            }
          }
        }
      }
      else if ((bVar2 & 0xfc) == 0xf8) {
        bVar3 = *pbVar1;
        if (bVar3 == 0) {
          return 0;
        }
        if ((bVar3 & 0xc0) == 0x80) {
          *param_1 = (longlong)(pbVar8 + 2);
          bVar4 = pbVar8[2];
          if (bVar4 == 0) {
            return 0;
          }
          if ((bVar4 & 0xc0) == 0x80) {
            *param_1 = (longlong)(pbVar8 + 3);
            bVar5 = pbVar8[3];
            if (bVar5 == 0) {
              return 0;
            }
            if ((bVar5 & 0xc0) == 0x80) {
              *param_1 = (longlong)(pbVar8 + 4);
              bVar6 = pbVar8[4];
              if (bVar6 == 0) {
                return 0;
              }
              if ((bVar6 & 0xc0) == 0x80) {
                *param_1 = (longlong)(pbVar8 + 5);
                uVar9 = ((int)(char)bVar2 & 3U) << 0x18 | ((int)(char)bVar3 & 0x3fU) << 0x12 |
                        ((int)(char)bVar4 & 0x3fU) << 0xc | ((int)(char)bVar5 & 0x3fU) << 6 |
                        (int)(char)bVar6 & 0x3fU;
                if (uVar9 < 0x200000) {
                  uVar9 = 0xfffd;
                }
                return uVar9;
              }
            }
          }
        }
      }
      else if ((bVar2 & 0xfe) == 0xfc) {
        bVar3 = *pbVar1;
        if (bVar3 == 0) {
          return 0;
        }
        if ((bVar3 & 0xc0) == 0x80) {
          *param_1 = (longlong)(pbVar8 + 2);
          bVar4 = pbVar8[2];
          if (bVar4 == 0) {
            return 0;
          }
          if ((bVar4 & 0xc0) == 0x80) {
            *param_1 = (longlong)(pbVar8 + 3);
            bVar5 = pbVar8[3];
            if (bVar5 == 0) {
              return 0;
            }
            if ((bVar5 & 0xc0) == 0x80) {
              *param_1 = (longlong)(pbVar8 + 4);
              bVar6 = pbVar8[4];
              if (bVar6 == 0) {
                return 0;
              }
              if ((bVar6 & 0xc0) == 0x80) {
                *param_1 = (longlong)(pbVar8 + 5);
                bVar7 = pbVar8[5];
                if (bVar7 == 0) {
                  return 0;
                }
                if ((bVar7 & 0xc0) == 0x80) {
                  *param_1 = (longlong)(pbVar8 + 6);
                  uVar9 = ((int)(char)bVar2 & 1U) << 0x1e | ((int)(char)bVar3 & 0x3fU) << 0x18 |
                          ((int)(char)bVar4 & 0x3fU) << 0x12 | ((int)(char)bVar5 & 0x3fU) << 0xc |
                          ((int)(char)bVar6 & 0x3fU) << 6 | (int)(char)bVar7 & 0x3fU;
                  if (uVar9 < 0x4000000) {
                    uVar9 = 0xfffd;
                  }
                  return uVar9;
                }
              }
            }
          }
        }
      }
      return 0xfffd;
    }
    bVar3 = *pbVar1;
    if (bVar3 != 0) {
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = (longlong)(pbVar8 + 2);
      uVar9 = ((int)(char)bVar2 & 0x1fU) << 6 | (int)(char)bVar3 & 0x3fU;
      if (uVar9 < 0x80) {
        uVar9 = 0xfffd;
      }
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 1433075b0 IsPathAbsolute body=133 status=ok
// SIG undefined IsPathAbsolute(void)

undefined4 Scaleform::GFx::URLBuilder::IsPathAbsolute(char *param_1)

{
  int iVar1;
  char *local_res8 [4];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_res8[0] = param_1;
    iVar1 = FUN_143307250(local_res8);
    if (iVar1 == 0) {
      local_res8[0] = local_res8[0] + -1;
    }
    if ((iVar1 != 0x2f) && (iVar1 != 0x5c)) {
      do {
        if (iVar1 == 0) {
          return 0;
        }
        do {
          if (iVar1 == 0x3a) {
            iVar1 = FUN_143307250(local_res8);
            if (iVar1 == 0) {
              local_res8[0] = local_res8[0] + -1;
            }
            else {
              if (iVar1 == 0x2f) {
                return 1;
              }
              if (iVar1 == 0x5c) {
                return 1;
              }
            }
          }
          else {
            if (iVar1 == 0x2f) {
              return 0;
            }
            if (iVar1 == 0x5c) {
              return 0;
            }
          }
          iVar1 = FUN_143307250(local_res8);
        } while (iVar1 != 0);
        local_res8[0] = local_res8[0] + -1;
      } while( true );
    }
  }
  return 1;
}



// FUNCTION 143307640 FUN_143307640 body=116 status=ok
// SIG undefined FUN_143307640(void)

/* WARNING: Removing unreachable block (ram,0x00014330766a) */

bool FUN_143307640(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  lVar4 = 0;
  local_res8 = param_1;
  iVar2 = FUN_143307250(&local_res8);
  lVar1 = lVar4;
  while (iVar2 != 0) {
    lVar3 = lVar4;
    if (((iVar2 != 0x2f) && (iVar2 != 0x5c)) && (lVar3 = lVar1, iVar2 == 0x2e)) {
      lVar3 = local_res8 + -1;
    }
    iVar2 = FUN_143307250(&local_res8);
    lVar1 = lVar3;
  }
  return lVar1 != 0;
}



// FUNCTION 1433076c0 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = Scaleform::ScanPathProtocol();
  return lVar1 != 0;
}



// FUNCTION 1433076e0 FUN_1433076e0 body=87 status=ok
// SIG undefined FUN_1433076e0(void)

undefined8 FUN_1433076e0(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = Scaleform::ScanPathProtocol((*param_1 & 0xfffffffffffffffc) + 0xc);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = (lVar1 - (*param_1 & 0xfffffffffffffffc)) + -0xc;
  }
  FUN_1432c3140(param_2,(*param_1 & 0xfffffffffffffffc) + 0xc,lVar2);
  return param_2;
}



// FUNCTION 143307740 FUN_143307740 body=173 status=ok
// SIG undefined FUN_143307740(void)

undefined8 FUN_143307740(ulonglong *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  lVar3 = (*param_1 & 0xfffffffffffffffc) + 0xc;
  local_res8 = lVar3;
  iVar1 = FUN_143307250(&local_res8);
  while (iVar1 != 0) {
    if ((iVar1 == 0x2f) || (iVar1 == 0x5c)) {
      lVar3 = local_res8;
    }
    iVar1 = FUN_143307250(&local_res8);
  }
  local_res8 = local_res8 + -1;
  puVar2 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  if (lVar3 == 0) {
    uVar4 = *puVar2 & 0x7fffffffffffffff;
  }
  else {
    uVar4 = (lVar3 - (longlong)puVar2) - 0xc;
  }
  FUN_1432c3140(param_2,(longlong)puVar2 + 0xc,uVar4);
  return param_2;
}



// FUNCTION 143307800 FUN_143307800 body=115 status=ok
// SIG undefined FUN_143307800(void)

undefined8 FUN_143307800(ulonglong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = (*param_1 & 0xfffffffffffffffc) + 0xc;
  local_res8 = lVar2;
  iVar1 = FUN_143307250(&local_res8);
  while (iVar1 != 0) {
    if ((iVar1 == 0x2f) || (iVar1 == 0x5c)) {
      lVar2 = local_res8;
    }
    iVar1 = FUN_143307250(&local_res8);
  }
  local_res8 = local_res8 + -1;
  FUN_1432c2fb0(param_2,lVar2);
  return param_2;
}



// FUNCTION 143307880 FUN_143307880 body=129 status=ok
// SIG undefined FUN_143307880(void)

undefined8 FUN_143307880(ulonglong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  local_res8 = (*param_1 & 0xfffffffffffffffc) + 0xc;
  lVar2 = 0;
  iVar1 = FUN_143307250(&local_res8);
  while (iVar1 != 0) {
    if ((iVar1 == 0x2f) || (iVar1 == 0x5c)) {
      lVar2 = 0;
    }
    else if (iVar1 == 0x2e) {
      lVar2 = local_res8 + -1;
    }
    iVar1 = FUN_143307250(&local_res8);
  }
  local_res8 = local_res8 + -1;
  FUN_1432c2fb0(param_2,lVar2);
  return param_2;
}



// FUNCTION 143307910 FUN_143307910 body=64 status=ok
// SIG undefined FUN_143307910(void)

ulonglong * FUN_143307910(ulonglong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = Scaleform::ScanPathProtocol((*param_1 & 0xfffffffffffffffc) + 0xc);
  if (lVar1 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar1 + lVar2) != '\0');
    FUN_1432c3b60(param_1,lVar1);
  }
  return param_1;
}



// FUNCTION 143307960 FUN_143307960 body=149 status=ok
// SIG undefined FUN_143307960(void)

ulonglong * FUN_143307960(ulonglong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  local_res8 = (*param_1 & 0xfffffffffffffffc) + 0xc;
  lVar2 = 0;
  iVar1 = FUN_143307250(&local_res8);
  if (iVar1 != 0) {
    do {
      if ((iVar1 == 0x2f) || (iVar1 == 0x5c)) {
        lVar2 = 0;
      }
      else if (iVar1 == 0x2e) {
        lVar2 = local_res8 + -1;
      }
      iVar1 = FUN_143307250(&local_res8);
    } while (iVar1 != 0);
    local_res8 = local_res8 + -1;
    if (lVar2 != 0) {
      FUN_1432c3b60(param_1,(*param_1 & 0xfffffffffffffffc) + 0xc,
                    (lVar2 - (*param_1 & 0xfffffffffffffffc)) + -0xc);
    }
  }
  return param_1;
}



// FUNCTION 143307a00 FUN_143307a00 body=163 status=ok
// SIG undefined FUN_143307a00(void)

void FUN_143307a00(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = 0;
  local_res8 = param_1;
  iVar1 = FUN_143307250(&local_res8);
  while (iVar1 != 0) {
    if ((iVar1 == 0x2f) || (iVar1 == 0x5c)) {
      lVar2 = 0;
      param_1 = local_res8;
    }
    else if (iVar1 == 0x2e) {
      lVar2 = local_res8 + -1;
    }
    iVar1 = FUN_143307250(&local_res8);
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  if (param_3 != (longlong *)0x0) {
    *param_3 = lVar2;
  }
  return;
}



// FUNCTION 143307ab0 ScanPathProtocol body=143 status=ok
// SIG undefined ScanPathProtocol(void)

longlong Scaleform::ScanPathProtocol(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  iVar1 = FUN_143307250(local_res8);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 0x3a) {
      iVar1 = FUN_143307250(local_res8);
      if (iVar1 == 0) {
        local_res8[0] = local_res8[0] + -1;
      }
      iVar2 = FUN_143307250(local_res8);
      if (iVar2 == 0) {
        local_res8[0] = local_res8[0] + -1;
      }
      else if ((iVar2 == 0x2f) && (iVar1 == 0x2f)) {
        return local_res8[0];
      }
    }
    iVar1 = FUN_143307250(local_res8);
  } while( true );
}



// FUNCTION 143307b40 FUN_143307b40 body=200 status=ok
// SIG undefined FUN_143307b40(void)

void FUN_143307b40(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      local_res10[0] = 0;
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    }
  }
  local_res10[0] = 2;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xf0,local_res10);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    FUN_1433a27c0(lVar2,param_2,uVar3,0x10000,0x10000,2,0);
    return;
  }
  return;
}



// FUNCTION 143307c20 FUN_143307c20 body=111 status=ok
// SIG undefined FUN_143307c20(void)

void FUN_143307c20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  plVar3 = (longlong *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x10) {
    puVar2 = (undefined8 *)FUN_14330cf40(plVar3,0x10);
  }
  else {
    puVar2 = (undefined8 *)*plVar3;
    *plVar3 = (longlong)(puVar2 + 2);
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x10;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145afa560;
  }
  FUN_1433aa020(puVar2,param_1);
  FUN_14330bde0(param_1,puVar2);
  return;
}



// FUNCTION 143307ca0 FUN_143307ca0 body=300 status=ok
// SIG undefined FUN_143307ca0(void)

void FUN_143307ca0(longlong param_1,longlong param_2)

{
  RefCountImpl *this;
  longlong *plVar1;
  longlong lVar2;
  RefCountImpl *this_00;
  
  this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (this == (RefCountImpl *)0x0) {
    FUN_14330c260(param_1 + 0x20,
                  "Image file handler registry is not installed - can\'t load jpeg image data");
    return;
  }
  Scaleform::RefCountImpl::AddRef(this);
  lVar2 = Scaleform::Render::ImageFileHandlerRegistry::GetReader(this + 0x18,2);
  if (lVar2 == 0) {
    FUN_14330c260(param_1 + 0x20,"Jpeg System is not installed - can\'t load jpeg image data");
    Scaleform::RefCountImpl::Release(this);
    return;
  }
  if (0 < *(int *)(param_2 + 8)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
    if (lVar2 == 0) {
      this_00 = (RefCountImpl *)0x0;
    }
    else {
      this_00 = (RefCountImpl *)
                FUN_14330ba40(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38),
                              (longlong)*(int *)(param_2 + 8));
    }
    lVar2 = *(longlong *)(param_1 + 0x418);
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x50;
    }
    FUN_143396b20(lVar2,*(undefined8 *)(this_00 + 0x10),*(undefined4 *)(param_2 + 8));
    Scaleform::RefCountImpl::AddRef(this_00);
    if (*(RefCountImpl **)(param_1 + 0x360) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x360));
    }
    *(RefCountImpl **)(param_1 + 0x360) = this_00;
    Scaleform::RefCountImpl::Release(this_00);
  }
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143307de0 FUN_143307de0 body=565 status=ok
// SIG undefined FUN_143307de0(void)

void FUN_143307de0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  RefCountImpl *this;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint local_res8 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x418);
  if (lVar7 == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar7 + 0x29) = 0;
  if (*(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x4c) < 2) {
    FUN_143396c40(lVar7,2);
  }
  uVar3 = *(uint *)(lVar7 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar7 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar7 + 0x60));
  *(uint *)(lVar7 + 0x4c) = uVar3 + 2;
  plVar6 = (longlong *)0x0;
  this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (this == (RefCountImpl *)0x0) {
    FUN_14330c260(param_1 + 0x20,
                  "Image file handler registry is not installed - can\'t load jpeg image data");
  }
  else {
    Scaleform::RefCountImpl::AddRef(this);
    plVar5 = (longlong *)Scaleform::Render::ImageFileHandlerRegistry::GetReader(this + 0x18,2);
    if (plVar5 == (longlong *)0x0) {
      FUN_14330c260(param_1 + 0x20,"Jpeg System is not installed - can\'t load jpeg image data");
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x418);
      if (lVar7 == 0) {
        lVar7 = param_1 + 0x50;
      }
      FUN_143396350(lVar7);
      lVar7 = *(longlong *)(param_1 + 0x360);
      if (lVar7 == 0) {
        local_50[0] = 0;
        local_38 = 0;
        local_30 = 0;
        lVar8 = *(longlong *)(param_1 + 0x418);
        uStack_40 = 0;
        local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
        if (lVar8 == 0) {
          lVar8 = param_1 + 0x50;
        }
        FUN_143396350(lVar8);
        *(undefined1 *)(lVar8 + 0x58) = 1;
        iVar4 = *(int *)(param_2 + 8);
        lVar7 = 0;
        puVar9 = local_50;
      }
      else {
        local_78[0] = 0;
        local_60 = 0;
        local_58 = 0;
        lVar8 = *(longlong *)(param_1 + 0x418);
        uStack_68 = 0;
        local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
        if (lVar8 == 0) {
          lVar8 = param_1 + 0x50;
        }
        FUN_143396350(lVar8);
        *(undefined1 *)(lVar8 + 0x58) = 1;
        puVar9 = local_78;
        iVar4 = *(int *)(param_2 + 8);
      }
      plVar6 = (longlong *)
               (**(code **)(*plVar5 + 0x38))
                         (plVar5,*(undefined8 *)(lVar8 + 0x20),puVar9,lVar7,(longlong)(iVar4 + -2),0
                         );
    }
    Scaleform::RefCountImpl::Release(this);
  }
  local_res8[0] = (uint)CONCAT11(uVar1,uVar2);
  FUN_143319900(param_1,local_res8,plVar6);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}



// FUNCTION 143308020 FUN_143308020 body=476 status=ok
// SIG undefined FUN_143308020(void)

void FUN_143308020(longlong param_1,longlong param_2)

{
  uint uVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort uVar5;
  uint local_res8 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x418);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar2 + 0x29) = 0;
  if (*(int *)(lVar2 + 0x50) - *(int *)(lVar2 + 0x4c) < 2) {
    FUN_143396c40(lVar2,2);
  }
  uVar1 = *(uint *)(lVar2 + 0x4c);
  uVar5 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar2 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar2 + 0x60)));
  *(uint *)(lVar2 + 0x4c) = uVar1 + 2;
  lVar2 = *(longlong *)(param_1 + 0x418);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x50;
  }
  FUN_143300df0(param_1 + 0x20,"  GFx_DefineBitsJpeg2Loader: charid = %d pos = 0x%x\n",uVar5,
                (*(int *)(lVar2 + 0x54) - *(int *)(lVar2 + 0x50)) + *(int *)(lVar2 + 0x4c));
  plVar4 = (longlong *)0x0;
  this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (this == (RefCountImpl *)0x0) {
    FUN_14330c260(param_1 + 0x20,
                  "Image file handler registry is not installed - can\'t load jpeg image data");
  }
  else {
    Scaleform::RefCountImpl::AddRef(this);
    plVar3 = (longlong *)Scaleform::Render::ImageFileHandlerRegistry::GetReader(this + 0x18,2);
    if (plVar3 == (longlong *)0x0) {
      FUN_14330c260(param_1 + 0x20,"Jpeg System is not installed - can\'t load jpeg image data");
      Scaleform::RefCountImpl::Release(this);
    }
    else {
      local_58[0] = 0;
      local_40 = 0;
      local_38 = 0;
      lVar2 = *(longlong *)(param_1 + 0x418);
      uStack_48 = 0;
      local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
      if (lVar2 == 0) {
        lVar2 = param_1 + 0x50;
      }
      FUN_143396350(lVar2);
      *(undefined1 *)(lVar2 + 0x58) = 1;
      plVar4 = (longlong *)
               (**(code **)(*plVar3 + 0x38))
                         (plVar3,*(undefined8 *)(lVar2 + 0x20),local_58,0,
                          (longlong)(*(int *)(param_2 + 8) + -2),1);
      Scaleform::RefCountImpl::Release(this);
    }
  }
  local_res8[0] = (uint)uVar5;
  FUN_143319900(param_1,local_res8,plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}



// FUNCTION 143308210 FUN_143308210 body=814 status=ok
// SIG undefined FUN_143308210(void)

void FUN_143308210(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  RefCountImpl *this;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  uint local_res8 [2];
  longlong *local_res10;
  
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar12 + 0x29) = 0;
  if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 2) {
    FUN_143396c40(lVar12,2);
  }
  uVar3 = *(uint *)(lVar12 + 0x4c);
  uVar16 = CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar12 + 0x60)),
                    *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar12 + 0x60)));
  *(uint *)(lVar12 + 0x4c) = uVar3 + 2;
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  local_res8[0] = FUN_143300e60(lVar12);
  if (*param_2 == 0x5a) {
    lVar12 = *(longlong *)(param_1 + 0x418);
    if (lVar12 == 0) {
      lVar12 = param_1 + 0x50;
    }
    *(undefined1 *)(lVar12 + 0x29) = 0;
    if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 2) {
      FUN_143396c40(lVar12,2);
    }
    uVar3 = *(uint *)(lVar12 + 0x4c);
    uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar12 + 0x60));
    uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar12 + 0x60));
    *(uint *)(lVar12 + 0x4c) = uVar3 + 2;
    lVar12 = *(longlong *)(param_1 + 0x418);
    if (lVar12 == 0) {
      lVar12 = param_1 + 0x50;
    }
    FUN_143300df0(param_1 + 0x20,
                  "  GFx_DefineBitsJpeg4Loader: charid = %d pos = %d deblocking = %d\n",uVar16,
                  (*(int *)(lVar12 + 0x54) - *(int *)(lVar12 + 0x50)) + *(int *)(lVar12 + 0x4c),
                  CONCAT11(uVar1,uVar2));
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x418);
    if (lVar12 == 0) {
      lVar12 = param_1 + 0x50;
    }
    FUN_143300df0(param_1 + 0x20,"  GFx_DefineBitsJpeg3Loader: charid = %d pos = %d\n",uVar16,
                  (*(int *)(lVar12 + 0x54) - *(int *)(lVar12 + 0x50)) + *(int *)(lVar12 + 0x4c));
  }
  lVar12 = param_1 + 0x20;
  plVar14 = (longlong *)0x0;
  this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x18) + 0x38);
  if (this == (RefCountImpl *)0x0) {
    FUN_14330c260(lVar12,
                  "Image file handler registry is not installed - can\'t load jpeg image data");
  }
  else {
    Scaleform::RefCountImpl::AddRef(this);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
    if (lVar9 == 0) {
      FUN_14330c260(lVar12,"ZlibState is not set - can\'t load zipped image data");
      Scaleform::RefCountImpl::Release(this);
    }
    else {
      plVar11 = (longlong *)Scaleform::Render::ImageFileHandlerRegistry::GetReader(this + 0x18,2);
      if (plVar11 == (longlong *)0x0) {
        FUN_14330c260(lVar12,"Jpeg System is not installed - can\'t load jpeg image data");
      }
      else {
        lVar12 = *(longlong *)(param_1 + 0x418);
        local_res10 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
        lVar15 = param_1 + 0x50;
        if (lVar12 != 0) {
          lVar15 = lVar12;
        }
        iVar4 = *(int *)(lVar15 + 0x50);
        iVar5 = *(int *)(lVar15 + 0x54);
        iVar6 = *(int *)(lVar15 + 0x4c);
        iVar7 = param_2[3];
        iVar8 = param_2[2];
        if (lVar12 == 0) {
          lVar12 = param_1 + 0x50;
        }
        FUN_143396350(lVar12);
        *(undefined1 *)(lVar12 + 0x58) = 1;
        uVar10 = *(undefined8 *)(lVar12 + 0x20);
        plVar13 = DAT_146b62f28;
        if (local_res10 != (longlong *)0x0) {
          plVar13 = local_res10;
        }
        lVar12 = (**(code **)(*plVar13 + 0x50))(plVar13,0x48);
        plVar13 = plVar14;
        if (lVar12 != 0) {
          plVar13 = (longlong *)
                    FUN_1433a66f0(lVar12,lVar9,plVar11,local_res8[0],1,&local_res10,0,0,uVar10,
                                  (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8));
        }
        plVar14 = (longlong *)(**(code **)(*plVar11 + 0x48))(plVar11,plVar13);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      Scaleform::RefCountImpl::Release(this);
    }
  }
  local_res8[0] = (uint)uVar16;
  FUN_143319900(param_1,local_res8,plVar14);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  return;
}



// FUNCTION 143308550 FUN_143308550 body=436 status=ok
// SIG undefined FUN_143308550(void)

void FUN_143308550(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  RefCountImpl *this;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint local_res8 [2];
  undefined1 local_28 [16];
  
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar3 + 0x29) = 0;
  if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 2) {
    FUN_143396c40(lVar3,2);
  }
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar5 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar3 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar3 + 0x60)));
  *(uint *)(lVar3 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  ShapeLoader: id = %d\n",uVar5);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  this = (RefCountImpl *)(**(code **)(*plVar4 + 0x50))(plVar4,0x50);
  if (this == (RefCountImpl *)0x0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145afa670;
    *(undefined4 *)(this + 8) = 1;
    this[0x18] = (RefCountImpl)0x0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  plVar4 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  (**(code **)(*(longlong *)this + 0x78))
            (this,param_1,*param_2,
             ((*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x54)) - *(int *)(lVar3 + 0x4c)) +
             param_2[3] + param_2[2],1);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x30);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1433acae0(lVar3,this);
  }
  FUN_143300df0(param_1 + 0x20,"  bound rect:");
  (**(code **)(*plVar4 + 0x38))(plVar4,local_28,0);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar5;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,plVar4);
  }
  FUN_1432de450(plVar4);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143308710 FUN_143308710 body=253 status=ok
// SIG undefined FUN_143308710(void)

void FUN_143308710(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar3 + 0x29) = 0;
  if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 2) {
    FUN_143396c40(lVar3,2);
  }
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar3 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar3 + 0x60)));
  *(uint *)(lVar3 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  ShapeMorphLoader: id = %d\n",uVar4);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x38);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1433b0e10(lVar3);
  }
  FUN_1433b0eb0(lVar3,param_1,param_2,1);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar4;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,lVar3);
  }
  if (lVar3 != 0) {
    FUN_1432de450(lVar3);
  }
  return;
}



// FUNCTION 143308820 FUN_143308820 body=442 status=ok
// SIG undefined FUN_143308820(void)

void FUN_143308820(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  RefCountImpl *this;
  uint uVar5;
  RefCountImpl *pRVar6;
  uint local_res8 [2];
  int local_18 [2];
  longlong local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar1 = *(uint *)(lVar4 + 0x4c);
  uVar5 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar4 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar4 + 0x60)));
  *(uint *)(lVar4 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  Font: id = %d\n",uVar5);
  lVar4 = *(longlong *)(param_1 + 0x38);
  this = (RefCountImpl *)0x0;
  pRVar6 = this;
  if (*(int *)(lVar4 + 0x80) != 0) {
    pRVar6 = (RefCountImpl *)(lVar4 + 0x80);
  }
  bVar3 = false;
  if (pRVar6 != (RefCountImpl *)0x0) {
    bVar3 = false;
    if (((byte)pRVar6[0x1c] & 0x10) != 0) {
      bVar3 = true;
    }
  }
  iVar2 = *param_2;
  if (iVar2 == 0x3ed) {
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x50))(*(longlong **)(lVar4 + 0x38),0xa8,0)
    ;
    if (lVar4 != 0) {
      this = (RefCountImpl *)FUN_14339b2e0(lVar4);
    }
    FUN_14339b3f0(this,param_1,param_2);
  }
  else if ((((iVar2 != 0x30) && (iVar2 != 0x4b)) || (bVar3)) ||
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x40) == 0)) {
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x50))(*(longlong **)(lVar4 + 0x38),0x88,0)
    ;
    if (lVar4 != 0) {
      this = (RefCountImpl *)FUN_143398260(lVar4);
    }
    FUN_143398560(this,param_1,param_2);
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x50))(*(longlong **)(lVar4 + 0x38),0xc0,0)
    ;
    if (lVar4 != 0) {
      this = (RefCountImpl *)FUN_14339a070(lVar4);
    }
    FUN_14339a180(this,param_1,param_2);
  }
  local_res8[0] = uVar5;
  FUN_1433197a0(param_1,local_18,local_res8,this);
  if ((local_18[0] == 0) && (local_10 != 0)) {
    FUN_1432de450();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1433089e0 FUN_1433089e0 body=193 status=ok
// SIG undefined FUN_1433089e0(void)

void FUN_1433089e0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_res18 [8];
  ulonglong local_res20;
  
  FUN_1432c2f70(&local_res20);
  lVar4 = 0x10;
  do {
    lVar3 = *(longlong *)(param_1 + 0x418);
    if (lVar3 == 0) {
      lVar3 = param_1 + 0x50;
    }
    *(undefined1 *)(lVar3 + 0x29) = 0;
    if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 1) {
      FUN_143396d60(lVar3);
    }
    bVar1 = *(byte *)((ulonglong)*(uint *)(lVar3 + 0x4c) + *(longlong *)(lVar3 + 0x60));
    *(uint *)(lVar3 + 0x4c) = *(uint *)(lVar3 + 0x4c) + 1;
    _itoa_s((uint)bVar1,local_res18,3,0x10);
    FUN_1432c3950(&local_res20,local_res18,0xffffffffffffffff);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143308ab0 FUN_143308ab0 body=207 status=ok
// SIG undefined FUN_143308ab0(void)

void FUN_143308ab0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  longlong lVar3;
  DWORD unaff_EDI;
  ushort uVar4;
  uint local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar3 + 0x29) = 0;
  if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 2) {
    FUN_143396c40(lVar3,2);
  }
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar4 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar3 + 0x60)),
                   *(undefined1 *)((longlong)(ulonglong)uVar1 + *(longlong *)(lVar3 + 0x60)));
  *(uint *)(lVar3 + 0x4c) = uVar1 + 2;
  local_res8[0] = (uint)uVar4;
  DVar2 = Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData
                    (*(HDC *)(param_1 + 0x38),(DWORD)local_res8,(uint)uVar4,(PVOID)(ulonglong)uVar1,
                     unaff_EDI);
  if (CONCAT44(extraout_var,DVar2) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x418);
    if (lVar3 == 0) {
      lVar3 = param_1 + 0x50;
    }
    FUN_143399540(CONCAT44(extraout_var,DVar2),lVar3,*param_2);
    return;
  }
  FUN_14330c260(param_1 + 0x20,"GFx_DefineFontInfoLoader - can\'t find FontResource w/ id %d",uVar4)
  ;
  return;
}



// FUNCTION 143308b90 FUN_143308b90 body=194 status=ok
// SIG undefined FUN_143308b90(void)

void FUN_143308b90(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_143300df0(param_1 + 0x20,"  PlaceObject\n");
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  uVar1 = Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(lVar5);
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar4 = uVar1 + 0x16 & 0xfffffffffffffff8;
  if (*(ulonglong *)(lVar3 + 0x18) < uVar4) {
    lVar2 = FUN_14330cf40(lVar3 + 0x10);
  }
  else {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    *(ulonglong *)(lVar3 + 0x18) = *(ulonglong *)(lVar3 + 0x18) - uVar4;
    *(ulonglong *)(lVar3 + 0x10) = lVar2 + uVar4;
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CAkSinkBase::CAkSinkBase(lVar2);
  }
  FUN_143396b20(lVar5,lVar3 + 9,uVar1 & 0xffffffff);
  FUN_1433a85a0(lVar3,uVar1);
  FUN_14330bde0(param_1,lVar3);
  return;
}



// FUNCTION 143308c60 FUN_143308c60 body=375 status=ok
// SIG undefined FUN_143308c60(void)

void FUN_143308c60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_143300df0(param_1 + 0x20,"  PlaceObject2Tag\n");
  lVar9 = *(longlong *)(param_1 + 0x418);
  if (lVar9 == 0) {
    lVar9 = param_1 + 0x50;
  }
  uVar5 = Scaleform::GFx::PlaceObject2Tag::ComputeDataSize
                    (lVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x54));
  cVar4 = FUN_1433a89c0(lVar9);
  if (cVar4 != '\0') {
    uVar5 = uVar5 + 8;
    if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0xd0) & 8) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x50);
      if (plVar1 == (longlong *)0x0) {
        FUN_14330c260(param_1 + 0x20,
                      "GFx_PlaceObject2Loader - AS2 support is not installed. Tag is skipped.");
        return;
      }
      puVar6 = (undefined8 *)
               (**(code **)(*plVar1 + 0x38))
                         (plVar1,param_1,uVar5,*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x54)
                         );
      goto LAB_143308d80;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar3 = *(ulonglong *)(lVar2 + 0x18);
  plVar1 = (longlong *)(lVar2 + 0x10);
  uVar8 = uVar5 + 0x16 & 0xfffffffffffffff8;
  if (*(uint *)(lVar2 + 0x54) < 6) {
    if (uVar3 < uVar8) {
      puVar6 = (undefined8 *)FUN_14330cf40();
    }
    else {
      puVar6 = (undefined8 *)*plVar1;
      *(ulonglong *)(lVar2 + 0x18) = uVar3 - uVar8;
      *plVar1 = (longlong)puVar6 + uVar8;
    }
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    ppuVar7 = &PTR__scalar_deleting_destructor__145afa400;
  }
  else {
    if (uVar3 < uVar8) {
      puVar6 = (undefined8 *)FUN_14330cf40();
    }
    else {
      puVar6 = (undefined8 *)*plVar1;
      *(ulonglong *)(lVar2 + 0x18) = uVar3 - uVar8;
      *plVar1 = (longlong)puVar6 + uVar8;
    }
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    ppuVar7 = &PTR__scalar_deleting_destructor__145afa3a0;
  }
  *puVar6 = ppuVar7;
LAB_143308d80:
  if (puVar6 != (undefined8 *)0x0) {
    if (cVar4 == '\0') {
      FUN_143396b20(lVar9,puVar6 + 1,uVar5 & 0xffffffff);
    }
    else {
      FUN_143396b20(lVar9,puVar6 + 2,(int)uVar5 + -8);
      FUN_1433a8a20(puVar6 + 1);
    }
    FUN_14330bde0(param_1,puVar6);
  }
  return;
}



// FUNCTION 143308de0 FUN_143308de0 body=310 status=ok
// SIG undefined FUN_143308de0(void)

void FUN_143308de0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  FUN_143300df0(param_1 + 0x20,"  PlaceObject3Tag\n");
  lVar7 = *(longlong *)(param_1 + 0x418);
  if (lVar7 == 0) {
    lVar7 = param_1 + 0x50;
  }
  uVar4 = Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(lVar7);
  cVar3 = FUN_1433a89c0(lVar7);
  if ((cVar3 == '\0') ||
     (uVar4 = uVar4 + 8, (*(byte *)(*(longlong *)(param_1 + 0x38) + 0xd0) & 8) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar6 = uVar4 + 0x16 & 0xfffffffffffffff8;
    if (*(ulonglong *)(lVar2 + 0x18) < uVar6) {
      puVar5 = (undefined8 *)FUN_14330cf40();
    }
    else {
      puVar5 = *(undefined8 **)(lVar2 + 0x10);
      *(ulonglong *)(lVar2 + 0x18) = *(ulonglong *)(lVar2 + 0x18) - uVar6;
      *(ulonglong *)(lVar2 + 0x10) = (longlong)puVar5 + uVar6;
    }
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    *puVar5 = &PTR__scalar_deleting_destructor__145afa460;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x50);
    if (plVar1 == (longlong *)0x0) {
      FUN_14330c260(param_1 + 0x20,
                    "GFx_PlaceObject3Loader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,uVar4);
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (cVar3 == '\0') {
      FUN_143396b20(lVar7,puVar5 + 1,uVar4 & 0xffffffff);
    }
    else {
      FUN_143396b20(lVar7,puVar5 + 2,(int)uVar4 + -8);
      FUN_1433a8a20(puVar5 + 1);
    }
    FUN_14330bde0(param_1,puVar5);
  }
  return;
}



// FUNCTION 143308f20 FUN_143308f20 body=1349 status=ok
// SIG undefined FUN_143308f20(void)

void FUN_143308f20(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  ulonglong local_res18;
  uint local_res20;
  uint local_res24;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined2 uVar24;
  uint uVar23;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar12 + 0x29) = 0;
  if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 2) {
    FUN_143396c40(lVar12,2);
  }
  uVar23 = *(uint *)(lVar12 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar23 + 1) + *(longlong *)(lVar12 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar23 + *(longlong *)(lVar12 + 0x60));
  *(uint *)(lVar12 + 0x4c) = uVar23 + 2;
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar12 + 0x29) = 0;
  if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 1) {
    FUN_143396d60(lVar12);
  }
  cVar3 = *(char *)((ulonglong)*(uint *)(lVar12 + 0x4c) + *(longlong *)(lVar12 + 0x60));
  *(uint *)(lVar12 + 0x4c) = *(uint *)(lVar12 + 0x4c) + 1;
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar12 + 0x29) = 0;
  if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 2) {
    FUN_143396c40(lVar12,2);
  }
  uVar23 = *(uint *)(lVar12 + 0x4c);
  uVar20 = CONCAT11(*(undefined1 *)((ulonglong)(uVar23 + 1) + *(longlong *)(lVar12 + 0x60)),
                    *(undefined1 *)((ulonglong)uVar23 + *(longlong *)(lVar12 + 0x60)));
  *(uint *)(lVar12 + 0x4c) = uVar23 + 2;
  lVar12 = *(longlong *)(param_1 + 0x418);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar12 + 0x29) = 0;
  if (*(int *)(lVar12 + 0x50) - *(int *)(lVar12 + 0x4c) < 2) {
    FUN_143396c40(lVar12,2);
  }
  uVar23 = *(uint *)(lVar12 + 0x4c);
  local_res8[0] = (uint)CONCAT11(uVar1,uVar2);
  uVar15 = CONCAT11(*(undefined1 *)((ulonglong)(uVar23 + 1) + *(longlong *)(lVar12 + 0x60)),
                    *(undefined1 *)((ulonglong)uVar23 + *(longlong *)(lVar12 + 0x60)));
  *(uint *)(lVar12 + 0x4c) = uVar23 + 2;
  uVar17 = (uint)uVar15;
  uVar23 = uVar17;
  FUN_143300df0(param_1 + 0x20,
                "  DefBitsLossless2: tagInfo.TagType = %d, id = %d, fmt = %d, w = %d, h = %d\n",
                *param_2,local_res8[0],cVar3,(uint)uVar20,uVar17);
  uVar24 = (undefined2)(uVar23 >> 0x10);
  plVar13 = (longlong *)0x0;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
  if (lVar12 == 0) {
    FUN_14330c260(param_1 + 0x20,"Error: GFxZlibState is not set - can\'t load zipped image data\n")
    ;
    plVar13 = (longlong *)0x0;
    goto LAB_143309425;
  }
  uVar19 = (uint)uVar20;
  uVar18 = (uint)uVar15;
  if (*param_2 == 0x14) {
    if (cVar3 == '\x03') {
      bVar9 = FUN_14330c340(param_1);
      lVar14 = *(longlong *)(param_1 + 0x418);
      if (lVar14 == 0) {
        lVar14 = param_1 + 0x50;
      }
      iVar4 = *(int *)(lVar14 + 0x50);
      iVar5 = *(int *)(lVar14 + 0x54);
      iVar6 = *(int *)(lVar14 + 0x4c);
      iVar7 = param_2[3];
      iVar8 = param_2[2];
      local_res18 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
      plVar13 = (longlong *)0x0;
      if (local_res18 == 0) goto LAB_143309425;
      lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
      local_res10 = uVar19;
      local_res14 = uVar18;
      uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
      puVar16 = (ulonglong *)&local_res10;
      uVar23 = CONCAT22(uVar24,bVar9 + 1);
      uVar22 = 3;
      uVar21 = 0;
      uVar11 = local_res18;
    }
    else if (cVar3 == '\x04') {
      lVar14 = *(longlong *)(param_1 + 0x418);
      if (lVar14 == 0) {
        lVar14 = param_1 + 0x50;
      }
      iVar4 = *(int *)(lVar14 + 0x50);
      iVar5 = *(int *)(lVar14 + 0x54);
      iVar6 = *(int *)(lVar14 + 0x4c);
      iVar7 = param_2[3];
      iVar8 = param_2[2];
      uVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
      if (uVar11 == 0) goto LAB_143309425;
      local_res18 = (ulonglong)CONCAT24(uVar15,uVar19);
      lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
      uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
      puVar16 = &local_res18;
      uVar23 = uVar23 & 0xffff0000;
      uVar22 = 3;
      uVar21 = 1;
    }
    else {
      if (cVar3 != '\x05') goto LAB_143309425;
      lVar14 = *(longlong *)(param_1 + 0x418);
      if (lVar14 == 0) {
        lVar14 = param_1 + 0x50;
      }
      iVar4 = *(int *)(lVar14 + 0x50);
      iVar5 = *(int *)(lVar14 + 0x54);
      iVar6 = *(int *)(lVar14 + 0x4c);
      iVar7 = param_2[3];
      iVar8 = param_2[2];
      uVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
      if (uVar11 == 0) goto LAB_143309425;
      lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
      local_res20 = uVar19;
      local_res24 = uVar18;
      uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
      puVar16 = (ulonglong *)&local_res20;
      uVar23 = uVar23 & 0xffff0000;
      uVar22 = 3;
      uVar21 = 2;
    }
  }
  else if (cVar3 == '\x03') {
    bVar9 = FUN_14330c340(param_1);
    lVar14 = *(longlong *)(param_1 + 0x418);
    if (lVar14 == 0) {
      lVar14 = param_1 + 0x50;
    }
    iVar4 = *(int *)(lVar14 + 0x50);
    iVar5 = *(int *)(lVar14 + 0x54);
    iVar6 = *(int *)(lVar14 + 0x4c);
    iVar7 = param_2[3];
    iVar8 = param_2[2];
    uVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    if (uVar11 == 0) goto LAB_143309425;
    lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
    local_68 = uVar19;
    local_64 = uVar18;
    uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
    puVar16 = (ulonglong *)&local_68;
    uVar23 = CONCAT22(uVar24,bVar9 + 1);
    uVar22 = 1;
    uVar21 = 3;
  }
  else if (cVar3 == '\x04') {
    lVar14 = *(longlong *)(param_1 + 0x418);
    if (lVar14 == 0) {
      lVar14 = param_1 + 0x50;
    }
    iVar4 = *(int *)(lVar14 + 0x50);
    iVar5 = *(int *)(lVar14 + 0x54);
    iVar6 = *(int *)(lVar14 + 0x4c);
    iVar7 = param_2[3];
    iVar8 = param_2[2];
    uVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    if (uVar11 == 0) goto LAB_143309425;
    lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
    local_60 = uVar19;
    local_5c = uVar18;
    uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
    puVar16 = (ulonglong *)&local_60;
    uVar23 = uVar23 & 0xffff0000;
    uVar22 = 1;
    uVar21 = 1;
  }
  else {
    if (cVar3 != '\x05') goto LAB_143309425;
    lVar14 = *(longlong *)(param_1 + 0x418);
    if (lVar14 == 0) {
      lVar14 = param_1 + 0x50;
    }
    iVar4 = *(int *)(lVar14 + 0x50);
    iVar5 = *(int *)(lVar14 + 0x54);
    iVar6 = *(int *)(lVar14 + 0x4c);
    iVar7 = param_2[3];
    iVar8 = param_2[2];
    uVar11 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    if (uVar11 == 0) goto LAB_143309425;
    lVar14 = (longlong)(((iVar4 - iVar5) - iVar6) + iVar7 + iVar8);
    local_58 = (uint)uVar20;
    local_54 = uVar17;
    uVar10 = Scaleform::GFx::LoadProcess::GetUnderlyingFile(param_1);
    puVar16 = (ulonglong *)&local_58;
    uVar23 = uVar23 & 0xffff0000;
    uVar22 = 1;
    uVar21 = 4;
  }
  plVar13 = (longlong *)FUN_1433a6990(uVar11,lVar12,uVar10,puVar16,uVar21,uVar22,uVar23,lVar14);
LAB_143309425:
  FUN_143319900(param_1,local_res8,plVar13);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return;
}



// FUNCTION 143309470 FUN_143309470 body=230 status=ok
// SIG undefined FUN_143309470(void)

void FUN_143309470(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar6 = *(uint *)(lVar5 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar5 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar6 + *(longlong *)(lVar5 + 0x60));
  *(uint *)(lVar5 + 0x4c) = uVar6 + 2;
  uVar6 = (uint)CONCAT11(uVar1,uVar2);
  FUN_143300df0(param_1 + 0x20,"  sprite\n  char id = %d\n",uVar6);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,0x60);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1433aa090(lVar5,*(undefined8 *)(param_1 + 0x40));
  }
  local_res8[0] = uVar6;
  FUN_1433aa1b0(lVar5,param_1,local_res8);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(uint *)(lVar5 + 0x18) = uVar6;
  local_res8[0] = uVar6;
  FUN_14330e6e0(uVar4,local_res8,lVar5);
  FUN_1432de450(lVar5);
  return;
}



// FUNCTION 143309570 FUN_143309570 body=206 status=ok
// SIG undefined FUN_143309570(void)

void FUN_143309570(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((*(byte *)(lVar1 + 0xd0) & 8) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x50);
    if (plVar3 == (longlong *)0x0) {
      FUN_14330c260(param_1 + 0x20,
                    "GFx_RemoveObjectLoader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    plVar2 = (longlong *)(**(code **)(*plVar3 + 0x48))(plVar3,param_1);
  }
  else {
    plVar3 = (longlong *)(lVar1 + 0x10);
    if (*(ulonglong *)(lVar1 + 0x18) < 0x18) {
      plVar2 = (longlong *)FUN_14330cf40(plVar3,0x18);
    }
    else {
      plVar2 = (longlong *)*plVar3;
      *plVar3 = (longlong)(plVar2 + 3);
      *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x18;
    }
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    *plVar2 = (longlong)&PTR_FUN_145afa510;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
    FUN_143300df0(param_1 + 0x20,"  RemoveObject(%d, %d)\n",(short)plVar2[2],(short)plVar2[1]);
    FUN_14330bde0(param_1,plVar2);
  }
  return;
}



// FUNCTION 143309650 FUN_143309650 body=201 status=ok
// SIG undefined FUN_143309650(void)

void FUN_143309650(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((*(byte *)(lVar1 + 0xd0) & 8) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x50);
    if (plVar3 == (longlong *)0x0) {
      FUN_14330c260(param_1 + 0x20,
                    "GFx_PlaceObject3Loader - AS2 support is not installed. Tag is skipped.");
      return;
    }
    plVar2 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,param_1);
  }
  else {
    plVar3 = (longlong *)(lVar1 + 0x10);
    if (*(ulonglong *)(lVar1 + 0x18) < 0x10) {
      plVar2 = (longlong *)FUN_14330cf40(plVar3,0x10);
    }
    else {
      plVar2 = (longlong *)*plVar3;
      *plVar3 = (longlong)(plVar2 + 2);
      *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x10;
    }
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    *plVar2 = (longlong)&PTR_FUN_145afa4c0;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
    FUN_143300df0(param_1 + 0x20,"  RemoveObject2(%d)\n",(short)plVar2[1]);
    FUN_14330bde0(param_1,plVar2);
  }
  return;
}



// FUNCTION 143309770 FUN_143309770 body=243 status=ok
// SIG undefined FUN_143309770(void)

void FUN_143309770(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar3 + 0x29) = 0;
  if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 2) {
    FUN_143396c40(lVar3,2);
  }
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar3 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar3 + 0x60)));
  *(uint *)(lVar3 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  button GFxCharacter loader: CharId = %d\n",uVar4);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x60);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1433b0170(lVar3);
  }
  FUN_1433b0270(lVar3,param_1,*param_2);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar4;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,lVar3);
  }
  if (lVar3 != 0) {
    FUN_1432de450(lVar3);
  }
  return;
}



// FUNCTION 143309870 FUN_143309870 body=180 status=ok
// SIG undefined FUN_143309870(void)

void FUN_143309870(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_18 [2];
  
  FUN_1432c55c0(local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
  lVar2 = *(longlong *)(param_1 + 0x418);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x50;
  }
  FUN_143395ed0(lVar2,local_18);
  if (*(int *)(param_1 + 0x3b8) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x88))();
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
              (*(longlong **)(param_1 + 0x38),local_18,
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  }
  FUN_143300df0(param_1 + 0x20,"  Frame label: \"%s\"\n",(local_18[0] & 0xfffffffffffffffc) + 0xc);
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18[0] & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143309930 FUN_143309930 body=491 status=ok
// SIG undefined FUN_143309930(void)

void FUN_143309930(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint local_res8 [2];
  int local_38 [2];
  longlong local_30;
  ulonglong local_28 [2];
  
  lVar7 = *(longlong *)(param_1 + 0x418);
  if (lVar7 == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar7 + 0x29) = 0;
  if (*(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x4c) < 2) {
    FUN_143396c40(lVar7,2);
  }
  uVar3 = *(uint *)(lVar7 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar7 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar7 + 0x60));
  *(uint *)(lVar7 + 0x4c) = uVar3 + 2;
  uVar10 = CONCAT11(uVar1,uVar2);
  FUN_143300df0(param_1 + 0x20,"  export: count = %d\n",(uint)uVar10);
  if (uVar10 != 0) {
    uVar9 = (ulonglong)(uint)uVar10;
    do {
      lVar7 = *(longlong *)(param_1 + 0x418);
      if (lVar7 == 0) {
        lVar7 = param_1 + 0x50;
      }
      *(undefined1 *)(lVar7 + 0x29) = 0;
      if (*(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x4c) < 2) {
        FUN_143396c40(lVar7,2);
      }
      uVar3 = *(uint *)(lVar7 + 0x4c);
      uVar10 = CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar7 + 0x60)),
                        *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar7 + 0x60)));
      *(uint *)(lVar7 + 0x4c) = uVar3 + 2;
      FUN_1432c55c0(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
      uVar6 = Scaleform::GFx::LoadProcess::GetStream(param_1);
      FUN_143395ed0(uVar6,local_28);
      FUN_143300df0(param_1 + 0x20,"  export: id = %d, name = %s\n",(uint)uVar10,
                    (local_28[0] & 0xfffffffffffffffc) + 0xc);
      local_38[0] = 0;
      local_30 = 0;
      local_res8[0] = (uint)uVar10;
      cVar4 = FUN_14330e8c0(*(undefined8 *)(param_1 + 0x38),local_38,local_res8);
      if (cVar4 == '\0') {
        FUN_14330c260(param_1 + 0x20,"Don\'t know how to export Resource \'%s\'",
                      (local_28[0] & 0xfffffffffffffffc) + 0xc);
      }
      else {
        local_res8[0] = (uint)uVar10;
        FUN_14330e7b0(*(undefined8 *)(param_1 + 0x38),local_28,local_res8,local_38);
      }
      if ((local_38[0] == 0) && (local_30 != 0)) {
        FUN_1432de450();
      }
      uVar8 = local_28[0] & 0xfffffffffffffffc;
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 143309b30 FUN_143309b30 body=756 status=ok
// SIG undefined FUN_143309b30(void)

void FUN_143309b30(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char *pcVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  int local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  FUN_1432c2f70(&local_res18);
  FUN_143395ed0(lVar13,&local_res18);
  if (*param_2 == 0x47) {
    lVar6 = *(longlong *)(param_1 + 0x418);
    if (lVar6 == 0) {
      lVar6 = param_1 + 0x50;
    }
    *(undefined1 *)(lVar6 + 0x29) = 0;
    if (*(int *)(lVar6 + 0x50) - *(int *)(lVar6 + 0x4c) < 2) {
      FUN_143396c40(lVar6,2);
    }
    *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 2;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar4 = *(uint *)(lVar13 + 0x4c);
  uVar2 = *(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar3 = *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar13 + 0x60));
  pcVar9 = "  importAssets2: SourceUrl = %s, count = %d\n";
  *(uint *)(lVar13 + 0x4c) = uVar4 + 2;
  uVar10 = CONCAT11(uVar2,uVar3);
  if (*param_2 != 0x47) {
    pcVar9 = "  importAssets: SourceUrl = %s, count = %d\n";
  }
  FUN_143300df0(param_1 + 0x20,pcVar9,(local_res18 & 0xfffffffffffffffc) + 0xc,(uint)uVar10);
  lVar6 = FUN_14330b9c0(param_1);
  *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xe8);
  FUN_1432c4d80(lVar6 + 0x18,&local_res18);
  if (uVar10 != 0) {
    uVar12 = (ulonglong)(uint)uVar10;
    do {
      FUN_1432c2f70(&local_res10);
      *(undefined1 *)(lVar13 + 0x29) = 0;
      if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
        FUN_143396c40(lVar13,2);
      }
      uVar4 = *(uint *)(lVar13 + 0x4c);
      uVar10 = CONCAT11(*(undefined1 *)((ulonglong)(uVar4 + 1) + *(longlong *)(lVar13 + 0x60)),
                        *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar13 + 0x60)));
      *(uint *)(lVar13 + 0x4c) = uVar4 + 2;
      FUN_143395ed0(lVar13,&local_res10);
      FUN_143300df0(param_1 + 0x20,"  import: id = %d, name = %s\n",(uint)uVar10,
                    (local_res10 & 0xfffffffffffffffc) + 0xc);
      local_res8[0] = (uint)uVar10;
      FUN_14330e630(*(undefined8 *)(param_1 + 0x38),local_38,local_res8);
      FUN_14330be70(lVar6,(local_res10 & 0xfffffffffffffffc) + 0xc,uVar10,local_30);
      if ((local_38[0] == 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
        FUN_1432de450();
      }
      uVar11 = local_res10 & 0xfffffffffffffffc;
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar11 + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar11);
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_143319b30(param_1,lVar6);
  lVar13 = *(longlong *)(param_1 + 0x38);
  plVar8 = (longlong *)(lVar13 + 0x10);
  if (*(ulonglong *)(lVar13 + 0x18) < 0x10) {
    puVar7 = (undefined8 *)FUN_14330cf40(plVar8,0x10);
  }
  else {
    puVar7 = (undefined8 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 2);
    *(ulonglong *)(lVar13 + 0x18) = *(ulonglong *)(lVar13 + 0x18) - 0x10;
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_145afa5a0;
  }
  plVar8 = (longlong *)(param_1 + 0x3f8);
  *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar6 + 0x24);
  uVar12 = *(longlong *)(param_1 + 0x400) + 1;
  if (uVar12 < *(ulonglong *)(param_1 + 0x400)) {
    uVar11 = uVar12;
    if (*(ulonglong *)(param_1 + 0x408) >> 1 <= uVar12) goto LAB_143309dd2;
  }
  else {
    if (uVar12 <= *(ulonglong *)(param_1 + 0x408)) goto LAB_143309dd2;
    uVar11 = (uVar12 >> 2) + uVar12;
  }
  FUN_14330c390(plVar8,plVar8,uVar11);
LAB_143309dd2:
  *(ulonglong *)(param_1 + 0x400) = uVar12;
  puVar1 = (undefined8 *)(*plVar8 + -8 + uVar12 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = puVar7;
  }
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143309e80 FUN_143309e80 body=135 status=ok
// SIG undefined FUN_143309e80(void)

void FUN_143309e80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar1 + 0x29) = 0;
  if (*(int *)(lVar1 + 0x50) - *(int *)(lVar1 + 0x4c) < 2) {
    FUN_143396c40(lVar1,2);
  }
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 2;
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar1 + 0x29) = 0;
  if (*(int *)(lVar1 + 0x50) - *(int *)(lVar1 + 0x4c) < 2) {
    FUN_143396c40(lVar1,2);
  }
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 2;
  FUN_143300df0(param_1 + 0x20,"SetTabIndex (unused) \n");
  return;
}



// FUNCTION 143309f10 FUN_143309f10 body=290 status=ok
// SIG undefined FUN_143309f10(void)

void FUN_143309f10(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  iVar2 = Scaleform::GFx::Stream::GetTagEndPosition(lVar4);
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  iVar2 = ((*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x54)) - *(int *)(lVar4 + 0x4c)) + iVar2;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)(iVar2 + 1),0);
  if (lVar4 != 0) {
    lVar6 = 0;
    if (0 < iVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x418);
        if (lVar5 == 0) {
          lVar5 = param_1 + 0x50;
        }
        *(undefined1 *)(lVar5 + 0x29) = 0;
        if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 1) {
          FUN_143396d60(lVar5);
        }
        uVar1 = *(undefined1 *)((ulonglong)*(uint *)(lVar5 + 0x4c) + *(longlong *)(lVar5 + 0x60));
        *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) + 1;
        *(undefined1 *)(lVar6 + lVar4) = uVar1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    FUN_14330e5c0(*(undefined8 *)(param_1 + 0x38),lVar4,iVar2);
    iVar3 = 0xff;
    if (iVar2 < 0xff) {
      iVar3 = iVar2;
    }
    *(undefined1 *)(iVar3 + lVar4) = 0;
    FUN_143300df0(param_1 + 0x20,"  metadata: %s\n",lVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
  }
  return;
}



// FUNCTION 14330a040 FUN_14330a040 body=115 status=ok
// SIG undefined FUN_14330a040(void)

void FUN_14330a040(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  *(uint *)(*(longlong *)(param_1 + 0x38) + 0xd0) = (uint)CONCAT11(uVar1,uVar2);
  return;
}



// FUNCTION 14330a0c0 FUN_14330a0c0 body=500 status=ok
// SIG undefined FUN_14330a0c0(void)

void FUN_14330a0c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18 [2];
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x50;
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined1 *)(lVar4 + 0x29) = 0;
  if (*(int *)(lVar4 + 0x50) - *(int *)(lVar4 + 0x4c) < 2) {
    FUN_143396c40(lVar4,2);
  }
  uVar3 = *(uint *)(lVar4 + 0x4c);
  uVar5 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar3 + 1) + *(longlong *)(lVar4 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x60)));
  *(uint *)(lVar4 + 0x4c) = uVar3 + 2;
  FUN_143396900(lVar4,&local_28);
  cVar2 = FUN_143396c00(lVar4);
  if (cVar2 != '\0') {
    FUN_143300df0(param_1 + 0x20,"Scale9GridLoader, id=%d, x1=%d, y1=%d, x2=%d, y2=%d\n",uVar5,
                  (int)(float)local_28,(int)local_28._4_4_,(int)(float)uStack_20,
                  (int)uStack_20._4_4_);
  }
  if ((float)uStack_20 <= (float)local_28) {
    FUN_14330c2d0(param_1 + 0x20,"Scale9Grid for resource=%d has negative width %f",uVar5,
                  (double)(((float)uStack_20 - (float)local_28) / 20.0));
    return;
  }
  if (uStack_20._4_4_ <= local_28._4_4_) {
    FUN_14330c2d0(param_1 + 0x20,"Scale9Grid for resource=%d has negative height %f",uVar5,
                  (double)((uStack_20._4_4_ - local_28._4_4_) / 20.0));
    return;
  }
  local_18[0] = 0;
  local_10 = (longlong *)0x0;
  local_res8[0] = uVar5;
  cVar2 = FUN_14330e8c0(*(undefined8 *)(param_1 + 0x38),local_18,local_res8);
  plVar1 = local_10;
  if (cVar2 != '\0') {
    if (local_18[0] != 0) {
      return;
    }
    if (local_10 == (longlong *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*local_10 + 0x10))(local_10);
    if ((uVar3 & 0xff00) == 0x8400) {
      FUN_14330c8c0(plVar1,&local_28);
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((uVar3 & 0xff00) == 0x8100) {
        FUN_14330c810(plVar1,&local_28);
      }
    }
  }
  if ((local_18[0] == 0) && (local_10 != (longlong *)0x0)) {
    FUN_1432de450();
  }
  return;
}



// FUNCTION 14330a2d0 FUN_14330a2d0 body=672 status=ok
// SIG undefined FUN_14330a2d0(void)

void FUN_14330a2d0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined2 uVar6;
  ushort uVar7;
  longlong lVar8;
  uint local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  int local_48 [2];
  longlong local_40;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar8 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x418);
  }
  uVar2 = FUN_143300e60(lVar8);
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar1 = *(uint *)(lVar5 + 0x4c);
  uVar7 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar5 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar5 + 0x60)));
  *(uint *)(lVar5 + 0x4c) = uVar1 + 2;
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar1 = *(uint *)(lVar5 + 0x4c);
  uVar6 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar5 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar5 + 0x60)));
  *(uint *)(lVar5 + 0x4c) = uVar1 + 2;
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar1 = *(uint *)(lVar5 + 0x4c);
  uVar4 = CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar5 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar5 + 0x60)));
  *(uint *)(lVar5 + 0x4c) = uVar1 + 2;
  FUN_1432c2f70(&local_res18);
  FUN_1432c2f70(&local_res10);
  FUN_143396040(lVar8,&local_res18);
  FUN_143396040(lVar8,&local_res10);
  FUN_143300df0(lVar8,
                "  DefineExternalImage: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = \'%s\', exp = \'%s\', w = %d, h = %d\n"
                ,*param_2,uVar2,CONCAT44(uVar9,(uint)uVar7),(local_res10 & 0xfffffffffffffffc) + 0xc
                ,(local_res18 & 0xfffffffffffffffc) + 0xc,uVar6,uVar4);
  local_res8[0] = uVar2 & 0x9ffff;
  FUN_14330c060(local_48,param_1,local_res8,(local_res10 & 0xfffffffffffffffc) + 0xc,
                (local_res18 & 0xfffffffffffffffc) + 0xc,uVar7,uVar6,uVar4);
  if ((local_48[0] == 0) && (local_40 != 0)) {
    FUN_1432de450();
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14330a580 FUN_14330a580 body=2789 status=ok
// SIG undefined FUN_14330a580(void)

void FUN_14330a580(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  undefined4 uVar14;
  float fVar15;
  uint uVar16;
  DWORD DVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined4 extraout_var;
  RefCountNTSImpl *this;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  undefined4 *puVar25;
  PVOID pvBuffer;
  ushort uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined4 local_res20 [2];
  undefined8 in_stack_fffffffffffffe98;
  undefined1 *puVar30;
  undefined4 in_stack_fffffffffffffeb0;
  undefined2 uVar31;
  longlong local_148;
  ulonglong local_140;
  int local_138 [2];
  undefined4 local_130;
  undefined4 uStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  uint local_114;
  undefined4 local_110 [2];
  uint local_108;
  uint uStack_104;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  ushort uStack_fc;
  undefined2 uStack_fa;
  undefined **local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *plVar20;
  
  uVar31 = (undefined2)((uint)in_stack_fffffffffffffeb0 >> 0x10);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  lVar23 = *(longlong *)(param_1 + 0x418);
  if (lVar23 == 0) {
    lVar23 = param_1 + 0x50;
  }
  local_a0 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  uVar14 = FUN_143300e60(lVar23);
  *(undefined1 *)(lVar23 + 0x29) = 0;
  if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
    FUN_143396c40(lVar23,2);
  }
  uVar22 = *(uint *)(lVar23 + 0x4c);
  uVar26 = CONCAT11(*(undefined1 *)((ulonglong)(uVar22 + 1) + *(longlong *)(lVar23 + 0x60)),
                    *(undefined1 *)((ulonglong)uVar22 + *(longlong *)(lVar23 + 0x60)));
  *(uint *)(lVar23 + 0x4c) = uVar22 + 2;
  FUN_1432c2f70(&local_140);
  FUN_143396040(lVar23,&local_140);
  *(undefined1 *)(lVar23 + 0x29) = 0;
  if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
    FUN_143396c40(lVar23,2);
  }
  iVar24 = *(uint *)(lVar23 + 0x4c) + 2;
  uVar5 = CONCAT11(*(undefined1 *)
                    ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60)),
                   *(undefined1 *)
                    ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)));
  *(int *)(lVar23 + 0x4c) = iVar24;
  uStack_fe = 0;
  *(undefined1 *)(lVar23 + 0x29) = 0;
  uStack_100 = uVar5;
  if (*(int *)(lVar23 + 0x50) - iVar24 < 2) {
    FUN_143396c40(lVar23,2);
  }
  iVar24 = *(uint *)(lVar23 + 0x4c) + 2;
  uStack_fc = CONCAT11(*(undefined1 *)
                        ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60)),
                       *(undefined1 *)
                        ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)));
  uVar22 = (uint)uStack_fc;
  *(int *)(lVar23 + 0x4c) = iVar24;
  uStack_fa = 0;
  *(undefined1 *)(lVar23 + 0x29) = 0;
  if (*(int *)(lVar23 + 0x50) - iVar24 < 1) {
    FUN_143396d60(lVar23);
  }
  iVar24 = *(uint *)(lVar23 + 0x4c) + 1;
  bVar1 = *(byte *)((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60));
  *(int *)(lVar23 + 0x4c) = iVar24;
  uVar16 = (uint)bVar1;
  *(undefined1 *)(lVar23 + 0x29) = 0;
  uStack_104 = uVar16;
  if (*(int *)(lVar23 + 0x50) - iVar24 < 2) {
    FUN_143396c40(lVar23,2);
  }
  uVar28 = (uint)CONCAT11(*(undefined1 *)
                           ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60))
                          ,*(undefined1 *)
                            ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)));
  *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
  local_108 = uVar28;
  cVar13 = FUN_143396c00(lVar23);
  if (cVar13 != '\0') {
    FUN_143300df0(lVar23,
                  "  FontTextureInfo: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = \'%s\', w = %d, h = %d\n"
                  ,*param_2,uVar14,CONCAT44(uVar18,(uint)uVar26),
                  (local_140 & 0xfffffffffffffffc) + 0xc,uVar5,uVar22);
    uVar31 = (undefined2)(uVar22 >> 0x10);
  }
  puVar25 = local_res20;
  pvBuffer = (PVOID)((local_140 & 0xfffffffffffffffc) + 0xc);
  puVar30 = &DAT_145af3922;
  local_res20[0] = uVar14;
  FUN_14330c060(local_138,param_1,puVar25,pvBuffer,&DAT_145af3922,uVar26,uStack_100,
                CONCAT22(uVar31,uStack_fc));
  lVar19 = 0;
  local_148 = 0;
  local_b0 = 0;
  local_a8 = 0;
  *(undefined1 *)(lVar23 + 0x29) = 0;
  local_b8 = 0;
  if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
    FUN_143396c40(lVar23,2);
  }
  uVar26 = CONCAT11(*(undefined1 *)
                     ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60)),
                    *(undefined1 *)
                     ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)));
  *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
  cVar13 = FUN_143396c00(lVar23);
  if (cVar13 != '\0') {
    pvBuffer = (PVOID)(ulonglong)uVar28;
    puVar30 = (undefined1 *)(ulonglong)(uint)uVar26;
    puVar25 = (undefined4 *)(ulonglong)uVar16;
    FUN_143300df0(lVar23,"  PadPixels = %d, nominal glyph size = %d, numTexGlyphs = %d\n");
  }
  uVar22 = 0;
  if (uVar26 != 0) {
    do {
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      lVar19 = *(longlong *)(lVar23 + 0x60);
      local_128 = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((ulonglong)(uVar16 + 3) + lVar19),
                                                    *(undefined1 *)
                                                     ((ulonglong)(uVar16 + 2) + lVar19)),
                                           *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar19)),
                                  *(undefined1 *)((ulonglong)uVar16 + lVar19));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if ((int)(*(int *)(lVar23 + 0x50) - (uVar16 + 4)) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      lVar19 = *(longlong *)(lVar23 + 0x60);
      local_124 = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((ulonglong)(uVar16 + 3) + lVar19),
                                                    *(undefined1 *)
                                                     ((ulonglong)(uVar16 + 2) + lVar19)),
                                           *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar19)),
                                  *(undefined1 *)((ulonglong)uVar16 + lVar19));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if ((int)(*(int *)(lVar23 + 0x50) - (uVar16 + 4)) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      lVar19 = *(longlong *)(lVar23 + 0x60);
      local_120 = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((ulonglong)(uVar16 + 3) + lVar19),
                                                    *(undefined1 *)
                                                     ((ulonglong)(uVar16 + 2) + lVar19)),
                                           *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar19)),
                                  *(undefined1 *)((ulonglong)uVar16 + lVar19));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if ((int)(*(int *)(lVar23 + 0x50) - (uVar16 + 4)) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      lVar19 = *(longlong *)(lVar23 + 0x60);
      local_11c = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((ulonglong)(uVar16 + 3) + lVar19),
                                                    *(undefined1 *)
                                                     ((ulonglong)(uVar16 + 2) + lVar19)),
                                           *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar19)),
                                  *(undefined1 *)((ulonglong)uVar16 + lVar19));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if ((int)(*(int *)(lVar23 + 0x50) - (uVar16 + 4)) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      lVar19 = *(longlong *)(lVar23 + 0x60);
      local_118 = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                     ((ulonglong)(uVar16 + 3) + lVar19),
                                                    *(undefined1 *)
                                                     ((ulonglong)(uVar16 + 2) + lVar19)),
                                           *(undefined1 *)((ulonglong)(uVar16 + 1) + lVar19)),
                                  *(undefined1 *)((ulonglong)uVar16 + lVar19));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if ((int)(*(int *)(lVar23 + 0x50) - (uVar16 + 4)) < 4) {
        FUN_143396c40(lVar23,4);
      }
      uVar16 = *(uint *)(lVar23 + 0x4c);
      pvBuffer = *(PVOID *)(lVar23 + 0x60);
      fVar15 = (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                  ((ulonglong)(uVar16 + 3) + (longlong)pvBuffer),
                                                 *(undefined1 *)
                                                  ((ulonglong)(uVar16 + 2) + (longlong)pvBuffer)),
                                        *(undefined1 *)
                                         ((ulonglong)(uVar16 + 1) + (longlong)pvBuffer)),
                               *(undefined1 *)((ulonglong)uVar16 + (longlong)pvBuffer));
      *(uint *)(lVar23 + 0x4c) = uVar16 + 4;
      cVar13 = FUN_143396c00(lVar23);
      fVar12 = local_118;
      fVar11 = local_11c;
      fVar10 = local_120;
      fVar9 = local_124;
      fVar8 = local_128;
      if (cVar13 != '\0') {
        puVar30 = (undefined1 *)(double)local_124;
        FUN_143300df0(lVar23,
                      "  TEXGLYPH[%d]: uvBnd.x1 = %f, uvBnd.y1 = %f, uvBnd.x2 = %f, uvBnd.y2 = %f\n"
                      ,uVar22,(double)local_128,puVar30,(double)local_120,(double)local_11c);
        pvBuffer = (PVOID)(double)fVar15;
        FUN_143300df0(lVar23,"                uvOrigin.x = %f, uvOrigin.y = %f\n",(double)fVar12);
      }
      local_e8 = (longlong *)0x0;
      local_f0 = 1;
      local_f8 = &PTR_FUN_145afa260;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c0 = 0xffffffff;
      plVar20 = local_e8;
      if (local_138[0] == 1) {
        local_c0 = local_130;
      }
      else if (((local_138[0] == 0) &&
               ((longlong *)CONCAT44(uStack_12c,local_130) != (longlong *)0x0)) &&
              (uVar16 = (**(code **)(*(longlong *)CONCAT44(uStack_12c,local_130) + 0x10))(),
              plVar20 = local_e8, (uVar16 & 0xff00) == 0x100)) {
        lVar19 = 0;
        if (local_138[0] == 0) {
          lVar19 = CONCAT44(uStack_12c,local_130);
        }
        plVar20 = *(longlong **)(lVar19 + 0x18);
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))();
        }
      }
      local_e8 = plVar20;
      puVar25 = (undefined4 *)(local_148 + 1);
      local_d8 = CONCAT44(fVar9,fVar8);
      uStack_d0 = CONCAT44(fVar11,fVar10);
      local_c8 = fVar12;
      local_c4 = fVar15;
      FUN_14330c6f0(&local_b8,&local_b8);
      local_148 = local_b0;
      lVar19 = local_b8;
      puVar21 = (undefined8 *)(local_b8 + -0x40 + local_b0 * 0x40);
      if (puVar21 != (undefined8 *)0x0) {
        *puVar21 = &PTR_FUN_144f70a50;
        *puVar21 = &PTR_FUN_145afa260;
        *(undefined4 *)(puVar21 + 1) = 1;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))();
        }
        puVar21[2] = local_e8;
        puVar21[4] = local_d8;
        puVar21[5] = uStack_d0;
        *(float *)(puVar21 + 6) = local_c8;
        *(float *)((longlong)puVar21 + 0x34) = local_c4;
        *(undefined4 *)(puVar21 + 7) = local_c0;
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_f8);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar26);
  }
  *(undefined1 *)(lVar23 + 0x29) = 0;
  if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
    FUN_143396c40(lVar23,2);
  }
  uVar26 = CONCAT11(*(undefined1 *)
                     ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60)),
                    *(undefined1 *)
                     ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)));
  *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
  cVar13 = FUN_143396c00(lVar23);
  if (cVar13 != '\0') {
    puVar25 = (undefined4 *)(ulonglong)(uint)uVar26;
    FUN_143300df0(lVar23,"  NumFonts = %d\n");
  }
  if (uVar26 != 0) {
    uVar6 = CONCAT44(uStack_104,local_108);
    uVar7 = CONCAT26(uStack_fa,CONCAT24(uStack_fc,CONCAT22(uStack_fe,uStack_100)));
    uVar29 = (ulonglong)(uint)uVar26;
    do {
      *(undefined1 *)(lVar23 + 0x29) = 0;
      if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
        FUN_143396c40(lVar23,2);
      }
      local_114 = (uint)CONCAT11(*(undefined1 *)
                                  ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) +
                                  *(longlong *)(lVar23 + 0x60)),
                                 *(undefined1 *)
                                  ((ulonglong)*(uint *)(lVar23 + 0x4c) +
                                  *(longlong *)(lVar23 + 0x60)));
      *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
      DVar17 = Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData
                         (*(HDC *)(param_1 + 0x38),(DWORD)&local_114,(DWORD)puVar25,pvBuffer,
                          (DWORD)puVar30);
      plVar20 = (longlong *)CONCAT44(extraout_var,DVar17);
      if (plVar20 != (longlong *)0x0) {
        this = (RefCountNTSImpl *)(**(code **)(*plVar20 + 0x58))(plVar20);
        if ((this == (RefCountNTSImpl *)0x0) ||
           (*(int *)(this + 8) = *(int *)(this + 8) + 1, this == (RefCountNTSImpl *)0x0)) {
          this = (RefCountNTSImpl *)(**(code **)(*local_a0 + 0x50))();
          if (this == (RefCountNTSImpl *)0x0) {
            this = (RefCountNTSImpl *)0x0;
          }
          else {
            uVar18 = (**(code **)(*plVar20 + 0x90))();
            *(undefined8 *)(this + 8) = 0;
            *(undefined4 *)(this + 8) = 1;
            *(undefined ***)this = &PTR_FUN_145afa268;
            *(undefined4 *)(this + 0x10) = 0x30;
            *(undefined4 *)(this + 0x14) = 3;
            *(undefined4 *)(this + 0x18) = 0x400;
            *(undefined4 *)(this + 0x1c) = 0x400;
            *(undefined8 *)(this + 0x20) = 0;
            *(undefined8 *)(this + 0x28) = 0;
            *(undefined8 *)(this + 0x30) = 0;
            *(undefined8 *)(this + 0x38) = 0;
            this[0x40] = (RefCountNTSImpl)0x1;
            FUN_143302e40(this + 0x20,uVar18);
          }
          if (this != (RefCountNTSImpl *)0x0) {
            *(undefined8 *)(this + 0x10) = uVar6;
            *(undefined8 *)(this + 0x18) = uVar7;
            (**(code **)(*plVar20 + 0x60))(plVar20,this);
            goto LAB_14330ae61;
          }
        }
        else {
LAB_14330ae61:
          local_110[0] = uVar14;
          FUN_143398040(this,local_110,local_138);
        }
        *(undefined1 *)(lVar23 + 0x29) = 0;
        if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
          FUN_143396c40(lVar23,2);
        }
        uVar22 = (uint)CONCAT11(*(undefined1 *)
                                 ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) +
                                 *(longlong *)(lVar23 + 0x60)),
                                *(undefined1 *)
                                 ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60)
                                 ));
        puVar25 = (undefined4 *)(ulonglong)uVar22;
        *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
        if (uVar22 != 0) {
          uVar27 = (ulonglong)uVar22;
          do {
            *(undefined1 *)(lVar23 + 0x29) = 0;
            if (*(int *)(lVar23 + 0x50) - *(int *)(lVar23 + 0x4c) < 2) {
              FUN_143396c40(lVar23,2);
            }
            uVar2 = *(undefined1 *)
                     ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60));
            uVar3 = *(undefined1 *)
                     ((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60));
            uVar22 = *(uint *)(lVar23 + 0x4c) + 2;
            puVar25 = (undefined4 *)(ulonglong)uVar22;
            *(uint *)(lVar23 + 0x4c) = uVar22;
            *(undefined1 *)(lVar23 + 0x29) = 0;
            if ((int)(*(int *)(lVar23 + 0x50) - uVar22) < 2) {
              FUN_143396c40(lVar23,2);
            }
            uVar4 = *(undefined1 *)
                     ((ulonglong)(*(int *)(lVar23 + 0x4c) + 1) + *(longlong *)(lVar23 + 0x60));
            bVar1 = *(byte *)((ulonglong)*(uint *)(lVar23 + 0x4c) + *(longlong *)(lVar23 + 0x60));
            pvBuffer = (PVOID)(ulonglong)bVar1;
            *(uint *)(lVar23 + 0x4c) = *(uint *)(lVar23 + 0x4c) + 2;
            if (this != (RefCountNTSImpl *)0x0) {
              puVar25 = (undefined4 *)((ulonglong)CONCAT11(uVar4,bVar1) * 0x40 + lVar19);
              Scaleform::GFx::TextureGlyphData::AddTextureGlyph(this,CONCAT11(uVar2,uVar3));
            }
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  FUN_143300df0(lVar23,&DAT_145af0af0);
  puVar21 = (undefined8 *)(lVar19 + -0x40 + local_148 * 0x40);
  for (; local_148 != 0; local_148 = local_148 + -1) {
    (**(code **)*puVar21)(puVar21,0);
    puVar21 = puVar21 + -8;
  }
  if (lVar19 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar19);
  }
  if ((local_138[0] == 0) && (CONCAT44(uStack_12c,local_130) != 0)) {
    FUN_1432de450();
  }
  iVar24 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                     ((local_140 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar24 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_140 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14330b070 FUN_14330b070 body=492 status=ok
// SIG undefined FUN_14330b070(void)

void FUN_14330b070(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ushort uVar7;
  uint local_res8 [2];
  ulonglong local_res10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  int local_38 [2];
  longlong local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar5 = *(longlong *)(param_1 + 0x418);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x4c) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar6 = *(uint *)(lVar5 + 0x4c);
  uVar4 = (*(byte *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar5 + 0x60)) | 0x500) << 8 |
          (uint)*(byte *)((ulonglong)uVar6 + *(longlong *)(lVar5 + 0x60));
  *(uint *)(lVar5 + 0x4c) = uVar6 + 2;
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if ((int)(*(int *)(lVar5 + 0x50) - (uVar6 + 2)) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar6 = *(uint *)(lVar5 + 0x4c);
  uVar7 = CONCAT11(*(undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar5 + 0x60)),
                   *(undefined1 *)((ulonglong)uVar6 + *(longlong *)(lVar5 + 0x60)));
  *(uint *)(lVar5 + 0x4c) = uVar6 + 2;
  *(undefined1 *)(lVar5 + 0x29) = 0;
  if ((int)(*(int *)(lVar5 + 0x50) - (uVar6 + 2)) < 2) {
    FUN_143396c40(lVar5,2);
  }
  uVar6 = *(uint *)(lVar5 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(lVar5 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar6 + *(longlong *)(lVar5 + 0x60));
  *(uint *)(lVar5 + 0x4c) = uVar6 + 2;
  FUN_1432c2f70(&local_res10);
  FUN_143396040(lVar5,&local_res10);
  uVar6 = (uint)CONCAT11(uVar1,uVar2);
  FUN_143300df0(lVar5,
                "  DefineExternalGradientImage: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = \'%s\', size = %d\n"
                ,*param_2,uVar4,CONCAT44(uVar8,(uint)uVar7),(local_res10 & 0xfffffffffffffffc) + 0xc
                ,uVar6);
  local_res8[0] = uVar4;
  FUN_14330c060(local_38,param_1,local_res8,(local_res10 & 0xfffffffffffffffc) + 0xc,&DAT_145af3922,
                uVar7,uVar6 & 0xffff0000,0);
  if ((local_38[0] == 0) && (local_30 != 0)) {
    FUN_1432de450();
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14330b290 FUN_14330b290 body=784 status=ok
// SIG undefined FUN_14330b290(void)

void FUN_14330b290(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  RefCountNTSImpl *this;
  longlong lVar13;
  uint local_res8 [2];
  longlong *local_60;
  undefined8 local_58;
  int local_50 [2];
  longlong local_48;
  
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  uVar1 = *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar2 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  uVar3 = *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar4 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  local_res8[0] =
       CONCAT31(local_res8[0]._1_3_,
                *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60)));
  uVar5 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  uVar6 = *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar7 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  uVar8 = *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar9 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  lVar13 = *(longlong *)(param_1 + 0x418);
  if (lVar13 == 0) {
    lVar13 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar13 + 0x29) = 0;
  if (*(int *)(lVar13 + 0x50) - *(int *)(lVar13 + 0x4c) < 2) {
    FUN_143396c40(lVar13,2);
  }
  uVar12 = *(uint *)(lVar13 + 0x4c);
  uVar10 = *(undefined1 *)((ulonglong)(uVar12 + 1) + *(longlong *)(lVar13 + 0x60));
  uVar11 = *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(lVar13 + 0x60));
  *(uint *)(lVar13 + 0x4c) = uVar12 + 2;
  this = (RefCountNTSImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
  if (this != (RefCountNTSImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_145afa338;
    *(undefined4 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0x40000;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(uint *)(this + 0x10) = CONCAT11(uVar3,uVar4) | 0x90000;
  *(uint *)(this + 0x28) = (uint)CONCAT11(uVar8,uVar9);
  *(uint *)(this + 0x2c) = (uint)CONCAT11(uVar10,uVar11);
  *(uint *)(this + 0x20) = (uint)CONCAT11((undefined1)local_res8[0],uVar5);
  *(uint *)(this + 0x24) = (uint)CONCAT11(uVar6,uVar7);
  FUN_14331a980(&local_60,this);
  local_res8[0] = (uint)CONCAT11(uVar1,uVar2);
  FUN_143319680(param_1,local_50,local_res8,&local_60);
  if ((local_50[0] == 0) && (local_48 != 0)) {
    FUN_1432de450();
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))(local_60,local_58);
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 14330b5b0 FUN_14330b5b0 body=727 status=ok
// SIG undefined FUN_14330b5b0(void)

void FUN_14330b5b0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong local_58 [2];
  ulonglong local_48;
  undefined8 local_40;
  uint local_38;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x210) == 0) {
    lVar11 = *(longlong *)(param_1 + 0x418);
    if (lVar11 == 0) {
      lVar11 = param_1 + 0x50;
    }
    uVar2 = FUN_143395a70(lVar11);
    FUN_143300df0(param_1 + 0x20,"  Scene and Frame Label Data, numscenes = %d\n",uVar2);
    iVar9 = 0;
    uVar10 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = FUN_143395a70(lVar11);
        FUN_1432c55c0(local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
        FUN_143395ed0(lVar11,local_58);
        FUN_143300df0(param_1 + 0x20,"   Scene[%d] = { %d, \"%s\" }\n",uVar10,uVar3,
                      (local_58[0] & 0xfffffffffffffffc) + 0xc);
        FUN_14330eeb0(*(undefined8 *)(param_1 + 0x38),local_58,uVar3);
        uVar8 = local_58[0] & 0xfffffffffffffffc;
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
        if (iVar4 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    uVar2 = FUN_143395a70(lVar11);
    FUN_143300df0(param_1 + 0x20,"  frameLabelCount = %d\n",uVar2);
    lVar6 = FUN_14330f080(*(undefined8 *)(param_1 + 0x38),0);
    uVar10 = 0;
    if (uVar2 != 0) {
      do {
        uVar5 = FUN_143395a70(lVar11);
        FUN_1432c55c0(local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38));
        FUN_143395ed0(lVar11,local_58);
        FUN_143300df0(param_1 + 0x20,"   Label[%d] = { %d, \"%s\" }\n",uVar10,uVar5,
                      (local_58[0] & 0xfffffffffffffffc) + 0xc);
        iVar4 = iVar9 + 1;
        lVar7 = FUN_14330f080(*(undefined8 *)(param_1 + 0x38),iVar4);
        while ((lVar1 = lVar7, lVar1 != 0 && (*(uint *)(lVar1 + 0x10) <= uVar5))) {
          *(uint *)(lVar6 + 0x14) = *(uint *)(lVar1 + 0x10);
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + 1;
          lVar7 = FUN_14330f080(*(undefined8 *)(param_1 + 0x38),iVar4);
          lVar6 = lVar1;
        }
        FUN_1432c54e0(&local_48,local_58,*(undefined8 *)(lVar6 + 8));
        local_38 = uVar5;
        FUN_14330c5b0(lVar6 + 0x18,*(undefined8 *)(lVar6 + 0x30),*(longlong *)(lVar6 + 0x20) + 1);
        lVar7 = *(longlong *)(lVar6 + 0x18) + (*(longlong *)(lVar6 + 0x20) * 3 + -3) * 8;
        if (lVar7 != 0) {
          FUN_1432c54e0(lVar7,&local_48,local_40);
          *(uint *)(lVar7 + 0x10) = local_38;
        }
        uVar8 = local_48 & 0xfffffffffffffffc;
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
        if (iVar4 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
        }
        uVar8 = local_58[0] & 0xfffffffffffffffc;
        iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
        if (iVar4 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    *(int *)(lVar6 + 0x14) = *(int *)(*(longlong *)(param_1 + 0x38) + 0x74) - *(int *)(lVar6 + 0x10)
    ;
  }
  return;
}



// FUNCTION 14330b890 FUN_14330b890 body=262 status=ok
// SIG undefined FUN_14330b890(void)

void FUN_14330b890(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [2];
  
  FUN_14330c260(param_1 + 0x20,
                "Tag \'DefineBinaryData\' (87) is not supported, potentially \'TLF text\' fields are used. Switch to \'Classic Text\'."
               );
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar3 + 0x29) = 0;
  if (*(int *)(lVar3 + 0x50) - *(int *)(lVar3 + 0x4c) < 2) {
    FUN_143396c40(lVar3,2);
  }
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(uVar1 + 1) + *(longlong *)(lVar3 + 0x60)),
                         *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(lVar3 + 0x60)));
  *(uint *)(lVar3 + 0x4c) = uVar1 + 2;
  FUN_143300df0(param_1 + 0x20,"  DefineBinaryData: CharId = %d\n",uVar4);
  lVar3 = *(longlong *)(param_1 + 0x418);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
  }
  FUN_143300e60(lVar3);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x60);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1433b0170(lVar3);
  }
  if (*(int *)(param_1 + 0x3b8) == 0) {
    local_res8[0] = uVar4;
    FUN_14330e6e0(*(undefined8 *)(param_1 + 0x38),local_res8,lVar3);
  }
  if (lVar3 != 0) {
    FUN_1432de450(lVar3);
  }
  return;
}



// FUNCTION 14330b9a0 RegisterTagLoader body=24 status=ok
// SIG undefined RegisterTagLoader(void)

ulonglong Scaleform::GFx::RegisterTagLoader(uint param_1,undefined *param_2)

{
  ulonglong in_RAX;
  
  if (0x5b < param_1) {
    return in_RAX & 0xffffffffffffff00;
  }
  (&PTR_LAB_1467cdf50)[param_1] = param_2;
  return CONCAT71((uint7)(uint3)(param_1 >> 8),1);
}



// FUNCTION 14330b9c0 FUN_14330b9c0 body=125 status=ok
// SIG undefined FUN_14330b9c0(void)

undefined8 * FUN_14330b9c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x18) < 0x30) {
    puVar2 = (undefined8 *)FUN_14330cf40(puVar3,0x30);
  }
  else {
    puVar2 = (undefined8 *)*puVar3;
    *puVar3 = puVar2 + 6;
    *(ulonglong *)(lVar1 + 0x18) = *(ulonglong *)(lVar1 + 0x18) - 0x30;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_1432c5250(puVar2 + 3);
    puVar2[4] = 0;
    puVar2[5] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14330ba40 FUN_14330ba40 body=90 status=ok
// SIG undefined FUN_14330ba40(void)

undefined8 * FUN_14330ba40(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afa340;
  uVar1 = (**(code **)(*param_2 + 0x50))(param_2,param_3,0);
  param_1[2] = uVar1;
  *param_1 = &PTR_FUN_145afa350;
  return param_1;
}



// FUNCTION 14330baa0 FUN_14330baa0 body=113 status=ok
// SIG undefined FUN_14330baa0(void)

void FUN_14330baa0(RefCountNTSImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 14330bb20 FUN_14330bb20 body=89 status=ok
// SIG undefined FUN_14330bb20(void)

undefined8 FUN_14330bb20(undefined8 param_1,ulonglong param_2)

{
  FUN_1433ac210();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14330bb80 FUN_14330bb80 body=43 status=ok
// SIG undefined FUN_14330bb80(void)

undefined8 * FUN_14330bb80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afa360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14330bbb0 FUN_14330bbb0 body=119 status=ok
// SIG undefined FUN_14330bbb0(void)

RefCountImplCore * FUN_14330bbb0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145afa340;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
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



// FUNCTION 14330bc30 FUN_14330bc30 body=43 status=ok
// SIG undefined FUN_14330bc30(void)

undefined8 * FUN_14330bc30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afa360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14330bc60 FUN_14330bc60 body=89 status=ok
// SIG undefined FUN_14330bc60(void)

undefined8 FUN_14330bc60(undefined8 param_1,ulonglong param_2)

{
  FUN_14330baa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14330bcc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FPhysXPlatformModule::~FPhysXPlatformModule();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14330bd00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FPhysXPlatformModule::~FPhysXPlatformModule();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14330bd40 FUN_14330bd40 body=43 status=ok
// SIG undefined FUN_14330bd40(void)

undefined8 * FUN_14330bd40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afa360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14330bd70 FUN_14330bd70 body=106 status=ok
// SIG undefined FUN_14330bd70(void)

RefCountNTSImplCore * FUN_14330bd70(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1432de450();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14330bde0 FUN_14330bde0 body=137 status=ok
// SIG undefined FUN_14330bde0(void)

void FUN_14330bde0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x3b8) * 3 + 0x79;
  plVar1 = (longlong *)(param_1 + lVar3 * 8);
  uVar4 = *(longlong *)(param_1 + 8 + lVar3 * 8) + 1;
  if (uVar4 < (ulonglong)plVar1[1]) {
    uVar5 = uVar4;
    if ((ulonglong)plVar1[2] >> 1 <= uVar4) goto LAB_14330be42;
  }
  else {
    if (uVar4 <= (ulonglong)plVar1[2]) goto LAB_14330be42;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_14330c390(plVar1,plVar1,uVar5);
LAB_14330be42:
  plVar1[1] = uVar4;
  puVar2 = (undefined8 *)(*plVar1 + -8 + uVar4 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  return;
}



// FUNCTION 14330be70 FUN_14330be70 body=193 status=ok
// SIG undefined FUN_14330be70(void)

void FUN_14330be70(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1432c2f70(&local_18);
  Scaleform::String::operator=(&local_18,param_2);
  local_10 = param_3;
  local_c = param_4;
  FUN_14330c650(param_1,param_1,param_1[1] + 1);
  lVar2 = *param_1 + -0x10 + param_1[1] * 0x10;
  if (lVar2 != 0) {
    FUN_1432c31e0(lVar2,&local_18);
    *(undefined4 *)(lVar2 + 8) = local_10;
    *(undefined4 *)(lVar2 + 0xc) = local_c;
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14330bf40 FUN_14330bf40 body=114 status=ok
// SIG undefined FUN_14330bf40(void)

void FUN_14330bf40(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (ulonglong *)(param_1 + (param_2 + -1) * 0x18);
    do {
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((*puVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar2 = puVar2 + -3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14330bfc0 FUN_14330bfc0 body=114 status=ok
// SIG undefined FUN_14330bfc0(void)

void FUN_14330bfc0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (ulonglong *)(param_2 * 0x10 + -0x10 + param_1);
    do {
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((*puVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar2 = puVar2 + -2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14330c060 FUN_14330c060 body=388 status=ok
// SIG undefined FUN_14330c060(void)

int * FUN_14330c060(int *param_1,longlong param_2,uint *param_3,undefined8 param_4,
                   undefined8 param_5,ushort param_6,undefined2 param_7,undefined2 param_8)

{
  RefCountNTSImpl *this;
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  uint local_res8 [2];
  int local_48 [2];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  this = (RefCountNTSImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38,0);
  if (this != (RefCountNTSImpl *)0x0) {
    FUN_1432de270(this);
    *(undefined ***)this = &PTR_FUN_145afa330;
    FUN_1432c2f70(this + 0x30);
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 1;
    Scaleform::String::operator=(this + 0x20,param_4);
    Scaleform::String::operator=(this + 0x30,param_5);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 0x80);
    piVar3 = (int *)0x0;
    if (*piVar1 != 0) {
      piVar3 = piVar1;
    }
    *(uint *)(this + 0x10) = (uint)param_6;
    *(undefined2 *)(this + 0x28) = param_7;
    *(undefined2 *)(this + 0x2a) = param_8;
    *(int **)(this + 0x18) = piVar3;
    if ((*param_3 & 0xfff0000) == 0x60000) {
      *(undefined4 *)(this + 0x2c) = 3;
    }
    local_res8[0] = *param_3;
    uVar2 = FUN_14331a5e0(&local_38,this);
    piVar3 = (int *)FUN_143319680(param_2,local_48,local_res8,uVar2);
    if ((*piVar3 == 0) && (*(longlong *)(piVar3 + 2) != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
    if ((*param_1 == 0) && (*(longlong *)(param_1 + 2) != 0)) {
      FUN_1432de450();
    }
    *param_1 = *piVar3;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar3 + 2);
    if ((local_48[0] == 0) && (local_40 != 0)) {
      FUN_1432de450();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))(local_38,local_30);
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 14330c210 GetStream body=17 status=ok
// SIG undefined GetStream(void)

longlong Scaleform::GFx::LoadProcess::GetStream(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  return lVar1;
}



// FUNCTION 14330c230 GetUnderlyingFile body=44 status=ok
// SIG undefined GetUnderlyingFile(void)

undefined8 Scaleform::GFx::LoadProcess::GetUnderlyingFile(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
  }
  FUN_143396350(lVar1);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  return *(undefined8 *)(lVar1 + 0x20);
}



// FUNCTION 14330c260 FUN_14330c260 body=110 status=ok
// SIG undefined FUN_14330c260(void)

void FUN_14330c260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x20;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    local_res18 = param_3;
    local_res20 = param_4;
    if ((plVar2 == (longlong *)0x0) &&
       (plVar2 = (longlong *)Scaleform::Log::GetGlobalLog(), plVar2 == (longlong *)0x0)) {
      return;
    }
    local_18[0] = 0x31000;
    (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 14330c2d0 FUN_14330c2d0 body=110 status=ok
// SIG undefined FUN_14330c2d0(void)

void FUN_14330c2d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x20;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    local_res18 = param_3;
    local_res20 = param_4;
    if ((plVar2 == (longlong *)0x0) &&
       (plVar2 = (longlong *)Scaleform::Log::GetGlobalLog(), plVar2 == (longlong *)0x0)) {
      return;
    }
    local_18[0] = 0x21000;
    (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 14330c340 FUN_14330c340 body=67 status=ok
// SIG undefined FUN_14330c340(void)

undefined1 FUN_14330c340(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x418);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x50;
  }
  *(undefined1 *)(lVar2 + 0x29) = 0;
  if (*(int *)(lVar2 + 0x50) - *(int *)(lVar2 + 0x4c) < 1) {
    FUN_143396d60(lVar2);
  }
  uVar1 = *(undefined1 *)((ulonglong)*(uint *)(lVar2 + 0x4c) + *(longlong *)(lVar2 + 0x60));
  *(uint *)(lVar2 + 0x4c) = *(uint *)(lVar2 + 0x4c) + 1;
  return uVar1;
}



// FUNCTION 14330c390 FUN_14330c390 body=177 status=ok
// SIG undefined FUN_14330c390(void)

void FUN_14330c390(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    uVar2 = 0x20;
    if (0x1f < param_3) {
      uVar2 = param_3;
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = uVar2 + 0xf & 0xfffffffffffffff0;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 8);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14330c450 FUN_14330c450 body=173 status=ok
// SIG undefined FUN_14330c450(void)

void FUN_14330c450(longlong *param_1,longlong *param_2,longlong param_3)

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
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x18);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2 * 0x18,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14330c500 FUN_14330c500 body=165 status=ok
// SIG undefined FUN_14330c500(void)

void FUN_14330c500(longlong *param_1,undefined8 param_2,longlong param_3)

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
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 6);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 << 6,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14330c5b0 FUN_14330c5b0 body=159 status=ok
// SIG undefined FUN_14330c5b0(void)

void FUN_14330c5b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14330bf40(*param_1 + param_3 * 0x18,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_14330c450(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_14330c450(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 14330c650 FUN_14330c650 body=158 status=ok
// SIG undefined FUN_14330c650(void)

void FUN_14330c650(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14330bfc0(param_3 * 0x10 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5ad0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5ad0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 14330c6f0 FUN_14330c6f0 body=177 status=ok
// SIG undefined FUN_14330c6f0(void)

void FUN_14330c6f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
      FUN_14330c500(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_14330c500(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 14330c810 FUN_14330c810 body=172 status=ok
// SIG undefined FUN_14330c810(void)

void FUN_14330c810(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  
  puVar4 = *(undefined4 **)(param_1 + 0x50);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = uVar2;
    puVar4[3] = uVar1;
    *puVar4 = uVar3;
    return;
  }
  local_res8[0] = 0x102;
  puVar4 = (undefined4 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8)
  ;
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[3];
    uVar2 = param_2[2];
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = uVar2;
    puVar4[3] = uVar1;
    *puVar4 = uVar3;
    *(undefined4 **)(param_1 + 0x50) = puVar4;
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14330c8c0 FUN_14330c8c0 body=130 status=ok
// SIG undefined FUN_14330c8c0(void)

void FUN_14330c8c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_res8[0] = 0x102;
    puVar5 = (undefined8 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8);
    puVar6 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar6 = puVar5;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar6;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x50);
  uVar1 = param_2[3];
  uVar2 = param_2[2];
  uVar3 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = uVar2;
  puVar4[3] = uVar1;
  *puVar4 = uVar3;
  return;
}



// FUNCTION 14330c990 ResourceBinding body=48 status=ok
// SIG undefined ResourceBinding(void)

undefined8 *
Scaleform::GFx::ResourceBinding::ResourceBinding(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1432bdc50(param_1 + 3,0);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14330c9d0 FUN_14330c9d0 body=28 status=ok
// SIG undefined FUN_14330c9d0(void)

void FUN_14330c9d0(longlong param_1)

{
  FUN_14330ca00();
  Scaleform::Lock::~Lock(param_1 + 0x18);
  return;
}



// FUNCTION 14330ca00 FUN_14330ca00 body=112 status=ok
// SIG undefined FUN_14330ca00(void)

void FUN_14330ca00(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    uVar2 = (ulonglong)*(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_1432de450();
        }
        plVar1 = plVar1 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14330ca80 FUN_14330ca80 body=439 status=ok
// SIG undefined FUN_14330ca80(void)

void FUN_14330ca80(undefined8 *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  Scaleform::Lock::DoLock(param_1 + 3);
  uVar5 = param_2 + 0x10 & 0xfffffff0;
  if (*(uint *)(param_1 + 1) < uVar5) {
    lVar1 = *(longlong *)*param_1;
    uVar6 = (ulonglong)uVar5;
    if (param_1[2] == 0) {
      uVar2 = (**(code **)(lVar1 + 0x50))();
      param_1[2] = uVar2;
      puVar3 = (undefined8 *)param_1[2];
      if (uVar5 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          puVar3 = puVar3 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(lVar1 + 0x50))((longlong *)*param_1,(ulonglong)uVar5 << 4,0);
      uVar9 = 0;
      puVar3 = puVar4;
      if (uVar5 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          puVar3 = puVar3 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (*(int *)(param_1 + 1) != 0) {
        do {
          plVar7 = (longlong *)(param_1[2] + uVar9 * 0x10);
          plVar10 = puVar4 + uVar9 * 2;
          if (*plVar7 != 0) {
            Scaleform::GFx::Resource::AddRef();
          }
          if (*plVar10 != 0) {
            FUN_1432de450();
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          *plVar10 = *plVar7;
          plVar10[1] = plVar7[1];
        } while (uVar8 < *(uint *)(param_1 + 1));
      }
      plVar10 = (longlong *)param_1[2];
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        do {
          if (*plVar10 != 0) {
            FUN_1432de450();
          }
          plVar10 = plVar10 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[2]);
      param_1[2] = puVar4;
    }
    *(uint *)(param_1 + 1) = uVar5;
  }
  plVar10 = (longlong *)((ulonglong)param_2 * 0x10 + param_1[2]);
  if (*param_3 != 0) {
    Scaleform::GFx::Resource::AddRef();
  }
  if (*plVar10 != 0) {
    FUN_1432de450();
  }
  *plVar10 = *param_3;
  plVar10[1] = param_3[1];
  Scaleform::Lock::DoLock(param_1 + 3);
  return;
}



// FUNCTION 14330cc40 FUN_14330cc40 body=242 status=ok
// SIG undefined FUN_14330cc40(void)

void FUN_14330cc40(longlong param_1,longlong *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  Scaleform::Lock::DoLock(param_1 + 0x18);
  if (param_3 < *(uint *)(param_1 + 8)) {
    plVar3 = (longlong *)((ulonglong)param_3 * 0x10 + *(longlong *)(param_1 + 0x10));
    if (*plVar3 != 0) {
      Scaleform::GFx::Resource::AddRef();
    }
    lVar4 = *plVar3;
    plVar5 = &local_38;
    bVar2 = true;
    bVar1 = false;
    local_38 = lVar4;
    local_30 = plVar3[1];
    if (lVar4 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar4);
    }
  }
  else {
    plVar5 = local_28;
    bVar2 = false;
    bVar1 = true;
    local_28[0] = 0;
    local_28[1] = 0;
    lVar4 = local_38;
  }
  if (*param_2 != 0) {
    FUN_1432de450();
  }
  *param_2 = *plVar5;
  param_2[1] = plVar5[1];
  if (bVar1) {
    if (local_28[0] != 0) {
      FUN_1432de450();
    }
  }
  if ((bVar2) && (lVar4 != 0)) {
    FUN_1432de450(lVar4);
  }
  Scaleform::Lock::DoLock(param_1 + 0x18);
  return;
}



// FUNCTION 14330cd40 FUN_14330cd40 body=8 status=ok
// SIG undefined FUN_14330cd40(void)

void FUN_14330cd40(undefined8 param_1,RefCountImpl *param_2)

{
  Scaleform::RefCountImpl::Release(param_2);
  return;
}



// FUNCTION 14330cd50 FUN_14330cd50 body=84 status=ok
// SIG undefined FUN_14330cd50(void)

ulonglong FUN_14330cd50(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  uVar1 = Scaleform::String::BernsteinHashFunction
                    ((longlong)puVar2 + 0xc,*puVar2 & 0x7fffffffffffffff,0x1505);
  return (*(ulonglong *)(param_2 + 0x18) ^ *(ulonglong *)(param_2 + 0x28)) >> 7 ^
         *(ulonglong *)(param_2 + 0x20) ^ *(ulonglong *)(param_2 + 0x18) ^
         *(ulonglong *)(param_2 + 0x28) ^ uVar1;
}



// FUNCTION 14330ce30 FUN_14330ce30 body=43 status=ok
// SIG undefined FUN_14330ce30(void)

undefined8 * FUN_14330ce30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145afb240;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14330ce60 GetHashCode body=109 status=ok
// SIG undefined GetHashCode(void)

ulonglong Scaleform::GFx::GFxMovieDefImplKeyInterface::GetHashCode
                    (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  return *(ulonglong *)(param_2 + 0x10) ^
         (*(ulonglong *)(param_2 + 0x10) ^ *(ulonglong *)(lVar1 + 0x10) ^
          *(ulonglong *)(lVar1 + 0x18) ^ *(ulonglong *)(lVar1 + 0x20) ^ *(ulonglong *)(lVar1 + 0x30)
          ^ *(ulonglong *)(lVar1 + 0x38) ^ *(ulonglong *)(lVar1 + 0x40) ^
         *(ulonglong *)(lVar1 + 0x48)) >> 7 ^ *(ulonglong *)(lVar1 + 0x10) ^
         *(ulonglong *)(lVar1 + 0x18) ^ *(ulonglong *)(lVar1 + 0x20) ^ *(ulonglong *)(lVar1 + 0x30)
         ^ *(ulonglong *)(lVar1 + 0x38) ^ *(ulonglong *)(lVar1 + 0x40) ^
         *(ulonglong *)(lVar1 + 0x48);
}



// FUNCTION 14330cf40 FUN_14330cf40 body=172 status=ok
// SIG undefined FUN_14330cf40(void)

longlong * FUN_14330cf40(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  if (0xff8 < param_2) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],param_2 + 8,0);
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *plVar1 = param_1[2];
    param_1[2] = (longlong)plVar1;
    return plVar1 + 1;
  }
  if ((ulonglong)param_1[1] < param_2) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],0x1ff8,0);
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *plVar1 = param_1[2];
    *param_1 = (longlong)(plVar1 + 1);
    param_1[2] = (longlong)plVar1;
    param_1[1] = 0x1ff0;
  }
  plVar1 = (longlong *)*param_1;
  param_1[1] = param_1[1] - param_2;
  *param_1 = (longlong)plVar1 + param_2;
  return plVar1;
}



// FUNCTION 14330d020 FUN_14330d020 body=76 status=ok
// SIG undefined FUN_14330d020(void)

void FUN_14330d020(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar1 != 0) {
    lVar1 = **(longlong **)(param_1 + 0x10);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = lVar1;
  }
  return;
}



// FUNCTION 14330d080 FUN_14330d080 body=61 status=ok
// SIG undefined FUN_14330d080(void)

undefined8 * FUN_14330d080(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                     (*(longlong **)(param_1 + 0x18),param_2 + 8,0);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return puVar1 + 1;
}



// FUNCTION 14330d0d0 FUN_14330d0d0 body=148 status=ok
// SIG undefined FUN_14330d0d0(void)

undefined8 * FUN_14330d0d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (param_3 != 0) {
    uVar3 = (param_3 + 7) - (param_3 + 7) % param_3;
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x48))(plVar1,uVar3 + param_2,param_3,0);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    return (undefined8 *)((longlong)puVar2 + (uVar3 & 0xfffffffffffffff8));
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  return puVar2 + 1;
}



// FUNCTION 14330d170 FUN_14330d170 body=398 status=ok
// SIG undefined FUN_14330d170(void)

void FUN_14330d170(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar5 = *param_1;
  *param_1 = 0;
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
  }
  lVar5 = param_1[2];
  while (lVar5 != 0) {
    plVar1 = (longlong *)param_1[2];
    param_1[2] = *(longlong *)(param_1[2] + 0x28);
    uVar2 = plVar1[3];
    iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar4 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
    }
    lVar5 = plVar1[1];
    puVar6 = (ulonglong *)(*plVar1 + -0x10 + lVar5 * 0x10);
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((*puVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      puVar6 = puVar6 + -2;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar5 = param_1[2];
  }
  lVar5 = param_1[6];
  while (lVar5 != 0) {
    plVar1 = (longlong *)param_1[6];
    param_1[6] = *(longlong *)(param_1[6] + 0x18);
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,plVar1[1]);
    }
    lVar5 = param_1[6];
  }
  lVar5 = param_1[4];
  while (lVar5 != 0) {
    lVar5 = param_1[4];
    param_1[4] = *(longlong *)(param_1[4] + 0x18);
    if (*(RefCountImpl **)(lVar5 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar5 + 8));
    }
    lVar5 = param_1[4];
  }
  return;
}



// FUNCTION 14330d310 FUN_14330d310 body=1012 status=ok
// SIG undefined FUN_14330d310(void)

undefined8 *
FUN_14330d310(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  RefCountImpl *pRVar8;
  RefCountImpl *pRVar9;
  RefCountImpl *pRVar10;
  RefCountImpl *pRVar11;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_48 [2];
  ulonglong local_40;
  
  pRVar11 = (RefCountImpl *)0x0;
  local_res8 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = param_4;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_145afb2d8;
  param_1[7] = param_4;
  param_1[8] = 0;
  FUN_1432c5290(param_1 + 9,param_3);
  FUN_143300290(param_1 + 10);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_1432bdc50(param_1 + 0x29,0);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_1432bdc50(param_1 + 0x33,0);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x50000;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar5 = (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x18,0);
  pRVar6 = pRVar11;
  if (lVar5 != 0) {
    pRVar6 = (RefCountImpl *)Scaleform::GFx::PathAllocator::PathAllocator(lVar5,0x2000);
  }
  param_1[6] = pRVar6;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  pRVar6 = pRVar11;
  if (*(int *)(param_2 + 0x38) == 2) {
    FUN_1432c2fb0(&local_40,param_3);
    pRVar6 = (RefCountImpl *)0x1;
    cVar3 = FUN_1432ff890(&local_40,0,0);
    if (cVar3 != '\0') {
      bVar1 = false;
      goto LAB_14330d4d9;
    }
  }
  bVar1 = true;
LAB_14330d4d9:
  if (pRVar6 != (RefCountImpl *)0x0) {
    iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_40 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar4 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40 & 0xfffffffffffffffc);
    }
  }
  bVar2 = false;
  if (bVar1) {
    lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    pRVar6 = pRVar11;
    if (lVar5 != 0) {
      pRVar6 = (RefCountImpl *)FUN_143315bc0(lVar5);
    }
    if ((RefCountImpl *)param_1[0x1f] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x1f]);
    }
    param_1[0x1f] = pRVar6;
  }
  lVar5 = (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x60);
  pRVar6 = pRVar11;
  if (lVar5 != 0) {
    pRVar6 = (RefCountImpl *)FUN_1433aa090(lVar5,param_2);
  }
  FUN_1433aa190(pRVar6);
  local_res8 = 0x10001;
  FUN_14330e6e0(param_1,&local_res8,pRVar6);
  lVar5 = (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x90,0);
  pRVar7 = pRVar11;
  if (lVar5 != 0) {
    pRVar7 = (RefCountImpl *)FUN_143394510(lVar5);
  }
  FUN_1433946a0(pRVar7);
  local_res10[0] = 0x10002;
  FUN_14330e6e0(param_1,local_res10,pRVar7);
  lVar5 = (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x60);
  pRVar8 = pRVar11;
  if (lVar5 != 0) {
    pRVar8 = (RefCountImpl *)FUN_1433b0170(lVar5);
  }
  local_res20[0] = 0x10003;
  FUN_14330e6e0(param_1,local_res20,pRVar8);
  lVar5 = (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x30);
  if (lVar5 == 0) {
    pRVar9 = (RefCountImpl *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pRVar9 = (RefCountImpl *)
             (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],0x20);
    if (pRVar9 != (RefCountImpl *)0x0) {
      FUN_1433abb30(pRVar9,0);
      *(undefined ***)pRVar9 = &PTR_FUN_145afb530;
      pRVar11 = pRVar9;
    }
    bVar2 = true;
    pRVar10 = (RefCountImpl *)FUN_1433acae0(lVar5,pRVar11);
    pRVar9 = pRVar11;
    pRVar11 = pRVar10;
  }
  if ((bVar2) && (pRVar9 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(pRVar9);
  }
  local_48[0] = 0x10004;
  FUN_14330e6e0(param_1,local_48,pRVar11);
  if (pRVar11 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar11);
  }
  if (pRVar8 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar8);
  }
  if (pRVar7 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar7);
  }
  if (pRVar6 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar6);
  }
  return param_1;
}



// FUNCTION 14330d710 FUN_14330d710 body=851 status=ok
// SIG undefined FUN_14330d710(void)

void FUN_14330d710(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  RefCountImplCore *pRVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_145afb2d8;
  pRVar3 = (RefCountImplCore *)0x0;
  if (*(int *)(param_1 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(param_1 + 0x148);
    pRVar3 = param_1;
  }
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    do {
      FUN_1433b2cb0(uVar6 * 0x10 + *(longlong *)(param_1 + 0x1c8));
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(param_1 + 0x1d0));
  }
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    do {
      FUN_1433b2cb0(uVar6 * 0x10 + *(longlong *)(param_1 + 0x1e0));
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(param_1 + 0x1e8));
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    Scaleform::GFx::PathAllocator::~PathAllocator(lVar5);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (pRVar3 != (RefCountImplCore *)0x0) {
    Scaleform::Lock::DoLock(pRVar3 + 0x148);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x210);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1[0x218] != (RefCountImplCore)0x0) {
      param_1[0x218] = (RefCountImplCore)0x0;
      FUN_143316c40(*puVar1,puVar1[1]);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  param_1[0x218] = (RefCountImplCore)0x0;
  FUN_143315ea0(param_1 + 0x200);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1e0));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1c8));
  Scaleform::Lock::~Lock(param_1 + 0x198);
  FUN_143315d30(param_1 + 400);
  FUN_143315f50(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar7 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 8) + 1;
    do {
      lVar4 = *(longlong *)(param_1 + 0x180) + lVar7;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        if ((*(int *)(lVar4 + 0x20) == 0) && (*(longlong *)(lVar4 + 0x28) != 0)) {
          FUN_1432de450();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar7 = lVar7 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1432de450();
  }
  Scaleform::Lock::~Lock(param_1 + 0x148);
  FUN_14330d170(param_1 + 0x100);
  if (*(RefCountImpl **)(param_1 + 0xf8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xf8));
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  uVar6 = *(ulonglong *)(param_1 + 0xa8);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6 & 0xfffffffffffffffc);
  }
  uVar6 = *(ulonglong *)(param_1 + 0xa0);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6 & 0xfffffffffffffffc);
  }
  uVar6 = *(ulonglong *)(param_1 + 0x48);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar6 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6 & 0xfffffffffffffffc);
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))();
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  while (lVar5 != 0) {
    lVar5 = **(longlong **)(param_1 + 0x20);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14330da70 OnMovieDataDefRelease body=17 status=ok
// SIG undefined OnMovieDataDefRelease(void)

void Scaleform::GFx::MovieDataDef::LoadTaskData::OnMovieDataDefRelease(longlong param_1)

{
  if (*(int *)(param_1 + 0xe4) < 2) {
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  return;
}



// FUNCTION 14330da90 InitEmptyMovieDef body=104 status=ok
// SIG undefined InitEmptyMovieDef(void)

void Scaleform::GFx::MovieDataDef::LoadTaskData::InitEmptyMovieDef(longlong param_1)

{
  Lock::DoLock(param_1 + 0x198);
  FUN_1433176c0(param_1 + 0x1c8,*(undefined4 *)(param_1 + 0x74));
  FUN_1433176c0(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  Lock::DoLock(param_1 + 0x198);
  FUN_14330e390(param_1,*(undefined4 *)(param_1 + 0x74),2);
  return;
}



// FUNCTION 14330db00 FUN_14330db00 body=751 status=ok
// SIG undefined FUN_14330db00(void)

bool FUN_14330db00(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                  longlong param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res10 [2];
  undefined4 local_d8 [2];
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  RefCountImpl *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  if ((param_4 == (longlong *)0x0) ||
     (iVar2 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x18))(), iVar2 != 0)) {
    local_res10[0] = 0;
    FUN_14330e6e0(param_1,local_res10,param_3);
  }
  else {
    local_d0 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_3);
    local_d8[0] = 1;
    local_c8 = 1;
    local_c4 = 1;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    plVar3 = (longlong *)
             (**(code **)(*param_4 + 0x20))(param_4,local_d8,*(undefined8 *)(param_3 + 0x18));
    if (plVar3 == (longlong *)0x0) {
      param_3 = 0;
      if (param_5 != 0) {
        FUN_1432bbf90(param_5,"Can\'t create or decode image.");
        param_3 = 0;
      }
      goto LAB_14330ddc1;
    }
    lVar4 = (**(code **)(*local_d0 + 0x50))(local_d0,0x68);
    param_3 = 0;
    if (lVar4 != 0) {
      param_3 = FUN_1432ef310(lVar4,plVar3,1);
    }
    local_res10[0] = 0;
    FUN_14330e6e0(param_1,local_res10,param_3);
    if (param_3 != 0) {
      FUN_1432de450(param_3);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  lVar4 = 0;
  if (param_3 != 0) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                      (*(longlong **)(param_1 + 0x38),0x30);
    if (lVar5 != 0) {
      lVar4 = FUN_1433acd90(lVar5,param_3,param_4,param_6);
    }
    *(undefined4 *)(lVar4 + 0x18) = 1;
    local_res10[0] = 1;
    FUN_14330e6e0(param_1,local_res10,lVar4);
    Scaleform::Lock::DoLock(param_1 + 0x198);
    FUN_1433176c0(param_1 + 0x1c8,*(undefined4 *)(param_1 + 0x74));
    FUN_1433176c0(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))
                       (*(longlong **)(param_1 + 0x28),0xa0,0x10);
    if (puVar6 != (undefined8 *)0x0) {
      plVar3 = puVar6 + 2;
      *puVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar6;
      if (plVar3 != (longlong *)0x0) {
        puVar1 = puVar6 + 4;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_143315b50(puVar1);
        }
        puVar7 = (undefined8 *)FUN_1432bfaf0(local_d8);
        local_58 = (RefCountImpl *)0x0;
        local_38 = 0x40000;
        local_4c = 1;
        local_98 = *puVar7;
        uStack_90 = puVar7[1];
        local_88 = puVar7[2];
        uStack_80 = puVar7[3];
        local_78 = 0x3f800000;
        uStack_70 = 0;
        local_50 = 0;
        local_68 = 0;
        uStack_64 = 0x3f800000;
        uStack_60 = 0;
        uStack_5c = 0;
        local_48 = 1;
        local_34 = 0x100;
        local_40 = 0;
        FUN_143316280(puVar6 + 6,&local_98);
        *plVar3 = (longlong)puVar1;
        **(longlong **)(param_1 + 0x1c8) = (longlong)plVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + 8) = 1;
        if (local_58 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_58);
        }
      }
    }
    Scaleform::Lock::DoLock(param_1 + 0x198);
    FUN_1432de450(lVar4);
  }
LAB_14330ddc1:
  FUN_14330e390(param_1,*(undefined4 *)(param_1 + 0x74),2);
  return param_3 != 0;
}



// FUNCTION 14330de00 FUN_14330de00 body=143 status=ok
// SIG undefined FUN_14330de00(void)

undefined8 FUN_14330de00(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_10 = 0;
    local_48[0] = 4;
    local_40 = 0x20;
    local_38 = 0x1000;
    local_30 = 0;
    local_28 = 0xffffffffffffffff;
    local_20 = 0;
    local_18 = 5;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                      (*(longlong **)(param_1 + 0x38),"_Images",local_48);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))();
    }
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 14330dea0 BeginSWFLoading body=43 status=ok
// SIG undefined BeginSWFLoading(void)

void Scaleform::GFx::MovieDataDef::LoadTaskData::BeginSWFLoading(longlong param_1)

{
  FUN_143316340(param_1 + 0x50);
  FUN_14330e390(param_1,*(undefined4 *)(param_1 + 0xe8),1);
  return;
}



// FUNCTION 14330dee0 FUN_14330dee0 body=891 status=ok
// SIG undefined FUN_14330dee0(void)

void FUN_14330dee0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  code *pcVar12;
  int local_res10;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  
  lVar11 = *(longlong *)(param_2 + 0x418);
  if (lVar11 == 0) {
    lVar11 = param_2 + 0x50;
  }
  Scaleform::Lock::DoLock(param_1 + 0x198);
  FUN_1433176c0(param_1 + 0x1c8,*(undefined4 *)(param_1 + 0x74));
  FUN_1433176c0(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x74));
  Scaleform::Lock::DoLock(param_1 + 0x198);
  FUN_143300df0(lVar11,"Note: SWF Frame Rate = %f, Frames = %d\n",(double)*(float *)(param_1 + 0x70)
                ,*(undefined4 *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  local_res10 = 0;
  bVar2 = false;
  uVar7 = *(uint *)(param_1 + 0x50) / 0x1e;
  if (uVar7 < 0x2000) {
    uVar7 = 0x2000;
  }
  if ((uint)((*(int *)(lVar11 + 0x54) - *(int *)(lVar11 + 0x50)) + *(int *)(lVar11 + 0x4c)) <
      *(uint *)(param_2 + 0x2c4)) {
    do {
      if (*(char *)(param_1 + 0xec) != '\0') {
        FUN_143319e50(param_2);
        if ((param_3 != 0) && (*(longlong *)(param_3 + 0x38) != 0)) {
          FUN_14330fc80(*(longlong *)(param_3 + 0x38),3);
        }
        FUN_14330e390(param_1,*(undefined4 *)(param_1 + 0xe8),3);
        return;
      }
      uVar8 = FUN_143395db0(lVar11,&local_70);
      local_res10 = local_res10 + local_68;
      if ((bVar2) &&
         (((*(int *)(param_1 + 0xe8) == 1 || ((int)uVar7 < local_res10)) || (0x2000 < local_68)))) {
        Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38))
        ;
        bVar2 = false;
        local_res10 = 0;
      }
      uVar5 = local_64;
      uVar4 = local_6c;
      uVar3 = local_70;
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x28);
      if (plVar1 != (longlong *)0x0) {
        FUN_1432c31e0(&local_60,param_1 + 0x48);
        local_58 = uVar3;
        local_54 = uVar4;
        local_4c = uVar5;
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_60,0);
        uVar10 = local_60 & 0xfffffffffffffffc;
        iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
        if (iVar9 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
        }
      }
      if (uVar8 != 1) {
        if (uVar8 < 0x5c) {
          pcVar12 = (code *)(&PTR_LAB_1467cdf50)[uVar8];
LAB_14330e0f2:
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(param_2,&local_70);
            goto LAB_14330e116;
          }
        }
        else if (uVar8 - 1000 < 10) {
          pcVar12 = (code *)(&PTR_LAB_1467ce230)[uVar8 - 1000];
          goto LAB_14330e0f2;
        }
        FUN_143300df0(lVar11,"*** no tag loader for type %d\n");
      }
LAB_14330e116:
      FUN_143395ea0(lVar11);
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
      if (uVar8 == 1) {
        cVar6 = FUN_14330e270(param_1,param_2);
        if (cVar6 == '\0') {
          return;
        }
        FUN_143300df0(lVar11,"  ShowFrame\n");
        bVar2 = true;
        if (param_3 != 0) {
          FUN_143312890(param_3);
          bVar2 = true;
        }
      }
      else if ((uVar8 == 0) &&
              ((*(int *)(lVar11 + 0x54) - *(int *)(lVar11 + 0x50)) + *(int *)(lVar11 + 0x4c) !=
               *(int *)(param_2 + 0x2c4))) {
        FUN_1433173f0(lVar11,
                      "Loader - Stream-end tag hit, but not at the end of the file yet; stopping for safety"
                     );
        break;
      }
    } while ((uint)((*(int *)(lVar11 + 0x54) - *(int *)(lVar11 + 0x50)) + *(int *)(lVar11 + 0x4c)) <
             *(uint *)(param_2 + 0x2c4));
  }
  if ((*(longlong *)(param_2 + 0x3d0 + (longlong)*(int *)(param_2 + 0x3b8) * 0x18) == 0) &&
     ((*(int *)(param_2 + 0x3b8) != 0 || (*(longlong *)(param_2 + 0x400) == 0)))) {
    FUN_14330e390(param_1,*(undefined4 *)(param_1 + 0xe8),2);
  }
  else {
    FUN_14330e270(param_1,param_2,1);
    if (param_3 != 0) {
      FUN_143312890(param_3);
    }
  }
  return;
}



// FUNCTION 14330e270 FUN_14330e270 body=267 status=ok
// SIG undefined FUN_14330e270(void)

bool FUN_14330e270(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_143319d60(param_2);
  bVar1 = true;
  puVar2 = (undefined4 *)FUN_143319bb0(param_2);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_1 + 0xe8);
    lVar3 = *(longlong *)(param_2 + 0x418);
    if (lVar3 == 0) {
      lVar3 = param_2 + 0x50;
    }
    puVar2[1] = ((*(int *)(lVar3 + 0x54) - *(int *)(lVar3 + 0x50)) - *(int *)(param_2 + 0x2c0)) +
                *(int *)(lVar3 + 0x4c);
  }
  lVar3 = *(longlong *)(param_1 + 0xf8);
  Scaleform::Mutex::DoLock((Mutex *)(lVar3 + 0x10));
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xe4) = 4;
    bVar1 = false;
  }
  else {
    if (*(longlong *)(param_1 + 0x100) == 0) {
      *(undefined4 **)(param_1 + 0x100) = puVar2;
    }
    else {
      *(undefined4 **)(*(longlong *)(param_1 + 0x108) + 0x30) = puVar2;
    }
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    *(undefined4 **)(param_1 + 0x108) = puVar2;
    if (param_3 == '\0') goto LAB_14330e353;
    *(undefined4 *)(param_1 + 0xe4) = 2;
  }
  if ((param_3 != '\0') || (!bVar1)) {
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38));
  }
LAB_14330e353:
  Scaleform::Mutex::Unlock((Mutex *)(lVar3 + 0x10));
  return bVar1;
}



// FUNCTION 14330e390 FUN_14330e390 body=121 status=ok
// SIG undefined FUN_14330e390(void)

void FUN_14330e390(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe8) = param_2;
    *(undefined4 *)(param_1 + 0xe4) = param_3;
  }
  else {
    Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x10));
    *(undefined4 *)(param_1 + 0xe8) = param_2;
    *(undefined4 *)(param_1 + 0xe4) = param_3;
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x10));
  }
  return;
}



// FUNCTION 14330e410 FUN_14330e410 body=70 status=ok
// SIG undefined FUN_14330e410(void)

void FUN_14330e410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x10));
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x10));
  }
  return;
}



// FUNCTION 14330e460 FUN_14330e460 body=102 status=ok
// SIG undefined FUN_14330e460(void)

void FUN_14330e460(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xe4) < 2) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x10));
    cVar1 = *(char *)(lVar2 + 0x40);
    while (cVar1 == '\0') {
      Scaleform::WaitCondition::Wait
                ((WaitCondition *)(lVar2 + 0x38),(Mutex *)(lVar2 + 0x10),0xffffffff);
      cVar1 = *(char *)(lVar2 + 0x40);
    }
    Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 14330e4d0 WaitForFrame body=130 status=ok
// SIG undefined WaitForFrame(void)

void Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForFrame(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0xe4) < 2) && (*(uint *)(param_1 + 0xe8) <= param_2)) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    Mutex::DoLock((Mutex *)(lVar2 + 0x10));
    iVar1 = *(int *)(param_1 + 0xe4);
    while ((iVar1 < 2 && (*(uint *)(param_1 + 0xe8) <= param_2))) {
      WaitCondition::Wait((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38),
                          (Mutex *)(*(longlong *)(param_1 + 0xf8) + 0x10),0xffffffff);
      iVar1 = *(int *)(param_1 + 0xe4);
    }
    Mutex::Unlock((Mutex *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 14330e560 FUN_14330e560 body=76 status=ok
// SIG undefined FUN_14330e560(void)

ulonglong FUN_14330e560(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == (void *)0x0) {
    return (ulonglong)*(uint *)(param_1 + 0xe0);
  }
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (param_3 < *(uint *)(param_1 + 0xe0)) {
    uVar1 = param_3;
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0xd8),(ulonglong)uVar1);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14330e5c0 FUN_14330e5c0 body=97 status=ok
// SIG undefined FUN_14330e5c0(void)

void FUN_14330e5c0(longlong param_1,void *param_2,uint param_3)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                           (*(longlong **)(param_1 + 0x38),param_3,0);
  *(void **)(param_1 + 0xd8) = _Dst;
  if (_Dst != (void *)0x0) {
    *(uint *)(param_1 + 0xe0) = param_3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
  }
  return;
}



// FUNCTION 14330e630 FUN_14330e630 body=161 status=ok
// SIG undefined FUN_14330e630(void)

undefined4 * FUN_14330e630(longlong param_1,undefined4 *param_2,uint *param_3)

{
  longlong lVar1;
  uint *local_18;
  undefined4 *local_10;
  
  *(ulonglong *)(param_2 + 2) = (ulonglong)*(uint *)(param_1 + 0x140);
  *param_2 = 1;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  lVar1 = 0;
  if (*(int *)(param_1 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(param_1 + 0x148);
    lVar1 = param_1;
  }
  local_18 = param_3;
  local_10 = param_2;
  FUN_1433148b0(param_1 + 0x180,param_1 + 0x180,&local_18,*param_3 >> 8 ^ *param_3);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1 + 0x148);
  }
  return param_2;
}



// FUNCTION 14330e6e0 FUN_14330e6e0 body=189 status=ok
// SIG undefined FUN_14330e6e0(void)

void FUN_14330e6e0(longlong param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  int local_28 [2];
  longlong local_20;
  uint *local_18;
  int *local_10;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(param_1 + 0x148);
    lVar1 = param_1;
  }
  local_28[0] = 0;
  local_20 = param_3;
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  local_10 = local_28;
  local_18 = param_2;
  FUN_1433148b0(param_1 + 0x180,param_1 + 0x180,&local_18,*param_2 >> 8 ^ *param_2);
  if ((local_28[0] == 0) && (local_20 != 0)) {
    FUN_1432de450();
  }
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1 + 0x148);
  }
  return;
}



// FUNCTION 14330e7b0 FUN_14330e7b0 body=266 status=ok
// SIG undefined FUN_14330e7b0(void)

void FUN_14330e7b0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *local_res8;
  undefined8 local_28;
  longlong lStack_20;
  
  lVar3 = 0;
  if (*(int *)(param_1 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(param_1 + 0x148);
    lVar3 = param_1;
  }
  plVar4 = (longlong *)(param_1 + 0x188);
  FUN_143317a30(plVar4,param_2,param_4);
  local_res8 = param_2;
  if (*plVar4 != 0) {
    uVar1 = FUN_1432c4390((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505)
    ;
    lVar2 = FUN_143315680(plVar4,&local_res8,*(ulonglong *)(*plVar4 + 8) & uVar1);
    if (-1 < lVar2) goto LAB_14330e863;
  }
  lVar2 = 0;
  plVar4 = (longlong *)0x0;
LAB_14330e863:
  lStack_20 = *plVar4 + (lVar2 * 5 + 4) * 8;
  local_28 = param_3;
  FUN_143313a70(param_1 + 400,param_1 + 400,&local_28);
  if (lVar3 != 0) {
    Scaleform::Lock::DoLock(lVar3 + 0x148);
  }
  return;
}



// FUNCTION 14330e8c0 FUN_14330e8c0 body=255 status=ok
// SIG undefined FUN_14330e8c0(void)

undefined8 FUN_14330e8c0(longlong param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  if (*(int *)(param_1 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(param_1 + 0x148);
    lVar3 = param_1;
  }
  plVar4 = (longlong *)(param_1 + 0x180);
  if (*plVar4 != 0) {
    lVar2 = FUN_143315730(plVar4,param_3,
                          (ulonglong)(*param_3 >> 8 ^ *param_3) & *(ulonglong *)(*plVar4 + 8));
    if (-1 < lVar2) goto LAB_14330e93d;
  }
  lVar2 = 0;
  plVar4 = (longlong *)0x0;
LAB_14330e93d:
  if (((plVar4 == (longlong *)0x0) || (lVar1 = *plVar4, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 8) < lVar2)) {
    uVar6 = 0;
  }
  else {
    piVar5 = (int *)((lVar2 + 1) * 0x20 + lVar1);
    if ((*piVar5 == 0) && (*(longlong *)(piVar5 + 2) != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
    if ((*param_2 == 0) && (*(longlong *)(param_2 + 2) != 0)) {
      FUN_1432de450();
    }
    *param_2 = *piVar5;
    uVar6 = 1;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(piVar5 + 2);
  }
  if (lVar3 != 0) {
    Scaleform::Lock::DoLock(lVar3 + 0x148);
  }
  return uVar6;
}



// FUNCTION 14330e9d0 GetFontData body=39 status=ok
// SIG DWORD GetFontData(HDC hdc, DWORD dwTable, DWORD dwOffset, PVOID pvBuffer, DWORD cjBuffer)

DWORD __stdcall
Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData
          (HDC hdc,DWORD dwTable,DWORD dwOffset,PVOID pvBuffer,DWORD cjBuffer)

{
  int *piVar1;
  undefined4 in_register_00000014;
  
  piVar1 = *(int **)(hdc + 0x48);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == *(int *)CONCAT44(in_register_00000014,dwTable)) break;
    piVar1 = *(int **)(piVar1 + 6);
  }
  return (DWORD)*(undefined8 *)(piVar1 + 2);
}



// FUNCTION 14330ea00 FUN_14330ea00 body=82 status=ok
// SIG undefined FUN_14330ea00(void)

void FUN_14330ea00(longlong param_1,undefined8 param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x198);
  FUN_143317950(param_1 + 0x200,param_2,param_1 + 0xe8);
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return;
}



// FUNCTION 14330ea60 FUN_14330ea60 body=201 status=ok
// SIG undefined FUN_14330ea60(void)

void FUN_14330ea60(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x198);
  if ((ulonglong)*(uint *)(param_1 + 0xe8) < *(ulonglong *)(param_1 + 0x1d0)) {
    puVar3 = (undefined8 *)
             ((ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 + *(longlong *)(param_1 + 0x1c8));
    *puVar3 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  }
  else if (param_3 != 0) {
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
      if (lVar2 == 0) goto LAB_14330eb08;
    }
    lVar2 = *(longlong *)(param_3 + 0x20);
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
    if (lVar2 == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
    }
    FUN_1432bbf90(lVar2,
                  "Invalid SWF file: failed to load frame #%d since total frames counter is %d",
                  *(int *)(param_1 + 0xe8) + 1,uVar1 & 0xffffffff);
  }
LAB_14330eb08:
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return;
}



// FUNCTION 14330eb30 FUN_14330eb30 body=205 status=ok
// SIG undefined FUN_14330eb30(void)

void FUN_14330eb30(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  Scaleform::Lock::DoLock(param_1 + 0x198);
  if ((ulonglong)*(uint *)(param_1 + 0xe8) < *(ulonglong *)(param_1 + 0x1e8)) {
    puVar3 = (undefined8 *)
             ((ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 + *(longlong *)(param_1 + 0x1e0));
    *puVar3 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  else if (param_3 != 0) {
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
      if (lVar2 == 0) goto LAB_14330ebdc;
    }
    lVar2 = *(longlong *)(param_3 + 0x20);
    uVar1 = *(ulonglong *)(param_1 + 0x1e8);
    if (lVar2 == 0) {
      lVar2 = Scaleform::Log::GetGlobalLog();
    }
    FUN_1432bbf90(lVar2,
                  "Invalid SWF file: failed to load init action frame #%d since total frames counter is %d"
                  ,*(int *)(param_1 + 0xe8) + 1,uVar1 & 0xffffffff);
  }
LAB_14330ebdc:
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return;
}



// FUNCTION 14330ec10 GetLabeledFrame body=141 status=ok
// SIG undefined GetLabeledFrame(void)

ulonglong Scaleform::GFx::MovieDataDef::LoadTaskData::GetLabeledFrame
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0xe4) < 2) {
    Lock::DoLock(param_1 + 0x198);
    bVar1 = FUN_14330f4a0(param_1 + 0x200,param_2,param_3,param_4);
    Lock::DoLock(param_1 + 0x198);
    uVar2 = (ulonglong)bVar1;
  }
  else {
    uVar2 = FUN_14330f4a0(param_1 + 0x200);
  }
  return uVar2;
}



// FUNCTION 14330ecb0 FUN_14330ecb0 body=131 status=ok
// SIG undefined FUN_14330ecb0(void)

undefined8 FUN_14330ecb0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(param_1 + 0xe4)) {
    uVar1 = FUN_14330f5c0(param_1 + 0x200);
    return uVar1;
  }
  Scaleform::Lock::DoLock(param_1 + 0x198);
  uVar1 = FUN_14330f5c0(param_1 + 0x200,param_2,param_3);
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return uVar1;
}



// FUNCTION 14330ed40 FUN_14330ed40 body=362 status=ok
// SIG undefined FUN_14330ed40(void)

longlong * FUN_14330ed40(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  bVar3 = *(int *)(param_1 + 0xe4) < 2;
  if (bVar3) {
    Scaleform::Lock::DoLock(param_1 + 0x198);
  }
  plVar8 = (longlong *)(param_1 + 0x200);
  plVar9 = (longlong *)0x0;
  lVar2 = *plVar8;
  plVar7 = plVar9;
  if (lVar2 == 0) {
    plVar6 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x10);
    plVar6 = plVar9;
    do {
      if (*plVar4 != -2) break;
      plVar6 = (longlong *)((longlong)plVar6 + 1);
      plVar4 = plVar4 + 4;
    } while (plVar6 <= *(longlong **)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar8 == (longlong *)0x0) || (lVar2 = *plVar8, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)plVar6)) {
        if (bVar3) {
          Scaleform::Lock::DoLock(param_1 + 0x198);
        }
        if ((int)plVar7 != 0) {
          plVar9 = param_3;
        }
        return plVar9;
      }
      if (param_2 == *(int *)((longlong)plVar6 * 0x20 + 0x28 + lVar2)) {
        FUN_1432bc120(param_3,param_3,param_3[1] + 1);
        lVar1 = *param_3 + (param_3[1] + -1) * 8;
        if (lVar1 != 0) {
          FUN_1432c31e0(lVar1,(longlong)plVar6 * 0x20 + lVar2 + 0x20);
        }
        plVar7 = (longlong *)(ulonglong)((int)plVar7 + 1);
      }
      plVar4 = *(longlong **)(*plVar8 + 8);
    } while (((longlong)plVar4 < (longlong)plVar6) ||
            (plVar6 = (longlong *)((longlong)plVar6 + 1), plVar4 < plVar6));
    plVar5 = (longlong *)((longlong)plVar6 * 0x20 + 0x10 + *plVar8);
    do {
      if (*plVar5 != -2) break;
      plVar6 = (longlong *)((longlong)plVar6 + 1);
      plVar5 = plVar5 + 4;
    } while (plVar6 <= plVar4);
  } while( true );
}



// FUNCTION 14330eeb0 FUN_14330eeb0 body=359 status=ok
// SIG undefined FUN_14330eeb0(void)

void FUN_14330eeb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = (longlong *)(param_1 + 0x210);
  puVar5 = (undefined8 *)0x0;
  if (*plVar1 == 0) {
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                       (*(longlong **)(param_1 + 0x38),0x18,0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar5 = puVar4;
    }
    Scaleform::
    AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>_>
    ::operator=(plVar1,puVar5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_1432c54e0(&local_48,param_2,uVar2);
  plVar1 = (longlong *)*plVar1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_38 = param_3;
  local_18 = uVar2;
  FUN_143317750(plVar1,plVar1,plVar1[1] + 1);
  lVar6 = *plVar1 + -0x38 + plVar1[1] * 0x38;
  if (lVar6 != 0) {
    FUN_1432c54e0(lVar6,&local_48,local_40);
    *(undefined4 *)(lVar6 + 0x10) = local_38;
    *(undefined4 *)(lVar6 + 0x14) = local_34;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = local_18;
    FUN_143316830((undefined8 *)(lVar6 + 0x18),local_30,local_28);
  }
  FUN_14330bf40(local_30,local_28);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_30);
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 14330f080 FUN_14330f080 body=29 status=ok
// SIG undefined FUN_14330f080(void)

longlong FUN_14330f080(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x210);
  if ((plVar1 != (longlong *)0x0) && (param_2 < (ulonglong)plVar1[1])) {
    return param_2 * 0x38 + *plVar1;
  }
  return 0;
}



// FUNCTION 14330f0b0 FUN_14330f0b0 body=40 status=ok
// SIG undefined FUN_14330f0b0(void)

undefined8 FUN_14330f0b0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x210) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 8);
    return **(undefined8 **)(param_1 + 0x210);
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 14330f0e0 FUN_14330f0e0 body=158 status=ok
// SIG undefined FUN_14330f0e0(void)

undefined8 * FUN_14330f0e0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (1 < *(int *)(param_1 + 0xe4)) {
    puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x1c8));
    *param_2 = *puVar1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
    return param_2;
  }
  Scaleform::Lock::DoLock(param_1 + 0x198);
  puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x1c8));
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return param_2;
}



// FUNCTION 14330f190 FUN_14330f190 body=125 status=ok
// SIG undefined FUN_14330f190(void)

bool FUN_14330f190(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x198);
  bVar2 = (ulonglong)param_3 < *(ulonglong *)(param_1 + 0x1e8);
  if (bVar2) {
    puVar1 = (undefined8 *)((longlong)(int)param_3 * 0x10 + *(longlong *)(param_1 + 0x1e0));
    *param_2 = *puVar1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  }
  Scaleform::Lock::DoLock(param_1 + 0x198);
  return bVar2;
}



// FUNCTION 14330f220 GetInitActionListSize body=55 status=ok
// SIG undefined GetInitActionListSize(void)

undefined4 Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActionListSize(longlong param_1)

{
  undefined4 uVar1;
  
  Lock::DoLock(param_1 + 0x198);
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  Lock::DoLock(param_1 + 0x198);
  return uVar1;
}



// FUNCTION 14330f260 FUN_14330f260 body=418 status=ok
// SIG undefined FUN_14330f260(void)

undefined8 *
FUN_14330f260(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5,char param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  *param_1 = &PTR_FUN_144f8bf30;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40000;
  *param_1 = &PTR_FUN_145afb2f8;
  param_1[4] = &PTR_LAB_145afb388;
  FUN_1432de380(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = param_3;
  param_1[8] = 0;
  plVar3 = param_5;
  if (param_5 == (longlong *)0x0) {
    uVar2 = FUN_1432c6f40(param_4);
    FUN_1432c3060(&local_res8,"MovieData \"",uVar2,&DAT_145afa020);
    local_50 = 0x10;
    local_38 = 0xffffffffffffffff;
    local_30 = 0;
    local_58[0] = -(uint)(param_6 != '\0') & 0x1000 | 4;
    local_48 = 0x2000;
    local_20 = param_7;
    local_40 = 0;
    local_28 = 4;
    plVar3 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x20))
                       (DAT_146b62f28,(local_res8 & 0xfffffffffffffffc) + 0xc,local_58);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x220,0);
  if (lVar4 != 0) {
    uVar5 = FUN_14330d310(lVar4,param_1,param_4,plVar3);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar5;
  if (param_5 == (longlong *)0x0) {
    FUN_1432bde20(plVar3,uVar5);
  }
  return param_1;
}



// FUNCTION 14330f410 ~MovieDataDef body=110 status=ok
// SIG undefined ~MovieDataDef(void)

void Scaleform::GFx::MovieDataDef::~MovieDataDef(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_145afb2f8;
  param_1[4] = &PTR_LAB_145afb388;
  if (*(int *)(param_1[8] + 0xe4) < 2) {
    *(undefined1 *)(param_1[8] + 0xec) = 1;
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[6]);
  }
  param_1[4] = &PTR_FUN_145afb2b0;
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 14330f4a0 FUN_14330f4a0 body=281 status=ok
// SIG undefined FUN_14330f4a0(void)

ulonglong FUN_14330f4a0(undefined8 param_1,char *param_2,int *param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  char *in_RAX;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  double dVar7;
  char *local_res10;
  
  if ((param_2 != (char *)0x0) && (cVar6 = *param_2, cVar6 != '\0')) {
    if (param_4 == '\0') {
LAB_14330f54a:
      uVar4 = FUN_1432c2fb0(&local_res10,param_2);
      bVar2 = FUN_143316d80(param_1,uVar4,param_3);
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        (((ulonglong)local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))
                  (DAT_146b62f28,(ulonglong)local_res10 & 0xfffffffffffffffc);
      }
      return (ulonglong)bVar2;
    }
    bVar1 = false;
    pcVar5 = param_2;
    do {
      if ((byte)(cVar6 - 0x30U) < 10) {
        bVar1 = true;
      }
      else if (((((cVar6 - 0x2bU & 0xfd) != 0) || (bVar1)) && (cVar6 != ' ')) && (cVar6 != '\t'))
      goto LAB_14330f54a;
      cVar6 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while (cVar6 != '\0');
    local_res10 = (char *)0x0;
    dVar7 = (double)FUN_14331b260(param_2,&local_res10);
    in_RAX = local_res10;
    if ((local_res10 != param_2) && (*local_res10 == '\0')) {
      iVar3 = (int)(longlong)dVar7 + -1;
      *param_3 = iVar3;
      return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14330f5c0 FUN_14330f5c0 body=208 status=ok
// SIG undefined FUN_14330f5c0(void)

ulonglong FUN_14330f5c0(longlong *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = 0;
  uVar7 = uVar6;
  if (lVar2 == 0) {
    uVar5 = 0;
    param_1 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x10);
    uVar5 = uVar6;
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar5 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar5)) {
        if (param_3 != (uint *)0x0) {
          *param_3 = (uint)uVar6;
        }
        return uVar7;
      }
      uVar1 = *(uint *)(uVar5 * 0x20 + 0x28 + lVar2);
      if ((uVar1 <= param_2) && ((uint)uVar6 <= uVar1)) {
        uVar6 = (ulonglong)uVar1;
        uVar7 = lVar2 + 0x20 + uVar5 * 0x20;
      }
      uVar3 = *(ulonglong *)(lVar2 + 8);
    } while (((longlong)uVar3 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar3 < uVar5));
    plVar4 = (longlong *)(uVar5 * 0x20 + 0x10 + lVar2);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar5 <= uVar3);
  } while( true );
}



// FUNCTION 14330f6a0 FUN_14330f6a0 body=146 status=ok
// SIG undefined FUN_14330f6a0(void)

undefined8
FUN_14330f6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
  if (lVar1 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_143315a10(lVar1,param_2,param_3,param_4,param_5);
  }
  FUN_1432de330(param_1,&PTR_PTR_1467ce280,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 14330f740 FUN_14330f740 body=50 status=ok
// SIG undefined FUN_14330f740(void)

undefined8 FUN_14330f740(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c6f40((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x48) & 0xfffffffffffffffc)
                        + 0xc);
  FUN_1432c2fb0(param_2,uVar1);
  return param_2;
}



// FUNCTION 14330f830 FUN_14330f830 body=488 status=ok
// SIG undefined FUN_14330f830(void)

undefined8 *
FUN_14330f830(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,char param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  lVar5 = 0;
  local_res8 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afb3a8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_2;
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
  }
  param_1[3] = param_3;
  param_1[4] = param_4;
  Scaleform::GFx::ResourceBinding::ResourceBinding(param_1 + 6,param_2);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_1432bdc50(param_1 + 0x14,0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  Scaleform::Lock::DoLock(param_1 + 9);
  param_1[0x10] = param_4;
  Scaleform::Lock::DoLock(param_1 + 9);
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  lVar7 = lVar5;
  if (*(int *)(param_3 + 0x38) == 2) {
    FUN_1432c2fb0(&local_res8,
                  (*(ulonglong *)(*(longlong *)(param_3 + 0x40) + 0x48) & 0xfffffffffffffffc) + 0xc)
    ;
    lVar7 = 1;
    cVar2 = FUN_1432ff890(&local_res8,0,0);
    if (cVar2 != '\0') {
      bVar1 = false;
      goto LAB_14330f962;
    }
  }
  bVar1 = true;
LAB_14330f962:
  if (lVar7 != 0) {
    uVar6 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
    }
  }
  if (bVar1) {
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
    if (lVar7 != 0) {
      lVar5 = FUN_143315bc0(lVar7);
    }
    if ((RefCountImpl *)param_1[0x1f] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x1f]);
    }
    param_1[0x1f] = lVar5;
  }
  if (param_6 != '\0') {
    uVar4 = (**(code **)(*(longlong *)param_1[3] + 0x80))();
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x104) =
         *(undefined4 *)(*(longlong *)(param_1[3] + 0x40) + 0x50);
  }
  return param_1;
}



// FUNCTION 14330fa20 FUN_14330fa20 body=320 status=ok
// SIG undefined FUN_14330fa20(void)

void FUN_14330fa20(RefCountImplCore *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145afb3a8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    Scaleform::Mutex::DoLock((Mutex *)(*(longlong *)(param_1 + 0xf8) + 0x10));
  }
  FUN_14330ca00(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    Scaleform::Mutex::Unlock((Mutex *)(*(longlong *)(param_1 + 0xf8) + 0x10));
  }
  if (*(RefCountImpl **)(param_1 + 0xf8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xf8));
  }
  FUN_143315ca0(param_1 + 0xe8);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd0) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*plVar1 != 0) {
      FUN_1432de450();
    }
    plVar1 = plVar1 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xd0));
  Scaleform::Lock::~Lock(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x90);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x88) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*plVar1 != 0) {
      FUN_1432de450();
    }
    plVar1 = plVar1 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x88));
  FUN_14330c9d0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1432de450();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14330fb70 FUN_14330fb70 body=158 status=ok
// SIG undefined FUN_14330fb70(void)

void FUN_14330fb70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = 0;
  Scaleform::Lock::DoLock(param_1 + 0x48);
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  if (((byte)*(undefined4 *)(param_1 + 0xf0) & 0xf) < 2) {
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
  lVar2 = *(longlong *)(lVar1 + 0xf8);
  if (lVar2 != 0) {
    Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x10));
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(lVar1 + 0xf8) + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 14330fc20 GetMovieDefImplAddRef body=76 status=ok
// SIG undefined GetMovieDefImplAddRef(void)

undefined8 Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  Lock::DoLock(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = Resource::AddRef_NotZero();
    if (cVar1 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_14330fc56;
    }
  }
  uVar2 = 0;
LAB_14330fc56:
  Lock::DoLock(param_1 + 0xa0);
  return uVar2;
}



// FUNCTION 14330fc80 FUN_14330fc80 body=109 status=ok
// SIG undefined FUN_14330fc80(void)

void FUN_14330fc80(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x10));
    *(undefined4 *)(param_1 + 0xf0) = param_2;
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x10));
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}



// FUNCTION 14330fd10 FUN_14330fd10 body=43 status=ok
// SIG undefined FUN_14330fd10(void)

void FUN_14330fd10(longlong param_1)

{
  if (*(RefCountImpl **)(param_1 + 0xf8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0xf8));
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 14330fd50 FUN_14330fd50 body=137 status=ok
// SIG undefined FUN_14330fd50(void)

undefined4 FUN_14330fd50(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x10));
    bVar2 = (byte)*(undefined4 *)(param_1 + 0xf0);
    while (((bVar2 & 0xf) < 3 && ((param_2 & *(uint *)(param_1 + 0xf0)) == 0))) {
      Scaleform::WaitCondition::Wait
                ((WaitCondition *)(*(longlong *)(param_1 + 0xf8) + 0x38),
                 (Mutex *)(*(longlong *)(param_1 + 0xf8) + 0x10),0xffffffff);
      bVar2 = (byte)*(undefined4 *)(param_1 + 0xf0);
    }
    Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x10));
  }
  return CONCAT31((int3)(*(uint *)(param_1 + 0xf0) >> 8),(param_2 & *(uint *)(param_1 + 0xf0)) != 0)
  ;
}



// FUNCTION 14330fde0 UpdateBindingFrame body=14 status=ok
// SIG undefined UpdateBindingFrame(void)

void Scaleform::GFx::MovieDefImpl::BindTaskData::UpdateBindingFrame
               (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x104) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_2;
  return;
}



// FUNCTION 14330fe00 FUN_14330fe00 body=87 status=ok
// SIG undefined FUN_14330fe00(void)

undefined8 FUN_14330fe00(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x90)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_2 * 8);
  }
  else {
    uVar1 = 0;
  }
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  return uVar1;
}



// FUNCTION 14330fe60 FUN_14330fe60 body=125 status=ok
// SIG undefined FUN_14330fe60(void)

void FUN_14330fe60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  FUN_1433178a0(param_1 + 0xd0,param_1 + 0xd0,*(longlong *)(param_1 + 0xd8) + 1);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd0) + (*(longlong *)(param_1 + 0xd8) + -1) * 8);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != 0) {
      Scaleform::GFx::Resource::AddRef(param_2);
    }
    *plVar1 = param_2;
  }
  if (param_2 != 0) {
    FUN_1432de450(param_2);
  }
  return;
}



// FUNCTION 14330fef0 FUN_14330fef0 body=1011 status=ok
// SIG undefined FUN_14330fef0(void)

void FUN_14330fef0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  char *_Str1;
  uint uVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  ulonglong local_60;
  int local_58 [2];
  ulonglong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar14 = 0;
  if (param_2[1] != 0) {
    do {
      puVar12 = (ulonglong *)(uVar14 * 0x10 + *param_2);
      local_38 = 0;
      uStack_30 = 0;
      cVar8 = FUN_143311e60(param_3,&local_38,puVar12,0);
      if (cVar8 == '\0') {
        if (*(longlong *)(param_4 + 0x18) != 0) {
          FUN_143300d50(*(longlong *)(param_4 + 0x18) + 0x18,
                        "Import failed - resource \'%s\' is not exported from movie \'%s\'",
                        (*puVar12 & 0xfffffffffffffffc) + 0xc);
        }
      }
      else {
        local_res10[0] = (undefined4)puVar12[1];
        local_58[0] = 0;
        local_50 = 0;
        cVar8 = FUN_14330e8c0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40),local_58,
                              local_res10);
        if (cVar8 != '\0') {
          FUN_14330ca80(param_1 + 0x30,local_50 & 0xffffffff,&local_38);
        }
        if ((local_58[0] == 0) && (local_50 != 0)) {
          FUN_1432de450();
        }
      }
      if (local_38 != 0) {
        FUN_1432de450();
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
    } while (uVar14 < (ulonglong)param_2[1]);
  }
  if (param_5 == '\0') {
    Scaleform::Lock::DoLock(param_1 + 0xa0);
    if (param_3 != 0) {
      Scaleform::GFx::Resource::AddRef(param_3);
    }
    FUN_1433178a0(param_1 + 0x88,param_1 + 0x88,*(longlong *)(param_1 + 0x90) + 1);
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x88) + (*(longlong *)(param_1 + 0x90) + -1) * 8)
    ;
    if (plVar13 != (longlong *)0x0) {
      if (param_3 != 0) {
        Scaleform::GFx::Resource::AddRef(param_3);
      }
      *plVar13 = param_3;
    }
    if (param_3 != 0) {
      FUN_1432de450(param_3);
    }
    Scaleform::Lock::DoLock(param_1 + 0xa0);
    bVar6 = false;
    FUN_1432c4000(param_2 + 3,&local_60);
    pcVar10 = strstr((char *)((local_60 & 0xfffffffffffffffc) + 0xc),"_glyphs");
    if (pcVar10 != (char *)0x0) {
      bVar6 = true;
      if (param_3 != 0) {
        Scaleform::GFx::Resource::AddRef(param_3);
      }
      FUN_1432bd7b0(param_4 + 0x80,param_4 + 0x80,*(longlong *)(param_4 + 0x88) + 1);
      plVar13 = (longlong *)
                (*(longlong *)(param_4 + 0x80) + (*(longlong *)(param_4 + 0x88) + -1) * 8);
      if (plVar13 != (longlong *)0x0) {
        if (param_3 != 0) {
          Scaleform::GFx::Resource::AddRef(param_3);
        }
        *plVar13 = param_3;
      }
      if (param_3 != 0) {
        FUN_1432de450(param_3);
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + 0x18) + 0x40) + 0x120);
    for (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40) + 0x120);
        lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
      plVar13 = *(longlong **)(lVar3 + 8);
      iVar9 = (**(code **)(*plVar13 + 0x90))(plVar13);
      lVar7 = lVar2;
      if ((iVar9 == 0) || (bVar6)) {
        for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
          plVar4 = *(longlong **)(lVar7 + 8);
          iVar9 = (**(code **)(*plVar4 + 0x90))(plVar4);
          if (iVar9 != 0) {
            uVar1 = *(uint *)((longlong)plVar4 + 0x1c);
            pcVar10 = (char *)(**(code **)(*plVar4 + 8))(plVar4);
            uVar11 = 3;
            if ((uVar1 & 0x300) != 0) {
              uVar11 = 0x303;
            }
            if ((uVar11 & *(uint *)((longlong)plVar13 + 0x1c)) == (uVar1 & 0x303)) {
              _Str1 = (char *)(**(code **)(*plVar13 + 8))(plVar13);
              iVar9 = _stricmp(_Str1,pcVar10);
              if (iVar9 == 0) {
                lVar5 = *(longlong *)(param_3 + 0x70);
                local_48 = 0;
                lStack_40 = 0;
                if ((*(char *)(lVar5 + 0x78) == '\0') ||
                   (*(uint *)(lVar5 + 0x38) <= *(uint *)(lVar7 + 0x10))) {
                  FUN_14330cc40(lVar5 + 0x30,&local_48);
                }
                else {
                  plVar13 = (longlong *)
                            (*(longlong *)(lVar5 + 0x40) + (ulonglong)*(uint *)(lVar7 + 0x10) * 0x10
                            );
                  if ((*plVar13 != 0) && (Scaleform::GFx::Resource::AddRef(), local_48 != 0)) {
                    FUN_1432de450();
                  }
                  local_48 = *plVar13;
                  lStack_40 = plVar13[1];
                }
                if ((local_48 != 0) &&
                   (FUN_14330ca80(param_1 + 0x30,*(undefined4 *)(lVar3 + 0x10),&local_48),
                   local_48 != 0)) {
                  FUN_1432de450();
                }
                break;
              }
            }
          }
        }
      }
    }
    iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_60 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar9 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_60 & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 1433102f0 FUN_1433102f0 body=455 status=ok
// SIG undefined FUN_1433102f0(void)

undefined8 FUN_1433102f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  RefCountImpl *this;
  longlong lVar5;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  RefCountImpl *pRVar8;
  int local_48 [2];
  ulonglong local_40;
  RefCountImpl *local_38;
  longlong local_30;
  
  pRVar8 = (RefCountImpl *)0x0;
  if (param_2[1] != 0) {
    lVar1 = param_1 + 0x30;
    pRVar7 = pRVar8;
    do {
      local_38 = (RefCountImpl *)0x0;
      lVar5 = *param_2;
      local_30 = lVar1;
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x88,0);
      this = pRVar8;
      if (lVar4 != 0) {
        this = (RefCountImpl *)
               FUN_1433982e0(lVar4,(*(ulonglong *)((longlong)pRVar7 * 0x10 + lVar5) &
                                   0xfffffffffffffffc) + 0xc,0);
      }
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x40;
      lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
      pRVar6 = pRVar8;
      if (lVar5 != 0) {
        pRVar6 = (RefCountImpl *)FUN_14339b960(lVar5,this,lVar1);
      }
      if (local_38 != (RefCountImpl *)0x0) {
        FUN_1432de450();
      }
      local_48[0] = 0;
      local_40 = 0;
      local_38 = pRVar6;
      cVar3 = FUN_14330e8c0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40),local_48);
      if (cVar3 != '\0') {
        FUN_14330ca80(lVar1,local_40 & 0xffffffff);
      }
      if ((local_48[0] == 0) && (local_40 != 0)) {
        FUN_1432de450();
      }
      Scaleform::RefCountImpl::Release(this);
      if (local_38 != (RefCountImpl *)0x0) {
        FUN_1432de450();
      }
      pRVar7 = (RefCountImpl *)(ulonglong)((int)pRVar7 + 1);
    } while (pRVar7 < (RefCountImpl *)param_2[1]);
  }
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  FUN_1433178a0(param_1 + 0x88,param_1 + 0x88,*(longlong *)(param_1 + 0x90) + 1);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (*(longlong *)(param_1 + 0x90) + -1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  return 1;
}



// FUNCTION 1433104c0 FUN_1433104c0 body=118 status=ok
// SIG undefined FUN_1433104c0(void)

bool FUN_1433104c0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_res8 [2];
  int local_18 [2];
  ulonglong local_10;
  
  local_18[0] = 0;
  local_10 = 0;
  local_res8[0] = *param_2;
  cVar1 = FUN_14330e8c0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40),local_18,local_res8);
  if (cVar1 != '\0') {
    FUN_14330ca80(param_1 + 0x30,local_10 & 0xffffffff,param_3);
  }
  if ((local_18[0] == 0) && (local_10 != 0)) {
    FUN_1432de450();
  }
  return cVar1 != '\0';
}



// FUNCTION 143310540 FUN_143310540 body=121 status=ok
// SIG undefined FUN_143310540(void)

undefined1 FUN_143310540(longlong param_1,longlong param_2,longlong param_3)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = 0;
  param_1 = param_1 + 0x30;
  local_10 = param_1;
  if (param_3 != 0) {
    Scaleform::GFx::Resource::AddRef(param_3);
    if (local_18 != 0) {
      FUN_1432de450();
    }
  }
  local_18 = param_3;
  FUN_14330ca80(param_1,*(undefined4 *)(param_2 + 0x10),&local_18);
  if (local_18 != 0) {
    FUN_1432de450();
  }
  return 1;
}



// FUNCTION 1433105c0 FUN_1433105c0 body=251 status=ok
// SIG undefined FUN_1433105c0(void)

undefined8 * FUN_1433105c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  RefCountImpl *local_res8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  lVar3 = FUN_1433154b0(param_1 + 0xe8,local_res18);
  puVar4 = (undefined8 *)0x0;
  if (-1 < lVar3) {
    puVar4 = (undefined8 *)((lVar3 + 1) * 0x20 + *(longlong *)(param_1 + 0xe8));
  }
  puVar5 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    local_res8 = (RefCountImpl *)0x0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if ((RefCountImpl *)*puVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*puVar5);
    }
    local_res8 = (RefCountImpl *)*puVar5;
    bVar2 = true;
    bVar1 = false;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(local_res8);
    }
  }
  *param_2 = local_res8;
  if ((bVar1) && (local_res8 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  if ((bVar2) && (local_res8 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  return param_2;
}



// FUNCTION 1433106d0 FUN_1433106d0 body=139 status=ok
// SIG undefined FUN_1433106d0(void)

void FUN_1433106d0(longlong param_1,undefined8 param_2,RefCountImpl *param_3)

{
  RefCountImpl *local_res8;
  undefined8 local_res10;
  undefined8 *local_18;
  RefCountImpl **local_10;
  
  local_res10 = param_2;
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  local_18 = &local_res10;
  local_10 = &local_res8;
  local_res8 = param_3;
  FUN_143313960(param_1 + 0xe8,param_1 + 0xe8,&local_18);
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  Scaleform::Lock::DoLock(param_1 + 0xa0);
  return;
}



// FUNCTION 143310770 FUN_143310770 body=603 status=ok
// SIG undefined FUN_143310770(void)

undefined8 *
FUN_143310770(undefined8 *param_1,longlong param_2,RefCountImpl *param_3,RefCountImpl *param_4,
             uint param_5,undefined8 param_6,longlong *param_7,undefined1 param_8,undefined8 param_9
             )

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  uint local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afb3b0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_145afb498;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1432bdc50(param_1 + 8,0);
  param_1[0xe] = 0;
  plVar3 = param_7;
  if (param_7 == (longlong *)0x0) {
    uVar2 = FUN_1432c6f40((*(ulonglong *)(*(longlong *)(param_2 + 0x40) + 0x48) & 0xfffffffffffffffc
                          ) + 0xc);
    FUN_1432c3060(&local_res8,"MovieDef  \"",uVar2,&DAT_145afa020);
    local_68[0] = param_5 >> 0x10 & 0x1000;
    local_60 = 0x10;
    local_30 = param_9;
    local_58 = 0x1000;
    local_50 = 0x1000;
    local_48 = 0xffffffffffffffff;
    local_40 = 0;
    local_38 = 2;
    plVar3 = (longlong *)
             (**(code **)(*DAT_146b62f28 + 0x20))
                       (DAT_146b62f28,(local_res8 & 0xfffffffffffffffc) + 0xc,local_68);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0x110,0);
  uVar2 = uVar5;
  if (lVar4 != 0) {
    uVar2 = FUN_14330f830(lVar4,plVar3,param_2,param_1,param_5,param_8);
  }
  if ((RefCountImpl *)param_1[0xe] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xe]);
  }
  param_1[0xe] = uVar2;
  if (param_7 == (longlong *)0x0) {
    FUN_1432bde20(plVar3,uVar2);
  }
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = param_4;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = param_3;
  lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x60);
  if (lVar4 != 0) {
    uVar5 = FUN_143315c10(lVar4,param_6);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = uVar5;
  return param_1;
}



// FUNCTION 1433109e0 FUN_1433109e0 body=434 status=ok
// SIG undefined FUN_1433109e0(void)

void FUN_1433109e0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *param_1 = &PTR_FUN_145afb3b0;
  param_1[3] = &PTR_LAB_145afb498;
  Scaleform::Lock::DoLock(param_1 + 8);
  lVar4 = param_1[7];
  if (lVar4 == 0) {
    uVar6 = 0;
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar6 = 0;
    plVar2 = (longlong *)(lVar4 + 0x10);
    do {
      if (*plVar2 != -2) break;
      uVar6 = uVar6 + 1;
      plVar2 = plVar2 + 3;
    } while (uVar6 <= *(ulonglong *)(lVar4 + 8));
    plVar2 = param_1 + 7;
  }
  do {
    do {
      if (((plVar2 == (longlong *)0x0) || (lVar4 = *plVar2, lVar4 == 0)) ||
         (*(longlong *)(lVar4 + 8) < (longlong)uVar6)) {
        Scaleform::Lock::DoLock(param_1 + 8);
        FUN_14330fb70(param_1[0xe]);
        if ((RefCountImpl *)param_1[0xe] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xe]);
        }
        Scaleform::Lock::~Lock();
        if (param_1[7] != 0) {
          lVar4 = 0;
          lVar5 = *(longlong *)(param_1[7] + 8) + 1;
          do {
            if (*(longlong *)(lVar4 + 0x10 + param_1[7]) != -2) {
              *(undefined8 *)(lVar4 + 0x10 + param_1[7]) = 0xfffffffffffffffe;
            }
            lVar4 = lVar4 + 0x18;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
          param_1[7] = 0;
        }
        if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
        }
        if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
        }
        if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
        }
        param_1[3] = &PTR_GetPoolName_145af7910;
        *param_1 = &PTR_FUN_144f8bf30;
        return;
      }
      plVar3 = *(longlong **)(lVar4 + 0x20 + uVar6 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,param_1);
      }
      uVar1 = *(ulonglong *)(*plVar2 + 8);
    } while (((longlong)uVar1 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar1 < uVar6));
    plVar3 = (longlong *)(*plVar2 + uVar6 * 0x18 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar6 = uVar6 + 1;
      plVar3 = plVar3 + 3;
    } while (uVar6 <= uVar1);
  } while( true );
}



// FUNCTION 143310ba0 FUN_143310ba0 body=159 status=ok
// SIG undefined FUN_143310ba0(void)

undefined8 FUN_143310ba0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  RefCountImpl *this;
  undefined8 uVar1;
  
  uVar1 = 0x28;
  if (0x10 < ((byte)*(undefined4 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) +
                     0xd0) & 8 | 0x10)) {
    uVar1 = 0x29;
  }
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))((longlong *)(param_1 + 0x18),uVar1);
  if (this == (RefCountImpl *)0x0) {
    uVar1 = 0;
  }
  else {
    Scaleform::RefCountImpl::Release(this);
    Scaleform::RefCountImpl::AddRef(this);
    Scaleform::RefCountImpl::Release(this);
    uVar1 = (**(code **)(*(longlong *)this + 0x18))(this,param_2,param_3,param_4);
  }
  return uVar1;
}



// FUNCTION 143310c50 FUN_143310c50 body=241 status=ok
// SIG undefined FUN_143310c50(void)

undefined8
FUN_143310c50(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  RefCountImpl *this;
  ulonglong local_res8;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  uVar2 = FUN_1432c6f40(uVar2);
  FUN_1432c3060(&local_res8,"MovieView \"",uVar2,&DAT_145afa020);
  this = (RefCountImpl *)
         (**(code **)(*param_1 + 0xb0))
                   (param_1,(local_res8 & 0xfffffffffffffffc) + 0xc,param_2,
                    *(uint *)(param_1[0xe] + 0x28) >> 0x1c & 0xffffff01);
  if (this == (RefCountImpl *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,this,param_3,param_4,param_5);
    Scaleform::RefCountImpl::Release(this);
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return uVar2;
}



// FUNCTION 143310d50 FUN_143310d50 body=326 status=ok
// SIG undefined FUN_143310d50(void)

longlong *
FUN_143310d50(longlong *param_1,undefined8 param_2,char param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  RefCountImpl *this;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0x28;
  if (0x10 < ((byte)*(undefined4 *)(*(longlong *)(*(longlong *)(param_1[0xe] + 0x18) + 0x40) + 0xd0)
              & 8 | 0x10)) {
    uVar5 = 0x29;
  }
  this = (RefCountImpl *)(**(code **)(param_1[3] + 0x18))(param_1 + 3,uVar5);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    Scaleform::RefCountImpl::AddRef(this);
    Scaleform::RefCountImpl::Release(this);
    plVar4 = (longlong *)(**(code **)(*(longlong *)this + 8))(this,param_2);
    if (plVar4 != (longlong *)0x0) {
      if (param_4 != 0) {
        (**(code **)(plVar4[2] + 0x10))(plVar4 + 2,3,param_4);
      }
      plVar1 = (longlong *)plVar4[3];
      if ((plVar1 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,param_1), cVar3 != '\0')) {
        uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
        plVar1 = (longlong *)plVar4[7];
        *(undefined4 *)(plVar4 + 4) = uVar6;
        if (plVar1 != (longlong *)0x0) {
          lVar2 = *plVar1;
          uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
          (**(code **)(lVar2 + 0x30))(plVar1,uVar5);
        }
        plVar4[0xa8f] = param_5;
        if (param_3 == '\0') {
          return plVar4;
        }
        (**(code **)(*plVar4 + 0xc0))(plVar4,0,0,1);
        return plVar4;
      }
      FUN_1432e1f50(plVar4);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143310ea0 FUN_143310ea0 body=120 status=ok
// SIG undefined FUN_143310ea0(void)

undefined8 FUN_143310ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (lVar1 == 0) {
    this = (RefCountImpl *)0x0;
  }
  else {
    this = (RefCountImpl *)FUN_143315ae0(lVar1,param_2,param_3);
  }
  FUN_1432de330(param_1,&PTR_PTR_1467ce288,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return param_1;
}



// FUNCTION 143310f20 FUN_143310f20 body=341 status=ok
// SIG undefined FUN_143310f20(void)

undefined8 * FUN_143310f20(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  int local_28 [2];
  longlong *local_20;
  longlong *local_18;
  longlong lStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_28[0] = 0;
  local_20 = (longlong *)0x0;
  local_res8[0] = *param_3;
  cVar2 = FUN_14330e8c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40),
                        local_28,local_res8);
  plVar6 = local_20;
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar5 = lVar1 + 0x30;
    plVar4 = local_20;
    if (local_28[0] != 0) {
      local_18 = (longlong *)0x0;
      lStack_10 = 0;
      if ((*(char *)(lVar1 + 0x78) == '\0') || (*(uint *)(lVar1 + 0x38) <= (uint)local_20)) {
        FUN_14330cc40(lVar5,&local_18,(ulonglong)local_20 & 0xffffffff);
      }
      else {
        plVar6 = (longlong *)
                 (*(longlong *)(lVar1 + 0x40) + ((ulonglong)local_20 & 0xffffffff) * 0x10);
        if ((*plVar6 != 0) && (Scaleform::GFx::Resource::AddRef(), local_18 != (longlong *)0x0)) {
          FUN_1432de450();
        }
        local_18 = (longlong *)*plVar6;
        lStack_10 = plVar6[1];
      }
      lVar5 = lStack_10;
      plVar4 = local_18;
      if (local_18 != (longlong *)0x0) {
        FUN_1432de450(local_18);
      }
    }
    plVar6 = local_20;
    if (plVar4 != (longlong *)0x0) {
      lVar1 = *plVar4;
      param_2[2] = plVar4;
      uVar3 = (**(code **)(lVar1 + 0x10))(plVar4);
      if ((uVar3 >> 0xf & 1) != 0) {
        param_2[1] = *(undefined8 *)(lVar5 + 0x50);
        *param_2 = plVar4;
      }
    }
  }
  if ((local_28[0] == 0) && (plVar6 != (longlong *)0x0)) {
    FUN_1432de450(plVar6);
  }
  return param_2;
}



// FUNCTION 143311080 FUN_143311080 body=673 status=ok
// SIG undefined FUN_143311080(void)

void FUN_143311080(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong local_res18;
  ulonglong *local_res20;
  ulonglong *local_48;
  undefined1 *local_40;
  
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) + 0x110);
  if (lVar8 != 0) {
    local_res18 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x70) + 0xa0;
      Scaleform::Lock::DoLock(lVar6);
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x90) <= (ulonglong)*(uint *)(lVar8 + 0x24)
         ) {
        Scaleform::Lock::DoLock(lVar6);
        break;
      }
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x88) +
               (ulonglong)*(uint *)(lVar8 + 0x24) * 8);
      Scaleform::Lock::DoLock(lVar6);
      puVar1 = (ulonglong *)(lVar8 + 0x18);
      lVar6 = local_res18;
      if (local_res18 != 0) {
        uVar4 = FUN_1432c4390((longlong)(*puVar1 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(*puVar1 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                              0x1505);
        uVar4 = *(ulonglong *)(local_res18 + 8) & uVar4;
        puVar7 = (ulonglong *)(local_res18 + 0x10 + uVar4 * 0x20);
        lVar6 = local_res18;
        if ((*puVar7 != 0xfffffffffffffffe) && (uVar9 = uVar4, puVar7[1] == uVar4)) {
          while ((puVar7[1] != uVar4 ||
                 (iVar3 = _stricmp((char *)((puVar7[2] & 0xfffffffffffffffc) + 0xc),
                                   (char *)((*puVar1 & 0xfffffffffffffffc) + 0xc)),
                 lVar6 = local_res18, iVar3 != 0))) {
            uVar9 = *puVar7;
            if (uVar9 == 0xffffffffffffffff) goto LAB_1433111f1;
            puVar7 = (ulonglong *)(lVar6 + 0x10 + uVar9 * 0x20);
          }
          if (((-1 < (longlong)uVar9) && (local_res18 != 0)) &&
             ((longlong)uVar9 <= *(longlong *)(local_res18 + 8))) goto LAB_1433112da;
        }
      }
LAB_1433111f1:
      if (lVar2 != 0) {
        (**(code **)(*param_2 + 8))(param_2,param_1,lVar2,(*puVar1 & 0xfffffffffffffffc) + 0xc);
        lVar6 = local_res18;
      }
      local_res8[0] = 1;
      local_res20 = puVar1;
      if (lVar6 == 0) {
LAB_143311292:
        local_40 = local_res8;
        local_48 = puVar1;
        uVar5 = FUN_1432c4390((longlong)(*puVar1 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(*puVar1 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                              0x1505);
        FUN_143314c50(&local_res18,&local_res18,&local_48,uVar5);
      }
      else {
        uVar4 = FUN_1432c4390((longlong)(*puVar1 & 0xfffffffffffffffc) + 0xc,
                              *(ulonglong *)(*puVar1 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                              0x1505);
        lVar6 = FUN_1433155d0(&local_res18,&local_res20,*(ulonglong *)(local_res18 + 8) & uVar4);
        if (((lVar6 < 0) || (local_res18 == 0)) || (*(longlong *)(local_res18 + 8) < lVar6))
        goto LAB_143311292;
        *(undefined1 *)(lVar6 * 0x20 + 0x28 + local_res18) = local_res8[0];
      }
LAB_1433112da:
      lVar8 = *(longlong *)(lVar8 + 0x28);
    } while (lVar8 != 0);
    FUN_143315de0(&local_res18);
  }
  return;
}



// FUNCTION 143311330 FUN_143311330 body=1117 status=ok
// SIG undefined FUN_143311330(void)

void FUN_143311330(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_res20;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  
  plVar12 = (longlong *)0x0;
  uVar14 = param_3 & 0xffffffff;
  if ((param_3 & 0x803f) != 0) {
    plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
    plVar7 = plVar12;
    if (*(int *)((longlong)plVar10 + 0xe4) < 2) {
      Scaleform::Lock::DoLock(plVar10 + 0x29);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) + 0x180);
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      plVar10 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(lVar8 + 0x10);
      plVar9 = plVar12;
      do {
        if (*plVar4 != -2) break;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        plVar4 = plVar4 + 4;
      } while (plVar9 <= *(longlong **)(lVar8 + 8));
    }
LAB_1433113f0:
    if (((plVar10 != (longlong *)0x0) && (lVar8 = *plVar10, lVar8 != 0)) &&
       ((longlong)plVar9 <= *(longlong *)(lVar8 + 8))) {
      lVar13 = (longlong)plVar9 * 0x20;
      plVar4 = (longlong *)FUN_143317160(lVar8 + 0x20 + lVar13,*(longlong *)(param_1 + 0x70) + 0x30)
      ;
      if (plVar4 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar3 = uVar3 >> 8 & 0xff;
        if (uVar3 == 1) {
          if (cVar2 == '\x01') {
            bVar15 = (uVar14 >> 1 & 1) == 0;
          }
          else {
            if (cVar2 != '\x02') goto LAB_1433115dc;
            bVar15 = (param_3 & 4) == 0;
          }
        }
        else if (uVar3 == 2) {
          bVar15 = (param_3 & 1) == 0;
        }
        else if (uVar3 == 4) {
          bVar15 = (uVar14 >> 4 & 1) == 0;
        }
        else if (uVar3 == 0x83) {
          bVar15 = (uVar14 >> 3 & 1) == 0;
        }
        else {
          if (uVar3 != 0x84) goto LAB_1433115dc;
          bVar15 = (uVar14 >> 5 & 1) == 0;
        }
        if (!bVar15) {
          local_78 = (longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) +
                     0x188);
          lVar8 = *local_78;
          if (lVar8 == 0) {
            local_78 = (longlong *)0x0;
            plStack_70 = (longlong *)0x0;
            plVar6 = plStack_70;
          }
          else {
            plVar11 = (longlong *)(lVar8 + 0x10);
            plVar6 = plVar12;
            do {
              plStack_70 = plVar6;
              if (*plVar11 != -2) break;
              plVar6 = (longlong *)((longlong)plVar6 + 1);
              plVar11 = plVar11 + 5;
              plStack_70 = plVar6;
            } while (plVar6 <= *(longlong **)(lVar8 + 8));
          }
          do {
            plVar11 = plVar12;
            if (((local_78 == (longlong *)0x0) || (lVar8 = *local_78, lVar8 == 0)) ||
               (plVar11 = (longlong *)0x0, *(longlong *)(lVar8 + 8) < (longlong)plVar6))
            goto LAB_1433115ad;
            piVar1 = (int *)(lVar8 + ((longlong)plVar6 + 1U) * 0x28);
            if ((*piVar1 == *(int *)(*plVar10 + 0x20 + lVar13)) &&
               (*(longlong *)(piVar1 + 2) == *(longlong *)(*plVar10 + 0x28 + lVar13)))
            goto LAB_14331159c;
            plVar11 = *(longlong **)(lVar8 + 8);
            if (((longlong)plVar6 <= (longlong)plVar11) &&
               (plVar6 = (longlong *)((longlong)plVar6 + 1), plVar6 <= plVar11)) {
              plVar5 = (longlong *)(lVar8 + ((longlong)plVar6 * 5 + 2) * 8);
              do {
                if (*plVar5 != -2) break;
                plVar6 = (longlong *)((longlong)plVar6 + 1);
                plVar5 = plVar5 + 5;
              } while (plVar6 <= plVar11);
            }
          } while( true );
        }
      }
      goto LAB_1433115dc;
    }
    if (plVar7 != (longlong *)0x0) {
      Scaleform::Lock::DoLock(plVar7 + 0x29);
    }
  }
  if (((uint)param_3 >> 0xf & 1) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x70) + 0xa0;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    local_58 = 0;
    local_res20 = lVar8;
    Scaleform::Lock::DoLock(lVar8);
    plVar10 = plVar12;
    plVar7 = plVar12;
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x90) != 0) {
      FUN_143317560(&local_68,&local_68);
      plVar10 = plStack_60;
      plVar7 = local_68;
    }
    lVar13 = *(longlong *)(param_1 + 0x70);
    plVar9 = plVar12;
    if (*(longlong *)(lVar13 + 0x90) != 0) {
      do {
        plVar4 = (longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)plVar9 * 8);
        FUN_1433177f0(&local_68,&local_68,(longlong)plVar10 + 1);
        plVar10 = plStack_60;
        plVar7 = local_68;
        plVar6 = local_68 + ((longlong)plStack_60 - 1);
        if (plVar6 != (longlong *)0x0) {
          if (*plVar4 != 0) {
            Scaleform::GFx::Resource::AddRef();
          }
          *plVar6 = *plVar4;
        }
        lVar13 = *(longlong *)(param_1 + 0x70);
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        lVar8 = local_res20;
      } while (plVar9 < *(longlong **)(lVar13 + 0x90));
    }
    Scaleform::Lock::DoLock(lVar8);
    if (plVar10 != (longlong *)0x0) {
      do {
        plVar9 = (longlong *)plVar7[(longlong)plVar12];
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0xd0))(plVar9,param_2,param_3 & 0xffffffff);
        }
        plVar12 = (longlong *)((longlong)plVar12 + 1);
      } while (plVar12 < plVar10);
    }
    plVar12 = plVar7 + ((longlong)plVar10 - 1);
    for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)((longlong)plVar10 - 1)) {
      if (*plVar12 != 0) {
        FUN_1432de450();
      }
      plVar12 = plVar12 + -1;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar7);
    }
  }
  return;
LAB_14331159c:
  plVar11 = (longlong *)
            ((*(ulonglong *)(lVar8 + 0x20 + (longlong)plVar6 * 0x28) & 0xfffffffffffffffc) + 0xc);
LAB_1433115ad:
  local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(lVar13 + 0x18 + *plVar10));
  local_68 = local_78;
  plStack_60 = plStack_70;
  (**(code **)(*param_2 + 8))(param_2,param_1,plVar4,&local_res20,plVar11);
LAB_1433115dc:
  plVar4 = *(longlong **)(*plVar10 + 8);
  if (((longlong)plVar9 <= (longlong)plVar4) &&
     (plVar9 = (longlong *)((longlong)plVar9 + 1), plVar9 <= plVar4)) {
    plVar6 = (longlong *)(*plVar10 + 0x10 + (longlong)plVar9 * 0x20);
    do {
      if (*plVar6 != -2) break;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      plVar6 = plVar6 + 4;
    } while (plVar9 <= plVar4);
  }
  goto LAB_1433113f0;
}



// FUNCTION 1433117a0 FUN_1433117a0 body=388 status=ok
// SIG undefined FUN_1433117a0(void)

undefined8 FUN_1433117a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong local_res10;
  ulonglong *local_res18;
  
  if (param_2 != 0) {
    FUN_1432c2fb0(&local_res10);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
    lVar6 = 0;
    if (*(int *)(lVar1 + 0xe4) < 2) {
      Scaleform::Lock::DoLock(lVar1 + 0x148);
      lVar6 = lVar1;
    }
    local_res18 = &local_res10;
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
    if (*(longlong *)(lVar1 + 0x188) != 0) {
      uVar3 = FUN_1432c4390((longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
                            *(ulonglong *)(local_res10 & 0xfffffffffffffffc) & 0x7fffffffffffffff,
                            0x1505);
      lVar4 = FUN_143315680(lVar1 + 0x188,&local_res18,
                            *(ulonglong *)(*(longlong *)(lVar1 + 0x188) + 8) & uVar3);
      if (((-1 < lVar4) && (lVar1 = *(longlong *)(lVar1 + 0x188), lVar1 != 0)) &&
         (lVar4 <= *(longlong *)(lVar1 + 8))) {
        uVar5 = FUN_143317160(lVar1 + (lVar4 * 5 + 5) * 8,*(longlong *)(param_1 + 0x70) + 0x30);
        if (lVar6 != 0) {
          Scaleform::Lock::DoLock(lVar6 + 0x148);
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
        }
        return uVar5;
      }
    }
    if (lVar6 != 0) {
      Scaleform::Lock::DoLock(lVar6 + 0x148);
    }
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
    }
  }
  return 0;
}



// FUNCTION 143311930 FUN_143311930 body=1318 status=ok
// SIG undefined FUN_143311930(void)

longlong * FUN_143311930(longlong *param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *_Str1;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_res8 [2];
  char *local_res10;
  uint local_res18;
  int local_70 [2];
  longlong *local_68;
  longlong *local_60;
  longlong lStack_58;
  longlong *local_50;
  longlong lStack_48;
  
  lVar6 = *(longlong *)(param_1[0xe] + 0x18);
  lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + 0x120);
  local_res10 = param_2;
  local_res18 = param_3;
  if (lVar10 != 0) {
    uVar4 = 3;
    if ((param_3 & 0x300) != 0) {
      uVar4 = 0x303;
    }
    do {
      if ((*(uint *)((longlong)*(longlong **)(lVar10 + 8) + 0x1c) & (uVar4 | param_3 & 0x10)) ==
          (param_3 & 0x313)) {
        pcVar5 = (char *)(**(code **)(**(longlong **)(lVar10 + 8) + 8))();
        iVar3 = _stricmp(pcVar5,param_2);
        if (iVar3 == 0) {
          lVar1 = param_1[0xe];
          local_60 = (longlong *)0x0;
          lStack_58 = 0;
          if ((*(char *)(lVar1 + 0x78) == '\0') ||
             (*(uint *)(lVar1 + 0x38) <= *(uint *)(lVar10 + 0x10))) {
            FUN_14330cc40(lVar1 + 0x30,&local_60);
          }
          else {
            plVar8 = (longlong *)
                     ((ulonglong)*(uint *)(lVar10 + 0x10) * 0x10 + *(longlong *)(lVar1 + 0x40));
            if ((*plVar8 != 0) && (Scaleform::GFx::Resource::AddRef(), local_60 != (longlong *)0x0))
            {
              FUN_1432de450();
            }
            local_60 = (longlong *)*plVar8;
            lStack_58 = plVar8[1];
            param_2 = local_res10;
          }
          plVar8 = local_60;
          if (local_60 != (longlong *)0x0) {
            if (param_4 != (undefined4 *)0x0) {
              plVar11 = (longlong *)local_60[3];
              if ((~(byte)(*(uint *)((longlong)plVar11 + 0x1c) >> 6) & 1) == 0) {
                *param_4 = 2;
              }
              else if (((param_3 & 3) == 0) ||
                      (cVar2 = (**(code **)(*plVar11 + 0x98))(plVar11), cVar2 != '\0')) {
                *param_4 = 1;
              }
              else {
                *param_4 = 3;
              }
            }
            if (local_60 == (longlong *)0x0) {
              return plVar8;
            }
            FUN_1432de450();
            return plVar8;
          }
        }
      }
      lVar10 = *(longlong *)(lVar10 + 0x18);
    } while (lVar10 != 0);
  }
  plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + 0x110);
  pcVar5 = local_res10;
  do {
    local_res10 = pcVar5;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*param_1 + 0xd8))(param_1,pcVar5);
      if (plVar8 == (longlong *)0x0) {
        if ((0x17 < ((byte)*(undefined4 *)(*(longlong *)(lVar6 + 0x40) + 0xd0) & 8 | 0x10)) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x40) + 0x110) != 0)) {
          lVar10 = param_1[0xe] + 0xa0;
          Scaleform::Lock::DoLock(lVar10);
          lVar6 = param_1[0xe];
          uVar7 = 0;
          if (*(longlong *)(lVar6 + 0x90) != 0) {
            do {
              plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x88) + uVar7 * 8);
              if ((plVar8 != (longlong *)0x0) &&
                 (plVar8 = (longlong *)(**(code **)(*plVar8 + 0xe0))(plVar8,pcVar5,param_3,param_4),
                 plVar8 != (longlong *)0x0)) {
                Scaleform::Lock::DoLock(lVar10);
                return plVar8;
              }
              lVar6 = param_1[0xe];
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulonglong *)(lVar6 + 0x90));
          }
          Scaleform::Lock::DoLock(lVar10);
        }
      }
      else {
        uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
        if ((uVar4 & 0xff00) == 0x200) {
          uVar4 = 3;
          if ((param_3 & 0x300) != 0) {
            uVar4 = 0x303;
          }
          if (((uVar4 | param_3 & 0x10) & *(uint *)(plVar8[3] + 0x1c)) == (param_3 & 0x313)) {
            if (param_4 == (undefined4 *)0x0) {
              return plVar8;
            }
            *param_4 = 6;
            return plVar8;
          }
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      return (longlong *)0x0;
    }
    uVar7 = 0;
    if (plVar8[1] != 0) {
      do {
        if (param_4 != (undefined4 *)0x0) {
          FUN_143313b60(param_4 + 2,param_4 + 2,plVar8 + 3);
        }
        local_70[0] = 0;
        local_68 = (longlong *)0x0;
        local_res8[0] = *(undefined4 *)(*plVar8 + 8 + uVar7 * 0x10);
        cVar2 = FUN_14330e8c0(*(undefined8 *)(lVar6 + 0x40),local_70,local_res8);
        plVar11 = local_68;
        if (cVar2 != '\0') {
          lVar10 = param_1[0xe];
          plVar9 = local_68;
          if (local_70[0] != 0) {
            local_50 = (longlong *)0x0;
            lStack_48 = 0;
            if ((*(char *)(lVar10 + 0x78) == '\0') || (*(uint *)(lVar10 + 0x38) <= (uint)local_68))
            {
              FUN_14330cc40(lVar10 + 0x30,&local_50,(ulonglong)local_68 & 0xffffffff);
            }
            else {
              plVar11 = (longlong *)
                        (*(longlong *)(lVar10 + 0x40) + ((ulonglong)local_68 & 0xffffffff) * 0x10);
              if ((*plVar11 != 0) &&
                 (Scaleform::GFx::Resource::AddRef(), local_50 != (longlong *)0x0)) {
                FUN_1432de450();
              }
              local_50 = (longlong *)*plVar11;
              lStack_48 = plVar11[1];
            }
            plVar9 = local_50;
            if (local_50 != (longlong *)0x0) {
              FUN_1432de450(local_50);
            }
          }
          plVar11 = local_68;
          if ((plVar9 != (longlong *)0x0) &&
             (uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9), pcVar5 = local_res10,
             (uVar4 & 0xff00) == 0x200)) {
            uVar4 = 3;
            if ((local_res18 & 0x300) != 0) {
              uVar4 = 0x303;
            }
            if (((uVar4 | local_res18 & 0x10) & *(uint *)(plVar9[3] + 0x1c)) ==
                (local_res18 & 0x313)) {
              iVar3 = _stricmp((char *)((*(ulonglong *)(*plVar8 + uVar7 * 0x10) & 0xfffffffffffffffc
                                        ) + 0xc),local_res10);
              if (iVar3 == 0) {
LAB_143311c4a:
                if (param_4 != (undefined4 *)0x0) {
                  uVar7 = *(ulonglong *)(plVar8[3] & 0xfffffffffffffffcU) & 0x7fffffffffffffff;
                  if ((uVar7 < 0xe) ||
                     (iVar3 = _stricmp((char *)((longlong)(plVar8[3] & 0xfffffffffffffffcU) +
                                               (uVar7 - 2)),"gfxfontlib.swf"), iVar3 != 0)) {
                    *param_4 = 4;
                  }
                  else {
                    *param_4 = 5;
                  }
                  FUN_1432c4d80(param_4 + 4,plVar8 + 3);
                }
                if (local_70[0] != 0) {
                  return plVar9;
                }
                if (plVar11 == (longlong *)0x0) {
                  return plVar9;
                }
                FUN_1432de450(plVar11);
                return plVar9;
              }
              _Str1 = (char *)(**(code **)(*(longlong *)plVar9[3] + 8))();
              iVar3 = _stricmp(_Str1,pcVar5);
              if (iVar3 == 0) goto LAB_143311c4a;
            }
          }
        }
        if ((local_70[0] == 0) && (plVar11 != (longlong *)0x0)) {
          FUN_1432de450(plVar11);
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar7 < (ulonglong)plVar8[1]);
    }
    plVar8 = (longlong *)plVar8[5];
    param_3 = local_res18;
    pcVar5 = local_res10;
  } while( true );
}



// FUNCTION 143311e60 FUN_143311e60 body=736 status=ok
// SIG undefined FUN_143311e60(void)

bool FUN_143311e60(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  int local_50 [2];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  uVar6 = 0;
  local_50[0] = 0;
  local_48 = 0;
  uVar7 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
  uVar5 = uVar6;
  if (*(int *)(uVar7 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(uVar7 + 0x148);
    uVar5 = uVar7;
  }
  cVar1 = FUN_143316e10(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) +
                        0x188,param_3,local_50);
  if (uVar5 != 0) {
    Scaleform::Lock::DoLock(uVar5 + 0x148);
  }
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x70) + 0xa0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    Scaleform::Lock::DoLock(lVar2);
    uVar7 = uVar6;
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x90) != 0) {
      FUN_143317560(&local_40,&local_40);
      uVar7 = local_38;
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar5 = uVar6;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x88) + uVar5 * 8);
        if (lVar3 != param_4) {
          if (lVar3 != 0) {
            Scaleform::GFx::Resource::AddRef(lVar3);
          }
          FUN_1433177f0(&local_40,&local_40,uVar7 + 1);
          uVar7 = local_38;
          plVar4 = (longlong *)(local_40 + local_38 * 8 + -8);
          if (plVar4 != (longlong *)0x0) {
            if (lVar3 != 0) {
              Scaleform::GFx::Resource::AddRef(lVar3);
            }
            *plVar4 = lVar3;
          }
          if (lVar3 != 0) {
            FUN_1432de450(lVar3);
          }
        }
        uVar5 = uVar5 + 1;
        lVar3 = *(longlong *)(param_1 + 0x70);
      } while (uVar5 < *(ulonglong *)(lVar3 + 0x90));
    }
    Scaleform::Lock::DoLock(lVar2);
    lVar2 = local_40;
    if (uVar7 != 0) {
      do {
        lVar3 = *(longlong *)(lVar2 + uVar6 * 8);
        if ((lVar3 != 0) && (cVar1 = FUN_143311e60(lVar3,param_2,param_3,0), cVar1 != '\0')) {
          plVar4 = (longlong *)(lVar2 + -8 + uVar7 * 8);
          do {
            if (*plVar4 != 0) {
              FUN_1432de450();
            }
            plVar4 = plVar4 + -1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          if (lVar2 != 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
          }
          bVar8 = true;
          goto LAB_1433120e4;
        }
        uVar6 = (ulonglong)((int)uVar6 + 1);
      } while (uVar6 < uVar7);
    }
    plVar4 = (longlong *)(lVar2 + (uVar7 - 1) * 8);
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (*plVar4 != 0) {
        FUN_1432de450();
      }
      plVar4 = plVar4 + -1;
    }
    if (lVar2 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    }
    bVar8 = false;
  }
  else if (local_50[0] == 1) {
    Scaleform::GFx::ResourceBinding::GetResourceData
              (*(longlong *)(param_1 + 0x70) + 0x30,param_2,local_48 & 0xffffffff);
    bVar8 = *param_2 != 0;
  }
  else {
    param_2[1] = *(longlong *)(param_1 + 0x70) + 0x30;
    lVar2 = FUN_143317160(local_50,*(longlong *)(param_1 + 0x70) + 0x30);
    if (lVar2 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar2);
    }
    if (*param_2 != 0) {
      FUN_1432de450();
    }
    bVar8 = lVar2 != 0;
    *param_2 = lVar2;
  }
LAB_1433120e4:
  if ((local_50[0] == 0) && (local_48 != 0)) {
    FUN_1432de450();
  }
  return bVar8;
}



// FUNCTION 143312150 FUN_143312150 body=169 status=ok
// SIG undefined FUN_143312150(void)

longlong FUN_143312150(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
  lVar3 = lVar4;
  if (*(int *)(lVar5 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(lVar5 + 0x148);
    lVar3 = lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
  lVar1 = FUN_143315540(lVar5 + 400,param_2);
  lVar2 = lVar4;
  if (-1 < lVar1) {
    lVar2 = (lVar1 + 1) * 0x20 + *(longlong *)(lVar5 + 400);
  }
  lVar5 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar5 = lVar4;
  }
  if (lVar3 != 0) {
    Scaleform::Lock::DoLock(lVar3 + 0x148);
  }
  return lVar5;
}



// FUNCTION 143312200 FUN_143312200 body=401 status=ok
// SIG undefined FUN_143312200(void)

undefined4 * FUN_143312200(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar6 = 0;
  uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40);
  uVar9 = uVar6;
  if (*(int *)(uVar3 + 0xe4) < 2) {
    Scaleform::Lock::DoLock(uVar3 + 0x148);
    uVar9 = uVar3;
  }
  plVar7 = (longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) + 400);
  lVar4 = *plVar7;
  if (lVar4 == 0) {
    plVar7 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    plVar8 = (longlong *)(lVar4 + 0x10);
    do {
      if (*plVar8 != -2) break;
      uVar6 = uVar6 + 1;
      plVar8 = plVar8 + 4;
    } while (uVar6 <= *(ulonglong *)(lVar4 + 8));
  }
  do {
    if (((plVar7 == (longlong *)0x0) || (lVar4 = *plVar7, lVar4 == 0)) ||
       (*(longlong *)(lVar4 + 8) < (longlong)uVar6)) {
      *param_2 = 0x40000;
LAB_143312362:
      if (uVar9 != 0) {
        Scaleform::Lock::DoLock(uVar9 + 0x148);
      }
      return param_2;
    }
    pcVar5 = (char *)((*(ulonglong *)(uVar6 * 0x20 + 0x28 + lVar4) & 0xfffffffffffffffc) + 0xc);
    lVar10 = ((*param_3 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar10];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      *param_2 = *(undefined4 *)((uVar6 + 1) * 0x20 + lVar4);
      goto LAB_143312362;
    }
    uVar3 = *(ulonglong *)(lVar4 + 8);
    if (((longlong)uVar6 <= (longlong)uVar3) && (uVar6 = uVar6 + 1, uVar6 <= uVar3)) {
      plVar8 = (longlong *)(lVar4 + 0x10 + uVar6 * 0x20);
      do {
        if (*plVar8 != -2) break;
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 4;
      } while (uVar6 <= uVar3);
    }
  } while( true );
}



// FUNCTION 1433123a0 FUN_1433123a0 body=128 status=ok
// SIG undefined FUN_1433123a0(void)

undefined8 * FUN_1433123a0(longlong param_1,undefined8 *param_2)

{
  RefCountImpl *this;
  undefined8 uVar1;
  
  uVar1 = 0x28;
  if (0x10 < ((byte)*(undefined4 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x40) +
                     0xd0) & 8 | 0x10)) {
    uVar1 = 0x29;
  }
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))((longlong *)(param_1 + 0x18),uVar1);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
    Scaleform::RefCountImpl::AddRef(this);
    *param_2 = this;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143312430 FUN_143312430 body=121 status=ok
// SIG undefined FUN_143312430(void)

undefined8 FUN_143312430(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  Scaleform::Lock::DoLock();
  uVar4 = 0;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x90);
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x88);
    do {
      if (*plVar3 == param_2) {
        uVar5 = 1;
        goto LAB_143312484;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 < uVar2);
  }
  uVar5 = 0;
LAB_143312484:
  Scaleform::Lock::DoLock(lVar1 + 0xa0);
  return uVar5;
}



// FUNCTION 1433124b0 FUN_1433124b0 body=63 status=ok
// SIG undefined FUN_1433124b0(void)

void FUN_1433124b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x40);
  FUN_1433138a0(param_1 + 0x38,param_1 + 0x38,local_res10);
  Scaleform::Lock::DoLock(param_1 + 0x40);
  return;
}



// FUNCTION 143312500 RemoveReleaseNotifier body=60 status=ok
// SIG undefined RemoveReleaseNotifier(void)

void Scaleform::GFx::MovieDefImpl::RemoveReleaseNotifier(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  Lock::DoLock(param_1 + 0x40);
  FUN_143313780(param_1 + 0x38,local_res10);
  Lock::DoLock(param_1 + 0x40);
  return;
}



// FUNCTION 143312550 FUN_143312550 body=487 status=ok
// SIG undefined FUN_143312550(void)

undefined8 *
FUN_143312550(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_40 [3];
  
  FUN_1432fceb0(param_1,param_2,0x20003);
  puVar9 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_145afb4c0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x90000;
  param_1[6] = 0;
  if ((RefCountImpl *)param_3[0xe] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[0xe]);
  }
  lVar2 = param_3[0xe];
  param_1[7] = lVar2;
  param_1[10] = param_4;
  plVar8 = *(longlong **)(lVar2 + 0x18);
  param_1[8] = plVar8;
  puVar6 = (uint *)(**(code **)(*plVar8 + 0x88))(plVar8,local_res8);
  uVar1 = *puVar6;
  *(byte *)(param_1 + 9) = (byte)(uVar1 >> 4) & 1;
  plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x48);
  if ((plVar8 == (longlong *)0x0) || ((uVar1 >> 4 & 1) != 0)) {
    param_1[0xb] = 0;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_88[0] = 2;
    local_80 = 0;
    local_78 = 1;
    local_74 = 1;
    local_70 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1432c2f70(local_40);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10);
    puVar7 = puVar9;
    if ((*(longlong *)(param_2 + 0x18) != 0) &&
       (puVar7 = *(undefined8 **)(*(longlong *)(param_2 + 0x18) + 0x20), puVar7 == (undefined8 *)0x0
       )) {
      puVar7 = (undefined8 *)Scaleform::Log::GetGlobalLog();
    }
    local_70 = puVar7;
    local_68 = uVar4;
    uStack_60 = uVar3;
    local_80 = (**(code **)(*param_3 + 0x90))(param_3);
    plVar8 = (longlong *)
             (**(code **)(*plVar8 + 0x10))
                       (plVar8,param_1 + 5,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x20),
                        local_88);
    if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
    }
    param_1[6] = plVar8;
    (**(code **)(*plVar8 + 8))(plVar8,param_1[7]);
    puVar7 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar9 = puVar7;
    }
    param_1[0xb] = puVar9;
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_40[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_40[0] & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 143312740 FUN_143312740 body=330 status=ok
// SIG undefined FUN_143312740(void)

void FUN_143312740(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  RefCountImpl *this;
  
  *param_1 = &PTR_FUN_145afb4c0;
  this = (RefCountImpl *)0x0;
  if ((param_1[7] != 0) &&
     (this = *(RefCountImpl **)(param_1[7] + 0xf8), this != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (param_1[7] != 0) {
    if (((byte)*(undefined4 *)(param_1[7] + 0xf0) & 0xf) == 1) {
      FUN_14330fc80(param_1[7],3);
    }
    if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
    }
    param_1[7] = 0;
  }
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      lVar2 = 0;
      lVar3 = *(longlong *)(*plVar1 + 8) + 1;
      do {
        if (*(longlong *)(lVar2 + 0x10 + *plVar1) != -2) {
          *(undefined8 *)(lVar2 + 0x10 + *plVar1) = 0xfffffffffffffffe;
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar1);
      *plVar1 = 0;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  param_1[6] = 0;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::Mutex::DoLock((Mutex *)(this + 0x10));
    this[0x40] = (RefCountImpl)0x1;
    Scaleform::WaitCondition::NotifyAll((WaitCondition *)(this + 0x38));
    Scaleform::Mutex::Unlock((Mutex *)(this + 0x10));
    Scaleform::RefCountImpl::Release(this);
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  FUN_1432fcf30(param_1);
  return;
}



// FUNCTION 143312890 FUN_143312890 body=3218 status=ok
// SIG undefined FUN_143312890(void)

uint FUN_143312890(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  RefCountImpl *this;
  undefined8 uVar14;
  RefCountImpl *pRVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint uVar23;
  RefCountImpl *pRVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  RefCountImpl *local_res8;
  uint local_res18;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  undefined4 local_60 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  pRVar24 = (RefCountImpl *)0x0;
  local_res8 = (RefCountImpl *)0x0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 3;
  }
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xf;
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      return uVar9;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_14330fc80(*(longlong *)(param_1 + 0x38),
                    *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xfffffff1 | 1);
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar27 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x100);
  }
  else {
    lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  }
  if (lVar27 == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40);
    lVar17 = *(longlong *)(lVar4 + 0xf8);
    Scaleform::Mutex::DoLock((Mutex *)(lVar17 + 0x10));
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar27 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x100);
    }
    else {
      lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
    }
    while (((lVar27 == 0 && (*(int *)(lVar4 + 0xe4) == 1)) &&
           (*(char *)(*(longlong *)(param_1 + 0x38) + 0x108) == '\0'))) {
      Scaleform::WaitCondition::Wait
                ((WaitCondition *)(*(longlong *)(lVar4 + 0xf8) + 0x38),
                 (Mutex *)(*(longlong *)(lVar4 + 0xf8) + 0x10),0xffffffff);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar27 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x100);
      }
      else {
        lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
      }
    }
    if (*(int *)(lVar4 + 0xe4) == 3) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x108) = 1;
    }
    Scaleform::Mutex::Unlock((Mutex *)(lVar17 + 0x10));
    if (lVar27 == 0) goto LAB_143313493;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x108) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x20) = lVar27;
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
    if ((uVar9 >> 0x14 & 1) == 0) {
      lVar17 = *(longlong *)(lVar27 + 0x18);
      lVar13 = Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef();
      this = pRVar24;
      if ((lVar13 != 0) &&
         (this = (RefCountImpl *)
                 (**(code **)(*(longlong *)(lVar13 + 0x18) + 0x18))
                           ((longlong *)(lVar13 + 0x18),0x14), this != (RefCountImpl *)0x0)) {
        Scaleform::RefCountImpl::AddRef(this);
        Scaleform::RefCountImpl::Release(this);
      }
      local_res18 = 0;
      if (*(int *)(lVar27 + 0xc) != 0) {
        do {
          uVar23 = (uint)pRVar24;
          puVar20 = (ulonglong *)(lVar17 + 0x18);
          if (this == (RefCountImpl *)0x0) {
LAB_143312af8:
            bVar7 = false;
          }
          else {
            if (lVar13 == 0) {
LAB_143312ace:
              pRVar24 = (RefCountImpl *)(ulonglong)(uVar23 | 2);
              local_res8 = (RefCountImpl *)((ulonglong)uVar23 | 2);
              uVar14 = FUN_1432c2fb0(&local_68,"gfxfontlib.swf");
              cVar8 = FUN_143317440(puVar20,uVar14);
              if (cVar8 == '\0') goto LAB_143312af8;
            }
            else {
              uVar14 = FUN_1432bc2c0(lVar13 + 0x18);
              FUN_1432c2fb0(&local_b8,uVar14);
              uVar23 = uVar23 | 1;
              local_res8 = (RefCountImpl *)((ulonglong)pRVar24 | 1);
              cVar8 = FUN_143317440(puVar20,&local_b8);
              pRVar24 = (RefCountImpl *)(ulonglong)uVar23;
              if (cVar8 == '\0') goto LAB_143312ace;
            }
            bVar7 = true;
          }
          pRVar15 = pRVar24;
          if (((ulonglong)pRVar24 & 2) != 0) {
            pRVar15 = (RefCountImpl *)(ulonglong)((uint)pRVar24 & 0xfffffffd);
            uVar21 = local_68 & 0xfffffffffffffffc;
            local_res8 = (RefCountImpl *)((ulonglong)pRVar24 & 0xfffffffffffffffd);
            iVar10 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar21 + 8,0xffffffff);
            if (iVar10 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar21);
            }
          }
          pRVar24 = pRVar15;
          if (((ulonglong)pRVar15 & 1) != 0) {
            pRVar24 = (RefCountImpl *)(ulonglong)((uint)pRVar15 & 0xfffffffe);
            uVar21 = local_b8 & 0xfffffffffffffffc;
            local_res8 = (RefCountImpl *)((ulonglong)pRVar15 & 0xfffffffffffffffe);
            iVar10 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar21 + 8,0xffffffff);
            if (iVar10 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar21);
            }
          }
          if (bVar7) {
            FUN_1433102f0(*(undefined8 *)(param_1 + 0x38));
          }
          else {
            pRVar15 = (RefCountImpl *)FUN_143318ea0(lVar4);
            local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x20);
            lVar26 = *(longlong *)(param_1 + 0x50);
            local_a0 = 0;
            if (lVar26 == 0) {
              *(undefined8 **)(param_1 + 0x50) = &local_a8;
            }
            else {
              lVar16 = *(longlong *)(lVar26 + 8);
              while (lVar16 != 0) {
                lVar26 = *(longlong *)(lVar26 + 8);
                lVar16 = *(longlong *)(lVar26 + 8);
              }
              *(undefined8 **)(lVar26 + 8) = &local_a8;
            }
            plVar22 = (longlong *)0x0;
            if (*(char *)(param_1 + 0x48) != '\0') {
              uVar21 = *(ulonglong *)(*puVar20 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
              plVar22 = (longlong *)0x0;
              if ((4 < uVar21) &&
                 (iVar10 = _stricmp((char *)((longlong)(*puVar20 & 0xfffffffffffffffc) + uVar21 + 8)
                                    ,".swf"), plVar22 = (longlong *)0x0, iVar10 == 0)) {
                local_98[0] = 1;
                FUN_1432c31e0(local_90,puVar20);
                FUN_1432c31e0(local_88,lVar4 + 0x70);
                FUN_1432c3510(local_90);
                FUN_1432c3950(local_90,(longlong)(*puVar20 & 0xfffffffffffffffc) + 0xc,
                              (*(ulonglong *)(*puVar20 & 0xfffffffffffffffc) & 0x7fffffffffffffff) -
                              4);
                FUN_1432c3950(local_90,&DAT_145afb774,0xffffffffffffffff);
                plVar22 = (longlong *)
                          FUN_1432fe2b0(pRVar15,local_98,uVar9 | 1,*(undefined8 *)(param_1 + 0x50),0
                                       );
                FUN_143316010(local_98);
              }
            }
            if (plVar22 == (longlong *)0x0) {
              local_60[0] = 1;
              FUN_1432c31e0(local_58,puVar20);
              FUN_1432c31e0(local_50,lVar4 + 0x70);
              plVar22 = (longlong *)
                        FUN_1432fe2b0(pRVar15,local_60,uVar9 | 1,*(undefined8 *)(param_1 + 0x50),0);
              FUN_143316010(local_60);
            }
            puVar5 = *(undefined8 **)(param_1 + 0x50);
            if (puVar5 == &local_a8) {
              *(undefined8 *)(param_1 + 0x50) = 0;
            }
            else {
              lVar26 = puVar5[1];
              while (lVar26 != 0) {
                puVar6 = (undefined8 *)puVar5[1];
                if (puVar6 == &local_a8) {
                  puVar5[1] = puVar6[1];
                  break;
                }
                puVar5 = puVar6;
                lVar26 = puVar6[1];
              }
            }
            if (plVar22 == (longlong *)0x0) {
LAB_143312f7d:
              FUN_143313530(param_1);
              if (*(longlong *)(param_1 + 0x38) != 0) {
                FUN_14330fc80(*(longlong *)(param_1 + 0x38),
                              *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xfffffff4 | 4);
              }
              if (pRVar15 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(pRVar15);
              }
              if (lVar13 != 0) {
                FUN_1432de450(lVar13);
              }
              if (this != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(this);
              }
              return 4;
            }
            uVar23 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0xd0);
            uVar11 = (**(code **)(*plVar22 + 0x78))(plVar22);
            if (((uVar11 ^ uVar23) & 8) != 0) {
              FUN_1432de450(plVar22);
              if (*(longlong *)(lVar4 + 0x18) != 0) {
                FUN_143300d50(*(longlong *)(lVar4 + 0x18) + 0x18,
                              "ActionScript version mismatched between main and import \'%s\' files"
                              ,(*(ulonglong *)(lVar17 + 0x18) & 0xfffffffffffffffc) + 0xc);
              }
              goto LAB_143312f7d;
            }
            lVar26 = plVar22[0xe];
            lVar16 = *(longlong *)(param_1 + 0x38);
            if ((lVar26 == *(longlong *)(param_1 + 0x38)) && (*(longlong *)(lVar4 + 0x18) != 0)) {
              FUN_143317390(*(longlong *)(lVar4 + 0x18) + 0x18,
                            "Self recursive import detected in \'%s\'",
                            (*(ulonglong *)(lVar17 + 0x18) & 0xfffffffffffffffc) + 0xc);
            }
            FUN_14330fef0(*(undefined8 *)(param_1 + 0x38),lVar17,plVar22,lVar4,lVar26 == lVar16);
            lVar26 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30);
            if ((lVar26 != 0) &&
               (lVar16 = Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef
                                   (*(undefined8 *)(param_1 + 0x38)), lVar16 != 0)) {
              plVar18 = (longlong *)(lVar26 + 0x18);
              (**(code **)(*plVar18 + 8))(plVar18,lVar16,plVar22);
              FUN_1432de450(lVar16);
            }
            FUN_1432de450(plVar22);
            pRVar24 = local_res8;
            if (pRVar15 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(pRVar15);
            }
          }
          lVar17 = *(longlong *)(lVar17 + 0x28);
          local_res18 = local_res18 + 1;
        } while (local_res18 < *(uint *)(lVar27 + 0xc));
      }
      if (lVar13 != 0) {
        FUN_1432de450(lVar13);
      }
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
    }
    uVar9 = 0;
    lVar13 = *(longlong *)(param_1 + 0x38);
    plVar22 = *(longlong **)(lVar27 + 0x28);
    uVar14 = *(undefined8 *)(lVar13 + 0x10);
    lVar17 = lVar13 + 0x30;
    if (*(int *)(lVar27 + 0x10) != 0) {
      do {
        if (*plVar22 != 0) {
          local_d8 = (longlong *)0x0;
          local_d0 = lVar17;
          if (((*(char *)(*(longlong *)(param_1 + 0x38) + 0x108) == '\0') &&
              (plVar18 = (longlong *)*plVar22, plVar18 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar18 + 0x18))(plVar18,plVar22[1],&local_d8,lVar4,uVar14),
             cVar8 != '\0')) {
            if (((*(longlong *)(param_1 + 0x30) != 0) &&
                (uVar23 = (**(code **)(*local_d8 + 0x10))(), (uVar23 & 0xff00) == 0x100)) &&
               (cVar8 = (**(code **)(*local_d8 + 0x10))(), cVar8 == '\x01')) {
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                        (*(longlong **)(param_1 + 0x30),plVar22,local_d8);
            }
          }
          else if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x108) != '\0') {
            FUN_143313530(param_1);
            if (*(longlong *)(param_1 + 0x38) != 0) {
              FUN_14330fc80(*(longlong *)(param_1 + 0x38),
                            *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xfffffff3 | 3);
            }
            pRVar24 = *(RefCountImpl **)(*(longlong *)(param_1 + 0x38) + 0xf8);
            if (pRVar24 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::AddRef(pRVar24);
            }
            if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
            }
            *(undefined8 *)(param_1 + 0x38) = 0;
            Scaleform::Mutex::DoLock((Mutex *)(pRVar24 + 0x10));
            pRVar24[0x40] = (RefCountImpl)0x1;
            Scaleform::WaitCondition::NotifyAll((WaitCondition *)(pRVar24 + 0x38));
            Scaleform::Mutex::Unlock((Mutex *)(pRVar24 + 0x10));
            Scaleform::RefCountImpl::Release(pRVar24);
            if (local_d8 != (longlong *)0x0) {
              FUN_1432de450();
            }
            return 3;
          }
          FUN_14330ca80(lVar17,(int)plVar22[2],&local_d8);
          if (local_d8 != (longlong *)0x0) {
            FUN_1432de450();
          }
        }
        plVar22 = (longlong *)plVar22[3];
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(lVar27 + 0x10));
    }
    if (*(int *)(lVar27 + 8) != 0) {
      uVar9 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      lVar26 = *(longlong *)(lVar27 + 0x20);
      if (*(int *)(lVar27 + 8) != 0) {
        do {
          local_c8 = 0;
          lStack_c0 = 0;
          if ((*(char *)(lVar13 + 0x78) == '\0') ||
             (*(uint *)(lVar13 + 0x38) <= *(uint *)(lVar26 + 0x10))) {
            FUN_14330cc40(lVar17,&local_c8);
          }
          else {
            plVar22 = (longlong *)
                      ((ulonglong)*(uint *)(lVar26 + 0x10) * 0x10 + *(longlong *)(lVar13 + 0x40));
            if ((*plVar22 != 0) && (Scaleform::GFx::Resource::AddRef(), local_c8 != 0)) {
              FUN_1432de450();
            }
            local_c8 = *plVar22;
            lStack_c0 = plVar22[1];
          }
          lVar16 = local_c8;
          if (local_c8 != 0) {
            FUN_14339bd00(local_c8);
            uVar21 = local_e8 + 1;
            if (uVar21 < local_e8) {
              uVar25 = uVar21;
              if (uVar21 < local_e0 >> 1) {
LAB_1433131b5:
                FUN_1432bc070(&local_f0,&local_f0,uVar25);
              }
            }
            else if (local_e0 < uVar21) {
              uVar25 = (uVar21 >> 2) + uVar21;
              goto LAB_1433131b5;
            }
            plVar22 = (longlong *)(local_f0 + -8 + uVar21 * 8);
            if (plVar22 != (longlong *)0x0) {
              *plVar22 = lVar16;
            }
            local_e8 = uVar21;
            if (local_c8 != 0) {
              FUN_1432de450();
            }
          }
          lVar26 = *(longlong *)(lVar26 + 0x18);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(lVar27 + 8));
        if ((local_e8 != 0) && (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x38) != 0)) {
          if ((*(char *)(lVar4 + 0x78) == '\0') && (*(longlong *)(lVar4 + 0x30) == 0)) {
            uVar19 = 0;
          }
          else {
            uVar19 = 1;
          }
          lVar17 = 0;
          if ((*(longlong *)(lVar4 + 0x18) != 0) &&
             (lVar17 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x20), lVar17 == 0)) {
            lVar17 = Scaleform::Log::GetGlobalLog();
          }
          FUN_1433b4d30(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x38),&local_f0,
                        *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x20),lVar17,param_1 + 0x28,
                        uVar14,uVar19);
        }
      }
      if (local_f0 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x104) = *(undefined4 *)(lVar27 + 4);
    *(int *)(*(longlong *)(param_1 + 0x38) + 0x100) =
         *(int *)(*(longlong *)(param_1 + 0x38) + 0x100) + 1;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x100) == 1) {
      lVar27 = *(longlong *)(param_1 + 0x38);
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) | 0x100;
      if (lVar27 != 0) {
        lVar17 = *(longlong *)(lVar27 + 0xf8);
        if (lVar17 == 0) {
          *(uint *)(lVar27 + 0xf0) = uVar9;
        }
        else {
          Scaleform::Mutex::DoLock((Mutex *)(lVar17 + 0x10));
          *(uint *)(lVar27 + 0xf0) = uVar9;
          Scaleform::WaitCondition::NotifyAll
                    ((WaitCondition *)(*(longlong *)(lVar27 + 0xf8) + 0x38));
          Scaleform::Mutex::Unlock((Mutex *)(lVar17 + 0x10));
        }
      }
    }
    lVar27 = *(longlong *)(param_1 + 0x38);
    iVar10 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))();
    if (*(int *)(lVar27 + 0x100) == iVar10) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x104) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x50);
      FUN_143313530(param_1);
      lVar27 = *(longlong *)(param_1 + 0x38);
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xfffffff2 | 0x202;
      if (lVar27 != 0) {
        lVar17 = *(longlong *)(lVar27 + 0xf8);
        if (lVar17 == 0) {
          *(uint *)(lVar27 + 0xf0) = uVar9;
        }
        else {
          Scaleform::Mutex::DoLock((Mutex *)(lVar17 + 0x10));
          *(uint *)(lVar27 + 0xf0) = uVar9;
          Scaleform::WaitCondition::NotifyAll
                    ((WaitCondition *)(*(longlong *)(lVar27 + 0xf8) + 0x38));
          Scaleform::Mutex::Unlock((Mutex *)(lVar17 + 0x10));
        }
      }
    }
    plVar22 = *(longlong **)(lVar4 + 0x28);
    if (plVar22 != (longlong *)0x0) {
      FUN_1432c2fb0(&local_b0,
                    (*(ulonglong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) + 0x40) +
                      0x48) & 0xfffffffffffffffc) + 0xc);
      lVar27 = *(longlong *)(param_1 + 0x38);
      uVar1 = *(undefined4 *)((*(longlong **)(lVar27 + 0x18))[8] + 0x50);
      uVar12 = (**(code **)(**(longlong **)(lVar27 + 0x18) + 0x50))();
      uVar2 = *(undefined4 *)(lVar27 + 0x100);
      uVar3 = *(undefined4 *)(lVar27 + 0x104);
      FUN_1432c31e0(&local_80,&local_b0);
      local_78 = uVar3;
      local_74 = uVar1;
      local_70 = uVar2;
      local_6c = uVar12;
      (**(code **)(*plVar22 + 8))(plVar22,&local_80);
      iVar10 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                         ((local_80 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar10 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_80 & 0xfffffffffffffffc);
      }
      iVar10 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                         ((local_b0 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar10 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_b0 & 0xfffffffffffffffc);
      }
    }
    return *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xf;
  }
LAB_143313493:
  FUN_143313530(param_1);
  uVar9 = 4 - (*(char *)(*(longlong *)(param_1 + 0x38) + 0x108) != '\0');
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14330fc80(*(longlong *)(param_1 + 0x38),
                  *(uint *)(*(longlong *)(param_1 + 0x38) + 0xf0) & 0xfffffff0 | uVar9);
  }
  pRVar24 = *(RefCountImpl **)(*(longlong *)(param_1 + 0x38) + 0xf8);
  if (pRVar24 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar24);
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  Scaleform::Mutex::DoLock((Mutex *)(pRVar24 + 0x10));
  pRVar24[0x40] = (RefCountImpl)0x1;
  Scaleform::WaitCondition::NotifyAll((WaitCondition *)(pRVar24 + 0x38));
  Scaleform::Mutex::Unlock((Mutex *)(pRVar24 + 0x10));
  Scaleform::RefCountImpl::Release(pRVar24);
  return uVar9;
}



// FUNCTION 143313530 FUN_143313530 body=210 status=ok
// SIG undefined FUN_143313530(void)

void FUN_143313530(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = *(longlong *)(param_1 + 0x30);
  if (local_20 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x78) = 1;
    return;
  }
  local_18 = *(undefined8 *)(param_1 + 0x58);
  local_28 = &PTR_FUN_145afb7f0;
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar1 = lVar2 + 0xa0;
  Scaleform::Lock::DoLock(lVar1);
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    cVar3 = Scaleform::GFx::Resource::AddRef_NotZero();
    if (cVar3 != '\0') {
      plVar4 = *(longlong **)(lVar2 + 0x20);
      Scaleform::Lock::DoLock(lVar1);
      goto LAB_1433135a7;
    }
  }
  Scaleform::Lock::DoLock(lVar1);
  plVar4 = (longlong *)0x0;
LAB_1433135a7:
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_28,2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  FUN_1432de450(plVar4);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x78) = 1;
  return;
}



// FUNCTION 143313610 FUN_143313610 body=158 status=ok
// SIG undefined FUN_143313610(void)

void FUN_143313610(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_2 + 0x218))(param_2);
  uVar1 = *(uint *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar3 + 0x70);
  Scaleform::Lock::DoLock(lVar3 + 0xa0);
  if ((ulonglong)uVar1 < *(ulonglong *)(lVar3 + 0x90)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x88) + (ulonglong)uVar1 * 8);
    Scaleform::Lock::DoLock(lVar3 + 0xa0);
    if ((lVar2 != 0) &&
       (0 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18) + 0x40) + 0x1f8
                    ))) {
      (**(code **)(*param_2 + 0x3c0))(param_2,lVar2);
    }
  }
  else {
    Scaleform::Lock::DoLock(lVar3 + 0xa0);
  }
  return;
}



// FUNCTION 1433136c0 FUN_1433136c0 body=181 status=ok
// SIG undefined FUN_1433136c0(void)

void FUN_1433136c0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_3 + 0x70);
  uVar1 = *(uint *)(param_1 + 8);
  Scaleform::Lock::DoLock(lVar3 + 0xa0);
  if ((ulonglong)uVar1 < *(ulonglong *)(lVar3 + 0x90)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x88) + (ulonglong)uVar1 * 8);
    Scaleform::Lock::DoLock(lVar3 + 0xa0);
    if ((lVar2 != 0) &&
       (0 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18) + 0x40) + 0x1f8
                    ))) {
      if ((param_4 != '\0') && (lVar3 = (**(code **)(*param_2 + 0x218))(param_2), lVar2 == lVar3)) {
        return;
      }
      (**(code **)(*param_2 + 0x3c0))(param_2,lVar2);
    }
  }
  else {
    Scaleform::Lock::DoLock(lVar3 + 0xa0);
  }
  return;
}



// FUNCTION 143313780 FUN_143313780 body=276 status=ok
// SIG undefined FUN_143313780(void)

ulonglong FUN_143313780(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar6 = 8;
    uVar4 = 0x1505;
    do {
      lVar1 = lVar6 + -1;
      lVar6 = lVar6 + -1;
      uVar4 = uVar4 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_2);
    } while (lVar6 != 0);
    uVar4 = *(ulonglong *)(lVar2 + 8) & uVar4;
    in_RAX = uVar4 * 3;
    puVar7 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x18);
    if ((*(longlong *)(lVar2 + 0x10 + uVar4 * 0x18) != -2) && (puVar7[1] == uVar4)) {
      uVar3 = uVar4;
      uVar8 = 0xffffffffffffffff;
      while( true ) {
        uVar5 = uVar3;
        if ((puVar7[1] == uVar4) && (in_RAX = *param_2, puVar7[2] == in_RAX)) {
          uVar3 = *puVar7;
          if (uVar4 == uVar5) {
            if (uVar3 != 0xffffffffffffffff) {
              *puVar7 = 0xfffffffffffffffe;
              lVar6 = lVar2 + uVar3 * 0x18;
              *puVar7 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
              puVar7[1] = *(ulonglong *)(lVar6 + 0x18);
              puVar7[2] = *(ulonglong *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x10 + uVar8 * 0x18) = uVar3;
          }
          *puVar7 = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        uVar3 = *puVar7;
        if (uVar3 == 0xffffffffffffffff) break;
        in_RAX = uVar3 * 3;
        puVar7 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
        uVar8 = uVar5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433138a0 FUN_1433138a0 body=187 status=ok
// SIG undefined FUN_1433138a0(void)

void FUN_1433138a0(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = 8;
  uVar6 = 0x1505;
  do {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_3);
  } while (lVar5 != 0);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar4 = *(ulonglong *)(lVar5 + 8) & uVar6;
    lVar1 = uVar4 * 3 + 2;
    puVar2 = (ulonglong *)(lVar5 + lVar1 * 8);
    if ((*(longlong *)(lVar5 + lVar1 * 8) != -2) && (uVar3 = uVar4, puVar2[1] == uVar4)) {
      while ((puVar2[1] != uVar4 || (puVar2[2] != *param_3))) {
        uVar3 = *puVar2;
        if (uVar3 == 0xffffffffffffffff) goto LAB_143313947;
        puVar2 = (ulonglong *)(lVar5 + uVar3 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar3) {
        *(ulonglong *)(lVar5 + uVar3 * 0x18 + 0x20) = *param_3;
        return;
      }
    }
  }
LAB_143313947:
  FUN_143313c20(param_1,param_2,param_3,uVar6);
  return;
}



// FUNCTION 143313960 FUN_143313960 body=260 status=ok
// SIG undefined FUN_143313960(void)

longlong FUN_143313960(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  RefCountImpl *this;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 8;
  uVar6 = 0x1505;
  do {
    lVar3 = lVar8 + -1;
    lVar8 = lVar8 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*(byte *)(*param_3 + lVar3);
  } while (lVar8 != 0);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    uVar7 = *(ulonglong *)(lVar8 + 8) & uVar6;
    puVar4 = (ulonglong *)(lVar8 + 0x10 + uVar7 * 0x20);
    if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar7, puVar4[1] == uVar7)) {
      while ((puVar4[1] != uVar7 || (uVar1 = *(ulonglong *)*param_3, puVar4[2] != uVar1))) {
        uVar5 = *puVar4;
        if (uVar5 == 0xffffffffffffffff) goto LAB_143313a3e;
        puVar4 = (ulonglong *)(lVar8 + 0x10 + uVar5 * 0x20);
      }
      if (-1 < (longlong)uVar5) {
        *(ulonglong *)(uVar5 * 0x20 + 0x20 + lVar8) = uVar1;
        lVar8 = uVar5 * 0x20 + lVar8;
        puVar2 = (undefined8 *)param_3[1];
        this = (RefCountImpl *)*puVar2;
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        if (*(RefCountImpl **)(lVar8 + 0x28) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar8 + 0x28));
        }
        *(undefined8 *)(lVar8 + 0x28) = *puVar2;
        return lVar8 + 0x20;
      }
    }
  }
LAB_143313a3e:
  lVar8 = FUN_1433146d0(param_1,param_2,param_3,uVar6);
  return lVar8;
}



// FUNCTION 143313a70 FUN_143313a70 body=229 status=ok
// SIG undefined FUN_143313a70(void)

int * FUN_143313a70(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 4;
  uVar6 = 0x1505;
  do {
    lVar2 = lVar8 + -1;
    lVar8 = lVar8 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*(byte *)((longlong)*param_3 + lVar2);
  } while (lVar8 != 0);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    uVar7 = *(ulonglong *)(lVar8 + 8) & uVar6;
    puVar4 = (ulonglong *)(lVar8 + 0x10 + uVar7 * 0x20);
    if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar7, puVar4[1] == uVar7)) {
      while ((puVar4[1] != uVar7 || (iVar1 = *(int *)*param_3, (int)puVar4[2] != iVar1))) {
        uVar5 = *puVar4;
        if (uVar5 == 0xffffffffffffffff) goto LAB_143313b2f;
        puVar4 = (ulonglong *)(lVar8 + 0x10 + uVar5 * 0x20);
      }
      if (-1 < (longlong)uVar5) {
        piVar3 = (int *)((uVar5 + 1) * 0x20 + lVar8);
        *piVar3 = iVar1;
        FUN_1432c4d80(piVar3 + 2,param_3[1]);
        return piVar3;
      }
    }
  }
LAB_143313b2f:
  piVar3 = (int *)FUN_143314ab0(param_1,param_2,param_3,uVar6);
  return piVar3;
}



// FUNCTION 143313b60 FUN_143313b60 body=177 status=ok
// SIG undefined FUN_143313b60(void)

longlong FUN_143313b60(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1432c4390((longlong)(*param_3 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*param_3 & 0xfffffffffffffffc) & 0x7fffffffffffffff,0x1505);
  lVar3 = *param_1;
  if ((lVar3 != 0) &&
     (lVar2 = FUN_1433157c0(param_1,param_3,*(ulonglong *)(lVar3 + 8) & uVar1), -1 < lVar2)) {
    lVar3 = lVar3 + lVar2 * 0x18;
    FUN_1432c4d80(lVar3 + 0x20,param_3);
    return lVar3 + 0x20;
  }
  lVar3 = FUN_1433152b0(param_1,param_2,param_3,uVar1);
  return lVar3;
}



// FUNCTION 143313c20 FUN_143313c20 body=322 status=ok
// SIG undefined FUN_143313c20(void)

void FUN_143313c20(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

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
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143313c74;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_143317cd0(param_1,param_2,lVar10);
LAB_143313c74:
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



// FUNCTION 143313d70 FUN_143313d70 body=411 status=ok
// SIG undefined FUN_143313d70(void)

longlong FUN_143313d70(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_1433168c0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar5 = param_4 * 0x20 + lVar2;
  uVar4 = param_4;
  if (*(longlong *)(lVar5 + 0x10) == -2) {
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x20) = *param_3;
    if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
    }
    *(undefined8 *)(lVar5 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar7 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar5 + 0x18) == param_4) {
      FUN_143315860(lVar7 + 0x10,lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x20) = *param_3;
      if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
      }
      if (*(RefCountImpl **)(lVar5 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar5 + 0x28));
      }
      *(undefined8 *)(lVar5 + 0x28) = param_3[1];
      *(ulonglong *)(lVar5 + 0x10) = uVar4;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar5 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar5 + 0x10);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
      if (*(RefCountImpl **)(lVar5 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar5 + 0x28));
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
      *puVar6 = uVar4;
      *(undefined8 *)(lVar5 + 0x20) = *param_3;
      if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
      }
      if (*(RefCountImpl **)(lVar5 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar5 + 0x28));
      }
      *(undefined8 *)(lVar5 + 0x28) = param_3[1];
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar5 + 0x18) = param_4;
  return lVar5 + 0x20;
}



// FUNCTION 143313f10 FUN_143313f10 body=440 status=ok
// SIG undefined FUN_143313f10(void)

longlong FUN_143313f10(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_143316910();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  lVar9 = param_4 * 0x20 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar6 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar9 + 0x18) = *param_3;
    iVar1 = param_3[2];
    *(int *)(lVar9 + 0x20) = iVar1;
    lVar3 = *(longlong *)(param_3 + 4);
    *(longlong *)(lVar9 + 0x28) = lVar3;
    if ((iVar1 == 0) && (lVar3 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar5;
      lVar8 = uVar6 * 0x20 + lVar3;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    uVar5 = (*(uint *)(lVar9 + 0x18) >> 8 ^ *(uint *)(lVar9 + 0x18)) & uVar5;
    if (uVar5 == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar4;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
      iVar1 = *(int *)(lVar9 + 0x20);
      *(int *)(lVar8 + 0x20) = iVar1;
      lVar3 = *(longlong *)(lVar9 + 0x28);
      *(longlong *)(lVar8 + 0x28) = lVar3;
      if ((iVar1 == 0) && (lVar3 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      FUN_143316100(lVar9 + 0x18,param_3);
      *(ulonglong *)(lVar9 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar3 + 0x10 + uVar5 * 0x20);
      uVar5 = *puVar7;
      while (uVar5 != param_4) {
        puVar7 = (ulonglong *)(lVar3 + 0x10 + *puVar7 * 0x20);
        uVar5 = *puVar7;
      }
      *(longlong *)(lVar8 + 0x10) = lVar4;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
      iVar1 = *(int *)(lVar9 + 0x20);
      *(int *)(lVar8 + 0x20) = iVar1;
      lVar3 = *(longlong *)(lVar9 + 0x28);
      *(longlong *)(lVar8 + 0x28) = lVar3;
      if ((iVar1 == 0) && (lVar3 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar7 = uVar6;
      *(undefined4 *)(lVar9 + 0x18) = *param_3;
      if ((param_3[2] == 0) && (*(longlong *)(param_3 + 4) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar9 + 0x20) == 0) && (*(longlong *)(lVar9 + 0x28) != 0)) {
        FUN_1432de450();
      }
      *(undefined4 *)(lVar9 + 0x20) = param_3[2];
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 1433140d0 FUN_1433140d0 body=356 status=ok
// SIG undefined FUN_1433140d0(void)

longlong FUN_1433140d0(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_143316960();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *param_3;
    FUN_1432c5160(lVar8 + 0x28,param_3 + 2);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c5160(lVar7 + 0x28,lVar8 + 0x28);
      *(undefined4 *)(lVar8 + 0x20) = *param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3 + 2);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c5160(lVar7 + 0x28,lVar8 + 0x28);
      *puVar6 = uVar5;
      *(undefined4 *)(lVar8 + 0x20) = *param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3 + 2);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 143314240 FUN_143314240 body=348 status=ok
// SIG undefined FUN_143314240(void)

longlong FUN_143314240(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_1433169b0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar7 = param_4 * 0x20 + lVar2;
  uVar4 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c31e0(lVar7 + 0x20,param_3);
    *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(param_3 + 8);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar5 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar5 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_1433158b0(lVar5 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(param_3 + 8);
      *(ulonglong *)(lVar7 + 0x10) = uVar4;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c31e0(lVar5 + 0x20,lVar7 + 0x20);
      *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar7 + 0x28);
      *puVar6 = uVar4;
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(param_3 + 8);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 1433143a0 FUN_1433143a0 body=345 status=ok
// SIG undefined FUN_1433143a0(void)

longlong FUN_1433143a0(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_143316a00();
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
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_3 + 8);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar5 = uVar4 * 0x20 + lVar2;
    } while (*(longlong *)(lVar5 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_143315900(lVar5 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_3 + 8);
      *(ulonglong *)(lVar7 + 0x10) = uVar4;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c5160(lVar5 + 0x20,lVar7 + 0x20);
      *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar7 + 0x28);
      *puVar6 = uVar4;
      FUN_1432c4d80(lVar7 + 0x20,param_3);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143314500 FUN_143314500 body=451 status=ok
// SIG undefined FUN_143314500(void)

longlong FUN_143314500(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_143316a50();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x28);
  lVar1 = lVar6 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_1432c5160(lVar1 + 0x20,param_3);
    iVar4 = *(int *)(param_3 + 8);
    *(int *)(lVar1 + 0x28) = iVar4;
    lVar6 = *(longlong *)(param_3 + 0x10);
    *(longlong *)(lVar1 + 0x30) = lVar6;
    if ((iVar4 == 0) && (lVar6 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar2 = lVar6 + uVar10 * 0x28;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar1 + 0x18) == param_4) {
      FUN_1433159b0(lVar2 + 0x10,lVar1 + 0x10);
      Scaleform::
      StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::
      operator=(lVar1 + 0x20,param_3);
      *(ulonglong *)(lVar1 + 0x10) = uVar10;
    }
    else {
      lVar3 = *(ulonglong *)(lVar1 + 0x18) * 5 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar3 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar3 * 8), uVar8 != param_4) {
        lVar3 = *puVar9 * 5 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar7;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      FUN_1432c5160(lVar2 + 0x20,lVar1 + 0x20);
      iVar4 = *(int *)(lVar1 + 0x28);
      *(int *)(lVar2 + 0x28) = iVar4;
      lVar6 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar6;
      if ((iVar4 == 0) && (lVar6 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar9 = uVar10;
      FUN_1432c4d80(lVar1 + 0x20,param_3);
      if ((*(int *)(param_3 + 8) == 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar1 + 0x28) == 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
        FUN_1432de450();
      }
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar1 + 0x18) = param_4;
  return lVar1 + 0x20;
}



// FUNCTION 1433146d0 FUN_1433146d0 body=480 status=ok
// SIG undefined FUN_1433146d0(void)

longlong FUN_1433146d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

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
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143314723;
    lVar7 = plVar1[1] * 2 + 2;
  }
  FUN_143317e20(param_1,param_2,lVar7);
LAB_143314723:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar8 = param_4 * 0x20 + lVar7;
  uVar5 = param_4;
  if (*(longlong *)(lVar8 + 0x10) == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
    puVar2 = (undefined8 *)param_3[1];
    pRVar3 = (RefCountImpl *)*puVar2;
    if (pRVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar3);
    }
    *(undefined8 *)(lVar8 + 0x28) = *puVar2;
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar9 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      FUN_143315860(lVar9 + 0x10,lVar8 + 0x10);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      puVar2 = (undefined8 *)param_3[1];
      pRVar3 = (RefCountImpl *)*puVar2;
      if (pRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar3);
      }
      if (*(RefCountImpl **)(lVar8 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar8 + 0x28));
      }
      *(undefined8 *)(lVar8 + 0x28) = *puVar2;
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar7 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar8 + 0x10);
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      if (*(RefCountImpl **)(lVar8 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar8 + 0x28));
      }
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar5;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      puVar2 = (undefined8 *)param_3[1];
      pRVar3 = (RefCountImpl *)*puVar2;
      if (pRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar3);
      }
      if (*(RefCountImpl **)(lVar8 + 0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar8 + 0x28));
      }
      *(undefined8 *)(lVar8 + 0x28) = *puVar2;
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 1433148b0 FUN_1433148b0 body=507 status=ok
// SIG undefined FUN_1433148b0(void)

longlong FUN_1433148b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_14331490a;
    lVar7 = plVar2[1] * 2 + 2;
  }
  FUN_143317f90(param_1,param_2,lVar7);
LAB_14331490a:
  plVar2 = (longlong *)*param_1;
  uVar9 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar7 = *param_1;
  param_4 = uVar9 & param_4;
  lVar10 = param_4 * 0x20 + lVar7;
  lVar3 = *(longlong *)(lVar10 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)*param_3;
    piVar4 = (int *)param_3[1];
    iVar1 = *piVar4;
    *(int *)(lVar10 + 0x20) = iVar1;
    lVar7 = *(longlong *)(piVar4 + 2);
    *(longlong *)(lVar10 + 0x28) = lVar7;
    if ((iVar1 == 0) && (lVar7 != 0)) {
      Scaleform::GFx::Resource::AddRef();
    }
  }
  else {
    do {
      uVar5 = uVar5 + 1 & uVar9;
      lVar8 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    uVar9 = (*(uint *)(lVar10 + 0x18) >> 8 ^ *(uint *)(lVar10 + 0x18)) & uVar9;
    if (uVar9 == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar10 + 0x18);
      iVar1 = *(int *)(lVar10 + 0x20);
      *(int *)(lVar8 + 0x20) = iVar1;
      lVar7 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar8 + 0x28) = lVar7;
      if ((iVar1 == 0) && (lVar7 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      Scaleform::
      HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>_>
      ::operator=(lVar10 + 0x18,param_3);
      *(ulonglong *)(lVar10 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar7 + 0x10 + uVar9 * 0x20);
      uVar9 = *puVar6;
      while (uVar9 != param_4) {
        puVar6 = (ulonglong *)(lVar7 + 0x10 + *puVar6 * 0x20);
        uVar9 = *puVar6;
      }
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar10 + 0x18);
      iVar1 = *(int *)(lVar10 + 0x20);
      *(int *)(lVar8 + 0x20) = iVar1;
      lVar7 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar8 + 0x28) = lVar7;
      if ((iVar1 == 0) && (lVar7 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar6 = uVar5;
      *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)*param_3;
      piVar4 = (int *)param_3[1];
      if ((*piVar4 == 0) && (*(longlong *)(piVar4 + 2) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar10 + 0x20) == 0) && (*(longlong *)(lVar10 + 0x28) != 0)) {
        FUN_1432de450();
      }
      *(int *)(lVar10 + 0x20) = *piVar4;
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(piVar4 + 2);
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar10 + 0x18;
}



// FUNCTION 143314ab0 FUN_143314ab0 body=408 status=ok
// SIG undefined FUN_143314ab0(void)

longlong FUN_143314ab0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143314b03;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_1433180f0(param_1,param_2,lVar6);
LAB_143314b03:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar6 = *param_1;
  lVar8 = param_4 * 0x20 + lVar6;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
    FUN_1432c5160(lVar8 + 0x28,param_3[1]);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c5160(lVar7 + 0x28,lVar8 + 0x28);
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3[1]);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar4 = (ulonglong *)(lVar6 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar6 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c5160(lVar7 + 0x28,lVar8 + 0x28);
      *puVar4 = uVar5;
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3[1]);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 143314c50 FUN_143314c50 body=414 status=ok
// SIG undefined FUN_143314c50(void)

longlong FUN_143314c50(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143314ca3;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_143318280(param_1,param_2,lVar5);
LAB_143314ca3:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar7 = param_4 * 0x20 + lVar5;
  uVar3 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c31e0(lVar7 + 0x20,*param_3);
    *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)param_3[1];
  }
  else {
    do {
      uVar3 = uVar3 + 1 & plVar1[1];
      lVar4 = uVar3 * 0x20 + lVar5;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_1433158b0(lVar4 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)param_3[1];
      *(ulonglong *)(lVar7 + 0x10) = uVar3;
    }
    else {
      puVar6 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar2 = *puVar6;
      while (uVar2 != param_4) {
        puVar6 = (ulonglong *)(lVar5 + 0x10 + *puVar6 * 0x20);
        uVar2 = *puVar6;
      }
      *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c31e0(lVar4 + 0x20,lVar7 + 0x20);
      *(undefined1 *)(lVar4 + 0x28) = *(undefined1 *)(lVar7 + 0x28);
      *puVar6 = uVar3;
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)param_3[1];
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143314df0 FUN_143314df0 body=412 status=ok
// SIG undefined FUN_143314df0(void)

longlong FUN_143314df0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143314e43;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_143318420(param_1,param_2,lVar5);
LAB_143314e43:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar7 = param_4 * 0x20 + lVar5;
  uVar3 = param_4;
  if (*(longlong *)(lVar7 + 0x10) == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    FUN_1432c5160(lVar7 + 0x20,*param_3);
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)param_3[1];
  }
  else {
    do {
      uVar3 = uVar3 + 1 & plVar1[1];
      lVar4 = uVar3 * 0x20 + lVar5;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      FUN_143315900(lVar4 + 0x10,lVar7 + 0x10);
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)param_3[1];
      *(ulonglong *)(lVar7 + 0x10) = uVar3;
    }
    else {
      puVar6 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar2 = *puVar6;
      while (uVar2 != param_4) {
        puVar6 = (ulonglong *)(lVar5 + 0x10 + *puVar6 * 0x20);
        uVar2 = *puVar6;
      }
      *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      FUN_1432c5160(lVar4 + 0x20,lVar7 + 0x20);
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar7 + 0x28);
      *puVar6 = uVar3;
      FUN_1432c4d80(lVar7 + 0x20,*param_3);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)param_3[1];
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143314f90 FUN_143314f90 body=456 status=ok
// SIG undefined FUN_143314f90(void)

longlong FUN_143314f90(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar11 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143314fe4;
    lVar11 = plVar4[1] * 2 + 2;
  }
  FUN_1433185c0(param_1,param_2,lVar11);
LAB_143314fe4:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar11 = lVar5 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar6 == -2) {
    FUN_143315950(lVar11 + 0x10,param_3,0xffffffffffffffff);
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar4[1];
      lVar1 = lVar5 + uVar10 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar11 + 0x18) == param_4) {
      FUN_1433159b0(lVar1 + 0x10,lVar11 + 0x10);
      FUN_143316220(lVar11 + 0x20,param_3);
      *(ulonglong *)(lVar11 + 0x10) = uVar10;
    }
    else {
      lVar2 = *(ulonglong *)(lVar11 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar9 = (ulonglong *)(lVar5 + lVar2 * 8), uVar7 != param_4) {
        lVar2 = *puVar9 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar1 + 0x10) = lVar6;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
      FUN_1432c5160(lVar1 + 0x20,lVar11 + 0x20);
      iVar3 = *(int *)(lVar11 + 0x28);
      *(int *)(lVar1 + 0x28) = iVar3;
      lVar5 = *(longlong *)(lVar11 + 0x30);
      *(longlong *)(lVar1 + 0x30) = lVar5;
      if ((iVar3 == 0) && (lVar5 != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      *puVar9 = uVar10;
      FUN_1432c4d80(lVar11 + 0x20,*param_3);
      piVar8 = (int *)param_3[1];
      if ((*piVar8 == 0) && (*(longlong *)(piVar8 + 2) != 0)) {
        Scaleform::GFx::Resource::AddRef();
      }
      if ((*(int *)(lVar11 + 0x28) == 0) && (*(longlong *)(lVar11 + 0x30) != 0)) {
        FUN_1432de450();
      }
      *(int *)(lVar11 + 0x28) = *piVar8;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(piVar8 + 2);
      *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar11 + 0x18) = param_4;
  return lVar11 + 0x20;
}



// FUNCTION 143315160 FUN_143315160 body=326 status=ok
// SIG undefined FUN_143315160(void)

longlong FUN_143315160(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  FUN_143316aa0();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1432c31e0(lVar2 + 0x20,param_3);
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar9 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      FUN_1432c31e0(lVar3 + 0x20,lVar2 + 0x20);
      FUN_1432c4d80(lVar2 + 0x20,param_3);
      *(ulonglong *)(lVar2 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar2 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      FUN_1432c31e0(lVar3 + 0x20,lVar2 + 0x20);
      *puVar8 = uVar9;
      FUN_1432c4d80(lVar2 + 0x20,param_3);
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return lVar2 + 0x20;
}



// FUNCTION 1433152b0 FUN_1433152b0 body=358 status=ok
// SIG undefined FUN_1433152b0(void)

longlong FUN_1433152b0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

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
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143315302;
    lVar9 = plVar3[1] * 2 + 2;
  }
  FUN_143318780(param_1,param_2,lVar9);
LAB_143315302:
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
    FUN_1432c31e0(lVar9 + 0x20,param_3);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar8 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar8 * 0x18) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      FUN_1432c31e0(lVar2 + 0x20,lVar9 + 0x20);
      FUN_1432c4d80(lVar9 + 0x20,param_3);
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
      FUN_1432c31e0(lVar2 + 0x20,lVar9 + 0x20);
      *puVar7 = uVar8;
      FUN_1432c4d80(lVar9 + 0x20,param_3);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 143315420 FUN_143315420 body=138 status=ok
// SIG undefined FUN_143315420(void)

ulonglong FUN_143315420(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar5 = 4;
    uVar3 = 0x1505;
    do {
      lVar1 = lVar5 + -1;
      lVar5 = lVar5 + -1;
      uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
    } while (lVar5 != 0);
    uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
    lVar5 = uVar3 * 3 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar5 * 8);
    if ((*(longlong *)(lVar2 + lVar5 * 8) != -2) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
      while( true ) {
        if ((puVar6[1] == uVar3) && ((int)puVar6[2] == *param_2)) {
          return uVar4;
        }
        uVar4 = *puVar6;
        if (uVar4 == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar2 + uVar4 * 0x18 + 0x10);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433154b0 FUN_1433154b0 body=144 status=ok
// SIG undefined FUN_1433154b0(void)

ulonglong FUN_1433154b0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0xffffffffffffffff;
  }
  lVar5 = 8;
  uVar3 = 0x1505;
  do {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
  } while (lVar5 != 0);
  uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
  puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x20);
  if ((*puVar6 != 0xfffffffffffffffe) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
    while( true ) {
      if ((puVar6[1] == uVar3) && (puVar6[2] == *param_2)) {
        return uVar4;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x20);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143315540 FUN_143315540 body=143 status=ok
// SIG undefined FUN_143315540(void)

ulonglong FUN_143315540(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0xffffffffffffffff;
  }
  lVar5 = 4;
  uVar3 = 0x1505;
  do {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
  } while (lVar5 != 0);
  uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
  puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x20);
  if ((*puVar6 != 0xfffffffffffffffe) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
    while( true ) {
      if ((puVar6[1] == uVar3) && ((int)puVar6[2] == *param_2)) {
        return uVar4;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x20);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433155d0 FUN_1433155d0 body=172 status=ok
// SIG undefined FUN_1433155d0(void)

longlong FUN_1433155d0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar2 != -2) && (lVar3 = param_3, plVar2[1] == param_3)) {
    while( true ) {
      if ((plVar2[1] == param_3) &&
         (iVar1 = _stricmp((char *)((plVar2[2] & 0xfffffffffffffffcU) + 0xc),
                           (char *)((*(ulonglong *)*param_2 & 0xfffffffffffffffc) + 0xc)),
         iVar1 == 0)) {
        return lVar3;
      }
      lVar3 = *plVar2;
      if (lVar3 == -1) break;
      plVar2 = (longlong *)(*param_1 + 0x10 + lVar3 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 143315680 FUN_143315680 body=175 status=ok
// SIG undefined FUN_143315680(void)

longlong FUN_143315680(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_3 * 5 + 2;
  plVar3 = (longlong *)(*param_1 + lVar2 * 8);
  if ((*(longlong *)(*param_1 + lVar2 * 8) != -2) && (lVar2 = param_3, plVar3[1] == param_3)) {
    while( true ) {
      if ((plVar3[1] == param_3) &&
         (iVar1 = _stricmp((char *)((plVar3[2] & 0xfffffffffffffffcU) + 0xc),
                           (char *)((*(ulonglong *)*param_2 & 0xfffffffffffffffc) + 0xc)),
         iVar1 == 0)) {
        return lVar2;
      }
      lVar2 = *plVar3;
      if (lVar2 == -1) break;
      plVar3 = (longlong *)(*param_1 + lVar2 * 0x28 + 0x10);
    }
  }
  return -1;
}



// FUNCTION 143315730 FUN_143315730 body=137 status=ok
// SIG undefined FUN_143315730(void)

ulonglong FUN_143315730(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  puVar2 = (ulonglong *)(lVar1 + 0x10 + param_3 * 0x20);
  if ((*puVar2 != 0xfffffffffffffffe) &&
     (uVar3 = param_3,
     ((ulonglong)((uint)puVar2[1] >> 8 ^ (uint)puVar2[1]) & *(ulonglong *)(lVar1 + 8)) == param_3))
  {
    while( true ) {
      if ((((ulonglong)((uint)puVar2[1] >> 8 ^ (uint)puVar2[1]) & *(ulonglong *)(lVar1 + 8)) ==
           param_3) && ((int)puVar2[1] == *param_2)) {
        return uVar3;
      }
      uVar3 = *puVar2;
      if (uVar3 == 0xffffffffffffffff) break;
      puVar2 = (ulonglong *)(lVar1 + 0x10 + uVar3 * 0x20);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1433157c0 FUN_1433157c0 body=155 status=ok
// SIG undefined FUN_1433157c0(void)

longlong FUN_1433157c0(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = *param_1;
  lVar6 = param_3 * 3 + 2;
  plVar7 = (longlong *)(lVar3 + lVar6 * 8);
  if ((*(longlong *)(lVar3 + lVar6 * 8) == -2) || (lVar6 = param_3, plVar7[1] != param_3)) {
    return -1;
  }
  do {
    if (plVar7[1] == param_3) {
      pcVar4 = (char *)((plVar7[2] & 0xfffffffffffffffcU) + 0xc);
      lVar5 = ((*param_2 & 0xfffffffffffffffc) + 0xc) - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar5];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return lVar6;
      }
    }
    lVar6 = *plVar7;
    if (lVar6 == -1) {
      return -1;
    }
    plVar7 = (longlong *)(lVar3 + lVar6 * 0x18 + 0x10);
  } while( true );
}



// FUNCTION 143315860 FUN_143315860 body=74 status=ok
// SIG undefined FUN_143315860(void)

undefined8 * FUN_143315860(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if ((RefCountImpl *)param_2[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_2[3]);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1433158b0 FUN_1433158b0 body=74 status=ok
// SIG undefined FUN_1433158b0(void)

undefined8 * FUN_1433158b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c31e0(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 143315900 FUN_143315900 body=73 status=ok
// SIG undefined FUN_143315900(void)

undefined8 * FUN_143315900(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c5160(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 143315950 FUN_143315950 body=94 status=ok
// SIG undefined FUN_143315950(void)

undefined8 * FUN_143315950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = param_3;
  param_1[1] = 0;
  FUN_1432c5160(param_1 + 2,*param_2);
  piVar2 = (int *)param_2[1];
  iVar1 = *piVar2;
  *(int *)(param_1 + 3) = iVar1;
  lVar3 = *(longlong *)(piVar2 + 2);
  param_1[4] = lVar3;
  if ((iVar1 == 0) && (lVar3 != 0)) {
    Scaleform::GFx::Resource::AddRef();
  }
  return param_1;
}



// FUNCTION 1433159b0 FUN_1433159b0 body=95 status=ok
// SIG undefined FUN_1433159b0(void)

undefined8 * FUN_1433159b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1432c5160(param_1 + 2,param_2 + 2);
  iVar1 = *(int *)(param_2 + 3);
  *(int *)(param_1 + 3) = iVar1;
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if ((iVar1 == 0) && (lVar2 != 0)) {
    Scaleform::GFx::Resource::AddRef();
  }
  return param_1;
}



// FUNCTION 143315a10 FUN_143315a10 body=203 status=ok
// SIG undefined FUN_143315a10(void)

undefined8 *
FUN_143315a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,RefCountImpl *param_4,
             RefCountImpl *param_5)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145afb758;
  FUN_1432c2f70(param_1 + 2);
  param_1[3] = 0;
  param_1[5] = 0;
  Scaleform::String::operator=(param_1 + 2,param_2);
  param_1[4] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = param_4;
  if (param_5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_5);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = param_5;
  return param_1;
}



// FUNCTION 143315ae0 FUN_143315ae0 body=110 status=ok
// SIG undefined FUN_143315ae0(void)

undefined8 * FUN_143315ae0(undefined8 *param_1,longlong param_2,RefCountImpl *param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afb878;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  param_1[2] = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[3] = param_3;
  return param_1;
}



// FUNCTION 143315b50 FUN_143315b50 body=102 status=ok
// SIG undefined FUN_143315b50(void)

undefined8 * FUN_143315b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145afb4d8;
  FUN_1432bfaf0(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[6] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x40000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
  return param_1;
}



// FUNCTION 143315bc0 FUN_143315bc0 body=78 status=ok
// SIG undefined FUN_143315bc0(void)

undefined8 * FUN_143315bc0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145afb2d0;
  *(undefined4 *)(param_1 + 1) = 1;
  Scaleform::Mutex::Mutex((Mutex *)(param_1 + 2),true,false);
  Scaleform::WaitCondition::WaitCondition((WaitCondition *)(param_1 + 7));
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143315c10 FUN_143315c10 body=137 status=ok
// SIG undefined FUN_143315c10(void)

undefined8 * FUN_143315c10(undefined8 *param_1,RefCountImpl *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9240;
  param_1[2] = &PTR_GetPoolName_145af9248;
  param_1[3] = &PTR_LAB_145af9270;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1432bdc50(param_1 + 6,0);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 143315ca0 FUN_143315ca0 body=134 status=ok
// SIG undefined FUN_143315ca0(void)

void FUN_143315ca0(longlong *param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        this = *(RefCountImpl **)(lVar1 + 0x28 + lVar3);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143315d30 FUN_143315d30 body=168 status=ok
// SIG undefined FUN_143315d30(void)

void FUN_143315d30(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar1 + 0x28 + lVar4) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143315de0 FUN_143315de0 body=177 status=ok
// SIG undefined FUN_143315de0(void)

void FUN_143315de0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar1 + 0x20 + lVar4) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143315ea0 FUN_143315ea0 body=168 status=ok
// SIG undefined FUN_143315ea0(void)

void FUN_143315ea0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar1 + 0x20 + lVar4) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143315f50 FUN_143315f50 body=190 status=ok
// SIG undefined FUN_143315f50(void)

void FUN_143315f50(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar4 + 0x10 + lVar1) != -2) {
        if ((*(int *)(lVar4 + 0x28 + lVar1) == 0) && (*(longlong *)(lVar4 + 0x30 + lVar1) != 0)) {
          FUN_1432de450();
        }
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar4 + 0x20 + lVar1) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar4 + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143316010 FUN_143316010 body=106 status=ok
// SIG undefined FUN_143316010(void)

void FUN_143316010(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  return;
}



// FUNCTION 143316080 operator= body=119 status=ok
// SIG undefined operator=(void)

longlong *
Scaleform::
AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>_>
::operator=(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != param_2) {
    if ((puVar1 != (undefined8 *)0x0) && ((char)param_1[1] != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      FUN_143316c40(*puVar1,puVar1[1]);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *param_1 = (longlong)param_2;
  }
  *(bool *)(param_1 + 1) = param_2 != (undefined8 *)0x0;
  return param_1;
}



// FUNCTION 143316100 FUN_143316100 body=88 status=ok
// SIG undefined FUN_143316100(void)

undefined4 * FUN_143316100(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if ((param_2[2] == 0) && (*(longlong *)(param_2 + 4) != 0)) {
    Scaleform::GFx::Resource::AddRef();
  }
  if ((param_1[2] == 0) && (*(longlong *)(param_1 + 4) != 0)) {
    FUN_1432de450();
  }
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 143316160 operator= body=89 status=ok
// SIG undefined operator=(void)

void Scaleform::
     HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>_>
     ::operator=(undefined4 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)*param_2;
  piVar1 = (int *)param_2[1];
  if ((*piVar1 == 0) && (*(longlong *)(piVar1 + 2) != 0)) {
    GFx::Resource::AddRef();
  }
  if ((param_1[2] == 0) && (*(longlong *)(param_1 + 4) != 0)) {
    FUN_1432de450();
  }
  param_1[2] = *piVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar1 + 2);
  return;
}


