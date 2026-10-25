// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141275bc0 FUN_141275bc0 body=372 status=ok
// SIG undefined FUN_141275bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141275bc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240;
  undefined2 local_23f;
  undefined1 local_23d;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_228 [44];
  undefined1 local_1fc [228];
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (((param_3 != *(longlong *)(param_1 + 0x1b8)) && (param_3 != 0)) &&
     (lVar2 = FUN_14126f850(), lVar2 != 0)) {
    FUN_142d0a300(local_228);
    lVar1 = *(longlong *)(param_3 + 0x168);
    if (lVar1 == 0) {
      local_258 = _DAT_1468b5d90;
      local_250 = DAT_1468b5d98;
    }
    else {
      local_258 = *(undefined8 *)(lVar1 + 0x220);
      local_250 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_10c = 1;
    local_118 = local_258;
    local_110 = local_250;
    FWeakObjectPtr::operator=(local_1fc,param_3);
    local_268 = 0;
    local_270 = 0;
    local_23f = 0;
    local_23d = 0;
    local_240 = 0;
    local_278 = &local_24c;
    local_24c = 0xbf800000;
    local_248 = 0xbf800000;
    local_244 = 0xbf800000;
    local_23c = 0x3f800000;
    local_238 = 0x3f800000;
    local_234 = 0x3f800000;
    FUN_140a86fb0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar2 + 0x3c8),param_3,local_228)
    ;
    FUN_1409c53c0(local_228);
  }
  return;
}



// FUNCTION 141275d80 FUN_141275d80 body=236 status=ok
// SIG undefined FUN_141275d80(void)

void FUN_141275d80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x298) != 0) {
    iVar1 = *(int *)(param_1 + 0x2ec);
    if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x260))) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 600) + 8 + (longlong)iVar1 * 0x10), lVar2 != 0
       )) {
      FUN_1405a3150(*(longlong *)(param_1 + 0x298),local_28,lVar2,0);
      FUN_140591060(local_28);
    }
    lVar2 = *(longlong *)(param_1 + 0x268);
    lVar3 = (longlong)*(int *)(param_1 + 0x270) * 0x10 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1405a3150(*(undefined8 *)(param_1 + 0x298),local_28,*(longlong *)(lVar2 + 8),0);
        FUN_140591060(local_28);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x278);
    lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x280) * 0x28;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
      FUN_1412808f0(lVar3);
    }
  }
  return;
}



// FUNCTION 141275e70 FUN_141275e70 body=175 status=ok
// SIG undefined FUN_141275e70(void)

void FUN_141275e70(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0xa18);
  bVar2 = bVar1 | 0x20;
  *(byte *)(param_1 + 0xa18) = bVar2;
  if (*(char *)(param_1 + 0x128) != '\x03') {
    if ((((bVar1 & 2) == 0) && (*(longlong *)(param_1 + 0x9e0) != 0)) && ((bVar1 & 1) != 0)) {
      FUN_14149b260();
      *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 2;
    }
    FUN_1412838b0(param_1);
    FUN_141283830(param_1);
    return;
  }
  if ((bVar1 & 4) == 0) {
    if (*(longlong *)(param_1 + 0x9e0) != 0) {
      FUN_14149b220();
      *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 4;
      bVar2 = *(byte *)(param_1 + 0xa18);
    }
    if ((bVar2 & 4) == 0) {
      return;
    }
  }
  if (((*(longlong *)(param_1 + 0xa08) != 0) && ((bVar2 & 0x10) == 0)) &&
     ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) {
    FUN_14149b2a0(param_1);
    *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 0x10;
    return;
  }
  return;
}



// FUNCTION 141275f20 FUN_141275f20 body=172 status=ok
// SIG undefined FUN_141275f20(void)

void FUN_141275f20(longlong param_1,int param_2,byte param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     ((cVar2 = FUN_14122e820(), *(char *)(param_1 + 0x3a8) != '\0' || (cVar2 == '\0')))) {
    piVar3 = *(int **)(param_1 + 0x388);
    piVar1 = piVar3 + *(int *)(param_1 + 0x390);
    piVar4 = piVar3;
    if (piVar3 != piVar1) {
      do {
        if (*piVar4 == param_2 + -1 + (param_3 ^ 1) * 2) {
          return;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar1);
      for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
        if (*piVar3 == param_2) {
          return;
        }
      }
    }
    FUN_141279c30(param_1,CONCAT71((int7)((ulonglong)piVar4 >> 8),
                                   param_2 == *(int *)(*(longlong *)(param_1 + 0x188) + 0x768) + 1))
    ;
  }
  return;
}



// FUNCTION 141275fe0 FUN_141275fe0 body=157 status=ok
// SIG undefined FUN_141275fe0(void)

void FUN_141275fe0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*(longlong *)(lVar1 + 0x5a0) + 0x20))((longlong *)(lVar1 + 0x5a0),&local_48);
      cVar3 = FUN_142d52a00(&local_48);
      if (cVar3 != '\0') {
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        local_18 = local_38;
        FUN_14127eb80(param_1,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 141276080 FUN_141276080 body=197 status=ok
// SIG undefined FUN_141276080(void)

void FUN_141276080(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)
               (**(code **)(*(longlong *)(lVar5 + 0x5a0) + 0x20))
                         ((longlong *)(lVar5 + 0x5a0),local_38);
      goto LAB_141276101;
    }
  }
  lVar5 = 0;
  local_38[0] = 0xff;
  uStack_30 = 0;
  puVar4 = (undefined4 *)local_38;
  local_28 = 0;
LAB_141276101:
  local_20 = *puVar4;
  uStack_1c = puVar4[1];
  uStack_18 = puVar4[2];
  uStack_14 = puVar4[3];
  local_10 = *(undefined8 *)(puVar4 + 4);
  cVar2 = FUN_142d529c0(param_2 + 0x60,&local_20);
  if (cVar2 != '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3b8,lVar5);
  }
  return;
}



// FUNCTION 141276150 FUN_141276150 body=197 status=ok
// SIG undefined FUN_141276150(void)

void FUN_141276150(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)
               (**(code **)(*(longlong *)(lVar5 + 0x5a0) + 0x20))
                         ((longlong *)(lVar5 + 0x5a0),local_38);
      goto LAB_1412761d1;
    }
  }
  lVar5 = 0;
  local_38[0] = 0xff;
  uStack_30 = 0;
  puVar4 = (undefined4 *)local_38;
  local_28 = 0;
LAB_1412761d1:
  local_20 = *puVar4;
  uStack_1c = puVar4[1];
  uStack_18 = puVar4[2];
  uStack_14 = puVar4[3];
  local_10 = *(undefined8 *)(puVar4 + 4);
  cVar2 = FUN_142d529c0(param_2 + 0x60,&local_20);
  if (cVar2 != '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3a0,lVar5);
  }
  return;
}



// FUNCTION 141276220 FUN_141276220 body=197 status=ok
// SIG undefined FUN_141276220(void)

void FUN_141276220(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)
               (**(code **)(*(longlong *)(lVar5 + 0x5a0) + 0x20))
                         ((longlong *)(lVar5 + 0x5a0),local_38);
      goto LAB_1412762a1;
    }
  }
  lVar5 = 0;
  local_38[0] = 0xff;
  uStack_30 = 0;
  puVar4 = (undefined4 *)local_38;
  local_28 = 0;
LAB_1412762a1:
  local_20 = *puVar4;
  uStack_1c = puVar4[1];
  uStack_18 = puVar4[2];
  uStack_14 = puVar4[3];
  local_10 = *(undefined8 *)(puVar4 + 4);
  cVar2 = FUN_142d529c0(param_2 + 0x60,&local_20);
  if (cVar2 != '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3d0,lVar5);
  }
  return;
}



// FUNCTION 141276350 FUN_141276350 body=150 status=ok
// SIG undefined FUN_141276350(void)

void FUN_141276350(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((((param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) &&
      (lVar2 = param_2[0x23], lVar2 != 0)) &&
     ((lVar4 = FUN_140a63ba0(lVar1), lVar2 != lVar4 && (lVar2 != *(longlong *)(lVar1 + 0x118))))) {
    iVar3 = (**(code **)(*param_2 + 0x400))(param_2);
    param_4 = 1;
    if (0 < iVar3) {
      param_4 = iVar3;
    }
  }
  FUN_142cc8d50(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1412763f0 FUN_1412763f0 body=142 status=ok
// SIG undefined FUN_1412763f0(void)

void FUN_1412763f0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (param_2 == *(longlong *)(param_1 + 0x620)) {
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakLightBeam::OnModifierParticleSystemFinished",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x620) + 0x8a8,param_1,local_res8);
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  return;
}



// FUNCTION 141276480 FUN_141276480 body=1618 status=ok
// SIG undefined FUN_141276480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141276480(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  int *local_res10;
  int local_48;
  int local_44;
  int *local_40;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  pwVar15 = (wchar_t *)0x0;
  if ((*(longlong *)(param_1 + 0x620) != 0) &&
     (((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x6f0), lVar2 == 0 ||
       ((*(uint *)(lVar2 + 0x14c) >> 1 & 1) != 0)) || (*(char *)(param_1 + 0x1a8) != '\0')))) {
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakLightBeam::OnModifierParticleSystemFinished",L"::");
    pwVar11 = pwVar15;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_res8,pwVar11 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x620) + 0x8a8,param_1,local_res8);
    FUN_142600fa0(*(undefined8 *)(param_1 + 0x620));
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  if (*(byte *)(param_1 + 0x1a8) < 9) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x1a8);
  if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
    lVar9 = *(longlong *)(lVar2 + 0x298);
    if (*(longlong *)(lVar2 + 0x298) == 0) {
      lVar9 = lVar2 + 0x290;
    }
    iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
    if (iVar5 != -1) {
      lVar9 = *(longlong *)(lVar2 + 600);
      iVar10 = iVar5;
      do {
        if (*(byte *)(lVar9 + (longlong)iVar10 * 0x28) == bVar1) {
          if (iVar10 != -1) goto joined_r0x0001412765fa;
          break;
        }
        iVar10 = *(int *)(lVar9 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  goto LAB_1412768e6;
joined_r0x0001412765fa:
  if (iVar5 == -1) goto LAB_141276620;
  pwVar11 = (wchar_t *)(lVar9 + (longlong)iVar5 * 0x28);
  if (*(byte *)(lVar9 + (longlong)iVar5 * 0x28) == bVar1) {
    if (iVar5 != -1) goto LAB_141276623;
    goto LAB_141276620;
  }
  iVar5 = *(int *)(pwVar11 + 0x10);
  goto joined_r0x0001412765fa;
LAB_141276620:
  pwVar11 = pwVar15;
LAB_141276623:
  lVar9 = *(longlong *)(pwVar11 + 8);
  if (lVar9 != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    do {
      if (lVar9 == lVar7) {
        bVar1 = *(byte *)(param_1 + 0x1a8);
        pwVar11 = pwVar15;
        if (*(int *)(lVar2 + 0x260) == *(int *)(lVar2 + 0x28c)) goto LAB_1412766be;
        lVar9 = *(longlong *)(lVar2 + 0x298);
        if (*(longlong *)(lVar2 + 0x298) == 0) {
          lVar9 = lVar2 + 0x290;
        }
        iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
        if (iVar5 == -1) goto LAB_1412766be;
        lVar9 = *(longlong *)(lVar2 + 600);
        iVar10 = iVar5;
        goto LAB_1412766a0;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  goto LAB_1412768e6;
LAB_141276840:
  pwVar11 = (wchar_t *)(lVar9 + (longlong)iVar5 * 0x28);
  if (*(byte *)(lVar9 + (longlong)iVar5 * 0x28) != bVar1) goto code_r0x000141276851;
  if (iVar5 == -1) {
LAB_14127686a:
    pwVar11 = pwVar15;
  }
  pwVar11 = *(wchar_t **)(pwVar11 + 8);
  goto LAB_1412766be;
code_r0x000141276851:
  iVar5 = *(int *)(pwVar11 + 0x10);
  pwVar11 = _DAT_00000010;
  if (iVar5 == -1) goto LAB_1412766be;
  goto LAB_141276840;
joined_r0x000141276a71:
  if (iVar5 == -1) goto LAB_141276aa0;
  pwVar11 = (wchar_t *)(lVar2 + (longlong)iVar5 * 0x28);
  if (*(byte *)(lVar2 + (longlong)iVar5 * 0x28) == bVar1) {
    if (iVar5 != -1) goto LAB_141276aa3;
    goto LAB_141276aa0;
  }
  iVar5 = *(int *)(pwVar11 + 0x10);
  goto joined_r0x000141276a71;
LAB_141276aa0:
  pwVar11 = pwVar15;
LAB_141276aa3:
  pwVar11 = *(wchar_t **)(pwVar11 + 0xc);
  goto LAB_141276aa7;
  while (iVar10 = *(int *)(lVar9 + 0x20 + (longlong)iVar10 * 0x28), iVar10 != -1) {
LAB_1412766a0:
    if (*(byte *)(lVar9 + (longlong)iVar10 * 0x28) == bVar1) {
      if (iVar10 != -1) {
        if (iVar5 == -1) goto LAB_14127686a;
        goto LAB_141276840;
      }
      break;
    }
  }
LAB_1412766be:
  lVar9 = FUN_142db9260(pwVar11,param_1);
  if (lVar9 != 0) {
    pwVar11 = pwVar15;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      pwVar11 = *(wchar_t **)(param_1 + 0x20);
    }
    lVar9 = FUN_143041040(pwVar11,lVar9,0,0,0);
    *(longlong *)(param_1 + 0x620) = lVar9;
    if (lVar9 != 0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakLightBeam::OnModifierParticleSystemFinished",L"::");
      pwVar11 = pwVar15;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      lVar9 = *(longlong *)(param_1 + 0x620);
      plVar14 = (longlong *)(lVar9 + 0x8a8);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = (int *)0x0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != (int *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_40);
      }
      piVar12 = (int *)*plVar14;
      iVar5 = *(int *)(lVar9 + 0x8b0);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar5 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
           (*(int **)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_1412768bb;
          break;
        }
      }
      iVar5 = *(int *)(lVar9 + 0x8b0);
      *(int *)(lVar9 + 0x8b0) = iVar5 + 1;
      if (*(int *)(lVar9 + 0x8b4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar5);
      }
      piVar12 = (int *)((longlong)iVar5 * 0x10 + *plVar14);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(int **)(piVar12 + 2) = local_40;
LAB_1412768bb:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
      FUN_1425fcab0(*(undefined8 *)(param_1 + 0x620),1);
    }
  }
LAB_1412768e6:
  bVar1 = *(byte *)(param_1 + 0x1a8);
  if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
    lVar9 = *(longlong *)(lVar2 + 0x298);
    if (*(longlong *)(lVar2 + 0x298) == 0) {
      lVar9 = lVar2 + 0x290;
    }
    iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
    if (iVar5 != -1) {
      lVar9 = *(longlong *)(lVar2 + 600);
      iVar10 = iVar5;
      while (*(byte *)(lVar9 + (longlong)iVar10 * 0x28) != bVar1) {
        iVar10 = *(int *)(lVar9 + 0x20 + (longlong)iVar10 * 0x28);
        if (iVar10 == -1) {
          return;
        }
      }
      if (iVar10 != -1) {
        while (iVar5 != -1) {
          pwVar11 = (wchar_t *)(lVar9 + (longlong)iVar5 * 0x28);
          if (*(byte *)(lVar9 + (longlong)iVar5 * 0x28) == bVar1) {
            if (iVar5 != -1) goto LAB_1412769a3;
            break;
          }
          iVar5 = *(int *)(pwVar11 + 0x10);
        }
        pwVar11 = pwVar15;
LAB_1412769a3:
        if (((*(longlong *)(pwVar11 + 0xc) != 0) &&
            (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x778))(), cVar4 != '\0')) {
          plVar14 = *(longlong **)(param_1 + 0x140);
          uVar8 = AUGDoor::GetPrivateStaticClass();
          lVar9 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar8);
          if (lVar9 != 0) {
            bVar1 = *(byte *)(param_1 + 0x1a8);
            pwVar11 = pwVar15;
            if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
              lVar7 = *(longlong *)(lVar2 + 0x298);
              if (*(longlong *)(lVar2 + 0x298) == 0) {
                lVar7 = lVar2 + 0x290;
              }
              iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) *
                                       4);
              if (iVar5 != -1) {
                lVar2 = *(longlong *)(lVar2 + 600);
                iVar10 = iVar5;
                do {
                  if (*(byte *)(lVar2 + (longlong)iVar10 * 0x28) == bVar1) {
                    pwVar11 = (wchar_t *)0x0;
                    if (iVar10 != -1) goto joined_r0x000141276a71;
                    break;
                  }
                  iVar10 = *(int *)(lVar2 + 0x20 + (longlong)iVar10 * 0x28);
                } while (iVar10 != -1);
              }
            }
LAB_141276aa7:
            FUN_1405a3150(lVar9,&local_48,pwVar11,0);
            FUN_140591060(&local_48);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141276ae0 FUN_141276ae0 body=2926 status=ok
// SIG undefined FUN_141276ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141276ae0(ulonglong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  wchar_t *pwVar15;
  int *piVar16;
  longlong lVar17;
  int iVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  longlong *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 local_res8;
  longlong local_res10;
  ulonglong uVar57;
  float local_178;
  float fStack_174;
  undefined8 uStack_170;
  longlong local_168;
  undefined4 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_e8 [176];
  
  if (*(byte *)(param_1 + 0xe0) < 9) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar17 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar17 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return;
  }
  pwVar20 = (wchar_t *)0x0;
  if ((((-1 < *(char *)(param_1 + 0xe8)) && (*(longlong *)(param_1 + 0x308) != 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x488) + 0x330) & 1) == 0)) &&
     (bVar1 = *(byte *)(param_1 + 0xe0), *(int *)(lVar17 + 0x260) != *(int *)(lVar17 + 0x28c))) {
    lVar13 = *(longlong *)(lVar17 + 0x298);
    if (*(longlong *)(lVar17 + 0x298) == 0) {
      lVar13 = lVar17 + 0x290;
    }
    iVar11 = *(int *)(lVar13 + ((longlong)*(int *)(lVar17 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
    if (iVar11 != -1) {
      lVar13 = *(longlong *)(lVar17 + 600);
      iVar18 = iVar11;
      do {
        if (*(byte *)(lVar13 + (longlong)iVar18 * 0x28) == bVar1) {
          if (iVar18 != -1) goto joined_r0x000141276c08;
          break;
        }
        iVar18 = *(int *)(lVar13 + 0x20 + (longlong)iVar18 * 0x28);
      } while (iVar18 != -1);
    }
  }
  goto LAB_141277530;
joined_r0x000141276c08:
  if (iVar11 == -1) goto LAB_141276c30;
  pwVar19 = (wchar_t *)(lVar13 + (longlong)iVar11 * 0x28);
  if (*(byte *)(lVar13 + (longlong)iVar11 * 0x28) == bVar1) {
    if (iVar11 != -1) goto LAB_141276c33;
    goto LAB_141276c30;
  }
  iVar11 = *(int *)(pwVar19 + 0x10);
  goto joined_r0x000141276c08;
LAB_141276c30:
  pwVar19 = pwVar20;
LAB_141276c33:
  lVar13 = *(longlong *)(pwVar19 + 4);
  if (lVar13 != 0) {
    lVar12 = UDungeonEventListener::GetPrivateStaticClass();
    do {
      if (lVar13 == lVar12) {
        bVar1 = *(byte *)(param_1 + 0xe0);
        pwVar19 = pwVar20;
        if (*(int *)(lVar17 + 0x260) == *(int *)(lVar17 + 0x28c)) goto LAB_141276cce;
        lVar13 = *(longlong *)(lVar17 + 0x298);
        if (*(longlong *)(lVar17 + 0x298) == 0) {
          lVar13 = lVar17 + 0x290;
        }
        iVar11 = *(int *)(lVar13 + ((longlong)*(int *)(lVar17 + 0x2a0) - 1U & (ulonglong)bVar1) * 4)
        ;
        if (iVar11 == -1) goto LAB_141276cce;
        lVar13 = *(longlong *)(lVar17 + 600);
        iVar18 = iVar11;
        goto LAB_141276cb0;
      }
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  goto LAB_141277530;
LAB_1412771b0:
  pwVar19 = (wchar_t *)(lVar13 + (longlong)iVar11 * 0x28);
  if (*(byte *)(lVar13 + (longlong)iVar11 * 0x28) != bVar1) goto code_r0x0001412771c1;
  if (iVar11 == -1) {
LAB_1412771da:
    pwVar19 = pwVar20;
  }
  pwVar19 = *(wchar_t **)(pwVar19 + 4);
  goto LAB_141276cce;
code_r0x0001412771c1:
  iVar11 = *(int *)(pwVar19 + 0x10);
  pwVar19 = _DAT_00000008;
  if (iVar11 == -1) goto LAB_141276cce;
  goto LAB_1412771b0;
  while (iVar18 = *(int *)(lVar13 + 0x20 + (longlong)iVar18 * 0x28), iVar18 != -1) {
LAB_141276cb0:
    if (*(byte *)(lVar13 + (longlong)iVar18 * 0x28) == bVar1) {
      if (iVar18 != -1) {
        if (iVar11 == -1) goto LAB_1412771da;
        goto LAB_1412771b0;
      }
      break;
    }
  }
LAB_141276cce:
  lVar13 = FUN_142db9260(pwVar19,param_1);
  if (lVar13 != 0) {
    pfVar14 = (float *)FVector4::ToOrientationQuat(param_1 + 0x2f0,&local_108);
    fVar9 = fRam00000001468774f8;
    fVar8 = fRam00000001468774f4;
    fVar7 = _DAT_1468774f0;
    fVar6 = fRam0000000146877498;
    fVar5 = fRam0000000146877494;
    fVar40 = _DAT_146877490;
    fVar39 = DAT_1464aa790;
    fVar37 = DAT_1464aa788._4_4_;
    fVar44 = (float)DAT_1464aa788;
    local_110 = *(float *)(param_1 + 700);
    local_114 = *(float *)(param_1 + 0x2b8);
    local_118 = *(float *)(param_1 + 0x2b4);
    fVar28 = *pfVar14;
    fVar30 = pfVar14[1];
    fVar38 = pfVar14[2];
    fVar24 = pfVar14[3];
    lVar12 = *(longlong *)(param_1 + 0xa8);
    auVar27 = *(undefined1 (*) [16])(lVar12 + 0x60);
    fVar54 = auVar27._0_4_;
    fVar55 = auVar27._4_4_;
    fVar56 = auVar27._8_4_;
    auVar22._4_4_ = DAT_1464aa788._4_4_;
    auVar22._0_4_ = (float)DAT_1464aa788;
    auVar22._8_4_ = DAT_1464aa790;
    auVar22._12_4_ = 0;
    auVar22 = minps(auVar27,auVar22);
    auVar23._4_4_ = -(uint)(auVar22._4_4_ < fRam00000001468774f4);
    auVar23._0_4_ = -(uint)(auVar22._0_4_ < _DAT_1468774f0);
    auVar23._8_4_ = -(uint)(auVar22._8_4_ < fRam00000001468774f8);
    auVar23._12_4_ = -(uint)(auVar22._12_4_ < fRam00000001468774fc);
    iVar11 = movmskps((int)pfVar14,auVar23);
    if (iVar11 == 0) {
      fVar54 = *(float *)(lVar12 + 0x40);
      fVar55 = *(float *)(lVar12 + 0x44);
      fVar56 = *(float *)(lVar12 + 0x48);
      fVar44 = *(float *)(lVar12 + 0x4c);
      fVar37 = *(float *)(lVar12 + 0x50) * (float)DAT_1464aa788;
      fVar39 = *(float *)(lVar12 + 0x54) * DAT_1464aa788._4_4_;
      fVar40 = *(float *)(lVar12 + 0x58) * DAT_1464aa790;
      local_108 = fVar44 * fVar28 * _DAT_1468774d0 + fVar54 * fVar24 +
                  fVar56 * fVar30 * _DAT_1468774c0 + fVar55 * fVar38 * _DAT_1468774b0;
      fStack_104 = fVar56 * fVar28 * fRam00000001468774d4 + fVar55 * fVar24 +
                   fVar44 * fVar30 * fRam00000001468774c4 + fVar54 * fVar38 * fRam00000001468774b4;
      fStack_100 = fVar55 * fVar28 * fRam00000001468774d8 + fVar56 * fVar24 +
                   fVar54 * fVar30 * fRam00000001468774c8 + fVar44 * fVar38 * fRam00000001468774b8;
      fStack_fc = fVar54 * fVar28 * fRam00000001468774dc + fVar44 * fVar24 +
                  fVar55 * fVar30 * fRam00000001468774cc + fVar56 * fVar38 * fRam00000001468774bc;
      fVar54 = fVar40 * fVar30 - fVar39 * fVar38;
      fVar55 = fVar37 * fVar38 - fVar40 * fVar28;
      fVar56 = fVar39 * fVar28 - fVar37 * fVar30;
      fVar54 = fVar54 + fVar54;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      local_118 = (fVar56 * fVar30 - fVar55 * fVar38) + fVar24 * fVar54 + fVar37 + local_118;
      local_114 = (fVar54 * fVar38 - fVar56 * fVar28) + fVar24 * fVar55 + fVar39 + local_114;
      local_110 = (fVar55 * fVar28 - fVar54 * fVar30) + fVar24 * fVar56 + fVar40 + local_110;
    }
    else {
      fVar33 = fVar30 + fVar30;
      fVar35 = fVar38 + fVar38;
      fVar36 = (fVar28 + fVar28) * fVar28;
      fVar25 = *(float *)(lVar12 + 0x40);
      fVar31 = *(float *)(lVar12 + 0x44);
      fVar29 = *(float *)(lVar12 + 0x48);
      fVar32 = *(float *)(lVar12 + 0x4c);
      fVar34 = (fVar28 + fVar28) * fVar24;
      fVar51 = (fVar35 * fVar24 + fVar33 * fVar28) * (float)DAT_1464aa788;
      fVar52 = (fVar34 + fVar35 * fVar30) * DAT_1464aa788._4_4_;
      fVar53 = (fVar33 * fVar24 + fVar35 * fVar28) * DAT_1464aa790;
      fVar41 = DAT_1464aa788._4_4_ * (fVar33 * fVar28 - fVar35 * fVar24);
      fVar42 = DAT_1464aa790 * (fVar35 * fVar30 - fVar34);
      fVar43 = (float)DAT_1464aa788 * (fVar35 * fVar28 - fVar33 * fVar24);
      fVar24 = (float)((uint)((_DAT_146877490 - (fVar35 * fVar38 + fVar33 * fVar30)) *
                             (float)DAT_1464aa788) & _DAT_1468774a0);
      fVar34 = (float)((uint)((fRam0000000146877494 - (fVar35 * fVar38 + fVar36)) *
                             DAT_1464aa788._4_4_) & uRam00000001468774a4);
      fVar33 = (float)((uint)((fRam0000000146877498 - (fVar33 * fVar30 + fVar36)) * DAT_1464aa790) &
                      uRam00000001468774a8);
      fVar35 = (float)((uint)((fRam000000014687749c - (fVar36 + fVar36)) * 0.0) &
                      uRam00000001468774ac);
      fVar28 = fVar31 + fVar31;
      fVar30 = fVar29 + fVar29;
      fVar36 = (fVar25 + fVar25) * fVar25;
      fVar38 = fVar32 * (fVar25 + fVar25);
      fVar48 = (fVar32 * fVar30 + fVar25 * fVar28) * fVar54;
      fVar49 = (fVar38 + fVar31 * fVar30) * fVar55;
      fVar50 = (fVar32 * fVar28 + fVar25 * fVar30) * fVar56;
      fVar45 = fVar55 * (fVar25 * fVar28 - fVar32 * fVar30);
      fVar46 = fVar56 * (fVar31 * fVar30 - fVar38);
      fVar47 = fVar54 * (fVar25 * fVar30 - fVar32 * fVar28);
      fVar25 = (float)((uint)((_DAT_146877490 - (fVar30 * fVar29 + fVar28 * fVar31)) * fVar54) &
                      _DAT_1468774a0);
      fVar29 = (float)((uint)((fRam0000000146877494 - (fVar30 * fVar29 + fVar36)) * fVar55) &
                      uRam00000001468774a4);
      fVar31 = (float)((uint)((fRam0000000146877498 - (fVar28 * fVar31 + fVar36)) * fVar56) &
                      uRam00000001468774a8);
      fVar32 = (float)((uint)((fRam000000014687749c - (fVar36 + fVar36)) * auVar27._12_4_) &
                      uRam00000001468774ac);
      fVar28 = *(float *)(lVar12 + 0x50);
      fVar30 = *(float *)(lVar12 + 0x54);
      fVar38 = *(float *)(lVar12 + 0x58);
      local_158 = fVar48 * fVar41 + fVar25 * fVar24 + fVar47 * fVar53 + fVar32 * local_118;
      fStack_154 = fVar48 * fVar34 + fVar25 * fVar51 + fVar47 * fVar42 + fVar32 * local_114;
      fStack_150 = fVar48 * fVar52 + fVar25 * fVar43 + fVar47 * fVar33 + fVar32 * local_110;
      fStack_14c = fVar48 * fVar35 + fVar25 * fVar35 + fVar47 * fVar35 +
                   fVar32 * fRam000000014687749c;
      local_148 = fVar29 * fVar41 + fVar45 * fVar24 + fVar49 * fVar53 + fVar32 * local_118;
      fStack_144 = fVar29 * fVar34 + fVar45 * fVar51 + fVar49 * fVar42 + fVar32 * local_114;
      fStack_140 = fVar29 * fVar52 + fVar45 * fVar43 + fVar49 * fVar33 + fVar32 * local_110;
      fStack_13c = fVar29 * fVar35 + fVar45 * fVar35 + fVar49 * fVar35 +
                   fVar32 * fRam000000014687749c;
      local_138 = fVar46 * fVar41 + fVar50 * fVar24 + fVar31 * fVar53 + fVar32 * local_118;
      fStack_134 = fVar46 * fVar34 + fVar50 * fVar51 + fVar31 * fVar42 + fVar32 * local_114;
      fStack_130 = fVar46 * fVar52 + fVar50 * fVar43 + fVar31 * fVar33 + fVar32 * local_110;
      fStack_12c = fVar46 * fVar35 + fVar50 * fVar35 + fVar31 * fVar35 +
                   fVar32 * fRam000000014687749c;
      local_128 = fVar30 * fVar41 + fVar28 * fVar24 + fVar38 * fVar53 +
                  fRam000000014687749c * local_118;
      fStack_124 = fVar30 * fVar34 + fVar28 * fVar51 + fVar38 * fVar42 +
                   fRam000000014687749c * local_114;
      fStack_120 = fVar30 * fVar52 + fVar28 * fVar43 + fVar38 * fVar33 +
                   fRam000000014687749c * local_110;
      fStack_11c = fVar30 * fVar35 + fVar28 * fVar35 + fVar38 * fVar35 +
                   fRam000000014687749c * fRam000000014687749c;
      FMatrix::RemoveScaling(&local_158);
      fVar54 = (float)(-(uint)(fVar7 <= fVar44 * fVar54) & (_DAT_1468774e0 ^ (uint)fVar40) ^
                      _DAT_1468774e0);
      fVar55 = (float)(-(uint)(fVar8 <= fVar37 * fVar55) & (uRam00000001468774e4 ^ (uint)fVar5) ^
                      uRam00000001468774e4);
      fVar56 = (float)(-(uint)(fVar9 <= fVar39 * fVar56) & (uRam00000001468774e8 ^ (uint)fVar6) ^
                      uRam00000001468774e8);
      local_158 = local_158 * fVar54;
      fStack_150 = fStack_150 * fVar54;
      fStack_154 = fStack_154 * fVar54;
      fStack_140 = fStack_140 * fVar55;
      fStack_144 = fStack_144 * fVar55;
      local_148 = local_148 * fVar55;
      fStack_130 = fStack_130 * fVar56;
      local_138 = local_138 * fVar56;
      fStack_134 = fStack_134 * fVar56;
      FQuat::FQuat(&local_178,&local_158);
      local_res8 = CONCAT44(local_res8._4_4_,0x322bcc77);
      auVar26._0_4_ = local_178 * local_178 + (float)uStack_170 * (float)uStack_170;
      auVar26._4_4_ = fStack_174 * fStack_174 + uStack_170._4_4_ * uStack_170._4_4_;
      auVar26._8_4_ = (float)uStack_170 * (float)uStack_170 + local_178 * local_178;
      auVar26._12_4_ = uStack_170._4_4_ * uStack_170._4_4_ + fStack_174 * fStack_174;
      fVar30 = auVar26._4_4_ + auVar26._0_4_;
      fVar38 = auVar26._8_4_ + auVar26._4_4_;
      fVar24 = auVar26._12_4_ + auVar26._8_4_;
      fVar44 = auVar26._0_4_ + auVar26._12_4_;
      auVar27._4_4_ = fVar38;
      auVar27._0_4_ = fVar30;
      auVar27._8_4_ = fVar24;
      auVar27._12_4_ = fVar44;
      auVar27 = rsqrtps(auVar26,auVar27);
      fVar54 = auVar27._0_4_;
      fVar55 = auVar27._4_4_;
      fVar56 = auVar27._8_4_;
      fVar28 = auVar27._12_4_;
      fVar54 = (_DAT_146877480 - fVar54 * fVar54 * fVar30 * _DAT_146877480) * fVar54 + fVar54;
      fVar55 = (fRam0000000146877484 - fVar55 * fVar55 * fVar38 * fRam0000000146877484) * fVar55 +
               fVar55;
      fVar56 = (fRam0000000146877488 - fVar56 * fVar56 * fVar24 * fRam0000000146877488) * fVar56 +
               fVar56;
      fVar28 = (fRam000000014687748c - fVar28 * fVar28 * fVar44 * fRam000000014687748c) * fVar28 +
               fVar28;
      local_108 = (float)(((uint)(((_DAT_146877480 - fVar54 * fVar54 * fVar30 * _DAT_146877480) *
                                   fVar54 + fVar54) * local_178) ^ _DAT_146877470) &
                          -(uint)(1e-08 <= fVar30) ^ _DAT_146877470);
      fStack_104 = (float)(((uint)(((fRam0000000146877484 -
                                    fVar55 * fVar55 * fVar38 * fRam0000000146877484) * fVar55 +
                                   fVar55) * fStack_174) ^ uRam0000000146877474) &
                           -(uint)(1e-08 <= fVar38) ^ uRam0000000146877474);
      fStack_100 = (float)(((uint)(((fRam0000000146877488 -
                                    fVar56 * fVar56 * fVar24 * fRam0000000146877488) * fVar56 +
                                   fVar56) * (float)uStack_170) ^ uRam0000000146877478) &
                           -(uint)(1e-08 <= fVar24) ^ uRam0000000146877478);
      fStack_fc = (float)(((uint)(((fRam000000014687748c -
                                   fVar28 * fVar28 * fVar44 * fRam000000014687748c) * fVar28 +
                                  fVar28) * uStack_170._4_4_) ^ uRam000000014687747c) &
                          -(uint)(1e-08 <= fVar44) ^ uRam000000014687747c);
      local_118 = local_128;
      local_114 = fStack_124;
      local_110 = fStack_120;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    FQuat::Rotator(&local_108,local_e8);
    pwVar19 = pwVar20;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      pwVar19 = *(wchar_t **)(param_1 + 0x20);
    }
    uVar57 = param_1;
    plVar21 = (longlong *)FUN_1430410e0(pwVar19,lVar13,&local_118,local_e8,param_1,uVar3,0);
    if (plVar21 != (longlong *)0x0) {
      pwVar15 = _guard_xfg_dispatch_icall_nop
                          (L"&UOakLightProjectile::OnParticleSystemFinished",L"::");
      pwVar19 = pwVar20;
      while (pwVar4 = pwVar15, pwVar4 != (wchar_t *)0x0) {
        pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar19 = pwVar4;
      }
      FName::FName(&local_res10,pwVar19 + 2,1);
      FWeakObjectPtr::operator=(&local_178,0);
      uStack_170 = 0;
      FWeakObjectPtr::operator=(&local_178,param_1);
      uStack_170 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_178), lVar13 != 0)) {
        UObject::FindFunction(lVar13,uStack_170);
      }
      FUN_1406a5aa0(plVar21 + 0x115,&local_178);
      iVar11 = *(int *)(param_1 + 0x318);
      *(int *)(param_1 + 0x318) = iVar11 + 1;
      if (*(int *)(param_1 + 0x31c) < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x310),iVar11);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x310) + (longlong)iVar11 * 8) = plVar21;
      if (*(longlong *)(param_1 + 0x300) == 0) {
        local_168 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xc0);
        local_160 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 200);
        uStack_170 = CONCAT44(uStack_170._4_4_,local_160);
        (**(code **)(*plVar21 + 0x3f8))(plVar21,&local_168);
      }
      else {
        FUN_142397000(plVar21,0,0,1);
        FUN_142398770(plVar21,*(longlong *)(param_1 + 0xa8) + 0xa0,0,0,uVar57 & 0xffffffffffffff00);
        FUN_142382f60(plVar21,*(undefined8 *)(param_1 + 0x300),&DAT_146af29ec,
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x90));
      }
      *(undefined8 *)((longlong)plVar21 + 0x77c) = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined4 *)((longlong)plVar21 + 0x784) = *(undefined4 *)(param_1 + 0x2f8);
      FUN_1425fcab0(plVar21,1);
      local_168 = plVar21[0x44];
      local_160 = (undefined4)plVar21[0x45];
      FUN_14260f1a0(plVar21,&local_168);
    }
  }
LAB_141277530:
  uVar2 = *(undefined1 *)(param_1 + 0xe0);
  plVar21 = (longlong *)(lVar17 + 600);
  piVar16 = (int *)FUN_14126d060(plVar21,&local_res10,uVar2);
  if (*piVar16 != -1) {
    FUN_14126d060(plVar21,&local_res8,uVar2);
    pwVar19 = pwVar20;
    if ((int)local_res8 != -1) {
      pwVar19 = (wchar_t *)(*plVar21 + (longlong)(int)local_res8 * 0x28);
    }
    if (((*(longlong *)(pwVar19 + 0xc) != 0) && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)
        ) && ((cVar10 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x778))(), cVar10 != '\0' &&
              (lVar17 = FUN_141258ff0(*(undefined8 *)(param_1 + 0x140)), lVar17 != 0)))) {
      uVar2 = *(undefined1 *)(param_1 + 0xe0);
      piVar16 = (int *)FUN_14126d060(plVar21,&local_res10,uVar2);
      if (*piVar16 != -1) {
        FUN_14126d060(plVar21,&local_res8,uVar2);
        if ((int)local_res8 != -1) {
          pwVar20 = (wchar_t *)(*plVar21 + (longlong)(int)local_res8 * 0x28);
        }
        pwVar20 = *(wchar_t **)(pwVar20 + 0xc);
      }
      FUN_1405a3150(lVar17,&local_108,pwVar20,0);
      FUN_140591060(&local_108);
    }
  }
  return;
}



// FUNCTION 141277650 FUN_141277650 body=210 status=ok
// SIG undefined FUN_141277650(void)

void FUN_141277650(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2c0);
    lVar4 = (longlong)*(int *)(param_1 + 0x2c8) * 0x30 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x30) {
      cVar1 = FWeakObjectPtr::IsValid(lVar2);
      if (cVar1 != '\0') {
        uVar3 = FWeakObjectPtr::Get(lVar2);
        FUN_1405a3150(uVar3,local_28,*(undefined8 *)(param_1 + 0x1e8),0);
        FUN_140591060(local_28);
      }
    }
  }
  return;
}



// FUNCTION 141277730 FUN_141277730 body=672 status=ok
// SIG undefined FUN_141277730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141277730(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x300);
    local_c8 = FUN_141283650;
    *(undefined8 *)(param_1 + 0x300) = 0;
    uStack_c0 = 0;
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1d8);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_c0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_bc;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x300,&local_a8,uVar1);
    if (local_48 != 0) {
      plVar7 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar7 = local_58;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2c0);
    lVar6 = (longlong)*(int *)(param_1 + 0x2c8) * 0x30 + lVar3;
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x30) {
      cVar2 = FWeakObjectPtr::IsValid(lVar3);
      if (cVar2 != '\0') {
        uVar5 = FWeakObjectPtr::Get(lVar3);
        FUN_1405a3150(uVar5,&local_c8,*(undefined8 *)(param_1 + 0x1e0),0);
        FUN_140591060(&local_c8);
      }
    }
  }
  return;
}



// FUNCTION 1412779d0 FUN_1412779d0 body=205 status=ok
// SIG undefined FUN_1412779d0(void)

void FUN_1412779d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_1430be640();
      lVar2 = AGameStateBase::OnRep_GameModeClass(param_1,uVar3);
      if (lVar2 != 0) {
        lVar4 = FUN_1430be640();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (*(longlong *)(lVar2 + 0x418) != 0) {
            FUN_142d49f50(*(longlong *)(lVar2 + 0x418),param_3);
          }
          if (*(longlong *)(lVar2 + 0x428) != 0) {
            FUN_142d49f50(*(longlong *)(lVar2 + 0x428),param_3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141277aa0 FUN_141277aa0 body=17 status=ok
// SIG undefined FUN_141277aa0(void)

void FUN_141277aa0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2f8);
    return;
  }
  return;
}



// FUNCTION 141277ad0 FUN_141277ad0 body=34 status=ok
// SIG undefined FUN_141277ad0(void)

void FUN_141277ad0(longlong param_1)

{
  FUN_142343b00();
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_1 + 0x118);
  return;
}



// FUNCTION 141277b00 FUN_141277b00 body=32 status=ok
// SIG undefined FUN_141277b00(void)

void FUN_141277b00(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142343b00();
  uVar1 = FUN_140a08d00();
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  return;
}



// FUNCTION 141277b20 FUN_141277b20 body=67 status=ok
// SIG undefined FUN_141277b20(void)

void FUN_141277b20(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0xa18) & 2) == 0) && (*(longlong *)(param_1 + 0x9e0) != 0)) &&
     ((*(byte *)(param_1 + 0xa18) & 1) != 0)) {
    FUN_14149b260();
    *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 2;
  }
  FUN_1412838b0(param_1);
  FUN_141283830(param_1);
  return;
}



// FUNCTION 141277b70 FUN_141277b70 body=68 status=ok
// SIG undefined FUN_141277b70(void)

void FUN_141277b70(longlong param_1)

{
  *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 1;
  if (((*(byte *)(param_1 + 0xa18) & 2) == 0) && (*(longlong *)(param_1 + 0x9e0) != 0)) {
    FUN_14149b260();
    *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 2;
  }
  FUN_1412838b0(param_1);
  FUN_141283830(param_1);
  return;
}



// FUNCTION 141277bc0 FUN_141277bc0 body=31 status=ok
// SIG undefined FUN_141277bc0(void)

void FUN_141277bc0(longlong param_1)

{
  FUN_143082300();
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x9a0));
  return;
}



// FUNCTION 141277be0 FUN_141277be0 body=90 status=ok
// SIG undefined FUN_141277be0(void)

void FUN_141277be0(longlong param_1)

{
  undefined8 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x538) == 0) {
    uVar1 = FUN_14126cad0(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x538) = uVar1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x518) + 0x6d8) = uVar1;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x538);
    FUN_141284890(param_1);
    return;
  }
  return;
}



// FUNCTION 141277c70 FUN_141277c70 body=50 status=ok
// SIG undefined FUN_141277c70(void)

void FUN_141277c70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FUN_1412aaa50(*(longlong *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x930));
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x938);
  return;
}



// FUNCTION 141277cb0 FUN_141277cb0 body=43 status=ok
// SIG undefined FUN_141277cb0(void)

void FUN_141277cb0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x288) != 0) {
    cVar1 = FUN_14122a7d0();
    *(bool *)(param_1 + 0x2d4) = cVar1 == '\0';
  }
  return;
}



// FUNCTION 141277d00 FUN_141277d00 body=98 status=ok
// SIG undefined FUN_141277d00(void)

void FUN_141277d00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char local_res8 [32];
  
  if (*(char *)(param_1 + 0x3e9) != '\0') {
    uVar1 = FUN_142d52a20(param_2);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d62440(uVar1,local_res8);
    if (local_res8[0] != '\0') {
      *(undefined1 *)(param_1 + 0x3e9) = 0;
      uVar1 = FUN_14126f930(param_1);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x388,uVar1);
      FUN_141259ef0(param_1);
    }
  }
  return;
}



// FUNCTION 141277d70 FUN_141277d70 body=121 status=ok
// SIG undefined FUN_141277d70(void)

void FUN_141277d70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x3e9) = 1;
  if (lVar3 != 0) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141277dc8;
  }
  lVar3 = 0;
LAB_141277dc8:
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x358,lVar3);
  FUN_141259ef0(param_1);
  return;
}



// FUNCTION 141277df0 FUN_141277df0 body=106 status=ok
// SIG undefined FUN_141277df0(void)

void FUN_141277df0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141277e41;
  }
  lVar3 = 0;
LAB_141277e41:
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x370,lVar3);
  return;
}



// FUNCTION 141277e60 FUN_141277e60 body=610 status=ok
// SIG undefined FUN_141277e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141277e60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    local_a0 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FWeakObjectPtr::operator=(&local_a8,param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar2 == (longlong *)0x0) {
      if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
         ((**(code **)(*local_b8 + 0x28))(local_b8,0), local_b8 != (longlong *)0x0)) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_144740750;
      *(undefined4 *)(plVar2 + 1) = local_a8;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_a4;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar1;
      *plVar2 = (longlong)&PTR_GetPoolName_144740798;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar2,&local_b8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x30))(local_b8,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,&local_a0,&local_98,0x3f000000);
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 1412780d0 FUN_1412780d0 body=1157 status=ok
// SIG undefined FUN_1412780d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412780d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(byte *)(param_1 + 0x4d4) < 9) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 == 0) {
    return;
  }
  lVar11 = 0;
  if (*(char *)(param_1 + 0x692) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x4d4);
    if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
      lVar6 = *(longlong *)(lVar2 + 0x298);
      if (*(longlong *)(lVar2 + 0x298) == 0) {
        lVar6 = lVar2 + 0x290;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
      if (iVar4 != -1) {
        lVar6 = *(longlong *)(lVar2 + 600);
        iVar10 = iVar4;
        do {
          if (*(byte *)(lVar6 + (longlong)iVar10 * 0x28) == bVar1) {
            if (iVar10 != -1) goto joined_r0x0001412781b8;
            break;
          }
          iVar10 = *(int *)(lVar6 + 0x20 + (longlong)iVar10 * 0x28);
        } while (iVar10 != -1);
      }
    }
  }
  goto LAB_1412782fc;
joined_r0x0001412781b8:
  if (iVar4 == -1) goto LAB_1412781e0;
  lVar5 = lVar6 + (longlong)iVar4 * 0x28;
  if (*(byte *)(lVar6 + (longlong)iVar4 * 0x28) == bVar1) {
    if (iVar4 != -1) goto LAB_1412781e3;
    goto LAB_1412781e0;
  }
  iVar4 = *(int *)(lVar5 + 0x20);
  goto joined_r0x0001412781b8;
LAB_1412781e0:
  lVar5 = lVar11;
LAB_1412781e3:
  lVar6 = *(longlong *)(lVar5 + 8);
  if (lVar6 != 0) {
    lVar5 = UDungeonEventListener::GetPrivateStaticClass();
    do {
      if (lVar6 == lVar5) {
        bVar1 = *(byte *)(param_1 + 0x4d4);
        lVar6 = lVar11;
        if (*(int *)(lVar2 + 0x260) == *(int *)(lVar2 + 0x28c)) goto LAB_14127827e;
        lVar5 = *(longlong *)(lVar2 + 0x298);
        if (*(longlong *)(lVar2 + 0x298) == 0) {
          lVar5 = lVar2 + 0x290;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
        if (iVar4 == -1) goto LAB_14127827e;
        lVar5 = *(longlong *)(lVar2 + 600);
        iVar10 = iVar4;
        goto LAB_141278260;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  goto LAB_1412782fc;
LAB_141278390:
  lVar6 = lVar5 + (longlong)iVar4 * 0x28;
  if (*(byte *)(lVar5 + (longlong)iVar4 * 0x28) != bVar1) goto code_r0x0001412783a1;
  if (iVar4 == -1) {
LAB_1412783ba:
    lVar6 = lVar11;
  }
  lVar6 = *(longlong *)(lVar6 + 8);
  goto LAB_14127827e;
code_r0x0001412783a1:
  iVar4 = *(int *)(lVar6 + 0x20);
  lVar6 = _DAT_00000008;
  if (iVar4 == -1) goto LAB_14127827e;
  goto LAB_141278390;
joined_r0x0001412783d2:
  if (iVar4 == -1) goto LAB_141278400;
  lVar5 = lVar6 + (longlong)iVar4 * 0x28;
  if (*(byte *)(lVar6 + (longlong)iVar4 * 0x28) == bVar1) {
    if (iVar4 != -1) goto LAB_141278403;
    goto LAB_141278400;
  }
  iVar4 = *(int *)(lVar5 + 0x20);
  goto joined_r0x0001412783d2;
LAB_141278400:
  lVar5 = lVar11;
LAB_141278403:
  if (*(longlong *)(lVar5 + 0x18) == 0) {
    return;
  }
  lVar6 = FUN_140a63ba0(param_1);
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (longlong *)FUN_140a63ba0(param_1);
  cVar3 = (**(code **)(*plVar7 + 0x778))(plVar7);
  if (cVar3 == '\0') {
    return;
  }
  plVar7 = (longlong *)FUN_140a63ba0(param_1);
  uVar8 = AUGDoor::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  if (lVar6 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x4d4);
  lVar5 = lVar11;
  if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
    lVar9 = *(longlong *)(lVar2 + 0x298);
    if (*(longlong *)(lVar2 + 0x298) == 0) {
      lVar9 = lVar2 + 0x290;
    }
    iVar4 = *(int *)(lVar9 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(lVar2 + 600);
      iVar10 = iVar4;
      do {
        if (*(byte *)(lVar2 + (longlong)iVar10 * 0x28) == bVar1) {
          lVar5 = 0;
          if (iVar10 != -1) goto joined_r0x0001412784e1;
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  goto LAB_141278517;
joined_r0x0001412784e1:
  if (iVar4 == -1) goto LAB_141278510;
  lVar5 = lVar2 + (longlong)iVar4 * 0x28;
  if (*(byte *)(lVar2 + (longlong)iVar4 * 0x28) == bVar1) {
    if (iVar4 != -1) goto LAB_141278513;
    goto LAB_141278510;
  }
  iVar4 = *(int *)(lVar5 + 0x20);
  goto joined_r0x0001412784e1;
LAB_141278510:
  lVar5 = lVar11;
LAB_141278513:
  lVar5 = *(longlong *)(lVar5 + 0x18);
LAB_141278517:
  FUN_1405a3150(lVar6,&local_28,lVar5,0);
  FUN_140591060(&local_28);
  return;
  while (iVar10 = *(int *)(lVar5 + 0x20 + (longlong)iVar10 * 0x28), iVar10 != -1) {
LAB_141278260:
    if (*(byte *)(lVar5 + (longlong)iVar10 * 0x28) == bVar1) {
      if (iVar10 != -1) {
        if (iVar4 == -1) goto LAB_1412783ba;
        goto LAB_141278390;
      }
      break;
    }
  }
LAB_14127827e:
  lVar6 = FUN_142db9260(lVar6,param_1);
  if (lVar6 != 0) {
    local_30 = DAT_1468b5da8;
    local_20 = DAT_1468b5d98;
    local_38 = DAT_1468b5da0;
    local_28 = _DAT_1468b5d90;
    FUN_1424600f0(lVar6,*(undefined8 *)(param_1 + 0x168),0,&local_28,&local_38,0,1,0,1,0);
  }
LAB_1412782fc:
  bVar1 = *(byte *)(param_1 + 0x4d4);
  if (*(int *)(lVar2 + 0x260) != *(int *)(lVar2 + 0x28c)) {
    lVar6 = *(longlong *)(lVar2 + 0x298);
    if (*(longlong *)(lVar2 + 0x298) == 0) {
      lVar6 = lVar2 + 0x290;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(lVar2 + 0x2a0) - 1U & (ulonglong)bVar1) * 4);
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(lVar2 + 600);
      iVar10 = iVar4;
      do {
        if (*(byte *)(lVar6 + (longlong)iVar10 * 0x28) == bVar1) {
          if (iVar10 == -1) {
            return;
          }
          goto joined_r0x0001412783d2;
        }
        iVar10 = *(int *)(lVar6 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  return;
}



// FUNCTION 141278570 FUN_141278570 body=71 status=ok
// SIG undefined FUN_141278570(void)

void FUN_141278570(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_4;
  if (uVar1 == 1) {
    FUN_141280e60(param_1,0x18);
    return;
  }
  if (uVar1 == 2) {
    FUN_141280e60(param_1,0x17);
    return;
  }
  if (uVar1 == 3) {
    FUN_141280e60(param_1,0x1a);
    return;
  }
  if (uVar1 != 4) {
    if (uVar1 - 5 != 0) {
      FUN_141280e60(param_1,(ulonglong)(uint3)(uVar1 - 5 >> 8) << 8);
      return;
    }
    FUN_141280e60(param_1,0x1b);
    return;
  }
  FUN_141280e60(param_1,0x19);
  return;
}



// FUNCTION 1412785c0 FUN_1412785c0 body=71 status=ok
// SIG undefined FUN_1412785c0(void)

void FUN_1412785c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_4;
  if (uVar1 == 1) {
    FUN_14127a6d0(param_1,0x18);
    return;
  }
  if (uVar1 == 2) {
    FUN_14127a6d0(param_1,0x17);
    return;
  }
  if (uVar1 == 3) {
    FUN_14127a6d0(param_1,0x1a);
    return;
  }
  if (uVar1 != 4) {
    if (uVar1 - 5 != 0) {
      FUN_14127a6d0(param_1,(ulonglong)(uint3)(uVar1 - 5 >> 8) << 8);
      return;
    }
    FUN_14127a6d0(param_1,0x1b);
    return;
  }
  FUN_14127a6d0(param_1,0x19);
  return;
}



// FUNCTION 141278640 FUN_141278640 body=149 status=ok
// SIG undefined FUN_141278640(void)

void FUN_141278640(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x298) != 0) && (lVar1 = *(longlong *)(param_1 + 0x290), lVar1 != 0))
  {
    if (*(longlong *)(lVar1 + 0x380) != 0) {
      FUN_1405aaad0(*(longlong *)(param_1 + 0x298),*(longlong *)(lVar1 + 0x380),param_3,0,4);
      lVar1 = *(longlong *)(param_1 + 0x290);
    }
    if (*(longlong *)(lVar1 + 0x378) != 0) {
      FUN_1405aaad0(*(undefined8 *)(param_1 + 0x298));
    }
  }
  return;
}



// FUNCTION 1412786e0 FUN_1412786e0 body=733 status=ok
// SIG undefined FUN_1412786e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412786e0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  *(undefined1 *)(param_1 + 0x2d1) = param_5;
  if ((*(longlong *)(param_1 + 0x290) != 0) &&
     (((*(longlong *)(param_1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
      (*(longlong *)(param_1 + 0x288) != 0)))) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    fVar2 = *(float *)(lVar5 + 0x790);
    lVar5 = 0;
    if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (fVar8 = fVar2 - *(float *)(param_1 + 0x2e0),
       pfVar1 = (float *)(*(longlong *)(param_1 + 0x290) + 0x300),
       *pfVar1 <= fVar8 && fVar8 != *pfVar1)) {
      lVar6 = FUN_1405ab470(*(undefined8 *)(param_1 + 0x288),0,1,0);
      if (lVar6 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x290) + 0x350);
        if (lVar3 != 0) {
          FUN_1405aaad0(lVar6,lVar3,param_2,0,4);
        }
        FUN_1405a3150(lVar6,&local_58,*(undefined8 *)(param_1 + 0x1a8),0);
        FUN_140591060(&local_58);
      }
      *(float *)(param_1 + 0x2e0) = fVar2;
    }
    if ((0 < *(int *)(param_1 + 0x1a0)) &&
       (fVar8 = fVar2 - *(float *)(param_1 + 0x2e4),
       pfVar1 = (float *)(*(longlong *)(param_1 + 0x290) + 0x300),
       *pfVar1 <= fVar8 && fVar8 != *pfVar1)) {
      plVar4 = *(longlong **)(param_1 + 0x198);
      for (plVar7 = plVar4; plVar7 != plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 2;
          plVar7 = plVar7 + 2) {
        if (param_2 < *(float *)(plVar7 + 1) || param_2 == *(float *)(plVar7 + 1))
        goto LAB_14127887d;
      }
      plVar7 = plVar4 + (longlong)(*(int *)(param_1 + 0x1a0) + -1) * 2;
LAB_14127887d:
      lVar6 = FUN_14126e620(param_1);
      if (lVar6 != 0) {
        lVar5 = FUN_142db9220(*(undefined1 *)(lVar6 + 0x50));
      }
      if (*plVar7 != 0) {
        local_60 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x168);
        local_68 = 0;
        if (lVar6 == 0) {
          local_78 = _DAT_1468b5d90;
          local_70 = DAT_1468b5d98;
        }
        else {
          local_78 = *(undefined8 *)(lVar6 + 0x220);
          local_70 = *(undefined4 *)(lVar6 + 0x228);
        }
        local_58 = local_78;
        local_50 = local_70;
        lVar6 = FUN_1405ab680(*(longlong *)(param_1 + 0x288),&local_58,0x42480000,&local_68,1);
        if (lVar6 != 0) {
          if (lVar5 != 0) {
            FUN_1405aaf50(lVar6,lVar5);
          }
          FUN_1405a3150(lVar6,&local_58,*plVar7,0);
          FUN_140591060(&local_58);
        }
      }
      *(float *)(param_1 + 0x2e4) = fVar2;
    }
  }
  return;
}



// FUNCTION 1412789c0 FUN_1412789c0 body=181 status=ok
// SIG undefined FUN_1412789c0(void)

void FUN_1412789c0(undefined8 param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res10;
  code *local_18;
  ulonglong uStack_10;
  
  if (param_2 != 0) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_141277cb0;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UVehicleAudioProviderComponent::OnSeatAttachStateChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    FUN_1407260e0(param_2 + 0x3f0,param_1,&local_18,local_res10);
  }
  return;
}



// FUNCTION 141278a80 FUN_141278a80 body=194 status=ok
// SIG undefined FUN_141278a80(void)

void FUN_141278a80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_2 != 0) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x350))) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x348));
      if (lVar1 != 0) {
        lVar3 = FUN_1414dd280();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1412413d0(*(undefined8 *)(*(longlong *)(param_1 + 0x348) + lVar4),param_2);
        }
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x350));
  }
  return;
}



// FUNCTION 141278b50 FUN_141278b50 body=244 status=ok
// SIG undefined FUN_141278b50(void)

void FUN_141278b50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 != DAT_1468c21c0) {
        FWeakObjectPtr::operator=(&local_res8,param_1);
        local_28 = 0;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_CopyToEmptyStorage_143fcfe68;
          *(undefined4 *)(puVar3 + 1) = local_res8;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_resc;
          *(undefined4 *)(puVar3 + 2) = param_3;
        }
        local_58[0] = FUN_1412686c0;
        FUN_14158fcd0(2,local_58);
        return;
      }
    }
    FUN_1412688f0(param_1,param_3);
  }
  return;
}



// FUNCTION 141278c50 FUN_141278c50 body=304 status=ok
// SIG undefined FUN_141278c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141278c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  
  lVar1 = param_1 + 0x228;
  cVar2 = FUN_140e96340(lVar1);
  if ((cVar2 != '\0') &&
     ((cVar2 = '\0', param_2 == 0 || (cVar2 = FUN_140e7ef50(lVar1,param_2), cVar2 != -1)))) {
    cVar3 = FUN_140e7fa40(lVar1,cVar2);
    FUN_140e75b30(lVar1,cVar2);
    if ((*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar4 != '\0')) {
      cVar4 = FUN_140e83450(lVar1,cVar2);
      if (cVar4 == '\0') {
        if (cVar3 != '\0') {
          if (*(int *)(param_1 + 0x180) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0x178);
          }
          (**(code **)(*plVar5 + 0x38))(plVar5,cVar2,0);
          FUN_140e91ca0(lVar1,cVar2,0,0);
          plVar5 = (longlong *)FUN_140e83500(lVar1,cVar2);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x820))(plVar5,0,0);
          }
        }
      }
      else if (*(int *)(param_1 + 0x180) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,cVar2,0);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x38))
                  (*(longlong **)(param_1 + 0x178),cVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 141278d80 thunk_FUN_14149b320 body=5 status=ok
// SIG undefined thunk_FUN_14149b320(void)

void thunk_FUN_14149b320(void)

{
  FUN_14149b320();
  return;
}



// FUNCTION 141278d90 FUN_141278d90 body=120 status=ok
// SIG undefined FUN_141278d90(void)

void FUN_141278d90(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0xa30);
  local_28 = *(undefined4 *)(param_1 + 0xa20);
  uStack_24 = *(undefined4 *)(param_1 + 0xa24);
  uStack_20 = *(undefined4 *)(param_1 + 0xa28);
  uStack_1c = *(undefined4 *)(param_1 + 0xa2c);
  FUN_142d55d50(&local_28,CONCAT44(0x80000000,*(uint *)(param_1 + 0xa38) ^ 0x80000000));
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x9e0) + 0x2380);
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x1e0);
    *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)(lVar2 + 0x1d8);
    *(undefined8 *)(param_1 + 0xa28) = uVar1;
    *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(lVar2 + 0x1e8);
  }
  return;
}



// FUNCTION 141278e10 FUN_141278e10 body=1196 status=ok
// SIG undefined FUN_141278e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141278e10(longlong param_1,float *param_2,float *param_3,byte *param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float local_158;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108 [2];
  float local_100;
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468779c0) && (_Init_thread_header(&DAT_1468779c0), DAT_1468779c0 == -1))
  {
    FName::FName(&DAT_1468779b8,L"LandBig",1);
    _Init_thread_footer(&DAT_1468779c0);
  }
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    lVar3 = *(longlong *)(param_1 + 0x220);
    if (*(longlong *)(param_1 + 0x220) == 0) {
      lVar3 = param_1 + 0x218;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x228) - 1U & (ulonglong)*param_4) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar2 * 0x18);
        if (*(byte *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar2 * 0x18) == *param_4) {
          if (iVar2 != -1) goto LAB_141278ee3;
          break;
        }
        iVar2 = (int)plVar4[2];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_141278ee3:
  plVar6 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x308))
              (*(longlong **)(param_1 + 0x188),local_108);
    local_100 = ABS(local_100);
    if (*(float *)(param_1 + 0x230) <= local_100) {
      local_130 = param_3[2];
      local_134 = param_3[1];
      local_128 = local_130 * DAT_1464aa7a8._4_4_ - local_134 * DAT_1464aa7b0;
      local_138 = *param_3;
      cVar5 = '\0';
      local_124 = local_138 * DAT_1464aa7b0 - local_130 * (float)DAT_1464aa7a8;
      local_120 = local_134 * (float)DAT_1464aa7a8 - local_138 * DAT_1464aa7a8._4_4_;
      local_148 = local_130 * local_124 - local_134 * local_120;
      local_144 = local_138 * local_120 - local_130 * local_128;
      local_168 = local_134 * local_128 - local_138 * local_124;
      if (*(longlong *)(param_1 + 0x188) != 0) {
        if ((ABS(local_108[0]) < *(float *)(param_1 + 0x234) ||
             ABS(local_108[0]) == *(float *)(param_1 + 0x234)) ||
           (local_100 < *(float *)(param_1 + 0x23c) || local_100 == *(float *)(param_1 + 0x23c))) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
      }
      lVar3 = 0x24c;
      if (cVar5 == '\0') {
        lVar3 = 0x240;
      }
      uVar1 = *(undefined8 *)(lVar3 + param_1);
      local_158 = *(float *)(lVar3 + 8 + param_1);
      local_118 = DAT_1468b5d90;
      local_114 = DAT_1468b5d94;
      local_110 = DAT_1468b5d98;
      if (cVar5 != '\0') {
        local_160._0_4_ = (float)uVar1;
        local_160._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_118 = local_148 * (float)local_160 + local_128 * local_160._4_4_ +
                    local_138 * local_158;
        local_114 = local_144 * (float)local_160 + local_124 * local_160._4_4_ +
                    local_134 * local_158;
        local_110 = local_168 * (float)local_160 + local_120 * local_160._4_4_ +
                    local_130 * local_158;
      }
      local_118 = local_118 + *param_2;
      local_114 = local_114 + param_2[1];
      local_110 = local_110 + param_2[2];
      local_10c = 0x3f800000;
      local_13c = 0;
      local_12c = 0;
      local_11c = 0;
      local_160 = uVar1;
      local_140 = local_168;
      FUN_140487e30(local_f8,&local_148);
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      local_170 = 0;
      local_178 = 1;
      plVar4 = (longlong *)FUN_14245f910(lVar3,*plVar6,local_f8,1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x958))(plVar4,DAT_1468779b8,cVar5);
      }
    }
  }
  return;
}



// FUNCTION 1412792c0 FUN_1412792c0 body=232 status=ok
// SIG undefined FUN_1412792c0(void)

void FUN_1412792c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_18 [16];
  
  FUN_140a6c650();
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar2 = *(longlong *)(param_2 + 0x920), lVar2 != 0)) &&
       (*(char *)(param_1 + 0x688) == '\0')) {
      local_res10[0] = 3;
      puVar3 = (undefined8 *)FName::FName(local_res18,L"FullBody",1);
      uVar4 = FUN_142c6e430(lVar2,local_18,*puVar3);
      FUN_142c844a0(lVar2,uVar4,local_res10);
    }
    if (*(char *)(param_1 + 0x6e9) != '\0') {
      *(uint *)(param_2 + 0x460) = *(uint *)(param_2 + 0x460) & 0xfffffffa | 2;
    }
    if (*(char *)(param_1 + 0x6ea) != '\0') {
      *(uint *)(param_2 + 0x460) = *(uint *)(param_2 + 0x460) | 7;
    }
  }
  return;
}



// FUNCTION 1412793b0 FUN_1412793b0 body=401 status=ok
// SIG undefined FUN_1412793b0(void)

void FUN_1412793b0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_140a6c720();
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    uVar3 = FUN_142ceeb40(param_1,1);
    lVar4 = FUN_142ceefb0(param_1,uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_14123d410(*(undefined8 *)(param_1 + 0x6d8),lVar4);
      }
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)((longlong)param_2 + 0x13c1) != '\0') {
        FUN_14223c460(param_2,0);
        FUN_142cff140(param_1,1,param_2);
      }
      if (*(char *)(param_1 + 0x6e6) != '\0') {
        plVar6 = (longlong *)param_2[0x99];
        lVar4 = *plVar6;
        iVar2 = FUN_14233f450(param_1);
        (**(code **)(lVar4 + 0x768))(plVar6,iVar2 != 3);
      }
      plVar6 = param_2;
      if (*(char *)((longlong)param_2 + 0x13c1) == '\0') {
        (**(code **)(*param_2 + 0x448))(param_2,0);
      }
      goto LAB_1412794ea;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1412794ea:
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x6e9) != '\0')) {
    *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) & 0xfffffff8;
  }
  if ((plVar6 != (longlong *)0x0) && (*(char *)(param_1 + 0x6ec) != '\0')) {
    lVar4 = FUN_142cc1670(plVar6);
    if (lVar4 != 0) {
      FUN_142cd0010(lVar4,1,*(undefined8 *)(param_1 + 0x6f0));
    }
  }
  return;
}



// FUNCTION 141279550 FUN_141279550 body=329 status=ok
// SIG undefined FUN_141279550(void)

void FUN_141279550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_140a6c8a0();
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    uVar4 = FUN_142ceeb40(param_1,1);
    lVar5 = FUN_142ceefb0(param_1,uVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_141242150(*(undefined8 *)(param_1 + 0x6d8),lVar5);
      }
    }
  }
  if (param_2 != 0) {
    lVar6 = FUN_1413f82e0();
    lVar5 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(param_2 + 0x13c1) != '\0') {
        FUN_14223c460(param_2,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
        FUN_142cff140(param_1,0,param_2);
      }
      if (*(char *)(param_1 + 0x6e6) != '\0') {
        plVar1 = *(longlong **)(param_2 + 0x4c8);
        lVar5 = *plVar1;
        iVar3 = FUN_14233f450(param_1);
        (**(code **)(lVar5 + 0x770))(plVar1,iVar3 != 3);
      }
    }
    if ((*(char *)(param_1 + 0x6e9) != '\0') || (*(char *)(param_1 + 0x6ea) != '\0')) {
      *(uint *)(param_2 + 0x460) = *(uint *)(param_2 + 0x460) & 0xfffffffa | 2;
    }
  }
  return;
}



// FUNCTION 1412796a0 FUN_1412796a0 body=146 status=ok
// SIG undefined FUN_1412796a0(void)

void FUN_1412796a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140a6c990();
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x6e9) != '\0') {
      *(uint *)(param_2 + 0x460) = *(uint *)(param_2 + 0x460) & 0xfffffff8;
    }
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_1 + 0x6ec) != '\0')) {
      lVar2 = FUN_142cc1670(param_2);
      if (lVar2 != 0) {
        FUN_142cd0010(lVar2,0,*(undefined8 *)(param_1 + 0x6f0));
      }
    }
  }
  return;
}



// FUNCTION 141279740 FUN_141279740 body=906 status=ok
// SIG undefined FUN_141279740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141279740(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 auStack_138 [32];
  undefined4 **local_118;
  float local_110;
  undefined1 local_108;
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  char local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e8 = param_2;
  if (((*(char *)(param_1 + 0x6d0) == '\0') || (*(longlong *)(param_1 + 0x6d8) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0xbda) == '\0')) {
    iVar3 = FUN_142cfa620();
  }
  else {
    iVar3 = -1;
  }
  local_f8 = *(int *)(param_1 + 0x538);
  lVar11 = (longlong)local_f8;
  if ((iVar3 == -1) || (iVar3 == local_f8 + -1)) {
    bVar2 = false;
    if ((*(char *)(param_1 + 0x6f9) != '\0') &&
       (plVar1 = *(longlong **)(param_1 + 0x6d8), plVar1 != (longlong *)0x0)) {
      local_68 = 0xc2aa0000;
      uStack_64 = 0x42aa0000;
      uStack_60 = 0xc2340000;
      uStack_5c = 0x42340000;
      local_58 = 0xc3070000;
      uStack_54 = 0x43070000;
      uStack_50 = 0;
      uStack_4c = 0x43340000;
      (**(code **)(*plVar1 + 0x568))(plVar1,&local_b8,0);
      local_98 = &local_68;
      uStack_90 = 8;
      uStack_80 = CONCAT44(uStack_8c,8);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x168);
      if (lVar9 == 0) {
        local_d8 = DAT_1468b5d98;
        puVar6 = &local_e0;
        local_e0 = _DAT_1468b5d90;
      }
      else {
        puVar6 = (undefined8 *)&local_f4;
        local_f4 = *(undefined4 *)(lVar9 + 0x220);
        local_ec = *(undefined4 *)(lVar9 + 0x228);
        uStack_f0 = *(undefined4 *)(lVar9 + 0x224);
      }
      local_c8 = *puVar6;
      local_c0 = *(undefined4 *)(puVar6 + 1);
      local_118 = &local_88;
      local_108 = 1;
      local_110 = SQRT(((local_a8 - local_b4) * (local_a8 - local_b4) +
                        (local_ac - local_b8) * (local_ac - local_b8) +
                       (local_a4 - local_b0) * (local_a4 - local_b0)) * 0.25);
      local_88 = local_98;
      FUN_142d03dc0(param_1,&local_78,*(longlong *)(param_1 + 0x6d8),&local_c8);
      if (local_6c != '\0') {
        lVar9 = *(longlong *)(param_1 + 0x530);
        lVar11 = lVar11 * 0x68;
        puVar12 = (undefined1 *)(lVar9 + -0x50 + lVar11);
        if (*(char *)(lVar11 + -0x56 + lVar9) == '\0') {
          puVar12 = (undefined1 *)(param_1 + 0x440);
        }
        uVar7 = FUN_142ceca60(param_1,*puVar12);
        lVar8 = FUN_14222b250(uVar7,*(undefined8 *)(puVar12 + 8),0);
        if (lVar8 != 0) {
          *(undefined2 *)(lVar11 + -0x14 + lVar9) = 0x100;
          *(undefined1 *)(lVar11 + -0x20 + lVar9) = 1;
          *(undefined8 *)(lVar11 + -0x10 + lVar9) = local_78;
          *(undefined4 *)(lVar11 + -8 + lVar9) = local_70;
          lVar11 = FUN_142ceefb0(param_1,local_e8);
          if (lVar11 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (lVar11 = *(longlong *)(lVar11 + 0x1430), lVar11 != 0)) {
              lVar9 = FName::GetNames();
              if ((*(int *)(param_1 + 0x648) < 0) ||
                 ((((*(int *)(lVar9 + 0x400) <= *(int *)(param_1 + 0x648) ||
                    (iVar3 = *(int *)(param_1 + 0x648), uVar10 = iVar3 >> 0x1f & 0x3fff,
                    uVar5 = iVar3 + uVar10,
                    *(longlong *)
                     (*(longlong *)(lVar9 + (longlong)((int)uVar5 >> 0xe) * 8) +
                     (longlong)(int)((uVar5 & 0x3fff) - uVar10) * 8) == 0)) || (iVar3 < 0)) ||
                  ((*(int *)(lVar9 + 0x400) <= iVar3 ||
                   (uVar10 = *(int *)(param_1 + 0x648) >> 0x1f & 0x3fff,
                   uVar5 = *(int *)(param_1 + 0x648) + uVar10,
                   *(longlong *)
                    (*(longlong *)(lVar9 + (longlong)((int)uVar5 >> 0xe) * 8) +
                    (longlong)(int)((uVar5 & 0x3fff) - uVar10) * 8) == 0)))))) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                local_118 = (undefined4 **)((ulonglong)local_118 & 0xffffffffffffff00);
                FUN_142fcd410(lVar11,*(undefined8 *)(param_1 + 0x648),0xbf800000,0);
              }
            }
          }
          return local_f8 + -1;
        }
      }
    }
  }
  else {
    bVar2 = true;
  }
  iVar4 = -1;
  if (bVar2) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 141279ad0 FUN_141279ad0 body=350 status=ok
// SIG undefined FUN_141279ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141279ad0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    uVar4 = 0;
    local_108 = 0;
    if (lVar1 != 0) {
      local_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_140609cc0(*(longlong *)(param_2 + 0x188),local_100,0);
      plVar5 = local_100;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      uVar6 = (longlong)(int)local_38 & 0x1fffffffffffffff;
      if (plVar5 + (int)local_38 < plVar5) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar5;
          cVar3 = UActorComponent::ComponentHasTag(lVar2,lVar1);
          if ((cVar3 != '\0') && (lVar2 != 0)) {
            if (*(char *)(param_1 + 0x6a) == '\0') {
              local_118 = *(undefined4 *)(param_1 + 0x6c);
            }
            else {
              local_118 = FUN_1423af630(lVar2);
            }
            local_110 = *(undefined4 *)(param_1 + 0x70);
            FUN_1423b60f0(lVar2,*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68),
                          *(undefined1 *)(param_1 + 0x69));
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141279c30 FUN_141279c30 body=233 status=ok
// SIG undefined FUN_141279c30(void)

void FUN_141279c30(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(), lVar5 != 0)))) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    fVar1 = *(float *)(lVar5 + 0x790);
    if (fVar1 - *(float *)(param_1 + 0x44c) < *(float *)(param_1 + 0x450)) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x3a4);
    fVar3 = *(float *)(param_1 + 0x39c);
    iVar4 = rand();
    *(float *)(param_1 + 0x44c) = fVar1;
    *(float *)(param_1 + 0x450) = (float)iVar4 * 3.051851e-05 * (fVar2 - fVar3) + fVar3;
  }
  FUN_14127a6d0(param_1,param_2 + '\x0f');
  FUN_141280e60(param_1,param_2 + '\x0f');
  return;
}



// FUNCTION 141279d20 FUN_141279d20 body=372 status=ok
// SIG undefined FUN_141279d20(void)

void FUN_141279d20(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res20;
  longlong local_48 [2];
  undefined1 local_38 [48];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x960) <= param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar5 = *(longlong *)(param_1 + 0x958);
    lVar3 = (longlong)param_2;
    plVar1 = *(longlong **)(lVar5 + 0x28 + lVar3 * 0x30);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x310))(plVar1,0);
      FUN_14127a870(*(undefined8 *)(lVar5 + 0x28 + lVar3 * 0x30),
                    *(undefined8 *)(lVar5 + 0x10 + lVar3 * 0x30),param_3);
      lVar5 = *(longlong *)(param_1 + 0x958);
    }
    if (*(longlong *)(lVar5 + 0x20 + lVar3 * 0x30) != 0) {
      uVar4 = FUN_14309ed70(param_1);
      lVar5 = FUN_14307d810(uVar4,*(undefined1 *)(param_1 + 0x180));
      if (lVar5 != 0) {
        lVar6 = FUN_14149a420();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (FUN_140a09920(lVar5,&local_res20,1), local_res20 != 0)) {
          local_48[0] = 0;
          local_48[1] = 0;
          FUN_1405a2d20(local_res20,local_38,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x20 + lVar3 * 0x30),0,0,
                        local_48);
          FUN_140591060(local_38);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_res20 != 0) {
            FUN_1405a53f0();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141279ea0 FUN_141279ea0 body=47 status=ok
// SIG undefined FUN_141279ea0(void)

void FUN_141279ea0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x960))) {
    lVar1 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x958);
    FUN_14127a870(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 141279ed0 FUN_141279ed0 body=124 status=ok
// SIG undefined FUN_141279ed0(void)

void FUN_141279ed0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_141272fc0();
  param_1 = param_1 + 0x10;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    if ((((*(longlong *)(param_3 + 0x80) == 0) ||
         ((*(uint *)(*(longlong *)(param_3 + 0x80) + 0x14c) >> 1 & 1) != 0)) &&
        (lVar2 = FWeakObjectPtr::Get(param_1), (*(byte *)(lVar2 + 0xba) & 4) != 0)) &&
       (lVar2 = FWeakObjectPtr::Get(param_1), (*(byte *)(lVar2 + 0x718) & 0x10) == 0)) {
      return;
    }
    uVar3 = FWeakObjectPtr::Get(param_1);
    FUN_1425fcab0(uVar3,0);
  }
  return;
}



// FUNCTION 141279f70 FUN_141279f70 body=429 status=ok
// SIG undefined FUN_141279f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141279f70(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118 [24];
  undefined8 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_141270040(param_2,param_1 + 0x50,local_118);
  uVar6 = local_50 & 0xffffffff;
  puVar1 = local_58;
  if (0 < (int)local_50) {
    puVar4 = *(undefined8 **)(param_1 + 0x68);
    puVar8 = puVar4 + (longlong)*(int *)(param_1 + 0x70) * 2;
    for (; puVar4 != puVar8; puVar4 = puVar4 + 2) {
      uVar7 = 0;
      switch(*(undefined1 *)(puVar4 + 1)) {
      case 0:
      case 1:
        uVar7 = 1;
        break;
      case 2:
      case 5:
        goto switchD_14127a037_caseD_2;
      case 3:
      case 4:
        uVar7 = 0;
      }
      puVar2 = local_118;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2 = puVar1;
      }
      uVar3 = (longlong)(int)uVar6 & 0x1fffffffffffffff;
      if (puVar2 + (int)uVar6 < puVar2) {
        uVar3 = 0;
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x958))((longlong *)*puVar2,*puVar4,uVar7);
          uVar5 = uVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar5 != uVar3);
        uVar6 = local_50 & 0xffffffff;
        puVar1 = local_58;
      }
switchD_14127a037_caseD_2:
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 14127a140 FUN_14127a140 body=386 status=ok
// SIG undefined FUN_14127a140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127a140(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_78;
  float local_70;
  float local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_78 = (longlong *)0x0;
    lVar1 = FUN_14127cb40(param_1,*(undefined8 *)(param_2 + 0x118),&local_78);
    if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x168) != (longlong *)0x0)) {
      plVar2 = *(longlong **)(lVar1 + 0x168);
      if (local_78 != (longlong *)0x0) {
        plVar2 = local_78;
      }
      (**(code **)(*plVar2 + 0x420))(plVar2,&local_58,*(undefined8 *)(param_1 + 0x50),0);
      local_38 = *(float *)(param_1 + 0x60) * local_38;
      fStack_34 = *(float *)(param_1 + 100) * fStack_34;
      fStack_30 = *(float *)(param_1 + 0x68) * fStack_30;
      fVar3 = fStack_30 * fStack_54 - fStack_34 * fStack_50;
      fVar4 = local_38 * fStack_50 - fStack_30 * local_58;
      fVar5 = fStack_34 * local_58 - local_38 * fStack_54;
      fVar3 = fVar3 + fVar3;
      fVar4 = fVar4 + fVar4;
      fVar5 = fVar5 + fVar5;
      local_70 = (fVar4 * local_58 - fVar3 * fStack_54) + fStack_4c * fVar5 + fStack_30 + fStack_40;
      local_88 = *(undefined8 *)(param_1 + 0x90);
      local_78 = (longlong *)
                 CONCAT44((fVar3 * fStack_50 - fVar5 * local_58) + fStack_4c * fVar4 + fStack_34 +
                          fStack_44,
                          (fVar5 * fStack_54 - fVar4 * fStack_50) + fStack_4c * fVar3 + local_38 +
                          local_48);
      local_60 = local_70;
      FUN_142d41c10(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88),&local_78,
                    *(undefined8 *)(param_2 + 0x118));
    }
  }
  return;
}



// FUNCTION 14127a2d0 FUN_14127a2d0 body=71 status=ok
// SIG undefined FUN_14127a2d0(void)

void FUN_14127a2d0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_2 + 0x188) != 0)) {
    FUN_141236610(*(longlong *)(param_2 + 0x188),*(longlong *)(param_1 + 0x80),
                  *(undefined4 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x8c),
                  *(undefined1 *)(param_1 + 0x8d));
  }
  return;
}



// FUNCTION 14127a320 FUN_14127a320 body=581 status=ok
// SIG undefined FUN_14127a320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127a320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((*(longlong *)(param_1 + 0x80) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0xd8)))) &&
     (*(longlong *)(param_2 + 0x118) != 0)) {
    local_a8 = (longlong *)0x0;
    lVar1 = FUN_14127cb40(ABS(*(float *)(param_1 + 0xd8)),*(longlong *)(param_2 + 0x118),&local_a8);
    if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x168) != (longlong *)0x0)) {
      plVar2 = *(longlong **)(lVar1 + 0x168);
      if (local_a8 != (longlong *)0x0) {
        plVar2 = local_a8;
      }
      (**(code **)(*plVar2 + 0x420))(plVar2,&local_68,*(undefined8 *)(param_1 + 0x50),0);
      local_48 = *(float *)(param_1 + 0x60) * local_48;
      fStack_44 = *(float *)(param_1 + 100) * fStack_44;
      fStack_40 = *(float *)(param_1 + 0x68) * fStack_40;
      local_b0 = 0;
      local_a8 = (longlong *)0x0;
      fVar3 = fStack_40 * fStack_64 - fStack_44 * fStack_60;
      fVar4 = local_48 * fStack_60 - fStack_40 * local_68;
      fVar5 = fStack_44 * local_68 - local_48 * fStack_64;
      fVar3 = fVar3 + fVar3;
      fVar4 = fVar4 + fVar4;
      fVar5 = fVar5 + fVar5;
      local_a0 = 0xbf800000;
      fVar6 = (fVar5 * fStack_64 - fVar4 * fStack_60) + fStack_5c * fVar3 + local_48 + local_58;
      fVar7 = (fVar3 * fStack_60 - fVar5 * local_68) + fStack_5c * fVar4 + fStack_44 + fStack_54;
      fVar4 = (fVar4 * local_68 - fVar3 * fStack_64) + fStack_5c * fVar5 + fStack_40 + fStack_50;
      local_b8 = param_1 + 0x50;
      FUN_142da9940(param_1 + 0x88,&local_98,&local_a8,lVar1);
      fVar3 = *(float *)(param_1 + 0xd8);
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_88 = local_98 * fVar3 + fVar6;
      local_b8 = CONCAT44(local_b8._4_4_,(uint)*(byte *)(param_1 + 0xdc));
      local_84 = local_94 * fVar3 + fVar7;
      local_80 = local_90 * fVar3 + fVar4;
      local_78 = fVar6;
      local_74 = fVar7;
      local_70 = fVar4;
      FUN_142d6b8c0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x118),&local_78,
                    &local_88);
    }
  }
  return;
}



// FUNCTION 14127a5a0 FUN_14127a5a0 body=296 status=ok
// SIG undefined FUN_14127a5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127a5a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    uVar4 = 0;
    local_108 = 0;
    if (lVar1 != 0) {
      local_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_140609cc0(*(longlong *)(param_2 + 0x188),local_100,0);
      plVar5 = local_100;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      uVar6 = (longlong)(int)local_38 & 0x1fffffffffffffff;
      if (plVar5 + (int)local_38 < plVar5) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar5;
          cVar3 = UActorComponent::ComponentHasTag(lVar2,lVar1);
          if ((cVar3 != '\0') && (lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0xb10) = *(undefined4 *)(param_1 + 0x58);
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14127a6d0 FUN_14127a6d0 body=208 status=ok
// SIG undefined FUN_14127a6d0(void)

void FUN_14127a6d0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x780))();
  uVar5 = UGameplayStatics::GetGameInstance(param_1);
  cVar3 = FUN_142d86da0(uVar5);
  plVar6 = *(longlong **)(param_1 + 0x438);
  plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x440) * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    lVar1 = *plVar6;
    if ((((*(char *)(lVar1 + 0x38) == param_2) &&
         ((*(char *)(lVar1 + 0x39) == '\0' || (cVar2 != '\0')))) &&
        ((*(char *)(lVar1 + 0x3a) == '\0' || (cVar3 == '\0')))) &&
       ((*(longlong *)(lVar1 + 0x40) == 0 ||
        (cVar4 = FUN_142c48f60(*(longlong *)(lVar1 + 0x40),*(undefined8 *)(param_1 + 0x188),0),
        cVar4 != '\0')))) {
      (**(code **)(*(longlong *)*plVar6 + 0x280))((longlong *)*plVar6,param_1);
    }
  }
  return;
}



// FUNCTION 14127a7a0 FUN_14127a7a0 body=201 status=ok
// SIG undefined FUN_14127a7a0(void)

void FUN_14127a7a0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_30 = 0x3f800000;
    local_20 = DAT_1468b5da8;
    local_10 = *(undefined4 *)(param_3 + 1);
    local_38 = 0x3f8000003f800000;
    local_28 = DAT_1468b5da0;
    local_18 = *param_3;
    uVar2 = (**(code **)(*param_1 + 0x148))();
    FUN_142d928b0(uVar2,lVar1,&local_18,&local_28,&local_38,1,0);
  }
  if (param_2[1] != 0) {
    FUN_143057350(param_1);
  }
  return;
}



// FUNCTION 14127a870 FUN_14127a870 body=786 status=ok
// SIG undefined FUN_14127a870(void)

void FUN_14127a870(longlong *param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint in_stack_fffffffffffffdb8;
  undefined1 local_218 [8];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  void *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined4 local_1e4;
  byte local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  byte local_110;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar6 = FUN_142e20fc0();
    lVar8 = param_2;
    do {
      if (lVar8 == lVar6) {
        uVar7 = FUN_142e27720();
        lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar7);
        if (lVar8 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar7 = FUN_142e27720();
          in_stack_fffffffffffffdb8 = 0;
          lVar8 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
          FUN_14222b990(param_1,lVar8);
          if (lVar8 == 0) {
            return;
          }
        }
        FUN_142c62180(local_218);
        local_1e7 = 2;
        if (0.0 < param_3) {
          FUN_142c62590(&local_70,&DAT_146b2fcd8,param_3);
          iVar5 = local_1f0;
          lVar6 = (longlong)local_1f0;
          local_1f0 = local_1f0 + 1;
          if (local_1ec < local_1f0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_1f8,iVar5);
          }
          lVar6 = lVar6 * 0x38;
          *(undefined8 *)(lVar6 + (longlong)local_1f8) = local_70;
          ((undefined8 *)(lVar6 + (longlong)local_1f8))[1] = uStack_68;
          puVar3 = (undefined8 *)(lVar6 + 0x10 + (longlong)local_1f8);
          *puVar3 = local_60;
          puVar3[1] = uStack_58;
          puVar4 = (undefined4 *)(lVar6 + 0x20 + (longlong)local_1f8);
          *puVar4 = local_50;
          puVar4[1] = uStack_4c;
          puVar4[2] = uStack_48;
          puVar4[3] = uStack_44;
          *(undefined8 *)(lVar6 + 0x30 + (longlong)local_1f8) = local_40;
        }
        lVar6 = (longlong)local_1f0;
        local_148 = &PTR_FUN_143ff6170;
        local_140 = local_210;
        local_138 = local_208;
        local_130 = local_200;
        local_128 = (void *)0x0;
        local_120 = local_1f0;
        if (local_1f0 == 0) {
          local_11c = 0;
        }
        else {
          TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_128,local_1f0,0);
          _guard_xfg_dispatch_icall_nop(local_128,local_1f8,lVar6 * 0x38);
        }
        local_118 = local_1e8;
        local_117 = local_1e7;
        local_114 = local_1e4;
        local_110 = local_110 ^ (local_110 ^ local_1e0) & 7;
        FUN_1405e0d90(local_108,local_1d8);
        FUN_1405e0d90(local_f0,local_1c0);
        FUN_1405e0d90(local_d8,local_1a8);
        FUN_1405e0d90(local_c0,local_190);
        local_a8 = local_178;
        local_a4 = local_174;
        local_a0 = local_170;
        local_98 = local_168;
        local_90 = local_160;
        local_9c = local_16c;
        local_88 = local_158;
        if (local_158 != 0) {
          LOCK();
          *(int *)(local_158 + 0xc) = *(int *)(local_158 + 0xc) + 1;
          UNLOCK();
        }
        FUN_142c7bb40(lVar8,local_80,param_2,&local_148,in_stack_fffffffffffffdb8 & 0xffffff00);
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_78 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        FUN_142c63c50(local_218);
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14127ab90 FUN_14127ab90 body=1346 status=ok
// SIG undefined FUN_14127ab90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127ab90(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined1 *local_250;
  undefined *local_248;
  undefined1 local_238 [8];
  undefined8 local_230;
  float local_228;
  int local_220 [2];
  byte local_218 [4];
  undefined4 local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_d8 [20];
  undefined1 local_c4;
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_20c = *(undefined4 *)(param_4 + 0xc);
  local_208 = *(undefined4 *)(param_4 + 0x10);
  local_218[0] = local_218[0] ^ (*param_4 ^ local_218[0]) & 3;
  local_204 = *(undefined8 *)(param_4 + 0x14);
  local_214 = *(undefined4 *)(param_4 + 4);
  local_1f8 = *(undefined8 *)(param_4 + 0x20);
  local_210 = local_210 ^ (*(uint *)(param_4 + 8) ^ local_210) & 1;
  local_1fc = *(undefined4 *)(param_4 + 0x1c);
  local_1f0 = *(undefined4 *)(param_4 + 0x28);
  local_1e4 = *(undefined4 *)(param_4 + 0x34);
  local_1d8 = *(undefined4 *)(param_4 + 0x40);
  local_1cc = *(undefined4 *)(param_4 + 0x4c);
  local_1c0 = *(undefined4 *)(param_4 + 0x58);
  local_1b8 = *(undefined4 *)(param_4 + 0x60);
  local_1b4 = *(undefined4 *)(param_4 + 100);
  local_1b0 = *(undefined4 *)(param_4 + 0x68);
  local_1ac = *(undefined4 *)(param_4 + 0x6c);
  local_1ec = *(undefined8 *)(param_4 + 0x2c);
  local_1a8 = *(undefined4 *)(param_4 + 0x70);
  local_1e0 = *(undefined8 *)(param_4 + 0x38);
  local_1a4 = *(undefined4 *)(param_4 + 0x74);
  local_1d4 = *(undefined8 *)(param_4 + 0x44);
  local_1a0 = *(undefined4 *)(param_4 + 0x78);
  local_198 = *(undefined8 *)(param_4 + 0x80);
  local_1c8 = *(undefined8 *)(param_4 + 0x50);
  local_190 = *(undefined8 *)(param_4 + 0x88);
  local_1bc = *(undefined4 *)(param_4 + 0x5c);
  if ((param_3 == 0) || ((*(byte *)(param_3 + 0x91) & 0x40) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_142d29780(param_3);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x868) != 0)) {
      FWeakObjectPtr::operator=(&local_1b4);
    }
  }
  cVar1 = FUN_14044aea0(&local_1b4,0);
  if ((cVar1 != '\0') ||
     (cVar1 = FUN_14058c1e0(&local_1b4,*(undefined8 *)(DAT_146b17150 + 0x6c8)), cVar1 != '\0')) {
    cVar1 = FWeakObjectPtr::IsValid(&local_1a4);
    if (cVar1 == '\0') {
      local_228 = *(float *)(param_4 + 0x40) * 50.0 + *(float *)(param_4 + 0x28);
      local_230 = (ulonglong *)
                  CONCAT44(*(float *)(param_4 + 0x3c) * 50.0 + *(float *)(param_4 + 0x24),
                           *(float *)(param_4 + 0x38) * 50.0 + *(float *)(param_4 + 0x20));
    }
    else {
      lVar3 = FWeakObjectPtr::Get(&local_1a4);
      local_230 = *(ulonglong **)(lVar3 + 0x220);
      local_228 = *(float *)(lVar3 + 0x228);
    }
    local_170 = *(undefined4 *)(param_4 + 0x28);
    local_178 = *(undefined8 *)(param_4 + 0x20);
    local_180 = local_228;
    local_188 = local_230;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468779d0) &&
       (_Init_thread_header(&DAT_1468779d0), DAT_1468779d0 == -1)) {
      FName::FName(&DAT_1468779c8,L"VehicleImpactEffectTrace",1);
      _Init_thread_footer(&DAT_1468779d0);
    }
    local_258 = param_2;
    FUN_1422ffb20(local_d8,DAT_1468779c8,local_238,1);
    local_c4 = 1;
    FCollisionQueryParams::AddIgnoredActor(local_d8);
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_15c = 0x3f800000;
    uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
    local_248 = &DAT_146aefe68;
    local_250 = local_d8;
    local_258 = (longlong *)CONCAT44(local_258._4_4_,0xf);
    cVar1 = UWorld::LineTraceSingleByChannel(uVar4,local_168,&local_178,&local_188);
    if ((cVar1 != '\0') && (cVar1 = FUN_14044af00(&local_104,0), cVar1 != '\0')) {
      local_1b4 = local_104;
      local_1b0 = local_100;
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  cVar1 = FUN_14044aea0(&local_1b4,0);
  if ((((cVar1 != '\0') && (lVar2 != 0)) && (0 < *(int *)(lVar2 + 0x680))) &&
     ((*(longlong **)(lVar2 + 0x678) != (longlong *)0x0 &&
      (lVar2 = **(longlong **)(lVar2 + 0x678), lVar2 != 0)))) {
    FWeakObjectPtr::operator=(&local_1b4,*(undefined8 *)(lVar2 + 0x68));
  }
  puVar10 = *(ulonglong **)(param_1 + 0x18);
  local_230 = puVar10 + (longlong)*(int *)(param_1 + 0x20) * 0x12;
  if (puVar10 != local_230) {
    puVar8 = puVar10 + 0x11;
    do {
      if ((param_3 == 0) ||
         ((((int)puVar8[-2] == 0 || (lVar2 = FUN_141258ea0(puVar8 + -3,param_3), lVar2 != 0)) &&
          (((int)*puVar8 == 0 || (lVar2 = FUN_141258ea0(puVar8 + -1,param_3), lVar2 == 0)))))) {
        uVar9 = 0;
        puVar7 = (undefined8 *)*puVar10;
        uVar6 = (longlong)(int)puVar8[-0x10] & 0x1fffffffffffffff;
        if (puVar7 + (int)puVar8[-0x10] < puVar7) {
          uVar6 = uVar9;
        }
        if (uVar6 != 0) {
          do {
            FUN_142d68f70(*puVar7,param_2,local_218,0);
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 != uVar6);
        }
        uVar4 = FWeakObjectPtr::Get(&local_1b4);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(puVar8 + -0xe,local_220,uVar4);
        if (local_220[0] == -1) {
          lVar2 = 0;
        }
        else {
          lVar2 = puVar8[-0xe] + (longlong)local_220[0] * 0x18;
        }
        puVar5 = (ulonglong *)(lVar2 + 8);
        if (lVar2 == 0) {
          puVar5 = (ulonglong *)0x0;
        }
        if (puVar5 == (ulonglong *)0x0) {
          uVar6 = puVar8[-0xf];
        }
        else {
          uVar6 = *puVar5;
        }
        if (uVar6 != 0) {
          local_258 = (longlong *)
                      CONCAT71(local_258._1_7_,*(undefined1 *)((longlong)puVar8 + -0x1c));
          FUN_141236610(param_2,uVar6,(int)puVar8[-4]);
        }
      }
      puVar10 = puVar10 + 0x12;
      puVar8 = puVar8 + 0x12;
    } while (puVar10 != local_230);
  }
  return;
}



// FUNCTION 14127b0e0 FUN_14127b0e0 body=1596 status=ok
// SIG undefined FUN_14127b0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14127b0e0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
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
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong **local_220;
  longlong *local_218;
  float local_210;
  longlong *local_208;
  float local_200;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  longlong local_1c8;
  float local_1c0;
  float local_1b8;
  longlong local_1b0;
  longlong *local_1a8 [2];
  undefined1 local_198 [32];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  longlong local_148 [24];
  ulonglong local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  if (param_2 != 0) {
    local_78 = DAT_1468387a8 ^ (ulonglong)auStack_248;
    if (param_3 != (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      local_1b8 = 0.0;
      local_1fc = 0;
      local_1b0 = param_2;
      if (*(char *)(param_4 + 0x80) == '\0') {
        param_1 = param_1 + 0x10;
        local_218 = param_3;
        local_1c8 = param_1;
        cVar2 = FWeakObjectPtr::IsValid(param_1);
        if (cVar2 == '\0') {
          fVar14 = 0.0;
          local_7c = 0;
          local_88 = 0;
          local_80 = 0;
          if (param_3 != (longlong *)0x0) {
            FUN_1409f1180(param_3,local_148,0);
          }
          local_1e8 = (longlong *)0x0;
          plVar9 = local_148;
          if (local_88 != 0) {
            plVar9 = plVar8;
          }
          fStack_1dc = 0.0;
          plVar9 = (longlong *)((ulonglong)plVar9 | local_88);
          local_1a8[0] = (longlong *)0x0;
          plVar6 = (longlong *)((longlong)local_80 & 0x1fffffffffffffff);
          if (plVar9 + local_80 < plVar9) {
            plVar6 = plVar8;
          }
          plVar11 = plVar8;
          if (plVar6 != (longlong *)0x0) {
            do {
              plVar10 = local_1a8[0];
              cVar2 = UActorComponent::ComponentHasTag(*plVar9,*(undefined8 *)(param_4 + 0xa8));
              if (cVar2 != '\0') {
                fStack_1e0 = (float)((int)fVar14 + 1);
                if ((int)plVar8 < (int)fStack_1e0) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1e8,fVar14);
                  plVar8 = (longlong *)(ulonglong)(uint)fStack_1dc;
                  plVar11 = local_1e8;
                }
                plVar11[(int)fVar14] = *plVar9;
                plVar10 = local_1a8[0];
                fVar14 = fStack_1e0;
              }
              local_1a8[0] = (longlong *)((longlong)plVar10 + 1);
              plVar9 = plVar9 + 1;
              param_3 = local_218;
            } while (local_1a8[0] != plVar6);
          }
          param_2 = local_1b0;
          param_1 = local_1c8;
          if (local_88 != 0) {
            FMemory::Free(local_88);
            param_2 = local_1b0;
            param_1 = local_1c8;
          }
        }
        else {
          local_1c8 = FWeakObjectPtr::Get(param_1);
          local_1e8 = (longlong *)0x0;
          fStack_1e0 = 1.4013e-45;
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_1e8,1,0);
          *local_1e8 = local_1c8;
          plVar11 = local_1e8;
          fVar14 = fStack_1e0;
        }
        lVar4 = local_1b0;
        plVar8 = (longlong *)0x0;
        if ((int)fVar14 < 1) {
          local_218 = (longlong *)0x0;
          fVar14 = local_1b8;
          if (*(longlong *)(param_4 + 0xa8) == 0) {
            local_218 = (longlong *)0x0;
            uVar3 = FUN_14127cb40(param_4,param_3,&local_218);
            local_228 = *(undefined8 *)(param_4 + 0x50);
            local_220 = (longlong **)CONCAT44(local_220._4_4_,*(undefined4 *)(param_4 + 0xb0));
            FUN_1405a17b0(&local_1e8,param_2,uVar3,local_218);
            uVar3 = FUN_14059ae60(&local_1e8,0);
            FWeakObjectPtr::operator=(param_1,uVar3);
            cVar2 = FWeakObjectPtr::IsValid(param_1);
            if (cVar2 != '\0') {
              local_1f8 = *(longlong **)(param_4 + 0x6c);
              local_1f0 = *(undefined4 *)(param_4 + 0x74);
              local_218 = *(longlong **)(param_4 + 0x60);
              local_210 = *(float *)(param_4 + 0x68);
              uVar3 = FWeakObjectPtr::Get(param_1);
              local_220 = (longlong **)((ulonglong)local_220 & 0xffffffffffffff00);
              local_228 = 0;
              FUN_1423982b0(uVar3,&local_218,&local_1f8,0);
            }
            lVar4 = FWeakObjectPtr::Get(param_1);
            local_200 = 1.4013e-45;
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_208,0);
            plVar8 = local_208;
            *local_208 = lVar4;
            FUN_140591060(&local_1e8);
            fVar14 = local_200;
          }
        }
        else {
          local_1f8 = (longlong *)((longlong)(int)fVar14 * 8);
          plVar9 = (longlong *)
                   ((ulonglong)((longlong)local_1f8 + (longlong)plVar11 + (7 - (longlong)plVar11))
                   >> 3);
          if ((longlong *)((longlong)local_1f8 + (longlong)plVar11) < plVar11) {
            plVar9 = plVar8;
          }
          plVar6 = plVar11;
          if (plVar9 != (longlong *)0x0) {
            do {
              FUN_1405a3150(*plVar6,local_198,lVar4,0);
              FUN_140591060(local_198);
              plVar8 = (longlong *)((longlong)plVar8 + 1);
              param_3 = local_218;
              plVar6 = plVar6 + 1;
            } while (plVar8 != plVar9);
          }
          local_200 = fVar14;
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_208,fVar14,0)
          ;
          plVar8 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,plVar11,(size_t)local_1f8);
          fVar14 = local_200;
        }
        if (plVar11 != (longlong *)0x0) {
          FMemory::Free(plVar11);
        }
      }
      else {
        local_218 = (longlong *)0x0;
        lVar4 = FUN_14127cb40(param_4,param_3,&local_218);
        plVar8 = local_218;
        if (local_218 == (longlong *)0x0) {
          plVar8 = *(longlong **)(lVar4 + 0x168);
        }
        (**(code **)(*plVar8 + 0x420))(plVar8,&local_178,*(undefined8 *)(param_4 + 0x50),0);
        fVar19 = *(float *)(param_4 + 0x60) * local_158;
        fVar20 = *(float *)(param_4 + 100) * fStack_154;
        fStack_150 = *(float *)(param_4 + 0x68) * fStack_150;
        fVar14 = fStack_150 * fStack_174 - fVar20 * fStack_170;
        fVar15 = fVar19 * fStack_170 - fStack_150 * local_178;
        fVar16 = fVar20 * local_178 - fVar19 * fStack_174;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fStack_16c * fVar14;
        fVar18 = fStack_16c * fVar15;
        fVar21 = fVar16 * fStack_174;
        fVar22 = fVar14 * fStack_170;
        fVar12 = fVar15 * fStack_170;
        fVar13 = fVar16 * local_178;
        local_1c0 = (fVar15 * local_178 - fVar14 * fStack_174) + fStack_16c * fVar16 + fStack_150 +
                    fStack_160;
        pfVar5 = (float *)FRotator::Quaternion(param_4 + 0x6c,&local_1f8);
        fVar14 = *pfVar5;
        fVar15 = pfVar5[1];
        fVar16 = pfVar5[2];
        fVar1 = pfVar5[3];
        fStack_1e0 = fVar15 * local_178 * fRam00000001468774d8 + fStack_16c * fVar16 +
                     fVar14 * fStack_174 * fRam00000001468774c8 +
                     fVar1 * fStack_170 * fRam00000001468774b8;
        fStack_1dc = fVar14 * local_178 * fRam00000001468774dc + fStack_16c * fVar1 +
                     fVar15 * fStack_174 * fRam00000001468774cc +
                     fVar16 * fStack_170 * fRam00000001468774bc;
        local_1e8 = (longlong *)
                    CONCAT44(fVar16 * local_178 * fRam00000001468774d4 + fStack_16c * fVar15 +
                             fVar1 * fStack_174 * fRam00000001468774c4 +
                             fVar14 * fStack_170 * fRam00000001468774b4,
                             fVar1 * local_178 * _DAT_1468774d0 + fStack_16c * fVar14 +
                             fVar16 * fStack_174 * _DAT_1468774c0 +
                             fVar15 * fStack_170 * _DAT_1468774b0);
        plVar8 = (longlong *)FQuat::Rotator(&local_1e8,local_1a8);
        local_1f8 = (longlong *)*plVar8;
        local_1f0 = (undefined4)plVar8[1];
        local_218 = (longlong *)
                    CONCAT44((fVar22 - fVar13) + fVar18 + fVar20 + fStack_164,
                             (fVar21 - fVar12) + fVar17 + fVar19 + local_168);
        local_210 = local_1c0;
        local_220 = &local_1f8;
        local_228 = CONCAT44(local_228._4_4_,*(undefined4 *)(param_4 + 0xb0));
        FUN_1405a1e30(local_198,param_3,param_2,&local_218);
        lVar4 = FUN_14059ae60(local_198);
        local_200 = 1.4013e-45;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_208,0);
        plVar8 = local_208;
        *local_208 = lVar4;
        FUN_140591060(local_198);
        fVar14 = local_200;
      }
      if ((0 < (int)fVar14) &&
         (plVar9 = plVar8 + (int)fVar14, plVar6 = plVar8, local_1f8 = plVar9, plVar8 != plVar9)) {
        do {
          lVar4 = *plVar6;
          if (lVar4 != 0) {
            plVar11 = *(longlong **)(param_4 + 0x98);
            plVar10 = plVar11 + (longlong)*(int *)(param_4 + 0xa0) * 2;
            for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
              lVar7 = plVar11[1];
              if (lVar7 != 0) {
                if (*plVar11 != 0) {
                  FUN_142c48f60(*plVar11,param_3,0);
                  lVar7 = plVar11[1];
                }
                FUN_1405aaf50(lVar4,lVar7);
              }
              plVar9 = local_1f8;
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar9);
      }
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
    }
  }
  return;
}



// FUNCTION 14127b720 FUN_14127b720 body=57 status=ok
// SIG undefined FUN_14127b720(void)

void FUN_14127b720(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
    uVar1 = FUN_14126cf90(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 14127b760 FUN_14127b760 body=91 status=ok
// SIG undefined FUN_14127b760(void)

void FUN_14127b760(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142d88890();
  if ((*(longlong *)(param_1 + 0x260) == 0) && (*(longlong *)(param_1 + 0x250) != 0)) {
    uVar1 = FUN_14126cc00(*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x260) = uVar1;
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  return;
}



// FUNCTION 14127b7c0 FUN_14127b7c0 body=341 status=ok
// SIG undefined FUN_14127b7c0(void)

void FUN_14127b7c0(longlong param_1)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50 [3];
  undefined1 local_38 [16];
  
  UObject::PostLoad();
  FUN_14125e510(local_res8,param_1 + 0x30);
  FUN_14125e510(local_res8,param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar6 = (longlong)*(int *)(param_1 + 0x58) * 0x40 + lVar3;
  if (lVar3 != lVar6) {
    puVar1 = (undefined4 *)(lVar3 + 0x1c);
    do {
      iVar2 = puVar1[-3];
      _Src = *(void **)(puVar1 + -5);
      local_78 = (void *)0x0;
      uVar4 = 0;
      pvVar5 = (void *)0x0;
      if (iVar2 != 0) {
        local_70._0_4_ = iVar2;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar2,0);
        pvVar5 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar2 * 2);
        iVar2 = (int)local_70;
        uVar4 = local_70._4_4_;
      }
      local_58 = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_68 = pvVar5;
      local_60 = iVar2;
      local_5c = uVar4;
      FUN_1417978e0(&local_58,&local_68);
      local_50[2] = local_58;
      puVar1[-1] = 0xffffffff;
      *puVar1 = 0;
      FString::FString(local_38,local_50);
      FSoftObjectPath::operator=(puVar1 + 3,local_50 + 2);
      puVar1[1] = 0;
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      lVar3 = lVar3 + 0x40;
      puVar1 = puVar1 + 0x10;
    } while (lVar3 != lVar6);
  }
  return;
}



// FUNCTION 14127b920 FUN_14127b920 body=351 status=ok
// SIG undefined FUN_14127b920(void)

void FUN_14127b920(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_142349c80();
  if (0 < *(int *)(param_1 + 0x230)) {
    plVar1 = (longlong *)(param_1 + 0x248);
    iVar3 = *(int *)(param_1 + 0x250);
    *(int *)(param_1 + 0x250) = iVar3 + 1;
    if (*(int *)(param_1 + 0x254) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar2 = (undefined8 *)(param_1 + 0x228);
    puVar7 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x20);
    if (puVar7 != puVar2) {
      iVar4 = *(int *)(param_1 + 0x230);
      pvVar5 = (void *)*puVar2;
      *(int *)(puVar7 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)puVar7 + 0xc) == 0)) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar7,iVar4);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar5,(longlong)iVar4 << 3);
      }
    }
    puVar7 = (undefined8 *)(param_1 + 0x238);
    puVar6 = (undefined8 *)(*plVar1 + 0x10 + (longlong)iVar3 * 0x20);
    if (puVar6 != puVar7) {
      iVar3 = *(int *)(param_1 + 0x240);
      pvVar5 = (void *)*puVar7;
      *(int *)(puVar6 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar5,(longlong)iVar3 << 2);
      }
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x234)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2,0);
    }
    *(undefined4 *)(param_1 + 0x240) = 0;
    if ((*(int *)(param_1 + 0x244) < 0) && (*(int *)(param_1 + 0x244) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(puVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14127ba80 FUN_14127ba80 body=413 status=ok
// SIG undefined FUN_14127ba80(void)

void FUN_14127ba80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  FUN_142349c80();
  plVar9 = *(longlong **)(param_1 + 0x378);
  plVar1 = plVar9 + (longlong)*(int *)(param_1 + 0x380) * 5;
  if (plVar9 != plVar1) {
    plVar6 = plVar9 + 4;
    do {
      iVar4 = (int)plVar6[-3];
      if (iVar4 != 0) {
        if (*(int *)((longlong)plVar6 + 4) < iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo(plVar6 + -1,iVar4);
          iVar4 = (int)plVar6[-3];
        }
        puVar8 = (undefined8 *)*plVar9;
        puVar2 = puVar8 + iVar4;
        for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
          iVar4 = (int)*plVar6;
          uVar3 = *puVar8;
          *(int *)plVar6 = iVar4 + 1;
          if (*(int *)((longlong)plVar6 + 4) < iVar4 + 1) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                      (plVar6 + -1,iVar4);
          }
          puVar5 = (undefined8 *)((longlong)iVar4 * 0x90 + plVar6[-1]);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          *(undefined4 *)(puVar5 + 9) = 0xffffffff;
          *(undefined4 *)((longlong)puVar5 + 0x4c) = 0;
          puVar5[0xb] = 0;
          *(undefined4 *)(puVar5 + 0xc) = 0;
          *(undefined4 *)(puVar5 + 0xd) = 0x3f800000;
          *(undefined1 *)((longlong)puVar5 + 0x6c) = 1;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
          lVar7 = (longlong)(int)*plVar6 * 0x90 + plVar6[-1];
          iVar4 = *(int *)(lVar7 + -0x88);
          *(int *)(lVar7 + -0x88) = iVar4 + 1;
          if (*(int *)(lVar7 + -0x84) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + -0x90,iVar4);
          }
          *(undefined8 *)(*(longlong *)(lVar7 + -0x90) + (longlong)iVar4 * 8) = uVar3;
        }
        *(int *)(plVar6 + -3) = 0;
        if (*(int *)((longlong)plVar6 + -0x14) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9,0);
        }
      }
      plVar9 = plVar9 + 5;
      plVar6 = plVar6 + 5;
    } while (plVar9 != plVar1);
  }
  return;
}



// FUNCTION 14127bc20 FUN_14127bc20 body=101 status=ok
// SIG undefined FUN_14127bc20(void)

void FUN_14127bc20(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0)) {
    uVar1 = FUN_14126cf90(*(undefined8 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x58) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
    uVar1 = FUN_14126cf90(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 14127bc90 FUN_14127bc90 body=312 status=ok
// SIG undefined FUN_14127bc90(void)

void FUN_14127bc90(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  UObject::PostLoad();
  FUN_141285090();
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar6 < iVar1) {
      *(int *)(param_1 + 0x78) = iVar1;
      if (*(int *)(param_1 + 0x7c) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 4),0,
                 (longlong)(iVar1 - iVar6) << 2);
    }
    else if ((iVar1 < iVar6) && (iVar1 != iVar6)) {
      *(int *)(param_1 + 0x78) = iVar1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        iVar4 = 0;
        lVar3 = 0;
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x38);
        if (0 < iVar1) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x30);
          do {
            if (*plVar2 == *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x50))) goto LAB_14127bd58;
            iVar4 = iVar4 + 1;
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 5;
          } while (lVar3 < iVar1);
        }
        iVar4 = -1;
LAB_14127bd58:
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        *(int *)(lVar5 + *(longlong *)(param_1 + 0x70)) = iVar4;
        lVar5 = lVar5 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x58));
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar7 + (longlong)*(int *)(param_1 + 0x68) * 0x48;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 0x48) {
    FUN_1412681c0(lVar7);
  }
  return;
}



// FUNCTION 14127bdd0 FUN_14127bdd0 body=363 status=ok
// SIG undefined FUN_14127bdd0(void)

void FUN_14127bdd0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  
  UObject::PostLoad();
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar1 = lVar10 + (longlong)*(int *)(param_1 + 0x50) * 0x28;
  if (lVar10 != lVar1) {
    plVar11 = (longlong *)(lVar10 + 0x18);
    do {
      *(undefined4 *)(plVar11 + 1) = 0;
      if (*(int *)((longlong)plVar11 + 0xc) != (int)plVar11[-1]) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar11);
      }
      puVar8 = (undefined8 *)plVar11[-2];
      puVar12 = puVar8 + (longlong)(int)plVar11[-1] * 2;
      if (puVar8 != puVar12) {
LAB_14127be52:
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          lVar9 = 0;
          do {
            if (*(int *)(puVar8 + 1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = (undefined2 *)*puVar8;
            }
            if (*(int *)(lVar9 + 0x10 + *(longlong *)(param_1 + 0x38)) == 0) {
              puVar5 = &DAT_143f3eda8;
            }
            else {
              puVar5 = *(undefined2 **)(lVar9 + 8 + *(longlong *)(param_1 + 0x38));
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
            if (iVar3 == 0) {
              piVar2 = (int *)*plVar11;
              iVar3 = (int)plVar11[1];
              piVar4 = piVar2;
              if (piVar2 == piVar2 + iVar3) goto LAB_14127bedb;
              goto LAB_14127bec0;
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 0x30;
          } while (iVar7 < *(int *)(param_1 + 0x40));
        }
        goto LAB_14127befa;
      }
LAB_14127bf07:
      lVar10 = lVar10 + 0x28;
      plVar11 = plVar11 + 5;
    } while (lVar10 != lVar1);
  }
  return;
  while (piVar4 = piVar4 + 1, piVar4 != piVar2 + iVar3) {
LAB_14127bec0:
    if (*piVar4 == iVar7) {
      if ((int)((longlong)piVar4 - (longlong)piVar2 >> 2) != -1) goto LAB_14127befa;
      break;
    }
  }
LAB_14127bedb:
  *(int *)(plVar11 + 1) = iVar3 + 1;
  if (*(int *)((longlong)plVar11 + 0xc) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
  }
  *(int *)((longlong)iVar3 * 4 + *plVar11) = iVar7;
LAB_14127befa:
  puVar8 = puVar8 + 2;
  if (puVar8 == puVar12) goto LAB_14127bf07;
  goto LAB_14127be52;
}



// FUNCTION 14127bf40 FUN_14127bf40 body=49 status=ok
// SIG undefined FUN_14127bf40(void)

void FUN_14127bf40(longlong param_1)

{
  UObject::PostLoad();
  if (*(byte *)(param_1 + 0x38) != 0xff) {
    if (*(int *)(param_1 + 0x3c) == 1) {
      *(int *)(param_1 + 0x3c) = 1 << (*(byte *)(param_1 + 0x38) & 0x1f);
    }
    *(undefined1 *)(param_1 + 0x38) = 0xff;
  }
  return;
}



// FUNCTION 14127bf80 FUN_14127bf80 body=126 status=ok
// SIG undefined FUN_14127bf80(void)

void FUN_14127bf80(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1430daaf0();
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar1 + 0x128) != '\x03')) && (param_1[0x41] == 0)) {
      (**(code **)(*param_1 + 0x488))(param_1);
    }
  }
  return;
}



// FUNCTION 14127c020 FUN_14127c020 body=198 status=ok
// SIG undefined FUN_14127c020(void)

void FUN_14127c020(longlong param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e83500(param_1 + 0x228,param_3);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != param_2)) {
    plVar2 = (longlong *)FUN_140e810a0(param_1 + 0x228,param_3);
    if (plVar2 == param_2) {
      FUN_140e75c90(param_1 + 0x228,param_3);
    }
  }
  else {
    cVar1 = FUN_1407cd900(plVar2);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0x7d8))(plVar2,*(undefined1 *)((longlong)plVar2 + 0x621));
    }
    else if (*(longlong *)(param_1 + 0x7e0) != 0) {
      cVar1 = FUN_1407cd900();
      if (cVar1 == '\0') {
        FUN_141285800(param_1,param_3);
      }
    }
  }
  return;
}



// FUNCTION 14127c0f0 FUN_14127c0f0 body=359 status=ok
// SIG undefined FUN_14127c0f0(void)

void FUN_14127c0f0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_14307d810();
  if (lVar4 != 0) {
    lVar5 = AVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_5 == '\0') {
        *(undefined4 *)(lVar4 + 0x208) = 0;
        if (0x7fffffff < *(uint *)(lVar4 + 0x20c)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar4 + 0x200,0);
        }
        *(undefined4 *)(lVar4 + 0x218) = 0;
        if (0x7fffffff < *(uint *)(lVar4 + 0x21c)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar4 + 0x210,0);
        }
      }
      iVar1 = (int)param_3[1];
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar4 + 0x208);
        if (*(int *)(lVar4 + 0x20c) < iVar3 + iVar1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(lVar4 + 0x200));
          iVar3 = *(int *)(lVar4 + 0x208);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x200)),(void *)*param_3,
                   (longlong)iVar1 << 4);
        *(int *)(lVar4 + 0x208) = *(int *)(lVar4 + 0x208) + iVar1;
      }
      iVar1 = (int)param_4[1];
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar4 + 0x218);
        if (*(int *)(lVar4 + 0x21c) < iVar3 + iVar1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(lVar4 + 0x210));
          iVar3 = *(int *)(lVar4 + 0x218);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x210)),(void *)*param_4,
                   (longlong)iVar1 << 4);
        *(int *)(lVar4 + 0x218) = *(int *)(lVar4 + 0x218) + iVar1;
      }
      FUN_140a04d60(lVar4);
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14127c260 FUN_14127c260 body=422 status=ok
// SIG undefined FUN_14127c260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14127c260(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  iVar7 = FUN_14233f450();
  if ((((iVar7 != 3) && (*(longlong *)(param_1 + 0x408) != 0)) &&
      (*(longlong *)(param_1 + 0x6d8) != 0)) && (*(char *)(param_1 + 0x441) == '\0')) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x168);
    FUN_142ceca90(param_1 + 0x440,&local_38);
    pfVar1 = (float *)(lVar2 + 0x280);
    local_28 = local_38;
    local_20 = local_30;
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_146877460;
      fVar4 = DAT_146877460._4_4_;
      fVar5 = DAT_146877460._8_4_;
      auVar9 = divps(auVar9,_DAT_146877460);
      fVar11 = (float)local_48 - (float)(int)auVar9._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
      fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar9._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146877458 < fVar13) ^
               (uint)fVar13;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam0000000146877454 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146877450 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
      uVar6 = puVar8[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar8;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_48 = *(undefined8 *)(lVar2 + 0x270);
    uStack_40 = *(undefined8 *)(lVar2 + 0x278);
    FUN_142397be0(lVar2,&local_28,&local_48,0,0,0);
  }
  return;
}



// FUNCTION 14127c410 FUN_14127c410 body=83 status=ok
// SIG undefined FUN_14127c410(void)

void FUN_14127c410(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x440);
  *(int *)(param_1 + 0x440) = iVar1 + 1;
  if (*(int *)(param_1 + 0x444) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x438),iVar1);
  }
  FUN_14125bb20((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x438),param_2);
  return;
}



// FUNCTION 14127c480 OnCreateVertices body=83 status=ok
// SIG undefined OnCreateVertices(void)

void UEditableMeshAdapter::OnCreateVertices(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\OakGame\\Source\\OakGame\\Public\\Weapon/WeaponEffectBaseAspectData.h",
             0x25,L"Pure virtual not implemented (%s)",
             L"UWeaponEffectBaseAspectData::RegisterEffect");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Public\\Weapon/WeaponEffectBaseAspectData.h",
             0x25,L"Pure virtual not implemented (%s)",
             L"UWeaponEffectBaseAspectData::RegisterEffect");
  return;
}



// FUNCTION 14127c500 FUN_14127c500 body=130 status=ok
// SIG undefined FUN_14127c500(void)

void FUN_14127c500(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 0x228;
  lVar2 = FUN_140e83500(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_140e83500(param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x7c8))(plVar3);
      if (cVar1 == '\0') {
        return;
      }
    }
    cVar1 = FUN_140e71290(param_1,2);
    if (cVar1 == '\0') {
      FUN_14308e980(lVar2,param_3);
    }
  }
  return;
}



// FUNCTION 14127c590 FUN_14127c590 body=314 status=ok
// SIG undefined FUN_14127c590(void)

void FUN_14127c590(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x6cc) == -1) {
    return;
  }
  if (*(char *)(param_1 + 0x418) != '\x02') {
    return;
  }
  lVar3 = FUN_142ceeb40(param_1,0);
  if (lVar3 == 0) {
    return;
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    uVar4 = FUN_142ceeb40(param_1,0);
    FUN_14123cd70(*(undefined8 *)(param_1 + 0x6d8),uVar4,*(undefined4 *)(param_1 + 0x6cc));
    return;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))();
  if (lVar3 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14127c6aa;
  }
  plVar6 = (longlong *)FUN_142ceeb40(param_1,0);
  lVar3 = (**(code **)(*plVar6 + 0x670))(plVar6);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
LAB_14127c6aa:
  uVar4 = FUN_142ceeb40(param_1,0);
  FUN_1414609b0(lVar3,uVar4);
  return;
}



// FUNCTION 14127c6d0 FUN_14127c6d0 body=88 status=ok
// SIG undefined FUN_14127c6d0(void)

void FUN_14127c6d0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  
  puVar1 = (undefined4 *)(param_1 + 0x77c);
  if (param_2 == 0) {
    FWeakObjectPtr::operator=(&local_res10);
    *puVar1 = local_res10;
    *(undefined4 *)(param_1 + 0x780) = local_res14;
    return;
  }
  FWeakObjectPtr::IsValid(puVar1);
  FWeakObjectPtr::operator=(puVar1,param_2);
  return;
}



// FUNCTION 14127c730 FUN_14127c730 body=137 status=ok
// SIG undefined FUN_14127c730(void)

void FUN_14127c730(longlong param_1)

{
  FUN_14305a2d0();
  *(undefined4 *)(param_1 + 0x628) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x62c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x630) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x640) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x660) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x664)) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo();
    return;
  }
  return;
}



// FUNCTION 14127c7c0 FUN_14127c7c0 body=261 status=ok
// SIG undefined FUN_14127c7c0(void)

void FUN_14127c7c0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 200);
  if (uVar1 < 0x19) {
    uVar2 = 0x18;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xcc) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0xc0);
  if (uVar2 < 0x19) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar5;
  return;
}



// FUNCTION 14127c8d0 FUN_14127c8d0 body=99 status=ok
// SIG undefined FUN_14127c8d0(void)

void FUN_14127c8d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*param_1 != 0) {
    uStack_10 = 0;
    local_18 = param_2;
    uVar1 = FUN_142ca2f00(param_1[2],&local_18,(int)param_1[1]);
    FUN_1405aaad0(param_3,*param_1,uVar1,0,4);
  }
  return;
}



// FUNCTION 14127c940 FUN_14127c940 body=234 status=ok
// SIG undefined FUN_14127c940(void)

longlong FUN_14127c940(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  int local_20;
  
  uVar4 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar2 = FUN_141220430(param_4);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    uVar3 = FUN_1428e7a40(0);
    AActor::GetComponentsByTag(lVar2,&local_28,uVar3,*(undefined8 *)(param_1 + 0x50));
    uVar5 = (ulonglong)((longlong)(local_28 + local_20) + (7 - (longlong)local_28)) >> 3;
    if (local_28 + local_20 < local_28) {
      uVar5 = uVar4;
    }
    puVar6 = local_28;
    if (uVar5 != 0) {
      do {
        FUN_142cb6180(param_2,*puVar6);
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 != uVar5);
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  cVar1 = FAdvTextRun::AreAllCharactersVisible(param_2);
  if (cVar1 != '\0') {
    FUN_142cb6180(param_2,lVar2);
  }
  return param_2;
}



// FUNCTION 14127ca30 FUN_14127ca30 body=37 status=ok
// SIG undefined FUN_14127ca30(void)

undefined8
FUN_14127ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141220430(param_4);
  FUN_142cb2580(param_2,uVar1);
  return param_2;
}



// FUNCTION 14127ca60 FUN_14127ca60 body=218 status=ok
// SIG undefined FUN_14127ca60(void)

longlong FUN_14127ca60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (param_4 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = *(undefined8 **)(param_1 + 0x50);
      uVar5 = (longlong)*(int *)(param_1 + 0x58) & 0x1fffffffffffffff;
      if (puVar4 + *(int *)(param_1 + 0x58) < puVar4) {
        uVar5 = uVar3;
      }
      if (uVar5 != 0) {
        do {
          lVar2 = FUN_140c46a10(param_4,*puVar4);
          if (lVar2 != 0) {
            FUN_142cb6180(param_2,lVar2);
          }
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar5);
      }
    }
  }
  return param_2;
}



// FUNCTION 14127cb40 FUN_14127cb40 body=818 status=ok
// SIG undefined FUN_14127cb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14127cb40(longlong param_1,longlong *param_2,longlong **param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong **local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong local_1f0 [2];
  longlong local_1e0 [24];
  longlong *local_120;
  int local_118;
  int local_114;
  undefined1 local_110 [192];
  ulonglong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined1 *puVar7;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if ((*(longlong *)(param_1 + 0x58) != 0) || (*(longlong *)(param_1 + 0x50) != 0)) {
    local_228 = 0;
    local_210 = &local_208;
    if (param_3 != (longlong **)0x0) {
      local_210 = param_3;
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0;
    local_1f8 = param_2;
    if (param_2 != (longlong *)0x0) {
      FUN_1412596f0(param_2,local_110,0);
    }
    puVar7 = local_110;
    if (local_50 != 0) {
      puVar7 = (undefined1 *)0x0;
    }
    plVar6 = (longlong *)((ulonglong)puVar7 | local_50);
    plVar5 = plVar6 + local_48;
    for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      plVar8 = (longlong *)*plVar6;
      lVar1 = *(longlong *)(param_1 + 0x50);
      if ((plVar8 != (longlong *)0x0) &&
         ((local_228 = 0, *(longlong *)(param_1 + 0x58) == 0 ||
          (cVar2 = UActorComponent::ComponentHasTag(plVar8,*(undefined8 *)(param_1 + 0x58)),
          cVar2 != '\0')))) {
        plVar3 = (longlong *)FUN_14238b220(plVar8,&local_220);
        plVar4 = (longlong *)*plVar3;
        plVar3 = plVar4 + (int)plVar3[1];
        for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar1) goto LAB_14127cc71;
        }
        plVar4 = (longlong *)0x0;
LAB_14127cc71:
        if (local_220 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (plVar4 != (longlong *)0x0) {
          *local_210 = plVar8;
          goto LAB_14127cde8;
        }
      }
    }
    local_218 = 0;
    local_220 = (longlong *)0x0;
    FUN_14222e300(param_2,&local_220);
    (**(code **)(*param_2 + 0x4b8))(param_2,&local_220,1);
    plVar5 = local_220 + (int)local_218;
    plVar6 = local_220;
    local_208 = plVar5;
    if (local_220 != plVar5) {
      do {
        plVar8 = (longlong *)0x0;
        local_200 = (longlong *)*plVar6;
        local_118 = 0;
        local_120 = plVar8;
        local_114 = local_118;
        if (local_200 != (longlong *)0x0) {
          FUN_1412596f0(local_200,local_1e0,0);
        }
        plVar3 = local_1e0;
        if (local_120 != (longlong *)0x0) {
          plVar3 = plVar8;
        }
        plVar3 = (longlong *)((ulonglong)plVar3 | (ulonglong)local_120);
        plVar8 = plVar3 + local_118;
        for (; plVar3 != plVar8; plVar3 = plVar3 + 1) {
          plVar5 = (longlong *)*plVar3;
          lVar1 = *(longlong *)(param_1 + 0x50);
          if ((plVar5 != (longlong *)0x0) &&
             ((local_228 = 0, *(longlong *)(param_1 + 0x58) == 0 ||
              (cVar2 = UActorComponent::ComponentHasTag(plVar5,*(undefined8 *)(param_1 + 0x58)),
              cVar2 != '\0')))) {
            plVar4 = (longlong *)FUN_14238b220(plVar5,local_1f0);
            plVar9 = (longlong *)*plVar4;
            plVar4 = plVar9 + (int)plVar4[1];
            for (; plVar9 != plVar4; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar1) goto LAB_14127cd90;
            }
            plVar9 = (longlong *)0x0;
LAB_14127cd90:
            if (local_1f0[0] != 0) {
              FMemory::Free();
            }
            plVar4 = local_120;
            if (plVar9 != (longlong *)0x0) {
              *local_210 = plVar5;
              if (plVar4 != (longlong *)0x0) {
                FMemory::Free();
              }
              param_2 = local_200;
              if (local_220 != (longlong *)0x0) {
                FMemory::Free();
                param_2 = local_200;
              }
              goto LAB_14127cde8;
            }
          }
          plVar5 = local_208;
        }
        if (local_120 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 1;
        param_2 = local_1f8;
      } while (plVar6 != plVar5);
    }
    if (local_220 != (longlong *)0x0) {
      FMemory::Free(local_220);
    }
LAB_14127cde8:
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14127ce80 FUN_14127ce80 body=1383 status=ok
// SIG undefined FUN_14127ce80(void)

void FUN_14127ce80(longlong *param_1,longlong param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_res10;
  longlong *local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  float local_228;
  float local_224;
  float local_220;
  undefined1 local_218 [8];
  float local_210;
  undefined **local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1ec;
  float local_1e4;
  undefined8 local_1c8;
  float local_1ac;
  longlong local_138;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  
  FUN_14127a7a0(param_1,param_1[0x92] + 0x478,param_2 + 0x20);
  lVar6 = param_1[0x92];
  if (*(longlong *)(lVar6 + 0x368) == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x488) == 0) {
    return;
  }
  lVar5 = FUN_1430aef40();
  lVar9 = *(longlong *)(lVar6 + 0x488);
  while( true ) {
    if (lVar9 == 0) {
      return;
    }
    if (lVar9 == lVar5) break;
    lVar9 = *(longlong *)(lVar9 + 0x30);
  }
  if (*(longlong *)(lVar6 + 0x488) == 0) {
    return;
  }
  if (param_3 < 1) {
    return;
  }
  lVar9 = 0;
  local_248 = (longlong *)0x0;
  local_240 = 0;
  FUN_142d472a0(param_1,param_1[0x92] + 0x368,&local_248);
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x6c);
  for (plVar12 = local_248; plVar12 != local_248 + (int)local_240; plVar12 = plVar12 + 1) {
    if (*plVar12 == lVar6) {
      iVar11 = (int)((longlong)plVar12 - (longlong)local_248 >> 3);
      if (iVar11 != -1) {
        iVar8 = ((int)local_240 - iVar11) + -1;
        if (0 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_248 + iVar11,local_248 + ((int)local_240 - iVar8),(longlong)iVar8 << 3);
        }
        local_240 = CONCAT44(local_240._4_4_,(int)local_240 + -1);
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_248);
      }
      break;
    }
  }
  FUN_140a25850(&local_208);
  local_208 = &PTR_FUN_1442c5630;
  local_c8 = 0xbf800000;
  uStack_c4 = 0xbf800000;
  uStack_c0 = 0xbf800000;
  uStack_bc = 0x3f800000;
  local_b8 = 0x3f800000;
  local_b4 = 0x3f800000;
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_208);
  local_1f8 = *(undefined8 *)(param_2 + 0x20);
  local_200 = *(undefined8 *)(param_1[0x92] + 0x488);
  local_1f0 = *(float *)(param_2 + 0x28);
  local_1c8 = FWeakObjectPtr::Get(param_2 + 0x6c);
  local_1ac = local_1ac * param_4;
  lVar6 = lVar9;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar6 = param_1[4];
  }
  iVar11 = (int)local_240;
  lVar5 = (longlong)(int)local_240;
  if (((param_3 < (int)local_240) && (*(char *)(param_1[0x92] + 0x420) != '\0')) &&
     (iVar8 = 0, 0 < (int)local_240)) {
    do {
      iVar4 = rand();
      iVar4 = iVar4 % iVar11;
      if (iVar8 != iVar4) {
        lVar3 = local_248[lVar9];
        local_248[lVar9] = local_248[iVar4];
        local_248[iVar4] = lVar3;
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar5);
  }
  if (0 < param_3) {
    lVar9 = 0;
    do {
      if (lVar5 <= lVar9) break;
      puVar7 = (undefined8 *)
               (**(code **)(*(longlong *)local_248[lVar9] + 0x618))
                         ((longlong *)local_248[lVar9],local_218,param_1[0x28]);
      local_1ec = *puVar7;
      local_1e4 = *(float *)(puVar7 + 1);
      FUN_14303b070(lVar6,&local_208,0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3);
  }
  if (iVar11 < param_3) {
    uVar10 = (ulonglong)(uint)(param_3 - iVar11);
    do {
      fVar1 = *(float *)((longlong)param_1 + 0x2f4);
      fVar2 = *(float *)(param_1 + 0x5e);
      local_230 = *(float *)(param_1 + 0x5f);
      local_res10 = 0;
      fVar13 = fVar2 * fVar2 + fVar1 * fVar1 + local_230 * local_230;
      if (fVar13 == 1.0) {
        local_238 = param_1[0x5e];
        local_230 = *(float *)(param_1 + 0x5f);
      }
      else if (1e-08 <= fVar13) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        local_230 = local_230 * fVar14;
        local_238 = CONCAT44(fVar1 * fVar14,fVar2 * fVar14);
      }
      else {
        local_230 = DAT_1468b5d98;
        local_238 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      FUN_142da9940(param_1[0x92] + 0x428,&local_228,&local_238,param_1[0x28],&local_res10,0);
      local_210 = local_220 * 5000.0 + local_1f0;
      local_1ec = CONCAT44(local_224 * 5000.0 + local_1f8._4_4_,
                           local_228 * 5000.0 + (float)local_1f8);
      local_1e4 = local_210;
      FUN_14303b070(lVar6,&local_208,0);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  local_208 = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_e0,0);
  local_d8 = 0;
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14127d3f0 FUN_14127d3f0 body=83 status=ok
// SIG undefined FUN_14127d3f0(void)

void FUN_14127d3f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_140e8ff70();
  FUN_141284890(param_1);
  cVar1 = FUN_140e85b90(param_1,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_142ceeb40(*(undefined8 *)(param_1 + 0x4d8),0);
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x538);
  return;
}



// FUNCTION 14127d450 FUN_14127d450 body=140 status=ok
// SIG undefined FUN_14127d450(void)

void FUN_14127d450(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    uVar3 = 0;
    do {
      if ((param_3 >> (uVar3 & 0x1f) & 1) != 0) {
        FUN_140e864a0(param_1 + 0x228,uVar3,param_2);
      }
      bVar2 = (char)uVar3 + 1;
      uVar3 = (uint)bVar2;
    } while (bVar2 < 4);
    if (param_4 != '\0') {
      FUN_141280740(param_1,param_3,param_5,0);
    }
  }
  return;
}



// FUNCTION 14127d4e0 FUN_14127d4e0 body=93 status=ok
// SIG undefined FUN_14127d4e0(void)

void FUN_14127d4e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_14127df70(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14127d540 FUN_14127d540 body=88 status=ok
// SIG undefined FUN_14127d540(void)

void FUN_14127d540(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_141280f90(param_1,param_2,param_3,param_4,0);
  }
  return;
}



// FUNCTION 14127d5a0 FUN_14127d5a0 body=67 status=ok
// SIG undefined FUN_14127d5a0(void)

void FUN_14127d5a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_141283c10(param_1,param_2,param_3,0);
  }
  return;
}



// FUNCTION 14127d5f0 FUN_14127d5f0 body=78 status=ok
// SIG undefined FUN_14127d5f0(void)

void FUN_14127d5f0(longlong param_1,byte param_2)

{
  byte bVar1;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && ((*(byte *)(param_1 + 0x929) & 1) != param_2)) &&
     (bVar1 = *(byte *)(param_1 + 0x929) & 0xfe | param_2, *(byte *)(param_1 + 0x929) = bVar1,
     (bVar1 & 2) == 0)) {
    if ((param_2 & 1) != 0) {
      FUN_143083d20(param_1,0x12,0,0);
      return;
    }
    FUN_14308fb00(param_1,0x12,0);
    return;
  }
  return;
}



// FUNCTION 14127d640 FUN_14127d640 body=73 status=ok
// SIG undefined FUN_14127d640(void)

void FUN_14127d640(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x929);
  if ((bVar1 >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0x929) = bVar1 & 0xfd | param_2 * '\x02';
    if ((bVar1 & 1) != 0) {
      if ((param_2 * '\x02' & 2) == 0) {
        FUN_143083d20(param_1,0x12,0,0);
        return;
      }
      FUN_14308fb00(param_1,0x12,0);
      return;
    }
  }
  return;
}



// FUNCTION 14127d690 FUN_14127d690 body=1650 status=ok
// SIG undefined FUN_14127d690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127d690(longlong param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  pwVar15 = (wchar_t *)0x0;
  if (param_2 != (wchar_t *)0x0) {
    lVar7 = FUN_141494d80();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) goto LAB_14127d6f7;
  }
  param_2 = pwVar15;
LAB_14127d6f7:
  *(wchar_t **)(param_1 + 0x710) = param_2;
  if (param_2 != (wchar_t *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x928))
              (*(longlong **)(param_1 + 0x6f0),*(undefined8 *)(param_2 + 0x18));
    FUN_1423974f0(*(undefined8 *)(param_1 + 0x700),1);
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakVehicleProjectile::ProximityDetectorOverlap",L"::");
    pwVar10 = pwVar15;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_d8,pwVar10 + 2,1);
    uVar5 = local_d8;
    lVar7 = *(longlong *)(param_1 + 0x700);
    plVar16 = (longlong *)(lVar7 + 0x570);
    FWeakObjectPtr::operator=(&local_e8,0);
    uStack_e0 = 0;
    FWeakObjectPtr::operator=(&local_e8,param_1);
    uStack_e0 = uVar5;
    local_d0 = 0;
    if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_e8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_e0);
    }
    piVar3 = (int *)*plVar16;
    iVar2 = *(int *)(lVar7 + 0x578);
    uVar11 = local_e8;
    for (piVar13 = piVar3; local_e8 = (undefined1 *)uVar11, piVar13 != piVar3 + (longlong)iVar2 * 4;
        piVar13 = piVar13 + 4) {
      local_e8._0_4_ = (int)uVar11;
      if (((*piVar13 == (int)local_e8) &&
          (local_e8._4_4_ = (int)((ulonglong)uVar11 >> 0x20), bVar17 = piVar13[1] == local_e8._4_4_,
          bVar17)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_e8), cVar6 == '\0')))) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if ((bVar17) && (*(ulonglong *)(piVar13 + 2) == uStack_e0)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (bVar17) {
        if ((int)((longlong)piVar13 - (longlong)piVar3 >> 4) != -1) goto LAB_14127d8bc;
        break;
      }
      uVar11 = local_e8;
    }
    iVar2 = *(int *)(lVar7 + 0x578);
    *(int *)(lVar7 + 0x578) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x57c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar2);
    }
    puVar12 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar16);
    *puVar12 = (int)local_e8;
    puVar12[1] = local_e8._4_4_;
    *(ulonglong *)(puVar12 + 2) = uStack_e0;
LAB_14127d8bc:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x638))(*(longlong **)(param_1 + 0x700),1);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x648))(*(longlong **)(param_1 + 0x700),0xe);
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    local_e8 = &LAB_14125e9a0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleProjectile::ProximityDetectorHit",L"::");
    pwVar10 = pwVar15;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_d8,pwVar10 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x700) + 0x560,param_1,&local_e8,local_d8);
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    local_e8 = &LAB_14125e9ac;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleProjectile::OnHit",L"::");
    while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar15 = pwVar8;
    }
    FName::FName(&local_d8,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x708) + 0x560,param_1,&local_e8,local_d8);
    uVar11 = FUN_140a63ba0(param_1);
    lVar7 = FUN_141220430(uVar11);
    *(longlong *)(param_1 + 0x6e8) = lVar7;
    if (lVar7 != 0) {
      FUN_14122a9f0(lVar7,param_1,1);
    }
    uVar11 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar11,param_1 + 0x718);
    *(undefined8 *)(param_1 + 0x718) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x6e0);
    local_e8 = &LAB_14125e9b8;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    uVar11 = AActor::GetWorldTimerManager(param_1);
    plVar16 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar16 != (longlong *)0x0) {
      *plVar16 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar16 + 1,param_1);
      *(int *)(plVar16 + 2) = (int)local_e8;
      *(int *)((longlong)plVar16 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar16 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)plVar16 + 0x1c) = uStack_e0._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar16[5] = lVar7;
      *plVar16 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x30))(plVar16,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_f0 = 0xbf800000;
    local_f8 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar11,param_1 + 0x718,&local_c8,uVar1);
    if (local_68 != 0) {
      plVar14 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar14 = local_78;
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x28))(plVar16,0);
      lVar7 = FMemory::Realloc(plVar16,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    uVar11 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar11,param_1 + 0x720);
    *(undefined8 *)(param_1 + 0x720) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x6e4);
    local_e8 = &LAB_141271810;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    uVar11 = AActor::GetWorldTimerManager(param_1);
    plVar16 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar16 != (longlong *)0x0) {
      *plVar16 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar16 + 1,param_1);
      *(int *)(plVar16 + 2) = (int)local_e8;
      *(int *)((longlong)plVar16 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar16 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)plVar16 + 0x1c) = uStack_e0._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar16[5] = lVar7;
      *plVar16 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x30))(plVar16,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_f0 = 0xbf800000;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_f8 = 0;
    FUN_142880850(uVar11,param_1 + 0x720,&local_c8,uVar1);
    if (local_68 != 0) {
      plVar14 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar14 = local_78;
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x28))(plVar16,0);
      lVar7 = FMemory::Realloc(plVar16,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 14127dd10 FUN_14127dd10 body=165 status=ok
// SIG undefined FUN_14127dd10(void)

void FUN_14127dd10(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 != 3) && (uVar3 = 0, 0 < *(int *)(param_1 + 0x230))) {
    do {
      plVar1 = *(longlong **)((longlong)(int)uVar3 * 0xf8 + 8 + *(longlong *)(param_1 + 0x228));
      if (plVar1 != (longlong *)0x0) {
        if (param_2 == '\0') {
          if (plVar1[0xff] != DAT_146b47938) {
            (**(code **)(*plVar1 + 0x7e0))();
          }
        }
        else if (plVar1[0xff] == DAT_146b47938) {
          (**(code **)(*plVar1 + 2000))(plVar1,*(undefined8 *)(param_1 + 0x7e0),uVar3 & 0xff,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 14127ddc0 FUN_14127ddc0 body=182 status=ok
// SIG undefined FUN_14127ddc0(void)

void FUN_14127ddc0(longlong param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  UActorComponent::SetComponentTickEnabled();
  if ((param_2 == '\0') && (uVar4 = 0, uVar6 = uVar4, 0 < *(int *)(param_1 + 0x208))) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x200);
      lVar3 = *(longlong *)(lVar2 + 0x28 + uVar4);
      if (lVar3 != 0) {
        pbVar1 = (byte *)(lVar3 + 0x71a);
        *pbVar1 = *pbVar1 | 0x40;
        FUN_142600fa0(*(undefined8 *)(lVar2 + 0x28 + uVar4));
        *(undefined8 *)(lVar2 + 0x28 + uVar4) = 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x200);
      lVar3 = *(longlong *)(lVar2 + 0x30 + uVar4);
      if (lVar3 != 0) {
        pbVar1 = (byte *)(lVar3 + 0x71a);
        *pbVar1 = *pbVar1 | 0x40;
        FUN_142600fa0(*(undefined8 *)(lVar2 + 0x30 + uVar4));
        *(undefined8 *)(lVar2 + 0x30 + uVar4) = 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x50;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x208));
  }
  return;
}



// FUNCTION 14127de80 FUN_14127de80 body=58 status=ok
// SIG undefined FUN_14127de80(void)

void FUN_14127de80(longlong param_1,int param_2)

{
  undefined4 local_res18;
  int local_res1c;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x980))) {
    local_res18 = *(undefined4 *)(param_1 + 0x988);
    *(int *)(param_1 + 0x988) = param_2;
    local_res1c = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x998,&local_res18);
  }
  return;
}



// FUNCTION 14127dec0 FUN_14127dec0 body=170 status=ok
// SIG undefined FUN_14127dec0(void)

void FUN_14127dec0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    cVar1 = FUN_140e83810(param_1 + 0x228,param_3);
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = FUN_140e7ef50(param_1 + 0x228,param_3);
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 < 3) {
    FUN_1412d9b00(param_1);
  }
  else {
    FUN_14127df70(param_1,param_2,uVar2,param_4,param_5);
  }
  return;
}



// FUNCTION 14127df70 FUN_14127df70 body=645 status=ok
// SIG undefined FUN_14127df70(void)

void FUN_14127df70(longlong param_1,longlong *param_2,byte param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar3 = FUN_14233f450();
  if ((iVar3 == 3) && ((int)(uint)param_3 < *(int *)(param_1 + 0x230))) {
    if ((param_2 != (longlong *)0x0) &&
       ((param_2[0x2a] != *(longlong *)(param_1 + 0x7e0) ||
        (param_2[0x94] != *(longlong *)(param_1 + 0x7e0))))) {
      FUN_14307df60(param_2);
    }
    lVar1 = param_1 + 0x228;
    plVar5 = (longlong *)FUN_140e83500(lVar1,param_3);
    if (((((plVar5 == (longlong *)0x0) || (param_2 != plVar5)) || (plVar5[0xff] == DAT_146b479b0))
        || ((cVar2 = FUN_1407cd900(plVar5), cVar2 != '\0' || (param_2 == (longlong *)0x0)))) ||
       (param_2[0xff] == DAT_146b47938)) {
      uVar4 = FUN_140e80ac0(lVar1);
      if (param_2 != (longlong *)0x0) {
        FUN_1430833a0(param_2,*(undefined8 *)(param_1 + 0x7e0),param_3,param_5,uVar4);
      }
      if (((plVar5 != (longlong *)0x0) && (plVar5 != param_2)) &&
         ((plVar5[0xff] != DAT_146b47938 && (cVar2 = FUN_1407cd900(plVar5), cVar2 == '\0')))) {
        FUN_143083420(plVar5,param_4);
      }
      iVar3 = FUN_14233f450(param_1);
      if ((iVar3 == 3) || (cVar2 = FUN_140e96350(lVar1,param_3,uVar4), cVar2 != '\0')) {
        plVar6 = (longlong *)FUN_140e939e0(lVar1,param_3,param_2,uVar4);
        iVar3 = FUN_14233f450(param_1);
        if ((iVar3 == 3) && ((plVar6 != (longlong *)0x0 && (plVar6 != param_2)))) {
          FUN_143083420(plVar6,1);
        }
        plVar6 = (longlong *)FUN_140e83500(lVar1,param_3);
        if (((plVar6 == (longlong *)0x0) || (plVar6 == param_2)) ||
           (cVar2 = FUN_1407cd900(plVar6), cVar2 != '\0')) {
          FUN_141285800(param_1,param_3);
        }
      }
      if (((plVar5 != (longlong *)0x0) && (param_2 != plVar5)) &&
         ((plVar6 = (longlong *)FUN_140e83500(lVar1,param_3), plVar6 != param_2 &&
          ((plVar5[0xff] != DAT_146b47938 && (cVar2 = FUN_1407cd900(plVar5), cVar2 == '\0')))))) {
        plVar6 = (longlong *)FUN_140e83500(lVar1,param_3);
        if ((plVar6 == (longlong *)0x0) || (plVar6 != plVar5)) {
          plVar6 = (longlong *)FUN_140e810a0(lVar1,param_3);
          if (plVar6 == plVar5) {
            FUN_140e75c90(lVar1,param_3);
          }
        }
        else {
          cVar2 = FUN_1407cd900(plVar6);
          if (cVar2 == '\0') {
            (**(code **)(*plVar6 + 0x7d8))(plVar6,*(undefined1 *)((longlong)plVar6 + 0x621));
          }
          else if ((*(longlong *)(param_1 + 0x7e0) != 0) && (cVar2 = FUN_1407cd900(), cVar2 == '\0')
                  ) {
            FUN_141285800(param_1,param_3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14127e200 FUN_14127e200 body=213 status=ok
// SIG undefined FUN_14127e200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127e200(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar3 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_141270040(param_1,param_4,local_108);
  puVar1 = local_108;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  uVar2 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar1 + (int)local_40 < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      local_118 = *param_3;
      uStack_114 = param_3[1];
      uStack_110 = param_3[2];
      uStack_10c = param_3[3];
      FUN_14260ee50(*puVar1,*param_2,&local_118);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14127e2e0 FUN_14127e2e0 body=209 status=ok
// SIG undefined FUN_14127e2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127e2e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118 [24];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar3 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_141270040(param_1,param_4,local_118);
  puVar1 = local_118;
  if (local_58 != (undefined8 *)0x0) {
    puVar1 = local_58;
  }
  uVar2 = (longlong)(int)local_50 & 0x1fffffffffffffff;
  if (puVar1 + (int)local_50 < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_14260f0c0(*puVar1,*param_2,param_3);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14127e3c0 FUN_14127e3c0 body=202 status=ok
// SIG undefined FUN_14127e3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127e3c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar3 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_141270040(param_1,param_4,local_108);
  puVar1 = local_108;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  uVar2 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar1 + (int)local_40 < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_14260f470(*puVar1,*param_2,param_3);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14127e490 FUN_14127e490 body=222 status=ok
// SIG undefined FUN_14127e490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14127e490(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_141270040(param_1,param_4,local_108);
  puVar1 = local_108;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  uVar3 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar1 + (int)local_40 < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      local_118 = *param_3;
      local_110 = *(undefined4 *)(param_3 + 1);
      FUN_142610200(*puVar1,*param_2,&local_118);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14127e570 FUN_14127e570 body=17 status=ok
// SIG undefined FUN_14127e570(void)

void FUN_14127e570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x908);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x3f0);
    if (lVar2 != param_2) {
      *(longlong *)(lVar1 + 0x3f0) = param_2;
      lVar3 = FUN_14129ab90();
      if (lVar3 != 0) {
        if (lVar2 != 0) {
          FUN_142d26ae0(lVar3,lVar2);
        }
        if (*(longlong *)(lVar1 + 0x3f0) != 0) {
          FUN_142d271f0(lVar3,*(longlong *)(lVar1 + 0x3f0),0);
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 14127e590 FUN_14127e590 body=93 status=ok
// SIG undefined FUN_14127e590(void)

void FUN_14127e590(longlong *param_1,longlong param_2)

{
  if (((char)param_1[0x25] == '\x03') && (param_1[0x126] != param_2)) {
    (**(code **)(*param_1 + 0x600))();
    param_1[0x126] = param_2;
    if (param_1[0x121] != 0) {
      FUN_1412aaa50(param_1[0x121],param_2);
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x127);
  }
  return;
}



// FUNCTION 14127e5f0 FUN_14127e5f0 body=104 status=ok
// SIG undefined FUN_14127e5f0(void)

void FUN_14127e5f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + -2000);
  if (lVar1 != 0) {
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14127e660 FUN_14127e660 body=8 status=ok
// SIG undefined FUN_14127e660(void)

void FUN_14127e660(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa10) = param_2;
  return;
}



// FUNCTION 14127e670 FUN_14127e670 body=112 status=ok
// SIG undefined FUN_14127e670(void)

void FUN_14127e670(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14307d810(param_1 + -0x8d8,0);
  if (lVar2 != 0) {
    lVar3 = AVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(longlong *)(lVar2 + 0x178) + 0x10))((longlong *)(lVar2 + 0x178),param_2);
    }
  }
  return;
}



// FUNCTION 14127e6e0 FUN_14127e6e0 body=682 status=ok
// SIG undefined FUN_14127e6e0(void)

void FUN_14127e6e0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 local_38 [32];
  
  if (*(longlong *)(param_1 + 0x288) != 0) goto LAB_14127e757;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 == 0) {
LAB_14127e744:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14127e744;
  }
  *(longlong *)(param_1 + 0x288) = lVar5;
  if (lVar5 == 0) {
    return;
  }
LAB_14127e757:
  lVar5 = *(longlong *)(param_1 + 0x290);
  if ((lVar5 != 0) && (param_2 != 0)) {
    if (*(longlong *)(lVar5 + 0x1c0) != 0) {
      FUN_1405aaad0(param_2,*(longlong *)(lVar5 + 0x1c0),*(undefined4 *)(param_1 + 0x2d8),0,4);
      lVar5 = *(longlong *)(param_1 + 0x290);
    }
    if ((*(longlong *)(lVar5 + 0x3b0) != 0) &&
       (cVar3 = FUN_1430d8750(*(undefined8 *)(param_1 + 0x288)), cVar3 != '\0')) {
      FUN_1405a3150(param_2,local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3b0),0);
      FUN_140591060(local_38);
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x3c0) != 0) &&
       (cVar3 = FUN_14122ebf0(*(undefined8 *)(param_1 + 0x288)), cVar3 != '\0')) {
      FUN_1405a3150(param_2,local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x3c0),0);
      FUN_140591060(local_38);
    }
    lVar5 = *(longlong *)(param_1 + 0x2b0);
    lVar4 = (longlong)*(int *)(param_1 + 0x2b8) * 0x20 + lVar5;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
      FUN_14127c8d0(lVar5,*(undefined8 *)(param_1 + 0x288),param_2);
    }
    plVar6 = *(longlong **)(param_1 + 0x2a0);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x2a8) * 2;
    if (plVar6 != plVar8) {
      plVar7 = plVar6 + 1;
      do {
        if ((*plVar6 != 0) &&
           ((*plVar7 == 0 ||
            (cVar3 = UActorComponent::ComponentHasTag(param_2,*plVar7), cVar3 != '\0')))) {
          FUN_1405a3150(param_2,local_38,*plVar6,0);
          FUN_140591060(local_38);
        }
        plVar6 = plVar6 + 2;
        plVar7 = plVar7 + 2;
      } while (plVar6 != plVar8);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x318) != 0) {
      cVar3 = FUN_14122a6f0(*(undefined8 *)(param_1 + 0x288));
      if (cVar3 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x3f800000;
      }
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x318),uVar9,0,4);
    }
    iVar1 = *(int *)(param_1 + 0x3a8);
    *(int *)(param_1 + 0x3a8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3ac) < iVar1 + 1) {
      TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1 + 800,iVar1);
    }
    lVar5 = *(longlong *)(param_1 + 0x3a0);
    if (*(longlong *)(param_1 + 0x3a0) == 0) {
      lVar5 = param_1 + 800;
    }
    FWeakObjectPtr::operator=(lVar5 + (longlong)iVar1 * 8,param_2);
  }
  return;
}



// FUNCTION 14127e990 FUN_14127e990 body=149 status=ok
// SIG undefined FUN_14127e990(void)

void FUN_14127e990(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x691)) {
    *(char *)((longlong)param_1 + 0x691) = param_2;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    lVar2 = *(longlong *)(lVar2 + 0x148);
    if (lVar2 != 0) {
      lVar3 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(char *)((longlong)param_1 + 0x691) != '\0') {
          FUN_140cd72e0();
          return;
        }
        FUN_140cd79b0(lVar2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 14127ea30 FUN_14127ea30 body=335 status=ok
// SIG undefined FUN_14127ea30(void)

void FUN_14127ea30(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((*(float *)(param_2 + 0x79c) <= param_3 && param_3 != *(float *)(param_2 + 0x79c)) ||
     (*(float *)(param_2 + 0x784) <= param_4 && param_4 != *(float *)(param_2 + 0x784))) {
LAB_14127ea6c:
    uVar4 = 0;
  }
  else {
    cVar3 = FUN_14122e8f0(param_2);
    if (cVar3 != '\0') goto LAB_14127ea6c;
    uVar4 = 1;
  }
  if (*(float *)(param_2 + 0x784) <= param_5) {
    fVar6 = (float)FUN_141229070(param_2);
    if (0.9 < fVar6) {
      bVar2 = true;
      goto LAB_14127ea96;
    }
  }
  bVar2 = false;
LAB_14127ea96:
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877950,uVar4);
  lVar1 = *param_1;
  uVar4 = FUN_14122e820(param_2);
  (**(code **)(lVar1 + 0x958))(param_1,DAT_146877958,uVar4);
  lVar1 = *param_1;
  uVar4 = FUN_14122e8f0(param_2);
  (**(code **)(lVar1 + 0x958))(param_1,DAT_146877960,uVar4);
  if ((*(char *)(param_2 + 0x7ac) == '\0') && (*(char *)(param_2 + 0x7ad) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877968,uVar5);
  if ((bVar2) && (*(char *)(param_2 + 0x780) == '\0')) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877978,uVar5);
  if ((bVar2) && (*(char *)(param_2 + 0x780) != '\0')) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014127eb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x958))(param_1,DAT_146877970,uVar5);
  return;
}



// FUNCTION 14127eb80 FUN_14127eb80 body=1012 status=ok
// SIG undefined FUN_14127eb80(void)

void FUN_14127eb80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  pwVar12 = (wchar_t *)0x0;
  local_38 = FUN_141277d00;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  uVar4 = FUN_142d52a20(param_2);
  uVar4 = FArchive::operator<<(uVar4);
  plVar5 = (longlong *)FUN_142d621c0(uVar4);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_144213d80;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_144213dc8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,local_res18);
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  uVar4 = FUN_142d52a20(param_2);
  uVar4 = FArchive::operator<<(uVar4);
  lVar7 = FDuplicateDataWriter::GetSerializeContext(uVar4);
  if (lVar7 != 0) {
    uVar4 = FUN_142d52a20(param_2);
    uVar4 = FArchive::operator<<(uVar4);
    cVar3 = FConstraintInstance::IsValidConstraintInstance(uVar4);
    if (cVar3 != '\0') {
      uVar4 = FUN_142d52a20(param_2);
      lVar9 = FArchive::operator<<(uVar4);
      if (*(longlong *)(lVar9 + 8) != 0) {
        uVar4 = FUN_142d52a20(param_2);
        lVar9 = FArchive::operator<<(uVar4);
        lVar7 = FUN_142d62010(lVar7,*(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x30));
        if (lVar7 != 0) {
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_141277df0;
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnShieldsFilled",L"::");
          pwVar11 = pwVar12;
          while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar11 = pwVar2;
          }
          FName::FName(local_res18,pwVar11 + 2,1);
          FUN_1407260e0(lVar7 + 0x28,param_1,&local_38,local_res18[0]);
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_141277d70;
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnShieldsDepleted",L"::");
          pwVar11 = pwVar12;
          while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar11 = pwVar2;
          }
          FName::FName(local_res18,pwVar11 + 2,1);
          FUN_1407260e0(lVar7 + 8,param_1,&local_38,local_res18[0]);
        }
        lVar7 = FUN_14126f930(param_1);
        if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x640), lVar7 != 0)) {
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_141276150;
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeNormal",L"::");
          pwVar11 = pwVar12;
          while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar11 = pwVar2;
          }
          FName::FName(local_res18,pwVar11 + 2,1);
          FUN_1407260e0(lVar7 + 0x898,param_1,&local_38,local_res18[0]);
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_141276080;
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeLow",L"::");
          pwVar11 = pwVar12;
          while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar11 = pwVar2;
          }
          FName::FName(local_res18,pwVar11 + 2,1);
          FUN_1407260e0(lVar7 + 0x8a8,param_1,&local_38,local_res18[0]);
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_141276220;
          pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeVeryLow",L"::");
          while (pwVar10 = pwVar11, pwVar10 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
            pwVar12 = pwVar10;
          }
          FName::FName(local_res18,pwVar12 + 2,1);
          FUN_1407260e0(lVar7 + 0x8b8,param_1,&local_38,local_res18[0]);
        }
      }
    }
  }
  return;
}



// FUNCTION 14127ef80 FUN_14127ef80 body=7 status=ok
// SIG undefined FUN_14127ef80(void)

void FUN_14127ef80(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3ea) = param_2;
  return;
}



// FUNCTION 14127ef90 FUN_14127ef90 body=85 status=ok
// SIG undefined FUN_14127ef90(void)

void FUN_14127ef90(longlong param_1,ushort param_2)

{
  byte bVar1;
  
  FUN_140a71dd0();
  bVar1 = FUN_140596bf0(param_1);
  bVar1 = (byte)(param_2 >> (bVar1 & 0x1f));
  if (bVar1 == 0xff) {
    *(undefined4 *)(param_1 + 0x6e0) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0x6e0) = (uint)bVar1;
  return;
}



// FUNCTION 14127eff0 FUN_14127eff0 body=195 status=ok
// SIG undefined FUN_14127eff0(void)

void FUN_14127eff0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x95d) != '\0') {
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x700);
    uVar6 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x708) < puVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        uVar1 = *puVar5;
        lVar2 = UNiagaraSystem::GetEffectType(uVar1);
        if (lVar2 != 0) {
          plVar3 = (longlong *)UNiagaraSystem::GetEffectType(uVar1);
          (**(code **)(*plVar3 + 0x638))(plVar3,-(param_2 != '\0') & 3);
        }
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  FUN_14308c610(param_1,param_2);
  return;
}



// FUNCTION 14127f0c0 IsOverHitTestVisibleWidget body=8 status=ok
// SIG undefined IsOverHitTestVisibleWidget(void)

undefined1 UWidgetInteractionComponent::IsOverHitTestVisibleWidget(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3ea);
}



// FUNCTION 14127f0d0 FUN_14127f0d0 body=318 status=ok
// SIG undefined FUN_14127f0d0(void)

void FUN_14127f0d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  if (0 < *(int *)(param_1 + 0x960)) {
    lVar4 = *(longlong *)(param_1 + 0x958);
    plVar1 = *(longlong **)(lVar4 + 0x28);
    if ((plVar1 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x960))) {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x310))(plVar1,0);
        FUN_14127a870(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x10),0);
        lVar4 = *(longlong *)(param_1 + 0x958);
      }
      if (*(longlong *)(lVar4 + 0x20) != 0) {
        uVar3 = FUN_14309ed70(param_1);
        lVar4 = FUN_14307d810(uVar3,*(undefined1 *)(param_1 + 0x180));
        if (lVar4 != 0) {
          lVar5 = FUN_14149a420();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (FUN_140a09920(lVar4,&local_res8,1), local_res8 != 0)) {
            local_38[0] = 0;
            local_38[1] = 0;
            FUN_1405a2d20(local_res8,local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x20)
                          ,0,0,local_38);
            FUN_140591060(local_28);
            if (local_38[0] != 0) {
              FMemory::Free();
            }
            if (local_res8 != 0) {
              FUN_1405a53f0();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14127f210 FUN_14127f210 body=337 status=ok
// SIG undefined FUN_14127f210(void)

void FUN_14127f210(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x310) != 0)) &&
     (*(longlong *)(param_1 + 0x318) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x340);
    if (param_2 == '\0') {
      if (lVar2 != 0) {
        FUN_142e724b0(lVar2,*(longlong *)(param_1 + 0x310),DAT_146877928,0);
        *(undefined8 *)(param_1 + 0x340) = 0;
      }
    }
    else {
      if (lVar2 == 0) {
        cVar1 = (**(code **)(*plVar3 + 0x780))(plVar3);
        if (cVar1 != '\0') {
          lVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x668))();
          if (lVar2 != 0) {
            plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x188) + 0x668))();
            uVar4 = FUN_142e71aa0();
            uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
            *(undefined8 *)(param_1 + 0x340) = uVar4;
          }
        }
      }
      if (*(longlong *)(param_1 + 0x340) != 0) {
        FUN_142d9e0d0(*(longlong *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x310),0,
                      0x4110000041800000,0x41a00000,4,1,1,DAT_146877928,0,0,1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14127f370 FUN_14127f370 body=31 status=ok
// SIG undefined FUN_14127f370(void)

void FUN_14127f370(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14164ab60();
  FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 14127f390 FUN_14127f390 body=884 status=ok
// SIG undefined FUN_14127f390(void)

void FUN_14127f390(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (0 < *(int *)(param_1 + 0x960)) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::HideDummyProjectile",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar7 = local_res10;
    plVar11 = (longlong *)(param_1 + 0x1e0);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar9 = (int *)*plVar11;
    iVar1 = *(int *)(param_1 + 0x1e8);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
      if (((*piVar10 == local_38) && (piVar10[1] == local_34)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_30)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_14127f507;
        break;
      }
    }
    iVar1 = *(int *)(param_1 + 0x1e8);
    lVar7 = (longlong)iVar1;
    *(int *)(param_1 + 0x1e8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x1ec) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    lVar8 = *plVar11;
    *(int *)(lVar8 + lVar7 * 0x10) = local_38;
    *(int *)(lVar8 + 4 + lVar7 * 0x10) = local_34;
    *(longlong *)(lVar8 + 8 + lVar7 * 0x10) = local_30;
LAB_14127f507:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    lVar7 = *(longlong *)(param_1 + 0x118);
    if (lVar7 != 0) {
      lVar8 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::NotifyHiddenDummyProjectile",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_res10,pwVar4 + 2,1);
        plVar11 = (longlong *)(lVar7 + 0x570);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res10;
        if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_30);
        }
        piVar9 = (int *)*plVar11;
        iVar1 = *(int *)(lVar7 + 0x578);
        for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
          if (((*piVar10 == local_38) && (piVar10[1] == local_34)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_30)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_14127f6a3;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x578);
        *(int *)(lVar7 + 0x578) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x57c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
        *piVar9 = local_38;
        piVar9[1] = local_34;
        *(longlong *)(piVar9 + 2) = local_30;
LAB_14127f6a3:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x958);
  lVar8 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x30) {
    if (*(longlong *)(lVar7 + 0x28) == 0) {
      FUN_14127f9a0(lVar7,*(undefined8 *)(param_1 + 0x118),param_1);
    }
  }
  return;
}



// FUNCTION 14127f710 FUN_14127f710 body=643 status=ok
// SIG undefined FUN_14127f710(void)

void FUN_14127f710(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10;
  
  iVar3 = FUN_14233f450();
  if (iVar3 != 3) {
    return;
  }
  lVar5 = FUN_140e83500(param_1 + 0x228,0);
  if (lVar5 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x7e0) == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x218);
  if (lVar5 != 0) {
    iVar3 = FUN_14233f450(param_1);
    if (iVar3 != 3) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    plVar7 = *(longlong **)(param_1 + 0x7e0);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    local_48 = 0;
    local_40 = 0;
    uVar6 = FUN_142dfdf30();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
    if (plVar7 == (longlong *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)(*plVar7 + 0x400))(plVar7);
    }
    cVar2 = FUN_143013ad0(&local_48,lVar5,1,uVar4,param_1,0,0);
    if ((cVar2 != '\0') && (0 < (int)local_40)) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      lVar5 = FUN_143018fc0(local_48,lVar5,0);
      if (lVar5 != 0) {
        lVar8 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1412603e0(param_1,lVar5,0);
        }
      }
    }
    FUN_1409f5880(&local_48);
    return;
  }
  if (*(longlong *)(param_1 + 0x210) == 0) {
    return;
  }
  lVar9 = FUN_1430b3b80();
  lVar5 = *(longlong *)(param_1 + 0x210);
  lVar8 = lVar5;
  while( true ) {
    if (lVar8 == 0) {
      return;
    }
    if (lVar8 == lVar9) break;
    lVar8 = *(longlong *)(lVar8 + 0x30);
  }
  if (lVar5 == 0) {
    return;
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 != 3) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar9 = FUN_1430b3b80();
  lVar8 = lVar5;
  while (lVar8 != lVar9) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x7e0) == 0) {
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_28 = *(undefined8 *)(param_1 + 0x7e0);
  local_10 = 1;
  local_20 = local_28;
  lVar9 = FUN_1430b3b80();
  lVar8 = lVar5;
  do {
    if (lVar8 == lVar9) goto LAB_14127f948;
    lVar8 = *(longlong *)(lVar8 + 0x30);
  } while (lVar8 != 0);
  lVar5 = 0;
LAB_14127f948:
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  lVar5 = UWorld::SpawnActor(lVar8,lVar5,0,0,local_38);
  if (lVar5 != 0) {
    FUN_1412603e0(param_1,lVar5,0);
  }
  return;
}



// FUNCTION 14127f9a0 FUN_14127f9a0 body=817 status=ok
// SIG undefined FUN_14127f9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14127f9a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined1 local_498 [560];
  longlong local_268 [2];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  longlong *local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  longlong *local_190;
  int local_188;
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  if ((param_2 != (longlong *)0x0) &&
     (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4c8, *param_1 != 0)) {
    lVar1 = FUN_1428dfc70();
    for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (*param_1 == 0) {
          return;
        }
        if (param_3 == 0) {
          return;
        }
        lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
        if (lVar2 == 0) {
          return;
        }
        local_238 = _DAT_146877490 & _DAT_1468774a0;
        uStack_234 = uRam0000000146877494 & uRam00000001468774a4;
        uStack_230 = uRam0000000146877498 & uRam00000001468774a8;
        uStack_22c = uRam000000014687749c & uRam00000001468774ac;
        local_268[0] = 0;
        local_258 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        uStack_24c = uRam000000014687749c;
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 1;
        local_1d0 = 0;
        local_1cc = 0;
        local_1c8 = 0;
        local_1c6 = 1;
        local_1c0 = 0;
        local_1b8 = 0;
        FWeakObjectPtr::operator=(local_1b0,0);
        local_1a8 = 0;
        FWeakObjectPtr::operator=(local_1a0,0);
        local_268[0] = *param_1;
        local_218 = param_1[1];
        local_4a8 = FUN_14126ab30;
        local_198 = 0;
        local_190 = (longlong *)0x0;
        local_188 = 0;
        local_80 = 0;
        local_78 = 0;
        local_50 = 0;
        local_48 = 0;
        local_200 = CONCAT11(1,(undefined1)local_200);
        uStack_4a0 = 0;
        local_228 = param_2;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar3 == (longlong *)0x0) {
          if ((local_188 != 0) && (local_190 != (longlong *)0x0)) {
            (**(code **)(*local_190 + 0x28))(local_190,0);
            if (local_190 != (longlong *)0x0) {
              local_190 = (longlong *)FMemory::Realloc(local_190,0,0);
            }
            local_188 = 0;
          }
        }
        else {
          *plVar3 = (longlong)&PTR_FUN_1447405a0;
          FWeakObjectPtr::operator=(plVar3 + 1,param_3);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_4a8;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_4a8._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_4a0;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_49c;
          plVar3[4] = (longlong)param_1;
          lVar1 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar1;
          *plVar3 = (longlong)&PTR_FUN_1447405e8;
          FUN_141269870(plVar3,&local_190);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar1 = FMemory::Realloc(plVar3,0,0);
          if (lVar1 != 0) {
            FMemory::Free(lVar1);
          }
        }
        lVar1 = FUN_1428cce50(lVar2);
        if (lVar1 != 0) {
          uVar4 = FUN_140a7a570(local_498,local_268);
          FUN_1424ad6e0(lVar2,uVar4);
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        FUN_1409f5970(local_180);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_190);
        if (local_210 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14127fce0 FUN_14127fce0 body=49 status=ok
// SIG undefined FUN_14127fce0(void)

void FUN_14127fce0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x960))) {
    FUN_14127f9a0((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x958),
                  *(undefined8 *)(param_1 + 0x118),param_1);
    return;
  }
  return;
}



// FUNCTION 14127fd20 FUN_14127fd20 body=765 status=ok
// SIG undefined FUN_14127fd20(void)

longlong * FUN_14127fd20(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20;
  ushort local_1e;
  
  iVar2 = FUN_14233f450();
  if (((iVar2 != 3) || (param_2 == 0)) || (lVar8 = 0, *(longlong *)(param_2 + 0x50) == 0)) {
    return (longlong *)0x0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_48);
  local_38 = *(undefined8 *)(param_1 + 0x7e0);
  local_1e = local_1e | 4;
  local_20 = 1;
  local_30 = local_38;
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x40);
  lVar7 = lVar8;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x48)) && (*(longlong *)(param_2 + 0x50) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2 + 0x40,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x48) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(param_2 + 0x40);
      if (lVar3 != 0) goto LAB_14127fe18;
    }
  }
  else {
LAB_14127fe18:
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_14149a4d0();
      lVar4 = lVar3;
      do {
        lVar7 = lVar3;
        if (lVar4 == lVar5) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar7 = lVar8;
      } while (lVar4 != 0);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  plVar6 = (longlong *)UWorld::SpawnActor(lVar3,lVar7,0,0,local_48);
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar7 = FUN_14149a4d0();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (*(longlong *)(param_2 + 0x78) == 0)) goto LAB_14127ffc7;
  lVar3 = param_2 + 0x68;
  lVar7 = FWeakObjectPtr::Get(lVar3);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x70)) && (*(longlong *)(param_2 + 0x78) != 0)) {
      lVar7 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar7);
      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x70) = DAT_1464b56f4;
      }
      lVar7 = FWeakObjectPtr::Get(lVar3);
      if (lVar7 != 0) goto LAB_14127ff66;
    }
LAB_14127ff9c:
    lVar7 = lVar8;
  }
  else {
LAB_14127ff66:
    lVar3 = FUN_14149a370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14127ff9c;
  }
  if ((char)plVar6[0x25] == '\x03') {
    plVar6[0x12d] = lVar7;
    (**(code **)(*plVar6 + 0x600))(plVar6);
    (**(code **)(*plVar6 + 0xae0))(plVar6);
  }
LAB_14127ffc7:
  UGameplayStatics::FinishSpawningActor(plVar6,&DAT_1468b5b70);
  FUN_1412603e0(param_1,plVar6,param_3);
  return plVar6;
}



// FUNCTION 141280020 FUN_141280020 body=339 status=ok
// SIG undefined FUN_141280020(void)

longlong FUN_141280020(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar3 = FUN_14233f450();
  if (((iVar3 == 3) && (param_2 != 0)) &&
     (plVar6 = *(longlong **)(param_1 + 0x7e0), plVar6 != (longlong *)0x0)) {
    lVar9 = 0;
    local_18 = 0;
    local_10 = 0;
    uVar5 = FUN_142dfdf30();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
    if (plVar6 == (longlong *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x400))(plVar6);
    }
    cVar2 = FUN_143013ad0(&local_18,param_2,1,uVar4,param_1,0,0);
    if ((cVar2 != '\0') && (0 < (int)local_10)) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
      }
      lVar7 = FUN_143018fc0(local_18,lVar7,0);
      if (lVar7 != 0) {
        lVar8 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1412603e0(param_1,lVar7,param_3);
          lVar9 = lVar7;
        }
      }
    }
    FUN_1409f5880(&local_18);
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}



// FUNCTION 141280180 FUN_141280180 body=234 status=ok
// SIG undefined FUN_141280180(void)

longlong FUN_141280180(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (param_2 != 0)) {
    lVar2 = FUN_1430b3b80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        if (*(longlong *)(param_1 + 0x7e0) == 0) {
          return 0;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_38);
        local_28 = *(undefined8 *)(param_1 + 0x7e0);
        local_10 = 1;
        local_20 = local_28;
        lVar2 = FUN_1430b3b80();
        lVar3 = param_2;
        goto LAB_141280202;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0) {
LAB_141280202:
    if (lVar3 == lVar2) goto LAB_141280212;
  }
  param_2 = 0;
LAB_141280212:
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = UWorld::SpawnActor(lVar3,param_2,0,0,local_38);
  if (lVar3 != 0) {
    FUN_1412603e0(param_1,lVar3,param_3);
  }
  return lVar3;
}



// FUNCTION 141280270 FUN_141280270 body=521 status=ok
// SIG undefined FUN_141280270(void)

void FUN_141280270(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  uint local_60;
  int local_5c;
  undefined8 *local_58;
  ulonglong local_50;
  undefined4 local_48;
  
  lVar1 = param_1[2];
  puVar6 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    uVar5 = 0;
    puVar9 = puVar6;
    if (lVar1 != 0) {
      uVar2 = AUGDoor::GetPrivateStaticClass();
      AActor::GetComponentsByTag(param_2,&local_58,uVar2,lVar1);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      local_5c = 0;
      puVar4 = puVar6;
      if (0 < (int)local_50) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68,local_50 & 0xffffffff);
        puVar4 = (undefined8 *)(ulonglong)local_60;
      }
      puVar8 = (undefined8 *)
               ((ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3);
      if (local_58 + (int)local_50 < local_58) {
        puVar8 = puVar6;
      }
      puVar7 = local_58;
      puVar9 = local_68;
      puVar10 = puVar6;
      uVar5 = (uint)puVar4;
      if (puVar8 != (undefined8 *)0x0) {
        do {
          uVar2 = *puVar7;
          iVar3 = (int)puVar4;
          local_60 = iVar3 + 1;
          if (local_5c < (int)local_60) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,puVar4);
            puVar9 = local_68;
          }
          puVar4 = (undefined8 *)(ulonglong)local_60;
          puVar9[iVar3] = uVar2;
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
          puVar7 = puVar7 + 1;
          uVar5 = local_60;
        } while (puVar10 != puVar8);
      }
      if (local_58 != (undefined8 *)0x0) {
        FMemory::Free(local_58);
      }
    }
    if (param_3 != '\0') {
      FUN_1412808f0(param_1);
    }
    puVar4 = (undefined8 *)((longlong)(int)uVar5 & 0x1fffffffffffffff);
    if (puVar9 + (int)uVar5 < puVar9) {
      puVar4 = puVar6;
    }
    puVar8 = puVar9;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (*param_1 == 0) {
          FUN_140590080(&local_58);
        }
        else {
          FUN_1405a3150(*puVar8,&local_58,*param_1,0);
        }
        iVar3 = (int)param_1[4];
        *(int *)(param_1 + 4) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 3,iVar3);
        }
        lVar1 = param_1[3] + (longlong)iVar3 * 0x18;
        FUN_14058f8f0(lVar1,&local_58);
        *(undefined4 *)(lVar1 + 0x10) = local_48;
        FUN_140591060(&local_58);
        puVar8 = puVar8 + 1;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
      } while (puVar6 != puVar4);
    }
    if (puVar9 != (undefined8 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  return;
}



// FUNCTION 141280480 FUN_141280480 body=305 status=ok
// SIG undefined FUN_141280480(void)

void FUN_141280480(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x298) != 0) && (*(longlong *)(param_1 + 0x288) != 0)) {
    iVar1 = *(int *)(param_1 + 0x2ec);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x260))) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 600) + (longlong)iVar1 * 0x10);
      if (lVar2 == 0) {
        FUN_140590080(local_28);
      }
      else {
        FUN_1405a3150(*(longlong *)(param_1 + 0x298),local_28,lVar2,0);
      }
      FUN_140591060(local_28);
    }
    plVar3 = *(longlong **)(param_1 + 0x268);
    plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0x270) * 2;
    for (; plVar3 != plVar5; plVar3 = plVar3 + 2) {
      if (*plVar3 == 0) {
        FUN_140590080(local_28);
      }
      else {
        FUN_1405a3150(*(undefined8 *)(param_1 + 0x298),local_28,*plVar3,0);
      }
      FUN_140591060(local_28);
    }
    lVar4 = *(longlong *)(param_1 + 0x278);
    lVar2 = lVar4 + (longlong)*(int *)(param_1 + 0x280) * 0x28;
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x28) {
      FUN_141280270(lVar4,*(undefined8 *)(param_1 + 0x288),param_2);
    }
  }
  return;
}



// FUNCTION 1412805c0 FUN_1412805c0 body=158 status=ok
// SIG undefined FUN_1412805c0(void)

void FUN_1412805c0(longlong param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x230)) {
    FUN_140e91ca0(param_1 + 0x228,param_2,1,param_3);
    cVar1 = FUN_140e969b0(param_1 + 0x228,param_2);
    if (((cVar1 == '\0') &&
        (plVar2 = (longlong *)FUN_140e83500(param_1 + 0x228,param_2), plVar2 != (longlong *)0x0)) &&
       (cVar1 = FUN_141268880(param_1,param_2,0), cVar1 != '\0')) {
      (**(code **)(*plVar2 + 0x818))(plVar2,param_3);
    }
  }
  return;
}



// FUNCTION 141280660 FUN_141280660 body=223 status=ok
// SIG undefined FUN_141280660(void)

void FUN_141280660(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0x7f0) = 1;
  plVar2 = (longlong *)FUN_140e83500(param_1 + 0x228,0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  plVar3 = (longlong *)FUN_140e83500(param_1 + 0x228,0);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x7c8))(plVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  cVar1 = FUN_140e71290(param_1 + 0x228,1);
  if (cVar1 == '\0') {
    lVar4 = FUN_140e83500(param_1 + 0x228,0);
    if (((lVar4 == 0) || (cVar1 = FUN_14307ee20(lVar4,1), cVar1 == '\0')) ||
       (cVar1 = FUN_141271060(param_1), cVar1 == '\0')) {
      (**(code **)(*plVar2 + 0x8b8))(plVar2);
      local_res8[0] = 1;
    }
    else {
      (**(code **)(*plVar2 + 0x8c0))(plVar2,0,1);
      local_res8[0] = 2;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1b8,local_res8);
    return;
  }
  return;
}



// FUNCTION 141280740 FUN_141280740 body=423 status=ok
// SIG undefined FUN_141280740(void)

void FUN_141280740(longlong param_1,uint param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      plVar3 = (longlong *)FUN_140e83500(param_1 + 0x228,uVar4 & 0xff);
      if (plVar3 != (longlong *)0x0) {
        if ((*(char *)((longlong)plVar3 + 0x62c) == '\0') && ((param_2 >> 1 & 1) != 0)) {
          if (param_3 != '\0') {
            *(undefined1 *)(param_1 + 0x7f0) = 0;
          }
          (**(code **)(*plVar3 + 0x8c0))(plVar3,0,1);
          local_res8[0] = 2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x1b8,local_res8);
        }
        if ((param_2 & 1) != 0) {
          FUN_140e91030(param_1 + 0x228,uVar4 & 0xff,0);
          if (param_3 != '\0') {
            FUN_140e75d10(param_1 + 0x228,uVar4 & 0xff);
          }
          (**(code **)(*plVar3 + 0x820))(plVar3,0);
        }
        if ((param_2 >> 2 & 1) != 0) {
          (**(code **)(*plVar3 + 0x8a8))(plVar3);
        }
        if ((param_2 >> 3 & 1) != 0) {
          (**(code **)(*plVar3 + 0x8e8))(plVar3);
        }
      }
      if (param_4 != '\0') {
        iVar2 = FUN_14233f450(param_1);
        if ((iVar2 == 3) &&
           ((*(longlong **)(param_1 + 0x7e0) == (longlong *)0x0 ||
            (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 == '\0')))) {
          FUN_1412d9010(param_1,uVar4 & 0xff,param_2,param_3);
        }
        else {
          iVar2 = FUN_14233f450(param_1);
          if ((iVar2 != 3) &&
             ((*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0 &&
              (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 != '\0'))))
          {
            FUN_1412d9b50(param_1,uVar4 & 0xff,param_2,param_3);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 1412808f0 FUN_1412808f0 body=359 status=ok
// SIG undefined FUN_1412808f0(void)

void FUN_1412808f0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  uVar6 = (ulonglong)*(int *)(param_1 + 0x20);
  puVar1 = puVar7 + uVar6 * 3;
  if (puVar7 != puVar1) {
    do {
      cVar2 = FUN_14059ee90(puVar7);
      if ((cVar2 != '\0') || (cVar2 = FUN_14059ee00(puVar7), cVar2 != '\0')) {
        if (*(longlong *)(param_1 + 8) == 0) {
          FUN_1405ac8f0(puVar7,0,4);
        }
        else {
          local_48 = 0;
          local_40 = 0;
          FUN_1405a2d20(*puVar7,local_38,*(longlong *)(param_1 + 8),0,0,&local_48);
          FUN_140591060(local_38);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        lVar4 = FUN_140590080(local_38);
        FUN_1405913a0(puVar7);
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(lVar4 + 0x10);
        FUN_140591060(local_38);
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar1);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  iVar3 = *(int *)(param_1 + 0x24);
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar5 = (uint)uVar6;
  if (iVar3 < 0) {
    if (uVar5 != 0) {
      do {
        FUN_140591060(lVar4);
        lVar4 = lVar4 + 0x18;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar3 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x18,0);
    }
  }
  else {
    while (uVar5 != 0) {
      FUN_140591060(lVar4);
      lVar4 = lVar4 + 0x18;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 141280a60 FUN_141280a60 body=66 status=ok
// SIG undefined FUN_141280a60(void)

void FUN_141280a60(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_14127b0e0(param_3,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_2 + 0x118),param_1);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_3 + 0x10) = local_res8;
  *(undefined4 *)(param_3 + 0x14) = local_resc;
  return;
}



// FUNCTION 141280ab0 FUN_141280ab0 body=429 status=ok
// SIG undefined FUN_141280ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141280ab0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118 [24];
  undefined8 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_141270040(param_2,param_1 + 0x50,local_118);
  uVar6 = local_50 & 0xffffffff;
  puVar1 = local_58;
  if (0 < (int)local_50) {
    puVar4 = *(undefined8 **)(param_1 + 0x68);
    puVar8 = puVar4 + (longlong)*(int *)(param_1 + 0x70) * 2;
    for (; puVar4 != puVar8; puVar4 = puVar4 + 2) {
      uVar7 = 0;
      switch(*(undefined1 *)(puVar4 + 1)) {
      case 0:
      case 3:
        goto switchD_141280b77_caseD_0;
      case 1:
      case 5:
        uVar7 = 0;
        break;
      case 2:
      case 4:
        uVar7 = 1;
      }
      puVar2 = local_118;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2 = puVar1;
      }
      uVar3 = (longlong)(int)uVar6 & 0x1fffffffffffffff;
      if (puVar2 + (int)uVar6 < puVar2) {
        uVar3 = 0;
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x958))((longlong *)*puVar2,*puVar4,uVar7);
          uVar5 = uVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar5 != uVar3);
        uVar6 = local_50 & 0xffffffff;
        puVar1 = local_58;
      }
switchD_141280b77_caseD_0:
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 141280cc0 FUN_141280cc0 body=87 status=ok
// SIG undefined FUN_141280cc0(void)

void FUN_141280cc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x8b) != '\0') {
    FUN_141279ed0(param_3,param_2,param_1);
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_3 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_3 + 0x10);
    FUN_142600fa0(uVar2);
    return;
  }
  return;
}



// FUNCTION 141280d30 FUN_141280d30 body=296 status=ok
// SIG undefined FUN_141280d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141280d30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    uVar4 = 0;
    local_108 = 0;
    if (lVar1 != 0) {
      local_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_140609cc0(*(longlong *)(param_2 + 0x188),local_100,0);
      plVar5 = local_100;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      uVar6 = (longlong)(int)local_38 & 0x1fffffffffffffff;
      if (plVar5 + (int)local_38 < plVar5) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar5;
          cVar3 = UActorComponent::ComponentHasTag(lVar2,lVar1);
          if ((cVar3 != '\0') && (lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0xb10) = *(undefined4 *)(param_1 + 0x5c);
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141280e60 FUN_141280e60 body=138 status=ok
// SIG undefined FUN_141280e60(void)

void FUN_141280e60(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x438);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x440) * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((*(char *)(*plVar3 + 0x38) == param_2) &&
       ((lVar1 = *(longlong *)(*plVar3 + 0x48), lVar1 == 0 ||
        (cVar2 = FUN_142c48f60(lVar1,*(undefined8 *)(param_1 + 0x188),0), cVar2 != '\0')))) {
      (**(code **)(*(longlong *)*plVar3 + 0x288))((longlong *)*plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 141280ef0 FUN_141280ef0 body=43 status=ok
// SIG undefined FUN_141280ef0(void)

void FUN_141280ef0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140e83500(param_1 + 0x228);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141280f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x8a8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 141280f20 FUN_141280f20 body=97 status=ok
// SIG undefined FUN_141280f20(void)

void FUN_141280f20(longlong param_1,ulonglong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  FUN_140e91ca0(param_1 + 0x228,param_2,0,param_3);
  plVar1 = (longlong *)FUN_140e83500(param_1 + 0x228,param_2 & 0xff);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x820))(plVar1,param_3,0);
  }
  return;
}



// FUNCTION 141280f90 FUN_141280f90 body=386 status=ok
// SIG undefined FUN_141280f90(void)

void FUN_141280f90(longlong param_1,undefined1 param_2,ulonglong param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = param_3 & 0xffffffff;
  plVar3 = (longlong *)FUN_140e83500(param_1 + 0x228);
  if (plVar3 != (longlong *)0x0) {
    if ((*(char *)((longlong)plVar3 + 0x62c) == '\0') && ((uVar4 >> 1 & 1) != 0)) {
      if (param_4 != '\0') {
        *(undefined1 *)(param_1 + 0x7f0) = 0;
      }
      (**(code **)(*plVar3 + 0x8c0))(plVar3,0,CONCAT71((uint7)(uVar4 >> 9),1));
      local_res8[0] = 2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1b8,local_res8);
    }
    if ((param_3 & 1) != 0) {
      FUN_140e91030(param_1 + 0x228,param_2,0);
      if (param_4 != '\0') {
        FUN_140e75d10(param_1 + 0x228,param_2);
      }
      (**(code **)(*plVar3 + 0x820))(plVar3,0,1);
    }
    if ((uVar4 >> 2 & 1) != 0) {
      (**(code **)(*plVar3 + 0x8a8))(plVar3);
    }
    if ((uVar4 >> 3 & 1) != 0) {
      (**(code **)(*plVar3 + 0x8e8))(plVar3);
    }
  }
  if (param_5 != '\0') {
    iVar2 = FUN_14233f450(param_1);
    if ((iVar2 == 3) &&
       ((*(longlong **)(param_1 + 0x7e0) == (longlong *)0x0 ||
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 == '\0')))) {
      FUN_1412d9010(param_1,param_2,uVar4,param_4);
    }
    else {
      iVar2 = FUN_14233f450(param_1);
      if ((iVar2 != 3) &&
         ((*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0 &&
          (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar1 != '\0')))) {
        FUN_1412d9b50(param_1,param_2,uVar4,param_4);
      }
    }
    return;
  }
  return;
}



// FUNCTION 141281120 FUN_141281120 body=123 status=ok
// SIG undefined FUN_141281120(void)

void FUN_141281120(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0x7f0) = 0;
  plVar2 = (longlong *)FUN_140e83500(param_1 + 0x228,0);
  if (plVar2 != (longlong *)0x0) {
    if ((param_2 == '\0') && (cVar1 = FUN_141271060(param_1), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*plVar2 + 0x8c0))(plVar2,0,1);
    local_res8[0] = 2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1b8,local_res8);
  }
  return;
}



// FUNCTION 1412811a0 FUN_1412811a0 body=365 status=ok
// SIG undefined FUN_1412811a0(void)

void FUN_1412811a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11)

{
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined4 local_140;
  longlong local_98;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_140a25850(&local_168);
  local_168 = &PTR_FUN_1442c5630;
  local_28 = 0xbf800000bf800000;
  uStack_20 = 0x3f800000bf800000;
  local_18 = 0x3f800000;
  local_188 = *param_10;
  local_180 = *(undefined4 *)(param_10 + 1);
  local_14 = 0x3f800000;
  local_178 = *param_8;
  local_170 = *(undefined4 *)(param_8 + 1);
  local_160 = param_2;
  local_140 = param_3;
  FUN_141281310(param_1,&local_168,param_4,param_5,param_6,param_7,&local_178,param_9,&local_188,
                param_11,0);
  local_168 = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_40,0);
  local_38 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141281310 FUN_141281310 body=1460 status=ok
// SIG undefined FUN_141281310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141281310(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 param_10,char param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined8 *local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined4 local_2c8 [4];
  undefined8 local_2b8;
  undefined4 local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  float local_238;
  float fStack_234;
  float local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_20c;
  float local_204;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined1 local_177;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  longlong local_158;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [48];
  ulonglong local_98;
  
  if (param_1 != (longlong *)0x0) {
    local_98 = DAT_1468387a8 ^ (ulonglong)auStack_328;
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x688))();
    if (plVar5 != (longlong *)0x0) {
      param_1 = plVar5;
    }
    if ((param_1 != (longlong *)0x0) &&
       ((param_8 != (longlong *)0x0 ||
        ((lVar6 = FUN_142ddddc0(param_1), lVar6 != 0 &&
         (param_8 = (longlong *)FUN_142dcd660(lVar6,0), param_8 != (longlong *)0x0)))))) {
      FUN_140778ce0(&local_278,param_1,param_8,param_10);
      (**(code **)(*param_8 + 0x308))(param_8,&local_288);
      lVar6 = FUN_1423111b0(local_c8,param_1,param_3);
      local_2b8 = *param_9;
      fVar1 = *(float *)(lVar6 + 0x10);
      fVar2 = *(float *)(lVar6 + 0x14);
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      fVar3 = *(float *)(lVar6 + 0x18);
      local_2b0 = *(undefined4 *)(param_9 + 1);
      local_2c8[0] = 0x3f800000;
      local_268 = *param_7;
      local_260 = *(undefined4 *)(param_7 + 1);
      local_258 = local_288;
      local_250 = local_280;
      local_248 = local_278;
      local_240 = local_270;
      local_290 = fVar3;
      local_238 = fVar1;
      fStack_234 = fVar2;
      local_230 = fVar3;
      uVar7 = (**(code **)(*param_8 + 0x148))(param_8);
      local_2d8 = &local_2b8;
      local_2e0 = &local_268;
      local_300 = &local_258;
      local_2e8 = param_6;
      local_2f0 = param_5;
      local_308 = &local_248;
      local_2f8 = param_4;
      FUN_14306d000(uVar7,&local_2a8,local_2c8,&local_238);
      local_218 = *(undefined8 *)(param_2 + 0x10);
      local_228 = &PTR_FUN_1441f17f0;
      local_220 = *(undefined8 *)(param_2 + 8);
      local_210 = *(float *)(param_2 + 0x18);
      local_204 = *(float *)(param_2 + 0x24);
      local_20c = *(undefined8 *)(param_2 + 0x1c);
      local_200 = *(undefined4 *)(param_2 + 0x28);
      local_1fc = *(undefined8 *)(param_2 + 0x2c);
      local_1a8 = *(undefined8 *)(param_2 + 0x80);
      uStack_1a0 = *(undefined8 *)(param_2 + 0x88);
      iVar10 = *(int *)(param_2 + 0xd8);
      local_1e8 = *(longlong **)(param_2 + 0x40);
      lVar6 = *(longlong *)(param_2 + 0xd0);
      local_1f4 = *(undefined4 *)(param_2 + 0x34);
      local_1f0 = *(longlong **)(param_2 + 0x38);
      local_1e0 = *(longlong **)(param_2 + 0x48);
      local_1d0 = *(undefined4 *)(param_2 + 0x58);
      local_1c8 = *(longlong **)(param_2 + 0x60);
      local_1c0 = *(undefined8 *)(param_2 + 0x68);
      local_1b8 = *(undefined8 *)(param_2 + 0x70);
      local_188 = *(undefined8 *)(param_2 + 0xa0);
      local_178 = *(undefined1 *)(param_2 + 0xb0);
      local_1d8 = *(undefined8 *)(param_2 + 0x50);
      local_177 = *(undefined1 *)(param_2 + 0xb1);
      local_1cc = *(undefined4 *)(param_2 + 0x5c);
      local_170 = *(undefined8 *)(param_2 + 0xb8);
      local_1b0 = *(undefined4 *)(param_2 + 0x78);
      local_168 = *(undefined8 *)(param_2 + 0xc0);
      local_198 = *(undefined8 *)(param_2 + 0x90);
      uStack_190 = *(undefined8 *)(param_2 + 0x98);
      local_160 = *(undefined1 *)(param_2 + 200);
      local_17c = *(undefined4 *)(param_2 + 0xac);
      local_180 = *(float *)(param_2 + 0xa8);
      local_158 = 0;
      local_150 = iVar10;
      if (iVar10 == 0) {
        local_14c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_158,iVar10,0);
        puVar8 = (undefined4 *)(local_158 + 4);
        puVar9 = (undefined4 *)(lVar6 + 4);
        do {
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          iVar10 = iVar10 + -1;
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 4;
        } while (iVar10 != 0);
      }
      local_148 = *(undefined4 *)(param_2 + 0xe0);
      local_138 = *(undefined4 *)(param_2 + 0xf0);
      local_144 = *(undefined8 *)(param_2 + 0xe4);
      local_290 = fVar3 + local_2a0;
      local_13c = *(undefined4 *)(param_2 + 0xec);
      local_134 = *(undefined8 *)(param_2 + 0xf4);
      uStack_12c = *(undefined8 *)(param_2 + 0xfc);
      local_104 = *(undefined4 *)(param_2 + 0x124);
      local_114 = *(undefined8 *)(param_2 + 0x114);
      uStack_10c = *(undefined8 *)(param_2 + 0x11c);
      local_100 = *(undefined4 *)(param_2 + 0x128);
      local_124 = *(undefined8 *)(param_2 + 0x104);
      uStack_11c = *(undefined8 *)(param_2 + 0x10c);
      local_fc = *(undefined4 *)(param_2 + 300);
      local_e8 = *(undefined8 *)(param_2 + 0x140);
      uStack_e0 = *(undefined8 *)(param_2 + 0x148);
      local_f8 = *(undefined8 *)(param_2 + 0x130);
      local_d4 = *(undefined4 *)(param_2 + 0x154);
      local_d8 = *(undefined4 *)(param_2 + 0x150);
      local_f0 = local_f0 ^ (*(byte *)(param_2 + 0x138) ^ local_f0) & 1;
      if (plVar5 == (longlong *)0x0) {
        local_1e8 = param_1;
      }
      local_20c = CONCAT44(fVar2 + local_2a4,fVar1 + local_2a8);
      local_228 = &PTR_FUN_1442c5630;
      local_17c = local_2c8[0];
      local_180 = SQRT(local_2a8 * local_2a8 + local_2a4 * local_2a4 + local_2a0 * local_2a0);
      local_218 = uVar4;
      local_210 = fVar3;
      local_204 = local_290;
      local_1f0 = plVar5;
      local_1e0 = param_8;
      local_1c8 = param_1;
      if (param_11 == '\0') {
        FUN_143040df0(&local_228);
      }
      else {
        FUN_143040e50(&local_228,0);
      }
      local_228 = &PTR_FUN_1441f17f0;
      FWeakObjectPtr::operator=(&local_100,0);
      local_2b8 = 0;
      local_f8 = 0;
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1412818d0 FUN_1412818d0 body=1347 status=ok
// SIG undefined FUN_1412818d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1412818d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined7 uVar17;
  char cVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_378 [32];
  undefined1 local_358;
  undefined8 local_348;
  float local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  longlong local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined4 local_2e4;
  float local_2d8;
  undefined1 local_2c8 [336];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  longlong local_128;
  undefined1 local_114;
  undefined1 local_10c;
  undefined1 local_100;
  longlong local_e8;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  lVar10 = (**(code **)(*param_1 + 0x148))();
  lVar11 = lVar10;
  if (lVar10 != 0) {
    if (DAT_146b33f38 == 0) {
      lVar11 = FUN_142d7ebe0();
    }
    lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar8 != 0) {
      cVar18 = '\0';
      fVar1 = *(float *)(lVar8 + 0x3fc);
      fVar2 = *(float *)(lVar8 + 0x404);
      fVar3 = *(float *)(lVar8 + 0x408);
      fVar4 = *(float *)(lVar8 + 0x40c);
      fVar5 = *(float *)(lVar8 + 0x3f8);
      fVar6 = *(float *)(lVar8 + 0x400);
      plVar12 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
      lVar11 = plVar12[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x368))(plVar12);
        lVar11 = plVar12[0x1f];
        if (lVar11 != 0) goto LAB_1412819f9;
      }
      else {
LAB_1412819f9:
        cVar18 = *(char *)(lVar11 + 0x139);
      }
      local_318 = &local_320;
      fVar7 = *(float *)(lVar10 + 0x790);
      local_320 = lVar10;
      local_310 = FUN_14073d6c0(&local_320,DAT_146877090);
      plVar12 = local_318;
      local_308 = &local_320;
      local_300 = 0;
      puVar13 = (undefined8 *)FUN_14073d6c0(local_318,local_310);
      puVar14 = (undefined8 *)FUN_14073d6c0(local_308,local_300);
      if (puVar13 == puVar14) {
        uVar17 = (undefined7)((ulonglong)puVar14 >> 8);
      }
      else {
        do {
          plVar19 = (longlong *)puVar13[2];
          if (((((int)plVar19[0x1d9] < 1) && (cVar9 = FUN_14122a750(plVar19,1), cVar9 == '\0')) &&
              ((cVar18 == '\0' || (plVar19[0x11b] == 0)))) &&
             ((*(char *)((longlong)plVar19 + 0xebd) != '\0' &&
              (*(char *)((longlong)plVar19 + 0xed5) == '\0')))) {
            FUN_14123cd10(plVar19,0);
            fVar20 = *(float *)(plVar19 + 0x1da);
            if (0.0 < fVar20) {
              if ((fVar2 <= 0.0) || (fVar7 <= fVar20 + fVar2)) {
                if ((fVar3 <= 0.0) || (fVar7 <= fVar20 + fVar3)) {
                  if (0.0 < fVar4) {
                    lVar11 = plVar19[0x2d];
                    if (lVar11 == 0) {
                      local_2f0 = DAT_1468b5d98;
                      puVar15 = &local_2f8;
                      local_2f8 = _DAT_1468b5d90;
                    }
                    else {
                      puVar15 = (undefined8 *)&local_338;
                      local_338 = *(undefined4 *)(lVar11 + 0x220);
                      local_330 = *(undefined4 *)(lVar11 + 0x228);
                      uStack_334 = *(undefined4 *)(lVar11 + 0x224);
                    }
                    local_348 = *puVar15;
                    local_340 = *(float *)(puVar15 + 1);
                    lVar11 = FUN_140b7fd60(plVar19,&local_348);
                    if (lVar11 != 0) {
                      lVar11 = *(longlong *)(lVar11 + 0x168);
                      if (lVar11 == 0) {
                        local_2e4 = DAT_1468b5d98;
                        puVar15 = &local_2ec;
                        local_2ec = _DAT_1468b5d90;
                      }
                      else {
                        puVar15 = (undefined8 *)&local_32c;
                        local_32c = *(undefined4 *)(lVar11 + 0x220);
                        local_324 = *(undefined4 *)(lVar11 + 0x228);
                        uStack_328 = *(undefined4 *)(lVar11 + 0x224);
                      }
                      local_2d8 = *(float *)(puVar15 + 1);
                      fVar22 = (float)((ulonglong)*puVar15 >> 0x20) - local_348._4_4_;
                      fVar21 = (float)*puVar15 - (float)local_348;
                      if (fVar4 * fVar4 <
                          fVar22 * fVar22 + fVar21 * fVar21 +
                          (local_2d8 - local_340) * (local_2d8 - local_340)) {
                        FUN_14123ece0(plVar19,3);
                        goto LAB_141281d5f;
                      }
                    }
                  }
                  if ((0.0 < fVar1) && (fVar20 + fVar1 < fVar7)) {
                    uVar16 = FUN_142d52a20(plVar19 + 0x10b);
                    uVar16 = FArchive::operator<<(uVar16);
                    fVar20 = (float)FUN_142d61c30(uVar16);
                    uVar16 = UScrollBox::GetPrivateStaticClass();
                    lVar11 = (**(code **)(*plVar19 + 0x628))(plVar19,uVar16);
                    if (lVar11 != 0) {
                      local_358 = 0;
                      FUN_140a7aa40(local_2c8,plVar19,0,0);
                      FUN_142d32ae0(local_2c8,fVar20 * fVar6 * fVar5,0);
                      if (local_e8 != 0) {
                        FMemory::Free();
                      }
                      local_100 = 0;
                      local_10c = 0;
                      local_114 = 0;
                      if (local_128 != 0) {
                        FMemory::Free();
                      }
                      if (local_148 != 0) {
                        plVar19 = local_178;
                        if (local_158 != (longlong *)0x0) {
                          plVar19 = local_158;
                        }
                        if (plVar19 != (longlong *)0x0) {
                          (**(code **)(*plVar19 + 0x10))(plVar19,0);
                        }
                      }
                      if (local_158 != (longlong *)0x0) {
                        FMemory::Free();
                      }
                    }
                  }
                }
                else {
                  FUN_14123ece0(plVar19,1);
                }
              }
              else {
                FUN_14123ece0(plVar19,3);
              }
            }
          }
LAB_141281d5f:
          puVar13 = (undefined8 *)FUN_14073d6c0(plVar12,*puVar13);
        } while (puVar13 != puVar14);
        uVar17 = (undefined7)((ulonglong)puVar13 >> 8);
      }
      goto LAB_141281def;
    }
  }
  uVar17 = (undefined7)((ulonglong)lVar11 >> 8);
LAB_141281def:
  return CONCAT71(uVar17,1);
}



// FUNCTION 141281e20 FUN_141281e20 body=543 status=ok
// SIG undefined FUN_141281e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141281e20(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 local_24c;
  undefined2 local_24b;
  undefined1 local_249;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FUN_1430df070();
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    lVar6 = AUGSpawnProxyManager::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((((*(char *)(param_1 + 0x1c1) != '\0') &&
           (0.0 < *(float *)(param_1 + 0x218) || *(float *)(param_1 + 0x218) == 0.0)) &&
          (0.0 < *(float *)(lVar2 + 0x3b8) || *(float *)(lVar2 + 0x3b8) == 0.0)) &&
         ((*(longlong *)(param_1 + 0x120) != 0 || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)))) {
        lVar6 = *(longlong *)(param_1 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
        }
        fVar1 = *(float *)(lVar6 + 0x790);
        if (*(float *)(lVar2 + 0x3b8) <= fVar1 - *(float *)(param_1 + 0x218)) {
          local_258 = 0xbf800000;
          local_24b = 0;
          local_249 = 0;
          local_24c = 0;
          local_254 = 0xbf800000;
          local_250 = 0xbf800000;
          local_248 = 0x3f800000;
          local_244 = 0x3f800000;
          local_240 = 0x3f800000;
          uVar7 = FUN_142d0a300(local_238);
          local_278 = &local_258;
          local_268 = 0;
          local_270 = 0;
          FUN_140a86fb0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(lVar2 + 0x3b0),0,uVar7);
          FUN_1409c53c0(local_238);
          *(float *)(param_1 + 0x218) = fVar1;
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      if (plVar3 != (longlong *)0x0) {
        lVar6 = FUN_14148cad0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar7 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
          lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
          if ((*(longlong *)(lVar2 + 0x3a8) == 0) || (lVar6 == 0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
          *(undefined1 *)(param_1 + 0x1c0) = uVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 141282040 FUN_141282040 body=747 status=ok
// SIG undefined FUN_141282040(void)

void FUN_141282040(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_88 [12];
  undefined1 local_7c [116];
  
  FUN_142357eb0();
  if ((*(char *)(param_1 + 0x2d5) != '\0') &&
     (((lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != 0 ||
       (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) &&
      (cVar2 = UWorld::IsInSeamlessTravel(lVar3), cVar2 == '\0')))) {
    FUN_141273970(param_1);
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar3 = FUN_141227a00(*(longlong *)(param_1 + 0x288),0);
      if (lVar3 != 0) {
        FUN_141280480(param_1,1);
      }
    }
    *(undefined1 *)(param_1 + 0x2d5) = 0;
  }
  FUN_141268e00(param_1);
  if ((*(longlong *)(param_1 + 0x298) == 0) || (lVar3 = *(longlong *)(param_1 + 0x290), lVar3 == 0))
  goto LAB_141282154;
  fVar6 = *(float *)(lVar3 + 0x308);
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x288) + 0x7a0);
  if (1e-08 < ABS(fVar6)) {
    fVar10 = fVar10 / fVar6;
    fVar6 = 0.0;
    if (0.0 <= fVar10) goto LAB_141282137;
  }
  else {
    if (fVar10 < fVar6) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = 1.0;
    }
LAB_141282137:
    fVar6 = fVar10;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  FUN_1405a93e0(*(longlong *)(param_1 + 0x298),
                (1.0 - *(float *)(lVar3 + 0x304)) * fVar6 + *(float *)(lVar3 + 0x304));
LAB_141282154:
  if ((*(char *)(param_1 + 0x2d4) == '\0') ||
     (plVar1 = *(longlong **)(param_1 + 0x288), plVar1 == (longlong *)0x0)) {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  else {
    uVar4 = AUGDoor::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    if (lVar3 != 0) {
      fVar6 = *(float *)(lVar3 + 0x220);
      fVar10 = *(float *)(lVar3 + 0x224);
      fVar13 = *(float *)(lVar3 + 0x228);
      pfVar5 = (float *)FUN_14059d730(lVar3,local_88);
      fVar6 = *pfVar5 - fVar6;
      fVar10 = pfVar5[1] - fVar10;
      fVar13 = pfVar5[2] - fVar13;
      fVar7 = fVar10 * fVar10 + fVar6 * fVar6 + fVar13 * fVar13;
      fVar11 = fVar10;
      fVar12 = fVar6;
      fVar8 = fVar13;
      if ((fVar7 != 1.0) &&
         (fVar11 = DAT_1468b5d94, fVar12 = DAT_1468b5d90, fVar8 = DAT_1468b5d98, 1e-08 <= fVar7)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar11 = fVar10 * fVar8;
        fVar12 = fVar6 * fVar8;
        fVar8 = fVar13 * fVar8;
      }
      pfVar5 = (float *)(**(code **)(**(longlong **)(param_1 + 0x288) + 0x308))
                                  (*(longlong **)(param_1 + 0x288),local_7c);
      *(float *)(param_1 + 0x2dc) = fVar11 * pfVar5[1] + fVar12 * *pfVar5 + fVar8 * pfVar5[2];
    }
  }
  FUN_141282c10(param_1,param_2);
  return;
}



// FUNCTION 141282330 FUN_141282330 body=1382 status=ok
// SIG undefined FUN_141282330(void)

void FUN_141282330(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 local_res8;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  FUN_142357eb0();
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x188) + 0x138a) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x34b) == '\0') {
    if (*(char *)(param_1 + 0x328) != '\0') {
      *(undefined1 *)(param_1 + 0x328) = 0;
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    if (0.25 < *(float *)(lVar6 + 0x790) - *(float *)(param_1 + 0x428)) {
      *(undefined1 *)(param_1 + 0x34b) = 0;
      *(undefined1 *)(param_1 + 0x328) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3c0,0)
      ;
    }
  }
  if ((*(char *)(param_1 + 0x34c) != '\0') &&
     (cVar3 = UWorld::IsInSeamlessTravel(lVar5), cVar3 == '\0')) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1d0,0);
    *(undefined1 *)(param_1 + 0x34c) = 0;
    if (*(char *)(param_1 + 0x348) != '\0') {
      FUN_14127f210(param_1,1);
    }
    *(undefined1 *)(param_1 + 0x34c) = 0;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x668) != 0) {
    cVar3 = FUN_141214120();
    if (cVar3 == *(char *)(param_1 + 0x348)) {
      if (*(char *)(param_1 + 0x45a) != '\0') {
        FUN_14127f210(param_1);
        *(undefined1 *)(param_1 + 0x45a) = 0;
      }
    }
    else {
      *(char *)(param_1 + 0x348) = cVar3;
      if (cVar3 == '\0') {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1a0,0);
        FUN_14127f210(param_1,0);
        FUN_141280e60(param_1,5);
      }
      else {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 400);
        FUN_14127f210(param_1,1);
        FUN_14127a6d0(param_1,5);
      }
    }
  }
  uVar13 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x698);
  if (lVar5 == 0) goto LAB_141282641;
  cVar3 = *(char *)(param_1 + 0x349);
  if ((*(char *)(param_1 + 0x348) == '\0') ||
     ((fVar10 = (float)FUN_140963880(lVar5), fVar10 <= 0.01 &&
      (fVar10 = (float)FUN_140963e30(lVar5), fVar10 <= 0.01)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  fVar10 = *(float *)(param_1 + 0x2d4);
  *(undefined1 *)(param_1 + 0x349) = uVar4;
  fVar11 = (float)FUN_141229070(*(undefined8 *)(param_1 + 0x188));
  if ((0.9 < fVar11) || (*(char *)(param_1 + 0x34b) != '\0')) {
    uVar12 = FUN_140a23120(*(float *)(*(longlong *)(param_1 + 0x188) + 0x784) * 0.01,0xc,0xd);
    uVar8 = FRuntimeFloatCurve::GetRichCurve(param_1 + 600);
    fVar11 = (float)FRichCurve::Eval(uVar8,uVar12 & 0x7fffffff,0);
    fVar11 = fVar11 * *(float *)(param_1 + 0x2d0);
  }
  else {
    fVar11 = 0.0;
  }
  *(float *)(param_1 + 0x2d4) = fVar11;
  if (fVar10 == 0.0) {
    if (0.0 < fVar11) {
      local_res8 = FUN_141270ae0(param_1);
      lVar5 = param_1 + 0x2d8;
      puVar9 = &local_res8;
LAB_1412825fc:
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar5,puVar9);
    }
  }
  else if (fVar11 == 0.0) {
    lVar5 = param_1 + 0x2e8;
    puVar9 = (undefined8 *)0x0;
    goto LAB_1412825fc;
  }
  if (*(char *)(param_1 + 0x349) != cVar3) {
    if (*(char *)(param_1 + 0x349) == '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1c0,0)
      ;
      FUN_141280e60(param_1,6);
    }
    else {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b0,0)
      ;
      FUN_14127a6d0(param_1,6);
    }
  }
LAB_141282641:
  if (((((*(longlong **)(param_1 + 0x188) != (longlong *)0x0) &&
        (*(longlong *)(param_1 + 0x340) != 0)) && (*(longlong *)(param_1 + 0x310) != 0)) &&
      ((*(longlong *)(param_1 + 0x318) != 0 &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x780))(), cVar3 != '\0')))) &&
     (plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x188) + 0x670))(),
     plVar7 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar7 + 0x768))(plVar7);
    if ((cVar3 != '\0') && (plVar7[0xa5] != 0)) {
      uVar8 = FUN_1426e1d20(plVar7[0xa5],&local_68);
      FRotator::Vector(uVar8,&local_78);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168);
      if (lVar5 == 0) {
        local_60 = (float)DAT_1464aa7b0;
        puVar9 = &local_68;
        local_68 = DAT_1464aa7a8;
      }
      else {
        puVar9 = (undefined8 *)FUN_142369f10(lVar5,&local_68);
      }
      local_60 = *(float *)(puVar9 + 1);
      if (0.5 <= (float)*puVar9 * local_78 + (float)((ulonglong)*puVar9 >> 0x20) * local_74 +
                 local_60 * local_70) {
        uVar8 = FUN_140a23120(*(float *)(*(longlong *)(param_1 + 0x188) + 0x784) * 0.01,0xc,0xe);
        uVar13 = UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x318),uVar8);
      }
      FUN_142e72560(*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x310),DAT_146877928,
                    DAT_146877930,uVar13);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x188);
  if (*(int *)(lVar5 + 0x7a4) == *(int *)(lVar5 + 0x768) + 1) {
    FUN_141279c30(param_1,1);
    lVar5 = *(longlong *)(param_1 + 0x188);
  }
  fVar10 = (float)FUN_141224b80(lVar5);
  fVar11 = (float)FUN_141227440(*(undefined8 *)(param_1 + 0x188));
  bVar1 = ABS(fVar10 - fVar11) <= 1e-08;
  bVar2 = ABS(fVar10) <= 1e-08;
  if (bVar1 != (bool)*(char *)(param_1 + 0x459)) {
    if (bVar1) {
      FUN_14127a6d0();
    }
    else {
      FUN_141280e60(param_1,4);
    }
    *(bool *)(param_1 + 0x459) = bVar1;
  }
  if (bVar2 != (bool)*(char *)(param_1 + 0x458)) {
    if (bVar2) {
      FUN_14127a6d0();
    }
    else {
      FUN_141280e60(param_1,3);
    }
    *(bool *)(param_1 + 0x458) = bVar2;
  }
  return;
}



// FUNCTION 1412828a0 FUN_1412828a0 body=134 status=ok
// SIG undefined FUN_1412828a0(void)

void FUN_1412828a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x638) != '\0')) {
    thunk_FUN_142357eb0(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 141282930 FUN_141282930 body=729 status=ok
// SIG undefined FUN_141282930(void)

void FUN_141282930(longlong param_1)

{
  float *pfVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong in_stack_ffffffffffffff68;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong *plVar10;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_142357eb0();
    plVar15 = (longlong *)0x0;
    bVar4 = true;
    if (((*(longlong *)(param_1 + 0x2c0) == 0) ||
        (pfVar1 = (float *)(*(longlong *)(param_1 + 0x188) + 0x784),
        *pfVar1 <= *(float *)(param_1 + 0x214) && *(float *)(param_1 + 0x214) != *pfVar1)) ||
       (cVar5 = FUN_14122ebf0(), cVar5 != '\0')) {
      iVar6 = *(int *)(param_1 + 0x208);
      plVar10 = plVar15;
      plVar12 = plVar15;
      if (0 < iVar6) {
        do {
          lVar14 = *(longlong *)(param_1 + 0x200);
          lVar13 = *(longlong *)((longlong)plVar12 + lVar14 + 0x28);
          if (lVar13 != 0) {
            pbVar2 = (byte *)(lVar13 + 0x71a);
            *pbVar2 = *pbVar2 | 0x40;
            FUN_142600fa0(*(undefined8 *)((longlong)plVar12 + lVar14 + 0x28));
            *(undefined8 *)((longlong)plVar12 + lVar14 + 0x28) = 0;
          }
          iVar6 = *(int *)(param_1 + 0x208);
          uVar9 = (int)plVar10 + 1;
          plVar10 = (longlong *)(ulonglong)uVar9;
          plVar12 = plVar12 + 10;
        } while ((int)uVar9 < iVar6);
      }
      bVar4 = false;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x208);
    }
    if (0 < iVar6) {
      lVar14 = *(longlong *)(param_1 + 0x188);
      plVar10 = plVar15;
      plVar12 = plVar15;
      do {
        lVar13 = *(longlong *)(param_1 + 0x200) + (longlong)plVar12;
        if ((*(longlong *)(lVar13 + 0x38) == 0) ||
           (*(char *)(*(longlong *)(lVar13 + 0x38) + 0x128) != '\0')) {
          if (*(longlong *)(lVar13 + 0x28) != 0) {
            pbVar2 = (byte *)(*(longlong *)(lVar13 + 0x28) + 0x71a);
            *pbVar2 = *pbVar2 | 0x40;
            FUN_142600fa0(*(undefined8 *)(lVar13 + 0x28));
            *(undefined8 *)(lVar13 + 0x28) = 0;
          }
        }
        else {
          lVar3 = *(longlong *)(lVar13 + 8);
          if (*(int *)(lVar14 + 0xd00) != *(int *)(lVar14 + 0xd2c)) {
            lVar7 = *(longlong *)(lVar14 + 0xd38);
            if (*(longlong *)(lVar14 + 0xd38) == 0) {
              lVar7 = lVar14 + 0xd30;
            }
            iVar6 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                     (longlong)*(int *)(lVar14 + 0xd40) - 1U) * 4);
            if (iVar6 != -1) {
              do {
                plVar8 = (longlong *)((longlong)iVar6 * 0x68 + *(longlong *)(lVar14 + 0xcf8));
                if (*plVar8 == lVar3) {
                  if (iVar6 != -1) goto LAB_141282ab1;
                  break;
                }
                iVar6 = (int)plVar8[0xc];
              } while (iVar6 != -1);
            }
          }
          plVar8 = plVar15;
LAB_141282ab1:
          plVar11 = plVar8 + 1;
          if (plVar8 == (longlong *)0x0) {
            plVar11 = plVar15;
          }
          if (plVar11 != (longlong *)0x0) {
            if (bVar4) {
              FUN_141284a90(param_1,lVar13,plVar11);
            }
            in_stack_ffffffffffffff68 = param_1 + 0x298;
            FUN_141284e20(param_1,lVar13,plVar11 + 7,param_1 + 0x248,in_stack_ffffffffffffff68);
          }
        }
        uVar9 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar9;
        plVar12 = plVar12 + 10;
      } while ((int)uVar9 < *(int *)(param_1 + 0x208));
    }
    lVar14 = *(longlong *)(param_1 + 0x2b0);
    lVar13 = (longlong)*(int *)(param_1 + 0x2b8) * 0xb8 + lVar14;
    for (; lVar14 != lVar13; lVar14 = lVar14 + 0xb8) {
      FUN_14126f990(lVar14,local_58,*(undefined8 *)(param_1 + 0x188),0,
                    in_stack_ffffffffffffff68 & 0xffffffffffffff00);
      local_88 = local_48;
      local_80 = uStack_40;
      local_84 = uStack_44;
      FUN_141226010(*(undefined8 *)(param_1 + 0x188),local_78,&local_88);
      in_stack_ffffffffffffff68 = lVar14 + 0xa0;
      FUN_141284e20(param_1,lVar14,local_78,lVar14 + 0x50,in_stack_ffffffffffffff68);
    }
  }
  return;
}



// FUNCTION 141282c10 FUN_141282c10 body=2263 status=ok
// SIG undefined FUN_141282c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141282c10(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  char local_198;
  char local_197;
  undefined8 *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined8 local_178;
  ulonglong local_170;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_128;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((*(longlong **)(param_1 + 0x288) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x290) != 0))
  {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x668))();
    cVar5 = *(char *)(param_1 + 0x2d6);
    if ((lVar7 == 0) ||
       (fVar20 = (float)FUN_141228ce0(*(undefined8 *)(param_1 + 0x288)), ABS(fVar20) <= 0.05)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0x2d6) = cVar6;
    if ((cVar6 == cVar5) || (local_197 = '\x01', *(longlong *)(param_1 + 0x1b0) == 0)) {
      local_197 = '\0';
    }
    plVar13 = (longlong *)(param_1 + 0x2f0);
    local_128 = 0;
    local_190 = *(undefined8 **)(*(longlong *)(param_1 + 0x288) + 0x690);
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2c8)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar13);
    }
    cVar5 = FUN_14122e840(*(undefined8 *)(param_1 + 0x288));
    if ((cVar5 == '\0') && (cVar5 = FUN_14122e8f0(*(undefined8 *)(param_1 + 0x288)), cVar5 == '\0'))
    {
      lVar7 = *(longlong *)(param_1 + 0x288);
      local_198 = '\0';
      fVar20 = *(float *)(lVar7 + 0x788);
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x288);
      local_198 = '\x01';
      fVar20 = *(float *)(lVar7 + 0x78c);
    }
    fVar20 = fVar20 / *(float *)(param_1 + 0x17c);
    if (0.0 <= fVar20) {
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
    }
    else {
      fVar20 = 0.0;
    }
    lVar11 = *(longlong *)(param_1 + 0x2c0);
    local_188 = (longlong)*(int *)(param_1 + 0x2c8) * 0x30 + lVar11;
    if (lVar11 != local_188) {
      lVar7 = lVar11 + 0x20;
      do {
        cVar5 = FWeakObjectPtr::IsValid(lVar7 + -0x20);
        if ((cVar5 != '\0') && (cVar5 = FWeakObjectPtr::IsValid(lVar7 + -8), cVar5 != '\0')) {
          uVar8 = FWeakObjectPtr::Get(lVar7 + -0x20);
          lVar9 = FWeakObjectPtr::Get(lVar7 + -8);
          lVar11 = 0;
          if (lVar9 != 0) {
            lVar10 = FUN_1430e3550();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar11 = lVar9;
            }
          }
          if (local_197 != '\0') {
            FUN_1405a3150(uVar8,&local_148,*(undefined8 *)(param_1 + 0x1b0),0);
            FUN_140591060(&local_148);
          }
          lVar10 = FUN_1412293f0(*(undefined8 *)(param_1 + 0x288),lVar9);
          if ((((lVar10 != 0) && (*(longlong *)(lVar10 + 0x28) != 0)) &&
              (lVar10 = FUN_142db9220(*(undefined1 *)(*(longlong *)(lVar10 + 0x28) + 0x50)),
              lVar10 != 0)) && (cVar5 = FUN_140f12a40(lVar10,lVar7), cVar5 != '\0')) {
            FWeakObjectPtr::operator=(lVar7,lVar10);
            FUN_1405aaf50(uVar8,lVar10);
          }
          if (((*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x388) != 0) && (lVar11 != 0)) &&
             (*(char *)(lVar7 + 0xc) != *(char *)(lVar11 + 0x128))) {
            *(char *)(lVar7 + 0xc) = *(char *)(lVar11 + 0x128);
            if (*(char *)(lVar11 + 0x128) == '\0') {
              uVar22 = 0;
            }
            else {
              uVar22 = 0x3f800000;
            }
            local_1a8 = 4;
            FUN_1405aaad0(uVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x388),uVar22,0);
          }
          if (local_190 != (undefined8 *)0x0) {
            lVar10 = *(longlong *)(param_1 + 0x290);
            if (*(longlong *)(lVar10 + 0x3a0) != 0) {
              local_1a8 = 4;
              FUN_1405aaad0(uVar8,*(longlong *)(lVar10 + 0x3a0),
                            *(undefined4 *)((longlong)local_190 + 0x2d4),0);
              lVar10 = *(longlong *)(param_1 + 0x290);
            }
            if (*(longlong *)(lVar10 + 0x3a8) != 0) {
              fVar21 = *(float *)(param_1 + 500) - *(float *)(param_1 + 0x1f0);
              fVar23 = ABS(*(float *)(lVar9 + 0xac)) +
                       param_2 * *(float *)((longlong)local_190 + 0x2d4);
              if (1e-08 < ABS(fVar21)) {
                fVar21 = (fVar23 - *(float *)(param_1 + 0x1f0)) / fVar21;
                fVar23 = 0.0;
                if (0.0 <= fVar21) goto LAB_141282fe0;
              }
              else {
                fVar21 = 0.0;
                if (*(float *)(param_1 + 500) <= fVar23) {
                  fVar21 = 1.0;
                }
LAB_141282fe0:
                fVar23 = fVar21;
                if (1.0 <= fVar21) {
                  fVar23 = 1.0;
                }
              }
              local_1a8 = 4;
              FUN_1405aaad0(uVar8,*(longlong *)(lVar10 + 0x3a8),fVar23,0);
            }
          }
          if ((lVar11 != 0) &&
             (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x290) + 0x390), lVar11 != 0)) {
            local_1a8 = 4;
            FUN_1405aaad0(uVar8,lVar11,fVar20,0);
          }
          fVar21 = (float)FUN_1409648e0(lVar9);
          if (fVar21 < 0.0) {
            fVar23 = *(float *)(lVar9 + 0x84);
          }
          else {
            fVar23 = *(float *)(lVar9 + 0x80);
          }
          iVar18 = *(int *)(param_1 + 0x2f8);
          fVar1 = *(float *)(lVar7 + 8);
          fVar23 = fVar21 / fVar23;
          *(int *)(param_1 + 0x2f8) = iVar18 + 1;
          if (*(int *)(param_1 + 0x2fc) < iVar18 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar13,iVar18);
          }
          *(float *)(*plVar13 + (longlong)iVar18 * 4) = fVar23;
          fVar2 = *(float *)(param_1 + 0x1c8);
          if ((fVar23 <= fVar2) || (fVar2 < *(float *)(lVar7 + 8) || fVar2 == *(float *)(lVar7 + 8))
             ) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((*(float *)(param_1 + 0x1cc) <= fVar23) || (*(float *)(lVar7 + 8) <= fVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar3) {
            if (*(longlong *)(param_1 + 0x1b8) != 0) {
              FUN_1405a3150(uVar8,&local_148,*(longlong *)(param_1 + 0x1b8),0);
              FUN_140591060(&local_148);
            }
            if (bVar4) goto LAB_1412830fb;
LAB_14128311f:
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x290) + 0x370);
            if (lVar11 != 0) {
              local_1a8 = 4;
              FUN_1405aaad0(uVar8,lVar11,(fVar21 - fVar1) / param_2,0);
            }
          }
          else if (bVar4) {
LAB_1412830fb:
            if (*(longlong *)(param_1 + 0x1c0) != 0) {
              FUN_1405a3150(uVar8,&local_148,*(longlong *)(param_1 + 0x1c0),0);
              FUN_140591060(&local_148);
            }
            goto LAB_14128311f;
          }
          *(float *)(lVar7 + 8) = fVar21;
        }
        lVar11 = lVar7 + 0x10;
        lVar7 = lVar7 + 0x30;
      } while (lVar11 != local_188);
      lVar7 = *(longlong *)(param_1 + 0x288);
    }
    cVar5 = FUN_1430d8750(lVar7);
    if ((cVar5 != '\0') || (*(float *)(*(longlong *)(param_1 + 0x288) + 0x784) <= 1.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    cVar5 = FUN_14122ebf0(*(undefined8 *)(param_1 + 0x288));
    if (((bVar3) && (local_198 != '\0')) && (cVar5 == '\0')) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
    if ((cVar5 != *(char *)(param_1 + 0x2d7)) && (*(longlong *)(param_1 + 0x218) != 0)) {
      local_198 = cVar5;
      if (((*(char *)(param_1 + 0x220) == '\0') ||
          (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x780))(), cVar6 != '\0')) &&
         (cVar5 != '\0')) {
        local_190 = (undefined8 *)0x0;
        local_188 = FUN_1405ab470(*(undefined8 *)(param_1 + 0x288),0,1,0);
        if (local_188 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x288);
          iVar18 = 0;
          local_170 = 0;
          iVar14 = 0;
          local_164 = 0;
          if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x4d0) == 0)) ||
             ((lVar7 = *(longlong *)(lVar7 + 0x6a0), lVar7 == 0 || (*(int *)(lVar7 + 0x290) == 0))))
          {
            local_180 = 0;
            local_178 = 0;
          }
          else {
            plVar13 = *(longlong **)(lVar7 + 0x288);
            local_180 = 0;
            uVar19 = (longlong)*(int *)(lVar7 + 0x290) & 0x1fffffffffffffff;
            if (plVar13 + *(int *)(lVar7 + 0x290) < plVar13) {
              uVar19 = local_180;
            }
            uVar17 = local_180;
            iVar16 = 0;
            iVar15 = 0;
            if (uVar19 != 0) {
              do {
                iVar18 = iVar16;
                iVar14 = iVar15;
                if (*plVar13 != 0) {
                  lVar7 = **(longlong **)(*(longlong *)(param_1 + 0x288) + 0x4d0);
                  lVar11 = FUN_1409655a0();
                  (**(code **)(lVar7 + 0x420))
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x4d0),&local_108,
                             *(undefined8 *)(lVar11 + 8),2);
                  local_148 = local_108;
                  uStack_140 = uStack_100;
                  local_160 = local_f8;
                  local_158 = uStack_f0;
                  uStack_15c = uStack_f4;
                  local_190 = (undefined8 *)FQuat::Rotator(&local_148,local_120);
                  local_168 = iVar16 + 1;
                  if (iVar15 < local_168) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                    ::ResizeGrow(&local_170,iVar16);
                    local_128 = local_170;
                    iVar15 = local_164;
                  }
                  puVar12 = (undefined8 *)((longlong)iVar16 * 0x20 + local_128);
                  *puVar12 = CONCAT44(uStack_15c,local_160);
                  *(undefined4 *)(puVar12 + 1) = local_158;
                  *(undefined8 *)((longlong)puVar12 + 0xc) = *local_190;
                  *(undefined4 *)((longlong)puVar12 + 0x14) = *(undefined4 *)(local_190 + 1);
                  *(undefined4 *)(puVar12 + 3) = 0x42480000;
                  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0x3f800000;
                  local_180 = local_128;
                  iVar18 = local_168;
                  iVar14 = iVar15;
                }
                plVar13 = plVar13 + 1;
                uVar17 = uVar17 + 1;
                iVar16 = iVar18;
                iVar15 = iVar14;
              } while (uVar17 != uVar19);
            }
            local_178 = CONCAT44(iVar14,iVar18);
            cVar5 = local_198;
          }
          lVar7 = local_188;
          FUN_1405a9fb0(local_188,&local_180,2,1);
          if (local_180 != 0) {
            FMemory::Free();
          }
          lVar7 = FUN_1405a3150(lVar7,&local_148,*(undefined8 *)(param_1 + 0x218),0);
          FUN_1405913a0(param_1 + 0x308,lVar7);
          *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar7 + 0x10);
          FUN_140591060(&local_148);
        }
      }
      else {
        FUN_1405ac8f0(param_1 + 0x308,1,1);
      }
    }
    *(char *)(param_1 + 0x2d7) = cVar5;
  }
  return;
}



// FUNCTION 1412834f0 FUN_1412834f0 body=118 status=ok
// SIG undefined FUN_1412834f0(void)

void FUN_1412834f0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 0x228;
  plVar2 = (longlong *)FUN_140e83500(param_1);
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e83500(param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x7c8))(plVar3);
      if (cVar1 == '\0') {
        return;
      }
    }
    cVar1 = FUN_140e71290(param_1,3);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0x8f0))(plVar2,0);
    }
  }
  return;
}



// FUNCTION 141283570 FUN_141283570 body=218 status=ok
// SIG undefined FUN_141283570(void)

void FUN_141283570(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    if (param_2 == 0) {
      param_2 = FUN_140e7eef0(param_1 + 0x228);
    }
    if (param_3 == 0) {
      param_3 = FUN_140e7eef0(param_4 + 0x228,0);
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      uVar2 = FUN_141270f70(param_1,param_2);
      lVar3 = FUN_140e83500(param_1 + 0x228,uVar2);
      if ((lVar3 != 0) && (lVar1 = FUN_140a63ba0(lVar3), lVar1 == *(longlong *)(param_1 + 0x7e0))) {
        FUN_14127dec0(param_1,0,param_2,1,1);
        FUN_14127dec0(param_4,lVar3,param_3,1,1);
      }
    }
  }
  return;
}



// FUNCTION 141283650 FUN_141283650 body=390 status=ok
// SIG undefined FUN_141283650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141283650(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (*(longlong *)(param_1 + 0x288) != 0)) {
    lVar1 = FUN_14126e620();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_142db9220(*(undefined1 *)(lVar1 + 0x50));
    }
    local_30 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x168);
    local_38 = 0;
    if (lVar2 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar2 + 0x220);
      local_40 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_28 = local_48;
    local_20 = local_40;
    lVar2 = FUN_1405ab680(*(longlong *)(param_1 + 0x288),&local_28,0x42480000,&local_38,1);
    if (lVar2 != 0) {
      if (lVar1 != 0) {
        FUN_1405aaf50(lVar2,lVar1);
      }
      FUN_1405a3150(lVar2,&local_28,*(undefined8 *)(param_1 + 0x1d0),0);
      FUN_140591060(&local_28);
    }
    lVar1 = *(longlong *)(param_1 + 0x120);
    if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_1), lVar1 == 0)) {
      return;
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  return;
}



// FUNCTION 1412837e0 FUN_1412837e0 body=74 status=ok
// SIG undefined FUN_1412837e0(void)

undefined1 FUN_1412837e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    cVar1 = FUN_14124ed90(*(longlong *)(param_1 + 0x6d8),param_2,param_1);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  uVar2 = FUN_140a76a00(param_1,param_2);
  return uVar2;
}



// FUNCTION 141283830 FUN_141283830 body=126 status=ok
// SIG undefined FUN_141283830(void)

void FUN_141283830(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xa18);
  if ((bVar1 & 0x20) != 0) {
    if ((((bVar1 & 4) == 0) && (*(longlong *)(param_1 + 0x9e0) != 0)) &&
       ((*(char *)(param_1 + 0x128) == '\x03' || ((bVar1 & 1) != 0)))) {
      FUN_14149b220(param_1);
      *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 4;
      bVar1 = *(byte *)(param_1 + 0xa18);
    }
    if (((((bVar1 & 4) != 0) && (*(longlong *)(param_1 + 0xa08) != 0)) && ((bVar1 & 0x10) == 0)) &&
       ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) {
      FUN_14149b2a0(param_1);
      *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 0x10;
    }
  }
  return;
}



// FUNCTION 1412838b0 FUN_1412838b0 body=749 status=ok
// SIG undefined FUN_1412838b0(void)

void FUN_1412838b0(longlong param_1)

{
  bool bVar1;
  undefined4 *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  uint uVar6;
  undefined4 *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  if (((((*(byte *)(param_1 + 0xa18) & 2) != 0) && (*(longlong *)(param_1 + 0xa08) != 0)) &&
      ((*(byte *)(param_1 + 0xa18) & 8) == 0)) && ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) {
    FUN_14149b2e0();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146877af0) &&
       (_Init_thread_header(&DAT_146877af0), DAT_146877af0 == -1)) {
      FName::FName(&DAT_146877ae8,L"Augment_Mod_Sala_1",1);
      _Init_thread_footer(&DAT_146877af0);
    }
    if (((*(char *)(param_1 + 0x128) != '\x03') && (*(longlong *)(param_1 + 0xa08) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa08) + 0x18) == DAT_146877ae8)) {
      local_48 = (undefined4 *)0x0;
      local_40 = 0x9e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy
                (local_48,
                 L"/Game/Audio/Events/Characters/Player/Gunner/Char_Gunner_IronBear/Wep/AcidThrower/CONFIG/WE_Wep_IronBear_AcidThrower_CONFIG.WE_Wep_IronBear_AcidThrower_CONFIG"
                 ,0x13c);
      uVar2 = UPawnAction_Sequence::StaticClass();
      puVar3 = (undefined8 *)FName::FName(local_res8,L"WE_Wep_IronBear_AcidThrower_CONFIG",1);
      uVar6 = 0;
      lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,&local_48,0,0);
      if (local_48 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        local_48 = (undefined4 *)0x0;
        local_40 = 1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,0);
        _Src = local_48;
        local_28 = 0;
        local_20 = 0;
        local_38 = (void *)0x0;
        *local_48 = 2;
        *(longlong *)(local_48 + 2) = lVar4;
        lVar4 = (longlong)(int)local_40;
        local_30 = (int)local_40;
        if ((int)local_40 == 0) {
          local_2c = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 << 4);
        }
        FUN_14127c0f0(param_1,0,&local_38,&local_28,uVar6 & 0xffffff00);
        FMemory::Free(_Src);
      }
      plVar5 = (longlong *)FUN_14307cf20(param_1,0);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = FUN_1430bdfe0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_48 = (undefined4 *)0x0;
          local_40 = 0x59;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy
                    (local_48,
                     L"/Game/GameData/DamageTypes/Corrosive/DmgType_Corrosive_Impact.DmgType_Corrosive_Impact_C"
                     ,0xb2);
          uVar2 = FUN_14171bfe0();
          puVar3 = (undefined8 *)FName::FName(local_res8,L"DmgType_Corrosive_Impact_C",1);
          uVar2 = StaticFindObjectFastExplicit(uVar2,*puVar3,&local_48,0,0);
          (**(code **)(*plVar5 + 0x4d8))(plVar5,uVar2);
          if (local_48 != (undefined4 *)0x0) {
            FMemory::Free();
          }
          FUN_143086bb0(param_1);
        }
      }
    }
    *(byte *)(param_1 + 0xa18) = *(byte *)(param_1 + 0xa18) | 8;
  }
  return;
}



// FUNCTION 141283bd0 ~FDeviceMemoryManager body=31 status=ok
// SIG undefined ~FDeviceMemoryManager(void)

void VulkanRHI::FDeviceMemoryManager::~FDeviceMemoryManager(longlong param_1)

{
  FUN_142359510();
  FUN_140e8b380(param_1 + 0x228);
  return;
}



// FUNCTION 141283bf0 FUN_141283bf0 body=22 status=ok
// SIG undefined FUN_141283bf0(void)

void FUN_141283bf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x541) != '\0') {
    *(undefined1 *)(param_1 + 0x541) = 0;
    FUN_141284890();
    return;
  }
  return;
}



// FUNCTION 141283c10 FUN_141283c10 body=862 status=ok
// SIG undefined FUN_141283c10(void)

void FUN_141283c10(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar11;
  longlong *plVar10;
  
  bVar7 = 0;
  uVar9 = 0;
  do {
    if ((param_3 >> (uVar9 & 0x1f) & 1) != 0) {
      bVar2 = FUN_140e959b0(param_1 + 0x228,uVar9,param_2);
      bVar7 = bVar7 | bVar2;
    }
    bVar2 = (char)uVar9 + 1;
    uVar9 = (uint)bVar2;
  } while (bVar2 < 4);
  if ((*(longlong **)(param_1 + 0x7e0) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x778))(), cVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar7 != 0) && (bVar1)) {
    plVar11 = (longlong *)0x0;
    if (((param_3 >> 2 & 1) != 0) &&
       ((cVar3 = FUN_140e71290(param_1 + 0x228,2), cVar3 == '\0' &&
        (plVar10 = plVar11, 0 < *(int *)(param_1 + 0x230))))) {
      do {
        lVar8 = (longlong)(int)plVar10 * 0xf8 + *(longlong *)(param_1 + 0x228);
        plVar5 = *(longlong **)(lVar8 + 8);
        if ((plVar5 != (longlong *)0x0) &&
           ((cVar3 = (**(code **)(*plVar5 + 0x888))(), cVar3 != '\0' &&
            (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x7f8) == DAT_146b479a0)))) {
          plVar5 = plVar11;
          if (*(int *)(param_1 + 400) != 0) {
            plVar5 = *(longlong **)(param_1 + 0x188);
          }
          (**(code **)(*plVar5 + 0x38))(plVar5,(ulonglong)plVar10 & 0xff);
        }
        uVar9 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x230));
    }
    if ((((param_3 >> 3 & 1) != 0) && (cVar3 = FUN_140e71290(param_1 + 0x228,3), cVar3 == '\0')) &&
       (plVar10 = plVar11, 0 < *(int *)(param_1 + 0x230))) {
      do {
        lVar8 = (longlong)(int)plVar10 * 0xf8 + *(longlong *)(param_1 + 0x228);
        plVar5 = *(longlong **)(lVar8 + 8);
        if (((plVar5 != (longlong *)0x0) &&
            (cVar3 = (**(code **)(*plVar5 + 0x8f8))(), cVar3 != '\0')) &&
           (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x7f8) == DAT_146b479a0)) {
          plVar5 = plVar11;
          if (*(int *)(param_1 + 0x1a0) != 0) {
            plVar5 = *(longlong **)(param_1 + 0x198);
          }
          (**(code **)(*plVar5 + 0x38))(plVar5,(ulonglong)plVar10 & 0xff);
        }
        uVar9 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x230));
    }
    if ((param_3 & 1) != 0) {
      cVar3 = FUN_140e71290((longlong *)(param_1 + 0x228),0);
      if ((cVar3 == '\0') && (plVar10 = plVar11, 0 < *(int *)(param_1 + 0x230))) {
        do {
          lVar8 = (longlong)(int)plVar10 * 0xf8 + *(longlong *)(param_1 + 0x228);
          if ((*(longlong *)(lVar8 + 8) != 0) &&
             (((*(byte *)(lVar8 + 0x38) & 2) != 0 &&
              (plVar5 = plVar11, *(longlong *)(lVar8 + 0x28) == 0)))) {
            do {
              if ((*(ulonglong *)(lVar8 + 0x30 + ((ulonglong)plVar5 >> 6) * 8) >>
                   ((uint)plVar5 & 0x3f) & 1) != 0) {
                plVar6 = plVar11;
                if (*(int *)(param_1 + 0x180) != 0) {
                  plVar6 = *(longlong **)(param_1 + 0x178);
                }
                (**(code **)(*plVar6 + 0x38))
                          (plVar6,(ulonglong)plVar10 & 0xff,(ulonglong)plVar5 & 0xff);
              }
              uVar9 = (uint)plVar5 + 1;
              plVar5 = (longlong *)(ulonglong)uVar9;
            } while ((int)uVar9 < 8);
          }
          uVar9 = (int)plVar10 + 1;
          plVar10 = (longlong *)(ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(param_1 + 0x230));
      }
    }
    if (*(char *)(param_1 + 0x7f0) != '\0') {
      lVar8 = FUN_140e83500(param_1 + 0x228,0);
      if (lVar8 != 0) {
        cVar3 = FUN_14307ee20(lVar8,1);
        if (cVar3 != '\0') goto LAB_141283eed;
      }
      if (((param_3 >> 1 & 1) != 0) && (cVar3 = FUN_140e71290(param_1 + 0x228,1), cVar3 == '\0')) {
        if (*(int *)(param_1 + 0x1b0) != 0) {
          plVar11 = *(longlong **)(param_1 + 0x1a8);
        }
        (**(code **)(*plVar11 + 0x38))(plVar11);
      }
    }
  }
LAB_141283eed:
  if (param_4 != '\0') {
    iVar4 = FUN_14233f450(param_1);
    if (((iVar4 == 3) &&
        (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(), lVar8 != 0)) && (!bVar1)
       ) {
      FUN_1412d9070(param_1,param_2,param_3);
      return;
    }
    iVar4 = FUN_14233f450(param_1);
    if ((iVar4 != 3) && (bVar1)) {
      FUN_1412d9bb0(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 141283f70 FUN_141283f70 body=112 status=ok
// SIG undefined FUN_141283f70(void)

void FUN_141283f70(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14307d810(param_1 + -0x8d8,0);
  if (lVar2 != 0) {
    lVar3 = AVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(longlong *)(lVar2 + 0x178) + 0x18))((longlong *)(lVar2 + 0x178),param_2);
    }
  }
  return;
}



// FUNCTION 141283fe0 FUN_141283fe0 body=1463 status=ok
// SIG undefined FUN_141283fe0(void)

void FUN_141283fe0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  undefined1 local_38 [48];
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (((lVar3 != 0) && (lVar7 = *(longlong *)(param_1 + 0x290), lVar7 != 0)) && (param_2 != 0)) {
    if ((*(longlong *)(lVar7 + 0x310) != 0) && (*(longlong *)(lVar3 + 0x520) != 0)) {
      uVar12 = FUN_142d199e0();
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x310),uVar12,0,4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      lVar7 = *(longlong *)(param_1 + 0x290);
    }
    lVar3 = *(longlong *)(lVar3 + 0x6a0);
    if (((*(longlong *)(lVar7 + 800) != 0) && (lVar3 != 0)) &&
       (fVar13 = (float)UDecalComponent::GetFadeInStartDelay(lVar3), 0.0001 < fVar13)) {
      if ((param_2 == *(longlong *)(param_1 + 0x298)) &&
         (cVar2 = FUN_14122ebf0(*(undefined8 *)(param_1 + 0x288)), cVar2 != '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x7a0);
      }
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 800),uVar12,0,4);
    }
    lVar7 = *(longlong *)(param_1 + 0x290);
    if (*(longlong *)(lVar7 + 0x328) != 0) {
      uVar12 = FUN_141229070(*(undefined8 *)(param_1 + 0x288));
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x328),uVar12,0,4);
      lVar7 = *(longlong *)(param_1 + 0x290);
    }
    if (*(longlong *)(lVar7 + 0x330) != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x288) + 0x780) == '\0') {
        uVar12 = 0x3f800000;
      }
      else {
        uVar12 = 0xbf800000;
      }
      FUN_1405aaad0(param_2,*(longlong *)(lVar7 + 0x330),uVar12,0,4);
      lVar7 = *(longlong *)(param_1 + 0x290);
    }
    if ((*(longlong *)(lVar7 + 0x338) != 0) && (lVar3 != 0)) {
      uVar12 = FUN_140963e30(lVar3);
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x338),uVar12,0,4);
      lVar7 = *(longlong *)(param_1 + 0x290);
    }
    if (*(longlong *)(lVar7 + 0x340) != 0) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x670))();
      if ((lVar3 == 0) || (lVar7 = *(longlong *)(lVar3 + 0x528), lVar7 == 0)) {
        FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x340),0,0,4);
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x168);
        if (lVar10 == 0) {
          local_50 = DAT_1464aa7c0;
          puVar4 = &local_58;
          local_58 = DAT_1464aa7b8;
        }
        else {
          puVar4 = (undefined8 *)FUN_14238d380(lVar10,local_48);
          lVar7 = *(longlong *)(lVar3 + 0x528);
        }
        uVar1 = *puVar4;
        local_40 = *(float *)(puVar4 + 1);
        uVar5 = FUN_1426e1d20(lVar7,local_38);
        FRotator::Vector(uVar5,&local_58);
        FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x340),
                      (float)uVar1 * (float)local_58 +
                      (float)((ulonglong)uVar1 >> 0x20) * local_58._4_4_ + local_40 * local_50,0,4);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x290);
    if (*(longlong *)(lVar3 + 0x358) != 0) {
      fVar13 = (*(float *)(*(longlong *)(param_1 + 0x288) + 0x784) / *(float *)(param_1 + 0x178)) *
               100.0;
      if (0.0 <= fVar13) {
        if (100.0 <= fVar13) {
          fVar13 = 100.0;
        }
      }
      else {
        fVar13 = 0.0;
      }
      FUN_1405aaad0(param_2,*(longlong *)(lVar3 + 0x358),fVar13,0,4);
      lVar3 = *(longlong *)(param_1 + 0x290);
    }
    if ((*(longlong *)(lVar3 + 0x360) != 0) &&
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 0x6b0), lVar7 != 0)) {
      fVar13 = ABS(*(float *)(*(longlong *)(param_1 + 0x288) + 0x798)) * 0.15915494 *
               *(float *)(param_1 + 0x194);
      if (0.0 <= fVar13) {
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
      }
      else {
        fVar13 = 0.0;
      }
      fVar14 = ABS(*(float *)(lVar7 + 0x19c));
      if (ABS(*(float *)(lVar7 + 0x19c)) <= ABS(*(float *)(lVar7 + 0x198))) {
        fVar14 = ABS(*(float *)(lVar7 + 0x198));
      }
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      FUN_1405aaad0(param_2,*(longlong *)(lVar3 + 0x360),fVar14,0,4);
      lVar3 = *(longlong *)(param_1 + 0x290);
    }
    if (*(longlong *)(lVar3 + 0x348) != 0) {
      FUN_1405aaad0(param_2,*(longlong *)(lVar3 + 0x348),*(undefined4 *)(param_1 + 0x2dc),0,4);
      lVar3 = *(longlong *)(param_1 + 0x290);
    }
    if (*(longlong *)(lVar3 + 0x368) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2c0);
      lVar8 = (longlong)*(int *)(param_1 + 0x2c8) * 0x30 + lVar7;
      lVar10 = lVar7;
      if (lVar7 != lVar8) {
        do {
          cVar2 = FUN_14058c1e0(lVar10,param_2);
          if (cVar2 != '\0') {
            lVar7 = (lVar10 - lVar7) / 6 + (lVar10 - lVar7 >> 0x3f);
            lVar3 = *(longlong *)(param_1 + 0x290);
            iVar6 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
            if (iVar6 == -1) goto LAB_141284453;
            if ((iVar6 < 0) || (*(int *)(param_1 + 0x2f8) <= iVar6)) goto LAB_141284486;
            uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar6 * 4);
            goto LAB_141284467;
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar10 != lVar8);
        lVar3 = *(longlong *)(param_1 + 0x290);
      }
LAB_141284453:
      if (0 < *(int *)(param_1 + 0x2f8)) {
        uVar12 = **(undefined4 **)(param_1 + 0x2f0);
LAB_141284467:
        FUN_1405aaad0(param_2,*(undefined8 *)(lVar3 + 0x368),uVar12,0,4);
      }
    }
LAB_141284486:
    plVar11 = *(longlong **)(param_1 + 0x2b0);
    plVar9 = plVar11 + (longlong)*(int *)(param_1 + 0x2b8) * 4;
    for (; plVar11 != plVar9; plVar11 = plVar11 + 4) {
      if ((((char)plVar11[3] != '\0') && (plVar11[2] != 0)) && (*plVar11 != 0)) {
        FUN_14127c8d0(plVar11,*(undefined8 *)(param_1 + 0x288),param_2);
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x290) + 0x398) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x288) + 0x6b8) != 0)) {
      uVar12 = FUN_1430d5c20();
      FUN_1405aaad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x398),uVar12,0,4);
    }
  }
  return;
}



// FUNCTION 1412845a0 FUN_1412845a0 body=379 status=ok
// SIG undefined FUN_1412845a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412845a0(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong uVar9;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar10 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar9 = uVar10;
  do {
    lVar4 = FUN_14307d810(param_1,uVar9 & 0xff);
    if (lVar4 != 0) {
      lVar5 = AVolume::GetPrivateStaticClass();
      uVar2 = local_30;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar7 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar7 = local_38;
        }
        for (plVar6 = plVar7; plVar6 != plVar7 + (int)local_30; plVar6 = plVar6 + 1) {
          if (*plVar6 == lVar4) {
            if ((int)((longlong)plVar6 - (longlong)plVar7 >> 3) != -1) goto LAB_141284698;
            break;
          }
        }
        lVar5 = (longlong)(int)local_30;
        iVar3 = (int)local_30 + 1;
        local_30 = CONCAT44(local_30._4_4_,iVar3);
        if (local_30._4_4_ < iVar3) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_58,uVar2 & 0xffffffff);
        }
        plVar7 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar7 = local_38;
        }
        plVar7[lVar5] = lVar4;
      }
    }
LAB_141284698:
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (7 < (int)uVar8) {
      plVar7 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar7 = local_38;
      }
      uVar9 = (longlong)(int)local_30 & 0x1fffffffffffffff;
      if (plVar7 + (int)local_30 < plVar7) {
        uVar9 = uVar10;
      }
      if (uVar9 != 0) {
        do {
          FUN_140a20420(*plVar7);
          uVar10 = uVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar10 != uVar9);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
  } while( true );
}



// FUNCTION 141284720 FUN_141284720 body=202 status=ok
// SIG undefined FUN_141284720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141284720(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143061680();
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FRotator::Quaternion(param_1 + 0x2b0,&local_58);
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38._12_4_ = 0;
    local_38._0_12_ = *(undefined1 (*) [12])(param_1 + 0x298);
    local_28._4_4_ = DAT_1464aa788._4_4_;
    local_28._0_4_ = (undefined4)DAT_1464aa788;
    local_28._8_4_ = DAT_1464aa790;
    local_28._12_4_ = 0;
    local_68 = 0;
    FUN_142399d60(*(undefined8 *)(param_1 + 0x620),&local_48,0,0);
  }
  return;
}



// FUNCTION 1412847f0 FUN_1412847f0 body=149 status=ok
// SIG undefined FUN_1412847f0(void)

void FUN_1412847f0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0x468) != 0) {
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      bVar1 = FUN_14126fbb0(*(longlong *)(param_1 + 0x470),0);
      bVar2 = FUN_14126fbb0(*(undefined8 *)(param_1 + 0x470),1);
      if ((int)(uint)bVar1 < *(int *)(param_1 + 0x468)) {
        *(undefined8 *)(param_1 + 0x478) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x460) + (ulonglong)bVar1 * 8);
      }
      if ((int)(uint)bVar2 < *(int *)(param_1 + 0x468)) {
        *(undefined8 *)(param_1 + 0x480) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x460) + (ulonglong)bVar2 * 8);
      }
    }
  }
  return;
}



// FUNCTION 141284890 FUN_141284890 body=508 status=ok
// SIG undefined FUN_141284890(void)

void FUN_141284890(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x538) == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x541) != '\0') || (*(char *)(param_1 + 0x528) == '\0'))
  goto LAB_141284a28;
  cVar1 = FUN_140e85b90(param_1,1);
  if (*(char *)(param_1 + 0x540) != '\0') {
    if ((cVar1 != '\0') ||
       (cVar2 = FUN_14122ed60(*(undefined8 *)(param_1 + 0x538),1), cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x540) = 0;
      if ((*(char *)(param_1 + 0x128) == '\x03') &&
         ((*(longlong *)(param_1 + 0x4e8) != 0 &&
          (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x6d0) != 0)))) {
        uVar3 = FUN_140e7eef0(*(longlong *)(param_1 + 0x4e8) + 0x228,0);
        FUN_141283570(*(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x6d0),uVar3,uVar3,
                      *(undefined8 *)(param_1 + 0x4e8));
      }
      if (*(longlong *)(param_1 + 0x520) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x2f0) = 0;
      }
      goto LAB_141284a28;
    }
    if (*(char *)(param_1 + 0x540) != '\0') goto LAB_141284a28;
  }
  if (((cVar1 == '\0') && (cVar1 = FUN_14122ed60(*(undefined8 *)(param_1 + 0x538),0), cVar1 != '\0')
      ) && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x780))(), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x540) = 1;
    if (((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x4e8) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x6d0) != 0)) {
      uVar3 = FUN_140e7eef0(*(longlong *)(param_1 + 0x4e8) + 0x228,0);
      FUN_141283570(*(undefined8 *)(param_1 + 0x4e8),uVar3,uVar3,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x6d0));
    }
    if (*(longlong *)(param_1 + 0x520) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x2f0) = *(undefined8 *)(param_1 + 0x538);
    }
  }
LAB_141284a28:
  if ((*(char *)(param_1 + 0x4f8) != '\0') && (*(longlong *)(param_1 + 0x520) != 0)) {
    if ((*(char *)(*(longlong *)(param_1 + 0x4d8) + 0x418) != '\x02') &&
       ((*(char *)(param_1 + 0x540) == '\0' ||
        (cVar1 = FUN_141214120(*(undefined8 *)(param_1 + 0x538)), cVar1 == '\0')))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x520) + 0x25d) = 1;
      return;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x520) + 0x25d) = 0;
  }
  return;
}



// FUNCTION 141284a90 FUN_141284a90 body=898 status=ok
// SIG undefined FUN_141284a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141284a90(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  float local_a0;
  int local_98 [4];
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_3 + 0x38) == '\0') {
    lVar10 = *(longlong *)(param_3 + 0x28);
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x1b0,local_98,lVar10);
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if (local_98[0] != -1) {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)local_98[0] * 0x28);
    }
    plVar7 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar7 = plVar5;
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)(param_1 + 0x198);
    }
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[5];
      plVar2 = plVar5;
      if (plVar6 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar6[0xde];
      }
      if (plVar2 != (longlong *)*plVar7) {
        if (plVar6 != (longlong *)0x0) {
          *(byte *)((longlong)plVar6 + 0x71a) = *(byte *)((longlong)plVar6 + 0x71a) | 0x40;
          FUN_142600fa0(param_2[5]);
          param_2[5] = 0;
          plVar6 = plVar5;
        }
        if (lVar10 != 0) {
          plVar6 = *(longlong **)(param_1 + 0x188);
          plVar2 = (longlong *)plVar6[0x9a];
          if (plVar2 != (longlong *)0x0) {
            local_80 = DAT_1468b5da8;
            local_88 = DAT_1468b5da0;
            puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x428))(plVar2,local_78,*param_2);
            local_a8 = *puVar3;
            local_a0 = *(float *)(puVar3 + 1);
            uVar4 = (**(code **)(*plVar6 + 0x148))(plVar6);
            local_b8 = 0;
            local_c0 = 0;
            local_c8 = local_c8 & 0xffffff00;
            plVar5 = (longlong *)FUN_14245fbc0(uVar4,*plVar7,&local_a8,&local_88);
            FUN_142398d80(plVar5,*(undefined4 *)(param_1 + 0x210));
            FUN_141271e90(plVar5);
            (**(code **)(*plVar5 + 0x958))(plVar5,DAT_146877980,*(undefined1 *)(param_1 + 0x240));
            (**(code **)(*plVar5 + 0x958))(plVar5,DAT_146877988,*(undefined1 *)(param_1 + 0x241));
            local_a8 = *(undefined8 *)(param_1 + 0x220);
            local_a0 = *(float *)(param_1 + 0x228);
            FUN_142610200(plVar5,DAT_146877990,&local_a8);
            FUN_14260f0c0(plVar5,DAT_1468779a0,*(undefined4 *)(param_1 + 0x21c));
            puVar9 = (undefined8 *)plVar7[1];
            puVar3 = puVar9 + (longlong)(int)plVar7[2] * 3;
            if (puVar9 != puVar3) {
              puVar8 = puVar9 + 1;
              do {
                local_a8 = *puVar8;
                local_a0 = *(float *)(puVar8 + 1);
                FUN_142610200(plVar5,*puVar9,&local_a8);
                puVar9 = puVar9 + 3;
                puVar8 = puVar8 + 3;
              } while (puVar9 != puVar3);
            }
          }
          param_2[5] = plVar5;
          plVar6 = plVar5;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        local_c8 = *(undefined4 *)(param_1 + 0x230);
        FUN_14127ea30(plVar6,*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x238),
                      *(undefined4 *)(param_1 + 0x234));
        lVar10 = *(longlong *)(param_1 + 0x188);
        if ((*(char *)(lVar10 + 0x7ac) != '\0') || (*(char *)(lVar10 + 0x7ad) != '\0')) {
          local_a0 = *(float *)(lVar10 + 0x798) * -57.295776 * *(float *)(param_1 + 0x23c);
          local_a8 = 0;
          local_80 = local_a0;
          FUN_142610200(param_2[5],DAT_146877998,&local_a8);
          lVar10 = *(longlong *)(param_1 + 0x188);
        }
        local_c8._0_1_ = 1;
        FUN_14126f990(param_2,local_68,lVar10,*(undefined4 *)(param_1 + 0x218));
        local_c8 = (uint)local_c8._1_3_ << 8;
        FUN_142399d60(param_2[5],local_68,0,0);
      }
    }
  }
  else if (param_2[5] != 0) {
    pbVar1 = (byte *)(param_2[5] + 0x71a);
    *pbVar1 = *pbVar1 | 0x40;
    FUN_142600fa0(param_2[5]);
    param_2[5] = 0;
  }
  return;
}



// FUNCTION 141284e20 FUN_141284e20 body=623 status=ok
// SIG undefined FUN_141284e20(void)

void FUN_141284e20(longlong param_1,longlong param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res18;
  uint in_stack_ffffffffffffff98;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((*param_3 == '\0') || (*(longlong *)(param_3 + 0x18) == 0)) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x30) + 0x71a);
      *pbVar1 = *pbVar1 | 0x40;
      FUN_142600fa0(*(undefined8 *)(param_2 + 0x30));
      *(undefined8 *)(param_2 + 0x30) = 0;
      return;
    }
  }
  else {
    uVar4 = FUN_140ad5c60();
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_4,&local_res18,uVar4);
    plVar7 = (longlong *)0x0;
    if ((int)local_res18 != -1) {
      plVar7 = (longlong *)(*param_4 + (longlong)(int)local_res18 * 0x28);
    }
    plVar5 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      param_5 = plVar5;
    }
    if (param_5 != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x30);
      if (plVar7 == (longlong *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x188);
        FUN_1417846f0(uVar4,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res18 = 0;
        uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
        in_stack_ffffffffffffff98 = 0;
        plVar7 = (longlong *)FUN_1417985e0(uVar6,uVar4,0,0,0,0,0,0,0);
        if (plVar7 != (longlong *)0x0) {
          FUN_14260f940(plVar7,*param_5);
          FUN_142397000(plVar7,1,1);
          FUN_14234b150(plVar7);
          FUN_141271e90(plVar7);
          puVar9 = (undefined8 *)param_5[1];
          puVar2 = puVar9 + (longlong)(int)param_5[2] * 3;
          if (puVar9 != puVar2) {
            puVar8 = puVar9 + 1;
            do {
              local_38 = *puVar8;
              local_30 = *(undefined4 *)(puVar8 + 1);
              FUN_142610200(plVar7,*puVar9,&local_38);
              puVar9 = puVar9 + 3;
              puVar8 = puVar8 + 3;
            } while (puVar9 != puVar2);
          }
        }
        *(longlong **)(param_2 + 0x30) = plVar7;
        if (plVar7 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar7[0xde] != *param_5) {
        FUN_14260f940(plVar7);
        plVar7 = *(longlong **)(param_2 + 0x30);
      }
      cVar3 = (**(code **)(*plVar7 + 0x2a0))(plVar7);
      if (cVar3 == '\0') {
        FUN_1425fcab0(*(undefined8 *)(param_2 + 0x30),0);
      }
      local_38 = *(undefined8 *)(param_3 + 4);
      local_30 = *(undefined4 *)(param_3 + 0xc);
      FUN_1423990b0(*(undefined8 *)(param_2 + 0x30),&local_38,0,0,
                    in_stack_ffffffffffffff98 & 0xffffff00);
      FUN_14127ea30(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x188),
                    *(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x234),
                    *(undefined4 *)(param_1 + 0x230));
    }
  }
  return;
}



// FUNCTION 141285090 FUN_141285090 body=323 status=ok
// SIG undefined FUN_141285090(void)

void FUN_141285090(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x50,0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58);
    iVar6 = iVar1 + -1;
    iVar2 = iVar1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6 * 8;
      lVar8 = (longlong)iVar1 << 3;
      lVar9 = lVar7;
      do {
        iVar5 = 0;
        lVar4 = 0;
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x38);
        if (0 < iVar2) {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x30);
          do {
            if (*plVar3 == *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x50))) {
              if (iVar5 != -1) goto LAB_14128515f;
              break;
            }
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 5;
          } while (lVar4 < iVar2);
        }
        iVar2 = *(int *)(param_1 + 0x58);
        iVar5 = (iVar2 - iVar6) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar7 + *(longlong *)(param_1 + 0x50)),
                     (void *)(lVar8 + *(longlong *)(param_1 + 0x50)),(longlong)iVar5 << 3);
          iVar2 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
LAB_14128515f:
        lVar8 = lVar8 + -8;
        lVar7 = lVar7 + -8;
        lVar9 = lVar9 + -8;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      iVar2 = *(int *)(param_1 + 0x58);
    }
    if (iVar1 == iVar2) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  return;
}



// FUNCTION 1412851e0 FUN_1412851e0 body=210 status=ok
// SIG undefined FUN_1412851e0(void)

void FUN_1412851e0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x638) != '\0')) &&
     (lVar1 = *(longlong *)(param_1 + 0x310), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x3b0) == '\0') {
      if (*(char *)(param_1 + 0x318) != '\0') {
        *(bool *)(param_1 + 0x3b0) =
             *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2] < 0.0025000002;
      }
      FUN_14123def0(lVar1,0,0);
      return;
    }
    FUN_14123def0(lVar1,param_3[1],*param_3);
  }
  return;
}



// FUNCTION 1412852c0 FUN_1412852c0 body=137 status=ok
// SIG undefined FUN_1412852c0(void)

void FUN_1412852c0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x638) != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x310), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x800))(plVar1,*param_3);
    (**(code **)(**(longlong **)(param_1 + 0x310) + 0x7f8))
              (*(longlong **)(param_1 + 0x310),param_3[1]);
  }
  return;
}



// FUNCTION 141285350 FUN_141285350 body=651 status=ok
// SIG undefined FUN_141285350(void)

void FUN_141285350(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x638) != '\0')) &&
       (*(longlong *)(param_1 + 0x310) != 0)) {
      cVar2 = FUN_14122ebf0();
      if (cVar2 != '\0') {
        FUN_14126a830(param_1,param_3);
        return;
      }
      fVar8 = 0.0;
      if (*(char *)(param_1 + 0x319) == '\0') {
        FUN_1412401f0(*(undefined8 *)(param_1 + 0x310),*param_3);
      }
      else if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)
              ) {
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(param_1);
        }
        lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x638) != '\0')) &&
           ((*(longlong *)(param_1 + 0x310) != 0 &&
            (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x6a0), lVar3 != 0)))) {
          lVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 800);
          if ((lVar4 == 0) ||
             ((*(float *)(lVar4 + 0x5c) == 3.4028235e+38 && (*(int *)(lVar4 + 0x68) == 0)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          local_res20 = *param_3;
          local_res24 = param_3[1];
          local_res8[0] = 0.0;
          lVar5 = 0;
          if (bVar1) {
            lVar5 = lVar4;
          }
          FUN_1430d5230(lVar3,&local_38,&local_res20,local_res8,*(undefined1 *)(param_1 + 0x31a),
                        lVar5);
          FUN_141240250(*(undefined8 *)(param_1 + 0x310),local_34);
          FUN_1412401f0(*(undefined8 *)(param_1 + 0x310),local_38);
          fVar8 = local_res8[0];
        }
      }
      if (*(char *)(param_1 + 0x398) != '\0') {
        fVar6 = (float)FUN_140a23120(*(float *)(*(longlong *)(param_1 + 0x310) + 0x784) * 0.01,0xc,
                                     0xd);
        fVar7 = (float)FUN_141228ce0(*(undefined8 *)(param_1 + 0x310));
        if (((*(float *)(param_1 + 0x39c) <= fVar6 && fVar6 != *(float *)(param_1 + 0x39c)) &&
            (*(float *)(param_1 + 0x3a0) <= ABS(fVar7) && ABS(fVar7) != *(float *)(param_1 + 0x3a0))
            ) && (*(float *)(param_1 + 0x3a4) <= ABS(fVar8) &&
                  ABS(fVar8) != *(float *)(param_1 + 0x3a4))) {
          FUN_1412417d0(*(undefined8 *)(param_1 + 0x310),0);
          return;
        }
        FUN_141241dd0(*(undefined8 *)(param_1 + 0x310),0);
      }
    }
  }
  return;
}



// FUNCTION 1412855e0 FUN_1412855e0 body=261 status=ok
// SIG undefined FUN_1412855e0(void)

void FUN_1412855e0(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x638) != '\0')) && (*(longlong *)(param_1 + 0x310) != 0))
  {
    cVar2 = FUN_14122ebf0();
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x3a8) == '\0') {
        fVar5 = param_3[1];
      }
      else {
        fVar1 = param_3[1];
        fVar5 = SQRT(fVar1 * fVar1 + *param_3 * *param_3 + param_3[2] * param_3[2]);
        fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x3ac) * 0.017453292);
        if (fVar1 < fVar4) {
          fVar5 = -fVar5;
        }
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_141240250(*(undefined8 *)(param_1 + 0x310),fVar5);
  }
  return;
}



// FUNCTION 1412856f0 FUN_1412856f0 body=174 status=ok
// SIG undefined FUN_1412856f0(void)

void FUN_1412856f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    puVar2 = (undefined8 *)FName::FName(local_res10,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = *puVar2;
    local_18 = local_28;
    local_14 = local_24;
    local_10 = local_20;
    FUN_143094030(param_2,&local_18);
    cVar1 = FUN_140e7ef80(param_1 + 0x228,param_2);
    if (cVar1 != -1) {
      FUN_141285800(param_1,cVar1);
    }
  }
  return;
}



// FUNCTION 1412857a0 FUN_1412857a0 body=36 status=ok
// SIG undefined FUN_1412857a0(void)

void FUN_1412857a0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1e8,&local_18);
  return;
}



// FUNCTION 1412857d0 FUN_1412857d0 body=36 status=ok
// SIG undefined FUN_1412857d0(void)

void FUN_1412857d0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1d8,&local_18);
  return;
}



// FUNCTION 141285800 FUN_141285800 body=107 status=ok
// SIG undefined FUN_141285800(void)

void FUN_141285800(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140e83500(param_1 + 0x228);
  FUN_140e71370(param_1 + 0x228,param_2);
  uVar2 = FUN_140e83500(param_1 + 0x228,param_2);
  FUN_141268a80(param_1,uVar1,uVar2);
  return;
}



// FUNCTION 141285870 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144753fc8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1412858b0 FUN_1412858b0 body=58 status=ok
// SIG undefined FUN_1412858b0(void)

void FUN_1412858b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144754018;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144754060;
  }
  return;
}



// FUNCTION 141285900 FUN_141285900 body=20 status=ok
// SIG undefined FUN_141285900(void)

undefined1 FUN_141285900(longlong param_1)

{
  FUN_14128ce10(param_1 + 8);
  return 1;
}



// FUNCTION 141285920 FUN_141285920 body=1194 status=ok
// SIG undefined FUN_141285920(void)

int FUN_141285920(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 float param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  void *pvVar11;
  undefined2 *puVar12;
  void *pvVar13;
  void *local_res8;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  
  FString::PrintfImpl(&local_68,&DAT_144050d74,(double)param_5);
  puVar10 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar5 = local_68;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_88,L"%s%s %s%s",puVar12,param_4,puVar3,puVar5);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,&DAT_144732490,param_3);
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar10 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar10,param_2,puVar3,puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar8 = (int)local_70;
  iVar9 = local_70._4_4_;
  local_98 = local_78;
  local_78 = (void *)0x0;
  local_90 = (int)local_70;
  local_8c = local_70._4_4_;
  iVar7 = (2 - (uint)((int)local_70 != 0)) + (int)local_70;
  local_70 = 0;
  if (iVar9 < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar8 = local_90;
  }
  local_90 = (2 - (uint)(iVar8 != 0)) + iVar8;
  local_res8 = local_98;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    local_res8 = local_98;
  }
  pvVar13 = local_88;
  local_98 = local_res8;
  lVar6 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2 + 2) = 0;
  iVar8 = (int)local_80;
  if (local_90 < 2) {
    iVar2 = local_80._4_4_;
    local_88 = (void *)0x0;
    local_80 = 0;
  }
  else {
    iVar9 = 0;
    if ((int)local_80 != 0) {
      iVar9 = (int)local_80 + -1;
    }
    if ((local_90 != 0) || (iVar8 = 1, iVar9 == 0)) {
      iVar8 = 0;
    }
    local_res8 = (void *)0x0;
    iVar7 = local_90;
    if (local_8c < iVar8 + local_90 + iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      iVar7 = local_90;
    }
    pvVar11 = local_88;
    pvVar13 = local_98;
    iVar2 = local_8c;
    iVar8 = iVar7;
    if (iVar9 != 0) {
      local_90 = iVar7 + (uint)(iVar7 == 0) + iVar9;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar7);
      }
      iVar2 = local_8c;
      iVar8 = local_90;
      pvVar13 = local_98;
      pvVar1 = (void *)((longlong)local_98 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_98 = pvVar13;
  local_8c = iVar2;
  if (iVar2 < (int)((2 - (uint)(iVar8 != 0)) + iVar8)) {
    local_90 = iVar8;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar8 = local_90;
  }
  local_90 = (2 - (uint)(iVar8 != 0)) + iVar8;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
  }
  iVar7 = local_8c;
  iVar9 = local_90;
  pvVar13 = local_98;
  lVar6 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
  *(undefined2 *)((longlong)local_98 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_98 + lVar6 * 2 + 2) = 0;
  puVar4 = (undefined8 *)FUN_1412887b0(param_1,local_48,param_6,param_7);
  if (iVar9 < 2) {
    pvVar11 = (void *)*puVar4;
    *puVar4 = 0;
    iVar9 = *(int *)(puVar4 + 1);
    puVar4[1] = 0;
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
    }
  }
  else {
    iVar8 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar8 = 0;
    }
    if ((iVar9 != 0) || (iVar2 = 1, iVar8 == 0)) {
      iVar2 = 0;
    }
    local_98 = pvVar13;
    local_90 = iVar9;
    local_8c = iVar7;
    if (iVar7 < iVar2 + iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    }
    iVar7 = local_90;
    pvVar13 = (void *)*puVar4;
    pvVar11 = local_98;
    iVar9 = local_90;
    if (iVar8 != 0) {
      lVar6 = (longlong)local_90;
      local_90 = local_90 + (uint)(local_90 == 0) + iVar8;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar7);
      }
      iVar9 = local_90;
      pvVar11 = local_98;
      pvVar1 = (void *)((longlong)local_98 + (lVar6 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar13,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar8 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar8);
  }
  puVar4 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_1);
  *puVar4 = 0;
  *(int *)(puVar4 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar11,(longlong)iVar9 * 2);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return iVar8;
}



// FUNCTION 141285dd0 FUN_141285dd0 body=801 status=ok
// SIG undefined FUN_141285dd0(void)

int FUN_141285dd0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  void *_Src_00;
  bool bVar10;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_48,&DAT_1440da628,param_5);
  puVar6 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar9,param_4,puVar2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,&DAT_1440da628,param_3);
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar6 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar6,param_2,puVar2,puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = (int)local_50;
  iVar5 = local_50._4_4_;
  bVar10 = (int)local_50 != 0;
  local_78 = local_58;
  local_70 = (int)local_50;
  local_58 = (void *)0x0;
  local_6c = local_50._4_4_;
  local_50 = 0;
  if (iVar5 < (int)((2 - (uint)bVar10) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar4 = local_70;
  }
  local_70 = (2 - (uint)(iVar4 != 0)) + iVar4;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
  }
  _Src_00 = local_68;
  puVar6 = (undefined2 *)((longlong)local_78 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar6 = 0x20;
  puVar6[1] = 0;
  iVar4 = (int)local_60;
  if (local_70 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    iVar5 = 0;
    if ((int)local_60 != 0) {
      iVar5 = (int)local_60 + -1;
    }
    if ((local_70 != 0) || (iVar4 = 1, iVar5 == 0)) {
      iVar4 = 0;
    }
    if (local_6c < iVar4 + local_70 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    _Src = local_68;
    iVar1 = local_70;
    _Src_00 = local_78;
    iVar4 = local_70;
    if (iVar5 != 0) {
      lVar8 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar5;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar1);
      }
      iVar4 = local_70;
      _Src_00 = local_78;
      _Dst = (void *)((longlong)local_78 + (lVar8 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar5 * 2) = 0;
    }
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
  *puVar7 = 0;
  *(int *)(puVar7 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src_00,(longlong)iVar4 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar5;
}



// FUNCTION 141286100 FUN_141286100 body=233 status=ok
// SIG undefined FUN_141286100(void)

/* WARNING: Removing unreachable block (ram,0x0001412861d7) */

int FUN_141286100(longlong *param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_144050d74,(double)param_3);
  puVar5 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar5 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_28,L"%s%s %s%s",puVar5,param_2,puVar2,puVar3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar4 = 0;
  *puVar4 = local_28;
  *(undefined4 *)(puVar4 + 1) = local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_1c;
  return iVar1;
}



// FUNCTION 1412861f0 FUN_1412861f0 body=822 status=ok
// SIG undefined FUN_1412861f0(void)

int FUN_1412861f0(longlong *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                 undefined1 param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  void *_Src_00;
  bool bVar10;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  FString::PrintfImpl(&local_58,&DAT_144732490,param_5);
  puVar7 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar9,param_4,puVar2,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_3);
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar7 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar7,param_2,puVar2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)local_60;
  iVar6 = local_60._4_4_;
  bVar10 = (int)local_60 != 0;
  local_88 = local_68;
  local_80 = (int)local_60;
  local_68 = (void *)0x0;
  local_7c = local_60._4_4_;
  local_60 = 0;
  if (iVar6 < (int)((2 - (uint)bVar10) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar5 = local_80;
  }
  local_80 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar5);
  }
  _Src_00 = local_78;
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  *(undefined2 *)((longlong)local_88 + lVar4 * 2) = 0x20;
  *(undefined2 *)((longlong)local_88 + lVar4 * 2 + 2) = 0;
  iVar5 = (int)local_70;
  if (local_80 < 2) {
    local_78 = (void *)0x0;
    local_70 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_70 != 0) {
      iVar6 = (int)local_70 + -1;
    }
    if ((local_80 != 0) || (iVar5 = 1, iVar6 == 0)) {
      iVar5 = 0;
    }
    if (local_7c < iVar5 + local_80 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    _Src = local_78;
    iVar1 = local_80;
    _Src_00 = local_88;
    iVar5 = local_80;
    if (iVar6 != 0) {
      lVar4 = (longlong)local_80;
      local_80 = local_80 + (uint)(local_80 == 0) + iVar6;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar1);
      }
      iVar5 = local_80;
      _Src_00 = local_88;
      _Dst = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar8 = 0;
  *(int *)(puVar8 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src_00,(longlong)iVar5 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar6;
}



// FUNCTION 141286530 FUN_141286530 body=830 status=ok
// SIG undefined FUN_141286530(void)

int FUN_141286530(longlong *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                 float param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  void *_Src_00;
  bool bVar10;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  FString::PrintfImpl(&local_58,&DAT_144050d74,(double)param_5);
  puVar7 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar9,param_4,puVar2,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_3);
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar7 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar7,param_2,puVar2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)local_60;
  iVar6 = local_60._4_4_;
  bVar10 = (int)local_60 != 0;
  local_88 = local_68;
  local_80 = (int)local_60;
  local_68 = (void *)0x0;
  local_7c = local_60._4_4_;
  local_60 = 0;
  if (iVar6 < (int)((2 - (uint)bVar10) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar5 = local_80;
  }
  local_80 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar5);
  }
  _Src_00 = local_78;
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  *(undefined2 *)((longlong)local_88 + lVar4 * 2) = 0x20;
  *(undefined2 *)((longlong)local_88 + lVar4 * 2 + 2) = 0;
  iVar5 = (int)local_70;
  if (local_80 < 2) {
    local_78 = (void *)0x0;
    local_70 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_70 != 0) {
      iVar6 = (int)local_70 + -1;
    }
    if ((local_80 != 0) || (iVar5 = 1, iVar6 == 0)) {
      iVar5 = 0;
    }
    if (local_7c < iVar5 + local_80 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    _Src = local_78;
    iVar1 = local_80;
    _Src_00 = local_88;
    iVar5 = local_80;
    if (iVar6 != 0) {
      lVar4 = (longlong)local_80;
      local_80 = local_80 + (uint)(local_80 == 0) + iVar6;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar1);
      }
      iVar5 = local_80;
      _Src_00 = local_88;
      _Dst = (void *)((longlong)local_88 + (lVar4 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar8 = 0;
  *(int *)(puVar8 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src_00,(longlong)iVar5 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar6;
}



// FUNCTION 141286870 FUN_141286870 body=1304 status=ok
// SIG undefined FUN_141286870(void)

int FUN_141286870(longlong *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                 float param_5,undefined8 param_6,float param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  FString::PrintfImpl(&local_68,&DAT_144050d74,(double)param_7);
  puVar9 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_88,L"%s%s %s%s",puVar12,param_6,puVar3,puVar4);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,&DAT_144050d74,(double)param_5);
  puVar4 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_98,L"%s%s %s%s",puVar12,param_4,puVar3,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_3);
  puVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar9,param_2,puVar3,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)local_70;
  iVar8 = local_70._4_4_;
  local_a8 = local_78;
  local_78 = (void *)0x0;
  local_a0 = (int)local_70;
  local_9c = local_70._4_4_;
  iVar6 = (2 - (uint)((int)local_70 != 0)) + (int)local_70;
  local_70 = 0;
  if (iVar8 < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
    iVar7 = local_a0;
  }
  local_a0 = (2 - (uint)(iVar7 != 0)) + iVar7;
  local_res8 = local_a8;
  if (local_9c < local_a0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
    local_res8 = local_a8;
  }
  pvVar11 = local_98;
  local_a8 = local_res8;
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_res8 + lVar5 * 2) = 0x20;
  *(undefined2 *)((longlong)local_res8 + lVar5 * 2 + 2) = 0;
  iVar7 = (int)local_90;
  if (local_a0 < 2) {
    iVar13 = local_90._4_4_;
    local_98 = (void *)0x0;
    local_90 = 0;
  }
  else {
    iVar8 = 0;
    if ((int)local_90 != 0) {
      iVar8 = (int)local_90 + -1;
    }
    if ((local_a0 != 0) || (iVar7 = 1, iVar8 == 0)) {
      iVar7 = 0;
    }
    local_res8 = (void *)0x0;
    iVar6 = local_a0;
    if (local_9c < iVar7 + local_a0 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_a0;
    }
    pvVar2 = local_98;
    pvVar11 = local_a8;
    iVar13 = local_9c;
    iVar7 = iVar6;
    if (iVar8 != 0) {
      local_a0 = iVar6 + (uint)(iVar6 == 0) + iVar8;
      if (local_9c < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar6);
      }
      iVar13 = local_9c;
      iVar7 = local_a0;
      pvVar11 = local_a8;
      pvVar1 = (void *)((longlong)local_a8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_a8 = pvVar11;
  local_9c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar7 != 0)) + iVar7)) {
    local_a0 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = local_a0;
  }
  local_a0 = (2 - (uint)(iVar7 != 0)) + iVar7;
  if (local_9c < local_a0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar7);
  }
  pvVar11 = local_88;
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_a8 + lVar5 * 2) = 0x20;
  *(undefined2 *)((longlong)local_a8 + lVar5 * 2 + 2) = 0;
  iVar7 = (int)local_80;
  if (local_a0 < 2) {
    local_88 = (void *)0x0;
    local_80 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  else {
    iVar8 = 0;
    if ((int)local_80 != 0) {
      iVar8 = (int)local_80 + -1;
    }
    if ((local_a0 != 0) || (iVar7 = 1, iVar8 == 0)) {
      iVar7 = 0;
    }
    if (local_9c < local_a0 + iVar8 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
    }
    pvVar2 = local_88;
    iVar6 = local_a0;
    pvVar11 = local_a8;
    iVar7 = local_a0;
    if (iVar8 != 0) {
      lVar5 = (longlong)local_a0;
      local_a0 = local_a0 + (uint)(local_a0 == 0) + iVar8;
      if (local_9c < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar6);
      }
      iVar7 = local_a0;
      pvVar11 = local_a8;
      pvVar1 = (void *)((longlong)local_a8 + (lVar5 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  iVar8 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar8);
  }
  puVar10 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_1);
  *puVar10 = 0;
  *(int *)(puVar10 + 1) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar11,(longlong)iVar7 * 2);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return iVar8;
}



// FUNCTION 141286d90 FUN_141286d90 body=684 status=ok
// SIG undefined FUN_141286d90(void)

int FUN_141286d90(longlong *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                 undefined8 param_5)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  void *_Src;
  bool bVar11;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_3);
  puVar10 = &DAT_143f3eda8;
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar6 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar10 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar10,param_2,puVar4,puVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar9 = (int)local_50;
  iVar8 = local_50._4_4_;
  bVar11 = (int)local_50 != 0;
  local_68 = local_58;
  local_60 = (int)local_50;
  local_58 = (void *)0x0;
  local_5c = local_50._4_4_;
  local_50 = 0;
  if (iVar8 < (int)((2 - (uint)bVar11) + iVar9)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar9 = local_60;
  }
  local_60 = (2 - (uint)(iVar9 != 0)) + iVar9;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar9);
  }
  iVar2 = local_5c;
  iVar8 = local_60;
  pvVar1 = local_68;
  lVar7 = (longlong)iVar9 - (ulonglong)(iVar9 != 0);
  *(undefined2 *)((longlong)local_68 + lVar7 * 2) = 0x20;
  *(undefined2 *)((longlong)local_68 + lVar7 * 2 + 2) = 0;
  puVar5 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_4,param_5);
  if (iVar8 < 2) {
    _Src = (void *)*puVar5;
    *puVar5 = 0;
    iVar8 = *(int *)(puVar5 + 1);
    puVar5[1] = 0;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  else {
    iVar9 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar9 = 0;
    }
    if ((iVar8 != 0) || (iVar3 = 1, iVar9 == 0)) {
      iVar3 = 0;
    }
    local_68 = pvVar1;
    local_60 = iVar8;
    local_5c = iVar2;
    if (iVar2 < iVar3 + iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar2 = local_60;
    pvVar1 = (void *)*puVar5;
    _Src = local_68;
    iVar8 = local_60;
    if (iVar9 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar9 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
      }
      iVar8 = local_60;
      _Src = local_68;
      _Dst = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
    }
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  iVar9 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar9);
  }
  puVar5 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_1);
  *puVar5 = 0;
  *(int *)(puVar5 + 1) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,iVar8,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar8 * 2);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return iVar9;
}



// FUNCTION 141287040 FUN_141287040 body=702 status=ok
// SIG undefined FUN_141287040(void)

int FUN_141287040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  void *_Src_00;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_48,&DAT_1440da628,param_5);
  puVar8 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar8 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar8,param_4,puVar2,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_2,param_3);
  iVar6 = *(int *)(puVar3 + 1);
  local_68 = (void *)*puVar3;
  *puVar3 = 0;
  local_60 = *(int *)(puVar3 + 1);
  local_5c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  iVar5 = local_60;
  if (local_5c < (int)((2 - (uint)(iVar6 != 0)) + local_60)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar5 = local_60;
  }
  local_60 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar5);
  }
  _Src_00 = local_58;
  puVar8 = (undefined2 *)((longlong)local_68 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar8 = 0x20;
  puVar8[1] = 0;
  iVar6 = (int)local_50;
  if (local_60 < 2) {
    local_58 = (void *)0x0;
    local_50 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else {
    iVar5 = 0;
    if ((int)local_50 != 0) {
      iVar5 = (int)local_50 + -1;
    }
    if ((local_60 != 0) || (iVar6 = 1, iVar5 == 0)) {
      iVar6 = 0;
    }
    if (local_5c < iVar6 + local_60 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    _Src = local_58;
    iVar1 = local_60;
    _Src_00 = local_68;
    iVar6 = local_60;
    if (iVar5 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar5;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar1);
      }
      iVar6 = local_60;
      _Src_00 = local_68;
      _Dst = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar5 * 2) = 0;
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  puVar3 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
  *puVar3 = 0;
  *(int *)(puVar3 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar6,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src_00,(longlong)iVar6 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar5;
}



// FUNCTION 141287300 FUN_141287300 body=1193 status=ok
// SIG undefined FUN_141287300(void)

int FUN_141287300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_58,&DAT_1440da628,param_7);
  puVar7 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar12,param_6,puVar3,puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_1440da628,param_5);
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar7 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar7,param_4,puVar3,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_2,param_3);
  local_88 = (void *)*puVar4;
  iVar9 = *(int *)(puVar4 + 1);
  *puVar4 = 0;
  local_80 = *(int *)(puVar4 + 1);
  local_7c = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  iVar6 = local_80;
  if (local_7c < (int)((2 - (uint)(iVar9 != 0)) + local_80)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar6 = local_80;
  }
  local_80 = (2 - (uint)(iVar6 != 0)) + iVar6;
  local_res8 = local_88;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
    local_res8 = local_88;
  }
  pvVar10 = local_78;
  local_88 = local_res8;
  puVar7 = (undefined2 *)((longlong)local_res8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar7 = 0x20;
  puVar7[1] = 0;
  iVar9 = (int)local_70;
  if (local_80 < 2) {
    iVar13 = local_70._4_4_;
    local_78 = (void *)0x0;
    local_70 = 0;
  }
  else {
    iVar6 = 0;
    if ((int)local_70 != 0) {
      iVar6 = (int)local_70 + -1;
    }
    if ((local_80 != 0) || (iVar9 = 1, iVar6 == 0)) {
      iVar9 = 0;
    }
    local_res8 = (void *)0x0;
    iVar8 = local_80;
    if (local_7c < iVar9 + local_80 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
      iVar8 = local_80;
    }
    pvVar2 = local_78;
    pvVar10 = local_88;
    iVar13 = local_7c;
    iVar9 = iVar8;
    if (iVar6 != 0) {
      local_80 = iVar8 + (uint)(iVar8 == 0) + iVar6;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar8);
      }
      iVar13 = local_7c;
      iVar9 = local_80;
      pvVar10 = local_88;
      pvVar1 = (void *)((longlong)local_88 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_88 = pvVar10;
  local_7c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar9 != 0)) + iVar9)) {
    local_80 = iVar9;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar9 = local_80;
  }
  local_80 = (2 - (uint)(iVar9 != 0)) + iVar9;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
  }
  pvVar10 = local_68;
  puVar7 = (undefined2 *)((longlong)local_88 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
  *puVar7 = 0x20;
  puVar7[1] = 0;
  iVar9 = (int)local_60;
  if (local_80 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    if ((local_80 != 0) || (iVar9 = 1, iVar6 == 0)) {
      iVar9 = 0;
    }
    if (local_7c < iVar9 + local_80 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    pvVar2 = local_68;
    iVar8 = local_80;
    pvVar10 = local_88;
    iVar9 = local_80;
    if (iVar6 != 0) {
      lVar11 = (longlong)local_80;
      local_80 = local_80 + (uint)(local_80 == 0) + iVar6;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar8);
      }
      iVar9 = local_80;
      pvVar10 = local_88;
      pvVar1 = (void *)((longlong)local_88 + (lVar11 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar4 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar4 = 0;
  *(int *)(puVar4 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar10,(longlong)iVar9 * 2);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return iVar6;
}



// FUNCTION 1412877b0 FUN_1412877b0 body=1362 status=ok
// SIG undefined FUN_1412877b0(void)

int FUN_1412877b0(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,char param_5,
                 undefined8 param_6,float param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 *local_res8;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_7);
  puVar11 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar1,param_6,puVar3,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,&DAT_1447540a8,(int)param_5);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar1,param_4,puVar3,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  pwVar10 = L"false";
  if (param_3 != '\0') {
    pwVar10 = L"true";
  }
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  puVar2 = (undefined2 *)0x0;
  if (*pwVar10 != L'\0') {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pwVar10[lVar8] != L'\0');
    uVar5 = (int)lVar8 + 1;
    local_80 = (ulonglong)uVar5;
    uVar12 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      uVar12 = (uint)local_80;
    }
    puVar3 = local_88;
    FGenericPlatformString::Memcpy(local_88,pwVar10,(longlong)(int)uVar5 * 2);
    puVar2 = puVar3;
    if (uVar12 != 0) goto LAB_14128793b;
  }
  puVar3 = &DAT_143f3eda8;
LAB_14128793b:
  if ((int)param_1[6] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar11 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar11,param_2,puVar1,puVar3);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)local_50;
  iVar7 = local_50._4_4_;
  local_88 = local_58;
  local_58 = (undefined2 *)0x0;
  local_80._0_4_ = (int)local_50;
  local_80._4_4_ = local_50._4_4_;
  iVar4 = (2 - (uint)((int)local_50 != 0)) + (int)local_50;
  local_50 = 0;
  if (iVar7 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar6 = (uint)local_80;
  }
  local_80._0_4_ = (2 - (uint)(iVar6 != 0)) + iVar6;
  local_res8 = local_88;
  if (local_80._4_4_ < (int)(uint)local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
    local_res8 = local_88;
  }
  puVar11 = local_78;
  local_88 = local_res8;
  lVar8 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  local_res8[lVar8] = 0x20;
  local_res8[lVar8 + 1] = 0;
  iVar6 = (int)local_70;
  if ((int)(uint)local_80 < 2) {
    iVar13 = local_70._4_4_;
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
  }
  else {
    iVar7 = 0;
    if ((int)local_70 != 0) {
      iVar7 = (int)local_70 + -1;
    }
    if (((uint)local_80 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = 0;
    }
    local_res8 = (undefined2 *)0x0;
    iVar4 = (uint)local_80;
    if (local_80._4_4_ < (int)(iVar6 + (uint)local_80 + iVar7)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar4 = (uint)local_80;
    }
    puVar2 = local_78;
    puVar11 = local_88;
    iVar13 = local_80._4_4_;
    iVar6 = iVar4;
    if (iVar7 != 0) {
      local_80._0_4_ = iVar4 + (uint)(iVar4 == 0) + iVar7;
      if (local_80._4_4_ < (int)(uint)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar4);
      }
      iVar13 = local_80._4_4_;
      iVar6 = (uint)local_80;
      puVar11 = local_88;
      puVar3 = local_88 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0));
      _guard_xfg_dispatch_icall_nop(puVar3,puVar2,(longlong)iVar7 * 2);
      puVar3[iVar7] = 0;
    }
  }
  local_88 = puVar11;
  local_80._4_4_ = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar6 != 0)) + iVar6)) {
    local_80._0_4_ = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar6 = (uint)local_80;
  }
  local_80._0_4_ = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_80._4_4_ < (int)(uint)local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar6);
  }
  puVar11 = local_68;
  lVar8 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  local_88[lVar8] = 0x20;
  local_88[lVar8 + 1] = 0;
  iVar6 = (int)local_60;
  if ((int)(uint)local_80 < 2) {
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar7 = 0;
    if ((int)local_60 != 0) {
      iVar7 = (int)local_60 + -1;
    }
    if (((uint)local_80 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = 0;
    }
    if (local_80._4_4_ < (int)((uint)local_80 + iVar7 + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    puVar2 = local_68;
    iVar4 = (uint)local_80;
    puVar11 = local_88;
    iVar6 = (uint)local_80;
    if (iVar7 != 0) {
      lVar8 = (longlong)(int)(uint)local_80;
      local_80._0_4_ = (uint)local_80 + ((uint)local_80 == 0) + iVar7;
      if (local_80._4_4_ < (int)(uint)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar4);
      }
      iVar6 = (uint)local_80;
      puVar11 = local_88;
      puVar3 = local_88 + (lVar8 - (ulonglong)(iVar4 != 0));
      _guard_xfg_dispatch_icall_nop(puVar3,puVar2,(longlong)iVar7 * 2);
      puVar3[iVar7] = 0;
    }
  }
  if (local_res8 != (undefined2 *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
  }
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_1);
  *puVar9 = 0;
  *(int *)(puVar9 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar6,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar9,puVar11,(longlong)iVar6 * 2);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return iVar7;
}



// FUNCTION 141287d10 Append<FDefaultSetAllocator> body=543 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
     Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_1405effc0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_141287dfd;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141287dfd:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141287ec3;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141287ec3:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    FUN_141288240(param_1,local_res8,(longlong)(int)uStack_5c * 0x10 + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141287f30 FUN_141287f30 body=770 status=ok
// SIG undefined FUN_141287f30(void)

int * FUN_141287f30(longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  uVar8 = 0;
  *param_2 = iVar13;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar13 * 0x28);
  FString::FString(_Src,param_3);
  _Src[2] = 0;
  _Src[3] = 0;
  lVar12 = *(longlong *)(param_3 + 0x10);
  _Src[2] = lVar12;
  if ((lVar12 != 0) || (*(longlong *)(param_3 + 0x10) != 0)) {
    uVar8 = *(undefined8 *)(param_3 + 0x18);
  }
  _Src[3] = uVar8;
  puVar14 = &DAT_143f3eda8;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar16 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*_Src;
      }
      iVar6 = FUN_140438070(puVar9);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar12 = *param_1;
        do {
          lVar2 = (longlong)iVar6 * 0x28;
          if (*(int *)(_Src + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar2 + 8 + lVar12) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar2 + lVar12);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar9);
          iVar13 = iVar6;
          if (iVar5 == 0) break;
          lVar12 = *param_1;
          iVar6 = *(int *)(lVar12 + 0x20 + lVar2);
          iVar13 = iVar15;
        } while (iVar6 != -1);
      }
    }
    bVar16 = iVar13 != -1;
    if (bVar16) {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + (longlong)iVar13 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar12 + (longlong)iVar13 * 0x28),_Src,0x20);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar6;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)iVar6 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar12 + 4 + (longlong)iVar6 * 0x28) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14128820d;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar15 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar14 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar14);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar15;
  }
LAB_14128820d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141288240 FUN_141288240 body=762 status=ok
// SIG undefined FUN_141288240(void)

int * FUN_141288240(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar6 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar12 + lVar4);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  param_3 = (longlong *)*param_3;
  lVar7 = (longlong)iVar10 * 0x10;
  plVar12 = (longlong *)(*param_1 + lVar7);
  *plVar12 = (longlong)param_3;
  *(undefined4 *)(plVar12 + 1) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar9 = iVar15;
    if (uVar13 != 0) {
      lVar1 = *param_3;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          plVar5 = *(longlong **)((longlong)iVar8 * 0x10 + *param_1);
          if ((*plVar5 == lVar1) &&
             (*(longlong *)(plVar5[1] + 0x28) == *(longlong *)(param_3[1] + 0x28))) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar9 = iVar8;
        } while ((!bVar16) &&
                (iVar8 = *(int *)((longlong)iVar8 * 0x10 + *param_1 + 8), iVar9 = iVar15,
                iVar8 != -1));
      }
    }
    bVar16 = iVar9 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),plVar12,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar12 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar12 + lVar4);
      *param_2 = iVar9;
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141288512;
    }
  }
  if (3 < uVar13) {
    uVar3 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar15;
    }
    uVar3 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*(undefined8 *)*plVar12 >> 0x20) + (int)*(undefined8 *)*plVar12 &
             (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0xc) = uVar13;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_1412a8360(param_1);
  }
LAB_141288512:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141288540 FUN_141288540 body=340 status=ok
// SIG undefined FUN_141288540(void)

longlong FUN_141288540(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *param_1;
  lVar1 = lVar7 + (longlong)(int)param_1[1] * 0x28;
  if (lVar7 != lVar1) {
    lVar8 = 0;
    do {
      lVar3 = FWeakObjectPtr::Get(lVar7);
      lVar6 = lVar8;
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar7 + 8)) && (*(longlong *)(lVar7 + 0x10) != 0)) {
          lVar3 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar7,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar7 + 8) = DAT_1464b56f4;
          }
          lVar3 = FWeakObjectPtr::Get(lVar7);
          if (lVar3 != 0) goto LAB_1412885ec;
        }
      }
      else {
LAB_1412885ec:
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar5 = FUN_142f71d80();
          lVar4 = lVar3;
          do {
            lVar6 = lVar3;
            if (lVar4 == lVar5) break;
            lVar4 = *(longlong *)(lVar4 + 0x30);
            lVar6 = lVar8;
          } while (lVar4 != 0);
        }
      }
      lVar3 = lVar8;
      if (param_2 != 0) {
        lVar5 = FUN_142f71d80();
        lVar4 = param_2;
        do {
          lVar3 = param_2;
          if (lVar4 == lVar5) break;
          lVar4 = *(longlong *)(lVar4 + 0x30);
          lVar3 = lVar8;
        } while (lVar4 != 0);
      }
      if (lVar6 == lVar3) {
        return lVar7;
      }
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar1);
  }
  return 0;
}



// FUNCTION 1412886a0 FUN_1412886a0 body=224 status=ok
// SIG undefined FUN_1412886a0(void)

undefined8 FUN_1412886a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = FMovieSceneActorReferenceKey::StaticStruct();
  lVar3 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar3 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_141288763;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_141288763:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar4;
}



// FUNCTION 141288780 FUN_141288780 body=43 status=ok
// SIG undefined FUN_141288780(void)

void FUN_141288780(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x0001412887a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7f8))(param_1,uVar1,(char)param_1[0xd2]);
  return;
}



// FUNCTION 1412887b0 FUN_1412887b0 body=267 status=ok
// SIG undefined FUN_1412887b0(void)

undefined8 FUN_1412887b0(longlong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *local_38;
  ulonglong local_30;
  
  puVar6 = &DAT_143f3eda8;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  puVar5 = (undefined2 *)0x0;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_4[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    uVar7 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar7 = (uint)local_30;
    }
    puVar1 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_4,(longlong)(int)uVar3 * 2);
    puVar5 = puVar1;
    if (uVar7 != 0) goto LAB_141288854;
  }
  puVar1 = &DAT_143f3eda8;
LAB_141288854:
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar6 = *(undefined2 **)(param_1 + 0x18);
  }
  FString::PrintfImpl(param_2,L"%s%s %s%s",puVar6,param_3,puVar2,puVar1);
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return param_2;
}



// FUNCTION 1412888c0 FUN_1412888c0 body=1020 status=ok
// SIG undefined FUN_1412888c0(void)

void FUN_1412888c0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1412889bd;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_1412889bd:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141288a95;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_141288a95:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_142a175e0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1412888c0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 141288cc0 FUN_141288cc0 body=1139 status=ok
// SIG undefined FUN_141288cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141288cc0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_141288def;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_141288def:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141288eaf;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_141288eaf:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1414ebc70();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_141288cc0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 141289140 HeapSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_> body=349 status=ok
// SIG undefined HeapSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar9 = iVar5;
joined_r0x00014128916a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar8 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1 + ((longlong)iVar6 + 2) * 2) <
              *(int *)(param_1 + (longlong)iVar8 * 2)) {
            iVar8 = iVar6;
          }
          iVar8 = iVar8 + 1;
        }
        piVar11 = (int *)(param_1 + (longlong)iVar5 * 2);
        piVar7 = (int *)(param_1 + (longlong)iVar8 * 2);
        if (*piVar11 < *piVar7) {
          if (piVar11 != piVar7) {
            uVar2 = *(undefined8 *)(piVar7 + 2);
            uVar3 = *(undefined8 *)piVar11;
            uVar4 = *(undefined8 *)(piVar11 + 2);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar7;
            *(undefined8 *)(piVar11 + 2) = uVar2;
            *(undefined8 *)piVar7 = uVar3;
            *(undefined8 *)(piVar7 + 2) = uVar4;
          }
          iVar6 = iVar8 * 2 + 1;
          iVar5 = iVar8;
          goto joined_r0x00014128916a;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar9 + -1;
      iVar1 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar10) {
        uVar2 = puVar10[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar10;
        param_1[1] = uVar2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 2) <
                *(int *)(param_1 + (longlong)iVar6 * 2)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          piVar11 = (int *)(param_1 + (longlong)iVar5 * 2);
          piVar7 = (int *)(param_1 + (longlong)iVar6 * 2);
          if (*piVar7 <= *piVar11) break;
          if (piVar11 != piVar7) {
            uVar2 = *(undefined8 *)(piVar7 + 2);
            uVar3 = *(undefined8 *)piVar11;
            uVar4 = *(undefined8 *)(piVar11 + 2);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar7;
            *(undefined8 *)(piVar11 + 2) = uVar2;
            *(undefined8 *)piVar7 = uVar3;
            *(undefined8 *)(piVar7 + 2) = uVar4;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1412892a0 FUN_1412892a0 body=431 status=ok
// SIG undefined FUN_1412892a0(void)

bool FUN_1412892a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_res8 [2];
  
  uVar4 = FUN_140438070(param_2);
  uVar9 = ((int)((ulonglong)*param_3 >> 0x20) - uVar4) + (int)*param_3 ^ uVar4 >> 0xd;
  uVar6 = (-0x61c88647 - uVar9) - uVar4 ^ uVar9 << 8;
  uVar10 = (uVar4 - uVar6) - uVar9 ^ uVar6 >> 0xd;
  uVar9 = (uVar9 - uVar6) - uVar10 ^ uVar10 >> 0xc;
  uVar4 = (uVar6 - uVar9) - uVar10 ^ uVar9 << 0x10;
  uVar10 = (uVar10 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar6 = (uVar9 - uVar4) - uVar10 ^ uVar10 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar10 ^ uVar6 << 10;
  FUN_14217c550(local_res8,(uVar10 - uVar4) - uVar6 ^ uVar4 >> 0xf);
  plVar1 = (longlong *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xe0) = local_res8[0];
  lVar7 = *plVar1;
  lVar8 = (longlong)*(int *)(param_1 + 0xd0) * 0x58 + lVar7;
  do {
    if (lVar7 == lVar8) {
LAB_1412893a0:
      iVar2 = *(int *)(param_1 + 0xd0);
      *(int *)(param_1 + 0xd0) = iVar2 + 1;
      if (*(int *)(param_1 + 0xd4) < iVar2 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar7 = *plVar1 + (longlong)iVar2 * 0x58;
      uVar5 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                        (local_res8,param_1 + 0xe0);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(lVar7,uVar5);
      *(undefined1 *)(lVar7 + 4) = 0;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined4 *)(lVar7 + 0x3c) = 0;
      *(undefined4 *)(lVar7 + 0x38) = 0xffffffff;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined4 *)(lVar7 + 0x50) = 0;
      *(longlong *)(param_1 + 0xd8) = (longlong)iVar2 * 0x58 + *plVar1;
      return true;
    }
    cVar3 = FUN_14217f860(lVar7,param_1 + 0xe0);
    if (cVar3 != '\0') {
      if (lVar7 != 0) {
        *(longlong *)(param_1 + 0xd8) = lVar7;
        TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
        Append<FDefaultSetAllocator>(param_1 + 0x78,lVar7 + 8);
        return *(char *)(lVar7 + 4) == '\0';
      }
      goto LAB_1412893a0;
    }
    lVar7 = lVar7 + 0x58;
  } while( true );
}



// FUNCTION 141289450 IntroSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_> body=619 status=ok
// SIG undefined IntroSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      piVar15 = (int *)*plVar10;
      piVar13 = (int *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)piVar13 - (longlong)piVar15 >> 4) + 1;
      piVar14 = piVar15;
      if ((int)local_338 != 0) {
LAB_141289520:
        if (8 < lVar8) {
          piVar15 = piVar14 + (lVar8 / 2) * 4;
          if (piVar15 != piVar14) {
            iVar2 = piVar14[1];
            iVar3 = piVar14[2];
            iVar4 = piVar14[3];
            uVar5 = *(undefined8 *)piVar15;
            uVar6 = *(undefined8 *)(piVar15 + 2);
            *piVar15 = *piVar14;
            piVar15[1] = iVar2;
            piVar15[2] = iVar3;
            piVar15[3] = iVar4;
            *(undefined8 *)piVar14 = uVar5;
            *(undefined8 *)(piVar14 + 2) = uVar6;
          }
          piVar11 = piVar13 + 4;
          piVar15 = piVar14;
LAB_141289556:
          piVar9 = piVar15;
          piVar15 = piVar9 + 4;
          if (piVar15 <= piVar13) goto code_r0x00014128955f;
          goto LAB_141289566;
        }
        for (; piVar11 = piVar14, piVar15 = piVar14, piVar14 < piVar13; piVar13 = piVar13 + -4) {
          while (piVar9 = piVar11, piVar15 = piVar15 + 4, piVar15 <= piVar13) {
            piVar11 = piVar15;
            if (*piVar15 <= *piVar9) {
              piVar11 = piVar9;
            }
          }
          if (piVar9 != piVar13) {
            uVar7 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)piVar9;
            uVar6 = *(undefined8 *)(piVar9 + 2);
            *(undefined8 *)piVar9 = *(undefined8 *)piVar13;
            *(undefined8 *)(piVar9 + 2) = uVar7;
            *(undefined8 *)piVar13 = uVar5;
            *(undefined8 *)(piVar13 + 2) = uVar6;
          }
        }
        goto LAB_14128962f;
      }
LAB_141289620:
      local_338 = lVar1;
      HeapSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>
                (piVar15,lVar8,param_3,param_4);
LAB_14128962f:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x00014128955f:
  if (*piVar15 <= *piVar14) goto LAB_141289556;
LAB_141289566:
  do {
    piVar12 = piVar11;
    piVar11 = piVar12 + -4;
    if (piVar11 <= piVar14) break;
  } while (*piVar14 <= *piVar11);
  if (piVar15 <= piVar11) {
    if (piVar15 != piVar11) {
      iVar2 = piVar12[-3];
      iVar3 = piVar12[-2];
      iVar4 = piVar12[-1];
      uVar5 = *(undefined8 *)piVar15;
      uVar6 = *(undefined8 *)(piVar9 + 6);
      *piVar15 = *piVar11;
      piVar9[5] = iVar2;
      piVar9[6] = iVar3;
      piVar9[7] = iVar4;
      *(undefined8 *)piVar11 = uVar5;
      *(undefined8 *)(piVar12 + -2) = uVar6;
    }
    goto LAB_141289556;
  }
  if (piVar14 != piVar11) {
    iVar2 = piVar12[-3];
    iVar3 = piVar12[-2];
    iVar4 = piVar12[-1];
    uVar5 = *(undefined8 *)piVar14;
    uVar6 = *(undefined8 *)(piVar14 + 2);
    *piVar14 = *piVar11;
    piVar14[1] = iVar2;
    piVar14[2] = iVar3;
    piVar14[3] = iVar4;
    *(undefined8 *)piVar11 = uVar5;
    *(undefined8 *)(piVar12 + -2) = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar11 + (-0x10 - (longlong)piVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)piVar13 - (longlong)piVar15 & 0xfffffffffffffff0U)) {
    if (piVar15 < piVar13) {
      *plVar10 = (longlong)piVar15;
      plVar10[1] = (longlong)piVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (piVar11 <= piVar14 + 4) goto LAB_14128962f;
    piVar13 = piVar12 + -8;
    piVar15 = piVar14;
  }
  else {
    if (piVar14 + 4 < piVar11) {
      *plVar10 = (longlong)piVar14;
      plVar10[1] = (longlong)(piVar12 + -8);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (piVar13 <= piVar15) goto LAB_14128962f;
  }
  lVar8 = ((longlong)piVar13 - (longlong)piVar15 >> 4) + 1;
  piVar14 = piVar15;
  if ((int)local_338 == 0) goto LAB_141289620;
  goto LAB_141289520;
}



// FUNCTION 1412896c0 FUN_1412896c0 body=69 status=ok
// SIG undefined FUN_1412896c0(void)

ulonglong FUN_1412896c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1414a9b90();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141289710 FUN_141289710 body=89 status=ok
// SIG undefined FUN_141289710(void)

void FUN_141289710(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142e43690();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 141289770 FUN_141289770 body=692 status=ok
// SIG undefined FUN_141289770(void)

void FUN_141289770(longlong param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int local_res20;
  int local_68;
  longlong local_58;
  
  uVar19 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    lVar5 = 0;
    iVar14 = 1;
    do {
      if (iVar14 < (int)param_2) {
        lVar8 = *(longlong *)(param_1 + lVar5 * 8);
        lVar3 = *(longlong *)(param_1 + 8 + lVar5 * 8);
        if (*(float *)(lVar8 + 0x48) < *(float *)(lVar3 + 0x48)) {
          *(longlong *)(param_1 + lVar5 * 8) = lVar3;
          *(longlong *)(param_1 + 8 + lVar5 * 8) = lVar8;
        }
      }
      iVar14 = iVar14 + 2;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar19);
  }
  local_68 = 2;
  uVar7 = uVar19;
  if (2 < (int)param_2) {
    do {
      iVar14 = local_68 * 2;
      local_res20 = 0;
      local_58 = 0;
      lVar5 = param_1;
      do {
        iVar21 = (int)uVar7 - local_res20;
        if (iVar14 <= iVar21) {
          iVar21 = iVar14;
        }
        iVar10 = 0;
        iVar20 = local_68;
        if (0 < local_68) {
          do {
            if (iVar21 <= iVar20) break;
            lVar8 = 0;
            if (iVar20 - iVar10 != 0) {
              fVar2 = *(float *)(*(longlong *)(lVar5 + (longlong)iVar20 * 8) + 0x48);
              uVar7 = (longlong)(iVar20 - iVar10);
              do {
                uVar16 = uVar7 >> 1;
                pfVar1 = (float *)(*(longlong *)(lVar5 + (uVar16 + lVar8 + (longlong)iVar10) * 8) +
                                  0x48);
                if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
                  lVar8 = (ulonglong)((uint)uVar7 & 1) + uVar16 + lVar8;
                }
                uVar7 = uVar16;
              } while (uVar16 != 0);
            }
            iVar10 = iVar10 + (int)lVar8;
            if (iVar20 <= iVar10) break;
            uVar7 = 0;
            if (iVar21 - iVar20 != 0) {
              uVar16 = (longlong)(iVar21 - iVar20);
              do {
                uVar17 = uVar16 >> 1;
                if (*(float *)(*(longlong *)(lVar5 + (longlong)iVar10 * 8) + 0x48) <
                    *(float *)(*(longlong *)(lVar5 + (uVar17 + uVar7 + (longlong)iVar20) * 8) + 0x48
                              )) {
                  uVar7 = (ulonglong)((uint)uVar16 & 1) + uVar17 + uVar7;
                }
                uVar16 = uVar17;
              } while (uVar17 != 0);
            }
            iVar15 = (int)uVar7;
            if (iVar15 != 0) {
              uVar7 = uVar7 & 0xffffffff;
              iVar12 = (iVar15 - iVar10) + iVar20;
              iVar18 = iVar12;
              do {
                iVar6 = (int)uVar7;
                uVar9 = iVar18 % iVar6;
                uVar7 = (ulonglong)uVar9;
                iVar18 = iVar6;
              } while (uVar9 != 0);
              uVar7 = 0;
              if (0 < iVar6) {
                puVar13 = (undefined8 *)(lVar5 + (longlong)iVar10 * 8);
                do {
                  uVar11 = *puVar13;
                  iVar18 = (int)uVar7;
                  uVar16 = (longlong)iVar12 / (longlong)iVar6 & 0xffffffff;
                  if (0 < (int)((longlong)iVar12 / (longlong)iVar6)) {
                    do {
                      uVar17 = (longlong)((int)uVar7 + iVar15) % (longlong)iVar12;
                      uVar7 = uVar17 & 0xffffffff;
                      lVar8 = (longlong)((int)uVar17 + iVar10);
                      uVar4 = *(undefined8 *)(lVar5 + lVar8 * 8);
                      *(undefined8 *)(lVar5 + lVar8 * 8) = uVar11;
                      uVar16 = uVar16 - 1;
                      uVar11 = uVar4;
                    } while (uVar16 != 0);
                  }
                  uVar9 = iVar18 + 1;
                  uVar7 = (ulonglong)uVar9;
                  puVar13 = puVar13 + 1;
                } while ((int)uVar9 < iVar6);
              }
            }
            iVar20 = iVar20 + iVar15;
            iVar10 = iVar10 + 1 + iVar15;
          } while (iVar10 < iVar20);
          uVar7 = (ulonglong)param_2;
        }
        local_res20 = local_res20 + local_68 * 2;
        local_58 = local_58 + (longlong)local_68 * 2;
        lVar5 = lVar5 + (longlong)local_68 * 0x10;
      } while (local_58 < (longlong)uVar19);
      local_68 = iVar14;
    } while (iVar14 < (int)uVar7);
  }
  return;
}



// FUNCTION 141289a30 FUN_141289a30 body=239 status=ok
// SIG undefined FUN_141289a30(void)

undefined8 *
FUN_141289a30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_98 [144];
  
  uVar9 = *param_3;
  uVar1 = param_3[1];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  lVar8 = FUN_141289d90(local_98,param_5);
  *param_1 = &PTR_FUN_14475bad8;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = uVar9;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  FUN_141289d90(param_1 + 10,lVar8);
  uVar9 = FDelegateHandle::GenerateNewID();
  param_1[0x14] = uVar9;
  if (*(longlong *)(lVar8 + 8) != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14475bb20;
  if (*(longlong *)(param_5 + 8) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141289b20 FUN_141289b20 body=65 status=ok
// SIG undefined FUN_141289b20(void)

undefined8 * FUN_141289b20(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14475a2c8;
  FWeakObjectPtr::operator=(param_1 + 0x8d,0);
  param_1[0x8e] = 0;
  return param_1;
}



// FUNCTION 141289b70 FUN_141289b70 body=385 status=ok
// SIG undefined FUN_141289b70(void)

undefined8 * FUN_141289b70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14125b830();
  *param_1 = &PTR_FUN_1447556b8;
  param_1[0x8b] = &PTR_LAB_1447561a0;
  param_1[0x8c] = &PTR_LAB_144756210;
  param_1[0x8d] = &PTR_LAB_144756230;
  param_1[0x11b] = &PTR_LAB_144756248;
  param_1[0x11c] = &PTR_LAB_144756270;
  param_1[0x11d] = &PTR_LAB_144756288;
  param_1[0x11e] = &PTR_LAB_1447562e0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponMesh3P",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a07000();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x12e] = lVar4;
  *(undefined1 *)(lVar4 + 0x878) = 0;
  param_1[0x2d] = param_1[0x12e];
  puVar2 = (undefined8 *)FName::FName(local_res8,L"OakDamage",1);
  uVar1 = *puVar2;
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x12f] = lVar4;
  *(byte *)(lVar4 + 0x7e8) = *(byte *)(lVar4 + 0x7e8) | 1;
  *(byte *)(param_1[0x12f] + 0x7e8) = *(byte *)(param_1[0x12f] + 0x7e8) | 2;
  return param_1;
}



// FUNCTION 141289d00 FUN_141289d00 body=133 status=ok
// SIG undefined FUN_141289d00(void)

undefined8 * FUN_141289d00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14475aeb0;
  param_1[0x8b] = &PTR_LAB_14475b598;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DiscoveryComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141304ad0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 141289d90 FUN_141289d90 body=238 status=ok
// SIG undefined FUN_141289d90(void)

undefined1 * FUN_141289d90(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar4,0);
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar3 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar2 = puVar3[-1];
      puVar2[1] = *puVar3;
      puVar2[2] = puVar3[1];
      puVar2[3] = puVar3[2];
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 141289e80 FUN_141289e80 body=393 status=ok
// SIG undefined FUN_141289e80(void)

undefined8 * FUN_141289e80(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  *param_1 = 0;
  FString::FString(param_1 + 1,param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  iVar7 = *(int *)(param_2 + 0x60);
  lVar1 = *(longlong *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,iVar7,0);
    puVar6 = (undefined8 *)param_1[0xb];
    puVar8 = (undefined8 *)(lVar1 + 8);
    do {
      *puVar6 = &PTR_FUN_1441d26b8;
      puVar6[1] = *puVar8;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0xc);
      uVar3 = *(undefined4 *)(puVar8 + 2);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
      *(undefined4 *)(puVar6 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar4;
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 3);
      *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *puVar6 = &PTR_FUN_144278ac0;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar6 + 5,puVar8 + 4);
      puVar6 = puVar6 + 10;
      puVar8 = puVar8 + 10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1 + 0xd,uVar5);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  TArray<TSoftClassPtr<AItem>,FDefaultAllocator>::CopyToEmpty<TSoftClassPtr<AItem>_>
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8),0,0);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xe4) = *(undefined1 *)(param_2 + 0xe4);
  *(undefined1 *)((longlong)param_1 + 0xe5) = *(undefined1 *)(param_2 + 0xe5);
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 14128a010 FUN_14128a010 body=137 status=ok
// SIG undefined FUN_14128a010(void)

undefined8 * FUN_14128a010(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__1447592e0;
  param_1[5] = &PTR_LAB_1447596d8;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  return param_1;
}



// FUNCTION 14128a0a0 FUN_14128a0a0 body=90 status=ok
// SIG undefined FUN_14128a0a0(void)

undefined8 * FUN_14128a0a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14475a9b8;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 14128a100 FUN_14128a100 body=33 status=ok
// SIG undefined FUN_14128a100(void)

undefined8 * FUN_14128a100(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_1447548e0;
  return param_1;
}



// FUNCTION 14128a130 FUN_14128a130 body=33 status=ok
// SIG undefined FUN_14128a130(void)

undefined8 * FUN_14128a130(undefined8 *param_1)

{
  FUN_142f3c350();
  *param_1 = &PTR__scalar_deleting_destructor__14475ac38;
  return param_1;
}



// FUNCTION 14128a160 FUN_14128a160 body=33 status=ok
// SIG undefined FUN_14128a160(void)

undefined8 * FUN_14128a160(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_144754600;
  return param_1;
}



// FUNCTION 14128a190 FUN_14128a190 body=207 status=ok
// SIG undefined FUN_14128a190(void)

undefined8 * FUN_14128a190(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1447540d0;
  FText::FText(param_1 + 6);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 9);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x18);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x27);
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"[mayhembold]Mayhem Level {0}[/mayhembold]",L"OakWeaponMayhem",
                     L"MayhemLevelText");
  FText::operator=(param_1 + 6,uVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14128a260 FUN_14128a260 body=58 status=ok
// SIG undefined FUN_14128a260(void)

undefined8 * FUN_14128a260(undefined8 *param_1)

{
  FUN_142fdf270();
  param_1[0x50] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144754350;
  param_1[0x20] = &PTR_LAB_1447545e8;
  return param_1;
}



// FUNCTION 14128a2a0 FUN_14128a2a0 body=134 status=ok
// SIG undefined FUN_14128a2a0(void)

undefined8 * FUN_14128a2a0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR_FUN_14475b5c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FName::FName(local_res8,L"Engine",1);
  param_1[5] = local_res8[0];
  FName::FName(local_res8,L"ZoneMap",1);
  param_1[6] = local_res8[0];
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined4 *)((longlong)param_1 + 100) = 0x42700000;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// FUNCTION 14128a330 UMaterialExpressionComment body=43 status=ok
// SIG undefined UMaterialExpressionComment(void)

undefined8 * UMaterialExpressionComment::UMaterialExpressionComment(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14475b858;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14128a360 FUN_14128a360 body=57 status=ok
// SIG undefined FUN_14128a360(void)

undefined8 * FUN_14128a360(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14420b9d8;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x14;
  return param_1;
}



// FUNCTION 14128a3a0 FUN_14128a3a0 body=168 status=ok
// SIG undefined FUN_14128a3a0(void)

undefined8 * FUN_14128a3a0(undefined8 *param_1)

{
  FUN_143067d80();
  *param_1 = &PTR_FUN_1447562f8;
  param_1[5] = &PTR_LAB_1447567f8;
  param_1[0x2f] = &PTR_LAB_144756828;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x37);
  param_1[0x40] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FUN_14246fd70(param_1 + 0x37,0);
  *(byte *)((longlong)param_1 + 0x1d4) = *(byte *)((longlong)param_1 + 0x1d4) | 1;
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)((longlong)param_1 + 0x1bc);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f9) = 0;
  return param_1;
}



// FUNCTION 14128a450 FUN_14128a450 body=249 status=ok
// SIG undefined FUN_14128a450(void)

undefined8 * FUN_14128a450(undefined8 *param_1)

{
  FUN_140b16fe0();
  *param_1 = &PTR_FUN_144755110;
  param_1[5] = &PTR_LAB_144755658;
  param_1[0x2f] = &PTR_LAB_144755688;
  param_1[0x71] = &PTR_LAB_1447556a0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x80,0);
  param_1[0x81] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x82,0);
  param_1[0x83] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x84,0);
  param_1[0x85] = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 14128a550 FUN_14128a550 body=188 status=ok
// SIG undefined FUN_14128a550(void)

undefined8 * FUN_14128a550(undefined8 *param_1)

{
  FUN_143098410();
  *param_1 = &PTR_FUN_1447571f0;
  param_1[5] = &PTR_LAB_144757648;
  param_1[0x2f] = &PTR_LAB_144757678;
  param_1[0x30] = &PTR_LAB_144757690;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(byte *)((longlong)param_1 + 0x1b9) = *(byte *)((longlong)param_1 + 0x1b9) | 8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ba) = 1;
  *(undefined4 *)(param_1 + 0x47) = 1;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x1e;
  *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x4e) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f000000;
  return param_1;
}



// FUNCTION 14128a610 FUN_14128a610 body=115 status=ok
// SIG undefined FUN_14128a610(void)

undefined8 * FUN_14128a610(undefined8 *param_1)

{
  FUN_143098730();
  *param_1 = &PTR_FUN_1447576f0;
  param_1[5] = &PTR_LAB_144757b28;
  param_1[0x2f] = &PTR_LAB_144757b58;
  param_1[0x30] = &PTR_LAB_144757b70;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x202) = 0;
  return param_1;
}



// FUNCTION 14128a690 FUN_14128a690 body=37 status=ok
// SIG undefined FUN_14128a690(void)

undefined8 * FUN_14128a690(undefined8 *param_1)

{
  UCommandlet::UCommandlet();
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xffffffef;
  *param_1 = &PTR__scalar_deleting_destructor__144108b00;
  return param_1;
}



// FUNCTION 14128a6c0 FUN_14128a6c0 body=75 status=ok
// SIG undefined FUN_14128a6c0(void)

undefined8 * FUN_14128a6c0(undefined8 *param_1)

{
  FUN_143068930();
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0x44bb8000;
  *param_1 = &PTR__scalar_deleting_destructor__144757b90;
  param_1[5] = &PTR_LAB_1447581d0;
  param_1[0x2f] = &PTR_LAB_144758200;
  *(undefined1 *)(param_1 + 299) = 1;
  return param_1;
}



// FUNCTION 14128a710 FUN_14128a710 body=99 status=ok
// SIG undefined FUN_14128a710(void)

undefined8 * FUN_14128a710(undefined8 *param_1)

{
  FUN_143098cc0();
  *(undefined1 *)(param_1 + 0x43) = 1;
  *param_1 = &PTR_FUN_144758228;
  param_1[5] = &PTR_LAB_144758748;
  param_1[0x2f] = &PTR_LAB_144758778;
  *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  return param_1;
}



// FUNCTION 14128a780 FUN_14128a780 body=85 status=ok
// SIG undefined FUN_14128a780(void)

undefined8 * FUN_14128a780(undefined8 *param_1)

{
  FUN_143068930();
  *(undefined1 *)((longlong)param_1 + 0x959) = 0;
  *param_1 = &PTR_FUN_144758790;
  param_1[5] = &PTR_LAB_144758dd0;
  param_1[0x2f] = &PTR_LAB_144758e00;
  *(undefined4 *)(param_1 + 0x12d) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0x3f800000;
  return param_1;
}



// FUNCTION 14128a7e0 FUN_14128a7e0 body=343 status=ok
// SIG undefined FUN_14128a7e0(void)

undefined8 * FUN_14128a7e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_res8 [4];
  
  FUN_14128aba0();
  *param_1 = &PTR__scalar_deleting_destructor__144756d08;
  param_1[5] = &PTR_LAB_144757168;
  param_1[0x2f] = &PTR_LAB_144757198;
  local_res8[0] = 0;
  param_1[0x30] = &PTR_LAB_1447571b0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x74) = 1;
  param_1[0x75] = 10;
  param_1[0x76] = 0;
  param_1[0x77] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x78) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3cc) = *(byte *)((longlong)param_1 + 0x3cc) & 0xf9 | 9;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Crosshair",1);
  param_1[0x6d] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"p_ZoomTransition",1);
  DAT_146878048 = *puVar1;
  *(byte *)((longlong)param_1 + 0x2ec) = *(byte *)((longlong)param_1 + 0x2ec) | 4;
  *(undefined1 *)(param_1 + 0x6e) = 3;
  *(uint *)(param_1 + 0x75) = *(uint *)(param_1 + 0x75) & 0xfffffff7 | 0x21;
  *(byte *)((longlong)param_1 + 0x3cc) = *(byte *)((longlong)param_1 + 0x3cc) & 0xf7 | 2;
  return param_1;
}



// FUNCTION 14128a940 FUN_14128a940 body=195 status=ok
// SIG undefined FUN_14128a940(void)

undefined8 * FUN_14128a940(undefined8 *param_1)

{
  FUN_14128aba0();
  *param_1 = &PTR_FUN_144758e18;
  param_1[5] = &PTR_LAB_144759278;
  param_1[0x2f] = &PTR_LAB_1447592a8;
  param_1[0x30] = &PTR_LAB_1447592c0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x74) = 3;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 1;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(byte *)((longlong)param_1 + 0x2ec) = *(byte *)((longlong)param_1 + 0x2ec) | 4;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3eb33333;
  return param_1;
}



// FUNCTION 14128aa10 FUN_14128aa10 body=398 status=ok
// SIG undefined FUN_14128aa10(void)

undefined8 * FUN_14128aa10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_144759708;
  param_1[5] = &PTR_LAB_144759b20;
  param_1[0x2f] = &PTR_LAB_144759b50;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x34);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined4 *)(param_1 + 0x31) = 0x42340000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined4 *)(param_1 + 0x36) = 0x42000000;
  *(undefined2 *)(param_1 + 0x48) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x242) = 3;
  param_1[0x62] = DAT_146878040;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
  return param_1;
}



// FUNCTION 14128aba0 FUN_14128aba0 body=196 status=ok
// SIG undefined FUN_14128aba0(void)

undefined8 * FUN_14128aba0(undefined8 *param_1)

{
  FUN_143098e60();
  *param_1 = &PTR_FUN_144756840;
  param_1[5] = &PTR_LAB_144756ca0;
  param_1[0x2f] = &PTR_LAB_144756cd0;
  param_1[0x30] = &PTR_LAB_144756ce8;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0xffffffff;
  FUN_14246da30(param_1 + 100);
  *(undefined1 *)(param_1 + 0x67) = 0xff;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(byte *)((longlong)param_1 + 0x2ec) = *(byte *)((longlong)param_1 + 0x2ec) | 7;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x61) = 3;
  *(undefined4 *)((longlong)param_1 + 0x314) = 1;
  param_1[0x5f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0xbf800000;
  return param_1;
}



// FUNCTION 14128ac70 FUN_14128ac70 body=379 status=ok
// SIG undefined FUN_14128ac70(void)

undefined8 * FUN_14128ac70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_144759b88;
  param_1[5] = &PTR_LAB_144759f80;
  param_1[0x2f] = &PTR_LAB_144759fb0;
  param_1[0x30] = &PTR_LAB_144759fc8;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x32);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x19c);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1bc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x39);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  FUN_14246fd50(param_1 + 0x32,0);
  FUN_14246fd50((longlong)param_1 + 0x19c,0);
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f1e377a;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  FUN_14246fd50((longlong)param_1 + 0x1bc,0x3f800000);
  FUN_14246fd50(param_1 + 0x39,0x3f800000);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x41200000;
  param_1[0x3b] = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  return param_1;
}



// FUNCTION 14128adf0 FUN_14128adf0 body=33 status=ok
// SIG undefined FUN_14128adf0(void)

undefined8 * FUN_14128adf0(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_144759fe8;
  return param_1;
}



// FUNCTION 14128ae20 FUN_14128ae20 body=566 status=ok
// SIG undefined FUN_14128ae20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14128ae20(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__144754bc0;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  if ((undefined2 *)param_1[0x15] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144754e40;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar1 = uRam0000000146877b8c;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(uint *)((longlong)param_1 + 0x11c) = uVar1;
  uVar1 = uRam0000000146877b84 & uRam0000000146877b94;
  uVar2 = uRam0000000146877b88 & uRam0000000146877b98;
  uVar3 = uRam0000000146877b8c & uRam0000000146877b9c;
  *(uint *)(param_1 + 0x26) = _DAT_146877b80 & _DAT_146877b90;
  *(uint *)((longlong)param_1 + 0x134) = uVar1;
  *(uint *)(param_1 + 0x27) = uVar2;
  *(uint *)((longlong)param_1 + 0x13c) = uVar3;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)((longlong)param_1 + 0x1c4) < 0) && (*(int *)((longlong)param_1 + 0x1c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
  }
  if ((undefined2 *)param_1[0x37] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x37] = 0;
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x41,0);
  param_1[0x42] = 0;
  return param_1;
}



// FUNCTION 14128b060 ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(void)

void TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>::
     ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[3];
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
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 14128b100 FUN_14128b100 body=109 status=ok
// SIG undefined FUN_14128b100(void)

void FUN_14128b100(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14128b170 FUN_14128b170 body=125 status=ok
// SIG undefined FUN_14128b170(void)

void FUN_14128b170(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x68;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 0x68);
      FUN_140bff340(lVar1);
      FUN_140c64420(lVar1 + -0x10);
      if (*(longlong *)(lVar1 + -0x60) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0xf0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14128b1f0 ~TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_>(void)

void TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_>::
     ~TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14128b250 FUN_14128b250 body=424 status=ok
// SIG undefined FUN_14128b250(void)

void FUN_14128b250(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (iVar3 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x18);
    do {
      iVar4 = *(int *)(puVar5 + 1);
      plVar2 = (longlong *)*puVar5;
      if (iVar4 != 0) {
        do {
          if (plVar2[2] != 0) {
            FMemory::Free();
          }
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar2 = (longlong *)*puVar5;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      if (puVar5[-2] != 0) {
        FMemory::Free();
      }
      puVar5 = puVar5 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x60);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14128b400 FUN_14128b400 body=233 status=ok
// SIG undefined FUN_14128b400(void)

void FUN_14128b400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x80);
  plVar4 = *(longlong **)(param_1 + 0x68);
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14128b4f0 FUN_14128b4f0 body=283 status=ok
// SIG undefined FUN_14128b4f0(void)

void FUN_14128b4f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(plVar4 + 2);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14128b610 FUN_14128b610 body=366 status=ok
// SIG undefined FUN_14128b610(void)

void FUN_14128b610(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x90c);
  thunk_FUN_142478640(param_1 + 0x900);
  iVar3 = *(int *)(param_1 + 0x8e0);
  lVar4 = *(longlong *)(param_1 + 0x8d8);
  if (iVar3 != 0) {
    lVar4 = lVar4 + 8;
    do {
      FRichCurve::~FRichCurve(lVar4);
      lVar4 = lVar4 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x8d8);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  plVar2 = *(longlong **)(param_1 + 0x510);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  FRichCurve::~FRichCurve(param_1 + 0x430);
  thunk_FUN_142478640(param_1 + 0x3b8);
  thunk_FUN_142478640(param_1 + 0x368);
  thunk_FUN_142478640(param_1 + 0x318);
  thunk_FUN_142478640(param_1 + 0x308);
  thunk_FUN_142478640(param_1 + 0x2fc);
  thunk_FUN_142478640(param_1 + 0x2f0);
  thunk_FUN_142478640(param_1 + 0x2e0);
  thunk_FUN_142478640(param_1 + 0x2cc);
  thunk_FUN_142478640(param_1 + 0x26c);
  thunk_FUN_142478640(param_1 + 0x260);
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x230);
  thunk_FUN_142478640(param_1 + 0x224);
  thunk_FUN_142478640(param_1 + 0x218);
  FUN_14099b5e0(param_1);
  return;
}



// FUNCTION 14128b780 FUN_14128b780 body=156 status=ok
// SIG undefined FUN_14128b780(void)

void FUN_14128b780(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1c8);
  thunk_FUN_142478640(param_1 + 0x1bc);
  thunk_FUN_142478640(param_1 + 0x1ac);
  thunk_FUN_142478640(param_1 + 0x1a0);
  thunk_FUN_142478640(param_1 + 0x194);
  thunk_FUN_142478640(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14128b820 FUN_14128b820 body=113 status=ok
// SIG undefined FUN_14128b820(void)

void FUN_14128b820(longlong param_1)

{
  thunk_FUN_142478640(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14128b8a0 FUN_14128b8a0 body=193 status=ok
// SIG undefined FUN_14128b8a0(void)

void FUN_14128b8a0(longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2b0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14128b970 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>::
operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FString,FVector>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14128baad;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_14128baad:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_141287f30(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 14128bb50 FUN_14128bb50 body=87 status=ok
// SIG undefined FUN_14128bb50(void)

longlong FUN_14128bb50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::operator=();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_1;
}



// FUNCTION 14128bbb0 FUN_14128bbb0 body=1392 status=ok
// SIG undefined FUN_14128bbb0(void)

undefined8 * FUN_14128bbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  *param_1 = *param_2;
  FString::operator=(param_1 + 1,param_2 + 1);
  uVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 9);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xe5) = *(undefined1 *)((longlong)param_2 + 0xe5);
  FText::operator=(param_1 + 0xd,param_2 + 0xd);
  TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
  ::operator=();
  plVar2 = param_1 + 0xb;
  *(undefined1 *)((longlong)param_1 + 0xe4) = *(undefined1 *)((longlong)param_2 + 0xe4);
  param_1[0x1d] = param_2[0x1d];
  puVar8 = (undefined8 *)*plVar2;
  for (iVar13 = *(int *)(param_1 + 0xc); iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar8 = &PTR_FUN_144278ac0;
    if (puVar8[8] != 0) {
      FMemory::Free();
    }
    *puVar8 = &PTR_FUN_1441d26b8;
    puVar8 = puVar8 + 10;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar2);
  }
  plVar18 = (longlong *)param_2[0xb];
  plVar15 = plVar18 + (longlong)*(int *)(param_2 + 0xc) * 10;
  for (; plVar18 != plVar15; plVar18 = plVar18 + 10) {
    iVar13 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 100) < iVar13 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2);
    }
    lVar19 = *plVar2;
    lVar14 = (longlong)iVar13 * 0x50;
    _guard_xfg_dispatch_icall_nop((void *)(lVar19 + lVar14),0,0x50);
    FUN_140aecb80((void *)(lVar19 + lVar14));
    if ((iVar13 < 0) || (*(int *)(param_1 + 0xc) <= iVar13)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar19 = *plVar2;
      puVar8 = (undefined8 *)(**(code **)(*plVar18 + 0x18))(plVar18,local_a0);
      uVar9 = FUN_142f5f490(plVar18);
      FUN_142f604c0(lVar14 + lVar19,*puVar8,uVar9);
      cVar7 = FUN_142f63b20(*plVar2 + lVar14);
      if (cVar7 == '\0') {
        FUN_140cc9910(plVar2,iVar13,1,1);
      }
    }
  }
  puVar16 = (undefined4 *)param_2[0x1a];
  puVar17 = puVar16 + (longlong)*(int *)(param_2 + 0x1b) * 10;
  if (puVar16 != puVar17) {
    puVar16 = puVar16 + 1;
    local_d0 = puVar17;
    do {
      lVar19 = 0;
      local_100 = puVar16[-1];
      local_fc = *puVar16;
      local_f8 = puVar16[1];
      local_98 = *(undefined8 *)(puVar16 + 3);
      local_e8 = 0;
      local_e0 = 0;
      local_f0 = 0;
      FString::FString(local_90,puVar16 + 5);
      FSoftObjectPath::operator=(&local_f0,&local_98);
      local_b0 = 0;
      local_a8 = 0;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = 0;
      cVar7 = FSoftObjectPath::operator==(&local_b8,&local_f0);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      if (cVar7 == '\0') {
        lVar10 = FWeakObjectPtr::Get(&local_100);
        lVar14 = lVar19;
        if (lVar10 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_f8) && (local_f0 != 0)) {
            lVar10 = FUN_141796df0(&local_f0);
            FWeakObjectPtr::operator=(&local_100,lVar10);
            if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_f8 = DAT_1464b56f4;
            }
            lVar10 = FWeakObjectPtr::Get(&local_100);
            if (lVar10 != 0) goto LAB_14128beed;
          }
        }
        else {
LAB_14128beed:
          lVar11 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar12 = FUN_142f71d80();
            lVar11 = lVar10;
            do {
              lVar14 = lVar10;
              if (lVar11 == lVar12) break;
              lVar11 = *(longlong *)(lVar11 + 0x30);
              lVar14 = lVar19;
            } while (lVar11 != 0);
          }
        }
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        local_128 = 0xffffffff;
        local_124 = 0;
        if (lVar14 == 0) {
          local_118 = 0;
        }
        else {
          uVar9 = FSoftObjectPath::FSoftObjectPath(local_68,lVar14);
          FSoftObjectPath::operator=(&local_118,uVar9);
          FWeakObjectPtr::operator=(&local_128,lVar14);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_124 = CONCAT44(DAT_1464b56f4,(undefined4)local_124);
        }
        plVar2 = param_1 + 0x1a;
        lVar19 = *plVar2;
        iVar13 = *(int *)(param_1 + 0x1b);
        for (lVar14 = lVar19; lVar14 != lVar19 + (longlong)iVar13 * 0x28; lVar14 = lVar14 + 0x28) {
          cVar7 = FSoftObjectPath::operator==(lVar14 + 0x10,&local_118);
          if (cVar7 != '\0') {
            if ((int)((lVar14 - lVar19) / 0x28) != -1) goto LAB_14128c0cc;
            break;
          }
        }
        iVar13 = *(int *)(param_1 + 0x1b);
        *(int *)(param_1 + 0x1b) = iVar13 + 1;
        if (*(int *)((longlong)param_1 + 0xdc) < iVar13 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar13);
        }
        puVar17 = (undefined4 *)(*plVar2 + (longlong)iVar13 * 0x28);
        *(undefined8 *)(puVar17 + 6) = 0;
        puVar17[9] = 0;
        *puVar17 = 0xffffffff;
        puVar17[1] = 0;
        *(undefined8 *)(puVar17 + 4) = 0;
        local_d8 = 0;
        puVar17[8] = 0;
        if (0x7fffffff < (uint)puVar17[9]) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar17 + 6,0);
        }
        if (*(undefined2 **)(puVar17 + 6) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar17 + 6) = 0;
        }
        puVar17[2] = 0;
        *puVar17 = local_128;
        puVar17[1] = (undefined4)local_124;
        puVar17[2] = local_124._4_4_;
        local_80 = local_118;
        FString::FString(local_78,&local_110);
        FSoftObjectPath::operator=(puVar17 + 4,&local_80);
LAB_14128c0cc:
        puVar17 = local_d0;
        if (local_110 != 0) {
          FMemory::Free();
          puVar17 = local_d0;
        }
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      puVar1 = puVar16 + 9;
      puVar16 = puVar16 + 10;
    } while (puVar1 != puVar17);
  }
  return param_1;
}



// FUNCTION 14128c120 FUN_14128c120 body=93 status=ok
// SIG undefined FUN_14128c120(void)

undefined8 * FUN_14128c120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FString::operator=(param_1 + 1,param_2 + 1);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_1[0xb] = param_2[0xb];
  return param_1;
}


