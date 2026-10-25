// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438f1b70 FUN_1438f1b70 body=167 status=ok
// SIG undefined FUN_1438f1b70(void)

ulonglong FUN_1438f1b70(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                       undefined1 param_9)

{
  ulonglong uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (*param_1 == 0) {
    *param_8 = 0;
    param_8[1] = 0;
    param_8[2] = 0;
    return (ulonglong)param_8 & 0xffffffffffffff00;
  }
  local_38 = CONCAT44(param_6,param_5);
  local_30 = param_7;
  local_28 = CONCAT44(param_3,param_2);
  local_20 = param_4;
  local_10 = param_4;
  uVar1 = FUN_1438f39d0(*param_1,&local_28,&local_38,param_8,param_9,0);
  return uVar1;
}



// FUNCTION 1438f1c20 FUN_1438f1c20 body=36 status=ok
// SIG undefined FUN_1438f1c20(void)

void FUN_1438f1c20(longlong param_1)

{
  FUN_1438f1c50(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1438f1c50 FUN_1438f1c50 body=228 status=ok
// SIG undefined FUN_1438f1c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f1c50(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
  }
  else {
    local_20 = param_5;
    local_38 = CONCAT44(param_4,param_3);
    local_30 = param_5;
    puVar1 = (undefined8 *)FUN_1438f6b30(*param_1,local_28,&local_38);
    local_38 = *puVar1;
    local_30 = *(undefined4 *)(puVar1 + 1);
    local_40 = 0;
    local_48 = param_9;
    local_50 = param_8;
    local_58 = param_7;
    FUN_1438f3c00(*param_1,param_2,&local_38,param_6);
  }
  return;
}



// FUNCTION 1438f1d40 FUN_1438f1d40 body=247 status=ok
// SIG undefined FUN_1438f1d40(void)

undefined8 FUN_1438f1d40(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((DAT_146b95ca2 == '\0') && (DAT_146b95ca4 < 1)) {
    DAT_146b95ca4 = DAT_146b95ca4 + 1;
    plVar2 = (longlong *)0x0;
    if (param_1 == (longlong *)0x0) {
      lVar1 = operator_new(8);
      param_1 = plVar2;
      if (lVar1 != 0) {
        param_1 = (longlong *)FUN_1438f8d20(lVar1);
      }
      DAT_146b95ca1 = 1;
    }
    else {
      DAT_146b95ca1 = 0;
    }
    DAT_146b95ca8 = param_1;
    if (param_2 == (longlong *)0x0) {
      lVar1 = (**(code **)(*param_1 + 8))(param_1,8);
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1438f80c0(lVar1);
      }
      DAT_146b95ca0 = 1;
      DAT_146b95c98 = plVar2;
    }
    else {
      DAT_146b95ca0 = 0;
      DAT_146b95c98 = param_2;
    }
    uVar3 = 1;
    DAT_146b95cb0 = param_3;
    DAT_146b95cb8 = param_4;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1438f1e40 FUN_1438f1e40 body=18 status=ok
// SIG undefined FUN_1438f1e40(void)

void FUN_1438f1e40(longlong param_1)

{
  FUN_1438f1e60(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1438f1e60 FUN_1438f1e60 body=192 status=ok
// SIG undefined FUN_1438f1e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1438f1e60(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    local_18 = local_18 & 0xffffffffffffff00;
  }
  else {
    local_20 = param_5;
    local_38 = CONCAT44(param_4,param_3);
    local_30 = param_5;
    puVar1 = (undefined8 *)FUN_1438f6b30(*param_1,local_28,&local_38);
    local_40 = 0;
    local_38 = *puVar1;
    local_30 = *(undefined4 *)(puVar1 + 1);
    local_48 = param_7;
    local_18 = FUN_1438f5e40(*param_1,param_2,&local_38,param_6);
  }
  return local_18;
}



// FUNCTION 1438f1f20 thunk_FUN_1438f15c0 body=5 status=ok
// SIG undefined thunk_FUN_1438f15c0(void)

void thunk_FUN_1438f15c0(void)

{
  if (DAT_146b95ca0 != '\0') {
    if (DAT_146b95c98 != (undefined8 *)0x0) {
      (**(code **)*DAT_146b95c98)(DAT_146b95c98,1);
    }
    DAT_146b95c98 = (undefined8 *)0x0;
    DAT_146b95ca0 = '\0';
  }
  if (DAT_146b95ca1 != '\0') {
    if (DAT_146b95ca8 != (undefined8 *)0x0) {
      (**(code **)*DAT_146b95ca8)(DAT_146b95ca8,5);
    }
    DAT_146b95ca8 = (undefined8 *)0x0;
    DAT_146b95ca1 = '\0';
  }
  DAT_146b95cb0 = 0;
  DAT_146b95cb8 = 0;
  DAT_146b95ca4 = 0;
  DAT_146b95ca2 = 0;
  return;
}



// FUNCTION 1438f1f30 ~SDefaultMovieBorder body=5 status=ok
// SIG undefined ~SDefaultMovieBorder(void)

void SDefaultMovieBorder::~SDefaultMovieBorder(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,param_1);
  }
  return;
}



// FUNCTION 1438f1f40 FUN_1438f1f40 body=135 status=ok
// SIG undefined FUN_1438f1f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1438f1f40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_68 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_20 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_20 = (longlong *)(**(code **)*puVar1)(puVar1,local_58);
  }
  FUN_1438f77d0(local_58,param_1);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != local_58);
  }
  return param_1;
}



// FUNCTION 1438f1fd0 FUN_1438f1fd0 body=47 status=ok
// SIG undefined FUN_1438f1fd0(void)

void FUN_1438f1fd0(void)

{
  longlong lVar1;
  undefined4 *in_R9;
  
  lVar1 = FUN_1438f6c90();
  if ((undefined4 *)(lVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(lVar1 + 0x10) = *in_R9;
  }
  return;
}



// FUNCTION 1438f2000 FUN_1438f2000 body=47 status=ok
// SIG undefined FUN_1438f2000(void)

void FUN_1438f2000(void)

{
  longlong lVar1;
  undefined4 *in_R9;
  
  lVar1 = FUN_1438f6d00();
  if ((undefined4 *)(lVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(lVar1 + 0x10) = *in_R9;
  }
  return;
}



// FUNCTION 1438f2030 FUN_1438f2030 body=215 status=ok
// SIG undefined FUN_1438f2030(void)

void FUN_1438f2030(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_3 - param_1 >> 2;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar2 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    lVar1 = lVar2 * 4 + param_1;
    FUN_1438f27f0(param_1,lVar1,lVar2 * 8 + param_1);
    FUN_1438f27f0(param_2 + lVar2 * -4,param_2,lVar2 * 4 + param_2,param_4);
    lVar3 = param_3 + lVar2 * -4;
    FUN_1438f27f0(param_3 + lVar2 * -8,lVar3,param_3,param_4);
    FUN_1438f27f0(lVar1,param_2,lVar3,param_4);
    return;
  }
  FUN_1438f27f0();
  return;
}



// FUNCTION 1438f2110 FUN_1438f2110 body=517 status=ok
// SIG undefined FUN_1438f2110(void)

void FUN_1438f2110(ulonglong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res20;
  undefined8 uVar8;
  
  if (param_3 != param_4) {
    uVar8 = 0xfffffffffffffffe;
    uVar2 = 0;
    plVar1 = param_3;
    uVar3 = uVar2;
    do {
      uVar3 = uVar3 + 1;
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != param_4);
    if (uVar3 != 0) {
      uVar7 = param_1[1];
      local_res20 = SUB81(param_4,0);
      if ((ulonglong)((longlong)(param_1[2] - uVar7) >> 2) < uVar3) {
        lVar4 = (longlong)(uVar7 - *param_1) >> 2;
        if (-lVar4 - 1U < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar7 = lVar4 + uVar3;
        uVar6 = (longlong)(param_1[2] - *param_1) >> 2;
        uVar5 = uVar2;
        if (uVar6 <= ~(uVar6 >> 1)) {
          uVar5 = (uVar6 >> 1) + uVar6;
        }
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (uVar7 != 0) {
          plVar1 = (longlong *)FUN_1438f1790();
          uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar7 * 4);
        }
        uVar8 = FUN_1438f3000(*param_1,param_2,uVar2,param_1,local_res20,local_res20,uVar2,uVar8);
        uVar8 = FUN_1438f3050(param_3,param_4,uVar8,param_1,0,local_res20);
        FUN_1438f3000(param_2,param_1[1],uVar8,param_1,local_res20,local_res20);
        uVar5 = *param_1;
        uVar6 = param_1[1];
        if (uVar5 != 0) {
          plVar1 = (longlong *)FUN_1438f1790();
          (**(code **)(*plVar1 + 0x18))(plVar1,uVar5);
        }
        param_1[2] = uVar2 + uVar7 * 4;
        param_1[1] = uVar2 + (((longlong)(uVar6 - uVar5) >> 2) + uVar3) * 4;
        *param_1 = uVar2;
      }
      else {
        FUN_1438f3050(param_3,param_4,uVar7,param_1,0,local_res20);
        uVar2 = param_1[1];
        if ((param_2 != uVar2) && (uVar2 != uVar3 * 4 + uVar2)) {
          FUN_1438f2d90();
        }
        param_1[1] = param_1[1] + uVar3 * 4;
      }
    }
  }
  return;
}



// FUNCTION 1438f2320 FUN_1438f2320 body=505 status=ok
// SIG undefined FUN_1438f2320(void)

void FUN_1438f2320(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res20;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar3 = param_4 - param_3 >> 2;
  if (uVar3 != 0) {
    uVar7 = param_1[1];
    local_res20 = (undefined1)param_4;
    if ((ulonglong)((longlong)(param_1[2] - uVar7) >> 2) < uVar3) {
      lVar6 = (longlong)(uVar7 - *param_1) >> 2;
      if (-lVar6 - 1U < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar7 = lVar6 + uVar3;
      uVar5 = (longlong)(param_1[2] - *param_1) >> 2;
      uVar2 = 0;
      uVar4 = uVar2;
      if (uVar5 <= ~(uVar5 >> 1)) {
        uVar4 = (uVar5 >> 1) + uVar5;
      }
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 != 0) {
        plVar1 = (longlong *)FUN_1438f1790();
        uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar7 * 4);
      }
      uVar8 = FUN_1438f3000(*param_1,param_2,uVar2,param_1,local_res20,local_res20,uVar2,uVar8);
      uVar8 = FUN_1438f3000(param_3,param_4,uVar8,param_1,local_res20,local_res20);
      FUN_1438f3000(param_2,param_1[1],uVar8,param_1,local_res20,local_res20);
      uVar4 = *param_1;
      uVar5 = param_1[1];
      if (uVar4 != 0) {
        plVar1 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar4);
      }
      param_1[2] = uVar2 + uVar7 * 4;
      param_1[1] = uVar2 + (uVar3 + ((longlong)(uVar5 - uVar4) >> 2)) * 4;
      *param_1 = uVar2;
    }
    else {
      FUN_1438f3000(param_3,param_4,uVar7,param_1,local_res20,local_res20);
      uVar7 = param_1[1];
      if ((param_2 != uVar7) && (uVar7 != uVar7 + uVar3 * 4)) {
        FUN_1438f2d90();
      }
      param_1[1] = param_1[1] + uVar3 * 4;
    }
  }
  return;
}



// FUNCTION 1438f2520 FUN_1438f2520 body=158 status=ok
// SIG undefined FUN_1438f2520(void)

void FUN_1438f2520(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_3;
  while( true ) {
    if (param_3 == param_4) {
      return;
    }
    lVar1 = FUN_1438f1fd0(param_1,param_2,*(undefined8 *)(param_2 + 8),param_3 + 2,puVar2,uVar3);
    if (*(longlong *)(param_1 + 8) == -2) break;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    *(longlong *)(param_2 + 8) = lVar1;
    **(longlong **)(lVar1 + 8) = lVar1;
    param_3 = (undefined8 *)*param_3;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}



// FUNCTION 1438f25c0 FUN_1438f25c0 body=265 status=ok
// SIG undefined FUN_1438f25c0(void)

void FUN_1438f25c0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    puVar6 = param_1;
    do {
      uVar2 = puVar6[1];
      cVar5 = FUN_1438f3820(param_3,uVar2,*param_1);
      if (cVar5 == '\0') {
        uVar3 = *puVar6;
        cVar5 = FUN_1438f3820(param_3,uVar2,uVar3);
        puVar1 = puVar6 + 1;
        puVar4 = puVar6;
        while (cVar5 != '\0') {
          *puVar1 = uVar3;
          uVar3 = puVar4[-1];
          cVar5 = FUN_1438f3820(param_3,uVar2,uVar3);
          puVar1 = puVar4;
          puVar4 = puVar4 + -1;
        }
        *puVar1 = uVar2;
      }
      else {
        memmove(param_1 + 1,param_1,(4 - (longlong)param_1) + (longlong)puVar6);
        *param_1 = uVar2;
      }
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 1;
    } while (puVar1 != param_2);
  }
  return;
}



// FUNCTION 1438f26d0 FUN_1438f26d0 body=283 status=ok
// SIG undefined FUN_1438f26d0(void)

void FUN_1438f26d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  
  uVar7 = param_2 - param_1 >> 2;
  if ((1 < (longlong)uVar7) &&
     (lVar3 = (longlong)(uVar7 - (param_2 - param_1 >> 0x3f)) >> 1, 0 < lVar3)) {
    lVar4 = (longlong)(uVar7 - 1) / 2;
    do {
      local_res8[0] = *(undefined4 *)(param_1 + -4 + lVar3 * 4);
      lVar3 = lVar3 + -1;
      lVar6 = lVar3;
      while (lVar6 < lVar4) {
        lVar1 = lVar6 * 2 + 2;
        cVar2 = FUN_1438f3820(param_3,*(undefined4 *)(param_1 + lVar1 * 4),
                              *(undefined4 *)(param_1 + 4 + lVar6 * 8));
        lVar5 = lVar6 * 2 + 1;
        if (cVar2 == '\0') {
          lVar5 = lVar1;
        }
        *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
        lVar6 = lVar5;
      }
      if ((lVar6 == lVar4) && ((uVar7 & 1) == 0)) {
        *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + -4 + uVar7 * 4);
        lVar6 = uVar7 - 1;
      }
      FUN_1438f2ba0(param_1,lVar6,lVar3,local_res8,param_3);
    } while (0 < lVar3);
  }
  return;
}



// FUNCTION 1438f27f0 FUN_1438f27f0 body=136 status=ok
// SIG undefined FUN_1438f27f0(void)

void FUN_1438f27f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  cVar3 = FUN_1438f3820(param_4,uVar2,uVar1);
  if (cVar3 != '\0') {
    *param_2 = uVar1;
    *param_1 = uVar2;
  }
  uVar1 = *param_3;
  cVar3 = FUN_1438f3820(param_4,uVar1,*param_2);
  if (cVar3 != '\0') {
    *param_3 = *param_2;
    *param_2 = uVar1;
    uVar2 = *param_1;
    cVar3 = FUN_1438f3820(param_4,uVar1,uVar2);
    if (cVar3 != '\0') {
      *param_2 = uVar2;
      *param_1 = uVar1;
    }
  }
  return;
}



// FUNCTION 1438f2880 FUN_1438f2880 body=565 status=ok
// SIG undefined FUN_1438f2880(void)

void FUN_1438f2880(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_48;
  
  puVar1 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 2) -
                      ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_1438f2030(param_2,puVar1,param_3 + -1);
  puVar6 = puVar1 + 1;
  while (puVar8 = puVar1, param_2 < puVar8) {
    uVar2 = puVar8[-1];
    uVar3 = *puVar8;
    cVar4 = FUN_1438f3820(param_4,uVar2,uVar3);
    if ((cVar4 != '\0') ||
       (cVar4 = FUN_1438f3820(param_4,uVar3,uVar2), puVar1 = puVar8 + -1, cVar4 != '\0')) break;
  }
  puVar1 = puVar6;
  local_48 = puVar6;
  puVar7 = puVar8;
  if (puVar6 < param_3) {
    uVar2 = *puVar8;
    do {
      uVar3 = *puVar6;
      cVar4 = FUN_1438f3820(param_4,uVar3,uVar2);
      puVar1 = puVar6;
      local_48 = puVar6;
      if ((cVar4 != '\0') || (cVar4 = FUN_1438f3820(param_4,uVar2,uVar3), cVar4 != '\0')) break;
      puVar6 = puVar6 + 1;
      puVar1 = puVar6;
      local_48 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x0001438f295b:
  do {
    puVar9 = puVar8;
    if (param_3 <= puVar6) {
joined_r0x0001438f29b2:
      for (; puVar5 = puVar6, param_2 < puVar8; puVar8 = puVar8 + -1) {
        puVar9 = puVar9 + -1;
        uVar2 = *puVar7;
        uVar3 = *puVar9;
        cVar4 = FUN_1438f3820(param_4,uVar3,uVar2);
        if (cVar4 == '\0') {
          cVar4 = FUN_1438f3820(param_4,uVar2,uVar3);
          puVar5 = local_48;
          if (cVar4 != '\0') break;
          puVar7 = puVar7 + -1;
          if (puVar7 != puVar9) {
            uVar2 = *puVar7;
            *puVar7 = uVar3;
            *puVar9 = uVar2;
          }
        }
        puVar6 = local_48;
      }
      if (puVar8 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar1;
          return;
        }
        if (puVar1 != puVar5) {
          uVar2 = *puVar7;
          *puVar7 = *puVar1;
          *puVar1 = uVar2;
        }
        puVar6 = puVar5 + 1;
        uVar2 = *puVar7;
        *puVar7 = *puVar5;
        *puVar5 = uVar2;
        puVar1 = puVar1 + 1;
        local_48 = puVar6;
        puVar7 = puVar7 + 1;
      }
      else {
        puVar8 = puVar8 + -1;
        if (puVar5 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar8 != puVar7) {
            uVar2 = *puVar8;
            *puVar8 = *puVar7;
            *puVar7 = uVar2;
          }
          uVar2 = *puVar7;
          *puVar7 = puVar1[-1];
          puVar1[-1] = uVar2;
          puVar6 = puVar5;
          puVar1 = puVar1 + -1;
        }
        else {
          uVar2 = *puVar5;
          *puVar5 = *puVar8;
          puVar6 = puVar5 + 1;
          *puVar8 = uVar2;
          local_48 = puVar6;
        }
      }
      goto joined_r0x0001438f295b;
    }
    uVar2 = *puVar6;
    uVar3 = *puVar7;
    cVar4 = FUN_1438f3820(param_4,uVar3,uVar2);
    puVar5 = puVar1;
    if (cVar4 == '\0') {
      cVar4 = FUN_1438f3820(param_4,uVar2,uVar3);
      local_48 = puVar6;
      if (cVar4 != '\0') goto joined_r0x0001438f29b2;
      puVar5 = puVar1 + 1;
      if (puVar1 != puVar6) {
        uVar3 = *puVar1;
        *puVar1 = uVar2;
        *puVar6 = uVar3;
      }
    }
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    local_48 = puVar6;
  } while( true );
}



// FUNCTION 1438f2ac0 FUN_1438f2ac0 body=210 status=ok
// SIG undefined FUN_1438f2ac0(void)

void FUN_1438f2ac0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (longlong)(param_3 - 1) / 2;
  lVar4 = param_2;
  while (lVar4 < lVar3) {
    lVar1 = lVar4 * 2 + 2;
    cVar2 = FUN_1438f3820(param_5,*(undefined4 *)(param_1 + lVar1 * 4),
                          *(undefined4 *)(param_1 + 4 + lVar4 * 8));
    lVar5 = lVar4 * 2 + 1;
    if (cVar2 == '\0') {
      lVar5 = lVar1;
    }
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
    lVar4 = lVar5;
  }
  if ((lVar4 == lVar3) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar4 = param_3 - 1;
  }
  FUN_1438f2ba0(param_1,lVar4,param_2,param_4);
  return;
}



// FUNCTION 1438f2ba0 FUN_1438f2ba0 body=496 status=ok
// SIG undefined FUN_1438f2ba0(void)

void FUN_1438f2ba0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    lVar7 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + lVar7 * 4);
    lVar6 = (longlong)iVar1;
    lVar2 = *(longlong *)(*param_5 + 0x18);
    lVar3 = *(longlong *)(*param_5 + 0x28);
    lVar5 = (longlong)*param_4;
    fVar9 = *(float *)(lVar3 + 0x14);
    pfVar4 = (float *)param_5[1];
    fStack_44 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    local_48 = (float)*(undefined8 *)(lVar3 + 0x18);
    fVar8 = fVar9 * 0.5;
    fVar14 = ((float)*(int *)(lVar2 + 4 + lVar6 * 0xc) * fVar9 + fStack_44 + fVar8) - pfVar4[1];
    fVar13 = ((float)*(int *)(lVar2 + lVar6 * 0xc) * fVar9 + local_48 + fVar8) - *pfVar4;
    fVar12 = ((float)*(int *)(lVar2 + 8 + lVar6 * 0xc) * fVar9 + *(float *)(lVar3 + 0x20) + fVar8) -
             pfVar4[2];
    fVar9 = *(float *)(lVar3 + 0x14);
    fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    local_38 = (float)*(undefined8 *)(lVar3 + 0x18);
    fVar8 = fVar9 * 0.5;
    fVar11 = ((float)*(int *)(lVar2 + 4 + lVar5 * 0xc) * fVar9 + fStack_34 + fVar8) - pfVar4[1];
    fVar10 = ((float)*(int *)(lVar2 + lVar5 * 0xc) * fVar9 + local_38 + fVar8) - *pfVar4;
    fVar9 = ((float)*(int *)(lVar2 + 8 + lVar5 * 0xc) * fVar9 + *(float *)(lVar3 + 0x20) + fVar8) -
            pfVar4[2];
    if (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 <=
        fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = lVar7;
  } while (param_3 < lVar7);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}



// FUNCTION 1438f2d90 FUN_1438f2d90 body=169 status=ok
// SIG undefined FUN_1438f2d90(void)

undefined4 * FUN_1438f2d90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  if (param_1 != param_2) {
    do {
      puVar2 = puVar2 + -1;
      if (puVar3 == puVar2) break;
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
    } while (puVar3 != puVar2);
  }
  puVar2 = param_3;
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      puVar2 = puVar2 + -1;
      if (puVar3 == puVar2) break;
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
    } while (puVar3 != puVar2);
  }
  puVar2 = param_3;
  puVar3 = param_1;
  if (param_1 != param_3) {
    do {
      puVar2 = puVar2 + -1;
      if (puVar3 == puVar2) break;
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
    } while (puVar3 != puVar2);
  }
  return param_1 + ((longlong)param_3 - (longlong)param_2 >> 2);
}



// FUNCTION 1438f2e40 FUN_1438f2e40 body=146 status=ok
// SIG undefined FUN_1438f2e40(void)

void FUN_1438f2e40(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  if (1 < lVar1) {
    puVar2 = (undefined4 *)(param_2 + -4);
    if (lVar1 < 2) goto LAB_1438f2eaa;
    do {
      local_res8[0] = *puVar2;
      *puVar2 = *param_1;
      FUN_1438f2ac0(param_1,0,(longlong)puVar2 - (longlong)param_1 >> 2,local_res8,param_3);
LAB_1438f2eaa:
      puVar2 = puVar2 + -1;
    } while (1 < (4 - (longlong)param_1) + (longlong)puVar2 >> 2);
  }
  return;
}



// FUNCTION 1438f2ee0 FUN_1438f2ee0 body=274 status=ok
// SIG undefined FUN_1438f2ee0(void)

void FUN_1438f2ee0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_18;
  longlong local_10;
  
  lVar1 = param_2 - param_1;
  do {
    lVar1 = lVar1 >> 2;
    if (lVar1 < 0x21) {
LAB_1438f2fa5:
      if (1 < lVar1) {
        FUN_1438f25c0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_1438f26d0(param_1,param_2,param_4);
        FUN_1438f2e40(param_1,param_2,param_4);
        return;
      }
      goto LAB_1438f2fa5;
    }
    FUN_1438f2880(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)(local_18 - param_1 & 0xfffffffffffffffcU) <
        (longlong)(param_2 - local_10 & 0xfffffffffffffffcU)) {
      FUN_1438f2ee0(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_1438f2ee0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = param_2 - param_1;
  } while( true );
}



// FUNCTION 1438f3000 FUN_1438f3000 body=80 status=ok
// SIG undefined FUN_1438f3000(void)

undefined4 * FUN_1438f3000(ulonglong param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = (param_2 - param_1) + 3 >> 2;
  if (param_2 < param_1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    lVar1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(lVar1 + (longlong)param_3);
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return param_3;
}



// FUNCTION 1438f3050 FUN_1438f3050 body=59 status=ok
// SIG undefined FUN_1438f3050(void)

undefined4 * FUN_1438f3050(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)*param_1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 2);
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// FUNCTION 1438f3090 FUN_1438f3090 body=90 status=ok
// SIG undefined FUN_1438f3090(void)

undefined8 * FUN_1438f3090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined8 *)FUN_1438f6c90(param_1,0,0);
  *param_1 = puVar1;
  FUN_1438f2520(param_1,*puVar1,*(undefined8 *)*param_2,(undefined8 *)*param_2,0);
  return param_1;
}



// FUNCTION 1438f30f0 FUN_1438f30f0 body=177 status=ok
// SIG undefined FUN_1438f30f0(void)

longlong * FUN_1438f30f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = param_2[1] - *param_2 >> 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar3 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar3 = lVar3 * 4;
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = *param_1 + lVar3;
    local_res8 = SUB81(param_1,0);
    lVar3 = FUN_1438f3000(*param_2,param_2[1],*param_1,param_1,local_res8,local_res8,uVar4);
    param_1[1] = lVar3;
  }
  return param_1;
}



// FUNCTION 1438f31b0 FUN_1438f31b0 body=329 status=ok
// SIG undefined FUN_1438f31b0(void)

undefined8 *
FUN_1438f31b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::EncodedMapData::vftable;
  lVar2 = 4;
  lVar1 = 4;
  puVar3 = param_1 + 0x1d;
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 4;
  puVar3 = param_1 + 0x23;
  do {
    FUN_1438f8e80(puVar3);
    puVar3 = (undefined8 *)((longlong)puVar3 + 0xc4);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  puVar3 = param_1 + 0x85;
  do {
    FUN_1438f8e80(puVar3);
    puVar3 = (undefined8 *)((longlong)puVar3 + 0xc4);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar3 = param_1 + 0x129;
  *puVar3 = 0;
  param_1[0x12a] = 0;
  uVar4 = FUN_1438f6d00(puVar3,0,0,param_4,uVar4);
  *puVar3 = uVar4;
  *(undefined1 *)(param_1 + 299) = 1;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0x100;
  *(undefined4 *)(param_1 + 300) = 0x1000;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0x8000;
  *(undefined4 *)(param_1 + 0x12d) = 0x4000;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0x10000;
  *(undefined4 *)(param_1 + 0x12e) = 0x41900000;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  FUN_1438f73a0(param_1);
  return param_1;
}



// FUNCTION 1438f3300 FUN_1438f3300 body=106 status=ok
// SIG undefined FUN_1438f3300(void)

longlong FUN_1438f3300(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  lVar1 = param_1 + 0x3c;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  lVar2 = 4;
  do {
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    lVar1 = lVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1438f3370 FUN_1438f3370 body=138 status=ok
// SIG undefined FUN_1438f3370(void)

double * FUN_1438f3370(double *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  LARGE_INTEGER local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[9] = 0.0;
  QueryPerformanceFrequency(local_res18);
  *param_1 = (double)local_res18[0].QuadPart;
  QueryPerformanceCounter(local_res18);
  ((LARGE_INTEGER *)(param_1 + 1))->QuadPart = (LONGLONG)local_res18[0];
  FUN_1438f1f40(param_1 + 2,param_2,param_3,param_4,uVar2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return param_1;
}



// FUNCTION 1438f3400 FUN_1438f3400 body=44 status=ok
// SIG undefined FUN_1438f3400(void)

void FUN_1438f3400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  plVar2 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
  return;
}



// FUNCTION 1438f3430 FUN_1438f3430 body=53 status=ok
// SIG undefined FUN_1438f3430(void)

void FUN_1438f3430(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1438f79a0();
  uVar1 = *param_1;
  plVar2 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
  return;
}



// FUNCTION 1438f3470 FUN_1438f3470 body=82 status=ok
// SIG undefined FUN_1438f3470(void)

void FUN_1438f3470(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar2 != (longlong *)*param_1) {
    do {
      plVar2 = (longlong *)*plVar2;
      FMemory::operator_delete();
    } while (plVar2 != (longlong *)*param_1);
  }
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 1438f34d0 FUN_1438f34d0 body=58 status=ok
// SIG undefined FUN_1438f34d0(void)

void FUN_1438f34d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1438f3610(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 1438f3510 FUN_1438f3510 body=75 status=ok
// SIG undefined FUN_1438f3510(void)

void FUN_1438f3510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1438f3560 FUN_1438f3560 body=126 status=ok
// SIG undefined FUN_1438f3560(void)

void FUN_1438f3560(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = TritonRuntime::EncodedMapData::vftable;
  FUN_1438f73a0();
  plVar1 = (longlong *)param_1[0x129];
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(undefined8 *)(param_1[0x129] + 8) = param_1[0x129];
  param_1[0x12a] = 0;
  if (plVar2 != (longlong *)param_1[0x129]) {
    do {
      plVar2 = (longlong *)*plVar2;
      FMemory::operator_delete();
    } while (plVar2 != (longlong *)param_1[0x129]);
  }
  FMemory::operator_delete(param_1[0x129]);
  return;
}



// FUNCTION 1438f35e0 FUN_1438f35e0 body=46 status=ok
// SIG undefined FUN_1438f35e0(void)

void FUN_1438f35e0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase((undefined8 *)(param_1 + 8),local_res8,**(undefined8 **)(param_1 + 8),
          *(undefined8 **)(param_1 + 8));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1438f3610 FUN_1438f3610 body=135 status=ok
// SIG undefined FUN_1438f3610(void)

void FUN_1438f3610(double *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  double *pdVar2;
  float local_res8 [2];
  LARGE_INTEGER local_res10 [3];
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1[9] != 0.0) {
    QueryPerformanceCounter(local_res10);
    local_res8[0] = (float)((double)(local_res10[0].QuadPart - (longlong)param_1[1]) / *param_1);
    plVar1 = (longlong *)param_1[9];
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,local_res8);
  }
  pdVar2 = (double *)param_1[9];
  if (pdVar2 != (double *)0x0) {
    (**(code **)((longlong)*pdVar2 + 0x20))(pdVar2,pdVar2 != param_1 + 2,param_3,param_4,uVar3);
    param_1[9] = 0.0;
  }
  return;
}



// FUNCTION 1438f36a0 FUN_1438f36a0 body=44 status=ok
// SIG undefined FUN_1438f36a0(void)

void FUN_1438f36a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*plVar1,param_4,uVar2);
  return;
}



// FUNCTION 1438f36d0 FUN_1438f36d0 body=336 status=ok
// SIG undefined FUN_1438f36d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f36d0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108 [4];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)*param_1;
  if (lVar1 != 0) {
    FUN_1438f9530(lVar1,local_f8);
    iVar7 = 0;
    iVar5 = CCallbackImpl<16>::GetCallbackSizeBytes(local_f8);
    if (0 < iVar5) {
      do {
        uVar6 = FUN_1438f9380(local_f8,iVar7);
        if ((uVar6 & 0xfffffffd) == 0) goto LAB_1438f375c;
        iVar7 = iVar7 + 1;
        iVar5 = CCallbackImpl<16>::GetCallbackSizeBytes(local_f8);
      } while (iVar7 < iVar5);
    }
  }
  if (lVar1 == 0) {
LAB_1438f375c:
    puVar2 = *(ulonglong **)(param_1[1] + 0x38);
    if ((ulonglong)((longlong)(puVar2[1] - *puVar2) >> 2) < 100000) {
      puVar3 = (undefined4 *)puVar2[1];
      local_108[0] = param_2;
      if ((local_108 < puVar3) && (puVar4 = (undefined4 *)*puVar2, puVar4 <= local_108)) {
        if (puVar3 == (undefined4 *)puVar2[2]) {
          FUN_1438f7320(puVar2,1);
        }
        puVar3 = (undefined4 *)puVar2[1];
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(*puVar2 + ((longlong)local_108 - (longlong)puVar4 >> 2) * 4);
        }
      }
      else {
        if (puVar3 == (undefined4 *)puVar2[2]) {
          FUN_1438f7320(puVar2,1);
        }
        puVar3 = (undefined4 *)puVar2[1];
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = param_2;
        }
      }
      puVar2[1] = (ulonglong)(puVar3 + 1);
    }
  }
  return;
}



// FUNCTION 1438f3820 FUN_1438f3820 body=335 status=ok
// SIG undefined FUN_1438f3820(void)

undefined8 FUN_1438f3820(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float fStack_34;
  
  lVar4 = (longlong)param_2;
  lVar1 = *(longlong *)(*param_1 + 0x18);
  lVar2 = *(longlong *)(*param_1 + 0x28);
  lVar5 = (longlong)param_3;
  fVar7 = *(float *)(lVar2 + 0x14);
  fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  fVar6 = fVar7 * 0.5;
  local_38 = (float)*(undefined8 *)(lVar2 + 0x18);
  pfVar3 = (float *)param_1[1];
  fVar12 = ((float)*(int *)(lVar1 + 4 + lVar4 * 0xc) * fVar7 + fStack_34 + fVar6) - pfVar3[1];
  fVar11 = ((float)*(int *)(lVar1 + lVar4 * 0xc) * fVar7 + local_38 + fVar6) - *pfVar3;
  fVar10 = ((float)*(int *)(lVar1 + 8 + lVar4 * 0xc) * fVar7 + *(float *)(lVar2 + 0x20) + fVar6) -
           pfVar3[2];
  fVar7 = *(float *)(lVar2 + 0x14);
  fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  local_38 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar6 = fVar7 * 0.5;
  fVar9 = ((float)*(int *)(lVar1 + 4 + lVar5 * 0xc) * fVar7 + fStack_34 + fVar6) - pfVar3[1];
  fVar8 = ((float)*(int *)(lVar1 + lVar5 * 0xc) * fVar7 + local_38 + fVar6) - *pfVar3;
  fVar7 = ((float)*(int *)(lVar1 + 8 + lVar5 * 0xc) * fVar7 + *(float *)(lVar2 + 0x20) + fVar6) -
          pfVar3[2];
  return CONCAT71((int7)((ulonglong)pfVar3 >> 8),
                  fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 <
                  fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
}



// FUNCTION 1438f3970 FUN_1438f3970 body=93 status=ok
// SIG undefined FUN_1438f3970(void)

undefined8 FUN_1438f3970(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1438f3560();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*plVar1,param_4,uVar2);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x978);
    }
  }
  return param_1;
}



// FUNCTION 1438f39d0 FUN_1438f39d0 body=557 status=ok
// SIG undefined FUN_1438f39d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1438f39d0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [2];
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [56];
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined ***local_50;
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar4 = 0;
  local_d8 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_e8 = &stack0x00000030;
    local_88 = std::
               _Func_impl<<lambda_49fb250adb3992cd52591209442241d9>,TritonRuntime::TAlloc<char>,void,float>
               ::vftable;
    uStack_e0._0_4_ = (undefined4)param_1;
    uStack_e0._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_78 = (undefined4)uStack_e0;
    uStack_74 = uStack_e0._4_4_;
    local_50 = &local_88;
    uStack_e0 = param_1;
    local_80 = local_e8;
    plVar3 = (longlong *)FUN_1438f1790();
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3,0x50);
    local_118 = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      local_f8 = local_c8;
      local_90 = 0;
      if (local_50 != (undefined ***)0x0) {
        local_90 = (*(code *)**local_50)(local_50,local_c8);
      }
      lVar4 = FUN_1438f3370(lVar4,local_c8);
    }
    local_d8 = lVar4;
    if (local_50 != (undefined ***)0x0) {
      (*(code *)(*local_50)[4])
                (local_50,CONCAT71((int7)((ulonglong)&local_88 >> 8),local_50 != &local_88));
    }
  }
  uVar7 = (undefined4)*param_2;
  uVar8 = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_108[0] = *param_3;
  local_110 = (int)param_2[1];
  uVar6 = (int)param_3[1];
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar7 = (undefined4)local_108[0];
    uVar8 = (undefined4)((ulonglong)local_108[0] >> 0x20);
    local_108[0] = *param_2;
    uVar6 = (undefined4)param_2[1];
    local_110 = (int)param_3[1];
  }
  local_118 = CONCAT44(uVar8,uVar7);
  puVar5 = (undefined8 *)FUN_1438f6b30(param_1,&local_e8,&local_118);
  local_f8 = (undefined1 *)*puVar5;
  uVar7 = *(undefined4 *)(puVar5 + 1);
  local_118 = local_108[0];
  local_110 = uVar6;
  plVar3 = (longlong *)FUN_1438f6b30(param_1,&local_e8,&local_118);
  local_118 = *plVar3;
  lVar1 = plVar3[1];
  local_130 = 0;
  local_138 = 0;
  local_f0 = uVar7;
  FUN_1438f5e40(param_1,0,&local_f8,local_108);
  local_120 = 0;
  local_128 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  local_138 = param_5;
  local_110 = (int)lVar1;
  uVar2 = FUN_1438f3c00(param_1,0,&local_118,param_4);
  if (lVar4 != 0) {
    FUN_1438f3610(lVar4);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
  }
  return uVar2;
}



// FUNCTION 1438f3c00 FUN_1438f3c00 body=1137 status=ok
// SIG undefined FUN_1438f3c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1438f3c00(longlong param_1,uint param_2,longlong *param_3,longlong param_4,
                       undefined1 param_5,undefined1 param_6,char param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined1 local_440;
  undefined1 local_438;
  undefined8 local_430;
  int local_428;
  float *local_420;
  char local_418;
  char local_417;
  float local_414;
  int local_410;
  uint local_40c;
  undefined8 local_408;
  longlong local_3f8;
  undefined4 local_3f0;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined1 local_3d8 [24];
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  float local_1f8 [96];
  ulonglong local_78;
  
  local_3c0 = 0xfffffffffffffffe;
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  local_408 = param_8;
  if (param_2 < 4) {
    puVar4 = (undefined8 *)(param_1 + 0x118 + (longlong)(int)param_2 * 0xc4);
    local_398 = *puVar4;
    uStack_390 = puVar4[1];
    local_388 = puVar4[2];
    uStack_380 = puVar4[3];
    local_378 = puVar4[4];
    uStack_370 = puVar4[5];
    local_368 = puVar4[6];
    uStack_360 = puVar4[7];
    local_358 = puVar4[8];
    uStack_350 = puVar4[9];
    local_348 = puVar4[10];
    uStack_340 = puVar4[0xb];
    local_338 = puVar4[0xc];
    uStack_330 = puVar4[0xd];
    local_328 = puVar4[0xe];
    uStack_320 = puVar4[0xf];
    local_318 = puVar4[0x10];
    uStack_310 = puVar4[0x11];
    local_308 = puVar4[0x12];
    uStack_300 = puVar4[0x13];
    local_2f8 = puVar4[0x14];
    uStack_2f0 = puVar4[0x15];
    local_2e8 = *(undefined4 *)(puVar4 + 0x16);
    uStack_2e4 = *(undefined4 *)((longlong)puVar4 + 0xb4);
    uStack_2e0 = *(undefined4 *)(puVar4 + 0x17);
    uStack_2dc = *(undefined4 *)((longlong)puVar4 + 0xbc);
    local_2d8 = *(undefined4 *)(puVar4 + 0x18);
    local_40c = param_2;
    local_3f8 = param_4;
    local_78 = uVar3;
    if (param_7 != '\0') {
      puVar4 = (undefined8 *)(param_1 + 0x428 + (longlong)(int)param_2 * 0xc4);
      local_2c8 = *puVar4;
      uStack_2c0 = puVar4[1];
      local_2b8 = puVar4[2];
      uStack_2b0 = puVar4[3];
      local_2a8 = puVar4[4];
      uStack_2a0 = puVar4[5];
      local_298 = puVar4[6];
      uStack_290 = puVar4[7];
      local_288 = puVar4[8];
      uStack_280 = puVar4[9];
      local_278 = puVar4[10];
      uStack_270 = puVar4[0xb];
      local_268 = puVar4[0xc];
      uStack_260 = puVar4[0xd];
      local_258 = puVar4[0xe];
      uStack_250 = puVar4[0xf];
      local_248 = puVar4[0x10];
      uStack_240 = puVar4[0x11];
      local_238 = puVar4[0x12];
      uStack_230 = puVar4[0x13];
      local_228 = *(undefined4 *)(puVar4 + 0x14);
      uStack_224 = *(undefined4 *)((longlong)puVar4 + 0xa4);
      uStack_220 = *(undefined4 *)(puVar4 + 0x15);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xac);
      local_218 = *(undefined4 *)(puVar4 + 0x16);
      uStack_214 = *(undefined4 *)((longlong)puVar4 + 0xb4);
      uStack_210 = *(undefined4 *)(puVar4 + 0x17);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xbc);
      local_208 = *(undefined4 *)(puVar4 + 0x18);
      iVar2 = FUN_1438f9030(&local_2c8);
      if (0 < iVar2) {
        local_3f8 = *param_3;
        local_3f0 = (undefined4)param_3[1];
        local_448 = param_8;
        uVar3 = FUN_1438f4080(param_1,param_2,&local_3f8,param_4);
        return uVar3;
      }
    }
    iVar2 = FUN_1438f9030(&local_398);
    iVar7 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    local_417 = '\0';
    local_418 = '\0';
    lVar6 = 6;
    pfVar5 = local_1f8;
    do {
      pfVar5[0] = 0.0;
      pfVar5[1] = 0.0;
      pfVar5[2] = 0.0;
      pfVar5[3] = 0.0;
      pfVar5[4] = 0.0;
      pfVar5[5] = 0.0;
      pfVar5[6] = 0.0;
      pfVar5[7] = 0.0;
      pfVar5[8] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[0xb] = 0.0;
      pfVar5[0xc] = 0.0;
      pfVar5[0xd] = 0.0;
      pfVar5[0xe] = 0.0;
      pfVar5[0xf] = 0.0;
      lVar6 = lVar6 + -1;
      pfVar5 = pfVar5 + 0x10;
    } while (lVar6 != 0);
    lVar6 = (longlong)iVar2;
    if (0 < iVar2) {
      pfVar5 = local_1f8;
      do {
        iVar2 = FUN_1438f9370(&local_398,iVar7);
        if ((*(int *)(param_1 + 0x48) < 0) || (iVar2 < *(int *)(param_1 + 0x48))) {
          local_448 = CONCAT71(local_448._1_7_,*(undefined1 *)(param_1 + 0x958));
          FUN_1439098c0(*(undefined8 *)(param_1 + 0x30),local_3d8,iVar2,&local_410);
          if (local_410 == 0) {
            local_414 = 0.0;
            uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                    ::GetBoundProgramCounterForTimerManager(local_3d8);
            local_420 = &local_414;
            local_430 = local_408;
            local_438 = param_6;
            local_440 = param_5;
            local_448 = CONCAT44(local_448._4_4_,iVar2);
            local_428 = iVar7;
            cVar1 = FUN_143905390(uVar8,*(undefined8 *)(param_1 + 0x20),param_3,
                                  local_1f8 + (longlong)iVar7 * 6);
            if (0.0 < local_414) {
              if (local_418 == '\0') {
                local_418 = '\x01';
                local_3e8 = *param_3;
                local_3e0 = (undefined4)param_3[1];
                local_448 = local_408;
                local_417 = FUN_1438f4080(param_1,local_40c,&local_3e8,&local_3b8);
              }
              if (local_417 != '\0') {
                fVar10 = ((float)local_3b8 - *pfVar5) * local_414;
                fVar9 = *pfVar5 + fVar10;
                *pfVar5 = fVar9;
                pfVar5[1] = fVar10 + pfVar5[1];
                if (fVar10 < 0.0) {
                  *pfVar5 = fVar10 * 0.5 + fVar9;
                  pfVar5[2] = pfVar5[2] - fVar10 * 0.5;
                }
              }
            }
            if (cVar1 == '\0') {
              uVar8 = 6;
              goto LAB_1438f3fc5;
            }
          }
          else {
            uVar8 = 7;
LAB_1438f3fc5:
            FUN_1438f94f0(&local_398,iVar7,uVar8);
          }
          FUN_14390a6c0(local_3d8);
        }
        iVar7 = iVar7 + 1;
        pfVar5 = pfVar5 + 6;
        lVar6 = lVar6 + -1;
        param_8 = local_408;
        param_4 = local_3f8;
      } while (lVar6 != 0);
    }
    local_448 = param_8;
    uVar3 = FUN_1438f6d60(param_1,&local_398,local_1f8,param_4);
    if ((char)uVar3 != '\0') {
      fVar9 = _guard_xfg_dispatch_icall_nop(1.05,*(float *)(param_4 + 0xc));
      *(float *)(param_4 + 0xc) = fVar9;
      lVar6 = *(longlong *)(param_1 + 0x28);
      *(float *)(param_4 + 0xc) = fVar9 / *(float *)(lVar6 + 0x30);
      return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1438f4080 FUN_1438f4080 body=533 status=ok
// SIG undefined FUN_1438f4080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1438f4080(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  int local_2d8 [2];
  undefined1 local_2d0 [24];
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined8 local_1d8 [48];
  ulonglong local_58;
  
  local_2b8 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  if (param_2 < 4) {
    puVar4 = (undefined8 *)(param_1 + 0x428 + (longlong)(int)param_2 * 0xc4);
    local_2a8 = *puVar4;
    uStack_2a0 = puVar4[1];
    local_298 = puVar4[2];
    uStack_290 = puVar4[3];
    local_288 = puVar4[4];
    uStack_280 = puVar4[5];
    local_278 = puVar4[6];
    uStack_270 = puVar4[7];
    local_268 = puVar4[8];
    uStack_260 = puVar4[9];
    local_258 = puVar4[10];
    uStack_250 = puVar4[0xb];
    local_248 = puVar4[0xc];
    uStack_240 = puVar4[0xd];
    local_238 = puVar4[0xe];
    uStack_230 = puVar4[0xf];
    local_228 = puVar4[0x10];
    uStack_220 = puVar4[0x11];
    local_218 = puVar4[0x12];
    uStack_210 = puVar4[0x13];
    local_208 = *(undefined4 *)(puVar4 + 0x14);
    uStack_204 = *(undefined4 *)((longlong)puVar4 + 0xa4);
    uStack_200 = *(undefined4 *)(puVar4 + 0x15);
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xac);
    local_1f8 = *(undefined4 *)(puVar4 + 0x16);
    uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 0xb4);
    uStack_1f0 = *(undefined4 *)(puVar4 + 0x17);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xbc);
    local_1e8 = *(undefined4 *)(puVar4 + 0x18);
    iVar2 = FUN_1438f9030(&local_2a8);
    iVar6 = 0;
    lVar5 = 6;
    puVar4 = local_1d8;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 8;
    } while (lVar5 != 0);
    if (0 < iVar2) {
      puVar4 = local_1d8;
      do {
        uVar3 = FUN_1438f9370(&local_2a8,iVar6);
        local_2e8 = CONCAT71(local_2e8._1_7_,*(undefined1 *)(param_1 + 0x958));
        FUN_1439098c0(*(undefined8 *)(param_1 + 0x30),local_2d0,uVar3,local_2d8);
        if (local_2d8[0] == 0) {
          uVar7 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(local_2d0);
          local_2e8 = CONCAT44(local_2e8._4_4_,uVar3);
          cVar1 = FUN_143904a70(uVar7,*(undefined8 *)(param_1 + 0x20),param_3,puVar4);
          if (cVar1 == '\0') {
            uVar7 = 6;
            goto LAB_1438f4229;
          }
        }
        else {
          uVar7 = 7;
LAB_1438f4229:
          FUN_1438f94f0(&local_2a8,iVar6,uVar7);
        }
        FUN_14390a6c0(local_2d0);
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar6 < iVar2);
    }
    local_2e8 = param_5;
    cVar1 = FUN_1438f6d60(param_1,&local_2a8,local_1d8,param_4);
    bVar8 = cVar1 != '\0';
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}



// FUNCTION 1438f42a0 FUN_1438f42a0 body=706 status=ok
// SIG undefined FUN_1438f42a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1438f42a0(float *param_1,float *param_2)

{
  float fVar1;
  uint7 uVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_e8;
  float fStack_e4;
  float local_d8 [10];
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)&local_e8;
  pfVar4 = local_d8;
  lVar3 = 0;
  local_d8[0] = 1.0;
  local_d8[1] = 0.0;
  local_d8[2] = 0.0;
  local_d8[3] = 0.0;
  local_d8[8] = 1.0;
  local_d8[4] = 1.0;
  local_d8[5] = 0.0;
  local_d8[6] = 0.0;
  local_d8[7] = 0.0;
  do {
    fVar1 = pfVar4[2];
    local_e8 = (float)*(undefined8 *)pfVar4;
    fStack_e4 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
    fVar5 = 1.0 / (local_e8 * param_1[0xc] + 0.0 + fStack_e4 * param_1[0xd] + fVar1 * param_1[0xe] +
                  param_1[0xf]);
    fVar10 = (local_e8 * *param_1 + 0.0 + fStack_e4 * param_1[1] + param_1[2] * fVar1 + param_1[3])
             * fVar5;
    fVar9 = (local_e8 * param_1[8] + 0.0 + fStack_e4 * param_1[9] + fVar1 * param_1[10] +
            param_1[0xb]) * fVar5;
    fVar5 = (param_1[4] * local_e8 + 0.0 + param_1[5] * fStack_e4 + param_1[6] * fVar1 + param_1[7])
            * fVar5;
    fVar6 = 1.0 / (fVar10 * param_2[0xc] + 0.0 + fVar5 * param_2[0xd] + fVar9 * param_2[0xe] +
                  param_2[0xf]);
    fVar7 = (fVar10 * param_2[4] + 0.0 + fVar5 * param_2[5] + fVar9 * param_2[6] + param_2[7]) *
            fVar6 - pfVar4[1];
    fVar8 = (*param_2 * fVar10 + 0.0 + param_2[1] * fVar5 + fVar9 * param_2[2] + param_2[3]) * fVar6
            - *pfVar4;
    fVar5 = (fVar10 * param_2[8] + 0.0 + fVar5 * param_2[9] + fVar9 * param_2[10] + param_2[0xb]) *
            fVar6 - pfVar4[2];
    uVar2 = (uint7)(uint3)((uint)fVar1 >> 8);
    if (0.01 < fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5) {
      return (ulonglong)uVar2 << 8;
    }
    lVar3 = lVar3 + 1;
    pfVar4 = pfVar4 + 3;
  } while (lVar3 < 3);
  return CONCAT71(uVar2,1);
}



// FUNCTION 1438f4570 FUN_1438f4570 body=108 status=ok
// SIG undefined FUN_1438f4570(void)

int FUN_1438f4570(longlong param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (*(longlong *)(param_1 + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FRollingHash::GetWindowSize();
    }
    if (param_2 < iVar1) {
      if ((-1 < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= param_2)) {
        return param_2;
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        return *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 4);
      }
    }
  }
  return -1;
}



// FUNCTION 1438f45e0 FUN_1438f45e0 body=155 status=ok
// SIG undefined FUN_1438f45e0(void)

void FUN_1438f45e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_4 != 0) {
    FUN_1438f9640(param_4);
  }
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  puVar1 = (undefined8 *)FUN_1438f6b30(param_1,local_18,&local_28);
  local_28 = *puVar1;
  local_20 = *(undefined4 *)(puVar1 + 1);
  FUN_1438f5e40(param_1,0,&local_28,local_res10,0,0);
  FUN_1438f4680(param_1,0,param_3,0);
  return;
}



// FUNCTION 1438f4680 FUN_1438f4680 body=1869 status=ok
// SIG undefined FUN_1438f4680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438f4680(longlong param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_ba8 [32];
  undefined1 local_b88;
  undefined8 local_b78;
  float local_b70;
  undefined8 *local_b68;
  longlong local_b60;
  undefined8 local_b58;
  float local_b50;
  float *local_b48;
  longlong local_b40;
  undefined8 *local_b38;
  undefined8 local_b28;
  float local_b20;
  undefined1 local_b18 [8];
  float local_b10;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  float local_a78 [32];
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  undefined8 local_948;
  undefined8 uStack_940;
  undefined4 local_938;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined1 local_918 [16];
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  float local_8f8 [512];
  ulonglong local_f8;
  ulonglong uVar13;
  
  local_b00 = 0xfffffffffffffffe;
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_ba8;
  if (param_2 < 4) {
    lVar17 = (longlong)(int)param_2;
    puVar11 = (undefined8 *)(param_1 + 0x118 + lVar17 * 0xc4);
    local_9f8 = *puVar11;
    uStack_9f0 = puVar11[1];
    local_9e8 = puVar11[2];
    uStack_9e0 = puVar11[3];
    local_9d8 = puVar11[4];
    uStack_9d0 = puVar11[5];
    local_9c8 = puVar11[6];
    uStack_9c0 = puVar11[7];
    local_9b8 = puVar11[8];
    uStack_9b0 = puVar11[9];
    local_9a8 = puVar11[10];
    uStack_9a0 = puVar11[0xb];
    local_998 = puVar11[0xc];
    uStack_990 = puVar11[0xd];
    local_988 = puVar11[0xe];
    uStack_980 = puVar11[0xf];
    local_978 = puVar11[0x10];
    uStack_970 = puVar11[0x11];
    local_968 = puVar11[0x12];
    uStack_960 = puVar11[0x13];
    local_958 = *(undefined1 (*) [16])(puVar11 + 0x14);
    local_948 = puVar11[0x16];
    uStack_940 = puVar11[0x17];
    local_938 = *(undefined4 *)(puVar11 + 0x18);
    local_b78 = *(undefined8 *)(param_1 + 0xe8 + lVar17 * 0xc);
    local_b70 = *(float *)(param_1 + 0xf0 + lVar17 * 0xc);
    local_b40 = param_1;
    local_b38 = param_3;
    iVar6 = FUN_1438f9030(&local_9f8);
    uVar21 = 0;
    local_b60 = (longlong)iVar6;
    if (0 < iVar6) {
      pfVar15 = local_8f8;
      lVar17 = (longlong)iVar6;
      uVar16 = uVar21;
      do {
        uVar7 = FUN_1438f9370(&local_9f8,uVar16);
        local_b88 = *(undefined1 *)(param_1 + 0x958);
        FUN_1439098c0(*(undefined8 *)(param_1 + 0x30),local_b18,uVar7,&local_b68);
        if ((int)local_b68 == 0) {
          uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(local_b18);
          puVar11 = (undefined8 *)FUN_143905db0(uVar8);
          uVar8 = puVar11[1];
          *(undefined8 *)pfVar15 = *puVar11;
          *(undefined8 *)(pfVar15 + 2) = uVar8;
          uVar8 = puVar11[3];
          *(undefined8 *)(pfVar15 + 4) = puVar11[2];
          *(undefined8 *)(pfVar15 + 6) = uVar8;
          uVar8 = puVar11[5];
          *(undefined8 *)(pfVar15 + 8) = puVar11[4];
          *(undefined8 *)(pfVar15 + 10) = uVar8;
          uVar8 = puVar11[7];
          *(undefined8 *)(pfVar15 + 0xc) = puVar11[6];
          *(undefined8 *)(pfVar15 + 0xe) = uVar8;
          uVar8 = puVar11[9];
          *(undefined8 *)(pfVar15 + 0x10) = puVar11[8];
          *(undefined8 *)(pfVar15 + 0x12) = uVar8;
          uVar8 = puVar11[0xb];
          *(undefined8 *)(pfVar15 + 0x14) = puVar11[10];
          *(undefined8 *)(pfVar15 + 0x16) = uVar8;
          fVar2 = *(float *)((longlong)puVar11 + 100);
          fVar4 = *(float *)(puVar11 + 0xd);
          fVar5 = *(float *)((longlong)puVar11 + 0x6c);
          pfVar15[0x18] = *(float *)(puVar11 + 0xc);
          pfVar15[0x19] = fVar2;
          pfVar15[0x1a] = fVar4;
          pfVar15[0x1b] = fVar5;
          *(undefined1 (*) [16])(pfVar15 + 0x1c) = *(undefined1 (*) [16])(puVar11 + 0xe);
        }
        else {
          FUN_1438f94f0(&local_9f8,uVar16,7);
        }
        FUN_14390a6c0(local_b18);
        uVar16 = (ulonglong)((int)uVar16 + 1);
        pfVar15 = pfVar15 + 0x20;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    lVar17 = local_b60;
    iVar6 = FUN_1438f9030(&local_9f8);
    if (iVar6 != 0) {
      if (param_4 != 0) {
        FUN_1438f9650(param_4);
      }
      _guard_xfg_dispatch_icall_nop(&local_af8,0,0x80);
      _guard_xfg_dispatch_icall_nop(local_a78,0,0x80);
      fVar2 = local_b70;
      lVar20 = 4;
      if (0 < lVar17) {
        pfVar15 = local_8f8;
        fVar5 = local_b78._4_4_;
        fVar4 = (float)local_b78;
        uVar16 = uVar21;
        do {
          lVar20 = 4;
          local_b48 = pfVar15;
          iVar6 = FUN_1438f9380(&local_9f8,uVar16);
          if (iVar6 == 0) {
            local_928 = 0x3f800000;
            uStack_920 = 0xbf80000000000000;
            local_918 = _DAT_143f39ae0;
            local_908 = 0;
            uStack_904 = 0;
            uStack_900 = 0xbf800000;
            uStack_8fc = 0;
            puVar11 = &local_928;
            local_b78 = 4;
            uVar18 = uVar21;
            uVar19 = uVar21;
            local_b68 = puVar11;
            do {
              do {
                fVar24 = *pfVar15;
                if ((0.0 < fVar24) && (fVar1 = pfVar15[1], 0.0 < fVar1)) {
                  iVar6 = FUN_1438f9370(&local_9f8,uVar16);
                  lVar12 = (longlong)iVar6;
                  lVar17 = *(longlong *)(local_b40 + 0x18);
                  lVar3 = *(longlong *)(local_b40 + 0x28);
                  uVar8 = *(undefined8 *)(lVar3 + 0x18);
                  local_b50 = *(float *)(lVar3 + 0x20);
                  fVar23 = *(float *)(lVar3 + 0x14);
                  local_b58._0_4_ = (float)uVar8;
                  local_b58._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
                  fVar22 = fVar23 * 0.5;
                  local_b20 = fVar2 - ((float)*(int *)(lVar17 + 8 + lVar12 * 0xc) * fVar23 +
                                       local_b50 + fVar22);
                  local_b28 = CONCAT44(fVar5 - ((float)*(int *)(lVar17 + 4 + lVar12 * 0xc) * fVar23
                                                + local_b58._4_4_ + fVar22),
                                       fVar4 - ((float)*(int *)(lVar17 + lVar12 * 0xc) * fVar23 +
                                                (float)local_b58 + fVar22));
                  local_b58 = uVar8;
                  local_b10 = local_b20;
                  fVar23 = (float)FUN_1438f8df0(puVar11,&local_b28);
                  fVar24 = fVar24 * 343.0 - (fVar23 + fVar23);
                  uVar9 = uVar19;
                  uVar13 = uVar21;
                  uVar14 = uVar21;
                  do {
                    if ((*(float *)((longlong)&local_af8 + uVar9) == 0.0) ||
                       (ABS(*(float *)((longlong)&local_af8 + uVar9) /
                            *(float *)((longlong)local_a78 + uVar9) - fVar24) < 2.0)) {
                      if (-1 < (longlong)uVar14) {
                        lVar17 = uVar14 + uVar18;
                        fVar23 = (float)FUN_1438f9390(&local_9f8,uVar16);
                        *(float *)(&local_af8 + lVar17) =
                             fVar23 * fVar24 + *(float *)(&local_af8 + lVar17);
                        fVar24 = (float)FUN_1438f9390(&local_9f8,uVar16);
                        local_a78[lVar17 * 2] = fVar24 + local_a78[lVar17 * 2];
                        fVar24 = (float)FUN_1438f9390(&local_9f8,uVar16);
                        *(float *)((longlong)&local_af8 + lVar17 * 8 + 4) =
                             fVar24 * fVar1 + *(float *)((longlong)&local_af8 + lVar17 * 8 + 4);
                        puVar11 = local_b68;
                      }
                      break;
                    }
                    uVar10 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar10;
                    uVar14 = uVar14 + 1;
                    uVar9 = uVar9 + 8;
                  } while ((int)uVar10 < 4);
                }
                pfVar15 = pfVar15 + 2;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
              uVar18 = uVar18 + 4;
              uVar19 = uVar19 + 0x20;
              local_b78 = local_b78 + -1;
              lVar20 = 4;
              local_b68 = puVar11;
            } while (local_b78 != 0);
            local_b78 = 0;
            lVar17 = local_b60;
            pfVar15 = local_b48;
          }
          lVar20 = 4;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          pfVar15 = pfVar15 + 0x20;
          lVar17 = lVar17 + -1;
          param_3 = local_b38;
          param_1 = local_b40;
          local_b60 = lVar17;
        } while (lVar17 != 0);
      }
      do {
        if (0.0 < *(float *)((longlong)local_a78 + uVar21)) {
          *(float *)((longlong)&local_af8 + uVar21) =
               (*(float *)((longlong)&local_af8 + uVar21) / *(float *)((longlong)local_a78 + uVar21)
               ) / 343.0;
        }
        fVar2 = *(float *)((longlong)local_a78 + uVar21 + 8);
        if (0.0 < fVar2) {
          *(float *)((longlong)&uStack_af0 + uVar21) =
               (*(float *)((longlong)&uStack_af0 + uVar21) / fVar2) / 343.0;
        }
        fVar2 = *(float *)((longlong)local_a78 + uVar21 + 0x10);
        if (0.0 < fVar2) {
          *(float *)((longlong)&local_ae8 + uVar21) =
               (*(float *)((longlong)&local_ae8 + uVar21) / fVar2) / 343.0;
        }
        fVar2 = *(float *)((longlong)local_a78 + uVar21 + 0x18);
        if (0.0 < fVar2) {
          *(float *)((longlong)&uStack_ae0 + uVar21) =
               (*(float *)((longlong)&uStack_ae0 + uVar21) / fVar2) / 343.0;
        }
        uVar21 = uVar21 + 0x20;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      *(undefined8 *)(param_1 + 0x748) = local_af8;
      *(undefined8 *)(param_1 + 0x750) = uStack_af0;
      *(undefined8 *)(param_1 + 0x758) = local_ae8;
      *(undefined8 *)(param_1 + 0x760) = uStack_ae0;
      *(undefined8 *)(param_1 + 0x768) = local_ad8;
      *(undefined8 *)(param_1 + 0x770) = uStack_ad0;
      *(undefined8 *)(param_1 + 0x778) = local_ac8;
      *(undefined8 *)(param_1 + 0x780) = uStack_ac0;
      *(undefined8 *)(param_1 + 0x788) = local_ab8;
      *(undefined8 *)(param_1 + 0x790) = uStack_ab0;
      *(undefined8 *)(param_1 + 0x798) = local_aa8;
      *(undefined8 *)(param_1 + 0x7a0) = uStack_aa0;
      *(undefined8 *)(param_1 + 0x7a8) = local_a98;
      *(undefined8 *)(param_1 + 0x7b0) = uStack_a90;
      *(undefined8 *)(param_1 + 0x7b8) = local_a88;
      *(undefined8 *)(param_1 + 0x7c0) = uStack_a80;
      *param_3 = local_af8;
      param_3[1] = uStack_af0;
      param_3[2] = local_ae8;
      param_3[3] = uStack_ae0;
      param_3[4] = local_ad8;
      param_3[5] = uStack_ad0;
      param_3[6] = local_ac8;
      param_3[7] = uStack_ac0;
      param_3[8] = local_ab8;
      param_3[9] = uStack_ab0;
      param_3[10] = local_aa8;
      param_3[0xb] = uStack_aa0;
      param_3[0xc] = local_a98;
      param_3[0xd] = uStack_a90;
      param_3[0xe] = local_a88;
      param_3[0xf] = uStack_a80;
      return 1;
    }
    if (param_4 != 0) {
      FUN_1438f95c0(param_4,2,
                    L"Outdoorness compute failed for all probes. Returning last known good.");
    }
    uVar8 = *(undefined8 *)(param_1 + 0x750);
    *param_3 = *(undefined8 *)(param_1 + 0x748);
    param_3[1] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x760);
    param_3[2] = *(undefined8 *)(param_1 + 0x758);
    param_3[3] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x770);
    param_3[4] = *(undefined8 *)(param_1 + 0x768);
    param_3[5] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x780);
    param_3[6] = *(undefined8 *)(param_1 + 0x778);
    param_3[7] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x790);
    param_3[8] = *(undefined8 *)(param_1 + 0x788);
    param_3[9] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x7a0);
    param_3[10] = *(undefined8 *)(param_1 + 0x798);
    param_3[0xb] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x7b0);
    param_3[0xc] = *(undefined8 *)(param_1 + 0x7a8);
    param_3[0xd] = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x7c0);
    param_3[0xe] = *(undefined8 *)(param_1 + 0x7b8);
    param_3[0xf] = uVar8;
  }
                    /* WARNING: Read-only address (ram,0x000143f39ae0) is written */
  return 0;
}



// FUNCTION 1438f4dd0 FUN_1438f4dd0 body=95 status=ok
// SIG undefined FUN_1438f4dd0(void)

undefined8 FUN_1438f4dd0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) < 0) {
    *param_3 = 0;
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    *param_3 = -iVar1;
    return CONCAT71((uint7)(uint3)((uint)-iVar1 >> 8),1);
  }
  iVar1 = FRollingHash::GetWindowSize();
  iVar1 = iVar1 - *(int *)(param_1 + 0x48);
  *param_3 = iVar1;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 1438f4e30 FUN_1438f4e30 body=155 status=ok
// SIG undefined FUN_1438f4e30(void)

void FUN_1438f4e30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_4 != 0) {
    FUN_1438f9640(param_4);
  }
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  puVar1 = (undefined8 *)FUN_1438f6b30(param_1,local_18,&local_28);
  local_28 = *puVar1;
  local_20 = *(undefined4 *)(puVar1 + 1);
  FUN_1438f5e40(param_1,0,&local_28,local_res10,0,0);
  FUN_1438f4ed0(param_1,0,param_3,0);
  return;
}



// FUNCTION 1438f4ed0 FUN_1438f4ed0 body=816 status=ok
// SIG undefined FUN_1438f4ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1438f4ed0(longlong param_1,uint param_2,float *param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  int local_1d8;
  float local_1d4 [3];
  longlong local_1c8;
  float *local_1c0;
  undefined1 local_1b8 [24];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  float afStack_c8 [16];
  ulonglong local_88;
  ulonglong uVar9;
  
  local_1a0 = 0xfffffffffffffffe;
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_2 < 4) {
    local_1c8 = (longlong)(int)param_2;
    puVar6 = (undefined8 *)(param_1 + 0x118 + local_1c8 * 0xc4);
    local_198 = *puVar6;
    uStack_190 = puVar6[1];
    local_188 = puVar6[2];
    uStack_180 = puVar6[3];
    local_178 = puVar6[4];
    uStack_170 = puVar6[5];
    local_168 = puVar6[6];
    uStack_160 = puVar6[7];
    local_158 = puVar6[8];
    uStack_150 = puVar6[9];
    local_148 = puVar6[10];
    uStack_140 = puVar6[0xb];
    local_138 = puVar6[0xc];
    uStack_130 = puVar6[0xd];
    local_128 = puVar6[0xe];
    uStack_120 = puVar6[0xf];
    local_118 = puVar6[0x10];
    uStack_110 = puVar6[0x11];
    local_108 = puVar6[0x12];
    uStack_100 = puVar6[0x13];
    local_f8 = *(undefined4 *)(puVar6 + 0x14);
    uStack_f4 = *(undefined4 *)((longlong)puVar6 + 0xa4);
    uStack_f0 = *(undefined4 *)(puVar6 + 0x15);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xac);
    local_e8 = *(undefined4 *)(puVar6 + 0x16);
    uStack_e4 = *(undefined4 *)((longlong)puVar6 + 0xb4);
    uStack_e0 = *(undefined4 *)(puVar6 + 0x17);
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xbc);
    local_d8 = *(undefined4 *)(puVar6 + 0x18);
    local_1c0 = param_3;
    iVar1 = FUN_1438f9030(&local_198);
    uVar10 = 0;
    fVar14 = 0.0;
    uVar9 = uVar10;
    uVar11 = uVar10;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_1438f9370(&local_198,uVar9);
        local_1e8 = *(undefined1 *)(param_1 + 0x958);
        FUN_1439098c0(*(undefined8 *)(param_1 + 0x30),local_1b8,uVar2,&local_1d8);
        if (local_1d8 == 0) {
          uVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(local_1b8);
          local_1d4[1] = (float)FUN_1415c4470(uVar4);
          local_1d4[2] = 1.0;
          local_1d4[0] = 0.0;
          pfVar7 = local_1d4;
          if (0.0 <= local_1d4[1]) {
            pfVar7 = local_1d4 + 1;
          }
          pfVar5 = local_1d4 + 2;
          if (*pfVar7 <= 1.0) {
            pfVar5 = pfVar7;
          }
          afStack_c8[uVar11] = *pfVar5;
        }
        else {
          FUN_1438f94f0(&local_198,uVar9,7);
        }
        FUN_14390a6c0(local_1b8);
        uVar11 = uVar11 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while ((longlong)uVar11 < (longlong)iVar1);
    }
    iVar3 = FUN_1438f9030(&local_198);
    if (iVar3 != 0) {
      fVar13 = 1.1920929e-07;
      uVar9 = uVar10;
      if (0 < iVar1) {
        do {
          iVar3 = FUN_1438f9380(&local_198,uVar9);
          if (iVar3 == 0) {
            fVar12 = (float)FUN_1438f9390(&local_198,uVar9);
            fVar13 = fVar13 + fVar12;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar1);
      }
      uVar9 = uVar10;
      if (0 < iVar1) {
        do {
          iVar3 = FUN_1438f9380(&local_198,uVar9);
          if (iVar3 == 0) {
            fVar12 = (float)FUN_1438f9390(&local_198,uVar9);
            FUN_1438f9520(&local_198,uVar9,fVar12 * (1.0 / fVar13));
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar1);
      }
      if (param_4 != 0) {
        FUN_1438f9650(param_4,&local_198);
      }
      uVar9 = uVar10;
      if (0 < iVar1) {
        do {
          iVar3 = FUN_1438f9380(&local_198,uVar9);
          if (iVar3 == 0) {
            fVar13 = (float)FUN_1438f9390(&local_198,uVar9);
            fVar14 = fVar14 + fVar13 * afStack_c8[uVar10];
          }
          uVar10 = uVar10 + 1;
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while ((longlong)uVar10 < (longlong)iVar1);
      }
      *(float *)(param_1 + 0x738 + local_1c8 * 4) = fVar14;
      *local_1c0 = fVar14;
      return 1;
    }
    if (param_4 != 0) {
      FUN_1438f95c0(param_4,2,
                    L"Outdoorness compute failed for all probes. Returning last known good.");
    }
    *local_1c0 = *(float *)(param_1 + 0x738 + local_1c8 * 4);
  }
  return 0;
}



// FUNCTION 1438f5200 FUN_1438f5200 body=144 status=ok
// SIG undefined FUN_1438f5200(void)

float * FUN_1438f5200(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float local_18;
  float fStack_14;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)param_3;
  lVar6 = *(longlong *)(param_1 + 0x28);
  fVar1 = *(float *)(lVar6 + 0x14);
  fVar2 = *(float *)(lVar6 + 0x20);
  iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0xc);
  iVar4 = *(int *)(lVar5 + 8 + lVar7 * 0xc);
  local_18 = (float)*(undefined8 *)(lVar6 + 0x18);
  fVar8 = fVar1 * 0.5;
  fStack_14 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
  *param_2 = (float)*(int *)(lVar5 + lVar7 * 0xc) * fVar1 + local_18 + fVar8;
  param_2[1] = (float)iVar3 * fVar1 + fStack_14 + fVar8;
  param_2[2] = (float)iVar4 * fVar1 + fVar2 + fVar8;
  return param_2;
}



// FUNCTION 1438f5290 FUN_1438f5290 body=540 status=ok
// SIG undefined FUN_1438f5290(void)

ulonglong FUN_1438f5290(longlong param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong in_RAX;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  
  lVar11 = (longlong)param_2;
  if (-1 < param_2) {
    if (*(longlong *)(param_1 + 8) == 0) {
      in_RAX = 0;
    }
    else {
      in_RAX = FRollingHash::GetWindowSize();
    }
    if (param_2 < (int)in_RAX) {
      lVar9 = *(longlong *)(param_1 + 0x18);
      lVar10 = *(longlong *)(param_1 + 0x28);
      fVar8 = *(float *)(lVar10 + 0x20);
      fVar1 = *(float *)(lVar10 + 0x14);
      uStack_74 = (float)((ulonglong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
      local_78 = (float)*(undefined8 *)(lVar10 + 0x18);
      fVar14 = 1.0 / *(float *)(param_1 + 0xe4);
      fVar12 = fVar1 * 0.5;
      fVar13 = fVar14 * ((float)*(int *)(lVar9 + 4 + lVar11 * 0xc) * fVar1 + uStack_74 + fVar12);
      fVar15 = fVar14 * ((float)*(int *)(lVar9 + lVar11 * 0xc) * fVar1 + local_78 + fVar12);
      fVar14 = fVar14 * ((float)*(int *)(lVar9 + 8 + lVar11 * 0xc) * fVar1 + fVar8 + fVar12);
      fVar1 = *(float *)(param_1 + 0x74);
      fVar12 = *(float *)(param_1 + 0x84);
      fVar2 = *(float *)(param_1 + 0x78);
      fVar3 = *(float *)(param_1 + 0x7c);
      fVar4 = *(float *)(param_1 + 0x88);
      fVar5 = *(float *)(param_1 + 0x8c);
      fVar6 = *(float *)(param_1 + 0x80);
      fVar7 = *(float *)(param_1 + 0x90);
      fVar16 = 1.0 / (fVar15 * *(float *)(param_1 + 0x94) + 0.0 +
                      fVar13 * *(float *)(param_1 + 0x98) + fVar14 * *(float *)(param_1 + 0x9c) +
                     *(float *)(param_1 + 0xa0));
      *param_3 = (fVar15 * *(float *)(param_1 + 100) + 0.0 + fVar13 * *(float *)(param_1 + 0x68) +
                  fVar14 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x70)) * fVar16;
      *param_4 = (fVar15 * fVar1 + 0.0 + fVar13 * fVar2 + fVar14 * fVar3 + fVar6) * fVar16;
      *param_5 = (fVar15 * fVar12 + 0.0 + fVar13 * fVar4 + fVar14 * fVar5 + fVar7) * fVar16;
      return CONCAT71((uint7)(uint3)((uint)fVar8 >> 8),1);
    }
  }
  *param_5 = 0.0;
  *param_4 = 0.0;
  *param_3 = 0.0;
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1438f54b0 FUN_1438f54b0 body=136 status=ok
// SIG undefined FUN_1438f54b0(void)

ulonglong FUN_1438f54b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x40);
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
  param_2[1] = uVar5;
  uVar5 = *(undefined8 *)(lVar1 + 0x50);
  param_2[2] = *(undefined8 *)(lVar1 + 0x48);
  param_2[3] = uVar5;
  uVar2 = *(undefined4 *)(lVar1 + 0x5c);
  uVar3 = *(undefined4 *)(lVar1 + 0x60);
  uVar4 = *(undefined4 *)(lVar1 + 100);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 0x58);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)(lVar1 + 0x6c);
  uVar3 = *(undefined4 *)(lVar1 + 0x70);
  uVar4 = *(undefined4 *)(lVar1 + 0x74);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x68);
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  uVar6 = FUN_1438f5ce0(param_2,param_3);
  if (((char)uVar6 != '\0') && (uVar6 = FUN_1438f42a0(param_2,param_3), (char)uVar6 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *param_4 = *(undefined4 *)(lVar1 + 0x34);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1438f5540 FUN_1438f5540 body=1360 status=ok
// SIG undefined FUN_1438f5540(void)

undefined8 FUN_1438f5540(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  wchar_t *pwVar18;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar22;
  int iVar23;
  undefined4 local_60 [2];
  longlong local_58 [3];
  undefined4 local_40;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  local_58[1] = 0xfffffffffffffffe;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar12 = 0;
  local_res10[0] = 0;
  iVar23 = DAT_14682cb60 / 10000;
  iVar2 = (DAT_14682cb60 % 10000) / 100;
  iVar15 = DAT_14682cb60 + (iVar23 * 100 + iVar2) * -100;
  local_res18 = param_3;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,local_res10,4,1);
  if (lVar6 == 1) {
    iVar3 = local_res10[0] / 10000;
    iVar4 = (local_res10[0] % 10000) / 100;
    iVar17 = local_res10[0] + (iVar3 * 100 + iVar4) * -100;
    local_58[0] = CONCAT44(local_58[0]._4_4_,iVar17);
    FUN_1438f1a60(0,L"TritonRuntime::EncodedMapData::Init",0x117,
                  L"TritonRuntime Decoder v%d.%d.%d, Encoded Data v%d.%d.%d",CONCAT44(uVar19,iVar23)
                  ,CONCAT44(uVar20,iVar2),CONCAT44(uVar21,iVar15),CONCAT44(uVar22,iVar3),iVar4,
                  iVar17);
    if (((iVar3 == iVar23) && (iVar4 <= iVar2)) && ((int)local_58[0] <= iVar15)) {
      uVar19 = param_4[1];
      uVar20 = param_4[2];
      uVar21 = param_4[3];
      *(undefined4 *)(param_1 + 0x958) = *param_4;
      *(undefined4 *)(param_1 + 0x95c) = uVar19;
      *(undefined4 *)(param_1 + 0x960) = uVar20;
      *(undefined4 *)(param_1 + 0x964) = uVar21;
      *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(param_4 + 4);
      *(undefined4 *)(param_1 + 0x970) = param_4[6];
      cVar5 = FUN_1438f7160(param_1,param_2);
      if (cVar5 == '\0') {
        pwVar18 = L"Failed to load pre-computation config data.";
        uVar16 = 0x127;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x48);
        if (local_res10[0] < 0x27d8) {
          *puVar1 = **(uint **)(param_1 + 0x28);
        }
        else {
          lVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar1,4);
          if (lVar6 != 1) {
            pwVar18 = L"Failed to load FirstLongDistanceProbe.";
            uVar16 = 0x131;
            goto LAB_1438f5a5a;
          }
        }
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (0x27d8 < local_res10[0]) {
          uVar13 = *puVar1;
          plVar7 = (longlong *)FUN_1438f1790();
          lVar6 = (**(code **)(*plVar7 + 8))(plVar7,(ulonglong)uVar13 << 2);
          *(longlong *)(param_1 + 0x50) = lVar6;
          if ((lVar6 == 0) ||
             (lVar6 = (**(code **)(*param_2 + 0x10))(param_2,lVar6,4,(longlong)(int)*puVar1),
             (int)*puVar1 != lVar6)) {
            pwVar18 = L"Failed to load LongDistanceProbeAssociations.";
            uVar16 = 0x141;
            goto LAB_1438f5a5a;
          }
        }
        local_60[0] = 0xffffffff;
        local_58[0] = 0;
        plVar7 = (longlong *)(param_1 + 0x18);
        plVar10 = local_58;
        plVar8 = plVar7;
        cVar5 = FUN_1438f7050(param_1,**(undefined4 **)(param_1 + 0x28),param_2,local_60,plVar7,
                              plVar10);
        uVar19 = (undefined4)((ulonglong)plVar8 >> 0x20);
        if (cVar5 == '\0') {
          pwVar18 = L"Failed to load probe location list.";
          uVar16 = 0x14b;
        }
        else {
          plVar8 = (longlong *)FUN_1438f1790();
          (**(code **)(*plVar8 + 0x20))(plVar8,L"Load Voxel Data");
          cVar5 = FUN_1438f7210(param_1,param_2,local_60[0]);
          if (cVar5 != '\0') {
            plVar8 = (longlong *)FUN_1438f1790();
            (**(code **)(*plVar8 + 0x28))(plVar8,L"Load Voxel Data");
            plVar8 = (longlong *)FUN_1438f1790();
            lVar6 = (**(code **)(*plVar8 + 8))(plVar8,0x40);
            uVar9 = uVar12;
            if (lVar6 != 0) {
              uVar16 = CONCAT44(uVar19,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14));
              uVar9 = FUN_1438fc250(lVar6,*(undefined4 *)(param_1 + 0x964),5,
                                    *(undefined8 *)(param_1 + 0x20),uVar16);
              uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
            }
            *(ulonglong *)(param_1 + 0x10) = uVar9;
            plVar8 = (longlong *)FUN_1438f1790();
            lVar6 = (**(code **)(*plVar8 + 8))(plVar8,0x2e0);
            uVar9 = uVar12;
            if (lVar6 != 0) {
              uVar9 = FUN_1438fdda0(lVar6);
            }
            *(ulonglong *)(param_1 + 0x40) = uVar9;
            plVar8 = (longlong *)FUN_1438f1790();
            lVar6 = (**(code **)(*plVar8 + 8))(plVar8,0x50);
            uVar9 = uVar12;
            if (lVar6 != 0) {
              plVar10 = (longlong *)
                        CONCAT71((int7)((ulonglong)plVar10 >> 8),*(undefined1 *)(param_1 + 0x958));
              uVar16 = *(undefined8 *)(param_1 + 0x10);
              uVar9 = FUN_1438f98c0(lVar6,**(undefined4 **)(param_1 + 0x28),
                                    *(undefined4 *)(param_1 + 0x970),
                                    *(undefined4 *)(param_1 + 0x970),uVar16,plVar10);
              uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
            }
            *(ulonglong *)(param_1 + 8) = uVar9;
            lVar6 = *(longlong *)(param_1 + 0x28);
            FUN_1438fb6b0(*(undefined4 *)(lVar6 + 0x14),*(undefined8 *)(param_1 + 0x20),lVar6 + 0x18
                          ,lVar6 + 0x24,CONCAT44(uVar19,*(undefined4 *)(lVar6 + 0x14)));
            uVar19 = (undefined4)((ulonglong)plVar10 >> 0x20);
            uVar9 = uVar12;
            uVar14 = uVar12;
            if (0 < **(int **)(param_1 + 0x28)) {
              do {
                lVar6 = *plVar7;
                local_58[2] = CONCAT44(*(undefined4 *)(uVar9 + 4 + lVar6),
                                       *(undefined4 *)(uVar9 + lVar6));
                local_40 = *(undefined4 *)(uVar9 + 8 + lVar6);
                FUN_1438f9c70(*(undefined8 *)(param_1 + 8),local_58 + 2,uVar14);
                uVar19 = (undefined4)((ulonglong)plVar10 >> 0x20);
                uVar13 = (int)uVar14 + 1;
                uVar9 = uVar9 + 0xc;
                uVar14 = (ulonglong)uVar13;
              } while ((int)uVar13 < **(int **)(param_1 + 0x28));
            }
            cVar5 = FUN_1438f54b0(param_1,param_1 + 0xa4,param_1 + 100,param_1 + 0xe4);
            if (cVar5 != '\0') {
              plVar10 = (longlong *)FUN_1438f1790();
              lVar11 = (**(code **)(*plVar10 + 8))(plVar10,0xb0);
              lVar6 = local_58[0];
              uVar9 = uVar12;
              if (lVar11 != 0) {
                uVar9 = FUN_143909250(lVar11,param_2,param_1,local_res18,
                                      *(undefined8 *)(param_1 + 8),
                                      CONCAT44(uVar19,**(undefined4 **)(param_1 + 0x28)),*plVar7,
                                      local_58[0],*(undefined4 *)(param_1 + 0x95c),
                                      *(undefined4 *)(param_1 + 0x960),iVar23,lVar11);
              }
              *(ulonglong *)(param_1 + 0x30) = uVar9;
              if (lVar6 != 0) {
                plVar7 = (longlong *)FUN_1438f1790();
                (**(code **)(*plVar7 + 0x18))(plVar7,lVar6);
              }
              plVar7 = (longlong *)FUN_1438f1790();
              local_58[0] = (**(code **)(*plVar7 + 8))(plVar7,0x30);
              if (local_58[0] != 0) {
                uVar12 = FUN_14217c900(local_58[0]);
              }
              *(ulonglong *)(param_1 + 0x58) = uVar12;
              return 1;
            }
            goto LAB_1438f5a6b;
          }
          pwVar18 = L"Failed to load Voxel data.";
          uVar16 = 0x157;
        }
      }
    }
    else {
      pwVar18 = L"Failed. Runtime is incompatible with baked data.";
      uVar16 = 0x11d;
    }
  }
  else {
    pwVar18 = L"Failed to read version number.";
    uVar16 = 0x110;
  }
LAB_1438f5a5a:
  FUN_1438f1a60(2,L"TritonRuntime::EncodedMapData::Init",uVar16,pwVar18);
LAB_1438f5a6b:
  FUN_1438f73a0(param_1);
  return 0;
}



// FUNCTION 1438f5a90 FUN_1438f5a90 body=581 status=ok
// SIG undefined FUN_1438f5a90(void)

bool FUN_1438f5a90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = param_1[5] * param_1[10] - param_1[6] * param_1[9];
  fVar11 = (fVar14 * *param_1 - (param_1[4] * param_1[10] - param_1[8] * param_1[6]) * param_1[1]) +
           (param_1[4] * param_1[9] - param_1[8] * param_1[5]) * param_1[2];
  bVar5 = 1e-06 <= fVar11 * fVar11;
  if (bVar5) {
    *param_2 = fVar14;
    fVar13 = param_1[2] * param_1[9] - param_1[10] * param_1[1];
    fVar11 = 1.0 / fVar11;
    param_2[1] = fVar13;
    fVar12 = param_1[6] * param_1[1] - param_1[2] * param_1[5];
    param_2[2] = fVar12;
    fVar10 = param_1[8] * param_1[6] - param_1[10] * param_1[4];
    param_2[4] = fVar10;
    fVar9 = param_1[10] * *param_1 - param_1[8] * param_1[2];
    param_2[5] = fVar9;
    fVar8 = param_1[2] * param_1[4] - param_1[6] * *param_1;
    param_2[6] = fVar8;
    fVar7 = param_1[9] * param_1[4] - param_1[8] * param_1[5];
    param_2[8] = fVar7;
    fVar6 = param_1[8] * param_1[1] - param_1[9] * *param_1;
    param_2[9] = fVar6;
    fVar1 = param_1[4];
    fVar2 = param_1[1];
    fVar3 = param_1[5];
    fVar4 = *param_1;
    param_2[1] = fVar11 * fVar13;
    param_2[4] = fVar11 * fVar10;
    *param_2 = fVar11 * fVar14;
    param_2[6] = fVar11 * fVar8;
    param_2[2] = fVar11 * fVar12;
    param_2[9] = fVar11 * fVar6;
    param_2[5] = fVar11 * fVar9;
    param_2[10] = fVar11 * (fVar3 * fVar4 - fVar1 * fVar2);
    param_2[8] = fVar11 * fVar7;
  }
  return bVar5;
}



// FUNCTION 1438f5ce0 FUN_1438f5ce0 body=214 status=ok
// SIG undefined FUN_1438f5ce0(void)

undefined1 FUN_1438f5ce0(longlong param_1,float *param_2)

{
  char cVar1;
  
  param_2[0xf] = 1.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xc] = 0.0;
  cVar1 = FUN_1438f5a90();
  if (cVar1 == '\0') {
    return 0;
  }
  param_2[3] = ((0.0 - *(float *)(param_1 + 0xc) * *param_2) -
               param_2[1] * *(float *)(param_1 + 0x1c)) - param_2[2] * *(float *)(param_1 + 0x2c);
  param_2[7] = ((0.0 - param_2[4] * *(float *)(param_1 + 0xc)) -
               param_2[5] * *(float *)(param_1 + 0x1c)) - param_2[6] * *(float *)(param_1 + 0x2c);
  param_2[0xb] = ((0.0 - param_2[8] * *(float *)(param_1 + 0xc)) -
                 param_2[9] * *(float *)(param_1 + 0x1c)) - param_2[10] * *(float *)(param_1 + 0x2c)
  ;
  return 1;
}



// FUNCTION 1438f5dc0 FUN_1438f5dc0 body=16 status=ok
// SIG undefined FUN_1438f5dc0(void)

int FUN_1438f5dc0(longlong param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 < 0) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,iVar1 <= param_2);
}



// FUNCTION 1438f5dd0 FUN_1438f5dd0 body=23 status=ok
// SIG undefined FUN_1438f5dd0(void)

undefined1 FUN_1438f5dd0(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar1 = FUN_1439098f0(*(longlong *)(param_1 + 0x30),0,param_2);
  return uVar1;
}



// FUNCTION 1438f5df0 FUN_1438f5df0 body=79 status=ok
// SIG undefined FUN_1438f5df0(void)

float * FUN_1438f5df0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  fVar1 = param_3[1];
  fVar6 = 1.0 / *(float *)(lVar5 + 0x14);
  fVar2 = *(float *)(lVar5 + 0x1c);
  fVar3 = param_3[2];
  fVar4 = *(float *)(lVar5 + 0x20);
  *param_2 = (*param_3 - *(float *)(lVar5 + 0x18)) * fVar6;
  param_2[1] = (fVar1 - fVar2) * fVar6;
  param_2[2] = (fVar3 - fVar4) * fVar6;
  return param_2;
}



// FUNCTION 1438f5e40 FUN_1438f5e40 body=871 status=ok
// SIG undefined FUN_1438f5e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1438f5e40(longlong param_1,uint param_2,float *param_3,undefined4 *param_4,
                       undefined1 param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  longlong *local_250;
  longlong local_248;
  undefined1 local_240;
  byte local_238;
  longlong local_228;
  float fStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_200 = 0xfffffffffffffffe;
  uVar2 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  lVar5 = (longlong)(int)param_2;
  local_58 = uVar2;
  if (param_6 != 0) {
    uVar2 = FUN_1438f9640(param_6);
  }
  if (param_2 < 4) {
    fVar9 = param_3[2] - *(float *)(param_1 + 0xf0 + lVar5 * 0xc);
    fVar8 = param_3[1] - *(float *)(param_1 + 0xec + lVar5 * 0xc);
    fVar6 = *param_3 - *(float *)(param_1 + 0xe8 + lVar5 * 0xc);
    if (0.0025000002 <= fVar8 * fVar8 + fVar6 * fVar6 + fVar9 * fVar9) {
      FUN_1438f8e80(&local_1f8);
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      local_258 = local_258 & 0xffffffffffffff00;
      FUN_1438f2110(&local_218,0,**(undefined8 **)(param_1 + 0x948),
                    *(undefined8 **)(param_1 + 0x948));
      uStack_21c = (undefined4)((ulonglong)param_3 >> 0x20);
      fStack_220 = SUB84(param_3,0);
      local_228 = param_1;
      FUN_1438f2ee0(local_218,lStack_210,lStack_210 - local_218 >> 2,&local_228);
      local_228 = *(longlong *)param_3;
      _fStack_220 = CONCAT44(uStack_21c,param_3[2]);
      local_240 = param_5;
      local_250 = &local_218;
      local_258 = 0;
      local_248 = param_1;
      local_238 = FUN_1438f9ca0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x30),
                                &local_228,&local_1f8);
      uVar7 = local_1f8;
      if (local_238 == 0) {
        uVar7 = *(undefined4 *)(lVar5 * 0xc4 + 0x118 + param_1);
      }
      *param_4 = uVar7;
      if (local_238 == 0) {
        if (param_6 != 0) {
          FUN_1438f95c0(param_6,1,
                        L"Probe interpolation failed. Using last-known-good probe weights.");
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xe8 + lVar5 * 0xc) = *(undefined8 *)param_3;
        *(float *)(param_1 + 0xf0 + lVar5 * 0xc) = param_3[2];
        puVar4 = (undefined8 *)(param_1 + 0x118 + lVar5 * 0xc4);
        *puVar4 = CONCAT44(uStack_1f4,local_1f8);
        puVar4[1] = uStack_1f0;
        puVar4[2] = local_1e8;
        puVar4[3] = uStack_1e0;
        puVar4[4] = local_1d8;
        puVar4[5] = uStack_1d0;
        puVar4[6] = local_1c8;
        puVar4[7] = uStack_1c0;
        puVar4[8] = local_1b8;
        puVar4[9] = uStack_1b0;
        puVar4[10] = local_1a8;
        puVar4[0xb] = uStack_1a0;
        puVar4[0xc] = local_198;
        puVar4[0xd] = uStack_190;
        puVar4[0xe] = local_188;
        puVar4[0xf] = uStack_180;
        puVar4[0x10] = local_178;
        puVar4[0x11] = uStack_170;
        puVar4[0x12] = local_168;
        puVar4[0x13] = uStack_160;
        *(undefined4 *)(puVar4 + 0x14) = local_158;
        *(undefined4 *)((longlong)puVar4 + 0xa4) = uStack_154;
        *(undefined4 *)(puVar4 + 0x15) = uStack_150;
        *(undefined4 *)((longlong)puVar4 + 0xac) = uStack_14c;
        *(undefined4 *)(puVar4 + 0x16) = local_148;
        *(undefined4 *)((longlong)puVar4 + 0xb4) = uStack_144;
        *(undefined4 *)(puVar4 + 0x17) = uStack_140;
        *(undefined4 *)((longlong)puVar4 + 0xbc) = uStack_13c;
        *(undefined4 *)(puVar4 + 0x18) = local_138;
        FUN_1438f9070(&local_1f8,&local_128,param_1,*(undefined8 *)(param_1 + 0x30));
        iVar1 = FUN_1438f9030(&local_128);
        if (0 < iVar1) {
          puVar4 = (undefined8 *)(param_1 + 0x428 + lVar5 * 0xc4);
          *puVar4 = local_128;
          puVar4[1] = uStack_120;
          puVar4[2] = local_118;
          puVar4[3] = uStack_110;
          puVar4[4] = local_108;
          puVar4[5] = uStack_100;
          puVar4[6] = local_f8;
          puVar4[7] = uStack_f0;
          puVar4[8] = local_e8;
          puVar4[9] = uStack_e0;
          puVar4[10] = local_d8;
          puVar4[0xb] = uStack_d0;
          puVar4[0xc] = local_c8;
          puVar4[0xd] = uStack_c0;
          puVar4[0xe] = local_b8;
          puVar4[0xf] = uStack_b0;
          puVar4[0x10] = local_a8;
          puVar4[0x11] = uStack_a0;
          puVar4[0x12] = local_98;
          puVar4[0x13] = uStack_90;
          *(undefined4 *)(puVar4 + 0x14) = local_88;
          *(undefined4 *)((longlong)puVar4 + 0xa4) = uStack_84;
          *(undefined4 *)(puVar4 + 0x15) = uStack_80;
          *(undefined4 *)((longlong)puVar4 + 0xac) = uStack_7c;
          puVar4[0x16] = local_78;
          puVar4[0x17] = uStack_70;
          *(undefined4 *)(puVar4 + 0x18) = local_68;
        }
      }
      lVar5 = local_218;
      if (local_218 != 0) {
        plVar3 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
      }
      uVar2 = (ulonglong)local_238;
    }
    else {
      *param_4 = *(undefined4 *)(lVar5 * 0xc4 + 0x118 + param_1);
      uVar2 = CONCAT71((int7)((ulonglong)(lVar5 * 0xc4) >> 8),1);
    }
  }
  else {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 1438f61b0 FUN_1438f61b0 body=2411 status=ok
// SIG undefined FUN_1438f61b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1438f61b0(longlong param_1,longlong *param_2,float param_3,int param_4,char param_5)

{
  bool bVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int *_Dst;
  int *piVar15;
  ulonglong uVar16;
  byte bVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  int *_Src;
  int *piVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  int local_108 [2];
  char local_100;
  byte local_ff;
  int *local_f8;
  int *piStack_f0;
  int *local_e8;
  longlong *local_e0;
  longlong local_d8;
  int *local_d0;
  int *piStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_60 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return local_58 & 0xffffffffffffff00;
  }
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_78 = param_4;
  local_70 = (undefined8 *)FUN_1438f6c90(&local_70,0,0);
  FUN_14390a180(*(undefined8 *)(param_1 + 0x30),&local_70);
  puVar3 = local_70;
  for (puVar14 = (undefined8 *)*local_70; puVar14 != puVar3; puVar14 = (undefined8 *)*puVar14) {
    local_108[0] = *(int *)(puVar14 + 2);
    plVar8 = *(longlong **)(param_1 + 0x948);
    plVar10 = (longlong *)*plVar8;
    if (plVar8 == plVar10) {
LAB_1438f6279:
      lVar7 = FUN_1438f2000(param_1 + 0x948,plVar8,plVar8[1],local_108);
      if (*(longlong *)(param_1 + 0x950) == 0xaaaaaaaaaaaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(longlong *)(param_1 + 0x950) = *(longlong *)(param_1 + 0x950) + 1;
      plVar8[1] = lVar7;
      **(longlong **)(lVar7 + 8) = lVar7;
    }
    else {
      do {
        if ((int)plVar10[2] == local_108[0]) break;
        plVar10 = (longlong *)*plVar10;
      } while (plVar10 != plVar8);
      if (plVar8 == plVar10) goto LAB_1438f6279;
    }
  }
  local_ff = 1;
  fVar25 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x14);
  local_d0 = (int *)0x0;
  piStack_c8 = (int *)0x0;
  local_c0 = 0;
  local_f8 = (int *)0x0;
  piStack_f0 = (int *)0x0;
  piVar18 = (int *)0x0;
  local_e8 = (int *)0x0;
  local_98 = *param_2;
  uStack_90._0_4_ = (int)param_2[1];
  FUN_1438f6b30(param_1,&local_b8,&local_98);
  fVar26 = *(float *)(param_1 + 0xe4) * (param_3 + param_3);
  lVar7 = *(longlong *)(param_1 + 0x28);
  fVar24 = 1.0 / *(float *)(lVar7 + 0x14);
  local_b0 = (local_b0 - *(float *)(lVar7 + 0x20)) * fVar24;
  local_d8 = CONCAT44(local_d8._4_4_,local_b0);
  fVar25 = 1.0 / fVar25;
  local_98 = CONCAT44(fVar26 * fVar25,fVar25 * fVar26);
  uStack_90 = CONCAT44(uStack_90._4_4_,fVar26 * fVar25);
  local_b8 = CONCAT44((local_b8._4_4_ - *(float *)(lVar7 + 0x1c)) * fVar24,
                      ((float)local_b8 - *(float *)(lVar7 + 0x18)) * fVar24);
  FUN_1438fac20(*(undefined8 *)(param_1 + 8),&local_b8,&local_98,&local_d0);
  piVar15 = piStack_f0;
  piVar22 = local_f8;
  if (((longlong)piStack_c8 - (longlong)local_d0 >> 2 != 0) &&
     (_Dst = piStack_c8 + -1, _Src = piStack_c8, local_d0 <= _Dst)) {
    do {
      if ((*(int *)(param_1 + 0x48) < 0) ||
         (iVar23 = *_Dst, piVar2 = piVar22, iVar23 < *(int *)(param_1 + 0x48))) {
        iVar23 = *_Dst;
        if (-1 < iVar23) {
          if (*(longlong *)(param_1 + 8) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FRollingHash::GetWindowSize();
          }
          if (iVar23 < iVar5) {
            if ((*(int *)(param_1 + 0x48) < 0) || (iVar23 < *(int *)(param_1 + 0x48))) {
              if (*(longlong *)(param_1 + 0x50) == 0) goto LAB_1438f672e;
              iVar23 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar23 * 4);
            }
            piVar2 = piVar22;
            if (-1 < iVar23) {
              for (; local_108[0] = iVar23, piVar2 != piVar15; piVar2 = piVar2 + 1) {
                if (*piVar2 == iVar23) goto LAB_1438f672e;
              }
              if ((local_108 < piVar15) && (piVar22 <= local_108)) {
                lVar7 = (longlong)local_108 - (longlong)piVar22;
                if ((piVar15 == piVar18) && ((longlong)piVar18 - (longlong)piVar15 >> 2 == 0)) {
                  lVar20 = (longlong)piVar15 - (longlong)piVar22 >> 2;
                  if (lVar20 == -1) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  uVar13 = lVar20 + 1;
                  uVar19 = (longlong)piVar18 - (longlong)piVar22 >> 2;
                  uVar16 = 0;
                  if (uVar19 <= ~(uVar19 >> 1)) {
                    uVar16 = (uVar19 >> 1) + uVar19;
                  }
                  if (uVar13 <= uVar16) {
                    uVar13 = uVar16;
                  }
                  FUN_1438f7260(&local_f8,uVar13);
                  piVar18 = local_e8;
                  piVar15 = piStack_f0;
                  piVar22 = local_f8;
                }
                if (piVar15 != (int *)0x0) {
                  *piVar15 = piVar22[lVar7 >> 2];
                }
              }
              else {
                if ((piVar15 == piVar18) && ((longlong)piVar18 - (longlong)piVar15 >> 2 == 0)) {
                  lVar7 = (longlong)piVar15 - (longlong)piVar22 >> 2;
                  if (lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  uVar13 = lVar7 + 1;
                  uVar19 = (longlong)piVar18 - (longlong)piVar22 >> 2;
                  uVar16 = 0;
                  if (uVar19 <= ~(uVar19 >> 1)) {
                    uVar16 = (uVar19 >> 1) + uVar19;
                  }
                  if (uVar13 <= uVar16) {
                    uVar13 = uVar16;
                  }
                  FUN_1438f7260(&local_f8,uVar13);
                  piVar18 = local_e8;
                  piVar15 = piStack_f0;
                  piVar22 = local_f8;
                }
                if (piVar15 != (int *)0x0) {
                  *piVar15 = iVar23;
                }
              }
              piVar15 = piVar15 + 1;
              piStack_f0 = piVar15;
            }
          }
        }
      }
      else {
        for (; local_108[0] = iVar23, piVar2 != piVar15; piVar2 = piVar2 + 1) {
          if (*piVar2 == iVar23) goto LAB_1438f656e;
        }
        if ((local_108 < piVar15) && (piVar22 <= local_108)) {
          lVar7 = (longlong)local_108 - (longlong)piVar22;
          if ((piVar15 == piVar18) && ((longlong)piVar18 - (longlong)piVar15 >> 2 == 0)) {
            lVar20 = (longlong)piVar15 - (longlong)piVar22 >> 2;
            if (lVar20 == -1) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar13 = lVar20 + 1;
            uVar19 = (longlong)piVar18 - (longlong)piVar22 >> 2;
            uVar16 = 0;
            if (uVar19 <= ~(uVar19 >> 1)) {
              uVar16 = (uVar19 >> 1) + uVar19;
            }
            if (uVar13 <= uVar16) {
              uVar13 = uVar16;
            }
            FUN_1438f7260(&local_f8,uVar13);
            piVar18 = local_e8;
            piVar15 = piStack_f0;
            piVar22 = local_f8;
          }
          if (piVar15 != (int *)0x0) {
            *piVar15 = piVar22[lVar7 >> 2];
          }
        }
        else {
          if ((piVar15 == piVar18) && ((longlong)piVar18 - (longlong)piVar15 >> 2 == 0)) {
            lVar7 = (longlong)piVar15 - (longlong)piVar22 >> 2;
            if (lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar13 = lVar7 + 1;
            uVar19 = (longlong)piVar18 - (longlong)piVar22 >> 2;
            uVar16 = 0;
            if (uVar19 <= ~(uVar19 >> 1)) {
              uVar16 = (uVar19 >> 1) + uVar19;
            }
            if (uVar13 <= uVar16) {
              uVar13 = uVar16;
            }
            FUN_1438f7260(&local_f8,uVar13);
            piVar18 = local_e8;
            piVar15 = piStack_f0;
            piVar22 = local_f8;
          }
          if (piVar15 != (int *)0x0) {
            *piVar15 = iVar23;
          }
        }
        piVar15 = piVar15 + 1;
        piStack_f0 = piVar15;
LAB_1438f656e:
        memmove(_Dst,_Src,(longlong)piStack_c8 - (longlong)_Src);
        piStack_c8 = piStack_c8 + -1;
      }
LAB_1438f672e:
      _Dst = _Dst + -1;
      _Src = _Src + -1;
    } while (local_d0 <= _Dst);
  }
  local_118 = 0;
  FUN_1438f2320(&local_d0,piStack_c8,piVar22,piVar15);
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  plVar8 = (longlong *)FUN_1438f6c90(&local_e0,0,0);
  piVar18 = piStack_c8;
  lVar7 = local_d8;
  local_e0 = plVar8;
  if (local_d0 != piStack_c8) {
    plVar10 = (longlong *)(param_1 + 0x948);
    piVar15 = local_d0;
    do {
      local_108[0] = *piVar15;
      local_100 = '\0';
      plVar12 = *(longlong **)*plVar10;
      if (plVar12 != (longlong *)*plVar10) {
        do {
          if ((int)plVar12[2] == local_108[0]) {
            local_100 = '\x01';
            *(longlong *)plVar12[1] = *plVar12;
            *(longlong *)(*plVar12 + 8) = plVar12[1];
            *(longlong *)(param_1 + 0x950) = *(longlong *)(param_1 + 0x950) + -1;
            std::_Deallocate(plVar12,1,0x18);
            break;
          }
          plVar12 = (longlong *)*plVar12;
        } while (plVar12 != (longlong *)*plVar10);
      }
      local_b8 = *(longlong *)*plVar10;
      lVar20 = FUN_1438f2000(plVar10,local_b8,*(undefined8 *)(local_b8 + 8),local_108);
      if (*(longlong *)(param_1 + 0x950) == 0xaaaaaaaaaaaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(longlong *)(param_1 + 0x950) = *(longlong *)(param_1 + 0x950) + 1;
      *(longlong *)(local_b8 + 8) = lVar20;
      **(longlong **)(lVar20 + 8) = lVar20;
      if ((local_100 == '\0') &&
         ((param_5 == '\0' ||
          ((-1 < *(int *)(param_1 + 0x48) && (*(int *)(param_1 + 0x48) <= local_108[0])))))) {
        lVar20 = FUN_1438f1fd0(&local_e0,plVar8,plVar8[1],local_108);
        if (local_d8 == -2) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        lVar7 = local_d8 + 1;
        plVar8[1] = lVar20;
        **(longlong **)(lVar20 + 8) = lVar20;
        plVar8 = local_e0;
        local_d8 = lVar7;
      }
      piVar15 = piVar15 + 1;
    } while (piVar15 != piVar18);
  }
  if (lVar7 == 0) {
    bVar1 = true;
  }
  else {
    uVar9 = FUN_1438f3090(&local_98,&local_e0);
    cVar4 = FUN_143909e10(*(undefined8 *)(param_1 + 0x30),uVar9);
    local_ff = cVar4 != '\0';
    plVar8 = local_e0;
    bVar1 = (bool)local_ff;
  }
  uVar13 = (ulonglong)local_78;
  bVar21 = local_ff;
  if (*(ulonglong *)(param_1 + 0x950) <= uVar13) goto LAB_1438f6a21;
  uVar6 = (int)*(ulonglong *)(param_1 + 0x950) - local_78;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  if (0 < (int)uVar6) {
    uVar16 = (ulonglong)uVar6;
    do {
      FUN_1438f7f50(&local_98,*(longlong *)(*(longlong *)(param_1 + 0x948) + 8) + 0x10);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 8);
      *(longlong *)plVar10[1] = *plVar10;
      *(longlong *)(*plVar10 + 8) = plVar10[1];
      *(longlong *)(param_1 + 0x950) = *(longlong *)(param_1 + 0x950) + -1;
      std::_Deallocate(plVar10,1,0x18);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (bVar1) {
    uVar9 = FUN_1438f30f0(&local_b8,&local_98);
    cVar4 = FUN_143909fd0(*(undefined8 *)(param_1 + 0x30),uVar9);
    if (cVar4 == '\0') goto LAB_1438f69fa;
    bVar21 = 1;
  }
  else {
LAB_1438f69fa:
    bVar21 = 0;
  }
  lVar7 = local_98;
  if (local_98 != 0) {
    plVar10 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7);
  }
LAB_1438f6a21:
  bVar17 = 0;
  if ((ulonglong)((longlong)piStack_c8 - (longlong)local_d0 >> 2) <= uVar13) {
    bVar17 = bVar21;
  }
  plVar10 = (longlong *)*plVar8;
  *plVar8 = (longlong)plVar8;
  plVar8[1] = (longlong)plVar8;
  while (plVar10 != plVar8) {
    plVar12 = (longlong *)*plVar10;
    plVar11 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar11 + 0x18))(plVar11,plVar10);
    plVar10 = plVar12;
  }
  plVar10 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar8);
  if (piVar22 != (int *)0x0) {
    plVar8 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar8 + 0x18))(plVar8,piVar22);
  }
  piVar18 = local_d0;
  if (local_d0 != (int *)0x0) {
    plVar8 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar8 + 0x18))(plVar8,piVar18);
    local_d0 = (int *)0x0;
    piStack_c8 = (int *)0x0;
    local_c0 = 0;
  }
  FUN_1438f79a0(&local_70);
  puVar14 = local_70;
  plVar8 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar8 + 0x18))(plVar8,puVar14);
  return (ulonglong)bVar17;
}



// FUNCTION 1438f6b30 FUN_1438f6b30 body=352 status=ok
// SIG undefined FUN_1438f6b30(void)

float * FUN_1438f6b30(longlong param_1,float *param_2,undefined8 *param_3)

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
  float local_48;
  float fStack_44;
  
  fVar10 = *(float *)(param_3 + 1);
  fStack_44 = (float)((ulonglong)*param_3 >> 0x20);
  local_48 = (float)*param_3;
  fVar1 = *(float *)(param_1 + 0xb4);
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xb8);
  fVar4 = *(float *)(param_1 + 0xbc);
  fVar5 = *(float *)(param_1 + 200);
  fVar6 = *(float *)(param_1 + 0xcc);
  fVar7 = *(float *)(param_1 + 0xc0);
  fVar8 = *(float *)(param_1 + 0xe4);
  fVar9 = *(float *)(param_1 + 0xd0);
  fVar11 = 1.0 / (local_48 * *(float *)(param_1 + 0xd4) + 0.0 +
                  fStack_44 * *(float *)(param_1 + 0xd8) + fVar10 * *(float *)(param_1 + 0xdc) +
                 *(float *)(param_1 + 0xe0));
  *param_2 = (local_48 * *(float *)(param_1 + 0xa4) + 0.0 + fStack_44 * *(float *)(param_1 + 0xa8) +
              fVar10 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0)) * fVar11 * fVar8;
  param_2[1] = (local_48 * fVar1 + 0.0 + fStack_44 * fVar3 + fVar10 * fVar4 + fVar7) * fVar11 *
               fVar8;
  param_2[2] = (local_48 * fVar2 + 0.0 + fStack_44 * fVar5 + fVar10 * fVar6 + fVar9) * fVar11 *
               fVar8;
  return param_2;
}



// FUNCTION 1438f6c90 FUN_1438f6c90 body=97 status=ok
// SIG undefined FUN_1438f6c90(void)

void FUN_1438f6c90(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,0x18);
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)param_2;
  }
  if (plVar1 + 1 != (longlong *)0x0) {
    plVar1[1] = (longlong)param_3;
  }
  return;
}



// FUNCTION 1438f6d00 FUN_1438f6d00 body=93 status=ok
// SIG undefined FUN_1438f6d00(void)

void FUN_1438f6d00(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  if (plVar1 + 1 != (longlong *)0x0) {
    plVar1[1] = (longlong)param_3;
  }
  return;
}



// FUNCTION 1438f6d60 FUN_1438f6d60 body=435 status=ok
// SIG undefined FUN_1438f6d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1438f6d60(undefined8 param_1,undefined8 param_2,longlong param_3,float *param_4,longlong param_5
             )

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float extraout_XMM0_Da_00;
  float fVar10;
  
  FUN_1438f8f10(param_2,param_3);
  iVar2 = FUN_1438f9030(param_2);
  lVar6 = (longlong)iVar2;
  iVar3 = FUN_1438f9030(param_2);
  if (iVar3 != 0) {
    iVar8 = 0;
    fVar10 = 1.1920929e-07;
    iVar3 = iVar8;
    if (0 < iVar2) {
      do {
        iVar4 = FUN_1438f9380(param_2,iVar3);
        if (iVar4 == 0) {
          FUN_1438f9390(param_2,iVar3);
          fVar10 = fVar10 + extraout_XMM0_Da;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = iVar8;
    if (0 < iVar2) {
      do {
        iVar4 = FUN_1438f9380(param_2,iVar3);
        if (iVar4 == 0) {
          fVar9 = (float)FUN_1438f9390(param_2,iVar3);
          FUN_1438f9520(param_2,iVar3,fVar9 * (1.0 / fVar10));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (param_5 != 0) {
      FUN_1438f9650(param_5,param_2);
    }
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    param_4[4] = 0.0;
    param_4[5] = 0.0;
    if (0 < iVar2) {
      param_3 = param_3 - (longlong)param_4;
      do {
        iVar2 = FUN_1438f9380(param_2,iVar8);
        if (iVar2 == 0) {
          lVar7 = 6;
          pfVar5 = param_4;
          do {
            FUN_1438f9390(param_2,iVar8);
            *pfVar5 = extraout_XMM0_Da_00 * *(float *)(param_3 + (longlong)pfVar5) + *pfVar5;
            pfVar5 = pfVar5 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar8 = iVar8 + 1;
        param_3 = param_3 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    return 1;
  }
  if (param_5 != 0) {
    FUN_1438f95c0(param_5,2,L"Parameter compute failed for all probes. Returning default.");
  }
  uVar1 = uRam000000014682cba0;
  *(undefined8 *)param_4 = _DAT_14682cb98;
  *(undefined8 *)(param_4 + 2) = uVar1;
  *(undefined8 *)(param_4 + 4) = DAT_14682cba8;
  return 0;
}



// FUNCTION 1438f6f20 FUN_1438f6f20 body=27 status=ok
// SIG undefined FUN_1438f6f20(void)

undefined8 * FUN_1438f6f20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = std::
               _Func_impl<<lambda_49fb250adb3992cd52591209442241d9>,TritonRuntime::TAlloc<char>,void,float>
               ::vftable;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[1] = *(undefined8 *)(param_1 + 8);
    param_2[2] = uVar1;
  }
  return param_2;
}



// FUNCTION 1438f6f40 _Deallocate body=105 status=ok
// SIG undefined _Deallocate(void)

void std::_Deallocate(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  if (SUB168(auVar2 / auVar1,0) < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar3 = param_1;
  if (0xfff < param_2 * param_3) {
    if ((param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar3 = *(ulonglong *)(param_1 - 8);
    if (param_1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_1 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_1 - uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar3,SUB168(auVar2 % auVar1,0));
  return;
}



// FUNCTION 1438f6fb0 FUN_1438f6fb0 body=58 status=ok
// SIG undefined FUN_1438f6fb0(void)

void FUN_1438f6fb0(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = std::_Func_base<void,float>::vftable;
  if (param_2 != '\0') {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*plVar1,param_4,uVar2);
  }
  return;
}



// FUNCTION 1438f6ff0 FUN_1438f6ff0 body=13 status=ok
// SIG undefined FUN_1438f6ff0(void)

void FUN_1438f6ff0(longlong param_1,undefined4 *param_2)

{
  FUN_1438f36d0(param_1 + 8,*param_2);
  return;
}



// FUNCTION 1438f7000 _Erase body=80 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 1438f7050 FUN_1438f7050 body=264 status=ok
// SIG undefined FUN_1438f7050(void)

undefined8
FUN_1438f7050(undefined8 param_1,uint param_2,longlong *param_3,undefined8 param_4,longlong *param_5
             ,longlong *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_2;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,(ulonglong)param_2 * 0xc);
  plVar1 = (longlong *)FUN_1438f1790();
  lVar3 = (**(code **)(*plVar1 + 8))(plVar1,(ulonglong)param_2 * 4);
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3,param_4,4);
  if (((lVar4 == 1) &&
      (lVar4 = (**(code **)(*param_3 + 0x10))(param_3,lVar2,0xc,lVar5), lVar5 == lVar4)) &&
     (lVar4 = (**(code **)(*param_3 + 0x10))(param_3,lVar3,4,lVar5), lVar5 == lVar4)) {
    *param_5 = lVar2;
    *param_6 = lVar3;
    return 1;
  }
  if (lVar2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (lVar3 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  return 0;
}



// FUNCTION 1438f7160 FUN_1438f7160 body=166 status=ok
// SIG undefined FUN_1438f7160(void)

bool FUN_1438f7160(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = 0;
  if (lVar2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x78);
  if (lVar2 != 0) {
    uVar3 = FUN_1438f3300(lVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3,0x78,1,uVar4);
  return lVar2 == 1;
}



// FUNCTION 1438f7210 FUN_1438f7210 body=66 status=ok
// SIG undefined FUN_1438f7210(void)

undefined8 FUN_1438f7210(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  uVar1 = FUN_143900670(param_2,*(undefined4 *)(param_1 + 0x968),*(undefined4 *)(param_1 + 0x96c));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return 1;
}



// FUNCTION 1438f7260 FUN_1438f7260 body=188 status=ok
// SIG undefined FUN_1438f7260(void)

void FUN_1438f7260(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1438f1790();
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2 * 4);
  }
  local_res8 = (undefined1)lVar4;
  FUN_1438f3000(*param_1,param_1[1],lVar4,param_1,local_res8,local_res8,uVar5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  param_1[2] = lVar4 + param_2 * 4;
  param_1[1] = lVar4 + (lVar2 - lVar1 >> 2) * 4;
  *param_1 = lVar4;
  return;
}



// FUNCTION 1438f7320 FUN_1438f7320 body=124 status=ok
// SIG undefined FUN_1438f7320(void)

void FUN_1438f7320(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 2)) {
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 2;
  if (-lVar1 - 1U < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar1;
  uVar3 = param_1[2] - *param_1 >> 2;
  uVar2 = 0;
  if (uVar3 <= ~(uVar3 >> 1)) {
    uVar2 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  FUN_1438f7260(param_1,param_2);
  return;
}



// FUNCTION 1438f73a0 FUN_1438f73a0 body=955 status=ok
// SIG undefined FUN_1438f73a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f73a0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  void *_Dst;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_118 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14390a570(*(longlong *)(param_1 + 0x58));
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1438ff460(*(longlong *)(param_1 + 0x20));
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1438f9a40(*(longlong *)(param_1 + 8));
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  if (plVar5 != (longlong *)0x0) {
    lVar8 = *plVar5;
    if (lVar8 != 0) {
      plVar6 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (lVar8 != 0) {
    _eh_vector_destructor_iterator_(lVar8 + 0x50,0x28,0x10,FUN_1438f35e0);
    _Mtx_destroy_in_situ(lVar8);
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 100),0,0x80);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  local_128 = 0x7f7fffff;
  uStack_124 = 0x7f7fffff;
  local_120 = 0x7f7fffff;
  puVar10 = (undefined8 *)(param_1 + 0x428);
  puVar11 = (undefined4 *)(param_1 + 0x738);
  puVar9 = (undefined8 *)(param_1 + 0xe8);
  _Dst = (void *)(param_1 + 0x748);
  lVar8 = 4;
  do {
    *puVar9 = 0x7f7fffff7f7fffff;
    *(undefined4 *)(puVar9 + 1) = 0x7f7fffff;
    *puVar11 = 0x3f800000;
    puVar7 = (undefined8 *)FUN_1438f8e80(local_108);
    uVar4 = puVar7[1];
    puVar10[-0x62] = *puVar7;
    puVar10[-0x61] = uVar4;
    uVar4 = puVar7[3];
    puVar10[-0x60] = puVar7[2];
    puVar10[-0x5f] = uVar4;
    uVar4 = puVar7[5];
    puVar10[-0x5e] = puVar7[4];
    puVar10[-0x5d] = uVar4;
    uVar4 = puVar7[7];
    puVar10[-0x5c] = puVar7[6];
    puVar10[-0x5b] = uVar4;
    uVar4 = puVar7[9];
    puVar10[-0x5a] = puVar7[8];
    puVar10[-0x59] = uVar4;
    uVar4 = puVar7[0xb];
    puVar10[-0x58] = puVar7[10];
    puVar10[-0x57] = uVar4;
    uVar4 = puVar7[0xd];
    puVar10[-0x56] = puVar7[0xc];
    puVar10[-0x55] = uVar4;
    uVar4 = puVar7[0xf];
    puVar10[-0x54] = puVar7[0xe];
    puVar10[-0x53] = uVar4;
    uVar4 = puVar7[0x11];
    puVar10[-0x52] = puVar7[0x10];
    puVar10[-0x51] = uVar4;
    uVar4 = puVar7[0x13];
    puVar10[-0x50] = puVar7[0x12];
    puVar10[-0x4f] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xa4);
    uVar2 = *(undefined4 *)(puVar7 + 0x15);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xac);
    *(undefined4 *)(puVar10 + -0x4e) = *(undefined4 *)(puVar7 + 0x14);
    *(undefined4 *)((longlong)puVar10 + -0x26c) = uVar1;
    *(undefined4 *)(puVar10 + -0x4d) = uVar2;
    *(undefined4 *)((longlong)puVar10 + -0x264) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xb4);
    uVar2 = *(undefined4 *)(puVar7 + 0x17);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xbc);
    *(undefined4 *)(puVar10 + -0x4c) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((longlong)puVar10 + -0x25c) = uVar1;
    *(undefined4 *)(puVar10 + -0x4b) = uVar2;
    *(undefined4 *)((longlong)puVar10 + -0x254) = uVar3;
    *(undefined4 *)(puVar10 + -0x4a) = *(undefined4 *)(puVar7 + 0x18);
    puVar7 = (undefined8 *)FUN_1438f8e80(local_108);
    uVar4 = puVar7[1];
    *puVar10 = *puVar7;
    puVar10[1] = uVar4;
    uVar4 = puVar7[3];
    puVar10[2] = puVar7[2];
    puVar10[3] = uVar4;
    uVar4 = puVar7[5];
    puVar10[4] = puVar7[4];
    puVar10[5] = uVar4;
    uVar4 = puVar7[7];
    puVar10[6] = puVar7[6];
    puVar10[7] = uVar4;
    uVar4 = puVar7[9];
    puVar10[8] = puVar7[8];
    puVar10[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar10[10] = puVar7[10];
    puVar10[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar10[0xc] = puVar7[0xc];
    puVar10[0xd] = uVar4;
    uVar4 = puVar7[0xf];
    puVar10[0xe] = puVar7[0xe];
    puVar10[0xf] = uVar4;
    uVar4 = puVar7[0x11];
    puVar10[0x10] = puVar7[0x10];
    puVar10[0x11] = uVar4;
    uVar4 = puVar7[0x13];
    puVar10[0x12] = puVar7[0x12];
    puVar10[0x13] = uVar4;
    uVar4 = puVar7[0x15];
    puVar10[0x14] = puVar7[0x14];
    puVar10[0x15] = uVar4;
    uVar4 = puVar7[0x17];
    puVar10[0x16] = puVar7[0x16];
    puVar10[0x17] = uVar4;
    *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(puVar7 + 0x18);
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x80);
    _Dst = (void *)((longlong)_Dst + 0x80);
    puVar11 = puVar11 + 1;
    puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
    puVar10 = (undefined8 *)((longlong)puVar10 + 0xc4);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1438f7760 _Reset_move body=106 status=ok
// SIG undefined _Reset_move(void)

void std::_Func_class<void>::_Reset_move(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}



// FUNCTION 1438f77d0 FUN_1438f77d0 body=233 status=ok
// SIG undefined FUN_1438f77d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f77d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_68 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[7];
  if ((plVar1 != param_1) && (*(longlong *)(param_2 + 0x38) != param_2)) {
    param_1[7] = *(longlong *)(param_2 + 0x38);
    *(longlong **)(param_2 + 0x38) = plVar1;
    return;
  }
  local_20 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      local_20 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_58);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 == (longlong *)0x0) goto LAB_1438f7864;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      plVar1 = local_20;
    }
    local_20 = plVar1;
    param_1[7] = 0;
  }
LAB_1438f7864:
  std::_Func_class<void>::_Reset_move(param_1,param_2);
  std::_Func_class<void>::_Reset_move(param_2,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
  return;
}



// FUNCTION 1438f78c0 FUN_1438f78c0 body=8 status=ok
// SIG undefined FUN_1438f78c0(void)

TypeDescriptor * FUN_1438f78c0(void)

{
  return &<lambda_49fb250adb3992cd52591209442241d9>::RTTI_Type_Descriptor;
}



// FUNCTION 1438f78d0 FUN_1438f78d0 body=70 status=ok
// SIG undefined FUN_1438f78d0(void)

void FUN_1438f78d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  return;
}



// FUNCTION 1438f7920 clear body=126 status=ok
// SIG undefined clear(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::clear(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    _Erase(param_1,plVar3[2],param_3,param_4,uVar4);
    plVar2 = (longlong *)*plVar3;
    FMemory::operator_delete(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(*param_1 + 8) = *param_1;
  *(longlong *)*param_1 = *param_1;
  *(longlong *)(*param_1 + 0x10) = *param_1;
  param_1[1] = 0;
  return;
}



// FUNCTION 1438f79a0 FUN_1438f79a0 body=111 status=ok
// SIG undefined FUN_1438f79a0(void)

void FUN_1438f79a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  plVar3 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar3 != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*plVar3;
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar3,*plVar2,param_4,uVar4);
      plVar3 = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  return;
}



// FUNCTION 1438f7a10 deallocate body=109 status=ok
// SIG undefined deallocate(void)

void std::allocator<sTokenChange>::deallocate
               (undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x3fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 4) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 1438f7a90 erase body=218 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res18;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    clear();
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  while (param_3 != param_4) {
    local_res18 = param_3;
    if (*(char *)((longlong)param_3 + 0x19) == '\0') {
      local_res18 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res18 + 0x19);
        plVar2 = (longlong *)*local_res18;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          local_res18 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar2 = param_3;
        while ((local_res18 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)local_res18[2]))) {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar3 = (longlong *)local_res18[1];
          plVar2 = local_res18;
        }
      }
    }
    erase(param_1,local_res8,param_3);
    param_3 = local_res18;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 1438f7b70 erase body=978 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res18;
  
  local_res18 = param_3;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    local_res18 = (longlong *)param_3[2];
    if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
      cVar1 = *(char *)(*local_res18 + 0x19);
      plVar7 = (longlong *)*local_res18;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        local_res18 = plVar7;
        plVar7 = (longlong *)*plVar7;
      }
    }
    else {
      cVar1 = *(char *)(param_3[1] + 0x19);
      plVar8 = (longlong *)param_3[1];
      plVar7 = param_3;
      while ((local_res18 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)local_res18[2]))) {
        cVar1 = *(char *)(local_res18[1] + 0x19);
        plVar8 = (longlong *)local_res18[1];
        plVar7 = local_res18;
      }
    }
  }
  plVar7 = (longlong *)*param_3;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar8 = plVar7;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (plVar8 = (longlong *)local_res18[2], local_res18 != param_3)) {
      plVar7[1] = (longlong)local_res18;
      *local_res18 = *param_3;
      plVar7 = local_res18;
      if (local_res18 != (longlong *)param_3[2]) {
        plVar7 = (longlong *)local_res18[1];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          plVar8[1] = (longlong)plVar7;
        }
        *plVar7 = (longlong)plVar8;
        local_res18[2] = param_3[2];
        *(longlong **)(param_3[2] + 8) = local_res18;
      }
      if (*(longlong **)(*param_1 + 8) == param_3) {
        *(longlong **)(*param_1 + 8) = local_res18;
      }
      else {
        puVar4 = (undefined8 *)param_3[1];
        if ((longlong *)*puVar4 == param_3) {
          *puVar4 = local_res18;
        }
        else {
          puVar4[2] = local_res18;
        }
      }
      local_res18[1] = param_3[1];
      lVar3 = local_res18[3];
      *(char *)(local_res18 + 3) = (char)param_3[3];
      *(char *)(param_3 + 3) = (char)lVar3;
      goto LAB_1438f7d32;
    }
  }
  else {
    plVar8 = (longlong *)param_3[2];
  }
  plVar7 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar8[1] = (longlong)plVar7;
  }
  if (*(longlong **)(*param_1 + 8) == param_3) {
    *(longlong **)(*param_1 + 8) = plVar8;
  }
  else if ((longlong *)*plVar7 == param_3) {
    *plVar7 = (longlong)plVar8;
  }
  else {
    plVar7[2] = (longlong)plVar8;
  }
  if (*(longlong **)*param_1 == param_3) {
    plVar6 = plVar7;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar2 = (longlong *)*plVar8;
      plVar6 = plVar8;
      while (plVar5 = plVar2, cVar1 == '\0') {
        plVar2 = (longlong *)*plVar5;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        plVar6 = plVar5;
      }
    }
    *(longlong **)*param_1 = plVar6;
  }
  lVar3 = *param_1;
  if (*(longlong **)(lVar3 + 0x10) == param_3) {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar2 = plVar8;
      while (plVar5 = plVar6, cVar1 == '\0') {
        plVar6 = (longlong *)plVar5[2];
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        plVar2 = plVar5;
      }
      *(longlong **)(lVar3 + 0x10) = plVar2;
    }
    else {
      *(longlong **)(lVar3 + 0x10) = plVar7;
    }
  }
LAB_1438f7d32:
  if ((char)param_3[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar7 = (longlong *)*plVar6;
        if (plVar8 == plVar7) {
          plVar7 = (longlong *)plVar6[2];
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar4 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar4) {
                *puVar4 = plVar7;
              }
              else {
                puVar4[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar7;
            plVar7 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(*plVar7 + 0x18) != '\x01') || (*(char *)(plVar7[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar7[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar7 + 0x18) = 1;
                *(undefined1 *)(plVar7 + 3) = 0;
                _Rrotate(param_1,plVar7);
                plVar7 = (longlong *)plVar6[2];
              }
              *(char *)(plVar7 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              _Lrotate(param_1,plVar6);
              break;
            }
LAB_1438f7ea9:
            *(undefined1 *)(plVar7 + 3) = 0;
          }
        }
        else {
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            lVar3 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar3 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar7 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar7[2]) {
                plVar7[2] = lVar3;
              }
              else {
                *plVar7 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar6;
            plVar6[1] = lVar3;
            plVar7 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(plVar7[2] + 0x18) == '\x01') && (*(char *)(*plVar7 + 0x18) == '\x01'))
            goto LAB_1438f7ea9;
            if (*(char *)(*plVar7 + 0x18) == '\x01') {
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              *(undefined1 *)(plVar7 + 3) = 0;
              _Lrotate(param_1,plVar7,plVar6,plVar6);
              plVar7 = (longlong *)*plVar6;
            }
            *(char *)(plVar7 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar7 + 0x18) = 1;
            _Rrotate(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  FMemory::operator_delete(param_3);
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  *param_2 = local_res18;
  return param_2;
}



// FUNCTION 1438f7f50 FUN_1438f7f50 body=140 status=ok
// SIG undefined FUN_1438f7f50(void)

void FUN_1438f7f50(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_1438f7320(param_1,1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] =
           *(undefined4 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_1438f7320(param_1,1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}



// FUNCTION 1438f7fe0 FUN_1438f7fe0 body=212 status=ok
// SIG undefined FUN_1438f7fe0(void)

undefined8 * FUN_1438f7fe0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_2 + 0x18) - *(ulonglong *)(param_2 + 0x10) <
       *(ulonglong *)(param_3 + 0x10)) &&
     (*(ulonglong *)(param_2 + 0x10) <=
      *(longlong *)(param_3 + 0x18) - *(ulonglong *)(param_3 + 0x10))) {
    uVar1 = FUN_1438f8b10(param_3,0,param_2,0,0xffffffffffffffff);
    param_1[3] = 7;
    param_1[2] = 0;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)puVar2 = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Assign_rv
              (param_1,uVar1);
  }
  else {
    uVar1 = FUN_1438f86d0(param_2,param_3,0,0xffffffffffffffff);
    param_1[3] = 7;
    param_1[2] = 0;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)puVar2 = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Assign_rv
              (param_1,uVar1);
  }
  return param_1;
}



// FUNCTION 1438f80c0 FUN_1438f80c0 body=14 status=ok
// SIG undefined FUN_1438f80c0(void)

undefined8 * FUN_1438f80c0(undefined8 *param_1)

{
  *param_1 = TritonRuntime::TritonDefaultLogHook::vftable;
  return param_1;
}



// FUNCTION 1438f80d0 FUN_1438f80d0 body=96 status=ok
// SIG undefined FUN_1438f80d0(void)

void FUN_1438f80d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (7 < (ulonglong)param_1[3]) {
    uVar1 = *param_1;
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 8) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    *(undefined2 *)*param_1 = 0;
  }
  return;
}



// FUNCTION 1438f8130 FUN_1438f8130 body=43 status=ok
// SIG undefined FUN_1438f8130(void)

undefined8 * FUN_1438f8130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = TritonRuntime::ITritonLogHook::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1438f8160 FUN_1438f8160 body=80 status=ok
// SIG undefined FUN_1438f8160(void)

undefined8 *
FUN_1438f8160(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = TritonRuntime::ITritonLogHook::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8,param_3,param_4,0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 1438f81b0 FUN_1438f81b0 body=776 status=ok
// SIG undefined FUN_1438f81b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f81b0(undefined8 param_1,int param_2,short *param_3,short *param_4)

{
  wchar_t wVar1;
  undefined8 uVar2;
  longlong *plVar3;
  FILE *_File;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined2 local_c0;
  undefined6 uStack_be;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined2 local_a0;
  undefined6 uStack_9e;
  undefined8 local_90;
  ulonglong local_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  undefined8 local_70;
  ulonglong local_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 ***local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_108 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_88 = 7;
  lVar8 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar5 = -1;
  lVar7 = lVar8;
  if (*param_4 != 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_4[lVar7] != 0);
  }
  FUN_1438f8920(&local_a0,param_4,lVar7);
  local_a8 = 7;
  local_b0 = 0;
  local_c0 = 0;
  FUN_1438f8920(&local_c0,L" -- ",4);
  local_c8 = 7;
  local_d0 = 0;
  local_e0 = 0;
  lVar7 = lVar8;
  if (*param_3 != 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_3[lVar7] != 0);
  }
  FUN_1438f8920(&local_e0,param_3,lVar7);
  if (param_2 == 0) {
    pwVar4 = L"Log: ";
  }
  else if (param_2 == 1) {
    pwVar4 = L"Warning: ";
  }
  else if (param_2 == 2) {
    pwVar4 = L"ERROR: ";
  }
  else if (param_2 == 3) {
    pwVar4 = L"**FATAL**: ";
  }
  else {
    pwVar4 = L"UnknownLogType: ";
  }
  local_e8 = 7;
  local_f0 = 0;
  local_100 = 0;
  wVar1 = *pwVar4;
  while (wVar1 != L'\0') {
    lVar5 = lVar5 + 1;
    lVar8 = lVar5;
    wVar1 = pwVar4[lVar5];
  }
  FUN_1438f8920(&local_100,pwVar4,lVar8);
  uVar2 = FUN_1438f7fe0(&local_60,&local_100,&local_e0);
  uVar2 = FUN_1438f7fe0(&local_80,uVar2,&local_c0);
  FUN_1438f7fe0(local_40,uVar2,&local_a0);
  if (7 < local_68) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,CONCAT62(uStack_7e,local_80));
  }
  local_68 = 7;
  local_70 = 0;
  local_80 = 0;
  if (7 < local_48) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,CONCAT62(uStack_5e,local_60));
  }
  local_48 = 7;
  local_50 = 0;
  local_60 = 0;
  if (7 < local_e8) {
    uVar2 = CONCAT62(uStack_fe,local_100);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  }
  local_e8 = 7;
  local_f0 = 0;
  local_100 = 0;
  if (7 < local_c8) {
    uVar2 = CONCAT62(uStack_de,local_e0);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  }
  local_c8 = 7;
  local_d0 = 0;
  local_e0 = 0;
  if (7 < local_a8) {
    uVar2 = CONCAT62(uStack_be,local_c0);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  }
  local_a8 = 7;
  local_b0 = 0;
  local_c0 = 0;
  if (7 < local_88) {
    uVar2 = CONCAT62(uStack_9e,local_a0);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  }
  ppppuVar6 = local_40;
  if (7 < local_28) {
    ppppuVar6 = (undefined8 ****)local_40[0];
  }
  _File = (FILE *)__acrt_iob_func(2);
  fprintf(_File,"%",ppppuVar6);
  if (7 < local_28) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,local_40[0]);
  }
  return;
}



// FUNCTION 1438f84c0 _Assign_rv body=141 status=ok
// SIG undefined _Assign_rv(void)

void std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Assign_rv
               (undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 8) {
    if (param_2[2] + 1 != 0) {
      memmove(param_1,param_2,(param_2[2] + 1) * 2);
    }
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_2;
    }
    *param_2 = 0;
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 7;
  param_2[2] = 0;
  if (7 < (ulonglong)param_2[3]) {
    *(undefined2 *)*param_2 = 0;
    return;
  }
  *(undefined2 *)param_2 = 0;
  return;
}



// FUNCTION 1438f8550 FUN_1438f8550 body=294 status=ok
// SIG undefined FUN_1438f8550(void)

void FUN_1438f8550(undefined8 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *_Dst;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = param_2 | 7;
  if (uVar6 != 0xffffffffffffffff) {
    uVar1 = param_1[3];
    uVar5 = uVar1 >> 1;
    param_2 = uVar6;
    if ((uVar6 / 3 < uVar5) && (param_2 = 0xfffffffffffffffe, uVar1 <= -uVar5 - 2)) {
      param_2 = uVar5 + uVar1;
    }
  }
  if (param_2 + 1 == 0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_1438f1790();
    _Dst = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,(param_2 + 1) * 2);
  }
  if (param_3 != 0) {
    puVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,puVar4,param_3 * 2);
    }
  }
  if (7 < (ulonglong)param_1[3]) {
    uVar2 = *param_1;
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,*plVar3,param_4,uVar7);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined2 *)puVar4 = 0;
  *param_1 = _Dst;
  param_1[3] = param_2;
  param_1[2] = param_3;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = _Dst;
  }
  *(undefined2 *)((longlong)param_1 + param_3 * 2) = 0;
  return;
}



// FUNCTION 1438f86a0 FUN_1438f86a0 body=46 status=ok
// SIG undefined FUN_1438f86a0(void)

undefined8 FUN_1438f86a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
                    /* WARNING: Could not recover jumptable at 0x0001438f86c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2 * 2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1438f86d0 FUN_1438f86d0 body=281 status=ok
// SIG undefined FUN_1438f86d0(void)

undefined8 *
FUN_1438f86d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_4 < (ulonglong)~param_1[2]) {
    uVar1 = param_1[2] + param_4;
    if (param_4 != 0) {
      if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("string too long");
      }
      if ((ulonglong)param_1[3] < uVar1) {
        FUN_1438f8550(param_1,uVar1);
        if (uVar1 == 0) {
          return param_1;
        }
      }
      else if (uVar1 == 0) {
        param_1[2] = 0;
        puVar2 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar2 = (undefined8 *)*param_1;
        }
        *(undefined2 *)puVar2 = 0;
        return param_1;
      }
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((undefined2 *)((longlong)puVar2 + param_1[2] * 2),
                   (void *)((longlong)param_2 + param_3 * 2),param_4 * 2);
      }
      param_1[2] = uVar1;
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined2 *)((longlong)puVar2 + uVar1 * 2) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}



// FUNCTION 1438f87f0 FUN_1438f87f0 body=294 status=ok
// SIG undefined FUN_1438f87f0(void)

undefined8 *
FUN_1438f87f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_1 == param_2) {
    param_3 = param_3 + param_4;
    if ((ulonglong)param_1[2] < param_3) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    param_1[2] = param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar2 + param_3 * 2) = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::erase(param_1,0);
  }
  else {
    if (param_4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < param_4) {
      FUN_1438f8550(param_1,param_4,param_1[2]);
      if (param_4 == 0) {
        return param_1;
      }
    }
    else if (param_4 == 0) {
      param_1[2] = 0;
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined2 *)puVar2 = 0;
      return param_1;
    }
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      _guard_xfg_dispatch_icall_nop
                (puVar2,(undefined2 *)((longlong)param_2 + param_3 * 2),param_4 * 2);
    }
    param_1[2] = param_4;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar2 + param_4 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1438f8920 FUN_1438f8920 body=315 status=ok
// SIG undefined FUN_1438f8920(void)

undefined8 * FUN_1438f8920(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (7 < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (7 < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2] * 2)) {
        puVar2 = param_1;
        if (7 < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)
                 FUN_1438f87f0(param_1,param_1,(longlong)param_2 - (longlong)puVar2 >> 1,param_3);
        return puVar2;
      }
    }
  }
  if (param_3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((ulonglong)param_1[3] < param_3) {
    FUN_1438f8550(param_1,param_3,param_1[2]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[2] = 0;
    if (7 < (ulonglong)param_1[3]) {
      *(undefined2 *)*param_1 = 0;
      return param_1;
    }
    *(undefined2 *)param_1 = 0;
    return param_1;
  }
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  if (param_3 != 0) {
    _guard_xfg_dispatch_icall_nop(puVar2,param_2,param_3 * 2);
  }
  param_1[2] = param_3;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar2 + param_3 * 2) = 0;
  return param_1;
}



// FUNCTION 1438f8a60 erase body=170 status=ok
// SIG undefined erase(void)

undefined8 *
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::erase
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  void *_Dst;
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_3 < uVar1 - param_2) {
    if (param_3 != 0) {
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      lVar3 = uVar1 - param_3;
      _Dst = (void *)((longlong)puVar2 + param_2 * 2);
      if (lVar3 - param_2 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + param_3 * 2),(lVar3 - param_2) * 2);
      }
      param_1[2] = lVar3;
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined2 *)((longlong)puVar2 + lVar3 * 2) = 0;
    }
    return param_1;
  }
  param_1[2] = param_2;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar2 + param_2 * 2) = 0;
  return param_1;
}



// FUNCTION 1438f8b10 FUN_1438f8b10 body=440 status=ok
// SIG undefined FUN_1438f8b10(void)

undefined8 *
FUN_1438f8b10(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_4 <= (ulonglong)param_3[2]) {
    uVar2 = param_3[2] - param_4;
    if (uVar2 < param_5) {
      param_5 = uVar2;
    }
    if (param_5 < ~uVar1) {
      uVar1 = uVar1 + param_5;
      if (param_5 != 0) {
        if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("string too long");
        }
        if ((ulonglong)param_1[3] < uVar1) {
          FUN_1438f8550(param_1,uVar1);
          if (uVar1 == 0) {
            return param_1;
          }
        }
        else if (uVar1 == 0) {
          param_1[2] = 0;
          puVar4 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar4 = (undefined8 *)*param_1;
          }
          *(undefined2 *)puVar4 = 0;
          return param_1;
        }
        puVar3 = param_1;
        puVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar3 = (undefined8 *)*param_1;
          puVar4 = (undefined8 *)*param_1;
        }
        if (param_1[2] - param_2 != 0) {
          memmove((void *)((longlong)puVar3 + (param_2 + param_5) * 2),
                  (undefined2 *)((longlong)puVar4 + param_2 * 2),(param_1[2] - param_2) * 2);
        }
        if (param_1 == param_3) {
          uVar2 = param_4 + param_5;
          if (param_4 <= param_2) {
            uVar2 = param_4;
          }
          puVar3 = param_1;
          puVar4 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar3 = (undefined8 *)*param_1;
            puVar4 = (undefined8 *)*param_1;
          }
          if (param_5 != 0) {
            memmove((void *)((longlong)puVar3 + param_2 * 2),(void *)((longlong)puVar4 + uVar2 * 2),
                    param_5 * 2);
          }
        }
        else {
          if (7 < (ulonglong)param_3[3]) {
            param_3 = (undefined8 *)*param_3;
          }
          puVar4 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar4 = (undefined8 *)*param_1;
          }
          if (param_5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)puVar4 + param_2 * 2),
                       (undefined2 *)((longlong)param_3 + param_4 * 2),param_5 * 2);
          }
        }
        param_1[2] = uVar1;
        puVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        *(undefined2 *)((longlong)puVar4 + uVar1 * 2) = 0;
      }
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid string position");
}



// FUNCTION 1438f8cd0 fprintf body=69 status=ok
// SIG int fprintf(FILE * _File, char * _Format, ...)

int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)__local_stdio_printf_options();
  iVar2 = __stdio_common_vfwprintf(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



// FUNCTION 1438f8d20 FUN_1438f8d20 body=14 status=ok
// SIG undefined FUN_1438f8d20(void)

undefined8 * FUN_1438f8d20(undefined8 *param_1)

{
  *param_1 = TritonRuntime::TritonDefaultMemHook::vftable;
  return param_1;
}



// FUNCTION 1438f8d30 FUN_1438f8d30 body=80 status=ok
// SIG undefined FUN_1438f8d30(void)

undefined8 *
FUN_1438f8d30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = TritonRuntime::ITritonMemHook::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8,param_3,param_4,0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 1438f8d80 FUN_1438f8d80 body=10 status=ok
// SIG undefined FUN_1438f8d80(void)

void FUN_1438f8d80(undefined8 param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001438f8d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_2);
  return;
}



// FUNCTION 1438f8d90 FUN_1438f8d90 body=13 status=ok
// SIG undefined FUN_1438f8d90(void)

void FUN_1438f8d90(undefined8 param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001438f8d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  realloc(param_2,param_3);
  return;
}



// FUNCTION 1438f8da0 FUN_1438f8da0 body=68 status=ok
// SIG undefined FUN_1438f8da0(void)

void FUN_1438f8da0(int *param_1,int *param_2)

{
  _guard_xfg_dispatch_icall_nop
            ((float)(param_1[1] - param_2[1]) * (float)(param_1[1] - param_2[1]) +
             (float)(*param_1 - *param_2) * (float)(*param_1 - *param_2) +
             (float)(param_1[2] - param_2[2]) * (float)(param_1[2] - param_2[2]));
  return;
}



// FUNCTION 1438f8df0 FUN_1438f8df0 body=37 status=ok
// SIG undefined FUN_1438f8df0(void)

float FUN_1438f8df0(float *param_1,float *param_2)

{
  return param_2[1] * param_1[1] + *param_2 * *param_1 + param_2[2] * param_1[2];
}



// FUNCTION 1438f8e20 FUN_1438f8e20 body=91 status=ok
// SIG undefined FUN_1438f8e20(void)

undefined4 FUN_1438f8e20(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_3[2] - param_1[2];
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  ((param_2[2] - param_1[2]) * iVar1 < 1 &&
                  (param_2[1] - param_1[1]) * (param_3[1] - param_1[1]) < 1) &&
                  (*param_2 - *param_1) * (*param_3 - *param_1) < 1);
}



// FUNCTION 1438f8e80 FUN_1438f8e80 body=84 status=ok
// SIG undefined FUN_1438f8e80(void)

undefined4 * FUN_1438f8e80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = param_1 + 1;
  lVar3 = 0x10;
  *param_1 = 0;
  lVar4 = 0x10;
  do {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 1;
    puVar2 = puVar2 + 3;
    lVar4 = lVar4 + -1;
    puVar1 = param_1;
  } while (lVar4 != 0);
  do {
    puVar1[3] = 1;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 3;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 1438f8ee0 FUN_1438f8ee0 body=33 status=ok
// SIG undefined FUN_1438f8ee0(void)

void FUN_1438f8ee0(undefined4 *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  do {
    param_1 = param_1 + 3;
    *param_1 = 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438f8f10 FUN_1438f8f10 body=273 status=ok
// SIG undefined FUN_1438f8f10(void)

void FUN_1438f8f10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar12 = 0;
  piVar9 = (int *)(param_1 + 0x18);
  iVar13 = 0;
  lVar14 = 0;
  do {
    if (piVar9[-3] != 0) break;
    if (*piVar9 != 0) {
      iVar13 = iVar13 + 1;
      break;
    }
    if (piVar9[3] != 0) {
      iVar13 = iVar13 + 2;
      break;
    }
    if (piVar9[6] != 0) {
      iVar13 = iVar13 + 3;
      break;
    }
    lVar14 = lVar14 + 4;
    piVar9 = piVar9 + 0xc;
    iVar13 = iVar13 + 4;
  } while (lVar14 < 0x10);
  puVar10 = (undefined8 *)(param_1 + 4);
  lVar14 = 0x10;
  puVar11 = param_2;
  do {
    if ((*(int *)(puVar10 + 1) == 0) && (iVar13 < iVar12)) {
      uVar3 = *puVar10;
      uVar4 = *(undefined4 *)(puVar10 + 1);
      lVar15 = (longlong)iVar13;
      lVar1 = param_1 + lVar15 * 0xc;
      *puVar10 = *(undefined8 *)(param_1 + 4 + lVar15 * 0xc);
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar1 + 0xc);
      *(undefined8 *)(lVar1 + 4) = uVar3;
      *(undefined4 *)(lVar1 + 0xc) = uVar4;
      if (param_2 != (undefined8 *)0x0) {
        uVar7 = *puVar11;
        uVar8 = puVar11[1];
        uVar3 = puVar11[2];
        puVar2 = param_2 + lVar15 * 3;
        uVar4 = *(undefined4 *)((longlong)puVar2 + 4);
        uVar5 = *(undefined4 *)(puVar2 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
        *(undefined4 *)puVar11 = *(undefined4 *)puVar2;
        *(undefined4 *)((longlong)puVar11 + 4) = uVar4;
        *(undefined4 *)(puVar11 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar11 + 0xc) = uVar6;
        puVar11[2] = param_2[lVar15 * 3 + 2];
        param_2[lVar15 * 3] = uVar7;
        (param_2 + lVar15 * 3)[1] = uVar8;
        param_2[lVar15 * 3 + 2] = uVar3;
      }
      iVar13 = FUN_1438f9030(param_1);
    }
    iVar12 = iVar12 + 1;
    puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
    puVar11 = puVar11 + 3;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}



// FUNCTION 1438f9030 FUN_1438f9030 body=60 status=ok
// SIG undefined FUN_1438f9030(void)

ulonglong FUN_1438f9030(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x18);
  uVar4 = uVar2;
  while( true ) {
    if (piVar3[-3] != 0) {
      return uVar2;
    }
    iVar1 = (int)uVar2;
    if (*piVar3 != 0) {
      return (ulonglong)(iVar1 + 1);
    }
    if (piVar3[3] != 0) {
      return (ulonglong)(iVar1 + 2);
    }
    if (piVar3[6] != 0) break;
    uVar4 = uVar4 + 4;
    piVar3 = piVar3 + 0xc;
    uVar2 = (ulonglong)(iVar1 + 4);
    if (0xf < (longlong)uVar4) {
      return uVar2;
    }
  }
  return (ulonglong)(iVar1 + 3);
}



// FUNCTION 1438f9070 FUN_1438f9070 body=753 status=ok
// SIG undefined FUN_1438f9070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1438f9070(undefined4 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  int local_138 [2];
  undefined1 local_130 [24];
  undefined4 local_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((param_3 == 0) || (param_4 == 0)) {
    puVar4 = (undefined4 *)((longlong)param_2 + 4);
    *(undefined4 *)param_2 = 0;
    lVar11 = 0x10;
    lVar8 = 0x10;
    do {
      *puVar4 = 0xffffffff;
      puVar4[1] = 0;
      puVar4[2] = 1;
      puVar4 = puVar4 + 3;
      lVar8 = lVar8 + -1;
      puVar2 = param_2;
    } while (lVar8 != 0);
    do {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
      lVar11 = lVar11 + -1;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
    } while (lVar11 != 0);
  }
  else {
    puVar4 = (undefined4 *)((longlong)&uStack_110 + 4);
    lVar8 = 0x10;
    lVar11 = 0x10;
    uVar7 = 0;
    do {
      puVar4[-2] = 0xffffffff;
      puVar4[-1] = 0;
      *puVar4 = 1;
      puVar4 = puVar4 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar4 = (undefined4 *)((longlong)&uStack_110 + 4);
    do {
      *puVar4 = 1;
      puVar4 = puVar4 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_118 = *param_1;
    pfVar12 = (float *)(param_1 + 2);
    uVar10 = uVar7;
    do {
      if ((pfVar12[1] == 0.0) && (iVar3 = FUN_1438f4570(param_3,pfVar12[-1]), -1 < iVar3)) {
        local_148 = 0;
        FUN_1439098c0(param_4,local_130,iVar3,local_138);
        if (local_138[0] == 0) {
          if (0 < (longlong)uVar10) {
            piVar5 = (int *)((longlong)&uStack_110 + 4);
            uVar6 = uVar7;
            do {
              if ((piVar5[-2] == iVar3) && (*piVar5 == 0)) {
                *(float *)((longlong)&uStack_110 + uVar6 * 0xc) =
                     *pfVar12 + *(float *)((longlong)&uStack_110 + uVar6 * 0xc);
                goto LAB_1438f91e2;
              }
              uVar6 = uVar6 + 1;
              piVar5 = piVar5 + 3;
            } while ((longlong)uVar6 < (longlong)uVar10);
          }
          piVar5 = (int *)&uStack_100;
          uVar6 = uVar7;
          do {
            if (piVar5[-3] != 0) {
LAB_1438f91c9:
              if ((longlong)uVar6 < 0x10) {
                fVar1 = *pfVar12;
                (&iStack_114)[uVar6 * 3] = iVar3;
                *(float *)((longlong)&uStack_110 + uVar6 * 0xc) = fVar1;
                *(undefined4 *)((longlong)&uStack_110 + uVar6 * 0xc + 4) = 0;
              }
              break;
            }
            if (*piVar5 != 0) {
              uVar6 = uVar6 + 1;
              goto LAB_1438f91c9;
            }
            if (piVar5[3] != 0) {
              uVar6 = uVar6 + 2;
              goto LAB_1438f91c9;
            }
            if (piVar5[6] != 0) {
              uVar6 = uVar6 + 3;
              goto LAB_1438f91c9;
            }
            uVar6 = uVar6 + 4;
            piVar5 = piVar5 + 0xc;
          } while ((longlong)uVar6 < 0x10);
        }
LAB_1438f91e2:
        FUN_14390a6c0(local_130);
      }
      uVar10 = uVar10 + 1;
      pfVar12 = pfVar12 + 3;
    } while ((longlong)uVar10 < 0x10);
    piVar5 = (int *)&uStack_100;
    uVar10 = uVar7;
    do {
      uVar9 = (uint)uVar10;
      if (piVar5[-3] != 0) break;
      if (*piVar5 != 0) {
        uVar9 = uVar9 + 1;
        break;
      }
      if (piVar5[3] != 0) {
        uVar9 = uVar9 + 2;
        break;
      }
      if (piVar5[6] != 0) {
        uVar9 = uVar9 + 3;
        break;
      }
      uVar7 = uVar7 + 4;
      piVar5 = piVar5 + 0xc;
      uVar9 = uVar9 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((longlong)uVar7 < 0x10);
    if (0 < (int)uVar9) {
      FUN_1438f93a0(&local_118);
    }
    *param_2 = CONCAT44(iStack_114,local_118);
    param_2[1] = uStack_110;
    param_2[2] = local_108;
    param_2[3] = uStack_100;
    param_2[4] = local_f8;
    param_2[5] = uStack_f0;
    param_2[6] = local_e8;
    param_2[7] = uStack_e0;
    param_2[8] = local_d8;
    param_2[9] = uStack_d0;
    param_2[10] = local_c8;
    param_2[0xb] = uStack_c0;
    param_2[0xc] = local_b8;
    param_2[0xd] = uStack_b0;
    param_2[0xe] = local_a8;
    param_2[0xf] = uStack_a0;
    param_2[0x10] = local_98;
    param_2[0x11] = uStack_90;
    param_2[0x12] = local_88;
    param_2[0x13] = uStack_80;
    param_2[0x14] = local_78;
    param_2[0x15] = uStack_70;
    param_2[0x16] = local_68;
    param_2[0x17] = uStack_60;
    *(undefined4 *)(param_2 + 0x18) = local_58;
  }
  return param_2;
}



// FUNCTION 1438f9370 FUN_1438f9370 body=12 status=ok
// SIG undefined FUN_1438f9370(void)

undefined4 FUN_1438f9370(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 4 + (longlong)param_2 * 0xc);
}



// FUNCTION 1438f9380 FUN_1438f9380 body=14 status=ok
// SIG undefined FUN_1438f9380(void)

undefined4 FUN_1438f9380(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + ((longlong)param_2 + 1) * 0xc);
}



// FUNCTION 1438f9390 FUN_1438f9390 body=14 status=ok
// SIG undefined FUN_1438f9390(void)

undefined4 FUN_1438f9390(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 8 + (longlong)param_2 * 0xc);
}



// FUNCTION 1438f93a0 FUN_1438f93a0 body=330 status=ok
// SIG undefined FUN_1438f93a0(void)

void FUN_1438f93a0(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  ulonglong uVar5;
  
  uVar8 = 0;
  piVar1 = (int *)(param_1 + 0x18);
  fVar9 = 0.0;
  uVar5 = uVar8;
  uVar7 = uVar8;
  do {
    uVar4 = (uint)uVar5;
    if (piVar1[-3] != 0) break;
    if (*piVar1 != 0) {
      uVar4 = uVar4 + 1;
      break;
    }
    if (piVar1[3] != 0) {
      uVar4 = uVar4 + 2;
      break;
    }
    if (piVar1[6] != 0) {
      uVar4 = uVar4 + 3;
      break;
    }
    uVar7 = uVar7 + 4;
    piVar1 = piVar1 + 0xc;
    uVar4 = uVar4 + 4;
    uVar5 = (ulonglong)uVar4;
  } while ((longlong)uVar7 < 0x10);
  lVar6 = (longlong)(int)uVar4;
  uVar5 = uVar8;
  if (3 < lVar6) {
    pfVar2 = (float *)(param_1 + 0x14);
    lVar3 = (lVar6 - 4U >> 2) + 1;
    uVar5 = lVar3 * 4;
    do {
      fVar9 = fVar9 + pfVar2[-3] + *pfVar2 + pfVar2[3] + pfVar2[6];
      pfVar2 = pfVar2 + 0xc;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((longlong)uVar5 < lVar6) {
    pfVar2 = (float *)(param_1 + uVar5 * 0xc + 8);
    lVar3 = lVar6 - uVar5;
    do {
      fVar9 = fVar9 + *pfVar2;
      pfVar2 = pfVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  fVar9 = 1.0 / fVar9;
  if (3 < lVar6) {
    lVar3 = (lVar6 - 4U >> 2) + 1;
    uVar8 = lVar3 * 4;
    pfVar2 = (float *)(param_1 + 0x14);
    do {
      pfVar2[-3] = fVar9 * pfVar2[-3];
      *pfVar2 = fVar9 * *pfVar2;
      pfVar2[3] = fVar9 * pfVar2[3];
      pfVar2[6] = fVar9 * pfVar2[6];
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 0xc;
    } while (lVar3 != 0);
  }
  if ((longlong)uVar8 < lVar6) {
    lVar6 = lVar6 - uVar8;
    pfVar2 = (float *)(param_1 + uVar8 * 0xc + 8);
    do {
      *pfVar2 = fVar9 * *pfVar2;
      lVar6 = lVar6 + -1;
      pfVar2 = pfVar2 + 3;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1438f94f0 FUN_1438f94f0 body=15 status=ok
// SIG undefined FUN_1438f94f0(void)

void FUN_1438f94f0(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + ((longlong)param_2 + 1) * 0xc) = param_3;
  return;
}



// FUNCTION 1438f9500 FUN_1438f9500 body=27 status=ok
// SIG undefined FUN_1438f9500(void)

void FUN_1438f9500(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  *(undefined4 *)(param_1 + 8 + lVar1 * 0xc) = param_4;
  *(undefined4 *)(param_1 + 4 + lVar1 * 0xc) = param_3;
  *(undefined4 *)(param_1 + 0xc + lVar1 * 0xc) = 0;
  return;
}



// FUNCTION 1438f9520 FUN_1438f9520 body=14 status=ok
// SIG undefined FUN_1438f9520(void)

void FUN_1438f9520(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8 + (longlong)param_2 * 0xc) = param_3;
  return;
}



// FUNCTION 1438f9530 FUN_1438f9530 body=138 status=ok
// SIG undefined FUN_1438f9530(void)

undefined8 * FUN_1438f9530(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1104);
  uVar2 = *(undefined8 *)(param_1 + 0x104c);
  uVar3 = *(undefined8 *)(param_1 + 0x1054);
  uVar4 = *(undefined8 *)(param_1 + 0x105c);
  *param_2 = *(undefined8 *)(param_1 + 0x1044);
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1064);
  uVar5 = *(undefined8 *)(param_1 + 0x106c);
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x1074);
  uVar4 = *(undefined8 *)(param_1 + 0x107c);
  param_2[4] = uVar2;
  param_2[5] = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x1084);
  uVar5 = *(undefined8 *)(param_1 + 0x108c);
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x1094);
  uVar4 = *(undefined8 *)(param_1 + 0x109c);
  param_2[8] = uVar2;
  param_2[9] = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x10a4);
  uVar5 = *(undefined8 *)(param_1 + 0x10ac);
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x10c4);
  uVar4 = *(undefined8 *)(param_1 + 0x10cc);
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x10bc);
  param_2[0xe] = *(undefined8 *)(param_1 + 0x10b4);
  param_2[0xf] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10d4);
  uVar5 = *(undefined8 *)(param_1 + 0x10dc);
  param_2[0x10] = uVar3;
  param_2[0x11] = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x10e4);
  uVar4 = *(undefined8 *)(param_1 + 0x10ec);
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x10f4);
  uVar5 = *(undefined8 *)(param_1 + 0x10fc);
  param_2[0x14] = uVar3;
  param_2[0x15] = uVar4;
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar5;
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return param_2;
}



// FUNCTION 1438f95c0 FUN_1438f95c0 body=116 status=ok
// SIG undefined FUN_1438f95c0(void)

longlong FUN_1438f95c0(longlong param_1,undefined4 param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1040);
  if (0xf < iVar1) {
    return (ulonglong)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
  }
  *(undefined4 *)((longlong)iVar1 * 0x104 + param_1) = param_2;
  wcsncpy((wchar_t *)((longlong)*(int *)(param_1 + 0x1040) * 0x104 + 4 + param_1),param_3,0x80);
  *(undefined2 *)((longlong)*(int *)(param_1 + 0x1040) * 0x104 + 0x102 + param_1) = 0;
  *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
  return 1;
}



// FUNCTION 1438f9640 FUN_1438f9640 body=11 status=ok
// SIG undefined FUN_1438f9640(void)

void FUN_1438f9640(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1040) = 0;
  return;
}



// FUNCTION 1438f9650 FUN_1438f9650 body=126 status=ok
// SIG undefined FUN_1438f9650(void)

void FUN_1438f9650(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1044) = *param_2;
  *(undefined8 *)(param_1 + 0x104c) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x1054) = param_2[2];
  *(undefined8 *)(param_1 + 0x105c) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x1064) = param_2[4];
  *(undefined8 *)(param_1 + 0x106c) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x1074) = param_2[6];
  *(undefined8 *)(param_1 + 0x107c) = uVar1;
  uVar1 = param_2[9];
  *(undefined8 *)(param_1 + 0x1084) = param_2[8];
  *(undefined8 *)(param_1 + 0x108c) = uVar1;
  uVar1 = param_2[0xb];
  *(undefined8 *)(param_1 + 0x1094) = param_2[10];
  *(undefined8 *)(param_1 + 0x109c) = uVar1;
  uVar1 = param_2[0xd];
  *(undefined8 *)(param_1 + 0x10a4) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x10ac) = uVar1;
  uVar1 = param_2[0xf];
  *(undefined8 *)(param_1 + 0x10b4) = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10bc) = uVar1;
  uVar1 = param_2[0x11];
  *(undefined8 *)(param_1 + 0x10c4) = param_2[0x10];
  *(undefined8 *)(param_1 + 0x10cc) = uVar1;
  uVar1 = param_2[0x13];
  *(undefined8 *)(param_1 + 0x10d4) = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10dc) = uVar1;
  uVar1 = param_2[0x15];
  *(undefined8 *)(param_1 + 0x10e4) = param_2[0x14];
  *(undefined8 *)(param_1 + 0x10ec) = uVar1;
  uVar1 = param_2[0x17];
  *(undefined8 *)(param_1 + 0x10f4) = param_2[0x16];
  *(undefined8 *)(param_1 + 0x10fc) = uVar1;
  *(undefined4 *)(param_1 + 0x1104) = *(undefined4 *)(param_2 + 0x18);
  return;
}



// FUNCTION 1438f96d0 FUN_1438f96d0 body=62 status=ok
// SIG undefined FUN_1438f96d0(void)

void FUN_1438f96d0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 < 0x10) {
    uVar2 = param_3[1];
    lVar3 = (longlong)param_2 * 0x34;
    puVar1 = (undefined8 *)(lVar3 + 0x1108 + param_1);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    uVar2 = param_3[3];
    puVar1 = (undefined8 *)(lVar3 + 0x1118 + param_1);
    *puVar1 = param_3[2];
    puVar1[1] = uVar2;
    uVar2 = param_3[5];
    puVar1 = (undefined8 *)(lVar3 + 0x1128 + param_1);
    *puVar1 = param_3[4];
    puVar1[1] = uVar2;
    *(undefined4 *)(lVar3 + 0x1138 + param_1) = *(undefined4 *)(param_3 + 6);
  }
  return;
}



// FUNCTION 1438f9710 FUN_1438f9710 body=125 status=ok
// SIG undefined FUN_1438f9710(void)

ulonglong * FUN_1438f9710(uint param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  
  plVar2 = (longlong *)FUN_1438f1790();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = CONCAT44(0,param_1);
  uVar3 = SUB168(ZEXT816(0x18) * auVar1,0);
  if (SUB168(ZEXT816(0x18) * auVar1,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar4 = uVar3 + 8;
  if (0xfffffffffffffff7 < uVar3) {
    lVar4 = -1;
  }
  puVar5 = (ulonglong *)(**(code **)(*plVar2 + 8))(plVar2,lVar4);
  if (puVar5 != (ulonglong *)0x0) {
    *puVar5 = CONCAT44(0,param_1);
    _eh_vector_constructor_iterator_
              (puVar5 + 1,0x18,param_1,FTextSnapshot::FTextSnapshot,FUN_1438f9a80);
    return puVar5 + 1;
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1438f9790 FUN_1438f9790 body=93 status=ok
// SIG undefined FUN_1438f9790(void)

void FUN_1438f9790(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    _eh_vector_destructor_iterator_
              (lVar1,0x18,*(undefined8 *)(lVar1 + -8),FUN_1438f9a80,0xfffffffffffffffe);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,(undefined8 *)(lVar1 + -8));
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1438f97f0 FUN_1438f97f0 body=78 status=ok
// SIG undefined FUN_1438f97f0(void)

undefined4 * FUN_1438f97f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        param_3[3] = puVar2[1];
      }
      param_3 = param_3 + 4;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// FUNCTION 1438f9840 FUN_1438f9840 body=128 status=ok
// SIG undefined FUN_1438f9840(void)

longlong FUN_1438f9840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x28) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1438fbd70((undefined8 *)(param_1 + 0x38),0x80,param_3,param_4,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 1438f98c0 FUN_1438f98c0 body=127 status=ok
// SIG undefined FUN_1438f98c0(void)

undefined4 *
FUN_1438f98c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)(param_1 + 0x13) = param_6;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x50);
  if (lVar2 != 0) {
    uVar3 = FUN_1438f9840(lVar2);
  }
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  return param_1;
}



// FUNCTION 1438f9940 FUN_1438f9940 body=94 status=ok
// SIG undefined FUN_1438f9940(void)

void FUN_1438f9940(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    _eh_vector_destructor_iterator_
              (lVar1,0x18,*(undefined8 *)(lVar1 + -8),FUN_1438f9a80,0xfffffffffffffffe);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,(undefined8 *)(lVar1 + -8));
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1438f99a0 FUN_1438f99a0 body=145 status=ok
// SIG undefined FUN_1438f99a0(void)

void FUN_1438f99a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    _eh_vector_destructor_iterator_(lVar1,0x18,*(undefined8 *)(lVar1 + -8),FUN_1438f9a80,uVar3);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,(undefined8 *)(lVar1 + -8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1438f9a40 FUN_1438f9a40 body=59 status=ok
// SIG undefined FUN_1438f9a40(void)

void FUN_1438f9a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_1438f99a0(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 1438f9a80 FUN_1438f9a80 body=75 status=ok
// SIG undefined FUN_1438f9a80(void)

void FUN_1438f9a80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1438f9ad0 FUN_1438f9ad0 body=409 status=ok
// SIG undefined FUN_1438f9ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f9ad0(int *param_1,int *param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar2 = *param_2;
  iVar11 = param_2[1];
  local_48 = *(undefined8 *)param_2;
  iVar3 = param_2[2];
  iVar4 = *param_1;
  lVar9 = (longlong)(iVar3 / iVar4 + param_1[6] * (iVar11 / iVar4) + param_1[7] * (iVar2 / iVar4));
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 2) + lVar9 * 0x18);
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 2) + 8 + lVar9 * 0x18);
  local_40 = iVar3;
  local_3c = param_3;
  if ((&local_48 < puVar5) && (puVar6 = (undefined8 *)*puVar1, puVar6 <= &local_48)) {
    if (puVar5 == (undefined8 *)puVar1[2]) {
      FUN_1438fbe30(puVar1,1);
    }
    puVar7 = (undefined4 *)puVar1[1];
    if (puVar7 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)
                (((longlong)&local_48 - (longlong)puVar6 & 0xfffffffffffffff0U) + *puVar1);
      *puVar7 = *puVar10;
      puVar7[1] = puVar10[1];
      puVar7[2] = puVar10[2];
      puVar7[3] = puVar10[3];
    }
  }
  else {
    if (puVar5 == (undefined8 *)puVar1[2]) {
      FUN_1438fbe30(puVar1,1);
    }
    piVar8 = (int *)puVar1[1];
    if (piVar8 != (int *)0x0) {
      *piVar8 = iVar2;
      piVar8[1] = iVar11;
      piVar8[2] = iVar3;
      piVar8[3] = param_3;
    }
  }
  puVar1[1] = puVar1[1] + 0x10;
  iVar2 = *param_2;
  if (param_1[8] < *param_2) {
    iVar2 = param_1[8];
  }
  iVar11 = param_2[2];
  iVar3 = param_2[1];
  if (param_1[9] < param_2[1]) {
    iVar3 = param_1[9];
  }
  param_1[8] = iVar2;
  if (param_1[10] < iVar11) {
    iVar11 = param_1[10];
  }
  param_1[10] = iVar11;
  param_1[9] = iVar3;
  iVar2 = param_2[1];
  iVar11 = param_2[2];
  iVar3 = *param_2;
  if (*param_2 < param_1[0xb]) {
    iVar3 = param_1[0xb];
  }
  param_1[0xb] = iVar3;
  if (iVar2 < param_1[0xc]) {
    iVar2 = param_1[0xc];
  }
  param_1[0xc] = iVar2;
  if (iVar11 < param_1[0xd]) {
    iVar11 = param_1[0xd];
  }
  param_1[0xd] = iVar11;
  return;
}



// FUNCTION 1438f9c70 FUN_1438f9c70 body=43 status=ok
// SIG undefined FUN_1438f9c70(void)

void FUN_1438f9c70(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  FUN_1438f9ad0(*(undefined8 *)(param_1 + 0x38),&local_18);
  return;
}



// FUNCTION 1438f9ca0 FUN_1438f9ca0 body=3952 status=ok
// SIG undefined FUN_1438f9ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1438f9ca0(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,longlong param_5
             ,longlong *param_6,longlong param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float extraout_XMM0_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_468 [32];
  undefined8 *local_448;
  int **local_440;
  float *local_438;
  float *local_430;
  undefined4 local_428;
  undefined8 local_420;
  byte local_418;
  float local_414;
  float local_410 [2];
  longlong local_408;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  int *local_3f0 [2];
  longlong local_3e0;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0 [2];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [24];
  undefined8 local_3a0;
  float local_398;
  undefined8 local_388;
  float local_380;
  undefined8 local_378;
  float local_370;
  undefined8 local_368;
  float local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340 [24];
  float local_328;
  int aiStack_324 [15];
  float local_2e8 [32];
  undefined8 local_268;
  int local_260 [46];
  float local_1a8 [48];
  ulonglong local_e8;
  
  local_3c0 = 0xfffffffffffffffe;
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  local_3e0 = param_5;
  local_408 = param_7;
  local_3c8 = param_2;
  FUN_1438f8ee0(param_4);
  fVar21 = *(float *)(param_1 + 0x30);
  fVar19 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 4) / fVar21);
  fVar20 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 8) / fVar21);
  if ((0.0 < fVar19) && (0.0 < fVar20)) {
    fVar21 = 1.0 / fVar21;
    local_398 = (param_3[2] - *(float *)(param_1 + 0x20)) * fVar21;
    local_3a0 = CONCAT44((param_3[1] - *(float *)(param_1 + 0x1c)) * fVar21,
                         (*param_3 - *(float *)(param_1 + 0x18)) * fVar21);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar12 = 0x10;
      piVar9 = local_260;
      uVar15 = 0;
      do {
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        *piVar9 = 0;
        piVar9 = piVar9 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      uVar14 = uVar15;
      if (((local_408 == 0) || (param_6 == (longlong *)0x0)) ||
         (uVar13 = param_6[1] - *param_6 >> 2, uVar13 == 0)) {
        local_378 = local_3a0;
        lVar12 = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar12 + 0x38);
        local_368 = CONCAT44(fVar19,fVar19);
        local_388 = local_3a0;
        local_380 = local_398;
        local_370 = local_398;
        local_360 = fVar20;
        FUN_1438fb240(lVar12,&local_388,&local_368,lVar12 + 0x38);
        fVar21 = local_370;
        local_2e8[0] = 3.4028235e+38;
        local_2e8[1] = 3.4028235e+38;
        local_2e8[2] = 3.4028235e+38;
        local_2e8[3] = 3.4028235e+38;
        local_2e8[4] = 3.4028235e+38;
        local_2e8[5] = 3.4028235e+38;
        local_2e8[6] = 3.4028235e+38;
        local_2e8[7] = 3.4028235e+38;
        local_2e8[8] = 3.4028235e+38;
        local_2e8[9] = 3.4028235e+38;
        local_2e8[10] = 3.4028235e+38;
        local_2e8[0xb] = 3.4028235e+38;
        local_2e8[0xc] = 3.4028235e+38;
        local_2e8[0xd] = 3.4028235e+38;
        local_2e8[0xe] = 3.4028235e+38;
        local_2e8[0xf] = 3.4028235e+38;
        _local_328 = 0xffffffffffffffff;
        aiStack_324[1] = -1;
        aiStack_324[2] = -1;
        aiStack_324[3] = -1;
        aiStack_324[4] = -1;
        aiStack_324[5] = -1;
        aiStack_324[6] = -1;
        aiStack_324[7] = -1;
        aiStack_324[8] = -1;
        aiStack_324[9] = -1;
        aiStack_324[10] = -1;
        aiStack_324[0xb] = -1;
        aiStack_324[0xc] = -1;
        aiStack_324[0xd] = -1;
        aiStack_324[0xe] = -1;
        uVar13 = uVar15;
        if (0 < (int)(*(longlong *)(lVar12 + 0x40) - *(longlong *)(lVar12 + 0x38) >> 4)) {
          lVar1 = *(longlong *)(lVar12 + 0x40);
          lVar2 = *(longlong *)(lVar12 + 0x38);
          piVar9 = *(int **)(lVar12 + 0x38);
          fVar23 = local_378._4_4_;
          fVar22 = (float)local_378;
          uVar16 = uVar15;
          do {
            local_430 = local_2e8;
            local_438 = &local_328;
            local_440 = (int **)&local_268;
            local_448 = (undefined8 *)
                        CONCAT44(local_448._4_4_,
                                 ((float)piVar9[1] - fVar23) * ((float)piVar9[1] - fVar23) +
                                 ((float)*piVar9 - fVar22) * ((float)*piVar9 - fVar22) +
                                 ((float)piVar9[2] - fVar21) * ((float)piVar9[2] - fVar21));
            FUN_1438fbb20(lVar12,0x10,piVar9,piVar9[3]);
            uVar18 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar18;
            piVar9 = piVar9 + 4;
          } while ((int)uVar18 < (int)(lVar1 - lVar2 >> 4));
        }
        do {
          if ((&local_328)[uVar13] == -NAN) break;
          iVar6 = (int)uVar14;
          if (aiStack_324[uVar13] == -1) {
            uVar14 = (ulonglong)(iVar6 + 1);
            break;
          }
          if (aiStack_324[uVar13 + 1] == -1) {
            uVar14 = (ulonglong)(iVar6 + 2);
            break;
          }
          if (aiStack_324[uVar13 + 2] == -1) {
            uVar14 = (ulonglong)(iVar6 + 3);
            break;
          }
          uVar13 = uVar13 + 4;
          uVar14 = (ulonglong)(iVar6 + 4);
        } while ((longlong)uVar13 < 0x10);
      }
      else {
        local_414 = 0.0;
        local_3f0[0] = (int *)&local_268;
        uVar16 = uVar15;
        uVar17 = uVar15;
        do {
          if (0x3f < (longlong)uVar17) break;
          if (uVar13 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            std::_Xout_of_range("invalid vector<T> subscript");
          }
          local_410[0] = *(float *)(*param_6 + uVar16 * 4);
          cVar3 = FUN_1438f5dc0(local_408,local_410[0]);
          if (cVar3 == '\0') {
            FUN_1438f5200(local_408,&local_388,local_410[0]);
            fVar22 = local_380 - local_398;
            fVar21 = local_388._4_4_ - local_3a0._4_4_;
            fVar23 = (float)local_388 - (float)local_3a0;
            if (fVar19 * fVar19 < fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22) break;
            *(float *)((longlong)local_2e8 + uVar17) =
                 fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22;
            *(float *)((longlong)&local_328 + uVar17) = local_410[0];
            uVar14 = (ulonglong)((int)uVar14 + 1);
            local_3f0[0] = local_3f0[0] + 3;
            uVar17 = uVar17 + 4;
          }
          local_414 = (float)((int)local_414 + 1);
          uVar16 = uVar16 + 1;
          uVar13 = param_6[1] - *param_6 >> 2;
        } while ((ulonglong)(longlong)(int)local_414 < uVar13);
      }
      local_414 = fVar20 * 0.5;
      local_410[0] = fVar19 * 0.5;
      pfVar11 = &local_414;
      if (fVar20 * 0.5 <= fVar19 * 0.5) {
        pfVar11 = local_410;
      }
      iVar6 = (int)uVar14;
      local_448 = (undefined8 *)param_4;
      FUN_1438fb7f0(uVar14,local_2e8,*pfVar11 * 0.75,local_2e8 + 0x10);
      uVar14 = uVar15;
      uVar13 = uVar15;
      if (0 < iVar6) {
        do {
          FUN_1438f9500(param_4,uVar14,(&local_328)[uVar13],local_2e8[uVar13 + 0x10]);
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < (longlong)iVar6);
      }
      uVar10 = local_3c8;
      if (0 < iVar6) {
        do {
          local_358 = 0;
          local_350 = 0;
          local_348 = 0;
          uVar5 = FUN_1438f9370(param_4,uVar15);
          local_448 = (undefined8 *)CONCAT71(local_448._1_7_,*(undefined1 *)(param_1 + 0x4c));
          FUN_1439098c0(uVar10,local_340,uVar5,&local_414);
          if (local_414 == 0.0) {
            fVar21 = *(float *)(param_1 + 0x30);
            local_380 = local_398 * fVar21 + *(float *)(param_1 + 0x20);
            local_388 = CONCAT44(local_3a0._4_4_ * fVar21 + *(float *)(param_1 + 0x1c),
                                 (float)local_3a0 * fVar21 + *(float *)(param_1 + 0x18));
            uVar7 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                    ::GetBoundProgramCounterForTimerManager(local_340);
            local_420 = 0;
            local_428 = 0xffffffff;
            local_430 = (float *)0x0;
            local_438 = (float *)((ulonglong)local_438 & 0xffffffffffffff00);
            local_440 = (int **)((ulonglong)local_440 & 0xffffffffffffff00);
            local_448 = (undefined8 *)CONCAT44(local_448._4_4_,uVar5);
            cVar3 = FUN_143905390(uVar7,0,&local_388,&local_358);
          }
          else {
            cVar3 = '\0';
          }
          FUN_14390a6c0(local_340);
          if (cVar3 == '\0') {
            FUN_1438f94f0(param_4,uVar15,2);
          }
          uVar18 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar18;
        } while ((int)uVar18 < iVar6);
      }
LAB_1438fa2c4:
      if (local_3e0 != 0) {
        FUN_1438f9650(local_3e0,param_4);
      }
      return 1;
    }
    FUN_143903330(*(longlong *)(param_1 + 0x10),local_3d0,&local_3d4,&local_3d8);
    local_360 = (float)local_3d8 - 1.0;
    local_368 = CONCAT44((float)local_3d4 - 1.0,(float)local_3d0[0] - 1.0);
    local_388 = 0;
    local_380 = 0.0;
    local_378 = local_3a0;
    local_370 = local_398;
    local_438 = (float *)CONCAT44(local_438._4_4_,fVar20);
    local_440 = (int **)CONCAT44(local_440._4_4_,fVar19);
    local_448 = &local_368;
    puVar8 = (undefined8 *)
             FUN_1438fae70(*(undefined8 *)(param_1 + 0x38),local_3f0,&local_378,&local_388);
    local_3a0 = *puVar8;
    local_398 = *(float *)(puVar8 + 1);
    uVar15 = 0;
    local_410[0] = 0.0;
    lVar12 = 0x10;
    pfVar11 = local_1a8 + 2;
    do {
      pfVar11[-2] = 0.0;
      pfVar11[-1] = 0.0;
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar12 = 0x10;
    piVar9 = local_260;
    do {
      piVar9[-2] = 0;
      piVar9[-1] = 0;
      *piVar9 = 0;
      piVar9 = piVar9 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (((local_408 == 0) || (param_6 == (longlong *)0x0)) ||
       (uVar14 = param_6[1] - *param_6 >> 2, uVar14 == 0)) {
      local_428 = *(undefined4 *)(local_408 + 0x48);
      local_430 = local_2e8;
      local_438 = &local_328;
      local_440 = (int **)&local_268;
      local_448 = (undefined8 *)CONCAT44(local_448._4_4_,fVar20);
      local_368 = local_3a0;
      local_360 = local_398;
      local_410[0] = (float)FUN_1438fafe0(*(undefined8 *)(param_1 + 0x38),0x10,&local_368,fVar19);
    }
    else {
      local_3f0[0] = (int *)&local_268;
      uVar13 = uVar15;
      uVar16 = uVar15;
      uVar17 = uVar15;
      do {
        if (0x3f < (longlong)uVar16) break;
        if (uVar14 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          std::_Xout_of_range("invalid vector<T> subscript");
        }
        local_414 = *(float *)(*param_6 + uVar13 * 4);
        cVar3 = FUN_1438f5dc0(local_408,local_414);
        if (cVar3 == '\0') {
          FUN_1438f5200(local_408,&local_378,local_414);
          fVar21 = 1.0 / *(float *)(param_1 + 0x30);
          local_370 = (local_370 - *(float *)(param_1 + 0x20)) * fVar21;
          fVar25 = (local_378._4_4_ - *(float *)(param_1 + 0x1c)) * fVar21;
          fVar21 = ((float)local_378 - *(float *)(param_1 + 0x18)) * fVar21;
          local_378 = CONCAT44(fVar25,fVar21);
          fVar23 = local_370 - local_398;
          fVar24 = fVar25 - local_3a0._4_4_;
          fVar22 = fVar21 - (float)local_3a0;
          if (fVar19 * fVar19 < fVar24 * fVar24 + fVar22 * fVar22 + fVar23 * fVar23) break;
          local_368 = CONCAT44((int)fVar25,(int)fVar21);
          *(undefined8 *)local_3f0[0] = local_368;
          local_3f0[0][2] = (int)local_370;
          *(float *)((longlong)local_2e8 + uVar16) =
               fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23;
          *(float *)((longlong)&local_328 + uVar16) = local_414;
          local_410[0] = (float)((int)local_410[0] + 1);
          local_3f0[0] = local_3f0[0] + 3;
          uVar16 = uVar16 + 4;
        }
        uVar18 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar18;
        uVar13 = uVar13 + 1;
        uVar14 = param_6[1] - *param_6 >> 2;
      } while ((ulonglong)(longlong)(int)uVar18 < uVar14);
    }
    lVar12 = (longlong)(int)local_410[0];
    uVar14 = uVar15;
    uVar13 = uVar15;
    uVar16 = uVar15;
    if (0 < (int)local_410[0]) {
      do {
        *(float *)((longlong)local_1a8 + uVar14) =
             (float)*(int *)((longlong)&local_268 + uVar14) + 0.5;
        *(float *)((longlong)local_1a8 + uVar14 + 4) =
             (float)*(int *)((longlong)&local_268 + uVar14 + 4) + 0.5;
        *(float *)((longlong)local_1a8 + uVar14 + 8) =
             (float)*(int *)((longlong)local_260 + uVar14) + 0.5;
        FUN_1438f9500(param_4,uVar13,(&local_328)[uVar16],0);
        uVar16 = uVar16 + 1;
        uVar14 = uVar14 + 0xc;
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while ((longlong)uVar16 < lVar12);
    }
    lVar1 = local_3e0;
    fVar21 = local_410[0];
    if (local_410[0] == 0.0) {
      if (local_3e0 != 0) {
        FUN_1438f95c0(local_3e0,1,L"Could not find any nearby probes in spatial search!");
        FUN_1438f9650(lVar1,param_4);
      }
    }
    else {
      local_418 = 0;
      local_414 = fVar20 * 0.5;
      local_3fc = fVar19 * 0.5;
      pfVar11 = &local_414;
      if (fVar20 * 0.5 <= fVar19 * 0.5) {
        pfVar11 = &local_3fc;
      }
      local_448 = (undefined8 *)param_4;
      FUN_1438fb7f0(local_410[0],local_2e8,*pfVar11 * 0.75,local_2e8 + 0x10);
      uVar14 = uVar15;
      uVar13 = uVar15;
      if (0 < lVar12) {
        do {
          FUN_1438f9520(param_4,uVar13);
          uVar13 = (ulonglong)((int)uVar13 + 1);
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < lVar12);
      }
      uVar10 = FUN_143900fa0(*(undefined8 *)(param_1 + 0x10),&local_368,&local_3a0);
      cVar3 = FUN_143900fe0(*(undefined8 *)(param_1 + 0x10),uVar10);
      if (cVar3 == '\0') {
        fVar21 = (float)FUN_143900060(*(undefined8 *)(param_1 + 0x10));
        uVar14 = uVar15;
        uVar13 = uVar15;
        uVar16 = uVar15;
        if (0 < lVar12) {
          do {
            fVar19 = (float)FUN_1438f9390(param_4,uVar14);
            if (0.01 <= fVar19) {
              if ((int)uVar16 < 4) {
                local_414 = (float)((int)uVar16 + 1);
                local_358 = 0;
                local_350 = 0;
                local_348 = 0;
                uVar5 = FUN_1438f9370(param_4,uVar14);
                local_448 = (undefined8 *)CONCAT71(local_448._1_7_,*(undefined1 *)(param_1 + 0x4c));
                FUN_1439098c0(local_3c8,local_3b8,uVar5,&local_3fc);
                if (local_3fc == 0.0) {
                  fVar19 = *(float *)(param_1 + 0x30);
                  local_360 = local_398 * fVar19 + *(float *)(param_1 + 0x20);
                  local_368 = CONCAT44(local_3a0._4_4_ * fVar19 + *(float *)(param_1 + 0x1c),
                                       (float)local_3a0 * fVar19 + *(float *)(param_1 + 0x18));
                  cVar3 = FUN_1438f5dc0(local_408,uVar5);
                  if (cVar3 == '\0') {
                    uVar10 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                             ::GetBoundProgramCounterForTimerManager(local_3b8);
                    local_420 = 0;
                    local_428 = 0xffffffff;
                    local_430 = (float *)0x0;
                    local_438 = (float *)((ulonglong)local_438 & 0xffffffffffffff00);
                    local_440 = (int **)((ulonglong)local_440 & 0xffffffffffffff00);
                    local_448 = (undefined8 *)CONCAT44(local_448._4_4_,uVar5);
                    cVar3 = FUN_143905390(uVar10,*(undefined8 *)(param_1 + 0x10),&local_368,
                                          &local_358);
                  }
                  else {
                    cVar3 = '\0';
                  }
                }
                else {
                  cVar3 = '\0';
                }
                FUN_14390a6c0(local_3b8);
                if (cVar3 == '\0') {
                  if (param_8 == '\0') {
                    FUN_143900fa0(*(undefined8 *)(param_1 + 0x10),&local_388,
                                  local_1a8 + (longlong)(int)uVar14 * 3);
                    FUN_143900fa0(*(undefined8 *)(param_1 + 0x10),&local_378,&local_3a0);
                    local_438 = &local_400;
                    local_440 = local_3f0;
                    local_448 = (undefined8 *)CONCAT44(local_448._4_4_,0x40000000);
                    bVar4 = FUN_1438fcd20(*(undefined8 *)(param_1 + 0x40),&local_388,&local_378,
                                          *(undefined4 *)(param_1 + 0x48));
                    if (bVar4 != 0) {
                      if ((float)local_388 == (float)local_378) {
                        if ((local_388._4_4_ == local_378._4_4_) && (local_380 == local_370))
                        goto LAB_1438faaba;
                      }
                      fVar19 = _guard_xfg_dispatch_icall_nop(local_2e8[uVar13]);
                      local_3f8 = (fVar19 * *(float *)(param_1 + 0x30)) /
                                  (local_3f0[0]._0_4_ * fVar21);
                      if (local_3f8 < 0.5000001) goto LAB_1438faae1;
                      local_3f4 = 1.0;
                      pfVar11 = &local_3f4;
                      if (local_3f8 <= 1.0) {
                        pfVar11 = &local_3f8;
                      }
                      fVar19 = *pfVar11;
                      if (fVar19 < 0.5) {
                        fVar19 = 0.5;
                      }
                      fVar19 = (fVar19 - 0.5) * 2.0;
                      if ((fVar19 <= 0.0) || (1.0 < fVar19)) {
                        bVar4 = 0;
                      }
                    }
LAB_1438faaba:
                    local_418 = local_418 | bVar4;
                    if (bVar4 != 0) goto LAB_1438faac4;
                  }
                  else {
                    uVar5 = FUN_1438f9370(param_4,uVar14);
                    FUN_1438f5200(local_408,local_340,uVar5);
                  }
LAB_1438faae1:
                  FUN_1438f94f0(param_4,uVar14,2);
                }
                else {
                  if ((float)local_358 < -12.0) goto LAB_1438faae1;
                  local_3f4 = _guard_xfg_dispatch_icall_nop(10.0,(float)local_358 / 10.0);
                  local_3f8 = 1.0;
                  local_418 = local_418 | 1;
LAB_1438faac4:
                  FUN_1438f9390(param_4,uVar14);
                  FUN_1438f9520(param_4,uVar14);
                }
                uVar16 = (ulonglong)(uint)local_414;
              }
              else {
                FUN_1438f94f0(param_4,uVar14,5);
              }
            }
            else {
              FUN_1438f94f0(param_4,uVar14,4);
            }
            fVar19 = local_410[0];
            uVar13 = uVar13 + 1;
            uVar14 = (ulonglong)((int)uVar14 + 1);
          } while ((longlong)uVar13 < lVar12);
          if (local_418 != 0) {
            fVar21 = 0.0;
            uVar14 = uVar15;
            if ((int)local_410[0] < 1) {
              return 0;
            }
            do {
              iVar6 = FUN_1438f9380(param_4,uVar14);
              if (iVar6 == 0) {
                FUN_1438f9390(param_4,uVar14);
                fVar21 = fVar21 + extraout_XMM0_Da;
              }
              uVar18 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar18;
            } while ((int)uVar18 < (int)fVar19);
            if (fVar21 == 0.0) {
              return 0;
            }
            do {
              iVar6 = FUN_1438f9380(param_4,uVar15);
              if (iVar6 == 0) {
                FUN_1438f9390(param_4,uVar15);
                FUN_1438f9520(param_4,uVar15);
              }
              uVar18 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar18;
            } while ((int)uVar18 < (int)fVar19);
            FUN_1438f8f10(param_4,0);
            goto LAB_1438fa2c4;
          }
        }
        if (local_3e0 != 0) {
          FUN_1438f95c0(local_3e0,1,L"Probe interp: all points discarded during geometric tests.");
        }
      }
      else {
        if (local_3e0 != 0) {
          FUN_1438f95c0(local_3e0,1,L"Probe voxel is inside geometry.");
        }
        if (0 < (int)fVar21) {
          do {
            FUN_1438f94f0(param_4,uVar15,3);
            uVar18 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)fVar21);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1438fac20 FUN_1438fac20 body=297 status=ok
// SIG undefined FUN_1438fac20(void)

void FUN_1438fac20(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  lStack_30 = 0;
  iVar6 = 0;
  local_28 = 0;
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_2;
  local_40 = *(undefined4 *)(param_2 + 1);
  FUN_1438fb240(*(undefined8 *)(param_1 + 0x38),&local_48,&local_58,&local_38,0xfffffffffffffffe);
  lVar2 = local_38;
  uVar8 = lStack_30 - local_38 >> 4;
  if (uVar8 != 0) {
    puVar7 = (undefined4 *)(local_38 + 0xc);
    do {
      puVar5 = (undefined4 *)param_4[1];
      if ((puVar7 < puVar5) && (puVar1 = (undefined4 *)*param_4, puVar1 <= puVar7)) {
        if (puVar5 == (undefined4 *)param_4[2]) {
          FUN_1438f7320(param_4,1);
        }
        puVar5 = (undefined4 *)param_4[1];
        if (puVar5 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)(*param_4 + ((longlong)puVar7 - (longlong)puVar1 >> 2) * 4);
LAB_1438fad02:
          *puVar5 = uVar3;
        }
      }
      else {
        if (puVar5 == (undefined4 *)param_4[2]) {
          FUN_1438f7320(param_4,1);
        }
        puVar5 = (undefined4 *)param_4[1];
        if (puVar5 != (undefined4 *)0x0) {
          uVar3 = *puVar7;
          goto LAB_1438fad02;
        }
      }
      param_4[1] = param_4[1] + 4;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 4;
    } while ((ulonglong)(longlong)iVar6 < uVar8);
  }
  if (lVar2 != 0) {
    plVar4 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar2);
  }
  return;
}



// FUNCTION 1438fad50 FUN_1438fad50 body=280 status=ok
// SIG undefined FUN_1438fad50(void)

void FUN_1438fad50(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar10 = 0xfffffffffffffffe;
  iVar1 = param_3;
  if (param_3 < param_2) {
    iVar1 = param_2;
  }
  iVar2 = param_4;
  if (param_4 < iVar1) {
    iVar2 = iVar1;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop((float)iVar2);
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  iVar5 = (int)fVar9;
  *param_1 = iVar5;
  iVar7 = (param_4 + -1 + iVar5) / iVar5;
  iVar8 = (param_3 + -1 + iVar5) / iVar5;
  iVar1 = param_2 + -1 + iVar5;
  iVar2 = iVar1 / iVar5;
  iVar6 = iVar8 * iVar7;
  local_38 = iVar2;
  local_34 = iVar8;
  local_30 = iVar7;
  local_2c = iVar6;
  lVar3 = FUN_1438f9710(iVar6 * iVar2,(longlong)iVar1 % (longlong)iVar5 & 0xffffffff);
  plVar4 = (longlong *)(param_1 + 2);
  local_40 = lVar3;
  if (plVar4 != &local_40) {
    FUN_1438f9790(plVar4);
    *plVar4 = lVar3;
    param_1[4] = iVar2;
    param_1[5] = iVar8;
    param_1[6] = iVar7;
    param_1[7] = iVar6;
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    _eh_vector_destructor_iterator_(lVar3,0x18,*(undefined8 *)(lVar3 + -8),FUN_1438f9a80,uVar10);
    plVar4 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3 + -8);
  }
  return;
}



// FUNCTION 1438fae70 FUN_1438fae70 body=364 status=ok
// SIG undefined FUN_1438fae70(void)

undefined8 *
FUN_1438fae70(longlong param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
             undefined8 *param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  
  fVar4 = param_6 * 0.95 * 0.5;
  fVar3 = param_7 * 0.95 * 0.5;
  fVar7 = (float)*(int *)(param_1 + 0x20) - fVar4;
  local_48 = (float)*param_4;
  fVar5 = (float)*(int *)(param_1 + 0x24) - fVar4;
  fVar6 = (float)*(int *)(param_1 + 0x28) - fVar3;
  fVar2 = (float)*(int *)(param_1 + 0x2c) + fVar4;
  fVar4 = (float)*(int *)(param_1 + 0x30) + fVar4;
  fVar3 = (float)*(int *)(param_1 + 0x34) + fVar3;
  if (fVar7 <= local_48) {
    fVar7 = local_48;
  }
  fStack_44 = (float)((ulonglong)*param_4 >> 0x20);
  if (fVar5 <= fStack_44) {
    fVar5 = fStack_44;
  }
  if (fVar6 <= *(float *)(param_4 + 1)) {
    fVar6 = *(float *)(param_4 + 1);
  }
  local_48 = (float)*param_5;
  if (local_48 <= fVar2) {
    fVar2 = local_48;
  }
  fStack_44 = (float)((ulonglong)*param_5 >> 0x20);
  if (fStack_44 <= fVar4) {
    fVar4 = fStack_44;
  }
  if (*(float *)(param_5 + 1) <= fVar3) {
    fVar3 = *(float *)(param_5 + 1);
  }
  fVar1 = *param_3;
  if (*param_3 <= fVar7) {
    fVar1 = fVar7;
  }
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  fVar7 = param_3[1];
  if (param_3[1] <= fVar5) {
    fVar7 = fVar5;
  }
  *param_3 = fVar1;
  if (fVar4 <= fVar7) {
    fVar7 = fVar4;
  }
  fVar5 = param_3[2];
  if (param_3[2] <= fVar6) {
    fVar5 = fVar6;
  }
  param_3[1] = fVar7;
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  param_3[2] = fVar5;
  fVar7 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(float *)(param_2 + 1) = fVar7;
  return param_2;
}



// FUNCTION 1438fafe0 FUN_1438fafe0 body=605 status=ok
// SIG undefined FUN_1438fafe0(void)

ulonglong FUN_1438fafe0(longlong param_1,uint param_2,float *param_3,undefined4 param_4,
                       undefined4 param_5,undefined8 param_6,undefined4 *param_7,undefined4 *param_8
                       ,int param_9)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  local_58 = CONCAT44(param_4,param_4);
  plVar2 = (longlong *)(param_1 + 0x38);
  local_50 = param_5;
  local_40 = param_3[2];
  local_48 = *(undefined8 *)param_3;
  lVar10 = (longlong)(int)param_2;
  FUN_1438fb240(local_48,&local_48,&local_58,plVar2);
  uVar7 = 0;
  uVar8 = 0;
  if (((0 < (int)param_2) && (3 < param_2)) &&
     ((param_7 + (int)(param_2 - 1) < param_8 || (param_8 + (int)(param_2 - 1) < param_7)))) {
    uVar3 = param_2 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    uVar6 = uVar7;
    do {
      uVar8 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)(param_2 - uVar3));
    iVar1 = (param_2 - uVar3) + 3;
    uVar6 = (ulonglong)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
    puVar4 = param_7;
    for (lVar5 = (uVar6 & 0xfffffffffffffff) << 2; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    puVar4 = param_8;
    for (lVar5 = (uVar6 & 0xfffffffffffffff) << 2; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = 0x7f7fffff;
      puVar4 = puVar4 + 1;
    }
  }
  lVar5 = (longlong)(int)uVar8;
  if (lVar5 < lVar10) {
    puVar4 = param_8 + lVar5;
    lVar5 = lVar10 - lVar5;
    do {
      *(undefined4 *)(((longlong)param_7 - (longlong)param_8) + (longlong)puVar4) = 0xffffffff;
      *puVar4 = 0x7f7fffff;
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar6 = uVar7;
  if (0 < (int)(*(longlong *)(param_1 + 0x40) - *plVar2 >> 4)) {
    do {
      piVar9 = (int *)(*plVar2 + uVar6);
      if ((piVar9[3] < param_9) || (param_9 < 0)) {
        FUN_1438fbb20(param_1,param_2,piVar9,piVar9[3],
                      ((float)piVar9[1] - param_3[1]) * ((float)piVar9[1] - param_3[1]) +
                      ((float)*piVar9 - *param_3) * ((float)*piVar9 - *param_3) +
                      ((float)piVar9[2] - param_3[2]) * ((float)piVar9[2] - param_3[2]),param_6,
                      param_7,param_8);
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar6 = uVar6 + 0x10;
    } while ((int)uVar8 < (int)(*(longlong *)(param_1 + 0x40) - *plVar2 >> 4));
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < lVar10) {
    do {
      if (param_7[uVar6] == -1) {
        return uVar7;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < lVar10);
  }
  return uVar7;
}



// FUNCTION 1438fb240 FUN_1438fb240 body=1119 status=ok
// SIG undefined FUN_1438fb240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438fb240(int *param_1,float *param_2,float *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fVar27 = *param_2;
  fVar28 = param_2[1];
  fVar29 = param_2[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar24 = _guard_xfg_dispatch_icall_nop(fVar27 - fVar1 * 0.5);
  local_a8 = (int)fVar24;
  fVar25 = _guard_xfg_dispatch_icall_nop(fVar28 - fVar2 * 0.5);
  local_a4 = (int)fVar25;
  fVar26 = _guard_xfg_dispatch_icall_nop(fVar29 - fVar3 * 0.5);
  local_a0 = (int)fVar26;
  fVar27 = _guard_xfg_dispatch_icall_nop(fVar1 * 0.5 + fVar27);
  local_b8 = (int)fVar27;
  fVar28 = _guard_xfg_dispatch_icall_nop(fVar2 * 0.5 + fVar28);
  local_b4 = (int)fVar28;
  fVar29 = _guard_xfg_dispatch_icall_nop(fVar3 * 0.5 + fVar29);
  iVar22 = *param_1;
  iVar19 = (int)fVar24 / iVar22;
  local_b0 = (int)fVar29;
  local_c4 = (int)fVar25 / iVar22;
  local_cc = (int)fVar26 / iVar22;
  local_c0 = (int)fVar27 / iVar22;
  iVar13 = 0;
  local_c8 = (int)fVar28 / iVar22;
  if (iVar19 < 1) {
    iVar19 = iVar13;
  }
  if (local_c4 < 1) {
    local_c4 = iVar13;
  }
  if (local_cc < 1) {
    local_cc = iVar13;
  }
  if (param_1[4] + -1 <= iVar19) {
    iVar19 = param_1[4] + -1;
  }
  if (param_1[5] + -1 <= local_c4) {
    local_c4 = param_1[5] + -1;
  }
  if (param_1[6] + -1 <= local_cc) {
    local_cc = param_1[6] + -1;
  }
  if (local_c0 < 1) {
    local_c0 = iVar13;
  }
  if (local_c8 < 1) {
    local_c8 = iVar13;
  }
  local_d0 = local_b0 / iVar22;
  if (local_b0 / iVar22 < 1) {
    local_d0 = iVar13;
  }
  if (param_1[4] + -1 <= local_c0) {
    local_c0 = param_1[4] + -1;
  }
  if (param_1[5] + -1 <= local_c8) {
    local_c8 = param_1[5] + -1;
  }
  if (param_1[6] + -1 <= local_d0) {
    local_d0 = param_1[6] + -1;
  }
  local_d8 = local_c4;
  iVar22 = local_cc;
  iVar13 = local_c0;
  iVar21 = local_c8;
  iVar17 = local_d0;
  if (iVar19 <= local_c0) {
    do {
      local_d4 = iVar19;
      iVar7 = local_d8;
      if (local_d8 <= iVar21) {
        do {
          iVar13 = local_d8;
          iVar7 = iVar22;
          if (iVar22 <= iVar17) {
            do {
              uVar12 = 0;
              lVar4 = *(longlong *)(param_1 + 2);
              lVar9 = (longlong)(param_1[6] * iVar13 + iVar22 + iVar19 * param_1[7]);
              uVar16 = uVar12;
              uVar23 = uVar12;
              if (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) - *(longlong *)(lVar4 + lVar9 * 0x18) >> 4
                  != 0) {
                do {
                  cVar8 = FUN_1438f8e20(uVar12 * 0x10 + *(longlong *)(lVar4 + lVar9 * 0x18),
                                        &local_a8);
                  if (cVar8 != '\0') {
                    puVar10 = (undefined4 *)param_4[1];
                    puVar14 = (undefined4 *)(*(longlong *)(lVar4 + lVar9 * 0x18) + uVar23);
                    if ((puVar14 < puVar10) && (puVar5 = (undefined4 *)*param_4, puVar5 <= puVar14))
                    {
                      puVar6 = (undefined4 *)param_4[2];
                      if ((puVar10 == puVar6) && ((longlong)puVar6 - (longlong)puVar10 >> 4 == 0)) {
                        lVar11 = (longlong)puVar10 - (longlong)puVar5 >> 4;
                        if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
                          std::_Xlength_error("vector<T> too long");
                        }
                        uVar12 = lVar11 + 1;
                        uVar20 = (longlong)puVar6 - (longlong)puVar5 >> 4;
                        uVar18 = 0;
                        if (uVar20 <= ~(uVar20 >> 1)) {
                          uVar18 = (uVar20 >> 1) + uVar20;
                        }
                        if (uVar12 <= uVar18) {
                          uVar12 = uVar18;
                        }
                        FUN_1438fbd70(param_4,uVar12);
                      }
                      puVar10 = (undefined4 *)param_4[1];
                      if (puVar10 != (undefined4 *)0x0) {
                        puVar14 = (undefined4 *)
                                  (((longlong)puVar14 - (longlong)puVar5 & 0xfffffffffffffff0U) +
                                  *param_4);
LAB_1438fb5d6:
                        *puVar10 = *puVar14;
                        puVar10[1] = puVar14[1];
                        puVar10[2] = puVar14[2];
                        puVar10[3] = puVar14[3];
                      }
                    }
                    else {
                      puVar5 = (undefined4 *)param_4[2];
                      if ((puVar10 == puVar5) && ((longlong)puVar5 - (longlong)puVar10 >> 4 == 0)) {
                        lVar11 = (longlong)puVar10 - *param_4 >> 4;
                        if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
                          std::_Xlength_error("vector<T> too long");
                        }
                        uVar12 = lVar11 + 1;
                        uVar20 = (longlong)puVar5 - *param_4 >> 4;
                        uVar18 = 0;
                        if (uVar20 <= ~(uVar20 >> 1)) {
                          uVar18 = (uVar20 >> 1) + uVar20;
                        }
                        if (uVar12 <= uVar18) {
                          uVar12 = uVar18;
                        }
                        FUN_1438fbd70(param_4,uVar12);
                      }
                      puVar10 = (undefined4 *)param_4[1];
                      if (puVar10 != (undefined4 *)0x0) goto LAB_1438fb5d6;
                    }
                    param_4[1] = param_4[1] + 0x10;
                  }
                  uVar15 = (int)uVar16 + 1;
                  uVar12 = (ulonglong)(int)uVar15;
                  uVar16 = (ulonglong)uVar15;
                  uVar23 = uVar23 + 0x10;
                  iVar19 = local_d4;
                  iVar13 = local_d8;
                  iVar17 = local_d0;
                } while (uVar12 < (ulonglong)
                                  (*(longlong *)(lVar4 + 8 + lVar9 * 0x18) -
                                   *(longlong *)(lVar4 + lVar9 * 0x18) >> 4));
              }
              iVar22 = iVar22 + 1;
              iVar7 = local_cc;
              iVar21 = local_c8;
            } while (iVar22 <= iVar17);
          }
          iVar22 = iVar7;
          local_d8 = iVar13 + 1;
          iVar7 = local_c4;
          iVar13 = local_c0;
        } while (local_d8 <= iVar21);
      }
      local_d8 = iVar7;
      iVar19 = iVar19 + 1;
    } while (iVar19 <= iVar13);
  }
  return;
}



// FUNCTION 1438fb6b0 FUN_1438fb6b0 body=309 status=ok
// SIG undefined FUN_1438fb6b0(void)

void FUN_1438fb6b0(longlong param_1,longlong param_2,float *param_3,float *param_4,float param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  
  fVar4 = param_5;
  *(longlong *)(param_1 + 0x10) = param_2;
  if (param_2 == 0) {
    fVar3 = _guard_xfg_dispatch_icall_nop((*param_4 - *param_3) / param_5);
    uVar1 = (ulonglong)fVar3;
    param_5 = (float)uVar1;
    fVar3 = _guard_xfg_dispatch_icall_nop((param_4[1] - param_3[1]) / fVar4);
    uVar2 = (ulonglong)fVar3;
    local_res8[0] = (uint)uVar2;
    fVar3 = _guard_xfg_dispatch_icall_nop((param_4[2] - param_3[2]) / fVar4);
    local_res10[0] = (undefined4)(longlong)fVar3;
  }
  else {
    FUN_143903330(param_2,&param_5,local_res8,local_res10);
    uVar2 = (ulonglong)local_res8[0];
    uVar1 = (ulonglong)(uint)param_5;
  }
  FUN_1438fad50(*(undefined8 *)(param_1 + 0x38),uVar1 & 0xffffffff,uVar2 & 0xffffffff,local_res10[0]
               );
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_3;
  *(float *)(param_1 + 0x20) = param_3[2];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)param_4;
  fVar3 = param_4[2];
  *(float *)(param_1 + 0x30) = fVar4;
  *(float *)(param_1 + 0x2c) = fVar3;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    fVar4 = (float)FUN_143900060(*(longlong *)(param_1 + 0x10),fVar4);
  }
  fVar4 = _guard_xfg_dispatch_icall_nop(0.125 / fVar4);
  *(int *)(param_1 + 0x48) = (int)fVar4 + 1;
  return;
}



// FUNCTION 1438fb7f0 FUN_1438fb7f0 body=809 status=ok
// SIG undefined FUN_1438fb7f0(void)

void FUN_1438fb7f0(uint param_1,longlong param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  int local_res8;
  ulonglong local_68;
  ulonglong uVar9;
  
  uVar9 = 0;
  lVar10 = (longlong)(int)param_1;
  iVar7 = 0;
  if (param_1 == 0) {
    *param_5 = 0.0;
    return;
  }
  *param_5 = 0.0;
  local_res8 = 0;
  if (0 < (int)param_1) {
    local_68 = (ulonglong)param_1;
    pfVar6 = param_4;
    do {
      if (*(float *)((param_2 - (longlong)param_4) + (longlong)pfVar6) < 1e-06) {
        fVar14 = 1e-06;
      }
      else {
        fVar14 = *(float *)((longlong)pfVar6 + (param_2 - (longlong)param_4));
      }
      fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
      fVar14 = (param_3 * 0.01 * param_3) / (fVar14 * fVar14);
      *pfVar6 = fVar14;
      iVar7 = local_res8 + (uint)(0.01 < fVar14);
      pfVar5 = param_5;
      if (*param_5 <= fVar14 && fVar14 != *param_5) {
        pfVar5 = pfVar6;
      }
      pfVar6 = pfVar6 + 1;
      local_68 = local_68 - 1;
      *param_5 = *pfVar5;
      local_res8 = iVar7;
    } while (local_68 != 0);
  }
  fVar14 = 0.0;
  if (0 < iVar7) {
    uVar11 = uVar9;
    if (3 < lVar10) {
      pfVar6 = param_4 + 2;
      lVar12 = (lVar10 - 4U >> 2) + 1;
      uVar11 = lVar12 * 4;
      do {
        fVar15 = 0.0;
        if (0.0 <= pfVar6[-2] - 0.01) {
          fVar15 = pfVar6[-2] - 0.01;
        }
        pfVar6[-2] = fVar15;
        fVar15 = 0.0;
        if (0.0 <= pfVar6[-1] - 0.01) {
          fVar15 = pfVar6[-1] - 0.01;
        }
        pfVar6[-1] = fVar15;
        fVar15 = 0.0;
        if (0.0 <= *pfVar6 - 0.01) {
          fVar15 = *pfVar6 - 0.01;
        }
        *pfVar6 = fVar15;
        fVar15 = 0.0;
        if (0.0 <= pfVar6[1] - 0.01) {
          fVar15 = pfVar6[1] - 0.01;
        }
        pfVar6[1] = fVar15;
        pfVar6 = pfVar6 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    for (; (longlong)uVar11 < lVar10; uVar11 = uVar11 + 1) {
      fVar15 = 0.0;
      if (0.0 <= param_4[uVar11] - 0.01) {
        fVar15 = param_4[uVar11] - 0.01;
      }
      param_4[uVar11] = fVar15;
    }
  }
  uVar11 = uVar9;
  if (3 < lVar10) {
    pfVar6 = param_4 + 2;
    lVar12 = (lVar10 - 4U >> 2) + 1;
    uVar11 = lVar12 * 4;
    do {
      fVar14 = fVar14 + pfVar6[-2] + pfVar6[-1] + *pfVar6 + pfVar6[1];
      pfVar6 = pfVar6 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  for (; (longlong)uVar11 < lVar10; uVar11 = uVar11 + 1) {
    fVar14 = fVar14 + param_4[uVar11];
  }
  uVar8 = 0;
  fVar14 = 1.0 / (fVar14 + 1.1920929e-07);
  if ((0 < (int)param_1) && (7 < param_1)) {
    uVar4 = param_1 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    uVar11 = uVar9;
    do {
      pfVar6 = param_4 + uVar11;
      fVar15 = pfVar6[1];
      fVar1 = pfVar6[2];
      fVar2 = pfVar6[3];
      uVar8 = (int)uVar9 + 8;
      uVar9 = (ulonglong)uVar8;
      pfVar5 = param_4 + uVar11;
      *pfVar5 = *pfVar6 * fVar14;
      pfVar5[1] = fVar15 * fVar14;
      pfVar5[2] = fVar1 * fVar14;
      pfVar5[3] = fVar2 * fVar14;
      pfVar6 = param_4 + uVar11 + 4;
      fVar15 = pfVar6[1];
      fVar1 = pfVar6[2];
      fVar2 = pfVar6[3];
      pfVar5 = param_4 + uVar11 + 4;
      *pfVar5 = *pfVar6 * fVar14;
      pfVar5[1] = fVar15 * fVar14;
      pfVar5[2] = fVar1 * fVar14;
      pfVar5[3] = fVar2 * fVar14;
      uVar11 = uVar11 + 8;
    } while ((longlong)uVar11 < (longlong)(int)(param_1 - uVar4));
  }
  lVar12 = (longlong)(int)uVar8;
  if (lVar12 < lVar10) {
    if (3 < lVar10 - lVar12) {
      lVar3 = lVar12 + 2;
      lVar13 = ((lVar10 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar13 * 4;
      pfVar6 = param_4 + lVar3;
      do {
        pfVar6[-2] = pfVar6[-2] * fVar14;
        pfVar6[-1] = pfVar6[-1] * fVar14;
        *pfVar6 = *pfVar6 * fVar14;
        pfVar6[1] = pfVar6[1] * fVar14;
        lVar13 = lVar13 + -1;
        pfVar6 = pfVar6 + 4;
      } while (lVar13 != 0);
    }
    for (; lVar12 < lVar10; lVar12 = lVar12 + 1) {
      param_4[lVar12] = fVar14 * param_4[lVar12];
    }
  }
  return;
}



// FUNCTION 1438fbb20 FUN_1438fbb20 body=583 status=ok
// SIG undefined FUN_1438fbb20(void)

void FUN_1438fbb20(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 param_4,
                  float param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  lVar3 = (longlong)(param_2 + -1);
  if (param_5 < *(float *)(param_8 + lVar3 * 4)) {
    *(float *)(param_8 + lVar3 * 4) = param_5;
    iVar6 = param_2 + -2;
    *(undefined8 *)(param_6 + lVar3 * 0xc) = *param_3;
    *(undefined4 *)(param_6 + 8 + lVar3 * 0xc) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_7 + lVar3 * 4) = param_4;
    if (-1 < iVar6) {
      if (3 < param_2 + -1) {
        lVar3 = (longlong)iVar6;
        puVar1 = (undefined8 *)(param_6 + lVar3 * 0xc);
        puVar5 = (undefined4 *)(param_7 + lVar3 * 4);
        pfVar2 = (float *)(param_8 + lVar3 * 4);
        puVar4 = (undefined8 *)((longlong)puVar1 + 0xc);
        do {
          if (*pfVar2 <= param_5) {
            return;
          }
          pfVar2[1] = *pfVar2;
          *puVar4 = *puVar1;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
          puVar5[1] = *puVar5;
          *pfVar2 = param_5;
          *puVar1 = *param_3;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
          *puVar5 = param_4;
          if (pfVar2[-1] <= param_5) {
            return;
          }
          *pfVar2 = pfVar2[-1];
          *(undefined8 *)((longlong)puVar4 + -0xc) = *(undefined8 *)((longlong)puVar1 + -0xc);
          *(undefined4 *)((longlong)puVar4 + -4) = *(undefined4 *)((longlong)puVar1 + -4);
          *puVar5 = puVar5[-1];
          pfVar2[-1] = param_5;
          *(undefined8 *)((longlong)puVar1 + -0xc) = *param_3;
          *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)(param_3 + 1);
          puVar5[-1] = param_4;
          if (pfVar2[-2] <= param_5) {
            return;
          }
          pfVar2[-1] = pfVar2[-2];
          puVar4[-3] = puVar1[-3];
          *(undefined4 *)(puVar4 + -2) = *(undefined4 *)(puVar1 + -2);
          puVar5[-1] = puVar5[-2];
          pfVar2[-2] = param_5;
          puVar1[-3] = *param_3;
          *(undefined4 *)(puVar1 + -2) = *(undefined4 *)(param_3 + 1);
          puVar5[-2] = param_4;
          if (pfVar2[-3] <= param_5) {
            return;
          }
          pfVar2[-2] = pfVar2[-3];
          iVar6 = iVar6 + -4;
          *(undefined8 *)((longlong)puVar4 + -0x24) = *(undefined8 *)((longlong)puVar1 + -0x24);
          *(undefined4 *)((longlong)puVar4 + -0x1c) = *(undefined4 *)((longlong)puVar1 + -0x1c);
          puVar4 = puVar4 + -6;
          puVar5[-2] = puVar5[-3];
          pfVar2[-3] = param_5;
          pfVar2 = pfVar2 + -4;
          *(undefined8 *)((longlong)puVar1 + -0x24) = *param_3;
          *(undefined4 *)((longlong)puVar1 + -0x1c) = *(undefined4 *)(param_3 + 1);
          puVar1 = puVar1 + -6;
          puVar5[-3] = param_4;
          puVar5 = puVar5 + -4;
        } while (2 < iVar6);
      }
      if (-1 < iVar6) {
        lVar3 = param_7 - param_8;
        puVar4 = (undefined8 *)(param_6 + (longlong)iVar6 * 0xc);
        pfVar2 = (float *)(param_8 + (longlong)iVar6 * 4);
        do {
          if (*pfVar2 <= param_5) {
            return;
          }
          *(float *)((longlong)pfVar2 + (param_8 - param_7) + lVar3 + 4) = *pfVar2;
          *(undefined8 *)((longlong)puVar4 + 0xc) = *puVar4;
          *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pfVar2 + lVar3 + 4) = *(undefined4 *)(lVar3 + (longlong)pfVar2);
          *pfVar2 = param_5;
          *puVar4 = *param_3;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_3 + 1);
          puVar4 = (undefined8 *)((longlong)puVar4 + -0xc);
          *(undefined4 *)(lVar3 + (longlong)pfVar2) = param_4;
          pfVar2 = pfVar2 + -1;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
    }
  }
  return;
}



// FUNCTION 1438fbd70 FUN_1438fbd70 body=186 status=ok
// SIG undefined FUN_1438fbd70(void)

void FUN_1438fbd70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1438f1790();
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2 << 4);
  }
  local_res8 = (undefined1)lVar4;
  FUN_1438f97f0(*param_1,param_1[1],lVar4,param_1,0,local_res8,uVar5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  param_1[2] = param_2 * 0x10 + lVar4;
  param_1[1] = (lVar2 - lVar1 & 0xfffffffffffffff0U) + lVar4;
  *param_1 = lVar4;
  return;
}



// FUNCTION 1438fbe30 FUN_1438fbe30 body=124 status=ok
// SIG undefined FUN_1438fbe30(void)

void FUN_1438fbe30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 4)) {
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 4;
  if (-lVar1 - 1U < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar1;
  uVar3 = param_1[2] - *param_1 >> 4;
  uVar2 = 0;
  if (uVar3 <= ~(uVar3 >> 1)) {
    uVar2 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  FUN_1438fbd70(param_1,param_2);
  return;
}



// FUNCTION 1438fbeb0 FUN_1438fbeb0 body=42 status=ok
// SIG undefined FUN_1438fbeb0(void)

void FUN_1438fbeb0(undefined4 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1438fbee0 FUN_1438fbee0 body=98 status=ok
// SIG undefined FUN_1438fbee0(void)

void FUN_1438fbee0(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 5;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        *(undefined8 *)(puVar1 + -4) = 0;
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 9) = 0;
        puVar1[0xb] = 0;
        *(undefined8 *)(puVar1 + 0xe) = 0xffffffffffffffff;
      }
      param_1 = param_1 + 0x15;
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1438fbf50 FUN_1438fbf50 body=178 status=ok
// SIG undefined FUN_1438fbf50(void)

undefined8 * FUN_1438fbf50(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry>::TableEntry>
             ::vftable;
  FUN_1438fc1c0(param_1 + 1,lVar2);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)((longlong)param_1 + 0x24) = param_2 + -1;
  if (0 < param_2) {
    iVar1 = 1;
    do {
      lVar3 = lVar3 + 0x54;
      *(int *)(param_1[1] + -4 + lVar3) = iVar1 + -2;
      *(int *)(param_1[1] + -8 + lVar3) = iVar1;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined4 *)((longlong)*(int *)(param_1 + 4) * 0x54 + 0x50 + param_1[1]) = 0xffffffff;
  *(undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x24) * 0x54 + 0x4c + param_1[1]) =
       0xffffffff;
  return param_1;
}



// FUNCTION 1438fc010 FUN_1438fc010 body=275 status=ok
// SIG undefined FUN_1438fc010(void)

int * FUN_1438fc010(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_1438fbf50(param_1 + 0x28);
  iVar1 = (param_3 + -1 + param_2) / param_3 + 1;
  param_1[0x32] = iVar1;
  FUN_1438fc130(param_1 + 0x34,(longlong)(iVar1 * 2));
  **(int **)(param_1 + 0x34) = param_1[0x30];
  *(int *)(*(longlong *)(param_1 + 0x34) + 4) = param_1[0x31];
  iVar1 = 2;
  if (2 < param_1[0x32] * 2) {
    lVar2 = 8;
    do {
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x34)) = 0xffffffff;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar1 < param_1[0x32] * 2);
  }
  return param_1;
}



// FUNCTION 1438fc130 FUN_1438fc130 body=140 status=ok
// SIG undefined FUN_1438fc130(void)

longlong * FUN_1438fc130(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    lVar1 = param_2 * 4;
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,lVar1);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + *param_1;
    FUN_1438fbeb0(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar1;
  }
  return param_1;
}



// FUNCTION 1438fc1c0 FUN_1438fc1c0 body=136 status=ok
// SIG undefined FUN_1438fc1c0(void)

longlong * FUN_1438fc1c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar3 = param_2 * 0x54;
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar3 + *param_1;
    FUN_1438fbee0(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar3;
  }
  return param_1;
}



// FUNCTION 1438fc250 FUN_1438fc250 body=218 status=ok
// SIG undefined FUN_1438fc250(void)

undefined8 *
FUN_1438fc250(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  
  *param_1 = TritonRuntime::SpatialInterpCache::vftable;
  param_1[2] = param_4;
  puVar3 = (undefined4 *)0x0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar1 = (longlong *)FUN_1438f1790(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  puVar2 = (undefined4 *)(**(code **)(*plVar1 + 8))(plVar1,0xf8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (int)param_2;
    puVar2[1] = (int)param_3;
    FUN_1438fc010(puVar2 + 2,param_2 & 0xffffffff,1);
    *(undefined8 *)(puVar2 + 0x3c) = 0xffffffffffffffff;
    puVar3 = puVar2;
  }
  param_1[1] = puVar3;
  if (param_1[2] != 0) {
    fVar4 = (float)FUN_143900060(param_1[2],param_5);
    *(float *)(param_1 + 5) = fVar4;
    fVar4 = _guard_xfg_dispatch_icall_nop(0.25 / fVar4);
    *(float *)((longlong)param_1 + 0x2c) = fVar4 * fVar4;
  }
  return param_1;
}



// FUNCTION 1438fc330 FUN_1438fc330 body=89 status=ok
// SIG undefined FUN_1438fc330(void)

void FUN_1438fc330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry>::TableEntry>
             ::vftable;
  if (param_1[1] != 0) {
    uVar1 = param_1[1];
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1438fc390 FUN_1438fc390 body=171 status=ok
// SIG undefined FUN_1438fc390(void)

void FUN_1438fc390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined ***)(param_1 + 0xa0) =
       TritonRuntime::
       FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry>::TableEntry>
       ::vftable;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,*plVar3,param_4,uVar4);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1438fc440 FUN_1438fc440 body=152 status=ok
// SIG undefined FUN_1438fc440(void)

undefined8 *
FUN_1438fc440(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry,TritonRuntime::SpatialInterpCache::CacheEntry>::TableEntry>
             ::vftable;
  if (param_1[1] != 0) {
    uVar1 = param_1[1];
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*plVar2,param_4,uVar3);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438fc4e0 FUN_1438fc4e0 body=146 status=ok
// SIG undefined FUN_1438fc4e0(void)

undefined8 *
FUN_1438fc4e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::SpatialInterpCache::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1438fc390(lVar1 + 8);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*plVar2,param_4,uVar3);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 1438fc580 FUN_1438fc580 body=426 status=ok
// SIG undefined FUN_1438fc580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1438fc580(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar15 = 0;
  piVar10 = (int *)FUN_1438fcae0(local_98);
  local_a8[0] = -1;
  iVar9 = FUN_1438fd240(param_1 + 2,piVar10,local_a8);
  iVar12 = 0;
  iVar14 = -1;
  iVar13 = iVar12;
  if (iVar9 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x2c);
    iVar3 = *(int *)((longlong)
                     *(int *)(*(longlong *)(param_1 + 0x36) + (longlong)(local_a8[0] * 2 + 1) * 4) *
                     0x54 + 0x4c + lVar4);
    iVar14 = iVar9;
    iVar13 = 0;
    if (iVar9 != iVar3) {
      do {
        lVar11 = (longlong)iVar14 * 0x54;
        iVar13 = iVar12;
        if (((*(int *)(lVar11 + lVar4) != *piVar10) || (*(int *)(lVar11 + 4 + lVar4) != piVar10[1]))
           || (*(int *)(lVar11 + 8 + lVar4) != piVar10[2])) break;
        iVar14 = *(int *)(lVar11 + 0x4c + lVar4);
        iVar12 = iVar12 + 1;
        iVar13 = iVar12;
      } while (iVar14 != iVar3);
    }
  }
  if (iVar13 < param_1[1]) {
    if (param_1[3] == *param_1) {
      if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1 + 0x2c);
        lVar11 = (longlong)param_1[0x3d] * 0x54;
        uVar15 = ((undefined8 *)(lVar11 + lVar4))[1];
        *param_3 = *(undefined8 *)(lVar11 + lVar4);
        param_3[1] = uVar15;
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar4);
        uVar15 = puVar1[1];
        param_3[2] = *puVar1;
        param_3[3] = uVar15;
        puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)(param_3 + 4) = *puVar2;
        *(undefined4 *)((longlong)param_3 + 0x24) = uVar5;
        *(undefined4 *)(param_3 + 5) = uVar6;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uVar7;
        puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar4);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)(param_3 + 6) = *puVar2;
        *(undefined4 *)((longlong)param_3 + 0x34) = uVar5;
        *(undefined4 *)(param_3 + 7) = uVar6;
        *(undefined4 *)((longlong)param_3 + 0x3c) = uVar7;
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar11 + 0x40 + lVar4);
        FUN_1438fd590(param_1);
      }
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 1;
    if (iVar14 == -1) {
      iVar14 = param_1[0x33];
    }
    else {
      iVar14 = *(int *)((longlong)iVar14 * 0x54 + 0x50 + *(longlong *)(param_1 + 0x2c));
    }
    lVar11 = (longlong)iVar14 * 0x54;
    lVar4 = *(longlong *)(param_1 + 0x2c);
    uVar8 = ((undefined8 *)(lVar11 + lVar4))[1];
    *param_3 = *(undefined8 *)(lVar11 + lVar4);
    param_3[1] = uVar8;
    puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar4);
    uVar8 = puVar1[1];
    param_3[2] = *puVar1;
    param_3[3] = uVar8;
    puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar4);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *(undefined4 *)(param_3 + 4) = *puVar2;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar5;
    *(undefined4 *)(param_3 + 5) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar7;
    puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar4);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *(undefined4 *)(param_3 + 6) = *puVar2;
    *(undefined4 *)((longlong)param_3 + 0x34) = uVar5;
    *(undefined4 *)(param_3 + 7) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar7;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar11 + 0x40 + lVar4);
    FUN_1438fd590(param_1);
  }
  FUN_1438fd3d0(param_1,param_2);
  return uVar15;
}



// FUNCTION 1438fc730 FUN_1438fc730 body=48 status=ok
// SIG undefined FUN_1438fc730(void)

undefined4 * FUN_1438fc730(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 1438fc760 FUN_1438fc760 body=237 status=ok
// SIG undefined FUN_1438fc760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1438fc760(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  piVar4 = (int *)FUN_1438fcae0(local_78,param_3);
  local_88[0] = -1;
  iVar3 = FUN_1438fd240(param_1 + 8,piVar4,local_88);
  if (iVar3 == -1) {
    iVar3 = -1;
    iVar6 = -1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    iVar1 = *(int *)((longlong)
                     *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)(local_88[0] * 2 + 1) * 4) *
                     0x54 + 0x4c + lVar2);
    iVar6 = iVar3;
    if (iVar3 != iVar1) {
      do {
        lVar5 = (longlong)iVar6 * 0x54;
        if (((*(int *)(lVar5 + lVar2) != *piVar4) || (*(int *)(lVar5 + 4 + lVar2) != piVar4[1])) ||
           (*(int *)(lVar5 + 8 + lVar2) != piVar4[2])) break;
        iVar6 = *(int *)(lVar5 + 0x4c + lVar2);
      } while (iVar6 != iVar1);
    }
  }
  *param_2 = iVar3;
  param_2[1] = iVar6;
  param_2[2] = iVar3;
  *(longlong *)(param_2 + 4) = param_1 + 8;
  return param_2;
}



// FUNCTION 1438fc850 FUN_1438fc850 body=528 status=ok
// SIG undefined FUN_1438fc850(void)

int FUN_1438fc850(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  if (param_1[1] == *param_1) {
    return -1;
  }
  iVar7 = FUN_1438fd300();
  iVar3 = **(int **)(param_1 + 0x34);
  iVar8 = FUN_1438fcb60(param_1 + 0x28,iVar3);
  piVar4 = *(int **)(param_1 + 0x34);
  if (*piVar4 == piVar4[1]) {
    piVar4[1] = -1;
    **(undefined4 **)(param_1 + 0x34) = 0xffffffff;
  }
  else {
    *piVar4 = iVar8;
  }
  uVar6 = *(undefined8 *)(param_2 + 2);
  lVar13 = (longlong)iVar3 * 0x54;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x2a) + lVar13);
  *puVar9 = *(undefined8 *)param_2;
  puVar9[1] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 6);
  puVar9[2] = *(undefined8 *)(param_2 + 4);
  puVar9[3] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 10);
  puVar9[4] = *(undefined8 *)(param_2 + 8);
  puVar9[5] = uVar6;
  iVar8 = param_2[0xd];
  iVar11 = param_2[0xe];
  iVar12 = param_2[0xf];
  *(int *)(puVar9 + 6) = param_2[0xc];
  *(int *)((longlong)puVar9 + 0x34) = iVar8;
  *(int *)(puVar9 + 7) = iVar11;
  *(int *)((longlong)puVar9 + 0x3c) = iVar12;
  puVar9[8] = *(undefined8 *)(param_2 + 0x10);
  *(int *)(puVar9 + 9) = param_2[0x12];
  lVar1 = (longlong)(iVar7 * 2) * 4;
  iVar8 = *(int *)(lVar1 + *(longlong *)(param_1 + 0x34));
  lVar2 = (longlong)(iVar7 * 2 + 1) * 4;
  if (iVar8 == -1) {
    FUN_1438fca60(param_1 + 0x28,param_1[0x30],iVar3);
    *(int *)(lVar2 + *(longlong *)(param_1 + 0x34)) = iVar3;
    *(int *)(lVar1 + *(longlong *)(param_1 + 0x34)) = iVar3;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x2a);
    iVar7 = *(int *)((longlong)*(int *)(lVar2 + *(longlong *)(param_1 + 0x34)) * 0x54 + 0x4c + lVar5
                    );
    iVar11 = iVar8;
    if (iVar8 != iVar7) {
      do {
        lVar10 = (longlong)iVar11 * 0x54;
        if (((*(int *)(lVar10 + lVar5) == *param_2) && (*(int *)(lVar10 + 4 + lVar5) == param_2[1]))
           && (*(int *)(lVar10 + 8 + lVar5) == param_2[2])) break;
        iVar11 = *(int *)(lVar10 + 0x4c + lVar5);
      } while (iVar11 != iVar7);
    }
    if (iVar11 == -1) {
      iVar12 = param_1[0x31];
    }
    else {
      iVar12 = *(int *)((longlong)iVar11 * 0x54 + 0x50 + *(longlong *)(param_1 + 0x2a));
    }
    if (iVar12 == -1) {
      param_1[0x30] = iVar3;
    }
    else {
      *(int *)((longlong)iVar12 * 0x54 + 0x4c + *(longlong *)(param_1 + 0x2a)) = iVar3;
    }
    *(int *)(lVar13 + 0x50 + *(longlong *)(param_1 + 0x2a)) = iVar12;
    if (iVar11 == -1) {
      param_1[0x31] = iVar3;
    }
    else {
      *(int *)((longlong)iVar11 * 0x54 + 0x50 + *(longlong *)(param_1 + 0x2a)) = iVar3;
    }
    *(int *)(lVar13 + 0x4c + *(longlong *)(param_1 + 0x2a)) = iVar11;
    if (iVar11 == iVar8) {
      *(int *)(lVar1 + *(longlong *)(param_1 + 0x34)) = iVar3;
    }
    if (iVar11 == iVar7) {
      *(int *)(lVar2 + *(longlong *)(param_1 + 0x34)) = iVar3;
    }
  }
  param_1[1] = param_1[1] + 1;
  return iVar3;
}



// FUNCTION 1438fca60 FUN_1438fca60 body=123 status=ok
// SIG undefined FUN_1438fca60(void)

undefined8 FUN_1438fca60(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == -1) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar2 = *(int *)((longlong)param_2 * 0x54 + 0x50 + *(longlong *)(param_1 + 8));
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  else {
    *(int *)((longlong)iVar2 * 0x54 + 0x4c + *(longlong *)(param_1 + 8)) = param_3;
  }
  lVar3 = (longlong)param_3 * 0x54;
  *(int *)(*(longlong *)(param_1 + 8) + 0x50 + lVar3) = iVar2;
  if (param_2 == -1) {
    *(int *)(param_1 + 0x24) = param_3;
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar1 + 0x4c + lVar3) = 0xffffffff;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  *(int *)((longlong)param_2 * 0x54 + 0x50 + *(longlong *)(param_1 + 8)) = param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(int *)(lVar1 + 0x4c + lVar3) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1438fcae0 FUN_1438fcae0 body=113 status=ok
// SIG undefined FUN_1438fcae0(void)

undefined4 * FUN_1438fcae0(undefined4 *param_1,undefined4 *param_2)

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
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x11) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 1438fcb60 FUN_1438fcb60 body=100 status=ok
// SIG undefined FUN_1438fcb60(void)

int FUN_1438fcb60(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)param_2 * 0x54;
  iVar1 = *(int *)(lVar4 + 0x50 + lVar3);
  iVar2 = *(int *)(lVar4 + 0x4c + lVar3);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0x20) = iVar2;
  }
  else {
    *(int *)((longlong)iVar1 * 0x54 + 0x4c + lVar3) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  else {
    *(int *)((longlong)iVar2 * 0x54 + 0x50 + *(longlong *)(param_1 + 8)) = iVar1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50 + lVar4) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4c + lVar4) = 0xffffffff;
  return iVar2;
}



// FUNCTION 1438fcbd0 FUN_1438fcbd0 body=330 status=ok
// SIG undefined FUN_1438fcbd0(void)

undefined8 FUN_1438fcbd0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_2 * 0x54;
  iVar7 = FUN_1438fd300(param_1,*(longlong *)(param_1 + 0xa8) + lVar9);
  lVar5 = *(longlong *)(param_1 + 0xd0);
  iVar7 = iVar7 * 2;
  iVar3 = *(int *)(lVar5 + (longlong)iVar7 * 4);
  lVar2 = (longlong)iVar7 * 4;
  iVar4 = *(int *)(lVar5 + (longlong)(iVar7 + 1) * 4);
  puVar1 = (undefined4 *)(lVar5 + (longlong)(iVar7 + 1) * 4);
  if (iVar3 == iVar4) {
    *puVar1 = 0xffffffff;
    *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0xd0)) = 0xffffffff;
  }
  else if (param_2 == iVar3) {
    *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(lVar9 + 0x4c + *(longlong *)(param_1 + 0xa8));
  }
  else if (param_2 == iVar4) {
    if (param_2 == -1) {
      uVar8 = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x50 + lVar9);
    }
    *puVar1 = uVar8;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  iVar3 = *(int *)(lVar2 + 0x50 + lVar9);
  iVar4 = *(int *)(lVar2 + 0x4c + lVar9);
  if (iVar3 == -1) {
    *(int *)(param_1 + 0xc0) = iVar4;
  }
  else {
    *(int *)((longlong)iVar3 * 0x54 + 0x4c + lVar2) = iVar4;
  }
  if (iVar4 == -1) {
    *(int *)(param_1 + 0xc4) = iVar3;
  }
  else {
    *(int *)((longlong)iVar4 * 0x54 + 0x50 + *(longlong *)(param_1 + 0xa8)) = iVar3;
  }
  *(undefined4 *)(lVar9 + 0x50 + *(longlong *)(param_1 + 0xa8)) = 0xffffffff;
  *(undefined4 *)(lVar9 + 0x4c + *(longlong *)(param_1 + 0xa8)) = 0xffffffff;
  if (**(int **)(param_1 + 0xd0) == -1) {
    FUN_1438fca60(param_1 + 0xa0,*(undefined4 *)(param_1 + 0xc0),param_2);
    *(int *)(*(longlong *)(param_1 + 0xd0) + 4) = param_2;
  }
  else {
    FUN_1438fca60(param_1 + 0xa0,**(int **)(param_1 + 0xd0),param_2);
  }
  piVar6 = *(int **)(param_1 + 0xd0);
  *piVar6 = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return CONCAT71((int7)((ulonglong)piVar6 >> 8),1);
}



// FUNCTION 1438fcd20 FUN_1438fcd20 body=1297 status=ok
// SIG undefined FUN_1438fcd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1438fcd20(longlong param_1,undefined4 *param_2,uint *param_3,undefined4 param_4,
                       float param_5,float *param_6,undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  float *local_1b8;
  char local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  float *local_198;
  undefined4 *local_190;
  undefined1 *local_188 [2];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  byte local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_198 = param_6;
  local_188[0] = param_7;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return local_80 & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) % DAT_14682cbf8 + 1;
  lVar13 = 0;
  *param_7 = 1;
  fVar19 = 3.4028235e+38;
  local_1a0 = param_4;
  local_190 = param_2;
  uVar7 = FUN_1438fc730(&local_178,param_2);
  FUN_1438fc760(*(undefined8 *)(param_1 + 8),&local_98,uVar7);
  uVar1 = uStack_94;
  local_1a8 = '\x01';
  local_128 = local_98;
  uStack_124 = uStack_94;
  uStack_120 = uStack_90;
  uStack_11c = uStack_8c;
  if ((local_98 != uStack_94) &&
     (lVar10 = (longlong)(int)local_98 * 0x54 + *(longlong *)(local_88 + 0xa8), param_6 = local_198,
     lVar10 != 0)) {
    uVar11 = (ulonglong)uStack_90;
    do {
      uVar5 = uStack_8c;
      uVar4 = uStack_90;
      uVar3 = uStack_94;
      uVar2 = local_98;
      cVar6 = FUN_1438f8e20(param_3,lVar10 + 0x1c,lVar10 + 0x28);
      if (cVar6 != '\0') {
        fVar15 = (float)(int)(*(int *)(lVar10 + 0xc) - *param_3);
        fVar17 = (float)(int)(*(int *)(lVar10 + 0x10) - param_3[1]);
        fVar16 = (float)(int)(*(int *)(lVar10 + 0x14) - param_3[2]);
        fVar18 = (float)(int)(*(int *)(lVar10 + 0x3c) - param_3[1]);
        fVar17 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
        fVar15 = (float)(int)(*(int *)(lVar10 + 0x38) - *param_3);
        fVar16 = (float)(int)(*(int *)(lVar10 + 0x40) - param_3[2]);
        fVar16 = fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16;
        fVar15 = fVar16;
        if (fVar17 <= fVar16) {
          fVar15 = fVar17;
        }
        if (fVar15 < fVar19) {
          local_128 = uVar2;
          uStack_124 = uVar3;
          uStack_120 = uVar4;
          uStack_11c = uVar5;
          local_1a8 = fVar17 < fVar16;
          lVar13 = lVar10;
          fVar19 = fVar15;
        }
      }
      uStack_90 = *(uint *)((longlong)(int)uVar11 * 0x54 + 0x4c + *(longlong *)(local_88 + 0xa8));
      uVar11 = (ulonglong)(int)uStack_90;
    } while ((uStack_90 != uVar1) &&
            (lVar10 = uVar11 * 0x54 + *(longlong *)(local_88 + 0xa8), lVar10 != 0));
    param_2 = local_190;
    param_6 = local_198;
    if (lVar13 != 0) {
      FUN_1438fd4d0(*(undefined8 *)(param_1 + 8),uStack_120);
      fVar16 = (float)(int)(param_3[1] - *(int *)(lVar13 + 0x10));
      fVar19 = (float)(int)(*param_3 - *(int *)(lVar13 + 0xc));
      fVar15 = (float)(int)(param_3[2] - *(int *)(lVar13 + 0x14));
      fVar19 = fVar16 * fVar16 + fVar19 * fVar19 + fVar15 * fVar15;
      lVar10 = 0xc;
      if (local_1a8 == '\0') {
        lVar10 = 0x38;
      }
      local_98 = *(uint *)(lVar10 + lVar13);
      uStack_94 = *(uint *)(lVar10 + 4 + lVar13);
      uStack_90 = *(uint *)(lVar10 + 8 + lVar13);
      param_2 = local_190;
      param_6 = local_198;
      if ((fVar19 < *(float *)(param_1 + 0x2c)) &&
         ((((local_98 == *param_3 && (uStack_94 == param_3[1])) && (uStack_90 == param_3[2])) ||
          (cVar6 = FUN_143901690(*(undefined8 *)(param_1 + 0x10),&local_98,param_3),
          param_2 = local_190, param_6 = local_198, cVar6 != '\0')))) {
        local_98 = *param_3;
        uVar1 = param_3[2];
        uStack_94 = param_3[1];
        *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)param_3;
        *(uint *)(lVar13 + 0x40) = uVar1;
        fVar19 = _guard_xfg_dispatch_icall_nop
                           (*(float *)(lVar13 + 0x18) * *(float *)(lVar13 + 0x18) + fVar19);
        *local_198 = fVar19;
        bVar14 = *(byte *)(lVar13 + 0x34);
        goto LAB_1438fd1e5;
      }
    }
  }
  *local_188[0] = 0;
  fVar19 = (float)FUN_1438f8da0(param_3,param_2);
  fVar15 = _guard_xfg_dispatch_icall_nop(0.25 / *(float *)(param_1 + 0x28));
  ppuVar8 = local_188;
  iVar12 = (int)fVar15;
  iVar9 = (int)(((param_5 + param_5) * fVar19) / fVar15);
  local_188[0] = (undefined1 *)CONCAT44(local_188[0]._4_4_,iVar9);
  if (iVar9 < DAT_146b95cc4) {
    ppuVar8 = (undefined1 **)&DAT_146b95cc4;
  }
  iVar9 = *(int *)ppuVar8;
  if (DAT_146b95cc8 < *(int *)ppuVar8) {
    iVar9 = DAT_146b95cc8;
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_1c8 = &local_a8;
  local_1d0 = &local_b8;
  local_1d8 = param_5;
  FUN_143900080(*(undefined8 *)(param_1 + 0x10),param_2,param_3,local_1a0);
  local_1a4 = 3.4028235e+38;
  cVar6 = FUN_143901690(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  if (cVar6 == '\0') {
    local_1b8 = &local_1a4;
    local_1c0 = 4;
    if (4 < iVar12 * iVar12) {
      local_1c0 = iVar12 * iVar12;
    }
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,iVar9);
    local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,iVar12);
    local_1d8 = param_5;
    cVar6 = FUN_143901bc0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,local_1a0);
    bVar14 = cVar6 != '\0';
  }
  else {
    bVar14 = true;
    local_1a4 = fVar19;
  }
  local_108 = 0;
  uStack_100 = 0;
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) % DAT_14682cbf8 + 1;
  local_178 = *param_2;
  local_16c = *param_3;
  local_168 = param_3[1];
  local_164 = param_3[2];
  local_174 = param_2[1];
  local_170 = param_2[2];
  local_15c = (undefined4)local_b8;
  local_158 = local_b8._4_4_;
  local_154 = local_b0;
  local_150 = (undefined4)local_a8;
  local_14c = local_a8._4_4_;
  local_148 = local_a0;
  local_f8 = 0;
  local_ec = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_160 = local_1a4;
  local_144 = bVar14;
  local_140 = local_16c;
  local_13c = local_168;
  local_138 = local_164;
  FUN_1438fc580(*(undefined8 *)(param_1 + 8),&local_178,&local_108);
  *param_6 = local_1a4;
LAB_1438fd1e5:
  return (ulonglong)bVar14;
}



// FUNCTION 1438fd240 FUN_1438fd240 body=177 status=ok
// SIG undefined FUN_1438fd240(void)

int FUN_1438fd240(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = FUN_1438fd300();
  *param_3 = iVar2;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar2 * 2) * 4);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    iVar2 = *(int *)((longlong)
                     *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar2 * 2 + 1) * 4) * 0x54
                     + 0x4c + lVar1);
    if (iVar4 != iVar2) {
      do {
        lVar3 = (longlong)iVar4 * 0x54;
        if (((*(int *)(lVar3 + lVar1) == *param_2) && (*(int *)(lVar3 + 4 + lVar1) == param_2[1]))
           && (*(int *)(lVar3 + 8 + lVar1) == param_2[2])) {
          return iVar4;
        }
        iVar4 = *(int *)(lVar3 + 0x4c + lVar1);
      } while (iVar4 != iVar2);
    }
  }
  return -1;
}



// FUNCTION 1438fd300 FUN_1438fd300 body=199 status=ok
// SIG undefined FUN_1438fd300(void)

int FUN_1438fd300(longlong param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (((uint)param_2[10] ^ ((param_2[8] ^ 0x84222325) * 0x1b3 ^ (uint)param_2[9]) * 0x1b3) *
           0x1b3 ^ (uint)param_2[0xb]) * 0x1b3 ^
          ((((*param_2 ^ 0x84222325) * 0x1b3 ^ (uint)param_2[1]) * 0x1b3 ^ (uint)param_2[2]) * 0x1b3
          ^ (uint)param_2[3]) * 0x1b3 ^
          ((((param_2[4] ^ 0x84222325) * 0x1b3 ^ (uint)param_2[5]) * 0x1b3 ^ (uint)param_2[6]) *
           0x1b3 ^ (uint)param_2[7]) * 0x1b3;
  uVar2 = (int)uVar1 >> 0x1f;
  return (int)((uVar1 ^ uVar2) - uVar2) % (*(int *)(param_1 + 200) + -1) + 1;
}



// FUNCTION 1438fd3d0 FUN_1438fd3d0 body=255 status=ok
// SIG undefined FUN_1438fd3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438fd3d0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  local_50 = param_2[6];
  local_64 = param_2[1];
  local_60 = param_2[2];
  local_5c = param_2[3];
  local_58 = param_2[4];
  local_54 = param_2[5];
  local_4c = param_2[7];
  local_48 = param_2[8];
  local_44 = param_2[9];
  local_40 = param_2[10];
  local_3c = param_2[0xb];
  local_38 = param_2[0xc];
  local_34 = *(undefined1 *)(param_2 + 0xd);
  local_30 = param_2[0xe];
  local_2c = param_2[0xf];
  local_28 = param_2[0x10];
  if (*(int *)(param_1 + 0xf0) == -1) {
    local_24 = 0xffffffffffffffff;
    uVar1 = FUN_1438fc850(param_1 + 8,&local_68);
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
  }
  else {
    local_24 = CONCAT44(0xffffffff,*(int *)(param_1 + 0xf0));
    uVar1 = FUN_1438fc850(param_1 + 8,&local_68);
    *(undefined4 *)
     ((longlong)*(int *)(param_1 + 0xf0) * 0x54 + 0x48 + *(longlong *)(param_1 + 0xb0)) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 1438fd4d0 FUN_1438fd4d0 body=180 status=ok
// SIG undefined FUN_1438fd4d0(void)

void FUN_1438fd4d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  lVar4 = (longlong)param_2 * 0x54;
  iVar1 = *(int *)(lVar4 + 0x48 + lVar3);
  iVar2 = *(int *)(lVar4 + 0x44 + lVar3);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0xf0) = iVar2;
  }
  else {
    *(int *)((longlong)iVar1 * 0x54 + 0x44 + lVar3) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0xf4) = iVar1;
  }
  else {
    *(int *)((longlong)iVar2 * 0x54 + 0x48 + *(longlong *)(param_1 + 0xb0)) = iVar1;
  }
  if (*(int *)(param_1 + 0xf0) == -1) {
    *(int *)(param_1 + 0xf4) = param_2;
    *(int *)(param_1 + 0xf0) = param_2;
    return;
  }
  *(int *)(*(longlong *)(param_1 + 0xb0) + 0x44 + lVar4) = *(int *)(param_1 + 0xf0);
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x48 + lVar4) = 0xffffffff;
  *(int *)((longlong)*(int *)(param_1 + 0xf0) * 0x54 + 0x48 + *(longlong *)(param_1 + 0xb0)) =
       param_2;
  *(int *)(param_1 + 0xf0) = param_2;
  return;
}



// FUNCTION 1438fd590 FUN_1438fd590 body=122 status=ok
// SIG undefined FUN_1438fd590(void)

undefined1 FUN_1438fd590(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  iVar1 = *(int *)((longlong)param_2 * 0x54 + 0x48 + lVar3);
  iVar2 = *(int *)((longlong)param_2 * 0x54 + 0x44 + lVar3);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0xf0) = iVar2;
  }
  else {
    *(int *)((longlong)iVar1 * 0x54 + 0x44 + lVar3) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0xf4) = iVar1;
    uVar4 = FUN_1438fcbd0(param_1 + 8);
    return uVar4;
  }
  *(int *)((longlong)iVar2 * 0x54 + 0x48 + *(longlong *)(param_1 + 0xb0)) = iVar1;
  uVar4 = FUN_1438fcbd0(param_1 + 8);
  return uVar4;
}



// FUNCTION 1438fd610 FUN_1438fd610 body=72 status=ok
// SIG undefined FUN_1438fd610(void)

void FUN_1438fd610(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1438fe3a0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1438fd660 _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64> body=678 status=ok
// SIG undefined _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
::
_Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
          (longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 param_5
          ,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1438fd6e4;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_1438fd6e4;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_1438fd6e4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_1438fd8de:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_1438fd8de;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 1438fd910 _Insert_hint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64> body=596 status=ok
// SIG undefined _Insert_hint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
::
_Insert_hint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
          (longlong *param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4,
          undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_20 [24];
  
  if (param_1[1] == 0) {
    _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
    ::
    _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
              (param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < (ulonglong)param_3[4]) {
        _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
        ::
        _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                  (param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if (*(ulonglong *)(plVar2[2] + 0x20) < *param_4) {
        _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
        ::
        _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                  (param_1,param_2,0,plVar2[2],param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else {
      uVar3 = *param_4;
      uVar4 = param_3[4];
      if (uVar3 < uVar4) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar8 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar8[2] + 0x19);
            plVar5 = (longlong *)plVar8[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar5[2] + 0x19);
              plVar8 = plVar5;
              plVar5 = (longlong *)plVar5[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar5 = (longlong *)param_3[1];
            plVar8 = param_3;
            while ((plVar6 = plVar5, cVar1 == '\0' && (plVar8 == (longlong *)*plVar6))) {
              cVar1 = *(char *)(plVar6[1] + 0x19);
              plVar5 = (longlong *)plVar6[1];
              plVar8 = plVar6;
            }
            if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
              plVar8 = plVar6;
            }
          }
        }
        else {
          plVar8 = (longlong *)param_3[2];
        }
        if ((ulonglong)plVar8[4] < uVar3) {
          if (*(char *)(plVar8[2] + 0x19) != '\0') {
            _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
            ::
            _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                      (param_1,param_2,0,plVar8,param_4,param_5,0xfffffffffffffffe);
            return param_2;
          }
          _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
          ::
          _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                    (param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
        uVar4 = param_3[4];
      }
      if (uVar4 < uVar3) {
        plVar8 = param_3;
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar8 = (longlong *)param_3[2];
          if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar8 + 0x19);
            plVar5 = (longlong *)*plVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar5 + 0x19);
              plVar8 = plVar5;
              plVar5 = (longlong *)*plVar5;
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar6 = (longlong *)param_3[1];
            plVar5 = param_3;
            while ((plVar8 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar8[2]))) {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar6 = (longlong *)plVar8[1];
              plVar5 = plVar8;
            }
          }
        }
        if ((plVar8 == plVar2) || (uVar3 < (ulonglong)plVar8[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
            ::
            _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                      (param_1,param_2,0,param_3,param_4,param_5,0xfffffffffffffffe);
            return param_2;
          }
          _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
          ::
          _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                    (param_1,param_2,1,plVar8,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
      }
    }
    puVar7 = (undefined8 *)
             _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
                       (param_1,local_20,0,param_4,param_5);
    *param_2 = *puVar7;
  }
  return param_2;
}



// FUNCTION 1438fdb70 _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64> body=351 status=ok
// SIG undefined _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
::
_Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
          (longlong *param_1,undefined8 *param_2,char param_3,ulonglong *param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined8 *)*param_1;
  bVar5 = true;
  puVar6 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
    puVar3 = (undefined8 *)puVar4[1];
    do {
      puVar6 = puVar3;
      if (param_3 == '\0') {
        bVar5 = *param_4 < (ulonglong)puVar6[4];
      }
      else {
        bVar5 = *param_4 <= (ulonglong)puVar6[4];
      }
      if (bVar5 == false) {
        puVar3 = (undefined8 *)puVar6[2];
      }
      else {
        puVar3 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  puVar3 = puVar6;
  if (bVar5 != false) {
    if (puVar6 == (undefined8 *)*puVar4) {
      puVar4 = (undefined8 *)
               _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
               ::
               _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                         (param_1,local_res8,1,puVar6,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar3 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
        puVar4 = (undefined8 *)puVar3[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined8 *)puVar4[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar4 = (undefined8 *)puVar6[1];
        puVar3 = puVar6;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined8 *)*puVar2))) {
          cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
          puVar4 = (undefined8 *)puVar2[1];
          puVar3 = puVar2;
        }
        if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
          puVar3 = puVar2;
        }
      }
    }
    else {
      puVar3 = (undefined8 *)puVar6[2];
    }
  }
  if ((ulonglong)puVar3[4] < *param_4) {
    puVar4 = (undefined8 *)
             _Tree<std::_Tmap_traits<unsigned___int64,FVector,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,FVector>_>,0>_>
             ::
             _Insert_at<std::pair<unsigned___int64_const_,FVector>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,FVector>,void_*___ptr64>_*___ptr64>
                       (param_1,local_res8,bVar5,puVar6,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FMemory::operator_delete(param_5);
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1438fdcd0 _Try_emplace<unsigned___int64> body=196 status=ok
// SIG undefined _Try_emplace<unsigned___int64>(void)

undefined8 *
std::
map<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>
::_Try_emplace<unsigned___int64>(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  ulonglong *local_res20;
  
  puVar1 = (undefined8 *)*param_1;
  puVar4 = puVar1;
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    puVar3 = puVar1;
    puVar5 = (undefined8 *)puVar1[1];
    do {
      puVar4 = puVar5;
      if ((ulonglong)puVar4[4] < *param_3) {
        puVar5 = (undefined8 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined8 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  if ((puVar4 != puVar1) && ((ulonglong)puVar4[4] <= *param_3)) {
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  local_res20 = param_3;
  lVar2 = FUN_1438fd610(param_1,&PTR_145c5c400,&local_res20,&local_res8);
  _Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
  ::
  _Insert_hint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
            (param_1,&local_res8,puVar4,lVar2 + 0x20,lVar2);
  *param_2 = local_res8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 1438fdda0 FUN_1438fdda0 body=221 status=ok
// SIG undefined FUN_1438fdda0(void)

longlong FUN_1438fdda0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  _Mtx_init_in_situ(param_1,2);
  _eh_vector_constructor_iterator_(param_1 + 0x50,0x28,0x10,FUN_1438fde80,FUN_1438f35e0);
  *(longlong *)(param_1 + 0x2d0) = param_1 + 0x50;
  *(longlong *)(param_1 + 0x2d8) = param_1 + 0x2a8;
  iVar3 = 0;
  iVar2 = 0;
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar4 = 0xf;
  lVar5 = 0xf;
  do {
    iVar2 = iVar2 + 1;
    *plVar1 = param_1 + ((longlong)iVar2 + 2) * 0x28;
    plVar1 = plVar1 + 5;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar1 = (longlong *)(param_1 + 0x90);
  do {
    *plVar1 = param_1 + ((longlong)iVar3 + 2) * 0x28;
    iVar3 = iVar3 + 1;
    plVar1 = plVar1 + 5;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_1;
}



// FUNCTION 1438fde80 FUN_1438fde80 body=80 status=ok
// SIG undefined FUN_1438fde80(void)

undefined4 * FUN_1438fde80(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar2 = FUN_1438fe340(puVar1);
  *puVar1 = uVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1438fded0 FUN_1438fded0 body=321 status=ok
// SIG undefined FUN_1438fded0(void)

ulonglong FUN_1438fded0(undefined8 param_1,float *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res10;
  
  local_res10 = _guard_xfg_dispatch_icall_nop(*param_2);
  if (local_res10 == 0.0) {
    local_res10 = 0.0;
  }
  uVar1 = (ulonglong)local_res10._1_1_;
  uVar7 = (ulonglong)(byte)local_res10;
  uVar2 = (ulonglong)local_res10._2_1_;
  uVar3 = (ulonglong)local_res10._3_1_;
  local_res10 = _guard_xfg_dispatch_icall_nop(param_2[1]);
  if (local_res10 == 0.0) {
    local_res10 = 0.0;
  }
  uVar4 = (ulonglong)local_res10._1_1_;
  uVar8 = (ulonglong)(byte)local_res10;
  uVar5 = (ulonglong)local_res10._2_1_;
  uVar6 = (ulonglong)local_res10._3_1_;
  local_res10 = _guard_xfg_dispatch_icall_nop(param_2[2]);
  if (local_res10 == 0.0) {
    local_res10 = 0.0;
  }
  return (((ulonglong)local_res10._2_1_ ^
          (((ulonglong)(byte)local_res10 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
          (ulonglong)local_res10._1_1_) * 0x100000001b3) * 0x100000001b3 ^
         (ulonglong)local_res10._3_1_) * 0x100000001b3 ^
         ((((uVar8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4) * 0x100000001b3 ^ uVar5) *
          0x100000001b3 ^ uVar6) * 0x100000001b3 ^
         ((((uVar7 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar1) * 0x100000001b3 ^ uVar2) *
          0x100000001b3 ^ uVar3) * 0x100000001b3;
}



// FUNCTION 1438fe020 FUN_1438fe020 body=314 status=ok
// SIG undefined FUN_1438fe020(void)

undefined8 FUN_1438fe020(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  piVar2 = *(int **)(param_1 + 0x2d0);
  while( true ) {
    if (piVar2 == (int *)0x0) goto LAB_1438fe124;
    if (*piVar2 == param_2) break;
    piVar2 = *(int **)(piVar2 + 8);
  }
  if (piVar2 != *(int **)(param_1 + 0x2d0)) {
    FUN_1438fe160(param_1,piVar2);
    *(undefined8 *)(piVar2 + 8) = *(undefined8 *)(param_1 + 0x2d0);
    *(int **)(*(longlong *)(param_1 + 0x2d0) + 0x18) = piVar2;
    *(int **)(param_1 + 0x2d0) = piVar2;
  }
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  uVar5 = FUN_1438fded0(piVar2,&local_18);
  puVar3 = *(undefined8 **)(piVar2 + 2);
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar7 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    if ((ulonglong)puVar6[4] < uVar5) {
      puVar9 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  }
  if ((puVar7 == puVar3) || (uVar5 < (ulonglong)puVar7[4])) {
    puVar7 = puVar3;
  }
  if (puVar7 == puVar3) {
LAB_1438fe124:
    uVar8 = 0;
  }
  else {
    *param_4 = puVar7[5];
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar7 + 6);
    uVar8 = 1;
  }
  iVar4 = _Mtx_unlock(param_1);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  return uVar8;
}



// FUNCTION 1438fe160 FUN_1438fe160 body=115 status=ok
// SIG undefined FUN_1438fe160(void)

void FUN_1438fe160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x2d0)) {
    lVar1 = *(longlong *)(param_2 + 0x20);
    *(longlong *)(param_1 + 0x2d0) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
  }
  if (param_2 == *(longlong *)(param_1 + 0x2d8)) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    *(longlong *)(param_1 + 0x2d8) = lVar1;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 1438fe1e0 FUN_1438fe1e0 body=349 status=ok
// SIG undefined FUN_1438fe1e0(void)

void FUN_1438fe1e0(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong local_res8;
  longlong local_28;
  undefined4 local_20;
  
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  for (piVar5 = *(int **)(param_1 + 0x2d0); piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 8)) {
    if (*piVar5 == param_2) goto LAB_1438fe26a;
  }
  piVar5 = *(int **)(param_1 + 0x2d8);
  FUN_1438fe160(param_1,piVar5);
  *piVar5 = -1;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::clear(piVar5 + 2);
  piVar5[8] = 0;
  piVar5[9] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  *piVar5 = param_2;
LAB_1438fe26a:
  uVar1 = *param_4;
  uVar2 = *(undefined4 *)(param_4 + 1);
  local_res8 = *param_3;
  lVar3 = param_3[1];
  if (0x3f < *(ulonglong *)(piVar5 + 4)) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(piVar5 + 2);
  }
  local_28 = local_res8;
  local_20 = (int)lVar3;
  local_res8 = FUN_1438fded0(piVar5,&local_28);
  std::
  map<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>
  ::_Try_emplace<unsigned___int64>(piVar5 + 2,&local_28,&local_res8);
  *(undefined8 *)(local_28 + 0x28) = uVar1;
  *(undefined4 *)(local_28 + 0x30) = uVar2;
  if (piVar5 != *(int **)(param_1 + 0x2d0)) {
    FUN_1438fe160(param_1,piVar5);
    *(undefined8 *)(piVar5 + 8) = *(undefined8 *)(param_1 + 0x2d0);
    *(int **)(*(longlong *)(param_1 + 0x2d0) + 0x18) = piVar5;
    *(int **)(param_1 + 0x2d0) = piVar5;
  }
  iVar4 = _Mtx_unlock(param_1);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  return;
}



// FUNCTION 1438fe340 FUN_1438fe340 body=82 status=ok
// SIG undefined FUN_1438fe340(void)

void FUN_1438fe340(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x38);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *(longlong *)lVar1 = lVar1;
  if ((longlong *)(lVar1 + 8) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 8) = lVar1;
  }
  if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 1438fe3a0 FUN_1438fe3a0 body=92 status=ok
// SIG undefined FUN_1438fe3a0(void)

undefined8 * FUN_1438fe3a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 1438fe400 FUN_1438fe400 body=115 status=ok
// SIG undefined FUN_1438fe400(void)

void FUN_1438fe400(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    uVar3 = 0xfffffffffffffffe;
    do {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}



// FUNCTION 1438fe480 FUN_1438fe480 body=261 status=ok
// SIG undefined FUN_1438fe480(void)

void FUN_1438fe480(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)(param_3 - 1) / 2;
  lVar6 = param_2;
  while (lVar6 < lVar7) {
    lVar8 = lVar6 * 2 + 2;
    fVar4 = *(float *)(param_1 + 0xc + lVar8 * 0x10);
    pfVar3 = (float *)(param_1 + -4 + lVar8 * 0x10);
    if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
      lVar8 = lVar6 * 2 + 1;
    }
    puVar1 = (undefined8 *)(param_1 + lVar8 * 0x10);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar6 = lVar8;
  }
  if ((lVar6 == lVar7) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    lVar6 = param_3 - 1;
  }
  while ((param_2 < lVar6 &&
         (lVar7 = (lVar6 + -1) / 2, fVar4 = *(float *)(param_1 + 0xc + lVar7 * 0x10),
         *(float *)((longlong)param_4 + 0xc) <= fVar4 &&
         fVar4 != *(float *)((longlong)param_4 + 0xc)))) {
    puVar1 = (undefined8 *)(param_1 + lVar7 * 0x10);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar6 = lVar7;
  }
  uVar5 = param_4[1];
  puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 1438fe590 FUN_1438fe590 body=147 status=ok
// SIG undefined FUN_1438fe590(void)

void FUN_1438fe590(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = param_2 - param_1 >> 4;
  if (1 < lVar9) {
    fVar3 = *(float *)(param_2 + -4);
    uVar5 = *(undefined8 *)(param_2 + -0x10);
    uVar6 = *(undefined8 *)(param_2 + -8);
    lVar8 = lVar9 + -2;
    lVar9 = lVar9 + -1;
    while ((0 < lVar9 && (lVar7 = lVar8 / 2, fVar3 < *(float *)(param_1 + 0xc + lVar7 * 0x10)))) {
      puVar1 = (undefined8 *)(param_1 + lVar7 * 0x10);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + lVar9 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar8 = lVar7 + -1;
      lVar9 = lVar7;
    }
    puVar1 = (undefined8 *)(param_1 + lVar9 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
  }
  return;
}



// FUNCTION 1438fe630 FUN_1438fe630 body=41 status=ok
// SIG undefined FUN_1438fe630(void)

void FUN_1438fe630(undefined1 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1438fe660 FUN_1438fe660 body=70 status=ok
// SIG undefined FUN_1438fe660(void)

void FUN_1438fe660(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    do {
      if (puVar1 + -3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + -3) = 0;
        puVar1[-2] = 0;
        *puVar1 = 0xffffffffffffffff;
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1438fe6b0 FUN_1438fe6b0 body=54 status=ok
// SIG undefined FUN_1438fe6b0(void)

void FUN_1438fe6b0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x14;
    do {
      if (param_1 != 0x14) {
        *(undefined8 *)(param_1 + -4) = 0xffffffffffffffff;
      }
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1438fe6f0 FUN_1438fe6f0 body=71 status=ok
// SIG undefined FUN_1438fe6f0(void)

void FUN_1438fe6f0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1438fe740 _Uninit_copy<char_const_*___ptr64,unsigned_char_*___ptr64,std::allocator<unsigned_char>_> body=69 status=ok
// SIG undefined _Uninit_copy<char_const_*___ptr64,unsigned_char_*___ptr64,std::allocator<unsigned_char>_>(void)

undefined1 *
std::_Uninit_copy<char_const_*___ptr64,unsigned_char_*___ptr64,std::allocator<unsigned_char>_>
          (ulonglong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = param_2 - param_1;
  if (param_2 < param_1) {
    lVar3 = lVar2;
  }
  if (lVar3 != 0) {
    lVar1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = param_3[lVar1];
      }
      param_3 = param_3 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar3);
  }
  return param_3;
}



// FUNCTION 1438fe790 FUN_1438fe790 body=132 status=ok
// SIG undefined FUN_1438fe790(void)

undefined8 *
FUN_1438fe790(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj<TritonRuntime::VoxTree::BakedTree>::vftable;
    if (puVar1 + 2 != (undefined8 *)0x0) {
      puVar1[2] = *param_2;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_143903a60(param_1,puVar1 + 2,puVar1,param_4,uVar2);
  return param_1;
}



// FUNCTION 1438fe820 FUN_1438fe820 body=125 status=ok
// SIG undefined FUN_1438fe820(void)

undefined8 * FUN_1438fe820(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0xa0);
  if (lVar2 != 0) {
    uVar3 = FUN_1438ff0f0(lVar2,*param_2,*param_3);
  }
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 1438fe8a0 FUN_1438fe8a0 body=178 status=ok
// SIG undefined FUN_1438fe8a0(void)

undefined8 * FUN_1438fe8a0(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap>::TableEntry>
             ::vftable;
  FUN_1438feb80(param_1 + 1,lVar2);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)((longlong)param_1 + 0x24) = param_2 + -1;
  if (0 < param_2) {
    iVar1 = 1;
    do {
      lVar3 = lVar3 + 0x20;
      *(int *)(param_1[1] + -4 + lVar3) = iVar1 + -2;
      *(int *)(param_1[1] + -8 + lVar3) = iVar1;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined4 *)((longlong)*(int *)(param_1 + 4) * 0x20 + 0x1c + param_1[1]) = 0xffffffff;
  *(undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x24) * 0x20 + 0x18 + param_1[1]) =
       0xffffffff;
  return param_1;
}



// FUNCTION 1438fe960 FUN_1438fe960 body=178 status=ok
// SIG undefined FUN_1438fe960(void)

undefined8 * FUN_1438fe960(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal>::TableEntry>
             ::vftable;
  FUN_1438fec10(param_1 + 1,lVar2);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)((longlong)param_1 + 0x24) = param_2 + -1;
  if (0 < param_2) {
    iVar1 = 1;
    do {
      lVar3 = lVar3 + 0x18;
      *(int *)(param_1[1] + -4 + lVar3) = iVar1 + -2;
      *(int *)(param_1[1] + -8 + lVar3) = iVar1;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1[1] + 0x14 + (longlong)*(int *)(param_1 + 4) * 0x18) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0x10 + (longlong)*(int *)((longlong)param_1 + 0x24) * 0x18) =
       0xffffffff;
  return param_1;
}



// FUNCTION 1438fea20 FUN_1438fea20 body=176 status=ok
// SIG undefined FUN_1438fea20(void)

int * FUN_1438fea20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1438fe8a0(param_1 + 0xe);
  iVar1 = (param_3 + -1 + param_2) / param_3 + 1;
  param_1[0x18] = iVar1;
  FUN_1438fc130(param_1 + 0x1a,(longlong)(iVar1 * 2));
  **(int **)(param_1 + 0x1a) = param_1[0x16];
  *(int *)(*(longlong *)(param_1 + 0x1a) + 4) = param_1[0x17];
  iVar1 = 2;
  if (2 < param_1[0x18] * 2) {
    lVar2 = 8;
    do {
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x1a)) = 0xffffffff;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar1 < param_1[0x18] * 2);
  }
  return param_1;
}



// FUNCTION 1438fead0 FUN_1438fead0 body=173 status=ok
// SIG undefined FUN_1438fead0(void)

int * FUN_1438fead0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_1438fe960(param_1 + 10);
  iVar1 = (param_3 + -1 + param_2) / param_3 + 1;
  param_1[0x14] = iVar1;
  FUN_1438fc130(param_1 + 0x16,(longlong)(iVar1 * 2));
  **(int **)(param_1 + 0x16) = param_1[0x12];
  *(int *)(*(longlong *)(param_1 + 0x16) + 4) = param_1[0x13];
  iVar1 = 2;
  if (2 < param_1[0x14] * 2) {
    lVar2 = 8;
    do {
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x16)) = 0xffffffff;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar1 < param_1[0x14] * 2);
  }
  return param_1;
}



// FUNCTION 1438feb80 FUN_1438feb80 body=139 status=ok
// SIG undefined FUN_1438feb80(void)

longlong * FUN_1438feb80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar3 = param_2 * 0x20;
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar3 + *param_1;
    FUN_1438fe660(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar3;
  }
  return param_1;
}



// FUNCTION 1438fec10 FUN_1438fec10 body=144 status=ok
// SIG undefined FUN_1438fec10(void)

longlong * FUN_1438fec10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    lVar1 = param_2 * 0x18;
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,lVar1);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + *param_1;
    FUN_1438fe6b0(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar1;
  }
  return param_1;
}



// FUNCTION 1438feca0 FUN_1438feca0 body=144 status=ok
// SIG undefined FUN_1438feca0(void)

longlong * FUN_1438feca0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    lVar1 = param_2 * 0x18;
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,lVar1);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + *param_1;
    FUN_1438fe6f0(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar1;
  }
  return param_1;
}



// FUNCTION 1438fed30 FUN_1438fed30 body=591 status=ok
// SIG undefined FUN_1438fed30(void)

uint * FUN_1438fed30(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                    undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_88;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined **local_58;
  uint *local_50;
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = ((param_2 - 1) + param_6) / param_6;
  param_1[1] = ((param_6 - 1) + param_3) / param_6;
  param_1[2] = ((param_6 - 1) + param_4) / param_6;
  param_1[3] = param_6;
  param_1[7] = param_2 / param_5;
  param_1[8] = param_3 / param_5;
  param_1[9] = param_4 / param_5;
  param_1[6] = param_5;
  plVar2 = (longlong *)FUN_1438f1790((ulonglong)param_5,(ulonglong)param_4 % (ulonglong)param_5);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2,0xb8);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1438fef80(lVar3,param_7);
  }
  *(undefined8 **)(param_1 + 10) = puVar4;
  local_58 = std::
             _Func_impl<<lambda_a090a8d8c52ec00213a8d43dbaddef06>,std::allocator<int>,bool,unsigned_int,unsigned_int&___ptr64,unsigned_int&___ptr64,unsigned_int&___ptr64>
             ::vftable;
  local_20 = &local_58;
  local_50 = param_1;
  FUN_1438f1f40(puVar4 + 7,&local_58);
  puVar4 = puVar6;
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])
              (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
  }
  for (; param_6 != 1; param_6 = param_6 >> 1) {
    puVar4 = (undefined8 *)(ulonglong)((uint)puVar4 + 1);
  }
  param_1[4] = (uint)puVar4;
  param_1[5] = (1 << ((byte)puVar4 & 0x1f)) - 1;
  plVar2 = (longlong *)FUN_1438f1790();
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2,0x70);
  puVar4 = puVar6;
  if (lVar3 != 0) {
    uVar1 = param_1[3];
    local_80 = uVar1 * param_1[2];
    local_88 = (undefined8 *)CONCAT44(param_1[1] * uVar1,uVar1 * *param_1);
    local_78 = 0x32;
    local_74 = 0x32;
    local_70 = 0x32;
    local_68 = 0;
    local_60 = 0;
    puVar4 = (undefined8 *)FUN_1438ff050(lVar3,param_1,&local_68,&local_78,&local_88);
  }
  *(undefined8 **)(param_1 + 0xc) = puVar4;
  plVar2 = (longlong *)FUN_1438f1790();
  puVar5 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,0x20);
  puVar4 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    local_88 = puVar5;
    FUN_1438fbd70(puVar5,0x40);
    puVar4 = puVar5;
  }
  *(undefined8 **)(param_1 + 0xe) = puVar4;
  plVar2 = (longlong *)FUN_1438f1790();
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)puVar4 = param_8;
    *(undefined4 *)((longlong)puVar4 + 4) = 0x7fffffff;
    FUN_1438fead0(puVar4 + 1,param_8,1);
    puVar4[0xf] = 0xffffffffffffffff;
    puVar6 = puVar4;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  return param_1;
}



// FUNCTION 1438fef80 FUN_1438fef80 body=130 status=ok
// SIG undefined FUN_1438fef80(void)

undefined8 *
FUN_1438fef80(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xe] = 0;
  FUN_1438feca0(param_1 + 0xf,0,param_3,param_4,0xfffffffffffffffe);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = param_2;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 1438ff010 FUN_1438ff010 body=61 status=ok
// SIG undefined FUN_1438ff010(void)

uint * FUN_1438ff010(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = param_2;
  uVar1 = 0;
  uVar2 = param_2 * param_2 * param_2;
  param_1[1] = uVar2;
  for (; param_2 != 1; param_2 = param_2 >> 1) {
    uVar1 = uVar1 + 1;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar1 * 2;
  param_1[4] = uVar2 >> 3;
  return param_1;
}



// FUNCTION 1438ff050 FUN_1438ff050 body=160 status=ok
// SIG undefined FUN_1438ff050(void)

undefined8 *
FUN_1438ff050(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_5[1];
  *(undefined4 *)(param_1 + 2) = param_5[2];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  local_30 = *param_4;
  local_2c = param_4[1];
  local_28 = param_4[2];
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
  FUN_1439031b0(param_1,&local_20,&local_30,1,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 1438ff0f0 FUN_1438ff0f0 body=234 status=ok
// SIG undefined FUN_1438ff0f0(void)

uint * FUN_1438ff0f0(uint *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint local_50 [2];
  longlong local_48;
  undefined1 local_40 [24];
  
  uVar4 = (uint)param_2;
  *param_1 = uVar4 * param_3;
  param_1[1] = param_3;
  param_1[4] = uVar4;
  param_1[5] = 0x7fffffff;
  FUN_1438fea20(param_1 + 6,param_2,1,param_4,0xfffffffffffffffe);
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  uVar6 = *param_1;
  plVar1 = (longlong *)FUN_1438f1790();
  puVar2 = (undefined1 *)(**(code **)(*plVar1 + 8))(plVar1,uVar6);
  if (uVar6 != 0) {
    puVar7 = puVar2;
    for (uVar3 = (ulonglong)uVar6; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined1 **)(param_1 + 2) = puVar2;
  uVar5 = 0;
  uVar6 = uVar5;
  if (uVar4 != 0) {
    do {
      local_50[0] = ~uVar6;
      local_48 = (ulonglong)uVar5 + *(longlong *)(param_1 + 2);
      FUN_1438ffa50(param_1 + 4,local_50,local_40);
      uVar5 = uVar5 + param_3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return param_1;
}



// FUNCTION 1438ff1e0 FUN_1438ff1e0 body=87 status=ok
// SIG undefined FUN_1438ff1e0(void)

void FUN_1438ff1e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1438ff240 FUN_1438ff240 body=87 status=ok
// SIG undefined FUN_1438ff240(void)

void FUN_1438ff240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1438ff2a0 FUN_1438ff2a0 body=139 status=ok
// SIG undefined FUN_1438ff2a0(void)

void FUN_1438ff2a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined ***)(param_1 + 0x38) =
       TritonRuntime::
       FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap>::TableEntry>
       ::vftable;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1438ff330 FUN_1438ff330 body=139 status=ok
// SIG undefined FUN_1438ff330(void)

void FUN_1438ff330(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined ***)(param_1 + 0x28) =
       TritonRuntime::
       FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal>::TableEntry>
       ::vftable;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1438ff3c0 FUN_1438ff3c0 body=9 status=ok
// SIG undefined FUN_1438ff3c0(void)

void FUN_1438ff3c0(longlong param_1)

{
  FUN_1438ff2a0(param_1 + 8);
  return;
}



// FUNCTION 1438ff3d0 FUN_1438ff3d0 body=73 status=ok
// SIG undefined FUN_1438ff3d0(void)

void FUN_1438ff3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 1438ff420 FUN_1438ff420 body=49 status=ok
// SIG undefined FUN_1438ff420(void)

void FUN_1438ff420(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 1438ff460 FUN_1438ff460 body=229 status=ok
// SIG undefined FUN_1438ff460(void)

void FUN_1438ff460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_1438ff550(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1438ff710(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar3 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_1438ff330(lVar1 + 8);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  return;
}



// FUNCTION 1438ff550 FUN_1438ff550 body=448 status=ok
// SIG undefined FUN_1438ff550(void)

void FUN_1438ff550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 8) != 0) {
      plVar5 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(lVar4 + 8));
      *(undefined8 *)(lVar4 + 8) = 0;
    }
    FUN_1438ff2a0(lVar4 + 0x18);
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1438fe400(*(longlong *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),param_1 + 0x78,
                  local_res8,uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar6);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x70);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != (longlong *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
  }
  return;
}



// FUNCTION 1438ff710 FUN_1438ff710 body=128 status=ok
// SIG undefined FUN_1438ff710(void)

void FUN_1438ff710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1438ff790 operator= body=143 status=ok
// SIG undefined operator=(void)

undefined8 *
std::shared_ptr<Concurrency::details::_Task_impl<long>_>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)param_1[1];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1438ff820 FUN_1438ff820 body=129 status=ok
// SIG undefined FUN_1438ff820(void)

longlong * FUN_1438ff820(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar1 = *param_2;
    *param_2 = 0;
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        plVar3 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(lVar2 + 8));
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      FUN_1438ff2a0(lVar2 + 0x18);
      plVar3 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*plVar3,param_4,uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1438ff8b0 FUN_1438ff8b0 body=150 status=ok
// SIG undefined FUN_1438ff8b0(void)

undefined8 *
FUN_1438ff8b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap,TritonRuntime::CoarseCellAndBitmap>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*plVar2,param_4,uVar3);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438ff950 FUN_1438ff950 body=150 status=ok
// SIG undefined FUN_1438ff950(void)

undefined8 *
FUN_1438ff950(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal,TritonRuntime::SimSerialIndexAndVal>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*plVar2,param_4,uVar3);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438ff9f0 FUN_1438ff9f0 body=43 status=ok
// SIG undefined FUN_1438ff9f0(void)

undefined8 * FUN_1438ff9f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_base::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1438ffa20 FUN_1438ffa20 body=43 status=ok
// SIG undefined FUN_1438ffa20(void)

undefined8 * FUN_1438ffa20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_base::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1438ffa50 FUN_1438ffa50 body=509 status=ok
// SIG undefined FUN_1438ffa50(void)

undefined8 FUN_1438ffa50(int *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  auVar2 = *param_2;
  uVar5 = auVar2._0_4_;
  uVar11 = 0;
  uVar7 = (auVar2._3_4_ & 0xff ^
          (((uVar5 & 0xff ^ 0x84222325) * 0x1b3 ^ auVar2._1_4_ & 0xff) * 0x1b3 ^ auVar2._2_4_ & 0xff
          ) * 0x1b3) * 0x1b3;
  uVar9 = (int)uVar7 >> 0x1f;
  iVar3 = ((int)((uVar7 ^ uVar9) - uVar9) % (param_1[0x1a] + -1) + 1) * 2;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x1c) + (longlong)iVar3 * 4);
  if (iVar8 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x12);
    iVar3 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x1c) + (longlong)(iVar3 + 1) * 4) *
                     0x20 + 0x18 + lVar4);
    for (; iVar8 != iVar3; iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4)) {
      if (*(uint *)((longlong)iVar8 * 0x20 + lVar4) == uVar5) {
        if (iVar8 != -1) {
          iVar10 = 0;
          while ((iVar8 != iVar3 && (*(uint *)((longlong)iVar8 * 0x20 + lVar4) == uVar5))) {
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4);
            iVar10 = iVar10 + 1;
          }
          goto LAB_1438ffb3c;
        }
        break;
      }
    }
  }
  iVar8 = -1;
  iVar10 = 0;
LAB_1438ffb3c:
  if (iVar10 < param_1[1]) {
    if (param_1[3] == *param_1) {
      if (param_1[3] != 0) {
        puVar1 = (undefined8 *)((longlong)param_1[0x23] * 0x20 + *(longlong *)(param_1 + 0x12));
        uVar11 = puVar1[1];
        *param_3 = *puVar1;
        param_3[1] = uVar11;
        FUN_143903970(param_1);
      }
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 1;
    if (iVar8 == -1) {
      iVar8 = param_1[0x19];
    }
    else {
      iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x1c + *(longlong *)(param_1 + 0x12));
    }
    puVar1 = (undefined8 *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x12));
    uVar6 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar6;
    FUN_143903970(param_1);
  }
  local_28 = *(undefined8 *)*param_2;
  uStack_20 = *(undefined8 *)(*param_2 + 8);
  if (param_1[0x22] == -1) {
    local_18 = 0xffffffffffffffff;
    iVar8 = FUN_1439011c0(param_1 + 2,&local_28);
    param_1[0x23] = iVar8;
  }
  else {
    local_18 = CONCAT44(0xffffffff,param_1[0x22]);
    iVar8 = FUN_1439011c0(param_1 + 2,&local_28);
    *(int *)((longlong)param_1[0x22] * 0x20 + 0x14 + *(longlong *)(param_1 + 0x12)) = iVar8;
  }
  param_1[0x22] = iVar8;
  return uVar11;
}



// FUNCTION 1438ffc50 FUN_1438ffc50 body=476 status=ok
// SIG undefined FUN_1438ffc50(void)

undefined8 FUN_1438ffc50(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = *param_2;
  uVar4 = (uint)uVar2;
  local_18._1_1_ = (byte)((ulonglong)uVar2 >> 8);
  uVar9 = 0;
  local_18._2_1_ = (byte)((ulonglong)uVar2 >> 0x10);
  local_18._3_1_ = (byte)((ulonglong)uVar2 >> 0x18);
  uVar6 = ((uint)local_18._3_1_ ^
          (((uVar4 & 0xff ^ 0x84222325) * 0x1b3 ^ (uint)local_18._1_1_) * 0x1b3 ^
          (uint)local_18._2_1_) * 0x1b3) * 0x1b3;
  uVar8 = (int)uVar6 >> 0x1f;
  iVar1 = ((int)((uVar6 ^ uVar8) - uVar8) % (param_1[0x16] + -1) + 1) * 2;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 4);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)(param_1 + 0xe);
    iVar1 = *(int *)(lVar3 + 0x10 +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar1 + 1) * 4) *
                    0x18);
    for (; iVar7 != iVar1; iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18)) {
      if (*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == uVar4) {
        if (iVar7 != -1) {
          iVar10 = 0;
          iVar5 = 0;
          if (iVar7 != iVar1) goto LAB_1438ffd40;
          goto LAB_1438ffd1d;
        }
        break;
      }
    }
  }
  iVar7 = -1;
  iVar10 = 0;
  goto LAB_1438ffd1d;
  while( true ) {
    iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
    iVar10 = iVar10 + 1;
    iVar5 = iVar10;
    if (iVar7 == iVar1) break;
LAB_1438ffd40:
    iVar10 = iVar5;
    if (*(uint *)(lVar3 + (longlong)iVar7 * 0x18) != uVar4) break;
  }
LAB_1438ffd1d:
  local_18 = uVar2;
  if (iVar10 < param_1[1]) {
    if (param_1[3] == *param_1) {
      if (param_1[3] != 0) {
        *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + (longlong)param_1[0x1f] * 0x18);
        FUN_1439039f0(param_1);
      }
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 1;
    if (iVar7 == -1) {
      iVar7 = param_1[0x15];
    }
    else {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0xe) + 0x14 + (longlong)iVar7 * 0x18);
    }
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar7 * 0x18);
    FUN_1439039f0(param_1);
  }
  if (param_1[0x1e] == -1) {
    local_18 = *param_2;
    local_10 = 0xffffffffffffffff;
    iVar7 = FUN_1439013d0(param_1 + 2,&local_18);
    param_1[0x1f] = iVar7;
  }
  else {
    local_18 = *param_2;
    local_10 = CONCAT44(0xffffffff,param_1[0x1e]);
    iVar7 = FUN_1439013d0(param_1 + 2,&local_18);
    *(int *)(*(longlong *)(param_1 + 0xe) + 0xc + (longlong)param_1[0x1e] * 0x18) = iVar7;
  }
  param_1[0x1e] = iVar7;
  return uVar9;
}



// FUNCTION 1438ffe30 FUN_1438ffe30 body=554 status=ok
// SIG undefined FUN_1438ffe30(void)

void FUN_1438ffe30(float *param_1,float *param_2,float param_3,undefined8 *param_4,
                  undefined8 *param_5)

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
  
  fVar1 = param_1[2];
  fVar3 = *param_1;
  fVar6 = param_1[1];
  fVar2 = param_2[2] - fVar1;
  fVar5 = param_2[1] - fVar6;
  fVar4 = *param_2 - fVar3;
  fVar9 = (*param_2 + fVar3) * 0.5;
  fVar8 = (param_2[1] + fVar6) * 0.5;
  fVar7 = (param_2[2] + fVar1) * 0.5;
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar2 = 1.1920929e-07;
  if (1.1920929e-07 <= fVar4) {
    fVar2 = fVar4;
  }
  fVar2 = 2.0 / fVar2;
  fVar5 = (fVar6 - fVar8) * fVar2;
  fVar6 = (fVar1 - fVar7) * fVar2;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar4 = (fVar3 - fVar9) * fVar2;
  fVar3 = (param_3 * param_3 - fVar5) - fVar6;
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar1);
  fVar4 = param_3 * param_3 - fVar4 * fVar4;
  fVar6 = fVar4 - fVar6;
  fVar1 = 0.0;
  if (0.0 <= fVar6) {
    fVar1 = fVar6;
  }
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar1);
  fVar4 = fVar4 - fVar5;
  fVar1 = 0.0;
  if (0.0 <= fVar4) {
    fVar1 = fVar4;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  fVar2 = 1.0 / fVar2;
  *param_4 = CONCAT44(fVar2 * fVar6 * -1.0 + fVar8,fVar2 * fVar3 * -1.0 + fVar9);
  *(float *)(param_4 + 1) = fVar2 * fVar1 * -1.0 + fVar7;
  *param_5 = CONCAT44(fVar2 * fVar6 + fVar8,fVar2 * fVar3 + fVar9);
  *(float *)(param_5 + 1) = fVar2 * fVar1 + fVar7;
  return;
}



// FUNCTION 143900060 FUN_143900060 body=19 status=ok
// SIG undefined FUN_143900060(void)

float FUN_143900060(longlong param_1,float param_2)

{
  return param_2 / (float)*(uint *)(param_1 + 0x18);
}



// FUNCTION 143900080 FUN_143900080 body=542 status=ok
// SIG undefined FUN_143900080(void)

void FUN_143900080(int *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                  int *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = *param_2;
  local_38 = *param_3;
  if (((local_28 == local_38) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) {
    *(undefined8 *)param_6 = *(undefined8 *)param_2;
    param_6[2] = param_2[2];
    *(undefined8 *)param_7 = *(undefined8 *)param_2;
    param_7[2] = param_2[2];
  }
  else {
    local_34 = param_3[1];
    local_30 = param_3[2];
    local_24 = param_2[1];
    local_20 = param_2[2];
    FUN_1439002a0(&local_28,&local_38,param_5,param_6,param_7);
  }
  iVar3 = *param_2 - param_4;
  iVar5 = param_2[1] - param_4;
  iVar6 = param_2[2] - param_4;
  iVar2 = *param_2 + param_4;
  iVar1 = param_2[1] + param_4;
  iVar4 = param_2[2] + param_4;
  if (*param_6 < iVar3) {
    iVar3 = *param_6;
  }
  *param_6 = iVar3;
  if (param_6[1] < iVar5) {
    iVar5 = param_6[1];
  }
  param_6[1] = iVar5;
  if (param_6[2] < iVar6) {
    iVar6 = param_6[2];
  }
  param_6[2] = iVar6;
  if (iVar2 < *param_7) {
    iVar2 = *param_7;
  }
  *param_7 = iVar2;
  if (iVar1 < param_7[1]) {
    iVar1 = param_7[1];
  }
  param_7[1] = iVar1;
  if (iVar4 < param_7[2]) {
    iVar4 = param_7[2];
  }
  param_7[2] = iVar4;
  iVar4 = *param_3 - param_4;
  iVar3 = param_3[1] - param_4;
  iVar5 = param_3[2] - param_4;
  iVar2 = *param_3 + param_4;
  iVar1 = param_3[1] + param_4;
  param_4 = param_3[2] + param_4;
  if (*param_6 < iVar4) {
    iVar4 = *param_6;
  }
  *param_6 = iVar4;
  if (param_6[1] < iVar3) {
    iVar3 = param_6[1];
  }
  param_6[1] = iVar3;
  if (param_6[2] < iVar5) {
    iVar5 = param_6[2];
  }
  param_6[2] = iVar5;
  if (iVar2 < *param_7) {
    iVar2 = *param_7;
  }
  *param_7 = iVar2;
  if (iVar1 < param_7[1]) {
    iVar1 = param_7[1];
  }
  param_7[1] = iVar1;
  if (param_4 < param_7[2]) {
    param_4 = param_7[2];
  }
  iVar1 = 0;
  param_7[2] = param_4;
  iVar2 = iVar1;
  if (0 < *param_6) {
    iVar2 = *param_6;
  }
  *param_6 = iVar2;
  iVar2 = iVar1;
  if (0 < param_6[1]) {
    iVar2 = param_6[1];
  }
  param_6[1] = iVar2;
  if (0 < param_6[2]) {
    iVar1 = param_6[2];
  }
  param_6[2] = iVar1;
  iVar2 = param_1[3];
  iVar1 = iVar2 * *param_1 + -1;
  iVar4 = param_1[1] * iVar2 + -1;
  iVar2 = iVar2 * param_1[2] + -1;
  if (*param_7 < iVar1) {
    iVar1 = *param_7;
  }
  *param_7 = iVar1;
  if (param_7[1] < iVar4) {
    iVar4 = param_7[1];
  }
  param_7[1] = iVar4;
  if (param_7[2] < iVar2) {
    iVar2 = param_7[2];
  }
  param_7[2] = iVar2;
  return;
}



// FUNCTION 1439002a0 FUN_1439002a0 body=258 status=ok
// SIG undefined FUN_1439002a0(void)

void FUN_1439002a0(int *param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  local_30 = (float)param_2[2];
  local_38 = CONCAT44((float)param_2[1],(float)*param_2);
  local_20 = (float)param_1[2];
  local_28 = CONCAT44((float)param_1[1],(float)*param_1);
  local_10 = local_20;
  FUN_1438ffe30(&local_28,&local_38);
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  return;
}



// FUNCTION 1439003b0 FUN_1439003b0 body=349 status=ok
// SIG undefined FUN_1439003b0(void)

undefined8 FUN_1439003b0(undefined8 param_1,longlong param_2,uint param_3,byte *param_4)

{
  char cVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = 0;
  uVar6 = param_3 + 2;
  if (param_3 < uVar6) {
    uVar4 = (ulonglong)param_3;
    uVar7 = param_3;
    do {
      bVar5 = (byte)uVar7;
      uVar2 = uVar4 >> 3;
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 + 1;
      bVar3 = bVar3 | (*(byte *)(uVar2 + param_2) >> (bVar5 & 7) & 1) <<
                      (bVar5 - (char)param_3 & 0x1f);
    } while (uVar7 < uVar6);
    if (2 < bVar3) {
      bVar3 = 0;
      if (uVar6 < param_3 + 5) {
        uVar4 = (ulonglong)uVar6;
        cVar1 = (char)uVar6;
        do {
          bVar5 = (byte)uVar6;
          uVar2 = uVar4 >> 3;
          uVar4 = uVar4 + 1;
          uVar6 = uVar6 + 1;
          bVar3 = bVar3 | (*(byte *)(uVar2 + param_2) >> (bVar5 & 7) & 1) << (bVar5 - cVar1 & 0x1f);
        } while (uVar6 < param_3 + 5);
        if (6 < bVar3) {
          uVar6 = param_3 + 5;
          bVar3 = 0;
          if (uVar6 < param_3 + 0xd) {
            uVar4 = (ulonglong)uVar6;
            cVar1 = (char)uVar6;
            do {
              bVar5 = (byte)uVar6;
              uVar2 = uVar4 >> 3;
              uVar4 = uVar4 + 1;
              uVar6 = uVar6 + 1;
              bVar3 = bVar3 | (*(byte *)(uVar2 + param_2) >> (bVar5 & 7) & 1) <<
                              (bVar5 - cVar1 & 0x1f);
            } while (uVar6 < param_3 + 0xd);
          }
          *param_4 = bVar3;
          return 0xd;
        }
      }
      *param_4 = bVar3 + 3;
      return 5;
    }
  }
  *param_4 = bVar3;
  return 2;
}



// FUNCTION 143900510 FUN_143900510 body=339 status=ok
// SIG undefined FUN_143900510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143900510(longlong param_1,undefined8 param_2,uint param_3,char param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined1 auStack_78 [32];
  byte local_58 [8];
  undefined8 local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  _guard_xfg_dispatch_icall_nop(param_5,0,(ulonglong)*(uint *)(param_1 + 0x10));
  uVar3 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      if (param_3 <= uVar6 >> 3) {
        return;
      }
      iVar1 = FUN_1439003b0(param_1,param_2,uVar6,local_58);
      uVar6 = uVar6 + iVar1;
      if (local_58[0] == 0) {
        local_58[0] = 0xff;
        cVar7 = param_4;
      }
      else {
        cVar7 = param_4 == '\0';
      }
      uVar2 = local_58[0] + uVar3;
      if (param_4 == '\x01') {
        for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
          FUN_143902b20(*(undefined4 *)(param_1 + 8),uVar3,&local_48);
          uVar4 = local_44 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f) |
                  local_40 << ((byte)*(undefined4 *)(param_1 + 0xc) & 0x1f) | local_48;
          uVar5 = uVar4 & 7;
          uVar4 = uVar4 >> 3;
          *(byte *)((ulonglong)uVar4 + (longlong)param_5) =
               *(byte *)((ulonglong)uVar4 + (longlong)param_5) & ~(byte)(1 << uVar5) |
               (byte)(1 << uVar5);
        }
      }
      param_2 = local_50;
      param_4 = cVar7;
      uVar3 = uVar2;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 143900670 FUN_143900670 body=373 status=ok
// SIG undefined FUN_143900670(void)

longlong FUN_143900670(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int local_res8 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0xfffffffffffffffe;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_24,4);
  if ((((lVar2 == 1) && (lVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_28,4), lVar2 == 1))
      && (lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_res20,4), lVar2 == 1)) &&
     ((lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_20,4), lVar2 == 1 &&
      (lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_res8,4), lVar2 == 1)))) {
    plVar3 = (longlong *)FUN_1438f1790();
    local_10 = (**(code **)(*plVar3 + 8))(plVar3,0x48);
    if (local_10 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1438fed30(local_10,local_res8[0] * local_24,local_res8[0] * local_28,
                            local_res8[0] * local_res20[0],local_20[0],local_res8[0],param_2,param_3
                           );
    }
    cVar1 = FUN_1439007f0(*(undefined8 *)(lVar2 + 0x28),param_1);
    if (cVar1 != '\0') {
      return lVar2;
    }
    FUN_1438ff460(lVar2);
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
  }
  return 0;
}



// FUNCTION 1439007f0 FUN_1439007f0 body=698 status=ok
// SIG undefined FUN_1439007f0(void)

undefined8 FUN_1439007f0(int *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong local_res8;
  uint local_res10 [2];
  longlong local_res18;
  undefined1 local_38 [8];
  longlong *local_30;
  
  param_1[1] = 1;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 2,4);
  if (lVar6 == 1) {
    lVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_1,4);
    if (lVar6 == 1) {
      uVar10 = 0;
      if (*param_1 == -1) {
        *param_1 = 2;
        local_res8 = local_res8 & 0xffffffffffffff00;
        lVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_res8,1);
        if (lVar6 == 1) {
          local_res10[0] = 0;
          lVar6 = (**(code **)(*param_2 + 0x10))(param_2,local_res10,4,1);
          uVar4 = local_res10[0];
          if (lVar6 == 1) {
            plVar7 = (longlong *)FUN_1438f1790();
            lVar6 = (**(code **)(*plVar7 + 8))(plVar7,uVar4);
            local_res18 = lVar6;
            uVar8 = (**(code **)(*param_2 + 0x10))(param_2,lVar6,1,local_res10[0]);
            if (local_res10[0] == uVar8) {
              if (((local_res10[0] != 0) && (lVar6 != 0)) && ((char)local_res8 == '\x01')) {
                uVar9 = FUN_1438fe790(local_38,&local_res18);
                std::shared_ptr<Concurrency::details::_Task_impl<long>_>::operator=
                          (param_1 + 10,uVar9);
                if (local_30 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_30 + 1;
                  lVar6 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*local_30)(local_30);
                    LOCK();
                    piVar1 = (int *)((longlong)local_30 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_30 + 8))(local_30);
                    }
                  }
                }
              }
LAB_143900a44:
              plVar7 = (longlong *)FUN_1438f1790();
              local_res8 = (**(code **)(*plVar7 + 8))(plVar7,0x14);
              if (local_res8 != 0) {
                uVar10 = FUN_1438ff010(local_res8,param_1[2]);
              }
              FUN_143903bc0(param_1 + 4,uVar10);
              FUN_143903810(param_1);
              return 1;
            }
          }
        }
      }
      else {
        puVar2 = (uint *)(param_1 + 0x24);
        lVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar2,4);
        if (lVar6 == 1) {
          lVar6 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x25,4);
          if (lVar6 == 1) {
            uVar4 = *puVar2;
            plVar7 = (longlong *)FUN_1438f1790();
            uVar9 = (**(code **)(*plVar7 + 8))(plVar7,(ulonglong)(uVar4 + 1) << 2);
            uVar4 = *puVar2;
            *(undefined8 *)(param_1 + 0x26) = uVar9;
            uVar8 = (**(code **)(*param_2 + 0x10))(param_2,uVar9,4,*puVar2 + 1);
            if (uVar4 + 1 == uVar8) {
              uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x26) + (ulonglong)uVar4 * 4);
              plVar7 = (longlong *)FUN_1438f1790();
              uVar9 = (**(code **)(*plVar7 + 8))(plVar7,uVar5);
              *(undefined8 *)(param_1 + 0x28) = uVar9;
              uVar8 = (**(code **)(*param_2 + 0x10))
                                (param_2,uVar9,1,
                                 *(undefined4 *)
                                  (*(longlong *)(param_1 + 0x26) + (ulonglong)*puVar2 * 4));
              if (*(uint *)(*(longlong *)(param_1 + 0x26) + (ulonglong)*puVar2 * 4) == uVar8)
              goto LAB_143900a44;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143900ab0 FUN_143900ab0 body=484 status=ok
// SIG undefined FUN_143900ab0(void)

ulonglong FUN_143900ab0(int *param_1,char param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  
  bVar9 = (byte)param_1[4];
  iVar10 = (int)param_3 >> (bVar9 & 0x1f);
  iVar7 = (int)param_5 >> (bVar9 & 0x1f);
  iVar8 = (int)param_4 >> (bVar9 & 0x1f);
  if (((iVar10 == (int)param_6 >> (bVar9 & 0x1f)) && (iVar8 == (int)param_7 >> (bVar9 & 0x1f))) &&
     (iVar7 == (int)param_8 >> (bVar9 & 0x1f))) {
    uVar1 = param_1[5];
    param_3 = uVar1 & param_3;
    lVar4 = FUN_143902920(*(undefined8 *)(param_1 + 10),
                          (param_1[1] * iVar7 + iVar8) * *param_1 + iVar10);
    if (lVar4 == 0) {
      uVar5 = (ulonglong)(param_2 == '\0');
    }
    else {
      bVar9 = 0;
      for (; uVar2 = uVar1 & param_4, param_3 <= (uVar1 & param_6); param_3 = param_3 + 1) {
        for (; uVar2 <= (uVar1 & param_7); uVar2 = uVar2 + 1) {
          if ((uVar1 & param_5) <= (uVar1 & param_8)) {
            uVar3 = uVar1 & param_5;
            do {
              uVar6 = uVar3 << ((byte)*(undefined4 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 10) + 0x10) + 0xc) &
                               0x1f) |
                      uVar2 << ((byte)*(undefined4 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 10) + 0x10) + 8) &
                               0x1f) | param_3;
              uVar3 = uVar3 + 1;
              bVar9 = bVar9 | (((byte)(1 << ((byte)uVar6 & 7)) &
                               *(byte *)((ulonglong)(uVar6 >> 3) + lVar4)) != 0) == (bool)param_2;
            } while (uVar3 <= (uVar1 & param_8));
          }
        }
      }
      uVar5 = (ulonglong)bVar9;
    }
  }
  else {
    uVar5 = FUN_143903460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar5;
}



// FUNCTION 143900ca0 FUN_143900ca0 body=388 status=ok
// SIG undefined FUN_143900ca0(void)

ulonglong FUN_143900ca0(longlong param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  uint uVar11;
  longlong lVar12;
  
  auVar2 = *param_2;
  uVar7 = ((auVar2._2_4_ & 0xff ^
           ((auVar2._0_4_ & 0xff ^ 0x84222325) * 0x1b3 ^ auVar2._1_4_ & 0xff) * 0x1b3) * 0x1b3 ^
          auVar2._3_4_ & 0xff) * 0x1b3;
  uVar11 = (int)uVar7 >> 0x1f;
  iVar3 = ((int)((uVar7 ^ uVar11) - uVar11) % (*(int *)(param_1 + 0x68) + -1) + 1) * 2;
  uVar7 = *(uint *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 4);
  uVar9 = (ulonglong)uVar7;
  if (uVar7 != 0xffffffff) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    while (uVar7 != *(uint *)((longlong)
                              *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar3 + 1) * 4) *
                              0x20 + 0x18 + lVar5)) {
      iVar8 = (int)uVar9;
      if (*(uint *)((longlong)iVar8 * 0x20 + lVar5) == auVar2._0_4_) {
        if (iVar8 != -1) {
          lVar12 = (longlong)iVar8 * 0x20;
          puVar1 = (undefined8 *)(lVar12 + *(longlong *)(param_1 + 0x48));
          uVar6 = puVar1[1];
          *(undefined8 *)*param_2 = *puVar1;
          *(undefined8 *)(*param_2 + 8) = uVar6;
          lVar5 = *(longlong *)(param_1 + 0x48);
          iVar3 = *(int *)(lVar5 + 0x14 + lVar12);
          iVar4 = *(int *)(lVar5 + 0x10 + lVar12);
          if (iVar3 == -1) {
            *(int *)(param_1 + 0x88) = iVar4;
          }
          else {
            *(int *)((longlong)iVar3 * 0x20 + 0x10 + lVar5) = iVar4;
          }
          if (iVar4 == -1) {
            *(int *)(param_1 + 0x8c) = iVar3;
          }
          else {
            *(int *)((longlong)iVar4 * 0x20 + 0x14 + *(longlong *)(param_1 + 0x48)) = iVar3;
          }
          uVar10 = (undefined7)(uVar9 >> 8);
          if (*(int *)(param_1 + 0x88) != -1) {
            *(int *)(lVar12 + 0x10 + *(longlong *)(param_1 + 0x48)) = *(int *)(param_1 + 0x88);
            *(undefined4 *)(lVar12 + 0x14 + *(longlong *)(param_1 + 0x48)) = 0xffffffff;
            *(int *)((longlong)*(int *)(param_1 + 0x88) * 0x20 + 0x14 +
                    *(longlong *)(param_1 + 0x48)) = iVar8;
            *(int *)(param_1 + 0x88) = iVar8;
            return CONCAT71(uVar10,1);
          }
          *(int *)(param_1 + 0x8c) = iVar8;
          *(int *)(param_1 + 0x88) = iVar8;
          return CONCAT71(uVar10,1);
        }
        break;
      }
      uVar7 = *(uint *)((longlong)iVar8 * 0x20 + 0x18 + lVar5);
      uVar9 = (ulonglong)uVar7;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 143900e30 FUN_143900e30 body=357 status=ok
// SIG undefined FUN_143900e30(void)

ulonglong FUN_143900e30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  uint uVar10;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  
  uVar3 = *param_2;
  bStack_16 = (byte)((ulonglong)uVar3 >> 0x10);
  bStack_17 = (byte)((ulonglong)uVar3 >> 8);
  bStack_15 = (byte)((ulonglong)uVar3 >> 0x18);
  uVar6 = ((((uint)bStack_17 ^ ((uint)uVar3 & 0xff ^ 0x84222325) * 0x1b3) * 0x1b3 ^ (uint)bStack_16)
           * 0x1b3 ^ (uint)bStack_15) * 0x1b3;
  uVar10 = (int)uVar6 >> 0x1f;
  iVar1 = ((int)((uVar6 ^ uVar10) - uVar10) % (*(int *)(param_1 + 0x58) + -1) + 1) * 2;
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 4);
  uVar8 = (ulonglong)uVar6;
  if (uVar6 != 0xffffffff) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    while (uVar6 != *(uint *)(lVar4 + 0x10 +
                             (longlong)
                             *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)(iVar1 + 1) * 4) *
                             0x18)) {
      iVar7 = (int)uVar8;
      if (*(uint *)(lVar4 + (longlong)iVar7 * 0x18) == (uint)uVar3) {
        if (iVar7 != -1) {
          lVar4 = (longlong)iVar7 * 0x18;
          *param_2 = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x38));
          lVar5 = *(longlong *)(param_1 + 0x38);
          iVar1 = *(int *)(lVar5 + 0xc + lVar4);
          iVar2 = *(int *)(lVar5 + 8 + lVar4);
          if (iVar1 == -1) {
            *(int *)(param_1 + 0x78) = iVar2;
          }
          else {
            *(int *)(lVar5 + 8 + (longlong)iVar1 * 0x18) = iVar2;
          }
          if (iVar2 == -1) {
            *(int *)(param_1 + 0x7c) = iVar1;
          }
          else {
            *(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (longlong)iVar2 * 0x18) = iVar1;
          }
          uVar9 = (undefined7)(uVar8 >> 8);
          if (*(int *)(param_1 + 0x78) == -1) {
            *(int *)(param_1 + 0x7c) = iVar7;
            *(int *)(param_1 + 0x78) = iVar7;
            return CONCAT71(uVar9,1);
          }
          *(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar4) = *(int *)(param_1 + 0x78);
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc + lVar4) = 0xffffffff;
          *(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (longlong)*(int *)(param_1 + 0x78) * 0x18)
               = iVar7;
          *(int *)(param_1 + 0x78) = iVar7;
          return CONCAT71(uVar9,1);
        }
        break;
      }
      uVar6 = *(uint *)(lVar4 + 0x10 + (longlong)iVar7 * 0x18);
      uVar8 = (ulonglong)uVar6;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 143900fa0 FUN_143900fa0 body=58 status=ok
// SIG undefined FUN_143900fa0(void)

int * FUN_143900fa0(longlong param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)*(uint *)(param_1 + 0x18);
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = (int)(fVar3 * *param_3);
  param_2[1] = (int)(fVar3 * fVar1);
  param_2[2] = (int)(fVar3 * fVar2);
  return param_2;
}



// FUNCTION 143900fe0 FUN_143900fe0 body=15 status=ok
// SIG undefined FUN_143900fe0(void)

void FUN_143900fe0(undefined8 param_1,undefined4 *param_2)

{
  FUN_143900ff0(param_1,*param_2,param_2[1],param_2[2]);
  return;
}



// FUNCTION 143900ff0 FUN_143900ff0 body=163 status=ok
// SIG undefined FUN_143900ff0(void)

undefined4 FUN_143900ff0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = (byte)param_1[4];
  uVar5 = param_1[5];
  lVar1 = *(longlong *)(param_1 + 10);
  lVar3 = FUN_143902920(lVar1,((param_4 >> (bVar4 & 0x1f)) * param_1[1] +
                              (param_3 >> (bVar4 & 0x1f))) * *param_1 + (param_2 >> (bVar4 & 0x1f)))
  ;
  uVar2 = 0;
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    uVar5 = (uVar5 & param_4) << ((byte)*(undefined4 *)(lVar1 + 0xc) & 0x1f) |
            (uVar5 & param_3) << ((byte)*(undefined4 *)(lVar1 + 8) & 0x1f) | uVar5 & param_2;
    uVar2 = CONCAT31((uint3)(uVar5 >> 0xb),
                     ((byte)(1 << ((byte)uVar5 & 7)) & *(byte *)((ulonglong)(uVar5 >> 3) + lVar3))
                     != 0);
  }
  return uVar2;
}



// FUNCTION 1439010a0 FUN_1439010a0 body=194 status=ok
// SIG undefined FUN_1439010a0(void)

undefined1 FUN_1439010a0(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int local_res8;
  undefined1 local_resc;
  undefined1 local_18 [16];
  
  local_res8 = (*(int *)(param_1 + 0x20) * param_4 + param_3) * *(int *)(param_1 + 0x1c) + param_2;
  cVar2 = FUN_143900e30(*(undefined8 *)(param_1 + 0x40),&local_res8);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = iVar1 + -1 + iVar1 * param_2;
    uVar3 = FUN_143900ab0(param_1,CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1),iVar1 * param_2,
                          iVar1 * param_3,iVar1 * param_4,iVar4,iVar1 + -1 + iVar1 * param_3,
                          iVar1 + -1 + iVar1 * param_4);
    local_resc = uVar3;
    FUN_1438ffc50(*(undefined8 *)(param_1 + 0x40),&local_res8,local_18);
    local_resc = uVar3;
  }
  return local_resc;
}



// FUNCTION 143901170 FUN_143901170 body=71 status=ok
// SIG undefined FUN_143901170(void)

ulonglong FUN_143901170(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  iVar1 = param_1[3];
  if ((((-1 < *param_2) && (-1 < param_2[1])) && (-1 < param_2[2])) &&
     ((in_RAX = (ulonglong)(uint)(*param_1 * iVar1), *param_2 < *param_1 * iVar1 &&
      (in_RAX = (ulonglong)(uint)(param_1[1] * iVar1), param_2[1] < param_1[1] * iVar1)))) {
    uVar2 = param_1[2] * iVar1;
    in_RAX = (ulonglong)uVar2;
    if (param_2[2] < (int)uVar2) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1439011c0 FUN_1439011c0 body=513 status=ok
// SIG undefined FUN_1439011c0(void)

int FUN_1439011c0(int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  
  if (param_1[1] == *param_1) {
    return -1;
  }
  iVar3 = param_1[0x18];
  uVar11 = ((((uint)param_2[1] ^ (*param_2 ^ 0x84222325) * 0x1b3) * 0x1b3 ^ (uint)param_2[2]) *
            0x1b3 ^ (uint)param_2[3]) * 0x1b3;
  uVar14 = (int)uVar11 >> 0x1f;
  iVar4 = **(int **)(param_1 + 0x1a);
  iVar12 = FUN_143902d70(param_1 + 0xe,iVar4);
  piVar5 = *(int **)(param_1 + 0x1a);
  if (*piVar5 == piVar5[1]) {
    piVar5[1] = -1;
    **(undefined4 **)(param_1 + 0x1a) = 0xffffffff;
  }
  else {
    *piVar5 = iVar12;
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar12 = ((int)((uVar11 ^ uVar14) - uVar14) % (iVar3 + -1) + 1) * 2;
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  lVar16 = (longlong)iVar4 * 0x20;
  puVar1 = (undefined4 *)(lVar6 + lVar16);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined8 *)(lVar6 + 0x10 + lVar16) = *(undefined8 *)(param_2 + 0x10);
  lVar6 = (longlong)iVar12 * 4;
  iVar3 = *(int *)(lVar6 + *(longlong *)(param_1 + 0x1a));
  lVar2 = (longlong)(iVar12 + 1) * 4;
  if (iVar3 == -1) {
    FUN_143901580(param_1 + 0xe,param_1[0x16],iVar4);
    *(int *)(lVar2 + *(longlong *)(param_1 + 0x1a)) = iVar4;
    *(int *)(lVar6 + *(longlong *)(param_1 + 0x1a)) = iVar4;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10);
    iVar12 = *(int *)((longlong)*(int *)(lVar2 + *(longlong *)(param_1 + 0x1a)) * 0x20 + 0x18 +
                     lVar7);
    iVar13 = iVar3;
    if (iVar3 != iVar12) {
      do {
        if (*(int *)((longlong)iVar13 * 0x20 + lVar7) == *(int *)param_2) break;
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar7);
      } while (iVar13 != iVar12);
    }
    if (iVar13 == -1) {
      iVar15 = param_1[0x17];
    }
    else {
      iVar15 = *(int *)((longlong)iVar13 * 0x20 + 0x1c + *(longlong *)(param_1 + 0x10));
    }
    if (iVar15 == -1) {
      param_1[0x16] = iVar4;
    }
    else {
      *(int *)((longlong)iVar15 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x10)) = iVar4;
    }
    *(int *)(lVar16 + 0x1c + *(longlong *)(param_1 + 0x10)) = iVar15;
    if (iVar13 == -1) {
      param_1[0x17] = iVar4;
    }
    else {
      *(int *)((longlong)iVar13 * 0x20 + 0x1c + *(longlong *)(param_1 + 0x10)) = iVar4;
    }
    *(int *)(lVar16 + 0x18 + *(longlong *)(param_1 + 0x10)) = iVar13;
    if (iVar13 == iVar3) {
      *(int *)(lVar6 + *(longlong *)(param_1 + 0x1a)) = iVar4;
    }
    if (iVar13 == iVar12) {
      *(int *)(lVar2 + *(longlong *)(param_1 + 0x1a)) = iVar4;
    }
  }
  param_1[1] = param_1[1] + 1;
  return iVar4;
}



// FUNCTION 1439013d0 FUN_1439013d0 body=423 status=ok
// SIG undefined FUN_1439013d0(void)

int FUN_1439013d0(int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  if (param_1[1] == *param_1) {
    return -1;
  }
  iVar4 = param_1[0x14];
  uVar11 = ((((uint)param_2[1] ^ (*param_2 ^ 0x84222325) * 0x1b3) * 0x1b3 ^ (uint)param_2[2]) *
            0x1b3 ^ (uint)param_2[3]) * 0x1b3;
  uVar13 = (int)uVar11 >> 0x1f;
  iVar5 = **(int **)(param_1 + 0x16);
  iVar12 = FUN_143902de0(param_1 + 10,iVar5);
  piVar6 = *(int **)(param_1 + 0x16);
  if (*piVar6 == piVar6[1]) {
    piVar6[1] = -1;
    **(undefined4 **)(param_1 + 0x16) = 0xffffffff;
  }
  else {
    *piVar6 = iVar12;
  }
  iVar12 = ((int)((uVar11 ^ uVar13) - uVar13) % (iVar4 + -1) + 1) * 2;
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xc) + (longlong)iVar5 * 0x18);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  lVar2 = (longlong)iVar12 * 4;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x16) + lVar2);
  lVar3 = (longlong)(iVar12 + 1) * 4;
  if (iVar4 == -1) {
    FUN_143901600(param_1 + 10,param_1[0x12],iVar5);
    *(int *)(lVar3 + *(longlong *)(param_1 + 0x16)) = iVar5;
    *(int *)(*(longlong *)(param_1 + 0x16) + lVar2) = iVar5;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xc);
    iVar12 = *(int *)(lVar7 + 0x10 +
                     (longlong)*(int *)(lVar3 + *(longlong *)(param_1 + 0x16)) * 0x18);
    iVar14 = iVar4;
    if (iVar4 != iVar12) {
      do {
        if (*(int *)(lVar7 + (longlong)iVar14 * 0x18) == *(int *)param_2) break;
        iVar14 = *(int *)(lVar7 + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != iVar12);
    }
    FUN_143901600(param_1 + 10,iVar14,iVar5);
    if (iVar14 == iVar4) {
      *(int *)(*(longlong *)(param_1 + 0x16) + lVar2) = iVar5;
    }
    if (iVar14 == iVar12) {
      *(int *)(lVar3 + *(longlong *)(param_1 + 0x16)) = iVar5;
    }
  }
  param_1[1] = param_1[1] + 1;
  return iVar5;
}



// FUNCTION 143901580 FUN_143901580 body=123 status=ok
// SIG undefined FUN_143901580(void)

undefined8 FUN_143901580(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == -1) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar2 = *(int *)((longlong)param_2 * 0x20 + 0x1c + *(longlong *)(param_1 + 8));
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  else {
    *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 8)) = param_3;
  }
  lVar3 = (longlong)param_3 * 0x20;
  *(int *)(*(longlong *)(param_1 + 8) + 0x1c + lVar3) = iVar2;
  if (param_2 == -1) {
    *(int *)(param_1 + 0x24) = param_3;
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0xffffffff;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  *(int *)((longlong)param_2 * 0x20 + 0x1c + *(longlong *)(param_1 + 8)) = param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(int *)(lVar1 + 0x18 + lVar3) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 143901600 FUN_143901600 body=131 status=ok
// SIG undefined FUN_143901600(void)

undefined8 FUN_143901600(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == -1) {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x14 + (longlong)param_2 * 0x18);
  }
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x18) = param_3;
  }
  lVar1 = (longlong)param_3 * 0x18;
  *(int *)(*(longlong *)(param_1 + 8) + 0x14 + lVar1) = iVar3;
  if (param_2 == -1) {
    *(int *)(param_1 + 0x24) = param_3;
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar2 + 0x10 + lVar1) = 0xffffffff;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  *(int *)(*(longlong *)(param_1 + 8) + 0x14 + (longlong)param_2 * 0x18) = param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(lVar2 + 0x10 + lVar1) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 143901690 FUN_143901690 body=19 status=ok
// SIG undefined FUN_143901690(void)

void FUN_143901690(void)

{
  FUN_1439016b0();
  return;
}



// FUNCTION 1439016b0 FUN_1439016b0 body=1290 status=ok
// SIG undefined FUN_1439016b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1439016b0(int *param_1,uint *param_2,uint *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  int local_128;
  uint local_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  float *local_108;
  int local_100;
  int iStack_fc;
  undefined8 local_f0;
  float local_e0 [4];
  undefined8 local_d0;
  uint local_c8;
  float local_c0 [4];
  int local_b0 [4];
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  while( true ) {
    puVar14 = param_2;
    *param_4 = 0.0;
    iVar17 = param_1[3];
    if (((((int)*puVar14 < 0) || ((int)puVar14[1] < 0)) || ((int)puVar14[2] < 0)) ||
       (((*param_1 * iVar17 <= (int)*puVar14 || (param_1[1] * iVar17 <= (int)puVar14[1])) ||
        (param_1[2] * iVar17 <= (int)puVar14[2])))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((int)*param_3 < 0) || ((int)param_3[1] < 0)) ||
       (((int)param_3[2] < 0 ||
        (((*param_1 * iVar17 <= (int)*param_3 || (param_1[1] * iVar17 <= (int)param_3[1])) ||
         (param_1[2] * iVar17 <= (int)param_3[2])))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar3) break;
    param_2 = param_3;
    param_3 = puVar14;
    if (!bVar4) {
      return 1;
    }
  }
  local_108 = param_4;
  cVar5 = FUN_143900ff0(param_1,*puVar14,puVar14[1],puVar14[2]);
  if ((cVar5 != '\x01') &&
     ((!bVar4 || (cVar5 = FUN_143900ff0(param_1,*param_3,param_3[1],param_3[2]), cVar5 != '\x01'))))
  {
    uVar9 = *puVar14;
    uVar13 = *param_3;
    if (((uVar9 == uVar13) && (puVar14[1] == param_3[1])) && (puVar14[2] == param_3[2])) {
      return 1;
    }
    local_114 = param_1[3];
    local_120 = param_3[2];
    uVar18 = uVar13 - uVar9;
    local_124 = param_3[1];
    uVar12 = local_124 - puVar14[1];
    uVar16 = puVar14[2];
    local_11c = *param_1 * local_114;
    uVar19 = local_120 - uVar16;
    local_118 = param_1[1] * local_114;
    local_d0 = CONCAT44(puVar14[1],uVar9);
    local_114 = param_1[2] * local_114;
    uVar9 = (int)uVar18 >> 0x1f;
    uVar10 = (int)uVar12 >> 0x1f;
    fVar22 = (float)(int)((uVar18 ^ uVar9) - uVar9);
    uVar11 = (int)uVar19 >> 0x1f;
    fVar23 = (float)(int)((uVar12 ^ uVar10) - uVar10);
    fVar24 = (float)(int)((uVar19 ^ uVar11) - uVar11);
    local_110 = uVar13;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24);
    local_c0[2] = 3.4028235e+38;
    if (uVar18 == 0) {
      local_c0[0] = 3.4028235e+38;
    }
    else {
      local_c0[0] = fVar21 / fVar22;
    }
    local_b0[0] = (0 < (int)uVar18) + uVar9;
    if (uVar12 == 0) {
      local_c0[1] = 3.4028235e+38;
    }
    else {
      local_c0[1] = fVar21 / fVar23;
    }
    local_b0[1] = (0 < (int)uVar12) + uVar10;
    if (uVar19 != 0) {
      local_c0[2] = fVar21 / fVar24;
    }
    local_b0[2] = (0 < (int)uVar19) + uVar11;
    fVar21 = 0.0;
    lVar6 = 0;
    iStack_fc = -0x80000000;
    local_c8 = uVar16;
    local_e0[0] = local_c0[0] * 0.5;
    local_e0[1] = local_c0[1] * 0.5;
    local_e0[2] = local_c0[2] * 0.5;
    local_128 = -0x80000000;
    iVar17 = iStack_fc;
    while( true ) {
      fVar24 = local_e0[2];
      fVar23 = local_e0[1];
      fVar22 = local_e0[0];
      if ((((uint)local_d0 == uVar13) && (local_d0._4_4_ == local_124)) && (local_c8 == local_120))
      {
        return 1;
      }
      if (((((int)(uint)local_d0 < 0) || (local_d0 < 0)) ||
          (((int)local_c8 < 0 ||
           ((local_11c <= (int)(uint)local_d0 || (local_118 <= (int)local_d0._4_4_)))))) ||
         (local_114 <= (int)local_c8)) break;
      uVar9 = param_1[5];
      bVar8 = (byte)param_1[4];
      local_100 = (int)(uint)local_d0 >> (bVar8 & 0x1f);
      iVar15 = (int)local_d0._4_4_ >> (bVar8 & 0x1f);
      uVar16 = uVar9 & (uint)local_d0;
      iVar20 = (int)local_c8 >> (bVar8 & 0x1f);
      uVar13 = uVar9 & local_d0._4_4_;
      uVar9 = uVar9 & local_c8;
      if (((local_100 != local_128) || (iVar15 != iStack_fc)) || (iVar20 != iVar17)) {
        iStack_fc = iVar15;
        lVar6 = FUN_143902920(*(undefined8 *)(param_1 + 10),
                              (param_1[1] * iVar20 + iVar15) * *param_1 + local_100);
        local_f0 = CONCAT44(iStack_fc,local_100);
        local_128 = local_100;
        iVar17 = iVar20;
      }
      if ((lVar6 != 0) &&
         (uVar16 = uVar13 << ((byte)*(undefined4 *)
                                     (*(longlong *)(*(longlong *)(param_1 + 10) + 0x10) + 8) & 0x1f)
                   | uVar9 << ((byte)*(undefined4 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 10) + 0x10) + 0xc) &
                              0x1f) | uVar16,
         ((byte)(1 << ((byte)uVar16 & 7)) & *(byte *)((ulonglong)(uVar16 >> 3) + lVar6)) != 0)) {
        *local_108 = fVar21;
        return 0;
      }
      if (fVar23 <= fVar22) {
        uVar7 = (ulonglong)((fVar24 <= fVar23) + 1);
      }
      else {
        uVar7 = 2;
        if (fVar22 < fVar24) {
          uVar7 = 0;
        }
      }
      fVar2 = local_e0[uVar7];
      fVar21 = fVar21 + fVar2;
      local_e0[0] = fVar22 - fVar2;
      local_e0[1] = fVar23 - fVar2;
      local_e0[2] = fVar24 - fVar2;
      local_e0[uVar7] = local_c0[uVar7];
      piVar1 = (int *)((longlong)&local_d0 + uVar7 * 4);
      *piVar1 = *piVar1 + local_b0[uVar7];
      uVar13 = local_110;
    }
    *local_108 = fVar21;
    return 1;
  }
  return 0;
}


