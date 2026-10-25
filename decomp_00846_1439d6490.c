// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1439d6490 FUN_1439d6490 body=626 status=ok
// SIG undefined FUN_1439d6490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439d6490(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  longlong local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_60 = *(undefined8 *)(param_2 + 0x10);
  puVar9 = local_58 + 4;
  uVar6 = *(ushort *)(param_4 + 0x4c);
  local_68 = *(ushort *)(param_4 + 0x4a);
  iVar7 = 0;
  local_66 = *(ushort *)(param_4 + 0x48);
  local_64 = *(ushort *)(param_4 + 0x58);
  lVar5 = 0;
  do {
    local_90 = (uint)local_66;
    if (*(int *)(param_1 + 0x35c) <= iVar7 + param_3) break;
    puVar9[-4] = *(undefined1 *)(lVar5 + 0x5a + param_4);
    *puVar9 = *(undefined1 *)(lVar5 + 0x6a + param_4);
    puVar9[-3] = *(undefined1 *)(lVar5 + 0x5c + param_4);
    puVar9[1] = *(undefined1 *)(lVar5 + 0x6c + param_4);
    puVar9[-2] = *(undefined1 *)(lVar5 + 0x5e + param_4);
    puVar9[2] = *(undefined1 *)(lVar5 + 0x6e + param_4);
    puVar9[-1] = *(undefined1 *)(lVar5 + 0x60 + param_4);
    puVar9[3] = *(undefined1 *)(lVar5 + 0x70 + param_4);
    local_78 = local_58 + iVar7 * 2;
    local_80 = (undefined1 *)(param_1 + 0x460);
    local_88 = CONCAT44(local_88._4_4_,(uint)local_64);
    local_98 = (uint)local_68;
    FUN_1439d5200(*(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                  *(undefined4 *)(param_2 + 0x18),uVar6);
    iVar7 = iVar7 + 4;
    lVar5 = lVar5 + 0x20;
    puVar9 = puVar9 + 8;
    local_68 = local_68 >> 8;
    local_66 = local_66 >> 8;
    local_64 = local_64 >> 8;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 4);
    uVar6 = uVar6 >> 8;
  } while (iVar7 < 8);
  *(undefined8 *)(param_2 + 0x10) = local_60;
  iVar7 = -param_3;
  uVar6 = *(ushort *)(param_4 + 0x54);
  uVar8 = *(ushort *)(param_4 + 0x52);
  uVar4 = *(ushort *)(param_4 + 0x50);
  uVar1 = *(ushort *)(param_4 + 0x58);
  do {
    if (*(int *)(param_1 + 0x35c) <= param_3) {
      return;
    }
    if (param_3 == *(int *)(param_1 + 0x35c) + -1) {
      local_90 = 0;
    }
    else {
      local_90 = uVar1 & 0xf;
    }
    if (param_3 == 0) {
      uVar2 = 0;
      uVar3 = 0;
      local_98 = 0;
    }
    else {
      uVar2 = uVar6 & 0xf;
      uVar3 = uVar8 & 0xf;
      local_98 = uVar4 & 0xf;
    }
    local_80 = local_58 + (param_3 + iVar7) * 2;
    local_88 = param_1 + 0x460;
    FUN_1439d4dc0(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),uVar2,uVar3);
    param_3 = param_3 + 2;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 3);
    uVar6 = uVar6 >> 4;
    uVar8 = uVar8 >> 4;
    uVar4 = uVar4 >> 4;
    uVar1 = uVar1 >> 4;
  } while (param_3 + iVar7 < 8);
  return;
}



// FUNCTION 1439d6710 FUN_1439d6710 body=124 status=ok
// SIG undefined FUN_1439d6710(void)

void FUN_1439d6710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[1] = param_3;
  lVar3 = 3;
  puVar2 = param_1 + 2;
  do {
    uVar1 = param_4[1];
    *puVar2 = *param_4;
    puVar2[1] = uVar1;
    uVar1 = param_4[3];
    puVar2[2] = param_4[2];
    puVar2[3] = uVar1;
    uVar1 = param_4[5];
    puVar2[4] = param_4[4];
    puVar2[5] = uVar1;
    uVar1 = param_4[7];
    puVar2[6] = param_4[6];
    puVar2[7] = uVar1;
    uVar1 = param_4[9];
    puVar2[8] = param_4[8];
    puVar2[9] = uVar1;
    uVar1 = param_4[0xb];
    puVar2[10] = param_4[10];
    puVar2[0xb] = uVar1;
    uVar1 = param_4[0xd];
    puVar2[0xc] = param_4[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = param_4[0xf];
    puVar2[0xe] = param_4[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    param_4 = param_4 + 0x10;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1439d6790 FUN_1439d6790 body=432 status=ok
// SIG undefined FUN_1439d6790(void)

void FUN_1439d6790(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  iVar6 = 1 << ((byte)(param_2 >> 5) & 0x1f);
  if (*(int *)(param_1 + 0x10c4) != *(int *)(param_1 + 0x10c0)) {
    FUN_1439d56f0(param_1 + 0x460);
    *(undefined4 *)(param_1 + 0x10c4) = *(undefined4 *)(param_1 + 0x10c0);
  }
  puVar9 = (undefined1 *)(param_1 + 0x1060);
  pbVar5 = (byte *)(param_1 + 0x1138);
  lVar7 = 8;
  puVar11 = puVar9;
  do {
    iVar4 = param_2;
    if ((*(char *)(param_1 + 0x10e8) != '\0') && ((*pbVar5 & 2) != 0)) {
      iVar4 = (int)*(short *)(puVar11 + ((param_1 + 0x4fa) - (param_1 + 0x460)));
      if (*(char *)(param_1 + 0x10eb) != '\x01') {
        iVar4 = *(short *)(puVar11 + ((param_1 + 0x4fa) - (param_1 + 0x460))) + param_2;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x3f < iVar4) {
        iVar4 = 0x3f;
      }
    }
    if (*(char *)(param_1 + 0x10c8) == '\0') {
      uVar3 = (undefined1)iVar4;
      *puVar9 = uVar3;
      puVar9[1] = uVar3;
      puVar9[2] = uVar3;
      puVar9[3] = uVar3;
      puVar9[4] = uVar3;
      puVar9[5] = uVar3;
      puVar9[6] = uVar3;
      puVar9[7] = uVar3;
    }
    else {
      iVar2 = *(char *)(param_1 + 0x10ca) * iVar6 + iVar4;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3f < iVar2) {
        iVar2 = 0x3f;
      }
      lVar10 = 3;
      *puVar11 = (char)iVar2;
      pcVar8 = (char *)(param_1 + 0x10cb);
      puVar1 = puVar11;
      do {
        iVar2 = ((int)*(char *)(param_1 + 0x10d2) + (int)*pcVar8) * iVar6 + iVar4;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3f < iVar2) {
          iVar2 = 0x3f;
        }
        puVar1[2] = (char)iVar2;
        iVar2 = ((int)*pcVar8 + (int)*(char *)(param_1 + 0x10d3)) * iVar6 + iVar4;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3f < iVar2) {
          iVar2 = 0x3f;
        }
        puVar1[3] = (char)iVar2;
        pcVar8 = pcVar8 + 1;
        lVar10 = lVar10 + -1;
        puVar1 = puVar1 + 2;
      } while (lVar10 != 0);
    }
    puVar9 = puVar9 + 8;
    pbVar5 = pbVar5 + 4;
    puVar11 = puVar11 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 1439d6940 FUN_1439d6940 body=105 status=ok
// SIG undefined FUN_1439d6940(void)

void FUN_1439d6940(longlong param_1)

{
  int iVar1;
  void *_Dst;
  
  FUN_1439d56f0(param_1 + 0x460,*(undefined4 *)(param_1 + 0x10c0));
  *(undefined4 *)(param_1 + 0x10c4) = *(undefined4 *)(param_1 + 0x10c0);
  iVar1 = 0;
  _Dst = (void *)(param_1 + 0x480);
  do {
    _guard_xfg_dispatch_icall_nop(_Dst,iVar1 >> 4,0x10);
    iVar1 = iVar1 + 1;
    _Dst = (void *)((longlong)_Dst + 0x30);
  } while (iVar1 < 0x40);
  return;
}



// FUNCTION 1439d69b0 FUN_1439d69b0 body=57 status=ok
// SIG undefined FUN_1439d69b0(void)

undefined8 FUN_1439d69b0(undefined8 *param_1)

{
  FUN_1439d5510(*param_1,param_1[1],param_1 + 2,*(undefined4 *)(param_1 + 0x32),
                *(undefined4 *)((longlong)param_1 + 0x194),*(undefined4 *)(param_1 + 0x33));
  return 1;
}



// FUNCTION 1439d69f0 FUN_1439d69f0 body=53 status=ok
// SIG undefined FUN_1439d69f0(void)

void FUN_1439d69f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10b8) != 0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x10d8),0,
               (longlong)((*(int *)(param_1 + 0x35c) + 7 >> 3) * *(int *)(param_1 + 0x10e0)) * 0xa0)
    ;
    return;
  }
  return;
}



// FUNCTION 1439d6a30 FUN_1439d6a30 body=1013 status=ok
// SIG undefined FUN_1439d6a30(void)

undefined8 FUN_1439d6a30(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  LPCRITICAL_SECTION p_Var15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int local_res10;
  int local_res20;
  
  puVar1 = param_2 + 2;
  iVar2 = *(int *)((longlong)param_2 + 0x194);
  uVar4 = *param_2;
  lVar5 = param_2[1];
  iVar17 = *(int *)(param_2 + 0x32);
  uVar8 = 3;
  if (*(int *)(param_2 + 0x33) != 0) {
    uVar8 = 1;
  }
  iVar10 = *(int *)(lVar5 + 0x364);
  iVar16 = iVar10 + 7 >> 3;
  if (*(int *)(param_2 + 0x33) == 0) {
    if ((*(int *)((longlong)param_2 + 0x9c) == 1) && (*(int *)(param_2 + 0x13) == 1)) {
      local_res10 = 0;
    }
    else if ((*(int *)((longlong)param_2 + 0x9c) != 0) ||
            (local_res10 = 1, *(int *)(param_2 + 0x13) != 0)) {
      local_res10 = 2;
    }
  }
  else {
    local_res10 = 1;
  }
  if (iVar2 <= iVar17) {
    return 1;
  }
  do {
    iVar3 = *(int *)(lVar5 + 0x368);
    iVar12 = iVar17 >> 3;
    local_res20 = 0;
    lVar6 = *(longlong *)(lVar5 + 0x408);
    lVar19 = (longlong)(iVar12 * *(int *)(lVar5 + 0x10e0)) * 0xa0 + *(longlong *)(lVar5 + 0x10d8);
    if (0 < iVar10) {
      do {
        iVar10 = (int)param_1[3];
        uVar18 = local_res20 >> 3;
        if ((iVar12 != 0) && ((uVar18 & iVar10 - 1U) == 0)) {
          lVar13 = (longlong)(iVar12 + -1);
          iVar9 = 0;
          p_Var15 = (LPCRITICAL_SECTION)(*param_1 + lVar13 * 0x28);
          do {
            BVar7 = TryEnterCriticalSection(p_Var15);
            if (BVar7 != 0) goto LAB_1439d6bc5;
            iVar9 = iVar9 + 1;
          } while (iVar9 < 4000);
          EnterCriticalSection(p_Var15);
LAB_1439d6bc5:
          if (*(int *)(param_1[2] + lVar13 * 4) - iVar10 < (int)uVar18) {
            do {
              SleepConditionVariableCS
                        ((PCONDITION_VARIABLE)(param_1[1] + lVar13 * 8),p_Var15,0xffffffff);
            } while (*(int *)((longlong)iVar12 * 4 + -4 + param_1[2]) - iVar10 < (int)uVar18);
          }
          LeaveCriticalSection(p_Var15);
        }
        FUN_1439d8620(puVar1,uVar4,iVar17,local_res20);
        FUN_1439d57b0(lVar5,iVar17,local_res20,lVar19);
        FUN_1439d62e0(lVar5,puVar1,iVar17,lVar19);
        if (1 < uVar8) {
          uVar14 = (ulonglong)(uVar8 - 1);
          puVar11 = puVar1;
          do {
            puVar11 = puVar11 + 0x10;
            if (local_res10 == 0) {
              FUN_1439d6490(lVar5,puVar11,iVar17,lVar19);
            }
            else if (local_res10 == 1) {
              FUN_1439d62e0(lVar5,puVar11,iVar17,lVar19);
            }
            else if (local_res10 == 2) {
              FUN_1439d5d50(lVar5,puVar11,
                            lVar6 + (longlong)(iVar3 * iVar17) * 8 + (longlong)local_res20 * 8,
                            iVar17,local_res20);
            }
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if ((int)uVar18 < iVar16 + -1) {
          if ((int)(CONCAT44(local_res20 >> 0x1f,uVar18) % (longlong)(int)param_1[3]) == 0)
          goto LAB_1439d6d36;
        }
        else {
          uVar18 = iVar16 + (int)param_1[3];
LAB_1439d6d36:
          lVar13 = (longlong)iVar12;
          p_Var15 = (LPCRITICAL_SECTION)(*param_1 + lVar13 * 0x28);
          iVar10 = 0;
          do {
            BVar7 = TryEnterCriticalSection(p_Var15);
            if (BVar7 != 0) goto LAB_1439d6d70;
            iVar10 = iVar10 + 1;
          } while (iVar10 < 4000);
          EnterCriticalSection(p_Var15);
LAB_1439d6d70:
          *(uint *)(param_1[2] + lVar13 * 4) = uVar18;
          WakeConditionVariable((PCONDITION_VARIABLE)(param_1[1] + lVar13 * 8));
          LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + lVar13 * 0x28));
        }
        iVar10 = *(int *)(lVar5 + 0x364);
        local_res20 = local_res20 + 8;
        lVar19 = lVar19 + 0xa0;
      } while (local_res20 < iVar10);
    }
    iVar17 = iVar17 + (int)param_1[5] * 8;
    if (iVar2 <= iVar17) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1439d6e30 FUN_1439d6e30 body=477 status=ok
// SIG undefined FUN_1439d6e30(void)

void FUN_1439d6e30(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,uint param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar1 = FUN_143990ba0();
  uVar7 = 1 << ((byte)*(undefined4 *)(param_2 + 0x453c) & 0x1f);
  iVar3 = *(int *)(param_2 + 0x35c) + 7 >> 3;
  if ((int)param_8 < (int)uVar7) {
    uVar7 = param_8;
  }
  if (((*(int *)(param_9 + 0x18) == 0) || (iVar3 != *(int *)(param_9 + 0x1c))) ||
     (*(int *)(param_9 + 0x28) < (int)uVar7)) {
    FUN_1439d7790(param_9);
    FUN_1439d75d0(param_9,param_2,iVar3,*(undefined4 *)(param_2 + 0x168),uVar7);
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_9 + 0x10),-1,(longlong)iVar3 << 2);
  uVar6 = 0;
  lVar2 = (longlong)(int)uVar7;
  if (0 < (int)uVar7) {
    plVar4 = (longlong *)(param_7 + 0x18);
    uVar8 = uVar6;
    do {
      lVar5 = *(longlong *)(param_9 + 0x20) + uVar6;
      plVar4[-1] = (longlong)FUN_1439d6a30;
      *plVar4 = param_9;
      plVar4[1] = lVar5;
      FUN_1439d6710(lVar5,param_1,param_2,param_3);
      *(undefined4 *)(lVar5 + 0x194) = param_5;
      *(undefined4 *)(lVar5 + 0x198) = param_6;
      *(int *)(lVar5 + 400) = param_4;
      if ((int)uVar8 == uVar7 - 1) {
        (**(code **)(lVar1 + 0x20))();
      }
      else {
        (**(code **)(lVar1 + 0x18))(plVar4 + -3);
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      param_4 = param_4 + 8;
      plVar4 = plVar4 + 6;
      uVar6 = uVar6 + 0x1a0;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (0 < (int)uVar7) {
    uVar6 = (ulonglong)uVar7;
    do {
      (**(code **)(lVar1 + 0x10))(param_7);
      param_7 = param_7 + 0x30;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1439d7010 FUN_1439d7010 body=1470 status=ok
// SIG undefined FUN_1439d7010(void)

void FUN_1439d7010(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  piVar3 = (int *)(param_1 + 4);
  lVar11 = 4;
  lVar9 = param_2 - param_1;
  lVar2 = 4;
  do {
    piVar3[-1] = piVar3[-1] + *(int *)(lVar9 + -4 + (longlong)piVar3);
    *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
    piVar3[1] = piVar3[1] + *(int *)(lVar9 + 4 + (longlong)piVar3);
    piVar3[2] = piVar3[2] + *(int *)(lVar9 + 8 + (longlong)piVar3);
    piVar3[3] = piVar3[3] + *(int *)(lVar9 + 0xc + (longlong)piVar3);
    piVar3[4] = piVar3[4] + *(int *)(lVar9 + 0x10 + (longlong)piVar3);
    piVar3[5] = piVar3[5] + *(int *)(lVar9 + 0x14 + (longlong)piVar3);
    piVar3[6] = piVar3[6] + *(int *)(lVar9 + 0x18 + (longlong)piVar3);
    piVar3[7] = piVar3[7] + *(int *)(lVar9 + 0x1c + (longlong)piVar3);
    piVar3[8] = piVar3[8] + *(int *)(lVar9 + 0x20 + (longlong)piVar3);
    piVar3 = piVar3 + 10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0xa0);
  lVar2 = 10;
  do {
    *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
    piVar3[1] = piVar3[1] + *(int *)((longlong)piVar3 + lVar9 + 4);
    piVar3[2] = piVar3[2] + *(int *)((longlong)piVar3 + lVar9 + 8);
    piVar3[3] = piVar3[3] + *(int *)((longlong)piVar3 + lVar9 + 0xc);
    piVar3[4] = piVar3[4] + *(int *)((longlong)piVar3 + lVar9 + 0x10);
    piVar3[5] = piVar3[5] + *(int *)((longlong)piVar3 + lVar9 + 0x14);
    piVar3[6] = piVar3[6] + *(int *)((longlong)piVar3 + lVar9 + 0x18);
    piVar3[7] = piVar3[7] + *(int *)((longlong)piVar3 + lVar9 + 0x1c);
    piVar3[8] = piVar3[8] + *(int *)((longlong)piVar3 + lVar9 + 0x20);
    piVar3[9] = piVar3[9] + *(int *)((longlong)piVar3 + lVar9 + 0x24);
    piVar3 = piVar3 + 10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x230);
  lVar2 = 0x10;
  do {
    *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
    piVar3[1] = piVar3[1] + *(int *)(lVar9 + 4 + (longlong)piVar3);
    piVar3[2] = piVar3[2] + *(int *)(lVar9 + 8 + (longlong)piVar3);
    piVar3[3] = piVar3[3] + *(int *)(lVar9 + 0xc + (longlong)piVar3);
    piVar3 = piVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_3 == 0) {
    piVar3 = (int *)(param_1 + 0x2730);
    lVar2 = 4;
    do {
      lVar6 = 2;
      do {
        lVar7 = 2;
        do {
          lVar5 = 6;
          do {
            lVar10 = 6;
            do {
              *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
              piVar3 = piVar3 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  else {
    piVar3 = (int *)(param_1 + 0x2730);
    piVar1 = (int *)(param_1 + 0x330);
    lVar2 = 4;
    do {
      lVar6 = 2;
      do {
        lVar7 = 2;
        do {
          lVar5 = 6;
          do {
            lVar10 = 6;
            do {
              lVar8 = 4;
              *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
              do {
                *piVar1 = *piVar1 + *(int *)(lVar9 + (longlong)piVar1);
                piVar1 = piVar1 + 1;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
              piVar3 = piVar3 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  piVar3 = (int *)(param_1 + 0x3030);
  lVar2 = 4;
  do {
    *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
    piVar3[1] = piVar3[1] + *(int *)((longlong)piVar3 + lVar9 + 4);
    piVar3[2] = piVar3[2] + *(int *)((longlong)piVar3 + lVar9 + 8);
    piVar3 = piVar3 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x3060);
  lVar2 = 7;
  do {
    *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
    piVar3[1] = piVar3[1] + *(int *)(lVar9 + 4 + (longlong)piVar3);
    piVar3[2] = piVar3[2] + *(int *)(lVar9 + 8 + (longlong)piVar3);
    piVar3[3] = piVar3[3] + *(int *)(lVar9 + 0xc + (longlong)piVar3);
    piVar3 = piVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x30d0);
  do {
    *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
    piVar3[1] = piVar3[1] + *(int *)((longlong)piVar3 + lVar9 + 4);
    piVar3 = piVar3 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 5;
  piVar3 = (int *)(param_1 + 0x30f0);
  lVar2 = 5;
  do {
    *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
    piVar3[1] = piVar3[1] + *(int *)((longlong)piVar3 + lVar9 + 4);
    piVar3 = piVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x311c);
  lVar2 = 5;
  do {
    lVar6 = 2;
    do {
      piVar3[-1] = piVar3[-1] + *(int *)(lVar9 + -4 + (longlong)piVar3);
      *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
      piVar3 = piVar3 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x3168);
  do {
    *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
    piVar3[1] = piVar3[1] + *(int *)(lVar9 + 4 + (longlong)piVar3);
    piVar3 = piVar3 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar2 = 2;
  piVar3 = (int *)(param_1 + 0x3190);
  piVar1 = (int *)(param_1 + 0x31b0);
  piVar4 = (int *)(param_1 + 0x31c8);
  do {
    *piVar3 = *piVar3 + *(int *)((longlong)piVar3 + lVar9);
    piVar3[1] = piVar3[1] + *(int *)((longlong)piVar3 + lVar9 + 4);
    piVar3[2] = piVar3[2] + *(int *)((longlong)piVar3 + lVar9 + 8);
    piVar3[3] = piVar3[3] + *(int *)((longlong)piVar3 + lVar9 + 0xc);
    piVar3 = piVar3 + 4;
    *piVar1 = *piVar1 + *(int *)((longlong)piVar1 + lVar9);
    piVar1[1] = piVar1[1] + *(int *)((longlong)piVar1 + lVar9 + 4);
    piVar1[2] = piVar1[2] + *(int *)((longlong)piVar1 + lVar9 + 8);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar9);
    piVar4[1] = piVar4[1] + *(int *)((longlong)piVar4 + lVar9 + 4);
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 3;
    piVar4 = piVar4 + 2;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x31e8);
  *(int *)(param_1 + 0x31d8) = *(int *)(param_1 + 0x31d8) + *(int *)(param_2 + 0x31d8);
  lVar2 = 3;
  *(int *)(param_1 + 0x31dc) = *(int *)(param_1 + 0x31dc) + *(int *)(param_2 + 0x31dc);
  *(int *)(param_1 + 0x31e0) = *(int *)(param_1 + 0x31e0) + *(int *)(param_2 + 0x31e0);
  *(int *)(param_1 + 0x31e4) = *(int *)(param_1 + 0x31e4) + *(int *)(param_2 + 0x31e4);
  do {
    *piVar3 = *piVar3 + *(int *)(lVar9 + (longlong)piVar3);
    piVar3[1] = piVar3[1] + *(int *)(lVar9 + 4 + (longlong)piVar3);
    piVar3 = piVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar3 = (int *)(param_1 + 0x329c);
  *(int *)(param_1 + 0x3200) = *(int *)(param_1 + 0x3200) + *(int *)(param_2 + 0x3200);
  lVar2 = 2;
  *(int *)(param_1 + 0x3204) = *(int *)(param_1 + 0x3204) + *(int *)(param_2 + 0x3204);
  *(int *)(param_1 + 0x3208) = *(int *)(param_1 + 0x3208) + *(int *)(param_2 + 0x3208);
  *(int *)(param_1 + 0x320c) = *(int *)(param_1 + 0x320c) + *(int *)(param_2 + 0x320c);
  do {
    piVar1 = piVar3 + 0xc;
    lVar11 = 2;
    do {
      piVar1[-0x2f] = piVar1[-0x2f] + *(int *)((longlong)piVar1 + lVar9 + -0xbc);
      *piVar1 = *piVar1 + *(int *)((longlong)piVar1 + lVar9);
      piVar1[2] = piVar1[2] + *(int *)((longlong)piVar1 + lVar9 + 8);
      piVar1 = piVar1 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    piVar1 = piVar3 + -0x21;
    lVar11 = 0xb;
    do {
      *piVar1 = *piVar1 + *(int *)((longlong)piVar1 + lVar9);
      piVar1 = piVar1 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    piVar1 = piVar3 + -0x16;
    lVar11 = 2;
    piVar4 = piVar3;
    do {
      *piVar1 = *piVar1 + *(int *)((longlong)piVar1 + lVar9);
      piVar1 = piVar1 + 1;
      *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar9);
      piVar4[1] = piVar4[1] + *(int *)((longlong)piVar4 + lVar9 + 4);
      piVar4[2] = piVar4[2] + *(int *)((longlong)piVar4 + lVar9 + 8);
      piVar4[3] = piVar4[3] + *(int *)((longlong)piVar4 + lVar9 + 0xc);
      lVar11 = lVar11 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar11 != 0);
    piVar1 = piVar3 + -0x14;
    lVar11 = 10;
    do {
      *piVar1 = *piVar1 + *(int *)((longlong)piVar1 + lVar9);
      piVar1[1] = piVar1[1] + *(int *)((longlong)piVar1 + lVar9 + 4);
      piVar1 = piVar1 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    piVar3[8] = piVar3[8] + *(int *)((longlong)piVar3 + lVar9 + 0x20);
    piVar3[9] = piVar3[9] + *(int *)((longlong)piVar3 + lVar9 + 0x24);
    piVar3[10] = piVar3[10] + *(int *)(lVar9 + 0x28 + (longlong)piVar3);
    piVar3[0xb] = piVar3[0xb] + *(int *)((longlong)piVar3 + lVar9 + 0x2c);
    piVar3 = piVar3 + 0x33;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1439d75d0 FUN_1439d75d0 body=438 status=ok
// SIG undefined FUN_1439d75d0(void)

void FUN_1439d75d0(longlong *param_1,undefined8 param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3;
  uVar5 = (ulonglong)param_3;
  *(uint *)((longlong)param_1 + 0x1c) = param_3;
  lVar2 = FUN_14398da00(lVar6 * 0x28);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    FUN_143989b90(param_2,2,"Failed to allocate lf_sync->mutex_");
  }
  lVar2 = 0;
  if ((*param_1 != 0) && (uVar4 = uVar5, lVar3 = lVar2, 0 < (int)param_3)) {
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*param_1 + lVar3),0,0);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_14398da00(lVar6 * 8);
  param_1[1] = lVar3;
  if (lVar3 == 0) {
    FUN_143989b90(param_2,2,"Failed to allocate lf_sync->cond_");
  }
  if ((param_1[1] != 0) && (0 < (int)param_3)) {
    do {
      InitializeConditionVariable((PCONDITION_VARIABLE)(param_1[1] + lVar2));
      lVar2 = lVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar2 = FUN_14398da00((longlong)param_5 * 0x1a0);
  param_1[4] = lVar2;
  if (lVar2 == 0) {
    FUN_143989b90(param_2,2,"Failed to allocate lf_sync->lfdata");
  }
  *(int *)(param_1 + 5) = param_5;
  lVar2 = FUN_14398da00(lVar6 * 4);
  param_1[2] = lVar2;
  if (lVar2 == 0) {
    FUN_143989b90(param_2,2,"Failed to allocate lf_sync->cur_sb_col");
  }
  if (0x27f < param_4) {
    if (0x500 < param_4) {
      uVar1 = 8;
      if (param_4 < 0x1001) {
        uVar1 = 4;
      }
      *(undefined4 *)(param_1 + 3) = uVar1;
      return;
    }
    *(undefined4 *)(param_1 + 3) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 1439d7790 FUN_1439d7790 body=151 status=ok
// SIG undefined FUN_1439d7790(void)

void FUN_1439d7790(longlong *param_1)

{
  int iVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      iVar1 = 0;
      if (0 < *(int *)((longlong)param_1 + 0x1c)) {
        do {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*param_1 + (longlong)iVar1 * 0x28));
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((longlong)param_1 + 0x1c));
      }
      FUN_14398d9e0(*param_1);
    }
    if (param_1[1] != 0) {
      FUN_14398d9e0();
    }
    FUN_14398d9e0(param_1[4]);
    FUN_14398d9e0(param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1439d7830 FUN_1439d7830 body=207 status=ok
// SIG undefined FUN_1439d7830(void)

void FUN_1439d7830(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,int param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 != 0) {
    iVar1 = *(int *)(param_2 + 0x35c);
    uVar2 = 0;
    if ((param_6 != 0) && (8 < iVar1)) {
      uVar2 = iVar1 >> 1 & 0xfffffff8;
      if (iVar1 < 0x48) {
        iVar1 = 8;
      }
      else {
        iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
      }
    }
    FUN_1439d6790(param_2,param_4);
    FUN_1439d6e30(param_1,param_2,param_3,uVar2,iVar1 + uVar2,param_5,param_7,param_8,param_9);
  }
  return;
}



// FUNCTION 1439d7900 FUN_1439d7900 body=47 status=ok
// SIG undefined FUN_1439d7900(void)

undefined2 FUN_1439d7900(int param_1,int param_2)

{
  param_1 = param_1 + param_2;
  if (param_1 < 0) {
    return 4;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  return (&DAT_145cafb70)[param_1];
}



// FUNCTION 1439d7930 FUN_1439d7930 body=47 status=ok
// SIG undefined FUN_1439d7930(void)

undefined2 FUN_1439d7930(int param_1,int param_2)

{
  param_1 = param_1 + param_2;
  if (param_1 < 0) {
    return 4;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  return (&DAT_145caf970)[param_1];
}



// FUNCTION 1439d7960 FUN_1439d7960 body=57 status=ok
// SIG undefined FUN_1439d7960(void)

int FUN_1439d7960(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*param_1 == '\0') || ((param_1[(longlong)param_2 * 4 + 0x50] & 1U) == 0)) {
    return param_3;
  }
  iVar1 = (int)*(short *)(param_1 + (longlong)param_2 * 8 + 0x10);
  if (param_1[3] != '\x01') {
    iVar1 = *(short *)(param_1 + (longlong)param_2 * 8 + 0x10) + param_3;
  }
  if (iVar1 < 0) {
    return 0;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}



// FUNCTION 1439d79a0 FUN_1439d79a0 body=1383 status=ok
// SIG undefined FUN_1439d79a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439d79a0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
                  byte param_6,byte param_7,int param_8,int param_9,int param_10,int param_11,
                  int param_12,int param_13)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  uint _Val;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  size_t sVar13;
  undefined8 *puVar14;
  undefined1 auStack_128 [32];
  int local_108;
  byte local_104;
  int local_100;
  byte local_fc;
  int local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_104 = param_7;
  local_e0 = &local_b8;
  iVar8 = 4 << (param_7 & 0x1f);
  local_fc = param_6;
  piVar2 = *(int **)(param_1 + 0x1f8);
  local_100 = param_8;
  local_108 = param_9;
  if (param_13 == 0) {
    iVar10 = *piVar2;
    iVar5 = piVar2[1];
  }
  else {
    iVar10 = piVar2[5];
    iVar5 = piVar2[6];
  }
  param_11 = (-*(int *)(param_1 + 0x1d0) >>
             ((char)*(undefined4 *)((longlong)param_13 * 0x80 + 8 + param_1) + 3U & 0x1f)) +
             param_11;
  param_12 = (-*(int *)(param_1 + 0x1d8) >>
             ((char)*(undefined4 *)((longlong)param_13 * 0x80 + 0xc + param_1) + 3U & 0x1f)) +
             param_12;
  local_f0 = (ulonglong)param_6;
  local_f8 = iVar10;
  local_e8 = param_1;
  local_d8 = param_4;
  if (((&DAT_145cafd98)[local_f0] & 2) != 0) {
    sVar13 = (size_t)iVar8;
    if (param_9 == 0) {
      _guard_xfg_dispatch_icall_nop(local_78,0x81,sVar13);
    }
    else if (*(int *)(param_1 + 0x1dc) < 0) {
      if (iVar5 < param_12 + iVar8) {
        iVar5 = iVar5 - param_12;
        lVar11 = 0;
        iVar9 = 0;
        if (0 < iVar5) {
          iVar6 = -1;
          do {
            lVar4 = (longlong)iVar6;
            iVar6 = iVar6 + param_3;
            local_78[lVar11] = *(undefined1 *)(lVar4 + param_2);
            lVar11 = lVar11 + 1;
            iVar9 = iVar5;
          } while (lVar11 < iVar5);
        }
        if (iVar9 < iVar8) {
          uVar1 = *(undefined1 *)(((iVar5 + -1) * param_3 + -1) + param_2);
          puVar12 = local_78 + iVar9;
          for (lVar11 = (longlong)(iVar8 - iVar9); lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          }
        }
      }
      else {
        lVar11 = 0;
        if (0 < iVar8) {
          iVar5 = -1;
          do {
            lVar4 = (longlong)iVar5;
            iVar5 = iVar5 + param_3;
            local_78[lVar11] = *(undefined1 *)(lVar4 + param_2);
            lVar11 = lVar11 + 1;
          } while (lVar11 < (longlong)sVar13);
        }
      }
    }
    else {
      lVar11 = 0;
      if (0 < iVar8) {
        iVar5 = -1;
        do {
          lVar4 = (longlong)iVar5;
          iVar5 = iVar5 + param_3;
          local_78[lVar11] = *(undefined1 *)(lVar4 + param_2);
          lVar11 = lVar11 + 1;
        } while (lVar11 < (longlong)sVar13);
      }
    }
  }
  iVar5 = local_108;
  if (((&DAT_145cafd98)[local_f0] & 4) != 0) {
    if (local_100 == 0) {
      _guard_xfg_dispatch_icall_nop(&local_b8,0x7f,(longlong)iVar8);
      local_b9 = 0x7f;
    }
    else {
      puVar14 = (undefined8 *)(param_2 - param_3);
      if (*(int *)(local_e8 + 0x1d4) < 0) {
        if (iVar10 < param_11 + iVar8) {
          puVar3 = local_e0;
          if (param_11 <= iVar10) {
            iVar10 = iVar10 - param_11;
            _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,(longlong)iVar10);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)&local_b8 + (longlong)iVar10),
                       (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar10 + -1)),
                       (longlong)((param_11 - local_f8) + iVar8));
            iVar5 = local_108;
            puVar3 = local_e0;
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,(longlong)iVar8);
          iVar5 = local_108;
          puVar3 = local_e0;
        }
      }
      else if (((iVar8 != 4) || (param_10 == 0)) || (puVar3 = puVar14, local_108 == 0)) {
        _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,(longlong)iVar8);
        puVar3 = local_e0;
      }
      local_e0 = puVar3;
      param_9 = local_108;
      if (iVar5 == 0) {
        local_b9 = 0x81;
      }
      else {
        local_b9 = *(undefined1 *)((longlong)puVar14 + -1);
      }
    }
  }
  uVar7 = local_f0;
  iVar10 = local_f8;
  if (((&DAT_145cafd98)[local_f0] & 8) == 0) goto LAB_1439d7e93;
  if (local_100 == 0) {
    _guard_xfg_dispatch_icall_nop(&local_b8,0x7f,(longlong)(iVar8 * 2));
    local_b9 = 0x7f;
    goto LAB_1439d7e93;
  }
  puVar14 = (undefined8 *)(param_2 - param_3);
  if (*(int *)(local_e8 + 0x1d4) < 0) {
    param_9 = local_108;
    puVar3 = local_e0;
    if (local_f8 < iVar8 * 2 + param_11) {
      if (local_f8 < param_11 + iVar8) {
        if (local_f8 < param_11) goto LAB_1439d7d92;
        iVar5 = local_f8 - param_11;
        _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,(longlong)iVar5);
        sVar13 = (size_t)((iVar8 * 2 - iVar10) + param_11);
        _Val = (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar5 + -1));
        _Dst = (void *)((longlong)&local_b8 + (longlong)iVar5);
      }
      else {
        iVar5 = local_f8 - param_11;
        if ((param_10 == 0) || (iVar8 != 4)) {
          sVar13 = (size_t)iVar8;
          _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,sVar13);
          _Val = (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar8 + -1));
          _Dst = (void *)((longlong)&local_b8 + sVar13);
        }
        else {
          _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,(longlong)iVar5);
          sVar13 = (size_t)((param_11 - iVar10) + 8);
          _Val = (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar5 + -1));
          _Dst = (void *)((longlong)&local_b8 + (longlong)iVar5);
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Val,sVar13);
      uVar7 = local_f0;
      param_9 = local_108;
      puVar3 = local_e0;
    }
    else if ((param_10 == 0) || (iVar8 != 4)) {
      sVar13 = (size_t)iVar8;
      _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,sVar13);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)&local_b8 + sVar13),
                 (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar8 + -1)),sVar13);
      param_9 = local_108;
      puVar3 = local_e0;
    }
    else {
      local_b8 = *puVar14;
    }
  }
  else if (((iVar8 != 4) || (param_10 == 0)) || (puVar3 = puVar14, param_9 == 0)) {
    sVar13 = (size_t)iVar8;
    _guard_xfg_dispatch_icall_nop(&local_b8,puVar14,sVar13);
    if ((iVar8 == 4) && (param_10 != 0)) {
      local_b8 = CONCAT44(*(undefined4 *)((longlong)puVar14 + 4),(undefined4)local_b8);
      puVar3 = local_e0;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)&local_b8 + sVar13),
                 (uint)*(byte *)((longlong)&local_b8 + (longlong)(iVar8 + -1)),sVar13);
      puVar3 = local_e0;
    }
  }
LAB_1439d7d92:
  local_e0 = puVar3;
  if (param_9 == 0) {
    local_b9 = 0x81;
  }
  else {
    local_b9 = *(undefined1 *)((longlong)puVar14 + -1);
  }
LAB_1439d7e93:
  if (local_fc == 0) {
    (**(code **)(&DAT_146ba0600 +
                ((ulonglong)local_104 + ((longlong)local_100 + (longlong)param_9 * 2) * 4) * 8))
              (local_d8,(longlong)param_5);
  }
  else {
    (**(code **)(((ulonglong)local_104 + uVar7 * 4) * 8 + 0x146ba04c0))
              (local_d8,(longlong)param_5,local_e0,local_78);
  }
  return;
}



// FUNCTION 1439d7f10 FUN_1439d7f10 body=94 status=ok
// SIG undefined FUN_1439d7f10(void)

ulonglong FUN_1439d7f10(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_146ba04b0 == 0;
  if (bVar2) {
    DAT_146ba04b0 = 1;
  }
  UNLOCK();
  if (bVar2) {
    uVar1 = FUN_1439d7f70();
    LOCK();
    DAT_146ba04b0 = DAT_146ba04b0 + 1;
    UNLOCK();
    return uVar1;
  }
  uVar1 = 2;
  LOCK();
  bVar2 = DAT_146ba04b0 == 2;
  if (bVar2) {
    DAT_146ba04b0 = 2;
  }
  else {
    uVar1 = (ulonglong)DAT_146ba04b0;
  }
  UNLOCK();
  while (!bVar2) {
    Sleep(0);
    uVar1 = 2;
    LOCK();
    bVar2 = DAT_146ba04b0 == 2;
    if (bVar2) {
      DAT_146ba04b0 = 2;
    }
    else {
      uVar1 = (ulonglong)DAT_146ba04b0;
    }
    UNLOCK();
  }
  return uVar1;
}



// FUNCTION 1439d7f70 FUN_1439d7f70 body=729 status=ok
// SIG undefined FUN_1439d7f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439d7f70(void)

{
  _DAT_146ba04e0 = &LAB_1400495c0;
  _DAT_146ba04e8 = &LAB_1400495e0;
  _DAT_146ba04f0 = &LAB_140049620;
  _DAT_146ba04f8 = &LAB_140049650;
  _DAT_146ba0500 = &LAB_1400496a0;
  _DAT_146ba0508 = &LAB_1400496e0;
  _DAT_146ba0510 = &LAB_140049730;
  _DAT_146ba0518 = &LAB_140049780;
  _DAT_146ba05a0 = &LAB_140048f70;
  _DAT_146ba05a8 = DAT_146bcd3c0;
  _DAT_146ba05b0 = DAT_146bcd400;
  _DAT_146ba05b8 = DAT_146bcd3d8;
  _DAT_146ba0520 = &LAB_140048e60;
  _DAT_146ba0528 = &LAB_140048ed0;
  _DAT_146ba0530 = DAT_146bcd388;
  _DAT_146ba0538 = DAT_146bcd370;
  _DAT_146ba05c0 = DAT_146bcd2f8;
  _DAT_146ba05c8 = DAT_146bcd2e0;
  _DAT_146ba05d0 = DAT_146bcd328;
  _DAT_146ba05d8 = DAT_146bcd308;
  _DAT_146ba0560 = FUN_14399d4d0;
  _DAT_146ba0568 = FUN_14399d5e0;
  _DAT_146ba0570 = FUN_14399d170;
  _DAT_146ba0578 = FUN_14399d320;
  _DAT_146ba0540 = FUN_14399db30;
  _DAT_146ba0548 = FUN_14399dc40;
  _DAT_146ba0550 = FUN_14399d8b0;
  _DAT_146ba0558 = FUN_14399d9f0;
  _DAT_146ba0580 = DAT_146bcd410;
  _DAT_146ba0588 = DAT_146bcd408;
  _DAT_146ba0590 = DAT_146bcd440;
  _DAT_146ba0598 = DAT_146bcd438;
  _DAT_146ba05e0 = &LAB_1400497f0;
  _DAT_146ba05e8 = &LAB_140049860;
  _DAT_146ba05f0 = &LAB_1400498d0;
  _DAT_146ba05f8 = &LAB_140049990;
  _DAT_146ba0600 = &LAB_1400491f0;
  _DAT_146ba0608 = &LAB_140049220;
  _DAT_146ba0610 = &LAB_140049390;
  _DAT_146ba0618 = &LAB_140049570;
  _DAT_146ba0620 = &LAB_140049080;
  _DAT_146ba0628 = &LAB_140049130;
  _DAT_146ba0630 = &LAB_1400492d0;
  _DAT_146ba0638 = &LAB_140049470;
  _DAT_146ba0640 = &LAB_140049040;
  _DAT_146ba0648 = &LAB_140049190;
  _DAT_146ba0650 = &LAB_140049330;
  _DAT_146ba0658 = &LAB_1400494f0;
  _DAT_146ba0660 = &LAB_140048ff0;
  _DAT_146ba0668 = &LAB_1400490c0;
  _DAT_146ba0670 = &LAB_140049260;
  _DAT_146ba0678 = &LAB_1400493d0;
  return;
}



// FUNCTION 1439d8250 FUN_1439d8250 body=232 status=ok
// SIG undefined FUN_1439d8250(void)

void FUN_1439d8250(longlong param_1,byte param_2,byte param_3,undefined1 param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,undefined4 param_8,int param_9,int param_10,
                  undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_10 != 0) || (uVar1 = 0, *(longlong *)(param_1 + 0x1b8) != 0)) {
    uVar1 = 1;
  }
  uVar2 = 1;
  if ((param_9 == 0) && (*(longlong *)(param_1 + 0x1b0) == 0)) {
    uVar2 = 0;
  }
  FUN_1439d79a0(param_1,param_5,param_6,param_7,param_8,param_4,param_3,uVar1,uVar2,
                param_9 + (1 << (param_3 & 0x1f)) < 1 << (param_2 & 0x1f),param_9 * 4,param_10 * 4,
                param_11);
  return;
}



// FUNCTION 1439d8340 FUN_1439d8340 body=474 status=ok
// SIG undefined FUN_1439d8340(void)

undefined4 FUN_1439d8340(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 local_res8;
  
  lVar5 = (longlong)param_4;
  local_res8 = 0;
  lVar4 = (longlong)param_3;
  bVar6 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    bVar6 = 2;
  }
  bVar6 = 0 < *(int *)(param_1 + 0xc) | bVar6;
  if (bVar6 == 0) {
    return *(undefined4 *)(param_2 + ((lVar5 + 2) * 3 + lVar4) * 4);
  }
  if (bVar6 == 1) {
    iVar2 = (int)*(short *)(param_2 + (lVar4 + ((longlong)(param_4 + 2) + 2) * 3) * 4) +
            (int)*(short *)(param_2 + (lVar4 + (lVar5 + 2) * 3) * 4);
    iVar1 = iVar2 + -1;
    if (-1 < iVar2) {
      iVar1 = iVar2 + 1;
    }
    iVar3 = (int)*(short *)(param_2 + 0x1a + (lVar4 + (longlong)(param_4 + 2) * 3) * 4) +
            (int)*(short *)(param_2 + 0x1a + (lVar4 + lVar5 * 3) * 4);
    iVar2 = iVar3 + -1;
    if (-1 < iVar3) {
      iVar2 = iVar3 + 1;
    }
    local_res8 = CONCAT22((short)(iVar2 / 2),(short)(iVar1 / 2));
  }
  else {
    if (bVar6 == 2) {
      iVar2 = (int)*(short *)(param_2 + (lVar4 + (lVar5 + 2) * 3) * 4) +
              (int)*(short *)(param_2 + (lVar4 + ((longlong)(param_4 + 1) + 2) * 3) * 4);
      iVar1 = iVar2 + -1;
      if (-1 < iVar2) {
        iVar1 = iVar2 + 1;
      }
      iVar3 = (int)*(short *)(param_2 + 0x1a + (lVar4 + lVar5 * 3) * 4) +
              (int)*(short *)(param_2 + 0x1a + (lVar4 + (longlong)(param_4 + 1) * 3) * 4);
      iVar2 = iVar3 + -1;
      if (-1 < iVar3) {
        iVar2 = iVar3 + 1;
      }
      return CONCAT22((short)(iVar2 / 2),(short)(iVar1 / 2));
    }
    if (bVar6 == 3) {
      iVar2 = (int)*(short *)(param_2 + 0x3c + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x30 + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x24 + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x18 + lVar4 * 4);
      iVar1 = iVar2 + -2;
      if (-1 < iVar2) {
        iVar1 = iVar2 + 2;
      }
      iVar3 = (int)*(short *)(param_2 + 0x3e + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x32 + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x26 + lVar4 * 4) +
              (int)*(short *)(param_2 + 0x1a + lVar4 * 4);
      iVar2 = iVar3 + -2;
      if (-1 < iVar3) {
        iVar2 = iVar3 + 2;
      }
      return CONCAT22((short)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2),
                      (short)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2));
    }
  }
  return local_res8;
}



// FUNCTION 1439d8520 FUN_1439d8520 body=253 status=ok
// SIG undefined FUN_1439d8520(void)

undefined4
FUN_1439d8520(longlong param_1,short *param_2,int param_3,int param_4,char param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  
  sVar7 = (1 << (1U - param_6 & 0x1f)) * *param_2;
  iVar1 = 1 << (1U - param_6 & 0x1f);
  sVar6 = (1 << (1U - param_5 & 0x1f)) * param_2[1];
  iVar3 = 1 << (1U - param_5 & 0x1f);
  iVar4 = (param_4 + 4) * 0x10 + -0x10 + *(int *)(param_1 + 0x1dc) * iVar1;
  iVar5 = *(int *)(param_1 + 0x1d8) * iVar1 + (param_4 + 4) * -0x10;
  iVar2 = *(int *)(param_1 + 0x1d0) * iVar3 + (param_3 + 4) * -0x10;
  iVar1 = (param_3 + 4) * 0x10 + -0x10 + *(int *)(param_1 + 0x1d4) * iVar3;
  if (sVar6 < iVar2) {
    sVar6 = (short)iVar2;
  }
  else if (iVar1 < sVar6) {
    sVar6 = (short)iVar1;
  }
  if (sVar7 < iVar5) {
    sVar7 = (short)iVar5;
  }
  else if (iVar4 < sVar7) {
    sVar7 = (short)iVar4;
  }
  _param_6 = CONCAT22(sVar6,sVar7);
  return _param_6;
}



// FUNCTION 1439d8620 FUN_1439d8620 body=178 status=ok
// SIG undefined FUN_1439d8620(void)

void FUN_1439d8620(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x38);
  param_3 = param_3 * 8;
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar5 = *(longlong *)(param_2 + 0x48);
  iVar1 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(param_2 + 0x10);
  param_4 = param_4 * 8;
  *(int *)(param_1 + 0x18) = iVar2;
  *(longlong *)(param_1 + 0x10) =
       ((param_4 >> ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) +
       (param_3 >> ((byte)*(undefined4 *)(param_1 + 0xc) & 0x1f)) * iVar2) + lVar3;
  *(longlong *)(param_1 + 0x90) =
       ((param_4 >> ((byte)*(undefined4 *)(param_1 + 0x88) & 0x1f)) +
       (param_3 >> ((byte)*(undefined4 *)(param_1 + 0x8c) & 0x1f)) * iVar1) + lVar4;
  *(int *)(param_1 + 0x98) = iVar1;
  *(longlong *)(param_1 + 0x110) =
       ((param_4 >> ((byte)*(undefined4 *)(param_1 + 0x108) & 0x1f)) +
       (param_3 >> ((byte)*(undefined4 *)(param_1 + 0x10c) & 0x1f)) * iVar1) + lVar5;
  *(int *)(param_1 + 0x118) = iVar1;
  return;
}



// FUNCTION 1439d86e0 FUN_1439d86e0 body=372 status=ok
// SIG undefined FUN_1439d86e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439d86e0(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                  longlong param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong local_70;
  int local_68 [4];
  longlong local_58 [4];
  
  if (param_3 != 0) {
    local_58[3] = DAT_1468387a8 ^ (ulonglong)auStack_98;
    local_58[0] = *(longlong *)(param_3 + 0x38);
    lVar5 = 0;
    local_58[1] = *(undefined8 *)(param_3 + 0x40);
    local_58[2] = *(undefined8 *)(param_3 + 0x48);
    local_68[0] = *(int *)(param_3 + 0x10);
    local_78 = param_4 * 8;
    lVar1 = (longlong)param_2 + 2;
    local_68[1] = *(undefined4 *)(param_3 + 0x24);
    local_68[2] = *(undefined4 *)(param_3 + 0x24);
    local_70 = (longlong)param_2 * 0x10 + lVar1 * -0x10 + 0x28;
    plVar7 = (longlong *)(lVar1 * 0x10 + param_1);
    local_74 = param_5 * 8;
    iVar8 = local_78;
    do {
      iVar3 = local_68[lVar5];
      iVar6 = local_74 >> ((byte)(int)plVar7[lVar1 * -2 + 1] & 0x1f);
      iVar4 = iVar8 >> ((byte)*(undefined4 *)((longlong)plVar7 + lVar1 * -0x10 + 0xc) & 0x1f);
      if (param_6 != 0) {
        iVar6 = (**(code **)(param_6 + 0x10))(iVar6,param_6);
        iVar4 = (**(code **)(param_6 + 0x18))(iVar4,param_6);
        iVar8 = local_78;
      }
      plVar2 = local_58 + lVar5;
      lVar5 = lVar5 + 1;
      *plVar7 = (longlong)(iVar6 + iVar4 * iVar3) + *plVar2;
      *(int *)(local_70 + (longlong)plVar7) = iVar3;
      plVar7 = plVar7 + 0x10;
    } while (lVar5 < 3);
  }
  return;
}



// FUNCTION 1439d8860 FUN_1439d8860 body=3444 status=ok
// SIG undefined FUN_1439d8860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1439d8860(longlong param_1,int param_2,longlong param_3,byte param_4,short *param_5,
                 uint param_6,longlong param_7,longlong param_8,ulonglong *param_9)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  byte *pbVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_4d8 [32];
  short local_4b8;
  int local_4b4;
  short *local_4b0;
  uint local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  byte *local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  byte abStack_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_498 = *(longlong *)(param_1 + 0x188);
  local_4a0 = param_7;
  iVar7 = (int)param_9[1];
  local_470 = param_8;
  iVar13 = 0x10 << (param_4 * '\x02' & 0x1f);
  local_4b4 = 0;
  lVar19 = (ulonglong)('\0' < *(char *)(**(longlong **)(param_1 + 0x1a8) + 8)) +
           ((longlong)param_2 + (ulonglong)param_4 * 2) * 2;
  local_480 = &DAT_145cadef0;
  local_460 = lVar19 * 0x6c + *(longlong *)(param_1 + 0x1e0) + 0xae;
  if (param_4 == 0) {
    local_480 = &DAT_145cae2f0;
  }
  iVar12 = *(int *)((longlong)param_9 + 0xc);
  local_4a8 = (uint)(param_4 == 3);
  local_4b8 = *param_5;
  uVar4 = *param_9;
  lVar14 = local_488;
  if (local_498 != 0) {
    local_488 = local_498 + 0x330 + lVar19 * 0x240;
    lVar14 = local_498 + 0x2730 + lVar19 * 0x90;
  }
  local_468 = (longlong)iVar13;
  local_4b0 = (short *)0x0;
  iVar5 = 0;
  local_490 = local_488;
  local_488 = lVar14;
  local_478 = param_3;
  if (0 < iVar13) {
    while( true ) {
      uVar9 = (ulonglong)param_6;
      uVar6 = (ulonglong)*local_480;
      local_480 = local_480 + 1;
      lVar19 = (longlong)(int)param_6 + uVar6 * 6;
      pbVar18 = (byte *)(local_460 + lVar19 * 3);
      if (local_498 != 0) {
        piVar1 = (int *)(local_488 + lVar19 * 4);
        *piVar1 = *piVar1 + 1;
      }
      uVar11 = (iVar7 + -1) * (uint)*pbVar18 + 0x100 >> 8;
      uVar8 = (ulonglong)uVar11 << 0x38;
      if (iVar12 < 0) {
        *param_9 = uVar4;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_1439d2cb0(param_9);
        uVar4 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      if (uVar4 < uVar8) break;
      bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
      iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
      uVar4 = uVar4 - uVar8 << (bVar2 & 0x3f);
      iVar12 = iVar12 - (uint)bVar2;
      while( true ) {
        uVar11 = (uint)pbVar18[1] * (iVar7 + -1) + 0x100 >> 8;
        uVar8 = (ulonglong)uVar11 << 0x38;
        if (iVar12 < 0) {
          *param_9 = uVar4;
          *(int *)((longlong)param_9 + 0xc) = iVar12;
          FUN_1439d2cb0(param_9);
          uVar4 = *param_9;
          iVar12 = *(int *)((longlong)param_9 + 0xc);
        }
        iVar13 = (int)uVar9;
        if (uVar8 <= uVar4) break;
        bVar2 = (&DAT_145cb01e0)[uVar11];
        iVar12 = iVar12 - (uint)bVar2;
        iVar7 = uVar11 << (bVar2 & 0x1f);
        uVar4 = uVar4 << (bVar2 & 0x3f);
        if (local_498 != 0) {
          piVar1 = (int *)(local_490 + ((longlong)iVar13 + uVar6 * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        local_4b8 = param_5[1];
        uVar6 = (ulonglong)*(short *)(local_4a0 + (longlong)local_4b0 * 2);
        if (0x3ff < uVar6) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        abStack_458[uVar6] = 0;
        local_4b0 = (short *)((longlong)local_4b0 + 1);
        iVar5 = local_4b4 + 1;
        if (local_468 <= (longlong)local_4b0) {
          *param_9 = uVar4;
          goto LAB_1439d95a4;
        }
        bVar2 = *local_480;
        uVar6 = (ulonglong)bVar2;
        uVar9 = (ulonglong)
                (abStack_458[*(short *)(local_470 + 2 + (longlong)local_4b0 * 4)] + 1 +
                 (uint)abStack_458[*(short *)(local_470 + (longlong)local_4b0 * 4)] >> 1);
        local_480 = local_480 + 1;
        pbVar18 = (byte *)(local_460 + (uVar9 + (ulonglong)bVar2 * 6) * 3);
        local_4b4 = iVar5;
      }
      bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
      iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
      uVar4 = uVar4 - uVar8 << (bVar2 & 0x3f);
      uVar11 = (iVar7 + -1) * (uint)pbVar18[2] + 0x100 >> 8;
      uVar9 = (ulonglong)uVar11 << 0x38;
      iVar12 = iVar12 - (uint)bVar2;
      if (iVar12 < 0) {
        *param_9 = uVar4;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_1439d2cb0(param_9);
        uVar4 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      if (uVar4 < uVar9) {
        bVar2 = (&DAT_145cb01e0)[uVar11];
        iVar12 = iVar12 - (uint)bVar2;
        iVar7 = uVar11 << (bVar2 & 0x1f);
        uVar4 = uVar4 << (bVar2 & 0x3f);
        if (local_498 != 0) {
          piVar1 = (int *)(local_490 + 4 + ((longlong)iVar13 + uVar6 * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        iVar13 = (int)local_4b8;
        psVar15 = (short *)(local_4a0 + (longlong)local_4b0 * 2);
        abStack_458[*(short *)(local_4a0 + (longlong)local_4b0 * 2)] = 1;
        psVar16 = local_4b0;
      }
      else {
        uVar11 = iVar7 - uVar11;
        bVar2 = (&DAT_145cb01e0)[uVar11];
        iVar12 = iVar12 - (uint)bVar2;
        iVar7 = uVar11 << (bVar2 & 0x1f);
        uVar4 = uVar4 - uVar9 << (bVar2 & 0x3f);
        lVar19 = (longlong)(int)(pbVar18[2] - 1) * 8;
        if (local_498 != 0) {
          piVar1 = (int *)(local_490 + 8 + ((longlong)iVar13 + uVar6 * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        uVar11 = (iVar7 + -1) * (uint)(byte)(&DAT_145cae320)[lVar19] + 0x100 >> 8;
        uVar6 = (ulonglong)uVar11 << 0x38;
        if (iVar12 < 0) {
          *param_9 = uVar4;
          *(int *)((longlong)param_9 + 0xc) = iVar12;
          FUN_1439d2cb0(param_9);
          uVar4 = *param_9;
          iVar12 = *(int *)((longlong)param_9 + 0xc);
        }
        if (uVar4 < uVar6) {
          bVar2 = (&DAT_145cb01e0)[uVar11];
          iVar7 = uVar11 << (bVar2 & 0x1f);
          uVar4 = uVar4 << (bVar2 & 0x3f);
          uVar11 = (uint)(byte)(&DAT_145cae321)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
          uVar6 = (ulonglong)uVar11 << 0x38;
          iVar12 = iVar12 - (uint)bVar2;
          if (iVar12 < 0) {
            *param_9 = uVar4;
            *(int *)((longlong)param_9 + 0xc) = iVar12;
            FUN_1439d2cb0(param_9);
            uVar4 = *param_9;
            iVar12 = *(int *)((longlong)param_9 + 0xc);
          }
          psVar16 = local_4b0;
          if (uVar4 < uVar6) {
            bVar2 = (&DAT_145cb01e0)[uVar11];
            iVar7 = uVar11 << (bVar2 & 0x1f);
            iVar12 = iVar12 - (uint)bVar2;
            uVar4 = uVar4 << (bVar2 & 0x3f);
            iVar13 = local_4b8 * 2;
            psVar15 = (short *)(local_4a0 + (longlong)local_4b0 * 2);
            abStack_458[*(short *)(local_4a0 + (longlong)local_4b0 * 2)] = 2;
          }
          else {
            uVar11 = iVar7 - uVar11;
            bVar2 = (&DAT_145cae322)[lVar19];
            bVar3 = (&DAT_145cb01e0)[uVar11];
            iVar7 = uVar11 << (bVar3 & 0x1f);
            uVar4 = uVar4 - uVar6 << (bVar3 & 0x3f);
            psVar15 = (short *)(local_4a0 + (longlong)local_4b0 * 2);
            abStack_458[*(short *)(local_4a0 + (longlong)local_4b0 * 2)] = 3;
            uVar11 = (uint)bVar2 * (iVar7 + -1) + 0x100 >> 8;
            uVar6 = (ulonglong)uVar11 << 0x38;
            iVar12 = iVar12 - (uint)bVar3;
            if (iVar12 < 0) {
              *param_9 = uVar4;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_1439d2cb0(param_9);
              uVar4 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar4 < uVar6) {
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar12 = iVar12 - (uint)bVar2;
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar4 = uVar4 << (bVar2 & 0x3f);
              iVar13 = local_4b8 * 3;
            }
            else {
              uVar11 = iVar7 - uVar11;
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar12 = iVar12 - (uint)bVar2;
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
              iVar13 = local_4b8 * 4;
            }
          }
        }
        else {
          uVar11 = iVar7 - uVar11;
          bVar2 = (&DAT_145cb01e0)[uVar11];
          iVar7 = uVar11 << (bVar2 & 0x1f);
          uVar6 = uVar4 - uVar6 << (bVar2 & 0x3f);
          uVar11 = (uint)(byte)(&DAT_145cae323)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
          uVar4 = (ulonglong)uVar11 << 0x38;
          iVar12 = iVar12 - (uint)bVar2;
          if (iVar12 < 0) {
            *param_9 = uVar6;
            *(int *)((longlong)param_9 + 0xc) = iVar12;
            FUN_1439d2cb0(param_9);
            uVar6 = *param_9;
            iVar12 = *(int *)((longlong)param_9 + 0xc);
          }
          psVar16 = local_4b0;
          if (uVar6 < uVar4) {
            bVar2 = (&DAT_145cb01e0)[uVar11];
            bVar3 = (&DAT_145cae324)[lVar19];
            iVar7 = uVar11 << (bVar2 & 0x1f);
            uVar6 = uVar6 << (bVar2 & 0x3f);
            local_4b0 = (short *)(local_4a0 + (longlong)local_4b0 * 2);
            abStack_458[*local_4b0] = 4;
            uVar11 = (uint)bVar3 * (iVar7 + -1) + 0x100 >> 8;
            uVar4 = (ulonglong)uVar11 << 0x38;
            iVar12 = iVar12 - (uint)bVar2;
            if (iVar12 < 0) {
              *param_9 = uVar6;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_1439d2cb0(param_9);
              uVar6 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar6 < uVar4) {
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar6 = uVar6 << (bVar2 & 0x3f);
              uVar11 = (iVar7 + -1) * 0x9f + 0x100U >> 8;
              uVar9 = (ulonglong)uVar11 << 0x38;
              iVar12 = iVar12 - (uint)bVar2;
              if (iVar12 < 0) {
                *param_9 = uVar6;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_1439d2cb0(param_9);
                uVar6 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar6 < uVar9) {
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar6 << (bVar2 & 0x3f);
              }
              else {
                uVar11 = iVar7 - uVar11;
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar6 - uVar9 << (bVar2 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar2;
              iVar13 = (int)local_4b8 * ((uVar6 >= uVar9) + 5);
              psVar15 = local_4b0;
            }
            else {
              uVar11 = iVar7 - uVar11;
              uVar17 = 0;
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar12 = iVar12 - (uint)bVar2;
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar4 = uVar6 - uVar4 << (bVar2 & 0x3f);
              lVar19 = 0;
              do {
                uVar11 = (uint)(byte)(&DAT_145cadea0)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
                uVar6 = (ulonglong)uVar11 << 0x38;
                if (iVar12 < 0) {
                  *param_9 = uVar4;
                  *(int *)((longlong)param_9 + 0xc) = iVar12;
                  FUN_1439d2cb0(param_9);
                  uVar4 = *param_9;
                  iVar12 = *(int *)((longlong)param_9 + 0xc);
                }
                bVar20 = uVar4 < uVar6;
                if (bVar20) {
                  bVar2 = (&DAT_145cb01e0)[uVar11];
                  iVar7 = uVar11 << (bVar2 & 0x1f);
                  uVar4 = uVar4 << (bVar2 & 0x3f);
                }
                else {
                  bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
                  iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
                  uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                }
                iVar12 = iVar12 - (uint)bVar2;
                lVar19 = lVar19 + 1;
                uVar17 = uVar17 * 2 | (uint)!bVar20;
              } while (lVar19 < 2);
              iVar13 = (int)local_4b8 * (uVar17 + 7);
              psVar15 = local_4b0;
            }
          }
          else {
            uVar11 = iVar7 - uVar11;
            bVar2 = (&DAT_145cae325)[lVar19];
            bVar3 = (&DAT_145cb01e0)[uVar11];
            iVar7 = uVar11 << (bVar3 & 0x1f);
            uVar4 = uVar6 - uVar4 << (bVar3 & 0x3f);
            local_4b0 = (short *)(local_4a0 + (longlong)local_4b0 * 2);
            abStack_458[*local_4b0] = 5;
            uVar11 = (uint)bVar2 * (iVar7 + -1) + 0x100 >> 8;
            uVar6 = (ulonglong)uVar11 << 0x38;
            iVar12 = iVar12 - (uint)bVar3;
            if (iVar12 < 0) {
              *param_9 = uVar4;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_1439d2cb0(param_9);
              uVar4 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar4 < uVar6) {
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar4 = uVar4 << (bVar2 & 0x3f);
              uVar11 = (uint)(byte)(&DAT_145cae326)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
              uVar6 = (ulonglong)uVar11 << 0x38;
              iVar12 = iVar12 - (uint)bVar2;
              if (iVar12 < 0) {
                *param_9 = uVar4;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_1439d2cb0(param_9);
                uVar4 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              uVar17 = 0;
              if (uVar4 < uVar6) {
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar12 = iVar12 - (uint)bVar2;
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar4 << (bVar2 & 0x3f);
                lVar19 = 0;
                do {
                  uVar11 = (uint)(byte)(&DAT_145cadeb0)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
                  uVar6 = (ulonglong)uVar11 << 0x38;
                  if (iVar12 < 0) {
                    *param_9 = uVar4;
                    *(int *)((longlong)param_9 + 0xc) = iVar12;
                    FUN_1439d2cb0(param_9);
                    uVar4 = *param_9;
                    iVar12 = *(int *)((longlong)param_9 + 0xc);
                  }
                  bVar20 = uVar4 < uVar6;
                  if (bVar20) {
                    bVar2 = (&DAT_145cb01e0)[uVar11];
                    iVar7 = uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 << (bVar2 & 0x3f);
                  }
                  else {
                    bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
                    iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                  }
                  iVar12 = iVar12 - (uint)bVar2;
                  lVar19 = lVar19 + 1;
                  uVar17 = uVar17 * 2 | (uint)!bVar20;
                } while (lVar19 < 3);
                iVar13 = (int)local_4b8 * (uVar17 + 0xb);
                psVar15 = local_4b0;
              }
              else {
                uVar11 = iVar7 - uVar11;
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar12 = iVar12 - (uint)bVar2;
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                lVar19 = 0;
                do {
                  uVar11 = (uint)(byte)(&DAT_145cadec0)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
                  uVar6 = (ulonglong)uVar11 << 0x38;
                  if (iVar12 < 0) {
                    *param_9 = uVar4;
                    *(int *)((longlong)param_9 + 0xc) = iVar12;
                    FUN_1439d2cb0(param_9);
                    uVar4 = *param_9;
                    iVar12 = *(int *)((longlong)param_9 + 0xc);
                  }
                  bVar20 = uVar4 < uVar6;
                  if (bVar20) {
                    bVar2 = (&DAT_145cb01e0)[uVar11];
                    iVar7 = uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 << (bVar2 & 0x3f);
                  }
                  else {
                    bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
                    iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                  }
                  iVar12 = iVar12 - (uint)bVar2;
                  lVar19 = lVar19 + 1;
                  uVar17 = uVar17 * 2 | (uint)!bVar20;
                } while (lVar19 < 4);
                iVar13 = (int)local_4b8 * (uVar17 + 0x13);
                psVar15 = local_4b0;
              }
            }
            else {
              uVar11 = iVar7 - uVar11;
              bVar2 = (&DAT_145cb01e0)[uVar11];
              iVar7 = uVar11 << (bVar2 & 0x1f);
              uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
              uVar11 = (uint)(byte)(&DAT_145cae327)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
              uVar6 = (ulonglong)uVar11 << 0x38;
              iVar12 = iVar12 - (uint)bVar2;
              if (iVar12 < 0) {
                *param_9 = uVar4;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_1439d2cb0(param_9);
                uVar4 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              uVar17 = 0;
              if (uVar4 < uVar6) {
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar12 = iVar12 - (uint)bVar2;
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar4 << (bVar2 & 0x3f);
                lVar19 = 0;
                do {
                  uVar11 = (uint)(byte)(&DAT_145caded0)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
                  uVar6 = (ulonglong)uVar11 << 0x38;
                  if (iVar12 < 0) {
                    *param_9 = uVar4;
                    *(int *)((longlong)param_9 + 0xc) = iVar12;
                    FUN_1439d2cb0(param_9);
                    uVar4 = *param_9;
                    iVar12 = *(int *)((longlong)param_9 + 0xc);
                  }
                  bVar20 = uVar4 < uVar6;
                  if (bVar20) {
                    bVar2 = (&DAT_145cb01e0)[uVar11];
                    iVar7 = uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 << (bVar2 & 0x3f);
                  }
                  else {
                    bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
                    iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                  }
                  iVar12 = iVar12 - (uint)bVar2;
                  lVar19 = lVar19 + 1;
                  uVar17 = uVar17 * 2 | (uint)!bVar20;
                } while (lVar19 < 5);
                iVar13 = (int)local_4b8 * (uVar17 + 0x23);
                psVar15 = local_4b0;
              }
              else {
                uVar11 = iVar7 - uVar11;
                bVar2 = (&DAT_145cb01e0)[uVar11];
                iVar12 = iVar12 - (uint)bVar2;
                iVar7 = uVar11 << (bVar2 & 0x1f);
                uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                lVar19 = 0;
                do {
                  uVar11 = (uint)(byte)(&DAT_145cadee0)[lVar19] * (iVar7 + -1) + 0x100 >> 8;
                  uVar6 = (ulonglong)uVar11 << 0x38;
                  if (iVar12 < 0) {
                    *param_9 = uVar4;
                    *(int *)((longlong)param_9 + 0xc) = iVar12;
                    FUN_1439d2cb0(param_9);
                    uVar4 = *param_9;
                    iVar12 = *(int *)((longlong)param_9 + 0xc);
                  }
                  bVar20 = uVar4 < uVar6;
                  if (bVar20) {
                    bVar2 = (&DAT_145cb01e0)[uVar11];
                    iVar7 = uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 << (bVar2 & 0x3f);
                  }
                  else {
                    bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
                    iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
                    uVar4 = uVar4 - uVar6 << (bVar2 & 0x3f);
                  }
                  iVar12 = iVar12 - (uint)bVar2;
                  lVar19 = lVar19 + 1;
                  uVar17 = uVar17 * 2 | (uint)!bVar20;
                } while (lVar19 < 0xe);
                iVar13 = (int)local_4b8 * (uVar17 + 0x43);
                psVar15 = local_4b0;
              }
            }
          }
        }
      }
      uVar11 = (iVar7 + 1U & 0x1ffffff) >> 1;
      sVar10 = (short)(iVar13 >> ((byte)local_4a8 & 0x1f));
      if (iVar12 < 0) {
        *param_9 = uVar4;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_1439d2cb0(param_9);
        uVar4 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      if (uVar4 < (ulonglong)uVar11 << 0x38) {
        bVar2 = (&DAT_145cb01e0)[uVar11];
        iVar7 = uVar11 << (bVar2 & 0x1f);
        uVar4 = uVar4 << (bVar2 & 0x3f);
      }
      else {
        bVar2 = (&DAT_145cb01e0)[iVar7 - uVar11];
        iVar7 = iVar7 - uVar11 << (bVar2 & 0x1f);
        uVar4 = uVar4 - ((ulonglong)uVar11 << 0x38) << (bVar2 & 0x3f);
        sVar10 = -sVar10;
      }
      iVar12 = iVar12 - (uint)bVar2;
      local_4b0 = (short *)((longlong)psVar16 + 1);
      iVar5 = local_4b4 + 1;
      *(short *)(local_478 + (longlong)*psVar15 * 2) = sVar10;
      param_6 = abStack_458[*(short *)(local_470 + 2 + (longlong)local_4b0 * 4)] + 1 +
                (uint)abStack_458[*(short *)(local_470 + (longlong)local_4b0 * 4)] >> 1;
      local_4b8 = param_5[1];
      local_4b4 = iVar5;
      if (local_468 <= (longlong)local_4b0) goto LAB_1439d959f;
    }
    bVar2 = (&DAT_145cb01e0)[uVar11];
    iVar7 = uVar11 << (bVar2 & 0x1f);
    iVar12 = iVar12 - (uint)bVar2;
    uVar4 = uVar4 << (bVar2 & 0x3f);
    iVar5 = local_4b4;
    if (local_498 != 0) {
      piVar1 = (int *)(local_490 + 0xc + (longlong)(int)param_6 * 0x10 + uVar6 * 0x60);
      *piVar1 = *piVar1 + 1;
    }
  }
LAB_1439d959f:
  *param_9 = uVar4;
LAB_1439d95a4:
  *(int *)((longlong)param_9 + 0xc) = iVar12;
  *(int *)(param_9 + 1) = iVar7;
  return iVar5;
}



// FUNCTION 1439d95e0 FUN_1439d95e0 body=822 status=ok
// SIG undefined FUN_1439d95e0(void)

ulonglong FUN_1439d95e0(longlong param_1,int param_2,undefined8 *param_3,int param_4,int param_5,
                       char param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  lVar2 = param_1 + 0x3400;
  lVar1 = param_1 + 0x10;
  uVar6 = 0;
  puVar11 = (undefined8 *)((longlong)param_2 * 0x80 + lVar2);
  uVar7 = 0;
  uVar9 = 0;
  puVar12 = (ulonglong *)((longlong)param_4 + puVar11[8]);
  lVar3 = (longlong)puVar11 + ((longlong)param_7 + 0x14) * 4;
  puVar13 = (ulonglong *)((longlong)param_5 + puVar11[9]);
  if (param_6 == '\0') {
    uVar6 = FUN_1439d8860(lVar2,0 < param_2,*puVar11,0,lVar3,
                          ((char)*puVar13 != '\0') + ((char)*puVar12 != '\0'),*param_3,param_3[2],
                          lVar1);
    bVar5 = 0 < (int)uVar6;
    *(bool *)puVar13 = bVar5;
    *(bool *)puVar12 = bVar5;
  }
  else if (param_6 == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x35c0);
    uVar8 = uVar6;
    if ((uVar4 != 0) && (uVar8 = uVar7, uVar4 < param_4 + 2U)) {
      uVar8 = (ulonglong)((param_4 - uVar4) * 8 + 0x10);
    }
    uVar4 = *(uint *)(param_1 + 0x35c4);
    uVar7 = uVar6;
    if ((uVar4 != 0) && (uVar7 = uVar9, uVar4 < param_5 + 2U)) {
      uVar7 = (ulonglong)((param_5 - uVar4) * 8 + 0x10);
    }
    uVar6 = FUN_1439d8860(lVar2,0 < param_2,*puVar11,1,lVar3,
                          ((short)*puVar13 != 0) + ((short)*puVar12 != 0),*param_3,param_3[2],lVar1)
    ;
    iVar10 = (uint)(0 < (int)uVar6) * 0x101;
    *(short *)puVar12 = (short)(iVar10 >> ((byte)uVar8 & 0x1f));
    *(short *)puVar13 = (short)(iVar10 >> ((byte)uVar7 & 0x1f));
  }
  else if (param_6 == '\x02') {
    uVar4 = *(uint *)(param_1 + 0x35c0);
    uVar8 = uVar6;
    if ((uVar4 != 0) && (uVar8 = uVar7, uVar4 < param_4 + 4U)) {
      uVar8 = (ulonglong)((param_4 - uVar4) * 8 + 0x20);
    }
    uVar4 = *(uint *)(param_1 + 0x35c4);
    uVar7 = uVar6;
    if ((uVar4 != 0) && (uVar7 = uVar9, uVar4 < param_5 + 4U)) {
      uVar7 = (ulonglong)((param_5 - uVar4) * 8 + 0x20);
    }
    uVar6 = FUN_1439d8860(lVar2,0 < param_2,*puVar11,2,lVar3,
                          ((int)*puVar13 != 0) + ((int)*puVar12 != 0),*param_3,param_3[2],lVar1);
    iVar10 = (uint)(0 < (int)uVar6) * 0x1010101;
    *(int *)puVar12 = iVar10 >> ((byte)uVar8 & 0x1f);
    *(int *)puVar13 = iVar10 >> ((byte)uVar7 & 0x1f);
  }
  else if (param_6 == '\x03') {
    uVar4 = *(uint *)(param_1 + 0x35c0);
    uVar8 = uVar6;
    if ((uVar4 != 0) && (uVar8 = uVar7, uVar4 < param_4 + 8U)) {
      uVar8 = (ulonglong)((param_4 - uVar4) * 8 + 0x40);
    }
    uVar4 = *(uint *)(param_1 + 0x35c4);
    uVar7 = uVar6;
    if ((uVar4 != 0) && (uVar7 = uVar9, uVar4 < param_5 + 8U)) {
      uVar7 = (ulonglong)((param_5 - uVar4) * 8 + 0x40);
    }
    uVar6 = FUN_1439d8860(lVar2,0 < param_2,*puVar11,3,lVar3,(*puVar13 != 0) + (*puVar12 != 0),
                          *param_3,param_3[2],lVar1);
    uVar9 = (ulonglong)(0 < (int)uVar6) * 0x101010101010101;
    *puVar12 = uVar9 >> ((byte)uVar8 & 0x3f);
    *puVar13 = uVar9 >> ((byte)uVar7 & 0x3f);
  }
  return uVar6;
}



// FUNCTION 1439d9920 FUN_1439d9920 body=353 status=ok
// SIG undefined FUN_1439d9920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439d9920(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4,int param_5,
                  int param_6,undefined4 param_7,undefined4 param_8,int *param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  undefined4 local_78;
  undefined4 local_70;
  int local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar4 = 0;
  lVar5 = (longlong)param_6;
  lVar1 = **(longlong **)(param_2 + 0x1a8);
  local_50 = 0;
  local_58 = 0;
  local_60 = 1;
  local_68 = param_5;
  local_70 = param_8;
  local_78 = param_7;
  local_80 = local_48;
  local_88 = param_3;
  iVar2 = FUN_1439d9b10(param_1,param_2,param_4,*(undefined1 *)(lVar5 + 8 + lVar1));
  if (param_5 == 0) {
    iVar3 = local_48[iVar2 + -1];
  }
  else {
    if (param_5 < 1) {
      return;
    }
    if (param_5 < 3) {
      if (param_4 == '\n') {
        iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 4);
      }
      else {
        *param_9 = 0;
        if (iVar2 < 1) {
          return;
        }
        while (iVar3 = local_48[lVar4], *(int *)(lVar1 + 0x18 + lVar5 * 4) == iVar3) {
          lVar4 = lVar4 + 1;
          if (iVar2 <= lVar4) {
            return;
          }
        }
      }
    }
    else {
      if (param_5 != 3) {
        return;
      }
      if (param_4 == '\n') {
        iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 4);
      }
      else {
        local_48[2] = *(undefined4 *)(lVar1 + 0x24 + lVar5 * 4);
        local_48[3] = *(undefined4 *)(lVar1 + 0x18 + lVar5 * 4);
        local_48[4] = local_48[0];
        *param_9 = 0;
        local_48[5] = local_48[1];
        while (iVar3 = local_48[lVar4 + 2], *(int *)(lVar1 + 0x30 + lVar5 * 4) == iVar3) {
          lVar4 = lVar4 + 1;
          if (3 < lVar4) {
            return;
          }
        }
      }
    }
  }
  *param_9 = iVar3;
  return;
}



// FUNCTION 1439d9a90 FUN_1439d9a90 body=118 status=ok
// SIG undefined FUN_1439d9a90(void)

void FUN_1439d9a90(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_6) {
    do {
      iVar1 = 0;
      if (0 < param_5) {
        do {
          if (param_2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined1 *)((*(int *)(param_1 + 0x364) * iVar4 + iVar1 + param_4) + param_2)
            ;
          }
          iVar2 = *(int *)(param_1 + 0x364) * iVar4 + iVar1;
          iVar1 = iVar1 + 1;
          *(undefined1 *)((iVar2 + param_4) + param_3) = uVar3;
        } while (iVar1 < param_5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_6);
  }
  return;
}



// FUNCTION 1439d9b10 FUN_1439d9b10 body=2060 status=ok
// SIG undefined FUN_1439d9b10(void)

uint FUN_1439d9b10(longlong param_1,longlong param_2,char param_3,byte param_4,longlong param_5,
                  int *param_6,int param_7,int param_8,int param_9,int param_10,code *param_11,
                  undefined8 param_12)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined4 local_res18;
  int *local_40;
  
  uVar19 = 0;
  uVar11 = 0;
  bVar5 = false;
  if (*(int *)(param_1 + 0x420) == 0) {
    local_40 = (int *)0x0;
  }
  else {
    local_40 = (int *)(*(longlong *)(*(longlong *)(param_1 + 400) + 8) +
                      ((longlong)(*(int *)(param_1 + 0x364) * param_7) + (longlong)param_8) * 0xc);
  }
  bVar21 = param_3 != '\v';
  param_6[0] = 0;
  param_6[1] = 0;
  uVar9 = uVar19;
  if (param_10 != 0) {
    lVar14 = (longlong)param_9;
    piVar18 = (int *)(param_5 + 4);
    uVar12 = uVar19;
    uVar17 = uVar19;
    uVar20 = uVar19;
    do {
      iVar6 = piVar18[-1] + param_7;
      if (-1 < iVar6) {
        iVar10 = *piVar18;
        if (((*(int *)(param_2 + 0x198) <= param_8 + iVar10) && (iVar6 < *(int *)(param_1 + 0x35c)))
           && (param_8 + iVar10 < *(int *)(param_2 + 0x19c))) {
          bVar5 = true;
          pbVar3 = *(byte **)(*(longlong *)(param_2 + 0x1a8) +
                             (longlong)(*(int *)(param_2 + 0x1a0) * piVar18[-1] + iVar10) * 8);
          iVar6 = (int)uVar9;
          if (pbVar3[8] == param_4) {
            if (uVar17 == 0) {
              if ((param_9 < 0) || (2 < *pbVar3)) {
                iVar10 = *(int *)(pbVar3 + 0xc);
              }
              else {
                uVar9 = uVar19;
                if (iVar10 == 0) {
                  uVar9 = 4;
                }
                iVar10 = *(int *)(pbVar3 + ((longlong)*(int *)(&DAT_145cb0180 + uVar9 + lVar14 * 8)
                                           + 2) * 0xc);
              }
LAB_1439d9dd2:
              uVar11 = iVar6 + 1;
              uVar9 = (ulonglong)uVar11;
              *param_6 = iVar10;
              uVar17 = 1;
              if (bVar21) goto LAB_1439da290;
            }
            else {
              if ((param_9 < 0) || (2 < *pbVar3)) {
                iVar10 = *(int *)(pbVar3 + 0xc);
              }
              else {
                uVar8 = uVar19;
                if (iVar10 == 0) {
                  uVar8 = 4;
                }
                iVar10 = *(int *)(pbVar3 + ((longlong)*(int *)(&DAT_145cb0180 + uVar8 + lVar14 * 8)
                                           + 2) * 0xc);
              }
              if (iVar10 != *param_6) {
                if ((param_9 < 0) || (2 < *pbVar3)) {
                  uVar11 = iVar6 + 1;
                  param_6[iVar6] = *(int *)(pbVar3 + 0xc);
                }
                else {
                  uVar9 = uVar19;
                  if (*piVar18 == 0) {
                    uVar9 = 4;
                  }
                  uVar11 = iVar6 + 1;
                  param_6[iVar6] =
                       *(int *)(pbVar3 + ((longlong)*(int *)(&DAT_145cb0180 + uVar9 + lVar14 * 8) +
                                         2) * 0xc);
                }
                goto LAB_1439da290;
              }
            }
          }
          else if (pbVar3[9] == param_4) {
            if (uVar17 == 0) {
              if ((param_9 < 0) || (2 < *pbVar3)) {
                iVar10 = *(int *)(pbVar3 + 0x10);
              }
              else {
                uVar9 = uVar19;
                if (iVar10 == 0) {
                  uVar9 = 4;
                }
                iVar10 = *(int *)(pbVar3 + (longlong)*(int *)(&DAT_145cb0180 + uVar9 + lVar14 * 8) *
                                           0xc + 0x1c);
              }
              goto LAB_1439d9dd2;
            }
            if ((param_9 < 0) || (2 < *pbVar3)) {
              iVar10 = *(int *)(pbVar3 + 0x10);
            }
            else {
              uVar8 = uVar19;
              if (iVar10 == 0) {
                uVar8 = 4;
              }
              iVar10 = *(int *)(pbVar3 + (longlong)*(int *)(&DAT_145cb0180 + uVar8 + lVar14 * 8) *
                                         0xc + 0x1c);
            }
            if (iVar10 != *param_6) {
              if ((param_9 < 0) || (2 < *pbVar3)) {
                uVar11 = iVar6 + 1;
                param_6[iVar6] = *(int *)(pbVar3 + 0x10);
              }
              else {
                uVar9 = uVar19;
                if (*piVar18 == 0) {
                  uVar9 = 4;
                }
                uVar11 = iVar6 + 1;
                param_6[iVar6] =
                     *(int *)(pbVar3 + (longlong)*(int *)(&DAT_145cb0180 + uVar9 + lVar14 * 8) * 0xc
                                       + 0x1c);
              }
              goto LAB_1439da290;
            }
          }
        }
      }
      uVar11 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar11;
      uVar12 = uVar12 + 1;
      piVar18 = piVar18 + 2;
    } while ((longlong)uVar12 < 2);
  }
  lVar14 = (longlong)(int)uVar11;
  if (lVar14 < 8) {
    iVar6 = (int)uVar9;
    do {
      iVar7 = *(int *)(param_5 + lVar14 * 8);
      iVar10 = iVar7 + param_7;
      if (-1 < iVar10) {
        iVar13 = *(int *)(param_5 + 4 + lVar14 * 8);
        iVar15 = param_8 + iVar13;
        if (((*(int *)(param_2 + 0x198) <= iVar15) && (iVar10 < *(int *)(param_1 + 0x35c))) &&
           (iVar15 < *(int *)(param_2 + 0x19c))) {
          bVar5 = true;
          lVar4 = *(longlong *)
                   (*(longlong *)(param_2 + 0x1a8) +
                   (longlong)(*(int *)(param_2 + 0x1a0) * iVar7 + iVar13) * 8);
          iVar10 = (int)uVar9;
          if (*(byte *)(lVar4 + 8) == param_4) {
            if (iVar6 == 0) {
              iVar6 = *(int *)(lVar4 + 0xc);
LAB_1439d9eef:
              uVar11 = iVar10 + 1;
              uVar9 = (ulonglong)uVar11;
              *param_6 = iVar6;
              iVar6 = 1;
              if (bVar21) goto LAB_1439da290;
            }
            else if (*(int *)(lVar4 + 0xc) != *param_6) {
              uVar11 = iVar10 + 1;
              param_6[iVar10] = *(int *)(lVar4 + 0xc);
              goto LAB_1439da290;
            }
          }
          else if (*(byte *)(lVar4 + 9) == param_4) {
            if (iVar6 == 0) {
              iVar6 = *(int *)(lVar4 + 0x10);
              goto LAB_1439d9eef;
            }
            if (*(int *)(lVar4 + 0x10) != *param_6) {
              uVar11 = iVar10 + 1;
              param_6[iVar10] = *(int *)(lVar4 + 0x10);
              goto LAB_1439da290;
            }
          }
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < 8);
  }
  if ((*(int *)(param_1 + 0x115c) != 0) && (param_11 != (code *)0x0)) {
    (*param_11)(param_12,param_7);
  }
  if (local_40 != (int *)0x0) {
    if ((*(int *)(param_1 + 0x115c) != 0) && (param_11 != (code *)0x0)) {
      (*param_11)(param_12,param_7);
    }
    iVar6 = (int)uVar9;
    if (*(byte *)(local_40 + 2) == param_4) {
      if (iVar6 == 0) {
        iVar6 = *local_40;
LAB_1439d9f80:
        uVar9 = 1;
        uVar11 = 1;
        *param_6 = iVar6;
        if (param_3 != '\v') goto LAB_1439da290;
      }
      else {
        iVar10 = *local_40;
LAB_1439d9f6c:
        if (iVar10 != *param_6) {
          uVar11 = iVar6 + 1;
          param_6[iVar6] = iVar10;
          goto LAB_1439da290;
        }
      }
    }
    else if (*(byte *)((longlong)local_40 + 9) == param_4) {
      if (iVar6 == 0) {
        iVar6 = local_40[1];
        goto LAB_1439d9f80;
      }
      iVar10 = local_40[1];
      goto LAB_1439d9f6c;
    }
  }
  uVar16 = (uint)uVar9;
  uVar12 = uVar19;
  uVar11 = uVar16;
  if (bVar5) {
    do {
      uVar11 = (uint)uVar9;
      iVar6 = *(int *)(param_5 + uVar12 * 8);
      iVar10 = param_7 + iVar6;
      if (-1 < iVar10) {
        iVar7 = *(int *)(param_5 + 4 + uVar12 * 8);
        iVar13 = param_8 + iVar7;
        if (((*(int *)(param_2 + 0x198) <= iVar13) && (iVar10 < *(int *)(param_1 + 0x35c))) &&
           (iVar13 < *(int *)(param_2 + 0x19c))) {
          lVar14 = *(longlong *)
                    (*(longlong *)(param_2 + 0x1a8) +
                    (longlong)(*(int *)(param_2 + 0x1a0) * iVar6 + iVar7) * 8);
          bVar1 = *(byte *)(lVar14 + 8);
          if ('\0' < (char)bVar1) {
            if (bVar1 != param_4) {
              iVar6 = *(int *)(lVar14 + 0xc);
              param_10._0_2_ = (short)iVar6;
              param_10._2_2_ = (short)((uint)iVar6 >> 0x10);
              if (uVar16 == 0) {
                if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) !=
                    *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4)) {
                  param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
                  iVar6 = param_10;
                }
                uVar11 = uVar11 + 1;
                uVar9 = (ulonglong)uVar11;
                *param_6 = iVar6;
                uVar16 = 1;
                if (!bVar21) goto LAB_1439da0e2;
                goto LAB_1439da290;
              }
              iVar10 = *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4);
              if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) != iVar10) {
                param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
                iVar6 = param_10;
              }
              if (iVar6 == *param_6) goto LAB_1439da0e2;
              local_res18 = *(int *)(lVar14 + 0xc);
              cVar2 = *(char *)(lVar14 + 8);
LAB_1439da080:
              if (*(int *)(param_1 + 0x10a4 + (longlong)cVar2 * 4) != iVar10) {
                local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
                local_res18 = CONCAT22(-local_res18._2_2_,-(short)local_res18);
              }
              goto LAB_1439da098;
            }
LAB_1439da0e2:
            uVar11 = (uint)uVar9;
            bVar1 = *(byte *)(lVar14 + 9);
            if ((('\0' < (char)bVar1) && (bVar1 != param_4)) &&
               (iVar6 = *(int *)(lVar14 + 0x10), iVar6 != *(int *)(lVar14 + 0xc))) {
              param_10._0_2_ = (short)iVar6;
              param_10._2_2_ = (short)((uint)iVar6 >> 0x10);
              if (uVar16 == 0) {
                if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) !=
                    *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4)) {
                  param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
                  iVar6 = param_10;
                }
                uVar11 = uVar11 + 1;
                uVar9 = (ulonglong)uVar11;
                *param_6 = iVar6;
                uVar16 = 1;
                if (bVar21) goto LAB_1439da290;
              }
              else {
                iVar10 = *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4);
                if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) != iVar10) {
                  param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
                  iVar6 = param_10;
                }
                if (iVar6 != *param_6) {
                  local_res18 = *(int *)(lVar14 + 0x10);
                  cVar2 = *(char *)(lVar14 + 9);
                  goto LAB_1439da080;
                }
              }
            }
          }
        }
      }
      uVar11 = (uint)uVar9;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < 8);
  }
  if (local_40 != (int *)0x0) {
    bVar1 = *(byte *)(local_40 + 2);
    if ((bVar1 != param_4) && ('\0' < (char)bVar1)) {
      param_10 = *local_40;
      if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) !=
          *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4)) {
        param_10._2_2_ = (short)((uint)param_10 >> 0x10);
        param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
      }
      if (uVar11 == 0) {
        uVar11 = 1;
        *param_6 = param_10;
        if (param_3 != '\v') goto LAB_1439da290;
      }
      else if (param_10 != *param_6) {
        lVar14 = (longlong)(int)uVar11;
        uVar11 = uVar11 + 1;
        param_6[lVar14] = param_10;
        goto LAB_1439da290;
      }
    }
    bVar1 = *(byte *)((longlong)local_40 + 9);
    if ((('\0' < (char)bVar1) && (bVar1 != param_4)) &&
       (local_res18 = local_40[1], local_res18 != *local_40)) {
      if (*(int *)(param_1 + 0x10a4 + (longlong)(char)bVar1 * 4) !=
          *(int *)(param_1 + 0x10a4 + (longlong)(char)param_4 * 4)) {
        param_10._0_2_ = (short)local_res18;
        param_10._2_2_ = (short)((uint)local_res18 >> 0x10);
        param_10 = CONCAT22(-param_10._2_2_,-(short)param_10);
        local_res18 = param_10;
      }
      if (uVar11 == 0) {
        uVar11 = 1;
        *param_6 = local_res18;
        if (param_3 == '\v') {
          uVar11 = 2;
        }
        goto LAB_1439da290;
      }
      if (local_res18 != *param_6) {
LAB_1439da098:
        lVar14 = (longlong)(int)uVar11;
        uVar11 = uVar11 + 1;
        param_6[lVar14] = local_res18;
        goto LAB_1439da290;
      }
    }
  }
  if (param_3 == '\v') {
    uVar11 = 2;
  }
  else {
    uVar11 = 1;
  }
LAB_1439da290:
  if (0 < (int)uVar11) {
    do {
      iVar15 = *(int *)(param_2 + 0x1dc) + 0x80;
      iVar6 = *(int *)(param_2 + 0x1d8) + -0x80;
      iVar13 = *(int *)(param_2 + 0x1d4) + 0x80;
      iVar7 = (int)*(short *)((longlong)param_6 + uVar19 * 4 + 2);
      iVar10 = *(int *)(param_2 + 0x1d0) + -0x80;
      if ((iVar10 <= iVar7) && (iVar10 = iVar7, iVar13 < iVar7)) {
        iVar10 = iVar13;
      }
      iVar7 = (int)(short)param_6[uVar19];
      *(short *)((longlong)param_6 + uVar19 * 4 + 2) = (short)iVar10;
      if ((iVar6 <= iVar7) && (iVar6 = iVar7, iVar15 < iVar7)) {
        iVar6 = iVar15;
      }
      *(short *)(param_6 + uVar19) = (short)iVar6;
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)(int)uVar11);
  }
  return uVar11;
}



// FUNCTION 1439da340 FUN_1439da340 body=176 status=ok
// SIG undefined FUN_1439da340(void)

undefined1 FUN_1439da340(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = uVar5;
  do {
    iVar3 = *(int *)(param_3 + uVar5 * 8);
    iVar1 = iVar3 + param_4;
    if (-1 < iVar1) {
      iVar4 = *(int *)(param_3 + 4 + uVar5 * 8);
      iVar2 = iVar4 + param_5;
      if (((*(int *)(param_2 + 0x198) <= iVar2) && (iVar1 < *(int *)(param_1 + 0x35c))) &&
         (iVar2 < *(int *)(param_2 + 0x19c))) {
        uVar6 = (ulonglong)
                (uint)((int)uVar6 +
                      *(int *)(&DAT_145cb00f0 +
                              (ulonglong)
                              *(byte *)(*(longlong *)
                                         (*(longlong *)(param_2 + 0x1a8) +
                                         (longlong)(iVar3 * *(int *)(param_2 + 0x1a0) + iVar4) * 8)
                                       + 1) * 4));
      }
    }
    uVar5 = uVar5 + 1;
  } while ((longlong)uVar5 < 2);
  return (&DAT_145cb0130)[(longlong)(int)uVar6 * 4];
}



// FUNCTION 1439da3f0 FUN_1439da3f0 body=220 status=ok
// SIG undefined FUN_1439da3f0(void)

uint FUN_1439da3f0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar6 = *(uint *)(param_1 + 0x1164);
  if (uVar6 == 2) {
    iVar3 = FUN_1439e1e60();
    uVar5 = (uint)*(byte *)(*(longlong *)(param_1 + 0x1168) + 0x78f + (longlong)iVar3) *
            ((int)param_3[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1439d2cb0(param_3);
    }
    uVar7 = *param_3;
    uVar4 = (ulonglong)uVar5 << 0x38;
    bVar8 = uVar4 <= uVar7;
    if (bVar8) {
      uVar5 = (int)param_3[1] - uVar5;
      uVar7 = uVar7 - uVar4;
    }
    uVar6 = (uint)bVar8;
    bVar2 = (&DAT_145cb01e0)[uVar5];
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (uint)bVar2;
    *(uint *)(param_3 + 1) = uVar5 << (bVar2 & 0x1f);
    *param_3 = uVar7 << (bVar2 & 0x3f);
    if (*(longlong *)(param_2 + 0x188) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + 0x30f0 +
                      ((ulonglong)uVar6 + (longlong)iVar3 * 2) * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  return uVar6;
}



// FUNCTION 1439da4d0 FUN_1439da4d0 body=2574 status=ok
// SIG undefined FUN_1439da4d0(void)

void FUN_1439da4d0(longlong param_1,longlong param_2,byte *param_3,undefined4 param_4,
                  undefined4 param_5,ulonglong *param_6)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  undefined1 uVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  short *psVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  byte *pbVar22;
  char cVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  bool bVar27;
  bool bVar28;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined4 local_e4;
  uint local_e0;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  int local_b0;
  undefined *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  bVar5 = *param_3;
  lVar26 = param_1 + 0x270;
  lVar17 = (longlong)*(int *)(param_1 + 0x5bc);
  local_a8 = &DAT_145cafdb0 + (ulonglong)bVar5 * 0x40;
  local_res18 = param_3;
  local_res20 = param_4;
  local_d8 = lVar26;
  FUN_1439dbf20(lVar26,param_2,param_6,(int)(char)param_3[4],param_3 + 8);
  local_e0 = (uint)('\0' < (char)param_3[9]);
  uVar4 = FUN_1439da340(lVar26,param_2,local_a8,local_res20,param_5);
  local_b8 = lVar17;
  if ((*(char *)(param_1 + 0x1358) == '\0') ||
     ((*(byte *)(param_1 + 0x13a8 + (longlong)(char)param_3[4] * 4) & 8) == 0)) {
    if (bVar5 < 3) {
      param_3[1] = 10;
    }
    else {
      bVar19 = FUN_1439db040(lVar26,param_2,param_6,uVar4);
      param_3[1] = bVar19;
    }
    if (param_3[1] != 0xc) {
      puVar25 = &local_90;
      uVar21 = (ulonglong)(local_e0 + 1);
      lVar17 = 0;
      local_c8 = uVar21;
      do {
        lVar18 = 0;
        iVar8 = FUN_1439d9b10(param_1 + 0x270,param_2,local_res18[1],(param_3 + 8)[lVar17],local_a8,
                              &local_d0,local_res20,param_5,0xffffffff,0,&LAB_1439da320,param_1);
        lVar26 = local_b8;
        if (0 < iVar8) {
          do {
            if (((lVar26 == 0) ||
                (psVar11 = (short *)(&local_d0 + lVar18),
                uVar15 = (int)*(short *)(&local_d0 + lVar18) >> 0x1f,
                0x3f < (int)(((int)*(short *)(&local_d0 + lVar18) ^ uVar15) - uVar15))) ||
               (uVar15 = (uint)*(short *)((longlong)&local_d0 + lVar18 * 4 + 2),
               uVar14 = (int)uVar15 >> 0x1f, 0x3f < (int)((uVar15 ^ uVar14) - uVar14))) {
              uVar2 = *(ushort *)(&local_d0 + lVar18);
              psVar11 = (short *)(&local_d0 + lVar18);
              if ((uVar2 & 1) != 0) {
                sVar6 = 1;
                if (0 < (short)uVar2) {
                  sVar6 = -1;
                }
                *psVar11 = sVar6 + uVar2;
              }
              uVar2 = *(ushort *)((longlong)&local_d0 + lVar18 * 4 + 2);
              if ((uVar2 & 1) != 0) {
                sVar6 = 1;
                if (0 < (short)uVar2) {
                  sVar6 = -1;
                }
                *(ushort *)((longlong)&local_d0 + lVar18 * 4 + 2) = sVar6 + uVar2;
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < iVar8);
          *(undefined4 *)puVar25 = *(undefined4 *)psVar11;
          uVar21 = local_c8;
        }
        lVar17 = lVar17 + 1;
        puVar25 = (undefined8 *)((longlong)puVar25 + 4);
        lVar26 = local_d8;
      } while (lVar17 < (longlong)uVar21);
    }
  }
  else {
    param_3[1] = 0xc;
    if (bVar5 < 3) {
      FUN_143989b90(*(undefined8 *)(param_2 + 0x260),5,
                    "Invalid usage of segement feature on small blocks");
      return;
    }
  }
  bVar19 = *(byte *)(lVar26 + 0x454);
  if (bVar19 == 4) {
    if (*(longlong *)(param_2 + 0x1b0) == 0) {
      uVar15 = 3;
    }
    else {
      uVar15 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1b0) + 7);
    }
    if (*(longlong *)(param_2 + 0x1b8) == 0) {
      uVar14 = 3;
    }
    else {
      uVar14 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1b8) + 7);
    }
    uVar9 = uVar15;
    if (((uVar15 != uVar14) && (uVar9 = uVar14, uVar15 != 3)) && (uVar9 = 3, uVar14 == 3)) {
      uVar9 = uVar15;
    }
    cVar23 = '\0';
    lVar26 = *(longlong *)(lVar26 + 0x1168);
    do {
      uVar15 = (uint)*(byte *)(((longlong)cVar23 >> 1) + lVar26 + ((ulonglong)uVar9 + 0x3b7) * 2) *
               ((int)param_6[1] + -1) + 0x100 >> 8;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_1439d2cb0(param_6);
      }
      uVar21 = *param_6;
      uVar12 = (ulonglong)uVar15 << 0x38;
      bVar27 = uVar12 <= uVar21;
      if (bVar27) {
        uVar15 = (int)param_6[1] - uVar15;
        uVar21 = uVar21 - uVar12;
      }
      bVar19 = (&DAT_145cb01e0)[uVar15];
      *(int *)((longlong)param_6 + 0xc) = *(int *)((longlong)param_6 + 0xc) - (uint)bVar19;
      *param_6 = uVar21 << (bVar19 & 0x3f);
      *(uint *)(param_6 + 1) = uVar15 << (bVar19 & 0x1f);
      cVar23 = (&DAT_145caf0fc)[(int)((int)cVar23 + (uint)bVar27)];
    } while ('\0' < cVar23);
    bVar19 = -cVar23;
    lVar26 = local_d8;
    if (*(longlong *)(param_2 + 0x188) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x188) +
                      (((ulonglong)uVar9 + 0x404) * 3 + (ulonglong)bVar19) * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  local_res18[7] = bVar19;
  if (bVar5 < 3) {
    uStack_6c = 0x80008000;
    local_b0 = 1 << (*(byte *)(param_2 + 0x180) & 0x1f);
    local_d0 = 1 << (*(byte *)(param_2 + 0x181) & 0x1f);
    local_50 = (longlong)local_d0;
    local_c8 = 0;
    local_88 = (longlong)local_b0 * 0xc;
    local_80 = local_50 * 0x18;
    local_d0 = local_d0 * 2;
    local_bc = 0;
    do {
      local_68 = 0;
      uVar21 = local_c8;
      local_c0 = local_bc;
      do {
        iVar8 = local_c0;
        iVar16 = 0;
        local_98 = uVar21;
        bVar5 = FUN_1439db040(lVar26,param_2,param_6,uVar4);
        lVar17 = local_d8;
        if ((byte)(bVar5 - 10) < 2) {
          puVar20 = &local_70;
          iVar24 = local_e0 + 1;
          do {
            FUN_1439d9920(lVar17,param_2,local_a8,bVar5,iVar8,iVar16,local_res20,param_5,puVar20);
            iVar16 = iVar16 + 1;
            puVar20 = puVar20 + 1;
            uVar21 = local_98;
            lVar26 = local_d8;
          } while (iVar16 < iVar24);
        }
        bVar27 = true;
        pbVar13 = local_res18 + uVar21 + 0x18;
        if (bVar5 < 10) {
LAB_1439dac4c:
          *(uint *)(param_2 + 0x25c) = *(uint *)(param_2 + 0x25c) | 1;
          break;
        }
        if (bVar5 < 0xc) {
          uVar10 = CONCAT44(uStack_6c,local_70);
LAB_1439dabc6:
          *(undefined8 *)pbVar13 = uVar10;
        }
        else {
          if (bVar5 == 0xc) {
            uVar10 = 0;
            goto LAB_1439dabc6;
          }
          if (bVar5 != 0xd) goto LAB_1439dac4c;
          pbVar22 = pbVar13 + 2;
          local_58 = *(longlong *)(param_2 + 0x188) + 0x3200;
          if (*(longlong *)(param_2 + 0x188) == 0) {
            local_58 = 0;
          }
          local_a0 = (longlong)&local_90 + -(longlong)pbVar13;
          local_60 = (longlong)&local_98 + -(longlong)pbVar13 + 6;
          local_78 = (ulonglong)(local_e0 + 1);
          do {
            lVar26 = *(longlong *)(lVar26 + 0x1168);
            cVar23 = '\0';
            do {
              uVar15 = (uint)*(byte *)(((longlong)cVar23 >> 1) + lVar26 + 0x7b2) *
                       ((int)param_6[1] + -1) + 0x100 >> 8;
              if (*(int *)((longlong)param_6 + 0xc) < 0) {
                FUN_1439d2cb0(param_6);
              }
              lVar17 = local_a0;
              uVar21 = *param_6;
              uVar12 = (ulonglong)uVar15 << 0x38;
              bVar28 = uVar12 <= uVar21;
              if (bVar28) {
                uVar15 = (int)param_6[1] - uVar15;
                uVar21 = uVar21 - uVar12;
              }
              bVar19 = (&DAT_145cb01e0)[uVar15];
              *(int *)((longlong)param_6 + 0xc) = *(int *)((longlong)param_6 + 0xc) - (uint)bVar19;
              *param_6 = uVar21 << (bVar19 & 0x3f);
              *(uint *)(param_6 + 1) = uVar15 << (bVar19 & 0x1f);
              cVar23 = (&DAT_145caeb20)[(int)((int)cVar23 + (uint)bVar28)];
            } while ('\0' < cVar23);
            if (((local_b8 == 0) ||
                (uVar15 = (int)*(short *)(pbVar22 + local_60) >> 0x1f,
                0x3f < (int)(((int)*(short *)(pbVar22 + local_60) ^ uVar15) - uVar15))) ||
               (uVar15 = (int)*(short *)(pbVar22 + local_a0) >> 0x1f, uVar10 = 1,
               0x3f < (int)(((int)*(short *)(pbVar22 + local_a0) ^ uVar15) - uVar15))) {
              uVar10 = 0;
            }
            local_e4 = 0;
            if (-(int)cVar23 - 2U < 2) {
              uVar7 = FUN_1439dbb60(param_6,lVar26 + 0x7b5,uVar10);
              local_e4 = CONCAT22(local_e4._2_2_,uVar7);
            }
            if ((-(int)cVar23 - 1U & 0xfffffffd) == 0) {
              uVar7 = FUN_1439dbb60(param_6,lVar26 + 0x7d6,uVar10);
              local_e4 = CONCAT22(uVar7,(short)local_e4);
            }
            FUN_1439d3800(&local_e4,local_58);
            sVar6 = *(short *)(pbVar22 + lVar17 + -2);
            sVar3 = *(short *)(pbVar22 + lVar17);
            *(short *)(pbVar22 + -2) = sVar6 + (short)local_e4;
            *(short *)pbVar22 = sVar3 + local_e4._2_2_;
            if (((bVar27) && ((ushort)(sVar6 + (short)local_e4 + 0x3fffU) < 0x7ffe)) &&
               ((ushort)(sVar3 + local_e4._2_2_ + 0x3fffU) < 0x7ffe)) {
              bVar27 = true;
            }
            else {
              bVar27 = false;
            }
            pbVar22 = pbVar22 + 4;
            local_78 = local_78 - 1;
            lVar26 = local_d8;
          } while (local_78 != 0);
          local_78 = 0;
          uVar21 = local_98;
        }
        if (!bVar27) goto LAB_1439dac4c;
        if (local_50 == 2) {
          *(undefined8 *)(local_res18 + uVar21 + 0x2c) =
               *(undefined8 *)(local_res18 + uVar21 + 0x14);
          *(undefined4 *)(local_res18 + uVar21 + 0x34) =
               *(undefined4 *)(local_res18 + uVar21 + 0x1c);
        }
        if ((longlong)local_b0 == 2) {
          *(undefined8 *)(local_res18 + uVar21 + 0x20) =
               *(undefined8 *)(local_res18 + uVar21 + 0x14);
          *(undefined4 *)(local_res18 + uVar21 + 0x28) =
               *(undefined4 *)(local_res18 + uVar21 + 0x1c);
        }
        local_c0 = local_c0 + local_b0;
        uVar21 = uVar21 + local_88;
        local_68 = local_68 + local_b0;
        lVar26 = local_d8;
      } while (local_68 < 2);
      local_bc = local_bc + local_d0;
      local_c8 = local_c8 + local_80;
      lVar26 = local_d8;
    } while (local_bc < 4);
    local_res18[1] = bVar5;
    *(undefined8 *)(local_res18 + 0xc) = *(undefined8 *)(local_res18 + 0x3c);
  }
  else {
    bVar5 = local_res18[1];
    pbVar13 = local_res18 + 0xc;
    uVar14 = 1;
    uVar15 = 0;
    if (9 < bVar5) {
      if (bVar5 < 0xc) {
        *(undefined8 *)pbVar13 = local_90;
        uVar15 = uVar14;
      }
      else if (bVar5 == 0xc) {
        pbVar13[0] = 0;
        pbVar13[1] = 0;
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        pbVar13[4] = 0;
        pbVar13[5] = 0;
        pbVar13[6] = 0;
        pbVar13[7] = 0;
        uVar15 = uVar14;
      }
      else if (bVar5 == 0xd) {
        pbVar22 = local_res18 + 0xe;
        local_88 = *(longlong *)(param_2 + 0x188) + 0x3200;
        if (*(longlong *)(param_2 + 0x188) == 0) {
          local_88 = 0;
        }
        lVar26 = -(longlong)pbVar13;
        local_80 = (longlong)&local_98 + lVar26 + 6;
        local_c8 = (ulonglong)(local_e0 + 1);
        do {
          cVar23 = '\0';
          lVar17 = *(longlong *)(local_d8 + 0x1168);
          do {
            uVar15 = (uint)*(byte *)(((longlong)cVar23 >> 1) + 0x7b2 + lVar17) *
                     ((int)param_6[1] + -1) + 0x100 >> 8;
            if (*(int *)((longlong)param_6 + 0xc) < 0) {
              FUN_1439d2cb0(param_6);
            }
            uVar21 = *param_6;
            uVar12 = (ulonglong)uVar15 << 0x38;
            bVar27 = uVar12 <= uVar21;
            if (bVar27) {
              uVar15 = (int)param_6[1] - uVar15;
              uVar21 = uVar21 - uVar12;
            }
            bVar5 = (&DAT_145cb01e0)[uVar15];
            *(int *)((longlong)param_6 + 0xc) = *(int *)((longlong)param_6 + 0xc) - (uint)bVar5;
            *param_6 = uVar21 << (bVar5 & 0x3f);
            *(uint *)(param_6 + 1) = uVar15 << (bVar5 & 0x1f);
            cVar23 = (&DAT_145caeb20)[(int)((int)cVar23 + (uint)bVar27)];
          } while ('\0' < cVar23);
          if (((local_b8 == 0) ||
              (uVar15 = (int)*(short *)(pbVar22 + local_80) >> 0x1f,
              0x3f < (int)(((int)*(short *)(pbVar22 + local_80) ^ uVar15) - uVar15))) ||
             (uVar15 = (int)*(short *)(pbVar22 + (longlong)&local_90 + lVar26) >> 0x1f, uVar10 = 1,
             0x3f < (int)(((int)*(short *)(pbVar22 + (longlong)&local_90 + lVar26) ^ uVar15) -
                         uVar15))) {
            uVar10 = 0;
          }
          local_res18 = (byte *)((ulonglong)local_res18 & 0xffffffff00000000);
          if (-(int)cVar23 - 2U < 2) {
            uVar7 = FUN_1439dbb60(param_6,lVar17 + 0x7b5,uVar10);
            local_res18 = (byte *)CONCAT62(local_res18._2_6_,uVar7);
          }
          if ((-(int)cVar23 - 1U & 0xfffffffd) == 0) {
            uVar7 = FUN_1439dbb60(param_6,lVar17 + 0x7d6,uVar10);
            local_res18._0_4_ = CONCAT22(uVar7,(short)local_res18);
          }
          FUN_1439d3800(&local_res18,local_88);
          sVar6 = *(short *)(pbVar22 + (longlong)&local_98 + lVar26 + 6);
          sVar3 = *(short *)(pbVar22 + (longlong)&local_90 + lVar26);
          *(short *)(pbVar22 + -2) = sVar6 + (short)local_res18;
          *(short *)pbVar22 = sVar3 + local_res18._2_2_;
          if (((uVar14 == 0) || (0x7ffd < (ushort)(sVar6 + (short)local_res18 + 0x3fffU))) ||
             (0x7ffd < (ushort)(sVar3 + local_res18._2_2_ + 0x3fffU))) {
            uVar14 = 0;
          }
          else {
            uVar14 = 1;
          }
          pbVar22 = pbVar22 + 4;
          local_c8 = local_c8 - 1;
          uVar15 = uVar14;
        } while (local_c8 != 0);
      }
    }
    *(uint *)(param_2 + 0x25c) = *(uint *)(param_2 + 0x25c) | uVar15 ^ 1;
  }
  return;
}



// FUNCTION 1439daee0 FUN_1439daee0 body=341 status=ok
// SIG undefined FUN_1439daee0(void)

void FUN_1439daee0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,uint param_6,undefined4 param_7)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  
  lVar1 = param_1 + 0x270;
  lVar3 = **(longlong **)(param_2 + 0x1a8);
  uVar11 = (ulonglong)param_6;
  uVar9 = param_5;
  cVar5 = FUN_1439db150(lVar1);
  *(char *)(lVar3 + 4) = cVar5;
  uVar6 = FUN_1439dc580(lVar1,param_2,(int)cVar5,param_5,uVar9,uVar11,param_7);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined1 *)(lVar3 + 3) = uVar6;
  iVar8 = FUN_1439dba00(lVar1,param_2,(int)*(char *)(lVar3 + 4),param_5);
  if ((*(char *)(lVar3 + 3) == '\0') || (iVar8 == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar2 = (&DAT_145cb09d0)[*(byte *)**(undefined8 **)(param_2 + 0x1a8)];
  if (((bVar4) && (*(int *)(param_1 + 0x5dc) == 4)) &&
     (2 < *(byte *)**(undefined8 **)(param_2 + 0x1a8))) {
    bVar7 = FUN_1439dc2a0(lVar1,param_2,bVar2,param_5);
  }
  else {
    bVar7 = (&DAT_145cb09e0)[*(int *)(param_1 + 0x5dc)];
    if (bVar2 < (byte)(&DAT_145cb09e0)[*(int *)(param_1 + 0x5dc)]) {
      bVar7 = bVar2;
    }
  }
  *(byte *)(lVar3 + 2) = bVar7;
  if (iVar8 == 0) {
    FUN_1439db380(lVar1,param_2,lVar3,param_5);
  }
  else {
    FUN_1439da4d0(param_1,param_2,lVar3,param_3,CONCAT44(uVar10,param_4),param_5);
  }
  return;
}



// FUNCTION 1439db040 FUN_1439db040 body=263 status=ok
// SIG undefined FUN_1439db040(void)

int FUN_1439db040(longlong param_1,longlong param_2,ulonglong *param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x1168);
  cVar6 = '\0';
  do {
    uVar5 = (uint)*(byte *)(((longlong)cVar6 >> 1) + 0x776 + (longlong)param_4 * 3 + lVar3) *
            ((int)param_3[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1439d2cb0(param_3);
    }
    uVar7 = *param_3;
    uVar4 = (ulonglong)uVar5 << 0x38;
    bVar8 = uVar4 <= uVar7;
    if (bVar8) {
      uVar5 = (int)param_3[1] - uVar5;
      uVar7 = uVar7 - uVar4;
    }
    bVar2 = (&DAT_145cb01e0)[uVar5];
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (uint)bVar2;
    *param_3 = uVar7 << (bVar2 & 0x3f);
    *(uint *)(param_3 + 1) = uVar5 << (bVar2 & 0x1f);
    cVar6 = (&DAT_145caf538)[(int)((int)cVar6 + (uint)bVar8)];
  } while ('\0' < cVar6);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + 0x3060 +
                    ((longlong)-(int)cVar6 + (longlong)param_4 * 4) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return -(int)cVar6 + 10;
}



// FUNCTION 1439db150 FUN_1439db150 body=549 status=ok
// SIG undefined FUN_1439db150(void)

uint FUN_1439db150(longlong param_1,longlong param_2,int param_3,int param_4,ulonglong *param_5,
                  uint param_6,int param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  lVar2 = **(longlong **)(param_2 + 0x1a8);
  param_4 = *(int *)(param_1 + 0x364) * param_3 + param_4;
  if (*(char *)(param_1 + 0x10e8) == '\0') {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x440);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar10 = 0;
    uVar5 = 0x7fffffff;
    if (0 < param_7) {
      do {
        if (0 < (int)param_6) {
          pbVar7 = (byte *)((*(int *)(param_1 + 0x364) * iVar10 + param_4) + lVar3);
          uVar9 = (ulonglong)param_6;
          do {
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            if (bVar1 <= uVar5) {
              uVar5 = (uint)bVar1;
            }
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_7);
    }
  }
  if (*(char *)(param_1 + 0x10e9) == '\0') {
    FUN_1439d9a90(param_1,lVar3,*(undefined8 *)(param_1 + 0x448),param_4,param_6,param_7);
    return uVar5;
  }
  if (*(char *)(param_1 + 0x10ec) != '\0') {
    if (*(longlong *)(param_2 + 0x1b8) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (int)*(char *)(*(longlong *)(param_2 + 0x1b8) + 5);
    }
    if (*(longlong *)(param_2 + 0x1b0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)*(char *)(*(longlong *)(param_2 + 0x1b0) + 5);
    }
    uVar11 = (uint)(byte)((char *)(param_1 + 0x10e8))[(longlong)(iVar4 + iVar10) + 0xc] *
             ((int)param_5[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_5 + 0xc) < 0) {
      FUN_1439d2cb0(param_5);
    }
    uVar9 = *param_5;
    uVar8 = (ulonglong)uVar11;
    bVar12 = uVar8 << 0x38 <= uVar9;
    if (bVar12) {
      uVar11 = (int)param_5[1] - uVar11;
      uVar9 = uVar9 - (uVar8 << 0x38);
    }
    bVar1 = (&DAT_145cb01e0)[uVar11];
    *(int *)((longlong)param_5 + 0xc) = *(int *)((longlong)param_5 + 0xc) - (uint)bVar1;
    *(uint *)(param_5 + 1) = uVar11 << (bVar1 & 0x1f);
    *param_5 = uVar9 << (bVar1 & 0x3f);
    *(bool *)(lVar2 + 5) = bVar12;
    if (bVar12) goto LAB_1439db320;
  }
  uVar5 = FUN_1439dc1d0(param_5,param_1 + 0x10e8);
LAB_1439db320:
  iVar10 = 0;
  if (0 < param_7) {
    do {
      iVar4 = 0;
      if (0 < (int)param_6) {
        do {
          iVar6 = *(int *)(param_1 + 0x364) * iVar10 + iVar4;
          iVar4 = iVar4 + 1;
          *(char *)((longlong)(iVar6 + param_4) + *(longlong *)(param_1 + 0x448)) = (char)uVar5;
        } while (iVar4 < (int)param_6);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_7);
  }
  return uVar5;
}



// FUNCTION 1439db380 FUN_1439db380 body=466 status=ok
// SIG undefined FUN_1439db380(void)

void FUN_1439db380(longlong param_1,longlong param_2,byte *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  
  bVar2 = *param_3;
  if (bVar2 == 0) {
    pbVar5 = param_3 + 0x14;
    lVar4 = 4;
    do {
      bVar2 = FUN_1439db860(param_4,*(undefined8 *)(param_1 + 0x1168));
      if (*(longlong *)(param_2 + 0x188) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + (ulonglong)bVar2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      *pbVar5 = bVar2;
      pbVar5 = pbVar5 + 0xc;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    bVar2 = param_3[0x38];
  }
  else {
    if (bVar2 == 1) {
      bVar2 = FUN_1439db860(param_4,*(undefined8 *)(param_1 + 0x1168));
      if (*(longlong *)(param_2 + 0x188) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + (ulonglong)bVar2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      param_3[0x2c] = bVar2;
      param_3[0x14] = bVar2;
      bVar2 = FUN_1439db860(param_4,*(undefined8 *)(param_1 + 0x1168));
      if (*(longlong *)(param_2 + 0x188) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + (ulonglong)bVar2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      param_3[1] = bVar2;
      param_3[0x38] = bVar2;
      param_3[0x20] = bVar2;
      goto LAB_1439db4f9;
    }
    if (bVar2 == 2) {
      bVar2 = FUN_1439db860(param_4,*(undefined8 *)(param_1 + 0x1168));
      if (*(longlong *)(param_2 + 0x188) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + (ulonglong)bVar2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      param_3[0x20] = bVar2;
      param_3[0x14] = bVar2;
      bVar2 = FUN_1439db860(param_4,*(undefined8 *)(param_1 + 0x1168));
      if (*(longlong *)(param_2 + 0x188) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + (ulonglong)bVar2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      param_3[1] = bVar2;
      param_3[0x38] = bVar2;
      param_3[0x2c] = bVar2;
      goto LAB_1439db4f9;
    }
    bVar3 = (&DAT_145cb0870)[bVar2];
    bVar2 = FUN_1439db860(param_4,(ulonglong)bVar3 * 9 + *(longlong *)(param_1 + 0x1168));
    if (*(longlong *)(param_2 + 0x188) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x188) +
                      ((ulonglong)bVar2 + (ulonglong)bVar3 * 10) * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  param_3[1] = bVar2;
LAB_1439db4f9:
  bVar2 = param_3[1];
  bVar3 = FUN_1439db860(param_4,((ulonglong)bVar2 + 4) * 9 + *(longlong *)(param_1 + 0x1168));
  if (*(longlong *)(param_2 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x188) +
                    ((ulonglong)bVar3 + ((ulonglong)bVar2 + 4) * 10) * 4);
    *piVar1 = *piVar1 + 1;
  }
  param_3[6] = bVar3;
  param_3[7] = 3;
  param_3[8] = 0;
  param_3[9] = 0xff;
  return;
}



// FUNCTION 1439db560 FUN_1439db560 body=759 status=ok
// SIG undefined FUN_1439db560(void)

void FUN_1439db560(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  pcVar3 = (char *)**(undefined8 **)(param_2 + 0x1a8);
  cVar7 = *pcVar3;
  cVar4 = FUN_1439db930(param_1,*(int *)(param_1 + 0x364) * param_3 + param_4,param_6,param_7,
                        param_5);
  pcVar3[4] = cVar4;
  cVar4 = FUN_1439dc580(param_1,param_2,(int)cVar4,param_5);
  pcVar3[3] = cVar4;
  bVar6 = (&DAT_145cb09d0)[*(byte *)**(undefined8 **)(param_2 + 0x1a8)];
  if ((*(int *)(param_1 + 0x36c) == 4) && (2 < *(byte *)**(undefined8 **)(param_2 + 0x1a8))) {
    bVar5 = FUN_1439dc2a0(param_1,param_2,bVar6,param_5);
  }
  else {
    bVar5 = (&DAT_145cb09e0)[*(int *)(param_1 + 0x36c)];
    if (bVar6 < (byte)(&DAT_145cb09e0)[*(int *)(param_1 + 0x36c)]) {
      bVar5 = bVar6;
    }
  }
  pcVar3[2] = bVar5;
  pcVar3[8] = '\0';
  pcVar3[9] = -1;
  if (cVar7 == '\0') {
    iVar8 = 0;
    pcVar9 = pcVar3 + 0x14;
    do {
      bVar6 = FUN_1439d4cf0(pcVar3,uVar1,iVar8);
      bVar5 = FUN_1439d4d40(pcVar3,uVar2,iVar8);
      cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9)
      ;
      iVar8 = iVar8 + 1;
      *pcVar9 = cVar7;
      pcVar9 = pcVar9 + 0xc;
    } while (iVar8 < 4);
    cVar7 = pcVar3[0x38];
  }
  else {
    if (cVar7 == '\x01') {
      bVar6 = FUN_1439d4cf0(pcVar3,uVar1,0);
      bVar5 = FUN_1439d4d40(pcVar3,uVar2,0);
      cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9)
      ;
      pcVar3[0x2c] = cVar7;
      pcVar3[0x14] = cVar7;
      bVar6 = FUN_1439d4cf0(pcVar3,uVar1,1);
      bVar5 = FUN_1439d4d40(pcVar3,uVar2,1);
      cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9)
      ;
      pcVar3[1] = cVar7;
      pcVar3[0x38] = cVar7;
      pcVar3[0x20] = cVar7;
      goto LAB_1439db81e;
    }
    if (cVar7 == '\x02') {
      bVar6 = FUN_1439d4cf0(pcVar3,uVar1,0);
      bVar5 = FUN_1439d4d40(pcVar3,uVar2,0);
      cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9)
      ;
      pcVar3[0x20] = cVar7;
      pcVar3[0x14] = cVar7;
      bVar6 = FUN_1439d4cf0(pcVar3,uVar1,2);
      bVar5 = FUN_1439d4d40(pcVar3,uVar2,2);
      cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9)
      ;
      pcVar3[1] = cVar7;
      pcVar3[0x38] = cVar7;
      pcVar3[0x2c] = cVar7;
      goto LAB_1439db81e;
    }
    bVar6 = FUN_1439d4cf0(pcVar3,uVar1);
    bVar5 = FUN_1439d4d40(pcVar3,uVar2,0);
    cVar7 = FUN_1439db860(param_5,&DAT_145caf180 + ((ulonglong)bVar5 + (ulonglong)bVar6 * 10) * 9);
  }
  pcVar3[1] = cVar7;
LAB_1439db81e:
  cVar7 = FUN_1439db860(param_5,&DAT_145caf120 + (ulonglong)(byte)pcVar3[1] * 9);
  pcVar3[6] = cVar7;
  return;
}



// FUNCTION 1439db860 FUN_1439db860 body=206 status=ok
// SIG undefined FUN_1439db860(void)

char FUN_1439db860(ulonglong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = (uint)*(byte *)(((longlong)cVar4 >> 1) + param_2) * ((int)param_1[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar5 = *param_1;
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = (int)param_1[1] - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb01e0)[uVar3];
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *param_1 = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 1) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145caf108)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -cVar4;
}



// FUNCTION 1439db930 FUN_1439db930 body=194 status=ok
// SIG undefined FUN_1439db930(void)

undefined4 FUN_1439db930(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10e8) != '\0') {
    if (*(char *)(param_1 + 0x10e9) != '\0') {
      uVar1 = FUN_1439dc1d0();
      iVar4 = 0;
      if (param_4 < 1) {
        return uVar1;
      }
      do {
        iVar3 = 0;
        if (0 < param_3) {
          do {
            iVar2 = iVar4 * *(int *)(param_1 + 0x364) + iVar3;
            iVar3 = iVar3 + 1;
            *(char *)((longlong)(iVar2 + param_2) + *(longlong *)(param_1 + 0x448)) = (char)uVar1;
          } while (iVar3 < param_3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_4);
      return uVar1;
    }
    FUN_1439d9a90(param_1,*(undefined8 *)(param_1 + 0x440),*(undefined8 *)(param_1 + 0x448),param_2,
                  param_3,param_4);
  }
  return 0;
}



// FUNCTION 1439dba00 FUN_1439dba00 body=338 status=ok
// SIG undefined FUN_1439dba00(void)

uint FUN_1439dba00(longlong param_1,longlong param_2,int param_3,ulonglong *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if ((*(char *)(param_1 + 0x10e8) != '\0') &&
     ((*(byte *)(param_1 + 0x1138 + (longlong)param_3 * 4) & 4) != 0)) {
    return (uint)(*(short *)(param_1 + 0x10fc + (longlong)param_3 * 8) != 0);
  }
  lVar3 = *(longlong *)(param_2 + 0x1b8);
  lVar5 = *(longlong *)(param_2 + 0x1b0);
  if (lVar3 == 0) {
    if (lVar5 == 0) {
      uVar4 = 0;
      goto LAB_1439dbaaf;
    }
  }
  else if (lVar5 != 0) {
    if (*(char *)(lVar5 + 8) < '\x01') {
      if (*(char *)(lVar3 + 8) < '\x01') {
        uVar4 = 3;
        goto LAB_1439dbaaf;
      }
    }
    else if ('\0' < *(char *)(lVar3 + 8)) {
      uVar4 = 0;
      goto LAB_1439dbaaf;
    }
    uVar4 = 1;
    goto LAB_1439dbaaf;
  }
  if (lVar3 != 0) {
    lVar5 = lVar3;
  }
  uVar4 = 0;
  if (*(char *)(lVar5 + 8) < '\x01') {
    uVar4 = 2;
  }
LAB_1439dbaaf:
  uVar8 = (uint)*(byte *)(*(longlong *)(param_1 + 0x1168) + 0x78b + (ulonglong)uVar4) *
          ((int)param_4[1] + -1) + 0x100 >> 8;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1439d2cb0(param_4);
  }
  uVar9 = *param_4;
  uVar6 = (ulonglong)uVar8 << 0x38;
  bVar10 = uVar6 <= uVar9;
  if (bVar10) {
    uVar8 = (int)param_4[1] - uVar8;
    uVar9 = uVar9 - uVar6;
  }
  uVar7 = (uint)bVar10;
  bVar2 = (&DAT_145cb01e0)[uVar8];
  *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (uint)bVar2;
  *(uint *)(param_4 + 1) = uVar8 << (bVar2 & 0x1f);
  *param_4 = uVar9 << (bVar2 & 0x3f);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + 0x30d0 +
                    ((ulonglong)uVar7 + (ulonglong)uVar4 * 2) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return uVar7;
}



// FUNCTION 1439dbb60 FUN_1439dbb60 body=960 status=ok
// SIG undefined FUN_1439dbb60(void)

int FUN_1439dbb60(ulonglong *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  uint local_res8;
  
  uVar10 = 0;
  uVar6 = ((int)param_1[1] + -1) * (uint)*param_2 + 0x100 >> 8;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1439d2cb0();
  }
  uVar9 = *param_1;
  uVar5 = (ulonglong)uVar6 << 0x38;
  bVar15 = uVar5 <= uVar9;
  if (bVar15) {
    uVar6 = (int)param_1[1] - uVar6;
    uVar9 = uVar9 - uVar5;
  }
  bVar1 = (&DAT_145cb01e0)[uVar6];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
  *(uint *)(param_1 + 1) = uVar6 << (bVar1 & 0x1f);
  cVar14 = '\0';
  *param_1 = uVar9 << (bVar1 & 0x3f);
  do {
    uVar6 = (uint)param_2[((longlong)cVar14 >> 1) + 1] * ((int)param_1[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar9 = *param_1;
    uVar5 = (ulonglong)uVar6 << 0x38;
    bVar16 = uVar5 <= uVar9;
    if (bVar16) {
      uVar6 = (int)param_1[1] - uVar6;
      uVar9 = uVar9 - uVar5;
    }
    bVar1 = (&DAT_145cb01e0)[uVar6];
    *param_1 = uVar9 << (bVar1 & 0x3f);
    iVar7 = uVar6 << (bVar1 & 0x1f);
    iVar12 = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar12;
    *(int *)(param_1 + 1) = iVar7;
    cVar14 = (&DAT_145caeb28)[(int)((int)cVar14 + (uint)bVar16)];
  } while ('\0' < cVar14);
  iVar2 = -(int)cVar14;
  local_res8 = 0;
  iVar4 = 0;
  if (iVar2 == 0) {
    uVar6 = (uint)param_2[0xb] * (iVar7 + -1) + 0x100 >> 8;
    if (iVar12 < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar10 = *param_1;
    uVar9 = (ulonglong)uVar6;
    bVar16 = uVar9 << 0x38 <= uVar10;
    if (bVar16) {
      uVar6 = (int)param_1[1] - uVar6;
      uVar10 = uVar10 - (uVar9 << 0x38);
    }
    local_res8 = (uint)bVar16;
    bVar1 = (&DAT_145cb01e0)[uVar6];
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *param_1 = uVar10 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 1) = uVar6 << (bVar1 & 0x1f);
    pbVar13 = param_2 + (longlong)(int)(uint)bVar16 * 3 + 0x16;
  }
  else {
    uVar9 = uVar10;
    uVar5 = uVar10;
    if (0 < iVar2) {
      do {
        uVar8 = (uint)param_2[uVar5 + 0xc] * ((int)param_1[1] + -1) + 0x100 >> 8;
        uVar6 = (uint)uVar10;
        if (*(int *)((longlong)param_1 + 0xc) < 0) {
          FUN_1439d2cb0(param_1);
          uVar6 = local_res8;
        }
        uVar11 = *param_1;
        uVar10 = (ulonglong)uVar8 << 0x38;
        bVar16 = uVar10 <= uVar11;
        if (bVar16) {
          uVar8 = (int)param_1[1] - uVar8;
          uVar11 = uVar11 - uVar10;
        }
        uVar5 = uVar5 + 1;
        bVar1 = (&DAT_145cb01e0)[uVar8];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
        bVar3 = (byte)uVar9;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        local_res8 = uVar6 | (uint)bVar16 << (bVar3 & 0x1f);
        uVar10 = (ulonglong)local_res8;
        *param_1 = uVar11 << (bVar1 & 0x3f);
        *(uint *)(param_1 + 1) = uVar8 << (bVar1 & 0x1f);
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    iVar4 = 2 << ((char)iVar2 + 2U & 0x1f);
    pbVar13 = param_2 + 0x1c;
  }
  cVar14 = '\0';
  do {
    uVar6 = (uint)pbVar13[(longlong)cVar14 >> 1] * ((int)param_1[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar10 = *param_1;
    uVar9 = (ulonglong)uVar6 << 0x38;
    bVar16 = uVar9 <= uVar10;
    if (bVar16) {
      uVar6 = (int)param_1[1] - uVar6;
      uVar10 = uVar10 - uVar9;
    }
    bVar1 = (&DAT_145cb01e0)[uVar6];
    *param_1 = uVar10 << (bVar1 & 0x3f);
    iVar7 = uVar6 << (bVar1 & 0x1f);
    iVar12 = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar12;
    *(int *)(param_1 + 1) = iVar7;
    cVar14 = (&DAT_145caeb40)[(int)((int)cVar14 + (uint)bVar16)];
  } while ('\0' < cVar14);
  if (param_3 == 0) {
    uVar6 = 1;
  }
  else {
    if (iVar2 == 0) {
      bVar1 = param_2[0x1f];
    }
    else {
      bVar1 = param_2[0x20];
    }
    uVar8 = (iVar7 + -1) * (uint)bVar1 + 0x100 >> 8;
    if (iVar12 < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar10 = *param_1;
    uVar9 = (ulonglong)uVar8 << 0x38;
    bVar16 = uVar9 <= uVar10;
    if (bVar16) {
      uVar8 = (int)param_1[1] - uVar8;
      uVar10 = uVar10 - uVar9;
    }
    uVar6 = (uint)bVar16;
    bVar1 = (&DAT_145cb01e0)[uVar8];
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *(uint *)(param_1 + 1) = uVar8 << (bVar1 & 0x1f);
    *param_1 = uVar10 << (bVar1 & 0x3f);
  }
  iVar4 = ((local_res8 * 4 | -(int)cVar14) * 2 | uVar6) + 1 + iVar4;
  iVar7 = -iVar4;
  if (!bVar15) {
    iVar7 = iVar4;
  }
  return iVar7;
}



// FUNCTION 1439dbf20 FUN_1439dbf20 body=675 status=ok
// SIG undefined FUN_1439dbf20(void)

void FUN_1439dbf20(longlong param_1,longlong param_2,ulonglong *param_3,int param_4,char *param_5)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x1168);
  lVar4 = *(longlong *)(param_2 + 0x188);
  if ((*(char *)(param_1 + 0x10e8) != '\0') &&
     ((*(byte *)(param_1 + 0x1138 + (longlong)param_4 * 4) & 4) != 0)) {
    *param_5 = *(char *)(param_1 + 0x10fc + (longlong)param_4 * 8);
    param_5[1] = -1;
    return;
  }
  iVar5 = FUN_1439da3f0();
  if (iVar5 == 1) {
    iVar5 = *(int *)(param_1 + 0x10a4 + (longlong)*(char *)(param_1 + 0x1160) * 4);
    iVar6 = FUN_1439e18c0(param_1,param_2);
    uVar8 = (uint)*(byte *)((longlong)iVar6 + 0x79e + lVar3) * ((int)param_3[1] + -1) + 0x100 >> 8;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1439d2cb0(param_3);
    }
    uVar10 = *param_3;
    uVar7 = (ulonglong)uVar8 << 0x38;
    bVar11 = uVar7 <= uVar10;
    if (bVar11) {
      uVar8 = (int)param_3[1] - uVar8;
      uVar10 = uVar10 - uVar7;
    }
    uVar7 = (ulonglong)bVar11;
    bVar2 = (&DAT_145cb01e0)[uVar8];
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (uint)bVar2;
    *param_3 = uVar10 << (bVar2 & 0x3f);
    *(uint *)(param_3 + 1) = uVar8 << (bVar2 & 0x1f);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 0x3168 + (uVar7 + (longlong)iVar6 * 2) * 4);
      *piVar1 = *piVar1 + 1;
    }
    param_5[iVar5] = *(char *)(param_1 + 0x1160);
    param_5[iVar5 == 0] = *(char *)(uVar7 + 0x1161 + param_1);
  }
  else if (iVar5 == 0) {
    iVar5 = FUN_1439e1b10(param_2);
    uVar8 = (uint)*(byte *)(lVar3 + 0x794 + (longlong)iVar5 * 2) * ((int)param_3[1] + -1) + 0x100 >>
            8;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1439d2cb0(param_3);
    }
    uVar10 = *param_3;
    uVar7 = (ulonglong)uVar8 << 0x38;
    bVar11 = uVar7 <= uVar10;
    if (bVar11) {
      uVar8 = (int)param_3[1] - uVar8;
      uVar10 = uVar10 - uVar7;
    }
    uVar9 = (uint)bVar11;
    bVar2 = (&DAT_145cb01e0)[uVar8];
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (uint)bVar2;
    *param_3 = uVar10 << (bVar2 & 0x3f);
    *(uint *)(param_3 + 1) = uVar8 << (bVar2 & 0x1f);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 0x3118 + ((ulonglong)uVar9 + (longlong)iVar5 * 4) * 4);
      *piVar1 = *piVar1 + 1;
    }
    if (uVar9 == 0) {
      *param_5 = '\x01';
    }
    else {
      iVar5 = FUN_1439e1c80(param_2);
      uVar8 = (uint)*(byte *)(lVar3 + 0x795 + (longlong)iVar5 * 2) * ((int)param_3[1] + -1) + 0x100
              >> 8;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1439d2cb0(param_3);
      }
      uVar10 = *param_3;
      uVar7 = (ulonglong)uVar8 << 0x38;
      bVar11 = uVar7 <= uVar10;
      if (bVar11) {
        uVar8 = (int)param_3[1] - uVar8;
        uVar10 = uVar10 - uVar7;
      }
      uVar9 = (uint)bVar11;
      bVar2 = (&DAT_145cb01e0)[uVar8];
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (uint)bVar2;
      *param_3 = uVar10 << (bVar2 & 0x3f);
      *(uint *)(param_3 + 1) = uVar8 << (bVar2 & 0x1f);
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x3120 + ((ulonglong)uVar9 + (longlong)iVar5 * 4) * 4);
        *piVar1 = *piVar1 + 1;
      }
      *param_5 = (uVar9 != 0) + '\x02';
    }
    param_5[1] = -1;
  }
  return;
}



// FUNCTION 1439dc1d0 FUN_1439dc1d0 body=206 status=ok
// SIG undefined FUN_1439dc1d0(void)

int FUN_1439dc1d0(ulonglong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = (uint)*(byte *)(((longlong)cVar4 >> 1) + 5 + param_2) * ((int)param_1[1] + -1) + 0x100
            >> 8;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar5 = *param_1;
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = (int)param_1[1] - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb01e0)[uVar3];
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *param_1 = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 1) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145caf640)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -(int)cVar4;
}



// FUNCTION 1439dc2a0 FUN_1439dc2a0 body=723 status=ok
// SIG undefined FUN_1439dc2a0(void)

uint FUN_1439dc2a0(longlong param_1,longlong param_2,byte param_3,ulonglong *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  bool bVar15;
  
  lVar2 = *(longlong *)(param_2 + 0x188);
  lVar6 = *(longlong *)(param_2 + 0x1b8);
  uVar14 = (uint)(byte)(&DAT_145cb09d0)[*(byte *)**(undefined8 **)(param_2 + 0x1a8)];
  lVar3 = *(longlong *)(param_2 + 0x1b0);
  uVar8 = uVar14;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 3) == '\0')) {
    uVar8 = (uint)*(byte *)(lVar6 + 2);
  }
  uVar4 = uVar14;
  if ((lVar3 != 0) && (*(char *)(lVar3 + 3) == '\0')) {
    uVar4 = (uint)*(byte *)(lVar3 + 2);
  }
  if (lVar3 == 0) {
    uVar4 = uVar8;
  }
  if (lVar6 == 0) {
    uVar8 = uVar4;
  }
  pbVar13 = (byte *)0x0;
  uVar12 = (ulonglong)(uVar14 < uVar4 + uVar8);
  lVar6 = *(longlong *)(param_1 + 0x1168) + 0x7a3;
  if (param_3 == 1) {
    uVar10 = *(longlong *)(param_1 + 0x1168) + 0x7ad;
    uVar5 = uVar12;
  }
  else {
    if (param_3 == 2) {
      pbVar7 = (byte *)(lVar6 + (uVar12 + 3) * 2);
      goto LAB_1439dc389;
    }
    pbVar7 = pbVar13;
    if (param_3 != 3) goto LAB_1439dc389;
    uVar5 = lVar6 + uVar12 * 2;
    uVar10 = uVar12;
  }
  pbVar7 = (byte *)(uVar10 + uVar5);
LAB_1439dc389:
  uVar8 = ((int)param_4[1] + -1) * (uint)*pbVar7 + 0x100 >> 8;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1439d2cb0(param_4);
  }
  uVar10 = *param_4;
  uVar5 = (ulonglong)uVar8 << 0x38;
  bVar15 = uVar5 <= uVar10;
  if (bVar15) {
    uVar8 = (int)param_4[1] - uVar8;
    uVar10 = uVar10 - uVar5;
  }
  bVar1 = (&DAT_145cb01e0)[uVar8];
  iVar11 = *(int *)((longlong)param_4 + 0xc) - (uint)bVar1;
  iVar9 = uVar8 << (bVar1 & 0x1f);
  *param_4 = uVar10 << (bVar1 & 0x3f);
  *(int *)((longlong)param_4 + 0xc) = iVar11;
  *(int *)(param_4 + 1) = iVar9;
  uVar8 = (uint)bVar15;
  if ((uVar8 != 0) && (1 < param_3)) {
    uVar14 = (uint)pbVar7[1] * (iVar9 + -1) + 0x100 >> 8;
    if (iVar11 < 0) {
      FUN_1439d2cb0(param_4);
    }
    uVar10 = *param_4;
    uVar5 = (ulonglong)uVar14 << 0x38;
    bVar15 = uVar5 <= uVar10;
    if (bVar15) {
      uVar14 = (int)param_4[1] - uVar14;
      uVar10 = uVar10 - uVar5;
    }
    uVar8 = uVar8 + bVar15;
    bVar1 = (&DAT_145cb01e0)[uVar14];
    iVar9 = *(int *)((longlong)param_4 + 0xc) - (uint)bVar1;
    iVar11 = uVar14 << (bVar1 & 0x1f);
    *param_4 = uVar10 << (bVar1 & 0x3f);
    *(int *)((longlong)param_4 + 0xc) = iVar9;
    *(int *)(param_4 + 1) = iVar11;
    if ((uVar8 != 1) && (2 < param_3)) {
      uVar14 = (uint)pbVar7[2] * (iVar11 + -1) + 0x100 >> 8;
      if (iVar9 < 0) {
        FUN_1439d2cb0(param_4);
      }
      uVar10 = *param_4;
      uVar5 = (ulonglong)uVar14 << 0x38;
      bVar15 = uVar5 <= uVar10;
      if (bVar15) {
        uVar14 = (int)param_4[1] - uVar14;
        uVar10 = uVar10 - uVar5;
      }
      bVar1 = (&DAT_145cb01e0)[uVar14];
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (uint)bVar1;
      *(uint *)(param_4 + 1) = uVar14 << (bVar1 & 0x1f);
      uVar8 = uVar8 + bVar15;
      *param_4 = uVar10 << (bVar1 & 0x3f);
    }
  }
  if (lVar2 != 0) {
    if (param_3 == 1) {
      pbVar13 = (byte *)(lVar2 + (uVar12 + 0x639) * 8);
    }
    else if (param_3 == 2) {
      pbVar13 = (byte *)(lVar2 + (uVar12 + 0x424) * 0xc);
    }
    else if (param_3 == 3) {
      pbVar13 = (byte *)(lVar2 + 0x3190 + uVar12 * 0x10);
    }
    *(int *)(pbVar13 + (longlong)(int)uVar8 * 4) = *(int *)(pbVar13 + (longlong)(int)uVar8 * 4) + 1;
  }
  return uVar8;
}



// FUNCTION 1439dc580 FUN_1439dc580 body=284 status=ok
// SIG undefined FUN_1439dc580(void)

ulonglong FUN_1439dc580(longlong param_1,longlong param_2,int param_3,ulonglong *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if ((*(char *)(param_1 + 0x10e8) != '\0') &&
     ((*(byte *)(param_1 + 0x1138 + (longlong)param_3 * 4) & 8) != 0)) {
    return 1;
  }
  iVar5 = 0;
  iVar3 = 0;
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    iVar5 = (int)*(char *)(*(longlong *)(param_2 + 0x1b8) + 3);
  }
  if (*(longlong *)(param_2 + 0x1b0) != 0) {
    iVar3 = (int)*(char *)(*(longlong *)(param_2 + 0x1b0) + 3);
  }
  uVar6 = (uint)*(byte *)(*(longlong *)(param_1 + 0x1168) + 0x7af + (longlong)(iVar3 + iVar5)) *
          ((int)param_4[1] + -1) + 0x100 >> 8;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1439d2cb0(param_4);
  }
  uVar7 = *param_4;
  uVar4 = (ulonglong)uVar6 << 0x38;
  bVar8 = uVar4 <= uVar7;
  if (bVar8) {
    uVar6 = (int)param_4[1] - uVar6;
    uVar7 = uVar7 - uVar4;
  }
  uVar4 = (ulonglong)bVar8;
  bVar2 = (&DAT_145cb01e0)[uVar6];
  *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (uint)bVar2;
  *(uint *)(param_4 + 1) = uVar6 << (bVar2 & 0x1f);
  *param_4 = uVar7 << (bVar2 & 0x3f);
  if (*(longlong *)(param_2 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x188) + 0x31e8 +
                    (uVar4 + (longlong)(iVar3 + iVar5) * 2) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return uVar4;
}



// FUNCTION 1439dc6a0 FUN_1439dc6a0 body=310 status=ok
// SIG undefined FUN_1439dc6a0(void)

void FUN_1439dc6a0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
                  uint param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar1 = **(longlong **)(param_1 + 0x35a8);
  puVar4 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x408) + 8) +
           ((longlong)(param_3 * *(int *)(param_2 + 0x5d4)) + (longlong)(int)param_4) * 0xc);
  if ((*(int *)(param_2 + 0x5a8) != 0) && (*(char *)(param_2 + 0x5b8) == '\0')) {
    FUN_1439daee0(param_2,param_1 + 0x3400,param_3,param_4,param_1 + 0x10,param_5,param_6);
    if (0 < (int)param_6) {
      uVar5 = (ulonglong)param_6;
      do {
        puVar2 = puVar4;
        lVar3 = (longlong)param_5;
        if (0 < (longlong)param_5) {
          do {
            *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(lVar1 + 8);
            *puVar2 = *(undefined8 *)(lVar1 + 0xc);
            lVar3 = lVar3 + -1;
            puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
          } while (lVar3 != 0);
        }
        puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)*(int *)(param_2 + 0x5d4) * 0xc);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return;
  }
  FUN_1439db560(param_2 + 0x270,param_1 + 0x3400,param_3,param_4,param_1 + 0x10,param_5,param_6);
  return;
}



// FUNCTION 1439dc7e0 FUN_1439dc7e0 body=662 status=ok
// SIG undefined FUN_1439dc7e0(void)

uint FUN_1439dc7e0(ulonglong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  
  uVar3 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1439d2cb0();
  }
  uVar6 = *param_1;
  uVar2 = (ulonglong)uVar3 << 0x38;
  bVar8 = uVar2 <= uVar6;
  if (bVar8) {
    uVar3 = (int)param_1[1] - uVar3;
    uVar6 = uVar6 - uVar2;
  }
  bVar1 = (&DAT_145cb01e0)[uVar3];
  iVar7 = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
  iVar4 = uVar3 << (bVar1 & 0x1f);
  *param_1 = uVar6 << (bVar1 & 0x3f);
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  *(int *)(param_1 + 1) = iVar4;
  if (bVar8) {
    uVar3 = (iVar4 + 1U & 0x1ffffff) >> 1;
    if (iVar7 < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar6 = *param_1;
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar8 = uVar2 <= uVar6;
    if (bVar8) {
      uVar3 = (int)param_1[1] - uVar3;
      uVar6 = uVar6 - uVar2;
    }
    bVar1 = (&DAT_145cb01e0)[uVar3];
    iVar7 = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    iVar4 = uVar3 << (bVar1 & 0x1f);
    *param_1 = uVar6 << (bVar1 & 0x3f);
    *(int *)((longlong)param_1 + 0xc) = iVar7;
    *(int *)(param_1 + 1) = iVar4;
    if (bVar8) {
      uVar3 = (iVar4 + 1U & 0x1ffffff) >> 1;
      if (iVar7 < 0) {
        FUN_1439d2cb0(param_1);
      }
      uVar6 = *param_1;
      uVar2 = (ulonglong)uVar3 << 0x38;
      bVar8 = uVar2 <= uVar6;
      if (bVar8) {
        uVar3 = (int)param_1[1] - uVar3;
        uVar6 = uVar6 - uVar2;
      }
      bVar1 = (&DAT_145cb01e0)[uVar3];
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
      *param_1 = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 1) = uVar3 << (bVar1 & 0x1f);
      if (bVar8) {
        iVar4 = FUN_1439dca80(param_1);
        uVar3 = iVar4 + 0x40;
      }
      else {
        uVar3 = 0;
        iVar4 = 4;
        do {
          uVar5 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
          if (*(int *)((longlong)param_1 + 0xc) < 0) {
            FUN_1439d2cb0(param_1);
          }
          uVar6 = *param_1;
          uVar2 = (ulonglong)uVar5 << 0x38;
          bVar8 = uVar2 <= uVar6;
          if (bVar8) {
            uVar5 = (int)param_1[1] - uVar5;
            uVar6 = uVar6 - uVar2;
          }
          bVar1 = (&DAT_145cb01e0)[uVar5];
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
          uVar3 = uVar3 | (uint)bVar8 << ((byte)iVar4 & 0x1f);
          *param_1 = uVar6 << (bVar1 & 0x3f);
          iVar4 = iVar4 + -1;
          *(uint *)(param_1 + 1) = uVar5 << (bVar1 & 0x1f);
        } while (-1 < iVar4);
        uVar3 = uVar3 + 0x20;
      }
    }
    else {
      uVar3 = 0;
      iVar4 = 3;
      do {
        uVar5 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
        if (*(int *)((longlong)param_1 + 0xc) < 0) {
          FUN_1439d2cb0(param_1);
        }
        uVar6 = *param_1;
        uVar2 = (ulonglong)uVar5 << 0x38;
        bVar8 = uVar2 <= uVar6;
        if (bVar8) {
          uVar5 = (int)param_1[1] - uVar5;
          uVar6 = uVar6 - uVar2;
        }
        bVar1 = (&DAT_145cb01e0)[uVar5];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
        uVar3 = uVar3 | (uint)bVar8 << ((byte)iVar4 & 0x1f);
        *param_1 = uVar6 << (bVar1 & 0x3f);
        iVar4 = iVar4 + -1;
        *(uint *)(param_1 + 1) = uVar5 << (bVar1 & 0x1f);
      } while (-1 < iVar4);
      uVar3 = uVar3 + 0x10;
    }
  }
  else {
    uVar3 = 0;
    iVar4 = 3;
    do {
      uVar5 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        FUN_1439d2cb0(param_1);
      }
      uVar6 = *param_1;
      uVar2 = (ulonglong)uVar5 << 0x38;
      bVar8 = uVar2 <= uVar6;
      if (bVar8) {
        uVar5 = (int)param_1[1] - uVar5;
        uVar6 = uVar6 - uVar2;
      }
      bVar1 = (&DAT_145cb01e0)[uVar5];
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
      uVar3 = uVar3 | (uint)bVar8 << ((byte)iVar4 & 0x1f);
      *param_1 = uVar6 << (bVar1 & 0x3f);
      iVar4 = iVar4 + -1;
      *(uint *)(param_1 + 1) = uVar5 << (bVar1 & 0x1f);
    } while (-1 < iVar4);
  }
  return uVar3;
}



// FUNCTION 1439dca80 FUN_1439dca80 body=280 status=ok
// SIG undefined FUN_1439dca80(void)

uint FUN_1439dca80(ulonglong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = 0;
  iVar8 = 6;
  do {
    uVar3 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar5 = *param_1;
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar9 = uVar2 <= uVar5;
    if (bVar9) {
      uVar3 = (int)param_1[1] - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb01e0)[uVar3];
    iVar6 = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    iVar4 = uVar3 << (bVar1 & 0x1f);
    uVar7 = uVar7 | (uint)bVar9 << ((byte)iVar8 & 0x1f);
    *param_1 = uVar5 << (bVar1 & 0x3f);
    iVar8 = iVar8 + -1;
    *(int *)((longlong)param_1 + 0xc) = iVar6;
    *(int *)(param_1 + 1) = iVar4;
  } while (-1 < iVar8);
  if (0x40 < (int)uVar7) {
    uVar3 = (iVar4 + 1U & 0x1ffffff) >> 1;
    if (iVar6 < 0) {
      FUN_1439d2cb0(param_1);
    }
    uVar5 = *param_1;
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar9 = uVar2 <= uVar5;
    if (bVar9) {
      uVar3 = (int)param_1[1] - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb01e0)[uVar3];
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
    *(uint *)(param_1 + 1) = uVar3 << (bVar1 & 0x1f);
    uVar7 = uVar7 * 2 + -0x41 + (uint)bVar9;
    *param_1 = uVar5 << (bVar1 & 0x3f);
  }
  return uVar7;
}



// FUNCTION 1439dcba0 FUN_1439dcba0 body=275 status=ok
// SIG undefined FUN_1439dcba0(void)

void FUN_1439dcba0(ulonglong *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar5 = (int)param_1[1] * 0xfc + 4U >> 8;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1439d2cb0();
  }
  uVar6 = *param_1;
  uVar3 = (ulonglong)uVar5 << 0x38;
  bVar7 = uVar6 < uVar3;
  if (!bVar7) {
    uVar5 = (int)param_1[1] - uVar5;
    uVar6 = uVar6 - uVar3;
  }
  bVar4 = (&DAT_145cb01e0)[uVar5];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar4;
  *param_1 = uVar6 << (bVar4 & 0x3f);
  *(uint *)(param_1 + 1) = uVar5 << (bVar4 & 0x1f);
  if (bVar7) {
    return;
  }
  iVar2 = FUN_1439dc7e0(param_1);
  bVar4 = (&DAT_146831fa0)[iVar2];
  iVar2 = *param_2 - 1;
  if (iVar2 * 2 < 0x100) {
    if ((int)(uint)bVar4 <= iVar2 * 2) {
      if ((bVar4 & 1) != 0) {
        bVar4 = ((char)iVar2 - (char)(bVar4 + 1 >> 1)) + 1;
        goto LAB_1439dcc95;
      }
      bVar4 = (bVar4 >> 1) + (char)iVar2;
    }
    bVar4 = bVar4 + 1;
  }
  else {
    if ((int)(uint)bVar4 <= (0xfe - iVar2) * 2) {
      cVar1 = (char)(0xfe - iVar2);
      if ((bVar4 & 1) == 0) {
        bVar4 = (bVar4 >> 1) + cVar1;
      }
      else {
        bVar4 = cVar1 - (char)(bVar4 + 1 >> 1);
      }
    }
    bVar4 = -bVar4 - 1;
  }
LAB_1439dcc95:
  *param_2 = bVar4;
  return;
}



// FUNCTION 1439dccc0 FUN_1439dccc0 body=286 status=ok
// SIG undefined FUN_1439dccc0(void)

uint FUN_1439dccc0(uint param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (*(char *)((ulonglong)param_1 + param_2) < '\x01') {
    uVar4 = *(uint *)(param_4 + (longlong)*(char *)((ulonglong)param_1 + param_2) * -4);
  }
  else {
    uVar4 = FUN_1439dccc0();
  }
  cVar1 = *(char *)((ulonglong)(param_1 + 1) + param_2);
  if (cVar1 < '\x01') {
    iVar5 = *(int *)(param_4 + (longlong)cVar1 * -4);
  }
  else {
    iVar5 = FUN_1439dccc0((longlong)cVar1,param_2,param_3,param_4,param_5);
  }
  uVar6 = (ulonglong)(param_1 >> 1);
  uVar7 = iVar5 + uVar4;
  if (uVar7 == 0) {
    *(byte *)(uVar6 + param_5) = *(byte *)(uVar6 + param_3);
    return 0;
  }
  uVar3 = 0x14;
  if (uVar7 < 0x14) {
    uVar3 = uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulonglong)(uVar7 >> 1) + (ulonglong)uVar4 * 0x100;
  iVar5 = SUB164(auVar2 / ZEXT416(uVar7),0);
  *(char *)(uVar6 + param_5) =
       (char)((uint)*(byte *)(uVar6 + param_3) *
              (0x100 - *(int *)(&DAT_145cb02e0 + (ulonglong)uVar3 * 4)) +
              (0xff - iVar5 >> 0x17 & 0xffU | (uint)SUB161(auVar2 / ZEXT416(uVar7),0) |
              (uint)(iVar5 == 0)) * *(int *)(&DAT_145cb02e0 + (ulonglong)uVar3 * 4) + 0x80 >> 8);
  return uVar7;
}



// FUNCTION 1439dcde0 FUN_1439dcde0 body=30 status=ok
// SIG undefined FUN_1439dcde0(void)

void FUN_1439dcde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1439dccc0(0,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1439dce00 FUN_1439dce00 body=408 status=ok
// SIG undefined FUN_1439dce00(void)

/* WARNING: Removing unreachable block (ram,0x0001439dceb4) */
/* WARNING: Removing unreachable block (ram,0x0001439dce23) */
/* WARNING: Removing unreachable block (ram,0x0001439dce0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439dce00(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  if (*puVar1 == 0) {
    bVar9 = false;
    bVar7 = false;
    bVar6 = false;
    bVar8 = false;
    bVar5 = false;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar7 = (uVar3 & 1) != 0;
    bVar8 = (uVar3 & 0x200) != 0;
    bVar9 = (uVar3 & 0x80000) != 0;
    bVar6 = false;
    bVar5 = false;
    if (((uVar3 & 0x18000000) == 0x18000000) &&
       (uVar4 = xinuse(0), bVar5 = false, (in_XCR0 & (byte)uVar4 & 6) == 6)) {
      bVar6 = true;
      bVar5 = false;
      if ((6 < *puVar1) &&
         (lVar2 = cpuid_Extended_Feature_Enumeration_info(7), bVar5 = false,
         (*(uint *)(lVar2 + 4) & 0x20) != 0)) {
        bVar6 = true;
        bVar5 = true;
      }
    }
  }
  _DAT_146bcd258 = (code *)&LAB_14004bac0;
  if (bVar5) {
    _DAT_146bcd258 = FUN_1439e1f10;
  }
  _DAT_146bcd250 = FUN_1439e1fe0;
  if (bVar6) {
    _DAT_146bcd250 = FUN_1439e2fd0;
  }
  _DAT_146bcd248 = FUN_1439e3530;
  if (bVar8) {
    _DAT_146bcd248 = FUN_1439e3d30;
  }
  _DAT_146bcd240 = FUN_1439e2560;
  if (bVar7) {
    _DAT_146bcd240 = FUN_1439e27e0;
  }
  if (bVar9) {
    _DAT_146bcd240 = FUN_1439e2b60;
  }
  _DAT_146bcd238 = FUN_1439e4550;
  if (bVar8) {
    _DAT_146bcd238 = (code *)&LAB_14004bc10;
  }
  _DAT_146bcd230 = FUN_1439e4860;
  if (bVar8) {
    _DAT_146bcd230 = (code *)&LAB_14004bf60;
  }
  _DAT_146bcd228 = FUN_1439e49c0;
  if (bVar8) {
    _DAT_146bcd228 = FUN_1439e5410;
  }
  return;
}



// FUNCTION 1439dcfa0 FUN_1439dcfa0 body=94 status=ok
// SIG undefined FUN_1439dcfa0(void)

ulonglong FUN_1439dcfa0(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_146ba0680 == 0;
  if (bVar2) {
    DAT_146ba0680 = 1;
  }
  UNLOCK();
  if (bVar2) {
    uVar1 = FUN_1439dce00();
    LOCK();
    DAT_146ba0680 = DAT_146ba0680 + 1;
    UNLOCK();
    return uVar1;
  }
  uVar1 = 2;
  LOCK();
  bVar2 = DAT_146ba0680 == 2;
  if (bVar2) {
    DAT_146ba0680 = 2;
  }
  else {
    uVar1 = (ulonglong)DAT_146ba0680;
  }
  UNLOCK();
  while (!bVar2) {
    Sleep(0);
    uVar1 = 2;
    LOCK();
    bVar2 = DAT_146ba0680 == 2;
    if (bVar2) {
      DAT_146ba0680 = 2;
    }
    else {
      uVar1 = (ulonglong)DAT_146ba0680;
    }
    UNLOCK();
  }
  return uVar1;
}



// FUNCTION 1439dd000 FUN_1439dd000 body=117 status=ok
// SIG undefined FUN_1439dd000(void)

void FUN_1439dd000(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = 8;
  puVar2 = (undefined8 *)&DAT_145cb5660;
  puVar3 = (undefined8 *)(param_1 + 0x1dd5);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar1;
    uVar1 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar1;
    uVar1 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar1;
    uVar1 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar5[10] = puVar4[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar5[0xc] = puVar4[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar5[0xe] = puVar4[0xe];
    puVar5[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar4[0x11];
  puVar5[0x10] = puVar4[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar5[0x12] = puVar4[0x12];
  puVar5[0x13] = uVar1;
  return;
}



// FUNCTION 1439dd080 FUN_1439dd080 body=414 status=ok
// SIG undefined FUN_1439dd080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1439dd080(double param_1,char *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_198 [32];
  char local_178 [256];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  iVar6 = 0;
  iVar5 = -0x20;
  uVar8 = (ulonglong)param_3;
  dVar9 = _guard_xfg_dispatch_icall_nop(6.2831853);
  do {
    dVar10 = _guard_xfg_dispatch_icall_nop
                       (-(((double)iVar5 * (double)iVar5) / ((param_1 + param_1) * param_1)));
    iVar2 = (int)(dVar10 * (1.0 / (dVar9 * param_1)) * 256.0 + 0.5);
    if (iVar2 != 0) {
      iVar4 = 0;
      if (0 < iVar2) {
        pcVar7 = local_178 + iVar6;
        for (lVar3 = (longlong)iVar2; iVar4 = iVar2, lVar3 != 0; lVar3 = lVar3 + -1) {
          *pcVar7 = (char)iVar5;
          pcVar7 = pcVar7 + 1;
        }
      }
      iVar6 = iVar6 + iVar4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  uVar1 = (ulonglong)iVar6;
  while( true ) {
    if (0xff < (longlong)uVar1) {
      if (0 < (int)param_3) {
        do {
          iVar5 = rand();
          *param_2 = local_178[(byte)iVar5];
          uVar8 = uVar8 - 1;
          param_2 = param_2 + 1;
        } while (uVar8 != 0);
      }
      return -(int)local_178[0];
    }
    if (0xff < uVar1) break;
    local_178[uVar1] = '\0';
    uVar1 = uVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 1439dd220 FUN_1439dd220 body=1291 status=ok
// SIG undefined FUN_1439dd220(void)

void FUN_1439dd220(int param_1,int param_2,int param_3,undefined8 param_4,void *param_5,
                  void *param_6,undefined4 param_7,int param_8,undefined8 param_9,void *param_10,
                  void *param_11,undefined4 param_12,int param_13)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_res10 [2];
  uint local_res18;
  undefined8 local_res20;
  undefined4 uVar11;
  int *piVar10;
  uint local_68;
  uint local_60;
  
  uVar8 = param_1 >> 1;
  local_res20 = param_4;
  if (param_1 == 0x10) {
    iVar3 = (*DAT_146bcd4e0)();
    uVar9 = iVar3 + 0x80U >> 8;
    iVar3 = (*DAT_146bcd4e0)(param_4,param_7,&DAT_145cb5a98,0,local_res10);
    local_res18 = iVar3 + 0x80U >> 8;
    (*DAT_146bcd4e0)(param_4,param_7,param_9,param_12,local_res10);
    local_68 = local_res10[0] + 0x80U >> 8;
    FUN_1439b5d20(param_5,param_8,param_10,param_13,local_res10);
    local_60 = local_res10[0] + 0x20U >> 6;
    piVar10 = local_res10;
    FUN_1439b5d20(param_6,param_8,param_11,param_13,piVar10);
    uVar11 = (undefined4)((ulonglong)piVar10 >> 0x20);
    uVar6 = local_res10[0] + 0x20U >> 6;
  }
  else {
    iVar3 = FUN_1439b5d20(param_9,param_12,&DAT_145cb5a98,0,local_res10);
    uVar9 = iVar3 + 0x20U >> 6;
    iVar3 = FUN_1439b5d20(param_4,param_7,&DAT_145cb5a98,0,local_res10);
    local_res18 = iVar3 + 0x20U >> 6;
    FUN_1439b5d20(param_4,param_7,param_9,param_12,local_res10);
    local_68 = local_res10[0] + 0x20U >> 6;
    FUN_1439b5910(param_5,param_8,param_10,param_13,local_res10);
    local_60 = local_res10[0] + 8U >> 4;
    piVar10 = local_res10;
    FUN_1439b5910(param_6,param_8,param_11,param_13,piVar10);
    uVar11 = (undefined4)((ulonglong)piVar10 >> 0x20);
    uVar6 = local_res10[0] + 8U >> 4;
  }
  uVar7 = param_2 - param_3 >> 4;
  uVar4 = uVar9;
  while (uVar4 = uVar4 >> 1, uVar4 != 0) {
    uVar7 = uVar7 + 1;
  }
  iVar3 = param_3 >> 2;
  iVar2 = param_3;
  while (iVar3 != 0) {
    uVar7 = uVar7 + 1;
    iVar3 = iVar2 >> 4;
    iVar2 = iVar2 >> 2;
  }
  uVar4 = uVar7 * uVar7;
  if ((((local_68 < uVar4) && (local_60 * 4 < uVar4)) && (uVar6 * 4 < uVar4)) &&
     (uVar9 <= local_res18 * 5)) {
    iVar3 = 1;
    uVar8 = local_68;
    while (uVar8 = uVar8 >> 1, uVar8 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 >> 1;
    uVar8 = 0;
    if (-1 < iVar3) {
      bVar1 = (byte)iVar3 & 0x1f;
      uVar6 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      uVar8 = 0;
      do {
        uVar9 = uVar8 | uVar6;
        uVar8 = uVar9 - uVar6;
        if (uVar9 * uVar9 <= local_68) {
          uVar8 = uVar9;
        }
        uVar6 = uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    iVar3 = (int)(((uVar8 + ((uVar8 + 1) * uVar8 + 1 <= local_68)) * 0x10) / uVar7) >>
            ((byte)(param_2 - param_3 >> 5) & 0x1f);
    if (iVar3 != 0) {
      if (param_1 == 0x10) {
        FUN_14004c310();
        FUN_14004c3d9(param_5,param_8,param_10,param_13,iVar3);
        FUN_14004c3d9(param_6,param_8,param_11,param_13,iVar3);
      }
      else {
        FUN_14004c3d9(local_res20,param_7,param_9,param_12,CONCAT44(uVar11,iVar3));
        FUN_1439dd860(param_5,param_8,param_10,param_13,iVar3);
        FUN_1439dd860(param_6,param_8,param_11,param_13,iVar3);
      }
    }
  }
  else if (param_1 == 0x10) {
    FUN_14003bf60();
    FUN_14003c070(param_5,param_8,param_10,param_13);
    FUN_14003c070(param_6,param_8,param_11,param_13);
  }
  else {
    FUN_14003c070(local_res20,param_7,param_9,param_12);
    if (0 < (int)uVar8) {
      uVar5 = (ulonglong)uVar8;
      do {
        _guard_xfg_dispatch_icall_nop(param_10,param_5,(longlong)(int)uVar8);
        param_5 = (void *)((longlong)param_5 + (longlong)param_8);
        param_10 = (void *)((longlong)param_10 + (longlong)param_13);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0 < (int)uVar8) {
      uVar5 = (ulonglong)uVar8;
      do {
        _guard_xfg_dispatch_icall_nop(param_11,param_6,(longlong)(int)uVar8);
        param_6 = (void *)((longlong)param_6 + (longlong)param_8);
        param_11 = (void *)((longlong)param_11 + (longlong)param_13);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1439dd730 FUN_1439dd730 body=301 status=ok
// SIG undefined FUN_1439dd730(void)

int FUN_1439dd730(byte *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1[9] != 0) {
    param_2[3] = 1;
    param_2[2] = 1;
    param_2[1] = 1;
    *param_2 = 1;
    return param_2[3] + param_2[2] + param_2[1] + *param_2;
  }
  if (*param_1 != 9) {
    if (((*param_1 < 5) ||
        (uVar7 = (int)*(short *)(param_1 + 4) >> 0x1f,
        2 < (int)(((int)*(short *)(param_1 + 4) ^ uVar7) - uVar7))) ||
       (uVar7 = (int)*(short *)(param_1 + 6) >> 0x1f,
       2 < (int)(((int)*(short *)(param_1 + 6) ^ uVar7) - uVar7))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    param_2[3] = uVar7;
    param_2[2] = uVar7;
    param_2[1] = uVar7;
    *param_2 = uVar7;
    return uVar7 * 4;
  }
  lVar4 = (longlong)&DAT_1468320c0 - (longlong)param_2;
  lVar5 = 4;
  puVar6 = param_2;
  do {
    uVar7 = 1;
    *puVar6 = 1;
    iVar3 = 0;
    puVar1 = param_2;
    do {
      if (*puVar1 == 0) break;
      if ((*(short *)(param_1 + (longlong)*(int *)(lVar4 + (longlong)puVar1) * 4 + 0xc) < 3) &&
         (*(short *)(param_1 + (longlong)*(int *)(lVar4 + (longlong)puVar1) * 4 + 0xe) < 3)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      uVar7 = uVar7 & uVar2;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      *puVar6 = uVar7;
    } while (iVar3 < 4);
    puVar6 = puVar6 + 1;
    lVar4 = lVar4 + 0x10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return param_2[3] + param_2[2] + param_2[1] + *param_2;
    }
  } while( true );
}



// FUNCTION 1439dd860 FUN_1439dd860 body=189 status=ok
// SIG undefined FUN_1439dd860(void)

void FUN_1439dd860(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0x10 - param_5;
  lVar2 = 4;
  do {
    *param_3 = (byte)((int)((uint)*param_3 * iVar3 + 8 + (uint)*param_1 * param_5) >> 4);
    param_3[1] = (byte)((int)((uint)param_1[1] * param_5 + (uint)param_3[1] * iVar3 + 8) >> 4);
    param_3[2] = (byte)((int)((uint)param_1[2] * param_5 + (uint)param_3[2] * iVar3 + 8) >> 4);
    pbVar1 = param_1 + 3;
    param_1 = param_1 + param_2;
    param_3[3] = (byte)((int)((uint)*pbVar1 * param_5 + 8 + (uint)param_3[3] * iVar3) >> 4);
    param_3 = param_3 + param_4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1439dd920 FUN_1439dd920 body=1438 status=ok
// SIG undefined FUN_1439dd920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439dd920(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  int local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  uint local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar6 = *(longlong *)(param_1 + 0x778);
  local_60 = *(uint *)(param_1 + 0xba4);
  uVar14 = (ulonglong)(int)local_60;
  local_58 = *(longlong *)(param_1 + 0xbf8);
  local_a0 = *(longlong *)(lVar6 + 0x38);
  local_98 = *(longlong *)(lVar6 + 0x40);
  local_90 = *(longlong *)(lVar6 + 0x48);
  local_88 = *(longlong *)(param_1 + 0xaa8);
  local_68 = *(longlong *)(param_1 + 0xab0);
  local_78 = *(longlong *)(param_1 + 0xab8);
  local_a8 = *(undefined4 *)(param_1 + 0xbd0);
  uVar7 = *(undefined4 *)(param_1 + 0x2238);
  local_6c = 0;
  uVar16 = uVar14;
  local_a4 = uVar7;
  local_80 = lVar6;
  local_48 = param_1;
  if (0 < *(int *)(param_1 + 0xbb4)) {
    do {
      local_70 = 0;
      if (0 < *(int *)(param_1 + 3000)) {
        do {
          lVar5 = local_58;
          lVar10 = local_68;
          lVar4 = local_78;
          if (uVar14 == 1) {
            iVar3 = FUN_1439dd730(local_58,local_40);
            lVar6 = local_80;
          }
          else {
            iVar3 = 0;
            if ((int)uVar16 == 0) {
              iVar3 = 4;
            }
          }
          if (iVar3 == 0) {
            FUN_14003bf60(local_a0,*(undefined4 *)(lVar6 + 0x10),local_88,
                          *(undefined4 *)(param_1 + 0xa80));
            lVar6 = local_80;
            FUN_14003c070(local_98,*(undefined4 *)(local_80 + 0x24),lVar10,
                          *(undefined4 *)(param_1 + 0xa94));
            FUN_14003c070(local_90,*(undefined4 *)(lVar6 + 0x24),lVar4,
                          *(undefined4 *)(param_1 + 0xa94));
            uVar7 = local_a4;
          }
          else if (iVar3 < 4) {
            iVar3 = 0;
            piVar12 = local_40;
            do {
              iVar8 = 0;
              local_50 = 2;
              do {
                if (*piVar12 == 0) {
                  lVar5 = (longlong)((*(int *)(lVar6 + 0x24) * iVar3 + iVar8) * 4);
                  puVar9 = (undefined4 *)(lVar5 + local_90);
                  puVar15 = (undefined4 *)(lVar5 + local_98);
                  lVar5 = (longlong)((iVar3 * *(int *)(param_1 + 0xa94) + iVar8) * 4);
                  puVar11 = (undefined4 *)(lVar10 + lVar5);
                  puVar13 = (undefined4 *)(lVar4 + lVar5);
                  FUN_14003c070((*(int *)(lVar6 + 0x10) * iVar3 + iVar8) * 8 + local_a0,
                                *(int *)(lVar6 + 0x10),
                                (*(int *)(param_1 + 0xa80) * iVar3 + iVar8) * 8 + local_88);
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)*(int *)(param_1 + 0xa94));
                  puVar13 = (undefined4 *)((longlong)puVar13 + (longlong)*(int *)(param_1 + 0xa94));
                  puVar15 = (undefined4 *)((longlong)puVar15 + (longlong)*(int *)(local_80 + 0x24));
                  puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)*(int *)(local_80 + 0x24));
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)*(int *)(param_1 + 0xa94));
                  puVar13 = (undefined4 *)((longlong)puVar13 + (longlong)*(int *)(param_1 + 0xa94));
                  puVar15 = (undefined4 *)((longlong)puVar15 + (longlong)*(int *)(local_80 + 0x24));
                  puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)*(int *)(local_80 + 0x24));
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  iVar1 = *(int *)(local_80 + 0x24);
                  iVar2 = *(int *)(param_1 + 0xa94);
                  *(undefined4 *)((longlong)iVar2 + (longlong)puVar11) =
                       *(undefined4 *)((longlong)iVar1 + (longlong)puVar15);
                  *(undefined4 *)((longlong)puVar13 + (longlong)iVar2) =
                       *(undefined4 *)((longlong)puVar9 + (longlong)iVar1);
                }
                else {
                  local_e0 = *(int *)(lVar6 + 0x24);
                  local_b8 = *(int *)(param_1 + 0xa94);
                  local_c0 = *(int *)(param_1 + 0xa80);
                  local_e8 = *(int *)(lVar6 + 0x10);
                  local_d0 = (longlong)((local_b8 * iVar3 + iVar8) * 4);
                  local_c8 = local_78 + local_d0;
                  local_d0 = lVar10 + local_d0;
                  local_f8 = (longlong)((local_e0 * iVar3 + iVar8) * 4);
                  local_f0 = local_90 + local_f8;
                  local_f8 = local_f8 + local_98;
                  local_d8 = (local_c0 * iVar3 + iVar8) * 8 + local_88;
                  FUN_1439dd220(8,local_a8,local_a4,(local_e8 * iVar3 + iVar8) * 8 + local_a0);
                  param_1 = local_48;
                }
                iVar8 = iVar8 + 1;
                piVar12 = piVar12 + 1;
                local_50 = local_50 + -1;
                lVar6 = local_80;
                lVar10 = local_68;
                lVar4 = local_78;
              } while (local_50 != 0);
              iVar3 = iVar3 + 1;
            } while (iVar3 < 2);
            uVar16 = (ulonglong)local_60;
            local_50 = 0;
            lVar5 = local_58;
            uVar7 = local_a4;
          }
          else {
            local_b8 = *(int *)(param_1 + 0xa94);
            local_c0 = *(int *)(param_1 + 0xa80);
            local_e0 = *(int *)(lVar6 + 0x24);
            local_e8 = *(int *)(lVar6 + 0x10);
            local_f8 = local_98;
            local_f0 = local_90;
            local_d8 = local_88;
            local_d0 = lVar10;
            local_c8 = lVar4;
            FUN_1439dd220(0x10,local_a8,uVar7,local_a0);
          }
          local_68 = lVar10 + 8;
          local_70 = local_70 + 1;
          local_a0 = local_a0 + 0x10;
          local_98 = local_98 + 8;
          local_90 = local_90 + 8;
          local_88 = local_88 + 0x10;
          local_78 = lVar4 + 8;
          local_58 = lVar5 + 0x4c;
          uVar14 = (ulonglong)(int)uVar16;
          lVar6 = local_80;
        } while (local_70 < *(int *)(param_1 + 3000));
      }
      iVar3 = *(int *)(param_1 + 3000);
      local_58 = local_58 + 0x4c;
      local_6c = local_6c + 1;
      local_a0 = local_a0 + (*(int *)(lVar6 + 0x10) - iVar3) * 0x10;
      lVar4 = (longlong)((*(int *)(lVar6 + 0x24) - iVar3) * 8);
      local_98 = local_98 + lVar4;
      local_90 = local_90 + lVar4;
      local_88 = local_88 + (*(int *)(param_1 + 0xa80) - iVar3) * 0x10;
      lVar4 = (longlong)((*(int *)(param_1 + 0xa94) - iVar3) * 8);
      local_68 = local_68 + lVar4;
      local_78 = local_78 + lVar4;
      uVar14 = (ulonglong)(int)uVar16;
    } while (local_6c < *(int *)(param_1 + 0xbb4));
  }
  return;
}



// FUNCTION 1439ddec0 FUN_1439ddec0 body=259 status=ok
// SIG undefined FUN_1439ddec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ddec0(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  pbVar10 = (byte *)param_1[1];
  iVar11 = (int)param_1[3];
  uVar3 = *param_1 - (longlong)pbVar10;
  iVar6 = 0x30 - iVar11;
  uVar8 = param_1[2];
  iVar12 = (iVar6 - (int)(uVar3 * 8)) + 8;
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (undefined4)uVar3;
    if (9 < uVar3) {
      uVar2 = 9;
    }
    (*(code *)param_1[4])(param_1[5],pbVar10,local_48,uVar2);
    pbVar10 = local_48;
  }
  iVar7 = 0;
  if (((iVar12 < 0) || (iVar11 = iVar11 + 0x40000000, iVar7 = iVar12, uVar3 * 8 != 0)) &&
     (iVar7 <= iVar6)) {
    lVar5 = param_1[1];
    uVar9 = iVar6 - iVar7;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      lVar5 = lVar5 + 1;
      bVar4 = (byte)iVar6;
      iVar6 = iVar6 + -8;
      uVar8 = uVar8 | (ulonglong)bVar1 << (bVar4 & 0x3f);
      param_1[1] = lVar5;
    } while (iVar7 <= iVar6);
    *(uint *)(param_1 + 3) = iVar11 + ((uVar9 >> 3) + 1) * 8;
  }
  else {
    *(int *)(param_1 + 3) = iVar11;
  }
  param_1[2] = uVar8;
  return;
}



// FUNCTION 1439ddfd0 FUN_1439ddfd0 body=82 status=ok
// SIG undefined FUN_1439ddfd0(void)

undefined4
FUN_1439ddfd0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5)

{
  param_1[1] = param_2;
  *param_1 = (ulonglong)param_3 + param_2;
  param_1[5] = param_5;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffff8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff;
  param_1[4] = param_4;
  if ((param_3 != 0) && (param_2 == 0)) {
    return 1;
  }
  FUN_1439ddec0();
  return 0;
}



// FUNCTION 1439de030 FUN_1439de030 body=52 status=ok
// SIG undefined FUN_1439de030(void)

int FUN_1439de030(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2;
  if (param_1 < 0x80) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x7f;
  }
  iVar1 = (&DAT_145cb5cb0)[param_1] * 0x18ccd >> 0x10;
  if (iVar1 < 8) {
    iVar1 = 8;
  }
  return iVar1;
}



// FUNCTION 1439de070 FUN_1439de070 body=47 status=ok
// SIG undefined FUN_1439de070(void)

undefined4 FUN_1439de070(int param_1,int param_2)

{
  param_1 = param_1 + param_2;
  if (0x7f < param_1) {
    return 0x11c;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  return (&DAT_145cb5cb0)[param_1];
}



// FUNCTION 1439de0a0 FUN_1439de0a0 body=45 status=ok
// SIG undefined FUN_1439de0a0(void)

undefined4 FUN_1439de0a0(int param_1)

{
  if (0x7f < param_1) {
    return 0x11c;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  return (&DAT_145cb5cb0)[param_1];
}



// FUNCTION 1439de0d0 FUN_1439de0d0 body=51 status=ok
// SIG undefined FUN_1439de0d0(void)

int FUN_1439de0d0(int param_1,int param_2)

{
  param_1 = param_1 + param_2;
  if (0x7f < param_1) {
    return 0x13a;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  return (&DAT_145cb5ab0)[param_1] * 2;
}



// FUNCTION 1439de110 FUN_1439de110 body=47 status=ok
// SIG undefined FUN_1439de110(void)

undefined4 FUN_1439de110(int param_1,int param_2)

{
  param_1 = param_1 + param_2;
  if (0x7f < param_1) {
    return 0x9d;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  return (&DAT_145cb5ab0)[param_1];
}



// FUNCTION 1439de140 FUN_1439de140 body=45 status=ok
// SIG undefined FUN_1439de140(void)

int FUN_1439de140(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2;
  if (param_1 < 0x80) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x7f;
  }
  iVar1 = (&DAT_145cb5ab0)[param_1];
  if (0x84 < (int)(&DAT_145cb5ab0)[param_1]) {
    iVar1 = 0x84;
  }
  return iVar1;
}



// FUNCTION 1439de170 FUN_1439de170 body=953 status=ok
// SIG undefined FUN_1439de170(void)

void FUN_1439de170(longlong param_1,longlong param_2,char *param_3,char *param_4,longlong param_5,
                  undefined8 param_6,longlong param_7,int param_8,int param_9,int param_10,
                  int param_11)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_res8;
  int local_res10;
  int local_68;
  
  local_res10 = 0x10;
  local_68 = 3;
  uVar12 = 0;
  iVar6 = FUN_1439d0850(param_1,0x6e);
  if (iVar6 != 0) {
    local_res10 = 4;
    local_68 = 2;
    iVar6 = FUN_1439d0850(param_1,0x6f);
    if (iVar6 != 0) {
      local_68 = FUN_1439d0850(param_1,0x96);
      local_res10 = 2;
    }
  }
  lVar8 = (longlong)local_68 * 0x10;
  do {
    bVar1 = (&DAT_145cb6e80)[(int)uVar12 + lVar8];
    uVar10 = (ulonglong)bVar1;
    if ((bVar1 & 3) == 0) {
      if (*param_3 == '\t') {
        local_res8 = *(int *)(param_3 + uVar10 * 4 + 0x18);
      }
      else {
        local_res8 = *(int *)(param_3 + 4);
      }
    }
    else {
      local_res8 = *(int *)(param_2 + 8 + uVar10 * 4);
    }
    if ((bVar1 & 0xfc) == 0) {
      if (*param_4 == '\t') {
        iVar6 = *(int *)(param_4 + uVar10 * 4 + 0x3c);
      }
      else {
        iVar6 = *(int *)(param_4 + 4);
      }
    }
    else {
      iVar6 = *(int *)(param_2 + -4 + uVar10 * 4);
    }
    uVar10 = 0;
    if (iVar6 == 0) {
      uVar10 = 4;
    }
    uVar9 = 0;
    if (local_res8 == 0) {
      uVar9 = 2;
    }
    lVar3 = (local_res8 == iVar6 | uVar10 | uVar9) * 3;
    uVar13 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)(byte)(&DAT_145cb5ef0)[lVar3] >> 8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_1439ddec0(param_1);
    }
    uVar10 = *(ulonglong *)(param_1 + 0x10);
    uVar9 = (ulonglong)uVar13 << 0x38;
    bVar15 = uVar10 < uVar9;
    if (!bVar15) {
      uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
      uVar10 = uVar10 - uVar9;
    }
    bVar1 = (&DAT_145cb5500)[uVar13];
    iVar11 = *(int *)(param_1 + 0x18) - (uint)bVar1;
    iVar14 = uVar13 << (bVar1 & 0x1f);
    *(ulonglong *)(param_1 + 0x10) = uVar10 << (bVar1 & 0x3f);
    *(int *)(param_1 + 0x18) = iVar11;
    *(int *)(param_1 + 0x1c) = iVar14;
    if (bVar15) {
LAB_1439de458:
      sVar4 = (short)local_res8;
    }
    else {
      uVar13 = ((uint)(byte)(&DAT_145cb5ef1)[lVar3] * (iVar14 + -1) >> 8) + 1;
      if (iVar11 < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      uVar9 = (ulonglong)uVar13 << 0x38;
      bVar15 = uVar10 < uVar9;
      if (!bVar15) {
        uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
        uVar10 = uVar10 - uVar9;
      }
      bVar2 = (&DAT_145cb5500)[uVar13];
      iVar14 = *(int *)(param_1 + 0x18) - (uint)bVar2;
      iVar11 = uVar13 << (bVar2 & 0x1f);
      *(ulonglong *)(param_1 + 0x10) = uVar10 << (bVar2 & 0x3f);
      *(int *)(param_1 + 0x18) = iVar14;
      *(int *)(param_1 + 0x1c) = iVar11;
      local_res8 = iVar6;
      if (bVar15) goto LAB_1439de458;
      iVar6 = 0 << (bVar1 & 0x1f);
      local_res8 = 0;
      uVar13 = ((uint)(byte)(&DAT_145cb5ef2)[lVar3] * (iVar11 + -1) >> 8) + 1;
      if (iVar14 < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      uVar9 = (ulonglong)uVar13;
      if (uVar9 << 0x38 <= uVar10) {
        iVar6 = 1;
        uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
        uVar10 = uVar10 - (uVar9 << 0x38);
      }
      bVar1 = (&DAT_145cb5500)[uVar13];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar10 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar13 << (bVar1 & 0x1f);
      if (iVar6 == 0) goto LAB_1439de458;
      sVar4 = FUN_1439df1c0(param_1,param_7);
      sVar4 = sVar4 * 2 + (short)param_6;
      sVar5 = FUN_1439df1c0(param_1,param_7 + 0x13);
      local_res8 = CONCAT22(sVar5 * 2 + param_6._2_2_,sVar4);
    }
    iVar6 = (int)(short)((uint)local_res8 >> 0x10);
    *(byte *)(param_5 + 10) =
         *(byte *)(param_5 + 10) |
         (((sVar4 < param_10 || param_11 < sVar4) || iVar6 < param_8) || param_9 < iVar6);
    uVar10 = (ulonglong)(byte)(&DAT_145cb5f08)[local_68];
    pbVar7 = &DAT_145cb5eb0 + uVar10 * (uVar12 & 0xff) + lVar8;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      *(int *)(param_2 + 0xc + (ulonglong)bVar1 * 4) = local_res8;
      uVar13 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar13;
    } while (uVar13 != 0);
    uVar12 = uVar12 + 1;
    if (local_res10 <= (int)uVar12) {
      *(char *)(param_5 + 8) = (char)local_68;
      return;
    }
  } while( true );
}



// FUNCTION 1439de530 FUN_1439de530 body=1011 status=ok
// SIG undefined FUN_1439de530(void)

void FUN_1439de530(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar1 = param_1 + 0x36a0;
  iVar3 = FUN_1439d0850(lVar1,0x80);
  *(int *)(param_1 + 0x1e80) = iVar3;
  *(undefined1 *)(param_1 + 0x3827) = 0;
  if (iVar3 != 0) {
    uVar5 = 0;
    iVar3 = 7;
    do {
      uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
      if (*(int *)(param_1 + 0x36b8) < 0) {
        FUN_1439ddec0(lVar1);
      }
      uVar7 = *(ulonglong *)(param_1 + 14000);
      uVar4 = (ulonglong)uVar6 << 0x38;
      bVar9 = uVar4 <= uVar7;
      if (bVar9) {
        uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
        uVar7 = uVar7 - uVar4;
      }
      bVar2 = (&DAT_145cb5500)[uVar6];
      *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
      uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x3827) = (char)uVar5;
  }
  if (*(int *)(param_1 + 0x1e64) != 0) {
    uVar5 = 0;
    iVar3 = 7;
    do {
      uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
      if (*(int *)(param_1 + 0x36b8) < 0) {
        FUN_1439ddec0(lVar1);
      }
      uVar7 = *(ulonglong *)(param_1 + 14000);
      uVar4 = (ulonglong)uVar6 << 0x38;
      bVar9 = uVar4 <= uVar7;
      if (bVar9) {
        uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
        uVar7 = uVar7 - uVar4;
      }
      bVar2 = (&DAT_145cb5500)[uVar6];
      *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
      uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x3824) = (char)uVar5;
    uVar5 = 0;
    iVar3 = 7;
    do {
      uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
      if (*(int *)(param_1 + 0x36b8) < 0) {
        FUN_1439ddec0(lVar1);
      }
      uVar7 = *(ulonglong *)(param_1 + 14000);
      uVar4 = (ulonglong)uVar6 << 0x38;
      bVar9 = uVar4 <= uVar7;
      if (bVar9) {
        uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
        uVar7 = uVar7 - uVar4;
      }
      bVar2 = (&DAT_145cb5500)[uVar6];
      *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
      uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x3825) = (char)uVar5;
    uVar5 = 0;
    iVar3 = 7;
    do {
      uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
      if (*(int *)(param_1 + 0x36b8) < 0) {
        FUN_1439ddec0(lVar1);
      }
      uVar7 = *(ulonglong *)(param_1 + 14000);
      uVar4 = (ulonglong)uVar6 << 0x38;
      bVar9 = uVar4 <= uVar7;
      if (bVar9) {
        uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
        uVar7 = uVar7 - uVar4;
      }
      bVar2 = (&DAT_145cb5500)[uVar6];
      *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
      uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x3826) = (char)uVar5;
    iVar3 = FUN_1439d0850(lVar1,0x80);
    if (iVar3 != 0) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        iVar3 = 7;
        do {
          uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
          if (*(int *)(param_1 + 0x36b8) < 0) {
            FUN_1439ddec0(lVar1);
          }
          uVar7 = *(ulonglong *)(param_1 + 14000);
          uVar4 = (ulonglong)uVar6 << 0x38;
          bVar9 = uVar4 <= uVar7;
          if (bVar9) {
            uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
            uVar7 = uVar7 - uVar4;
          }
          bVar2 = (&DAT_145cb5500)[uVar6];
          *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
          uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
          *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
          iVar3 = iVar3 + -1;
          *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
        } while (-1 < iVar3);
        *(char *)(lVar8 + 0x308b + param_1) = (char)uVar5;
        lVar8 = lVar8 + 1;
      } while (lVar8 < 4);
    }
    iVar3 = FUN_1439d0850(lVar1,0x80);
    if (iVar3 != 0) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        iVar3 = 7;
        do {
          uVar6 = (*(int *)(param_1 + 0x36bc) * 0x80 - 0x80U >> 8) + 1;
          if (*(int *)(param_1 + 0x36b8) < 0) {
            FUN_1439ddec0(lVar1);
          }
          uVar7 = *(ulonglong *)(param_1 + 14000);
          uVar4 = (ulonglong)uVar6 << 0x38;
          bVar9 = uVar4 <= uVar7;
          if (bVar9) {
            uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
            uVar7 = uVar7 - uVar4;
          }
          bVar2 = (&DAT_145cb5500)[uVar6];
          *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
          uVar5 = uVar5 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
          *(ulonglong *)(param_1 + 14000) = uVar7 << (bVar2 & 0x3f);
          iVar3 = iVar3 + -1;
          *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
        } while (-1 < iVar3);
        *(char *)(lVar8 + 0x308f + param_1) = (char)uVar5;
        lVar8 = lVar8 + 1;
      } while (lVar8 < 3);
    }
    FUN_1439df400(lVar1,param_1 + 0x34b5);
  }
  return;
}



// FUNCTION 1439de930 FUN_1439de930 body=203 status=ok
// SIG undefined FUN_1439de930(void)

int FUN_1439de930(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = ((uint)*(byte *)(((longlong)cVar4 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_1439ddec0(param_1);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb5500)[uVar3];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145cad100)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -(int)cVar4;
}



// FUNCTION 1439dea00 FUN_1439dea00 body=373 status=ok
// SIG undefined FUN_1439dea00(void)

void FUN_1439dea00(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1e7c);
  param_1 = param_1 + 0x36a0;
  param_2[2] = '\0';
  cVar2 = FUN_1439deb80(param_1,&DAT_145cad644);
  *param_2 = cVar2;
  if (cVar2 == '\x04') {
    uVar6 = 0;
    piVar5 = (int *)(param_2 + 8);
    param_2[3] = '\x01';
    do {
      if ((uVar6 & 0xfffffffc) == 0) {
        cVar2 = param_2[(longlong)iVar1 * -0x4c];
        if (cVar2 == '\0') {
LAB_1439deaa2:
          iVar3 = 0;
        }
        else if (cVar2 == '\x01') {
          iVar3 = 2;
        }
        else if (cVar2 == '\x02') {
          iVar3 = 3;
        }
        else if (cVar2 == '\x03') {
          iVar3 = 1;
        }
        else {
          if (cVar2 != '\x04') goto LAB_1439deaa2;
          iVar3 = *(int *)((char *)((0x34 - (longlong)param_2) + (longlong)piVar5) +
                          (longlong)(param_2 + (longlong)iVar1 * -0x4c));
        }
      }
      else {
        iVar3 = piVar5[-3];
      }
      if ((uVar6 & 3) == 0) {
        cVar2 = param_2[-0x4c];
        if (cVar2 == '\0') {
LAB_1439deaef:
          iVar4 = 0;
        }
        else if (cVar2 == '\x01') {
          iVar4 = 2;
        }
        else if (cVar2 == '\x02') {
          iVar4 = 3;
        }
        else if (cVar2 == '\x03') {
          iVar4 = 1;
        }
        else {
          if (cVar2 != '\x04') goto LAB_1439deaef;
          iVar4 = piVar5[-0xf];
        }
      }
      else {
        iVar4 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar3 = FUN_1439de930(param_1,&DAT_145cad2c0 + ((longlong)iVar4 + (longlong)iVar3 * 10) * 9);
      uVar6 = uVar6 + 1;
      *piVar5 = iVar3;
    } while ((int)uVar6 < 0x10);
  }
  cVar2 = FUN_1439df580(param_1,&DAT_145cad114);
  param_2[1] = cVar2;
  return;
}



// FUNCTION 1439deb80 FUN_1439deb80 body=203 status=ok
// SIG undefined FUN_1439deb80(void)

int FUN_1439deb80(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = ((uint)*(byte *)(((longlong)cVar4 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_1439ddec0(param_1);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb5500)[uVar3];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145cad120)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -(int)cVar4;
}



// FUNCTION 1439dec50 FUN_1439dec50 body=1380 status=ok
// SIG undefined FUN_1439dec50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439dec50(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  undefined4 local_b8;
  int local_b0;
  int local_a8;
  undefined8 local_98;
  int *local_90;
  int local_88;
  char *local_80;
  char *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  int iStack_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0x36a0;
  local_70 = param_2;
  cVar5 = FUN_1439d0850(lVar1,*(undefined1 *)(param_1 + 0x3824));
  param_3[2] = cVar5;
  if (cVar5 == '\0') {
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    cVar5 = FUN_1439df650(lVar1,param_1 + 0x308b);
    *param_3 = cVar5;
    if (cVar5 == '\x04') {
      param_3[3] = '\x01';
      puVar14 = (undefined4 *)(param_2 + 0xc);
      lVar18 = 0x10;
      do {
        uVar10 = FUN_1439de930(lVar1,param_1 + 0x3082);
        *puVar14 = uVar10;
        puVar14 = puVar14 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    cVar5 = FUN_1439df580(lVar1,param_1 + 0x308f);
    param_3[1] = cVar5;
    return;
  }
  local_90 = &local_68;
  local_78 = (char *)(param_2 + -0x4c);
  iVar7 = *(int *)(param_1 + 0xf08);
  piVar17 = (int *)&local_58;
  param_3[10] = '\0';
  local_80 = (char *)(param_2 + (longlong)iVar7 * -0x4c);
  iVar7 = FUN_1439d0850(lVar1,*(undefined1 *)(param_1 + 0x3825));
  if (iVar7 != 0) {
    cVar5 = FUN_1439d0850(lVar1,*(undefined1 *)(param_1 + 0x3826));
    param_3[2] = cVar5 + '\x02';
  }
  iVar13 = 0;
  local_64 = 0;
  iStack_60 = 0;
  local_68 = 0;
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  iVar7 = 0;
  if (local_80[2] != 0) {
    iVar7 = *(int *)(local_80 + 4);
    if (iVar7 != 0) {
      local_90 = &local_64;
      local_64 = iVar7;
      if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)local_80[2] * 4) !=
          *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
        local_64._0_2_ = (short)iVar7;
        local_64 = CONCAT22(-(short)((uint)iVar7 >> 0x10),-(short)local_64);
      }
      piVar17 = (int *)((longlong)&local_58 + 4);
    }
    *piVar17 = *piVar17 + 2;
    iVar7 = (int)local_58;
  }
  iStack_60 = 0;
  local_98._0_4_ = 0;
  if (local_78[2] != 0) {
    iVar9 = *(int *)(local_78 + 4);
    if (iVar9 == 0) {
      iVar7 = iVar7 + 2;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
    }
    else {
      local_98._0_4_ = iVar9;
      if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)local_78[2] * 4) !=
          *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
        local_98._0_2_ = (short)iVar9;
        local_98._2_2_ = (short)((uint)iVar9 >> 0x10);
        local_98._0_4_ = CONCAT22(-local_98._2_2_,-(short)local_98);
      }
      if ((int)local_98 != *local_90) {
        local_90 = local_90 + 1;
        piVar17 = piVar17 + 1;
        *local_90 = (int)local_98;
      }
      *piVar17 = *piVar17 + 2;
      local_98._0_4_ = local_50;
      iVar7 = (int)local_58;
    }
  }
  iVar16 = local_64;
  iVar9 = (int)local_98;
  local_50 = (int)local_98;
  if (local_80[-0x4a] != 0) {
    iVar8 = *(int *)(local_80 + -0x48);
    if (iVar8 == 0) {
      iVar7 = iVar7 + 1;
    }
    else {
      local_98._0_4_ = iVar8;
      if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)local_80[-0x4a] * 4) !=
          *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
        local_98._0_2_ = (short)iVar8;
        local_98._2_2_ = (short)((uint)iVar8 >> 0x10);
        local_98._0_4_ = CONCAT22(-local_98._2_2_,-(short)local_98);
      }
      if ((int)local_98 != *local_90) {
        local_90 = local_90 + 1;
        piVar17 = piVar17 + 1;
        *local_90 = (int)local_98;
      }
      local_50 = iVar9;
      *piVar17 = *piVar17 + 1;
      iVar7 = (int)local_58;
    }
  }
  iVar9 = local_50;
  iVar8 = FUN_1439d0850(lVar1,*(undefined4 *)(&DAT_145cb6e20 + (longlong)iVar7 * 0x10));
  if (iVar8 == 0) {
    *param_3 = '\a';
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    return;
  }
  iVar12 = (uint)(*local_90 == iVar16 && 0 < local_4c) + local_58._4_4_;
  iVar8 = iVar9;
  iVar15 = iVar16;
  if (iVar12 < iVar9) {
    local_64 = iStack_60;
    iVar8 = iVar12;
    iVar12 = iVar9;
    iVar15 = iStack_60;
    iStack_60 = iVar16;
  }
  local_98 = CONCAT44(local_98._4_4_,iVar12);
  iVar9 = FUN_1439d0850(lVar1,*(undefined4 *)(&DAT_145cb6e24 + (longlong)iVar12 * 0x10));
  if (iVar9 == 0) {
    *param_3 = '\x05';
    *(int *)(param_3 + 4) = iVar15;
  }
  else {
    iVar9 = FUN_1439d0850(lVar1,*(undefined4 *)(&DAT_145cb6e28 + (longlong)iVar8 * 0x10));
    pcVar3 = local_78;
    pcVar2 = local_80;
    if (iVar9 != 0) {
      iVar16 = *(int *)(param_1 + 0xf8c) + -0x80;
      iVar8 = *(int *)(param_1 + 0xf90) + 0x80;
      iVar9 = *(int *)(param_1 + 0xf88) + 0x80;
      local_88 = *(int *)(param_1 + 0xf84) + -0x80;
      local_58 = param_1 + 0x34b5;
      local_90 = (int *)CONCAT44(local_90._4_4_,iVar9);
      uVar11 = (ulonglong)(iVar7 <= (int)local_98);
      local_98 = uVar11 * 4;
      iVar7 = (int)*(short *)((longlong)&local_68 + local_98 + 2);
      if (iVar7 < local_88) {
        sVar6 = *(short *)(param_1 + 0xf84) + -0x80;
LAB_1439def61:
        *(short *)((longlong)&local_68 + local_98 + 2) = sVar6;
      }
      else if (iVar9 < iVar7) {
        sVar6 = *(short *)(param_1 + 0xf88) + 0x80;
        goto LAB_1439def61;
      }
      if (*(short *)(&local_68 + uVar11) < iVar16) {
        sVar6 = *(short *)(param_1 + 0xf8c) + -0x80;
      }
      else {
        if (*(short *)(&local_68 + uVar11) <= iVar8) goto LAB_1439def93;
        sVar6 = *(short *)(param_1 + 0xf90) + 0x80;
      }
      *(short *)(&local_68 + uVar11) = sVar6;
LAB_1439def93:
      if (*local_78 == '\t') {
        iVar13 = 2;
      }
      iVar7 = 0;
      if (*local_80 == '\t') {
        iVar7 = 2;
      }
      iVar7 = FUN_1439d0850(lVar1,*(undefined4 *)
                                   (&DAT_145cb6e2c +
                                   (ulonglong)(iVar13 + (uint)(local_80[-0x4c] == '\t') + iVar7) *
                                   0x10));
      lVar4 = local_58;
      lVar18 = local_70;
      if (iVar7 != 0) {
        local_d0 = *(undefined4 *)((longlong)&local_68 + local_98);
        local_b8 = (int)local_90;
        local_c0 = local_88;
        local_c8 = local_58;
        local_d8 = param_3;
        local_b0 = iVar16;
        local_a8 = iVar8;
        FUN_1439de170(lVar1,local_70,pcVar3,pcVar2);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar18 + 0x48);
        *param_3 = '\t';
        param_3[3] = '\x01';
        return;
      }
      sVar6 = FUN_1439df1c0(lVar1,local_58);
      *(short *)(param_3 + 4) = sVar6 * 2;
      sVar6 = FUN_1439df1c0(lVar1,lVar4 + 0x13);
      *(short *)(param_3 + 6) = sVar6 * 2;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + *(short *)((longlong)&local_68 + local_98)
      ;
      *(short *)(param_3 + 6) =
           *(short *)(param_3 + 6) + *(short *)((longlong)&local_68 + local_98 + 2);
      *param_3 = '\b';
      param_3[10] = ((*(short *)(param_3 + 6) < local_88 || (int)local_90 < *(short *)(param_3 + 6))
                    || iVar8 < *(short *)(param_3 + 4)) || *(short *)(param_3 + 4) < iVar16;
      return;
    }
    *(int *)(param_3 + 4) = iStack_60;
    *param_3 = '\x06';
  }
  if ((int)*(short *)(param_3 + 6) < *(int *)(param_1 + 0xf84) + -0x80) {
    sVar6 = *(short *)(param_1 + 0xf84) + -0x80;
  }
  else {
    if ((int)*(short *)(param_3 + 6) <= *(int *)(param_1 + 0xf88) + 0x80) goto LAB_1439df0eb;
    sVar6 = *(short *)(param_1 + 0xf88) + 0x80;
  }
  *(short *)(param_3 + 6) = sVar6;
LAB_1439df0eb:
  if ((int)*(short *)(param_3 + 4) < *(int *)(param_1 + 0xf8c) + -0x80) {
    *(short *)(param_3 + 4) = *(short *)(param_1 + 0xf8c) + -0x80;
  }
  else if (*(int *)(param_1 + 0xf90) + 0x80 < (int)*(short *)(param_3 + 4)) {
    *(short *)(param_3 + 4) = *(short *)(param_1 + 0xf90) + 0x80;
  }
  return;
}



// FUNCTION 1439df1c0 FUN_1439df1c0 body=564 status=ok
// SIG undefined FUN_1439df1c0(void)

uint FUN_1439df1c0(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar6 = 0;
  iVar2 = FUN_1439d0850(param_1,*param_2);
  if (iVar2 == 0) {
    cVar5 = '\0';
    do {
      uVar6 = ((uint)(byte)param_2[((longlong)cVar5 >> 1) + 2] * (*(int *)(param_1 + 0x1c) + -1) >>
              8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar8 = *(ulonglong *)(param_1 + 0x10);
      uVar4 = (ulonglong)uVar6 << 0x38;
      bVar10 = uVar4 <= uVar8;
      if (bVar10) {
        uVar6 = *(int *)(param_1 + 0x1c) - uVar6;
        uVar8 = uVar8 - uVar4;
      }
      bVar1 = (&DAT_145cb5500)[uVar6];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar8 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar6 << (bVar1 & 0x1f);
      cVar5 = (&DAT_145cad270)[(int)((int)cVar5 + (uint)bVar10)];
    } while ('\0' < cVar5);
    uVar6 = -(int)cVar5;
  }
  else {
    pbVar9 = param_2 + 9;
    iVar2 = 0;
    do {
      uVar7 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar8 = *(ulonglong *)(param_1 + 0x10);
      uVar4 = (ulonglong)uVar7 << 0x38;
      bVar10 = uVar4 <= uVar8;
      if (bVar10) {
        uVar7 = *(int *)(param_1 + 0x1c) - uVar7;
        uVar8 = uVar8 - uVar4;
      }
      pbVar9 = pbVar9 + 1;
      bVar1 = (&DAT_145cb5500)[uVar7];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar3 = (byte)iVar2;
      iVar2 = iVar2 + 1;
      uVar6 = uVar6 + ((uint)bVar10 << (bVar3 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar8 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar7 << (bVar1 & 0x1f);
    } while (iVar2 < 3);
    iVar2 = 9;
    pbVar9 = param_2 + 0x12;
    do {
      uVar7 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar8 = *(ulonglong *)(param_1 + 0x10);
      uVar4 = (ulonglong)uVar7 << 0x38;
      bVar10 = uVar4 <= uVar8;
      if (bVar10) {
        uVar7 = *(int *)(param_1 + 0x1c) - uVar7;
        uVar8 = uVar8 - uVar4;
      }
      pbVar9 = pbVar9 + -1;
      bVar1 = (&DAT_145cb5500)[uVar7];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar3 = (byte)iVar2;
      iVar2 = iVar2 + -1;
      uVar6 = uVar6 + ((uint)bVar10 << (bVar3 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar8 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar7 << (bVar1 & 0x1f);
    } while (3 < iVar2);
    if ((uVar6 & 0xfff0) != 0) {
      iVar2 = FUN_1439d0850(param_1,param_2[0xc]);
      if (iVar2 == 0) goto LAB_1439df3c3;
    }
    uVar6 = uVar6 + 8;
  }
LAB_1439df3c3:
  if (uVar6 != 0) {
    iVar2 = FUN_1439d0850(param_1,param_2[1]);
    if (iVar2 != 0) {
      uVar6 = -uVar6;
    }
  }
  return uVar6;
}



// FUNCTION 1439df400 FUN_1439df400 body=384 status=ok
// SIG undefined FUN_1439df400(void)

void FUN_1439df400(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_res8;
  longlong local_res18;
  
  local_res18 = 2;
  local_res8 = &DAT_145cb5f10;
  do {
    pbVar8 = local_res8 + param_2 + -0x145cb5f10;
    pbVar6 = local_res8;
    do {
      uVar3 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar6 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_1439ddec0(param_1);
      }
      uVar5 = *(ulonglong *)(param_1 + 0x10);
      uVar2 = (ulonglong)uVar3 << 0x38;
      bVar9 = uVar2 <= uVar5;
      if (bVar9) {
        uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
        uVar5 = uVar5 - uVar2;
      }
      pbVar6 = pbVar6 + 1;
      bVar1 = (&DAT_145cb5500)[uVar3];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar3 << (bVar1 & 0x1f);
      if (bVar9) {
        uVar3 = 0;
        iVar7 = 6;
        do {
          uVar4 = (*(int *)(param_1 + 0x1c) * 0x80 - 0x80U >> 8) + 1;
          if (*(int *)(param_1 + 0x18) < 0) {
            FUN_1439ddec0(param_1);
          }
          uVar5 = *(ulonglong *)(param_1 + 0x10);
          uVar2 = (ulonglong)uVar4 << 0x38;
          bVar9 = uVar2 <= uVar5;
          if (bVar9) {
            uVar4 = *(int *)(param_1 + 0x1c) - uVar4;
            uVar5 = uVar5 - uVar2;
          }
          bVar1 = (&DAT_145cb5500)[uVar4];
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
          uVar3 = uVar3 | (uint)bVar9 << ((byte)iVar7 & 0x1f);
          *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
          iVar7 = iVar7 + -1;
          *(uint *)(param_1 + 0x1c) = uVar4 << (bVar1 & 0x1f);
        } while (-1 < iVar7);
        if ((char)uVar3 == '\0') {
          bVar1 = 1;
        }
        else {
          bVar1 = (char)uVar3 * '\x02';
        }
        *pbVar8 = bVar1;
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 < local_res8 + param_2 + -0x145cb5efd);
    local_res8 = local_res8 + 0x13;
    local_res18 = local_res18 + -1;
  } while (local_res18 != 0);
  return;
}



// FUNCTION 1439df580 FUN_1439df580 body=203 status=ok
// SIG undefined FUN_1439df580(void)

int FUN_1439df580(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = ((uint)*(byte *)(((longlong)cVar4 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_1439ddec0(param_1);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb5500)[uVar3];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145cad128)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -(int)cVar4;
}



// FUNCTION 1439df650 FUN_1439df650 body=203 status=ok
// SIG undefined FUN_1439df650(void)

int FUN_1439df650(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  cVar4 = '\0';
  do {
    uVar3 = ((uint)*(byte *)(((longlong)cVar4 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_1439ddec0(param_1);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = (ulonglong)uVar3 << 0x38;
    bVar6 = uVar2 <= uVar5;
    if (bVar6) {
      uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
      uVar5 = uVar5 - uVar2;
    }
    bVar1 = (&DAT_145cb5500)[uVar3];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar5 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar3 << (bVar1 & 0x1f);
    cVar4 = (&DAT_145cad118)[(int)((int)cVar4 + (uint)bVar6)];
  } while ('\0' < cVar4);
  return -(int)cVar4;
}



// FUNCTION 1439df720 FUN_1439df720 body=799 status=ok
// SIG undefined FUN_1439df720(void)

void FUN_1439df720(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x1eb0);
  FUN_1439de530();
  *(undefined4 *)(param_1 + 0xf8c) = 0;
  local_res8 = 0;
  *(int *)(param_1 + 0xf90) = *(int *)(param_1 + 0x1e74) * 0x80 + -0x80;
  iVar3 = *(int *)(param_1 + 0x1e78);
  if (0 < *(int *)(param_1 + 0x1e74)) {
    do {
      iVar10 = 0;
      *(undefined4 *)(param_1 + 0xf84) = 0;
      *(int *)(param_1 + 0xf88) = iVar3 * 0x80 + -0x80;
      if (0 < *(int *)(param_1 + 0x1e78)) {
        do {
          if (*(char *)(param_1 + 0xf61) == '\0') {
            if (*(int *)(param_1 + 0x1e64) == 0) {
              *(undefined1 *)(lVar5 + 0xb) = 0;
            }
          }
          else {
            lVar1 = param_1 + 0x36a0;
            if (*(char *)(param_1 + 0xf60) != '\0') {
              uVar6 = ((uint)*(byte *)(param_1 + 0xf64) * (*(int *)(param_1 + 0x36bc) + -1) >> 8) +
                      1;
              if (*(int *)(param_1 + 0x36b8) < 0) {
                FUN_1439ddec0(lVar1);
              }
              uVar8 = *(ulonglong *)(param_1 + 14000);
              uVar4 = (ulonglong)uVar6 << 0x38;
              bVar11 = uVar8 < uVar4;
              if (!bVar11) {
                uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
                uVar8 = uVar8 - uVar4;
              }
              bVar2 = (&DAT_145cb5500)[uVar6];
              iVar9 = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
              iVar7 = uVar6 << (bVar2 & 0x1f);
              *(ulonglong *)(param_1 + 14000) = uVar8 << (bVar2 & 0x3f);
              *(int *)(param_1 + 0x36b8) = iVar9;
              *(int *)(param_1 + 0x36bc) = iVar7;
              iVar7 = iVar7 + -1;
              if (bVar11) {
                uVar6 = ((uint)*(byte *)(param_1 + 0xf65) * iVar7 >> 8) + 1;
                if (iVar9 < 0) {
                  FUN_1439ddec0(lVar1);
                }
                uVar8 = *(ulonglong *)(param_1 + 14000);
                uVar4 = (ulonglong)uVar6 << 0x38;
                bVar11 = uVar4 <= uVar8;
                if (bVar11) {
                  uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
                  uVar8 = uVar8 - uVar4;
                }
                bVar2 = (&DAT_145cb5500)[uVar6];
                *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
                *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
                *(ulonglong *)(param_1 + 14000) = uVar8 << (bVar2 & 0x3f);
                *(bool *)(lVar5 + 0xb) = bVar11;
              }
              else {
                uVar6 = ((uint)*(byte *)(param_1 + 0xf66) * iVar7 >> 8) + 1;
                if (iVar9 < 0) {
                  FUN_1439ddec0(lVar1);
                }
                uVar8 = *(ulonglong *)(param_1 + 14000);
                uVar4 = (ulonglong)uVar6 << 0x38;
                bVar11 = uVar4 <= uVar8;
                if (bVar11) {
                  uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
                  uVar8 = uVar8 - uVar4;
                }
                bVar2 = (&DAT_145cb5500)[uVar6];
                *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
                *(ulonglong *)(param_1 + 14000) = uVar8 << (bVar2 & 0x3f);
                *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
                *(char *)(lVar5 + 0xb) = bVar11 + '\x02';
              }
            }
          }
          if (*(int *)(param_1 + 0x1e80) == 0) {
            *(undefined1 *)(lVar5 + 9) = 0;
          }
          else {
            uVar6 = ((uint)*(byte *)(param_1 + 0x3827) * (*(int *)(param_1 + 0x36bc) + -1) >> 8) + 1
            ;
            if (*(int *)(param_1 + 0x36b8) < 0) {
              FUN_1439ddec0(param_1 + 0x36a0);
            }
            uVar8 = *(ulonglong *)(param_1 + 14000);
            uVar4 = (ulonglong)uVar6 << 0x38;
            bVar11 = uVar4 <= uVar8;
            if (bVar11) {
              uVar6 = *(int *)(param_1 + 0x36bc) - uVar6;
              uVar8 = uVar8 - uVar4;
            }
            bVar2 = (&DAT_145cb5500)[uVar6];
            *(int *)(param_1 + 0x36b8) = *(int *)(param_1 + 0x36b8) - (uint)bVar2;
            *(uint *)(param_1 + 0x36bc) = uVar6 << (bVar2 & 0x1f);
            *(ulonglong *)(param_1 + 14000) = uVar8 << (bVar2 & 0x3f);
            *(bool *)(lVar5 + 9) = bVar11;
          }
          *(undefined1 *)(lVar5 + 3) = 0;
          if (*(int *)(param_1 + 0x1e64) == 0) {
            FUN_1439dea00();
          }
          else {
            FUN_1439dec50(param_1,lVar5,lVar5);
          }
          *(int *)(param_1 + 0xf84) = *(int *)(param_1 + 0xf84) + -0x80;
          lVar5 = lVar5 + 0x4c;
          *(int *)(param_1 + 0xf88) = *(int *)(param_1 + 0xf88) + -0x80;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x1e78));
      }
      *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + -0x80;
      local_res8 = local_res8 + 1;
      *(int *)(param_1 + 0xf90) = *(int *)(param_1 + 0xf90) + -0x80;
      lVar5 = lVar5 + 0x4c;
    } while (local_res8 < *(int *)(param_1 + 0x1e74));
  }
  return;
}



// FUNCTION 1439dfa40 FUN_1439dfa40 body=2307 status=ok
// SIG undefined FUN_1439dfa40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439dfa40(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [15];
  undefined1 auVar129 [15];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  undefined1 auVar151 [15];
  undefined1 auVar152 [15];
  undefined1 auVar153 [15];
  undefined1 auVar154 [15];
  undefined1 auVar155 [15];
  undefined1 auVar156 [15];
  undefined1 auVar157 [15];
  undefined1 auVar158 [15];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [15];
  undefined1 auVar167 [15];
  undefined1 auVar168 [15];
  undefined1 auVar169 [15];
  undefined1 auVar170 [15];
  undefined1 auVar171 [15];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [15];
  undefined1 auVar178 [15];
  undefined1 auVar179 [15];
  undefined1 auVar180 [15];
  undefined1 auVar181 [15];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [14];
  undefined1 auVar198 [12];
  unkuint10 Var199;
  undefined1 auVar200 [15];
  unkuint9 Var201;
  undefined1 auVar202 [11];
  undefined1 auVar203 [13];
  undefined1 auVar204 [15];
  undefined1 auVar205 [11];
  undefined1 auVar206 [13];
  undefined1 auVar207 [15];
  undefined1 auVar208 [11];
  undefined1 auVar209 [13];
  undefined1 auVar210 [15];
  undefined1 auVar211 [11];
  undefined1 auVar212 [13];
  undefined1 auVar213 [15];
  undefined1 auVar214 [11];
  undefined1 auVar215 [13];
  undefined1 auVar216 [15];
  undefined1 auVar217 [11];
  undefined1 auVar218 [13];
  undefined1 auVar219 [15];
  undefined1 auVar220 [11];
  undefined1 auVar221 [13];
  undefined1 auVar222 [15];
  undefined1 auVar223 [11];
  undefined1 auVar224 [13];
  undefined1 auVar225 [15];
  undefined1 auVar226 [11];
  undefined1 auVar227 [13];
  undefined1 auVar228 [15];
  undefined1 auVar229 [11];
  undefined1 auVar230 [13];
  undefined1 auVar231 [15];
  undefined1 auVar232 [11];
  undefined1 auVar233 [13];
  undefined1 auVar234 [15];
  undefined1 auVar235 [11];
  undefined1 auVar236 [13];
  undefined1 auVar237 [15];
  undefined1 auVar238 [11];
  undefined1 auVar239 [13];
  undefined1 auVar240 [15];
  undefined1 auVar241 [11];
  undefined1 auVar242 [13];
  undefined1 auVar243 [15];
  undefined1 auVar244 [11];
  undefined1 auVar245 [13];
  undefined1 auVar246 [14];
  undefined1 auVar247 [12];
  undefined1 auVar248 [15];
  undefined1 auVar249 [11];
  undefined1 auVar250 [13];
  undefined1 auVar251 [15];
  undefined1 auVar252 [11];
  undefined1 auVar253 [13];
  undefined1 auVar254 [15];
  undefined1 auVar255 [11];
  undefined1 auVar256 [13];
  undefined1 auVar257 [15];
  undefined1 auVar258 [11];
  undefined1 auVar259 [13];
  undefined1 auVar260 [15];
  undefined1 auVar261 [11];
  undefined1 auVar262 [13];
  undefined1 auVar263 [15];
  undefined1 auVar264 [11];
  undefined1 auVar265 [13];
  undefined1 auVar266 [15];
  undefined1 auVar267 [11];
  undefined1 auVar268 [13];
  undefined1 auVar269 [15];
  undefined1 auVar270 [11];
  undefined1 auVar271 [13];
  undefined1 auVar272 [15];
  undefined1 auVar273 [11];
  undefined1 auVar274 [13];
  undefined1 auVar275 [15];
  undefined1 auVar276 [11];
  undefined1 auVar277 [13];
  undefined1 auVar278 [15];
  undefined1 auVar279 [11];
  undefined1 auVar280 [13];
  undefined1 auVar281 [15];
  undefined1 auVar282 [11];
  undefined1 auVar283 [13];
  undefined1 auVar284 [15];
  undefined1 auVar285 [11];
  undefined1 auVar286 [13];
  undefined1 auVar287 [15];
  undefined1 auVar288 [11];
  undefined1 auVar289 [13];
  undefined1 auVar290 [15];
  undefined1 auVar291 [11];
  undefined1 auVar292 [13];
  undefined1 auVar293 [15];
  undefined1 auVar294 [15];
  undefined1 auVar295 [15];
  undefined1 auVar296 [15];
  undefined1 auVar297 [15];
  undefined1 auVar298 [15];
  undefined1 auVar299 [15];
  undefined1 auVar300 [15];
  undefined1 auVar301 [15];
  undefined1 auVar302 [15];
  undefined1 auVar303 [15];
  undefined1 auVar304 [15];
  undefined1 auVar305 [15];
  undefined1 auVar306 [15];
  undefined1 auVar307 [15];
  undefined1 auVar308 [15];
  undefined1 auVar309 [15];
  undefined1 auVar310 [15];
  undefined1 auVar311 [15];
  undefined1 auVar312 [15];
  undefined1 auVar313 [15];
  undefined1 auVar314 [15];
  undefined1 auVar315 [15];
  undefined1 auVar316 [15];
  undefined1 auVar317 [15];
  undefined1 auVar318 [15];
  undefined1 auVar319 [15];
  undefined1 auVar320 [15];
  undefined1 auVar321 [15];
  undefined1 auVar322 [15];
  undefined1 auVar323 [15];
  undefined1 auVar324 [15];
  undefined1 auVar325 [15];
  undefined1 auVar326 [15];
  undefined1 auVar327 [15];
  undefined1 auVar328 [15];
  undefined1 auVar329 [15];
  undefined1 auVar330 [15];
  undefined1 auVar331 [15];
  undefined1 auVar332 [15];
  undefined1 auVar333 [15];
  undefined1 auVar334 [15];
  undefined1 auVar335 [15];
  undefined1 auVar336 [15];
  undefined1 auVar337 [15];
  undefined1 auVar338 [15];
  undefined1 auVar339 [15];
  undefined1 auVar340 [15];
  undefined1 auVar341 [15];
  undefined1 auVar342 [15];
  undefined1 auVar343 [15];
  undefined1 auVar344 [15];
  undefined1 auVar345 [15];
  undefined1 auVar346 [15];
  undefined1 auVar347 [15];
  undefined1 auVar348 [15];
  undefined1 auVar349 [15];
  undefined1 auVar350 [15];
  undefined1 auVar351 [15];
  undefined1 auVar352 [15];
  undefined1 auVar353 [13];
  undefined1 auVar354 [11];
  undefined1 auVar355 [15];
  undefined1 auVar356 [13];
  undefined1 auVar357 [11];
  undefined1 auVar358 [15];
  undefined1 auVar359 [15];
  undefined1 auVar360 [15];
  undefined1 auVar361 [15];
  undefined1 auVar362 [15];
  undefined1 auVar363 [15];
  undefined1 auVar364 [15];
  undefined1 auVar365 [15];
  undefined1 auVar366 [15];
  undefined1 auVar367 [15];
  undefined1 auVar368 [15];
  longlong lVar369;
  longlong lVar370;
  longlong lVar371;
  longlong lVar372;
  longlong lVar373;
  longlong lVar374;
  longlong lVar375;
  longlong lVar376;
  longlong lVar377;
  longlong lVar378;
  longlong lVar379;
  longlong lVar380;
  longlong lVar381;
  longlong lVar382;
  short sVar383;
  short sVar385;
  short sVar386;
  byte bVar388;
  short sVar387;
  short sVar389;
  short sVar390;
  short sVar391;
  undefined1 auVar384 [16];
  short sVar392;
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auStack_358 [32];
  int local_338;
  ulonglong *local_330;
  short local_308;
  short sStack_306;
  short sStack_304;
  short sStack_302;
  short sStack_300;
  short sStack_2fe;
  short sStack_2fc;
  short sStack_2fa;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
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
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_2e8 = *param_1;
  uStack_2e0 = param_1[1];
  local_2d8 = param_1[4];
  uStack_2d0 = param_1[5];
  local_2c8 = param_1[8];
  uStack_2c0 = param_1[9];
  local_2b8 = param_1[0xc];
  uStack_2b0 = param_1[0xd];
  local_2a8 = param_1[0x10];
  uStack_2a0 = param_1[0x11];
  local_298 = param_1[0x14];
  uStack_290 = param_1[0x15];
  local_288 = param_1[0x18];
  uStack_280 = param_1[0x19];
  local_278 = param_1[0x1c];
  uStack_270 = param_1[0x1d];
  local_268 = param_1[0x20];
  uStack_260 = param_1[0x21];
  local_258 = param_1[0x24];
  uStack_250 = param_1[0x25];
  local_248 = param_1[0x28];
  uStack_240 = param_1[0x29];
  local_238 = param_1[0x2c];
  uStack_230 = param_1[0x2d];
  local_228 = param_1[0x30];
  uStack_220 = param_1[0x31];
  local_218 = param_1[0x34];
  uStack_210 = param_1[0x35];
  local_208 = param_1[0x38];
  uStack_200 = param_1[0x39];
  local_1f8 = param_1[0x3c];
  uStack_1f0 = param_1[0x3d];
  local_1e8 = param_1[2];
  uStack_1e0 = param_1[3];
  local_1d8 = param_1[6];
  uStack_1d0 = param_1[7];
  local_1c8 = param_1[10];
  uStack_1c0 = param_1[0xb];
  local_1b8 = param_1[0xe];
  uStack_1b0 = param_1[0xf];
  local_1a8 = param_1[0x12];
  uStack_1a0 = param_1[0x13];
  local_198 = param_1[0x16];
  uStack_190 = param_1[0x17];
  local_188 = param_1[0x1a];
  uStack_180 = param_1[0x1b];
  local_178 = param_1[0x1e];
  uStack_170 = param_1[0x1f];
  local_168 = param_1[0x22];
  uStack_160 = param_1[0x23];
  local_158 = param_1[0x26];
  uStack_150 = param_1[0x27];
  local_148 = param_1[0x2a];
  uStack_140 = param_1[0x2b];
  local_138 = param_1[0x2e];
  uStack_130 = param_1[0x2f];
  local_128 = param_1[0x32];
  uStack_120 = param_1[0x33];
  local_118 = param_1[0x36];
  uStack_110 = param_1[0x37];
  local_108 = param_1[0x3a];
  uStack_100 = param_1[0x3b];
  local_f8 = param_1[0x3e];
  uStack_f0 = param_1[0x3f];
  local_338 = param_3;
  local_330 = param_2;
  if (param_4 == 0) {
    FUN_1439ba090(&local_2e8,&local_1e8);
  }
  else {
    if (param_4 == 1) {
      FUN_1439ba090(&local_2e8,&local_1e8);
      FUN_1439b8980(&local_2e8,&local_1e8);
      goto LAB_1439dfcf1;
    }
    if (param_4 != 2) {
      if (param_4 == 3) {
        FUN_1439b8980(&local_2e8,&local_1e8);
        FUN_1439b8980(&local_2e8,&local_1e8);
      }
      goto LAB_1439dfcf1;
    }
    FUN_1439b8980(&local_2e8,&local_1e8);
  }
  FUN_1439ba090(&local_2e8,&local_1e8);
LAB_1439dfcf1:
  auVar393._8_8_ = uStack_2d0;
  auVar393._0_8_ = local_2d8;
  auVar395._8_8_ = uStack_2c0;
  auVar395._0_8_ = local_2c8;
  auVar394 = paddsw(auVar393,_DAT_145cacc40);
  auVar396._8_8_ = uStack_2b0;
  auVar396._0_8_ = local_2b8;
  auVar395 = paddsw(auVar395,_DAT_145cacc40);
  auVar397._8_8_ = uStack_2a0;
  auVar397._0_8_ = local_2a8;
  auVar398._8_8_ = uStack_290;
  auVar398._0_8_ = local_298;
  auVar396 = paddsw(auVar396,_DAT_145cacc40);
  auVar399._8_8_ = uStack_280;
  auVar399._0_8_ = local_288;
  auVar397 = paddsw(auVar397,_DAT_145cacc40);
  auVar400._8_8_ = uStack_270;
  auVar400._0_8_ = local_278;
  auVar398 = paddsw(auVar398,_DAT_145cacc40);
  auVar401._8_8_ = uStack_260;
  auVar401._0_8_ = local_268;
  auVar399 = paddsw(auVar399,_DAT_145cacc40);
  auVar402._8_8_ = uStack_250;
  auVar402._0_8_ = local_258;
  auVar400 = paddsw(auVar400,_DAT_145cacc40);
  auVar403._8_8_ = uStack_240;
  auVar403._0_8_ = local_248;
  auVar401 = paddsw(auVar401,_DAT_145cacc40);
  auVar404._8_8_ = uStack_230;
  auVar404._0_8_ = local_238;
  auVar402 = paddsw(auVar402,_DAT_145cacc40);
  auVar405._8_8_ = uStack_220;
  auVar405._0_8_ = local_228;
  auVar403 = paddsw(auVar403,_DAT_145cacc40);
  auVar406._8_8_ = uStack_210;
  auVar406._0_8_ = local_218;
  auVar404 = paddsw(auVar404,_DAT_145cacc40);
  auVar407._8_8_ = uStack_200;
  auVar407._0_8_ = local_208;
  auVar405 = paddsw(auVar405,_DAT_145cacc40);
  auVar406 = paddsw(auVar406,_DAT_145cacc40);
  lVar369 = (longlong)(local_338 * 2);
  auVar384._8_8_ = uStack_2e0;
  auVar384._0_8_ = local_2e8;
  auVar393 = paddsw(_DAT_145cacc40,auVar384);
  auVar407 = paddsw(auVar407,_DAT_145cacc40);
  auVar408._8_8_ = uStack_1f0;
  auVar408._0_8_ = local_1f8;
  auVar384 = paddsw(auVar408,_DAT_145cacc40);
  auVar384 = psraw(auVar384,6);
  uVar1 = *local_330;
  bVar388 = (byte)(uVar1 >> 0x38);
  auVar358._8_6_ = 0;
  auVar358._0_8_ = uVar1;
  auVar358[0xe] = bVar388;
  auVar360._8_4_ = 0;
  auVar360._0_8_ = uVar1;
  auVar360[0xc] = (char)(uVar1 >> 0x30);
  auVar360._13_2_ = auVar358._13_2_;
  auVar362._8_4_ = 0;
  auVar362._0_8_ = uVar1;
  auVar362._12_3_ = auVar360._12_3_;
  auVar364._8_2_ = 0;
  auVar364._0_8_ = uVar1;
  auVar364[10] = (char)(uVar1 >> 0x28);
  auVar364._11_4_ = auVar362._11_4_;
  auVar366._8_2_ = 0;
  auVar366._0_8_ = uVar1;
  auVar366._10_5_ = auVar364._10_5_;
  auVar368[8] = (char)(uVar1 >> 0x20);
  auVar368._0_8_ = uVar1;
  auVar368._9_6_ = auVar366._9_6_;
  Var199 = CONCAT91((unkuint9)auVar368._8_7_ << 8,(char)(uVar1 >> 0x18));
  auVar354[10] = 0;
  auVar354._0_10_ = Var199;
  auVar198._1_11_ = auVar354 << 8;
  auVar198[0] = (char)(uVar1 >> 0x10);
  auVar353[0xc] = 0;
  auVar353._0_12_ = auVar198;
  auVar197._1_13_ = auVar353 << 8;
  auVar197[0] = (char)(uVar1 >> 8);
  auVar393 = psraw(auVar393,6);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar197._0_2_ + auVar393._2_2_;
  sVar386 = auVar198._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var199 + auVar393._6_2_;
  sVar389 = auVar368._8_2_ + auVar393._8_2_;
  sVar390 = auVar364._10_2_ + auVar393._10_2_;
  sVar391 = auVar360._12_2_ + auVar393._12_2_;
  sVar392 = (ushort)bVar388 + auVar393._14_2_;
  auVar393 = psraw(auVar394,6);
  *local_330 = CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                        CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 -
                                 (0xff < sVar391),
                                 CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                          (0xff < sVar390),
                                          CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389
                                                   - (0xff < sVar389),
                                                   CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                            (char)sVar387 - (0xff < sVar387),
                                                            CONCAT12((0 < sVar386) *
                                                                     (sVar386 < 0x100) *
                                                                     (char)sVar386 -
                                                                     (0xff < sVar386),
                                                                     CONCAT11((0 < sVar385) *
                                                                              (sVar385 < 0x100) *
                                                                              (char)sVar385 -
                                                                              (0xff < sVar385),
                                                                              (0 < sVar383) *
                                                                              (sVar383 < 0x100) *
                                                                              (char)sVar383 -
                                                                              (0xff < sVar383)))))))
                       );
  uVar1 = *(ulonglong *)((longlong)local_338 + (longlong)local_330);
  auVar30._8_6_ = 0;
  auVar30._0_8_ = uVar1;
  auVar30[0xe] = (char)(uVar1 >> 0x38);
  auVar60._8_4_ = 0;
  auVar60._0_8_ = uVar1;
  auVar60[0xc] = (char)(uVar1 >> 0x30);
  auVar60._13_2_ = auVar30._13_2_;
  auVar90._8_4_ = 0;
  auVar90._0_8_ = uVar1;
  auVar90._12_3_ = auVar60._12_3_;
  auVar120._8_2_ = 0;
  auVar120._0_8_ = uVar1;
  auVar120[10] = (char)(uVar1 >> 0x28);
  auVar120._11_4_ = auVar90._11_4_;
  auVar150._8_2_ = 0;
  auVar150._0_8_ = uVar1;
  auVar150._10_5_ = auVar120._10_5_;
  auVar180[8] = (char)(uVar1 >> 0x20);
  auVar180._0_8_ = uVar1;
  auVar180._9_6_ = auVar150._9_6_;
  auVar200._7_8_ = 0;
  auVar200._0_7_ = auVar180._8_7_;
  Var201 = CONCAT81(SUB158(auVar200 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar293._9_6_ = 0;
  auVar293._0_9_ = Var201;
  auVar202._1_10_ = SUB1510(auVar293 << 0x30,5);
  auVar202[0] = (char)(uVar1 >> 0x10);
  auVar294._11_4_ = 0;
  auVar294._0_11_ = auVar202;
  auVar203._1_12_ = SUB1512(auVar294 << 0x20,3);
  auVar203[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar203._0_2_ + auVar393._2_2_;
  sVar386 = auVar202._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var201 + auVar393._6_2_;
  sVar389 = auVar180._8_2_ + auVar393._8_2_;
  sVar390 = auVar120._10_2_ + auVar393._10_2_;
  sVar391 = auVar60._12_2_ + auVar393._12_2_;
  sVar392 = (auVar30._13_2_ >> 8) + auVar393._14_2_;
  auVar393 = psraw(auVar395,6);
  *(ulonglong *)((longlong)local_338 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar369 + (longlong)local_330);
  auVar2._8_6_ = 0;
  auVar2._0_8_ = uVar1;
  auVar2[0xe] = (char)(uVar1 >> 0x38);
  auVar31._8_4_ = 0;
  auVar31._0_8_ = uVar1;
  auVar31[0xc] = (char)(uVar1 >> 0x30);
  auVar31._13_2_ = auVar2._13_2_;
  auVar61._8_4_ = 0;
  auVar61._0_8_ = uVar1;
  auVar61._12_3_ = auVar31._12_3_;
  auVar91._8_2_ = 0;
  auVar91._0_8_ = uVar1;
  auVar91[10] = (char)(uVar1 >> 0x28);
  auVar91._11_4_ = auVar61._11_4_;
  auVar121._8_2_ = 0;
  auVar121._0_8_ = uVar1;
  auVar121._10_5_ = auVar91._10_5_;
  auVar151[8] = (char)(uVar1 >> 0x20);
  auVar151._0_8_ = uVar1;
  auVar151._9_6_ = auVar121._9_6_;
  auVar204._7_8_ = 0;
  auVar204._0_7_ = auVar151._8_7_;
  Var201 = CONCAT81(SUB158(auVar204 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar295._9_6_ = 0;
  auVar295._0_9_ = Var201;
  auVar205._1_10_ = SUB1510(auVar295 << 0x30,5);
  auVar205[0] = (char)(uVar1 >> 0x10);
  auVar296._11_4_ = 0;
  auVar296._0_11_ = auVar205;
  auVar206._1_12_ = SUB1512(auVar296 << 0x20,3);
  auVar206[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar206._0_2_ + auVar393._2_2_;
  sVar386 = auVar205._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var201 + auVar393._6_2_;
  sVar389 = auVar151._8_2_ + auVar393._8_2_;
  sVar390 = auVar91._10_2_ + auVar393._10_2_;
  sVar391 = auVar31._12_2_ + auVar393._12_2_;
  sVar392 = (auVar2._13_2_ >> 8) + auVar393._14_2_;
  *(ulonglong *)(lVar369 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  lVar380 = (longlong)(local_338 * 3);
  auVar393 = psraw(auVar396,6);
  auVar395 = psraw(auVar397,6);
  auVar396 = psraw(auVar398,6);
  uVar1 = *(ulonglong *)((longlong)local_330 + lVar380);
  auVar3._8_6_ = 0;
  auVar3._0_8_ = uVar1;
  auVar3[0xe] = (char)(uVar1 >> 0x38);
  auVar32._8_4_ = 0;
  auVar32._0_8_ = uVar1;
  auVar32[0xc] = (char)(uVar1 >> 0x30);
  auVar32._13_2_ = auVar3._13_2_;
  auVar62._8_4_ = 0;
  auVar62._0_8_ = uVar1;
  auVar62._12_3_ = auVar32._12_3_;
  auVar92._8_2_ = 0;
  auVar92._0_8_ = uVar1;
  auVar92[10] = (char)(uVar1 >> 0x28);
  auVar92._11_4_ = auVar62._11_4_;
  auVar122._8_2_ = 0;
  auVar122._0_8_ = uVar1;
  auVar122._10_5_ = auVar92._10_5_;
  auVar152[8] = (char)(uVar1 >> 0x20);
  auVar152._0_8_ = uVar1;
  auVar152._9_6_ = auVar122._9_6_;
  auVar207._7_8_ = 0;
  auVar207._0_7_ = auVar152._8_7_;
  Var201 = CONCAT81(SUB158(auVar207 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar297._9_6_ = 0;
  auVar297._0_9_ = Var201;
  auVar208._1_10_ = SUB1510(auVar297 << 0x30,5);
  auVar208[0] = (char)(uVar1 >> 0x10);
  auVar298._11_4_ = 0;
  auVar298._0_11_ = auVar208;
  auVar209._1_12_ = SUB1512(auVar298 << 0x20,3);
  auVar209[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar209._0_2_ + auVar393._2_2_;
  sVar386 = auVar208._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var201 + auVar393._6_2_;
  sVar389 = auVar152._8_2_ + auVar393._8_2_;
  sVar390 = auVar92._10_2_ + auVar393._10_2_;
  sVar391 = auVar32._12_2_ + auVar393._12_2_;
  sVar392 = (auVar3._13_2_ >> 8) + auVar393._14_2_;
  auVar393 = psraw(auVar399,6);
  *(ulonglong *)((longlong)local_330 + lVar380) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  auVar397 = psraw(auVar400,6);
  auVar398 = psraw(auVar401,6);
  auVar399 = psraw(auVar402,6);
  auVar400 = psraw(auVar403,6);
  auVar401 = psraw(auVar404,6);
  auVar402 = psraw(auVar405,6);
  auVar403 = psraw(auVar406,6);
  auVar404 = psraw(auVar407,6);
  lVar379 = (longlong)(local_338 * 4);
  lVar382 = (longlong)(local_338 * 5);
  lVar381 = (longlong)(local_338 * 6);
  uVar1 = *(ulonglong *)(lVar379 + (longlong)local_330);
  auVar4._8_6_ = 0;
  auVar4._0_8_ = uVar1;
  auVar4[0xe] = (char)(uVar1 >> 0x38);
  auVar33._8_4_ = 0;
  auVar33._0_8_ = uVar1;
  auVar33[0xc] = (char)(uVar1 >> 0x30);
  auVar33._13_2_ = auVar4._13_2_;
  auVar63._8_4_ = 0;
  auVar63._0_8_ = uVar1;
  auVar63._12_3_ = auVar33._12_3_;
  auVar93._8_2_ = 0;
  auVar93._0_8_ = uVar1;
  auVar93[10] = (char)(uVar1 >> 0x28);
  auVar93._11_4_ = auVar63._11_4_;
  auVar123._8_2_ = 0;
  auVar123._0_8_ = uVar1;
  auVar123._10_5_ = auVar93._10_5_;
  auVar153[8] = (char)(uVar1 >> 0x20);
  auVar153._0_8_ = uVar1;
  auVar153._9_6_ = auVar123._9_6_;
  auVar210._7_8_ = 0;
  auVar210._0_7_ = auVar153._8_7_;
  Var201 = CONCAT81(SUB158(auVar210 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar299._9_6_ = 0;
  auVar299._0_9_ = Var201;
  auVar211._1_10_ = SUB1510(auVar299 << 0x30,5);
  auVar211[0] = (char)(uVar1 >> 0x10);
  auVar300._11_4_ = 0;
  auVar300._0_11_ = auVar211;
  auVar212._1_12_ = SUB1512(auVar300 << 0x20,3);
  auVar212[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar395._0_2_;
  sVar385 = auVar212._0_2_ + auVar395._2_2_;
  sVar386 = auVar211._0_2_ + auVar395._4_2_;
  sVar387 = (short)Var201 + auVar395._6_2_;
  sVar389 = auVar153._8_2_ + auVar395._8_2_;
  sVar390 = auVar93._10_2_ + auVar395._10_2_;
  sVar391 = auVar33._12_2_ + auVar395._12_2_;
  sVar392 = (auVar4._13_2_ >> 8) + auVar395._14_2_;
  *(ulonglong *)(lVar379 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar382 + (longlong)local_330);
  auVar5._8_6_ = 0;
  auVar5._0_8_ = uVar1;
  auVar5[0xe] = (char)(uVar1 >> 0x38);
  auVar34._8_4_ = 0;
  auVar34._0_8_ = uVar1;
  auVar34[0xc] = (char)(uVar1 >> 0x30);
  auVar34._13_2_ = auVar5._13_2_;
  auVar64._8_4_ = 0;
  auVar64._0_8_ = uVar1;
  auVar64._12_3_ = auVar34._12_3_;
  auVar94._8_2_ = 0;
  auVar94._0_8_ = uVar1;
  auVar94[10] = (char)(uVar1 >> 0x28);
  auVar94._11_4_ = auVar64._11_4_;
  auVar124._8_2_ = 0;
  auVar124._0_8_ = uVar1;
  auVar124._10_5_ = auVar94._10_5_;
  auVar154[8] = (char)(uVar1 >> 0x20);
  auVar154._0_8_ = uVar1;
  auVar154._9_6_ = auVar124._9_6_;
  auVar213._7_8_ = 0;
  auVar213._0_7_ = auVar154._8_7_;
  Var201 = CONCAT81(SUB158(auVar213 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar301._9_6_ = 0;
  auVar301._0_9_ = Var201;
  auVar214._1_10_ = SUB1510(auVar301 << 0x30,5);
  auVar214[0] = (char)(uVar1 >> 0x10);
  auVar302._11_4_ = 0;
  auVar302._0_11_ = auVar214;
  auVar215._1_12_ = SUB1512(auVar302 << 0x20,3);
  auVar215[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar396._0_2_;
  sVar385 = auVar215._0_2_ + auVar396._2_2_;
  sVar386 = auVar214._0_2_ + auVar396._4_2_;
  sVar387 = (short)Var201 + auVar396._6_2_;
  sVar389 = auVar154._8_2_ + auVar396._8_2_;
  sVar390 = auVar94._10_2_ + auVar396._10_2_;
  sVar391 = auVar34._12_2_ + auVar396._12_2_;
  sVar392 = (auVar5._13_2_ >> 8) + auVar396._14_2_;
  lVar373 = (longlong)(local_338 * 7);
  *(ulonglong *)(lVar382 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar381 + (longlong)local_330);
  auVar6._8_6_ = 0;
  auVar6._0_8_ = uVar1;
  auVar6[0xe] = (char)(uVar1 >> 0x38);
  auVar35._8_4_ = 0;
  auVar35._0_8_ = uVar1;
  auVar35[0xc] = (char)(uVar1 >> 0x30);
  auVar35._13_2_ = auVar6._13_2_;
  auVar65._8_4_ = 0;
  auVar65._0_8_ = uVar1;
  auVar65._12_3_ = auVar35._12_3_;
  auVar95._8_2_ = 0;
  auVar95._0_8_ = uVar1;
  auVar95[10] = (char)(uVar1 >> 0x28);
  auVar95._11_4_ = auVar65._11_4_;
  auVar125._8_2_ = 0;
  auVar125._0_8_ = uVar1;
  auVar125._10_5_ = auVar95._10_5_;
  auVar155[8] = (char)(uVar1 >> 0x20);
  auVar155._0_8_ = uVar1;
  auVar155._9_6_ = auVar125._9_6_;
  auVar216._7_8_ = 0;
  auVar216._0_7_ = auVar155._8_7_;
  Var201 = CONCAT81(SUB158(auVar216 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar303._9_6_ = 0;
  auVar303._0_9_ = Var201;
  auVar217._1_10_ = SUB1510(auVar303 << 0x30,5);
  auVar217[0] = (char)(uVar1 >> 0x10);
  auVar304._11_4_ = 0;
  auVar304._0_11_ = auVar217;
  auVar218._1_12_ = SUB1512(auVar304 << 0x20,3);
  auVar218[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar218._0_2_ + auVar393._2_2_;
  sVar386 = auVar217._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var201 + auVar393._6_2_;
  sVar389 = auVar155._8_2_ + auVar393._8_2_;
  sVar390 = auVar95._10_2_ + auVar393._10_2_;
  sVar391 = auVar35._12_2_ + auVar393._12_2_;
  sVar392 = (auVar6._13_2_ >> 8) + auVar393._14_2_;
  lVar374 = (longlong)(local_338 * 8);
  *(ulonglong *)(lVar381 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar373 + (longlong)local_330);
  auVar7._8_6_ = 0;
  auVar7._0_8_ = uVar1;
  auVar7[0xe] = (char)(uVar1 >> 0x38);
  auVar36._8_4_ = 0;
  auVar36._0_8_ = uVar1;
  auVar36[0xc] = (char)(uVar1 >> 0x30);
  auVar36._13_2_ = auVar7._13_2_;
  auVar66._8_4_ = 0;
  auVar66._0_8_ = uVar1;
  auVar66._12_3_ = auVar36._12_3_;
  auVar96._8_2_ = 0;
  auVar96._0_8_ = uVar1;
  auVar96[10] = (char)(uVar1 >> 0x28);
  auVar96._11_4_ = auVar66._11_4_;
  auVar126._8_2_ = 0;
  auVar126._0_8_ = uVar1;
  auVar126._10_5_ = auVar96._10_5_;
  auVar156[8] = (char)(uVar1 >> 0x20);
  auVar156._0_8_ = uVar1;
  auVar156._9_6_ = auVar126._9_6_;
  auVar219._7_8_ = 0;
  auVar219._0_7_ = auVar156._8_7_;
  Var201 = CONCAT81(SUB158(auVar219 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar305._9_6_ = 0;
  auVar305._0_9_ = Var201;
  auVar220._1_10_ = SUB1510(auVar305 << 0x30,5);
  auVar220[0] = (char)(uVar1 >> 0x10);
  auVar306._11_4_ = 0;
  auVar306._0_11_ = auVar220;
  auVar221._1_12_ = SUB1512(auVar306 << 0x20,3);
  auVar221[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar397._0_2_;
  sVar385 = auVar221._0_2_ + auVar397._2_2_;
  sVar386 = auVar220._0_2_ + auVar397._4_2_;
  sVar387 = (short)Var201 + auVar397._6_2_;
  sVar389 = auVar156._8_2_ + auVar397._8_2_;
  sVar390 = auVar96._10_2_ + auVar397._10_2_;
  sVar391 = auVar36._12_2_ + auVar397._12_2_;
  sVar392 = (auVar7._13_2_ >> 8) + auVar397._14_2_;
  lVar372 = (longlong)(local_338 * 9);
  *(ulonglong *)(lVar373 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar374 + (longlong)local_330);
  auVar8._8_6_ = 0;
  auVar8._0_8_ = uVar1;
  auVar8[0xe] = (char)(uVar1 >> 0x38);
  auVar37._8_4_ = 0;
  auVar37._0_8_ = uVar1;
  auVar37[0xc] = (char)(uVar1 >> 0x30);
  auVar37._13_2_ = auVar8._13_2_;
  auVar67._8_4_ = 0;
  auVar67._0_8_ = uVar1;
  auVar67._12_3_ = auVar37._12_3_;
  auVar97._8_2_ = 0;
  auVar97._0_8_ = uVar1;
  auVar97[10] = (char)(uVar1 >> 0x28);
  auVar97._11_4_ = auVar67._11_4_;
  auVar127._8_2_ = 0;
  auVar127._0_8_ = uVar1;
  auVar127._10_5_ = auVar97._10_5_;
  auVar157[8] = (char)(uVar1 >> 0x20);
  auVar157._0_8_ = uVar1;
  auVar157._9_6_ = auVar127._9_6_;
  auVar222._7_8_ = 0;
  auVar222._0_7_ = auVar157._8_7_;
  Var201 = CONCAT81(SUB158(auVar222 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar307._9_6_ = 0;
  auVar307._0_9_ = Var201;
  auVar223._1_10_ = SUB1510(auVar307 << 0x30,5);
  auVar223[0] = (char)(uVar1 >> 0x10);
  auVar308._11_4_ = 0;
  auVar308._0_11_ = auVar223;
  auVar224._1_12_ = SUB1512(auVar308 << 0x20,3);
  auVar224[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar398._0_2_;
  sVar385 = auVar224._0_2_ + auVar398._2_2_;
  sVar386 = auVar223._0_2_ + auVar398._4_2_;
  sVar387 = (short)Var201 + auVar398._6_2_;
  sVar389 = auVar157._8_2_ + auVar398._8_2_;
  sVar390 = auVar97._10_2_ + auVar398._10_2_;
  sVar391 = auVar37._12_2_ + auVar398._12_2_;
  sVar392 = (auVar8._13_2_ >> 8) + auVar398._14_2_;
  lVar378 = (longlong)(local_338 * 10);
  *(ulonglong *)(lVar374 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar372 + (longlong)local_330);
  auVar9._8_6_ = 0;
  auVar9._0_8_ = uVar1;
  auVar9[0xe] = (char)(uVar1 >> 0x38);
  auVar38._8_4_ = 0;
  auVar38._0_8_ = uVar1;
  auVar38[0xc] = (char)(uVar1 >> 0x30);
  auVar38._13_2_ = auVar9._13_2_;
  auVar68._8_4_ = 0;
  auVar68._0_8_ = uVar1;
  auVar68._12_3_ = auVar38._12_3_;
  auVar98._8_2_ = 0;
  auVar98._0_8_ = uVar1;
  auVar98[10] = (char)(uVar1 >> 0x28);
  auVar98._11_4_ = auVar68._11_4_;
  auVar128._8_2_ = 0;
  auVar128._0_8_ = uVar1;
  auVar128._10_5_ = auVar98._10_5_;
  auVar158[8] = (char)(uVar1 >> 0x20);
  auVar158._0_8_ = uVar1;
  auVar158._9_6_ = auVar128._9_6_;
  auVar225._7_8_ = 0;
  auVar225._0_7_ = auVar158._8_7_;
  Var201 = CONCAT81(SUB158(auVar225 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar309._9_6_ = 0;
  auVar309._0_9_ = Var201;
  auVar226._1_10_ = SUB1510(auVar309 << 0x30,5);
  auVar226[0] = (char)(uVar1 >> 0x10);
  auVar310._11_4_ = 0;
  auVar310._0_11_ = auVar226;
  auVar227._1_12_ = SUB1512(auVar310 << 0x20,3);
  auVar227[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar399._0_2_;
  sVar385 = auVar227._0_2_ + auVar399._2_2_;
  sVar386 = auVar226._0_2_ + auVar399._4_2_;
  sVar387 = (short)Var201 + auVar399._6_2_;
  sVar389 = auVar158._8_2_ + auVar399._8_2_;
  sVar390 = auVar98._10_2_ + auVar399._10_2_;
  sVar391 = auVar38._12_2_ + auVar399._12_2_;
  sVar392 = (auVar9._13_2_ >> 8) + auVar399._14_2_;
  *(ulonglong *)(lVar372 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar378 + (longlong)local_330);
  auVar10._8_6_ = 0;
  auVar10._0_8_ = uVar1;
  auVar10[0xe] = (char)(uVar1 >> 0x38);
  auVar39._8_4_ = 0;
  auVar39._0_8_ = uVar1;
  auVar39[0xc] = (char)(uVar1 >> 0x30);
  auVar39._13_2_ = auVar10._13_2_;
  auVar69._8_4_ = 0;
  auVar69._0_8_ = uVar1;
  auVar69._12_3_ = auVar39._12_3_;
  auVar99._8_2_ = 0;
  auVar99._0_8_ = uVar1;
  auVar99[10] = (char)(uVar1 >> 0x28);
  auVar99._11_4_ = auVar69._11_4_;
  auVar129._8_2_ = 0;
  auVar129._0_8_ = uVar1;
  auVar129._10_5_ = auVar99._10_5_;
  auVar159[8] = (char)(uVar1 >> 0x20);
  auVar159._0_8_ = uVar1;
  auVar159._9_6_ = auVar129._9_6_;
  auVar228._7_8_ = 0;
  auVar228._0_7_ = auVar159._8_7_;
  Var201 = CONCAT81(SUB158(auVar228 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar311._9_6_ = 0;
  auVar311._0_9_ = Var201;
  auVar229._1_10_ = SUB1510(auVar311 << 0x30,5);
  auVar229[0] = (char)(uVar1 >> 0x10);
  auVar312._11_4_ = 0;
  auVar312._0_11_ = auVar229;
  auVar230._1_12_ = SUB1512(auVar312 << 0x20,3);
  auVar230[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar400._0_2_;
  sVar385 = auVar230._0_2_ + auVar400._2_2_;
  sVar386 = auVar229._0_2_ + auVar400._4_2_;
  sVar387 = (short)Var201 + auVar400._6_2_;
  sVar389 = auVar159._8_2_ + auVar400._8_2_;
  sVar390 = auVar99._10_2_ + auVar400._10_2_;
  sVar391 = auVar39._12_2_ + auVar400._12_2_;
  sVar392 = (auVar10._13_2_ >> 8) + auVar400._14_2_;
  lVar377 = (longlong)(local_338 * 0xb);
  *(ulonglong *)(lVar378 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar377 + (longlong)local_330);
  auVar11._8_6_ = 0;
  auVar11._0_8_ = uVar1;
  auVar11[0xe] = (char)(uVar1 >> 0x38);
  auVar40._8_4_ = 0;
  auVar40._0_8_ = uVar1;
  auVar40[0xc] = (char)(uVar1 >> 0x30);
  auVar40._13_2_ = auVar11._13_2_;
  auVar70._8_4_ = 0;
  auVar70._0_8_ = uVar1;
  auVar70._12_3_ = auVar40._12_3_;
  auVar100._8_2_ = 0;
  auVar100._0_8_ = uVar1;
  auVar100[10] = (char)(uVar1 >> 0x28);
  auVar100._11_4_ = auVar70._11_4_;
  auVar130._8_2_ = 0;
  auVar130._0_8_ = uVar1;
  auVar130._10_5_ = auVar100._10_5_;
  auVar160[8] = (char)(uVar1 >> 0x20);
  auVar160._0_8_ = uVar1;
  auVar160._9_6_ = auVar130._9_6_;
  auVar231._7_8_ = 0;
  auVar231._0_7_ = auVar160._8_7_;
  Var201 = CONCAT81(SUB158(auVar231 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar313._9_6_ = 0;
  auVar313._0_9_ = Var201;
  auVar232._1_10_ = SUB1510(auVar313 << 0x30,5);
  auVar232[0] = (char)(uVar1 >> 0x10);
  auVar314._11_4_ = 0;
  auVar314._0_11_ = auVar232;
  auVar233._1_12_ = SUB1512(auVar314 << 0x20,3);
  auVar233[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar401._0_2_;
  sVar385 = auVar233._0_2_ + auVar401._2_2_;
  sVar386 = auVar232._0_2_ + auVar401._4_2_;
  sVar387 = (short)Var201 + auVar401._6_2_;
  sVar389 = auVar160._8_2_ + auVar401._8_2_;
  sVar390 = auVar100._10_2_ + auVar401._10_2_;
  sVar391 = auVar40._12_2_ + auVar401._12_2_;
  sVar392 = (auVar11._13_2_ >> 8) + auVar401._14_2_;
  lVar376 = (longlong)(local_338 * 0xc);
  *(ulonglong *)(lVar377 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar376 + (longlong)local_330);
  auVar12._8_6_ = 0;
  auVar12._0_8_ = uVar1;
  auVar12[0xe] = (char)(uVar1 >> 0x38);
  auVar41._8_4_ = 0;
  auVar41._0_8_ = uVar1;
  auVar41[0xc] = (char)(uVar1 >> 0x30);
  auVar41._13_2_ = auVar12._13_2_;
  auVar71._8_4_ = 0;
  auVar71._0_8_ = uVar1;
  auVar71._12_3_ = auVar41._12_3_;
  auVar101._8_2_ = 0;
  auVar101._0_8_ = uVar1;
  auVar101[10] = (char)(uVar1 >> 0x28);
  auVar101._11_4_ = auVar71._11_4_;
  auVar131._8_2_ = 0;
  auVar131._0_8_ = uVar1;
  auVar131._10_5_ = auVar101._10_5_;
  auVar161[8] = (char)(uVar1 >> 0x20);
  auVar161._0_8_ = uVar1;
  auVar161._9_6_ = auVar131._9_6_;
  auVar234._7_8_ = 0;
  auVar234._0_7_ = auVar161._8_7_;
  Var201 = CONCAT81(SUB158(auVar234 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar315._9_6_ = 0;
  auVar315._0_9_ = Var201;
  auVar235._1_10_ = SUB1510(auVar315 << 0x30,5);
  auVar235[0] = (char)(uVar1 >> 0x10);
  auVar316._11_4_ = 0;
  auVar316._0_11_ = auVar235;
  auVar236._1_12_ = SUB1512(auVar316 << 0x20,3);
  auVar236[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar402._0_2_;
  sVar385 = auVar236._0_2_ + auVar402._2_2_;
  sVar386 = auVar235._0_2_ + auVar402._4_2_;
  sVar387 = (short)Var201 + auVar402._6_2_;
  sVar389 = auVar161._8_2_ + auVar402._8_2_;
  sVar390 = auVar101._10_2_ + auVar402._10_2_;
  sVar391 = auVar41._12_2_ + auVar402._12_2_;
  sVar392 = (auVar12._13_2_ >> 8) + auVar402._14_2_;
  *(ulonglong *)(lVar376 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  lVar375 = (longlong)(local_338 * 0xd);
  uVar1 = *(ulonglong *)(lVar375 + (longlong)local_330);
  auVar13._8_6_ = 0;
  auVar13._0_8_ = uVar1;
  auVar13[0xe] = (char)(uVar1 >> 0x38);
  auVar42._8_4_ = 0;
  auVar42._0_8_ = uVar1;
  auVar42[0xc] = (char)(uVar1 >> 0x30);
  auVar42._13_2_ = auVar13._13_2_;
  auVar72._8_4_ = 0;
  auVar72._0_8_ = uVar1;
  auVar72._12_3_ = auVar42._12_3_;
  auVar102._8_2_ = 0;
  auVar102._0_8_ = uVar1;
  auVar102[10] = (char)(uVar1 >> 0x28);
  auVar102._11_4_ = auVar72._11_4_;
  auVar132._8_2_ = 0;
  auVar132._0_8_ = uVar1;
  auVar132._10_5_ = auVar102._10_5_;
  auVar162[8] = (char)(uVar1 >> 0x20);
  auVar162._0_8_ = uVar1;
  auVar162._9_6_ = auVar132._9_6_;
  auVar237._7_8_ = 0;
  auVar237._0_7_ = auVar162._8_7_;
  Var201 = CONCAT81(SUB158(auVar237 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar317._9_6_ = 0;
  auVar317._0_9_ = Var201;
  auVar238._1_10_ = SUB1510(auVar317 << 0x30,5);
  auVar238[0] = (char)(uVar1 >> 0x10);
  auVar318._11_4_ = 0;
  auVar318._0_11_ = auVar238;
  auVar239._1_12_ = SUB1512(auVar318 << 0x20,3);
  auVar239[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar403._0_2_;
  sVar385 = auVar239._0_2_ + auVar403._2_2_;
  sVar386 = auVar238._0_2_ + auVar403._4_2_;
  sVar387 = (short)Var201 + auVar403._6_2_;
  sVar389 = auVar162._8_2_ + auVar403._8_2_;
  sVar390 = auVar102._10_2_ + auVar403._10_2_;
  sVar391 = auVar42._12_2_ + auVar403._12_2_;
  sVar392 = (auVar13._13_2_ >> 8) + auVar403._14_2_;
  lVar371 = (longlong)(local_338 * 0xe);
  *(ulonglong *)(lVar375 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar371 + (longlong)local_330);
  auVar14._8_6_ = 0;
  auVar14._0_8_ = uVar1;
  auVar14[0xe] = (char)(uVar1 >> 0x38);
  auVar43._8_4_ = 0;
  auVar43._0_8_ = uVar1;
  auVar43[0xc] = (char)(uVar1 >> 0x30);
  auVar43._13_2_ = auVar14._13_2_;
  auVar73._8_4_ = 0;
  auVar73._0_8_ = uVar1;
  auVar73._12_3_ = auVar43._12_3_;
  auVar103._8_2_ = 0;
  auVar103._0_8_ = uVar1;
  auVar103[10] = (char)(uVar1 >> 0x28);
  auVar103._11_4_ = auVar73._11_4_;
  auVar133._8_2_ = 0;
  auVar133._0_8_ = uVar1;
  auVar133._10_5_ = auVar103._10_5_;
  auVar163[8] = (char)(uVar1 >> 0x20);
  auVar163._0_8_ = uVar1;
  auVar163._9_6_ = auVar133._9_6_;
  auVar240._7_8_ = 0;
  auVar240._0_7_ = auVar163._8_7_;
  Var201 = CONCAT81(SUB158(auVar240 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar319._9_6_ = 0;
  auVar319._0_9_ = Var201;
  auVar241._1_10_ = SUB1510(auVar319 << 0x30,5);
  auVar241[0] = (char)(uVar1 >> 0x10);
  auVar320._11_4_ = 0;
  auVar320._0_11_ = auVar241;
  auVar242._1_12_ = SUB1512(auVar320 << 0x20,3);
  auVar242[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar404._0_2_;
  sVar385 = auVar242._0_2_ + auVar404._2_2_;
  sVar386 = auVar241._0_2_ + auVar404._4_2_;
  sVar387 = (short)Var201 + auVar404._6_2_;
  sVar389 = auVar163._8_2_ + auVar404._8_2_;
  sVar390 = auVar103._10_2_ + auVar404._10_2_;
  sVar391 = auVar43._12_2_ + auVar404._12_2_;
  sVar392 = (auVar14._13_2_ >> 8) + auVar404._14_2_;
  *(ulonglong *)(lVar371 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  auVar182._8_8_ = uStack_1d0;
  auVar182._0_8_ = local_1d8;
  auVar183._8_8_ = uStack_1c0;
  auVar183._0_8_ = local_1c8;
  auVar184._8_8_ = uStack_1b0;
  auVar184._0_8_ = local_1b8;
  auVar185._8_8_ = uStack_1a0;
  auVar185._0_8_ = local_1a8;
  auVar186._8_8_ = uStack_190;
  auVar186._0_8_ = local_198;
  auVar187._8_8_ = uStack_180;
  auVar187._0_8_ = local_188;
  auVar188._8_8_ = uStack_170;
  auVar188._0_8_ = local_178;
  auVar189._8_8_ = uStack_160;
  auVar189._0_8_ = local_168;
  auVar190._8_8_ = uStack_150;
  auVar190._0_8_ = local_158;
  auVar191._8_8_ = uStack_140;
  auVar191._0_8_ = local_148;
  auVar192._8_8_ = uStack_130;
  auVar192._0_8_ = local_138;
  auVar193._8_8_ = uStack_120;
  auVar193._0_8_ = local_128;
  auVar194._8_8_ = uStack_110;
  auVar194._0_8_ = local_118;
  auVar195._8_8_ = uStack_100;
  auVar195._0_8_ = local_108;
  lVar370 = (longlong)(local_338 * 0xf);
  uVar1 = *(ulonglong *)(lVar370 + (longlong)local_330);
  auVar15._8_6_ = 0;
  auVar15._0_8_ = uVar1;
  auVar15[0xe] = (char)(uVar1 >> 0x38);
  auVar44._8_4_ = 0;
  auVar44._0_8_ = uVar1;
  auVar44[0xc] = (char)(uVar1 >> 0x30);
  auVar44._13_2_ = auVar15._13_2_;
  auVar74._8_4_ = 0;
  auVar74._0_8_ = uVar1;
  auVar74._12_3_ = auVar44._12_3_;
  auVar104._8_2_ = 0;
  auVar104._0_8_ = uVar1;
  auVar104[10] = (char)(uVar1 >> 0x28);
  auVar104._11_4_ = auVar74._11_4_;
  auVar134._8_2_ = 0;
  auVar134._0_8_ = uVar1;
  auVar134._10_5_ = auVar104._10_5_;
  auVar164[8] = (char)(uVar1 >> 0x20);
  auVar164._0_8_ = uVar1;
  auVar164._9_6_ = auVar134._9_6_;
  auVar243._7_8_ = 0;
  auVar243._0_7_ = auVar164._8_7_;
  Var201 = CONCAT81(SUB158(auVar243 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar321._9_6_ = 0;
  auVar321._0_9_ = Var201;
  auVar244._1_10_ = SUB1510(auVar321 << 0x30,5);
  auVar244[0] = (char)(uVar1 >> 0x10);
  auVar322._11_4_ = 0;
  auVar322._0_11_ = auVar244;
  auVar245._1_12_ = SUB1512(auVar322 << 0x20,3);
  auVar245[0] = (char)(uVar1 >> 8);
  local_308 = auVar384._0_2_;
  sStack_306 = auVar384._2_2_;
  sStack_304 = auVar384._4_2_;
  sStack_302 = auVar384._6_2_;
  sStack_300 = auVar384._8_2_;
  sStack_2fe = auVar384._10_2_;
  sStack_2fc = auVar384._12_2_;
  sStack_2fa = auVar384._14_2_;
  local_308 = (ushort)(byte)uVar1 + local_308;
  sStack_306 = auVar245._0_2_ + sStack_306;
  sStack_304 = auVar244._0_2_ + sStack_304;
  sStack_302 = (short)Var201 + sStack_302;
  sStack_300 = auVar164._8_2_ + sStack_300;
  sStack_2fe = auVar104._10_2_ + sStack_2fe;
  sStack_2fc = auVar44._12_2_ + sStack_2fc;
  sStack_2fa = (auVar15._13_2_ >> 8) + sStack_2fa;
  auVar394._8_8_ = uStack_1e0;
  auVar394._0_8_ = local_1e8;
  *(ulonglong *)(lVar370 + (longlong)local_330) =
       CONCAT17((0 < sStack_2fa) * (sStack_2fa < 0x100) * (char)sStack_2fa - (0xff < sStack_2fa),
                CONCAT16((0 < sStack_2fc) * (sStack_2fc < 0x100) * (char)sStack_2fc -
                         (0xff < sStack_2fc),
                         CONCAT15((0 < sStack_2fe) * (sStack_2fe < 0x100) * (char)sStack_2fe -
                                  (0xff < sStack_2fe),
                                  CONCAT14((0 < sStack_300) * (sStack_300 < 0x100) *
                                           (char)sStack_300 - (0xff < sStack_300),
                                           CONCAT13((0 < sStack_302) * (sStack_302 < 0x100) *
                                                    (char)sStack_302 - (0xff < sStack_302),
                                                    CONCAT12((0 < sStack_304) * (sStack_304 < 0x100)
                                                             * (char)sStack_304 -
                                                             (0xff < sStack_304),
                                                             CONCAT11((0 < sStack_306) *
                                                                      (sStack_306 < 0x100) *
                                                                      (char)sStack_306 -
                                                                      (0xff < sStack_306),
                                                                      (0 < local_308) *
                                                                      (local_308 < 0x100) *
                                                                      (char)local_308 -
                                                                      (0xff < local_308))))))));
  local_330 = local_330 + 1;
  auVar384 = paddsw(auVar394,_DAT_145cacc40);
  auVar395 = paddsw(auVar182,_DAT_145cacc40);
  auVar393 = psraw(auVar384,6);
  auVar384 = paddsw(auVar183,_DAT_145cacc40);
  auVar395 = psraw(auVar395,6);
  auVar397 = paddsw(auVar184,_DAT_145cacc40);
  auVar396 = psraw(auVar384,6);
  auVar384 = paddsw(auVar185,_DAT_145cacc40);
  auVar397 = psraw(auVar397,6);
  auVar399 = paddsw(auVar186,_DAT_145cacc40);
  auVar398 = psraw(auVar384,6);
  auVar384 = paddsw(auVar187,_DAT_145cacc40);
  auVar399 = psraw(auVar399,6);
  auVar401 = paddsw(auVar188,_DAT_145cacc40);
  auVar400 = psraw(auVar384,6);
  auVar384 = paddsw(auVar189,_DAT_145cacc40);
  auVar401 = psraw(auVar401,6);
  auVar403 = paddsw(auVar190,_DAT_145cacc40);
  auVar402 = psraw(auVar384,6);
  auVar384 = paddsw(auVar191,_DAT_145cacc40);
  auVar403 = psraw(auVar403,6);
  auVar405 = paddsw(auVar192,_DAT_145cacc40);
  auVar404 = psraw(auVar384,6);
  auVar384 = paddsw(auVar193,_DAT_145cacc40);
  auVar405 = psraw(auVar405,6);
  auVar407 = paddsw(auVar194,_DAT_145cacc40);
  auVar406 = psraw(auVar384,6);
  auVar408 = paddsw(auVar195,_DAT_145cacc40);
  auVar407 = psraw(auVar407,6);
  auVar196._8_8_ = uStack_f0;
  auVar196._0_8_ = local_f8;
  auVar384 = paddsw(auVar196,_DAT_145cacc40);
  auVar384 = psraw(auVar384,6);
  uVar1 = *local_330;
  bVar388 = (byte)(uVar1 >> 0x38);
  auVar355._8_6_ = 0;
  auVar355._0_8_ = uVar1;
  auVar355[0xe] = bVar388;
  auVar359._8_4_ = 0;
  auVar359._0_8_ = uVar1;
  auVar359[0xc] = (char)(uVar1 >> 0x30);
  auVar359._13_2_ = auVar355._13_2_;
  auVar361._8_4_ = 0;
  auVar361._0_8_ = uVar1;
  auVar361._12_3_ = auVar359._12_3_;
  auVar363._8_2_ = 0;
  auVar363._0_8_ = uVar1;
  auVar363[10] = (char)(uVar1 >> 0x28);
  auVar363._11_4_ = auVar361._11_4_;
  auVar365._8_2_ = 0;
  auVar365._0_8_ = uVar1;
  auVar365._10_5_ = auVar363._10_5_;
  auVar367[8] = (char)(uVar1 >> 0x20);
  auVar367._0_8_ = uVar1;
  auVar367._9_6_ = auVar365._9_6_;
  Var199 = CONCAT91((unkuint9)auVar367._8_7_ << 8,(char)(uVar1 >> 0x18));
  auVar357[10] = 0;
  auVar357._0_10_ = Var199;
  auVar247._1_11_ = auVar357 << 8;
  auVar247[0] = (char)(uVar1 >> 0x10);
  auVar356[0xc] = 0;
  auVar356._0_12_ = auVar247;
  auVar246._1_13_ = auVar356 << 8;
  auVar246[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar246._0_2_ + auVar393._2_2_;
  sVar386 = auVar247._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var199 + auVar393._6_2_;
  sVar389 = auVar367._8_2_ + auVar393._8_2_;
  sVar390 = auVar363._10_2_ + auVar393._10_2_;
  sVar391 = auVar359._12_2_ + auVar393._12_2_;
  sVar392 = (ushort)bVar388 + auVar393._14_2_;
  auVar393 = psraw(auVar408,6);
  *local_330 = CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                        CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 -
                                 (0xff < sVar391),
                                 CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                          (0xff < sVar390),
                                          CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389
                                                   - (0xff < sVar389),
                                                   CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                            (char)sVar387 - (0xff < sVar387),
                                                            CONCAT12((0 < sVar386) *
                                                                     (sVar386 < 0x100) *
                                                                     (char)sVar386 -
                                                                     (0xff < sVar386),
                                                                     CONCAT11((0 < sVar385) *
                                                                              (sVar385 < 0x100) *
                                                                              (char)sVar385 -
                                                                              (0xff < sVar385),
                                                                              (0 < sVar383) *
                                                                              (sVar383 < 0x100) *
                                                                              (char)sVar383 -
                                                                              (0xff < sVar383)))))))
                       );
  uVar1 = *(ulonglong *)((longlong)local_338 + (longlong)local_330);
  auVar45._8_6_ = 0;
  auVar45._0_8_ = uVar1;
  auVar45[0xe] = (char)(uVar1 >> 0x38);
  auVar75._8_4_ = 0;
  auVar75._0_8_ = uVar1;
  auVar75[0xc] = (char)(uVar1 >> 0x30);
  auVar75._13_2_ = auVar45._13_2_;
  auVar105._8_4_ = 0;
  auVar105._0_8_ = uVar1;
  auVar105._12_3_ = auVar75._12_3_;
  auVar135._8_2_ = 0;
  auVar135._0_8_ = uVar1;
  auVar135[10] = (char)(uVar1 >> 0x28);
  auVar135._11_4_ = auVar105._11_4_;
  auVar165._8_2_ = 0;
  auVar165._0_8_ = uVar1;
  auVar165._10_5_ = auVar135._10_5_;
  auVar181[8] = (char)(uVar1 >> 0x20);
  auVar181._0_8_ = uVar1;
  auVar181._9_6_ = auVar165._9_6_;
  auVar248._7_8_ = 0;
  auVar248._0_7_ = auVar181._8_7_;
  Var201 = CONCAT81(SUB158(auVar248 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar323._9_6_ = 0;
  auVar323._0_9_ = Var201;
  auVar249._1_10_ = SUB1510(auVar323 << 0x30,5);
  auVar249[0] = (char)(uVar1 >> 0x10);
  auVar324._11_4_ = 0;
  auVar324._0_11_ = auVar249;
  auVar250._1_12_ = SUB1512(auVar324 << 0x20,3);
  auVar250[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar395._0_2_;
  sVar385 = auVar250._0_2_ + auVar395._2_2_;
  sVar386 = auVar249._0_2_ + auVar395._4_2_;
  sVar387 = (short)Var201 + auVar395._6_2_;
  sVar389 = auVar181._8_2_ + auVar395._8_2_;
  sVar390 = auVar135._10_2_ + auVar395._10_2_;
  sVar391 = auVar75._12_2_ + auVar395._12_2_;
  sVar392 = (auVar45._13_2_ >> 8) + auVar395._14_2_;
  *(ulonglong *)((longlong)local_338 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar369 + (longlong)local_330);
  auVar16._8_6_ = 0;
  auVar16._0_8_ = uVar1;
  auVar16[0xe] = (char)(uVar1 >> 0x38);
  auVar46._8_4_ = 0;
  auVar46._0_8_ = uVar1;
  auVar46[0xc] = (char)(uVar1 >> 0x30);
  auVar46._13_2_ = auVar16._13_2_;
  auVar76._8_4_ = 0;
  auVar76._0_8_ = uVar1;
  auVar76._12_3_ = auVar46._12_3_;
  auVar106._8_2_ = 0;
  auVar106._0_8_ = uVar1;
  auVar106[10] = (char)(uVar1 >> 0x28);
  auVar106._11_4_ = auVar76._11_4_;
  auVar136._8_2_ = 0;
  auVar136._0_8_ = uVar1;
  auVar136._10_5_ = auVar106._10_5_;
  auVar166[8] = (char)(uVar1 >> 0x20);
  auVar166._0_8_ = uVar1;
  auVar166._9_6_ = auVar136._9_6_;
  auVar251._7_8_ = 0;
  auVar251._0_7_ = auVar166._8_7_;
  Var201 = CONCAT81(SUB158(auVar251 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar325._9_6_ = 0;
  auVar325._0_9_ = Var201;
  auVar252._1_10_ = SUB1510(auVar325 << 0x30,5);
  auVar252[0] = (char)(uVar1 >> 0x10);
  auVar326._11_4_ = 0;
  auVar326._0_11_ = auVar252;
  auVar253._1_12_ = SUB1512(auVar326 << 0x20,3);
  auVar253[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar396._0_2_;
  sVar385 = auVar253._0_2_ + auVar396._2_2_;
  sVar386 = auVar252._0_2_ + auVar396._4_2_;
  sVar387 = (short)Var201 + auVar396._6_2_;
  sVar389 = auVar166._8_2_ + auVar396._8_2_;
  sVar390 = auVar106._10_2_ + auVar396._10_2_;
  sVar391 = auVar46._12_2_ + auVar396._12_2_;
  sVar392 = (auVar16._13_2_ >> 8) + auVar396._14_2_;
  *(ulonglong *)(lVar369 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)((longlong)local_330 + lVar380);
  auVar17._8_6_ = 0;
  auVar17._0_8_ = uVar1;
  auVar17[0xe] = (char)(uVar1 >> 0x38);
  auVar47._8_4_ = 0;
  auVar47._0_8_ = uVar1;
  auVar47[0xc] = (char)(uVar1 >> 0x30);
  auVar47._13_2_ = auVar17._13_2_;
  auVar77._8_4_ = 0;
  auVar77._0_8_ = uVar1;
  auVar77._12_3_ = auVar47._12_3_;
  auVar107._8_2_ = 0;
  auVar107._0_8_ = uVar1;
  auVar107[10] = (char)(uVar1 >> 0x28);
  auVar107._11_4_ = auVar77._11_4_;
  auVar137._8_2_ = 0;
  auVar137._0_8_ = uVar1;
  auVar137._10_5_ = auVar107._10_5_;
  auVar167[8] = (char)(uVar1 >> 0x20);
  auVar167._0_8_ = uVar1;
  auVar167._9_6_ = auVar137._9_6_;
  auVar254._7_8_ = 0;
  auVar254._0_7_ = auVar167._8_7_;
  Var201 = CONCAT81(SUB158(auVar254 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar327._9_6_ = 0;
  auVar327._0_9_ = Var201;
  auVar255._1_10_ = SUB1510(auVar327 << 0x30,5);
  auVar255[0] = (char)(uVar1 >> 0x10);
  auVar328._11_4_ = 0;
  auVar328._0_11_ = auVar255;
  auVar256._1_12_ = SUB1512(auVar328 << 0x20,3);
  auVar256[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar397._0_2_;
  sVar385 = auVar256._0_2_ + auVar397._2_2_;
  sVar386 = auVar255._0_2_ + auVar397._4_2_;
  sVar387 = (short)Var201 + auVar397._6_2_;
  sVar389 = auVar167._8_2_ + auVar397._8_2_;
  sVar390 = auVar107._10_2_ + auVar397._10_2_;
  sVar391 = auVar47._12_2_ + auVar397._12_2_;
  sVar392 = (auVar17._13_2_ >> 8) + auVar397._14_2_;
  *(ulonglong *)((longlong)local_330 + lVar380) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar379 + (longlong)local_330);
  auVar18._8_6_ = 0;
  auVar18._0_8_ = uVar1;
  auVar18[0xe] = (char)(uVar1 >> 0x38);
  auVar48._8_4_ = 0;
  auVar48._0_8_ = uVar1;
  auVar48[0xc] = (char)(uVar1 >> 0x30);
  auVar48._13_2_ = auVar18._13_2_;
  auVar78._8_4_ = 0;
  auVar78._0_8_ = uVar1;
  auVar78._12_3_ = auVar48._12_3_;
  auVar108._8_2_ = 0;
  auVar108._0_8_ = uVar1;
  auVar108[10] = (char)(uVar1 >> 0x28);
  auVar108._11_4_ = auVar78._11_4_;
  auVar138._8_2_ = 0;
  auVar138._0_8_ = uVar1;
  auVar138._10_5_ = auVar108._10_5_;
  auVar168[8] = (char)(uVar1 >> 0x20);
  auVar168._0_8_ = uVar1;
  auVar168._9_6_ = auVar138._9_6_;
  auVar257._7_8_ = 0;
  auVar257._0_7_ = auVar168._8_7_;
  Var201 = CONCAT81(SUB158(auVar257 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar329._9_6_ = 0;
  auVar329._0_9_ = Var201;
  auVar258._1_10_ = SUB1510(auVar329 << 0x30,5);
  auVar258[0] = (char)(uVar1 >> 0x10);
  auVar330._11_4_ = 0;
  auVar330._0_11_ = auVar258;
  auVar259._1_12_ = SUB1512(auVar330 << 0x20,3);
  auVar259[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar398._0_2_;
  sVar385 = auVar259._0_2_ + auVar398._2_2_;
  sVar386 = auVar258._0_2_ + auVar398._4_2_;
  sVar387 = (short)Var201 + auVar398._6_2_;
  sVar389 = auVar168._8_2_ + auVar398._8_2_;
  sVar390 = auVar108._10_2_ + auVar398._10_2_;
  sVar391 = auVar48._12_2_ + auVar398._12_2_;
  sVar392 = (auVar18._13_2_ >> 8) + auVar398._14_2_;
  *(ulonglong *)(lVar379 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar382 + (longlong)local_330);
  auVar19._8_6_ = 0;
  auVar19._0_8_ = uVar1;
  auVar19[0xe] = (char)(uVar1 >> 0x38);
  auVar49._8_4_ = 0;
  auVar49._0_8_ = uVar1;
  auVar49[0xc] = (char)(uVar1 >> 0x30);
  auVar49._13_2_ = auVar19._13_2_;
  auVar79._8_4_ = 0;
  auVar79._0_8_ = uVar1;
  auVar79._12_3_ = auVar49._12_3_;
  auVar109._8_2_ = 0;
  auVar109._0_8_ = uVar1;
  auVar109[10] = (char)(uVar1 >> 0x28);
  auVar109._11_4_ = auVar79._11_4_;
  auVar139._8_2_ = 0;
  auVar139._0_8_ = uVar1;
  auVar139._10_5_ = auVar109._10_5_;
  auVar169[8] = (char)(uVar1 >> 0x20);
  auVar169._0_8_ = uVar1;
  auVar169._9_6_ = auVar139._9_6_;
  auVar260._7_8_ = 0;
  auVar260._0_7_ = auVar169._8_7_;
  Var201 = CONCAT81(SUB158(auVar260 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar331._9_6_ = 0;
  auVar331._0_9_ = Var201;
  auVar261._1_10_ = SUB1510(auVar331 << 0x30,5);
  auVar261[0] = (char)(uVar1 >> 0x10);
  auVar332._11_4_ = 0;
  auVar332._0_11_ = auVar261;
  auVar262._1_12_ = SUB1512(auVar332 << 0x20,3);
  auVar262[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar399._0_2_;
  sVar385 = auVar262._0_2_ + auVar399._2_2_;
  sVar386 = auVar261._0_2_ + auVar399._4_2_;
  sVar387 = (short)Var201 + auVar399._6_2_;
  sVar389 = auVar169._8_2_ + auVar399._8_2_;
  sVar390 = auVar109._10_2_ + auVar399._10_2_;
  sVar391 = auVar49._12_2_ + auVar399._12_2_;
  sVar392 = (auVar19._13_2_ >> 8) + auVar399._14_2_;
  *(ulonglong *)(lVar382 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar381 + (longlong)local_330);
  auVar20._8_6_ = 0;
  auVar20._0_8_ = uVar1;
  auVar20[0xe] = (char)(uVar1 >> 0x38);
  auVar50._8_4_ = 0;
  auVar50._0_8_ = uVar1;
  auVar50[0xc] = (char)(uVar1 >> 0x30);
  auVar50._13_2_ = auVar20._13_2_;
  auVar80._8_4_ = 0;
  auVar80._0_8_ = uVar1;
  auVar80._12_3_ = auVar50._12_3_;
  auVar110._8_2_ = 0;
  auVar110._0_8_ = uVar1;
  auVar110[10] = (char)(uVar1 >> 0x28);
  auVar110._11_4_ = auVar80._11_4_;
  auVar140._8_2_ = 0;
  auVar140._0_8_ = uVar1;
  auVar140._10_5_ = auVar110._10_5_;
  auVar170[8] = (char)(uVar1 >> 0x20);
  auVar170._0_8_ = uVar1;
  auVar170._9_6_ = auVar140._9_6_;
  auVar263._7_8_ = 0;
  auVar263._0_7_ = auVar170._8_7_;
  Var201 = CONCAT81(SUB158(auVar263 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar333._9_6_ = 0;
  auVar333._0_9_ = Var201;
  auVar264._1_10_ = SUB1510(auVar333 << 0x30,5);
  auVar264[0] = (char)(uVar1 >> 0x10);
  auVar334._11_4_ = 0;
  auVar334._0_11_ = auVar264;
  auVar265._1_12_ = SUB1512(auVar334 << 0x20,3);
  auVar265[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar400._0_2_;
  sVar385 = auVar265._0_2_ + auVar400._2_2_;
  sVar386 = auVar264._0_2_ + auVar400._4_2_;
  sVar387 = (short)Var201 + auVar400._6_2_;
  sVar389 = auVar170._8_2_ + auVar400._8_2_;
  sVar390 = auVar110._10_2_ + auVar400._10_2_;
  sVar391 = auVar50._12_2_ + auVar400._12_2_;
  sVar392 = (auVar20._13_2_ >> 8) + auVar400._14_2_;
  *(ulonglong *)(lVar381 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar373 + (longlong)local_330);
  auVar21._8_6_ = 0;
  auVar21._0_8_ = uVar1;
  auVar21[0xe] = (char)(uVar1 >> 0x38);
  auVar51._8_4_ = 0;
  auVar51._0_8_ = uVar1;
  auVar51[0xc] = (char)(uVar1 >> 0x30);
  auVar51._13_2_ = auVar21._13_2_;
  auVar81._8_4_ = 0;
  auVar81._0_8_ = uVar1;
  auVar81._12_3_ = auVar51._12_3_;
  auVar111._8_2_ = 0;
  auVar111._0_8_ = uVar1;
  auVar111[10] = (char)(uVar1 >> 0x28);
  auVar111._11_4_ = auVar81._11_4_;
  auVar141._8_2_ = 0;
  auVar141._0_8_ = uVar1;
  auVar141._10_5_ = auVar111._10_5_;
  auVar171[8] = (char)(uVar1 >> 0x20);
  auVar171._0_8_ = uVar1;
  auVar171._9_6_ = auVar141._9_6_;
  auVar266._7_8_ = 0;
  auVar266._0_7_ = auVar171._8_7_;
  Var201 = CONCAT81(SUB158(auVar266 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar335._9_6_ = 0;
  auVar335._0_9_ = Var201;
  auVar267._1_10_ = SUB1510(auVar335 << 0x30,5);
  auVar267[0] = (char)(uVar1 >> 0x10);
  auVar336._11_4_ = 0;
  auVar336._0_11_ = auVar267;
  auVar268._1_12_ = SUB1512(auVar336 << 0x20,3);
  auVar268[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar401._0_2_;
  sVar385 = auVar268._0_2_ + auVar401._2_2_;
  sVar386 = auVar267._0_2_ + auVar401._4_2_;
  sVar387 = (short)Var201 + auVar401._6_2_;
  sVar389 = auVar171._8_2_ + auVar401._8_2_;
  sVar390 = auVar111._10_2_ + auVar401._10_2_;
  sVar391 = auVar51._12_2_ + auVar401._12_2_;
  sVar392 = (auVar21._13_2_ >> 8) + auVar401._14_2_;
  *(ulonglong *)(lVar373 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar374 + (longlong)local_330);
  auVar22._8_6_ = 0;
  auVar22._0_8_ = uVar1;
  auVar22[0xe] = (char)(uVar1 >> 0x38);
  auVar52._8_4_ = 0;
  auVar52._0_8_ = uVar1;
  auVar52[0xc] = (char)(uVar1 >> 0x30);
  auVar52._13_2_ = auVar22._13_2_;
  auVar82._8_4_ = 0;
  auVar82._0_8_ = uVar1;
  auVar82._12_3_ = auVar52._12_3_;
  auVar112._8_2_ = 0;
  auVar112._0_8_ = uVar1;
  auVar112[10] = (char)(uVar1 >> 0x28);
  auVar112._11_4_ = auVar82._11_4_;
  auVar142._8_2_ = 0;
  auVar142._0_8_ = uVar1;
  auVar142._10_5_ = auVar112._10_5_;
  auVar172[8] = (char)(uVar1 >> 0x20);
  auVar172._0_8_ = uVar1;
  auVar172._9_6_ = auVar142._9_6_;
  auVar269._7_8_ = 0;
  auVar269._0_7_ = auVar172._8_7_;
  Var201 = CONCAT81(SUB158(auVar269 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar337._9_6_ = 0;
  auVar337._0_9_ = Var201;
  auVar270._1_10_ = SUB1510(auVar337 << 0x30,5);
  auVar270[0] = (char)(uVar1 >> 0x10);
  auVar338._11_4_ = 0;
  auVar338._0_11_ = auVar270;
  auVar271._1_12_ = SUB1512(auVar338 << 0x20,3);
  auVar271[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar402._0_2_;
  sVar385 = auVar271._0_2_ + auVar402._2_2_;
  sVar386 = auVar270._0_2_ + auVar402._4_2_;
  sVar387 = (short)Var201 + auVar402._6_2_;
  sVar389 = auVar172._8_2_ + auVar402._8_2_;
  sVar390 = auVar112._10_2_ + auVar402._10_2_;
  sVar391 = auVar52._12_2_ + auVar402._12_2_;
  sVar392 = (auVar22._13_2_ >> 8) + auVar402._14_2_;
  *(ulonglong *)(lVar374 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar372 + (longlong)local_330);
  auVar23._8_6_ = 0;
  auVar23._0_8_ = uVar1;
  auVar23[0xe] = (char)(uVar1 >> 0x38);
  auVar53._8_4_ = 0;
  auVar53._0_8_ = uVar1;
  auVar53[0xc] = (char)(uVar1 >> 0x30);
  auVar53._13_2_ = auVar23._13_2_;
  auVar83._8_4_ = 0;
  auVar83._0_8_ = uVar1;
  auVar83._12_3_ = auVar53._12_3_;
  auVar113._8_2_ = 0;
  auVar113._0_8_ = uVar1;
  auVar113[10] = (char)(uVar1 >> 0x28);
  auVar113._11_4_ = auVar83._11_4_;
  auVar143._8_2_ = 0;
  auVar143._0_8_ = uVar1;
  auVar143._10_5_ = auVar113._10_5_;
  auVar173[8] = (char)(uVar1 >> 0x20);
  auVar173._0_8_ = uVar1;
  auVar173._9_6_ = auVar143._9_6_;
  auVar272._7_8_ = 0;
  auVar272._0_7_ = auVar173._8_7_;
  Var201 = CONCAT81(SUB158(auVar272 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar339._9_6_ = 0;
  auVar339._0_9_ = Var201;
  auVar273._1_10_ = SUB1510(auVar339 << 0x30,5);
  auVar273[0] = (char)(uVar1 >> 0x10);
  auVar340._11_4_ = 0;
  auVar340._0_11_ = auVar273;
  auVar274._1_12_ = SUB1512(auVar340 << 0x20,3);
  auVar274[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar403._0_2_;
  sVar385 = auVar274._0_2_ + auVar403._2_2_;
  sVar386 = auVar273._0_2_ + auVar403._4_2_;
  sVar387 = (short)Var201 + auVar403._6_2_;
  sVar389 = auVar173._8_2_ + auVar403._8_2_;
  sVar390 = auVar113._10_2_ + auVar403._10_2_;
  sVar391 = auVar53._12_2_ + auVar403._12_2_;
  sVar392 = (auVar23._13_2_ >> 8) + auVar403._14_2_;
  *(ulonglong *)(lVar372 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar378 + (longlong)local_330);
  auVar24._8_6_ = 0;
  auVar24._0_8_ = uVar1;
  auVar24[0xe] = (char)(uVar1 >> 0x38);
  auVar54._8_4_ = 0;
  auVar54._0_8_ = uVar1;
  auVar54[0xc] = (char)(uVar1 >> 0x30);
  auVar54._13_2_ = auVar24._13_2_;
  auVar84._8_4_ = 0;
  auVar84._0_8_ = uVar1;
  auVar84._12_3_ = auVar54._12_3_;
  auVar114._8_2_ = 0;
  auVar114._0_8_ = uVar1;
  auVar114[10] = (char)(uVar1 >> 0x28);
  auVar114._11_4_ = auVar84._11_4_;
  auVar144._8_2_ = 0;
  auVar144._0_8_ = uVar1;
  auVar144._10_5_ = auVar114._10_5_;
  auVar174[8] = (char)(uVar1 >> 0x20);
  auVar174._0_8_ = uVar1;
  auVar174._9_6_ = auVar144._9_6_;
  auVar275._7_8_ = 0;
  auVar275._0_7_ = auVar174._8_7_;
  Var201 = CONCAT81(SUB158(auVar275 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar341._9_6_ = 0;
  auVar341._0_9_ = Var201;
  auVar276._1_10_ = SUB1510(auVar341 << 0x30,5);
  auVar276[0] = (char)(uVar1 >> 0x10);
  auVar342._11_4_ = 0;
  auVar342._0_11_ = auVar276;
  auVar277._1_12_ = SUB1512(auVar342 << 0x20,3);
  auVar277[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar404._0_2_;
  sVar385 = auVar277._0_2_ + auVar404._2_2_;
  sVar386 = auVar276._0_2_ + auVar404._4_2_;
  sVar387 = (short)Var201 + auVar404._6_2_;
  sVar389 = auVar174._8_2_ + auVar404._8_2_;
  sVar390 = auVar114._10_2_ + auVar404._10_2_;
  sVar391 = auVar54._12_2_ + auVar404._12_2_;
  sVar392 = (auVar24._13_2_ >> 8) + auVar404._14_2_;
  *(ulonglong *)(lVar378 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar377 + (longlong)local_330);
  auVar25._8_6_ = 0;
  auVar25._0_8_ = uVar1;
  auVar25[0xe] = (char)(uVar1 >> 0x38);
  auVar55._8_4_ = 0;
  auVar55._0_8_ = uVar1;
  auVar55[0xc] = (char)(uVar1 >> 0x30);
  auVar55._13_2_ = auVar25._13_2_;
  auVar85._8_4_ = 0;
  auVar85._0_8_ = uVar1;
  auVar85._12_3_ = auVar55._12_3_;
  auVar115._8_2_ = 0;
  auVar115._0_8_ = uVar1;
  auVar115[10] = (char)(uVar1 >> 0x28);
  auVar115._11_4_ = auVar85._11_4_;
  auVar145._8_2_ = 0;
  auVar145._0_8_ = uVar1;
  auVar145._10_5_ = auVar115._10_5_;
  auVar175[8] = (char)(uVar1 >> 0x20);
  auVar175._0_8_ = uVar1;
  auVar175._9_6_ = auVar145._9_6_;
  auVar278._7_8_ = 0;
  auVar278._0_7_ = auVar175._8_7_;
  Var201 = CONCAT81(SUB158(auVar278 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar343._9_6_ = 0;
  auVar343._0_9_ = Var201;
  auVar279._1_10_ = SUB1510(auVar343 << 0x30,5);
  auVar279[0] = (char)(uVar1 >> 0x10);
  auVar344._11_4_ = 0;
  auVar344._0_11_ = auVar279;
  auVar280._1_12_ = SUB1512(auVar344 << 0x20,3);
  auVar280[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar405._0_2_;
  sVar385 = auVar280._0_2_ + auVar405._2_2_;
  sVar386 = auVar279._0_2_ + auVar405._4_2_;
  sVar387 = (short)Var201 + auVar405._6_2_;
  sVar389 = auVar175._8_2_ + auVar405._8_2_;
  sVar390 = auVar115._10_2_ + auVar405._10_2_;
  sVar391 = auVar55._12_2_ + auVar405._12_2_;
  sVar392 = (auVar25._13_2_ >> 8) + auVar405._14_2_;
  *(ulonglong *)(lVar377 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar376 + (longlong)local_330);
  auVar26._8_6_ = 0;
  auVar26._0_8_ = uVar1;
  auVar26[0xe] = (char)(uVar1 >> 0x38);
  auVar56._8_4_ = 0;
  auVar56._0_8_ = uVar1;
  auVar56[0xc] = (char)(uVar1 >> 0x30);
  auVar56._13_2_ = auVar26._13_2_;
  auVar86._8_4_ = 0;
  auVar86._0_8_ = uVar1;
  auVar86._12_3_ = auVar56._12_3_;
  auVar116._8_2_ = 0;
  auVar116._0_8_ = uVar1;
  auVar116[10] = (char)(uVar1 >> 0x28);
  auVar116._11_4_ = auVar86._11_4_;
  auVar146._8_2_ = 0;
  auVar146._0_8_ = uVar1;
  auVar146._10_5_ = auVar116._10_5_;
  auVar176[8] = (char)(uVar1 >> 0x20);
  auVar176._0_8_ = uVar1;
  auVar176._9_6_ = auVar146._9_6_;
  auVar281._7_8_ = 0;
  auVar281._0_7_ = auVar176._8_7_;
  Var201 = CONCAT81(SUB158(auVar281 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar345._9_6_ = 0;
  auVar345._0_9_ = Var201;
  auVar282._1_10_ = SUB1510(auVar345 << 0x30,5);
  auVar282[0] = (char)(uVar1 >> 0x10);
  auVar346._11_4_ = 0;
  auVar346._0_11_ = auVar282;
  auVar283._1_12_ = SUB1512(auVar346 << 0x20,3);
  auVar283[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar406._0_2_;
  sVar385 = auVar283._0_2_ + auVar406._2_2_;
  sVar386 = auVar282._0_2_ + auVar406._4_2_;
  sVar387 = (short)Var201 + auVar406._6_2_;
  sVar389 = auVar176._8_2_ + auVar406._8_2_;
  sVar390 = auVar116._10_2_ + auVar406._10_2_;
  sVar391 = auVar56._12_2_ + auVar406._12_2_;
  sVar392 = (auVar26._13_2_ >> 8) + auVar406._14_2_;
  *(ulonglong *)(lVar376 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar375 + (longlong)local_330);
  auVar27._8_6_ = 0;
  auVar27._0_8_ = uVar1;
  auVar27[0xe] = (char)(uVar1 >> 0x38);
  auVar57._8_4_ = 0;
  auVar57._0_8_ = uVar1;
  auVar57[0xc] = (char)(uVar1 >> 0x30);
  auVar57._13_2_ = auVar27._13_2_;
  auVar87._8_4_ = 0;
  auVar87._0_8_ = uVar1;
  auVar87._12_3_ = auVar57._12_3_;
  auVar117._8_2_ = 0;
  auVar117._0_8_ = uVar1;
  auVar117[10] = (char)(uVar1 >> 0x28);
  auVar117._11_4_ = auVar87._11_4_;
  auVar147._8_2_ = 0;
  auVar147._0_8_ = uVar1;
  auVar147._10_5_ = auVar117._10_5_;
  auVar177[8] = (char)(uVar1 >> 0x20);
  auVar177._0_8_ = uVar1;
  auVar177._9_6_ = auVar147._9_6_;
  auVar284._7_8_ = 0;
  auVar284._0_7_ = auVar177._8_7_;
  Var201 = CONCAT81(SUB158(auVar284 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar347._9_6_ = 0;
  auVar347._0_9_ = Var201;
  auVar285._1_10_ = SUB1510(auVar347 << 0x30,5);
  auVar285[0] = (char)(uVar1 >> 0x10);
  auVar348._11_4_ = 0;
  auVar348._0_11_ = auVar285;
  auVar286._1_12_ = SUB1512(auVar348 << 0x20,3);
  auVar286[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar407._0_2_;
  sVar385 = auVar286._0_2_ + auVar407._2_2_;
  sVar386 = auVar285._0_2_ + auVar407._4_2_;
  sVar387 = (short)Var201 + auVar407._6_2_;
  sVar389 = auVar177._8_2_ + auVar407._8_2_;
  sVar390 = auVar117._10_2_ + auVar407._10_2_;
  sVar391 = auVar57._12_2_ + auVar407._12_2_;
  sVar392 = (auVar27._13_2_ >> 8) + auVar407._14_2_;
  *(ulonglong *)(lVar375 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar371 + (longlong)local_330);
  auVar28._8_6_ = 0;
  auVar28._0_8_ = uVar1;
  auVar28[0xe] = (char)(uVar1 >> 0x38);
  auVar58._8_4_ = 0;
  auVar58._0_8_ = uVar1;
  auVar58[0xc] = (char)(uVar1 >> 0x30);
  auVar58._13_2_ = auVar28._13_2_;
  auVar88._8_4_ = 0;
  auVar88._0_8_ = uVar1;
  auVar88._12_3_ = auVar58._12_3_;
  auVar118._8_2_ = 0;
  auVar118._0_8_ = uVar1;
  auVar118[10] = (char)(uVar1 >> 0x28);
  auVar118._11_4_ = auVar88._11_4_;
  auVar148._8_2_ = 0;
  auVar148._0_8_ = uVar1;
  auVar148._10_5_ = auVar118._10_5_;
  auVar178[8] = (char)(uVar1 >> 0x20);
  auVar178._0_8_ = uVar1;
  auVar178._9_6_ = auVar148._9_6_;
  auVar287._7_8_ = 0;
  auVar287._0_7_ = auVar178._8_7_;
  Var201 = CONCAT81(SUB158(auVar287 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar349._9_6_ = 0;
  auVar349._0_9_ = Var201;
  auVar288._1_10_ = SUB1510(auVar349 << 0x30,5);
  auVar288[0] = (char)(uVar1 >> 0x10);
  auVar350._11_4_ = 0;
  auVar350._0_11_ = auVar288;
  auVar289._1_12_ = SUB1512(auVar350 << 0x20,3);
  auVar289[0] = (char)(uVar1 >> 8);
  sVar383 = (ushort)(byte)uVar1 + auVar393._0_2_;
  sVar385 = auVar289._0_2_ + auVar393._2_2_;
  sVar386 = auVar288._0_2_ + auVar393._4_2_;
  sVar387 = (short)Var201 + auVar393._6_2_;
  sVar389 = auVar178._8_2_ + auVar393._8_2_;
  sVar390 = auVar118._10_2_ + auVar393._10_2_;
  sVar391 = auVar58._12_2_ + auVar393._12_2_;
  sVar392 = (auVar28._13_2_ >> 8) + auVar393._14_2_;
  *(ulonglong *)(lVar371 + (longlong)local_330) =
       CONCAT17((0 < sVar392) * (sVar392 < 0x100) * (char)sVar392 - (0xff < sVar392),
                CONCAT16((0 < sVar391) * (sVar391 < 0x100) * (char)sVar391 - (0xff < sVar391),
                         CONCAT15((0 < sVar390) * (sVar390 < 0x100) * (char)sVar390 -
                                  (0xff < sVar390),
                                  CONCAT14((0 < sVar389) * (sVar389 < 0x100) * (char)sVar389 -
                                           (0xff < sVar389),
                                           CONCAT13((0 < sVar387) * (sVar387 < 0x100) *
                                                    (char)sVar387 - (0xff < sVar387),
                                                    CONCAT12((0 < sVar386) * (sVar386 < 0x100) *
                                                             (char)sVar386 - (0xff < sVar386),
                                                             CONCAT11((0 < sVar385) *
                                                                      (sVar385 < 0x100) *
                                                                      (char)sVar385 -
                                                                      (0xff < sVar385),
                                                                      (0 < sVar383) *
                                                                      (sVar383 < 0x100) *
                                                                      (char)sVar383 -
                                                                      (0xff < sVar383))))))));
  uVar1 = *(ulonglong *)(lVar370 + (longlong)local_330);
  auVar29._8_6_ = 0;
  auVar29._0_8_ = uVar1;
  auVar29[0xe] = (char)(uVar1 >> 0x38);
  auVar59._8_4_ = 0;
  auVar59._0_8_ = uVar1;
  auVar59[0xc] = (char)(uVar1 >> 0x30);
  auVar59._13_2_ = auVar29._13_2_;
  auVar89._8_4_ = 0;
  auVar89._0_8_ = uVar1;
  auVar89._12_3_ = auVar59._12_3_;
  auVar119._8_2_ = 0;
  auVar119._0_8_ = uVar1;
  auVar119[10] = (char)(uVar1 >> 0x28);
  auVar119._11_4_ = auVar89._11_4_;
  auVar149._8_2_ = 0;
  auVar149._0_8_ = uVar1;
  auVar149._10_5_ = auVar119._10_5_;
  auVar179[8] = (char)(uVar1 >> 0x20);
  auVar179._0_8_ = uVar1;
  auVar179._9_6_ = auVar149._9_6_;
  auVar290._7_8_ = 0;
  auVar290._0_7_ = auVar179._8_7_;
  Var201 = CONCAT81(SUB158(auVar290 << 0x40,7),(char)(uVar1 >> 0x18));
  auVar351._9_6_ = 0;
  auVar351._0_9_ = Var201;
  auVar291._1_10_ = SUB1510(auVar351 << 0x30,5);
  auVar291[0] = (char)(uVar1 >> 0x10);
  auVar352._11_4_ = 0;
  auVar352._0_11_ = auVar291;
  auVar292._1_12_ = SUB1512(auVar352 << 0x20,3);
  auVar292[0] = (char)(uVar1 >> 8);
  local_308 = auVar384._0_2_;
  sStack_306 = auVar384._2_2_;
  sStack_304 = auVar384._4_2_;
  sStack_302 = auVar384._6_2_;
  sStack_300 = auVar384._8_2_;
  sStack_2fe = auVar384._10_2_;
  sStack_2fc = auVar384._12_2_;
  sStack_2fa = auVar384._14_2_;
  local_308 = (ushort)(byte)uVar1 + local_308;
  sStack_306 = auVar292._0_2_ + sStack_306;
  sStack_304 = auVar291._0_2_ + sStack_304;
  sStack_302 = (short)Var201 + sStack_302;
  sStack_300 = auVar179._8_2_ + sStack_300;
  sStack_2fe = auVar119._10_2_ + sStack_2fe;
  sStack_2fc = auVar59._12_2_ + sStack_2fc;
  sStack_2fa = (auVar29._13_2_ >> 8) + sStack_2fa;
  *(ulonglong *)(lVar370 + (longlong)local_330) =
       CONCAT17((0 < sStack_2fa) * (sStack_2fa < 0x100) * (char)sStack_2fa - (0xff < sStack_2fa),
                CONCAT16((0 < sStack_2fc) * (sStack_2fc < 0x100) * (char)sStack_2fc -
                         (0xff < sStack_2fc),
                         CONCAT15((0 < sStack_2fe) * (sStack_2fe < 0x100) * (char)sStack_2fe -
                                  (0xff < sStack_2fe),
                                  CONCAT14((0 < sStack_300) * (sStack_300 < 0x100) *
                                           (char)sStack_300 - (0xff < sStack_300),
                                           CONCAT13((0 < sStack_302) * (sStack_302 < 0x100) *
                                                    (char)sStack_302 - (0xff < sStack_302),
                                                    CONCAT12((0 < sStack_304) * (sStack_304 < 0x100)
                                                             * (char)sStack_304 -
                                                             (0xff < sStack_304),
                                                             CONCAT11((0 < sStack_306) *
                                                                      (sStack_306 < 0x100) *
                                                                      (char)sStack_306 -
                                                                      (0xff < sStack_306),
                                                                      (0 < local_308) *
                                                                      (local_308 < 0x100) *
                                                                      (char)local_308 -
                                                                      (0xff < local_308))))))));
  return;
}



// FUNCTION 1439e0350 FUN_1439e0350 body=321 status=ok
// SIG undefined FUN_1439e0350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439e0350(undefined8 *param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [14];
  unkbyte10 Var7;
  undefined1 auVar8 [14];
  short sVar9;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  short sVar25;
  undefined1 auVar26 [16];
  short sVar27;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  undefined1 auVar28 [16];
  short sVar42;
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 uVar43;
  undefined1 unaff_XMM6_Bc;
  undefined1 uVar44;
  undefined1 unaff_XMM6_Bd;
  undefined1 uVar45;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 uVar46;
  undefined1 unaff_XMM6_Bg;
  undefined1 uVar47;
  undefined1 unaff_XMM6_Bh;
  undefined1 uVar48;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  uVar4 = CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ^
          CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)));
  uVar43 = (undefined1)(uVar4 >> 8);
  uVar44 = (undefined1)(uVar4 >> 0x10);
  uVar45 = (undefined1)(uVar4 >> 0x18);
  uVar5 = CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ^
          CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)));
  uVar46 = (undefined1)(uVar5 >> 8);
  uVar47 = (undefined1)(uVar5 >> 0x10);
  uVar48 = (undefined1)(uVar5 >> 0x18);
  if (param_4 == 0) {
    FUN_1439ba560(&local_48);
  }
  else {
    if (param_4 == 1) {
      FUN_1439ba560(&local_48);
      FUN_1439b8e50(&local_48);
      goto LAB_1439e03ef;
    }
    if (param_4 != 2) {
      if (param_4 == 3) {
        FUN_1439b8e50(&local_48);
        FUN_1439b8e50(&local_48);
      }
      goto LAB_1439e03ef;
    }
    FUN_1439b8e50(&local_48);
  }
  FUN_1439ba560(&local_48);
LAB_1439e03ef:
  uVar2 = *(undefined4 *)(param_2 + param_3);
  uVar3 = *(undefined4 *)param_2;
  auVar10._0_2_ = (short)local_48 + 8;
  auVar10._2_2_ = local_48._2_2_ + 8;
  auVar10._4_2_ = local_48._4_2_ + 8;
  auVar10._6_2_ = local_48._6_2_ + 8;
  auVar10._8_2_ = (short)uStack_40 + 8;
  auVar10._10_2_ = uStack_40._2_2_ + 8;
  auVar10._12_2_ = uStack_40._4_2_ + 8;
  auVar10._14_2_ = uStack_40._6_2_ + 8;
  auVar26._0_2_ = (short)local_38 + 8;
  auVar26._2_2_ = local_38._2_2_ + 8;
  auVar26._4_2_ = local_38._4_2_ + 8;
  auVar26._6_2_ = local_38._6_2_ + 8;
  auVar26._8_2_ = (short)uStack_30 + 8;
  auVar26._10_2_ = uStack_30._2_2_ + 8;
  auVar26._12_2_ = uStack_30._4_2_ + 8;
  auVar26._14_2_ = uStack_30._6_2_ + 8;
  auVar29._0_8_ = CONCAT44(uVar2,uVar3);
  auVar10 = psraw(auVar10,4);
  auVar35._8_6_ = 0;
  auVar35._0_8_ = auVar29._0_8_;
  auVar35[0xe] = (char)((uint)uVar2 >> 0x18);
  auVar35[0xf] = uVar48;
  auVar34._14_2_ = auVar35._14_2_;
  auVar34._8_5_ = 0;
  auVar34._0_8_ = auVar29._0_8_;
  auVar34[0xd] = uVar47;
  auVar33._13_3_ = auVar34._13_3_;
  auVar33._8_4_ = 0;
  auVar33._0_8_ = auVar29._0_8_;
  auVar33[0xc] = (char)((uint)uVar2 >> 0x10);
  auVar32._12_4_ = auVar33._12_4_;
  auVar32._8_3_ = 0;
  auVar32._0_8_ = auVar29._0_8_;
  auVar32[0xb] = uVar46;
  auVar31._11_5_ = auVar32._11_5_;
  auVar31._8_2_ = 0;
  auVar31._0_8_ = auVar29._0_8_;
  auVar31[10] = (char)((uint)uVar2 >> 8);
  auVar30._10_6_ = auVar31._10_6_;
  auVar30[8] = 0;
  auVar30._0_8_ = auVar29._0_8_;
  auVar30[9] = (char)uVar5;
  auVar29._9_7_ = auVar30._9_7_;
  auVar29[8] = (char)uVar2;
  Var7 = CONCAT91(CONCAT81(auVar29._8_8_,uVar45),(char)((uint)uVar3 >> 0x18));
  auVar28._6_10_ = Var7;
  auVar28[5] = uVar44;
  auVar28[4] = (char)((uint)uVar3 >> 0x10);
  auVar28._0_4_ = uVar3;
  auVar6._2_12_ = auVar28._4_12_;
  auVar6[1] = uVar43;
  auVar6[0] = (char)((uint)uVar3 >> 8);
  sVar27 = CONCAT11((char)uVar4,(char)uVar3) + auVar10._0_2_;
  sVar36 = auVar6._0_2_ + auVar10._2_2_;
  sVar37 = auVar28._4_2_ + auVar10._4_2_;
  sVar38 = (short)Var7 + auVar10._6_2_;
  sVar39 = auVar29._8_2_ + auVar10._8_2_;
  sVar40 = auVar31._10_2_ + auVar10._10_2_;
  sVar41 = auVar33._12_2_ + auVar10._12_2_;
  sVar42 = auVar34._14_2_ + auVar10._14_2_;
  auVar10 = psraw(auVar26,4);
  uVar2 = *(undefined4 *)(param_2 + param_3 * 2);
  uVar3 = *(undefined4 *)(param_2 + param_3 * 3);
  auVar12._0_8_ = CONCAT44(uVar3,uVar2);
  auVar18._8_6_ = 0;
  auVar18._0_8_ = auVar12._0_8_;
  auVar18[0xe] = (char)((uint)uVar3 >> 0x18);
  auVar18[0xf] = uVar48;
  auVar17._14_2_ = auVar18._14_2_;
  auVar17._8_5_ = 0;
  auVar17._0_8_ = auVar12._0_8_;
  auVar17[0xd] = uVar47;
  auVar16._13_3_ = auVar17._13_3_;
  auVar16._8_4_ = 0;
  auVar16._0_8_ = auVar12._0_8_;
  auVar16[0xc] = (char)((uint)uVar3 >> 0x10);
  auVar15._12_4_ = auVar16._12_4_;
  auVar15._8_3_ = 0;
  auVar15._0_8_ = auVar12._0_8_;
  auVar15[0xb] = uVar46;
  auVar14._11_5_ = auVar15._11_5_;
  auVar14._8_2_ = 0;
  auVar14._0_8_ = auVar12._0_8_;
  auVar14[10] = (char)((uint)uVar3 >> 8);
  auVar13._10_6_ = auVar14._10_6_;
  auVar13[8] = 0;
  auVar13._0_8_ = auVar12._0_8_;
  auVar13[9] = (char)uVar5;
  auVar12._9_7_ = auVar13._9_7_;
  auVar12[8] = (char)uVar3;
  Var7 = CONCAT91(CONCAT81(auVar12._8_8_,uVar45),(char)((uint)uVar2 >> 0x18));
  auVar11._6_10_ = Var7;
  auVar11[5] = uVar44;
  auVar11[4] = (char)((uint)uVar2 >> 0x10);
  auVar11._0_4_ = uVar2;
  auVar8._2_12_ = auVar11._4_12_;
  auVar8[1] = uVar43;
  auVar8[0] = (char)((uint)uVar2 >> 8);
  sVar9 = CONCAT11((char)uVar4,(char)uVar2) + auVar10._0_2_;
  sVar19 = auVar8._0_2_ + auVar10._2_2_;
  sVar20 = auVar11._4_2_ + auVar10._4_2_;
  sVar21 = (short)Var7 + auVar10._6_2_;
  sVar22 = auVar12._8_2_ + auVar10._8_2_;
  sVar23 = auVar14._10_2_ + auVar10._10_2_;
  sVar24 = auVar16._12_2_ + auVar10._12_2_;
  sVar25 = auVar17._14_2_ + auVar10._14_2_;
  *param_2 = (0 < sVar27) * (sVar27 < 0x100) * (char)sVar27 - (0xff < sVar27);
  param_2[1] = (0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36);
  param_2[2] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
  param_2[3] = (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38);
  pcVar1 = param_2 + param_3;
  *pcVar1 = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
  pcVar1[1] = (0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40);
  pcVar1[2] = (0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41);
  pcVar1[3] = (0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42);
  pcVar1 = param_2 + param_3 * 2;
  *pcVar1 = (0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9);
  pcVar1[1] = (0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19);
  pcVar1[2] = (0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20);
  pcVar1[3] = (0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21);
  param_2 = param_2 + param_3 * 3;
  *param_2 = (0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22);
  param_2[1] = (0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 - (0xff < sVar23);
  param_2[2] = (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24);
  param_2[3] = (0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 - (0xff < sVar25);
  return;
}



// FUNCTION 1439e04a0 FUN_1439e04a0 body=663 status=ok
// SIG undefined FUN_1439e04a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439e04a0(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [12];
  unkbyte10 Var5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  undefined1 auVar8 [14];
  undefined1 auVar9 [12];
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  undefined1 auVar18 [14];
  undefined1 auVar19 [12];
  short sVar20;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  undefined1 auVar21 [16];
  short sVar82;
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar55 [16];
  undefined1 auVar62 [16];
  undefined1 auVar69 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 unaff_XMM9_Ba;
  undefined1 uVar92;
  undefined1 unaff_XMM9_Bb;
  undefined1 uVar93;
  undefined1 unaff_XMM9_Bc;
  undefined1 uVar94;
  undefined1 unaff_XMM9_Bd;
  undefined1 uVar95;
  undefined1 unaff_XMM9_Be;
  undefined1 uVar96;
  undefined1 unaff_XMM9_Bf;
  undefined1 uVar97;
  undefined1 unaff_XMM9_Bg;
  undefined1 uVar98;
  undefined1 unaff_XMM9_Bh;
  undefined1 uVar99;
  undefined1 auStack_108 [32];
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
  ulonglong local_68;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  auVar84 = _DAT_145cacc30;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = *param_1;
  uStack_e0 = param_1[1];
  local_d8 = param_1[2];
  uStack_d0 = param_1[3];
  uVar2 = CONCAT13(unaff_XMM9_Bd,CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ^
          CONCAT13(unaff_XMM9_Bd,CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba)));
  uVar92 = (undefined1)uVar2;
  uVar93 = (undefined1)(uVar2 >> 8);
  uVar94 = (undefined1)(uVar2 >> 0x10);
  uVar95 = (undefined1)(uVar2 >> 0x18);
  uVar2 = CONCAT13(unaff_XMM9_Bh,CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ^
          CONCAT13(unaff_XMM9_Bh,CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be)));
  uVar96 = (undefined1)uVar2;
  uVar97 = (undefined1)(uVar2 >> 8);
  uVar98 = (undefined1)(uVar2 >> 0x10);
  uVar99 = (undefined1)(uVar2 >> 0x18);
  local_c8 = param_1[4];
  uStack_c0 = param_1[5];
  local_b8 = param_1[6];
  uStack_b0 = param_1[7];
  local_a8 = param_1[8];
  uStack_a0 = param_1[9];
  local_98 = param_1[10];
  uStack_90 = param_1[0xb];
  local_88 = param_1[0xc];
  uStack_80 = param_1[0xd];
  local_78 = param_1[0xe];
  uStack_70 = param_1[0xf];
  if (param_4 == 0) {
    FUN_1439ba610(&local_e8);
  }
  else {
    if (param_4 == 1) {
      FUN_1439ba610(&local_e8);
      FUN_1439b8f70(&local_e8);
      goto LAB_1439e05a2;
    }
    if (param_4 != 2) {
      if (param_4 == 3) {
        FUN_1439b8f70(&local_e8);
        FUN_1439b8f70(&local_e8);
      }
      goto LAB_1439e05a2;
    }
    FUN_1439b8f70(&local_e8);
  }
  FUN_1439ba610(&local_e8);
LAB_1439e05a2:
  uVar1 = *param_2;
  auVar83._8_8_ = uStack_e0;
  auVar83._0_8_ = local_e8;
  auVar85._8_8_ = uStack_d0;
  auVar85._0_8_ = local_d8;
  auVar83 = paddsw(auVar83,auVar84);
  auVar86._8_8_ = uStack_c0;
  auVar86._0_8_ = local_c8;
  auVar85 = paddsw(auVar85,auVar84);
  auVar87._8_8_ = uStack_b0;
  auVar87._0_8_ = local_b8;
  auVar86 = paddsw(auVar86,auVar84);
  auVar88._8_8_ = uStack_a0;
  auVar88._0_8_ = local_a8;
  auVar87 = paddsw(auVar87,auVar84);
  auVar89._8_8_ = uStack_90;
  auVar89._0_8_ = local_98;
  auVar88 = paddsw(auVar88,auVar84);
  auVar90._8_8_ = uStack_80;
  auVar90._0_8_ = local_88;
  auVar89 = paddsw(auVar89,auVar84);
  auVar91._8_8_ = uStack_70;
  auVar91._0_8_ = local_78;
  auVar90 = paddsw(auVar90,auVar84);
  auVar27._8_6_ = 0;
  auVar27._0_8_ = uVar1;
  auVar27[0xe] = (char)(uVar1 >> 0x38);
  auVar27[0xf] = uVar99;
  auVar26._14_2_ = auVar27._14_2_;
  auVar26._8_5_ = 0;
  auVar26._0_8_ = uVar1;
  auVar26[0xd] = uVar98;
  auVar25._13_3_ = auVar26._13_3_;
  auVar25._8_4_ = 0;
  auVar25._0_8_ = uVar1;
  auVar25[0xc] = (char)(uVar1 >> 0x30);
  auVar24._12_4_ = auVar25._12_4_;
  auVar24._8_3_ = 0;
  auVar24._0_8_ = uVar1;
  auVar24[0xb] = uVar97;
  auVar23._11_5_ = auVar24._11_5_;
  auVar23._8_2_ = 0;
  auVar23._0_8_ = uVar1;
  auVar23[10] = (char)(uVar1 >> 0x28);
  auVar22._10_6_ = auVar23._10_6_;
  auVar22[8] = 0;
  auVar22._0_8_ = uVar1;
  auVar22[9] = uVar96;
  auVar21._9_7_ = auVar22._9_7_;
  auVar21[8] = (char)(uVar1 >> 0x20);
  auVar21._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar21._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar4._2_10_ = Var5;
  auVar4[1] = uVar94;
  auVar4[0] = (char)(uVar1 >> 0x10);
  auVar3._2_12_ = auVar4;
  auVar3[1] = uVar93;
  auVar3[0] = (char)(uVar1 >> 8);
  auVar91 = paddsw(auVar91,auVar84);
  auVar84 = psraw(auVar83,5);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar84._0_2_;
  sVar76 = auVar3._0_2_ + auVar84._2_2_;
  sVar77 = auVar4._0_2_ + auVar84._4_2_;
  sVar78 = (short)Var5 + auVar84._6_2_;
  sVar79 = auVar21._8_2_ + auVar84._8_2_;
  sVar80 = auVar23._10_2_ + auVar84._10_2_;
  sVar81 = auVar25._12_2_ + auVar84._12_2_;
  sVar82 = auVar26._14_2_ + auVar84._14_2_;
  auVar83 = psraw(auVar85,5);
  *param_2 = CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                      CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                               CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 -
                                        (0xff < sVar80),
                                        CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                                 (0xff < sVar79),
                                                 CONCAT13((0 < sVar78) * (sVar78 < 0x100) *
                                                          (char)sVar78 - (0xff < sVar78),
                                                          CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                                   (char)sVar77 - (0xff < sVar77),
                                                                   CONCAT11((0 < sVar76) *
                                                                            (sVar76 < 0x100) *
                                                                            (char)sVar76 -
                                                                            (0xff < sVar76),
                                                                            (0 < sVar20) *
                                                                            (sVar20 < 0x100) *
                                                                            (char)sVar20 -
                                                                            (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)param_3 + (longlong)param_2);
  auVar84._8_6_ = 0;
  auVar84._0_8_ = uVar1;
  auVar84[0xe] = (char)(uVar1 >> 0x38);
  auVar84[0xf] = uVar99;
  auVar33._14_2_ = auVar84._14_2_;
  auVar33._8_5_ = 0;
  auVar33._0_8_ = uVar1;
  auVar33[0xd] = uVar98;
  auVar32._13_3_ = auVar33._13_3_;
  auVar32._8_4_ = 0;
  auVar32._0_8_ = uVar1;
  auVar32[0xc] = (char)(uVar1 >> 0x30);
  auVar31._12_4_ = auVar32._12_4_;
  auVar31._8_3_ = 0;
  auVar31._0_8_ = uVar1;
  auVar31[0xb] = uVar97;
  auVar30._11_5_ = auVar31._11_5_;
  auVar30._8_2_ = 0;
  auVar30._0_8_ = uVar1;
  auVar30[10] = (char)(uVar1 >> 0x28);
  auVar29._10_6_ = auVar30._10_6_;
  auVar29[8] = 0;
  auVar29._0_8_ = uVar1;
  auVar29[9] = uVar96;
  auVar28._9_7_ = auVar29._9_7_;
  auVar28[8] = (char)(uVar1 >> 0x20);
  auVar28._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar28._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar7._2_10_ = Var5;
  auVar7[1] = uVar94;
  auVar7[0] = (char)(uVar1 >> 0x10);
  auVar6._2_12_ = auVar7;
  auVar6[1] = uVar93;
  auVar6[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar83._0_2_;
  sVar76 = auVar6._0_2_ + auVar83._2_2_;
  sVar77 = auVar7._0_2_ + auVar83._4_2_;
  sVar78 = (short)Var5 + auVar83._6_2_;
  sVar79 = auVar28._8_2_ + auVar83._8_2_;
  sVar80 = auVar30._10_2_ + auVar83._10_2_;
  sVar81 = auVar32._12_2_ + auVar83._12_2_;
  sVar82 = auVar33._14_2_ + auVar83._14_2_;
  auVar84 = psraw(auVar86,5);
  *(ulonglong *)((longlong)param_3 + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)(param_3 * 2) + (longlong)param_2);
  auVar40._8_6_ = 0;
  auVar40._0_8_ = uVar1;
  auVar40[0xe] = (char)(uVar1 >> 0x38);
  auVar40[0xf] = uVar99;
  auVar39._14_2_ = auVar40._14_2_;
  auVar39._8_5_ = 0;
  auVar39._0_8_ = uVar1;
  auVar39[0xd] = uVar98;
  auVar38._13_3_ = auVar39._13_3_;
  auVar38._8_4_ = 0;
  auVar38._0_8_ = uVar1;
  auVar38[0xc] = (char)(uVar1 >> 0x30);
  auVar37._12_4_ = auVar38._12_4_;
  auVar37._8_3_ = 0;
  auVar37._0_8_ = uVar1;
  auVar37[0xb] = uVar97;
  auVar36._11_5_ = auVar37._11_5_;
  auVar36._8_2_ = 0;
  auVar36._0_8_ = uVar1;
  auVar36[10] = (char)(uVar1 >> 0x28);
  auVar35._10_6_ = auVar36._10_6_;
  auVar35[8] = 0;
  auVar35._0_8_ = uVar1;
  auVar35[9] = uVar96;
  auVar34._9_7_ = auVar35._9_7_;
  auVar34[8] = (char)(uVar1 >> 0x20);
  auVar34._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar34._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar9._2_10_ = Var5;
  auVar9[1] = uVar94;
  auVar9[0] = (char)(uVar1 >> 0x10);
  auVar8._2_12_ = auVar9;
  auVar8[1] = uVar93;
  auVar8[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar84._0_2_;
  sVar76 = auVar8._0_2_ + auVar84._2_2_;
  sVar77 = auVar9._0_2_ + auVar84._4_2_;
  sVar78 = (short)Var5 + auVar84._6_2_;
  sVar79 = auVar34._8_2_ + auVar84._8_2_;
  sVar80 = auVar36._10_2_ + auVar84._10_2_;
  sVar81 = auVar38._12_2_ + auVar84._12_2_;
  sVar82 = auVar39._14_2_ + auVar84._14_2_;
  auVar84 = psraw(auVar87,5);
  *(ulonglong *)((longlong)(param_3 * 2) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  auVar83 = psraw(auVar88,5);
  auVar85 = psraw(auVar89,5);
  auVar86 = psraw(auVar90,5);
  uVar1 = *(ulonglong *)((longlong)(param_3 * 3) + (longlong)param_2);
  auVar47._8_6_ = 0;
  auVar47._0_8_ = uVar1;
  auVar47[0xe] = (char)(uVar1 >> 0x38);
  auVar47[0xf] = uVar99;
  auVar46._14_2_ = auVar47._14_2_;
  auVar46._8_5_ = 0;
  auVar46._0_8_ = uVar1;
  auVar46[0xd] = uVar98;
  auVar45._13_3_ = auVar46._13_3_;
  auVar45._8_4_ = 0;
  auVar45._0_8_ = uVar1;
  auVar45[0xc] = (char)(uVar1 >> 0x30);
  auVar44._12_4_ = auVar45._12_4_;
  auVar44._8_3_ = 0;
  auVar44._0_8_ = uVar1;
  auVar44[0xb] = uVar97;
  auVar43._11_5_ = auVar44._11_5_;
  auVar43._8_2_ = 0;
  auVar43._0_8_ = uVar1;
  auVar43[10] = (char)(uVar1 >> 0x28);
  auVar42._10_6_ = auVar43._10_6_;
  auVar42[8] = 0;
  auVar42._0_8_ = uVar1;
  auVar42[9] = uVar96;
  auVar41._9_7_ = auVar42._9_7_;
  auVar41[8] = (char)(uVar1 >> 0x20);
  auVar41._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar41._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar11._2_10_ = Var5;
  auVar11[1] = uVar94;
  auVar11[0] = (char)(uVar1 >> 0x10);
  auVar10._2_12_ = auVar11;
  auVar10[1] = uVar93;
  auVar10[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar84._0_2_;
  sVar76 = auVar10._0_2_ + auVar84._2_2_;
  sVar77 = auVar11._0_2_ + auVar84._4_2_;
  sVar78 = (short)Var5 + auVar84._6_2_;
  sVar79 = auVar41._8_2_ + auVar84._8_2_;
  sVar80 = auVar43._10_2_ + auVar84._10_2_;
  sVar81 = auVar45._12_2_ + auVar84._12_2_;
  sVar82 = auVar46._14_2_ + auVar84._14_2_;
  auVar84 = psraw(auVar91,5);
  *(ulonglong *)((longlong)(param_3 * 3) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)(param_3 * 4) + (longlong)param_2);
  auVar54._8_6_ = 0;
  auVar54._0_8_ = uVar1;
  auVar54[0xe] = (char)(uVar1 >> 0x38);
  auVar54[0xf] = uVar99;
  auVar53._14_2_ = auVar54._14_2_;
  auVar53._8_5_ = 0;
  auVar53._0_8_ = uVar1;
  auVar53[0xd] = uVar98;
  auVar52._13_3_ = auVar53._13_3_;
  auVar52._8_4_ = 0;
  auVar52._0_8_ = uVar1;
  auVar52[0xc] = (char)(uVar1 >> 0x30);
  auVar51._12_4_ = auVar52._12_4_;
  auVar51._8_3_ = 0;
  auVar51._0_8_ = uVar1;
  auVar51[0xb] = uVar97;
  auVar50._11_5_ = auVar51._11_5_;
  auVar50._8_2_ = 0;
  auVar50._0_8_ = uVar1;
  auVar50[10] = (char)(uVar1 >> 0x28);
  auVar49._10_6_ = auVar50._10_6_;
  auVar49[8] = 0;
  auVar49._0_8_ = uVar1;
  auVar49[9] = uVar96;
  auVar48._9_7_ = auVar49._9_7_;
  auVar48[8] = (char)(uVar1 >> 0x20);
  auVar48._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar48._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar13._2_10_ = Var5;
  auVar13[1] = uVar94;
  auVar13[0] = (char)(uVar1 >> 0x10);
  auVar12._2_12_ = auVar13;
  auVar12[1] = uVar93;
  auVar12[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar83._0_2_;
  sVar76 = auVar12._0_2_ + auVar83._2_2_;
  sVar77 = auVar13._0_2_ + auVar83._4_2_;
  sVar78 = (short)Var5 + auVar83._6_2_;
  sVar79 = auVar48._8_2_ + auVar83._8_2_;
  sVar80 = auVar50._10_2_ + auVar83._10_2_;
  sVar81 = auVar52._12_2_ + auVar83._12_2_;
  sVar82 = auVar53._14_2_ + auVar83._14_2_;
  *(ulonglong *)((longlong)(param_3 * 4) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)(param_3 * 5) + (longlong)param_2);
  auVar61._8_6_ = 0;
  auVar61._0_8_ = uVar1;
  auVar61[0xe] = (char)(uVar1 >> 0x38);
  auVar61[0xf] = uVar99;
  auVar60._14_2_ = auVar61._14_2_;
  auVar60._8_5_ = 0;
  auVar60._0_8_ = uVar1;
  auVar60[0xd] = uVar98;
  auVar59._13_3_ = auVar60._13_3_;
  auVar59._8_4_ = 0;
  auVar59._0_8_ = uVar1;
  auVar59[0xc] = (char)(uVar1 >> 0x30);
  auVar58._12_4_ = auVar59._12_4_;
  auVar58._8_3_ = 0;
  auVar58._0_8_ = uVar1;
  auVar58[0xb] = uVar97;
  auVar57._11_5_ = auVar58._11_5_;
  auVar57._8_2_ = 0;
  auVar57._0_8_ = uVar1;
  auVar57[10] = (char)(uVar1 >> 0x28);
  auVar56._10_6_ = auVar57._10_6_;
  auVar56[8] = 0;
  auVar56._0_8_ = uVar1;
  auVar56[9] = uVar96;
  auVar55._9_7_ = auVar56._9_7_;
  auVar55[8] = (char)(uVar1 >> 0x20);
  auVar55._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar55._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar15._2_10_ = Var5;
  auVar15[1] = uVar94;
  auVar15[0] = (char)(uVar1 >> 0x10);
  auVar14._2_12_ = auVar15;
  auVar14[1] = uVar93;
  auVar14[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar85._0_2_;
  sVar76 = auVar14._0_2_ + auVar85._2_2_;
  sVar77 = auVar15._0_2_ + auVar85._4_2_;
  sVar78 = (short)Var5 + auVar85._6_2_;
  sVar79 = auVar55._8_2_ + auVar85._8_2_;
  sVar80 = auVar57._10_2_ + auVar85._10_2_;
  sVar81 = auVar59._12_2_ + auVar85._12_2_;
  sVar82 = auVar60._14_2_ + auVar85._14_2_;
  *(ulonglong *)((longlong)(param_3 * 5) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)(param_3 * 6) + (longlong)param_2);
  auVar68._8_6_ = 0;
  auVar68._0_8_ = uVar1;
  auVar68[0xe] = (char)(uVar1 >> 0x38);
  auVar68[0xf] = uVar99;
  auVar67._14_2_ = auVar68._14_2_;
  auVar67._8_5_ = 0;
  auVar67._0_8_ = uVar1;
  auVar67[0xd] = uVar98;
  auVar66._13_3_ = auVar67._13_3_;
  auVar66._8_4_ = 0;
  auVar66._0_8_ = uVar1;
  auVar66[0xc] = (char)(uVar1 >> 0x30);
  auVar65._12_4_ = auVar66._12_4_;
  auVar65._8_3_ = 0;
  auVar65._0_8_ = uVar1;
  auVar65[0xb] = uVar97;
  auVar64._11_5_ = auVar65._11_5_;
  auVar64._8_2_ = 0;
  auVar64._0_8_ = uVar1;
  auVar64[10] = (char)(uVar1 >> 0x28);
  auVar63._10_6_ = auVar64._10_6_;
  auVar63[8] = 0;
  auVar63._0_8_ = uVar1;
  auVar63[9] = uVar96;
  auVar62._9_7_ = auVar63._9_7_;
  auVar62[8] = (char)(uVar1 >> 0x20);
  auVar62._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar62._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar17._2_10_ = Var5;
  auVar17[1] = uVar94;
  auVar17[0] = (char)(uVar1 >> 0x10);
  auVar16._2_12_ = auVar17;
  auVar16[1] = uVar93;
  auVar16[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar86._0_2_;
  sVar76 = auVar16._0_2_ + auVar86._2_2_;
  sVar77 = auVar17._0_2_ + auVar86._4_2_;
  sVar78 = (short)Var5 + auVar86._6_2_;
  sVar79 = auVar62._8_2_ + auVar86._8_2_;
  sVar80 = auVar64._10_2_ + auVar86._10_2_;
  sVar81 = auVar66._12_2_ + auVar86._12_2_;
  sVar82 = auVar67._14_2_ + auVar86._14_2_;
  *(ulonglong *)((longlong)(param_3 * 6) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  uVar1 = *(ulonglong *)((longlong)(param_3 * 7) + (longlong)param_2);
  auVar75._8_6_ = 0;
  auVar75._0_8_ = uVar1;
  auVar75[0xe] = (char)(uVar1 >> 0x38);
  auVar75[0xf] = uVar99;
  auVar74._14_2_ = auVar75._14_2_;
  auVar74._8_5_ = 0;
  auVar74._0_8_ = uVar1;
  auVar74[0xd] = uVar98;
  auVar73._13_3_ = auVar74._13_3_;
  auVar73._8_4_ = 0;
  auVar73._0_8_ = uVar1;
  auVar73[0xc] = (char)(uVar1 >> 0x30);
  auVar72._12_4_ = auVar73._12_4_;
  auVar72._8_3_ = 0;
  auVar72._0_8_ = uVar1;
  auVar72[0xb] = uVar97;
  auVar71._11_5_ = auVar72._11_5_;
  auVar71._8_2_ = 0;
  auVar71._0_8_ = uVar1;
  auVar71[10] = (char)(uVar1 >> 0x28);
  auVar70._10_6_ = auVar71._10_6_;
  auVar70[8] = 0;
  auVar70._0_8_ = uVar1;
  auVar70[9] = uVar96;
  auVar69._9_7_ = auVar70._9_7_;
  auVar69[8] = (char)(uVar1 >> 0x20);
  auVar69._0_8_ = uVar1;
  Var5 = CONCAT91(CONCAT81(auVar69._8_8_,uVar95),(char)(uVar1 >> 0x18));
  auVar19._2_10_ = Var5;
  auVar19[1] = uVar94;
  auVar19[0] = (char)(uVar1 >> 0x10);
  auVar18._2_12_ = auVar19;
  auVar18[1] = uVar93;
  auVar18[0] = (char)(uVar1 >> 8);
  sVar20 = CONCAT11(uVar92,(char)uVar1) + auVar84._0_2_;
  sVar76 = auVar18._0_2_ + auVar84._2_2_;
  sVar77 = auVar19._0_2_ + auVar84._4_2_;
  sVar78 = (short)Var5 + auVar84._6_2_;
  sVar79 = auVar69._8_2_ + auVar84._8_2_;
  sVar80 = auVar71._10_2_ + auVar84._10_2_;
  sVar81 = auVar73._12_2_ + auVar84._12_2_;
  sVar82 = auVar74._14_2_ + auVar84._14_2_;
  *(ulonglong *)((longlong)(param_3 * 7) + (longlong)param_2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)sVar82 - (0xff < sVar82),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),
                         CONCAT15((0 < sVar80) * (sVar80 < 0x100) * (char)sVar80 - (0xff < sVar80),
                                  CONCAT14((0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 -
                                           (0xff < sVar79),
                                           CONCAT13((0 < sVar78) * (sVar78 < 0x100) * (char)sVar78 -
                                                    (0xff < sVar78),
                                                    CONCAT12((0 < sVar77) * (sVar77 < 0x100) *
                                                             (char)sVar77 - (0xff < sVar77),
                                                             CONCAT11((0 < sVar76) *
                                                                      (sVar76 < 0x100) *
                                                                      (char)sVar76 - (0xff < sVar76)
                                                                      ,(0 < sVar20) *
                                                                       (sVar20 < 0x100) *
                                                                       (char)sVar20 -
                                                                       (0xff < sVar20))))))));
  return;
}



// FUNCTION 1439e0740 FUN_1439e0740 body=1803 status=ok
// SIG undefined FUN_1439e0740(void)

void FUN_1439e0740(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  short local_res8;
  short local_res20;
  short local_7c;
  
  iVar1 = (int)param_1[3];
  iVar6 = (int)param_1[10];
  iVar18 = (int)param_1[5];
  iVar21 = (int)param_1[8];
  iVar20 = (int)param_1[7];
  iVar24 = (int)param_1[6];
  iVar23 = (int)param_1[9];
  iVar8 = (int)param_1[4];
  iVar9 = (int)param_1[0xb];
  iVar10 = (int)param_1[2];
  iVar15 = (int)param_1[0xd];
  iVar13 = (int)*param_1;
  iVar11 = (int)param_1[0xf];
  iVar2 = (int)param_1[0xc];
  iVar3 = (int)param_1[1];
  iVar4 = (int)param_1[0xe];
  if (((((((((((((((iVar4 == 0 && iVar3 == 0) && iVar2 == 0) && iVar1 == 0) && iVar6 == 0) &&
               iVar18 == 0) && iVar21 == 0) && iVar20 == 0) && iVar24 == 0) && iVar23 == 0) &&
          iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar15 == 0) && iVar13 == 0) && iVar11 == 0)
  {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else {
    iVar5 = iVar11 * 0x3fec + iVar13 * 0x324;
    iVar19 = iVar11 * 0x324 + iVar13 * -0x3fec;
    iVar7 = iVar15 * 0x3e15 + iVar10 * 0xf8d;
    iVar14 = iVar15 * 0xf8d + iVar10 * -0x3e15;
    iVar16 = iVar9 * 0x39db + iVar8 * 0x1b5d;
    iVar11 = iVar9 * 0x1b5d + iVar8 * -0x39db;
    iVar12 = iVar23 * 0x3368 + iVar24 * 0x2620;
    iVar8 = iVar23 * 0x2620 + iVar24 * -0x3368;
    iVar9 = iVar21 * 0x2f6c + iVar20 * 0x2afb;
    iVar22 = iVar20 * 0x2f6c + iVar21 * -0x2afb;
    iVar24 = (iVar19 - iVar22) + 0x2000 >> 0xe;
    iVar20 = iVar6 * 0x36e5 + iVar18 * 0x20e7;
    iVar15 = (iVar7 - iVar20) + 0x2000 >> 0xe;
    iVar25 = iVar18 * 0x36e5 + iVar6 * -0x20e7;
    iVar23 = (iVar14 - iVar25) + 0x2000 >> 0xe;
    iVar6 = iVar2 * 0x3c42 + iVar1 * 0x1590;
    iVar17 = (iVar16 - iVar6) + 0x2000 >> 0xe;
    iVar18 = iVar1 * 0x3c42 + iVar2 * -0x1590;
    iVar13 = (iVar11 - iVar18) + 0x2000 >> 0xe;
    iVar1 = iVar4 * 0x3f4f + iVar3 * 0x964;
    iVar2 = iVar3 * 0x3f4f + iVar4 * -0x964;
    iVar4 = (iVar5 - iVar9) + 0x2000 >> 0xe;
    iVar21 = (iVar12 - iVar1) + 0x2000 >> 0xe;
    iVar9 = iVar9 + 0x2000 + iVar5 >> 0xe;
    iVar10 = (iVar8 - iVar2) + 0x2000 >> 0xe;
    iVar3 = iVar19 + 0x2000 + iVar22 >> 0xe;
    iVar19 = iVar12 + 0x2000 + iVar1 >> 0xe;
    iVar1 = iVar7 + 0x2000 + iVar20 >> 0xe;
    iVar7 = iVar8 + 0x2000 + iVar2 >> 0xe;
    iVar2 = iVar14 + 0x2000 + iVar25 >> 0xe;
    iVar6 = iVar16 + 0x2000 + iVar6 >> 0xe;
    iVar8 = iVar11 + 0x2000 + iVar18 >> 0xe;
    iVar20 = iVar4 * 0x3ec5 + iVar24 * 0xc7c;
    iVar11 = iVar3 - iVar8;
    iVar12 = iVar4 * 0xc7c + iVar24 * -0x3ec5;
    iVar5 = iVar23 * 0x3537 + iVar15 * 0x238e;
    iVar24 = iVar1 - iVar19;
    iVar14 = iVar15 * 0x3537 + iVar23 * -0x238e;
    iVar25 = iVar13 * 0x3ec5 + iVar17 * -0xc7c;
    iVar4 = iVar2 - iVar7;
    iVar22 = iVar17 * 0x3ec5 + iVar13 * 0xc7c;
    iVar15 = iVar10 * 0x238e + iVar21 * -0x3537;
    iVar23 = iVar9 - iVar6;
    iVar13 = iVar10 * 0x3537 + iVar21 * 0x238e;
    iVar1 = iVar1 + iVar19;
    iVar2 = iVar2 + iVar7;
    iVar9 = iVar9 + iVar6;
    iVar3 = iVar3 + iVar8;
    iVar21 = (iVar20 - iVar25) + 0x2000 >> 0xe;
    iVar16 = (iVar12 - iVar22) + 0x2000 >> 0xe;
    iVar18 = (iVar5 - iVar15) + 0x2000 >> 0xe;
    iVar19 = iVar23 * 0x3b21 + iVar11 * 0x187e;
    iVar7 = (iVar14 - iVar13) + 0x2000 >> 0xe;
    iVar8 = iVar23 * 0x187e + iVar11 * -0x3b21;
    iVar17 = iVar4 * 0x3b21 + iVar24 * -0x187e;
    iVar5 = iVar5 + 0x2000 + iVar15 >> 0xe;
    iVar10 = iVar24 * 0x3b21 + iVar4 * 0x187e;
    iVar23 = iVar3 - iVar2;
    iVar4 = iVar12 + 0x2000 + iVar22 >> 0xe;
    iVar22 = iVar25 + iVar20 + 0x2000 >> 0xe;
    iVar6 = iVar14 + 0x2000 + iVar13 >> 0xe;
    iVar20 = (iVar19 - iVar17) + 0x2000 >> 0xe;
    iVar15 = iVar21 * 0x3b21 + iVar16 * 0x187e;
    iVar11 = iVar21 * 0x187e + iVar16 * -0x3b21;
    iVar13 = iVar7 * 0x3b21 + iVar18 * -0x187e;
    iVar21 = iVar18 * 0x3b21 + iVar7 * 0x187e;
    iVar18 = iVar9 - iVar1;
    iVar12 = (iVar8 - iVar10) + 0x2000 >> 0xe;
    local_res8 = (short)iVar9;
    iVar7 = iVar22 - iVar5;
    *param_2 = local_res8 + (short)iVar1;
    iVar24 = iVar4 - iVar6;
    param_2[2] = (short)(iVar13 + 0x2000 + iVar15 >> 0xe);
    iVar1 = (iVar15 - iVar13) + 0x2000 >> 0xe;
    iVar9 = (iVar11 - iVar21) + 0x2000 >> 0xe;
    param_2[1] = -((short)iVar22 + (short)iVar5);
    param_2[3] = -(short)(iVar19 + 0x2000 + iVar17 >> 0xe);
    param_2[4] = (short)((iVar12 + iVar20) * 0x2d41 + 0x2000 >> 0xe);
    param_2[5] = (short)((iVar9 + iVar1) * -0x2d41 + 0x2000 >> 0xe);
    param_2[6] = (short)((iVar24 + iVar7) * 0x2d41 + 0x2000 >> 0xe);
    param_2[7] = (short)((iVar23 + iVar18) * -0x2d41 + 0x2000 >> 0xe);
    param_2[8] = (short)((iVar18 - iVar23) * 0x2d41 + 0x2000 >> 0xe);
    param_2[9] = (short)((iVar24 - iVar7) * 0x2d41 + 0x2000 >> 0xe);
    param_2[10] = (short)((iVar1 - iVar9) * 0x2d41 + 0x2000 >> 0xe);
    param_2[0xb] = (short)((iVar12 - iVar20) * 0x2d41 + 0x2000 >> 0xe);
    param_2[0xc] = (short)(iVar10 + 0x2000 + iVar8 >> 0xe);
    param_2[0xd] = -(short)(iVar21 + 0x2000 + iVar11 >> 0xe);
    local_7c = (short)iVar6;
    param_2[0xe] = (short)iVar4 + local_7c;
    local_res20 = (short)iVar2;
    param_2[0xf] = -((short)iVar3 + local_res20);
  }
  return;
}



// FUNCTION 1439e0e50 FUN_1439e0e50 body=645 status=ok
// SIG undefined FUN_1439e0e50(void)

void FUN_1439e0e50(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  sVar1 = *param_1;
  sVar2 = param_1[7];
  sVar3 = param_1[5];
  sVar4 = param_1[2];
  sVar5 = param_1[3];
  sVar6 = param_1[4];
  sVar7 = param_1[1];
  sVar8 = param_1[6];
  if (((((((sVar8 == 0 && sVar7 == 0) && sVar6 == 0) && sVar5 == 0) && sVar4 == 0) && sVar3 == 0) &&
      sVar1 == 0) && sVar2 == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    return;
  }
  iVar11 = sVar2 * 0x3fb1 + sVar1 * 0x646;
  iVar18 = sVar2 * 0x646 + sVar1 * -0x3fb1;
  iVar20 = sVar3 * 0x3871 + sVar4 * 0x1e2b;
  iVar10 = sVar3 * 0x1e2b + sVar4 * -0x3871;
  iVar9 = sVar6 * 0x3179 + sVar5 * 0x289a;
  iVar13 = (iVar11 - iVar9) + 0x2000 >> 0xe;
  iVar15 = sVar5 * 0x3179 + sVar6 * -0x289a;
  iVar12 = iVar11 + iVar9 + 0x2000 >> 0xe;
  iVar17 = iVar18 + 0x2000 + iVar15 >> 0xe;
  iVar14 = sVar8 * 0x3d3f + sVar7 * 0x1294;
  iVar9 = (iVar18 - iVar15) + 0x2000 >> 0xe;
  iVar18 = sVar7 * 0x3d3f + sVar8 * -0x1294;
  iVar15 = (iVar20 - iVar14) + 0x2000 >> 0xe;
  iVar11 = (iVar10 - iVar18) + 0x2000 >> 0xe;
  iVar16 = iVar14 + 0x2000 + iVar20 >> 0xe;
  iVar19 = iVar10 + 0x2000 + iVar18 >> 0xe;
  iVar20 = iVar12 - iVar16;
  iVar14 = iVar13 * 0x3b21 + iVar9 * 0x187e;
  iVar13 = iVar13 * 0x187e + iVar9 * -0x3b21;
  iVar18 = iVar17 - iVar19;
  iVar9 = iVar11 * 0x3b21 + iVar15 * -0x187e;
  iVar10 = (iVar14 - iVar9) + 0x2000 >> 0xe;
  iVar15 = iVar15 * 0x3b21 + iVar11 * 0x187e;
  iVar11 = (iVar13 - iVar15) + 0x2000 >> 0xe;
  param_2[1] = -(short)(iVar9 + 0x2000 + iVar14 >> 0xe);
  *param_2 = (short)iVar12 + (short)iVar16;
  param_2[2] = (short)((iVar11 + iVar10) * 0x2d41 + 0x2000 >> 0xe);
  param_2[4] = (short)((iVar20 - iVar18) * 0x2d41 + 0x2000 >> 0xe);
  param_2[3] = -(short)((iVar18 + iVar20) * 0x2d41 + 0x2000 >> 0xe);
  param_2[5] = -(short)((iVar10 - iVar11) * 0x2d41 + 0x2000 >> 0xe);
  param_2[6] = (short)(iVar13 + 0x2000 + iVar15 >> 0xe);
  param_2[7] = -((short)iVar17 + (short)iVar19);
  return;
}



// FUNCTION 1439e10e0 FUN_1439e10e0 body=1290 status=ok
// SIG undefined FUN_1439e10e0(void)

void FUN_1439e10e0(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  
  sVar24 = (short)(param_1[0xd] * 0x3d3f + param_1[3] * -0x1294 + 0x2000 >> 0xe);
  sVar11 = (short)(param_1[5] * 0x1e2b + param_1[0xb] * -0x3871 + 0x2000 >> 0xe);
  sVar25 = sVar24 + sVar11;
  sVar4 = (short)(param_1[10] * 0x3537 + param_1[6] * -0x238e + 0x2000 >> 0xe);
  sVar5 = (short)(param_1[2] * 0xc7c + param_1[0xe] * -0x3ec5 + 0x2000 >> 0xe);
  sVar23 = sVar4 + sVar5;
  sVar1 = (short)(param_1[1] * 0x646 + param_1[0xf] * -0x3fb1 + 0x2000 >> 0xe);
  sVar2 = (short)(param_1[9] * 0x3179 + param_1[7] * -0x289a + 0x2000 >> 0xe);
  sVar6 = sVar1 + sVar2;
  sVar12 = (short)(param_1[5] * 0x3871 + param_1[0xb] * 0x1e2b + 0x2000 >> 0xe);
  sVar3 = (short)(param_1[3] * 0x3d3f + param_1[0xd] * 0x1294 + 0x2000 >> 0xe);
  sVar27 = sVar12 + sVar3;
  sVar7 = (short)(param_1[9] * 0x289a + param_1[7] * 0x3179 + 0x2000 >> 0xe);
  sVar16 = (short)(param_1[1] * 0x3fb1 + param_1[0xf] * 0x646 + 0x2000 >> 0xe);
  sVar8 = sVar7 + sVar16;
  iVar19 = (int)(short)(sVar16 - sVar7);
  sVar7 = (short)(param_1[0xe] * 0xc7c + param_1[2] * 0x3ec5 + 0x2000 >> 0xe);
  sVar10 = (short)(param_1[10] * 0x238e + param_1[6] * 0x3537 + 0x2000 >> 0xe);
  sVar9 = sVar7 + sVar10;
  iVar13 = (int)(short)(sVar1 - sVar2);
  iVar20 = (int)(short)(sVar24 - sVar11);
  iVar14 = (int)(short)(sVar3 - sVar12);
  sVar16 = (short)(((int)*param_1 + (int)param_1[8]) * 0x2d41 + 0x2000 >> 0xe);
  sVar1 = (short)(param_1[4] * 0x3b21 + param_1[0xc] * 0x187e + 0x2000 >> 0xe);
  sVar22 = sVar16 + sVar1;
  sVar16 = sVar16 - sVar1;
  iVar21 = (int)(short)(sVar7 - sVar10);
  sVar12 = (short)(((int)*param_1 - (int)param_1[8]) * 0x2d41 + 0x2000 >> 0xe);
  sVar1 = (short)(param_1[4] * 0x187e + param_1[0xc] * -0x3b21 + 0x2000 >> 0xe);
  sVar10 = sVar12 + sVar1;
  sVar12 = sVar12 - sVar1;
  iVar15 = (int)(short)(sVar5 - sVar4);
  sVar5 = (short)(iVar19 * 0x187e + iVar13 * -0x3b21 + 0x2000 >> 0xe);
  sVar7 = (short)(iVar14 * -0x3b21 + iVar20 * -0x187e + 0x2000 >> 0xe);
  sVar24 = sVar5 + sVar7;
  sVar26 = sVar8 + sVar27;
  sVar1 = sVar6 + sVar25;
  sVar11 = (short)(iVar19 * 0x3b21 + iVar13 * 0x187e + 0x2000 >> 0xe);
  sVar17 = (short)(iVar14 * 0x187e + iVar20 * -0x3b21 + 0x2000 >> 0xe);
  sVar18 = sVar17 + sVar11;
  sVar4 = sVar16 + sVar23;
  sVar16 = sVar16 - sVar23;
  sVar2 = sVar22 - sVar9;
  sVar23 = (short)((iVar21 - iVar15) * 0x2d41 + 0x2000 >> 0xe);
  sVar3 = sVar12 + sVar23;
  sVar12 = sVar12 - sVar23;
  sVar22 = sVar22 + sVar9;
  iVar19 = (int)(short)(sVar11 - sVar17);
  sVar23 = (short)((iVar21 + iVar15) * 0x2d41 + 0x2000 >> 0xe);
  sVar9 = sVar23 + sVar10;
  sVar10 = sVar10 - sVar23;
  iVar13 = (int)(short)(sVar5 - sVar7);
  iVar15 = (int)(short)(sVar8 - sVar27);
  iVar14 = (int)(short)(sVar6 - sVar25);
  *param_2 = sVar22 + sVar26;
  param_2[1] = sVar18 + sVar9;
  sVar23 = (short)((iVar13 + iVar19) * 0x2d41 + 0x2000 >> 0xe);
  param_2[2] = sVar3 + sVar23;
  sVar5 = (short)((iVar14 + iVar15) * 0x2d41 + 0x2000 >> 0xe);
  param_2[3] = sVar4 + sVar5;
  sVar7 = (short)((iVar15 - iVar14) * 0x2d41 + 0x2000 >> 0xe);
  param_2[4] = sVar7 + sVar16;
  sVar6 = (short)((iVar19 - iVar13) * 0x2d41 + 0x2000 >> 0xe);
  param_2[5] = sVar12 + sVar6;
  param_2[6] = sVar10 + sVar24;
  param_2[7] = sVar2 + sVar1;
  param_2[0xf] = sVar22 - sVar26;
  param_2[8] = sVar2 - sVar1;
  param_2[9] = sVar10 - sVar24;
  param_2[10] = sVar12 - sVar6;
  param_2[0xb] = sVar16 - sVar7;
  param_2[0xc] = sVar4 - sVar5;
  param_2[0xd] = sVar3 - sVar23;
  param_2[0xe] = sVar9 - sVar18;
  return;
}



// FUNCTION 1439e15f0 FUN_1439e15f0 body=433 status=ok
// SIG undefined FUN_1439e15f0(void)

void FUN_1439e15f0(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  
  sVar1 = (short)(param_1[5] * 0x3537 + param_1[3] * -0x238e + 0x2000 >> 0xe);
  sVar2 = (short)(param_1[1] * 0xc7c + param_1[7] * -0x3ec5 + 0x2000 >> 0xe);
  sVar4 = sVar1 + sVar2;
  sVar5 = (short)(param_1[1] * 0x3ec5 + param_1[7] * 0xc7c + 0x2000 >> 0xe);
  sVar10 = (short)(param_1[3] * 0x3537 + param_1[5] * 0x238e + 0x2000 >> 0xe);
  sVar11 = sVar10 + sVar5;
  iVar6 = (int)(short)(sVar2 - sVar1);
  sVar9 = (short)(((int)*param_1 - (int)param_1[4]) * 0x2d41 + 0x2000 >> 0xe);
  sVar1 = (short)(param_1[2] * 0x187e + param_1[6] * -0x3b21 + 0x2000 >> 0xe);
  sVar2 = sVar9 + sVar1;
  sVar9 = sVar9 - sVar1;
  sVar8 = (short)(((int)*param_1 + (int)param_1[4]) * 0x2d41 + 0x2000 >> 0xe);
  sVar3 = (short)(param_1[2] * 0x3b21 + param_1[6] * 0x187e + 0x2000 >> 0xe);
  sVar1 = sVar8 + sVar3;
  sVar8 = sVar8 - sVar3;
  iVar7 = (int)(short)(sVar5 - sVar10);
  *param_2 = sVar1 + sVar11;
  sVar3 = (short)((iVar6 + iVar7) * 0x2d41 + 0x2000 >> 0xe);
  param_2[1] = sVar2 + sVar3;
  sVar5 = (short)((iVar7 - iVar6) * 0x2d41 + 0x2000 >> 0xe);
  param_2[2] = sVar9 + sVar5;
  param_2[5] = sVar9 - sVar5;
  param_2[3] = sVar8 + sVar4;
  param_2[4] = sVar8 - sVar4;
  param_2[7] = sVar1 - sVar11;
  param_2[6] = sVar2 - sVar3;
  return;
}



// FUNCTION 1439e17b0 FUN_1439e17b0 body=270 status=ok
// SIG undefined FUN_1439e17b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439e17b0(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  short local_28 [8];
  ulonglong local_18;
  
  psVar5 = local_28;
  local_18 = DAT_1468387a8 ^ (ulonglong)local_28;
  lVar7 = (longlong)param_3;
  local_28[3] = *param_1 >> 3;
  local_28[0] = (*param_1 >> 2) - local_28[3];
  local_28[2] = local_28[3];
  local_28[1] = local_28[3];
  pbVar4 = (byte *)(param_2 + lVar7 * 2);
  lVar6 = 4;
  do {
    iVar3 = (int)*psVar5 >> 1;
    iVar2 = ((uint)pbVar4[lVar7 * -2] - iVar3) + (int)*psVar5;
    if (iVar2 < 0x100) {
      bVar1 = (byte)iVar2;
      if (iVar2 < 0) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = 0xff;
    }
    pbVar4[lVar7 * -2] = bVar1;
    iVar2 = (uint)pbVar4[-lVar7] + iVar3;
    if (iVar2 < 0x100) {
      bVar1 = (byte)iVar2;
      if (iVar2 < 0) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = 0xff;
    }
    pbVar4[-lVar7] = bVar1;
    iVar2 = (uint)*pbVar4 + iVar3;
    if (iVar2 < 0x100) {
      bVar1 = (byte)iVar2;
      if (iVar2 < 0) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = 0xff;
    }
    *pbVar4 = bVar1;
    iVar3 = (uint)pbVar4[lVar7] + iVar3;
    if (iVar3 < 0x100) {
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = 0xff;
    }
    pbVar4[lVar7] = bVar1;
    psVar5 = psVar5 + 1;
    pbVar4 = pbVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 1439e18c0 FUN_1439e18c0 body=586 status=ok
// SIG undefined FUN_1439e18c0(void)

undefined8 FUN_1439e18c0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar6 = 0;
  lVar9 = *(longlong *)(param_2 + 0x1b8);
  lVar8 = *(longlong *)(param_2 + 0x1b0);
  uVar5 = (ulonglong)(*(int *)(param_1 + 0x10a4 + (longlong)*(char *)(param_1 + 0x1160) * 4) == 0);
  if (lVar9 == 0) {
    if (lVar8 == 0) {
      return 2;
    }
  }
  else if (lVar8 != 0) {
    cVar3 = *(char *)(lVar9 + 8);
    cVar4 = *(char *)(lVar8 + 8);
    if (cVar3 < '\x01') {
      if (cVar4 < '\x01') {
        return 2;
      }
    }
    else if ('\0' < cVar4) {
      cVar1 = *(char *)(lVar9 + 9);
      cVar2 = *(char *)(lVar8 + 9);
      if ('\0' < cVar1) {
        cVar3 = *(char *)(uVar5 + 8 + lVar9);
      }
      if ('\0' < cVar2) {
        cVar4 = *(char *)(uVar5 + 8 + lVar8);
      }
      if ((cVar3 == cVar4) && (*(char *)(param_1 + 0x1162) == cVar3)) {
        return 0;
      }
      if (cVar2 < '\x01') {
        if (cVar1 < '\x01') {
          if ((cVar3 == *(char *)(param_1 + 0x1160)) && (cVar4 == *(char *)(param_1 + 0x1161))) {
            return 4;
          }
          if ((cVar4 == *(char *)(param_1 + 0x1160)) && (cVar3 == *(char *)(param_1 + 0x1161))) {
            return 4;
          }
          uVar6 = 1;
          if (cVar3 == cVar4) {
            uVar6 = 3;
          }
          return uVar6;
        }
      }
      else if ('\0' < cVar1) {
        uVar6 = 2;
        if (cVar3 == cVar4) {
          uVar6 = 4;
        }
        return uVar6;
      }
      cVar7 = cVar4;
      if (cVar2 < '\x01') {
        cVar7 = cVar3;
      }
      if (cVar1 < '\x01') {
        cVar4 = cVar3;
      }
      cVar3 = *(char *)(param_1 + 0x1162);
      if (cVar7 == cVar3) {
        if (cVar4 != cVar3) {
          return 1;
        }
      }
      else if (cVar4 != cVar3) {
        return 4;
      }
      if (cVar7 != cVar3) {
        return 2;
      }
      return 4;
    }
    if (cVar3 < '\x01') {
      lVar9 = lVar8;
    }
    uVar6 = 1;
    if (*(char *)(lVar9 + 9) < '\x01') {
      bVar10 = *(char *)(lVar9 + 8) == *(char *)(param_1 + 0x1162);
    }
    else {
      bVar10 = *(char *)(uVar5 + 8 + lVar9) == *(char *)(param_1 + 0x1162);
    }
    goto LAB_1439e1af3;
  }
  if (lVar9 != 0) {
    lVar8 = lVar9;
  }
  if (*(char *)(lVar8 + 8) < '\x01') {
    return 2;
  }
  if ('\0' < *(char *)(lVar8 + 9)) {
    if (*(char *)(uVar5 + 8 + lVar8) != *(char *)(param_1 + 0x1162)) {
      uVar6 = 4;
    }
    return uVar6;
  }
  bVar10 = *(char *)(lVar8 + 8) == *(char *)(param_1 + 0x1162);
LAB_1439e1af3:
  if (!bVar10) {
    uVar6 = 3;
  }
  return uVar6;
}



// FUNCTION 1439e1b10 FUN_1439e1b10 body=354 status=ok
// SIG undefined FUN_1439e1b10(void)

int FUN_1439e1b10(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  lVar9 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 == 0) {
    if (lVar9 == 0) {
      return 2;
    }
  }
  else if (lVar9 != 0) {
    cVar1 = *(char *)(lVar6 + 8);
    cVar2 = *(char *)(lVar9 + 8);
    if (cVar1 < '\x01') {
      if (cVar2 < '\x01') {
        return 2;
      }
    }
    else if ('\0' < cVar2) {
      cVar4 = *(char *)(lVar6 + 9);
      cVar3 = *(char *)(lVar9 + 9);
      if (cVar4 < '\x01') {
        if (cVar3 < '\x01') {
          iVar7 = 0;
          if (cVar2 == '\x01') {
            iVar7 = 2;
          }
          iVar8 = 0;
          if (cVar1 == '\x01') {
            iVar8 = 2;
          }
          return iVar8 + iVar7;
        }
LAB_1439e1bd0:
        cVar5 = cVar2;
        if ('\0' < cVar4) {
          cVar3 = cVar4;
          cVar5 = cVar1;
          cVar1 = cVar2;
        }
        if (cVar1 == '\x01') {
          if ((cVar5 != '\x01') && (cVar3 != '\x01')) {
            return 3;
          }
          return 4;
        }
        if ((cVar5 != '\x01') && (cVar3 != '\x01')) {
          return 0;
        }
        return 1;
      }
      if (cVar3 < '\x01') goto LAB_1439e1bd0;
      if (cVar1 == '\x01') {
        return 2;
      }
      if (cVar4 == '\x01') {
        return 2;
      }
      goto joined_r0x0001439e1c5e;
    }
    if (cVar1 < '\x01') {
      lVar6 = lVar9;
    }
    cVar3 = *(char *)(lVar6 + 9);
    if (cVar3 < '\x01') {
      iVar7 = 0;
      if (*(char *)(lVar6 + 8) == '\x01') {
        iVar7 = 4;
      }
      return iVar7;
    }
    cVar2 = *(char *)(lVar6 + 8);
    goto joined_r0x0001439e1c5e;
  }
  if (lVar6 != 0) {
    lVar9 = lVar6;
  }
  cVar2 = *(char *)(lVar9 + 8);
  if (cVar2 < '\x01') {
    return 2;
  }
  cVar3 = *(char *)(lVar9 + 9);
  if (cVar3 < '\x01') {
    iVar7 = 0;
    if (cVar2 == '\x01') {
      iVar7 = 4;
    }
    return iVar7;
  }
joined_r0x0001439e1c5e:
  if ((cVar2 != '\x01') && (cVar3 != '\x01')) {
    return 1;
  }
  return 2;
}



// FUNCTION 1439e1c80 FUN_1439e1c80 body=478 status=ok
// SIG undefined FUN_1439e1c80(void)

int FUN_1439e1c80(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar7 == 0) {
    if (lVar4 == 0) {
      return 2;
    }
  }
  else if (lVar4 != 0) {
    cVar8 = *(char *)(lVar7 + 8);
    cVar9 = *(char *)(lVar4 + 8);
    if (cVar8 < '\x01') {
      if (cVar9 < '\x01') {
        return 2;
      }
LAB_1439e1dcb:
      if (cVar8 < '\x01') {
        lVar7 = lVar4;
      }
      if ('\0' < *(char *)(lVar7 + 9)) {
        if (*(char *)(lVar7 + 8) == '\x02') {
          return 3;
        }
        if (*(char *)(lVar7 + 9) == '\x02') {
          return 3;
        }
        return 1;
      }
      cVar9 = *(char *)(lVar7 + 8);
    }
    else {
      if (cVar9 < '\x01') goto LAB_1439e1dcb;
      cVar1 = *(char *)(lVar7 + 9);
      cVar5 = *(char *)(lVar4 + 9);
      if ('\0' < cVar1) {
        if (cVar5 < '\x01') {
LAB_1439e1d58:
          cVar2 = cVar9;
          if ('\0' < cVar1) {
            cVar5 = cVar1;
            cVar2 = cVar8;
            cVar8 = cVar9;
          }
          if (cVar8 == '\x02') {
            if ((cVar2 != '\x02') && (cVar5 != '\x02')) {
              return 3;
            }
            return 4;
          }
          if (cVar8 == '\x03') {
            if ((cVar2 != '\x02') && (cVar5 != '\x02')) {
              return 0;
            }
          }
          else {
            if (cVar2 == '\x02') {
              return 3;
            }
            if (cVar5 == '\x02') {
              return 3;
            }
          }
          return 1;
        }
        if (cVar8 != cVar9) {
          return 2;
        }
        if (cVar1 != cVar5) {
          return 2;
        }
        if (cVar8 == '\x02') {
          return 3;
        }
        if (cVar1 == '\x02') {
          return 3;
        }
        goto LAB_1439e1e47;
      }
      if ('\0' < cVar5) goto LAB_1439e1d58;
      if (cVar8 != '\x01') {
        if (cVar9 != '\x01') {
          iVar3 = 0;
          if (cVar9 == '\x02') {
            iVar3 = 2;
          }
          iVar6 = 0;
          if (cVar8 == '\x02') {
            iVar6 = 2;
          }
          return iVar6 + iVar3;
        }
        goto LAB_1439e1d40;
      }
    }
    cVar8 = cVar9;
    if (cVar9 == '\x01') {
      return 3;
    }
    goto LAB_1439e1d40;
  }
  if (lVar7 != 0) {
    lVar4 = lVar7;
  }
  cVar9 = *(char *)(lVar4 + 8);
  if ((cVar9 < '\x01') || ((cVar9 == '\x01' && (*(char *)(lVar4 + 9) < '\x01')))) {
    return 2;
  }
  cVar5 = *(char *)(lVar4 + 9);
  cVar8 = cVar9;
  if ('\0' < cVar5) {
LAB_1439e1e47:
    if ((cVar9 != '\x02') && (cVar5 != '\x02')) {
      return 0;
    }
    return 3;
  }
LAB_1439e1d40:
  iVar3 = 0;
  if (cVar8 == '\x02') {
    iVar3 = 4;
  }
  return iVar3;
}



// FUNCTION 1439e1e60 FUN_1439e1e60 body=163 status=ok
// SIG undefined FUN_1439e1e60(void)

bool FUN_1439e1e60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x1b8);
  lVar3 = *(longlong *)(param_2 + 0x1b0);
  if (lVar1 == 0) {
    if (lVar3 == 0) {
      return true;
    }
LAB_1439e1ee2:
    if (lVar1 != 0) {
      lVar3 = lVar1;
    }
    if ('\0' < *(char *)(lVar3 + 9)) {
      return (bool)3;
    }
    return *(char *)(lVar3 + 8) == *(char *)(param_1 + 0x1160);
  }
  if (lVar3 == 0) goto LAB_1439e1ee2;
  if (*(char *)(lVar1 + 9) < '\x01') {
    if (*(char *)(lVar3 + 9) < '\x01') {
      return (*(char *)(lVar3 + 8) == *(char *)(param_1 + 0x1160)) !=
             (*(char *)(lVar1 + 8) == *(char *)(param_1 + 0x1160));
    }
    if (*(char *)(lVar1 + 9) < '\x01') {
      cVar2 = *(char *)(lVar1 + 8);
      goto LAB_1439e1ead;
    }
  }
  if ('\0' < *(char *)(lVar3 + 9)) {
    return (bool)4;
  }
  cVar2 = *(char *)(lVar3 + 8);
LAB_1439e1ead:
  if (cVar2 == *(char *)(param_1 + 0x1160)) {
    return (bool)3;
  }
  if (cVar2 < '\x01') {
    return (bool)3;
  }
  return (bool)2;
}



// FUNCTION 1439e1f10 FUN_1439e1f10 body=204 status=ok
// SIG undefined FUN_1439e1f10(void)

undefined8 FUN_1439e1f10(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  
  iVar6 = 0;
  auVar8 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar10 = auVar8;
  auVar9 = auVar8;
  if (0 < param_3) {
    lVar7 = 0;
    do {
      auVar1 = *(undefined1 (*) [32])(param_1 + lVar7 * 2);
      auVar4 = vpsubw_avx2(*(undefined1 (*) [32])(param_2 + lVar7 * 2),auVar1);
      auVar4 = vpmaddwd_avx2(auVar4,auVar4);
      auVar5 = vpunpckldq_avx2(auVar4,auVar8);
      auVar1 = vpmaddwd_avx2(auVar1,auVar1);
      auVar9 = vpaddq_avx2(auVar5,auVar9);
      auVar4 = vpunpckhdq_avx2(auVar4,auVar8);
      iVar6 = iVar6 + 0x10;
      auVar5 = vpunpckldq_avx2(auVar1,auVar8);
      auVar9 = vpaddq_avx2(auVar9,auVar4);
      lVar7 = (longlong)iVar6;
      auVar10 = vpaddq_avx2(auVar5,auVar10);
      auVar1 = vpunpckhdq_avx2(auVar1,auVar8);
      auVar10 = vpaddq_avx2(auVar10,auVar1);
    } while (lVar7 < param_3);
  }
  auVar8 = vpsrldq_avx2(auVar10,8);
  auVar10 = vpaddq_avx2(auVar8,auVar10);
  auVar8 = vpsrldq_avx2(auVar9,8);
  auVar9 = vpaddq_avx2(auVar8,auVar9);
  auVar2 = vpaddq_avx(auVar9._16_16_,auVar9._0_16_);
  auVar3 = vpaddq_avx(auVar10._16_16_,auVar10._0_16_);
  *param_4 = auVar3._0_8_;
  return auVar2._0_8_;
}



// FUNCTION 1439e1fe0 FUN_1439e1fe0 body=1404 status=ok
// SIG undefined FUN_1439e1fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1439e1fe0(longlong param_1,longlong param_2,short *param_3,short *param_4,int param_5,
                  int param_6,int *param_7,undefined8 *param_8,short *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  uint *local_f8;
  int local_e8;
  short local_e4;
  short local_e2;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint local_68 [4];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar9 = -1;
  local_a8 = *(undefined8 *)(param_1 + 0x2018);
  local_d8 = *(int *)(param_1 + 0x6178);
  uVar10 = *(int *)(param_2 + 0x424) - param_5;
  local_98 = param_7;
  local_e0 = *(undefined4 *)(param_1 + 0x2020);
  iVar16 = *(int *)(param_1 + 0x64d4);
  local_a0 = param_8;
  lVar4 = (longlong)(*(int *)(param_2 + 0x420) * param_5);
  local_e8 = -1;
  local_d4 = -1;
  local_d0 = param_2 + lVar4 * 4;
  local_b8 = param_2 + 0x160 + lVar4 * 8;
  iVar2 = *(int *)(param_1 + 0x64d0);
  iVar1 = (int)param_3[1];
  local_e4 = *param_9 >> 3;
  local_e2 = param_9[1] >> 3;
  iVar7 = *(int *)(param_1 + 0x64c8);
  if ((*(int *)(param_1 + 0x64c8) <= iVar1) && (iVar7 = iVar1, *(int *)(param_1 + 0x64cc) < iVar1))
  {
    iVar7 = *(int *)(param_1 + 0x64cc);
  }
  iVar1 = (int)*param_3;
  sVar6 = (short)iVar7;
  param_3[1] = sVar6;
  if ((iVar2 <= iVar1) && (iVar2 = iVar1, iVar16 < iVar1)) {
    iVar2 = iVar16;
  }
  sVar14 = (short)iVar2;
  *param_3 = sVar14;
  *param_7 = 0;
  *param_4 = sVar14;
  param_4[1] = sVar6;
  local_c0 = (longlong)(sVar14 * local_d8) + *(longlong *)(param_1 + 0x6170) + (longlong)sVar6;
  sVar6 = sVar6 - local_e2;
  if ((short)(sVar14 - local_e4) == 0) {
    uVar15 = (uint)(sVar6 != 0);
  }
  else {
    uVar15 = (sVar6 != 0) + 2;
  }
  iVar16 = *(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar6 * 4);
  iVar2 = *(int *)(param_1 + 0x6490 + (ulonglong)uVar15 * 4);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)(short)(sVar14 - local_e4) * 4);
  local_c8 = param_2;
  local_90 = local_c0;
  iVar1 = (*(code *)*param_8)(local_a8,local_e0,local_c0,local_d8);
  iVar11 = 0;
  uVar15 = ((iVar16 + iVar2 + iVar7) * param_6 + 0x100U >> 9) + iVar1;
  if (0 < (int)uVar10) {
    lVar8 = 0;
    local_b0 = (ulonglong)uVar10;
    lVar4 = local_d0;
    lVar13 = local_c8;
    do {
      iVar16 = 0;
      if (*(int *)(param_1 + 0x64d0) < (int)*(short *)(lVar4 + lVar8 * 4) + (int)*param_4 &&
          ((*(int *)(param_1 + 0x64c8) < (int)*(short *)(lVar4 + 10 + lVar8 * 4) + (int)param_4[1]
           && (int)*(short *)(lVar4 + 4 + lVar8 * 4) + (int)*param_4 < *(int *)(param_1 + 0x64d4))
          && (int)*(short *)(lVar4 + 0xe + lVar8 * 4) + (int)param_4[1] < *(int *)(param_1 + 0x64cc)
          )) {
        local_dc = 0;
        if (0 < *(int *)(lVar13 + 0x420)) {
          do {
            local_f8 = local_68;
            local_88 = *(longlong *)(local_b8 + lVar8 * 8) + local_c0;
            local_80 = *(longlong *)(local_b8 + 8 + lVar8 * 8) + local_c0;
            local_78 = *(longlong *)(local_b8 + 0x10 + lVar8 * 8) + local_c0;
            local_70 = *(longlong *)(local_b8 + 0x18 + lVar8 * 8) + local_c0;
            (*(code *)local_a0[7])(local_a8,local_e0,&local_88,local_d8);
            puVar12 = local_68;
            lVar4 = 4;
            do {
              if (*puVar12 < uVar15) {
                sVar6 = (*(short *)(local_d0 + 2 + lVar8 * 4) + param_4[1]) - local_e2;
                sVar14 = (*(short *)(local_d0 + lVar8 * 4) + *param_4) - local_e4;
                if (sVar14 == 0) {
                  uVar10 = (uint)(sVar6 != 0);
                }
                else {
                  uVar10 = (sVar6 != 0) + 2;
                }
                uVar10 = ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar6 * 4) +
                           *(int *)(param_1 + 0x6490 + (ulonglong)uVar10 * 4) +
                          *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)sVar14 * 4)) *
                          param_6 + 0x100U >> 9) + *puVar12;
                *puVar12 = uVar10;
                if (uVar10 < uVar15) {
                  uVar15 = uVar10;
                  local_e8 = iVar11;
                }
              }
              puVar12 = puVar12 + 1;
              iVar11 = iVar11 + 1;
              lVar8 = lVar8 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            local_dc = local_dc + 4;
            lVar4 = local_d0;
            lVar13 = local_c8;
            iVar9 = local_e8;
          } while (local_dc < *(int *)(local_c8 + 0x420));
        }
      }
      else if (0 < *(int *)(lVar13 + 0x420)) {
        do {
          sVar14 = *(short *)(lVar4 + 2 + lVar8 * 4) + param_4[1];
          sVar6 = *(short *)(lVar4 + lVar8 * 4) + *param_4;
          if ((((*(int *)(param_1 + 0x64c8) <= (int)sVar14) &&
               ((int)sVar14 <= *(int *)(param_1 + 0x64cc))) &&
              (*(int *)(param_1 + 0x64d0) <= (int)sVar6)) &&
             (((int)sVar6 <= *(int *)(param_1 + 0x64d4) &&
              (uVar10 = (*(code *)*local_a0)
                                  (local_a8,local_e0,local_c0 + *(longlong *)(local_b8 + lVar8 * 8),
                                   local_d8), uVar10 < uVar15)))) {
            sVar14 = sVar14 - local_e2;
            if ((short)(sVar6 - local_e4) == 0) {
              uVar3 = (uint)(sVar14 != 0);
            }
            else {
              uVar3 = (sVar14 != 0) + 2;
            }
            uVar10 = uVar10 + ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar14 * 4) +
                                *(int *)(param_1 + 0x6490 + (ulonglong)uVar3 * 4) +
                               *(int *)(*(longlong *)(param_1 + 0x64a0) +
                                       (longlong)(short)(sVar6 - local_e4) * 4)) * param_6 + 0x100U
                              >> 9);
            if (uVar10 < uVar15) {
              uVar15 = uVar10;
              local_e8 = iVar11;
            }
          }
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          iVar16 = iVar16 + 1;
          lVar4 = local_d0;
          lVar13 = local_c8;
          iVar9 = local_e8;
        } while (iVar16 < *(int *)(local_c8 + 0x420));
      }
      if (iVar9 == local_d4) {
        if (local_c0 == local_90) {
          *local_98 = *local_98 + 1;
        }
      }
      else {
        lVar5 = (longlong)iVar9;
        *param_4 = *param_4 + *(short *)(lVar4 + lVar5 * 4);
        param_4[1] = param_4[1] + *(short *)(lVar4 + 2 + lVar5 * 4);
        local_c0 = local_c0 + *(longlong *)(local_b8 + lVar5 * 8);
        local_d4 = iVar9;
      }
      local_b0 = local_b0 - 1;
    } while (local_b0 != 0);
  }
  return uVar15;
}



// FUNCTION 1439e2560 FUN_1439e2560 body=627 status=ok
// SIG undefined FUN_1439e2560(void)

int FUN_1439e2560(longlong param_1,uint *param_2,int param_3,int param_4,undefined8 *param_5,
                 short *param_6,uint *param_7)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_res8;
  
  iVar15 = (int)(short)*param_2;
  iVar12 = (int)*(short *)((longlong)param_2 + 2);
  uVar16 = *(uint *)(param_1 + 0x64d0);
  if ((int)*(uint *)(param_1 + 0x64d0) < iVar15 - param_4) {
    uVar16 = iVar15 - param_4;
  }
  iVar6 = *(int *)(param_1 + 0x64d4);
  if (iVar15 + param_4 < *(int *)(param_1 + 0x64d4)) {
    iVar6 = iVar15 + param_4;
  }
  iVar7 = *(int *)(param_1 + 0x64c8);
  if (*(int *)(param_1 + 0x64c8) < iVar12 - param_4) {
    iVar7 = iVar12 - param_4;
  }
  iVar8 = *(int *)(param_1 + 0x64cc);
  if (iVar12 + param_4 < *(int *)(param_1 + 0x64cc)) {
    iVar8 = iVar12 + param_4;
  }
  sVar1 = *param_6;
  sVar2 = param_6[1];
  sVar11 = *(short *)((longlong)param_2 + 2) - (sVar2 >> 3);
  sVar14 = (short)*param_2 - (sVar1 >> 3);
  if (sVar14 == 0) {
    uVar9 = (uint)(sVar11 != 0);
  }
  else {
    uVar9 = (sVar11 != 0) + 2;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar11 * 4);
  iVar4 = *(int *)(param_1 + 0x6490 + (ulonglong)uVar9 * 4);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)sVar14 * 4);
  iVar12 = (*(code *)*param_5)(*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),
                               (longlong)(*(int *)(param_1 + 0x6178) * iVar15 + iVar12) +
                               *(longlong *)(param_1 + 0x6170));
  iVar12 = (param_3 * (iVar3 + iVar4 + iVar5) + 0x100U >> 9) + iVar12;
  *param_7 = *param_2;
  for (; (int)uVar16 < iVar6; uVar16 = uVar16 + 1) {
    if (iVar7 < iVar8) {
      local_res8 = uVar16 & 0xffff;
      sVar11 = (short)uVar16 - (sVar1 >> 3);
      iVar15 = iVar7;
      do {
        sVar13 = (short)iVar15;
        local_res8 = CONCAT22(sVar13,(undefined2)local_res8);
        sVar14 = sVar13 - (sVar2 >> 3);
        if (sVar11 == 0) {
          uVar9 = (uint)(sVar14 != 0);
        }
        else {
          uVar9 = (sVar14 != 0) + 2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar14 * 4);
        iVar4 = *(int *)(param_1 + 0x6490 + (ulonglong)uVar9 * 4);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)sVar11 * 4);
        iVar10 = (*(code *)*param_5)(*(undefined8 *)(param_1 + 0x2018),
                                     *(undefined4 *)(param_1 + 0x2020),
                                     (longlong)
                                     ((int)(short)uVar16 * *(int *)(param_1 + 0x6178) + (int)sVar13)
                                     + *(longlong *)(param_1 + 0x6170));
        iVar10 = ((iVar3 + iVar4 + iVar5) * param_3 + 0x100U >> 9) + iVar10;
        if (iVar10 < iVar12) {
          *param_7 = local_res8;
          iVar12 = iVar10;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar8);
    }
  }
  return iVar12;
}



// FUNCTION 1439e27e0 FUN_1439e27e0 body=889 status=ok
// SIG undefined FUN_1439e27e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1439e27e0(longlong param_1,short *param_2,int param_3,int param_4,undefined8 *param_5,
                  short *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  uint *local_98;
  short local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  int local_68;
  longlong local_60;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar11 = (int)*param_2;
  iVar6 = (int)param_2[1];
  iVar14 = *(int *)(param_1 + 0x64d0);
  if (*(int *)(param_1 + 0x64d0) < iVar11 - param_4) {
    iVar14 = iVar11 - param_4;
  }
  local_70 = param_5;
  local_74 = *(int *)(param_1 + 0x64d4);
  if (iVar11 + param_4 < *(int *)(param_1 + 0x64d4)) {
    local_74 = iVar11 + param_4;
  }
  local_68 = *(int *)(param_1 + 0x64c8);
  if (*(int *)(param_1 + 0x64c8) < iVar6 - param_4) {
    local_68 = iVar6 - param_4;
  }
  local_84 = *(int *)(param_1 + 0x64cc);
  if (iVar6 + param_4 < *(int *)(param_1 + 0x64cc)) {
    local_84 = iVar6 + param_4;
  }
  sVar8 = param_6[1] >> 3;
  sVar13 = *param_6 >> 3;
  sVar5 = param_2[1] - sVar8;
  sVar10 = *param_2 - sVar13;
  if (sVar10 == 0) {
    uVar7 = (uint)(sVar5 != 0);
  }
  else {
    uVar7 = (sVar5 != 0) + 2;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar5 * 4);
  iVar2 = *(int *)(param_1 + 0x6490 + (ulonglong)uVar7 * 4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)sVar10 * 4);
  local_88 = sVar8;
  local_7c = param_3;
  iVar6 = (*(code *)*param_5)(*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),
                              (longlong)(*(int *)(param_1 + 0x6178) * iVar11 + iVar6) +
                              *(longlong *)(param_1 + 0x6170));
  uVar7 = ((iVar1 + iVar2 + iVar3) * param_3 + 0x100U >> 9) + iVar6;
  *param_7 = *(undefined4 *)param_2;
  if (iVar14 < local_74) {
    do {
      lVar15 = (longlong)(iVar14 * *(int *)(param_1 + 0x6178) + local_68) +
               *(longlong *)(param_1 + 0x6170);
      sVar5 = (short)iVar14;
      iVar6 = local_68;
      if ((local_70[5] != 0) && (local_68 + 2 < local_84)) {
        do {
          local_98 = local_58;
          (*(code *)local_70[5])
                    (*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),lVar15,
                     *(undefined4 *)(param_1 + 0x6178));
          lVar12 = 0;
          lVar15 = lVar15 + 3;
          do {
            iVar11 = iVar6;
            if (local_58[lVar12] < uVar7) {
              sVar8 = (short)iVar11 - local_88;
              local_80 = CONCAT22((short)iVar11,sVar5);
              if ((short)(sVar5 - sVar13) == 0) {
                uVar9 = (uint)(sVar8 != 0);
              }
              else {
                uVar9 = (sVar8 != 0) + 2;
              }
              uVar9 = local_58[lVar12] +
                      ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar8 * 4) +
                        *(int *)(param_1 + 0x6490 + (ulonglong)uVar9 * 4) +
                       *(int *)(*(longlong *)(param_1 + 0x64a0) +
                               (longlong)(short)(sVar5 - sVar13) * 4)) * local_7c + 0x100U >> 9);
              if (uVar9 < uVar7) {
                *param_7 = local_80;
                uVar7 = uVar9;
              }
            }
            iVar6 = iVar11 + 1;
            lVar12 = lVar12 + 1;
          } while (lVar12 < 3);
          sVar8 = local_88;
          local_60 = lVar15;
        } while (iVar11 + 3 < local_84);
      }
      if (iVar6 < local_84) {
        do {
          uVar9 = (*(code *)*local_70)
                            (*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),
                             lVar15,*(undefined4 *)(param_1 + 0x6178));
          if (uVar9 < uVar7) {
            sVar10 = (short)iVar6 - sVar8;
            local_78 = CONCAT22((short)iVar6,sVar5);
            if ((short)(sVar5 - sVar13) == 0) {
              uVar4 = (uint)(sVar10 != 0);
            }
            else {
              uVar4 = (sVar10 != 0) + 2;
            }
            uVar9 = uVar9 + ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar10 * 4) +
                              *(int *)(param_1 + 0x6490 + (ulonglong)uVar4 * 4) +
                             *(int *)(*(longlong *)(param_1 + 0x64a0) +
                                     (longlong)(short)(sVar5 - sVar13) * 4)) * local_7c + 0x100U >>
                            9);
            if (uVar9 < uVar7) {
              *param_7 = local_78;
              uVar7 = uVar9;
            }
          }
          lVar15 = lVar15 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_84);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_74);
  }
  return uVar7;
}



// FUNCTION 1439e2b60 FUN_1439e2b60 body=1129 status=ok
// SIG undefined FUN_1439e2b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1439e2b60(longlong param_1,short *param_2,int param_3,int param_4,undefined8 *param_5,
                  short *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  int local_a8;
  int local_a4;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  longlong local_80;
  uint local_78 [4];
  uint local_68 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar12 = (int)*param_2;
  iVar6 = (int)param_2[1];
  iVar7 = *(int *)(param_1 + 0x64d0);
  if (*(int *)(param_1 + 0x64d0) < iVar12 - param_4) {
    iVar7 = iVar12 - param_4;
  }
  local_a0 = param_5;
  local_8c = *(int *)(param_1 + 0x64d4);
  if (iVar12 + param_4 < *(int *)(param_1 + 0x64d4)) {
    local_8c = iVar12 + param_4;
  }
  local_88 = *(int *)(param_1 + 0x64c8);
  if (*(int *)(param_1 + 0x64c8) < iVar6 - param_4) {
    local_88 = iVar6 - param_4;
  }
  local_a8 = *(int *)(param_1 + 0x64cc);
  if (iVar6 + param_4 < *(int *)(param_1 + 0x64cc)) {
    local_a8 = iVar6 + param_4;
  }
  sVar14 = param_6[1] >> 3;
  sVar13 = *param_6 >> 3;
  sVar5 = param_2[1] - sVar14;
  sVar11 = *param_2 - sVar13;
  if (sVar11 == 0) {
    uVar8 = (uint)(sVar5 != 0);
  }
  else {
    uVar8 = (sVar5 != 0) + 2;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar5 * 4);
  iVar2 = *(int *)(param_1 + 0x6490 + (ulonglong)uVar8 * 4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x64a0) + (longlong)sVar11 * 4);
  local_a4 = param_3;
  iVar6 = (*(code *)*param_5)(*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),
                              (longlong)(*(int *)(param_1 + 0x6178) * iVar12 + iVar6) +
                              *(longlong *)(param_1 + 0x6170));
  uVar8 = ((iVar1 + iVar2 + iVar3) * param_3 + 0x100U >> 9) + iVar6;
  *param_7 = *(undefined4 *)param_2;
  if (iVar7 < local_8c) {
    do {
      lVar15 = (longlong)(iVar7 * *(int *)(param_1 + 0x6178) + local_88) +
               *(longlong *)(param_1 + 0x6170);
      sVar5 = (short)iVar7;
      iVar6 = local_88;
      if ((local_a0[6] != 0) && (local_88 + 7 < local_a8)) {
        do {
          local_b8 = local_68;
          (*(code *)local_a0[6])
                    (*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),lVar15,
                     *(undefined4 *)(param_1 + 0x6178));
          lVar10 = 0;
          lVar15 = lVar15 + 8;
          do {
            iVar12 = iVar6;
            if (local_68[lVar10] < uVar8) {
              sVar11 = (short)iVar12 - sVar14;
              local_98 = CONCAT22((short)iVar12,sVar5);
              if ((short)(sVar5 - sVar13) == 0) {
                uVar9 = (uint)(sVar11 != 0);
              }
              else {
                uVar9 = (sVar11 != 0) + 2;
              }
              uVar9 = local_68[lVar10] +
                      ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar11 * 4) +
                        *(int *)(param_1 + 0x6490 + (ulonglong)uVar9 * 4) +
                       *(int *)(*(longlong *)(param_1 + 0x64a0) +
                               (longlong)(short)(sVar5 - sVar13) * 4)) * local_a4 + 0x100U >> 9);
              if (uVar9 < uVar8) {
                *param_7 = local_98;
                uVar8 = uVar9;
              }
            }
            iVar6 = iVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 < 8);
          local_80 = lVar15;
        } while (iVar12 + 8 < local_a8);
      }
      if ((local_a0[5] != 0) && (iVar6 + 2 < local_a8)) {
        do {
          local_b8 = local_78;
          (*(code *)local_a0[5])
                    (*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),lVar15,
                     *(undefined4 *)(param_1 + 0x6178));
          lVar10 = 0;
          lVar15 = lVar15 + 3;
          do {
            iVar12 = iVar6;
            if (local_78[lVar10] < uVar8) {
              sVar11 = (short)iVar12 - sVar14;
              local_94 = CONCAT22((short)iVar12,sVar5);
              if ((short)(sVar5 - sVar13) == 0) {
                uVar9 = (uint)(sVar11 != 0);
              }
              else {
                uVar9 = (sVar11 != 0) + 2;
              }
              uVar9 = local_78[lVar10] +
                      ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar11 * 4) +
                        *(int *)(param_1 + 0x6490 + (ulonglong)uVar9 * 4) +
                       *(int *)(*(longlong *)(param_1 + 0x64a0) +
                               (longlong)(short)(sVar5 - sVar13) * 4)) * local_a4 + 0x100U >> 9);
              if (uVar9 < uVar8) {
                *param_7 = local_94;
                uVar8 = uVar9;
              }
            }
            iVar6 = iVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 < 3);
          local_80 = lVar15;
        } while (iVar12 + 3 < local_a8);
      }
      if (iVar6 < local_a8) {
        do {
          uVar9 = (*(code *)*local_a0)
                            (*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2020),
                             lVar15,*(undefined4 *)(param_1 + 0x6178));
          if (uVar9 < uVar8) {
            sVar11 = (short)iVar6 - sVar14;
            local_90 = CONCAT22((short)iVar6,sVar5);
            if ((short)(sVar5 - sVar13) == 0) {
              uVar4 = (uint)(sVar11 != 0);
            }
            else {
              uVar4 = (sVar11 != 0) + 2;
            }
            uVar9 = uVar9 + ((*(int *)(*(longlong *)(param_1 + 0x64a8) + (longlong)sVar11 * 4) +
                              *(int *)(param_1 + 0x6490 + (ulonglong)uVar4 * 4) +
                             *(int *)(*(longlong *)(param_1 + 0x64a0) +
                                     (longlong)(short)(sVar5 - sVar13) * 4)) * local_a4 + 0x100U >>
                            9);
            if (uVar9 < uVar8) {
              *param_7 = local_90;
              uVar8 = uVar9;
            }
          }
          lVar15 = lVar15 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_a8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_8c);
  }
  return uVar8;
}



// FUNCTION 1439e2fd0 FUN_1439e2fd0 body=1374 status=ok
// SIG undefined FUN_1439e2fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1439e2fd0(longlong param_1,longlong param_2,short *param_3,uint *param_4,int param_5,
                  uint param_6,int *param_7,undefined8 *param_8,short *param_9)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined4 local_188;
  undefined4 local_184;
  short local_180;
  ulonglong local_178;
  int local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  longlong local_160;
  int *local_158;
  ulonglong local_150;
  uint *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  sVar14 = *(short *)(param_1 + 0x64d0);
  sVar16 = *(short *)(param_1 + 0x64d4);
  local_158 = param_7;
  lVar18 = (longlong)(param_5 * *(int *)(param_2 + 0x420));
  local_168 = param_8;
  sVar1 = *(short *)(param_1 + 0x64cc);
  local_140 = param_2 + 0x160 + lVar18 * 8;
  local_184 = CONCAT22(sVar1,sVar16);
  uVar13 = local_184;
  local_178 = CONCAT44(local_178._4_4_,*(int *)(param_2 + 0x424) - param_5);
  sVar2 = *(short *)(param_1 + 0x64c8);
  local_180 = *param_9 >> 3;
  local_184 = CONCAT22(sVar2,sVar14);
  uVar19 = local_184;
  local_184 = CONCAT22(sVar2,param_9[1] >> 3);
  iVar12 = (int)*param_3;
  local_188 = CONCAT22(param_9[1] >> 3,local_180);
  auVar22 = vpshufd_avx(ZEXT416(uVar13),0);
  auVar29 = ZEXT1664(auVar22);
  auVar22 = vpshufd_avx(ZEXT416(uVar19),0);
  auVar30 = ZEXT1664(auVar22);
  auVar22 = vpshufd_avx(ZEXT416(param_6),0);
  auVar31 = ZEXT1664(auVar22);
  auVar22 = vpshufd_avx(ZEXT416(*(uint *)(param_1 + 0x6490)),0);
  auVar32 = ZEXT1664(auVar22);
  auVar22 = vpshufd_avx(ZEXT416(*(uint *)(param_1 + 0x6494)),0);
  auVar33 = ZEXT1664(auVar22);
  auVar22 = vpshufd_avx(ZEXT416(local_188),0);
  auVar34 = ZEXT1664(auVar22);
  iVar17 = (int)sVar14;
  if ((sVar14 <= iVar12) && (iVar17 = iVar12, sVar16 < iVar12)) {
    iVar17 = (int)sVar16;
  }
  iVar5 = (int)param_3[1];
  iVar12 = (int)sVar2;
  if ((sVar2 <= iVar5) && (iVar12 = iVar5, sVar1 < iVar5)) {
    iVar12 = (int)sVar1;
  }
  local_170 = *(int *)(param_1 + 0x6178);
  local_138 = *(undefined8 *)(param_1 + 0x2018);
  local_16c = *(undefined4 *)(param_1 + 0x2020);
  uVar13 = CONCAT22((short)iVar12,(short)iVar17);
  uVar10 = (longlong)(local_170 * iVar17) + *(longlong *)(param_1 + 0x6170) + (longlong)iVar12;
  auVar22 = vpshufd_avx(ZEXT416(uVar13),0);
  auVar27 = ZEXT1664(auVar22);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar10;
  auVar22 = vpunpcklqdq_avx(auVar22,auVar22);
  auVar28 = ZEXT1664(auVar22);
  local_188 = uVar13;
  local_160 = param_1;
  local_150 = uVar10;
  local_148 = param_4;
  iVar6 = (*(code *)*param_8)(local_138,local_16c,uVar10,local_170);
  sVar14 = (short)iVar17 - local_180;
  sVar16 = (short)iVar12 - (short)local_184;
  local_188 = CONCAT22(sVar16,sVar14);
  iVar15 = 0;
  iVar17 = *(int *)(*(longlong *)(local_160 + 0x64a8) + (longlong)sVar16 * 4);
  iVar12 = *(int *)(local_160 + 0x6490 + (ulonglong)(local_188 != 0) * 4);
  iVar5 = *(int *)(*(longlong *)(local_160 + 0x64a0) + (longlong)sVar14 * 4);
  *local_158 = 0;
  uVar19 = iVar6 + ((iVar17 + iVar12 + iVar5) * param_6 + 0x100 >> 9);
  bVar4 = 0 < (int)local_178;
  local_178 = local_178 & 0xffffffff;
  piVar11 = local_158;
  uVar20 = uVar10;
  if (bVar4) {
    do {
      iVar17 = 0;
      if (0 < *(int *)(param_2 + 0x420)) {
        do {
          local_118 = vpaddw_avx(auVar27._0_16_,
                                 *(undefined1 (*) [16])(param_2 + lVar18 * 4 + (longlong)iVar15 * 4)
                                );
          auVar22 = vpminsw_avx(local_118,auVar29._0_16_);
          auVar23 = vpmaxsw_avx(auVar22,auVar30._0_16_);
          auVar22 = vpcmpeqd_avx(auVar23,local_118);
          auVar26 = ZEXT1664(auVar22);
          if (auVar22 != (undefined1  [16])0x0) {
            auVar23 = vpsubw_avx(auVar23,auVar34._0_16_);
            auVar23 = vpabsw_avx(auVar23);
            auVar25 = ZEXT1664(auVar23);
            auVar23 = vpmovsxdq_avx(auVar22);
            auVar23 = vpand_avx(*(undefined1 (*) [16])(local_140 + (longlong)iVar15 * 8),auVar23);
            local_108 = vpaddq_avx(auVar23,auVar28._0_16_);
            local_198 = local_128;
            auVar22 = vpunpckhdq_avx(auVar22,auVar22);
            auVar22 = vpand_avx(*(undefined1 (*) [16])(local_140 + (longlong)(iVar15 + 2) * 8),
                                auVar22);
            local_f8 = vpaddq_avx(auVar22,auVar28._0_16_);
            (*(code *)local_168[7])(local_138,local_16c,local_108,local_170);
            auVar21 = auVar25._0_16_;
            iVar12 = vpextrw_avx(auVar21,3);
            iVar5 = vpextrw_avx(auVar21,2);
            lVar3 = *(longlong *)(local_160 + 0x64a0);
            iVar6 = vpextrw_avx(auVar21,1);
            iVar7 = vpextrw_avx(auVar21,0);
            auVar22 = vpinsrd_avx(ZEXT416((uint)(*(int *)(lVar3 + (longlong)iVar6 * 4) +
                                                *(int *)(lVar3 + (longlong)iVar7 * 4))),
                                  *(int *)(lVar3 + (longlong)iVar12 * 4) +
                                  *(int *)(lVar3 + (longlong)iVar5 * 4),1);
            iVar12 = vpextrw_avx(auVar21,7);
            iVar5 = vpextrw_avx(auVar21,6);
            iVar6 = vpextrw_avx(auVar21,5);
            iVar7 = vpextrw_avx(auVar21,4);
            auVar23 = vpinsrd_avx(ZEXT416((uint)(*(int *)(lVar3 + (longlong)iVar6 * 4) +
                                                *(int *)(lVar3 + (longlong)iVar7 * 4))),
                                  *(int *)(lVar3 + (longlong)iVar12 * 4) +
                                  *(int *)(lVar3 + (longlong)iVar5 * 4),1);
            auVar23 = vpunpcklqdq_avx(auVar22,auVar23);
            auVar22 = vpcmpeqd_avx(auVar21,(undefined1  [16])0x0);
            auVar22 = vpblendvb_avx(auVar33._0_16_,auVar32._0_16_,auVar22);
            auVar22 = vpaddd_avx(auVar23,auVar22);
            auVar22 = vpmulld_avx(auVar22,auVar31._0_16_);
            auVar22 = vpaddd_avx(auVar22,_DAT_145b05d90);
            auVar22 = vpsrad_avx(auVar22,9);
            auVar22 = vpaddd_avx(auVar22,local_128);
            auVar23 = vpsrld_avx(auVar26._0_16_ ^ _DAT_143f39c70,1);
            local_128 = vpor_avx(auVar22,auVar23);
            auVar22 = vpackusdw_avx(local_128,local_128);
            auVar22 = vphminposuw_avx(auVar22);
            uVar9 = vpextrw_avx(auVar22,0);
            uVar8 = vpextrw_avx(auVar22,1);
            if (uVar9 == 0xffff) {
              auVar22 = vpsrldq_avx(local_128,8);
              auVar23 = vpcmpgtd_avx(local_128,auVar22);
              auVar22 = vpblendvb_avx(local_128,auVar22,auVar23);
              auVar21 = vpsrldq_avx(_DAT_1441163c0,8);
              auVar23 = vpblendvb_avx(_DAT_1441163c0,auVar21,auVar23);
              auVar24 = vpsrldq_avx(auVar22,4);
              auVar21 = vpcmpgtd_avx(auVar22,auVar24);
              auVar22 = vpblendvb_avx(auVar22,auVar24,auVar21);
              auVar24 = vpsrldq_avx(auVar23,4);
              uVar9 = auVar22._0_4_;
              auVar22 = vpblendvb_avx(auVar23,auVar24,auVar21);
              uVar8 = auVar22._0_4_;
            }
            if (uVar9 < uVar19) {
              uVar13 = *(uint *)(local_118 + (ulonglong)uVar8 * 4);
              uVar20 = *(ulonglong *)(local_108 + (ulonglong)uVar8 * 8);
              uVar19 = uVar9;
            }
          }
          iVar17 = iVar17 + 4;
          iVar15 = iVar15 + 4;
          piVar11 = local_158;
          uVar10 = local_150;
        } while (iVar17 < *(int *)(param_2 + 0x420));
      }
      auVar22 = vpshufd_avx(ZEXT416(uVar13),0);
      auVar27 = ZEXT1664(auVar22);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar20;
      auVar22 = vpunpcklqdq_avx(auVar23,auVar23);
      auVar28 = ZEXT1664(auVar22);
      if (uVar20 == uVar10) {
        *piVar11 = *piVar11 + 1;
      }
      local_178 = local_178 - 1;
    } while (local_178 != 0);
  }
  *local_148 = uVar13;
  return uVar19;
}



// FUNCTION 1439e3530 FUN_1439e3530 body=2038 status=ok
// SIG undefined FUN_1439e3530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439e3530(undefined1 (*param_1) [16],int param_2,undefined8 param_3,longlong param_4,
                  int param_5,undefined8 param_6,undefined1 (*param_7) [16],
                  undefined1 (*param_8) [16],undefined8 param_9,longlong param_10,longlong param_11,
                  short *param_12,ushort *param_13,undefined8 param_14,longlong param_15)

{
  short *psVar1;
  short *psVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  longlong lVar7;
  short *psVar8;
  undefined1 (*pauVar9) [16];
  undefined1 **ppuVar10;
  longlong lVar11;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  ushort uVar20;
  undefined1 auVar16 [16];
  short sVar21;
  ushort uVar22;
  ushort uVar23;
  short sVar28;
  ushort uVar29;
  ushort uVar30;
  short sVar31;
  ushort uVar32;
  ushort uVar33;
  short sVar34;
  ushort uVar35;
  ushort uVar36;
  short sVar37;
  ushort uVar38;
  ushort uVar39;
  short sVar40;
  ushort uVar41;
  ushort uVar42;
  short sVar43;
  ushort uVar44;
  ushort uVar45;
  short sVar46;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ushort uVar47;
  ushort uVar48;
  short sVar49;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  short sVar64;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  short sVar87;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  short sVar88;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar103;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined4 uVar111;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined4 uVar121;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  short sVar129;
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar143;
  short sVar144;
  short sVar145;
  undefined1 auVar130 [16];
  short sVar146;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined4 uVar147;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  short sVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  short sVar161;
  short sVar165;
  short sVar166;
  short sVar167;
  short sVar168;
  short sVar169;
  short sVar170;
  undefined1 auVar162 [16];
  short sVar171;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 local_188 [32];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  undefined1 *local_f8 [5];
  undefined1 *local_d0;
  ulonglong local_c8;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar104 [12];
  undefined1 auVar108 [16];
  undefined1 auVar112 [12];
  undefined1 auVar116 [16];
  undefined1 auVar122 [12];
  undefined1 auVar126 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar148 [12];
  undefined1 auVar152 [16];
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)local_188;
  auVar162 = psllw(*param_1,2);
  auVar155 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)param_2 * 2),2);
  auVar172 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 2) * 2),2);
  auVar130 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 3) * 2),2);
  auVar105 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 4) * 2),2);
  auVar80 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 5) * 2),2);
  auVar113 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 6) * 2),2);
  local_f8[0] = local_168;
  local_f8[1] = local_158;
  local_f8[2] = local_148;
  local_f8[3] = local_138;
  local_f8[4] = local_128;
  local_d0 = local_118;
  lVar7 = 2;
  auVar149 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 7) * 2),2);
  do {
    sVar88 = auVar113._0_2_ + auVar155._0_2_;
    sVar95 = auVar113._2_2_ + auVar155._2_2_;
    sVar96 = auVar113._4_2_ + auVar155._4_2_;
    sVar97 = auVar113._6_2_ + auVar155._6_2_;
    sVar99 = auVar113._8_2_ + auVar155._8_2_;
    sVar100 = auVar113._10_2_ + auVar155._10_2_;
    sVar101 = auVar113._12_2_ + auVar155._12_2_;
    sVar102 = auVar113._14_2_ + auVar155._14_2_;
    sVar21 = auVar80._0_2_ + auVar172._0_2_;
    sVar28 = auVar80._2_2_ + auVar172._2_2_;
    sVar31 = auVar80._4_2_ + auVar172._4_2_;
    sVar34 = auVar80._6_2_ + auVar172._6_2_;
    sVar37 = auVar80._8_2_ + auVar172._8_2_;
    sVar40 = auVar80._10_2_ + auVar172._10_2_;
    sVar43 = auVar80._12_2_ + auVar172._12_2_;
    sVar46 = auVar80._14_2_ + auVar172._14_2_;
    sVar160 = auVar155._6_2_ - auVar113._6_2_;
    sVar49 = auVar105._0_2_ + auVar130._0_2_;
    sVar57 = auVar105._2_2_ + auVar130._2_2_;
    sVar58 = auVar105._4_2_ + auVar130._4_2_;
    sVar59 = auVar105._6_2_ + auVar130._6_2_;
    sVar60 = auVar105._8_2_ + auVar130._8_2_;
    sVar61 = auVar105._10_2_ + auVar130._10_2_;
    sVar62 = auVar105._12_2_ + auVar130._12_2_;
    sVar63 = auVar105._14_2_ + auVar130._14_2_;
    sVar64 = auVar149._0_2_ + auVar162._0_2_;
    sVar73 = auVar149._2_2_ + auVar162._2_2_;
    sVar74 = auVar149._4_2_ + auVar162._4_2_;
    sVar75 = auVar149._6_2_ + auVar162._6_2_;
    sVar76 = auVar149._8_2_ + auVar162._8_2_;
    sVar77 = auVar149._10_2_ + auVar162._10_2_;
    sVar78 = auVar149._12_2_ + auVar162._12_2_;
    sVar79 = auVar149._14_2_ + auVar162._14_2_;
    sVar129 = auVar130._0_2_ - auVar105._0_2_;
    sVar140 = auVar130._2_2_ - auVar105._2_2_;
    sVar141 = auVar130._4_2_ - auVar105._4_2_;
    sVar142 = auVar130._6_2_ - auVar105._6_2_;
    sVar143 = auVar130._8_2_ - auVar105._8_2_;
    sVar144 = auVar130._10_2_ - auVar105._10_2_;
    sVar145 = auVar130._12_2_ - auVar105._12_2_;
    sVar146 = auVar130._14_2_ - auVar105._14_2_;
    sVar87 = sVar59 + sVar75;
    sVar98 = sVar97 - sVar34;
    sVar161 = auVar162._0_2_ - auVar149._0_2_;
    sVar165 = auVar162._2_2_ - auVar149._2_2_;
    sVar166 = auVar162._4_2_ - auVar149._4_2_;
    sVar167 = auVar162._6_2_ - auVar149._6_2_;
    sVar168 = auVar162._8_2_ - auVar149._8_2_;
    sVar169 = auVar162._10_2_ - auVar149._10_2_;
    sVar170 = auVar162._12_2_ - auVar149._12_2_;
    sVar171 = auVar162._14_2_ - auVar149._14_2_;
    auVar123._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar34 + sVar97,sVar87),sVar31 + sVar96),
                   CONCAT22(sVar58 + sVar74,sVar87)) >> 0x10);
    auVar123._6_2_ = sVar28 + sVar95;
    auVar123._4_2_ = sVar57 + sVar73;
    auVar123._2_2_ = sVar21 + sVar88;
    auVar123._0_2_ = sVar49 + sVar64;
    auVar115._2_2_ = sVar37 + sVar99;
    auVar115._0_2_ = sVar60 + sVar76;
    auVar115._4_2_ = sVar61 + sVar77;
    auVar115._6_2_ = sVar40 + sVar100;
    auVar115._8_2_ = sVar62 + sVar78;
    auVar115._10_2_ = sVar43 + sVar101;
    auVar115._12_2_ = sVar63 + sVar79;
    auVar115._14_2_ = sVar46 + sVar102;
    auVar151._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar75 - sVar59,sVar98),sVar74 - sVar58),
                   CONCAT22(sVar96 - sVar31,sVar98)) >> 0x10);
    auVar151._6_2_ = sVar73 - sVar57;
    auVar151._4_2_ = sVar95 - sVar28;
    auVar151._2_2_ = sVar64 - sVar49;
    auVar151._0_2_ = sVar88 - sVar21;
    auVar105 = pmaddwd(auVar115,_DAT_145cabf60);
    auVar130 = pmaddwd(auVar151,_DAT_145cabfe0);
    auVar149 = pmaddwd(auVar151,_DAT_145cabee0);
    auVar89._2_2_ = sVar76 - sVar60;
    auVar89._0_2_ = sVar99 - sVar37;
    auVar89._4_2_ = sVar100 - sVar40;
    auVar89._6_2_ = sVar77 - sVar61;
    auVar89._8_2_ = sVar101 - sVar43;
    auVar89._10_2_ = sVar78 - sVar62;
    auVar89._12_2_ = sVar102 - sVar46;
    auVar89._14_2_ = sVar79 - sVar63;
    auVar107._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(auVar172._6_2_ - auVar80._6_2_,sVar160),
                            auVar172._4_2_ - auVar80._4_2_),
                   CONCAT22(auVar155._4_2_ - auVar113._4_2_,sVar160)) >> 0x10);
    auVar107._6_2_ = auVar172._2_2_ - auVar80._2_2_;
    auVar107._4_2_ = auVar155._2_2_ - auVar113._2_2_;
    auVar107._2_2_ = auVar172._0_2_ - auVar80._0_2_;
    auVar107._0_2_ = auVar155._0_2_ - auVar113._0_2_;
    auVar26._0_4_ = auVar105._0_4_ + 0x2000 >> 0xe;
    auVar26._4_4_ = auVar105._4_4_ + 0x2000 >> 0xe;
    auVar26._8_4_ = auVar105._8_4_ + 0x2000 >> 0xe;
    auVar26._12_4_ = auVar105._12_4_ + 0x2000 >> 0xe;
    auVar105 = pmaddwd(auVar107,_DAT_145cac080);
    auVar162 = pmaddwd(auVar123,_DAT_145cac080);
    auVar156._2_2_ = auVar172._8_2_ - auVar80._8_2_;
    auVar156._0_2_ = auVar155._8_2_ - auVar113._8_2_;
    auVar156._4_2_ = auVar155._10_2_ - auVar113._10_2_;
    auVar156._6_2_ = auVar172._10_2_ - auVar80._10_2_;
    auVar156._8_2_ = auVar155._12_2_ - auVar113._12_2_;
    auVar156._10_2_ = auVar172._12_2_ - auVar80._12_2_;
    auVar156._12_2_ = auVar155._14_2_ - auVar113._14_2_;
    auVar156._14_2_ = auVar172._14_2_ - auVar80._14_2_;
    auVar80 = pmaddwd(auVar115,_DAT_145cac080);
    auVar155 = pmaddwd(auVar123,_DAT_145cabf60);
    auVar113 = pmaddwd(auVar107,_DAT_145cabf60);
    auVar106._0_4_ = auVar130._0_4_ + 0x2000 >> 0xe;
    auVar106._4_4_ = auVar130._4_4_ + 0x2000 >> 0xe;
    auVar106._8_4_ = auVar130._8_4_ + 0x2000 >> 0xe;
    auVar106._12_4_ = auVar130._12_4_ + 0x2000 >> 0xe;
    auVar24._0_4_ = auVar105._0_4_ + 0x2000 >> 0xe;
    auVar24._4_4_ = auVar105._4_4_ + 0x2000 >> 0xe;
    auVar24._8_4_ = auVar105._8_4_ + 0x2000 >> 0xe;
    auVar24._12_4_ = auVar105._12_4_ + 0x2000 >> 0xe;
    auVar124._0_4_ = auVar162._0_4_ + 0x2000 >> 0xe;
    auVar124._4_4_ = auVar162._4_4_ + 0x2000 >> 0xe;
    auVar124._8_4_ = auVar162._8_4_ + 0x2000 >> 0xe;
    auVar124._12_4_ = auVar162._12_4_ + 0x2000 >> 0xe;
    auVar125._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar125._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar125._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar125._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar150._0_4_ = auVar155._0_4_ + 0x2000 >> 0xe;
    auVar150._4_4_ = auVar155._4_4_ + 0x2000 >> 0xe;
    auVar150._8_4_ = auVar155._8_4_ + 0x2000 >> 0xe;
    auVar150._12_4_ = auVar155._12_4_ + 0x2000 >> 0xe;
    auVar151 = packssdw(auVar150,auVar26);
    auVar80 = pmaddwd(auVar89,_DAT_145cabfe0);
    auVar105 = pmaddwd(auVar89,_DAT_145cabee0);
    auVar50._0_4_ = auVar113._0_4_ + 0x2000 >> 0xe;
    auVar50._4_4_ = auVar113._4_4_ + 0x2000 >> 0xe;
    auVar50._8_4_ = auVar113._8_4_ + 0x2000 >> 0xe;
    auVar50._12_4_ = auVar113._12_4_ + 0x2000 >> 0xe;
    auVar114._0_4_ = auVar149._0_4_ + 0x2000 >> 0xe;
    auVar114._4_4_ = auVar149._4_4_ + 0x2000 >> 0xe;
    auVar114._8_4_ = auVar149._8_4_ + 0x2000 >> 0xe;
    auVar114._12_4_ = auVar149._12_4_ + 0x2000 >> 0xe;
    auVar125 = packssdw(auVar124,auVar125);
    auVar52._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar52._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar52._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar52._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar107 = packssdw(auVar106,auVar52);
    auVar80 = pmaddwd(auVar156,_DAT_145cac080);
    auVar113 = pmaddwd(auVar156,_DAT_145cabf60);
    auVar90._0_4_ = auVar105._0_4_ + 0x2000 >> 0xe;
    auVar90._4_4_ = auVar105._4_4_ + 0x2000 >> 0xe;
    auVar90._8_4_ = auVar105._8_4_ + 0x2000 >> 0xe;
    auVar90._12_4_ = auVar105._12_4_ + 0x2000 >> 0xe;
    auVar115 = packssdw(auVar114,auVar90);
    auVar83._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar83._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar83._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar83._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar80 = packssdw(auVar24,auVar83);
    auVar157._0_4_ = auVar113._0_4_ + 0x2000 >> 0xe;
    auVar157._4_4_ = auVar113._4_4_ + 0x2000 >> 0xe;
    auVar157._8_4_ = auVar113._8_4_ + 0x2000 >> 0xe;
    auVar157._12_4_ = auVar113._12_4_ + 0x2000 >> 0xe;
    auVar113 = packssdw(auVar50,auVar157);
    sVar21 = auVar80._6_2_ + sVar142;
    sVar142 = sVar142 - auVar80._6_2_;
    auVar81._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar167 - auVar113._6_2_,sVar142),sVar166 - auVar113._4_2_),
                   CONCAT22(sVar141 - auVar80._4_2_,sVar142)) >> 0x10);
    auVar81._6_2_ = sVar165 - auVar113._2_2_;
    auVar81._4_2_ = sVar140 - auVar80._2_2_;
    auVar81._2_2_ = sVar161 - auVar113._0_2_;
    auVar81._0_2_ = sVar129 - auVar80._0_2_;
    auVar131._2_2_ = sVar168 - auVar113._8_2_;
    auVar131._0_2_ = sVar143 - auVar80._8_2_;
    auVar131._4_2_ = sVar144 - auVar80._10_2_;
    auVar131._6_2_ = sVar169 - auVar113._10_2_;
    auVar131._8_2_ = sVar145 - auVar80._12_2_;
    auVar131._10_2_ = sVar170 - auVar113._12_2_;
    auVar131._12_2_ = sVar146 - auVar80._14_2_;
    auVar131._14_2_ = sVar171 - auVar113._14_2_;
    auVar149 = pmaddwd(auVar81,_DAT_145cabfa0);
    auVar105 = pmaddwd(auVar81,_DAT_145cabf20);
    auVar65._2_2_ = auVar113._8_2_ + sVar168;
    auVar65._0_2_ = auVar80._8_2_ + sVar143;
    auVar65._4_2_ = auVar80._10_2_ + sVar144;
    auVar65._6_2_ = auVar113._10_2_ + sVar169;
    auVar65._8_2_ = auVar80._12_2_ + sVar145;
    auVar65._10_2_ = auVar113._12_2_ + sVar170;
    auVar65._12_2_ = auVar80._14_2_ + sVar146;
    auVar65._14_2_ = auVar113._14_2_ + sVar171;
    auVar91._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(auVar113._6_2_ + sVar167,sVar21),auVar113._4_2_ + sVar166),
                   CONCAT22(auVar80._4_2_ + sVar141,sVar21)) >> 0x10);
    auVar91._6_2_ = auVar113._2_2_ + sVar165;
    auVar91._4_2_ = auVar80._2_2_ + sVar140;
    auVar91._2_2_ = auVar113._0_2_ + sVar161;
    auVar91._0_2_ = auVar80._0_2_ + sVar129;
    auVar80 = pmaddwd(auVar65,_DAT_145cac020);
    auVar113 = pmaddwd(auVar91,_DAT_145cac020);
    auVar130 = pmaddwd(auVar65,_DAT_145cabea0);
    auVar155 = pmaddwd(auVar91,_DAT_145cabea0);
    auVar82._0_4_ = auVar149._0_4_ + 0x2000 >> 0xe;
    auVar82._4_4_ = auVar149._4_4_ + 0x2000 >> 0xe;
    auVar82._8_4_ = auVar149._8_4_ + 0x2000 >> 0xe;
    auVar82._12_4_ = auVar149._12_4_ + 0x2000 >> 0xe;
    auVar25._0_4_ = auVar105._0_4_ + 0x2000 >> 0xe;
    auVar25._4_4_ = auVar105._4_4_ + 0x2000 >> 0xe;
    auVar25._8_4_ = auVar105._8_4_ + 0x2000 >> 0xe;
    auVar25._12_4_ = auVar105._12_4_ + 0x2000 >> 0xe;
    auVar93._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar93._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar93._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar93._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar51._0_4_ = auVar113._0_4_ + 0x2000 >> 0xe;
    auVar51._4_4_ = auVar113._4_4_ + 0x2000 >> 0xe;
    auVar51._8_4_ = auVar113._8_4_ + 0x2000 >> 0xe;
    auVar51._12_4_ = auVar113._12_4_ + 0x2000 >> 0xe;
    auVar52 = packssdw(auVar51,auVar93);
    auVar105 = pmaddwd(auVar131,_DAT_145cabfa0);
    auVar80 = pmaddwd(auVar131,_DAT_145cabf20);
    auVar66._0_4_ = auVar130._0_4_ + 0x2000 >> 0xe;
    auVar66._4_4_ = auVar130._4_4_ + 0x2000 >> 0xe;
    auVar66._8_4_ = auVar130._8_4_ + 0x2000 >> 0xe;
    auVar66._12_4_ = auVar130._12_4_ + 0x2000 >> 0xe;
    auVar92._0_4_ = auVar155._0_4_ + 0x2000 >> 0xe;
    auVar92._4_4_ = auVar155._4_4_ + 0x2000 >> 0xe;
    auVar92._8_4_ = auVar155._8_4_ + 0x2000 >> 0xe;
    auVar92._12_4_ = auVar155._12_4_ + 0x2000 >> 0xe;
    auVar93 = packssdw(auVar92,auVar66);
    auVar132._0_4_ = auVar105._0_4_ + 0x2000 >> 0xe;
    auVar132._4_4_ = auVar105._4_4_ + 0x2000 >> 0xe;
    auVar132._8_4_ = auVar105._8_4_ + 0x2000 >> 0xe;
    auVar132._12_4_ = auVar105._12_4_ + 0x2000 >> 0xe;
    auVar83 = packssdw(auVar82,auVar132);
    auVar164._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar164._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar164._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar164._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar26 = packssdw(auVar25,auVar164);
    auVar14._0_12_ = auVar107._0_12_;
    auVar14._12_2_ = auVar107._6_2_;
    auVar14._14_2_ = auVar83._6_2_;
    auVar13._12_4_ = auVar14._12_4_;
    auVar13._0_10_ = auVar107._0_10_;
    auVar13._10_2_ = auVar83._4_2_;
    auVar12._10_6_ = auVar13._10_6_;
    auVar12._0_8_ = auVar107._0_8_;
    auVar12._8_2_ = auVar107._4_2_;
    auVar3._4_8_ = auVar12._8_8_;
    auVar3._2_2_ = auVar83._2_2_;
    auVar3._0_2_ = auVar107._2_2_;
    auVar162._6_2_ = auVar83._0_2_;
    auVar162._4_2_ = auVar107._0_2_;
    uVar103 = CONCAT22(auVar83._8_2_,auVar107._8_2_);
    auVar104._0_8_ = CONCAT26(auVar83._10_2_,CONCAT24(auVar107._10_2_,uVar103));
    auVar104._8_2_ = auVar107._12_2_;
    auVar104._10_2_ = auVar83._12_2_;
    auVar108._12_2_ = auVar107._14_2_;
    auVar108._0_12_ = auVar104;
    auVar108._14_2_ = auVar83._14_2_;
    auVar136._0_12_ = auVar151._0_12_;
    auVar136._12_2_ = auVar151._6_2_;
    auVar136._14_2_ = auVar52._6_2_;
    auVar135._12_4_ = auVar136._12_4_;
    auVar135._0_10_ = auVar151._0_10_;
    auVar135._10_2_ = auVar52._4_2_;
    auVar134._10_6_ = auVar135._10_6_;
    auVar134._0_8_ = auVar151._0_8_;
    auVar134._8_2_ = auVar151._4_2_;
    auVar4._4_8_ = auVar134._8_8_;
    auVar4._2_2_ = auVar52._2_2_;
    auVar4._0_2_ = auVar151._2_2_;
    auVar133._0_4_ = CONCAT22(auVar52._0_2_,auVar151._0_2_);
    auVar133._4_12_ = auVar4;
    uVar147 = CONCAT22(auVar52._8_2_,auVar151._8_2_);
    auVar148._0_8_ = CONCAT26(auVar52._10_2_,CONCAT24(auVar151._10_2_,uVar147));
    auVar148._8_2_ = auVar151._12_2_;
    auVar148._10_2_ = auVar52._12_2_;
    auVar152._12_2_ = auVar151._14_2_;
    auVar152._0_12_ = auVar148;
    auVar152._14_2_ = auVar52._14_2_;
    auVar70._0_12_ = auVar125._0_12_;
    auVar70._12_2_ = auVar125._6_2_;
    auVar70._14_2_ = auVar26._6_2_;
    auVar69._12_4_ = auVar70._12_4_;
    auVar69._0_10_ = auVar125._0_10_;
    auVar69._10_2_ = auVar26._4_2_;
    auVar68._10_6_ = auVar69._10_6_;
    auVar68._0_8_ = auVar125._0_8_;
    auVar68._8_2_ = auVar125._4_2_;
    auVar5._4_8_ = auVar68._8_8_;
    auVar5._2_2_ = auVar26._2_2_;
    auVar5._0_2_ = auVar125._2_2_;
    auVar67._0_4_ = CONCAT22(auVar26._0_2_,auVar125._0_2_);
    auVar67._4_12_ = auVar5;
    auVar158._0_8_ = auVar133._0_8_;
    auVar158._8_4_ = auVar4._0_4_;
    auVar158._12_4_ = auVar3._0_4_;
    auVar162._0_4_ = auVar133._0_4_;
    uVar111 = CONCAT22(auVar93._8_2_,auVar115._8_2_);
    auVar112._0_8_ = CONCAT26(auVar93._10_2_,CONCAT24(auVar115._10_2_,uVar111));
    auVar112._8_2_ = auVar115._12_2_;
    auVar112._10_2_ = auVar93._12_2_;
    auVar116._12_2_ = auVar115._14_2_;
    auVar116._0_12_ = auVar112;
    auVar116._14_2_ = auVar93._14_2_;
    auVar137._0_8_ = CONCAT44(auVar12._8_4_,auVar134._8_4_);
    auVar137._8_4_ = auVar135._12_4_;
    auVar137._12_4_ = auVar13._12_4_;
    auVar153._0_8_ = CONCAT44(auVar104._8_4_,auVar148._8_4_);
    auVar153._8_4_ = auVar152._12_4_;
    auVar153._12_4_ = auVar108._12_4_;
    uVar121 = CONCAT22(auVar26._8_2_,auVar125._8_2_);
    auVar122._0_8_ = CONCAT26(auVar26._10_2_,CONCAT24(auVar125._10_2_,uVar121));
    auVar122._8_2_ = auVar125._12_2_;
    auVar122._10_2_ = auVar26._12_2_;
    auVar126._12_2_ = auVar125._14_2_;
    auVar126._0_12_ = auVar122;
    auVar126._14_2_ = auVar26._14_2_;
    auVar84._8_4_ = (int)((ulonglong)auVar148._0_8_ >> 0x20);
    auVar84._0_8_ = auVar148._0_8_;
    auVar84._12_4_ = (int)((ulonglong)auVar104._0_8_ >> 0x20);
    auVar105._4_4_ = uVar103;
    auVar105._0_4_ = uVar147;
    auVar27._8_4_ = (int)((ulonglong)auVar122._0_8_ >> 0x20);
    auVar27._0_8_ = auVar122._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar112._0_8_ >> 0x20);
    auVar105._12_4_ = uVar111;
    auVar105._8_4_ = uVar121;
    auVar127._0_8_ = CONCAT44(auVar112._8_4_,auVar122._8_4_);
    auVar127._8_4_ = auVar126._12_4_;
    auVar127._12_4_ = auVar116._12_4_;
    auVar55._0_12_ = auVar115._0_12_;
    auVar55._12_2_ = auVar115._6_2_;
    auVar55._14_2_ = auVar93._6_2_;
    auVar54._12_4_ = auVar55._12_4_;
    auVar54._0_10_ = auVar115._0_10_;
    auVar54._10_2_ = auVar93._4_2_;
    auVar53._10_6_ = auVar54._10_6_;
    auVar53._0_8_ = auVar115._0_8_;
    auVar53._8_2_ = auVar115._4_2_;
    auVar6._4_8_ = auVar53._8_8_;
    auVar6._2_2_ = auVar93._2_2_;
    auVar6._0_2_ = auVar115._2_2_;
    auVar162._14_2_ = auVar93._0_2_;
    auVar162._12_2_ = auVar115._0_2_;
    auVar15._0_8_ = auVar67._0_8_;
    auVar15._8_4_ = auVar5._0_4_;
    auVar15._12_4_ = auVar6._0_4_;
    auVar162._8_4_ = auVar67._0_4_;
    auVar71._0_8_ = CONCAT44(auVar53._8_4_,auVar68._8_4_);
    auVar71._8_4_ = auVar69._12_4_;
    auVar71._12_4_ = auVar54._12_4_;
    auVar155._8_8_ = auVar15._8_8_;
    auVar155._0_8_ = auVar158._8_8_;
    auVar172._8_8_ = auVar71._0_8_;
    auVar172._0_8_ = auVar137._0_8_;
    auVar130._8_8_ = auVar71._8_8_;
    auVar130._0_8_ = auVar137._8_8_;
    auVar80._8_8_ = auVar27._8_8_;
    auVar80._0_8_ = auVar84._8_8_;
    auVar113._8_8_ = auVar127._0_8_;
    auVar113._0_8_ = auVar153._0_8_;
    auVar149._8_8_ = auVar127._8_8_;
    auVar149._0_8_ = auVar153._8_8_;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = param_4 * 2;
  param_15 = param_15 + lVar7;
  auVar162 = psraw(auVar162,0xf);
  param_10 = param_10 + lVar7;
  auVar163._0_2_ = auVar151._0_2_ - auVar162._0_2_;
  auVar163._2_2_ = auVar52._0_2_ - auVar162._2_2_;
  auVar163._4_2_ = auVar107._0_2_ - auVar162._4_2_;
  auVar163._6_2_ = auVar83._0_2_ - auVar162._6_2_;
  auVar163._8_2_ = auVar125._0_2_ - auVar162._8_2_;
  auVar163._10_2_ = auVar26._0_2_ - auVar162._10_2_;
  auVar163._12_2_ = auVar115._0_2_ - auVar162._12_2_;
  auVar163._14_2_ = auVar93._0_2_ - auVar162._14_2_;
  param_11 = param_11 + lVar7;
  auVar164 = psraw(auVar163,1);
  auVar155 = psraw(auVar155,0xf);
  lVar7 = -param_4;
  auVar159._0_2_ = auVar151._2_2_ - auVar155._0_2_;
  auVar159._2_2_ = auVar52._2_2_ - auVar155._2_2_;
  auVar159._4_2_ = auVar107._2_2_ - auVar155._4_2_;
  auVar159._6_2_ = auVar83._2_2_ - auVar155._6_2_;
  auVar159._8_2_ = auVar125._2_2_ - auVar155._8_2_;
  auVar159._10_2_ = auVar26._2_2_ - auVar155._10_2_;
  auVar159._12_2_ = auVar115._2_2_ - auVar155._12_2_;
  auVar159._14_2_ = auVar93._2_2_ - auVar155._14_2_;
  auVar162 = psraw(auVar159,1);
  auVar155 = psraw(auVar172,0xf);
  auVar173._0_2_ = auVar151._4_2_ - auVar155._0_2_;
  auVar173._2_2_ = auVar52._4_2_ - auVar155._2_2_;
  auVar173._4_2_ = auVar107._4_2_ - auVar155._4_2_;
  auVar173._6_2_ = auVar83._4_2_ - auVar155._6_2_;
  auVar173._8_2_ = auVar125._4_2_ - auVar155._8_2_;
  auVar173._10_2_ = auVar26._4_2_ - auVar155._10_2_;
  auVar173._12_2_ = auVar115._4_2_ - auVar155._12_2_;
  auVar173._14_2_ = auVar93._4_2_ - auVar155._14_2_;
  psraw(auVar173,1);
  auVar130 = psraw(auVar130,0xf);
  auVar138._0_2_ = auVar151._6_2_ - auVar130._0_2_;
  auVar138._2_2_ = auVar52._6_2_ - auVar130._2_2_;
  auVar138._4_2_ = auVar107._6_2_ - auVar130._4_2_;
  auVar138._6_2_ = auVar83._6_2_ - auVar130._6_2_;
  auVar138._8_2_ = auVar125._6_2_ - auVar130._8_2_;
  auVar138._10_2_ = auVar26._6_2_ - auVar130._10_2_;
  auVar138._12_2_ = auVar115._6_2_ - auVar130._12_2_;
  auVar138._14_2_ = auVar93._6_2_ - auVar130._14_2_;
  psraw(auVar138,1);
  auVar105 = psraw(auVar105,0xf);
  auVar109._0_2_ = auVar151._8_2_ - auVar105._0_2_;
  auVar109._2_2_ = auVar52._8_2_ - auVar105._2_2_;
  auVar109._4_2_ = auVar107._8_2_ - auVar105._4_2_;
  auVar109._6_2_ = auVar83._8_2_ - auVar105._6_2_;
  auVar109._8_2_ = auVar125._8_2_ - auVar105._8_2_;
  auVar109._10_2_ = auVar26._8_2_ - auVar105._10_2_;
  auVar109._12_2_ = auVar115._8_2_ - auVar105._12_2_;
  auVar109._14_2_ = auVar93._8_2_ - auVar105._14_2_;
  psraw(auVar109,1);
  auVar80 = psraw(auVar80,0xf);
  auVar85._0_2_ = auVar151._10_2_ - auVar80._0_2_;
  auVar85._2_2_ = auVar52._10_2_ - auVar80._2_2_;
  auVar85._4_2_ = auVar107._10_2_ - auVar80._4_2_;
  auVar85._6_2_ = auVar83._10_2_ - auVar80._6_2_;
  auVar85._8_2_ = auVar125._10_2_ - auVar80._8_2_;
  auVar85._10_2_ = auVar26._10_2_ - auVar80._10_2_;
  auVar85._12_2_ = auVar115._10_2_ - auVar80._12_2_;
  auVar85._14_2_ = auVar93._10_2_ - auVar80._14_2_;
  psraw(auVar85,1);
  auVar80 = psraw(auVar113,0xf);
  auVar110._0_12_ = ZEXT812(0);
  auVar110._12_4_ = 0;
  auVar117._0_2_ = auVar151._12_2_ - auVar80._0_2_;
  auVar117._2_2_ = auVar52._12_2_ - auVar80._2_2_;
  auVar117._4_2_ = auVar107._12_2_ - auVar80._4_2_;
  auVar117._6_2_ = auVar83._12_2_ - auVar80._6_2_;
  auVar117._8_2_ = auVar125._12_2_ - auVar80._8_2_;
  auVar117._10_2_ = auVar26._12_2_ - auVar80._10_2_;
  auVar117._12_2_ = auVar115._12_2_ - auVar80._12_2_;
  auVar117._14_2_ = auVar93._12_2_ - auVar80._14_2_;
  psraw(auVar117,1);
  auVar80 = psraw(auVar149,0xf);
  auVar154._0_2_ = auVar151._14_2_ - auVar80._0_2_;
  auVar154._2_2_ = auVar52._14_2_ - auVar80._2_2_;
  auVar154._4_2_ = auVar107._14_2_ - auVar80._4_2_;
  auVar154._6_2_ = auVar83._14_2_ - auVar80._6_2_;
  auVar154._8_2_ = auVar125._14_2_ - auVar80._8_2_;
  auVar154._10_2_ = auVar26._14_2_ - auVar80._10_2_;
  auVar154._12_2_ = auVar115._14_2_ - auVar80._12_2_;
  auVar154._14_2_ = auVar93._14_2_ - auVar80._14_2_;
  psraw(auVar154,1);
  if (param_5 == 0) {
    sVar21 = *param_12;
    sVar28 = param_12[1];
    sVar31 = param_12[2];
    sVar34 = param_12[3];
    sVar37 = param_12[4];
    sVar40 = param_12[5];
    sVar43 = param_12[6];
    sVar46 = param_12[7];
    auVar80 = psraw(auVar164,0xf);
    auVar105 = psraw(auVar162,0xf);
    auVar164 = auVar80 ^ auVar164;
    auVar72._0_2_ = auVar164._0_2_ - auVar80._0_2_;
    auVar72._2_2_ = auVar164._2_2_ - auVar80._2_2_;
    auVar72._4_2_ = auVar164._4_2_ - auVar80._4_2_;
    auVar72._6_2_ = auVar164._6_2_ - auVar80._6_2_;
    auVar72._8_2_ = auVar164._8_2_ - auVar80._8_2_;
    auVar72._10_2_ = auVar164._10_2_ - auVar80._10_2_;
    auVar72._12_2_ = auVar164._12_2_ - auVar80._12_2_;
    auVar72._14_2_ = auVar164._14_2_ - auVar80._14_2_;
    auVar162 = auVar105 ^ auVar162;
    auVar113 = paddsw(auVar72,*param_7);
    auVar56._0_2_ = auVar162._0_2_ - auVar105._0_2_;
    auVar56._2_2_ = auVar162._2_2_ - auVar105._2_2_;
    auVar56._4_2_ = auVar162._4_2_ - auVar105._4_2_;
    auVar56._6_2_ = auVar162._6_2_ - auVar105._6_2_;
    auVar56._8_2_ = auVar162._8_2_ - auVar105._8_2_;
    auVar56._10_2_ = auVar162._10_2_ - auVar105._10_2_;
    auVar56._12_2_ = auVar162._12_2_ - auVar105._12_2_;
    auVar56._14_2_ = auVar162._14_2_ - auVar105._14_2_;
    auVar130 = pmulhw(auVar113,*param_8);
    auVar128._8_8_ = SUB168(*param_7,8);
    auVar128._0_8_ = auVar128._8_8_;
    auVar113 = paddsw(auVar56,auVar128);
    auVar139._8_8_ = SUB168(*param_8,8);
    auVar139._0_8_ = auVar139._8_8_;
    auVar113 = pmulhw(auVar113,auVar139);
    auVar130 = auVar130 ^ auVar80;
    sVar60 = auVar130._0_2_ - auVar80._0_2_;
    sVar61 = auVar130._2_2_ - auVar80._2_2_;
    sVar62 = auVar130._4_2_ - auVar80._4_2_;
    sVar63 = auVar130._6_2_ - auVar80._6_2_;
    sVar64 = auVar130._8_2_ - auVar80._8_2_;
    sVar73 = auVar130._10_2_ - auVar80._10_2_;
    sVar74 = auVar130._12_2_ - auVar80._12_2_;
    sVar75 = auVar130._14_2_ - auVar80._14_2_;
    psVar8 = (short *)(param_10 + param_4 * -2);
    *psVar8 = sVar60;
    psVar8[1] = sVar61;
    psVar8[2] = sVar62;
    psVar8[3] = sVar63;
    psVar8[4] = sVar64;
    psVar8[5] = sVar73;
    psVar8[6] = sVar74;
    psVar8[7] = sVar75;
    auVar113 = auVar113 ^ auVar105;
    sVar60 = sVar60 * sVar21;
    sVar61 = sVar61 * sVar28;
    sVar62 = sVar62 * sVar31;
    sVar63 = sVar63 * sVar34;
    sVar64 = sVar64 * sVar37;
    sVar73 = sVar73 * sVar40;
    sVar74 = sVar74 * sVar43;
    sVar75 = sVar75 * sVar46;
    sVar21 = auVar113._0_2_ - auVar105._0_2_;
    sVar28 = auVar113._2_2_ - auVar105._2_2_;
    sVar31 = auVar113._4_2_ - auVar105._4_2_;
    sVar34 = auVar113._6_2_ - auVar105._6_2_;
    sVar49 = auVar113._8_2_ - auVar105._8_2_;
    sVar57 = auVar113._10_2_ - auVar105._10_2_;
    sVar58 = auVar113._12_2_ - auVar105._12_2_;
    sVar59 = auVar113._14_2_ - auVar105._14_2_;
    psVar8 = (short *)(param_10 + 0x10 + param_4 * -2);
    *psVar8 = sVar21;
    psVar8[1] = sVar28;
    psVar8[2] = sVar31;
    psVar8[3] = sVar34;
    psVar8[4] = sVar49;
    psVar8[5] = sVar57;
    psVar8[6] = sVar58;
    psVar8[7] = sVar59;
    sVar21 = sVar21 * sVar37;
    sVar28 = sVar28 * sVar40;
    sVar31 = sVar31 * sVar43;
    sVar34 = sVar34 * sVar46;
    sVar49 = sVar49 * sVar37;
    sVar57 = sVar57 * sVar40;
    sVar58 = sVar58 * sVar43;
    sVar59 = sVar59 * sVar46;
    psVar8 = (short *)(param_11 + param_4 * -2);
    *psVar8 = sVar60;
    psVar8[1] = sVar61;
    psVar8[2] = sVar62;
    psVar8[3] = sVar63;
    psVar8[4] = sVar64;
    psVar8[5] = sVar73;
    psVar8[6] = sVar74;
    psVar8[7] = sVar75;
    uVar23 = (ushort)(sVar60 != 0);
    uVar33 = (ushort)(sVar61 != 0);
    uVar39 = (ushort)(sVar62 != 0);
    uVar45 = (ushort)(sVar63 != 0);
    uVar38 = (ushort)(sVar64 != 0);
    uVar41 = (ushort)(sVar73 != 0);
    uVar44 = (ushort)(sVar74 != 0);
    uVar47 = (ushort)(sVar75 != 0);
    psVar8 = (short *)(param_11 + 0x10 + param_4 * -2);
    *psVar8 = sVar21;
    psVar8[1] = sVar28;
    psVar8[2] = sVar31;
    psVar8[3] = sVar34;
    psVar8[4] = sVar49;
    psVar8[5] = sVar57;
    psVar8[6] = sVar58;
    psVar8[7] = sVar59;
    psVar8 = (short *)(param_15 + param_4 * -2);
    uVar30 = (ushort)(sVar21 != 0);
    uVar36 = (ushort)(sVar28 != 0);
    uVar42 = (ushort)(sVar31 != 0);
    uVar48 = (ushort)(sVar34 != 0);
    uVar17 = (ushort)(sVar49 != 0);
    uVar18 = (ushort)(sVar57 != 0);
    uVar19 = (ushort)(sVar58 != 0);
    uVar20 = (ushort)(sVar59 != 0);
    psVar1 = (short *)(param_15 + 0x10 + param_4 * -2);
    uVar30 = *psVar1 + uVar30 & -uVar30;
    uVar36 = psVar1[1] + uVar36 & -uVar36;
    uVar42 = psVar1[2] + uVar42 & -uVar42;
    uVar48 = psVar1[3] + uVar48 & -uVar48;
    uVar17 = psVar1[4] + uVar17 & -uVar17;
    uVar18 = psVar1[5] + uVar18 & -uVar18;
    uVar19 = psVar1[6] + uVar19 & -uVar19;
    uVar20 = psVar1[7] + uVar20 & -uVar20;
    uVar23 = *psVar8 + uVar23 & -uVar23;
    uVar33 = psVar8[1] + uVar33 & -uVar33;
    uVar39 = psVar8[2] + uVar39 & -uVar39;
    uVar45 = psVar8[3] + uVar45 & -uVar45;
    uVar38 = psVar8[4] + uVar38 & -uVar38;
    uVar41 = psVar8[5] + uVar41 & -uVar41;
    uVar44 = psVar8[6] + uVar44 & -uVar44;
    uVar47 = psVar8[7] + uVar47 & -uVar47;
    auVar118._0_2_ =
         ((short)uVar23 < (short)uVar30) * uVar30 | ((short)uVar23 >= (short)uVar30) * uVar23;
    auVar118._2_2_ =
         ((short)uVar33 < (short)uVar36) * uVar36 | ((short)uVar33 >= (short)uVar36) * uVar33;
    auVar118._4_2_ =
         ((short)uVar39 < (short)uVar42) * uVar42 | ((short)uVar39 >= (short)uVar42) * uVar39;
    auVar118._6_2_ =
         ((short)uVar45 < (short)uVar48) * uVar48 | ((short)uVar45 >= (short)uVar48) * uVar45;
    auVar118._8_2_ =
         ((short)uVar38 < (short)uVar17) * uVar17 | ((short)uVar38 >= (short)uVar17) * uVar38;
    auVar118._10_2_ =
         ((short)uVar41 < (short)uVar18) * uVar18 | ((short)uVar41 >= (short)uVar18) * uVar41;
    auVar118._12_2_ =
         ((short)uVar44 < (short)uVar19) * uVar19 | ((short)uVar44 >= (short)uVar19) * uVar44;
    auVar118._14_2_ =
         ((short)uVar47 < (short)uVar20) * uVar20 | ((short)uVar47 >= (short)uVar20) * uVar47;
    if (lVar7 + 0x10 < 0) {
      lVar11 = (-(lVar7 + 0x10) - 1U >> 4) + 1;
      psVar8 = (short *)(param_11 + (lVar7 + 0x18) * 2);
      ppuVar10 = local_f8;
      auVar80 = auVar118;
      do {
        psVar1 = psVar8 + 0x10;
        auVar105 = psraw(*(undefined1 (*) [16])*ppuVar10,0xf);
        auVar113 = auVar105 ^ *(undefined1 (*) [16])*ppuVar10;
        auVar94._0_2_ = auVar113._0_2_ - auVar105._0_2_;
        auVar94._2_2_ = auVar113._2_2_ - auVar105._2_2_;
        auVar94._4_2_ = auVar113._4_2_ - auVar105._4_2_;
        auVar94._6_2_ = auVar113._6_2_ - auVar105._6_2_;
        auVar94._8_2_ = auVar113._8_2_ - auVar105._8_2_;
        auVar94._10_2_ = auVar113._10_2_ - auVar105._10_2_;
        auVar94._12_2_ = auVar113._12_2_ - auVar105._12_2_;
        auVar94._14_2_ = auVar113._14_2_ - auVar105._14_2_;
        auVar113 = psraw(*(undefined1 (*) [16])ppuVar10[1],0xf);
        auVar130 = paddsw(auVar94,auVar128);
        auVar149 = pmulhw(auVar130,auVar139);
        auVar130 = auVar113 ^ *(undefined1 (*) [16])ppuVar10[1];
        auVar86._0_2_ = auVar130._0_2_ - auVar113._0_2_;
        auVar86._2_2_ = auVar130._2_2_ - auVar113._2_2_;
        auVar86._4_2_ = auVar130._4_2_ - auVar113._4_2_;
        auVar86._6_2_ = auVar130._6_2_ - auVar113._6_2_;
        auVar86._8_2_ = auVar130._8_2_ - auVar113._8_2_;
        auVar86._10_2_ = auVar130._10_2_ - auVar113._10_2_;
        auVar86._12_2_ = auVar130._12_2_ - auVar113._12_2_;
        auVar86._14_2_ = auVar130._14_2_ - auVar113._14_2_;
        auVar130 = paddsw(auVar86,auVar128);
        auVar130 = pmulhw(auVar130,auVar139);
        auVar149 = auVar149 ^ auVar105;
        sVar60 = auVar149._0_2_ - auVar105._0_2_;
        sVar61 = auVar149._2_2_ - auVar105._2_2_;
        sVar62 = auVar149._4_2_ - auVar105._4_2_;
        sVar63 = auVar149._6_2_ - auVar105._6_2_;
        sVar64 = auVar149._8_2_ - auVar105._8_2_;
        sVar73 = auVar149._10_2_ - auVar105._10_2_;
        sVar74 = auVar149._12_2_ - auVar105._12_2_;
        sVar75 = auVar149._14_2_ - auVar105._14_2_;
        psVar2 = (short *)((param_10 - param_11) + -0x30 + (longlong)psVar1);
        *psVar2 = sVar60;
        psVar2[1] = sVar61;
        psVar2[2] = sVar62;
        psVar2[3] = sVar63;
        psVar2[4] = sVar64;
        psVar2[5] = sVar73;
        psVar2[6] = sVar74;
        psVar2[7] = sVar75;
        sVar60 = sVar60 * sVar37;
        sVar61 = sVar61 * sVar40;
        sVar62 = sVar62 * sVar43;
        sVar63 = sVar63 * sVar46;
        sVar64 = sVar64 * sVar37;
        sVar73 = sVar73 * sVar40;
        sVar74 = sVar74 * sVar43;
        sVar75 = sVar75 * sVar46;
        auVar130 = auVar130 ^ auVar113;
        sVar21 = auVar130._0_2_ - auVar113._0_2_;
        sVar28 = auVar130._2_2_ - auVar113._2_2_;
        sVar31 = auVar130._4_2_ - auVar113._4_2_;
        sVar34 = auVar130._6_2_ - auVar113._6_2_;
        sVar49 = auVar130._8_2_ - auVar113._8_2_;
        sVar57 = auVar130._10_2_ - auVar113._10_2_;
        sVar58 = auVar130._12_2_ - auVar113._12_2_;
        sVar59 = auVar130._14_2_ - auVar113._14_2_;
        psVar2 = (short *)((param_10 - param_11) + -0x20 + (longlong)psVar1);
        *psVar2 = sVar21;
        psVar2[1] = sVar28;
        psVar2[2] = sVar31;
        psVar2[3] = sVar34;
        psVar2[4] = sVar49;
        psVar2[5] = sVar57;
        psVar2[6] = sVar58;
        psVar2[7] = sVar59;
        sVar21 = sVar21 * sVar37;
        sVar28 = sVar28 * sVar40;
        sVar31 = sVar31 * sVar43;
        sVar34 = sVar34 * sVar46;
        sVar49 = sVar49 * sVar37;
        sVar57 = sVar57 * sVar40;
        sVar58 = sVar58 * sVar43;
        sVar59 = sVar59 * sVar46;
        psVar8[-8] = sVar60;
        psVar8[-7] = sVar61;
        psVar8[-6] = sVar62;
        psVar8[-5] = sVar63;
        psVar8[-4] = sVar64;
        psVar8[-3] = sVar73;
        psVar8[-2] = sVar74;
        psVar8[-1] = sVar75;
        uVar23 = (ushort)(sVar60 != 0);
        uVar33 = (ushort)(sVar61 != 0);
        uVar39 = (ushort)(sVar62 != 0);
        uVar45 = (ushort)(sVar63 != 0);
        uVar38 = (ushort)(sVar64 != 0);
        uVar41 = (ushort)(sVar73 != 0);
        uVar44 = (ushort)(sVar74 != 0);
        uVar47 = (ushort)(sVar75 != 0);
        *psVar8 = sVar21;
        psVar8[1] = sVar28;
        psVar8[2] = sVar31;
        psVar8[3] = sVar34;
        psVar8[4] = sVar49;
        psVar8[5] = sVar57;
        psVar8[6] = sVar58;
        psVar8[7] = sVar59;
        psVar8 = (short *)((param_15 - param_11) + -0x30 + (longlong)psVar1);
        uVar30 = (ushort)(sVar21 != 0);
        uVar36 = (ushort)(sVar28 != 0);
        uVar42 = (ushort)(sVar31 != 0);
        uVar48 = (ushort)(sVar34 != 0);
        uVar17 = (ushort)(sVar49 != 0);
        uVar18 = (ushort)(sVar57 != 0);
        uVar19 = (ushort)(sVar58 != 0);
        uVar20 = (ushort)(sVar59 != 0);
        psVar2 = (short *)((param_15 - param_11) + -0x20 + (longlong)psVar1);
        uVar22 = *psVar8 + uVar23 & -uVar23;
        uVar29 = psVar8[1] + uVar33 & -uVar33;
        uVar32 = psVar8[2] + uVar39 & -uVar39;
        uVar35 = psVar8[3] + uVar45 & -uVar45;
        uVar38 = psVar8[4] + uVar38 & -uVar38;
        uVar41 = psVar8[5] + uVar41 & -uVar41;
        uVar44 = psVar8[6] + uVar44 & -uVar44;
        uVar47 = psVar8[7] + uVar47 & -uVar47;
        uVar23 = *psVar2 + uVar30 & -uVar30;
        uVar30 = psVar2[1] + uVar36 & -uVar36;
        uVar33 = psVar2[2] + uVar42 & -uVar42;
        uVar36 = psVar2[3] + uVar48 & -uVar48;
        uVar39 = psVar2[4] + uVar17 & -uVar17;
        uVar42 = psVar2[5] + uVar18 & -uVar18;
        uVar45 = psVar2[6] + uVar19 & -uVar19;
        uVar48 = psVar2[7] + uVar20 & -uVar20;
        uVar23 = ((short)uVar22 < (short)uVar23) * uVar23 |
                 ((short)uVar22 >= (short)uVar23) * uVar22;
        uVar30 = ((short)uVar29 < (short)uVar30) * uVar30 |
                 ((short)uVar29 >= (short)uVar30) * uVar29;
        uVar33 = ((short)uVar32 < (short)uVar33) * uVar33 |
                 ((short)uVar32 >= (short)uVar33) * uVar32;
        uVar36 = ((short)uVar35 < (short)uVar36) * uVar36 |
                 ((short)uVar35 >= (short)uVar36) * uVar35;
        uVar39 = ((short)uVar38 < (short)uVar39) * uVar39 |
                 ((short)uVar38 >= (short)uVar39) * uVar38;
        uVar42 = ((short)uVar41 < (short)uVar42) * uVar42 |
                 ((short)uVar41 >= (short)uVar42) * uVar41;
        uVar45 = ((short)uVar44 < (short)uVar45) * uVar45 |
                 ((short)uVar44 >= (short)uVar45) * uVar44;
        uVar48 = ((short)uVar47 < (short)uVar48) * uVar48 |
                 ((short)uVar47 >= (short)uVar48) * uVar47;
        sVar21 = auVar80._0_2_;
        auVar118._0_2_ =
             (sVar21 < (short)uVar23) * uVar23 | (ushort)(sVar21 >= (short)uVar23) * sVar21;
        sVar21 = auVar80._2_2_;
        auVar118._2_2_ =
             (sVar21 < (short)uVar30) * uVar30 | (ushort)(sVar21 >= (short)uVar30) * sVar21;
        sVar21 = auVar80._4_2_;
        auVar118._4_2_ =
             (sVar21 < (short)uVar33) * uVar33 | (ushort)(sVar21 >= (short)uVar33) * sVar21;
        sVar21 = auVar80._6_2_;
        auVar118._6_2_ =
             (sVar21 < (short)uVar36) * uVar36 | (ushort)(sVar21 >= (short)uVar36) * sVar21;
        sVar21 = auVar80._8_2_;
        auVar118._8_2_ =
             (sVar21 < (short)uVar39) * uVar39 | (ushort)(sVar21 >= (short)uVar39) * sVar21;
        sVar21 = auVar80._10_2_;
        auVar118._10_2_ =
             (sVar21 < (short)uVar42) * uVar42 | (ushort)(sVar21 >= (short)uVar42) * sVar21;
        sVar21 = auVar80._12_2_;
        sVar28 = auVar80._14_2_;
        auVar118._12_2_ =
             (sVar21 < (short)uVar45) * uVar45 | (ushort)(sVar21 >= (short)uVar45) * sVar21;
        auVar118._14_2_ =
             (sVar28 < (short)uVar48) * uVar48 | (ushort)(sVar28 >= (short)uVar48) * sVar28;
        lVar11 = lVar11 + -1;
        psVar8 = psVar1;
        ppuVar10 = ppuVar10 + 2;
        auVar80 = auVar118;
      } while (lVar11 != 0);
    }
    auVar16._0_8_ = auVar118._8_8_;
    auVar16._8_4_ = auVar118._0_4_;
    auVar16._12_4_ = auVar118._0_4_;
    sVar21 = auVar118._8_2_;
    sVar37 = auVar118._0_2_;
    auVar119._0_2_ = (ushort)(sVar37 < sVar21) * sVar21 | (ushort)(sVar37 >= sVar21) * sVar37;
    sVar28 = auVar118._10_2_;
    sVar40 = auVar118._2_2_;
    auVar119._2_2_ = (ushort)(sVar40 < sVar28) * sVar28 | (ushort)(sVar40 >= sVar28) * sVar40;
    sVar31 = auVar118._12_2_;
    sVar34 = auVar118._4_2_;
    auVar119._4_2_ = (ushort)(sVar34 < sVar31) * sVar31 | (ushort)(sVar34 >= sVar31) * sVar34;
    sVar34 = auVar118._14_2_;
    sVar43 = auVar118._6_2_;
    auVar119._6_2_ = (ushort)(sVar43 < sVar34) * sVar34 | (ushort)(sVar43 >= sVar34) * sVar43;
    auVar119._8_2_ = (ushort)(sVar21 < sVar37) * sVar37 | (ushort)(sVar21 >= sVar37) * sVar21;
    auVar119._10_2_ = (ushort)(sVar28 < sVar40) * sVar40 | (ushort)(sVar28 >= sVar40) * sVar28;
    auVar119._12_2_ = (ushort)(sVar31 < sVar37) * sVar37 | (ushort)(sVar31 >= sVar37) * sVar31;
    auVar119._14_2_ = (ushort)(sVar34 < sVar40) * sVar40 | (ushort)(sVar34 >= sVar40) * sVar34;
    auVar80 = pshuflw(auVar16,auVar119,0xe);
    sVar21 = auVar80._0_2_;
    auVar120._0_2_ =
         (ushort)((short)auVar119._0_2_ < sVar21) * sVar21 |
         ((short)auVar119._0_2_ >= sVar21) * auVar119._0_2_;
    sVar21 = auVar80._2_2_;
    auVar120._2_2_ =
         (ushort)((short)auVar119._2_2_ < sVar21) * sVar21 |
         ((short)auVar119._2_2_ >= sVar21) * auVar119._2_2_;
    sVar21 = auVar80._4_2_;
    auVar120._4_2_ =
         (ushort)((short)auVar119._4_2_ < sVar21) * sVar21 |
         ((short)auVar119._4_2_ >= sVar21) * auVar119._4_2_;
    sVar21 = auVar80._6_2_;
    auVar120._6_2_ =
         (ushort)((short)auVar119._6_2_ < sVar21) * sVar21 |
         ((short)auVar119._6_2_ >= sVar21) * auVar119._6_2_;
    sVar21 = auVar80._8_2_;
    auVar120._8_2_ =
         (ushort)((short)auVar119._8_2_ < sVar21) * sVar21 |
         ((short)auVar119._8_2_ >= sVar21) * auVar119._8_2_;
    sVar21 = auVar80._10_2_;
    auVar120._10_2_ =
         (ushort)((short)auVar119._10_2_ < sVar21) * sVar21 |
         ((short)auVar119._10_2_ >= sVar21) * auVar119._10_2_;
    sVar21 = auVar80._12_2_;
    auVar120._12_2_ =
         (ushort)((short)auVar119._12_2_ < sVar21) * sVar21 |
         ((short)auVar119._12_2_ >= sVar21) * auVar119._12_2_;
    sVar21 = auVar80._14_2_;
    auVar120._14_2_ =
         (ushort)((short)auVar119._14_2_ < sVar21) * sVar21 |
         ((short)auVar119._14_2_ >= sVar21) * auVar119._14_2_;
    auVar80 = pshuflw(auVar80,auVar120,1);
    sVar21 = auVar80._2_2_;
    uVar23 = (ushort)((short)auVar120._2_2_ < sVar21) * sVar21 |
             ((short)auVar120._2_2_ >= sVar21) * auVar120._2_2_;
  }
  else {
    pauVar9 = (undefined1 (*) [16])(param_10 + (lVar7 + 8) * 2);
    do {
      lVar7 = lVar7 + 0x10;
      *(undefined1 (*) [16])((longlong)pauVar9 + (param_11 - param_10) + -0x10) = auVar110;
      *(undefined1 (*) [16])((param_11 - param_10) + (longlong)pauVar9) = auVar110;
      pauVar9[-1] = auVar110;
      *pauVar9 = auVar110;
      pauVar9 = pauVar9 + 2;
    } while (lVar7 < 0);
    uVar23 = 0;
  }
  *param_13 = uVar23;
  return;
}



// FUNCTION 1439e3d30 FUN_1439e3d30 body=2071 status=ok
// SIG undefined FUN_1439e3d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439e3d30(undefined1 (*param_1) [16],int param_2,undefined8 param_3,longlong param_4,
                  int param_5,undefined8 param_6,undefined1 (*param_7) [16],
                  undefined1 (*param_8) [16],undefined8 param_9,longlong param_10,longlong param_11,
                  undefined1 (*param_12) [16],ushort *param_13,undefined8 param_14,longlong param_15
                  )

{
  short *psVar1;
  short *psVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 **ppuVar9;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  ushort uVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  short sVar21;
  ushort uVar22;
  short sVar29;
  ushort uVar30;
  short sVar31;
  ushort uVar32;
  short sVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  ushort uVar39;
  ushort uVar40;
  short sVar41;
  ushort uVar42;
  ushort uVar43;
  short sVar44;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ushort uVar45;
  ushort uVar46;
  short sVar47;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  short sVar62;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  short sVar87;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  short sVar88;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined4 uVar102;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  undefined4 uVar109;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar115 [16];
  undefined4 uVar116;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  short sVar124;
  short sVar135;
  short sVar136;
  short sVar137;
  short sVar138;
  short sVar139;
  short sVar140;
  undefined1 auVar125 [16];
  short sVar141;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined4 uVar142;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  short sVar151;
  short sVar156;
  short sVar157;
  short sVar158;
  short sVar159;
  short sVar160;
  short sVar161;
  undefined1 auVar152 [16];
  short sVar162;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  short sVar163;
  short sVar166;
  short sVar167;
  short sVar168;
  short sVar169;
  short sVar170;
  short sVar171;
  undefined1 auVar164 [16];
  short sVar172;
  undefined1 auVar165 [16];
  short sVar173;
  short sVar176;
  short sVar177;
  short sVar178;
  short sVar179;
  short sVar180;
  short sVar181;
  undefined1 auVar174 [16];
  short sVar182;
  undefined1 auVar175 [16];
  undefined1 auStack_198 [48];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  undefined1 *local_f8 [5];
  undefined1 *local_d0;
  ulonglong local_c8;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar103 [12];
  undefined1 auVar107 [16];
  undefined1 auVar110 [12];
  undefined1 auVar114 [16];
  undefined1 auVar117 [12];
  undefined1 auVar121 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar143 [12];
  undefined1 auVar147 [16];
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  auVar164 = psllw(*param_1,2);
  auVar152 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)param_2 * 2),2);
  auVar174 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 2) * 2),2);
  auVar125 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 3) * 2),2);
  auVar104 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 4) * 2),2);
  auVar80 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 5) * 2),2);
  auVar111 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 6) * 2),2);
  local_f8[0] = local_168;
  local_f8[1] = local_158;
  local_f8[2] = local_148;
  local_f8[3] = local_138;
  local_f8[4] = local_128;
  local_d0 = local_118;
  lVar7 = 2;
  auVar144 = psllw(*(undefined1 (*) [16])(*param_1 + (longlong)(param_2 * 7) * 2),2);
  do {
    sVar88 = auVar111._0_2_ + auVar152._0_2_;
    sVar94 = auVar111._2_2_ + auVar152._2_2_;
    sVar95 = auVar111._4_2_ + auVar152._4_2_;
    sVar96 = auVar111._6_2_ + auVar152._6_2_;
    sVar98 = auVar111._8_2_ + auVar152._8_2_;
    sVar99 = auVar111._10_2_ + auVar152._10_2_;
    sVar100 = auVar111._12_2_ + auVar152._12_2_;
    sVar101 = auVar111._14_2_ + auVar152._14_2_;
    sVar151 = auVar152._0_2_ - auVar111._0_2_;
    sVar156 = auVar152._2_2_ - auVar111._2_2_;
    sVar157 = auVar152._4_2_ - auVar111._4_2_;
    sVar158 = auVar152._6_2_ - auVar111._6_2_;
    sVar159 = auVar152._8_2_ - auVar111._8_2_;
    sVar160 = auVar152._10_2_ - auVar111._10_2_;
    sVar161 = auVar152._12_2_ - auVar111._12_2_;
    sVar162 = auVar152._14_2_ - auVar111._14_2_;
    sVar47 = auVar104._0_2_ + auVar125._0_2_;
    sVar55 = auVar104._2_2_ + auVar125._2_2_;
    sVar56 = auVar104._4_2_ + auVar125._4_2_;
    sVar57 = auVar104._6_2_ + auVar125._6_2_;
    sVar58 = auVar104._8_2_ + auVar125._8_2_;
    sVar59 = auVar104._10_2_ + auVar125._10_2_;
    sVar60 = auVar104._12_2_ + auVar125._12_2_;
    sVar61 = auVar104._14_2_ + auVar125._14_2_;
    sVar124 = auVar125._0_2_ - auVar104._0_2_;
    sVar135 = auVar125._2_2_ - auVar104._2_2_;
    sVar136 = auVar125._4_2_ - auVar104._4_2_;
    sVar137 = auVar125._6_2_ - auVar104._6_2_;
    sVar138 = auVar125._8_2_ - auVar104._8_2_;
    sVar139 = auVar125._10_2_ - auVar104._10_2_;
    sVar140 = auVar125._12_2_ - auVar104._12_2_;
    sVar141 = auVar125._14_2_ - auVar104._14_2_;
    sVar21 = auVar80._0_2_ + auVar174._0_2_;
    sVar29 = auVar80._2_2_ + auVar174._2_2_;
    sVar31 = auVar80._4_2_ + auVar174._4_2_;
    sVar33 = auVar80._6_2_ + auVar174._6_2_;
    sVar35 = auVar80._8_2_ + auVar174._8_2_;
    sVar38 = auVar80._10_2_ + auVar174._10_2_;
    sVar41 = auVar80._12_2_ + auVar174._12_2_;
    sVar44 = auVar80._14_2_ + auVar174._14_2_;
    sVar173 = auVar174._0_2_ - auVar80._0_2_;
    sVar176 = auVar174._2_2_ - auVar80._2_2_;
    sVar177 = auVar174._4_2_ - auVar80._4_2_;
    sVar178 = auVar174._6_2_ - auVar80._6_2_;
    sVar179 = auVar174._8_2_ - auVar80._8_2_;
    sVar180 = auVar174._10_2_ - auVar80._10_2_;
    sVar181 = auVar174._12_2_ - auVar80._12_2_;
    sVar182 = auVar174._14_2_ - auVar80._14_2_;
    sVar62 = auVar144._0_2_ + auVar164._0_2_;
    sVar73 = auVar144._2_2_ + auVar164._2_2_;
    sVar74 = auVar144._4_2_ + auVar164._4_2_;
    sVar75 = auVar144._6_2_ + auVar164._6_2_;
    sVar76 = auVar144._8_2_ + auVar164._8_2_;
    sVar77 = auVar144._10_2_ + auVar164._10_2_;
    sVar78 = auVar144._12_2_ + auVar164._12_2_;
    sVar79 = auVar144._14_2_ + auVar164._14_2_;
    sVar87 = sVar57 + sVar75;
    sVar163 = auVar164._0_2_ - auVar144._0_2_;
    sVar166 = auVar164._2_2_ - auVar144._2_2_;
    sVar167 = auVar164._4_2_ - auVar144._4_2_;
    sVar168 = auVar164._6_2_ - auVar144._6_2_;
    sVar169 = auVar164._8_2_ - auVar144._8_2_;
    sVar170 = auVar164._10_2_ - auVar144._10_2_;
    sVar171 = auVar164._12_2_ - auVar144._12_2_;
    sVar172 = auVar164._14_2_ - auVar144._14_2_;
    sVar97 = sVar96 - sVar33;
    auVar118._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar33 + sVar96,sVar87),sVar31 + sVar95),
                   CONCAT22(sVar56 + sVar74,sVar87)) >> 0x10);
    auVar118._6_2_ = sVar29 + sVar94;
    auVar118._4_2_ = sVar55 + sVar73;
    auVar118._2_2_ = sVar21 + sVar88;
    auVar118._0_2_ = sVar47 + sVar62;
    auVar106._2_2_ = sVar35 + sVar98;
    auVar106._0_2_ = sVar58 + sVar76;
    auVar106._4_2_ = sVar59 + sVar77;
    auVar106._6_2_ = sVar38 + sVar99;
    auVar106._8_2_ = sVar60 + sVar78;
    auVar106._10_2_ = sVar41 + sVar100;
    auVar106._12_2_ = sVar61 + sVar79;
    auVar106._14_2_ = sVar44 + sVar101;
    auVar152 = pmaddwd(auVar118,_DAT_145cabf60);
    auVar80 = pmaddwd(auVar106,_DAT_145cabf60);
    auVar104 = pmaddwd(auVar106,_DAT_145cac080);
    auVar144 = pmaddwd(auVar118,_DAT_145cac080);
    auVar146._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar75 - sVar57,sVar97),sVar74 - sVar56),
                   CONCAT22(sVar95 - sVar31,sVar97)) >> 0x10);
    auVar146._6_2_ = sVar73 - sVar55;
    auVar146._4_2_ = sVar94 - sVar29;
    auVar146._2_2_ = sVar62 - sVar47;
    auVar146._0_2_ = sVar88 - sVar21;
    auVar120._2_2_ = sVar76 - sVar58;
    auVar120._0_2_ = sVar98 - sVar35;
    auVar120._4_2_ = sVar99 - sVar38;
    auVar120._6_2_ = sVar77 - sVar59;
    auVar120._8_2_ = sVar100 - sVar41;
    auVar120._10_2_ = sVar78 - sVar60;
    auVar120._12_2_ = sVar101 - sVar44;
    auVar120._14_2_ = sVar79 - sVar61;
    auVar111 = pmaddwd(auVar146,_DAT_145cabfe0);
    auVar125 = pmaddwd(auVar146,_DAT_145cabee0);
    auVar26._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar26._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar26._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar26._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar113._0_4_ = auVar104._0_4_ + 0x2000 >> 0xe;
    auVar113._4_4_ = auVar104._4_4_ + 0x2000 >> 0xe;
    auVar113._8_4_ = auVar104._8_4_ + 0x2000 >> 0xe;
    auVar113._12_4_ = auVar104._12_4_ + 0x2000 >> 0xe;
    auVar145._0_4_ = auVar152._0_4_ + 0x2000 >> 0xe;
    auVar145._4_4_ = auVar152._4_4_ + 0x2000 >> 0xe;
    auVar145._8_4_ = auVar152._8_4_ + 0x2000 >> 0xe;
    auVar145._12_4_ = auVar152._12_4_ + 0x2000 >> 0xe;
    auVar146 = packssdw(auVar145,auVar26);
    auVar105._0_4_ = auVar111._0_4_ + 0x2000 >> 0xe;
    auVar105._4_4_ = auVar111._4_4_ + 0x2000 >> 0xe;
    auVar105._8_4_ = auVar111._8_4_ + 0x2000 >> 0xe;
    auVar105._12_4_ = auVar111._12_4_ + 0x2000 >> 0xe;
    auVar80 = pmaddwd(auVar120,_DAT_145cabfe0);
    auVar104 = pmaddwd(auVar120,_DAT_145cabee0);
    auVar119._0_4_ = auVar144._0_4_ + 0x2000 >> 0xe;
    auVar119._4_4_ = auVar144._4_4_ + 0x2000 >> 0xe;
    auVar119._8_4_ = auVar144._8_4_ + 0x2000 >> 0xe;
    auVar119._12_4_ = auVar144._12_4_ + 0x2000 >> 0xe;
    auVar120 = packssdw(auVar119,auVar113);
    auVar112._0_4_ = auVar125._0_4_ + 0x2000 >> 0xe;
    auVar112._4_4_ = auVar125._4_4_ + 0x2000 >> 0xe;
    auVar112._8_4_ = auVar125._8_4_ + 0x2000 >> 0xe;
    auVar112._12_4_ = auVar125._12_4_ + 0x2000 >> 0xe;
    auVar49._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar49._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar49._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar49._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar106 = packssdw(auVar105,auVar49);
    auVar65._0_2_ = sVar151 - sVar173;
    auVar65._2_2_ = sVar156 - sVar176;
    auVar65._4_2_ = sVar157 - sVar177;
    auVar65._6_2_ = sVar158 - sVar178;
    auVar65._8_2_ = sVar159 - sVar179;
    auVar65._10_2_ = sVar160 - sVar180;
    auVar65._12_2_ = sVar161 - sVar181;
    auVar65._14_2_ = sVar162 - sVar182;
    auVar89._0_4_ = auVar104._0_4_ + 0x2000 >> 0xe;
    auVar89._4_4_ = auVar104._4_4_ + 0x2000 >> 0xe;
    auVar89._8_4_ = auVar104._8_4_ + 0x2000 >> 0xe;
    auVar89._12_4_ = auVar104._12_4_ + 0x2000 >> 0xe;
    auVar80 = pmulhrsw(auVar65,_DAT_145cb64d0);
    auVar153._0_2_ = sVar151 + sVar173;
    auVar153._2_2_ = sVar156 + sVar176;
    auVar153._4_2_ = sVar157 + sVar177;
    auVar153._6_2_ = sVar158 + sVar178;
    auVar153._8_2_ = sVar159 + sVar179;
    auVar153._10_2_ = sVar160 + sVar180;
    auVar153._12_2_ = sVar161 + sVar181;
    auVar153._14_2_ = sVar162 + sVar182;
    auVar104 = pmulhrsw(auVar153,_DAT_145cb64d0);
    auVar113 = packssdw(auVar112,auVar89);
    sVar21 = auVar80._6_2_ + sVar137;
    sVar137 = sVar137 - auVar80._6_2_;
    auVar63._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(sVar168 - auVar104._6_2_,sVar137),sVar167 - auVar104._4_2_),
                   CONCAT22(sVar136 - auVar80._4_2_,sVar137)) >> 0x10);
    auVar63._6_2_ = sVar166 - auVar104._2_2_;
    auVar63._4_2_ = sVar135 - auVar80._2_2_;
    auVar63._2_2_ = sVar163 - auVar104._0_2_;
    auVar63._0_2_ = sVar124 - auVar80._0_2_;
    auVar126._2_2_ = sVar169 - auVar104._8_2_;
    auVar126._0_2_ = sVar138 - auVar80._8_2_;
    auVar126._4_2_ = sVar139 - auVar80._10_2_;
    auVar126._6_2_ = sVar170 - auVar104._10_2_;
    auVar126._8_2_ = sVar140 - auVar80._12_2_;
    auVar126._10_2_ = sVar171 - auVar104._12_2_;
    auVar126._12_2_ = sVar141 - auVar80._14_2_;
    auVar126._14_2_ = sVar172 - auVar104._14_2_;
    auVar81._8_8_ =
         (undefined8)
         (CONCAT64(CONCAT42(CONCAT22(auVar104._6_2_ + sVar168,sVar21),auVar104._4_2_ + sVar167),
                   CONCAT22(auVar80._4_2_ + sVar136,sVar21)) >> 0x10);
    auVar81._6_2_ = auVar104._2_2_ + sVar166;
    auVar81._4_2_ = auVar80._2_2_ + sVar135;
    auVar81._2_2_ = auVar104._0_2_ + sVar163;
    auVar81._0_2_ = auVar80._0_2_ + sVar124;
    auVar23._2_2_ = auVar104._8_2_ + sVar169;
    auVar23._0_2_ = auVar80._8_2_ + sVar138;
    auVar23._4_2_ = auVar80._10_2_ + sVar139;
    auVar23._6_2_ = auVar104._10_2_ + sVar170;
    auVar23._8_2_ = auVar80._12_2_ + sVar140;
    auVar23._10_2_ = auVar104._12_2_ + sVar171;
    auVar23._12_2_ = auVar80._14_2_ + sVar141;
    auVar23._14_2_ = auVar104._14_2_ + sVar172;
    auVar104 = pmaddwd(auVar81,_DAT_145cac020);
    auVar80 = pmaddwd(auVar23,_DAT_145cac020);
    auVar48._0_4_ = auVar104._0_4_ + 0x2000 >> 0xe;
    auVar48._4_4_ = auVar104._4_4_ + 0x2000 >> 0xe;
    auVar48._8_4_ = auVar104._8_4_ + 0x2000 >> 0xe;
    auVar48._12_4_ = auVar104._12_4_ + 0x2000 >> 0xe;
    auVar83._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar83._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar83._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar83._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar104 = pmaddwd(auVar23,_DAT_145cabea0);
    auVar111 = pmaddwd(auVar81,_DAT_145cabea0);
    auVar49 = packssdw(auVar48,auVar83);
    auVar125 = pmaddwd(auVar126,_DAT_145cabfa0);
    auVar80 = pmaddwd(auVar126,_DAT_145cabf20);
    auVar24._0_4_ = auVar104._0_4_ + 0x2000 >> 0xe;
    auVar24._4_4_ = auVar104._4_4_ + 0x2000 >> 0xe;
    auVar24._8_4_ = auVar104._8_4_ + 0x2000 >> 0xe;
    auVar24._12_4_ = auVar104._12_4_ + 0x2000 >> 0xe;
    auVar82._0_4_ = auVar111._0_4_ + 0x2000 >> 0xe;
    auVar82._4_4_ = auVar111._4_4_ + 0x2000 >> 0xe;
    auVar82._8_4_ = auVar111._8_4_ + 0x2000 >> 0xe;
    auVar82._12_4_ = auVar111._12_4_ + 0x2000 >> 0xe;
    auVar83 = packssdw(auVar82,auVar24);
    auVar111 = pmaddwd(auVar63,_DAT_145cabfa0);
    auVar104 = pmaddwd(auVar63,_DAT_145cabf20);
    auVar127._0_4_ = auVar125._0_4_ + 0x2000 >> 0xe;
    auVar127._4_4_ = auVar125._4_4_ + 0x2000 >> 0xe;
    auVar127._8_4_ = auVar125._8_4_ + 0x2000 >> 0xe;
    auVar127._12_4_ = auVar125._12_4_ + 0x2000 >> 0xe;
    auVar10._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
    auVar10._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
    auVar10._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
    auVar10._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
    auVar64._0_4_ = auVar111._0_4_ + 0x2000 >> 0xe;
    auVar64._4_4_ = auVar111._4_4_ + 0x2000 >> 0xe;
    auVar64._8_4_ = auVar111._8_4_ + 0x2000 >> 0xe;
    auVar64._12_4_ = auVar111._12_4_ + 0x2000 >> 0xe;
    auVar65 = packssdw(auVar64,auVar127);
    auVar131._0_12_ = auVar146._0_12_;
    auVar131._12_2_ = auVar146._6_2_;
    auVar131._14_2_ = auVar49._6_2_;
    auVar130._12_4_ = auVar131._12_4_;
    auVar130._0_10_ = auVar146._0_10_;
    auVar130._10_2_ = auVar49._4_2_;
    auVar129._10_6_ = auVar130._10_6_;
    auVar129._0_8_ = auVar146._0_8_;
    auVar129._8_2_ = auVar146._4_2_;
    auVar3._4_8_ = auVar129._8_8_;
    auVar3._2_2_ = auVar49._2_2_;
    auVar3._0_2_ = auVar146._2_2_;
    auVar128._0_4_ = CONCAT22(auVar49._0_2_,auVar146._0_2_);
    auVar128._4_12_ = auVar3;
    uVar142 = CONCAT22(auVar49._8_2_,auVar146._8_2_);
    auVar143._0_8_ = CONCAT26(auVar49._10_2_,CONCAT24(auVar146._10_2_,uVar142));
    auVar143._8_2_ = auVar146._12_2_;
    auVar143._10_2_ = auVar49._12_2_;
    auVar147._12_2_ = auVar146._14_2_;
    auVar147._0_12_ = auVar143;
    auVar147._14_2_ = auVar49._14_2_;
    uVar109 = CONCAT22(auVar83._8_2_,auVar113._8_2_);
    auVar110._0_8_ = CONCAT26(auVar83._10_2_,CONCAT24(auVar113._10_2_,uVar109));
    auVar110._8_2_ = auVar113._12_2_;
    auVar110._10_2_ = auVar83._12_2_;
    auVar114._12_2_ = auVar113._14_2_;
    auVar114._0_12_ = auVar110;
    auVar114._14_2_ = auVar83._14_2_;
    auVar52._0_12_ = auVar113._0_12_;
    auVar52._12_2_ = auVar113._6_2_;
    auVar52._14_2_ = auVar83._6_2_;
    auVar51._12_4_ = auVar52._12_4_;
    auVar51._0_10_ = auVar113._0_10_;
    auVar51._10_2_ = auVar83._4_2_;
    auVar50._10_6_ = auVar51._10_6_;
    auVar50._0_8_ = auVar113._0_8_;
    auVar50._8_2_ = auVar113._4_2_;
    auVar4._4_8_ = auVar50._8_8_;
    auVar4._2_2_ = auVar83._2_2_;
    auVar4._0_2_ = auVar113._2_2_;
    auVar164._14_2_ = auVar83._0_2_;
    auVar164._12_2_ = auVar113._0_2_;
    auVar25._0_4_ = auVar104._0_4_ + 0x2000 >> 0xe;
    auVar25._4_4_ = auVar104._4_4_ + 0x2000 >> 0xe;
    auVar25._8_4_ = auVar104._8_4_ + 0x2000 >> 0xe;
    auVar25._12_4_ = auVar104._12_4_ + 0x2000 >> 0xe;
    auVar26 = packssdw(auVar25,auVar10);
    auVar13._0_12_ = auVar106._0_12_;
    auVar13._12_2_ = auVar106._6_2_;
    auVar13._14_2_ = auVar65._6_2_;
    auVar12._12_4_ = auVar13._12_4_;
    auVar12._0_10_ = auVar106._0_10_;
    auVar12._10_2_ = auVar65._4_2_;
    auVar11._10_6_ = auVar12._10_6_;
    auVar11._0_8_ = auVar106._0_8_;
    auVar11._8_2_ = auVar106._4_2_;
    auVar5._4_8_ = auVar11._8_8_;
    auVar5._2_2_ = auVar65._2_2_;
    auVar5._0_2_ = auVar106._2_2_;
    auVar164._6_2_ = auVar65._0_2_;
    auVar164._4_2_ = auVar106._0_2_;
    uVar102 = CONCAT22(auVar65._8_2_,auVar106._8_2_);
    auVar103._0_8_ = CONCAT26(auVar65._10_2_,CONCAT24(auVar106._10_2_,uVar102));
    auVar103._8_2_ = auVar106._12_2_;
    auVar103._10_2_ = auVar65._12_2_;
    auVar107._12_2_ = auVar106._14_2_;
    auVar107._0_12_ = auVar103;
    auVar107._14_2_ = auVar65._14_2_;
    auVar69._0_12_ = auVar120._0_12_;
    auVar69._12_2_ = auVar120._6_2_;
    auVar69._14_2_ = auVar26._6_2_;
    auVar68._12_4_ = auVar69._12_4_;
    auVar68._0_10_ = auVar120._0_10_;
    auVar68._10_2_ = auVar26._4_2_;
    auVar67._10_6_ = auVar68._10_6_;
    auVar67._0_8_ = auVar120._0_8_;
    auVar67._8_2_ = auVar120._4_2_;
    auVar6._4_8_ = auVar67._8_8_;
    auVar6._2_2_ = auVar26._2_2_;
    auVar6._0_2_ = auVar120._2_2_;
    auVar66._0_4_ = CONCAT22(auVar26._0_2_,auVar120._0_2_);
    auVar66._4_12_ = auVar6;
    auVar154._0_8_ = auVar128._0_8_;
    auVar154._8_4_ = auVar3._0_4_;
    auVar154._12_4_ = auVar5._0_4_;
    auVar164._0_4_ = auVar128._0_4_;
    auVar132._0_8_ = CONCAT44(auVar11._8_4_,auVar129._8_4_);
    auVar132._8_4_ = auVar130._12_4_;
    auVar132._12_4_ = auVar12._12_4_;
    auVar148._0_8_ = CONCAT44(auVar103._8_4_,auVar143._8_4_);
    auVar148._8_4_ = auVar147._12_4_;
    auVar148._12_4_ = auVar107._12_4_;
    uVar116 = CONCAT22(auVar26._8_2_,auVar120._8_2_);
    auVar117._0_8_ = CONCAT26(auVar26._10_2_,CONCAT24(auVar120._10_2_,uVar116));
    auVar117._8_2_ = auVar120._12_2_;
    auVar117._10_2_ = auVar26._12_2_;
    auVar121._12_2_ = auVar120._14_2_;
    auVar121._0_12_ = auVar117;
    auVar121._14_2_ = auVar26._14_2_;
    auVar84._8_4_ = (int)((ulonglong)auVar143._0_8_ >> 0x20);
    auVar84._0_8_ = auVar143._0_8_;
    auVar84._12_4_ = (int)((ulonglong)auVar103._0_8_ >> 0x20);
    auVar104._4_4_ = uVar102;
    auVar104._0_4_ = uVar142;
    auVar27._8_4_ = (int)((ulonglong)auVar117._0_8_ >> 0x20);
    auVar27._0_8_ = auVar117._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar110._0_8_ >> 0x20);
    auVar104._12_4_ = uVar109;
    auVar104._8_4_ = uVar116;
    auVar122._0_8_ = CONCAT44(auVar110._8_4_,auVar117._8_4_);
    auVar122._8_4_ = auVar121._12_4_;
    auVar122._12_4_ = auVar114._12_4_;
    auVar14._0_8_ = auVar66._0_8_;
    auVar14._8_4_ = auVar6._0_4_;
    auVar14._12_4_ = auVar4._0_4_;
    auVar164._8_4_ = auVar66._0_4_;
    auVar70._0_8_ = CONCAT44(auVar50._8_4_,auVar67._8_4_);
    auVar70._8_4_ = auVar68._12_4_;
    auVar70._12_4_ = auVar51._12_4_;
    auVar152._8_8_ = auVar14._8_8_;
    auVar152._0_8_ = auVar154._8_8_;
    auVar111._8_8_ = auVar122._0_8_;
    auVar111._0_8_ = auVar148._0_8_;
    auVar174._8_8_ = auVar70._0_8_;
    auVar174._0_8_ = auVar132._0_8_;
    auVar125._8_8_ = auVar70._8_8_;
    auVar125._0_8_ = auVar132._8_8_;
    auVar80._8_8_ = auVar27._8_8_;
    auVar80._0_8_ = auVar84._8_8_;
    auVar144._8_8_ = auVar122._8_8_;
    auVar144._0_8_ = auVar148._8_8_;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = param_4 * 2;
  param_15 = param_15 + lVar7;
  auVar164 = psraw(auVar164,0xf);
  param_10 = param_10 + lVar7;
  auVar165._0_2_ = auVar146._0_2_ - auVar164._0_2_;
  auVar165._2_2_ = auVar49._0_2_ - auVar164._2_2_;
  auVar165._4_2_ = auVar106._0_2_ - auVar164._4_2_;
  auVar165._6_2_ = auVar65._0_2_ - auVar164._6_2_;
  auVar165._8_2_ = auVar120._0_2_ - auVar164._8_2_;
  auVar165._10_2_ = auVar26._0_2_ - auVar164._10_2_;
  auVar165._12_2_ = auVar113._0_2_ - auVar164._12_2_;
  auVar165._14_2_ = auVar83._0_2_ - auVar164._14_2_;
  param_11 = param_11 + lVar7;
  auVar164 = psraw(auVar165,1);
  auVar152 = psraw(auVar152,0xf);
  lVar7 = -param_4;
  auVar155._0_2_ = auVar146._2_2_ - auVar152._0_2_;
  auVar155._2_2_ = auVar49._2_2_ - auVar152._2_2_;
  auVar155._4_2_ = auVar106._2_2_ - auVar152._4_2_;
  auVar155._6_2_ = auVar65._2_2_ - auVar152._6_2_;
  auVar155._8_2_ = auVar120._2_2_ - auVar152._8_2_;
  auVar155._10_2_ = auVar26._2_2_ - auVar152._10_2_;
  auVar155._12_2_ = auVar113._2_2_ - auVar152._12_2_;
  auVar155._14_2_ = auVar83._2_2_ - auVar152._14_2_;
  auVar152 = psraw(auVar174,0xf);
  auVar175._0_2_ = auVar146._4_2_ - auVar152._0_2_;
  auVar175._2_2_ = auVar49._4_2_ - auVar152._2_2_;
  auVar175._4_2_ = auVar106._4_2_ - auVar152._4_2_;
  auVar175._6_2_ = auVar65._4_2_ - auVar152._6_2_;
  auVar175._8_2_ = auVar120._4_2_ - auVar152._8_2_;
  auVar175._10_2_ = auVar26._4_2_ - auVar152._10_2_;
  auVar175._12_2_ = auVar113._4_2_ - auVar152._12_2_;
  auVar175._14_2_ = auVar83._4_2_ - auVar152._14_2_;
  auVar125 = psraw(auVar125,0xf);
  auVar133._0_2_ = auVar146._6_2_ - auVar125._0_2_;
  auVar133._2_2_ = auVar49._6_2_ - auVar125._2_2_;
  auVar133._4_2_ = auVar106._6_2_ - auVar125._4_2_;
  auVar133._6_2_ = auVar65._6_2_ - auVar125._6_2_;
  auVar133._8_2_ = auVar120._6_2_ - auVar125._8_2_;
  auVar133._10_2_ = auVar26._6_2_ - auVar125._10_2_;
  auVar133._12_2_ = auVar113._6_2_ - auVar125._12_2_;
  auVar133._14_2_ = auVar83._6_2_ - auVar125._14_2_;
  auVar104 = psraw(auVar104,0xf);
  auVar108._0_2_ = auVar146._8_2_ - auVar104._0_2_;
  auVar108._2_2_ = auVar49._8_2_ - auVar104._2_2_;
  auVar108._4_2_ = auVar106._8_2_ - auVar104._4_2_;
  auVar108._6_2_ = auVar65._8_2_ - auVar104._6_2_;
  auVar108._8_2_ = auVar120._8_2_ - auVar104._8_2_;
  auVar108._10_2_ = auVar26._8_2_ - auVar104._10_2_;
  auVar108._12_2_ = auVar113._8_2_ - auVar104._12_2_;
  auVar108._14_2_ = auVar83._8_2_ - auVar104._14_2_;
  auVar80 = psraw(auVar80,0xf);
  auVar85._0_2_ = auVar146._10_2_ - auVar80._0_2_;
  auVar85._2_2_ = auVar49._10_2_ - auVar80._2_2_;
  auVar85._4_2_ = auVar106._10_2_ - auVar80._4_2_;
  auVar85._6_2_ = auVar65._10_2_ - auVar80._6_2_;
  auVar85._8_2_ = auVar120._10_2_ - auVar80._8_2_;
  auVar85._10_2_ = auVar26._10_2_ - auVar80._10_2_;
  auVar85._12_2_ = auVar113._10_2_ - auVar80._12_2_;
  auVar85._14_2_ = auVar83._10_2_ - auVar80._14_2_;
  auVar80 = psraw(auVar111,0xf);
  auVar115._0_2_ = auVar146._12_2_ - auVar80._0_2_;
  auVar115._2_2_ = auVar49._12_2_ - auVar80._2_2_;
  auVar115._4_2_ = auVar106._12_2_ - auVar80._4_2_;
  auVar115._6_2_ = auVar65._12_2_ - auVar80._6_2_;
  auVar115._8_2_ = auVar120._12_2_ - auVar80._8_2_;
  auVar115._10_2_ = auVar26._12_2_ - auVar80._10_2_;
  auVar115._12_2_ = auVar113._12_2_ - auVar80._12_2_;
  auVar115._14_2_ = auVar83._12_2_ - auVar80._14_2_;
  psraw(auVar85,1);
  auVar80 = psraw(auVar144,0xf);
  auVar149._0_2_ = auVar146._14_2_ - auVar80._0_2_;
  auVar149._2_2_ = auVar49._14_2_ - auVar80._2_2_;
  auVar149._4_2_ = auVar106._14_2_ - auVar80._4_2_;
  auVar149._6_2_ = auVar65._14_2_ - auVar80._6_2_;
  auVar149._8_2_ = auVar120._14_2_ - auVar80._8_2_;
  auVar149._10_2_ = auVar26._14_2_ - auVar80._10_2_;
  auVar149._12_2_ = auVar113._14_2_ - auVar80._12_2_;
  auVar149._14_2_ = auVar83._14_2_ - auVar80._14_2_;
  auVar80 = psraw(auVar155,1);
  psraw(auVar149,1);
  psraw(auVar175,1);
  psraw(auVar133,1);
  psraw(auVar108,1);
  psraw(auVar115,1);
  auVar86._0_12_ = ZEXT812(0);
  auVar86._12_4_ = 0;
  if (param_5 == 0) {
    auVar104 = *param_12;
    auVar111 = psraw(auVar164,0xf);
    auVar125 = psraw(auVar80,0xf);
    auVar164 = auVar111 ^ auVar164;
    auVar71._0_2_ = auVar164._0_2_ - auVar111._0_2_;
    auVar71._2_2_ = auVar164._2_2_ - auVar111._2_2_;
    auVar71._4_2_ = auVar164._4_2_ - auVar111._4_2_;
    auVar71._6_2_ = auVar164._6_2_ - auVar111._6_2_;
    auVar71._8_2_ = auVar164._8_2_ - auVar111._8_2_;
    auVar71._10_2_ = auVar164._10_2_ - auVar111._10_2_;
    auVar71._12_2_ = auVar164._12_2_ - auVar111._12_2_;
    auVar71._14_2_ = auVar164._14_2_ - auVar111._14_2_;
    auVar80 = auVar125 ^ auVar80;
    auVar144 = paddsw(auVar71,*param_7);
    auVar53._0_2_ = auVar80._0_2_ - auVar125._0_2_;
    auVar53._2_2_ = auVar80._2_2_ - auVar125._2_2_;
    auVar53._4_2_ = auVar80._4_2_ - auVar125._4_2_;
    auVar53._6_2_ = auVar80._6_2_ - auVar125._6_2_;
    auVar53._8_2_ = auVar80._8_2_ - auVar125._8_2_;
    auVar53._10_2_ = auVar80._10_2_ - auVar125._10_2_;
    auVar53._12_2_ = auVar80._12_2_ - auVar125._12_2_;
    auVar53._14_2_ = auVar80._14_2_ - auVar125._14_2_;
    auVar144 = pmulhw(auVar144,*param_8);
    auVar134._8_8_ = SUB168(*param_7,8);
    auVar134._0_8_ = auVar134._8_8_;
    auVar80 = paddsw(auVar53,auVar134);
    auVar150._8_8_ = SUB168(*param_8,8);
    auVar150._0_8_ = auVar150._8_8_;
    auVar80 = pmulhw(auVar80,auVar150);
    auVar144 = auVar144 ^ auVar111;
    sVar47 = auVar144._0_2_ - auVar111._0_2_;
    sVar55 = auVar144._2_2_ - auVar111._2_2_;
    sVar56 = auVar144._4_2_ - auVar111._4_2_;
    sVar57 = auVar144._6_2_ - auVar111._6_2_;
    sVar58 = auVar144._8_2_ - auVar111._8_2_;
    sVar59 = auVar144._10_2_ - auVar111._10_2_;
    sVar60 = auVar144._12_2_ - auVar111._12_2_;
    sVar61 = auVar144._14_2_ - auVar111._14_2_;
    psVar1 = (short *)(param_10 + param_4 * -2);
    *psVar1 = sVar47;
    psVar1[1] = sVar55;
    psVar1[2] = sVar56;
    psVar1[3] = sVar57;
    psVar1[4] = sVar58;
    psVar1[5] = sVar59;
    psVar1[6] = sVar60;
    psVar1[7] = sVar61;
    auVar80 = auVar80 ^ auVar125;
    sVar47 = sVar47 * auVar104._0_2_;
    sVar55 = sVar55 * auVar104._2_2_;
    sVar56 = sVar56 * auVar104._4_2_;
    sVar57 = sVar57 * auVar104._6_2_;
    sVar62 = auVar104._8_2_;
    sVar58 = sVar58 * sVar62;
    sVar73 = auVar104._10_2_;
    sVar59 = sVar59 * sVar73;
    sVar74 = auVar104._12_2_;
    sVar60 = sVar60 * sVar74;
    sVar75 = auVar104._14_2_;
    sVar61 = sVar61 * sVar75;
    sVar21 = auVar80._0_2_ - auVar125._0_2_;
    sVar29 = auVar80._2_2_ - auVar125._2_2_;
    sVar31 = auVar80._4_2_ - auVar125._4_2_;
    sVar33 = auVar80._6_2_ - auVar125._6_2_;
    sVar35 = auVar80._8_2_ - auVar125._8_2_;
    sVar38 = auVar80._10_2_ - auVar125._10_2_;
    sVar41 = auVar80._12_2_ - auVar125._12_2_;
    sVar44 = auVar80._14_2_ - auVar125._14_2_;
    auVar123._8_8_ = auVar104._8_8_;
    auVar123._0_8_ = auVar123._8_8_;
    psVar1 = (short *)(param_10 + 0x10 + param_4 * -2);
    *psVar1 = sVar21;
    psVar1[1] = sVar29;
    psVar1[2] = sVar31;
    psVar1[3] = sVar33;
    psVar1[4] = sVar35;
    psVar1[5] = sVar38;
    psVar1[6] = sVar41;
    psVar1[7] = sVar44;
    sVar21 = sVar21 * sVar62;
    sVar29 = sVar29 * sVar73;
    sVar31 = sVar31 * sVar74;
    sVar33 = sVar33 * sVar75;
    sVar35 = sVar35 * sVar62;
    sVar38 = sVar38 * sVar73;
    sVar41 = sVar41 * sVar74;
    sVar44 = sVar44 * sVar75;
    auVar80 = psraw(auVar123,1);
    psVar1 = (short *)(param_11 + param_4 * -2);
    *psVar1 = sVar47;
    psVar1[1] = sVar55;
    psVar1[2] = sVar56;
    psVar1[3] = sVar57;
    psVar1[4] = sVar58;
    psVar1[5] = sVar59;
    psVar1[6] = sVar60;
    psVar1[7] = sVar61;
    uVar22 = (ushort)(sVar47 != 0);
    uVar32 = (ushort)(sVar55 != 0);
    uVar37 = (ushort)(sVar56 != 0);
    uVar43 = (ushort)(sVar57 != 0);
    uVar36 = (ushort)(sVar58 != 0);
    uVar39 = (ushort)(sVar59 != 0);
    uVar42 = (ushort)(sVar60 != 0);
    uVar45 = (ushort)(sVar61 != 0);
    psVar1 = (short *)(param_11 + 0x10 + param_4 * -2);
    *psVar1 = sVar21;
    psVar1[1] = sVar29;
    psVar1[2] = sVar31;
    psVar1[3] = sVar33;
    psVar1[4] = sVar35;
    psVar1[5] = sVar38;
    psVar1[6] = sVar41;
    psVar1[7] = sVar44;
    psVar1 = (short *)(param_15 + param_4 * -2);
    uVar30 = (ushort)(sVar21 != 0);
    uVar34 = (ushort)(sVar29 != 0);
    uVar40 = (ushort)(sVar31 != 0);
    uVar46 = (ushort)(sVar33 != 0);
    uVar17 = (ushort)(sVar35 != 0);
    uVar18 = (ushort)(sVar38 != 0);
    uVar19 = (ushort)(sVar41 != 0);
    uVar20 = (ushort)(sVar44 != 0);
    psVar2 = (short *)(param_15 + 0x10 + param_4 * -2);
    uVar30 = *psVar2 + uVar30 & -uVar30;
    uVar34 = psVar2[1] + uVar34 & -uVar34;
    uVar40 = psVar2[2] + uVar40 & -uVar40;
    uVar46 = psVar2[3] + uVar46 & -uVar46;
    uVar17 = psVar2[4] + uVar17 & -uVar17;
    uVar18 = psVar2[5] + uVar18 & -uVar18;
    uVar19 = psVar2[6] + uVar19 & -uVar19;
    uVar20 = psVar2[7] + uVar20 & -uVar20;
    uVar22 = *psVar1 + uVar22 & -uVar22;
    uVar32 = psVar1[1] + uVar32 & -uVar32;
    uVar37 = psVar1[2] + uVar37 & -uVar37;
    uVar43 = psVar1[3] + uVar43 & -uVar43;
    uVar36 = psVar1[4] + uVar36 & -uVar36;
    uVar39 = psVar1[5] + uVar39 & -uVar39;
    uVar42 = psVar1[6] + uVar42 & -uVar42;
    uVar45 = psVar1[7] + uVar45 & -uVar45;
    auVar90._0_2_ =
         ((short)uVar22 < (short)uVar30) * uVar30 | ((short)uVar22 >= (short)uVar30) * uVar22;
    auVar90._2_2_ =
         ((short)uVar32 < (short)uVar34) * uVar34 | ((short)uVar32 >= (short)uVar34) * uVar32;
    auVar90._4_2_ =
         ((short)uVar37 < (short)uVar40) * uVar40 | ((short)uVar37 >= (short)uVar40) * uVar37;
    auVar90._6_2_ =
         ((short)uVar43 < (short)uVar46) * uVar46 | ((short)uVar43 >= (short)uVar46) * uVar43;
    auVar90._8_2_ =
         ((short)uVar36 < (short)uVar17) * uVar17 | ((short)uVar36 >= (short)uVar17) * uVar36;
    auVar90._10_2_ =
         ((short)uVar39 < (short)uVar18) * uVar18 | ((short)uVar39 >= (short)uVar18) * uVar39;
    auVar90._12_2_ =
         ((short)uVar42 < (short)uVar19) * uVar19 | ((short)uVar42 >= (short)uVar19) * uVar42;
    auVar90._14_2_ =
         ((short)uVar45 < (short)uVar20) * uVar20 | ((short)uVar45 >= (short)uVar20) * uVar45;
    if (lVar7 + 0x10 < 0) {
      param_10 = param_10 - param_11;
      pauVar8 = (undefined1 (*) [16])(param_11 + (lVar7 + 0x18) * 2);
      ppuVar9 = local_f8;
      lVar7 = (-(lVar7 + 0x10) - 1U >> 4) + 1;
      do {
        auVar111 = psraw(*(undefined1 (*) [16])*ppuVar9,0xf);
        auVar104 = auVar111 ^ *(undefined1 (*) [16])*ppuVar9;
        auVar54._0_2_ = auVar104._0_2_ - auVar111._0_2_;
        auVar54._2_2_ = auVar104._2_2_ - auVar111._2_2_;
        auVar54._4_2_ = auVar104._4_2_ - auVar111._4_2_;
        auVar54._6_2_ = auVar104._6_2_ - auVar111._6_2_;
        auVar54._8_2_ = auVar104._8_2_ - auVar111._8_2_;
        auVar54._10_2_ = auVar104._10_2_ - auVar111._10_2_;
        auVar54._12_2_ = auVar104._12_2_ - auVar111._12_2_;
        auVar54._14_2_ = auVar104._14_2_ - auVar111._14_2_;
        auVar125 = psraw(*(undefined1 (*) [16])ppuVar9[1],0xf);
        auVar28._0_2_ = -(ushort)(auVar80._0_2_ < auVar54._0_2_);
        auVar28._2_2_ = -(ushort)(auVar80._2_2_ < auVar54._2_2_);
        auVar28._4_2_ = -(ushort)(auVar80._4_2_ < auVar54._4_2_);
        auVar28._6_2_ = -(ushort)(auVar80._6_2_ < auVar54._6_2_);
        auVar28._8_2_ = -(ushort)(auVar80._8_2_ < auVar54._8_2_);
        auVar28._10_2_ = -(ushort)(auVar80._10_2_ < auVar54._10_2_);
        auVar28._12_2_ = -(ushort)(auVar80._12_2_ < auVar54._12_2_);
        auVar28._14_2_ = -(ushort)(auVar80._14_2_ < auVar54._14_2_);
        auVar104 = auVar125 ^ *(undefined1 (*) [16])ppuVar9[1];
        auVar72._0_2_ = auVar104._0_2_ - auVar125._0_2_;
        auVar72._2_2_ = auVar104._2_2_ - auVar125._2_2_;
        auVar72._4_2_ = auVar104._4_2_ - auVar125._4_2_;
        auVar72._6_2_ = auVar104._6_2_ - auVar125._6_2_;
        auVar72._8_2_ = auVar104._8_2_ - auVar125._8_2_;
        auVar72._10_2_ = auVar104._10_2_ - auVar125._10_2_;
        auVar72._12_2_ = auVar104._12_2_ - auVar125._12_2_;
        auVar72._14_2_ = auVar104._14_2_ - auVar125._14_2_;
        auVar15._0_2_ = -(ushort)(auVar80._0_2_ < auVar72._0_2_);
        auVar15._2_2_ = -(ushort)(auVar80._2_2_ < auVar72._2_2_);
        auVar15._4_2_ = -(ushort)(auVar80._4_2_ < auVar72._4_2_);
        auVar15._6_2_ = -(ushort)(auVar80._6_2_ < auVar72._6_2_);
        auVar15._8_2_ = -(ushort)(auVar80._8_2_ < auVar72._8_2_);
        auVar15._10_2_ = -(ushort)(auVar80._10_2_ < auVar72._10_2_);
        auVar15._12_2_ = -(ushort)(auVar80._12_2_ < auVar72._12_2_);
        auVar15._14_2_ = -(ushort)(auVar80._14_2_ < auVar72._14_2_);
        if (((((((((((((((((SUB161(auVar15 >> 7,0) & 1) == 0 && (SUB161(auVar15 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar15 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar15 >> 0x27,0) & 1) == 0) && (SUB161(auVar15 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar15 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar15 >> 0x3f,0) & 1) == 0) && (SUB161(auVar15 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) && (SUB161(auVar15 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && (auVar15._14_2_ >> 7 & 1) == 0) &&
            (auVar15._14_2_ & 0x8000) == 0) &&
            ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) == 0 && (SUB161(auVar28 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar28 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar28 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar28 >> 0x27,0) & 1) == 0) && (SUB161(auVar28 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar28 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar28 >> 0x3f,0) & 1) == 0) && (SUB161(auVar28 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar28 >> 0x4f,0) & 1) == 0) && (SUB161(auVar28 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar28 >> 0x5f,0) & 1) == 0) && (SUB161(auVar28 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar28 >> 0x6f,0) & 1) == 0) && (auVar28._14_2_ >> 7 & 1) == 0) &&
            (auVar28._14_2_ & 0x8000) == 0)) {
          *(undefined1 (*) [16])(param_10 + -0x10 + (longlong)pauVar8) = auVar86;
          *(undefined1 (*) [16])(param_10 + (longlong)pauVar8) = auVar86;
          pauVar8[-1] = auVar86;
          *pauVar8 = auVar86;
        }
        else {
          auVar104 = paddsw(auVar54,auVar134);
          auVar144 = paddsw(auVar72,auVar134);
          auVar104 = pmulhw(auVar104,auVar150);
          auVar144 = pmulhw(auVar144,auVar150);
          auVar104 = auVar104 ^ auVar111;
          auVar144 = auVar144 ^ auVar125;
          sVar21 = auVar104._0_2_ - auVar111._0_2_;
          sVar29 = auVar104._2_2_ - auVar111._2_2_;
          sVar31 = auVar104._4_2_ - auVar111._4_2_;
          sVar33 = auVar104._6_2_ - auVar111._6_2_;
          sVar35 = auVar104._8_2_ - auVar111._8_2_;
          sVar38 = auVar104._10_2_ - auVar111._10_2_;
          sVar41 = auVar104._12_2_ - auVar111._12_2_;
          sVar44 = auVar104._14_2_ - auVar111._14_2_;
          psVar1 = (short *)(param_10 + -0x10 + (longlong)pauVar8);
          *psVar1 = sVar21;
          psVar1[1] = sVar29;
          psVar1[2] = sVar31;
          psVar1[3] = sVar33;
          psVar1[4] = sVar35;
          psVar1[5] = sVar38;
          psVar1[6] = sVar41;
          psVar1[7] = sVar44;
          sVar47 = auVar144._0_2_ - auVar125._0_2_;
          sVar55 = auVar144._2_2_ - auVar125._2_2_;
          sVar56 = auVar144._4_2_ - auVar125._4_2_;
          sVar57 = auVar144._6_2_ - auVar125._6_2_;
          sVar58 = auVar144._8_2_ - auVar125._8_2_;
          sVar59 = auVar144._10_2_ - auVar125._10_2_;
          sVar60 = auVar144._12_2_ - auVar125._12_2_;
          sVar61 = auVar144._14_2_ - auVar125._14_2_;
          psVar1 = (short *)(param_10 + (longlong)pauVar8);
          *psVar1 = sVar47;
          psVar1[1] = sVar55;
          psVar1[2] = sVar56;
          psVar1[3] = sVar57;
          psVar1[4] = sVar58;
          psVar1[5] = sVar59;
          psVar1[6] = sVar60;
          psVar1[7] = sVar61;
          sVar21 = sVar21 * sVar62;
          sVar29 = sVar29 * sVar73;
          sVar31 = sVar31 * sVar74;
          sVar33 = sVar33 * sVar75;
          sVar35 = sVar35 * sVar62;
          sVar38 = sVar38 * sVar73;
          sVar41 = sVar41 * sVar74;
          sVar44 = sVar44 * sVar75;
          sVar47 = sVar47 * sVar62;
          sVar55 = sVar55 * sVar73;
          sVar56 = sVar56 * sVar74;
          sVar57 = sVar57 * sVar75;
          sVar58 = sVar58 * sVar62;
          sVar59 = sVar59 * sVar73;
          sVar60 = sVar60 * sVar74;
          sVar61 = sVar61 * sVar75;
          *(short *)pauVar8[-1] = sVar21;
          *(short *)(pauVar8[-1] + 2) = sVar29;
          *(short *)(pauVar8[-1] + 4) = sVar31;
          *(short *)(pauVar8[-1] + 6) = sVar33;
          *(short *)(pauVar8[-1] + 8) = sVar35;
          *(short *)(pauVar8[-1] + 10) = sVar38;
          *(short *)(pauVar8[-1] + 0xc) = sVar41;
          *(short *)(pauVar8[-1] + 0xe) = sVar44;
          *(short *)*pauVar8 = sVar47;
          *(short *)(*pauVar8 + 2) = sVar55;
          *(short *)(*pauVar8 + 4) = sVar56;
          *(short *)(*pauVar8 + 6) = sVar57;
          *(short *)(*pauVar8 + 8) = sVar58;
          *(short *)(*pauVar8 + 10) = sVar59;
          *(short *)(*pauVar8 + 0xc) = sVar60;
          *(short *)(*pauVar8 + 0xe) = sVar61;
          uVar22 = (ushort)(sVar21 != 0);
          uVar32 = (ushort)(sVar29 != 0);
          uVar37 = (ushort)(sVar31 != 0);
          uVar43 = (ushort)(sVar33 != 0);
          uVar36 = (ushort)(sVar35 != 0);
          uVar39 = (ushort)(sVar38 != 0);
          uVar42 = (ushort)(sVar41 != 0);
          uVar45 = (ushort)(sVar44 != 0);
          psVar1 = (short *)((param_15 - param_11) + -0x10 + (longlong)pauVar8);
          psVar2 = (short *)((longlong)pauVar8 + (param_15 - param_11));
          uVar30 = (ushort)(sVar47 != 0);
          uVar34 = (ushort)(sVar55 != 0);
          uVar40 = (ushort)(sVar56 != 0);
          uVar46 = (ushort)(sVar57 != 0);
          uVar17 = (ushort)(sVar58 != 0);
          uVar18 = (ushort)(sVar59 != 0);
          uVar19 = (ushort)(sVar60 != 0);
          uVar20 = (ushort)(sVar61 != 0);
          uVar30 = *psVar2 + uVar30 & -uVar30;
          uVar34 = psVar2[1] + uVar34 & -uVar34;
          uVar40 = psVar2[2] + uVar40 & -uVar40;
          uVar46 = psVar2[3] + uVar46 & -uVar46;
          uVar17 = psVar2[4] + uVar17 & -uVar17;
          uVar18 = psVar2[5] + uVar18 & -uVar18;
          uVar19 = psVar2[6] + uVar19 & -uVar19;
          uVar20 = psVar2[7] + uVar20 & -uVar20;
          uVar22 = *psVar1 + uVar22 & -uVar22;
          uVar32 = psVar1[1] + uVar32 & -uVar32;
          uVar37 = psVar1[2] + uVar37 & -uVar37;
          uVar43 = psVar1[3] + uVar43 & -uVar43;
          uVar36 = psVar1[4] + uVar36 & -uVar36;
          uVar39 = psVar1[5] + uVar39 & -uVar39;
          uVar42 = psVar1[6] + uVar42 & -uVar42;
          uVar45 = psVar1[7] + uVar45 & -uVar45;
          uVar22 = ((short)uVar22 < (short)uVar30) * uVar30 |
                   ((short)uVar22 >= (short)uVar30) * uVar22;
          uVar30 = ((short)uVar32 < (short)uVar34) * uVar34 |
                   ((short)uVar32 >= (short)uVar34) * uVar32;
          uVar32 = ((short)uVar37 < (short)uVar40) * uVar40 |
                   ((short)uVar37 >= (short)uVar40) * uVar37;
          uVar34 = ((short)uVar43 < (short)uVar46) * uVar46 |
                   ((short)uVar43 >= (short)uVar46) * uVar43;
          uVar37 = ((short)uVar36 < (short)uVar17) * uVar17 |
                   ((short)uVar36 >= (short)uVar17) * uVar36;
          uVar40 = ((short)uVar39 < (short)uVar18) * uVar18 |
                   ((short)uVar39 >= (short)uVar18) * uVar39;
          uVar43 = ((short)uVar42 < (short)uVar19) * uVar19 |
                   ((short)uVar42 >= (short)uVar19) * uVar42;
          uVar46 = ((short)uVar45 < (short)uVar20) * uVar20 |
                   ((short)uVar45 >= (short)uVar20) * uVar45;
          sVar21 = auVar90._0_2_;
          auVar91._0_2_ =
               (sVar21 < (short)uVar22) * uVar22 | (ushort)(sVar21 >= (short)uVar22) * sVar21;
          sVar21 = auVar90._2_2_;
          auVar91._2_2_ =
               (sVar21 < (short)uVar30) * uVar30 | (ushort)(sVar21 >= (short)uVar30) * sVar21;
          sVar21 = auVar90._4_2_;
          auVar91._4_2_ =
               (sVar21 < (short)uVar32) * uVar32 | (ushort)(sVar21 >= (short)uVar32) * sVar21;
          sVar21 = auVar90._6_2_;
          auVar91._6_2_ =
               (sVar21 < (short)uVar34) * uVar34 | (ushort)(sVar21 >= (short)uVar34) * sVar21;
          sVar21 = auVar90._8_2_;
          auVar91._8_2_ =
               (sVar21 < (short)uVar37) * uVar37 | (ushort)(sVar21 >= (short)uVar37) * sVar21;
          sVar21 = auVar90._10_2_;
          auVar91._10_2_ =
               (sVar21 < (short)uVar40) * uVar40 | (ushort)(sVar21 >= (short)uVar40) * sVar21;
          sVar21 = auVar90._12_2_;
          sVar29 = auVar90._14_2_;
          auVar91._12_2_ =
               (sVar21 < (short)uVar43) * uVar43 | (ushort)(sVar21 >= (short)uVar43) * sVar21;
          auVar91._14_2_ =
               (sVar29 < (short)uVar46) * uVar46 | (ushort)(sVar29 >= (short)uVar46) * sVar29;
          auVar90 = auVar91;
        }
        pauVar8 = pauVar8 + 2;
        ppuVar9 = ppuVar9 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    auVar16._0_8_ = auVar90._8_8_;
    auVar16._8_4_ = auVar90._0_4_;
    auVar16._12_4_ = auVar90._0_4_;
    sVar21 = auVar90._8_2_;
    sVar35 = auVar90._0_2_;
    auVar92._0_2_ = (ushort)(sVar35 < sVar21) * sVar21 | (ushort)(sVar35 >= sVar21) * sVar35;
    sVar29 = auVar90._10_2_;
    sVar38 = auVar90._2_2_;
    auVar92._2_2_ = (ushort)(sVar38 < sVar29) * sVar29 | (ushort)(sVar38 >= sVar29) * sVar38;
    sVar31 = auVar90._12_2_;
    sVar33 = auVar90._4_2_;
    auVar92._4_2_ = (ushort)(sVar33 < sVar31) * sVar31 | (ushort)(sVar33 >= sVar31) * sVar33;
    sVar33 = auVar90._14_2_;
    sVar41 = auVar90._6_2_;
    auVar92._6_2_ = (ushort)(sVar41 < sVar33) * sVar33 | (ushort)(sVar41 >= sVar33) * sVar41;
    auVar92._8_2_ = (ushort)(sVar21 < sVar35) * sVar35 | (ushort)(sVar21 >= sVar35) * sVar21;
    auVar92._10_2_ = (ushort)(sVar29 < sVar38) * sVar38 | (ushort)(sVar29 >= sVar38) * sVar29;
    auVar92._12_2_ = (ushort)(sVar31 < sVar35) * sVar35 | (ushort)(sVar31 >= sVar35) * sVar31;
    auVar92._14_2_ = (ushort)(sVar33 < sVar38) * sVar38 | (ushort)(sVar33 >= sVar38) * sVar33;
    auVar80 = pshuflw(auVar16,auVar92,0xe);
    sVar21 = auVar80._0_2_;
    auVar93._0_2_ =
         (ushort)((short)auVar92._0_2_ < sVar21) * sVar21 |
         ((short)auVar92._0_2_ >= sVar21) * auVar92._0_2_;
    sVar21 = auVar80._2_2_;
    auVar93._2_2_ =
         (ushort)((short)auVar92._2_2_ < sVar21) * sVar21 |
         ((short)auVar92._2_2_ >= sVar21) * auVar92._2_2_;
    sVar21 = auVar80._4_2_;
    auVar93._4_2_ =
         (ushort)((short)auVar92._4_2_ < sVar21) * sVar21 |
         ((short)auVar92._4_2_ >= sVar21) * auVar92._4_2_;
    sVar21 = auVar80._6_2_;
    auVar93._6_2_ =
         (ushort)((short)auVar92._6_2_ < sVar21) * sVar21 |
         ((short)auVar92._6_2_ >= sVar21) * auVar92._6_2_;
    sVar21 = auVar80._8_2_;
    auVar93._8_2_ =
         (ushort)((short)auVar92._8_2_ < sVar21) * sVar21 |
         ((short)auVar92._8_2_ >= sVar21) * auVar92._8_2_;
    sVar21 = auVar80._10_2_;
    auVar93._10_2_ =
         (ushort)((short)auVar92._10_2_ < sVar21) * sVar21 |
         ((short)auVar92._10_2_ >= sVar21) * auVar92._10_2_;
    sVar21 = auVar80._12_2_;
    auVar93._12_2_ =
         (ushort)((short)auVar92._12_2_ < sVar21) * sVar21 |
         ((short)auVar92._12_2_ >= sVar21) * auVar92._12_2_;
    sVar21 = auVar80._14_2_;
    auVar93._14_2_ =
         (ushort)((short)auVar92._14_2_ < sVar21) * sVar21 |
         ((short)auVar92._14_2_ >= sVar21) * auVar92._14_2_;
    auVar80 = pshuflw(auVar80,auVar93,1);
    sVar21 = auVar80._2_2_;
    uVar22 = (ushort)((short)auVar93._2_2_ < sVar21) * sVar21 |
             ((short)auVar93._2_2_ >= sVar21) * auVar93._2_2_;
  }
  else {
    pauVar8 = (undefined1 (*) [16])(param_10 + (lVar7 + 8) * 2);
    do {
      lVar7 = lVar7 + 0x10;
      *(undefined1 (*) [16])((param_11 - param_10) + -0x10 + (longlong)pauVar8) = auVar86;
      *(undefined1 (*) [16])((param_11 - param_10) + (longlong)pauVar8) = auVar86;
      pauVar8[-1] = auVar86;
      *pauVar8 = auVar86;
      pauVar8 = pauVar8 + 2;
    } while (lVar7 < 0);
    uVar22 = 0;
  }
  *param_13 = uVar22;
  return;
}



// FUNCTION 1439e4550 FUN_1439e4550 body=771 status=ok
// SIG undefined FUN_1439e4550(void)

void FUN_1439e4550(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined8 param_7,
                  longlong param_8,longlong param_9,undefined1 (*param_10) [16],ushort *param_11,
                  undefined8 param_12,longlong param_13)

{
  short *psVar1;
  short *psVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 auVar5 [16];
  short sVar10;
  ushort uVar11;
  short sVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  ushort uVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  ushort uVar24;
  short sVar25;
  ushort uVar26;
  ushort uVar27;
  undefined1 auVar12 [16];
  short sVar28;
  ushort uVar29;
  ushort uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  short sVar34;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  short sVar44;
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  lVar4 = param_2 * 2;
  param_1 = param_1 + param_2 * 2;
  param_13 = param_13 + lVar4;
  param_8 = param_8 + lVar4;
  param_9 = param_9 + lVar4;
  lVar4 = -param_2;
  if (param_3 != 0) {
    pauVar3 = (undefined1 (*) [16])(param_8 + (lVar4 + 8) * 2);
    do {
      lVar4 = lVar4 + 0x10;
      *(undefined1 (*) [16])((param_9 - param_8) + -0x10 + (longlong)pauVar3) = ZEXT416(0);
      *(undefined1 (*) [16])((param_9 - param_8) + (longlong)pauVar3) = ZEXT416(0);
      pauVar3[-1] = ZEXT416(0);
      *pauVar3 = ZEXT416(0);
      pauVar3 = pauVar3 + 2;
    } while (lVar4 < 0);
    *param_11 = 0;
    return;
  }
  auVar12 = psraw(*(undefined1 (*) [16])(param_1 + param_2 * -2),0xf);
  auVar35 = auVar12 ^ *(undefined1 (*) [16])(param_1 + param_2 * -2);
  auVar37._0_2_ = auVar35._0_2_ - auVar12._0_2_;
  auVar37._2_2_ = auVar35._2_2_ - auVar12._2_2_;
  auVar37._4_2_ = auVar35._4_2_ - auVar12._4_2_;
  auVar37._6_2_ = auVar35._6_2_ - auVar12._6_2_;
  auVar37._8_2_ = auVar35._8_2_ - auVar12._8_2_;
  auVar37._10_2_ = auVar35._10_2_ - auVar12._10_2_;
  auVar37._12_2_ = auVar35._12_2_ - auVar12._12_2_;
  auVar37._14_2_ = auVar35._14_2_ - auVar12._14_2_;
  auVar32 = psraw(*(undefined1 (*) [16])(param_1 + 0x10 + param_2 * -2),0xf);
  auVar35 = paddsw(auVar37,*param_5);
  auVar53._8_8_ = SUB168(*param_5,8);
  auVar53._0_8_ = auVar53._8_8_;
  auVar36 = pmulhw(auVar35,*param_6);
  auVar54._8_8_ = SUB168(*param_6,8);
  auVar54._0_8_ = auVar54._8_8_;
  auVar35 = *param_10;
  auVar36 = auVar36 ^ auVar12;
  sVar34 = auVar36._0_2_ - auVar12._0_2_;
  sVar38 = auVar36._2_2_ - auVar12._2_2_;
  sVar39 = auVar36._4_2_ - auVar12._4_2_;
  sVar40 = auVar36._6_2_ - auVar12._6_2_;
  sVar41 = auVar36._8_2_ - auVar12._8_2_;
  sVar42 = auVar36._10_2_ - auVar12._10_2_;
  sVar43 = auVar36._12_2_ - auVar12._12_2_;
  sVar44 = auVar36._14_2_ - auVar12._14_2_;
  auVar12 = auVar32 ^ *(undefined1 (*) [16])(param_1 + 0x10 + param_2 * -2);
  psVar1 = (short *)(param_8 + param_2 * -2);
  *psVar1 = sVar34;
  psVar1[1] = sVar38;
  psVar1[2] = sVar39;
  psVar1[3] = sVar40;
  psVar1[4] = sVar41;
  psVar1[5] = sVar42;
  psVar1[6] = sVar43;
  psVar1[7] = sVar44;
  auVar36._0_2_ = auVar12._0_2_ - auVar32._0_2_;
  auVar36._2_2_ = auVar12._2_2_ - auVar32._2_2_;
  auVar36._4_2_ = auVar12._4_2_ - auVar32._4_2_;
  auVar36._6_2_ = auVar12._6_2_ - auVar32._6_2_;
  auVar36._8_2_ = auVar12._8_2_ - auVar32._8_2_;
  auVar36._10_2_ = auVar12._10_2_ - auVar32._10_2_;
  auVar36._12_2_ = auVar12._12_2_ - auVar32._12_2_;
  auVar36._14_2_ = auVar12._14_2_ - auVar32._14_2_;
  auVar12 = paddsw(auVar36,auVar53);
  sVar34 = sVar34 * auVar35._0_2_;
  sVar38 = sVar38 * auVar35._2_2_;
  sVar39 = sVar39 * auVar35._4_2_;
  sVar40 = sVar40 * auVar35._6_2_;
  sVar49 = auVar35._8_2_;
  sVar41 = sVar41 * sVar49;
  sVar50 = auVar35._10_2_;
  sVar42 = sVar42 * sVar50;
  sVar51 = auVar35._12_2_;
  sVar43 = sVar43 * sVar51;
  sVar52 = auVar35._14_2_;
  sVar44 = sVar44 * sVar52;
  auVar12 = pmulhw(auVar12,auVar54);
  auVar45._8_8_ = auVar35._8_8_;
  auVar45._0_8_ = auVar45._8_8_;
  auVar36 = psraw(auVar45,1);
  auVar12 = auVar12 ^ auVar32;
  sVar10 = auVar12._0_2_ - auVar32._0_2_;
  sVar13 = auVar12._2_2_ - auVar32._2_2_;
  sVar15 = auVar12._4_2_ - auVar32._4_2_;
  sVar17 = auVar12._6_2_ - auVar32._6_2_;
  sVar19 = auVar12._8_2_ - auVar32._8_2_;
  sVar22 = auVar12._10_2_ - auVar32._10_2_;
  sVar25 = auVar12._12_2_ - auVar32._12_2_;
  sVar28 = auVar12._14_2_ - auVar32._14_2_;
  psVar1 = (short *)(param_8 + 0x10 + param_2 * -2);
  *psVar1 = sVar10;
  psVar1[1] = sVar13;
  psVar1[2] = sVar15;
  psVar1[3] = sVar17;
  psVar1[4] = sVar19;
  psVar1[5] = sVar22;
  psVar1[6] = sVar25;
  psVar1[7] = sVar28;
  psVar1 = (short *)(param_9 + param_2 * -2);
  *psVar1 = sVar34;
  psVar1[1] = sVar38;
  psVar1[2] = sVar39;
  psVar1[3] = sVar40;
  psVar1[4] = sVar41;
  psVar1[5] = sVar42;
  psVar1[6] = sVar43;
  psVar1[7] = sVar44;
  sVar10 = sVar10 * sVar49;
  sVar13 = sVar13 * sVar50;
  sVar15 = sVar15 * sVar51;
  sVar17 = sVar17 * sVar52;
  sVar19 = sVar19 * sVar49;
  sVar22 = sVar22 * sVar50;
  sVar25 = sVar25 * sVar51;
  sVar28 = sVar28 * sVar52;
  uVar11 = (ushort)(sVar34 != 0);
  uVar16 = (ushort)(sVar38 != 0);
  uVar21 = (ushort)(sVar39 != 0);
  uVar27 = (ushort)(sVar40 != 0);
  uVar20 = (ushort)(sVar41 != 0);
  uVar23 = (ushort)(sVar42 != 0);
  uVar26 = (ushort)(sVar43 != 0);
  uVar29 = (ushort)(sVar44 != 0);
  psVar1 = (short *)(param_9 + 0x10 + param_2 * -2);
  *psVar1 = sVar10;
  psVar1[1] = sVar13;
  psVar1[2] = sVar15;
  psVar1[3] = sVar17;
  psVar1[4] = sVar19;
  psVar1[5] = sVar22;
  psVar1[6] = sVar25;
  psVar1[7] = sVar28;
  psVar1 = (short *)(param_13 + param_2 * -2);
  uVar14 = (ushort)(sVar10 != 0);
  uVar18 = (ushort)(sVar13 != 0);
  uVar24 = (ushort)(sVar15 != 0);
  uVar30 = (ushort)(sVar17 != 0);
  uVar6 = (ushort)(sVar19 != 0);
  uVar7 = (ushort)(sVar22 != 0);
  uVar8 = (ushort)(sVar25 != 0);
  uVar9 = (ushort)(sVar28 != 0);
  psVar2 = (short *)(param_13 + 0x10 + param_2 * -2);
  uVar14 = *psVar2 + uVar14 & -uVar14;
  uVar18 = psVar2[1] + uVar18 & -uVar18;
  uVar24 = psVar2[2] + uVar24 & -uVar24;
  uVar30 = psVar2[3] + uVar30 & -uVar30;
  uVar6 = psVar2[4] + uVar6 & -uVar6;
  uVar7 = psVar2[5] + uVar7 & -uVar7;
  uVar8 = psVar2[6] + uVar8 & -uVar8;
  uVar9 = psVar2[7] + uVar9 & -uVar9;
  uVar11 = *psVar1 + uVar11 & -uVar11;
  uVar16 = psVar1[1] + uVar16 & -uVar16;
  uVar21 = psVar1[2] + uVar21 & -uVar21;
  uVar27 = psVar1[3] + uVar27 & -uVar27;
  uVar20 = psVar1[4] + uVar20 & -uVar20;
  uVar23 = psVar1[5] + uVar23 & -uVar23;
  uVar26 = psVar1[6] + uVar26 & -uVar26;
  uVar29 = psVar1[7] + uVar29 & -uVar29;
  auVar35._0_2_ =
       ((short)uVar11 < (short)uVar14) * uVar14 | ((short)uVar11 >= (short)uVar14) * uVar11;
  auVar35._2_2_ =
       ((short)uVar16 < (short)uVar18) * uVar18 | ((short)uVar16 >= (short)uVar18) * uVar16;
  auVar35._4_2_ =
       ((short)uVar21 < (short)uVar24) * uVar24 | ((short)uVar21 >= (short)uVar24) * uVar21;
  auVar35._6_2_ =
       ((short)uVar27 < (short)uVar30) * uVar30 | ((short)uVar27 >= (short)uVar30) * uVar27;
  auVar35._8_2_ = ((short)uVar20 < (short)uVar6) * uVar6 | ((short)uVar20 >= (short)uVar6) * uVar20;
  auVar35._10_2_ = ((short)uVar23 < (short)uVar7) * uVar7 | ((short)uVar23 >= (short)uVar7) * uVar23
  ;
  auVar35._12_2_ = ((short)uVar26 < (short)uVar8) * uVar8 | ((short)uVar26 >= (short)uVar8) * uVar26
  ;
  auVar35._14_2_ = ((short)uVar29 < (short)uVar9) * uVar9 | ((short)uVar29 >= (short)uVar9) * uVar29
  ;
  if (lVar4 + 0x10 < 0) {
    pauVar3 = (undefined1 (*) [16])(param_8 + (lVar4 + 0x18) * 2);
    param_1 = param_1 - param_8;
    param_9 = param_9 - param_8;
    lVar4 = (-(lVar4 + 0x10) - 1U >> 4) + 1;
    do {
      auVar37 = psraw(*(undefined1 (*) [16])(param_1 + -0x10 + (longlong)pauVar3),0xf);
      auVar45 = psraw(*(undefined1 (*) [16])(param_1 + (longlong)pauVar3),0xf);
      auVar12 = auVar37 ^ *(undefined1 (*) [16])(param_1 + -0x10 + (longlong)pauVar3);
      auVar32 = auVar45 ^ *(undefined1 (*) [16])(param_1 + (longlong)pauVar3);
      auVar31._0_2_ = auVar12._0_2_ - auVar37._0_2_;
      auVar31._2_2_ = auVar12._2_2_ - auVar37._2_2_;
      auVar31._4_2_ = auVar12._4_2_ - auVar37._4_2_;
      auVar31._6_2_ = auVar12._6_2_ - auVar37._6_2_;
      auVar31._8_2_ = auVar12._8_2_ - auVar37._8_2_;
      auVar31._10_2_ = auVar12._10_2_ - auVar37._10_2_;
      auVar31._12_2_ = auVar12._12_2_ - auVar37._12_2_;
      auVar31._14_2_ = auVar12._14_2_ - auVar37._14_2_;
      auVar33._0_2_ = auVar32._0_2_ - auVar45._0_2_;
      auVar33._2_2_ = auVar32._2_2_ - auVar45._2_2_;
      auVar33._4_2_ = auVar32._4_2_ - auVar45._4_2_;
      auVar33._6_2_ = auVar32._6_2_ - auVar45._6_2_;
      auVar33._8_2_ = auVar32._8_2_ - auVar45._8_2_;
      auVar33._10_2_ = auVar32._10_2_ - auVar45._10_2_;
      auVar33._12_2_ = auVar32._12_2_ - auVar45._12_2_;
      auVar33._14_2_ = auVar32._14_2_ - auVar45._14_2_;
      auVar32._0_2_ = -(ushort)(auVar36._0_2_ < auVar31._0_2_);
      auVar32._2_2_ = -(ushort)(auVar36._2_2_ < auVar31._2_2_);
      auVar32._4_2_ = -(ushort)(auVar36._4_2_ < auVar31._4_2_);
      auVar32._6_2_ = -(ushort)(auVar36._6_2_ < auVar31._6_2_);
      auVar32._8_2_ = -(ushort)(auVar36._8_2_ < auVar31._8_2_);
      auVar32._10_2_ = -(ushort)(auVar36._10_2_ < auVar31._10_2_);
      auVar32._12_2_ = -(ushort)(auVar36._12_2_ < auVar31._12_2_);
      auVar32._14_2_ = -(ushort)(auVar36._14_2_ < auVar31._14_2_);
      auVar12._0_2_ = -(ushort)(auVar36._0_2_ < auVar33._0_2_);
      auVar12._2_2_ = -(ushort)(auVar36._2_2_ < auVar33._2_2_);
      auVar12._4_2_ = -(ushort)(auVar36._4_2_ < auVar33._4_2_);
      auVar12._6_2_ = -(ushort)(auVar36._6_2_ < auVar33._6_2_);
      auVar12._8_2_ = -(ushort)(auVar36._8_2_ < auVar33._8_2_);
      auVar12._10_2_ = -(ushort)(auVar36._10_2_ < auVar33._10_2_);
      auVar12._12_2_ = -(ushort)(auVar36._12_2_ < auVar33._12_2_);
      auVar12._14_2_ = -(ushort)(auVar36._14_2_ < auVar33._14_2_);
      if (((((((((((((((((SUB161(auVar12 >> 7,0) & 1) == 0 && (SUB161(auVar12 >> 0xf,0) & 1) == 0)
                       && (SUB161(auVar12 >> 0x17,0) & 1) == 0) &&
                      (SUB161(auVar12 >> 0x1f,0) & 1) == 0) && (SUB161(auVar12 >> 0x27,0) & 1) == 0)
                    && (SUB161(auVar12 >> 0x2f,0) & 1) == 0) && (SUB161(auVar12 >> 0x37,0) & 1) == 0
                   ) && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar12 >> 0x47,0) & 1) == 0) && (SUB161(auVar12 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar12 >> 0x57,0) & 1) == 0) && (SUB161(auVar12 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar12 >> 0x67,0) & 1) == 0) && (SUB161(auVar12 >> 0x6f,0) & 1) == 0) &&
           (auVar12._14_2_ >> 7 & 1) == 0) && (auVar12._14_2_ & 0x8000) == 0) &&
          ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) == 0 && (SUB161(auVar32 >> 0xf,0) & 1) == 0)
                       && (SUB161(auVar32 >> 0x17,0) & 1) == 0) &&
                      (SUB161(auVar32 >> 0x1f,0) & 1) == 0) && (SUB161(auVar32 >> 0x27,0) & 1) == 0)
                    && (SUB161(auVar32 >> 0x2f,0) & 1) == 0) && (SUB161(auVar32 >> 0x37,0) & 1) == 0
                   ) && (SUB161(auVar32 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar32 >> 0x47,0) & 1) == 0) && (SUB161(auVar32 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar32 >> 0x57,0) & 1) == 0) && (SUB161(auVar32 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar32 >> 0x67,0) & 1) == 0) && (SUB161(auVar32 >> 0x6f,0) & 1) == 0) &&
           (auVar32._14_2_ >> 7 & 1) == 0) && (auVar32._14_2_ & 0x8000) == 0)) {
        pauVar3[-1] = ZEXT416(0);
        *pauVar3 = ZEXT416(0);
        *(undefined1 (*) [16])(param_9 + -0x10 + (longlong)pauVar3) = ZEXT416(0);
        *(undefined1 (*) [16])(param_9 + (longlong)pauVar3) = ZEXT416(0);
      }
      else {
        auVar12 = paddsw(auVar31,auVar53);
        auVar32 = paddsw(auVar33,auVar53);
        auVar12 = pmulhw(auVar12,auVar54);
        auVar32 = pmulhw(auVar32,auVar54);
        auVar12 = auVar12 ^ auVar37;
        auVar32 = auVar32 ^ auVar45;
        sVar10 = auVar12._0_2_ - auVar37._0_2_;
        sVar13 = auVar12._2_2_ - auVar37._2_2_;
        sVar15 = auVar12._4_2_ - auVar37._4_2_;
        sVar17 = auVar12._6_2_ - auVar37._6_2_;
        sVar19 = auVar12._8_2_ - auVar37._8_2_;
        sVar22 = auVar12._10_2_ - auVar37._10_2_;
        sVar25 = auVar12._12_2_ - auVar37._12_2_;
        sVar28 = auVar12._14_2_ - auVar37._14_2_;
        *(short *)pauVar3[-1] = sVar10;
        *(short *)(pauVar3[-1] + 2) = sVar13;
        *(short *)(pauVar3[-1] + 4) = sVar15;
        *(short *)(pauVar3[-1] + 6) = sVar17;
        *(short *)(pauVar3[-1] + 8) = sVar19;
        *(short *)(pauVar3[-1] + 10) = sVar22;
        *(short *)(pauVar3[-1] + 0xc) = sVar25;
        *(short *)(pauVar3[-1] + 0xe) = sVar28;
        sVar34 = auVar32._0_2_ - auVar45._0_2_;
        sVar38 = auVar32._2_2_ - auVar45._2_2_;
        sVar39 = auVar32._4_2_ - auVar45._4_2_;
        sVar40 = auVar32._6_2_ - auVar45._6_2_;
        sVar41 = auVar32._8_2_ - auVar45._8_2_;
        sVar42 = auVar32._10_2_ - auVar45._10_2_;
        sVar43 = auVar32._12_2_ - auVar45._12_2_;
        sVar44 = auVar32._14_2_ - auVar45._14_2_;
        *(short *)*pauVar3 = sVar34;
        *(short *)(*pauVar3 + 2) = sVar38;
        *(short *)(*pauVar3 + 4) = sVar39;
        *(short *)(*pauVar3 + 6) = sVar40;
        *(short *)(*pauVar3 + 8) = sVar41;
        *(short *)(*pauVar3 + 10) = sVar42;
        *(short *)(*pauVar3 + 0xc) = sVar43;
        *(short *)(*pauVar3 + 0xe) = sVar44;
        sVar10 = sVar10 * sVar49;
        sVar13 = sVar13 * sVar50;
        sVar15 = sVar15 * sVar51;
        sVar17 = sVar17 * sVar52;
        sVar19 = sVar19 * sVar49;
        sVar22 = sVar22 * sVar50;
        sVar25 = sVar25 * sVar51;
        sVar28 = sVar28 * sVar52;
        sVar34 = sVar34 * sVar49;
        sVar38 = sVar38 * sVar50;
        sVar39 = sVar39 * sVar51;
        sVar40 = sVar40 * sVar52;
        sVar41 = sVar41 * sVar49;
        sVar42 = sVar42 * sVar50;
        sVar43 = sVar43 * sVar51;
        sVar44 = sVar44 * sVar52;
        psVar1 = (short *)(param_9 + -0x10 + (longlong)pauVar3);
        *psVar1 = sVar10;
        psVar1[1] = sVar13;
        psVar1[2] = sVar15;
        psVar1[3] = sVar17;
        psVar1[4] = sVar19;
        psVar1[5] = sVar22;
        psVar1[6] = sVar25;
        psVar1[7] = sVar28;
        psVar1 = (short *)(param_9 + (longlong)pauVar3);
        *psVar1 = sVar34;
        psVar1[1] = sVar38;
        psVar1[2] = sVar39;
        psVar1[3] = sVar40;
        psVar1[4] = sVar41;
        psVar1[5] = sVar42;
        psVar1[6] = sVar43;
        psVar1[7] = sVar44;
        uVar11 = (ushort)(sVar10 != 0);
        uVar16 = (ushort)(sVar13 != 0);
        uVar21 = (ushort)(sVar15 != 0);
        uVar27 = (ushort)(sVar17 != 0);
        uVar20 = (ushort)(sVar19 != 0);
        uVar23 = (ushort)(sVar22 != 0);
        uVar26 = (ushort)(sVar25 != 0);
        uVar29 = (ushort)(sVar28 != 0);
        psVar2 = (short *)((param_13 - param_8) + -0x10 + (longlong)pauVar3);
        psVar1 = (short *)((param_13 - param_8) + (longlong)pauVar3);
        uVar14 = (ushort)(sVar34 != 0);
        uVar18 = (ushort)(sVar38 != 0);
        uVar24 = (ushort)(sVar39 != 0);
        uVar30 = (ushort)(sVar40 != 0);
        uVar6 = (ushort)(sVar41 != 0);
        uVar7 = (ushort)(sVar42 != 0);
        uVar8 = (ushort)(sVar43 != 0);
        uVar9 = (ushort)(sVar44 != 0);
        uVar14 = *psVar1 + uVar14 & -uVar14;
        uVar18 = psVar1[1] + uVar18 & -uVar18;
        uVar24 = psVar1[2] + uVar24 & -uVar24;
        uVar30 = psVar1[3] + uVar30 & -uVar30;
        uVar6 = psVar1[4] + uVar6 & -uVar6;
        uVar7 = psVar1[5] + uVar7 & -uVar7;
        uVar8 = psVar1[6] + uVar8 & -uVar8;
        uVar9 = psVar1[7] + uVar9 & -uVar9;
        uVar11 = *psVar2 + uVar11 & -uVar11;
        uVar16 = psVar2[1] + uVar16 & -uVar16;
        uVar21 = psVar2[2] + uVar21 & -uVar21;
        uVar27 = psVar2[3] + uVar27 & -uVar27;
        uVar20 = psVar2[4] + uVar20 & -uVar20;
        uVar23 = psVar2[5] + uVar23 & -uVar23;
        uVar26 = psVar2[6] + uVar26 & -uVar26;
        uVar29 = psVar2[7] + uVar29 & -uVar29;
        uVar11 = ((short)uVar11 < (short)uVar14) * uVar14 |
                 ((short)uVar11 >= (short)uVar14) * uVar11;
        uVar14 = ((short)uVar16 < (short)uVar18) * uVar18 |
                 ((short)uVar16 >= (short)uVar18) * uVar16;
        uVar16 = ((short)uVar21 < (short)uVar24) * uVar24 |
                 ((short)uVar21 >= (short)uVar24) * uVar21;
        uVar18 = ((short)uVar27 < (short)uVar30) * uVar30 |
                 ((short)uVar27 >= (short)uVar30) * uVar27;
        uVar21 = ((short)uVar20 < (short)uVar6) * uVar6 | ((short)uVar20 >= (short)uVar6) * uVar20;
        uVar24 = ((short)uVar23 < (short)uVar7) * uVar7 | ((short)uVar23 >= (short)uVar7) * uVar23;
        uVar27 = ((short)uVar26 < (short)uVar8) * uVar8 | ((short)uVar26 >= (short)uVar8) * uVar26;
        uVar30 = ((short)uVar29 < (short)uVar9) * uVar9 | ((short)uVar29 >= (short)uVar9) * uVar29;
        sVar10 = auVar35._0_2_;
        auVar46._0_2_ =
             (sVar10 < (short)uVar11) * uVar11 | (ushort)(sVar10 >= (short)uVar11) * sVar10;
        sVar10 = auVar35._2_2_;
        auVar46._2_2_ =
             (sVar10 < (short)uVar14) * uVar14 | (ushort)(sVar10 >= (short)uVar14) * sVar10;
        sVar10 = auVar35._4_2_;
        auVar46._4_2_ =
             (sVar10 < (short)uVar16) * uVar16 | (ushort)(sVar10 >= (short)uVar16) * sVar10;
        sVar10 = auVar35._6_2_;
        auVar46._6_2_ =
             (sVar10 < (short)uVar18) * uVar18 | (ushort)(sVar10 >= (short)uVar18) * sVar10;
        sVar10 = auVar35._8_2_;
        auVar46._8_2_ =
             (sVar10 < (short)uVar21) * uVar21 | (ushort)(sVar10 >= (short)uVar21) * sVar10;
        sVar10 = auVar35._10_2_;
        auVar46._10_2_ =
             (sVar10 < (short)uVar24) * uVar24 | (ushort)(sVar10 >= (short)uVar24) * sVar10;
        sVar10 = auVar35._12_2_;
        sVar13 = auVar35._14_2_;
        auVar46._12_2_ =
             (sVar10 < (short)uVar27) * uVar27 | (ushort)(sVar10 >= (short)uVar27) * sVar10;
        auVar46._14_2_ =
             (sVar13 < (short)uVar30) * uVar30 | (ushort)(sVar13 >= (short)uVar30) * sVar13;
        auVar35 = auVar46;
      }
      pauVar3 = pauVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  auVar5._0_8_ = auVar35._8_8_;
  auVar5._8_4_ = auVar35._0_4_;
  auVar5._12_4_ = auVar35._0_4_;
  sVar10 = auVar35._8_2_;
  sVar19 = auVar35._0_2_;
  auVar47._0_2_ = (ushort)(sVar19 < sVar10) * sVar10 | (ushort)(sVar19 >= sVar10) * sVar19;
  sVar13 = auVar35._10_2_;
  sVar22 = auVar35._2_2_;
  auVar47._2_2_ = (ushort)(sVar22 < sVar13) * sVar13 | (ushort)(sVar22 >= sVar13) * sVar22;
  sVar15 = auVar35._12_2_;
  sVar17 = auVar35._4_2_;
  auVar47._4_2_ = (ushort)(sVar17 < sVar15) * sVar15 | (ushort)(sVar17 >= sVar15) * sVar17;
  sVar17 = auVar35._14_2_;
  sVar25 = auVar35._6_2_;
  auVar47._6_2_ = (ushort)(sVar25 < sVar17) * sVar17 | (ushort)(sVar25 >= sVar17) * sVar25;
  auVar47._8_2_ = (ushort)(sVar10 < sVar19) * sVar19 | (ushort)(sVar10 >= sVar19) * sVar10;
  auVar47._10_2_ = (ushort)(sVar13 < sVar22) * sVar22 | (ushort)(sVar13 >= sVar22) * sVar13;
  auVar47._12_2_ = (ushort)(sVar15 < sVar19) * sVar19 | (ushort)(sVar15 >= sVar19) * sVar15;
  auVar47._14_2_ = (ushort)(sVar17 < sVar22) * sVar22 | (ushort)(sVar17 >= sVar22) * sVar17;
  auVar35 = pshuflw(auVar5,auVar47,0xe);
  sVar10 = auVar35._0_2_;
  auVar48._0_2_ =
       (ushort)((short)auVar47._0_2_ < sVar10) * sVar10 |
       ((short)auVar47._0_2_ >= sVar10) * auVar47._0_2_;
  sVar10 = auVar35._2_2_;
  auVar48._2_2_ =
       (ushort)((short)auVar47._2_2_ < sVar10) * sVar10 |
       ((short)auVar47._2_2_ >= sVar10) * auVar47._2_2_;
  sVar10 = auVar35._4_2_;
  auVar48._4_2_ =
       (ushort)((short)auVar47._4_2_ < sVar10) * sVar10 |
       ((short)auVar47._4_2_ >= sVar10) * auVar47._4_2_;
  sVar10 = auVar35._6_2_;
  auVar48._6_2_ =
       (ushort)((short)auVar47._6_2_ < sVar10) * sVar10 |
       ((short)auVar47._6_2_ >= sVar10) * auVar47._6_2_;
  sVar10 = auVar35._8_2_;
  auVar48._8_2_ =
       (ushort)((short)auVar47._8_2_ < sVar10) * sVar10 |
       ((short)auVar47._8_2_ >= sVar10) * auVar47._8_2_;
  sVar10 = auVar35._10_2_;
  auVar48._10_2_ =
       (ushort)((short)auVar47._10_2_ < sVar10) * sVar10 |
       ((short)auVar47._10_2_ >= sVar10) * auVar47._10_2_;
  sVar10 = auVar35._12_2_;
  auVar48._12_2_ =
       (ushort)((short)auVar47._12_2_ < sVar10) * sVar10 |
       ((short)auVar47._12_2_ >= sVar10) * auVar47._12_2_;
  sVar10 = auVar35._14_2_;
  auVar48._14_2_ =
       (ushort)((short)auVar47._14_2_ < sVar10) * sVar10 |
       ((short)auVar47._14_2_ >= sVar10) * auVar47._14_2_;
  auVar35 = pshuflw(auVar35,auVar48,1);
  sVar10 = auVar35._2_2_;
  *param_11 = (ushort)((short)auVar48._2_2_ < sVar10) * sVar10 |
              ((short)auVar48._2_2_ >= sVar10) * auVar48._2_2_;
  return;
}



// FUNCTION 1439e4860 FUN_1439e4860 body=348 status=ok
// SIG undefined FUN_1439e4860(void)

void FUN_1439e4860(longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5
                  ,longlong param_6,undefined8 param_7,void *param_8,void *param_9,longlong param_10
                  ,short *param_11,short *param_12)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  short sVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar7 = -1;
  _guard_xfg_dispatch_icall_nop(param_8,0,param_2 * 2);
  _guard_xfg_dispatch_icall_nop(param_9,0,param_2 * 2);
  sVar5 = -1;
  if ((param_3 == 0) && (iVar8 = 0, sVar5 = -1, 0 < param_2)) {
    do {
      sVar5 = *param_12;
      lVar2 = (longlong)sVar5 * 2;
      sVar1 = *(short *)(lVar2 + param_1);
      uVar9 = (int)sVar1 >> 0x1f;
      iVar4 = (uVar9 ^ (int)sVar1) - uVar9;
      uVar6 = (ulonglong)(-(uint)(sVar5 != 0) & 2);
      if ((int)*(short *)(uVar6 + param_10) >> 2 <= iVar4) {
        iVar4 = iVar4 + (*(short *)(uVar6 + param_5) + 1 >> 1);
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        lVar3 = (ulonglong)(sVar5 != 0) * 2;
        iVar4 = *(short *)(lVar3 + param_6) * iVar4 >> 0xf;
        sVar5 = (sVar1 >> 0xf ^ (ushort)iVar4) - (sVar1 >> 0xf);
        *(short *)(lVar2 + (longlong)param_8) = sVar5;
        *(short *)(lVar2 + (longlong)param_9) =
             (short)(((int)*(short *)(lVar3 + param_10) * (int)sVar5) / 2);
        if (iVar4 != 0) {
          iVar7 = iVar8;
        }
      }
      sVar5 = (short)iVar7;
      iVar8 = iVar8 + 1;
      param_12 = param_12 + 1;
    } while (iVar8 < param_2);
  }
  *param_11 = sVar5 + 1;
  return;
}



// FUNCTION 1439e49c0 FUN_1439e49c0 body=798 status=ok
// SIG undefined FUN_1439e49c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439e49c0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_158 [32];
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
  int local_120;
  uint local_118;
  uint local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  uint local_ec;
  int local_e8;
  int local_e4;
  undefined *local_e0;
  longlong local_d8;
  undefined *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_98 [4];
  int local_88 [4];
  longlong local_78 [4];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  iVar13 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 8);
  local_78[3] = *(undefined8 *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(undefined8 *)(param_1 + 0x48);
  local_98[0] = *(int *)(param_1 + 0x10);
  local_98[1] = *(undefined4 *)(param_1 + 0x24);
  local_98[2] = *(undefined4 *)(param_1 + 0x24);
  local_78[0] = *(longlong *)(param_2 + 0x38);
  local_78[1] = *(undefined8 *)(param_2 + 0x40);
  local_78[2] = *(undefined8 *)(param_2 + 0x48);
  local_88[0] = *(int *)(param_2 + 0x10);
  local_88[1] = *(undefined4 *)(param_2 + 0x24);
  local_88[2] = *(undefined4 *)(param_2 + 0x24);
  local_d8 = 0;
  local_e0 = PTR_DAT_1468320a0;
  puVar8 = PTR_DAT_1468320a0;
  local_fc = iVar9;
  local_e8 = iVar13;
  local_a0 = param_2;
  iVar7 = local_108;
  do {
    if ((local_d8 == 0) || (uVar12 = 2, local_d8 == 3)) {
      uVar12 = 1;
    }
    iVar14 = local_98[local_d8];
    iVar11 = local_88[local_d8];
    local_f8 = 0;
    local_104 = iVar14;
    local_100 = iVar11;
    if (0 < iVar13) {
      local_f4 = 0;
      local_c0 = local_78 + local_d8;
      local_b0 = local_78 + local_d8 + 3;
      uVar3 = 0x10 / uVar12;
      local_e4 = uVar3 * iVar9 * 0x10;
      do {
        iVar5 = 0;
        if (0 < iVar2) {
          local_a8 = (longlong)iVar11;
          iVar6 = (iVar9 << 4) / iVar13;
          puVar1 = puVar8 + (ulonglong)(local_f4 / iVar13 & 0xf) * 0x10;
          uVar10 = (longlong)(iVar7 << 4) / (longlong)iVar2;
          local_ec = (uint)uVar10;
          uVar10 = uVar10 & 0xffffffff;
          local_c8 = (longlong)((local_f8 / (int)uVar12) * local_100);
          iVar15 = 0;
          local_b8 = (longlong)((((local_f8 / (int)uVar12) * local_fc) / iVar13) * iVar14);
          iVar4 = uVar3 * iVar7;
          local_d0 = puVar1;
          do {
            local_130 = (undefined4)uVar10;
            local_138 = local_e0 + (ulonglong)(iVar15 / iVar2 & 0xf) * 0x10;
            local_128 = puVar1;
            local_120 = iVar6;
            local_118 = uVar3;
            local_110 = uVar3;
            (*DAT_146bcd4f0)(((iVar5 / (int)uVar12) * local_108) / iVar2 + local_b8 + *local_b0,
                             (longlong)local_104,iVar5 / (int)uVar12 + local_c8 + *local_c0,local_a8
                            );
            uVar10 = (ulonglong)local_ec;
            iVar5 = iVar5 + 0x10;
            iVar15 = iVar15 + iVar4 * 0x10;
            puVar8 = local_e0;
            iVar9 = local_fc;
            iVar13 = local_e8;
            iVar14 = local_104;
            iVar11 = local_100;
            iVar7 = local_108;
          } while (iVar5 < iVar2);
        }
        local_f4 = local_f4 + local_e4;
        local_f8 = local_f8 + 0x10;
      } while (local_f8 < iVar13);
    }
    local_d8 = local_d8 + 1;
  } while (local_d8 < 3);
  FUN_1439d1430(local_a0);
  return;
}



// FUNCTION 1439e4ce0 FUN_1439e4ce0 body=213 status=ok
// SIG undefined FUN_1439e4ce0(void)

void FUN_1439e4ce0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  uint param_6)

{
  ushort *puVar1;
  char *pcVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  
  uVar23 = (longlong)param_5 & 0xfffffffffffffff0;
  if (0 < (int)param_6) {
    uVar24 = (ulonglong)param_6;
    do {
      iVar22 = 0;
      lVar19 = 0;
      if (0 < (longlong)uVar23) {
        iVar25 = 0;
        lVar26 = (uVar23 - 1 >> 4) + 1;
        lVar19 = lVar26 * 0x10;
        do {
          lVar20 = (longlong)iVar25;
          iVar25 = iVar25 + 0x20;
          lVar21 = (longlong)iVar22;
          iVar22 = iVar22 + 0x10;
          puVar1 = (ushort *)(lVar20 + param_1);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          uVar7 = puVar1[4];
          uVar8 = puVar1[5];
          uVar9 = puVar1[6];
          uVar10 = puVar1[7];
          puVar3 = (ushort *)(lVar20 + 0x10 + param_1);
          uVar11 = *puVar3;
          uVar12 = puVar3[1];
          uVar13 = puVar3[2];
          uVar14 = puVar3[3];
          uVar15 = puVar3[4];
          uVar16 = puVar3[5];
          uVar17 = puVar3[6];
          uVar18 = puVar3[7];
          uVar35 = *puVar1 & 0xff;
          uVar36 = uVar4 & 0xff;
          uVar37 = uVar5 & 0xff;
          uVar38 = uVar6 & 0xff;
          uVar39 = uVar7 & 0xff;
          uVar40 = uVar8 & 0xff;
          uVar41 = uVar9 & 0xff;
          uVar42 = uVar10 & 0xff;
          uVar27 = uVar11 & 0xff;
          uVar28 = uVar12 & 0xff;
          uVar29 = uVar13 & 0xff;
          uVar30 = uVar14 & 0xff;
          uVar31 = uVar15 & 0xff;
          uVar32 = uVar16 & 0xff;
          uVar33 = uVar17 & 0xff;
          uVar34 = uVar18 & 0xff;
          pcVar2 = (char *)(lVar21 + param_3);
          *pcVar2 = (uVar35 != 0) * (uVar35 < 0x100) * (char)*puVar1 - (0xff < uVar35);
          pcVar2[1] = (uVar36 != 0) * (uVar36 < 0x100) * (char)uVar4 - (0xff < uVar36);
          pcVar2[2] = (uVar37 != 0) * (uVar37 < 0x100) * (char)uVar5 - (0xff < uVar37);
          pcVar2[3] = (uVar38 != 0) * (uVar38 < 0x100) * (char)uVar6 - (0xff < uVar38);
          pcVar2[4] = (uVar39 != 0) * (uVar39 < 0x100) * (char)uVar7 - (0xff < uVar39);
          pcVar2[5] = (uVar40 != 0) * (uVar40 < 0x100) * (char)uVar8 - (0xff < uVar40);
          pcVar2[6] = (uVar41 != 0) * (uVar41 < 0x100) * (char)uVar9 - (0xff < uVar41);
          pcVar2[7] = (uVar42 != 0) * (uVar42 < 0x100) * (char)uVar10 - (0xff < uVar42);
          pcVar2[8] = (uVar27 != 0) * (uVar27 < 0x100) * (char)uVar11 - (0xff < uVar27);
          pcVar2[9] = (uVar28 != 0) * (uVar28 < 0x100) * (char)uVar12 - (0xff < uVar28);
          pcVar2[10] = (uVar29 != 0) * (uVar29 < 0x100) * (char)uVar13 - (0xff < uVar29);
          pcVar2[0xb] = (uVar30 != 0) * (uVar30 < 0x100) * (char)uVar14 - (0xff < uVar30);
          pcVar2[0xc] = (uVar31 != 0) * (uVar31 < 0x100) * (char)uVar15 - (0xff < uVar31);
          pcVar2[0xd] = (uVar32 != 0) * (uVar32 < 0x100) * (char)uVar16 - (0xff < uVar32);
          pcVar2[0xe] = (uVar33 != 0) * (uVar33 < 0x100) * (char)uVar17 - (0xff < uVar33);
          pcVar2[0xf] = (uVar34 != 0) * (uVar34 < 0x100) * (char)uVar18 - (0xff < uVar34);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      for (; lVar19 < param_5; lVar19 = lVar19 + 1) {
        *(undefined1 *)(lVar19 + param_3) = *(undefined1 *)(param_1 + lVar19 * 2);
      }
      param_1 = param_1 + param_2 * 2;
      param_3 = param_3 + param_4;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}



// FUNCTION 1439e4dc0 FUN_1439e4dc0 body=191 status=ok
// SIG undefined FUN_1439e4dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439e4dc0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  auVar15 = _DAT_145cb6aa0;
  auVar14 = _DAT_145cb6a90;
  auVar13 = _DAT_145cabab0;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    uVar17 = (ulonglong)(((param_3 & 0xfffffff8) - 1 >> 3) + 1);
    puVar16 = (undefined8 *)(param_1 + 4);
    do {
      uVar1 = *(undefined8 *)((longlong)puVar16 + -1);
      uVar2 = *(ulonglong *)((longlong)puVar16 + -2);
      uVar3 = *(ulonglong *)((longlong)puVar16 + -4);
      uVar4 = *(ulonglong *)((longlong)puVar16 + 3);
      auVar49._8_6_ = 0;
      auVar49._0_8_ = uVar2;
      auVar49[0xe] = (char)(uVar2 >> 0x38);
      auVar49[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar48._14_2_ = auVar49._14_2_;
      auVar48._8_5_ = 0;
      auVar48._0_8_ = uVar2;
      auVar48[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar47._13_3_ = auVar48._13_3_;
      auVar47._8_4_ = 0;
      auVar47._0_8_ = uVar2;
      auVar47[0xc] = (char)(uVar2 >> 0x30);
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._8_3_ = 0;
      auVar46._0_8_ = uVar2;
      auVar46[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar45._11_5_ = auVar46._11_5_;
      auVar45._8_2_ = 0;
      auVar45._0_8_ = uVar2;
      auVar45[10] = (char)(uVar2 >> 0x28);
      auVar44._10_6_ = auVar45._10_6_;
      auVar44[8] = 0;
      auVar44._0_8_ = uVar2;
      auVar44[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar43._9_7_ = auVar44._9_7_;
      auVar43[8] = (char)(uVar2 >> 0x20);
      auVar43._0_8_ = uVar2;
      auVar42._8_8_ = auVar43._8_8_;
      auVar42[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar42[6] = (char)(uVar2 >> 0x18);
      auVar42[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar42[4] = (char)(uVar2 >> 0x10);
      auVar42[3] = (char)((ulonglong)uVar1 >> 8);
      auVar42[2] = (char)(uVar2 >> 8);
      auVar42[0] = (undefined1)uVar2;
      auVar42[1] = (char)uVar1;
      uVar1 = *(undefined8 *)((longlong)puVar16 + -3);
      auVar23._8_6_ = 0;
      auVar23._0_8_ = uVar3;
      auVar23[0xe] = (char)(uVar3 >> 0x38);
      auVar23[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar40._14_2_ = auVar23._14_2_;
      auVar40._8_5_ = 0;
      auVar40._0_8_ = uVar3;
      auVar40[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar50._13_3_ = auVar40._13_3_;
      auVar50._8_4_ = 0;
      auVar50._0_8_ = uVar3;
      auVar50[0xc] = (char)(uVar3 >> 0x30);
      auVar22._12_4_ = auVar50._12_4_;
      auVar22._8_3_ = 0;
      auVar22._0_8_ = uVar3;
      auVar22[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar21._11_5_ = auVar22._11_5_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = uVar3;
      auVar21[10] = (char)(uVar3 >> 0x28);
      auVar20._10_6_ = auVar21._10_6_;
      auVar20[8] = 0;
      auVar20._0_8_ = uVar3;
      auVar20[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar19._9_7_ = auVar20._9_7_;
      auVar19[8] = (char)(uVar3 >> 0x20);
      auVar19._0_8_ = uVar3;
      auVar18._8_8_ = auVar19._8_8_;
      auVar18[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar18[6] = (char)(uVar3 >> 0x18);
      auVar18[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar18[4] = (char)(uVar3 >> 0x10);
      auVar18[3] = (char)((ulonglong)uVar1 >> 8);
      auVar18[2] = (char)(uVar3 >> 8);
      auVar18[0] = (undefined1)uVar3;
      auVar18[1] = (char)uVar1;
      uVar1 = *(undefined8 *)((longlong)puVar16 + 2);
      auVar50 = pmaddubsw(auVar42,auVar15);
      auVar23 = pmaddubsw(auVar18,auVar14);
      auVar39._8_6_ = 0;
      auVar39._0_8_ = uVar4;
      auVar39[0xe] = (char)(uVar4 >> 0x38);
      auVar39[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar38._14_2_ = auVar39._14_2_;
      auVar38._8_5_ = 0;
      auVar38._0_8_ = uVar4;
      auVar38[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar37._13_3_ = auVar38._13_3_;
      auVar37._8_4_ = 0;
      auVar37._0_8_ = uVar4;
      auVar37[0xc] = (char)(uVar4 >> 0x30);
      auVar36._12_4_ = auVar37._12_4_;
      auVar36._8_3_ = 0;
      auVar36._0_8_ = uVar4;
      auVar36[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar35._11_5_ = auVar36._11_5_;
      auVar35._8_2_ = 0;
      auVar35._0_8_ = uVar4;
      auVar35[10] = (char)(uVar4 >> 0x28);
      auVar34._10_6_ = auVar35._10_6_;
      auVar34[8] = 0;
      auVar34._0_8_ = uVar4;
      auVar34[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar33._9_7_ = auVar34._9_7_;
      auVar33[8] = (char)(uVar4 >> 0x20);
      auVar33._0_8_ = uVar4;
      auVar32._8_8_ = auVar33._8_8_;
      auVar32[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar32[6] = (char)(uVar4 >> 0x18);
      auVar32[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar32[4] = (char)(uVar4 >> 0x10);
      auVar32[3] = (char)((ulonglong)uVar1 >> 8);
      auVar32[2] = (char)(uVar4 >> 8);
      auVar32[0] = (undefined1)uVar4;
      auVar32[1] = (char)uVar1;
      uVar1 = *puVar16;
      auVar40 = pmaddubsw(auVar32,auVar14);
      auVar51._0_2_ = auVar50._0_2_ + auVar23._0_2_;
      auVar51._2_2_ = auVar50._2_2_ + auVar23._2_2_;
      auVar51._4_2_ = auVar50._4_2_ + auVar23._4_2_;
      auVar51._6_2_ = auVar50._6_2_ + auVar23._6_2_;
      auVar51._8_2_ = auVar50._8_2_ + auVar23._8_2_;
      auVar51._10_2_ = auVar50._10_2_ + auVar23._10_2_;
      auVar51._12_2_ = auVar50._12_2_ + auVar23._12_2_;
      auVar51._14_2_ = auVar50._14_2_ + auVar23._14_2_;
      uVar2 = *(ulonglong *)((longlong)puVar16 + 1);
      auVar31._8_6_ = 0;
      auVar31._0_8_ = uVar2;
      auVar31[0xe] = (char)(uVar2 >> 0x38);
      auVar31[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar30._14_2_ = auVar31._14_2_;
      auVar30._8_5_ = 0;
      auVar30._0_8_ = uVar2;
      auVar30[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar29._13_3_ = auVar30._13_3_;
      auVar29._8_4_ = 0;
      auVar29._0_8_ = uVar2;
      auVar29[0xc] = (char)(uVar2 >> 0x30);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._8_3_ = 0;
      auVar28._0_8_ = uVar2;
      auVar28[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar27._11_5_ = auVar28._11_5_;
      auVar27._8_2_ = 0;
      auVar27._0_8_ = uVar2;
      auVar27[10] = (char)(uVar2 >> 0x28);
      auVar26._10_6_ = auVar27._10_6_;
      auVar26[8] = 0;
      auVar26._0_8_ = uVar2;
      auVar26[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar25._9_7_ = auVar26._9_7_;
      auVar25[8] = (char)(uVar2 >> 0x20);
      auVar25._0_8_ = uVar2;
      auVar24._8_8_ = auVar25._8_8_;
      auVar24[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar24[6] = (char)(uVar2 >> 0x18);
      auVar24[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar24[4] = (char)(uVar2 >> 0x10);
      auVar24[3] = (char)((ulonglong)uVar1 >> 8);
      auVar24[2] = (char)(uVar2 >> 8);
      auVar24[0] = (undefined1)uVar2;
      auVar24[1] = (char)uVar1;
      auVar23 = pmaddubsw(auVar24,auVar15);
      auVar41._0_2_ = auVar40._0_2_ + auVar23._0_2_;
      auVar41._2_2_ = auVar40._2_2_ + auVar23._2_2_;
      auVar41._4_2_ = auVar40._4_2_ + auVar23._4_2_;
      auVar41._6_2_ = auVar40._6_2_ + auVar23._6_2_;
      auVar41._8_2_ = auVar40._8_2_ + auVar23._8_2_;
      auVar41._10_2_ = auVar40._10_2_ + auVar23._10_2_;
      auVar41._12_2_ = auVar40._12_2_ + auVar23._12_2_;
      auVar41._14_2_ = auVar40._14_2_ + auVar23._14_2_;
      auVar23 = paddsw(auVar51,auVar41);
      auVar23 = paddsw(auVar23,auVar13);
      auVar23 = psraw(auVar23,7);
      sVar5 = auVar23._0_2_;
      sVar6 = auVar23._2_2_;
      sVar7 = auVar23._4_2_;
      sVar8 = auVar23._6_2_;
      sVar9 = auVar23._8_2_;
      sVar10 = auVar23._10_2_;
      sVar11 = auVar23._12_2_;
      sVar12 = auVar23._14_2_;
      *(ulonglong *)((param_2 - param_1) + -0xc + (longlong)(puVar16 + 1)) =
           CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar23[0xe] - (0xff < sVar12),
                    CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar23[0xc] - (0xff < sVar11),
                             CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar23[10] -
                                      (0xff < sVar10),
                                      CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar23[8] -
                                               (0xff < sVar9),
                                               CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar23[6] -
                                                        (0xff < sVar8),
                                                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                 auVar23[4] - (0xff < sVar7),
                                                                 CONCAT11((0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          auVar23[2] -
                                                                          (0xff < sVar6),
                                                                          (0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          auVar23[0] -
                                                                          (0xff < sVar5))))))));
      uVar17 = uVar17 - 1;
      puVar16 = puVar16 + 1;
    } while (uVar17 != 0);
  }
  return;
}



// FUNCTION 1439e4e80 FUN_1439e4e80 body=1410 status=ok
// SIG undefined FUN_1439e4e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439e4e80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  uint uVar27;
  char *pcVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  longlong lVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 auVar42 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar72 [16];
  undefined1 auVar80 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar107 [16];
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auStack_3d78 [32];
  char *local_3d58;
  undefined1 *local_3d50;
  uint local_3d48;
  undefined1 *local_3d40;
  undefined1 *local_3d38;
  ulonglong local_3d30;
  uint local_3d28;
  longlong local_3d20;
  undefined1 *local_3d18;
  undefined1 *local_3d10;
  undefined1 *local_3d08;
  undefined1 *local_3d00;
  undefined1 *local_3cf8;
  undefined1 *local_3cf0;
  longlong local_3ce8;
  longlong local_3ce0;
  char *local_3cd8;
  longlong local_3cd0;
  undefined1 *local_3cc8;
  undefined1 *local_3cc0;
  undefined1 *local_3cb8;
  undefined1 *local_3cb0;
  undefined1 *local_3ca8;
  undefined1 *local_3ca0;
  undefined1 *local_3c98;
  longlong local_3c90;
  longlong local_3c88;
  undefined1 local_3c78 [15360];
  ulonglong local_78;
  undefined8 uStack_48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  
  uStack_48 = 0x1439e4e97;
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3d78;
  uVar27 = param_5 / 2;
  uVar33 = (ulonglong)(int)uVar27;
  local_3d50 = (undefined1 *)CONCAT44(local_3d50._4_4_,param_6 / 2);
  local_3d40 = local_3c78;
  puVar40 = local_3c78 + (int)(uVar27 * 2);
  lVar30 = param_2 * 3;
  puVar41 = local_3c78 + (int)(uVar27 * 3);
  puVar39 = local_3c78 + (int)(uVar27 * 5);
  puVar37 = local_3c78 + (int)(uVar27 * 4);
  puVar31 = local_3c78 + uVar33;
  local_3d48 = uVar27 & 0xfffffff8;
  local_3d58 = (char *)param_1;
  local_3d38 = local_3c78 + (int)(uVar27 * 6);
  local_3d30 = param_3;
  local_3d28 = uVar27;
  local_3d20 = param_4;
  local_3d18 = puVar31;
  local_3d10 = puVar40;
  local_3d08 = puVar41;
  local_3d00 = puVar37;
  local_3cf8 = puVar39;
  local_3cf0 = local_3c78 + (int)(uVar27 * 7);
  FUN_1439e4dc0(param_1 + param_2 * -3 + -3,local_3c78,uVar27);
  FUN_1439e4dc0((longlong)local_3d58 + param_2 * -2 + -3,puVar31,uVar27);
  FUN_1439e4dc0(((longlong)local_3d58 - param_2) + -3,puVar40,uVar27);
  FUN_1439e4dc0((longlong)local_3d58 + -3,puVar41,uVar27);
  FUN_1439e4dc0((longlong)local_3d58 + -3 + param_2,puVar37,uVar27);
  FUN_1439e4dc0((longlong)local_3d58 + -3 + param_2 * 2,puVar39,uVar27);
  FUN_1439e4dc0((longlong)local_3d58 + -3 + lVar30,local_3c78 + (int)(uVar27 * 6),uVar27);
  if (0 < (int)local_3d50) {
    lVar36 = param_2 * 2 - (longlong)local_3d58;
    local_3c88 = local_3d20 * 2;
    lVar30 = param_2 * 4 + (longlong)local_3d58;
    local_3c90 = -param_2;
    local_3d58 = (char *)(local_3d30 + local_3d20);
    local_3ce0 = param_2 * -3;
    local_3ce8 = param_2 * -6;
    local_3d20 = -local_3d20;
    local_3d30 = (ulonglong)local_3d50 & 0xffffffff;
    puVar34 = local_3c78 + (int)(uVar27 * 7);
    do {
      FUN_1439e4dc0(lVar30 + -3,puVar34,uVar33 & 0xffffffff);
      auVar25 = _DAT_145cb6aa0;
      auVar24 = _DAT_145cb6a90;
      auVar23 = _DAT_145cabab0;
      puVar32 = puVar31;
      puVar35 = puVar34;
      puVar38 = puVar37;
      puVar26 = puVar40;
      if (0 < (int)local_3d48) {
        local_3cd8 = local_3d58;
        local_3d50 = puVar41 + lVar36;
        local_3cd0 = local_3ce0 + lVar30 + lVar36;
        local_3cc8 = puVar34 + lVar36;
        local_3cc0 = local_3d38 + lVar36;
        local_3cb8 = puVar39 + lVar36;
        local_3cb0 = puVar37 + lVar36;
        local_3c98 = puVar40 + lVar36;
        local_3ca8 = local_3d40 + lVar36;
        local_3ca0 = puVar31 + lVar36;
        uVar33 = (ulonglong)((local_3d48 - 1 >> 3) + 1);
        pcVar28 = local_3d58;
        puVar29 = (undefined8 *)(local_3ce8 + lVar30);
        do {
          uVar2 = *(undefined8 *)(local_3d50 + (longlong)puVar29);
          uVar3 = *(ulonglong *)(param_2 * 2 + (longlong)puVar29);
          uVar114 = (undefined1)((ulonglong)uVar2 >> 0x38);
          auVar46._8_6_ = 0;
          auVar46._0_8_ = uVar3;
          auVar46[0xe] = (char)(uVar3 >> 0x38);
          auVar46[0xf] = uVar114;
          auVar45._14_2_ = auVar46._14_2_;
          auVar45._8_5_ = 0;
          auVar45._0_8_ = uVar3;
          uVar113 = (undefined1)((ulonglong)uVar2 >> 0x30);
          auVar45[0xd] = uVar113;
          auVar44._13_3_ = auVar45._13_3_;
          auVar44._8_4_ = 0;
          auVar44._0_8_ = uVar3;
          auVar44[0xc] = (char)(uVar3 >> 0x30);
          auVar43._12_4_ = auVar44._12_4_;
          auVar43._8_3_ = 0;
          auVar43._0_8_ = uVar3;
          uVar112 = (undefined1)((ulonglong)uVar2 >> 0x28);
          auVar43[0xb] = uVar112;
          auVar42._11_5_ = auVar43._11_5_;
          auVar42._8_2_ = 0;
          auVar42._0_8_ = uVar3;
          auVar42[10] = (char)(uVar3 >> 0x28);
          auVar123._10_6_ = auVar42._10_6_;
          auVar123[8] = 0;
          auVar123._0_8_ = uVar3;
          uVar111 = (undefined1)((ulonglong)uVar2 >> 0x20);
          auVar123[9] = uVar111;
          auVar97._9_7_ = auVar123._9_7_;
          auVar97[8] = (char)(uVar3 >> 0x20);
          auVar97._0_8_ = uVar3;
          auVar63._8_8_ = auVar97._8_8_;
          uVar110 = (undefined1)((ulonglong)uVar2 >> 0x18);
          auVar63[7] = uVar110;
          auVar63[6] = (char)(uVar3 >> 0x18);
          uVar109 = (undefined1)((ulonglong)uVar2 >> 0x10);
          auVar63[5] = uVar109;
          auVar63[4] = (char)(uVar3 >> 0x10);
          uVar108 = (undefined1)((ulonglong)uVar2 >> 8);
          auVar63[3] = uVar108;
          auVar63[2] = (char)(uVar3 >> 8);
          auVar63[0] = (undefined1)uVar3;
          auVar63[1] = (char)uVar2;
          puVar1 = puVar29 + 1;
          *(undefined1 (*) [16])(pcVar28 + 0x10 + local_3d20 + -0x10) = auVar63;
          uVar4 = *(undefined8 *)((longlong)puVar29 + local_3cd0);
          uVar3 = *(ulonglong *)((longlong)puVar29 + param_2 * 4);
          uVar5 = *(ulonglong *)(lVar30 + lVar36 + -8 + (longlong)puVar1);
          uVar6 = *(ulonglong *)((-8 - param_2) + (longlong)puVar1);
          auVar122._8_6_ = 0;
          auVar122._0_8_ = uVar3;
          auVar122[0xe] = (char)(uVar3 >> 0x38);
          auVar122[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar121._14_2_ = auVar122._14_2_;
          auVar121._8_5_ = 0;
          auVar121._0_8_ = uVar3;
          auVar121[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar120._13_3_ = auVar121._13_3_;
          auVar120._8_4_ = 0;
          auVar120._0_8_ = uVar3;
          auVar120[0xc] = (char)(uVar3 >> 0x30);
          auVar119._12_4_ = auVar120._12_4_;
          auVar119._8_3_ = 0;
          auVar119._0_8_ = uVar3;
          auVar119[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar118._11_5_ = auVar119._11_5_;
          auVar118._8_2_ = 0;
          auVar118._0_8_ = uVar3;
          auVar118[10] = (char)(uVar3 >> 0x28);
          auVar117._10_6_ = auVar118._10_6_;
          auVar117[8] = 0;
          auVar117._0_8_ = uVar3;
          auVar117[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar116._9_7_ = auVar117._9_7_;
          auVar116[8] = (char)(uVar3 >> 0x20);
          auVar116._0_8_ = uVar3;
          auVar115._8_8_ = auVar116._8_8_;
          auVar115[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar115[6] = (char)(uVar3 >> 0x18);
          auVar115[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar115[4] = (char)(uVar3 >> 0x10);
          auVar115[3] = (char)((ulonglong)uVar4 >> 8);
          auVar115[2] = (char)(uVar3 >> 8);
          auVar115[0] = (undefined1)uVar3;
          auVar115[1] = (char)uVar4;
          uVar4 = *(undefined8 *)(param_2 * 5 + -8 + (longlong)puVar1);
          auVar62._8_6_ = 0;
          auVar62._0_8_ = uVar5;
          auVar62[0xe] = (char)(uVar5 >> 0x38);
          auVar62[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar61._14_2_ = auVar62._14_2_;
          auVar61._8_5_ = 0;
          auVar61._0_8_ = uVar5;
          auVar61[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar60._13_3_ = auVar61._13_3_;
          auVar60._8_4_ = 0;
          auVar60._0_8_ = uVar5;
          auVar60[0xc] = (char)(uVar5 >> 0x30);
          auVar59._12_4_ = auVar60._12_4_;
          auVar59._8_3_ = 0;
          auVar59._0_8_ = uVar5;
          auVar59[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar58._11_5_ = auVar59._11_5_;
          auVar58._8_2_ = 0;
          auVar58._0_8_ = uVar5;
          auVar58[10] = (char)(uVar5 >> 0x28);
          auVar57._10_6_ = auVar58._10_6_;
          auVar57[8] = 0;
          auVar57._0_8_ = uVar5;
          auVar57[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar56._9_7_ = auVar57._9_7_;
          auVar56[8] = (char)(uVar5 >> 0x20);
          auVar56._0_8_ = uVar5;
          auVar55._8_8_ = auVar56._8_8_;
          auVar55[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar55[6] = (char)(uVar5 >> 0x18);
          auVar55[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar55[4] = (char)(uVar5 >> 0x10);
          auVar55[3] = (char)((ulonglong)uVar4 >> 8);
          auVar55[2] = (char)(uVar5 >> 8);
          auVar55[0] = (undefined1)uVar5;
          auVar55[1] = (char)uVar4;
          uVar4 = *puVar29;
          auVar96._8_6_ = 0;
          auVar96._0_8_ = uVar6;
          auVar96[0xe] = (char)(uVar6 >> 0x38);
          auVar96[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar95._14_2_ = auVar96._14_2_;
          auVar95._8_5_ = 0;
          auVar95._0_8_ = uVar6;
          auVar95[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar94._13_3_ = auVar95._13_3_;
          auVar94._8_4_ = 0;
          auVar94._0_8_ = uVar6;
          auVar94[0xc] = (char)(uVar6 >> 0x30);
          auVar93._12_4_ = auVar94._12_4_;
          auVar93._8_3_ = 0;
          auVar93._0_8_ = uVar6;
          auVar93[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar92._11_5_ = auVar93._11_5_;
          auVar92._8_2_ = 0;
          auVar92._0_8_ = uVar6;
          auVar92[10] = (char)(uVar6 >> 0x28);
          auVar91._10_6_ = auVar92._10_6_;
          auVar91[8] = 0;
          auVar91._0_8_ = uVar6;
          auVar91[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar90._9_7_ = auVar91._9_7_;
          auVar90[8] = (char)(uVar6 >> 0x20);
          auVar90._0_8_ = uVar6;
          auVar89._8_8_ = auVar90._8_8_;
          auVar89[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar89[6] = (char)(uVar6 >> 0x18);
          auVar89[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar89[4] = (char)(uVar6 >> 0x10);
          auVar89[3] = (char)((ulonglong)uVar4 >> 8);
          auVar89[2] = (char)(uVar6 >> 8);
          auVar89[0] = (undefined1)uVar6;
          auVar89[1] = (char)uVar4;
          uVar4 = *(undefined8 *)(param_2 * 2 + -8 + (longlong)puVar1);
          auVar63 = pmaddubsw(auVar55,auVar24);
          auVar97 = pmaddubsw(auVar89,auVar24);
          auVar123 = pmaddubsw(auVar115,auVar25);
          auVar124._0_2_ = auVar123._0_2_ + auVar63._0_2_;
          auVar124._2_2_ = auVar123._2_2_ + auVar63._2_2_;
          auVar124._4_2_ = auVar123._4_2_ + auVar63._4_2_;
          auVar124._6_2_ = auVar123._6_2_ + auVar63._6_2_;
          auVar124._8_2_ = auVar123._8_2_ + auVar63._8_2_;
          auVar124._10_2_ = auVar123._10_2_ + auVar63._10_2_;
          auVar124._12_2_ = auVar123._12_2_ + auVar63._12_2_;
          auVar124._14_2_ = auVar123._14_2_ + auVar63._14_2_;
          uVar3 = *(ulonglong *)((longlong)puVar29 + param_2);
          auVar71._8_6_ = 0;
          auVar71._0_8_ = uVar3;
          auVar71[0xe] = (char)(uVar3 >> 0x38);
          auVar71[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar70._14_2_ = auVar71._14_2_;
          auVar70._8_5_ = 0;
          auVar70._0_8_ = uVar3;
          auVar70[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar69._13_3_ = auVar70._13_3_;
          auVar69._8_4_ = 0;
          auVar69._0_8_ = uVar3;
          auVar69[0xc] = (char)(uVar3 >> 0x30);
          auVar68._12_4_ = auVar69._12_4_;
          auVar68._8_3_ = 0;
          auVar68._0_8_ = uVar3;
          auVar68[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar67._11_5_ = auVar68._11_5_;
          auVar67._8_2_ = 0;
          auVar67._0_8_ = uVar3;
          auVar67[10] = (char)(uVar3 >> 0x28);
          auVar66._10_6_ = auVar67._10_6_;
          auVar66[8] = 0;
          auVar66._0_8_ = uVar3;
          auVar66[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar65._9_7_ = auVar66._9_7_;
          auVar65[8] = (char)(uVar3 >> 0x20);
          auVar65._0_8_ = uVar3;
          auVar64._8_8_ = auVar65._8_8_;
          auVar64[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar64[6] = (char)(uVar3 >> 0x18);
          auVar64[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar64[4] = (char)(uVar3 >> 0x10);
          auVar64[3] = (char)((ulonglong)uVar4 >> 8);
          auVar64[2] = (char)(uVar3 >> 8);
          auVar64[0] = (undefined1)uVar3;
          auVar64[1] = (char)uVar4;
          uVar4 = *(undefined8 *)(local_3cb0 + -8 + (longlong)puVar1);
          auVar63 = pmaddubsw(auVar64,auVar25);
          auVar98._0_2_ = auVar97._0_2_ + auVar63._0_2_;
          auVar98._2_2_ = auVar97._2_2_ + auVar63._2_2_;
          auVar98._4_2_ = auVar97._4_2_ + auVar63._4_2_;
          auVar98._6_2_ = auVar97._6_2_ + auVar63._6_2_;
          auVar98._8_2_ = auVar97._8_2_ + auVar63._8_2_;
          auVar98._10_2_ = auVar97._10_2_ + auVar63._10_2_;
          auVar98._12_2_ = auVar97._12_2_ + auVar63._12_2_;
          auVar98._14_2_ = auVar97._14_2_ + auVar63._14_2_;
          uVar3 = *(ulonglong *)(local_3cc8 + -8 + (longlong)puVar1);
          auVar63 = paddsw(auVar124,auVar98);
          uVar5 = *(ulonglong *)((longlong)puVar29 + (longlong)local_3cb8);
          auVar106._8_6_ = 0;
          auVar106._0_8_ = uVar5;
          auVar106[0xe] = (char)(uVar5 >> 0x38);
          auVar106[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar105._14_2_ = auVar106._14_2_;
          auVar105._8_5_ = 0;
          auVar105._0_8_ = uVar5;
          auVar105[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar104._13_3_ = auVar105._13_3_;
          auVar104._8_4_ = 0;
          auVar104._0_8_ = uVar5;
          auVar104[0xc] = (char)(uVar5 >> 0x30);
          auVar103._12_4_ = auVar104._12_4_;
          auVar103._8_3_ = 0;
          auVar103._0_8_ = uVar5;
          auVar103[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar102._11_5_ = auVar103._11_5_;
          auVar102._8_2_ = 0;
          auVar102._0_8_ = uVar5;
          auVar102[10] = (char)(uVar5 >> 0x28);
          auVar101._10_6_ = auVar102._10_6_;
          auVar101[8] = 0;
          auVar101._0_8_ = uVar5;
          auVar101[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar100._9_7_ = auVar101._9_7_;
          auVar100[8] = (char)(uVar5 >> 0x20);
          auVar100._0_8_ = uVar5;
          auVar99._8_8_ = auVar100._8_8_;
          auVar99[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar99[6] = (char)(uVar5 >> 0x18);
          auVar99[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar99[4] = (char)(uVar5 >> 0x10);
          auVar99[3] = (char)((ulonglong)uVar4 >> 8);
          auVar99[2] = (char)(uVar5 >> 8);
          auVar99[0] = (undefined1)uVar5;
          auVar99[1] = (char)uVar4;
          auVar123 = paddsw(auVar63,auVar23);
          uVar4 = *(undefined8 *)(local_3cc0 + -8 + (longlong)puVar1);
          auVar79._8_6_ = 0;
          auVar79._0_8_ = uVar3;
          auVar79[0xe] = (char)(uVar3 >> 0x38);
          auVar79[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar78._14_2_ = auVar79._14_2_;
          auVar78._8_5_ = 0;
          auVar78._0_8_ = uVar3;
          auVar78[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar77._13_3_ = auVar78._13_3_;
          auVar77._8_4_ = 0;
          auVar77._0_8_ = uVar3;
          auVar77[0xc] = (char)(uVar3 >> 0x30);
          auVar76._12_4_ = auVar77._12_4_;
          auVar76._8_3_ = 0;
          auVar76._0_8_ = uVar3;
          auVar76[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar75._11_5_ = auVar76._11_5_;
          auVar75._8_2_ = 0;
          auVar75._0_8_ = uVar3;
          auVar75[10] = (char)(uVar3 >> 0x28);
          auVar74._10_6_ = auVar75._10_6_;
          auVar74[8] = 0;
          auVar74._0_8_ = uVar3;
          auVar74[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar73._9_7_ = auVar74._9_7_;
          auVar73[8] = (char)(uVar3 >> 0x20);
          auVar73._0_8_ = uVar3;
          auVar72._8_8_ = auVar73._8_8_;
          auVar72[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar72[6] = (char)(uVar3 >> 0x18);
          auVar72[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar72[4] = (char)(uVar3 >> 0x10);
          auVar72[3] = (char)((ulonglong)uVar4 >> 8);
          auVar72[2] = (char)(uVar3 >> 8);
          auVar72[0] = (undefined1)uVar3;
          auVar72[1] = (char)uVar4;
          auVar63 = pmaddubsw(auVar72,auVar24);
          auVar97 = pmaddubsw(auVar99,auVar25);
          auVar123 = psraw(auVar123,7);
          sVar7 = auVar123._0_2_;
          sVar9 = auVar123._2_2_;
          sVar11 = auVar123._4_2_;
          sVar13 = auVar123._6_2_;
          sVar15 = auVar123._8_2_;
          sVar17 = auVar123._10_2_;
          sVar19 = auVar123._12_2_;
          sVar21 = auVar123._14_2_;
          auVar107._0_2_ = auVar97._0_2_ + auVar63._0_2_;
          auVar107._2_2_ = auVar97._2_2_ + auVar63._2_2_;
          auVar107._4_2_ = auVar97._4_2_ + auVar63._4_2_;
          auVar107._6_2_ = auVar97._6_2_ + auVar63._6_2_;
          auVar107._8_2_ = auVar97._8_2_ + auVar63._8_2_;
          auVar107._10_2_ = auVar97._10_2_ + auVar63._10_2_;
          auVar107._12_2_ = auVar97._12_2_ + auVar63._12_2_;
          auVar107._14_2_ = auVar97._14_2_ + auVar63._14_2_;
          uVar3 = *(ulonglong *)(local_3ca8 + -8 + (longlong)puVar1);
          uVar4 = *(undefined8 *)(local_3ca0 + -8 + (longlong)puVar1);
          auVar87._8_6_ = 0;
          auVar87._0_8_ = uVar3;
          auVar87[0xe] = (char)(uVar3 >> 0x38);
          auVar87[0xf] = (char)((ulonglong)uVar4 >> 0x38);
          auVar86._14_2_ = auVar87._14_2_;
          auVar86._8_5_ = 0;
          auVar86._0_8_ = uVar3;
          auVar86[0xd] = (char)((ulonglong)uVar4 >> 0x30);
          auVar85._13_3_ = auVar86._13_3_;
          auVar85._8_4_ = 0;
          auVar85._0_8_ = uVar3;
          auVar85[0xc] = (char)(uVar3 >> 0x30);
          auVar84._12_4_ = auVar85._12_4_;
          auVar84._8_3_ = 0;
          auVar84._0_8_ = uVar3;
          auVar84[0xb] = (char)((ulonglong)uVar4 >> 0x28);
          auVar83._11_5_ = auVar84._11_5_;
          auVar83._8_2_ = 0;
          auVar83._0_8_ = uVar3;
          auVar83[10] = (char)(uVar3 >> 0x28);
          auVar82._10_6_ = auVar83._10_6_;
          auVar82[8] = 0;
          auVar82._0_8_ = uVar3;
          auVar82[9] = (char)((ulonglong)uVar4 >> 0x20);
          auVar81._9_7_ = auVar82._9_7_;
          auVar81[8] = (char)(uVar3 >> 0x20);
          auVar81._0_8_ = uVar3;
          auVar80._8_8_ = auVar81._8_8_;
          auVar80[7] = (char)((ulonglong)uVar4 >> 0x18);
          auVar80[6] = (char)(uVar3 >> 0x18);
          auVar80[5] = (char)((ulonglong)uVar4 >> 0x10);
          auVar80[4] = (char)(uVar3 >> 0x10);
          auVar80[3] = (char)((ulonglong)uVar4 >> 8);
          auVar80[2] = (char)(uVar3 >> 8);
          auVar80[0] = (undefined1)uVar3;
          auVar80[1] = (char)uVar4;
          auVar97 = pmaddubsw(auVar80,auVar24);
          uVar3 = *(ulonglong *)(local_3c98 + -8 + (longlong)puVar1);
          auVar54._8_6_ = 0;
          auVar54._0_8_ = uVar3;
          auVar54[0xe] = (char)(uVar3 >> 0x38);
          auVar54[0xf] = uVar114;
          auVar53._14_2_ = auVar54._14_2_;
          auVar53._8_5_ = 0;
          auVar53._0_8_ = uVar3;
          auVar53[0xd] = uVar113;
          auVar52._13_3_ = auVar53._13_3_;
          auVar52._8_4_ = 0;
          auVar52._0_8_ = uVar3;
          auVar52[0xc] = (char)(uVar3 >> 0x30);
          auVar51._12_4_ = auVar52._12_4_;
          auVar51._8_3_ = 0;
          auVar51._0_8_ = uVar3;
          auVar51[0xb] = uVar112;
          auVar50._11_5_ = auVar51._11_5_;
          auVar50._8_2_ = 0;
          auVar50._0_8_ = uVar3;
          auVar50[10] = (char)(uVar3 >> 0x28);
          auVar49._10_6_ = auVar50._10_6_;
          auVar49[8] = 0;
          auVar49._0_8_ = uVar3;
          auVar49[9] = uVar111;
          auVar48._9_7_ = auVar49._9_7_;
          auVar48[8] = (char)(uVar3 >> 0x20);
          auVar48._0_8_ = uVar3;
          auVar47._8_8_ = auVar48._8_8_;
          auVar47[7] = uVar110;
          auVar47[6] = (char)(uVar3 >> 0x18);
          auVar47[5] = uVar109;
          auVar47[4] = (char)(uVar3 >> 0x10);
          auVar47[3] = uVar108;
          auVar47[2] = (char)(uVar3 >> 8);
          auVar47[0] = (undefined1)uVar3;
          auVar47[1] = (char)uVar2;
          auVar63 = pmaddubsw(auVar47,auVar25);
          auVar88._0_2_ = auVar97._0_2_ + auVar63._0_2_;
          auVar88._2_2_ = auVar97._2_2_ + auVar63._2_2_;
          auVar88._4_2_ = auVar97._4_2_ + auVar63._4_2_;
          auVar88._6_2_ = auVar97._6_2_ + auVar63._6_2_;
          auVar88._8_2_ = auVar97._8_2_ + auVar63._8_2_;
          auVar88._10_2_ = auVar97._10_2_ + auVar63._10_2_;
          auVar88._12_2_ = auVar97._12_2_ + auVar63._12_2_;
          auVar88._14_2_ = auVar97._14_2_ + auVar63._14_2_;
          auVar63 = paddsw(auVar107,auVar88);
          auVar63 = paddsw(auVar63,auVar23);
          auVar63 = psraw(auVar63,7);
          sVar8 = auVar63._0_2_;
          sVar10 = auVar63._2_2_;
          sVar12 = auVar63._4_2_;
          sVar14 = auVar63._6_2_;
          sVar16 = auVar63._8_2_;
          sVar18 = auVar63._10_2_;
          sVar20 = auVar63._12_2_;
          sVar22 = auVar63._14_2_;
          *pcVar28 = (0 < sVar7) * (sVar7 < 0x100) * auVar123[0] - (0xff < sVar7);
          pcVar28[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar63[0] - (0xff < sVar8);
          pcVar28[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar123[2] - (0xff < sVar9);
          pcVar28[3] = (0 < sVar10) * (sVar10 < 0x100) * auVar63[2] - (0xff < sVar10);
          pcVar28[4] = (0 < sVar11) * (sVar11 < 0x100) * auVar123[4] - (0xff < sVar11);
          pcVar28[5] = (0 < sVar12) * (sVar12 < 0x100) * auVar63[4] - (0xff < sVar12);
          pcVar28[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar123[6] - (0xff < sVar13);
          pcVar28[7] = (0 < sVar14) * (sVar14 < 0x100) * auVar63[6] - (0xff < sVar14);
          pcVar28[8] = (0 < sVar15) * (sVar15 < 0x100) * auVar123[8] - (0xff < sVar15);
          pcVar28[9] = (0 < sVar16) * (sVar16 < 0x100) * auVar63[8] - (0xff < sVar16);
          pcVar28[10] = (0 < sVar17) * (sVar17 < 0x100) * auVar123[10] - (0xff < sVar17);
          pcVar28[0xb] = (0 < sVar18) * (sVar18 < 0x100) * auVar63[10] - (0xff < sVar18);
          pcVar28[0xc] = (0 < sVar19) * (sVar19 < 0x100) * auVar123[0xc] - (0xff < sVar19);
          pcVar28[0xd] = (0 < sVar20) * (sVar20 < 0x100) * auVar63[0xc] - (0xff < sVar20);
          pcVar28[0xe] = (0 < sVar21) * (sVar21 < 0x100) * auVar123[0xe] - (0xff < sVar21);
          pcVar28[0xf] = (0 < sVar22) * (sVar22 < 0x100) * auVar63[0xe] - (0xff < sVar22);
          uVar33 = uVar33 - 1;
          pcVar28 = pcVar28 + 0x10;
          puVar29 = puVar1;
        } while (uVar33 != 0);
        uVar33 = (ulonglong)local_3d28;
        puVar32 = local_3d18;
        puVar35 = local_3cf0;
        puVar38 = local_3d00;
        puVar39 = local_3cf8;
        puVar26 = local_3d10;
        puVar41 = local_3d08;
      }
      puVar40 = puVar41;
      puVar31 = puVar26;
      puVar37 = puVar39;
      local_3cf0 = local_3d40;
      lVar30 = lVar30 + param_2;
      local_3cf8 = local_3d38;
      lVar36 = lVar36 + local_3c90;
      local_3d58 = local_3d58 + local_3c88;
      local_3d30 = local_3d30 - 1;
      puVar34 = local_3d40;
      puVar39 = local_3d38;
      puVar41 = puVar38;
      local_3d40 = puVar32;
      local_3d38 = puVar35;
      local_3d18 = puVar31;
      local_3d10 = puVar40;
      local_3d08 = puVar38;
      local_3d00 = puVar37;
    } while (local_3d30 != 0);
  }
  return;
}



// FUNCTION 1439e5410 FUN_1439e5410 body=339 status=ok
// SIG undefined FUN_1439e5410(void)

void FUN_1439e5410(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar3 = iVar1 / 2;
  iVar4 = iVar2 / 2;
  if ((iVar1 * 2 == *(int *)(param_1 + 8)) && (iVar2 * 2 == *(int *)(param_1 + 0xc))) {
    FUN_1439e4ce0(*(undefined8 *)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x10),
                  *(undefined8 *)(param_2 + 0x38),(longlong)*(int *)(param_2 + 0x10),iVar1,iVar2);
    FUN_1439e4ce0(*(undefined8 *)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x24),
                  *(undefined8 *)(param_2 + 0x40),(longlong)*(int *)(param_2 + 0x24),iVar3,iVar4);
    FUN_1439e4ce0(*(undefined8 *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x24),
                  *(undefined8 *)(param_2 + 0x48),(longlong)*(int *)(param_2 + 0x24),iVar3,iVar4);
    FUN_1439d1430(param_2);
  }
  else if ((iVar1 == *(int *)(param_1 + 8) * 2) &&
          ((iVar2 == *(int *)(param_1 + 0xc) * 2 && (iVar3 < 0x781)))) {
    FUN_1439e4e80(*(undefined8 *)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x10),
                  *(undefined8 *)(param_2 + 0x38),(longlong)*(int *)(param_2 + 0x10),iVar1,iVar2);
    FUN_1439e4e80(*(undefined8 *)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x24),
                  *(undefined8 *)(param_2 + 0x40),(longlong)*(int *)(param_2 + 0x24),iVar3,iVar4);
    FUN_1439e4e80(*(undefined8 *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x24),
                  *(undefined8 *)(param_2 + 0x48),(longlong)*(int *)(param_2 + 0x24),iVar3,iVar4);
    FUN_1439d1430(param_2);
  }
  else {
    FUN_1439e49c0(param_1,param_2);
  }
  return;
}



// FUNCTION 1439e5570 FUN_1439e5570 body=59 status=ok
// SIG undefined FUN_1439e5570(void)

undefined8 * FUN_1439e5570(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 4;
  param_1[3] = 8;
  param_1[5] = 1;
  param_1[6] = 1;
  return param_1;
}



// FUNCTION 1439e55b0 FUN_1439e55b0 body=121 status=ok
// SIG undefined FUN_1439e55b0(void)

undefined8 *
FUN_1439e55b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xc] = param_4;
  return param_1;
}



// FUNCTION 1439e5630 FUN_1439e5630 body=130 status=ok
// SIG undefined FUN_1439e5630(void)

undefined8 *
FUN_1439e5630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x12] = mkvparser::Track::EOSBlock::vftable;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *param_1 = mkvparser::VideoTrack::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 1439e56c0 FUN_1439e56c0 body=46 status=ok
// SIG undefined FUN_1439e56c0(void)

void FUN_1439e56c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1439e58c0(lVar1);
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 1439e56f0 FUN_1439e56f0 body=13 status=ok
// SIG undefined FUN_1439e56f0(void)

void FUN_1439e56f0(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FMemory::operator_delete(*param_1,8);
    }
    if (param_1[1] != 0) {
      FMemory::operator_delete(param_1[1],8);
    }
    if (param_1[2] != 0) {
      FMemory::operator_delete(param_1[2],8);
    }
    if (param_1[3] != 0) {
      FMemory::operator_delete(param_1[3],8);
    }
    FMemory::operator_delete(param_1,0x28);
  }
  return;
}



// FUNCTION 1439e5700 FUN_1439e5700 body=47 status=ok
// SIG undefined FUN_1439e5700(void)

void FUN_1439e5700(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FMemory::operator_delete(*(undefined8 *)(lVar1 + 8));
    FMemory::operator_delete(lVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 1439e5730 FUN_1439e5730 body=258 status=ok
// SIG undefined FUN_1439e5730(void)

void FUN_1439e5730(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  iVar2 = *(int *)(param_1 + 0x34);
  while (0 < iVar2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    plVar4 = (longlong *)((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28))
    ;
    iVar2 = *(int *)((longlong)plVar4 + 0xc);
    while (0 < iVar2) {
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + -1;
      FUN_1439e6300((longlong)*(int *)((longlong)plVar4 + 0xc) * 0x30 + *plVar4);
      iVar2 = *(int *)((longlong)plVar4 + 0xc);
    }
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + -8);
      _eh_vector_destructor_iterator_(lVar3,0x30,*plVar1,FUN_140447710,uVar5);
      FMemory::operator_delete(plVar1,*plVar1 * 0x30 + 8);
    }
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
    iVar2 = *(int *)(param_1 + 0x34);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(lVar3 + -8);
    _eh_vector_destructor_iterator_(lVar3,0x10,*plVar4,FUN_140447710,uVar5);
    FMemory::operator_delete(plVar4,*plVar4 * 0x10 + 8);
  }
  return;
}



// FUNCTION 1439e5840 FUN_1439e5840 body=115 status=ok
// SIG undefined FUN_1439e5840(void)

void FUN_1439e5840(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (0 < *(int *)(param_1 + 0x3c)) {
    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar3 + *(int *)(param_1 + 0x3c);
    while (plVar3 != plVar1) {
      puVar2 = (undefined8 *)*plVar3;
      plVar3 = plVar3 + 1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FMemory::operator_delete(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1439e58c0 FUN_1439e58c0 body=148 status=ok
// SIG undefined FUN_1439e58c0(void)

void FUN_1439e58c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::operator_delete(*plVar1,8);
    }
    if (plVar1[1] != 0) {
      FMemory::operator_delete(plVar1[1],8);
    }
    if (plVar1[2] != 0) {
      FMemory::operator_delete(plVar1[2],8);
    }
    if (plVar1[3] != 0) {
      FMemory::operator_delete(plVar1[3],8);
    }
    FMemory::operator_delete(plVar1,0x28);
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 1439e5960 FUN_1439e5960 body=183 status=ok
// SIG undefined FUN_1439e5960(void)

void FUN_1439e5960(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 8));
      FMemory::operator_delete(lVar2,0x18);
    }
  }
  FMemory::operator_delete(*param_1);
  plVar3 = (longlong *)param_1[2];
  plVar1 = (longlong *)param_1[3];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 8));
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x18));
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x28));
      FMemory::operator_delete(lVar2,0x50);
    }
  }
  FMemory::operator_delete(param_1[2]);
  return;
}



// FUNCTION 1439e5a20 FUN_1439e5a20 body=116 status=ok
// SIG undefined FUN_1439e5a20(void)

void FUN_1439e5a20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar3 + (*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30));
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x20));
      FMemory::operator_delete(lVar2,0x30);
    }
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1439e5aa0 FUN_1439e5aa0 body=9 status=ok
// SIG undefined FUN_1439e5aa0(void)

void FUN_1439e5aa0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1439e5ab0 FUN_1439e5ab0 body=95 status=ok
// SIG undefined FUN_1439e5ab0(void)

void FUN_1439e5ab0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1439e5b10 FUN_1439e5b10 body=482 status=ok
// SIG undefined FUN_1439e5b10(void)

void FUN_1439e5b10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0xa0);
  plVar5 = plVar6 + (*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8));
  while (plVar6 != plVar5) {
    lVar2 = *plVar6;
    plVar6 = plVar6 + 1;
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x3c)) {
        plVar4 = *(longlong **)(lVar2 + 0x30);
        plVar1 = plVar4 + *(int *)(lVar2 + 0x3c);
        while (plVar4 != plVar1) {
          puVar3 = (undefined8 *)*plVar4;
          plVar4 = plVar4 + 1;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x30));
      FMemory::operator_delete(lVar2,0x40);
    }
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0xa0));
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x28);
    plVar6 = *(longlong **)(lVar2 + 0x30);
    while (plVar5 != plVar6) {
      puVar3 = (undefined8 *)*plVar5;
      plVar5 = plVar5 + 1;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x28));
    FMemory::operator_delete(lVar2,0x38);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x38));
    *(undefined8 *)(lVar2 + 0x38) = 0;
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = 0;
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x48));
    *(undefined8 *)(lVar2 + 0x48) = 0;
    FMemory::operator_delete(lVar2,0x50);
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (lVar2 != 0) {
    FUN_1439e5a20(lVar2);
    FMemory::operator_delete(lVar2,0x40);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    FUN_1439e5730(lVar2);
    FMemory::operator_delete(lVar2,0x38);
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_1439e5d00(lVar2);
    FMemory::operator_delete(lVar2,0x38);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x28));
    FMemory::operator_delete(*(undefined8 *)(lVar2 + 0x38));
    FMemory::operator_delete(lVar2,0x48);
  }
  FUN_1439e5840(param_1 + 0x20);
  return;
}



// FUNCTION 1439e5d00 FUN_1439e5d00 body=119 status=ok
// SIG undefined FUN_1439e5d00(void)

void FUN_1439e5d00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  iVar2 = *(int *)(param_1 + 0x34);
  while (0 < iVar2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    FUN_1439e63c0((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28));
    iVar2 = *(int *)(param_1 + 0x34);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + -8);
    _eh_vector_destructor_iterator_(lVar3,0x10,*plVar1,FUN_140447710,uVar4);
    FMemory::operator_delete(plVar1,*plVar1 * 0x10 + 8);
  }
  return;
}



// FUNCTION 1439e5d80 FUN_1439e5d80 body=290 status=ok
// SIG undefined FUN_1439e5d80(void)

void FUN_1439e5d80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = mkvparser::Track::vftable;
  FMemory::operator_delete(param_1[9]);
  param_1[9] = 0;
  FMemory::operator_delete(param_1[10]);
  param_1[10] = 0;
  FMemory::operator_delete(param_1[0xb]);
  param_1[0xb] = 0;
  FMemory::operator_delete(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FMemory::operator_delete(param_1[0xc]);
  param_1[0xc] = 0;
  plVar3 = (longlong *)param_1[0x15];
  plVar1 = (longlong *)param_1[0x16];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      FUN_1439e5960(lVar2);
      FMemory::operator_delete(lVar2,0x38);
    }
  }
  FMemory::operator_delete(param_1[0x15]);
  param_1[0x12] = mkvparser::BlockEntry::vftable;
  FMemory::operator_delete(param_1[9]);
  param_1[9] = 0;
  FMemory::operator_delete(param_1[10]);
  param_1[10] = 0;
  FMemory::operator_delete(param_1[0xb]);
  param_1[0xb] = 0;
  FMemory::operator_delete(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FMemory::operator_delete(param_1[0xc]);
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1439e5eb0 FUN_1439e5eb0 body=108 status=ok
// SIG undefined FUN_1439e5eb0(void)

void FUN_1439e5eb0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1e];
  *param_1 = mkvparser::VideoTrack::vftable;
  if (lVar1 != 0) {
    FUN_1439e58c0(lVar1);
    FMemory::operator_delete(lVar1,0x70);
  }
  lVar1 = param_1[0x1f];
  if (lVar1 != 0) {
    FMemory::operator_delete(*(undefined8 *)(lVar1 + 8));
    FMemory::operator_delete(lVar1,0x28);
  }
  FUN_1439e5d80(param_1);
  return;
}



// FUNCTION 1439e5f20 FUN_1439e5f20 body=107 status=ok
// SIG undefined FUN_1439e5f20(void)

void FUN_1439e5f20(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    if (*param_2 != 0) {
      FMemory::operator_delete(*param_2,8);
    }
    if (param_2[1] != 0) {
      FMemory::operator_delete(param_2[1],8);
    }
    if (param_2[2] != 0) {
      FMemory::operator_delete(param_2[2],8);
    }
    if (param_2[3] != 0) {
      FMemory::operator_delete(param_2[3],8);
    }
    FMemory::operator_delete(param_2,0x28);
  }
  return;
}



// FUNCTION 1439e5f90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkMusicSwitchCtx::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1439e5d80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1439e5fd0 FUN_1439e5fd0 body=43 status=ok
// SIG undefined FUN_1439e5fd0(void)

undefined8 * FUN_1439e5fd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1439e6000 FUN_1439e6000 body=66 status=ok
// SIG undefined FUN_1439e6000(void)

undefined8 * FUN_1439e6000(undefined8 *param_1,ulonglong param_2)

{
  FMemory::operator_delete(param_1[7]);
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1439e6050 FUN_1439e6050 body=43 status=ok
// SIG undefined FUN_1439e6050(void)

undefined8 * FUN_1439e6050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = mkvparser::IMkvReader::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1439e6080 FUN_1439e6080 body=66 status=ok
// SIG undefined FUN_1439e6080(void)

undefined8 * FUN_1439e6080(undefined8 *param_1,ulonglong param_2)

{
  FMemory::operator_delete(param_1[7]);
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1439e60d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkAttenuation::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1439e5d80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1439e6110 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkSrcPhysModel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1439e5eb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1439e6150 FUN_1439e6150 body=432 status=ok
// SIG undefined FUN_1439e6150(void)

ulonglong FUN_1439e6150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  ulonglong in_RAX;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  
  if (param_2 == 0) {
LAB_1439e62f6:
    return in_RAX & 0xffffffffffffff00;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 < 0) goto LAB_1439e62f6;
  iVar3 = *(int *)(param_1 + 0xb0);
  iVar15 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
  if ((iVar3 < iVar15) || (iVar2 != *(int *)(param_1 + 0xa8))) {
    return (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
  }
  if (iVar3 <= iVar15) {
    iVar11 = 0x800;
    if (0 < iVar3) {
      iVar11 = iVar3 * 2;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar11;
    uVar7 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar8 = (undefined8 *)operator_new(uVar7,&DAT_146bcbba8);
    plVar9 = (longlong *)0x0;
    if (puVar8 == (undefined8 *)0x0) goto LAB_1439e62b9;
    puVar10 = *(undefined8 **)(param_1 + 0xa0);
    uVar12 = 0;
    uVar14 = (longlong)iVar15 * 8 + 7U >> 3;
    if (puVar10 + iVar15 < puVar10) {
      uVar14 = uVar12;
    }
    puVar13 = puVar8;
    if (uVar14 != 0) {
      do {
        uVar12 = uVar12 + 1;
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar12 != uVar14);
    }
    FMemory::operator_delete(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 **)(param_1 + 0xa0) = puVar8;
    *(int *)(param_1 + 0xb0) = iVar11;
  }
  if (*(int *)(param_1 + 0xac) < 1) {
LAB_1439e62d2:
    lVar4 = *(longlong *)(param_1 + 0xa0);
    *(longlong *)(lVar4 + (longlong)iVar2 * 8) = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  plVar1 = (longlong *)(lVar4 + (longlong)*(int *)(param_1 + 0xa8) * 8);
  plVar9 = *(longlong **)(lVar4 + (longlong)*(int *)(param_1 + 0xa8) * 8);
  if ((plVar9 != (longlong *)0x0) && ((int)plVar9[2] < 0)) {
    plVar9 = (longlong *)(longlong)*(int *)(param_1 + 0xb0);
    plVar6 = plVar1 + *(int *)(param_1 + 0xac);
    if (plVar6 < (longlong *)(lVar4 + (longlong)plVar9 * 8)) {
      lVar4 = plVar6[-1];
      iVar3 = *(int *)(lVar4 + 0x10);
      while (plVar9 = plVar6 + -1, iVar3 < 0) {
        *plVar6 = lVar4;
        if (plVar9 == plVar1) goto LAB_1439e62d2;
        lVar4 = plVar6[-2];
        plVar6 = plVar9;
        iVar3 = *(int *)(lVar4 + 0x10);
      }
    }
  }
LAB_1439e62b9:
  return (ulonglong)plVar9 & 0xffffffffffffff00;
}



// FUNCTION 1439e6300 FUN_1439e6300 body=189 status=ok
// SIG undefined FUN_1439e6300(void)

void FUN_1439e6300(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  FMemory::operator_delete(*param_1);
  *param_1 = 0;
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  while (0 < iVar3) {
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + -1;
    puVar2 = (undefined8 *)(param_1[4] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x18);
    FMemory::operator_delete(*puVar2);
    *puVar2 = 0;
    FMemory::operator_delete(puVar2[1]);
    puVar2[1] = 0;
    FMemory::operator_delete(puVar2[2]);
    puVar2[2] = 0;
    iVar3 = *(int *)((longlong)param_1 + 0x2c);
  }
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    plVar1 = (longlong *)(lVar4 + -8);
    _eh_vector_destructor_iterator_(lVar4,0x18,*plVar1,FUN_140447710,uVar5);
    FMemory::operator_delete(plVar1,*plVar1 * 0x18 + 8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1439e63c0 FUN_1439e63c0 body=165 status=ok
// SIG undefined FUN_1439e63c0(void)

void FUN_1439e63c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  while (0 < iVar2) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
    puVar4 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x10 + *param_1);
    FMemory::operator_delete(*puVar4);
    *puVar4 = 0;
    FMemory::operator_delete(puVar4[1]);
    puVar4[1] = 0;
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + -8);
    _eh_vector_destructor_iterator_(lVar3,0x10,*plVar1,FUN_140447710,uVar5);
    FMemory::operator_delete(plVar1,*plVar1 * 0x10 + 8);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 1439e6470 FUN_1439e6470 body=290 status=ok
// SIG undefined FUN_1439e6470(void)

undefined8 FUN_1439e6470(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *_Dst;
  
  if (param_2 != param_1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x18];
    uVar3 = param_1[0x19];
    uVar4 = param_1[0x1a];
    uVar5 = param_1[0x1b];
    param_2[0x18] = uVar2;
    param_2[0x19] = uVar3;
    param_2[0x1a] = uVar4;
    param_2[0x1b] = uVar5;
    uVar6 = FUN_1439e65a0(uVar2,0x28,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1439e65a0(param_1,0x30,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1439e65a0(param_1,0x38,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1439e65a0(param_1,0x40,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x14);
    if (uVar1 != 0) {
      if (((*(longlong *)(param_1 + 0x12) == 0) || (*(longlong *)(param_2 + 0x12) != 0)) ||
         (*(longlong *)(param_2 + 0x14) != 0)) {
        return 0xffffffff;
      }
      if (uVar1 == 0) {
        _Dst = (void *)0x0;
      }
      else if (uVar1 < 0x80000001) {
        _Dst = (void *)operator_new(uVar1,&DAT_146bcbba8);
      }
      else {
        _Dst = (void *)0x0;
      }
      *(void **)(param_2 + 0x12) = _Dst;
      if (_Dst == (void *)0x0) {
        return 0xffffffff;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    }
  }
  return 0;
}



// FUNCTION 1439e65a0 FUN_1439e65a0 body=208 status=ok
// SIG undefined FUN_1439e65a0(void)

undefined4 FUN_1439e65a0(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar3;
  
  if (param_2 == -1) {
    return 0xffffffff;
  }
  lVar6 = (longlong)param_2;
  if (*(longlong *)(lVar6 + param_3) != 0) {
    return 0xffffffff;
  }
  pcVar5 = *(char **)(lVar6 + param_1);
  if (pcVar5 != (char *)0x0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (pcVar5[lVar2] != '\0');
    uVar4 = lVar3 + 2;
    if ((uVar4 == 0) || (0x80000000 < uVar4)) {
      *(undefined8 *)(lVar6 + param_3) = 0;
      return 0xffffffff;
    }
    lVar2 = operator_new(uVar4,&DAT_146bcbba8);
    *(longlong *)(lVar6 + param_3) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    lVar2 = lVar2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[lVar2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return 0;
}



// FUNCTION 1439e6670 FUN_1439e6670 body=165 status=ok
// SIG undefined FUN_1439e6670(void)

longlong * FUN_1439e6670(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  
  if ((param_1 != 0) && (-1 < param_3)) {
    param_3 = *(longlong *)(param_1 + 0x10) + param_3;
    plVar1 = (longlong *)operator_new(0x40,&DAT_146bcbba8);
    if (plVar1 != (longlong *)0x0) {
      plVar1[1] = param_3;
      plVar1[3] = param_3;
      *plVar1 = param_1;
      *(undefined4 *)(plVar1 + 2) = param_2;
      plVar1[4] = -1;
      plVar1[5] = -1;
      plVar1[6] = 0;
      *(undefined4 *)(plVar1 + 7) = 0;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = 0xffffffff;
      return plVar1;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 1439e6720 FUN_1439e6720 body=272 status=ok
// SIG undefined FUN_1439e6720(void)

int FUN_1439e6720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_5 == 0) {
    puVar2 = (undefined8 *)operator_new(0xb8,&DAT_146bcbba8);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = -1;
    }
    else {
      puVar2[1] = param_1;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      *puVar2 = mkvparser::Track::vftable;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = mkvparser::Track::EOSBlock::vftable;
      *(undefined4 *)(puVar2 + 0x14) = 0x80000000;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      iVar1 = FUN_1439e6470(param_2);
      if (iVar1 == 0) {
        *param_5 = (longlong)puVar2;
        iVar1 = 0;
      }
      else {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1439e6830 FUN_1439e6830 body=343 status=ok
// SIG undefined FUN_1439e6830(void)

undefined8 FUN_1439e6830(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  if ((param_2 != 0xa0) && (param_2 != 0xa3)) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(0x400),0);
    *(undefined4 *)(param_1 + 0x38) = 0x400;
    if (SUB168(ZEXT816(8) * ZEXT816(0x400),8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar4 = operator_new(uVar3);
    *(longlong *)(param_1 + 0x30) = lVar4;
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x3c)) {
    iVar2 = *(int *)(param_1 + 0x38) * 2;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar2;
    uVar3 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new(uVar3);
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    uVar6 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    uVar9 = (longlong)*(int *)(param_1 + 0x3c) * 8 + 7U >> 3;
    if (puVar7 + *(int *)(param_1 + 0x3c) < puVar7) {
      uVar9 = uVar6;
    }
    puVar8 = puVar5;
    if (uVar9 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar8 = *puVar7;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 != uVar9);
    }
    FMemory::operator_delete(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x38) = iVar2;
  }
  if (param_2 == 0xa0) {
    uVar3 = FUN_1439e6990();
  }
  else {
    uVar3 = FUN_1439e6e60(param_1,param_3,param_4);
  }
  return uVar3;
}



// FUNCTION 1439e6990 FUN_1439e6990 body=623 status=ok
// SIG undefined FUN_1439e6990(void)

ulonglong FUN_1439e6990(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_58;
  longlong local_50 [2];
  
  param_3 = param_2 + param_3;
  local_res18 = 1;
  local_58 = 0;
  uVar2 = *(undefined8 *)*param_1;
  local_res10 = -1;
  lVar10 = -1;
  lVar9 = -1;
  local_res20 = param_4;
  if (param_2 < param_3) {
    do {
      lVar5 = FUN_1439edd80(uVar2,param_2,&local_res8);
      if (lVar5 < 0) {
        return 0xfffffffe;
      }
      param_2 = param_2 + (int)local_res8;
      if (param_3 < param_2) {
        return 0xfffffffe;
      }
      lVar6 = FUN_1439ede90(uVar2,param_2,&local_res8);
      param_2 = param_2 + (int)local_res8;
      lVar3 = local_58;
      if (lVar5 == 0xa1) {
        if (lVar10 < 0) {
          lVar9 = lVar6;
          lVar10 = param_2;
        }
      }
      else if (lVar5 == 0x9b) {
        if (8 < lVar6) {
          return 0xfffffffe;
        }
        local_res10 = FUN_1439ee650(uVar2,param_2,lVar6);
        if (local_res10 < 0) {
          return 0xfffffffe;
        }
      }
      else if (lVar5 == 0xfb) {
        if (8 < lVar6) {
          return 0xfffffffe;
        }
        if (lVar6 < 1) {
          return 0xfffffffe;
        }
        iVar4 = FUN_1439ee4a0(uVar2,param_2,(longlong)(int)lVar6,local_50);
        if (iVar4 != 0) {
          return 0xffffffffffffffff;
        }
        lVar3 = local_50[0];
        if (local_50[0] < 1) {
          local_res18 = local_50[0];
          lVar3 = local_58;
        }
      }
      local_58 = lVar3;
      lVar5 = local_res10;
      param_2 = param_2 + lVar6;
      if (param_3 < param_2) {
        return 0xfffffffe;
      }
    } while (param_2 < param_3);
    if ((-1 < lVar10) && (param_2 == param_3)) {
      iVar4 = *(int *)((longlong)param_1 + 0x3c);
      plVar1 = (longlong *)(param_1[6] + (longlong)iVar4 * 8);
      local_res8 = (undefined8 *)operator_new(0x68);
      puVar7 = (undefined8 *)0x0;
      if (local_res8 != (undefined8 *)0x0) {
        local_res8[1] = param_1;
        *local_res8 = mkvparser::BlockGroup::vftable;
        *(int *)(local_res8 + 2) = iVar4;
        local_res8[9] = local_res20;
        local_res8[3] = lVar10;
        local_res8[4] = lVar9;
        local_res8[5] = 0;
        *(undefined2 *)(local_res8 + 6) = 0xffff;
        *(undefined1 *)((longlong)local_res8 + 0x32) = 0;
        local_res8[7] = 0;
        *(undefined4 *)(local_res8 + 8) = 0xffffffff;
        local_res8[10] = local_res18;
        local_res8[0xb] = local_58;
        local_res8[0xc] = lVar5;
        puVar7 = local_res8;
      }
      *plVar1 = (longlong)puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = FUN_1439e9780(puVar7);
        if ((int)uVar8 != 0) {
          puVar7 = (undefined8 *)*plVar1;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7,1);
          }
          *plVar1 = 0;
          return uVar8 & 0xffffffff;
        }
        *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
        return uVar8;
      }
      return 0xffffffff;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439e6c00 FUN_1439e6c00 body=606 status=ok
// SIG undefined FUN_1439e6c00(void)

longlong FUN_1439e6c00(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res20;
  longlong local_38 [2];
  
  if ((param_1 == (longlong *)0x0) || (param_2 < 0)) {
    return -1;
  }
  lVar5 = 0;
  *param_3 = 0;
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&local_res20,local_38);
  if (iVar1 < 0) {
    return (longlong)iVar1;
  }
  if ((local_38[0] < 0) || ((-1 < local_res20 && (local_res20 < local_38[0])))) {
    return -1;
  }
  while( true ) {
    if ((-1 < local_res20) && (local_res20 <= param_2)) {
      return -2;
    }
    lVar2 = FUN_1439e8350(param_1,param_2,&local_res8);
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = (longlong)(int)local_res8;
    if ((-1 < local_res20) && (local_res20 < param_2 + lVar2)) {
      return -2;
    }
    lVar6 = param_2;
    if (local_38[0] < param_2 + lVar2) break;
    lVar3 = FUN_1439edd80(param_1,param_2,&local_res8);
    if (lVar3 < 0) {
      return -2;
    }
    lVar6 = param_2 + (int)local_res8;
    lVar2 = FUN_1439e8350(param_1,lVar6,&local_res8);
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = (longlong)(int)local_res8;
    if ((-1 < local_res20) && (local_res20 < lVar6 + lVar2)) {
      return -2;
    }
    if (local_38[0] < lVar6 + lVar2) break;
    lVar2 = FUN_1439ede90(param_1,lVar6,&local_res8);
    if (lVar2 < 0) {
      return lVar2;
    }
    lVar6 = lVar6 + (int)local_res8;
    lVar4 = (1L << ((char)local_res8 * '\a' & 0x3fU)) + -1;
    if (lVar3 == 0x18538067) {
      lVar3 = -1;
      if (((lVar2 != lVar4) && (-1 < local_res20)) && (lVar3 = lVar2, local_res20 < lVar2 + lVar6))
      {
        lVar3 = -1;
      }
      local_res8 = operator_new(0xb8,&DAT_146bcbba8);
      if (local_res8 != 0) {
        lVar5 = FUN_1439e55b0(local_res8,param_1,param_2,lVar6,lVar3);
      }
      *param_3 = lVar5;
      return (ulonglong)(lVar5 != 0) - 1;
    }
    if (lVar2 == lVar4) {
      return -2;
    }
    if ((-1 < local_res20) && (local_res20 < lVar2 + lVar6)) {
      return -2;
    }
    param_2 = lVar6 + lVar2;
    if (local_38[0] < param_2) {
      return param_2;
    }
  }
  return lVar6 + lVar2;
}



// FUNCTION 1439e6e60 FUN_1439e6e60 body=202 status=ok
// SIG undefined FUN_1439e6e60(void)

ulonglong FUN_1439e6e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8);
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(int *)(puVar3 + 2) = iVar2;
    *puVar3 = mkvparser::SimpleBlock::vftable;
    puVar3[1] = param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 6) = 0xffff;
    *(undefined1 *)((longlong)puVar3 + 0x32) = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    puVar3[9] = 0;
  }
  *plVar1 = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar4 = FUN_1439e91e0(puVar3 + 3,puVar3[1]);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      uVar5 = uVar4;
    }
    else {
      puVar3 = (undefined8 *)*plVar1;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *plVar1 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 1439e6f30 FUN_1439e6f30 body=1100 status=ok
// SIG undefined FUN_1439e6f30(void)

longlong FUN_1439e6f30(undefined8 *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *local_res8;
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  
  if ((longlong)param_1[0xc] < 0) {
    lVar6 = FUN_1439e7380();
    return lVar6;
  }
  lVar6 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_48,&local_res20);
  if ((int)lVar6 < 0) {
    return lVar6;
  }
  if ((-1 < local_48) && (local_48 < local_res20)) {
    return 0xfffffffe;
  }
  if ((longlong)param_1[3] < 0) {
    lVar6 = -1;
  }
  else {
    lVar6 = param_1[2] + param_1[3];
  }
LAB_1439e6fc6:
  do {
    if ((-1 < local_48) && (local_48 <= (longlong)param_1[0xc])) {
      return 1;
    }
    if ((-1 < lVar6) && (lVar6 <= (longlong)param_1[0xc])) {
      return 1;
    }
    lVar7 = param_1[0xc];
    *param_2 = lVar7;
    if (local_res20 < lVar7 + 1) {
LAB_1439e734e:
      *param_3 = 1;
      return 0xfffffffd;
    }
    lVar7 = FUN_1439e8350(*param_1,lVar7,param_3);
    if (lVar7 < 0) {
      return lVar7;
    }
    if (0 < lVar7) {
      return 0xfffffffd;
    }
    if ((-1 < lVar6) && (lVar6 < (longlong)*param_3 + *param_2)) {
      return 0xfffffffe;
    }
    if (local_res20 < (longlong)*param_3 + *param_2) {
      return 0xfffffffd;
    }
    lVar7 = *param_2;
    lVar8 = FUN_1439edd80(*param_1,lVar7,param_3);
    if (lVar8 < 0) {
      return 0xfffffffe;
    }
    *param_2 = *param_2 + (longlong)*param_3;
    if (local_res20 < *param_2 + 1) goto LAB_1439e734e;
    lVar9 = FUN_1439e8350(*param_1,*param_2,param_3);
    if (lVar9 < 0) {
      return lVar9;
    }
    if (0 < lVar9) {
      return 0xfffffffd;
    }
    if ((-1 < lVar6) && (lVar6 < (longlong)*param_3 + *param_2)) {
      return 0xfffffffe;
    }
    if (local_res20 < (longlong)*param_3 + *param_2) {
      return 0xfffffffd;
    }
    lVar9 = FUN_1439ede90(*param_1,*param_2,param_3);
    if (lVar9 < 0) {
      return lVar9;
    }
    *param_2 = *param_2 + (longlong)*param_3;
    lVar2 = *param_2;
    if (lVar9 == 0) {
      param_1[0xc] = lVar2;
      goto LAB_1439e6fc6;
    }
    lVar10 = (1L << ((char)*param_3 * '\a' & 0x3fU)) + -1;
    if (((-1 < lVar6) && (lVar9 != lVar10)) && (lVar6 < lVar9 + lVar2)) {
      return 0xfffffffe;
    }
    if (lVar8 == 0x1c53bb6b) {
      if (lVar9 == lVar10) {
        return 0xfffffffe;
      }
      if (param_1[0x11] == 0) {
        local_res8 = (undefined8 *)operator_new(0x40);
        if (local_res8 != (undefined8 *)0x0) {
          lVar8 = *param_2;
          local_res8[1] = lVar8;
          local_res8[5] = 0;
          local_res8[6] = 0;
          local_res8[7] = lVar8;
          *local_res8 = param_1;
          local_res8[2] = lVar9;
          local_res8[3] = lVar7;
          local_res8[4] = (lVar2 - lVar7) + lVar9;
        }
        param_1[0x11] = local_res8;
        if (local_res8 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
      }
      param_1[0xc] = *param_2 + lVar9;
    }
    else {
      if (lVar8 == 0x1f43b675) {
        lVar7 = lVar7 - param_1[2];
        lVar8 = -1;
        if (lVar9 != lVar10) {
          lVar8 = lVar9;
        }
        if (lVar7 < 0) {
          return 0xfffffffe;
        }
        lVar9 = FUN_1439e8450(param_1,lVar7,&local_40,&local_res8);
        iVar5 = (int)lVar9;
        if (iVar5 < 0) {
          *param_2 = local_40;
          *param_3 = (int)local_res8;
          return lVar9;
        }
        iVar1 = *(int *)(param_1 + 0x15);
        if (0 < *(int *)((longlong)param_1 + 0xac)) {
          if (*(int *)(param_1 + 0x16) <= iVar1) {
            return 0xfffffffe;
          }
          plVar3 = *(longlong **)(param_1[0x14] + (longlong)iVar1 * 8);
          if (plVar3 == (longlong *)0x0) {
            return 0xfffffffe;
          }
          if (-1 < (int)plVar3[2]) {
            return 0xfffffffe;
          }
          lVar9 = plVar3[1] - *(longlong *)(*plVar3 + 0x10);
          if (lVar9 < 0) {
            return 0xfffffffe;
          }
          if (lVar9 == lVar7) {
            if (iVar5 == 0) {
              return 0xfffffffe;
            }
            if (lVar8 < 0) {
              if (plVar3[4] < 1) {
                return 0xfffffffe;
              }
              *param_2 = plVar3[4] + plVar3[1];
            }
            else {
              *param_2 = *param_2 + lVar8;
            }
            *(int *)(plVar3 + 2) = iVar1;
            *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
            *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + -1;
            lVar7 = *param_2;
            param_1[0xc] = lVar7;
            if (lVar6 < 0) {
              return 0;
            }
            goto LAB_1439e7281;
          }
        }
        if (iVar5 == 0) {
          if (-1 < lVar8) {
            *param_2 = *param_2 + lVar8;
          }
          if ((-1 < local_48) && (local_48 <= *param_2)) {
            param_1[0xc] = local_48;
            return 1;
          }
          if ((-1 < lVar6) && (lVar6 <= *param_2)) {
            param_1[0xc] = lVar6;
            return 1;
          }
          param_1[0xc] = *param_2;
          return 2;
        }
        lVar7 = FUN_1439e6670(param_1,iVar1,lVar7);
        if (lVar7 == 0) {
          return 0xffffffff;
        }
        cVar4 = FUN_1439e6150(param_1,lVar7);
        if (cVar4 == '\0') {
          FUN_1439e5840(lVar7);
          FMemory::operator_delete(lVar7,0x40);
          return 0xffffffff;
        }
        if (lVar8 < 0) {
          param_1[0xd] = lVar7;
          param_1[0xc] = -*param_2;
          return 0;
        }
        *param_2 = *param_2 + lVar8;
        lVar7 = *param_2;
        param_1[0xc] = lVar7;
        if (lVar6 < 1) {
          return 0;
        }
LAB_1439e7281:
        if (lVar7 <= lVar6) {
          return 0;
        }
        return 0xfffffffe;
      }
      if (lVar9 == lVar10) {
        return 0xfffffffe;
      }
      param_1[0xc] = lVar2 + lVar9;
    }
  } while( true );
}



// FUNCTION 1439e7380 FUN_1439e7380 body=124 status=ok
// SIG undefined FUN_1439e7380(void)

undefined8 FUN_1439e7380(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x60) < 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar1 = FUN_1439e9930();
    if (-1 < (int)uVar1) {
      if ((int)uVar1 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x20);
        if (lVar2 < 0) {
          return 0xfffffffe;
        }
        lVar2 = lVar2 + *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
        *param_2 = lVar2;
        *(longlong *)(param_1 + 0x60) = lVar2;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      return 2;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1439e7400 FUN_1439e7400 body=8 status=ok
// SIG undefined FUN_1439e7400(void)

bool FUN_1439e7400(longlong *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 1439e7410 FUN_1439e7410 body=363 status=ok
// SIG undefined FUN_1439e7410(void)

undefined8 FUN_1439e7410(ulonglong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    iVar10 = 1;
    if (iVar2 != 0) {
      iVar10 = iVar2 * 2;
    }
    uVar12 = (ulonglong)iVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar4 = SUB168(ZEXT816(0x30) * auVar3,0);
    if (SUB168(ZEXT816(0x30) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)operator_new(lVar5,&DAT_146bcbba8);
    puVar9 = (ulonglong *)0x0;
    puVar11 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
      *puVar6 = uVar12;
      _eh_vector_constructor_iterator_
                (puVar6 + 1,0x30,uVar12,UWaterWaves::GetWaterWaves,FUN_140447710);
      puVar11 = puVar6 + 1;
    }
    if (puVar11 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      puVar6 = puVar11 + 2;
      do {
        puVar7 = (ulonglong *)((longlong)puVar6 + *param_1 + (-0x10 - (longlong)puVar11));
        puVar6[-2] = *puVar7;
        puVar6[-1] = puVar7[1];
        *puVar6 = puVar7[2];
        puVar6[1] = puVar7[3];
        puVar6[2] = puVar7[4];
        *(int *)(puVar6 + 3) = (int)puVar7[5];
        *(undefined4 *)((longlong)puVar6 + 0x1c) = *(undefined4 *)((longlong)puVar7 + 0x2c);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (ulonglong *)(ulonglong)uVar8;
        puVar6 = puVar6 + 6;
      } while ((int)uVar8 < *(int *)((longlong)param_1 + 0xc));
    }
    uVar4 = *param_1;
    if (uVar4 != 0) {
      plVar1 = (longlong *)(uVar4 - 8);
      _eh_vector_destructor_iterator_(uVar4,0x30,*plVar1,FUN_140447710);
      FMemory::operator_delete(plVar1,*plVar1 * 0x30 + 8);
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 1) = iVar10;
  }
  return 1;
}



// FUNCTION 1439e7580 FUN_1439e7580 body=320 status=ok
// SIG undefined FUN_1439e7580(void)

undefined8 FUN_1439e7580(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 <= *(int *)(param_1 + 0x2c)) {
    iVar10 = 1;
    if (iVar2 != 0) {
      iVar10 = iVar2 * 2;
    }
    uVar12 = (ulonglong)iVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar4 = SUB168(ZEXT816(0x18) * auVar3,0);
    if (SUB168(ZEXT816(0x18) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)operator_new(lVar5,&DAT_146bcbba8);
    puVar9 = (ulonglong *)0x0;
    puVar11 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
      *puVar6 = uVar12;
      _eh_vector_constructor_iterator_
                (puVar6 + 1,0x18,uVar12,UWaterWaves::GetWaterWaves,FUN_140447710);
      puVar11 = puVar6 + 1;
    }
    if (puVar11 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x2c)) {
      puVar6 = puVar11 + 2;
      do {
        puVar7 = (ulonglong *)
                 ((longlong)puVar6 + *(longlong *)(param_1 + 0x20) + (-0x10 - (longlong)puVar11));
        puVar6[-2] = *puVar7;
        puVar6[-1] = puVar7[1];
        *puVar6 = puVar7[2];
        uVar8 = (int)puVar9 + 1;
        puVar9 = (ulonglong *)(ulonglong)uVar8;
        puVar6 = puVar6 + 3;
      } while ((int)uVar8 < *(int *)(param_1 + 0x2c));
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + -8);
      _eh_vector_destructor_iterator_(lVar5,0x18,*plVar1,FUN_140447710);
      FMemory::operator_delete(plVar1,*plVar1 * 0x18 + 8);
    }
    *(ulonglong **)(param_1 + 0x20) = puVar11;
    *(int *)(param_1 + 0x28) = iVar10;
  }
  return 1;
}



// FUNCTION 1439e76c0 FUN_1439e76c0 body=314 status=ok
// SIG undefined FUN_1439e76c0(void)

undefined8 FUN_1439e76c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 <= *(int *)(param_1 + 0x34)) {
    iVar10 = 1;
    if (iVar2 != 0) {
      iVar10 = iVar2 * 2;
    }
    uVar13 = (ulonglong)iVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    uVar4 = SUB168(ZEXT816(0x10) * auVar3,0);
    if (SUB168(ZEXT816(0x10) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)operator_new(lVar5,&DAT_146bcbba8);
    puVar9 = (ulonglong *)0x0;
    puVar11 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
      *puVar6 = uVar13;
      _eh_vector_constructor_iterator_
                (puVar6 + 1,0x10,uVar13,UWaterWaves::GetWaterWaves,FUN_140447710);
      puVar11 = puVar6 + 1;
    }
    if (puVar11 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x34)) {
      puVar12 = (undefined4 *)((longlong)puVar11 + 0xc);
      do {
        puVar7 = (undefined8 *)
                 ((longlong)puVar12 + *(longlong *)(param_1 + 0x28) + (-0xc - (longlong)puVar11));
        *(undefined8 *)(puVar12 + -3) = *puVar7;
        puVar12[-1] = *(undefined4 *)(puVar7 + 1);
        *puVar12 = *(undefined4 *)((longlong)puVar7 + 0xc);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (ulonglong *)(ulonglong)uVar8;
        puVar12 = puVar12 + 4;
      } while ((int)uVar8 < *(int *)(param_1 + 0x34));
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + -8);
      _eh_vector_destructor_iterator_(lVar5,0x10,*plVar1,FUN_140447710);
      FMemory::operator_delete(plVar1,*plVar1 * 0x10 + 8);
    }
    *(ulonglong **)(param_1 + 0x28) = puVar11;
    *(int *)(param_1 + 0x30) = iVar10;
  }
  return 1;
}



// FUNCTION 1439e7800 FUN_1439e7800 body=305 status=ok
// SIG undefined FUN_1439e7800(void)

undefined8 FUN_1439e7800(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    iVar10 = 1;
    if (iVar2 != 0) {
      iVar10 = iVar2 * 2;
    }
    uVar12 = (ulonglong)iVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar4 = SUB168(ZEXT816(0x10) * auVar3,0);
    if (SUB168(ZEXT816(0x10) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)operator_new(lVar5,&DAT_146bcbba8);
    puVar9 = (ulonglong *)0x0;
    puVar11 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
      *puVar6 = uVar12;
      _eh_vector_constructor_iterator_
                (puVar6 + 1,0x10,uVar12,UWaterWaves::GetWaterWaves,FUN_140447710);
      puVar11 = puVar6 + 1;
    }
    if (puVar11 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      puVar6 = puVar11;
      do {
        puVar7 = (ulonglong *)((longlong)puVar6 + (*param_1 - (longlong)puVar11));
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        uVar8 = (int)puVar9 + 1;
        puVar9 = (ulonglong *)(ulonglong)uVar8;
        puVar6 = puVar6 + 2;
      } while ((int)uVar8 < *(int *)((longlong)param_1 + 0xc));
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + -8);
      _eh_vector_destructor_iterator_(lVar5,0x10,*plVar1,FUN_140447710);
      FMemory::operator_delete(plVar1,*plVar1 * 0x10 + 8);
    }
    *param_1 = (longlong)puVar11;
    *(int *)(param_1 + 1) = iVar10;
  }
  return 1;
}



// FUNCTION 1439e7940 FUN_1439e7940 body=292 status=ok
// SIG undefined FUN_1439e7940(void)

longlong * FUN_1439e7940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if ((*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) || (*(int *)(param_1 + 0xa8) < 1)) {
    return (longlong *)(param_1 + 0x20);
  }
  plVar1 = (longlong *)**(longlong **)(param_1 + 0xa0);
  iVar3 = FUN_1439e8840(plVar1,local_res18,local_res8);
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar5 = plVar1[5];
  }
  if (-1 < lVar5) {
    lVar5 = *(longlong *)(*(longlong *)(*plVar1 + 0x78) + 0x28) * plVar1[5];
  }
  if (lVar5 < param_2) {
    iVar3 = *(int *)(param_1 + 0xa8);
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar6 + (iVar3 - iVar6) / 2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
        iVar4 = FUN_1439e8840(plVar1,local_res18,local_res8);
        lVar5 = (longlong)iVar4;
        if (-1 < iVar4) {
          lVar5 = plVar1[5];
        }
        if (-1 < lVar5) {
          lVar5 = *(longlong *)(*(longlong *)(*plVar1 + 0x78) + 0x28) * plVar1[5];
        }
        if (lVar5 <= param_2) {
          iVar6 = iVar2 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
      } while (iVar6 < iVar3);
    }
    return *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar6 + -1) * 8);
  }
  return plVar1;
}



// FUNCTION 1439e7a70 GetSerializeContext body=8 status=ok
// SIG undefined GetSerializeContext(void)

undefined8 FDuplicateDataWriter::GetSerializeContext(longlong param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// FUNCTION 1439e7a80 GetWorld body=8 status=ok
// SIG undefined GetWorld(void)

undefined8 ULevel::GetWorld(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 1439e7a90 GetWidth body=5 status=ok
// SIG undefined GetWidth(void)

undefined8 FHdrImageWrapper::GetWidth(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// FUNCTION 1439e7aa0 GetHeight body=5 status=ok
// SIG undefined GetHeight(void)

undefined8 FHdrImageWrapper::GetHeight(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// FUNCTION 1439e7ab0 FUN_1439e7ab0 body=12 status=ok
// SIG undefined FUN_1439e7ab0(void)

undefined8 FUN_1439e7ab0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x70);
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 1439e7ac0 FUN_1439e7ac0 body=42 status=ok
// SIG undefined FUN_1439e7ac0(void)

longlong FUN_1439e7ac0(longlong param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x78) + 0x30);
  if (dVar1 < 0.0) {
    return -1;
  }
  return (longlong)((double)*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x28) * dVar1);
}



// FUNCTION 1439e7af0 FUN_1439e7af0 body=390 status=ok
// SIG undefined FUN_1439e7af0(void)

longlong * FUN_1439e7af0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (*param_1 == 0) {
    return param_2 + 0x12;
  }
  iVar8 = 0;
  lVar9 = 0;
  plVar10 = param_2 + 0x12;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*(int *)((longlong)param_1 + 0x3c) <= iVar8) {
          iVar5 = FUN_1439e9930(param_1,local_res20,local_res8);
          if (0 < iVar5) {
            return plVar10;
          }
          if (iVar5 < 0) {
            return (longlong *)0x0;
          }
        }
        plVar1 = *(longlong **)(lVar9 + param_1[6]);
        lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
        if (*(longlong *)(lVar6 + 0x10) == (longlong)*(int *)((longlong)param_2 + 0x24)) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 8;
      }
      cVar4 = (**(code **)(*param_2 + 8))(param_2,plVar1);
      if (cVar4 != '\0') break;
      if (-1 < param_3) {
        lVar7 = FUN_1439e8270(lVar6,param_1);
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x78) + 0x28);
        if ((lVar7 == 0) ||
           (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
           lVar6 <= SUB168((auVar3 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar7),0))) {
          lVar6 = lVar6 * lVar7;
        }
        else {
          lVar6 = -1;
        }
        if (param_3 < lVar6) {
          return plVar10;
        }
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 8;
    }
    if (param_3 < 0) {
      return plVar1;
    }
    lVar7 = FUN_1439e8270(lVar6,param_1);
    lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x78) + 0x28);
    if ((lVar7 == 0) ||
       (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
       lVar6 <= SUB168((auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar7),0))) {
      lVar6 = lVar6 * lVar7;
    }
    else {
      lVar6 = -1;
    }
    if (param_3 < lVar6) break;
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 8;
    plVar10 = plVar1;
  }
  return plVar10;
}



// FUNCTION 1439e7c80 FUN_1439e7c80 body=108 status=ok
// SIG undefined FUN_1439e7c80(void)

undefined8 FUN_1439e7c80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar1 = FUN_1439e9930(param_1,local_res18,local_res8);
    if ((int)uVar1 < 0) {
      *param_2 = 0;
      return uVar1;
    }
    if (*(int *)(param_1 + 0x3c) < 1) {
      *param_2 = 0;
      return 0;
    }
  }
  *param_2 = **(undefined8 **)(param_1 + 0x30);
  return 0;
}



// FUNCTION 1439e7cf0 FUN_1439e7cf0 body=30 status=ok
// SIG undefined FUN_1439e7cf0(void)

longlong FUN_1439e7cf0(longlong param_1)

{
  if ((*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) && (0 < *(int *)(param_1 + 0xa8))) {
    return **(longlong **)(param_1 + 0xa0);
  }
  return param_1 + 0x20;
}



// FUNCTION 1439e7d10 FUN_1439e7d10 body=448 status=ok
// SIG undefined FUN_1439e7d10(void)

undefined8 FUN_1439e7d10(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  lVar4 = param_1[1];
  if ((*(undefined8 **)(lVar4 + 0xa0) == (undefined8 *)0x0) || (*(int *)(lVar4 + 0xa8) < 1)) {
    plVar5 = (longlong *)(lVar4 + 0x20);
  }
  else {
    plVar5 = (longlong *)**(undefined8 **)(lVar4 + 0xa0);
  }
  iVar6 = 0;
joined_r0x0001439e7d52:
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (*(int *)((longlong)plVar5 + 0x3c) < 1) {
        uVar3 = FUN_1439e9930(plVar5,local_res20,&local_res8);
        if ((int)uVar3 < 0) {
          *param_2 = 0;
          return uVar3;
        }
        if (0 < *(int *)((longlong)plVar5 + 0x3c)) goto LAB_1439e7d94;
        *param_2 = 0;
      }
      else {
LAB_1439e7d94:
        lVar4 = *(longlong *)plVar5[6];
        *param_2 = lVar4;
        if (lVar4 != 0) {
          do {
            lVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
            if ((*(longlong *)(lVar4 + 0x10) == (longlong)*(int *)((longlong)param_1 + 0x24)) &&
               (cVar2 = (**(code **)(*param_1 + 8))(param_1,*param_2), cVar2 != '\0')) {
              return 0;
            }
            uVar7 = (longlong)*(int *)(*param_2 + 0x10) + 1;
            if ((ulonglong)(longlong)*(int *)((longlong)plVar5 + 0x3c) <= uVar7) {
              uVar3 = FUN_1439e9930(plVar5,local_38,local_res18);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              if (0 < (int)uVar3) goto LAB_1439e7e07;
            }
            lVar4 = *(longlong *)(plVar5[6] + uVar7 * 8);
            if (lVar4 == 0) goto LAB_1439e7e07;
            *param_2 = lVar4;
          } while( true );
        }
      }
      goto LAB_1439e7e0e;
    }
    puVar1 = (undefined8 *)param_1[1];
    if ((longlong)puVar1[3] < 0) {
      iVar6 = (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,&local_res8,local_res18);
      if (iVar6 < 0) goto LAB_1439e7e26;
      if (local_res8 < 0) goto LAB_1439e7eb7;
      bVar8 = SBORROW8(puVar1[0xc],local_res8);
      local_res8 = puVar1[0xc] - local_res8;
    }
    else {
      local_res8 = puVar1[3] + puVar1[2];
      bVar8 = SBORROW8(puVar1[0xc],local_res8);
      local_res8 = puVar1[0xc] - local_res8;
    }
    if (bVar8 != local_res8 < 0) {
LAB_1439e7eb7:
      *param_2 = 0;
      return 0xfffffffd;
    }
  }
LAB_1439e7e26:
  *param_2 = (longlong)(param_1 + 0x12);
  return 1;
LAB_1439e7e07:
  iVar6 = iVar6 + 1;
  if (99 < iVar6) goto LAB_1439e7e26;
LAB_1439e7e0e:
  plVar5 = (longlong *)FUN_1439e7f90(param_1[1],plVar5);
  goto joined_r0x0001439e7d52;
}



// FUNCTION 1439e7ed0 FUN_1439e7ed0 body=12 status=ok
// SIG undefined FUN_1439e7ed0(void)

longlong FUN_1439e7ed0(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x20);
}



// FUNCTION 1439e7ee0 FUN_1439e7ee0 body=9 status=ok
// SIG undefined FUN_1439e7ee0(void)

undefined8 FUN_1439e7ee0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// FUNCTION 1439e7ef0 GetPerceptionComponent body=5 status=ok
// SIG undefined GetPerceptionComponent(void)

undefined8 AAIController::GetPerceptionComponent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 1439e7f00 FUN_1439e7f00 body=135 status=ok
// SIG undefined FUN_1439e7f00(void)

undefined8 FUN_1439e7f00(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar2 = (longlong)*(int *)(param_2 + 0x10) + 1;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x3c) <= uVar2) {
    uVar1 = FUN_1439e9930(param_1,local_res10,local_res8);
    if ((int)uVar1 < 0) {
      *param_3 = 0;
      return uVar1;
    }
    if (0 < (int)uVar1) {
      *param_3 = 0;
      return 0;
    }
  }
  *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar2 * 8);
  return 0;
}



// FUNCTION 1439e7f90 FUN_1439e7f90 body=622 status=ok
// SIG undefined FUN_1439e7f90(void)

longlong * FUN_1439e7f90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (-1 < *(int *)(param_2 + 0x10)) {
    iVar4 = *(int *)(param_2 + 0x10) + 1;
    if (iVar4 < *(int *)(param_1 + 0x15)) {
      return *(longlong **)(param_1[0x14] + (longlong)iVar4 * 8);
    }
    return param_1 + 4;
  }
  lVar10 = *(longlong *)(param_2 + 8);
  lVar1 = param_1[3];
  lVar2 = param_1[2];
  lVar5 = FUN_1439e8350(*param_1,lVar10,local_res10);
  if ((lVar5 == 0) && (lVar5 = FUN_1439edd80(*param_1,lVar10,local_res10), lVar5 == 0x1f43b675)) {
    lVar10 = lVar10 + local_res10[0];
    FUN_1439e8350(*param_1,lVar10,local_res10);
    lVar5 = FUN_1439ede90(*param_1,lVar10,local_res10);
    lVar10 = lVar10 + local_res10[0] + lVar5;
    while( true ) {
      lVar5 = lVar10;
      if (lVar1 + lVar2 <= lVar5) {
        return (longlong *)0x0;
      }
      lVar10 = FUN_1439e8350(*param_1,lVar5,local_res10);
      if (lVar10 != 0) break;
      lVar6 = FUN_1439edd80(*param_1,lVar5,local_res10);
      if (lVar6 < 0) {
        return (longlong *)0x0;
      }
      lVar11 = lVar5 + local_res10[0];
      FUN_1439e8350(*param_1,lVar11,local_res10);
      lVar7 = FUN_1439ede90(*param_1,lVar11,local_res10);
      lVar9 = (longlong)local_res10[0];
      lVar10 = lVar11 + lVar9;
      if (lVar7 != 0) {
        if (lVar6 == 0x1f43b675) {
          lVar5 = lVar5 - param_1[2];
          iVar4 = FUN_1439e8450(param_1,lVar5,local_res20,local_res18);
          if (0 < iVar4) {
            if (0 < lVar5) {
              uVar12 = param_1[0x14] + (longlong)*(int *)(param_1 + 0x15) * 8;
              uVar13 = uVar12 + (longlong)*(int *)((longlong)param_1 + 0xac) * 8;
              if (uVar12 < uVar13) {
                do {
                  lVar10 = (longlong)(uVar13 - uVar12) >> 3;
                  if (lVar10 < 0) {
                    lVar10 = lVar10 + 1;
                  }
                  plVar8 = *(longlong **)(uVar12 + (lVar10 >> 1) * 8);
                  uVar14 = uVar12 + (lVar10 >> 1) * 8;
                  lVar10 = plVar8[1] - *(longlong *)(*plVar8 + 0x10);
                  if (lVar10 < lVar5) {
                    uVar12 = uVar14 + 8;
                    uVar14 = uVar13;
                  }
                  else if (lVar10 <= lVar5) {
                    return plVar8;
                  }
                  uVar13 = uVar14;
                } while (uVar12 < uVar14);
              }
              plVar8 = (longlong *)FUN_1439e6670(param_1,0xffffffff,lVar5);
              if (plVar8 != (longlong *)0x0) {
                cVar3 = FUN_1439edbc0(param_1,plVar8,(longlong)(uVar12 - param_1[0x14]) >> 3);
                if (cVar3 != '\0') {
                  return plVar8;
                }
                FUN_1439e5840(plVar8);
                FMemory::operator_delete(plVar8,0x40);
              }
            }
            return (longlong *)0x0;
          }
        }
        lVar10 = lVar11 + lVar9 + lVar7;
      }
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 1439e8200 GetPeakStoreUse body=4 status=ok
// SIG undefined GetPeakStoreUse(void)

undefined4 BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// FUNCTION 1439e8210 GetTimeUntilNameResolved body=9 status=ok
// SIG undefined GetTimeUntilNameResolved(void)

undefined8
Electra::FHTTPResponseCache::FSynthesizedCacheResponse::GetTimeUntilNameResolved(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 1439e8220 FUN_1439e8220 body=76 status=ok
// SIG undefined FUN_1439e8220(void)

longlong FUN_1439e8220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  
  lVar3 = FUN_1439e8270();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x78) + 0x28);
  if ((lVar3 != 0) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
     SUB168((auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar3),0) < lVar1)) {
    return -1;
  }
  return lVar1 * lVar3;
}



// FUNCTION 1439e8270 FUN_1439e8270 body=124 status=ok
// SIG undefined FUN_1439e8270(void)

longlong FUN_1439e8270(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (param_2 == 0) {
    return (longlong)*(short *)(param_1 + 0x18);
  }
  iVar1 = FUN_1439e8840(param_2,local_res18,local_res10);
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar2 = *(longlong *)(param_2 + 0x28);
  }
  if ((-1 < lVar2) && ((longlong)*(short *)(param_1 + 0x18) <= 0x7fffffffffffffff - lVar2)) {
    return *(short *)(param_1 + 0x18) + lVar2;
  }
  return -1;
}



// FUNCTION 1439e82f0 FUN_1439e82f0 body=29 status=ok
// SIG undefined FUN_1439e82f0(void)

undefined8 FUN_1439e82f0(longlong param_1,uint param_2)

{
  if ((uint)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3) <= param_2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8);
}



// FUNCTION 1439e8310 FUN_1439e8310 body=5 status=ok
// SIG undefined FUN_1439e8310(void)

undefined8 FUN_1439e8310(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1439e8320 GetUsedSize body=8 status=ok
// SIG undefined GetUsedSize(void)

undefined8 FFileTable::GetUsedSize(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 1439e8330 FUN_1439e8330 body=13 status=ok
// SIG undefined FUN_1439e8330(void)

longlong FUN_1439e8330(longlong param_1)

{
  return *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3;
}



// FUNCTION 1439e8340 GetNumIndices body=4 status=ok
// SIG undefined GetNumIndices(void)

undefined4 TMeshAttributeArraySet<int>::GetNumIndices(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 1439e8350 FUN_1439e8350 body=225 status=ok
// SIG undefined FUN_1439e8350(void)

longlong FUN_1439e8350(longlong *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte local_res8 [8];
  longlong local_res20;
  longlong local_18 [2];
  
  if ((param_1 != (longlong *)0x0) && (-1 < param_2)) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1,local_18,&local_res20);
    if (-1 < iVar2) {
      if ((local_18[0] < 0) || (local_res20 <= local_18[0])) {
        *param_3 = 1;
        if (local_res20 <= param_2) {
          return param_2;
        }
        iVar2 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
        if (iVar2 != 0) {
          return (longlong)iVar2;
        }
        if (local_res8[0] != 0) {
          bVar1 = 0x80;
          if (-1 < (char)local_res8[0]) {
            do {
              *param_3 = *param_3 + 1;
              bVar1 = bVar1 >> 1;
            } while ((local_res8[0] & bVar1) == 0);
          }
          return 0;
        }
      }
    }
  }
  return -2;
}



// FUNCTION 1439e8440 FUN_1439e8440 body=8 status=ok
// SIG undefined FUN_1439e8440(void)

undefined8 FUN_1439e8440(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 1439e8450 FUN_1439e8450 body=910 status=ok
// SIG undefined FUN_1439e8450(void)

longlong FUN_1439e8450(undefined8 *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_28 [2];
  
  plVar1 = (longlong *)*param_1;
  lVar3 = (**(code **)(*plVar1 + 8))(plVar1,local_28,&local_res8);
  if ((int)lVar3 < 0) {
    return lVar3;
  }
  param_2 = param_1[2] + param_2;
  *param_3 = param_2;
  if ((-1 < local_28[0]) && (local_28[0] <= param_2)) {
    return 0;
  }
  lVar3 = -1;
  if ((longlong)param_1[3] < 0) {
    lVar5 = -1;
  }
  else {
    lVar5 = param_1[2] + param_1[3];
  }
  if (param_2 + 1 <= local_res8) {
    lVar4 = FUN_1439e8350(plVar1,param_2,param_4);
    if (lVar4 < 0) {
      return lVar4;
    }
    if (0 < lVar4) {
      return 0xfffffffd;
    }
    if ((-1 < lVar5) && (lVar5 < (longlong)*param_4 + *param_3)) {
      return 0xfffffffe;
    }
    if ((-1 < local_28[0]) && (local_28[0] < (longlong)*param_4 + *param_3)) {
      return 0;
    }
    if (local_res8 < (longlong)*param_4 + *param_3) {
      return 0xfffffffd;
    }
    lVar4 = FUN_1439edd80(plVar1,*param_3,param_4);
    if (lVar4 < 0) {
      return lVar4;
    }
    if (lVar4 != 0x1f43b675) {
      return 0xffffffff;
    }
    *param_3 = *param_3 + (longlong)*param_4;
    if (*param_3 + 1 <= local_res8) {
      lVar4 = FUN_1439e8350(plVar1,*param_3,param_4);
      if (lVar4 < 0) {
        return lVar4;
      }
      if (0 < lVar4) {
        return 0xfffffffd;
      }
      if ((-1 < lVar5) && (lVar5 < (longlong)*param_4 + *param_3)) {
        return 0xfffffffe;
      }
      if ((local_28[0] < 0) || ((longlong)*param_4 + *param_3 <= local_28[0])) {
        if (local_res8 < (longlong)*param_4 + *param_3) {
          return 0xfffffffd;
        }
        lVar4 = FUN_1439ede90(plVar1,*param_3,param_4);
        if (lVar4 < 0) {
          return lVar4;
        }
        if (lVar4 != 0) {
          *param_3 = *param_3 + (longlong)*param_4;
          if (lVar4 != (1L << ((char)*param_4 * '\a' & 0x3fU)) + -1) {
            lVar3 = *param_3 + lVar4;
            if ((-1 < lVar5) && (lVar5 < lVar3)) {
              return 0xfffffffe;
            }
            if ((-1 < local_28[0]) && (local_28[0] < lVar3)) {
              return 0;
            }
          }
LAB_1439e8630:
          do {
            if ((-1 < lVar3) && (lVar3 <= *param_3)) {
              return 0;
            }
            do {
              if (local_res8 < *param_3 + 1) goto LAB_1439e87ba;
              lVar5 = FUN_1439e8350(plVar1,*param_3,param_4);
              if (lVar5 < 0) {
                return lVar5;
              }
              if (0 < lVar5) {
                return 0xfffffffd;
              }
              if ((-1 < lVar3) && (lVar3 < (longlong)*param_4 + *param_3)) {
                return 0xfffffffe;
              }
              if (local_res8 < (longlong)*param_4 + *param_3) {
                return 0xfffffffd;
              }
              lVar5 = FUN_1439edd80(plVar1,*param_3,param_4);
              if (lVar5 < 0) {
                return lVar5;
              }
              if (lVar5 == 0x1f43b675) {
                return 0;
              }
              if (lVar5 == 0x1c53bb6b) {
                return 0;
              }
              *param_3 = *param_3 + (longlong)*param_4;
              lVar4 = *param_3;
              if ((-1 < lVar3) && (lVar3 <= lVar4)) {
                return 0xfffffffe;
              }
              if (local_res8 < lVar4 + 1) goto LAB_1439e87ba;
              lVar4 = FUN_1439e8350(plVar1,lVar4,param_4);
              if (lVar4 < 0) {
                return lVar4;
              }
              if (0 < lVar4) {
                return 0xfffffffd;
              }
              if ((-1 < lVar3) && (lVar3 < (longlong)*param_4 + *param_3)) {
                return 0xfffffffe;
              }
              if (local_res8 < (longlong)*param_4 + *param_3) {
                return 0xfffffffd;
              }
              lVar4 = FUN_1439ede90(plVar1,*param_3,param_4);
              if (lVar4 < 0) {
                return lVar4;
              }
              *param_3 = *param_3 + (longlong)*param_4;
              lVar2 = *param_3;
              if ((-1 < lVar3) && (lVar3 < lVar2)) {
                return 0xfffffffe;
              }
              if (lVar4 == 0) goto LAB_1439e8630;
              if (lVar4 == (1L << ((char)*param_4 * '\a' & 0x3fU)) + -1) {
                return 0xfffffffe;
              }
              if ((-1 < lVar3) && (lVar3 < lVar2 + lVar4)) {
                return 0xfffffffe;
              }
              if ((lVar5 == 0xa0) || (lVar5 == 0xa3)) {
                return 1;
              }
              *param_3 = lVar2 + lVar4;
            } while (lVar3 < 0);
            if (lVar3 < lVar2 + lVar4) {
              return 0xfffffffe;
            }
          } while( true );
        }
      }
      return 0;
    }
  }
LAB_1439e87ba:
  *param_4 = 1;
  return 0xfffffffd;
}



// FUNCTION 1439e87e0 FUN_1439e87e0 body=84 status=ok
// SIG undefined FUN_1439e87e0(void)

void FUN_1439e87e0(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 4;
  param_1[3] = 8;
  if (param_1[4] != 0) {
    FMemory::operator_delete();
    param_1[4] = 0;
  }
  param_1[6] = 1;
  param_1[5] = 1;
  return;
}



// FUNCTION 1439e8840 FUN_1439e8840 body=1023 status=ok
// SIG undefined FUN_1439e8840(void)

longlong FUN_1439e8840(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    return -1;
  }
  if (-1 < param_1[5]) {
    return 0;
  }
  if (param_1[3] != param_1[1]) {
    return -1;
  }
  if (-1 < param_1[4]) {
    return -1;
  }
  plVar1 = *(longlong **)*param_1;
  lVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_48,&local_res8);
  if ((int)lVar3 < 0) {
    return lVar3;
  }
  if (-1 < local_48) {
    if (local_48 < local_res8) {
      return 0xfffffffe;
    }
    if (local_48 < param_1[3]) {
      return 0xfffffffe;
    }
  }
  lVar3 = param_1[3];
  lVar6 = -1;
  *param_2 = lVar3;
  if (lVar3 + 1 <= local_res8) {
    lVar3 = FUN_1439e8350(plVar1,lVar3,param_3);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (0 < lVar3) {
      return 0xfffffffd;
    }
    if (local_res8 < (longlong)*param_3 + *param_2) {
      return 0xfffffffd;
    }
    lVar3 = FUN_1439edd80(plVar1,*param_2,param_3);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (lVar3 != 0x1f43b675) {
      return 0xfffffffe;
    }
    *param_2 = *param_2 + (longlong)*param_3;
    if (*param_2 + 1 <= local_res8) {
      lVar3 = FUN_1439e8350(plVar1,*param_2,param_3);
      if (lVar3 < 0) {
        return lVar3;
      }
      if (0 < lVar3) {
        return 0xfffffffd;
      }
      if (local_res8 < (longlong)*param_3 + *param_2) {
        return 0xfffffffd;
      }
      lVar3 = FUN_1439ede90(plVar1,*param_2,param_3);
      if (lVar3 < 0) {
        return 0xffffffff;
      }
      if (lVar3 == 0) {
        return 0xfffffffe;
      }
      *param_2 = *param_2 + (longlong)*param_3;
      lVar5 = -1;
      local_res20 = -1;
      local_40 = -1;
      if (lVar3 != (1L << ((char)*param_3 * '\a' & 0x3fU)) + -1) {
        local_40 = lVar3;
      }
      if (-1 < local_40) {
        lVar5 = *param_2 + local_40;
      }
LAB_1439e8a10:
      do {
        if ((-1 < lVar5) && (lVar5 <= *param_2)) {
LAB_1439e8bdc:
          bVar2 = false;
LAB_1439e8bde:
          if ((((lVar5 < 0) || (*param_2 <= lVar5)) && (-1 < lVar6)) && (bVar2)) {
            param_1[3] = local_res20;
            param_1[5] = lVar6;
            if (-1 < local_40) {
              param_1[4] = lVar5 - param_1[1];
            }
            return 0;
          }
          return 0xfffffffe;
        }
        do {
          if (local_res8 < *param_2 + 1) {
LAB_1439e8c15:
            *param_3 = 1;
            return 0xfffffffd;
          }
          lVar3 = FUN_1439e8350(plVar1,*param_2,param_3);
          if (lVar3 < 0) {
            return lVar3;
          }
          if (0 < lVar3) {
            return 0xfffffffd;
          }
          if ((-1 < lVar5) && (lVar5 < (longlong)*param_3 + *param_2)) {
            return 0xfffffffe;
          }
          if (local_res8 < (longlong)*param_3 + *param_2) {
            return 0xfffffffd;
          }
          lVar3 = FUN_1439edd80(plVar1,*param_2,param_3);
          if (lVar3 < 0) {
            return lVar3;
          }
          if (lVar3 == 0) {
            return 0xfffffffe;
          }
          if ((lVar3 == 0x1f43b675) || (lVar3 == 0x1c53bb6b)) goto LAB_1439e8bdc;
          *param_2 = *param_2 + (longlong)*param_3;
          if (local_res8 < *param_2 + 1) goto LAB_1439e8c15;
          lVar4 = FUN_1439e8350(plVar1,*param_2,param_3);
          if (lVar4 < 0) {
            return lVar4;
          }
          if (0 < lVar4) {
            return 0xfffffffd;
          }
          if ((-1 < lVar5) && (lVar5 < (longlong)*param_3 + *param_2)) {
            return 0xfffffffe;
          }
          if (local_res8 < (longlong)*param_3 + *param_2) {
            return 0xfffffffd;
          }
          lVar4 = FUN_1439ede90(plVar1,*param_2,param_3);
          if (lVar4 < 0) {
            return lVar4;
          }
          if (lVar4 == (1L << ((char)*param_3 * '\a' & 0x3fU)) + -1) {
            return 0xfffffffe;
          }
          *param_2 = *param_2 + (longlong)*param_3;
          if ((-1 < lVar5) && (lVar5 < *param_2)) {
            return 0xfffffffe;
          }
          if (lVar4 == 0) goto LAB_1439e8a10;
          if ((-1 < lVar5) && (lVar5 < *param_2 + lVar4)) {
            return 0xfffffffe;
          }
          if (lVar3 == 0xe7) {
            *param_3 = (int)lVar4;
            if (local_res8 < lVar4 + *param_2) {
              return 0xfffffffd;
            }
            lVar6 = FUN_1439ee650(plVar1,*param_2,lVar4);
            if (lVar6 < 0) {
              return lVar6;
            }
            local_res20 = *param_2 + lVar4;
          }
          else if ((lVar3 == 0xa0) || (lVar3 == 0xa3)) {
            bVar2 = true;
            goto LAB_1439e8bde;
          }
          *param_2 = *param_2 + lVar4;
        } while (lVar5 < 0);
        if (lVar5 < *param_2) {
          return 0xfffffffe;
        }
      } while( true );
    }
  }
  *param_3 = 1;
  return 0xfffffffd;
}



// FUNCTION 1439e8c40 FUN_1439e8c40 body=147 status=ok
// SIG undefined FUN_1439e8c40(void)

longlong FUN_1439e8c40(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0xa0) == 0) && (*(int *)(param_1 + 0xb0) == 0)) &&
     (*(int *)(param_1 + 0xa8) == 0)) {
    lVar1 = FUN_1439ece60();
    if (-1 < lVar1) {
      if (0 < lVar1) {
        return 0xfffffffd;
      }
      if ((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x80) == 0)) {
        return 0xfffffffe;
      }
      lVar1 = FUN_1439e8ce0(param_1);
      if (-1 < (int)lVar1) {
        do {
          if (0 < (int)lVar1) {
            return 0;
          }
          lVar1 = FUN_1439e8ce0(param_1);
        } while (-1 < (int)lVar1);
        return lVar1;
      }
    }
  }
  else {
    lVar1 = 0xffffffff;
  }
  return lVar1;
}



// FUNCTION 1439e8ce0 FUN_1439e8ce0 body=45 status=ok
// SIG undefined FUN_1439e8ce0(void)

void FUN_1439e8ce0(undefined8 param_1)

{
  int iVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  do {
    iVar1 = FUN_1439e6f30(param_1,local_res18,local_res10);
  } while (1 < iVar1);
  return;
}



// FUNCTION 1439e8d10 FUN_1439e8d10 body=490 status=ok
// SIG undefined FUN_1439e8d10(void)

longlong FUN_1439e8d10(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res18 [2];
  undefined8 local_res20;
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar5 = FUN_1439edd80(param_2,param_3,local_res18);
      if (lVar5 < 0) {
        return 0xfffffffe;
      }
      lVar7 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
        return 0xfffffffe;
      }
      lVar6 = FUN_1439ede90(param_2,lVar7,local_res18);
      if (lVar6 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar7 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar6 == 0);
    if (lVar5 == 0x80) {
      cVar3 = FUN_1439e7580(param_1);
      if (cVar3 == '\0') {
        return 0xffffffff;
      }
      puVar2 = (undefined8 *)
               (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x2c) * 0x18);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      lVar5 = FUN_1439ea070(puVar2,param_2,param_3,lVar6);
      iVar4 = (int)lVar5;
joined_r0x0001439e8e44:
      if (iVar4 < 0) {
        return lVar5;
      }
    }
    else {
      if (lVar5 == 0x5654) {
        lVar5 = FUN_1439ee580(param_2,param_3,lVar6,param_1);
        iVar4 = (int)lVar5;
        goto joined_r0x0001439e8e44;
      }
      if (lVar5 == 0x73c4) {
        lVar5 = FUN_1439ee4a0(param_2,param_3,lVar6,&local_res20);
        if ((int)lVar5 < 0) {
          return lVar5;
        }
        *(undefined8 *)(param_1 + 8) = local_res20;
      }
      else if (lVar5 == 0x91) {
        lVar5 = FUN_1439ee650(param_2,param_3,lVar6);
        if (lVar5 < 0) {
          return lVar5;
        }
        *(longlong *)(param_1 + 0x10) = lVar5;
      }
      else if (lVar5 == 0x92) {
        lVar5 = FUN_1439ee650(param_2,param_3,lVar6);
        if (lVar5 < 0) {
          return lVar5;
        }
        *(longlong *)(param_1 + 0x18) = lVar5;
      }
    }
    param_3 = param_3 + lVar6;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439e8f00 FUN_1439e8f00 body=722 status=ok
// SIG undefined FUN_1439e8f00(void)

ulonglong FUN_1439e8f00(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_68 [2];
  double local_60 [5];
  
  if ((*param_5 != 0) || (*param_2 != 2)) {
    return 0xffffffff;
  }
  lVar7 = *(longlong *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x1a) + lVar7;
  lVar10 = 0;
  uVar1 = *param_1;
  lVar11 = 1;
  uVar12 = 0;
  uVar13 = 0x40bf4000;
  local_60[0] = 8000.0;
  do {
    if (lVar9 <= lVar7) {
      if (lVar7 != lVar9) {
        return 0xfffffffe;
      }
      puVar6 = (undefined8 *)operator_new(0xd0,&DAT_146bcbba8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        puVar6[2] = param_3;
        puVar6[3] = param_4;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        *(undefined1 *)(puVar6 + 0xf) = 0;
        puVar6[0x12] = mkvparser::Track::EOSBlock::vftable;
        puVar6[0x13] = 0;
        *(undefined4 *)(puVar6 + 0x14) = 0x80000000;
        puVar6[0x15] = 0;
        puVar6[0x16] = 0;
        *puVar6 = mkvparser::AudioTrack::vftable;
        uVar2 = FUN_1439e6470(param_2);
        if (uVar2 == 0) {
          puVar6[0x17] = CONCAT44(uVar13,uVar12);
          puVar6[0x18] = lVar11;
          puVar6[0x19] = lVar10;
          *param_5 = (longlong)puVar6;
          return 0;
        }
        (**(code **)*puVar6)(puVar6,1);
        return (ulonglong)uVar2;
      }
      return 0xffffffff;
    }
    lVar3 = FUN_1439edd80(uVar1,lVar7,local_68);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = lVar7 + local_68[0];
    if ((-1 < lVar9) && (lVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_1439ede90(uVar1,lVar7,local_68);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_68[0] - 1U) {
      return 0xfffffffe;
    }
    uVar8 = lVar7 + local_68[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < lVar9) && (lVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar3 == 0xb5) {
      uVar5 = FUN_1439ee390(uVar1,uVar8,lVar4,local_60);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar12 = SUB84(local_60[0],0);
      uVar13 = (undefined4)((ulonglong)local_60[0] >> 0x20);
      if (local_60[0] <= 0.0) {
        return 0xfffffffe;
      }
    }
    else {
      if (lVar3 == 0x9f) {
        lVar7 = FUN_1439ee650(uVar1,uVar8,lVar4);
        lVar11 = lVar7;
      }
      else {
        if (lVar3 != 0x6264) goto LAB_1439e9090;
        lVar7 = FUN_1439ee650(uVar1,uVar8,lVar4);
        lVar10 = lVar7;
      }
      if (lVar7 < 1) {
        return 0xfffffffe;
      }
    }
LAB_1439e9090:
    lVar7 = uVar8 + lVar4;
    if (lVar9 < lVar7) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439e91e0 FUN_1439e91e0 body=1426 status=ok
// SIG undefined FUN_1439e91e0(void)

undefined8 FUN_1439e91e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  byte local_res10 [8];
  uint local_res18 [2];
  ulonglong local_res20;
  
  if (param_2 == (longlong *)0x0) {
    return 0xffffffffffffffff;
  }
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar1 = *(undefined8 **)*param_2;
  lVar9 = *param_1;
  lVar15 = param_1[1] + lVar9;
  lVar5 = FUN_1439ede90(puVar1,lVar9,local_res18);
  param_1[2] = lVar5;
  if ((((lVar5 < 1) || (lVar9 = lVar9 + (int)local_res18[0], lVar15 < lVar9)) ||
      (lVar15 - lVar9 < 2)) ||
     (((iVar4 = FUN_1439ee4a0(puVar1,lVar9,2,&local_res20), iVar4 != 0 ||
       ((longlong)local_res20 < -0x8000)) || (0x7fff < (longlong)local_res20)))) {
    return 0xfffffffe;
  }
  *(short *)(param_1 + 3) = (short)local_res20;
  lVar5 = lVar9 + 2;
  if (lVar15 == lVar5 || lVar15 - lVar5 < 0) {
    return 0xfffffffe;
  }
  iVar4 = (**(code **)*puVar1)(puVar1,lVar5,1,(longlong)param_1 + 0x1a);
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  lVar5 = lVar9 + 3;
  bVar3 = *(byte *)((longlong)param_1 + 0x1a) >> 1;
  bVar10 = bVar3 & 3;
  if ((bVar3 & 3) == 0) {
    if (lVar5 <= lVar15) {
      *(undefined4 *)(param_1 + 5) = 1;
      uVar6 = SUB168(ZEXT816(0x10) * ZEXT816(1),0);
      if (SUB168(ZEXT816(0x10) * ZEXT816(1),8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      plVar7 = (longlong *)operator_new(uVar6,&DAT_146bcbba8);
      param_1[4] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
        return 0xffffffff;
      }
      *plVar7 = lVar5;
      if ((lVar15 - lVar5) - 1U < 0x7fffffff) {
        *(int *)(plVar7 + 1) = (int)(lVar15 - lVar5);
        return 0;
      }
    }
    return 0xfffffffe;
  }
  if (lVar15 <= lVar5) {
    return 0xfffffffe;
  }
  iVar4 = (**(code **)*puVar1)(puVar1,lVar5,1,local_res10);
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  lVar9 = lVar9 + 4;
  if (lVar15 < lVar9) {
    return 0xfffffffe;
  }
  *(uint *)(param_1 + 5) = local_res10[0] + 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)(local_res10[0] + 1);
  uVar6 = SUB168(ZEXT816(0x10) * auVar2,0);
  if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar7 = (longlong *)operator_new(uVar6,&DAT_146bcbba8);
  param_1[4] = (longlong)plVar7;
  if (plVar7 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (bVar10 == 1) {
    uVar17 = *(uint *)(param_1 + 5);
    uVar18 = (ulonglong)(int)uVar17;
    plVar11 = plVar7 + uVar18 * 2;
    local_res20 = 0;
    while (uVar13 = 0, 1 < (int)uVar17) {
      do {
        if (lVar15 <= lVar9) {
          return 0xfffffffe;
        }
        iVar4 = (**(code **)*puVar1)(puVar1,lVar9,1,local_res18);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
        lVar9 = lVar9 + 1;
        uVar12 = (int)uVar13 + (local_res18[0] & 0xff);
        uVar13 = (ulonglong)uVar12;
      } while ((char)local_res18[0] == -1);
      if (plVar11 <= plVar7 + 2) {
        return 0xfffffffe;
      }
      *plVar7 = 0;
      if ((int)uVar12 < 1) {
        return 0xfffffffe;
      }
      uVar17 = (int)uVar18 - 1;
      uVar18 = (ulonglong)uVar17;
      *(uint *)(plVar7 + 1) = uVar12;
      local_res20 = local_res20 + (longlong)(int)uVar12;
      plVar7 = plVar7 + 2;
    }
    if (plVar11 <= plVar7) {
      return 0xfffffffe;
    }
    if (lVar15 < lVar9) {
      return 0xfffffffe;
    }
    if (plVar7 + 2 != plVar11) {
      return 0xfffffffe;
    }
    *plVar7 = 0;
    if (lVar15 - lVar9 < (longlong)local_res20) {
      return 0xfffffffe;
    }
    lVar5 = (lVar15 - lVar9) - local_res20;
    if (0x7ffffffe < lVar5 - 1U) {
      return 0xfffffffe;
    }
    *(int *)(plVar7 + 1) = (int)lVar5;
    plVar7 = (longlong *)param_1[4];
    while (plVar7 != plVar11) {
      lVar5 = (int)plVar7[1] + lVar9;
      if (lVar15 < lVar5) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      plVar7 = plVar7 + 2;
      lVar9 = lVar5;
    }
  }
  else if (bVar10 == 2) {
    if (lVar15 <= lVar9) {
      return 0xfffffffe;
    }
    lVar16 = (longlong)(int)param_1[5];
    lVar5 = (lVar15 - lVar9) / lVar16;
    if ((lVar15 - lVar9) % lVar16 != 0) {
      return 0xfffffffe;
    }
    if (0x7ffffffe < lVar5 - 1U) {
      return 0xfffffffe;
    }
    plVar11 = plVar7 + lVar16 * 2;
    for (; plVar7 != plVar11; plVar7 = plVar7 + 2) {
      if (lVar15 < lVar5 + lVar9) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      *(int *)(plVar7 + 1) = (int)lVar5;
      lVar9 = lVar5 + lVar9;
    }
  }
  else {
    if (lVar15 <= lVar9) {
      return 0xfffffffe;
    }
    iVar4 = (int)param_1[5];
    lVar5 = FUN_1439ede90(puVar1,lVar9,local_res18);
    if (lVar5 < 1) {
      return 0xfffffffe;
    }
    if (0x7fffffff < lVar5) {
      return 0xfffffffe;
    }
    lVar9 = lVar9 + (int)local_res18[0];
    if (lVar15 < lVar9) {
      return 0xfffffffe;
    }
    if (lVar15 < lVar5 + lVar9) {
      return 0xfffffffe;
    }
    plVar7 = (longlong *)param_1[4];
    plVar11 = plVar7 + (longlong)(int)param_1[5] * 2;
    lVar16 = (longlong)(int)lVar5;
    *plVar7 = 0;
    *(int *)(plVar7 + 1) = (int)lVar5;
    while (iVar4 = iVar4 + -1, 1 < iVar4) {
      if (lVar15 <= lVar9) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7) {
        return 0xfffffffe;
      }
      plVar14 = plVar7 + 2;
      if ((int)plVar7[1] != lVar5) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar14) {
        return 0xfffffffe;
      }
      *plVar14 = 0;
      lVar8 = FUN_1439ede90(puVar1,lVar9,local_res18);
      if (lVar8 < 0) {
        return 0xfffffffe;
      }
      lVar9 = lVar9 + (int)local_res18[0];
      if (lVar15 < lVar9) {
        return 0xfffffffe;
      }
      lVar5 = lVar5 + 1 + (lVar8 - (1L << ((char)local_res18[0] * '\a' - 1U & 0x3f)));
      if (lVar5 < 1) {
        return 0xfffffffe;
      }
      if (0x7fffffff < lVar5) {
        return 0xfffffffe;
      }
      iVar19 = (int)lVar5;
      *(int *)(plVar7 + 3) = iVar19;
      if (0x7fffffffffffffff - (longlong)iVar19 < lVar16) {
        return 0xfffffffe;
      }
      lVar16 = lVar16 + iVar19;
      plVar7 = plVar14;
    }
    if (0 < iVar4) {
      if (lVar15 < lVar9) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7) {
        return 0xfffffffe;
      }
      if ((int)plVar7[1] != lVar5) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7 + 2) {
        return 0xfffffffe;
      }
      if (plVar7 + 4 != plVar11) {
        return 0xfffffffe;
      }
      plVar7[2] = 0;
      if (lVar15 - lVar9 < lVar16) {
        return 0xfffffffe;
      }
      lVar16 = (lVar15 - lVar9) - lVar16;
      if (0x7ffffffe < lVar16 - 1U) {
        return 0xfffffffe;
      }
      *(int *)(plVar7 + 3) = (int)lVar16;
    }
    plVar7 = (longlong *)param_1[4];
    while (plVar7 != plVar11) {
      lVar5 = (int)plVar7[1] + lVar9;
      if (lVar15 < lVar5) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      plVar7 = plVar7 + 2;
      lVar9 = lVar5;
    }
  }
  if (lVar9 != lVar15) {
    return 0xfffffffe;
  }
  return 0;
}



// FUNCTION 1439e9780 FUN_1439e9780 body=76 status=ok
// SIG undefined FUN_1439e9780(void)

undefined8 FUN_1439e9780(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1439e91e0(param_1 + 0x18,*(undefined8 *)(param_1 + 8));
  if ((int)uVar1 == 0) {
    if ((0 < *(longlong *)(param_1 + 0x50)) && (*(longlong *)(param_1 + 0x58) < 1)) {
      *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 0x80;
      return uVar1;
    }
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0x7f;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1439e97d0 FUN_1439e97d0 body=349 status=ok
// SIG undefined FUN_1439e97d0(void)

undefined8 FUN_1439e97d0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  uVar8 = param_1[1];
  uVar9 = param_1[2] + uVar8;
  uVar1 = *(undefined8 *)*param_1;
  while( true ) {
    if ((longlong)uVar9 <= (longlong)uVar8) {
      if (uVar8 != uVar9) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_1439edd80(uVar1,uVar8,local_res8);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = uVar8 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_1439ede90(uVar1,lVar7,local_res8);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) break;
    uVar8 = lVar7 + local_res8[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x45b9) {
        cVar2 = FUN_1439e76c0(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0x34) * 0x10 + param_1[5]);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_1439ea500(puVar6,*(undefined8 *)*param_1,uVar8,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar8 = uVar8 + lVar4;
      if ((longlong)uVar9 < (longlong)uVar8) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439e9930 FUN_1439e9930 body=882 status=ok
// SIG undefined FUN_1439e9930(void)

longlong FUN_1439e9930(undefined8 *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res20;
  longlong local_28 [2];
  
  lVar1 = FUN_1439e8840();
  if (-1 < (int)lVar1) {
    if (((longlong)param_1[3] < (longlong)param_1[1]) || ((longlong)param_1[5] < 0)) {
      return 0xffffffff;
    }
    if ((longlong)param_1[4] < 0) {
      lVar5 = -1;
    }
    else {
      lVar5 = param_1[4] + param_1[1];
      if ((-1 < lVar5) && (lVar5 <= (longlong)param_1[3])) {
        return 1;
      }
    }
    plVar4 = *(longlong **)*param_1;
    lVar1 = (**(code **)(*plVar4 + 8))(plVar4,local_28,&local_res20);
    if (-1 < (int)lVar1) {
      if ((local_28[0] < 0) || (local_res20 <= local_28[0])) {
        *param_2 = param_1[3];
LAB_1439e99f0:
        do {
          if ((-1 < lVar5) && (lVar5 <= *param_2)) {
LAB_1439e9c07:
            if ((longlong)param_1[4] < 1) {
              return 0xfffffffe;
            }
            lVar1 = *param_2;
            param_1[3] = lVar1;
            if ((-1 < lVar5) && (lVar5 < lVar1)) {
              return 0xfffffffe;
            }
            if (*(int *)((longlong)param_1 + 0x3c) < 1) {
              return 1;
            }
            plVar4 = *(longlong **)
                      (param_1[6] + (longlong)(*(int *)((longlong)param_1 + 0x3c) + -1) * 8);
            if (((plVar4 != (longlong *)0x0) &&
                (plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(), plVar4 != (longlong *)0x0)) &&
               ((local_28[0] < 0 || (*plVar4 <= local_28[0])))) {
              lVar1 = *plVar4 + plVar4[1];
              if ((-1 < lVar5) && (lVar5 < lVar1)) {
                return 0xfffffffe;
              }
              if (local_28[0] < 0) {
                return 1;
              }
              if (lVar1 <= local_28[0]) {
                return 1;
              }
            }
            return 0xffffffff;
          }
          do {
            if ((-1 < local_28[0]) && (local_28[0] <= *param_2)) {
LAB_1439e9bf5:
              if ((longlong)param_1[4] < 0) {
                param_1[4] = *param_2 - param_1[1];
              }
              goto LAB_1439e9c07;
            }
            if (local_res20 < *param_2 + 1) {
LAB_1439e9c8b:
              *param_3 = 1;
              return 0xfffffffd;
            }
            lVar1 = FUN_1439e8350(plVar4,*param_2,param_3);
            if (lVar1 < 0) {
              return lVar1;
            }
            if (0 < lVar1) {
              return 0xfffffffd;
            }
            if ((-1 < lVar5) && (lVar5 < (longlong)*param_3 + *param_2)) {
              return 0xfffffffe;
            }
            if (local_res20 < (longlong)*param_3 + *param_2) {
              return 0xfffffffd;
            }
            lVar1 = FUN_1439edd80(plVar4,*param_2,param_3);
            if (lVar1 < 0) {
              return 0xfffffffe;
            }
            if ((lVar1 == 0x1f43b675) || (lVar1 == 0x1c53bb6b)) goto LAB_1439e9bf5;
            *param_2 = *param_2 + (longlong)*param_3;
            if (local_res20 < *param_2 + 1) goto LAB_1439e9c8b;
            lVar2 = FUN_1439e8350(plVar4,*param_2,param_3);
            if (lVar2 < 0) {
              return lVar2;
            }
            if (0 < lVar2) {
              return 0xfffffffd;
            }
            if ((-1 < lVar5) && (lVar5 < (longlong)*param_3 + *param_2)) {
              return 0xfffffffe;
            }
            if (local_res20 < (longlong)*param_3 + *param_2) {
              return 0xfffffffd;
            }
            lVar2 = FUN_1439ede90(plVar4,*param_2,param_3);
            if (lVar2 < 0) {
              return lVar2;
            }
            if (lVar2 == (1L << ((char)*param_3 * '\a' & 0x3fU)) + -1) {
              return 0xfffffffe;
            }
            *param_2 = *param_2 + (longlong)*param_3;
            if ((-1 < lVar5) && (lVar5 < *param_2)) {
              return 0xfffffffe;
            }
            if (lVar2 == 0) goto LAB_1439e99f0;
            lVar3 = *param_2 + lVar2;
            if (lVar5 < 0) {
              if ((-1 < local_28[0]) && (local_28[0] < lVar3)) {
                param_1[4] = local_28[0] - param_1[1];
                *param_2 = local_28[0];
                goto LAB_1439e9c07;
              }
              if (local_res20 < lVar3) {
                *param_3 = (int)lVar2;
                return 0xfffffffd;
              }
            }
            else if (lVar5 < lVar3) {
              if (lVar1 == 0xa0) {
                return 0xfffffffe;
              }
              if (lVar1 == 0xa3) {
                return 0xfffffffe;
              }
              *param_2 = lVar5;
              goto LAB_1439e9c07;
            }
            if (lVar1 == 0xa0) {
              lVar1 = FUN_1439ebcf0(param_1,lVar2,param_2,param_3);
              return lVar1;
            }
            if (lVar1 == 0xa3) {
              lVar1 = FUN_1439ed3f0(param_1,lVar2,param_2,param_3);
              return lVar1;
            }
            *param_2 = lVar3;
          } while (lVar5 < 0);
          if (lVar5 < lVar3) {
            return 0xfffffffe;
          }
        } while( true );
      }
      lVar1 = 0xfffffffe;
    }
  }
  return lVar1;
}



// FUNCTION 1439e9cb0 FUN_1439e9cb0 body=956 status=ok
// SIG undefined FUN_1439e9cb0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1439e9cb0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if ((param_1 == 0) || (*param_4 != 0)) {
    uVar5 = in_RAX & 0xffffffffffffff00;
  }
  else {
    plVar2 = (longlong *)operator_new(0x70);
    local_res8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0x7fffffffffffffff;
      plVar2[1] = 0x7fffffffffffffff;
      plVar2[2] = 0x7fffffffffffffff;
      plVar2[3] = 0x7fffffffffffffff;
      plVar2[4] = 0x7fffffffffffffff;
      plVar2[5] = 0x7fffffffffffffff;
      plVar2[6] = 0x7fffffffffffffff;
      plVar2[7] = 0x7fffffffffffffff;
      plVar2[8] = 0x7fffffffffffffff;
      plVar2[9] = 0x7fffffffffffffff;
      plVar2[10] = 0x7fffffffffffffff;
      plVar2[0xb] = 0x7fffffffffffffff;
      plVar2[0xc] = 0x7fffffffffffffff;
      plVar2[0xd] = 0;
      param_3 = param_2 + param_3;
      while( true ) {
        if (param_3 <= param_2) {
          *param_4 = (longlong)plVar2;
          uVar5 = 1;
          plVar2 = (longlong *)0x0;
          goto LAB_1439ea02d;
        }
        lVar3 = FUN_1439edd80(param_1,param_2,&local_res8);
        if (lVar3 < 0) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar4 = FUN_1439ede90(param_1,param_2,&local_res8), lVar4 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar5 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar5)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar5)))) break;
        if (lVar3 == 0x55b1) {
          lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
          *plVar2 = lVar3;
joined_r0x0001439e9fee:
          if (lVar3 < 0) break;
        }
        else {
          if (lVar3 == 0x55b2) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[1] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b3) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[2] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b4) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[3] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b5) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[4] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b6) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[5] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b7) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[6] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b8) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[7] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55b9) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[8] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55ba) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[9] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55bb) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[10] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55bc) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[0xb] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if (lVar3 == 0x55bd) {
            lVar3 = FUN_1439ee650(param_1,uVar5,lVar4);
            plVar2[0xc] = lVar3;
            goto joined_r0x0001439e9fee;
          }
          if ((lVar3 != 0x55d0) ||
             (cVar1 = FUN_1439ea670(param_1,uVar5,lVar4,plVar2 + 0xd,uVar6), cVar1 == '\0')) break;
        }
        param_2 = uVar5 + lVar4;
        if (param_3 < param_2) break;
      }
    }
    uVar5 = 0;
LAB_1439ea02d:
    if (plVar2 != (longlong *)0x0) {
      FUN_1439e58c0(plVar2);
      FMemory::operator_delete(plVar2,0x70);
    }
  }
  return uVar5;
}



// FUNCTION 1439ea070 FUN_1439ea070 body=306 status=ok
// SIG undefined FUN_1439ea070(void)

undefined8 FUN_1439ea070(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res18 [4];
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar2 = FUN_1439edd80(param_2,param_3,local_res18);
      if (lVar2 < 0) {
        return 0xfffffffe;
      }
      lVar5 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar5)) {
        return 0xfffffffe;
      }
      lVar3 = FUN_1439ede90(param_2,lVar5,local_res18);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar5 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar3 == 0);
    lVar5 = param_1;
    if (lVar2 == 0x85) {
LAB_1439ea154:
      uVar4 = FUN_1439ee580(param_2,param_3,lVar3,lVar5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else {
      if (lVar2 == 0x437c) {
        lVar5 = param_1 + 8;
        goto LAB_1439ea154;
      }
      if (lVar2 == 0x437e) {
        lVar5 = param_1 + 0x10;
        goto LAB_1439ea154;
      }
    }
    param_3 = param_3 + lVar3;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439ea1b0 FUN_1439ea1b0 body=834 status=ok
// SIG undefined FUN_1439ea1b0(void)

longlong FUN_1439ea1b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_res10 [8];
  int local_res20;
  undefined4 uStackX_24;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  if (param_2 == (longlong *)0x0) {
    return -2;
  }
  iVar2 = (**(code **)(*param_2 + 8))(param_2,&local_30,&local_38);
  if (iVar2 < 0) {
    return (longlong)iVar2;
  }
  *param_3 = 0;
  local_res10[0] = '\0';
  lVar4 = local_38;
  if (0x3ff < local_38) {
    lVar4 = 0x400;
  }
  if (0 < lVar4) {
    do {
      iVar2 = (**(code **)*param_2)(param_2,*param_3,1,local_res10);
      if (iVar2 < 0) goto LAB_1439ea44f;
      if (0 < iVar2) goto LAB_1439ea2ae;
    } while ((local_res10[0] != '\x1a') && (*param_3 = *param_3 + 1, *param_3 < lVar4));
  }
  local_res20 = 0;
  lVar4 = FUN_1439edd80(param_2,*param_3,&local_res20);
  if (lVar4 == -3) {
LAB_1439ea2ae:
    lVar4 = -3;
  }
  else {
    if ((local_res20 == 4) && (lVar4 == 0x1a45dfa3)) {
      *param_3 = *param_3 + 4;
      lVar4 = FUN_1439e8350(param_2,*param_3,&local_res20);
      if (-1 < lVar4) {
        if (0 < lVar4) goto LAB_1439ea2ae;
        lVar4 = (longlong)local_res20;
        if ((local_res20 - 1U < 8) && ((local_30 < 0 || (lVar4 <= local_30 - *param_3)))) {
          if (local_38 - *param_3 < lVar4) {
            return *param_3 + lVar4;
          }
          lVar4 = FUN_1439ede90(param_2,*param_3,&local_res20);
          if (lVar4 < 0) {
            return lVar4;
          }
          *param_3 = *param_3 + (longlong)local_res20;
          lVar1 = *param_3;
          if ((local_30 < 0) || (lVar4 <= local_30 - lVar1)) {
            if (local_38 - lVar1 < lVar4) {
              return lVar1 + lVar4;
            }
            lVar1 = lVar1 + lVar4;
            FUN_1439e87e0(param_1);
            lVar4 = *param_3;
            if (lVar4 < lVar1) {
              do {
                iVar2 = FUN_1439ec990(param_2,param_3,lVar1,local_28,&local_res20);
                if (iVar2 < 0) {
LAB_1439ea44f:
                  return (longlong)iVar2;
                }
                lVar4 = CONCAT44(uStackX_24,local_res20);
                if (lVar4 == 0) goto LAB_1439ea4d5;
                if (local_28[0] == 0x4286) {
                  lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                  *param_1 = lVar3;
LAB_1439ea48c:
                  if (lVar3 < 1) goto LAB_1439ea4d5;
                }
                else {
                  if (local_28[0] == 0x42f7) {
                    lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                    param_1[1] = lVar3;
                    goto LAB_1439ea48c;
                  }
                  if (local_28[0] == 0x42f2) {
                    lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                    param_1[2] = lVar3;
                    goto LAB_1439ea48c;
                  }
                  if (local_28[0] == 0x42f3) {
                    lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                    param_1[3] = lVar3;
                    goto LAB_1439ea48c;
                  }
                  if (local_28[0] != 0x4282) {
                    if (local_28[0] == 0x4287) {
                      lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                      param_1[5] = lVar3;
                    }
                    else {
                      if (local_28[0] != 0x4285) goto LAB_1439ea491;
                      lVar3 = FUN_1439ee650(param_2,*param_3,lVar4);
                      param_1[6] = lVar3;
                    }
                    goto LAB_1439ea48c;
                  }
                  if (param_1[4] != 0) goto LAB_1439ea4d5;
                  iVar2 = FUN_1439ee580(param_2,*param_3,lVar4,param_1 + 4);
                  if (iVar2 != 0) goto LAB_1439ea44f;
                }
LAB_1439ea491:
                *param_3 = *param_3 + lVar4;
              } while (*param_3 < lVar1);
              lVar4 = *param_3;
            }
            if ((((lVar4 == lVar1) && (param_1[4] != 0)) && (0 < param_1[6])) &&
               (((0 < param_1[5] && (param_1[2] - 1U < 4)) && (param_1[3] - 1U < 8)))) {
              return 0;
            }
          }
        }
      }
    }
LAB_1439ea4d5:
    lVar4 = -2;
  }
  return lVar4;
}



// FUNCTION 1439ea500 FUN_1439ea500 body=360 status=ok
// SIG undefined FUN_1439ea500(void)

undefined8 FUN_1439ea500(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int local_res18 [2];
  
  uVar1 = param_3 + param_4;
  while( true ) {
    if ((longlong)uVar1 <= (longlong)param_3) {
      if (param_3 != uVar1) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_1439edd80(param_2,param_3,local_res18);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = param_3 + (longlong)local_res18[0];
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_1439ede90(param_2,lVar7,local_res18);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res18[0] - 1U) break;
    param_3 = lVar7 + local_res18[0];
    if (0x7fffffffffffffff < param_3) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0xb6) {
        cVar2 = FUN_1439e7410(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x30 + *param_1);
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0xffffffffffffffff;
        puVar6[3] = 0xffffffffffffffff;
        puVar6[4] = 0;
        puVar6[5] = 0;
        uVar5 = FUN_1439e8d10(puVar6,param_2,param_3,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      param_3 = param_3 + lVar4;
      if ((longlong)uVar1 < (longlong)param_3) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439ea670 FUN_1439ea670 body=898 status=ok
// SIG undefined FUN_1439ea670(void)

ulonglong FUN_1439ea670(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  undefined8 *local_res8;
  double local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  
  local_a8 = 0xfffffffffffffffe;
  if ((param_1 == 0) || (*param_4 != 0)) {
    uVar7 = (ulonglong)param_4 & 0xffffffffffffff00;
  }
  else {
    local_res8 = (undefined8 *)operator_new(0x28);
    if (local_res8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *local_res8 = 0;
      local_res8[1] = 0;
      local_res8[2] = 0;
      local_res8[3] = 0;
      *(undefined4 *)(local_res8 + 4) = 0x7f7fffff;
      *(undefined4 *)((longlong)local_res8 + 0x24) = 0x7f7fffff;
      puVar6 = local_res8;
    }
    local_b0 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      param_3 = param_2 + param_3;
      while( true ) {
        if (param_3 <= param_2) {
          *param_4 = (longlong)puVar6;
          uVar7 = 1;
          puVar6 = (undefined8 *)0x0;
          goto LAB_1439ea999;
        }
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar3 = FUN_1439edd80(param_1,param_2,&local_res8), lVar3 < 0)) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar4 = FUN_1439ede90(param_1,param_2,&local_res8), lVar4 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar7 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar7)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar7)))) break;
        if (lVar3 == 0x55d9) {
          local_b8 = 0.0;
          iVar2 = FUN_1439ee390(param_1,uVar7,lVar4,&local_b8);
          if (((local_b8 < -3.4028234663852886e+38) || (3.4028234663852886e+38 < local_b8)) ||
             ((0.0 < local_b8 && (local_b8 < 1.1754943508222875e-38)))) break;
          fVar9 = (float)local_b8;
          *(float *)(puVar6 + 4) = fVar9;
          if (((iVar2 < 0) || (fVar9 < 0.0)) || (9999.99 < fVar9)) break;
        }
        else if (lVar3 == 0x55da) {
          local_b8 = 0.0;
          iVar2 = FUN_1439ee390(param_1,uVar7,lVar4,&local_b8);
          if (((local_b8 < -3.4028234663852886e+38) || (3.4028234663852886e+38 < local_b8)) ||
             ((0.0 < local_b8 && (local_b8 < 1.1754943508222875e-38)))) break;
          fVar9 = (float)local_b8;
          *(float *)((longlong)puVar6 + 0x24) = fVar9;
          if (((iVar2 < 0) || (fVar9 < 0.0)) || (999.9999 < fVar9)) break;
        }
        else {
          switch(lVar3) {
          case 0x55d1:
          case 0x55d2:
            bVar8 = lVar3 == 0x55d1;
            puVar5 = puVar6;
            break;
          case 0x55d3:
          case 0x55d4:
            bVar8 = lVar3 == 0x55d3;
            puVar5 = puVar6 + 1;
            break;
          case 0x55d5:
          case 0x55d6:
            bVar8 = lVar3 == 0x55d5;
            puVar5 = puVar6 + 2;
            break;
          case 0x55d7:
          case 0x55d8:
            bVar8 = lVar3 == 0x55d7;
            puVar5 = puVar6 + 3;
            break;
          default:
            goto switchD_1439ea928_default;
          }
          cVar1 = FUN_1439eaa20(param_1,uVar7,lVar4,bVar8,puVar5);
          if (cVar1 == '\0') break;
        }
        param_2 = uVar7 + lVar4;
        if (param_3 < param_2) break;
      }
    }
switchD_1439ea928_default:
    uVar7 = 0;
LAB_1439ea999:
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1439e5f20(&local_b0,puVar6);
    }
  }
  return uVar7;
}



// FUNCTION 1439eaa20 FUN_1439eaa20 body=227 status=ok
// SIG undefined FUN_1439eaa20(void)

undefined4
FUN_1439eaa20(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,longlong *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  double local_res8;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*param_5 == 0) {
    puVar3 = (undefined8 *)operator_new(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
    }
    *param_5 = (longlong)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  pfVar4 = (float *)*param_5;
  if (param_4 == '\0') {
    pfVar4 = pfVar4 + 1;
  }
  local_res8 = 0.0;
  iVar1 = FUN_1439ee390(param_1,param_2,param_3,&local_res8);
  if ((((iVar1 < 0) || (local_res8 < 0.0)) || (1.0 < local_res8)) ||
     ((0.0 < local_res8 && (local_res8 < 1.1754943508222875e-38)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *pfVar4 = (float)local_res8;
  }
  return uVar2;
}



// FUNCTION 1439eab10 FUN_1439eab10 body=742 status=ok
// SIG undefined FUN_1439eab10(void)

BADSPACEBASE *
FUN_1439eab10(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *local_res8;
  double local_88;
  undefined8 local_80;
  undefined4 *local_78;
  
  local_80 = 0xfffffffffffffffe;
  if ((param_1 != (undefined8 *)0x0) && (*param_4 == 0)) {
    local_res8 = (undefined4 *)operator_new(0x28);
    if (local_res8 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *local_res8 = 0xffffffff;
      *(undefined8 *)(local_res8 + 2) = 0;
      *(undefined8 *)(local_res8 + 4) = 0;
      local_res8[6] = 0x7f7fffff;
      local_res8[7] = 0x7f7fffff;
      local_res8[8] = 0x7f7fffff;
      puVar4 = local_res8;
    }
    local_78 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      param_3 = param_2 + param_3;
      do {
        if (param_3 <= param_2) {
          *param_4 = (longlong)puVar4;
          register0x00000020 = (BADSPACEBASE *)0x1;
          puVar4 = (undefined4 *)0x0;
          goto LAB_1439ead9e;
        }
        lVar2 = FUN_1439edd80(param_1,param_2,&local_res8);
        if (lVar2 < 0) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (uVar3 = FUN_1439ede90(param_1,param_2,&local_res8), (longlong)uVar3 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar5 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar5)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar5)))) break;
        if (lVar2 == 0x7671) {
          lVar2 = FUN_1439ee650(param_1,uVar5,uVar3);
          if (lVar2 < 0) break;
          *puVar4 = (int)lVar2;
        }
        else if (lVar2 == 0x7672) {
          if (((uVar3 == 0) || (0x80000000 < uVar3)) ||
             (lVar2 = operator_new(uVar3,&DAT_146bcbba8), lVar2 == 0)) break;
          iVar1 = (**(code **)*param_1)(param_1,uVar5,uVar3 & 0xffffffff,lVar2);
          if (iVar1 != 0) {
            FMemory::operator_delete(lVar2);
            break;
          }
          *(longlong *)(puVar4 + 2) = lVar2;
          *(ulonglong *)(puVar4 + 4) = uVar3;
        }
        else {
          local_88 = 0.0;
          iVar1 = FUN_1439ee390(param_1,uVar5,uVar3,&local_88);
          if (((iVar1 < 0) || (local_88 < -3.4028234663852886e+38)) ||
             ((3.4028234663852886e+38 < local_88 ||
              ((0.0 < local_88 && (local_88 < 1.1754943508222875e-38)))))) break;
          if (lVar2 == 0x7673) {
            puVar4[6] = (float)local_88;
          }
          else if (lVar2 == 0x7674) {
            puVar4[7] = (float)local_88;
          }
          else {
            if (lVar2 != 0x7675) break;
            puVar4[8] = (float)local_88;
          }
        }
        param_2 = uVar5 + uVar3;
      } while (param_2 <= param_3);
    }
    register0x00000020 = (BADSPACEBASE *)0x0;
LAB_1439ead9e:
    if (puVar4 != (undefined4 *)0x0) {
      FMemory::operator_delete(*(undefined8 *)(puVar4 + 2));
      FMemory::operator_delete(puVar4,0x28);
    }
  }
  return register0x00000020;
}



// FUNCTION 1439eae00 FUN_1439eae00 body=759 status=ok
// SIG undefined FUN_1439eae00(void)

undefined8 FUN_1439eae00(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  ulonglong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  
  lVar9 = param_1[1];
  uVar13 = 0;
  lVar16 = param_1[2] + lVar9;
  lVar4 = lVar9 - lVar16;
  bVar21 = lVar9 == lVar16;
  local_res18 = *(undefined8 *)*param_1;
  uVar11 = uVar13;
  uVar20 = uVar13;
  while( true ) {
    uVar15 = local_res18;
    iVar19 = (int)uVar20;
    iVar14 = (int)uVar11;
    if (SBORROW8(lVar9,lVar16) == lVar4 < 0) {
      if (bVar21) {
        if (0 < iVar19) {
          uVar11 = (ulonglong)iVar19;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar11;
          uVar6 = SUB168(ZEXT816(0x20) * auVar1,0);
          if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          local_res10 = operator_new(uVar6,&DAT_146bcbba8);
          if ((local_res10 != 0) && (uVar13 = local_res10, iVar19 != 0)) {
            puVar8 = (undefined8 *)(local_res10 + 0x10);
            do {
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8 = puVar8 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          param_1[5] = uVar13;
          if (uVar13 == 0) {
            return 0xffffffff;
          }
        }
        if (0 < iVar14) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (longlong)iVar14;
          uVar6 = SUB168(ZEXT816(0x10) * auVar2,0);
          if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          lVar9 = operator_new(uVar6,&DAT_146bcbba8);
          param_1[7] = lVar9;
          if (lVar9 == 0) {
            return 0xffffffff;
          }
        }
        lVar9 = param_1[1];
        lVar4 = param_1[5];
        plVar18 = (longlong *)param_1[7];
        if (lVar9 < lVar16) {
          local_res20 = (longlong)iVar14;
          plVar17 = plVar18;
          do {
            lVar5 = FUN_1439edd80(uVar15,lVar9,&local_res10);
            if (lVar5 < 0) {
              return 0xfffffffe;
            }
            lVar12 = lVar9 + (int)local_res10;
            if ((-1 < lVar16) && (lVar16 <= lVar12)) {
              return 0xfffffffe;
            }
            lVar7 = FUN_1439ede90(uVar15,lVar12,&local_res10);
            if (lVar7 < 0) {
              return 0xfffffffe;
            }
            if (7 < (int)local_res10 - 1U) {
              return 0xfffffffe;
            }
            uVar13 = lVar12 + (int)local_res10;
            if (0x7fffffffffffffff < uVar13) {
              return 0xfffffffe;
            }
            if ((-1 < lVar16) && (lVar16 < (longlong)uVar13)) {
              return 0xfffffffe;
            }
            plVar18 = plVar17;
            if (lVar5 == 0x4dbb) {
              if ((0 < iVar19) &&
                 (cVar3 = FUN_1439ecd20(local_res18,uVar13,lVar7,lVar4), cVar3 != '\0')) {
                *(ulonglong *)(lVar4 + 0x18) = (lVar7 - lVar9) + uVar13;
                *(longlong *)(lVar4 + 0x10) = lVar9;
                lVar4 = lVar4 + 0x20;
              }
            }
            else if ((lVar5 == 0xec) && (0 < local_res20)) {
              plVar18 = plVar17 + 2;
              plVar17[1] = (lVar7 - lVar9) + uVar13;
              *plVar17 = lVar9;
            }
            lVar9 = uVar13 + lVar7;
            if (lVar16 < lVar9) {
              return 0xfffffffe;
            }
            uVar15 = local_res18;
            plVar17 = plVar18;
          } while (lVar9 < lVar16);
        }
        if (lVar9 == lVar16) {
          *(int *)(param_1 + 6) = (int)(lVar4 - param_1[5] >> 5);
          *(int *)(param_1 + 8) = (int)((longlong)plVar18 - param_1[7] >> 4);
          return 0;
        }
      }
      return 0xfffffffe;
    }
    lVar4 = FUN_1439edd80(local_res18,lVar9,&local_res10);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    lVar9 = lVar9 + (int)local_res10;
    if ((-1 < lVar16) && (lVar16 <= lVar9)) {
      return 0xfffffffe;
    }
    lVar5 = FUN_1439ede90(local_res18,lVar9,&local_res10);
    if (lVar5 < 0) {
      return 0xfffffffe;
    }
    if (7 < (int)local_res10 - 1U) break;
    uVar10 = lVar9 + (int)local_res10;
    if (0x7fffffffffffffff < uVar10) {
      return 0xfffffffe;
    }
    if ((-1 < lVar16) && (lVar16 < (longlong)uVar10)) {
      return 0xfffffffe;
    }
    if (lVar4 == 0x4dbb) {
      uVar20 = (ulonglong)(iVar19 + 1);
    }
    else if (lVar4 == 0xec) {
      uVar11 = (ulonglong)(iVar14 + 1);
    }
    lVar9 = uVar10 + lVar5;
    lVar4 = lVar9 - lVar16;
    bVar21 = lVar9 == lVar16;
    if (!bVar21 && lVar16 <= lVar9) {
      return 0xfffffffe;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439eb100 FUN_1439eb100 body=443 status=ok
// SIG undefined FUN_1439eb100(void)

undefined8 FUN_1439eb100(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  lVar5 = param_1[1];
  lVar7 = param_1[2] + lVar5;
  uVar1 = *(undefined8 *)*param_1;
  param_1[6] = 0xbff0000000000000;
  param_1[5] = 1000000;
  do {
    if (lVar7 <= lVar5) {
      if (9.223372036854776e+18 < (double)(longlong)param_1[5] * (double)param_1[6]) {
        return 0xfffffffe;
      }
      if (lVar5 != lVar7) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar2 = FUN_1439edd80(uVar1,lVar5,local_res8);
    if (lVar2 < 0) {
      return 0xfffffffe;
    }
    lVar5 = lVar5 + local_res8[0];
    if ((-1 < lVar7) && (lVar7 <= lVar5)) {
      return 0xfffffffe;
    }
    lVar3 = FUN_1439ede90(uVar1,lVar5,local_res8);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) {
      return 0xfffffffe;
    }
    uVar6 = lVar5 + local_res8[0];
    if (0x7fffffffffffffff < uVar6) {
      return 0xfffffffe;
    }
    if ((-1 < lVar7) && (lVar7 < (longlong)uVar6)) {
      return 0xfffffffe;
    }
    if (lVar2 == 0x2ad7b1) {
      lVar5 = FUN_1439ee650(uVar1,uVar6,lVar3);
      param_1[5] = lVar5;
      if (lVar5 < 1) {
        return 0xfffffffe;
      }
    }
    else if (lVar2 == 0x4489) {
      uVar4 = FUN_1439ee390(uVar1,uVar6,lVar3,param_1 + 6);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if ((double)param_1[6] <= 0.0 && (double)param_1[6] != 0.0) {
        return 0xfffffffe;
      }
    }
    else {
      if (lVar2 == 0x4d80) {
        puVar8 = param_1 + 7;
      }
      else if (lVar2 == 0x5741) {
        puVar8 = param_1 + 8;
      }
      else {
        if (lVar2 != 0x7ba9) goto LAB_1439eb261;
        puVar8 = param_1 + 9;
      }
      uVar4 = FUN_1439ee580(uVar1,uVar6,lVar3,puVar8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
LAB_1439eb261:
    lVar5 = uVar6 + lVar3;
    if (lVar7 < lVar5) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439eb2c0 FUN_1439eb2c0 body=283 status=ok
// SIG undefined FUN_1439eb2c0(void)

undefined8 FUN_1439eb2c0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res18 [4];
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar2 = FUN_1439edd80(param_2,param_3,local_res18);
      if (lVar2 < 0) {
        return 0xfffffffe;
      }
      lVar5 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar5)) {
        return 0xfffffffe;
      }
      lVar3 = FUN_1439ede90(param_2,lVar5,local_res18);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar5 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar3 == 0);
    lVar5 = param_1;
    if (lVar2 == 0x45a3) {
LAB_1439eb38d:
      uVar4 = FUN_1439ee580(param_2,param_3,lVar3,lVar5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else if (lVar2 == 0x4487) {
      lVar5 = param_1 + 8;
      goto LAB_1439eb38d;
    }
    param_3 = param_3 + lVar3;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439eb3e0 FUN_1439eb3e0 body=329 status=ok
// SIG undefined FUN_1439eb3e0(void)

undefined8 FUN_1439eb3e0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int local_res18 [2];
  
  uVar1 = param_3 + param_4;
  while( true ) {
    if ((longlong)uVar1 <= (longlong)param_3) {
      if (param_3 != uVar1) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_1439edd80(param_2,param_3,local_res18);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = param_3 + (longlong)local_res18[0];
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_1439ede90(param_2,lVar7,local_res18);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res18[0] - 1U) break;
    param_3 = lVar7 + local_res18[0];
    if (0x7fffffffffffffff < param_3) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x67c8) {
        cVar2 = FUN_1439e7800(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x10 + *param_1);
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_1439eb2c0(puVar6,param_2,param_3,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      param_3 = param_3 + lVar4;
      if ((longlong)uVar1 < (longlong)param_3) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439eb530 FUN_1439eb530 body=349 status=ok
// SIG undefined FUN_1439eb530(void)

undefined8 FUN_1439eb530(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  uVar8 = param_1[1];
  uVar9 = param_1[2] + uVar8;
  uVar1 = *(undefined8 *)*param_1;
  while( true ) {
    if ((longlong)uVar9 <= (longlong)uVar8) {
      if (uVar8 != uVar9) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_1439edd80(uVar1,uVar8,local_res8);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = uVar8 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_1439ede90(uVar1,lVar7,local_res8);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) break;
    uVar8 = lVar7 + local_res8[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x7373) {
        cVar2 = FUN_1439e76c0(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0x34) * 0x10 + param_1[5]);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_1439eb3e0(puVar6,*(undefined8 *)*param_1,uVar8,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar8 = uVar8 + lVar4;
      if ((longlong)uVar9 < (longlong)uVar8) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439eb690 FUN_1439eb690 body=592 status=ok
// SIG undefined FUN_1439eb690(void)

undefined8 FUN_1439eb690(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  uVar12 = param_1[1];
  uVar13 = param_1[2] + uVar12;
  uVar2 = *(undefined8 *)*param_1;
  iVar5 = 0;
  while( true ) {
    if ((longlong)uVar13 <= (longlong)uVar12) {
      if (uVar12 != uVar13) {
        return 0xfffffffe;
      }
      if (iVar5 < 1) {
        return 0;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)iVar5;
      uVar10 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      lVar8 = operator_new(uVar10,&DAT_146bcbba8);
      param_1[5] = lVar8;
      if (lVar8 == 0) {
        return 0xffffffff;
      }
      param_1[6] = lVar8;
      uVar12 = param_1[1];
      while( true ) {
        uVar6 = uVar12;
        if ((longlong)uVar13 <= (longlong)uVar6) {
          if (uVar6 != uVar13) {
            return 0xfffffffe;
          }
          return 0;
        }
        lVar8 = FUN_1439edd80(uVar2,uVar6,local_res8);
        if (lVar8 < 0) {
          return 0xfffffffe;
        }
        lVar11 = uVar6 + (longlong)local_res8[0];
        if ((-1 < (longlong)uVar13) && ((longlong)uVar13 <= lVar11)) {
          return 0xfffffffe;
        }
        lVar9 = FUN_1439ede90(uVar2,lVar11,local_res8);
        if (lVar9 < 0) {
          return 0xfffffffe;
        }
        if (7 < local_res8[0] - 1U) break;
        uVar12 = lVar11 + local_res8[0];
        if (0x7fffffffffffffff < uVar12) {
          return 0xfffffffe;
        }
        if ((-1 < (longlong)uVar13) && ((longlong)uVar13 < (longlong)uVar12)) {
          return 0xfffffffe;
        }
        if (lVar9 != 0) {
          uVar1 = lVar9 + uVar12;
          if (lVar8 == 0xae) {
            plVar3 = (longlong *)param_1[6];
            *plVar3 = 0;
            uVar10 = FUN_1439ed590(param_1,uVar12,lVar9,uVar6,uVar1 - uVar6,plVar3);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            if (*plVar3 != 0) {
              param_1[6] = param_1[6] + 8;
            }
          }
          uVar12 = uVar1;
          if ((longlong)uVar13 < (longlong)uVar1) {
            return 0xfffffffe;
          }
        }
      }
      return 0xfffffffe;
    }
    lVar8 = FUN_1439edd80(uVar2,uVar12,local_res8);
    if (lVar8 < 0) {
      return 0xfffffffe;
    }
    lVar11 = uVar12 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar13) && ((longlong)uVar13 <= lVar11)) {
      return 0xfffffffe;
    }
    lVar9 = FUN_1439ede90(uVar2,lVar11,local_res8);
    if (lVar9 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) {
      return 0xfffffffe;
    }
    uVar12 = lVar11 + local_res8[0];
    if (0x7fffffffffffffff < uVar12) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar13) && ((longlong)uVar13 < (longlong)uVar12)) break;
    if (lVar9 != 0) {
      uVar12 = uVar12 + lVar9;
      iVar7 = iVar5 + 1;
      if (lVar8 != 0xae) {
        iVar7 = iVar5;
      }
      iVar5 = iVar7;
      if ((longlong)uVar13 < (longlong)uVar12) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439eb8e0 FUN_1439eb8e0 body=1033 status=ok
// SIG undefined FUN_1439eb8e0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1439eb8e0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_a8 [2];
  longlong local_a0;
  double local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  if ((*param_5 != 0) || (*param_2 != 1)) {
    return 0xffffffff;
  }
  lVar10 = *(longlong *)(param_2 + 0x18);
  lVar7 = 0;
  uVar1 = *param_1;
  lVar12 = *(longlong *)(param_2 + 0x1a) + lVar10;
  local_98 = 0.0;
  uVar13 = 0;
  uVar14 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  local_a0 = 0;
  uVar2 = local_90;
  lVar5 = local_a0;
  do {
    local_a0 = lVar5;
    local_90 = uVar2;
    if (lVar12 <= lVar10) {
      if (lVar10 != lVar12) {
        return 0xfffffffe;
      }
      local_a0 = operator_new(0x100,&DAT_146bcbba8);
      if ((local_a0 != 0) &&
         (puVar9 = (undefined8 *)FUN_1439e5630(local_a0,param_1,param_3,param_4),
         puVar9 != (undefined8 *)0x0)) {
        uVar4 = FUN_1439e6470(param_2,puVar9 + 4);
        if (uVar4 == 0) {
          puVar9[0x18] = local_88;
          puVar9[0x19] = local_80;
          puVar9[0x1a] = local_78;
          puVar9[0x1b] = local_70;
          puVar9[0x1c] = local_68;
          puVar9[0x1d] = CONCAT44(uVar14,uVar13);
          puVar9[0x17] = lVar7;
          puVar9[0x1e] = uVar2;
          puVar9[0x1f] = lVar5;
          *param_5 = (longlong)puVar9;
          return 0;
        }
        (**(code **)*puVar9)(puVar9,1);
        return (ulonglong)uVar4;
      }
      return 0xffffffff;
    }
    lVar5 = FUN_1439edd80(uVar1,lVar10,local_a8);
    if (lVar5 < 0) {
      return 0xfffffffe;
    }
    lVar10 = lVar10 + local_a8[0];
    if ((-1 < lVar12) && (lVar12 <= lVar10)) {
      return 0xfffffffe;
    }
    lVar6 = FUN_1439ede90(uVar1,lVar10,local_a8);
    if (lVar6 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_a8[0] - 1U) {
      return 0xfffffffe;
    }
    uVar11 = lVar10 + local_a8[0];
    if (0x7fffffffffffffff < uVar11) {
      return 0xfffffffe;
    }
    if ((-1 < lVar12) && (lVar12 < (longlong)uVar11)) {
      return 0xfffffffe;
    }
    if (lVar5 == 0xb0) {
      lVar7 = FUN_1439ee650(uVar1,uVar11,lVar6);
      lVar10 = lVar7;
joined_r0x0001439ebad4:
      if (lVar10 < 1) {
        return 0xfffffffe;
      }
    }
    else {
      if (lVar5 == 0xba) {
        local_88 = FUN_1439ee650(uVar1,uVar11,lVar6);
        lVar10 = local_88;
        goto joined_r0x0001439ebad4;
      }
      if (lVar5 == 0x54b0) {
        local_80 = FUN_1439ee650(uVar1,uVar11,lVar6);
        lVar10 = local_80;
        goto joined_r0x0001439ebad4;
      }
      if (lVar5 == 0x54ba) {
        local_78 = FUN_1439ee650(uVar1,uVar11,lVar6);
        lVar10 = local_78;
        goto joined_r0x0001439ebad4;
      }
      if (lVar5 == 0x54b2) {
        local_70 = FUN_1439ee650(uVar1,uVar11,lVar6);
        lVar10 = local_70;
joined_r0x0001439ebb28:
        if (lVar10 < 0) {
          return 0xfffffffe;
        }
      }
      else {
        if (lVar5 == 0x53b8) {
          local_68 = FUN_1439ee650(uVar1,uVar11,lVar6);
          lVar10 = local_68;
          goto joined_r0x0001439ebb28;
        }
        if (lVar5 == 0x2383e3) {
          uVar8 = FUN_1439ee390(uVar1,uVar11,lVar6,&local_98);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          uVar13 = SUB84(local_98,0);
          uVar14 = (undefined4)((ulonglong)local_98 >> 0x20);
          if (local_98 <= 0.0) {
            return 0xfffffffe;
          }
        }
        else {
          if (lVar5 == 0x55b0) {
            cVar3 = FUN_1439e9cb0(uVar1,uVar11,lVar6,&local_90);
          }
          else {
            if (lVar5 != 0x7670) goto LAB_1439ebba0;
            cVar3 = FUN_1439eab10(uVar1,uVar11,lVar6,&local_a0);
          }
          if (cVar3 == '\0') {
            return 0xfffffffe;
          }
        }
      }
    }
LAB_1439ebba0:
    lVar10 = uVar11 + lVar6;
    uVar2 = local_90;
    lVar5 = local_a0;
    if (lVar12 < lVar10) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439ebcf0 FUN_1439ebcf0 body=904 status=ok
// SIG undefined FUN_1439ebcf0(void)

longlong FUN_1439ebcf0(undefined8 *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte local_res8 [8];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_48;
  longlong local_40;
  
  lVar5 = *param_3;
  plVar2 = *(longlong **)*param_1;
  lVar1 = lVar5 + param_2;
  local_40 = lVar5;
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2,&local_48,&local_res10);
  if (-1 < (int)lVar4) {
    if ((-1 < local_48) && (local_48 < lVar1)) {
      return 0xfffffffe;
    }
    if (local_res10 < lVar1) {
      *param_4 = (int)param_2;
      return 0xfffffffd;
    }
    lVar4 = *param_3;
    local_res18 = 0;
    while (lVar4 < lVar1) {
      if (local_res10 < lVar4 + 1) {
LAB_1439ec032:
        *param_4 = 1;
        return 0xfffffffd;
      }
      lVar5 = FUN_1439e8350(plVar2,*param_3,param_4);
      if (lVar5 < 0) {
        return lVar5;
      }
      if (0 < lVar5) {
        return 0xfffffffd;
      }
      lVar5 = *param_3;
      if (lVar1 < *param_4 + lVar5) goto LAB_1439ec00b;
      if (local_res10 < *param_4 + lVar5) {
        return 0xfffffffd;
      }
      lVar5 = FUN_1439edd80(plVar2,lVar5,param_4);
      if (lVar5 < 0) {
        return lVar5;
      }
      if (lVar5 == 0) goto LAB_1439ec00b;
      *param_3 = *param_3 + (longlong)*param_4;
      if (local_res10 < *param_3 + 1) goto LAB_1439ec032;
      lVar4 = FUN_1439e8350(plVar2,*param_3,param_4);
      if (lVar4 < 0) {
        return lVar4;
      }
      if (0 < lVar4) {
        return 0xfffffffd;
      }
      lVar4 = *param_3;
      if (lVar1 < *param_4 + lVar4) goto LAB_1439ec00b;
      if (local_res10 < *param_4 + lVar4) {
        return 0xfffffffd;
      }
      lVar4 = FUN_1439ede90(plVar2,lVar4,param_4);
      if (lVar4 < 0) {
        return lVar4;
      }
      *param_3 = *param_3 + (longlong)*param_4;
      lVar3 = *param_3;
      if (lVar1 < lVar3) goto LAB_1439ec00b;
      if (lVar4 != 0) {
        if (lVar4 == (1L << ((char)*param_4 * '\a' & 0x3fU)) + -1) goto LAB_1439ec00b;
        if (lVar5 == 0x75a2) {
          lVar5 = FUN_1439ee4a0(plVar2,lVar3,lVar4,&local_res18);
          if ((int)lVar5 < 0) {
            return lVar5;
          }
        }
        else if (lVar5 == 0xa1) {
          lVar4 = lVar4 + lVar3;
          if (lVar4 <= lVar1) {
            if (local_res10 < lVar3 + 1) goto LAB_1439ec032;
            lVar5 = FUN_1439e8350(plVar2,*param_3,param_4);
            if (lVar5 < 0) {
              return lVar5;
            }
            if (0 < lVar5) {
              return 0xfffffffd;
            }
            lVar5 = *param_3;
            if (*param_4 + lVar5 <= lVar4) {
              if (local_res10 < *param_4 + lVar5) {
                return 0xfffffffd;
              }
              lVar5 = FUN_1439ede90(plVar2,lVar5,param_4);
              if (lVar5 < 0) {
                return lVar5;
              }
              if (lVar5 != 0) {
                *param_3 = *param_3 + (longlong)*param_4;
                lVar5 = *param_3 + 2;
                if (lVar5 <= lVar4) {
                  if (local_res10 < lVar5) {
                    *param_4 = 2;
                    return 0xfffffffd;
                  }
                  lVar3 = *param_3 + 3;
                  *param_3 = lVar5;
                  if (lVar3 <= lVar4) {
                    if (local_res10 < lVar3) goto LAB_1439ec032;
                    lVar5 = (**(code **)*plVar2)(plVar2,lVar5,1,local_res8);
                    if ((int)lVar5 < 0) {
                      *param_4 = 1;
                      return lVar5;
                    }
                    *param_3 = *param_3 + 1;
                    if (*param_3 < lVar4) {
                      if (((local_res8[0] & 6) != 0) && (local_res10 < lVar4)) {
                        *param_4 = (int)lVar4 - (int)*param_3;
                        return 0xfffffffd;
                      }
                      *param_3 = lVar4;
                      goto LAB_1439ebfed;
                    }
                  }
                }
              }
            }
          }
          goto LAB_1439ec00b;
        }
        *param_3 = *param_3 + lVar4;
        if (lVar1 < *param_3) goto LAB_1439ec00b;
      }
LAB_1439ebfed:
      lVar5 = local_40;
      lVar4 = *param_3;
    }
    if (*param_3 == lVar1) {
      lVar4 = FUN_1439e6830(param_1,0xa0,lVar5,param_2,local_res18);
      if ((int)lVar4 == 0) {
        param_1[3] = lVar1;
      }
    }
    else {
LAB_1439ec00b:
      lVar4 = 0xfffffffe;
    }
  }
  return lVar4;
}



// FUNCTION 1439ec080 FUN_1439ec080 body=369 status=ok
// SIG undefined FUN_1439ec080(void)

undefined8
FUN_1439ec080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  bVar1 = false;
  if (param_2 < param_3) {
    do {
      lVar3 = FUN_1439edd80(param_4,param_2,local_res10);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      param_2 = param_2 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= param_2)) {
        return 0xfffffffe;
      }
      uVar4 = FUN_1439ede90(param_4,param_2,local_res10);
      if ((longlong)uVar4 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res10[0] - 1U) {
        return 0xfffffffe;
      }
      uVar5 = param_2 + local_res10[0];
      if (0x7fffffffffffffff < uVar5) {
        return 0xfffffffe;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar5)) {
        return 0xfffffffe;
      }
      if (lVar3 == 0x4254) {
        lVar3 = FUN_1439ee650(param_4,uVar5,uVar4);
        if (lVar3 < 0) {
          return 0xfffffffe;
        }
        *param_5 = lVar3;
        bVar1 = true;
      }
      else if (lVar3 == 0x4255) {
        if ((longlong)uVar4 < 1) {
          return 0xfffffffe;
        }
        if ((0x80000000 < uVar4) || (lVar3 = operator_new(uVar4,&DAT_146bcbba8), lVar3 == 0)) {
          return 0xffffffff;
        }
        iVar2 = (**(code **)*param_4)(param_4,uVar5,uVar4 & 0xffffffff,lVar3);
        if (iVar2 != 0) {
          FMemory::operator_delete(lVar3);
          return 0;
        }
        param_5[1] = lVar3;
        param_5[2] = uVar4;
      }
      param_2 = uVar5 + uVar4;
      if (param_3 < param_2) {
        return 0xfffffffe;
      }
    } while (param_2 < param_3);
    if (bVar1) {
      return 0;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439ec200 FUN_1439ec200 body=243 status=ok
// SIG undefined FUN_1439ec200(void)

undefined8
FUN_1439ec200(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    lVar1 = FUN_1439edd80(param_4,param_2,local_res10);
    if (lVar1 < 0) {
      return 0xfffffffe;
    }
    param_2 = param_2 + local_res10[0];
    if ((-1 < param_3) && (param_3 <= param_2)) {
      return 0xfffffffe;
    }
    lVar2 = FUN_1439ede90(param_4,param_2,local_res10);
    if (lVar2 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res10[0] - 1U) {
      return 0xfffffffe;
    }
    uVar3 = param_2 + local_res10[0];
    if (0x7fffffffffffffff < uVar3) {
      return 0xfffffffe;
    }
    if ((-1 < param_3) && (param_3 < (longlong)uVar3)) {
      return 0xfffffffe;
    }
    if (lVar1 == 0x47e8) {
      lVar1 = FUN_1439ee650(param_4,uVar3,lVar2);
      *param_5 = lVar1;
      if (lVar1 != 1) {
        return 0xfffffffe;
      }
    }
    param_2 = uVar3 + lVar2;
  } while (param_2 <= param_3);
  return 0xfffffffe;
}



// FUNCTION 1439ec300 FUN_1439ec300 body=1005 status=ok
// SIG undefined FUN_1439ec300(void)

int FUN_1439ec300(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res10 [2];
  undefined8 *local_res18;
  
  uVar12 = 0;
  param_3 = param_2 + param_3;
  lVar9 = param_2;
  uVar11 = uVar12;
  if (param_2 < param_3) {
    do {
      lVar5 = FUN_1439edd80(param_4,lVar9,local_res10);
      if (lVar5 < 0) {
        return -2;
      }
      lVar9 = lVar9 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= lVar9)) {
        return -2;
      }
      lVar6 = FUN_1439ede90(param_4,lVar9,local_res10);
      if (lVar6 < 0) {
        return -2;
      }
      if (7 < local_res10[0] - 1U) {
        return -2;
      }
      uVar10 = lVar9 + local_res10[0];
      if (0x7fffffffffffffff < uVar10) {
        return -2;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar10)) {
        return -2;
      }
      iVar4 = (int)uVar12 + 1;
      if (lVar5 != 0x5034) {
        iVar4 = (int)uVar12;
      }
      uVar12 = (ulonglong)iVar4;
      iVar3 = (int)uVar11 + 1;
      if (lVar5 != 0x5035) {
        iVar3 = (int)uVar11;
      }
      lVar9 = uVar10 + lVar6;
      if (param_3 < lVar9) {
        return -2;
      }
      uVar11 = (longlong)iVar3;
    } while (lVar9 < param_3);
    if (iVar4 < 1) {
      if (iVar3 < 1) {
        return -1;
      }
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar12;
      uVar7 = SUB168(ZEXT816(8) * auVar1,0);
      if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar9 = operator_new(uVar7,&DAT_146bcbba8);
      *param_1 = lVar9;
      if (lVar9 == 0) {
        return -1;
      }
      param_1[1] = lVar9;
      if (iVar3 < 1) goto LAB_1439ec480;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar3;
    uVar7 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar9 = operator_new(uVar7,&DAT_146bcbba8);
    param_1[2] = lVar9;
    if (lVar9 != 0) {
      param_1[3] = lVar9;
LAB_1439ec480:
      do {
        if ((((((-1 < param_3) && (param_3 <= param_2)) ||
              (lVar9 = FUN_1439edd80(param_4,param_2,local_res10), lVar9 < 0)) ||
             ((param_2 = param_2 + local_res10[0], -1 < param_3 && (param_3 <= param_2)))) ||
            ((lVar5 = FUN_1439ede90(param_4,param_2,local_res10), lVar5 < 0 ||
             ((7 < local_res10[0] - 1U ||
              (uVar11 = param_2 + local_res10[0], 0x7fffffffffffffff < uVar11)))))) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar11)))) {
          return -2;
        }
        if (lVar9 == 0x5031) {
          lVar9 = FUN_1439ee650(param_4,uVar11,lVar5);
          param_1[4] = lVar9;
        }
        else if (lVar9 == 0x5032) {
          lVar9 = FUN_1439ee650(param_4,uVar11,lVar5);
          param_1[5] = lVar9;
          if (lVar9 == 0) {
            return -1;
          }
        }
        else if (lVar9 == 0x5033) {
          lVar9 = FUN_1439ee650(param_4,uVar11,lVar5);
          param_1[6] = lVar9;
        }
        else if (lVar9 == 0x5034) {
          puVar8 = (undefined8 *)operator_new(0x18,&DAT_146bcbba8);
          if (puVar8 == (undefined8 *)0x0) {
            return -1;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          local_res18 = puVar8;
          iVar4 = FUN_1439ec080(param_1,uVar11,lVar5,param_4,puVar8);
          if (iVar4 != 0) {
            FMemory::operator_delete(puVar8[1]);
            FMemory::operator_delete(puVar8,0x18);
            return iVar4;
          }
          *(undefined8 **)param_1[1] = puVar8;
          param_1[1] = param_1[1] + 8;
        }
        else if (lVar9 == 0x5035) {
          puVar8 = (undefined8 *)operator_new(0x50,&DAT_146bcbba8);
          if (puVar8 == (undefined8 *)0x0) {
            return -1;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 1;
          local_res18 = puVar8;
          iVar4 = FUN_1439eca50(param_1,uVar11,lVar5,param_4,puVar8);
          if (iVar4 != 0) {
            FMemory::operator_delete(puVar8[1]);
            FMemory::operator_delete(puVar8[3]);
            FMemory::operator_delete(puVar8[5]);
            FMemory::operator_delete(puVar8,0x50);
            return iVar4;
          }
          *(undefined8 **)param_1[3] = puVar8;
          param_1[3] = param_1[3] + 8;
        }
        param_2 = uVar11 + lVar5;
        if (param_3 < param_2) {
          return -2;
        }
      } while (param_2 < param_3);
      if (param_2 == param_3) {
        return 0;
      }
      return -2;
    }
    FMemory::operator_delete(*param_1);
  }
  return -1;
}



// FUNCTION 1439ec6f0 FUN_1439ec6f0 body=666 status=ok
// SIG undefined FUN_1439ec6f0(void)

ulonglong FUN_1439ec6f0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res10 [2];
  undefined8 *local_res18;
  
  param_3 = param_2 + param_3;
  uVar11 = 0;
  uVar1 = **(undefined8 **)(param_1 + 8);
  lVar9 = param_2;
  if (param_2 < param_3) {
    do {
      lVar5 = FUN_1439edd80(uVar1,lVar9,local_res10);
      if (lVar5 < 0) {
        return 0xfffffffe;
      }
      lVar9 = lVar9 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= lVar9)) {
        return 0xfffffffe;
      }
      lVar6 = FUN_1439ede90(uVar1,lVar9,local_res10);
      if (lVar6 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res10[0] - 1U) {
        return 0xfffffffe;
      }
      uVar10 = lVar9 + local_res10[0];
      if (0x7fffffffffffffff < uVar10) {
        return 0xfffffffe;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar10)) {
        return 0xfffffffe;
      }
      iVar3 = (int)uVar11 + 1;
      if (lVar5 != 0x6240) {
        iVar3 = (int)uVar11;
      }
      lVar9 = uVar10 + lVar6;
      uVar11 = (ulonglong)iVar3;
      if (param_3 < lVar9) {
        return 0xfffffffe;
      }
    } while (lVar9 < param_3);
    if (0 < iVar3) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar7 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar9 = operator_new(uVar7,&DAT_146bcbba8);
      *(longlong *)(param_1 + 0xa8) = lVar9;
      if (lVar9 == 0) {
        return 0xffffffff;
      }
      *(longlong *)(param_1 + 0xb0) = lVar9;
      do {
        if ((((((-1 < param_3) && (param_3 <= param_2)) ||
              (lVar9 = FUN_1439edd80(uVar1,param_2,local_res10), lVar9 < 0)) ||
             ((param_2 = param_2 + local_res10[0], -1 < param_3 && (param_3 <= param_2)))) ||
            ((lVar5 = FUN_1439ede90(uVar1,param_2,local_res10), lVar5 < 0 ||
             ((7 < local_res10[0] - 1U ||
              (uVar11 = param_2 + local_res10[0], 0x7fffffffffffffff < uVar11)))))) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar11)))) {
          return 0xfffffffe;
        }
        if (lVar9 == 0x6240) {
          puVar8 = (undefined8 *)operator_new(0x38,&DAT_146bcbba8);
          if (puVar8 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 1;
          puVar8[6] = 0;
          local_res18 = puVar8;
          uVar4 = FUN_1439ec300(puVar8,uVar11,lVar5,uVar1);
          if (uVar4 != 0) {
            FUN_1439e5960(puVar8);
            FMemory::operator_delete(puVar8,0x38);
            return (ulonglong)uVar4;
          }
          **(undefined8 **)(param_1 + 0xb0) = puVar8;
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 8;
        }
        param_2 = uVar11 + lVar5;
        if (param_3 < param_2) {
          return 0xfffffffe;
        }
      } while (param_2 < param_3);
      if (param_2 != param_3) {
        return 0xfffffffe;
      }
      return 0;
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 1439ec990 FUN_1439ec990 body=192 status=ok
// SIG undefined FUN_1439ec990(void)

undefined8
FUN_1439ec990(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  int local_res18 [2];
  
  if ((param_3 < 0) || (*param_2 < param_3)) {
    lVar1 = FUN_1439edd80(param_1,*param_2,local_res18);
    *param_4 = lVar1;
    if (-1 < lVar1) {
      *param_2 = *param_2 + (longlong)local_res18[0];
      if ((param_3 < 0) || (*param_2 < param_3)) {
        lVar1 = FUN_1439ede90(param_1,*param_2,local_res18);
        *param_5 = lVar1;
        if (((-1 < lVar1) &&
            ((local_res18[0] - 1U < 8 &&
             ((ulonglong)(*param_2 + (longlong)local_res18[0]) < 0x8000000000000000)))) &&
           ((*param_2 = *param_2 + (longlong)local_res18[0], param_3 < 0 || (*param_2 <= param_3))))
        {
          return 0;
        }
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439eca50 FUN_1439eca50 body=716 status=ok
// SIG undefined FUN_1439eca50(void)

undefined8
FUN_1439eca50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    lVar2 = FUN_1439edd80(param_4,param_2,local_res10);
    if (lVar2 < 0) {
      return 0xfffffffe;
    }
    param_2 = param_2 + local_res10[0];
    if ((-1 < param_3) && (param_3 <= param_2)) {
      return 0xfffffffe;
    }
    uVar3 = FUN_1439ede90(param_4,param_2,local_res10);
    if ((longlong)uVar3 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res10[0] - 1U) {
      return 0xfffffffe;
    }
    uVar5 = param_2 + local_res10[0];
    if (0x7fffffffffffffff < uVar5) {
      return 0xfffffffe;
    }
    if ((-1 < param_3) && (param_3 < (longlong)uVar5)) {
      return 0xfffffffe;
    }
    if (lVar2 == 0x47e1) {
      lVar2 = FUN_1439ee650(param_4,uVar5,uVar3);
      *param_5 = lVar2;
      if (lVar2 != 5) {
        return 0xfffffffe;
      }
    }
    else if (lVar2 == 0x47e2) {
      FMemory::operator_delete(param_5[1]);
      param_5[1] = 0;
      param_5[2] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if ((0x80000000 < uVar3) || (lVar2 = operator_new(uVar3,&DAT_146bcbba8), lVar2 == 0)) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) {
LAB_1439ecd0d:
        FMemory::operator_delete(lVar2);
        return 0;
      }
      param_5[1] = lVar2;
      param_5[2] = uVar3;
    }
    else if (lVar2 == 0x47e3) {
      FMemory::operator_delete(param_5[3]);
      param_5[3] = 0;
      param_5[4] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if (0x80000000 < uVar3) {
        return 0xffffffff;
      }
      lVar2 = operator_new(uVar3,&DAT_146bcbba8);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) goto LAB_1439ecd0d;
      param_5[3] = lVar2;
      param_5[4] = uVar3;
    }
    else if (lVar2 == 0x47e4) {
      FMemory::operator_delete(param_5[5]);
      param_5[5] = 0;
      param_5[6] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if (0x80000000 < uVar3) {
        return 0xffffffff;
      }
      lVar2 = operator_new(uVar3,&DAT_146bcbba8);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) goto LAB_1439ecd0d;
      param_5[5] = lVar2;
      param_5[6] = uVar3;
    }
    else if (lVar2 == 0x47e5) {
      lVar2 = FUN_1439ee650(param_4,uVar5,uVar3);
      param_5[7] = lVar2;
    }
    else if (lVar2 == 0x47e6) {
      lVar2 = FUN_1439ee650(param_4,uVar5,uVar3);
      param_5[8] = lVar2;
    }
    else if ((lVar2 == 0x47e7) &&
            (uVar4 = FUN_1439ec200(param_1,uVar5,uVar3,param_4,param_5 + 9), (int)uVar4 != 0)) {
      return uVar4;
    }
    param_2 = uVar5 + uVar3;
    if (param_3 < param_2) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 1439ecd20 FUN_1439ecd20 body=320 status=ok
// SIG undefined FUN_1439ecd20(void)

bool FUN_1439ecd20(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res18 [4];
  
  if (param_3 < 1) {
    return false;
  }
  param_3 = param_2 + param_3;
  lVar1 = FUN_1439edd80(param_1,param_2,local_res18);
  if ((-1 < lVar1) && (lVar1 == 0x53ab)) {
    param_2 = param_2 + local_res18[0];
    if (param_2 <= param_3) {
      lVar1 = FUN_1439ede90(param_1,param_2,local_res18);
      if (0 < lVar1) {
        param_2 = local_res18[0] + param_2;
        if ((param_2 <= param_3) && (lVar3 = lVar1 + param_2, lVar3 <= param_3)) {
          lVar2 = FUN_1439edd80(param_1,param_2,local_res18);
          *param_4 = lVar2;
          if ((0 < lVar2) &&
             ((local_res18[0] == lVar1 &&
              (lVar1 = FUN_1439edd80(param_1,lVar3,local_res18), lVar1 == 0x53ac)))) {
            lVar3 = lVar3 + local_res18[0];
            if ((lVar3 <= param_3) && (lVar1 = FUN_1439ede90(param_1,lVar3,local_res18), 0 < lVar1))
            {
              if ((local_res18[0] + lVar3 <= param_3) &&
                 (lVar1 = lVar1 + local_res18[0] + lVar3, lVar1 <= param_3)) {
                lVar3 = FUN_1439ee650(param_1);
                param_4[1] = lVar3;
                if (-1 < lVar3) {
                  return lVar1 == param_3;
                }
              }
            }
          }
        }
      }
      return false;
    }
  }
  return false;
}



// FUNCTION 1439ece60 FUN_1439ece60 body=1413 status=ok
// SIG undefined FUN_1439ece60(void)

undefined1 * FUN_1439ece60(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined1 *local_res20;
  
  iVar2 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_res18,&local_res10);
  if (iVar2 < 0) {
    return (undefined1 *)(longlong)iVar2;
  }
  if ((0 < local_res18) && (local_res18 < local_res10)) {
    return (undefined1 *)0xfffffffffffffffe;
  }
  if ((longlong)param_1[3] < 0) {
    lVar10 = -1;
  }
  else {
    lVar10 = param_1[2] + param_1[3];
    if ((-1 < lVar10) &&
       (((-1 < local_res18 && (local_res18 < lVar10)) || (lVar10 < (longlong)param_1[0xc])))) {
      return (undefined1 *)0xfffffffffffffffe;
    }
  }
  puVar8 = (undefined8 *)0x0;
  do {
    if (((-1 < local_res18) && (local_res18 <= (longlong)param_1[0xc])) ||
       ((-1 < lVar10 && (lVar10 <= (longlong)param_1[0xc])))) {
LAB_1439ed381:
      if ((-1 < lVar10) && (lVar10 < (longlong)param_1[0xc])) {
        return (undefined1 *)0xfffffffffffffffe;
      }
      if (param_1[0xf] == 0) {
        return (undefined1 *)0xfffffffffffffffe;
      }
      if (param_1[0x10] == 0) {
        return (undefined1 *)0xfffffffffffffffe;
      }
      return (undefined1 *)0x0;
    }
    lVar1 = param_1[0xc];
    puVar3 = (undefined1 *)(lVar1 + 1);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    if (local_res10 < (longlong)puVar3) {
      return puVar3;
    }
    puVar3 = (undefined1 *)FUN_1439e8350(*param_1,lVar1,local_res8);
    if ((longlong)puVar3 < 0) {
      return puVar3;
    }
    lVar9 = lVar1;
    if (0 < (longlong)puVar3) {
LAB_1439ed3af:
      return (undefined1 *)(lVar9 + 1);
    }
    lVar7 = (longlong)local_res8[0];
    if ((-1 < lVar10) && (lVar10 < lVar1 + lVar7)) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    if (local_res10 < lVar1 + lVar7) {
LAB_1439ed3a9:
      return (undefined1 *)(lVar9 + lVar7);
    }
    lVar4 = FUN_1439edd80(*param_1,lVar1,local_res8);
    if (lVar4 < 0) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    if (lVar4 == 0x1f43b675) goto LAB_1439ed381;
    lVar9 = lVar1 + local_res8[0];
    if (local_res10 < lVar9 + 1) {
      return (undefined1 *)(lVar9 + 1);
    }
    puVar3 = (undefined1 *)FUN_1439e8350(*param_1,lVar9,local_res8);
    if ((longlong)puVar3 < 0) {
      return puVar3;
    }
    if (0 < (longlong)puVar3) goto LAB_1439ed3af;
    lVar7 = (longlong)local_res8[0];
    if ((-1 < lVar10) && (lVar10 < lVar9 + lVar7)) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    if (local_res10 < lVar9 + lVar7) goto LAB_1439ed3a9;
    puVar3 = (undefined1 *)FUN_1439ede90(*param_1,lVar9,local_res8);
    if ((longlong)puVar3 < 0) {
      return puVar3;
    }
    if (local_res8[0] < 1) {
      return puVar3;
    }
    if (8 < local_res8[0]) {
      return puVar3;
    }
    lVar9 = lVar9 + local_res8[0];
    local_res20 = puVar3 + lVar9;
    if ((undefined1 *)0x7fffffffffffffff < local_res20) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    puVar11 = puVar3 + (lVar9 - lVar1);
    if ((-1 < lVar10) && (lVar10 < (longlong)(puVar3 + lVar9))) {
      return (undefined1 *)0xfffffffffffffffe;
    }
    if (local_res10 < (longlong)(puVar3 + lVar9)) {
      return local_res20;
    }
    if (lVar4 == 0x1549a966) {
      if (param_1[0xf] != 0) {
        return (undefined1 *)0xfffffffffffffffe;
      }
      puVar5 = (undefined8 *)operator_new(0x50,&DAT_146bcbba8);
      puVar6 = puVar8;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = param_1;
        puVar5[1] = lVar9;
        puVar5[2] = puVar3;
        puVar5[3] = lVar1;
        puVar5[4] = puVar11;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar6 = puVar5;
      }
      param_1[0xf] = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
LAB_1439ed209:
        return &DAT_ffffffffffffffff;
      }
      iVar2 = FUN_1439eb100(puVar6);
LAB_1439ed34c:
      if (iVar2 != 0) {
        return (undefined1 *)(longlong)iVar2;
      }
    }
    else {
      if (lVar4 == 0x1654ae6b) {
        if (param_1[0x10] != 0) {
          return (undefined1 *)0xfffffffffffffffe;
        }
        puVar5 = (undefined8 *)operator_new(0x38,&DAT_146bcbba8);
        puVar6 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_1;
          puVar5[1] = lVar9;
          puVar5[2] = puVar3;
          puVar5[3] = lVar1;
          puVar5[4] = puVar11;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar6 = puVar5;
        }
        param_1[0x10] = puVar6;
        if (puVar6 == (undefined8 *)0x0) goto LAB_1439ed209;
        iVar2 = FUN_1439eb690(puVar6);
        goto LAB_1439ed34c;
      }
      if (lVar4 == 0x1c53bb6b) {
        if (param_1[0x11] == 0) {
          puVar5 = (undefined8 *)operator_new(0x40,&DAT_146bcbba8);
          puVar6 = puVar8;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = param_1;
            puVar5[1] = lVar9;
            puVar5[2] = puVar3;
            puVar5[3] = lVar1;
            puVar5[4] = puVar11;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = lVar9;
            puVar6 = puVar5;
          }
          param_1[0x11] = puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_1439ed209;
        }
      }
      else if (lVar4 == 0x114d9b74) {
        if (param_1[0xe] == 0) {
          puVar5 = (undefined8 *)operator_new(0x48,&DAT_146bcbba8);
          puVar6 = puVar8;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = param_1;
            puVar5[1] = lVar9;
            puVar5[2] = puVar3;
            puVar5[3] = lVar1;
            puVar5[4] = puVar11;
            puVar5[5] = 0;
            *(undefined4 *)(puVar5 + 6) = 0;
            puVar5[7] = 0;
            *(undefined4 *)(puVar5 + 8) = 0;
            puVar6 = puVar5;
          }
          param_1[0xe] = puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_1439ed209;
          iVar2 = FUN_1439eae00(puVar6);
          goto LAB_1439ed34c;
        }
      }
      else if (lVar4 == 0x1043a770) {
        if (param_1[0x12] == 0) {
          puVar5 = (undefined8 *)operator_new(0x38,&DAT_146bcbba8);
          puVar6 = puVar8;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = param_1;
            puVar5[1] = lVar9;
            puVar5[2] = puVar3;
            puVar5[3] = lVar1;
            puVar5[4] = puVar11;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar6 = puVar5;
          }
          param_1[0x12] = puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_1439ed209;
          iVar2 = FUN_1439e97d0(puVar6);
          goto LAB_1439ed34c;
        }
      }
      else if ((lVar4 == 0x1254c367) && (param_1[0x13] == 0)) {
        puVar5 = (undefined8 *)operator_new(0x38,&DAT_146bcbba8);
        puVar6 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_1;
          puVar5[1] = lVar9;
          puVar5[2] = puVar3;
          puVar5[3] = lVar1;
          puVar5[4] = puVar11;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar6 = puVar5;
        }
        param_1[0x13] = puVar6;
        if (puVar6 == (undefined8 *)0x0) goto LAB_1439ed209;
        iVar2 = FUN_1439eb530(puVar6);
        goto LAB_1439ed34c;
      }
    }
    param_1[0xc] = local_res20;
  } while( true );
}



// FUNCTION 1439ed3f0 FUN_1439ed3f0 body=415 status=ok
// SIG undefined FUN_1439ed3f0(void)

longlong FUN_1439ed3f0(undefined8 *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte local_res8 [8];
  longlong local_res10;
  undefined1 local_res18 [16];
  
  lVar5 = *param_3;
  plVar3 = *(longlong **)*param_1;
  lVar2 = lVar5 + param_2;
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_res18,&local_res10);
  if ((int)lVar4 < 0) {
    return lVar4;
  }
  if (*param_3 + 1 <= local_res10) {
    lVar4 = FUN_1439e8350(plVar3,*param_3,param_4);
    if (lVar4 < 0) {
      return lVar4;
    }
    if (0 < lVar4) {
      return 0xfffffffd;
    }
    lVar4 = (longlong)*param_4 + *param_3;
    if (lVar2 < lVar4) {
      return 0xfffffffe;
    }
    if (local_res10 < lVar4) {
      return 0xfffffffd;
    }
    lVar4 = FUN_1439ede90(plVar3,*param_3,param_4);
    if (lVar4 < 0) {
      return lVar4;
    }
    if (lVar4 == 0) {
      return 0xfffffffe;
    }
    *param_3 = *param_3 + (longlong)*param_4;
    lVar4 = *param_3 + 2;
    if (lVar2 < lVar4) {
      return 0xfffffffe;
    }
    if (local_res10 < lVar4) {
      *param_4 = 2;
      return 0xfffffffd;
    }
    lVar1 = *param_3 + 3;
    *param_3 = lVar4;
    if (lVar2 < lVar1) {
      return 0xfffffffe;
    }
    if (lVar1 <= local_res10) {
      lVar4 = (**(code **)*plVar3)(plVar3,lVar4,1,local_res8);
      if ((int)lVar4 < 0) {
        *param_4 = 1;
        return lVar4;
      }
      *param_3 = *param_3 + 1;
      if (lVar2 <= *param_3) {
        return 0xfffffffe;
      }
      if (((local_res8[0] & 6) != 0) && (local_res10 < lVar2)) {
        *param_4 = (int)lVar2 - (int)*param_3;
        return 0xfffffffd;
      }
      lVar5 = FUN_1439e6830(param_1,0xa3,lVar5,param_2,0);
      if ((int)lVar5 != 0) {
        return lVar5;
      }
      param_1[3] = lVar2;
      return lVar5;
    }
  }
  *param_4 = 1;
  return 0xfffffffd;
}



// FUNCTION 1439ed590 FUN_1439ed590 body=1582 status=ok
// SIG undefined FUN_1439ed590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1439ed590(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined1 auStack_168 [32];
  longlong *local_148;
  ulonglong local_138;
  ulonglong local_130;
  byte local_128 [8];
  ulonglong local_120;
  undefined8 uStack_118;
  longlong local_110;
  int local_108 [2];
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined1 local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_c8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_d8 = param_6;
  if (*param_6 == 0) {
    puVar1 = *(undefined8 **)*param_1;
    param_3 = param_2 + param_3;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uVar20 = 0xffffffffffffffff;
    local_f0 = 0xffffffffffffffff;
    uStack_e8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    uStack_f8 = 0xffffffffffffffff;
    local_120 = 0xffffffffffffffff;
    uStack_118 = 0xffffffffffffffff;
    local_130 = 1;
    local_110 = param_3;
    local_e0 = param_1;
    local_d0 = param_4;
    if (param_2 < param_3) {
      local_138 = 0xffffffffffffffff;
      local_120 = 0xffffffffffffffff;
LAB_1439ed67b:
      lVar11 = FUN_1439edd80(puVar1,param_2,local_108);
      uVar20 = extraout_XMM0_Qa;
      if (((lVar11 < 0) ||
          ((((param_2 = param_2 + local_108[0], -1 < param_3 && (param_3 <= param_2)) ||
            (uVar12 = FUN_1439ede90(puVar1,param_2,local_108), uVar20 = extraout_XMM0_Qa_00,
            (longlong)uVar12 < 0)) ||
           ((7 < local_108[0] - 1U || (uVar16 = param_2 + local_108[0], 0x7fffffffffffffff < uVar16)
            ))))) || ((-1 < param_3 && (param_3 < (longlong)uVar16)))) goto LAB_1439eda07;
      uVar3 = local_138;
      uVar4 = local_120;
      uVar5 = local_100;
      uVar6 = uStack_f8;
      uVar7 = uVar16;
      uVar8 = uVar12;
      lVar13 = local_a8;
      lVar14 = lStack_70;
      uVar9 = local_68;
      if (((lVar11 != 0xe0) &&
          (uVar5 = uVar16, uVar6 = uVar12, uVar7 = local_f0, uVar8 = uStack_e8, lVar11 != 0xe1)) &&
         (uVar3 = uVar12, uVar4 = uVar16, uVar5 = local_100, uVar6 = uStack_f8, lVar11 != 0x6d80)) {
        if (lVar11 == 0x73c5) {
          if (8 < (longlong)uVar12) goto LAB_1439eda07;
          local_b0 = 0;
          uVar17 = local_b0;
          param_3 = local_110;
          for (uVar19 = uVar16; uVar3 = local_138, uVar4 = local_120, local_110 = param_3,
              uVar5 = local_100, uVar6 = uStack_f8, uVar7 = local_f0, uVar8 = uStack_e8,
              local_b0 = uVar17, lVar13 = local_a8, lVar14 = lStack_70, uVar9 = local_68,
              uVar19 != uVar12 + uVar16; uVar19 = uVar19 + 1) {
            iVar10 = (**(code **)*puVar1)(puVar1,uVar19,1,local_128);
            uVar20 = extraout_XMM0_Qa_01;
            if (iVar10 != 0) goto LAB_1439edb68;
            uVar17 = uVar17 << 8 | (ulonglong)local_128[0];
            param_3 = local_110;
          }
        }
        else if (lVar11 == 0xd7) {
          lVar11 = FUN_1439ee650(puVar1,uVar16,uVar12);
          uVar20 = extraout_XMM0_Qa_02;
          if (0x7e < lVar11 - 1U) goto LAB_1439eda07;
          local_b8 = CONCAT44((int)lVar11,(int)local_b8);
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
        }
        else if (lVar11 == 0x83) {
          lVar11 = FUN_1439ee650(puVar1,uVar16,uVar12);
          uVar20 = extraout_XMM0_Qa_03;
          if (0xfd < lVar11 - 1U) goto LAB_1439eda07;
          local_b8 = CONCAT44(local_b8._4_4_,(int)lVar11);
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
        }
        else {
          if (lVar11 == 0x536e) {
            puVar18 = &local_90;
          }
          else {
            if (lVar11 != 0x22b59c) {
              if (lVar11 == 0x23e383) {
                lVar13 = FUN_1439ee650(puVar1,uVar16,uVar12);
                uVar20 = extraout_XMM0_Qa_05;
                uVar3 = local_138;
                uVar4 = local_120;
                uVar5 = local_100;
                uVar6 = uStack_f8;
                uVar7 = local_f0;
                uVar8 = uStack_e8;
                lVar14 = lStack_70;
                uVar9 = local_68;
                if (lVar13 < 0) goto LAB_1439eda07;
              }
              else {
                if (lVar11 == 0x86) {
                  puVar18 = &uStack_80;
                  goto LAB_1439ed82b;
                }
                if (lVar11 == 0x9c) {
                  local_130 = FUN_1439ee650(puVar1,uVar16,uVar12);
                  uVar20 = extraout_XMM0_Qa_06;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  lVar14 = lStack_70;
                  uVar9 = local_68;
                  if (1 < local_130) goto LAB_1439eda07;
                }
                else if (lVar11 == 0x63a2) {
                  uVar20 = FMemory::operator_delete(lStack_70);
                  lStack_70 = 0;
                  local_68 = 0;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  lVar14 = lStack_70;
                  uVar9 = local_68;
                  if (uVar12 == 0) goto LAB_1439ed991;
                  if ((0x80000000 < uVar12) ||
                     (lVar14 = operator_new(uVar12,&DAT_146bcbba8), uVar20 = extraout_XMM0_Qa_07,
                     lVar14 == 0)) {
                    iVar10 = -1;
                    goto LAB_1439edb68;
                  }
                  iVar10 = (**(code **)*puVar1)(puVar1,uVar16,uVar12 & 0xffffffff,lVar14);
                  uVar20 = extraout_XMM0_Qa_08;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  uVar9 = uVar12;
                  if (iVar10 != 0) {
                    uVar20 = FMemory::operator_delete(lVar14);
                    goto LAB_1439edb68;
                  }
                }
                else {
                  if (lVar11 == 0x258688) {
                    puVar18 = &local_78;
                    goto LAB_1439ed82b;
                  }
                  if (lVar11 == 0x56aa) {
                    local_a0 = FUN_1439ee650(puVar1,uVar16,uVar12);
                    uVar20 = extraout_XMM0_Qa_09;
                    uVar3 = local_138;
                    uVar4 = local_120;
                    uVar5 = local_100;
                    uVar6 = uStack_f8;
                    uVar7 = local_f0;
                    uVar8 = uStack_e8;
                    lVar13 = local_a8;
                    lVar14 = lStack_70;
                    uVar9 = local_68;
                  }
                  else {
                    uVar3 = local_138;
                    uVar4 = local_120;
                    if (lVar11 == 0x56bb) {
                      local_98 = FUN_1439ee650(puVar1,uVar16,uVar12);
                      uVar20 = extraout_XMM0_Qa_10;
                      uVar3 = local_138;
                      uVar4 = local_120;
                      uVar5 = local_100;
                      uVar6 = uStack_f8;
                      uVar7 = local_f0;
                      uVar8 = uStack_e8;
                      lVar13 = local_a8;
                      lVar14 = lStack_70;
                      uVar9 = local_68;
                    }
                  }
                }
              }
              goto LAB_1439ed991;
            }
            puVar18 = &local_88;
          }
LAB_1439ed82b:
          iVar10 = FUN_1439ee580(puVar1,uVar16,uVar12,puVar18);
          uVar20 = extraout_XMM0_Qa_04;
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
          if (iVar10 != 0) goto LAB_1439edb68;
        }
      }
LAB_1439ed991:
      local_68 = uVar9;
      lStack_70 = lVar14;
      local_a8 = lVar13;
      uStack_e8 = uVar8;
      local_f0 = uVar7;
      uStack_f8 = uVar6;
      local_100 = uVar5;
      local_120 = uVar4;
      local_138 = uVar3;
      param_2 = uVar16 + uVar12;
      if (param_3 < param_2) goto LAB_1439eda07;
      uVar12 = local_138;
      if (param_3 <= param_2) goto LAB_1439ed9db;
      goto LAB_1439ed67b;
    }
    uVar12 = 0xffffffffffffffff;
LAB_1439ed9db:
    plVar2 = local_d8;
    uVar16 = local_120;
    if ((param_2 == param_3) && (0 < local_b8._4_4_)) {
      plVar15 = (longlong *)local_e0[5];
      do {
        if (plVar15 == (longlong *)local_e0[6]) {
          if ((int)local_b8 < 1) break;
          local_60 = 0 < (longlong)local_130;
          if ((int)local_b8 == 1) {
            if (((longlong)local_f0 < 0) || (-1 < (longlong)local_100)) break;
            local_110 = 0;
            local_148 = &local_110;
            local_58 = local_f0;
            uStack_50 = uStack_e8;
            iVar10 = FUN_1439eb8e0(*local_e0,&local_b8,local_d0,param_5);
            uVar20 = extraout_XMM0_Qa_11;
            if (iVar10 != 0) goto LAB_1439edb68;
            *plVar2 = local_110;
            if (-1 < (longlong)uVar16) {
              uVar20 = FUN_1439ec6f0(local_110,uVar16,uVar12);
            }
          }
          else if ((int)local_b8 == 2) {
            if (((longlong)local_100 < 0) || (-1 < (longlong)local_f0)) break;
            local_110 = 0;
            local_148 = &local_110;
            local_58 = local_100;
            uStack_50 = uStack_f8;
            iVar10 = FUN_1439e8f00(*local_e0,&local_b8,local_d0,param_5);
            uVar20 = extraout_XMM0_Qa_12;
            if (iVar10 != 0) goto LAB_1439edb68;
            *plVar2 = local_110;
            if (-1 < (longlong)uVar16) {
              uVar20 = FUN_1439ec6f0(local_110,uVar16,uVar12);
            }
          }
          else {
            if (((-1 < (longlong)local_100) || (-1 < (longlong)local_f0)) ||
               (((int)local_b8 == 0x21 && (-1 < (longlong)local_120)))) break;
            local_58 = 0xffffffffffffffff;
            uStack_50 = 0;
            local_110 = 0;
            local_148 = &local_110;
            iVar10 = FUN_1439e6720(*local_e0,&local_b8,local_d0,param_5);
            uVar20 = extraout_XMM0_Qa_13;
            if (iVar10 != 0) goto LAB_1439edb68;
            *plVar2 = local_110;
          }
          iVar10 = 0;
          goto LAB_1439edb68;
        }
        lVar11 = *plVar15;
        plVar15 = plVar15 + 1;
      } while ((lVar11 == 0) || (local_b8._4_4_ != *(int *)(lVar11 + 0x24)));
    }
LAB_1439eda07:
    iVar10 = -2;
LAB_1439edb68:
    FMemory::operator_delete(uVar20);
    FMemory::operator_delete(local_88);
    FMemory::operator_delete(uStack_80);
    FMemory::operator_delete(lStack_70);
    FMemory::operator_delete(local_78);
  }
  else {
    iVar10 = -1;
  }
  return iVar10;
}



// FUNCTION 1439edbc0 FUN_1439edbc0 body=403 status=ok
// SIG undefined FUN_1439edbc0(void)

ulonglong FUN_1439edbc0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong in_RAX;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  if ((param_2 == 0) || (-1 < *(int *)(param_2 + 0x10))) {
LAB_1439edd48:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = (ulonglong)*(int *)(param_1 + 0xa8);
  if (param_3 < (longlong)in_RAX) goto LAB_1439edd48;
  uVar3 = *(uint *)(param_1 + 0xb0);
  plVar8 = (longlong *)(ulonglong)uVar3;
  iVar11 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
  if ((int)uVar3 < iVar11) {
    return (ulonglong)(uint3)(uVar3 >> 8) << 8;
  }
  if ((int)uVar3 <= iVar11) {
    iVar10 = 0x800;
    if (0 < (int)uVar3) {
      iVar10 = uVar3 * 2;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar10;
    uVar6 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar7 = (undefined8 *)operator_new(uVar6,&DAT_146bcbba8);
    plVar8 = (longlong *)0x0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_1439edd44;
    puVar9 = *(undefined8 **)(param_1 + 0xa0);
    uVar12 = 0;
    uVar14 = (longlong)iVar11 * 8 + 7U >> 3;
    if (puVar9 + iVar11 < puVar9) {
      uVar14 = uVar12;
    }
    puVar13 = puVar7;
    if (uVar14 != 0) {
      do {
        uVar12 = uVar12 + 1;
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar12 != uVar14);
    }
    plVar8 = (longlong *)FMemory::operator_delete(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 **)(param_1 + 0xa0) = puVar7;
    *(int *)(param_1 + 0xb0) = iVar10;
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    plVar8 = (longlong *)(longlong)iVar11;
    plVar1 = (longlong *)(lVar4 + param_3 * 8);
    plVar2 = (longlong *)(lVar4 + (longlong)plVar8 * 8);
    if ((plVar1 <= plVar2) &&
       (plVar8 = (longlong *)(longlong)*(int *)(param_1 + 0xb0),
       plVar2 < (longlong *)(lVar4 + (longlong)plVar8 * 8))) {
      while( true ) {
        if (plVar2 <= plVar1) {
          lVar4 = *(longlong *)(param_1 + 0xa0);
          *(longlong *)(lVar4 + param_3 * 8) = param_2;
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
          return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        }
        plVar8 = plVar2 + -1;
        if (-1 < *(int *)(plVar2[-1] + 0x10)) break;
        *plVar2 = plVar2[-1];
        plVar2 = plVar8;
      }
    }
  }
LAB_1439edd44:
  return (ulonglong)plVar8 & 0xffffffffffffff00;
}



// FUNCTION 1439edd60 FUN_1439edd60 body=22 status=ok
// SIG undefined FUN_1439edd60(void)

void FUN_1439edd60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001439edd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,*param_1,*(undefined4 *)(param_1 + 1),param_3);
  return;
}



// FUNCTION 1439edd80 FUN_1439edd80 body=260 status=ok
// SIG undefined FUN_1439edd80(void)

ulonglong FUN_1439edd80(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  byte local_res8 [8];
  
  if ((param_1 != (undefined8 *)0x0) && (-1 < param_2)) {
    local_res8[0] = 0;
    iVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (-1 < iVar1) {
      if (0 < iVar1) {
        return 0xfffffffffffffffd;
      }
      if (local_res8[0] != 0) {
        iVar1 = 0;
        do {
          if (((uint)local_res8[0] & 0x80 >> ((byte)iVar1 & 0x1f)) != 0) {
            iVar1 = iVar1 + 1;
            iVar4 = 1;
            uVar3 = (ulonglong)local_res8[0];
            if (1 < iVar1) {
              do {
                iVar2 = (**(code **)*param_1)(param_1,iVar4 + param_2,1,local_res8);
                if (iVar2 < 0) {
                  return 0xfffffffffffffffe;
                }
                if (0 < iVar2) {
                  return 0xfffffffffffffffd;
                }
                iVar4 = iVar4 + 1;
                uVar3 = uVar3 << 8 | (ulonglong)local_res8[0];
              } while (iVar4 < iVar1);
            }
            *param_3 = iVar1;
            return uVar3;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
      }
    }
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 1439ede90 FUN_1439ede90 body=258 status=ok
// SIG undefined FUN_1439ede90(void)

ulonglong FUN_1439ede90(undefined8 *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  
  if ((param_1 != (undefined8 *)0x0) && (-1 < param_2)) {
    *param_3 = 1;
    iVar2 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (iVar2 < 0) {
      return (longlong)iVar2;
    }
    if (0 < iVar2) {
      return 0xfffffffffffffffd;
    }
    if (local_res8[0] != 0) {
      bVar1 = 0x80;
      if (-1 < (char)local_res8[0]) {
        do {
          *param_3 = *param_3 + 1;
          bVar1 = bVar1 >> 1;
        } while ((local_res8[0] & bVar1) == 0);
      }
      iVar2 = 1;
      uVar4 = (longlong)(int)~(uint)bVar1 & (ulonglong)local_res8[0];
      if (1 < *param_3) {
        do {
          param_2 = param_2 + 1;
          iVar3 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
          if (iVar3 < 0) {
            *param_3 = 1;
            return (longlong)iVar3;
          }
          if (0 < iVar3) {
            *param_3 = 1;
            return 0xfffffffffffffffd;
          }
          iVar2 = iVar2 + 1;
          uVar4 = uVar4 << 8 | (ulonglong)local_res8[0];
        } while (iVar2 < *param_3);
      }
      return uVar4;
    }
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 1439edfa0 FUN_1439edfa0 body=546 status=ok
// SIG undefined FUN_1439edfa0(void)

undefined8 FUN_1439edfa0(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res20 [8];
  undefined1 local_30 [8];
  
  uVar7 = FUN_1439e7d10(param_1,param_3);
  if (-1 < (int)uVar7) {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (iVar5 != 0) {
      plVar2 = (longlong *)((longlong *)*param_3)[1];
      uVar7 = (**(code **)(*(longlong *)*param_3 + 8))();
      lVar8 = FUN_1439e8270(uVar7,plVar2);
      lVar9 = *(longlong *)(*(longlong *)(*plVar2 + 0x78) + 0x28);
      if ((lVar8 == 0) ||
         (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         lVar9 <= SUB168((auVar3 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar8),0))) {
        lVar9 = lVar9 * lVar8;
      }
      else {
        lVar9 = -1;
      }
      if (lVar9 < param_2) {
        lVar9 = *(longlong *)(param_1[1] + 0xa0);
        uVar1 = lVar9 + (longlong)(int)plVar2[2] * 8;
        uVar11 = lVar9 + (longlong)*(int *)(param_1[1] + 0xa8) * 8;
        uVar13 = uVar1;
        if (uVar1 < uVar11) {
          do {
            lVar9 = (longlong)(uVar11 - uVar13) >> 3;
            if (lVar9 < 0) {
              lVar9 = lVar9 + 1;
            }
            plVar2 = *(longlong **)(uVar13 + (lVar9 >> 1) * 8);
            uVar12 = uVar13 + (lVar9 >> 1) * 8;
            iVar5 = FUN_1439e8840(plVar2,local_30,local_res20);
            lVar9 = (longlong)iVar5;
            if (-1 < iVar5) {
              lVar9 = plVar2[5];
            }
            if (-1 < lVar9) {
              lVar9 = *(longlong *)(*(longlong *)(*plVar2 + 0x78) + 0x28) * plVar2[5];
            }
            if (lVar9 <= param_2) {
              uVar13 = uVar12 + 8;
              uVar12 = uVar11;
            }
            uVar11 = uVar12;
          } while (uVar13 < uVar12);
joined_r0x0001439ee0d5:
          do {
            if (uVar13 <= uVar1) goto LAB_1439ee191;
            plVar2 = *(longlong **)(uVar13 - 8);
            uVar13 = uVar13 - 8;
            plVar10 = param_1 + 0x12;
            if (*plVar2 != 0) {
              iVar5 = 0;
              lVar9 = 0;
LAB_1439ee100:
              if (*(int *)((longlong)plVar2 + 0x3c) <= iVar5) {
                iVar6 = FUN_1439e9930(plVar2,local_30,local_res20);
                plVar10 = param_1 + 0x12;
                if (0 < iVar6) goto LAB_1439ee171;
                if (iVar6 < 0) {
                  *param_3 = 0;
                  goto joined_r0x0001439ee0d5;
                }
              }
              plVar10 = *(longlong **)(lVar9 + plVar2[6]);
              lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
              if (*(longlong *)(lVar8 + 0x10) == (longlong)*(int *)((longlong)param_1 + 0x24)) {
                cVar4 = (**(code **)(*param_1 + 8))(param_1,plVar10);
                if (cVar4 != '\0') goto LAB_1439ee171;
                iVar5 = iVar5 + 1;
                lVar9 = lVar9 + 8;
              }
              else {
                iVar5 = iVar5 + 1;
                lVar9 = lVar9 + 8;
              }
              goto LAB_1439ee100;
            }
LAB_1439ee171:
            *param_3 = (longlong)plVar10;
          } while ((plVar10 == (longlong *)0x0) ||
                  (iVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), iVar5 == 0));
        }
        else {
LAB_1439ee191:
          *param_3 = (longlong)(param_1 + 0x12);
        }
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1439ee1d0 FUN_1439ee1d0 body=448 status=ok
// SIG undefined FUN_1439ee1d0(void)

undefined8 FUN_1439ee1d0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  uVar4 = FUN_1439e7d10(param_1,param_3);
  if (-1 < (int)uVar4) {
    iVar3 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (iVar3 != 0) {
      plVar6 = (longlong *)((longlong *)*param_3)[1];
      uVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
      lVar5 = FUN_1439e8270(uVar4,plVar6);
      lVar7 = *(longlong *)(*(longlong *)(*plVar6 + 0x78) + 0x28);
      if ((lVar5 == 0) ||
         (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         lVar7 <= SUB168((auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar5),0))) {
        lVar7 = lVar7 * lVar5;
      }
      else {
        lVar7 = -1;
      }
      if (lVar7 < param_2) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
        uVar1 = lVar7 + (longlong)(int)plVar6[2] * 8;
        uVar9 = lVar7 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xa8) * 8;
        uVar8 = uVar1;
        if (uVar1 < uVar9) {
          do {
            lVar7 = (longlong)(uVar9 - uVar8) >> 3;
            if (lVar7 < 0) {
              lVar7 = lVar7 + 1;
            }
            plVar6 = *(longlong **)(uVar8 + (lVar7 >> 1) * 8);
            uVar10 = uVar8 + (lVar7 >> 1) * 8;
            iVar3 = FUN_1439e8840(plVar6,local_38,local_res20);
            lVar7 = (longlong)iVar3;
            if (-1 < iVar3) {
              lVar7 = plVar6[5];
            }
            if (-1 < lVar7) {
              lVar7 = *(longlong *)(*(longlong *)(*plVar6 + 0x78) + 0x28) * plVar6[5];
            }
            if (lVar7 <= param_2) {
              uVar8 = uVar10 + 8;
              uVar10 = uVar9;
            }
            uVar9 = uVar10;
          } while (uVar8 < uVar10);
        }
        plVar6 = (longlong *)FUN_1439e7af0(*(undefined8 *)(uVar8 - 8),param_1,param_2);
        *param_3 = (longlong)plVar6;
        uVar9 = uVar8;
        if (plVar6 == (longlong *)0x0) goto joined_r0x0001439ee33c;
        iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        while (uVar9 = uVar8, iVar3 == 0) {
joined_r0x0001439ee33c:
          do {
            uVar8 = uVar9 - 8;
            if (uVar8 == uVar1) {
              *param_3 = param_1 + 0x90;
              goto LAB_1439ee383;
            }
            plVar6 = (longlong *)FUN_1439e7af0(*(undefined8 *)(uVar9 - 0x10),param_1,param_2);
            *param_3 = (longlong)plVar6;
            uVar9 = uVar8;
          } while (plVar6 == (longlong *)0x0);
          iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
LAB_1439ee383:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1439ee390 FUN_1439ee390 body=262 status=ok
// SIG undefined FUN_1439ee390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1439ee390(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4)

{
  byte *pbVar1;
  short sVar2;
  undefined8 uVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  double local_38;
  byte local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) &&
     ((param_3 - 4U & 0xfffffffffffffffb) == 0)) {
    uVar3 = (**(code **)*param_1)(param_1,param_2,param_3,local_30);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    lVar5 = 1;
    if ((int)param_3 == 4) {
      fVar4 = (float)(uint)local_30[0];
      do {
        pbVar1 = local_30 + lVar5;
        lVar5 = lVar5 + 1;
        fVar4 = (float)((uint)*pbVar1 | (int)fVar4 << 8);
      } while (lVar5 < 4);
      local_38 = (double)fVar4;
    }
    else {
      local_38 = (double)(ulonglong)local_30[0];
      do {
        pbVar1 = local_30 + lVar5;
        lVar5 = lVar5 + 1;
        local_38 = (double)((ulonglong)*pbVar1 | (longlong)local_38 << 8);
      } while (lVar5 < 8);
    }
    *param_4 = local_38;
    sVar2 = _dtest(&local_38);
    if (sVar2 != 1) {
      local_38 = *param_4;
      sVar2 = _dtest(&local_38);
      if (sVar2 != 2) {
        return 0;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1439ee4a0 FUN_1439ee4a0 body=213 status=ok
// SIG undefined FUN_1439ee4a0(void)

undefined8 FUN_1439ee4a0(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  char local_res8 [8];
  byte local_28 [16];
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) && (param_3 - 1U < 8)) {
    local_res8[0] = '\0';
    uVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (-1 < (int)uVar1) {
      uVar2 = (ulonglong)local_res8[0];
      iVar3 = 1;
      if (1 < param_3) {
        do {
          param_2 = param_2 + 1;
          uVar1 = (**(code **)*param_1)(param_1,param_2,1,local_28);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          iVar3 = iVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)local_28[0];
        } while (iVar3 < param_3);
      }
      *param_4 = uVar2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 1439ee580 FUN_1439ee580 body=200 status=ok
// SIG undefined FUN_1439ee580(void)

int FUN_1439ee580(undefined8 *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  
  FMemory::operator_delete(*param_4);
  *param_4 = 0;
  if (param_3 < 0x1312d01) {
    iVar2 = (int)param_3 + 1;
    if ((iVar2 == 0) || (0x80000000 < (ulonglong)(longlong)iVar2)) {
      *param_4 = 0;
    }
    else {
      lVar1 = operator_new((longlong)iVar2,&DAT_146bcbba8);
      *param_4 = lVar1;
      if (lVar1 != 0) {
        iVar2 = (**(code **)*param_1)(param_1,param_2,param_3 & 0xffffffff,lVar1);
        if (iVar2 == 0) {
          *(undefined1 *)((longlong)(int)param_3 + *param_4) = 0;
          return 0;
        }
        FMemory::operator_delete(*param_4);
        *param_4 = 0;
        return iVar2;
      }
    }
  }
  return -2;
}



// FUNCTION 1439ee650 FUN_1439ee650 body=155 status=ok
// SIG undefined FUN_1439ee650(void)

ulonglong FUN_1439ee650(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) && (param_3 - 1U < 8)) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (0 < param_3) {
      do {
        iVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
        if (iVar1 < 0) {
          return (longlong)iVar1;
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 << 8 | (ulonglong)local_res8[0];
      } while ((longlong)uVar3 < param_3);
    }
    return uVar2;
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 1439ee6f0 FUN_1439ee6f0 body=49 status=ok
// SIG undefined FUN_1439ee6f0(void)

undefined8 FUN_1439ee6f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) == (longlong)*(int *)(param_1 + 0x24))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1439ee730 FUN_1439ee730 body=81 status=ok
// SIG undefined FUN_1439ee730(void)

undefined8 FUN_1439ee730(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) == (longlong)*(int *)(param_1 + 0x24))) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (0x7f < *(byte *)(lVar1 + 0x1a)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1439ee790 FUN_1439ee790 body=150 status=ok
// SIG undefined FUN_1439ee790(void)

void FUN_1439ee790(int param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  FILE *pFVar1;
  
  if (-1 < param_1) {
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    pFVar1 = (FILE *)__acrt_iob_func(2);
    fwprintf(pFVar1,(wchar_t *)"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_1468322b8)[param_1],param_2,
             param_3,param_4);
    pFVar1 = (FILE *)__acrt_iob_func(2);
    fflush(pFVar1);
  }
  return;
}



// FUNCTION 1439ee830 FUN_1439ee830 body=495 status=ok
// SIG undefined FUN_1439ee830(void)

longlong FUN_1439ee830(ulonglong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = *param_1;
  lVar6 = (longlong)(param_1[1] - uVar14) >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar6 + 1;
  uVar8 = (longlong)(param_1[2] - uVar14) >> 4;
  uVar13 = uVar1;
  if ((uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) && (uVar13 = (uVar8 >> 1) + uVar8, uVar13 < uVar1)
     ) {
    uVar13 = uVar1;
  }
  uVar8 = uVar13 * 0x10;
  if (uVar13 < 0x1000000000000000) {
    uVar13 = uVar8;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = operator_new(uVar8);
      }
      goto LAB_1439ee91e;
    }
  }
  else {
    uVar13 = 0xffffffffffffffff;
  }
  uVar9 = uVar13 + 0x27;
  if (uVar9 <= uVar13) {
    uVar9 = 0xffffffffffffffff;
  }
  lVar6 = operator_new(uVar9);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar13 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar13 - 8) = lVar6;
LAB_1439ee91e:
  uVar14 = (longlong)param_2 - uVar14 & 0xfffffffffffffff0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar10 = (undefined4 *)(uVar14 + uVar13);
  *puVar10 = *param_3;
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  puVar10 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)*param_1;
  if (param_2 == puVar10) {
    if (puVar7 != puVar10) {
      lVar6 = uVar13 - (longlong)puVar7;
      do {
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        puVar2 = (undefined4 *)((longlong)puVar7 + lVar6);
        *puVar2 = *puVar7;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar10);
    }
  }
  else {
    if (puVar7 != param_2) {
      lVar6 = uVar13 - (longlong)puVar7;
      do {
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        puVar10 = (undefined4 *)((longlong)puVar7 + lVar6);
        *puVar10 = *puVar7;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar7 = puVar7 + 4;
      } while (puVar7 != param_2);
      puVar10 = (undefined4 *)param_1[1];
    }
    if (param_2 != puVar10) {
      lVar6 = (uVar14 + 0x10 + uVar13) - (longlong)param_2;
      do {
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        puVar7 = (undefined4 *)((longlong)param_2 + lVar6);
        *puVar7 = *param_2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        param_2 = param_2 + 4;
      } while (param_2 != puVar10);
    }
  }
  uVar9 = *param_1;
  if (uVar9 != 0) {
    uVar12 = param_1[2] - uVar9 & 0xfffffffffffffff0;
    uVar11 = uVar9;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      uVar11 = *(ulonglong *)(uVar9 - 8);
      if (0x1f < (uVar9 - uVar11) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar11,uVar12);
  }
  *param_1 = uVar13;
  param_1[1] = uVar1 * 0x10 + uVar13;
  param_1[2] = uVar13 + uVar8;
  return *param_1 + uVar14;
}



// FUNCTION 1439eea30 FUN_1439eea30 body=115 status=ok
// SIG undefined FUN_1439eea30(void)

undefined8 *
FUN_1439eea30(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 8);
  *param_1 = google::protobuf::FatalException::vftable;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 5,param_2 + 0x28,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 1439eeab0 FUN_1439eeab0 body=72 status=ok
// SIG undefined FUN_1439eeab0(void)

undefined8 *
FUN_1439eeab0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = google::protobuf::FatalException::vftable;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 5,param_4,param_3,param_4,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 1439eeb00 FUN_1439eeb00 body=34 status=ok
// SIG undefined FUN_1439eeb00(void)

undefined4 *
FUN_1439eeb00(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_4;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1439eeb30 FUN_1439eeb30 body=124 status=ok
// SIG undefined FUN_1439eeb30(void)

void FUN_1439eeb30(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = google::protobuf::FatalException::vftable;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    lVar2 = param_1[5];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = std::exception::vftable;
  _guard_xfg_dispatch_icall_nop(param_1 + 1);
  return;
}



// FUNCTION 1439eebb0 ~DsDevice body=96 status=ok
// SIG undefined ~DsDevice(void)

void DsDevice::~DsDevice(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1439eec20 FUN_1439eec20 body=39 status=ok
// SIG undefined FUN_1439eec20(void)

void FUN_1439eec20(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(*param_1);
  if (iVar1 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar1);
  }
  return;
}



// FUNCTION 1439eec50 FUN_1439eec50 body=148 status=ok
// SIG undefined FUN_1439eec50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439eec50(undefined8 param_1,int *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((*param_2 == 3) || (DAT_146ba2f30 < 1)) {
    (*(code *)PTR_FUN_1468322d8)(*param_2,*(undefined8 *)(param_2 + 2),param_2[4],param_2 + 6);
  }
  if (*param_2 == 3) {
    FUN_1439eeab0(local_68,*(undefined8 *)(param_2 + 2),param_2[4],param_2 + 6);
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_68,(ThrowInfo *)&DAT_1461db970);
  }
  return;
}



// FUNCTION 1439eecf0 FUN_1439eecf0 body=47 status=ok
// SIG undefined FUN_1439eecf0(void)

longlong FUN_1439eecf0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1 + 0x18,puVar1,param_2[2]);
  return param_1;
}



// FUNCTION 1439eed20 FUN_1439eed20 body=230 status=ok
// SIG undefined FUN_1439eed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439eed20(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  _snprintf(local_98,0x80,"%d",(ulonglong)param_2);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  local_19 = 0;
  uVar2 = 0xffffffffffffffff;
  do {
    local_a8 = uVar2 + 1;
    lVar1 = uVar2 + 1;
    uVar2 = local_a8;
  } while (local_98[lVar1] != '\0');
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x30) - lVar1 < local_a8) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (puVar3,local_a8,0,local_98);
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = lVar1 + local_a8;
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + lVar1),local_98,local_a8);
    *(undefined1 *)((longlong)puVar3 + lVar1 + local_a8) = 0;
  }
  return param_1;
}



// FUNCTION 1439eee10 FUN_1439eee10 body=230 status=ok
// SIG undefined FUN_1439eee10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439eee10(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  _snprintf(local_98,0x80,"%u",(ulonglong)param_2);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  local_19 = 0;
  uVar2 = 0xffffffffffffffff;
  do {
    local_a8 = uVar2 + 1;
    lVar1 = uVar2 + 1;
    uVar2 = local_a8;
  } while (local_98[lVar1] != '\0');
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x30) - lVar1 < local_a8) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (puVar3,local_a8,0,local_98);
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = lVar1 + local_a8;
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + lVar1),local_98,local_a8);
    *(undefined1 *)((longlong)puVar3 + lVar1 + local_a8) = 0;
  }
  return param_1;
}



// FUNCTION 1439eef00 FUN_1439eef00 body=44 status=ok
// SIG undefined FUN_1439eef00(void)

longlong FUN_1439eef00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(param_1 + 0x18);
  return param_1;
}



// FUNCTION 1439eef30 FUN_1439eef30 body=230 status=ok
// SIG undefined FUN_1439eef30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439eef30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  _snprintf(local_98,0x80,"%I64u",param_2);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  local_19 = 0;
  uVar2 = 0xffffffffffffffff;
  do {
    local_a8 = uVar2 + 1;
    lVar1 = uVar2 + 1;
    uVar2 = local_a8;
  } while (local_98[lVar1] != '\0');
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x30) - lVar1 < local_a8) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (puVar3,local_a8,0,local_98);
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = lVar1 + local_a8;
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + lVar1),local_98,local_a8);
    *(undefined1 *)((longlong)puVar3 + lVar1 + local_a8) = 0;
  }
  return param_1;
}



// FUNCTION 1439ef020 FUN_1439ef020 body=158 status=ok
// SIG undefined FUN_1439ef020(void)

undefined8 * FUN_1439ef020(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = google::protobuf::FatalException::vftable;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    lVar2 = param_1[5];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = std::exception::vftable;
  _guard_xfg_dispatch_icall_nop(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1439ef0c0 FUN_1439ef0c0 body=163 status=ok
// SIG undefined FUN_1439ef0c0(void)

void FUN_1439ef0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = FUN_1439efa60();
  iVar2 = _guard_xfg_dispatch_icall_nop(lVar3 + 0x18);
  if (iVar2 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar2);
  }
  puVar1 = *(undefined4 **)(lVar3 + 8);
  local_20 = param_1;
  uStack_18 = param_2;
  if (*(undefined4 **)(lVar3 + 0x10) == puVar1) {
    FUN_1439ee830(lVar3,puVar1,&local_20,param_4,uVar4);
  }
  else {
    local_20._0_4_ = (undefined4)param_1;
    local_20._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_18._0_4_ = (undefined4)param_2;
    uStack_18._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar1 = (undefined4)local_20;
    puVar1[1] = local_20._4_4_;
    puVar1[2] = (undefined4)uStack_18;
    puVar1[3] = uStack_18._4_4_;
    *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
  }
  iVar2 = _guard_xfg_dispatch_icall_nop(lVar3 + 0x18);
  if (iVar2 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar2);
  }
  return;
}



// FUNCTION 1439ef170 FUN_1439ef170 body=39 status=ok
// SIG undefined FUN_1439ef170(void)

undefined * FUN_1439ef170(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((code *)PTR_FUN_1468322d8 != FUN_140447710) {
    puVar1 = PTR_FUN_1468322d8;
  }
  PTR_FUN_1468322d8 = FUN_140447710;
  if (param_1 != (code *)0x0) {
    PTR_FUN_1468322d8 = param_1;
  }
  return puVar1;
}



// FUNCTION 1439ef1a0 FUN_1439ef1a0 body=1791 status=ok
// SIG undefined FUN_1439ef1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439ef1a0(int param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1e8;
  int local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  longlong local_1b8;
  ulonglong uStack_1b0;
  int local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  longlong local_180;
  ulonglong uStack_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined8 local_160;
  ulonglong uStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong uStack_138;
  longlong local_130 [3];
  ulonglong local_118;
  longlong local_110 [3];
  ulonglong local_f8;
  undefined1 local_e8 [80];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_1e8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar7 = -1;
  if (0x2de219 < param_2) {
    puVar2 = (undefined8 *)FUN_1439ef8b0(local_130,0x2de219);
    puVar3 = (undefined8 *)FUN_1439ef8b0(&local_170,param_2);
    local_1e0 = 3;
    local_1d8 = "c:\\dev\\protobuf\\src\\google\\protobuf\\stubs\\common.cc";
    local_1d0 = 0x4b;
    local_1b8 = 0;
    uStack_1b0 = 0xf;
    local_1c8 = 0;
    local_1f8 = 0x1e;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (&local_1c8,0x1e,0,"This program requires version ");
    puVar5 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (&local_1c8,puVar5,puVar3[2]);
    if (uStack_1b0 - local_1b8 < 0x46) {
      local_1f8 = 0x46;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_1c8,0x46,0,
                 " of the Protocol Buffer runtime library, but the installed version is ");
    }
    else {
      puVar6 = &local_1c8;
      if (0xf < uStack_1b0) {
        puVar6 = (undefined1 *)CONCAT71(uStack_1c7,local_1c8);
      }
      puVar6 = puVar6 + local_1b8;
      local_1b8 = local_1b8 + 0x46;
      _guard_xfg_dispatch_icall_nop
                (puVar6," of the Protocol Buffer runtime library, but the installed version is ",
                 0x46);
      puVar6[0x46] = 0;
    }
    puVar5 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar5 = (undefined8 *)*puVar2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (&local_1c8,puVar5,puVar2[2]);
    if (uStack_1b0 - local_1b8 < 0xcd) {
      local_1f8 = 0xcd;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_1c8,0xcd,0,
                 ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
                );
    }
    else {
      puVar6 = &local_1c8;
      if (0xf < uStack_1b0) {
        puVar6 = (undefined1 *)CONCAT71(uStack_1c7,local_1c8);
      }
      puVar6 = puVar6 + local_1b8;
      local_1b8 = local_1b8 + 0xcd;
      _guard_xfg_dispatch_icall_nop
                (puVar6,
                 ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
                 ,0xcd);
      puVar6[0xcd] = 0;
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(param_3 + lVar8) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(&local_1c8,param_3)
    ;
    if (uStack_1b0 - local_1b8 < 3) {
      local_1f8 = 3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_1c8,3,0,&DAT_145cb9f80);
    }
    else {
      puVar6 = &local_1c8;
      if (0xf < uStack_1b0) {
        puVar6 = (undefined1 *)CONCAT71(uStack_1c7,local_1c8);
      }
      puVar6 = puVar6 + local_1b8;
      local_1b8 = local_1b8 + 3;
      _guard_xfg_dispatch_icall_nop(puVar6,&DAT_145cb9f80,3);
      puVar6[3] = 0;
    }
    if ((local_1e0 == 3) || (DAT_146ba2f30 < 1)) {
      (*(code *)PTR_FUN_1468322d8)(local_1e0,local_1d8,local_1d0,&local_1c8);
    }
    if (local_1e0 == 3) {
      FUN_1439eeab0(local_e8,local_1d8,local_1d0,&local_1c8);
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_e8,(ThrowInfo *)&DAT_1461db970);
    }
    if (0xf < uStack_1b0) {
      uVar4 = uStack_1b0 + 1;
      lVar1 = CONCAT71(uStack_1c7,local_1c8);
      lVar8 = lVar1;
      if (0xfff < uVar4) {
        uVar4 = uStack_1b0 + 0x28;
        lVar8 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar8,uVar4);
    }
    local_1b8 = 0;
    uStack_1b0 = 0xf;
    local_1c8 = 0;
    if (0xf < uStack_158) {
      uVar4 = uStack_158 + 1;
      if ((0xfff < uVar4) &&
         (uVar4 = uStack_158 + 0x28,
         0x1f < (CONCAT71(uStack_16f,local_170) - *(longlong *)(CONCAT71(uStack_16f,local_170) + -8)
                ) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete(0,uVar4);
    }
    local_160 = 0;
    uStack_158 = 0xf;
    local_170 = 0;
    if (0xf < local_118) {
      uVar4 = local_118 + 1;
      if ((0xfff < uVar4) &&
         (uVar4 = local_118 + 0x28, 0x1f < (local_130[0] - *(longlong *)(local_130[0] + -8)) - 8U))
      {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete(0,uVar4);
    }
  }
  if (param_1 < 0x2de218) {
    puVar2 = (undefined8 *)FUN_1439ef8b0(local_110,0x2de219);
    puVar3 = (undefined8 *)FUN_1439ef8b0(&local_150,param_1);
    local_1a8 = 3;
    local_1a0 = "c:\\dev\\protobuf\\src\\google\\protobuf\\stubs\\common.cc";
    local_198 = 0x56;
    local_180 = 0;
    uStack_178 = 0xf;
    local_190 = 0;
    local_1f8 = 0x2a;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (&local_190,0x2a,0,"This program was compiled against version ");
    puVar5 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar5 = (undefined8 *)*puVar3;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (&local_190,puVar5,puVar3[2]);
    if (uStack_178 - local_180 < 0x5d) {
      local_1f8 = 0x5d;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_190,0x5d,0,
                 " of the Protocol Buffer runtime library, which is not compatible with the installed version ("
                );
    }
    else {
      puVar6 = &local_190;
      if (0xf < uStack_178) {
        puVar6 = (undefined1 *)CONCAT71(uStack_18f,local_190);
      }
      puVar6 = puVar6 + local_180;
      local_180 = local_180 + 0x5d;
      _guard_xfg_dispatch_icall_nop
                (puVar6,
                 " of the Protocol Buffer runtime library, which is not compatible with the installed version ("
                 ,0x5d);
      puVar6[0x5d] = 0;
    }
    puVar5 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar5 = (undefined8 *)*puVar2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (&local_190,puVar5,puVar2[2]);
    if (uStack_178 - local_180 < 0xdc) {
      local_1f8 = 0xdc;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_190,0xdc,0,
                 ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
                );
    }
    else {
      puVar6 = &local_190;
      if (0xf < uStack_178) {
        puVar6 = (undefined1 *)CONCAT71(uStack_18f,local_190);
      }
      puVar6 = puVar6 + local_180;
      local_180 = local_180 + 0xdc;
      _guard_xfg_dispatch_icall_nop
                (puVar6,
                 ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers are from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \""
                 ,0xdc);
      puVar6[0xdc] = 0;
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(param_3 + lVar7) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (&local_190,param_3,lVar7);
    if (uStack_178 - local_180 < 3) {
      local_1f8 = 3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_190,3,0,&DAT_145cb9f80);
    }
    else {
      puVar6 = &local_190;
      if (0xf < uStack_178) {
        puVar6 = (undefined1 *)CONCAT71(uStack_18f,local_190);
      }
      puVar6 = puVar6 + local_180;
      local_180 = local_180 + 3;
      _guard_xfg_dispatch_icall_nop(puVar6,&DAT_145cb9f80,3);
      puVar6[3] = 0;
    }
    if ((local_1a8 == 3) || (DAT_146ba2f30 < 1)) {
      (*(code *)PTR_FUN_1468322d8)(local_1a8,local_1a0,local_198,&local_190);
    }
    if (local_1a8 == 3) {
      FUN_1439eeab0(local_98,local_1a0,local_198,&local_190);
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db970);
    }
    if (0xf < uStack_178) {
      uVar4 = uStack_178 + 1;
      lVar8 = CONCAT71(uStack_18f,local_190);
      lVar7 = lVar8;
      if (0xfff < uVar4) {
        uVar4 = uStack_178 + 0x28;
        lVar7 = *(longlong *)(lVar8 + -8);
        if (0x1f < (lVar8 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar4);
    }
    local_180 = 0;
    uStack_178 = 0xf;
    local_190 = 0;
    if (0xf < uStack_138) {
      uVar4 = uStack_138 + 1;
      if ((0xfff < uVar4) &&
         (uVar4 = uStack_138 + 0x28,
         0x1f < (CONCAT71(uStack_14f,local_150) - *(longlong *)(CONCAT71(uStack_14f,local_150) + -8)
                ) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete(0,uVar4);
    }
    local_140 = 0;
    uStack_138 = 0xf;
    local_150 = 0;
    if (0xf < local_f8) {
      uVar4 = local_f8 + 1;
      if ((0xfff < uVar4) &&
         (uVar4 = local_f8 + 0x28, 0x1f < (local_110[0] - *(longlong *)(local_110[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete(0,uVar4);
    }
  }
  return;
}



// FUNCTION 1439ef8b0 FUN_1439ef8b0 body=243 status=ok
// SIG undefined FUN_1439ef8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1439ef8b0(undefined1 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  undefined1 *local_a8;
  char local_98 [127];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b0 = param_2 % 1000;
  local_b8 = (param_2 / 1000) % 1000;
  local_a8 = param_1;
  _snprintf(local_98,0x80,"%d.%d.%d",(ulonglong)(uint)(param_2 / 1000000));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  local_19 = 0;
  lVar2 = -1;
  do {
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
  } while (local_98[lVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,local_98);
  return param_1;
}



// FUNCTION 1439ef9b0 _Xlength body=16 status=ok
// SIG undefined _Xlength(void)

void std::vector<int,std::allocator<int>_>::_Xlength(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("vector<T> too long");
}



// FUNCTION 1439ef9d0 deallocate body=61 status=ok
// SIG undefined deallocate(void)

void std::allocator<char>::deallocate(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < param_3) {
    lVar1 = *(longlong *)(param_2 + -8);
    param_3 = param_3 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,param_3);
  return;
}



// FUNCTION 1439efa10 deallocate body=65 status=ok
// SIG undefined deallocate(void)

void std::allocator<ClipperLib::IntPoint>::deallocate
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x10;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 1439efa60 FUN_1439efa60 body=170 status=ok
// SIG undefined FUN_1439efa60(void)

undefined8 *
FUN_1439efa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ba2f40) && (_Init_thread_header(&DAT_146ba2f40), DAT_146ba2f40 == -1))
  {
    puVar1 = (undefined8 *)operator_new(0x68);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      _guard_xfg_dispatch_icall_nop(puVar1 + 3,2,param_3,param_4,uVar2);
    }
    DAT_146ba2f38 = puVar1;
    _Init_thread_footer(&DAT_146ba2f40);
    return DAT_146ba2f38;
  }
  return DAT_146ba2f38;
}



// FUNCTION 1439efb10 ghtonl body=36 status=ok
// SIG undefined ghtonl(void)

undefined4 google::protobuf::ghtonl(undefined4 param_1)

{
  undefined4 local_res8;
  
  local_res8._3_1_ = (undefined1)param_1;
  local_res8._0_3_ =
       CONCAT12((char)((uint)param_1 >> 8),
                CONCAT11((char)((uint)param_1 >> 0x10),(char)((uint)param_1 >> 0x18)));
  return local_res8;
}



// FUNCTION 1439efb40 FUN_1439efb40 body=15 status=ok
// SIG undefined FUN_1439efb40(void)

longlong * FUN_1439efb40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// FUNCTION 1439efb50 FUN_1439efb50 body=98 status=ok
// SIG undefined FUN_1439efb50(void)

void FUN_1439efb50(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar6 = (longlong *)(lVar3 + 0x28);
  if (*plVar6 == *(longlong *)(param_1 + 0x20)) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    if ((lVar3 == 0) || (*(longlong **)(lVar3 + 8) != plVar6)) {
      FUN_1439efbc0(param_1);
      return;
    }
  }
  if (*(ulonglong **)(lVar3 + 0x38) != *(ulonglong **)(lVar3 + 0x40)) {
    **(ulonglong **)(lVar3 + 0x38) = param_2;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8) = param_3;
    *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + 0x10;
    return;
  }
  puVar4 = *(ulonglong **)(lVar3 + 0x18);
  do {
    if (puVar4 == (ulonglong *)0x0) {
      uVar5 = 8;
    }
    else {
      uVar5 = *puVar4 * 2;
      if (0x40 < uVar5) {
        uVar5 = 0x40;
      }
    }
    puVar2 = *(ulonglong **)(lVar3 + 0x28);
    if ((ulonglong)(*(longlong *)(lVar3 + 0x30) - (longlong)puVar2) < uVar5 * 0x10 + 0x10) {
      puVar2 = (ulonglong *)FUN_1439eff90(lVar3);
      puVar4 = *(ulonglong **)(lVar3 + 0x18);
    }
    else {
      *(ulonglong **)(lVar3 + 0x28) = puVar2 + uVar5 * 2 + 2;
    }
    puVar2[1] = (ulonglong)puVar4;
    *puVar2 = uVar5;
    puVar1 = puVar2 + 2;
    *(ulonglong **)(lVar3 + 0x18) = puVar2;
    *(ulonglong **)(lVar3 + 0x38) = puVar1;
    *(ulonglong **)(lVar3 + 0x40) = puVar2 + uVar5 * 2 + 2;
    puVar4 = puVar2;
  } while (puVar1 == puVar2 + uVar5 * 2 + 2);
  *puVar1 = param_2;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8) = param_3;
  *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + 0x10;
  return;
}



// FUNCTION 1439efbc0 FUN_1439efbc0 body=146 status=ok
// SIG undefined FUN_1439efbc0(void)

void FUN_1439efbc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*plVar2 == *(longlong *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 == 0) || (*(longlong **)(lVar1 + 8) != plVar2)) {
      lVar1 = FUN_1439efff0(param_1);
    }
  }
  if (*(undefined8 **)(lVar1 + 0x38) == *(undefined8 **)(lVar1 + 0x40)) {
    FUN_1439efc60(lVar1,param_2,param_3);
    return;
  }
  **(undefined8 **)(lVar1 + 0x38) = param_2;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 8) = param_3;
  *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 0x10;
  return;
}



// FUNCTION 1439efc60 FUN_1439efc60 body=174 status=ok
// SIG undefined FUN_1439efc60(void)

void FUN_1439efc60(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  puVar3 = *(ulonglong **)(param_1 + 0x18);
  do {
    if (puVar3 == (ulonglong *)0x0) {
      uVar4 = 8;
    }
    else {
      uVar4 = *puVar3 * 2;
      if (0x40 < uVar4) {
        uVar4 = 0x40;
      }
    }
    puVar2 = *(ulonglong **)(param_1 + 0x28);
    if ((ulonglong)(*(longlong *)(param_1 + 0x30) - (longlong)puVar2) < uVar4 * 0x10 + 0x10) {
      puVar2 = (ulonglong *)FUN_1439eff90(param_1);
      puVar3 = *(ulonglong **)(param_1 + 0x18);
    }
    else {
      *(ulonglong **)(param_1 + 0x28) = puVar2 + uVar4 * 2 + 2;
    }
    puVar2[1] = (ulonglong)puVar3;
    *puVar2 = uVar4;
    puVar1 = puVar2 + 2;
    *(ulonglong **)(param_1 + 0x18) = puVar2;
    *(ulonglong **)(param_1 + 0x38) = puVar1;
    *(ulonglong **)(param_1 + 0x40) = puVar2 + uVar4 * 2 + 2;
    puVar3 = puVar2;
  } while (puVar1 == puVar2 + uVar4 * 2 + 2);
  *puVar1 = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = param_3;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 0x10;
  return;
}


