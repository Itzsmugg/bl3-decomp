// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a5bc30 FUN_141a5bc30 body=1042 status=ok
// SIG undefined FUN_141a5bc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5bc30(longlong param_1,uint param_2,longlong param_3,longlong *param_4,uint param_5,
                  longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  char local_108;
  uint local_104;
  undefined8 local_100;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [16];
  longlong local_88 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_100 = param_6;
  local_104 = param_2;
  if ((param_4 == (longlong *)0x0) || ((longlong *)*param_4 == (longlong *)0x0)) {
    lVar4 = 0;
    local_f0 = 0;
    lVar5 = lVar4;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)*param_4 + 0x48))();
    lVar5 = 0;
    local_f0 = 0;
    if (lVar4 != 0) {
      uVar12 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(param_1 + 0x2c3c) = uVar12;
      switch(uVar12) {
      case 0:
      case 2:
      case 0x20:
      case 0x22:
        lVar5 = 0xd0;
        break;
      case 1:
      case 0x21:
        lVar5 = 0xd8;
        break;
      default:
        lVar5 = 0x8000000c8;
        break;
      case 0x10:
      case 0x12:
        lVar5 = 0xe0;
        break;
      case 0x11:
        lVar5 = 0xe8;
      }
      lVar5 = *(longlong *)(lVar5 + lVar4);
      local_f0 = lVar5;
      FUN_141a52eb0(param_1,lVar4 + 0x18);
    }
  }
  uVar13 = 0;
  local_108 = *(longlong *)(param_1 + 0x2618) != lVar5;
  if ((bool)local_108) {
    *(longlong *)(param_1 + 0x2620) = lVar4;
    *(longlong *)(param_1 + 0x2618) = lVar5;
  }
  piVar16 = (int *)(param_3 + 0xc);
  lVar5 = (longlong)local_88 - param_1;
  puVar8 = (ulonglong *)(param_1 + 0x2558);
  uVar7 = uVar13;
  local_e8 = lVar5;
  uVar15 = local_104;
  do {
    uVar10 = uVar13;
    if (((uint)uVar7 < uVar15) && (*(longlong **)(piVar16 + -3) != (longlong *)0x0)) {
      iVar9 = piVar16[-1];
      iVar1 = *piVar16;
      lVar5 = (**(code **)(**(longlong **)(piVar16 + -3) + 0x48))();
      if (*(char *)(lVar5 + 200) != '\0') {
        iVar9 = iVar9 * *(int *)(lVar5 + 0xcc) + iVar1;
      }
      if (iVar9 < *(int *)(lVar5 + 0xc0)) {
        lVar4 = *(longlong *)(lVar5 + 0xb8);
        if (*(longlong *)(lVar5 + 0xb8) == 0) {
          lVar4 = lVar5 + 0xb0;
        }
        uVar10 = *(ulonglong *)(lVar4 + (longlong)iVar9 * 8);
      }
      FUN_141a52eb0(param_1,lVar5 + 0x18);
      lVar5 = local_e8;
      uVar15 = local_104;
    }
    *(ulonglong *)(lVar5 + -0x2558 + (longlong)puVar8) = uVar10;
    if (*puVar8 != uVar10) {
      *puVar8 = uVar10;
      local_108 = '\x01';
    }
    uVar14 = (uint)uVar7 + 1;
    uVar7 = (ulonglong)uVar14;
    piVar16 = piVar16 + 6;
    puVar8 = puVar8 + 1;
  } while (uVar14 < 8);
  if (*(uint *)(param_1 + 0x2628) != uVar15) {
    *(uint *)(param_1 + 0x2628) = uVar15;
    local_108 = '\x01';
  }
  puVar8 = (ulonglong *)(param_1 + 0x2598);
  lVar5 = local_100 - param_1;
  uVar7 = uVar13;
  cVar6 = local_108;
  do {
    uVar10 = uVar13;
    if (((uint)uVar7 < param_5) &&
       (uVar2 = *(ulonglong *)((longlong)puVar8 + lVar5 + -0x2598), uVar2 != 0)) {
      uVar3 = *(undefined8 *)(*(longlong *)(uVar2 + 0x40) + 0x10);
      iVar9 = *(int *)(uVar2 + 0x5c);
      if (iVar9 == 1) {
        uVar12 = 0;
LAB_141a5be88:
        FUN_141a60fb0(param_1 + 0x460,uVar3,8,uVar12);
      }
      else {
        if (iVar9 == 4) {
          uVar12 = *(undefined4 *)(uVar2 + 0x60);
          goto LAB_141a5be88;
        }
        if ((iVar9 == 5) || (iVar9 == 8)) {
          FUN_141a60ce0(param_1 + 0x460,uVar3,8);
        }
      }
      FUN_141a52eb0(param_1,*(undefined8 *)(uVar2 + 0x40));
      uVar10 = uVar2;
      cVar6 = local_108;
    }
    if (*puVar8 != uVar10) {
      cVar6 = '\x01';
      *puVar8 = uVar10;
      local_108 = '\x01';
    }
    uVar15 = (uint)uVar7 + 1;
    uVar7 = (ulonglong)uVar15;
    puVar8 = puVar8 + 1;
  } while (uVar15 < 8);
  if (*(uint *)(param_1 + 0x262c) == param_5) {
    if (cVar6 != '\0') goto LAB_141a5bed9;
  }
  else {
    *(uint *)(param_1 + 0x262c) = param_5;
LAB_141a5bed9:
    FUN_141a7cc80(param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x2628),param_1 + 0x2558,
                  *(undefined8 *)(param_1 + 0x2618));
    uVar15 = *(uint *)(param_1 + 0x262c);
    if (uVar15 != 0) {
      uVar12 = *(undefined4 *)(param_1 + 0x2628);
      puVar11 = local_c8;
      for (uVar7 = (ulonglong)uVar15; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      local_118 = local_c8;
      FUN_141a65710(param_1 + 0x4e0,uVar12,(ulonglong)uVar15,param_1 + 0x2598);
    }
  }
  if (local_88[0] == 0) {
    if (local_f0 == 0) {
      return;
    }
    lVar5 = *(longlong *)(*(longlong *)(local_f0 + 0x28) + 0x10);
    uVar15 = *(uint *)(lVar5 + 0x40);
    uVar14 = *(uint *)(lVar5 + 0x48);
    goto LAB_141a5bfcb;
  }
  lVar5 = *(longlong *)(*(longlong *)(local_88[0] + 0x28) + 0x10);
  iVar9 = *(int *)(local_88[0] + 0x44);
  if (iVar9 < 4) {
LAB_141a5bf7f:
    local_100._4_4_ = 0;
    local_100._0_4_ = 0;
  }
  else if (iVar9 < 8) {
    local_100._0_4_ = *(uint *)(lVar5 + 0x40);
    local_100._4_4_ = *(uint *)(lVar5 + 0x48);
    if (iVar9 - 4U < 2) {
      uVar13 = (ulonglong)*(uint *)(local_88[0] + 0x48);
    }
  }
  else {
    if (iVar9 != 8) goto LAB_141a5bf7f;
    local_100._0_4_ = *(uint *)(lVar5 + 0x40);
    local_100._4_4_ = *(uint *)(lVar5 + 0x48);
    uVar13 = (ulonglong)*(uint *)(local_88[0] + 0x48);
  }
  uVar15 = (uint)local_100 >> ((byte)uVar13 & 0x1f);
  uVar14 = local_100._4_4_ >> ((byte)uVar13 & 0x1f);
  local_100 = CONCAT44(uVar14,uVar15);
LAB_141a5bfcb:
  local_d8 = (float)uVar15;
  local_d4 = (float)uVar14;
  local_d0 = 0;
  local_e0 = 0;
  local_cc = 0x3f800000;
  if ((0.0 < local_d8) && (0.0 < local_d4)) {
    FUN_141a7cf00(param_1 + 0x4e0,&local_e0);
  }
  return;
}



// FUNCTION 141a5c090 FUN_141a5c090 body=1063 status=ok
// SIG undefined FUN_141a5c090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5c090(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  undefined4 uVar22;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_b8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar2 = *(int *)(param_2 + 0x1e8);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (0 < iVar2) {
    _guard_xfg_dispatch_icall_nop(local_a8,(void *)(param_2 + 0x1a8),(longlong)iVar2 << 3);
  }
  local_f0 = local_a8;
  local_f8 = iVar2;
  FUN_141a5bc30(param_1,*(undefined4 *)(param_2 + 0xc0),param_2,param_2 + 400);
  cVar1 = *(char *)(param_2 + 0xc4);
  if (((cVar1 != '\0') || (*(char *)(param_2 + 0x1a1) != '\0')) ||
     (*(char *)(param_2 + 0x1a0) != '\0')) {
    local_e0 = 0;
    uVar22 = 0;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 0xc0);
      lVar20 = (longlong)iVar2;
      if (*(char *)(param_2 + 0x28c) == '\0') {
        iVar21 = 0;
        if (3 < iVar2) {
          pauVar16 = (undefined1 (*) [16])&local_98;
          uVar12 = (iVar2 - 4U >> 2) + 1;
          plVar17 = (longlong *)(param_2 + 0x30);
          uVar19 = (ulonglong)uVar12;
          iVar21 = uVar12 * 4;
          do {
            lVar20 = plVar17[-6];
            if (lVar20 == 0) {
              *(undefined8 *)pauVar16[-1] = 0;
              *(undefined8 *)(pauVar16[-1] + 8) = 0;
            }
            else {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar3._12_4_ = local_b8;
              auVar3._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar16[-1] = auVar3;
            }
            lVar20 = plVar17[-3];
            if (lVar20 == 0) {
              *(undefined8 *)*pauVar16 = 0;
              *(undefined8 *)(*pauVar16 + 8) = 0;
            }
            else {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar4._12_4_ = local_b8;
              auVar4._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              *pauVar16 = auVar4;
            }
            lVar20 = *plVar17;
            if (lVar20 == 0) {
              *(undefined8 *)pauVar16[1] = 0;
              *(undefined8 *)(pauVar16[1] + 8) = 0;
            }
            else {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar5._12_4_ = local_b8;
              auVar5._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar16[1] = auVar5;
            }
            lVar20 = plVar17[3];
            if (lVar20 == 0) {
              *(undefined8 *)pauVar16[2] = 0;
              *(undefined8 *)(pauVar16[2] + 8) = 0;
            }
            else {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar6._12_4_ = local_b8;
              auVar6._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar16[2] = auVar6;
            }
            plVar17 = plVar17 + 0xc;
            pauVar16 = pauVar16 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (iVar21 < iVar2) {
          pauVar16 = (undefined1 (*) [16])(local_a8 + (longlong)iVar21 * 2);
          uVar19 = (ulonglong)(uint)(iVar2 - iVar21);
          plVar17 = (longlong *)(param_2 + (longlong)iVar21 * 0x18);
          do {
            lVar20 = *plVar17;
            if (lVar20 == 0) {
              *(undefined8 *)*pauVar16 = 0;
              *(undefined8 *)(*pauVar16 + 8) = 0;
            }
            else {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar7._12_4_ = local_b8;
              auVar7._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              *pauVar16 = auVar7;
            }
            plVar17 = plVar17 + 3;
            pauVar16 = pauVar16 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      else {
        lVar15 = 0;
        if (3 < lVar20) {
          puVar18 = &local_98;
          lVar14 = (lVar20 - 4U >> 2) + 1;
          lVar15 = lVar14 * 4;
          lVar13 = param_2 + 500;
          do {
            uVar8 = *(undefined8 *)(lVar13 + 4);
            uVar9 = *(undefined8 *)(lVar13 + 0x10);
            uVar10 = *(undefined8 *)(lVar13 + 0x18);
            puVar18[-2] = *(undefined8 *)(lVar13 + -4);
            puVar18[-1] = uVar8;
            uVar8 = *(undefined8 *)(lVar13 + 0x24);
            uVar11 = *(undefined8 *)(lVar13 + 0x2c);
            *puVar18 = uVar9;
            puVar18[1] = uVar10;
            local_d8 = *(undefined8 *)(lVar13 + 0x38);
            uStack_d0 = *(undefined8 *)(lVar13 + 0x40);
            puVar18[2] = uVar8;
            puVar18[3] = uVar11;
            puVar18[4] = local_d8;
            puVar18[5] = uStack_d0;
            puVar18 = puVar18 + 8;
            lVar14 = lVar14 + -1;
            lVar13 = lVar13 + 0x50;
          } while (lVar14 != 0);
        }
        if (lVar15 < lVar20) {
          puVar18 = local_a8 + lVar15 * 2;
          lVar20 = lVar20 - lVar15;
          lVar15 = param_2 + (lVar15 + 0x19) * 0x14;
          do {
            local_d8 = *(undefined8 *)(lVar15 + -4);
            uStack_d0 = *(undefined8 *)(lVar15 + 4);
            lVar15 = lVar15 + 0x14;
            *puVar18 = local_d8;
            puVar18[1] = uStack_d0;
            puVar18 = puVar18 + 2;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
      }
    }
    local_e8 = *(char *)(param_2 + 0x1a1);
    if ((*(char *)(param_2 + 0x1a0) != '\0') || (local_e8 != '\0')) {
      uVar22 = *(undefined4 *)(*(longlong *)(param_2 + 400) + 0x24);
      local_e0 = *(undefined4 *)(*(longlong *)(param_2 + 400) + 0x28);
    }
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,uVar22);
    local_f8 = CONCAT31(local_f8._1_3_,*(char *)(param_2 + 0x1a0));
    (**(code **)(*param_1 + 0x330))(param_1,cVar1,*(undefined4 *)(param_2 + 0xc0),local_a8);
  }
  return;
}



// FUNCTION 141a5c4d0 FUN_141a5c4d0 body=103 status=ok
// SIG undefined FUN_141a5c4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5c4d0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    local_28 = 0;
    local_20 = DAT_1464c9c64;
    param_6 = DAT_1464c9c64;
  }
  else {
    local_20 = param_5;
    local_28 = CONCAT44(param_4,param_3);
  }
  local_1c = param_6;
  FUN_141a7ce50(param_1 + 0x4e0,&local_28);
  return;
}



// FUNCTION 141a5c540 FUN_141a5c540 body=110 status=ok
// SIG undefined FUN_141a5c540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5c540(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    local_28 = 0;
    local_20 = DAT_1464c9c64;
    param_6 = DAT_1464c9c64;
  }
  else {
    local_20 = param_5;
    local_28 = CONCAT44(param_4,param_3);
  }
  local_1c = param_6;
  FUN_141a7ce50(*(longlong *)(param_1 + 0x1b8) + 0x4e0,&local_28);
  return;
}



// FUNCTION 141a5c5b0 FUN_141a5c5b0 body=93 status=ok
// SIG undefined FUN_141a5c5b0(void)

void FUN_141a5c5b0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x7ee0 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x8ee8) = 1;
  uVar1 = *(uint *)(param_1 + 0x8ee0);
  if (*(uint *)(param_1 + 0x8ee0) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x8ee0) = uVar1;
  return;
}



// FUNCTION 141a5c610 FUN_141a5c610 body=93 status=ok
// SIG undefined FUN_141a5c610(void)

void FUN_141a5c610(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 20000 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x5e28) = 1;
  uVar1 = *(uint *)(param_1 + 0x5e20);
  if (*(uint *)(param_1 + 0x5e20) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x5e20) = uVar1;
  return;
}



// FUNCTION 141a5c670 FUN_141a5c670 body=93 status=ok
// SIG undefined FUN_141a5c670(void)

void FUN_141a5c670(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x6ea0 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x7ea8) = 1;
  uVar1 = *(uint *)(param_1 + 0x7ea0);
  if (*(uint *)(param_1 + 0x7ea0) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x7ea0) = uVar1;
  return;
}



// FUNCTION 141a5c6d0 FUN_141a5c6d0 body=93 status=ok
// SIG undefined FUN_141a5c6d0(void)

void FUN_141a5c6d0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x3de0 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x4de8) = 1;
  uVar1 = *(uint *)(param_1 + 0x4de0);
  if (*(uint *)(param_1 + 0x4de0) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x4de0) = uVar1;
  return;
}



// FUNCTION 141a5c730 FUN_141a5c730 body=93 status=ok
// SIG undefined FUN_141a5c730(void)

void FUN_141a5c730(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x5e60 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x6e68) = 1;
  uVar1 = *(uint *)(param_1 + 0x6e60);
  if (*(uint *)(param_1 + 0x6e60) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x6e60) = uVar1;
  return;
}



// FUNCTION 141a5c790 FUN_141a5c790 body=93 status=ok
// SIG undefined FUN_141a5c790(void)

void FUN_141a5c790(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x2da0 + (ulonglong)param_4),param_6,(ulonglong)(uint)param_5);
  uVar2 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(param_1 + 0x3da8) = 1;
  uVar1 = *(uint *)(param_1 + 0x3da0);
  if (*(uint *)(param_1 + 0x3da0) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x3da0) = uVar1;
  return;
}



// FUNCTION 141a5c7f0 FUN_141a5c7f0 body=100 status=ok
// SIG undefined FUN_141a5c7f0(void)

void FUN_141a5c7f0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 0x7ee0),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x8ee8) = 1;
  uVar2 = *(uint *)(lVar1 + 0x8ee0);
  if (*(uint *)(lVar1 + 0x8ee0) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x8ee0) = uVar2;
  return;
}



// FUNCTION 141a5c860 FUN_141a5c860 body=100 status=ok
// SIG undefined FUN_141a5c860(void)

void FUN_141a5c860(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 20000),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x5e28) = 1;
  uVar2 = *(uint *)(lVar1 + 0x5e20);
  if (*(uint *)(lVar1 + 0x5e20) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x5e20) = uVar2;
  return;
}



// FUNCTION 141a5c8d0 FUN_141a5c8d0 body=100 status=ok
// SIG undefined FUN_141a5c8d0(void)

void FUN_141a5c8d0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 0x6ea0),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x7ea8) = 1;
  uVar2 = *(uint *)(lVar1 + 0x7ea0);
  if (*(uint *)(lVar1 + 0x7ea0) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x7ea0) = uVar2;
  return;
}



// FUNCTION 141a5c940 FUN_141a5c940 body=100 status=ok
// SIG undefined FUN_141a5c940(void)

void FUN_141a5c940(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 0x3de0),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x4de8) = 1;
  uVar2 = *(uint *)(lVar1 + 0x4de0);
  if (*(uint *)(lVar1 + 0x4de0) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x4de0) = uVar2;
  return;
}



// FUNCTION 141a5c9b0 FUN_141a5c9b0 body=100 status=ok
// SIG undefined FUN_141a5c9b0(void)

void FUN_141a5c9b0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 0x5e60),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x6e68) = 1;
  uVar2 = *(uint *)(lVar1 + 0x6e60);
  if (*(uint *)(lVar1 + 0x6e60) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x6e60) = uVar2;
  return;
}



// FUNCTION 141a5ca20 FUN_141a5ca20 body=100 status=ok
// SIG undefined FUN_141a5ca20(void)

void FUN_141a5ca20(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  ushort param_5,void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + lVar1 + 0x2da0),param_6,(ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  *(undefined1 *)(lVar1 + 0x3da8) = 1;
  uVar2 = *(uint *)(lVar1 + 0x3da0);
  if (*(uint *)(lVar1 + 0x3da0) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x3da0) = uVar2;
  return;
}



// FUNCTION 141a5cdf0 FUN_141a5cdf0 body=71 status=ok
// SIG undefined FUN_141a5cdf0(void)

void FUN_141a5cdf0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5ce1e;
    }
  }
  uVar2 = 0;
LAB_141a5ce1e:
  FUN_141a654b0(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5ce40 FUN_141a5ce40 body=71 status=ok
// SIG undefined FUN_141a5ce40(void)

void FUN_141a5ce40(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5ce6e;
    }
  }
  uVar2 = 0;
LAB_141a5ce6e:
  FUN_141a65120(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5ce90 FUN_141a5ce90 body=71 status=ok
// SIG undefined FUN_141a5ce90(void)

void FUN_141a5ce90(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5cebe;
    }
  }
  uVar2 = 0;
LAB_141a5cebe:
  FUN_141a65380(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5cee0 FUN_141a5cee0 body=71 status=ok
// SIG undefined FUN_141a5cee0(void)

void FUN_141a5cee0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5cf0e;
    }
  }
  uVar2 = 0;
LAB_141a5cf0e:
  FUN_141a64ff0(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5cf30 FUN_141a5cf30 body=71 status=ok
// SIG undefined FUN_141a5cf30(void)

void FUN_141a5cf30(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5cf5e;
    }
  }
  uVar2 = 0;
LAB_141a5cf5e:
  FUN_141a65250(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5cf80 FUN_141a5cf80 body=71 status=ok
// SIG undefined FUN_141a5cf80(void)

void FUN_141a5cf80(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_141a5cfae;
    }
  }
  uVar2 = 0;
LAB_141a5cfae:
  FUN_141a655e0(param_1 + 0x4e0,uVar2,param_3);
  return;
}



// FUNCTION 141a5cfd0 FUN_141a5cfd0 body=75 status=ok
// SIG undefined FUN_141a5cfd0(void)

void FUN_141a5cfd0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d002;
    }
  }
  uVar3 = 0;
LAB_141a5d002:
  FUN_141a654b0(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d020 FUN_141a5d020 body=75 status=ok
// SIG undefined FUN_141a5d020(void)

void FUN_141a5d020(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d052;
    }
  }
  uVar3 = 0;
LAB_141a5d052:
  FUN_141a65120(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d070 FUN_141a5d070 body=75 status=ok
// SIG undefined FUN_141a5d070(void)

void FUN_141a5d070(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d0a2;
    }
  }
  uVar3 = 0;
LAB_141a5d0a2:
  FUN_141a65380(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d0c0 FUN_141a5d0c0 body=75 status=ok
// SIG undefined FUN_141a5d0c0(void)

void FUN_141a5d0c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d0f2;
    }
  }
  uVar3 = 0;
LAB_141a5d0f2:
  FUN_141a64ff0(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d110 FUN_141a5d110 body=75 status=ok
// SIG undefined FUN_141a5d110(void)

void FUN_141a5d110(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d142;
    }
  }
  uVar3 = 0;
LAB_141a5d142:
  FUN_141a65250(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d160 FUN_141a5d160 body=75 status=ok
// SIG undefined FUN_141a5d160(void)

void FUN_141a5d160(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      goto LAB_141a5d192;
    }
  }
  uVar3 = 0;
LAB_141a5d192:
  FUN_141a655e0(lVar1 + 0x4e0,uVar3,param_3);
  return;
}



// FUNCTION 141a5d1b0 FUN_141a5d1b0 body=177 status=ok
// SIG undefined FUN_141a5d1b0(void)

void FUN_141a5d1b0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x1bd8 + uVar2 * 8) == 0) goto LAB_141a5d217;
    *(undefined8 *)(param_1 + 0x1bd8 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 0x1bd8 + uVar2 * 8)) goto LAB_141a5d217;
    *(longlong *)(param_1 + 0x1bd8 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x1952) = *(ushort *)(param_1 + 0x1952) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d217:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2bb0 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x28b0 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c3a) = *(ushort *)(param_1 + 0x2c3a) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d270 FUN_141a5d270 body=177 status=ok
// SIG undefined FUN_141a5d270(void)

void FUN_141a5d270(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x1a58 + uVar2 * 8) == 0) goto LAB_141a5d2d7;
    *(undefined8 *)(param_1 + 0x1a58 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 0x1a58 + uVar2 * 8)) goto LAB_141a5d2d7;
    *(longlong *)(param_1 + 0x1a58 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x194c) = *(ushort *)(param_1 + 0x194c) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d2d7:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2a30 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x2730 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c34) = *(ushort *)(param_1 + 0x2c34) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d330 FUN_141a5d330 body=177 status=ok
// SIG undefined FUN_141a5d330(void)

void FUN_141a5d330(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 7000 + uVar2 * 8) == 0) goto LAB_141a5d397;
    *(undefined8 *)(param_1 + 7000 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 7000 + uVar2 * 8)) goto LAB_141a5d397;
    *(longlong *)(param_1 + 7000 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x1950) = *(ushort *)(param_1 + 0x1950) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d397:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2b30 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x2830 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c38) = *(ushort *)(param_1 + 0x2c38) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d3f0 FUN_141a5d3f0 body=177 status=ok
// SIG undefined FUN_141a5d3f0(void)

void FUN_141a5d3f0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x19d8 + uVar2 * 8) == 0) goto LAB_141a5d457;
    *(undefined8 *)(param_1 + 0x19d8 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 0x19d8 + uVar2 * 8)) goto LAB_141a5d457;
    *(longlong *)(param_1 + 0x19d8 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x194a) = *(ushort *)(param_1 + 0x194a) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d457:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x29b0 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x26b0 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c32) = *(ushort *)(param_1 + 0x2c32) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d4b0 FUN_141a5d4b0 body=177 status=ok
// SIG undefined FUN_141a5d4b0(void)

void FUN_141a5d4b0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x1ad8 + uVar2 * 8) == 0) goto LAB_141a5d517;
    *(undefined8 *)(param_1 + 0x1ad8 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 0x1ad8 + uVar2 * 8)) goto LAB_141a5d517;
    *(longlong *)(param_1 + 0x1ad8 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x194e) = *(ushort *)(param_1 + 0x194e) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d517:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2ab0 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x27b0 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c36) = *(ushort *)(param_1 + 0x2c36) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d570 FUN_141a5d570 body=177 status=ok
// SIG undefined FUN_141a5d570(void)

void FUN_141a5d570(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if ((param_4 == 0) || (lVar1 = *(longlong *)(param_4 + 0x78), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x1958 + uVar2 * 8) == 0) goto LAB_141a5d5d7;
    *(undefined8 *)(param_1 + 0x1958 + uVar2 * 8) = 0;
  }
  else {
    if (lVar1 == *(longlong *)(param_1 + 0x1958 + uVar2 * 8)) goto LAB_141a5d5d7;
    *(longlong *)(param_1 + 0x1958 + uVar2 * 8) = lVar1;
  }
  *(ushort *)(param_1 + 0x1948) = *(ushort *)(param_1 + 0x1948) | (ushort)(1 << (param_3 & 0x1f));
LAB_141a5d5d7:
  if (DAT_146ab62f5 == '\0') {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2930 + uVar2 * 8,param_4);
  }
  *(longlong *)(param_1 + 0x2630 + uVar2 * 8) = param_4;
  *(ushort *)(param_1 + 0x2c30) = *(ushort *)(param_1 + 0x2c30) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a5d6c0 FUN_141a5d6c0 body=237 status=ok
// SIG undefined FUN_141a5d6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5d6c0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38 [6];
  
  local_38[4] = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar1 = **(longlong **)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0xd50) + 0x5d8);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_48 = 0;
  local_40 = 0;
  if ((param_3 != 0) && (param_2 != 0)) {
    puVar6 = &local_48;
    puVar3 = local_38;
    uVar7 = (ulonglong)param_2;
    do {
      lVar2 = *(longlong *)((param_3 - (longlong)local_38) + (longlong)puVar3);
      lVar4 = lVar2 + -8;
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      if (lVar4 == 0) {
        *puVar3 = 0;
        uVar5 = 0;
      }
      else {
        *puVar3 = *(ulonglong *)(lVar4 + 0x48);
        uVar5 = *(undefined4 *)(lVar4 + 0x80);
      }
      *(undefined4 *)puVar6 = uVar5;
      puVar3 = puVar3 + 1;
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_141a7cea0(lVar1 + 0x4e0,(ulonglong)param_2,local_38,&local_48);
  return;
}



// FUNCTION 141a5d7b0 FUN_141a5d7b0 body=66 status=ok
// SIG undefined FUN_141a5d7b0(void)

void FUN_141a5d7b0(longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = param_3 + -8;
  if (param_3 == 0) {
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x38;
  }
  FUN_141a75420(param_1 + 0x4e0,lVar2,(ulonglong)param_2,
                *(undefined2 *)(param_1 + 0xc20 + (ulonglong)param_2 * 2),param_4);
  return;
}



// FUNCTION 141a5d800 FUN_141a5d800 body=73 status=ok
// SIG undefined FUN_141a5d800(void)

void FUN_141a5d800(longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = param_3 + -8;
  if (param_3 == 0) {
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x38;
  }
  FUN_141a75420(*(longlong *)(param_1 + 0x1b8) + 0x4e0,lVar2,(ulonglong)param_2,
                *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0xc20 + (ulonglong)param_2 * 2),
                param_4);
  return;
}



// FUNCTION 141a5d850 FUN_141a5d850 body=89 status=ok
// SIG undefined FUN_141a5d850(void)

void FUN_141a5d850(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 local_res8 [2];
  longlong local_res20;
  
  local_res20 = param_4;
  if (param_4 != 0) {
    FUN_141a52eb0(param_1,*(undefined8 *)(param_4 + 0x40));
  }
  local_res8[0] = 0xffffffff;
  FUN_141a658f0(param_1 + 0x4e0,param_3,1,&local_res20,local_res8);
  return;
}



// FUNCTION 141a5d8b0 FUN_141a5d8b0 body=81 status=ok
// SIG undefined FUN_141a5d8b0(void)

void FUN_141a5d8b0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong local_res8;
  
  local_res8 = param_4;
  if (param_4 != 0) {
    FUN_141a52eb0(param_1,*(undefined8 *)(param_4 + 0x40));
  }
  FUN_141a658f0(param_1 + 0x4e0,param_3,1,&local_res8,&stack0x00000028);
  return;
}



// FUNCTION 141a5d910 FUN_141a5d910 body=96 status=ok
// SIG undefined FUN_141a5d910(void)

void FUN_141a5d910(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  longlong local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  local_res20 = param_4;
  if (param_4 != 0) {
    FUN_141a52eb0(lVar1,*(undefined8 *)(param_4 + 0x40));
  }
  local_res8[0] = 0xffffffff;
  FUN_141a658f0(lVar1 + 0x4e0,param_3,1,&local_res20,local_res8);
  return;
}



// FUNCTION 141a5d970 FUN_141a5d970 body=96 status=ok
// SIG undefined FUN_141a5d970(void)

void FUN_141a5d970(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  local_res8 = param_4;
  if (param_4 != 0) {
    FUN_141a52eb0(lVar1,*(undefined8 *)(param_4 + 0x40));
  }
  FUN_141a658f0(lVar1 + 0x4e0,param_3,1,&local_res8,&param_5);
  return;
}



// FUNCTION 141a5d9d0 FUN_141a5d9d0 body=162 status=ok
// SIG undefined FUN_141a5d9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5d9d0(longlong param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                  int param_6,undefined4 param_7)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = (float)param_2;
  local_24 = (float)param_3;
  local_20 = (float)(param_5 - param_2);
  local_14 = param_7;
  local_1c = (float)(param_6 - param_3);
  if ((0.0 < local_20) && (0.0 < local_1c)) {
    local_18 = param_4;
    FUN_141a7cf00(param_1 + 0x4e0,&local_28);
  }
  return;
}



// FUNCTION 141a5dab0 FUN_141a5dab0 body=116 status=ok
// SIG undefined FUN_141a5dab0(void)

void FUN_141a5dab0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = **(longlong **)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0xd50) + 0x5d8);
  FUN_141a70af0(*(longlong *)(lVar3 + 0x1b8) + 0x558,lVar3);
  FUN_141a55210(lVar3,local_18,0);
  if (local_10 != 0) {
    LOCK();
    piVar1 = (int *)(local_10 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_10,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a5db30 FUN_141a5db30 body=95 status=ok
// SIG undefined FUN_141a5db30(void)

void FUN_141a5db30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  FUN_141a70af0(*(longlong *)(param_1 + 0x1b8) + 0x558,param_1);
  FUN_141a55210(param_1,local_18,0);
  if (local_10 != 0) {
    LOCK();
    piVar1 = (int *)(local_10 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_10,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a5db90 FUN_141a5db90 body=99 status=ok
// SIG undefined FUN_141a5db90(void)

void FUN_141a5db90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  FUN_141a70af0(*(longlong *)(lVar3 + 0x1b8) + 0x558,lVar3);
  FUN_141a55210(lVar3,local_18,0);
  if (local_10 != 0) {
    LOCK();
    piVar1 = (int *)(local_10 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_10,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a5dc00 FUN_141a5dc00 body=324 status=ok
// SIG undefined FUN_141a5dc00(void)

void FUN_141a5dc00(longlong *param_1,int param_2,longlong *param_3,uint param_4,char param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)param_4;
  if (param_2 == 1) {
    param_2 = 1;
  }
  if (param_2 != 5) {
    if ((param_5 != '\0') && (param_2 == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1469fcff8) &&
         (_Init_thread_header(&DAT_1469fcff8), DAT_1469fcff8 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_1469fcff0 =
             (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions");
        _Init_thread_footer(&DAT_1469fcff8);
      }
      (**(code **)(*DAT_1469fcff0 + 0x68))();
      if (0 < (int)param_4) {
        do {
          if ((longlong *)*param_3 != (longlong *)0x0) {
            lVar1 = (**(code **)(*(longlong *)*param_3 + 0x48))();
            uVar3 = 0xe0;
            if (*(char *)(*(longlong *)(lVar1 + 0x28) + 0xb5) == '\0') {
              uVar3 = 0xc0;
            }
            FUN_141a60fb0(param_1 + 0x8c,*(longlong *)(lVar1 + 0x28),uVar3,0xffffffff);
          }
          param_3 = param_3 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a5dc3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,param_3,param_4);
  return;
}



// FUNCTION 141a5dd50 FUN_141a5dd50 body=393 status=ok
// SIG undefined FUN_141a5dd50(void)

void FUN_141a5dd50(longlong param_1,uint param_2,uint param_3,longlong *param_4,uint param_5,
                  longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if (param_2 == 1) {
    param_2 = 1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fd008) {
    _Init_thread_header(&DAT_1469fd008);
    if (DAT_1469fd008 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd000 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions");
      _Init_thread_footer(&DAT_1469fd008);
    }
  }
  (**(code **)(*DAT_1469fd000 + 0x68))();
  if ((param_2 == 2) && (1 < param_3)) {
    FUN_141a72750(param_1 + 0x4e0,1);
  }
  else if ((param_2 < 3) && (((param_2 == 2 && (param_3 == 0)) && (0 < (int)param_5)))) {
    uVar4 = (ulonglong)param_5;
    do {
      lVar2 = *param_4;
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x10);
        iVar1 = *(int *)(lVar2 + 0x5c);
        if (iVar1 == 1) {
          uVar5 = 0;
        }
        else {
          if (iVar1 != 4) {
            if ((iVar1 == 5) || (iVar1 == 8)) {
              FUN_141a60ce0(param_1 + 0x460,uVar3,8);
            }
            goto LAB_141a5de3c;
          }
          uVar5 = *(undefined4 *)(lVar2 + 0x60);
        }
        FUN_141a60fb0(param_1 + 0x460,uVar3,8,uVar5);
      }
LAB_141a5de3c:
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_6 != (longlong *)0x0) {
    FUN_141a5db30(param_1);
    (**(code **)(*param_6 + 0x10))(param_6);
    FUN_141a7d100(param_6,0);
  }
  return;
}



// FUNCTION 141a5df40 FUN_141a5df40 body=492 status=ok
// SIG undefined FUN_141a5df40(void)

void FUN_141a5df40(longlong param_1,uint param_2,uint param_3,longlong *param_4,uint param_5,
                  longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  if (param_2 == 1) {
    param_2 = 1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fd008) {
    _Init_thread_header(&DAT_1469fd008);
    if (DAT_1469fd008 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd000 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions");
      _Init_thread_footer(&DAT_1469fd008);
    }
  }
  (**(code **)(*DAT_1469fd000 + 0x68))();
  if ((param_2 == 2) && (1 < param_3)) {
    FUN_141a72750(lVar4 + 0x4e0,1);
  }
  else if ((param_2 < 3) && (((param_2 == 2 && (param_3 == 0)) && (0 < (int)param_5)))) {
    uVar7 = (ulonglong)param_5;
    do {
      lVar5 = *param_4;
      if (lVar5 != 0) {
        lVar2 = lVar4 + 0x460;
        uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x10);
        iVar3 = *(int *)(lVar5 + 0x5c);
        if (iVar3 == 1) {
          uVar8 = 0;
        }
        else {
          if (iVar3 != 4) {
            if ((iVar3 == 5) || (iVar3 == 8)) {
              FUN_141a60ce0(lVar2,uVar6,8);
            }
            goto LAB_141a5e03f;
          }
          uVar8 = *(undefined4 *)(lVar5 + 0x60);
        }
        FUN_141a60fb0(lVar2,uVar6,8,uVar8);
      }
LAB_141a5e03f:
      param_4 = param_4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_6 != (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    FUN_141a70af0(*(longlong *)(lVar4 + 0x1b8) + 0x558,lVar4);
    FUN_141a55210(lVar4,local_28,0);
    if (local_20 != 0) {
      LOCK();
      piVar1 = (int *)(local_20 + 8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FUN_141a4ed50(local_20,1);
      }
    }
    (**(code **)(*param_6 + 0x10))(param_6);
    FUN_141a7d100(param_6,0);
  }
  return;
}



// FUNCTION 141a5e140 FUN_141a5e140 body=67 status=ok
// SIG undefined FUN_141a5e140(void)

void FUN_141a5e140(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x80))();
    FUN_141a74710(param_2,-(*(char *)((longlong)param_1 + 0x1a9) != '\0') & 2,
                  *(undefined8 *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 141a5e190 FUN_141a5e190 body=511 status=ok
// SIG undefined FUN_141a5e190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5e190(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_141a6c420(param_1 + 0x10);
  local_88 = (ulonglong)*(uint *)(param_1 + 0x90);
  local_100 = 1;
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,1);
  uStack_e8 = 0x100000000;
  local_f0 = 2;
  local_110 = (undefined8 *)CONCAT71(local_110._1_7_,1);
  local_70 = 1;
  local_80 = 2;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 1;
  local_60 = 0xc0;
  local_68 = 0x10000;
  local_118 = L"FD3D12FastConstantAllocator";
  FUN_141a6ea90(uVar2,&local_d0,&local_88,*(undefined4 *)(param_1 + 0x94));
  local_b8 = (ulonglong)*(uint *)(param_1 + 0x90);
  local_100 = 1;
  local_108 = &local_d8;
  local_118 = (wchar_t *)local_f8;
  uStack_ac = 0x10001;
  uStack_a8 = 0;
  uStack_9c = 1;
  uStack_98 = 0;
  local_c8 = 1;
  uStack_c0 = 0x10000;
  local_58 = CONCAT44(uStack_c4,1);
  uStack_b0 = 1;
  uStack_40 = 0x1000100000001;
  uStack_a4 = 1;
  uStack_50 = 0x10000;
  local_110 = (undefined8 *)0x0;
  local_f8[0] = 0xac3;
  local_d8 = 0;
  local_28 = (ulonglong)uStack_94 << 0x20;
  local_38 = 0;
  uStack_34 = 1;
  uStack_30 = 0;
  uStack_2c = 1;
  local_48 = local_b8;
  iVar3 = FUN_141a6f000(uVar2,&local_58,local_d0,0);
  if (iVar3 < 0) {
    local_110 = &local_f0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_118 = (wchar_t *)0x0;
    FUN_141a94000(iVar3,
                  "Adapter->CreatePlacedResource(ResourceDesc, BackingHeap, 0, InitialState, nullptr, &NewBuffer, BResourceOwnsHeap(true))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp",
                  0xad5);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x94);
  FUN_141a50de0(param_1 + 0x10,local_d8,*(undefined4 *)(param_1 + 0x90),0);
  FUN_141a7d380(param_1 + 0x10);
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d0 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_d0 != (undefined8 *)0x0)) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  return;
}



// FUNCTION 141a5e390 FUN_141a5e390 body=51 status=ok
// SIG undefined FUN_141a5e390(void)

void FUN_141a5e390(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar2 + 0xb38) != '\0') && (*(longlong *)(lVar2 + 0xb68) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x14);
    *piVar1 = *piVar1 + param_2;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x18);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}



// FUNCTION 141a5e3d0 FUN_141a5e3d0 body=543 status=ok
// SIG undefined FUN_141a5e3d0(void)

void FUN_141a5e3d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puStack_38;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a5e4ff;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a5e4ff:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar10 = (uint *)((longlong)iStack_2c * 0xb8 + *param_1);
        uVar5 = FUN_141a74790(puVar10 + 1,(ulonglong)*puVar10 * 2);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        puVar10[0x2d] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar10[0x2c] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a5e5f0 FUN_141a5e5f0 body=570 status=ok
// SIG undefined FUN_141a5e5f0(void)

void FUN_141a5e5f0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  lVar1 = param_1 + 0x1b0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x1d0),0,0);
    *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0x1d8);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    FUN_1406f49a0(lVar1,0);
    if (0 < (int)uVar8) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar11;
        lVar10 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar10 = lVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 400);
    local_58 = 0;
    iVar4 = *(int *)(param_1 + 0x1a0);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)(param_1 + 0x198);
      if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar10 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar5) goto LAB_141a5e73f;
        uVar8 = puVar13[lVar10 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_141a5e73f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar10 = param_1;
        }
        lVar3 = lVar10 + (longlong)iStack_1c * 0x18;
        uVar6 = *(undefined8 *)(lVar10 + (longlong)iStack_1c * 0x18);
        uVar8 = (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6 & *puVar2 - 1;
        *(uint *)(lVar3 + 0x14) = uVar8;
        lVar10 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar3 + 0x10) =
             *(undefined4 *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar10 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 141a5e830 FUN_141a5e830 body=119 status=ok
// SIG undefined FUN_141a5e830(void)

int FUN_141a5e830(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  LOCK();
  piVar2 = (int *)(param_1 + 0x10);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + 0x18) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar5 = *(int *)(param_1 + 0x14) == 0;
      if (bVar5) {
        *(int *)(param_1 + 0x14) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar1);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a5e8b0 FUN_141a5e8b0 body=50 status=ok
// SIG undefined FUN_141a5e8b0(void)

void FUN_141a5e8b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FD3D12CommandAllocatorManager::ReleaseCommandAllocator(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x470) = 0;
  }
  return;
}



// FUNCTION 141a5e8f0 FUN_141a5e8f0 body=168 status=ok
// SIG undefined FUN_141a5e8f0(void)

void FUN_141a5e8f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5f8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5f8));
  }
  iVar1 = *(int *)(param_1 + 0x5f0);
  *(int *)(param_1 + 0x5f0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x5f4) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x5e8,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x5e8) + (longlong)iVar1 * 8) = param_2;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x18),1,(LPLONG)0x0);
                    /* WARNING: Could not recover jumptable at 0x000141a5e991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5f8));
  return;
}



// FUNCTION 141a5e9a0 FUN_141a5e9a0 body=1068 status=ok
// SIG undefined FUN_141a5e9a0(void)

void FUN_141a5e9a0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 *local_res20;
  longlong *local_108;
  undefined8 local_100;
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  FUN_141a6f180(*(undefined8 *)(param_1 + 0x90),&local_res20);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  if ((int)local_100._4_4_ < (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec)) + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_108);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x18);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    uVar6 = local_100;
    lVar12 = (longlong)(int)local_100;
    iVar8 = (int)local_100 + 1;
    local_100 = CONCAT44(local_100._4_4_,iVar8);
    if ((int)local_100._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_108,uVar6 & 0xffffffff);
    }
    local_108[lVar12] = (longlong)plVar10;
    local_b8 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_res20 + 1) = *(int *)(local_res20 + 1) + 1;
      UNLOCK();
    }
    FUN_141a57d90(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),&local_b8,0);
  }
  plVar10 = (longlong *)(param_1 + 0xb8);
  uStack_f4 = 1;
  uVar3 = *(uint *)(param_1 + 0xe0);
  puVar1 = (uint *)(param_1 + 200);
  local_f8 = 0;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = *puVar11;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar8 = local_f8 + 1;
      bVar13 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar8;
      if (bVar13) goto LAB_141a5eb34;
      uVar9 = puVar11[lVar12 + 1];
    }
    uStack_f4 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_e4 = (iStack_e0 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_e4) {
LAB_141a5eb34:
      uStack_e4 = uVar3;
    }
  }
  local_e8 = 0xffffffff;
  uStack_c4 = *(uint *)(param_1 + 0xe0);
  uStack_68 = CONCAT44(uStack_f4,local_f8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_e4;
  local_88 = CONCAT44(uStack_dc,iStack_e0);
  local_d8 = (int)uStack_c4 >> 5;
  local_c8 = -1 << ((byte)uStack_c4 & 0x1f);
  local_c0 = uStack_c4 & 0xffffffe0;
  iStack_a0 = local_f8;
  uStack_9c = uStack_f4;
  puStack_f0 = puVar1;
  local_98 = puVar1;
  local_70 = plVar10;
  puStack_60 = puVar1;
  uStack_50 = local_88;
  uStack_58 = uStack_90;
  uStack_54 = uStack_8c;
  local_a8 = plVar10;
  uVar9 = uStack_c4;
  if (uStack_c4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = puVar11[local_d8] & local_c8;
    while (uVar9 == 0) {
      lVar12 = (longlong)local_d8;
      local_c0 = local_c0 + 0x20;
      iVar8 = local_d8 + 1;
      bVar13 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar8;
      if (bVar13) goto LAB_141a5ec1c;
      uVar9 = puVar11[lVar12 + 1];
      local_c8 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_c4 = (local_c0 - iVar8) + 0x1f;
    uVar9 = uStack_c4;
    if ((int)uVar3 < (int)uStack_c4) {
LAB_141a5ec1c:
      uStack_c4 = uVar3;
      uVar9 = uVar3;
    }
  }
  while (((uStack_8c != uVar9 || (local_98 != puVar1)) || (local_a8 != plVar10))) {
    plVar4 = *(longlong **)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    local_b0 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_res20 + 1) = *(int *)(local_res20 + 1) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_108,&local_b0);
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_141a55210(**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x5d8),local_80,1);
  if (local_78 != 0) {
    LOCK();
    piVar2 = (int *)(local_78 + 8);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      FUN_141a4ed50(local_78,1);
    }
  }
  plVar10 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
    }
    plVar10 = plVar10 + 1;
  }
  local_100._4_4_ = (uint)(local_100 >> 0x20);
  bVar13 = local_100._4_4_ != 0;
  local_100 = (ulonglong)local_100._4_4_ << 0x20;
  if (bVar13) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_108,0);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 **)(param_1 + 0x90) = local_res20;
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res20 + 1) = *(int *)(local_res20 + 1) + 1;
    UNLOCK();
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  *(bool *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) == '\0';
  plVar10 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
    }
    plVar10 = plVar10 + 1;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_res20 + 1);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (local_res20 != (undefined8 *)0x0)) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  return;
}



// FUNCTION 141a5edd0 Remove body=192 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
     ::Remove(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1ac)) {
    lVar5 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar5 = param_1;
    }
    lVar1 = lVar5 + (longlong)param_2 * 0x18;
    lVar4 = (longlong)(int)(*(int *)(param_1 + 0x1d8) - 1U & *(uint *)(lVar1 + 0x14));
    lVar6 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar6 = param_1 + 0x1b0;
    }
    puVar2 = (undefined4 *)(lVar6 + lVar4 * 4);
    iVar3 = *(int *)(lVar6 + lVar4 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x10);
        break;
      }
      lVar6 = (longlong)iVar3 * 3 + 2;
      puVar2 = (undefined4 *)(lVar5 + lVar6 * 8);
      iVar3 = *(int *)(lVar5 + lVar6 * 8);
    }
  }
  FUN_1407ee970(param_1,param_2,1);
  return;
}



// FUNCTION 141a5ee90 RemoveAtImpl body=310 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
    iVar4 = param_3;
    do {
      lVar1 = plVar3[2];
      plVar3[1] = (longlong)&PTR__scalar_deleting_destructor__144da63b8;
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(plVar3[2] + 0x10);
        FMemory::operator_delete(plVar3[2],0x20);
        plVar3[2] = lVar1;
      }
      plVar3[3] = 0;
      plVar3[2] = 0;
      (**(code **)(plVar3[1] + 8))(plVar3 + 1,0);
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      plVar3 = plVar3 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x28 + *param_1),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar2 * 0x28);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141a5efd0 FUN_141a5efd0 body=150 status=ok
// SIG undefined FUN_141a5efd0(void)

void FUN_141a5efd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x50,lVar1);
    iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                      (param_1 + 0xa0,lVar1);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - iVar3;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0xf0,lVar1);
    iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                      (param_1 + 0x140,lVar1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 141a5f070 FUN_141a5f070 body=239 status=ok
// SIG undefined FUN_141a5f070(void)

void FUN_141a5f070(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  lVar3 = *param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  plVar5 = (longlong *)*param_3;
  plVar6 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *(undefined4 *)(param_1 + 0xb8) = *param_4;
  *(undefined4 *)(param_1 + 0xbc) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = uVar8;
  *(undefined4 *)(param_1 + 0xc4) = uVar9;
  *(undefined4 *)(param_1 + 200) = param_4[4];
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x30) == 1)) {
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
    *(undefined8 *)(param_1 + 0xd0) = uVar10;
  }
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return;
}



// FUNCTION 141a5f160 FUN_141a5f160 body=732 status=ok
// SIG undefined FUN_141a5f160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_141a5f160(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined8 *local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined4 local_108 [2];
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  ulonglong local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(*param_1 + 0x10);
  uVar7 = FUN_141a7d850(*(undefined8 *)(lVar3 + 0x738));
  puVar10 = (undefined4 *)0x0;
  if (0 < (int)param_1[4]) {
    plVar1 = param_1 + 3;
    puVar8 = puVar10;
    puVar12 = puVar10;
    do {
      piVar2 = (int *)(*(longlong *)(*(longlong *)((longlong)puVar8 + *plVar1) + 8) + 8);
      LOCK();
      iVar6 = *piVar2;
      if (iVar6 == 0) {
        *piVar2 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      iVar11 = (int)puVar12;
      if ((iVar6 == 1) &&
         (*(ulonglong *)(*(longlong *)((longlong)puVar8 + *plVar1) + 0x20) <= uVar7)) {
        puVar10 = *(undefined4 **)((longlong)iVar11 * 8 + *plVar1);
        puVar10[4] = 0;
        iVar6 = (int)param_1[4];
        iVar5 = (iVar6 - iVar11) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar11 * 8),
                     (void *)(*plVar1 + (longlong)(iVar11 + 1) * 8),(longlong)iVar5 << 3);
          iVar6 = (int)param_1[4];
        }
        *(int *)(param_1 + 4) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        return puVar10;
      }
      puVar12 = (undefined4 *)(ulonglong)(iVar11 + 1U);
      puVar8 = puVar8 + 2;
    } while ((int)(iVar11 + 1U) < (int)param_1[4]);
  }
  puVar8 = (undefined4 *)operator_new(0x28);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = (int)param_1[1];
    *(undefined8 *)(puVar8 + 2) = 0;
    puVar8[4] = 0;
    *(undefined8 *)(puVar8 + 6) = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    puVar10 = puVar8;
  }
  local_98 = (ulonglong)*(uint *)(param_1 + 1);
  local_b0 = *(int *)((longlong)param_1 + 0xc);
  local_110 = 1;
  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
  uStack_ac = 0;
  uStack_a4 = 1;
  local_120 = (undefined8 *)CONCAT71(local_120._1_7_,1);
  local_80 = 1;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 1;
  local_70 = 0xc0;
  local_78 = 0x10000;
  local_128 = L"FD3D12FastAllocatorPage";
  local_90 = local_b0;
  FUN_141a6ea90(lVar3,&local_100,&local_98,(int)param_1[2]);
  local_e8 = (ulonglong)*(uint *)(param_1 + 1);
  plVar1 = (longlong *)(puVar10 + 2);
  uStack_dc = 0x10001;
  uStack_d8 = 0;
  local_108[0] = 0xac3;
  if (local_90 == 3) {
    local_108[0] = 0x400;
  }
  uStack_cc = 1;
  uStack_c8 = 0;
  local_f8 = 1;
  uStack_f0 = 0x10000;
  local_68 = CONCAT44(uStack_f4,1);
  uStack_e0 = 1;
  uStack_50 = 0x1000100000001;
  uStack_d4 = 1;
  uStack_60 = 0x10000;
  local_38 = (ulonglong)uStack_c4 << 0x20;
  local_48 = 0;
  uStack_44 = 1;
  uStack_40 = 0;
  uStack_3c = 1;
  puVar4 = (undefined8 *)*plVar1;
  *plVar1 = 0;
  local_58 = local_e8;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  local_128 = (wchar_t *)local_108;
  local_110 = 1;
  local_120 = (undefined8 *)0x0;
  local_118 = plVar1;
  iVar6 = FUN_141a6f000(lVar3,&local_68,local_100,0);
  if (iVar6 < 0) {
    local_120 = &local_c0;
    local_c0 = 0;
    local_b8 = 0;
    local_128 = (wchar_t *)0x0;
    FUN_141a94000(iVar6,
                  "Adapter->CreatePlacedResource(ResourceDesc, BackingHeap, 0, InitialState, nullptr, Page->FastAllocBuffer.GetInitReference(), BResourceOwnsHeap(true))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp",
                  0xa63);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)*plVar1);
  uVar9 = FUN_141a57830(*plVar1);
  *(undefined8 *)(puVar10 + 6) = uVar9;
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_100 + 1);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (local_100 != (undefined8 *)0x0)) {
      (**(code **)*local_100)(local_100,1);
    }
  }
  return puVar10;
}



// FUNCTION 141a5f440 FUN_141a5f440 body=147 status=ok
// SIG undefined FUN_141a5f440(void)

void FUN_141a5f440(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_res10 [6];
  
  uVar2 = (**(code **)(*param_1 + 0x18))();
  if (param_2 <= uVar2) {
    uVar5 = (int)param_1[8] + param_2;
    if (((char)param_1[0xc] != '\0') && (uVar2 < uVar5)) {
      *(uint *)((longlong)param_1 + 0x44) = param_2;
      uVar5 = param_2;
      if ((int)param_1[10] == 1) {
        lVar1 = param_1[2];
        iVar4 = 0;
        if (0 < *(int *)(lVar1 + 0x1d8)) {
          lVar3 = 0;
          do {
            iVar4 = iVar4 + 1;
            *(undefined1 *)(lVar3 + *(longlong *)(lVar1 + 0x1d0)) = 0;
            lVar3 = lVar3 + 0x30;
          } while (iVar4 < *(int *)(lVar1 + 0x1d8));
        }
      }
    }
    *(uint *)(param_1 + 8) = uVar5;
    return;
  }
  local_res10[0] = 0x8007000e;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_res10,(ThrowInfo *)&DAT_1461db398);
}



// FUNCTION 141a5f4e0 FUN_141a5f4e0 body=225 status=ok
// SIG undefined FUN_141a5f4e0(void)

void FUN_141a5f4e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar3 = (undefined8 *)*param_1;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar2 < param_2) {
    if (iVar4 != 0) {
      do {
        *puVar3 = &PTR_FUN_144da6378;
        if (puVar3[1] != 0) {
          LOCK();
          piVar1 = (int *)(puVar3[1] + 8);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (puVar3[1] != 0)) {
            FUN_141a4ed50(puVar3[1],1);
          }
        }
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar2 != param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = &PTR_FUN_144da6378;
      if (puVar3[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[1] + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar3[1] != 0)) {
          FUN_141a4ed50(puVar3[1],1);
        }
      }
      puVar3 = puVar3 + 2;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141a5f5d0 FUN_141a5f5d0 body=257 status=ok
// SIG undefined FUN_141a5f5d0(void)

void FUN_141a5f5d0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x408);
  if (uVar1 < 0x41) {
    uVar2 = 0x40;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x40c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x40c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x400);
  if (uVar2 < 0x41) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x400);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x400) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar5;
  return;
}



// FUNCTION 141a5f6e0 FUN_141a5f6e0 body=233 status=ok
// SIG undefined FUN_141a5f6e0(void)

void FUN_141a5f6e0(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong *plVar4;
  
  if ((*(char *)(param_1 + 0x68) != '\0') && (0 < *param_2)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar4 = *(longlong **)(param_1 + 0x80);
    plVar1 = plVar4 + *(int *)(param_1 + 0x88);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if ((((*(char *)(lVar2 + 0x78) != '\0') && (*(char *)(lVar2 + 0x10c) == '\0')) &&
          (0 < *param_2)) &&
         ((longlong)
          (DAT_1469fce90 + DAT_1469fce98 + DAT_1469fcea0 + (ulonglong)*(uint *)(lVar2 + 0x60) +
          DAT_1469fce80) < DAT_1469fce78)) {
        FUN_141a5e9a0(lVar2);
        *param_2 = *param_2 - (ulonglong)*(uint *)(lVar2 + 0x60);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141a5f7d0 FUN_141a5f7d0 body=92 status=ok
// SIG undefined FUN_141a5f7d0(void)

void FUN_141a5f7d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_2 + 0x20) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x738) + 0x30);
  iVar1 = (int)param_1[4];
  *(int *)(param_1 + 4) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar1);
  }
  *(longlong *)(param_1[3] + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 141a5f830 FUN_141a5f830 body=67 status=ok
// SIG undefined FUN_141a5f830(void)

undefined1 FUN_141a5f830(void)

{
  LowLevelFatalErrorHandler("Unknown",0x454,L"Global Descriptor heaps can\'t roll over!");
  FDebug::AssertFailed(&DAT_144da21cd,"Unknown",0x454,L"Global Descriptor heaps can\'t roll over!");
  return 0;
}



// FUNCTION 141a5f880 FUN_141a5f880 body=457 status=ok
// SIG undefined FUN_141a5f880(void)

ulonglong FUN_141a5f880(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  lVar6 = param_1 + 0x90;
  FUN_141a4e610(lVar6,param_1 + 0x18);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  puVar5 = (undefined8 *)operator_new(0x30);
  lVar7 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = &PTR_FUN_144da6378;
    lVar1 = *(longlong *)(param_1 + 0x98);
    puVar5[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar5[3] = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined1 *)((longlong)puVar5 + 0x2c) = *(undefined1 *)(param_1 + 0xb4);
    puVar2 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    *puVar2 = puVar5;
  }
  if (**(longlong **)(param_1 + 0x78) == 0) {
LAB_141a5f9cb:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    plVar9 = (longlong *)puVar5[10];
    if (plVar9 == (longlong *)0x0) {
      lVar6 = operator_new(0xb0);
      if (lVar6 != 0) {
        lVar7 = FD3D12ThreadLocalOnlineHeap::FD3D12ThreadLocalOnlineHeap(lVar6,*puVar5,puVar5);
      }
      puVar5[10] = lVar7;
      uVar8 = 0;
      if (lVar7 == 0) goto LAB_141a5f9c7;
      FUN_141a56210(lVar7,*(undefined4 *)((longlong)puVar5 + 0x244),0);
      plVar9 = (longlong *)puVar5[10];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,param_1 + 0x18);
    puVar5[8] = puVar5[10];
    uVar8 = FUN_141a5fe20(puVar5);
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x78);
    FUN_141a4e6a0(lVar6,lVar1 + 8);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar1 + 0x28);
    *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(lVar1 + 0x2c);
    if ((*(char *)(param_1 + 0xb4) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      cVar3 = FUN_141a576f0(*(longlong *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
      if (cVar3 == '\0') goto LAB_141a5f9cb;
    }
    FUN_141a53ec0(param_1 + 0x70,lVar6);
    lVar6 = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(ulonglong *)(param_1 + 0x30) =
         (ulonglong)(uint)(*(int *)(lVar6 + 0x28) * *(int *)(param_1 + 0xa8)) +
         *(longlong *)(lVar6 + 0x30);
    uVar4 = *(int *)(lVar6 + 0x28) * *(int *)(param_1 + 0xa8);
    uVar8 = (ulonglong)uVar4;
    *(ulonglong *)(param_1 + 0x38) = (ulonglong)uVar4 + *(longlong *)(lVar6 + 0x38);
LAB_141a5f9c7:
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 141a5fa50 FUN_141a5fa50 body=916 status=ok
// SIG undefined FUN_141a5fa50(void)

void FUN_141a5fa50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined **local_50;
  longlong local_48;
  undefined8 uStack_40;
  
  uVar9 = 0;
  if (param_1 + 0x88 != param_1 + 0x18) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar7 == 1) && (*(longlong *)(param_1 + 0x90) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 0x90),1);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 0x90) = lVar2;
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x40);
  }
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  puVar8 = (undefined8 *)operator_new(0x28);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    plVar10 = *(longlong **)(param_1 + 0x80);
    puVar8[1] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    puVar8[2] = &PTR_FUN_144da6378;
    lVar2 = *(longlong *)(param_1 + 0x90);
    puVar8[3] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar8[4] = *(undefined8 *)(param_1 + 0x98);
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    *(undefined8 **)(param_1 + 0xa0) = puVar8;
    *puVar3 = puVar8;
  }
  if (**(longlong **)(param_1 + 0xa8) != 0) {
    lVar2 = **(longlong **)(param_1 + 0xa8);
    plVar10 = *(longlong **)(param_1 + 0x80);
    plVar11 = *(longlong **)(lVar2 + 8);
    *(longlong **)(param_1 + 0x80) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    FUN_141a4e6a0(param_1 + 0x88,lVar2 + 0x10);
    if ((*(longlong *)(param_1 + 0x90) == 0) ||
       (cVar6 = FUN_141a576f0(*(longlong *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98)),
       cVar6 != '\0')) {
      lVar2 = **(longlong **)(param_1 + 0xa8);
      if (lVar2 != 0) {
        plVar10 = *(longlong **)(lVar2 + 8);
        plVar11 = *(longlong **)(param_1 + 0x80);
        *(longlong **)(param_1 + 0x80) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        FUN_141a4e6a0(param_1 + 0x88,lVar2 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0xa8);
        *(longlong *)(param_1 + 0xa8) = lVar2;
        plVar10 = *(longlong **)(lVar2 + 8);
        local_58 = (longlong *)0x0;
        local_50 = &PTR_FUN_144da6378;
        *(undefined8 *)(lVar2 + 8) = 0;
        local_48 = 0;
        uStack_40 = 0;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        FUN_141a4e6a0(lVar2 + 0x10,&local_50);
        if (local_48 != 0) {
          LOCK();
          piVar1 = (int *)(local_48 + 8);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FUN_141a4ed50(local_48,1);
          }
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        if (lVar4 != 0) {
          *(undefined ***)(lVar4 + 0x10) = &PTR_FUN_144da6378;
          if (*(longlong *)(lVar4 + 0x18) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 8);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (*(longlong *)(lVar4 + 0x18) != 0)) {
              FUN_141a4ed50(*(longlong *)(lVar4 + 0x18),1);
            }
          }
          if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
          }
          FMemory::operator_delete(lVar4,0x28);
        }
      }
      plVar10 = *(longlong **)(param_1 + 0x80);
      plVar11 = *(longlong **)(param_1 + 0x48);
      *(longlong **)(param_1 + 0x48) = plVar10;
      goto LAB_141a5fd7d;
    }
  }
  plVar10 = (longlong *)(param_1 + 0x48);
  plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18);
  plVar5 = (longlong *)*plVar10;
  *plVar10 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar7 = (**(code **)(*plVar11 + 0x70))(plVar11,param_1 + 0x50,&DAT_144da63c8,plVar10);
  if (iVar7 < 0) {
    local_68 = 0;
    local_60 = 0;
    FUN_141a94000(iVar7,
                  "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap.GetInitReference()))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                  ,0x371,0,&local_68);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)*plVar10);
  plVar10 = (longlong *)*plVar10;
  plVar11 = *(longlong **)(param_1 + 0x80);
  *(longlong **)(param_1 + 0x80) = plVar10;
LAB_141a5fd7d:
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  plVar10 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10,local_res10);
  *(undefined8 *)(param_1 + 0x30) = *puVar8;
  plVar10 = *(longlong **)(param_1 + 0x48);
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,local_res18);
  *(undefined8 *)(param_1 + 0x38) = *puVar8;
  FUN_141a5fe20(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141a5fe20 FUN_141a5fe20 body=239 status=ok
// SIG undefined FUN_141a5fe20(void)

ulonglong FUN_141a5fe20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_18;
  longlong local_10;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x468) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  bVar6 = *(longlong *)(param_1 + 0x30) != lVar1;
  if (bVar6) {
    FUN_141a70820(*(longlong *)(param_1 + 8) + 0x4e0);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
  if (*(longlong *)(param_1 + 0x38) == lVar2) {
    if (!bVar6) goto LAB_141a5fef6;
  }
  else {
    bVar6 = true;
    FUN_141a70600();
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1d8)) {
      lVar5 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined1 *)(lVar5 + *(longlong *)(param_1 + 0x1d0)) = 0;
        lVar5 = lVar5 + 0x30;
      } while (iVar4 < *(int *)(param_1 + 0x1d8));
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x468) + 0x28);
  local_18 = lVar1;
  local_10 = lVar2;
  (**(code **)(*plVar3 + 0xe0))(plVar3,2,&local_18);
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(longlong *)(param_1 + 0x38) = lVar2;
LAB_141a5fef6:
  return (ulonglong)bVar6;
}



// FUNCTION 141a5ff10 FUN_141a5ff10 body=25 status=ok
// SIG undefined FUN_141a5ff10(void)

void FUN_141a5ff10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a5ff22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x468) + 0x28) + 0x158))()
  ;
  return;
}



// FUNCTION 141a5ff30 FUN_141a5ff30 body=407 status=ok
// SIG undefined FUN_141a5ff30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5ff30(longlong param_1,longlong *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98 [2];
  undefined8 local_88 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar7 = lVar2 + 0x460;
  if (param_3 != 0) {
    lVar9 = (longlong)local_88 - (longlong)param_2;
    uVar8 = (ulonglong)param_3;
    do {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x44);
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x10);
        if (iVar1 == 4) {
LAB_141a5ffac:
          FUN_141a60fb0(lVar7,uVar6,4,*(undefined4 *)(lVar3 + 0x48));
        }
        else {
          if (iVar1 == 5) {
            FUN_141a60ce0(lVar7,uVar6,4,lVar3 + 0x30);
            uVar6 = *(undefined8 *)(*param_2 + 0x10);
            goto LAB_141a5fff0;
          }
          if ((iVar1 == 6) || (iVar1 == 8)) goto LAB_141a5ffac;
        }
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
      }
LAB_141a5fff0:
      *(undefined8 *)(lVar9 + (longlong)param_2) = uVar6;
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (param_4 == 0) {
    local_a8 = (undefined8 *)0x0;
  }
  else {
    if ((*(char *)(param_4 + 0x71) == '\0') || ((~(byte)(*(uint *)(param_4 + 0x48) >> 1) & 1) == 0))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar6 = *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x10);
    if ((~(byte)*(uint *)(param_4 + 0x48) & 1) != 0) {
      FUN_141a60ce0(lVar7,uVar6,0x10,param_4 + 0x72);
    }
    if (bVar5) {
      FUN_141a60ce0(lVar7,uVar6,0x10,param_4 + 0x82);
    }
    local_98[0] = *(undefined8 *)(param_4 + 0x10);
    local_a8 = local_98;
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x170))(plVar4,(ulonglong)param_3,local_88,0);
  return;
}



// FUNCTION 141a600d0 FUN_141a600d0 body=326 status=ok
// SIG undefined FUN_141a600d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a600d0(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90 [11];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  param_3 = param_3 + -1;
  lVar4 = (longlong)param_3;
  if (-1 < param_3) {
    do {
      if (param_2[lVar4] != 0) {
        uVar1 = param_3 + 1;
        if (uVar1 == 0) {
          return;
        }
        _guard_xfg_dispatch_icall_nop(local_98,0,0x60);
        lVar4 = *(longlong *)(param_1 + 8);
        if (uVar1 != 0) {
          puVar6 = local_90;
          uVar7 = (ulonglong)uVar1;
          do {
            lVar2 = *param_2;
            uVar5 = 0;
            if (lVar2 != 0) {
              uVar5 = *(undefined8 *)(lVar2 + 0xd0);
            }
            puVar6[-1] = uVar5;
            puVar6[1] = 0;
            *puVar6 = 0xffffffffffffffff;
            if (lVar2 != 0) {
              FUN_141a60fb0(lVar4 + 0x460,lVar2,0x100,0xffffffff);
            }
            puVar6 = puVar6 + 3;
            param_2 = param_2 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x468) + 0x28);
        (**(code **)(*plVar3 + 0x168))(plVar3,0,uVar1,local_98);
        return;
      }
      param_3 = param_3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 141a60220 FUN_141a60220 body=44 status=ok
// SIG undefined FUN_141a60220(void)

void FUN_141a60220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x300) + 1;
  if (iVar2 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x468) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000141a60244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x160))(plVar1,0,iVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 141a60250 SetWithCurrentPriority body=115 status=ok
// SIG undefined SetWithCurrentPriority(void)

void IConsoleVariable::SetWithCurrentPriority(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*param_1 + 0x60))(param_1,puVar2,uVar1 & 0xff000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a602d0 FUN_141a602d0 body=1464 status=ok
// SIG undefined FUN_141a602d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a602d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  HRESULT HVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  IID local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_141a57480();
  FUN_141a57180(param_1 + 0x6c0);
  bVar12 = false;
  HVar5 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_40);
  if (-1 < HVar5) {
    local_48 = (longlong *)0x0;
    iVar6 = (**(code **)*plVar1)(plVar1,&local_40,&local_48);
    bVar12 = -1 < iVar6;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (((DAT_1469fce70 != 0) && (DAT_1464c1140 != 0)) || (bVar12)) {
    (**(code **)(*DAT_146ab6358 + 0x6e0))(DAT_146ab6358,1);
  }
  *(longlong **)(param_1 + 200) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(longlong **)(param_1 + 0x140) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x138) = uVar7;
  *(longlong **)(param_1 + 0x1b8) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x1a0));
  *(undefined4 *)(param_1 + 0x1b0) = uVar7;
  *(longlong **)(param_1 + 0x230) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x228) = uVar7;
  *(longlong **)(param_1 + 0x2a8) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x290));
  *(undefined4 *)(param_1 + 0x2a0) = uVar7;
  FUN_141a55f30(param_1 + 0x308,0x800,1);
  FUN_141a55f30(param_1 + 0x3f0,DAT_1464c1194,0);
  FUN_141a74910(param_1 + 0x4d8);
  FUN_141a74910(param_1 + 0x558);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x30),L"3D Queue",0,0);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x38),L"Copy Queue",0,0);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x40),L"Async Compute Queue",0,0);
  local_40.Data1 = 2;
  local_40.Data2 = 0;
  local_40.Data3 = 0;
  local_40.Data4[0] = '\0';
  local_40.Data4[1] = '\0';
  local_40.Data4[2] = '\0';
  local_40.Data4[3] = '\0';
  local_40.Data4[4] = '\x01';
  local_40.Data4[5] = '\0';
  local_40.Data4[6] = '\0';
  local_40.Data4[7] = '\0';
  *(undefined4 *)(param_1 + 0x6a8) = 2;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x6b4) = 1;
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  FUN_141a53240(param_1);
  *(undefined8 *)(param_1 + 0x684) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x694) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  if (DAT_1469fcf68 != 0) {
    uVar9 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar9,L"dx12PSOCache");
    uVar9 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar9,L"nodx12PSOCache");
    if (cVar3 == '\0') {
      if (cVar4 == '\0') goto LAB_141a60546;
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    IConsoleVariable::SetWithCurrentPriority(DAT_1469fcf68,uVar9);
  }
LAB_141a60546:
  lVar2 = DAT_1469fcf70;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    lVar10 = 4;
    if (DVar8 != DAT_1468c21c0) goto LAB_141a60581;
  }
  lVar10 = 0;
LAB_141a60581:
  if (0 < *(int *)(lVar10 + lVar2)) {
    piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar11 < DAT_1469fd018) && (_Init_thread_header(&DAT_1469fd018), DAT_1469fd018 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd010 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.Enabled");
      _Init_thread_footer(&DAT_1469fd018);
    }
    if ((*piVar11 < DAT_1469fd028) && (_Init_thread_header(&DAT_1469fd028), DAT_1469fd028 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd020 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.LogPSO");
      _Init_thread_footer(&DAT_1469fd028);
    }
    if ((*piVar11 < DAT_1469fd038) && (_Init_thread_header(&DAT_1469fd038), DAT_1469fd038 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd030 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.ReportPSO");
      _Init_thread_footer(&DAT_1469fd038);
    }
    if ((*piVar11 < DAT_1469fd048) && (_Init_thread_header(&DAT_1469fd048), DAT_1469fd048 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd040 =
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveUserCache");
      _Init_thread_footer(&DAT_1469fd048);
    }
    if ((*piVar11 < DAT_1469fd058) && (_Init_thread_header(&DAT_1469fd058), DAT_1469fd058 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd050 =
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.ShaderPipelineCache.PrintNewPSODescriptors");
      _Init_thread_footer(&DAT_1469fd058);
    }
    if (DAT_1469fd010 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd010,1);
    }
    if (DAT_1469fd030 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd030,1);
    }
    if (DAT_1469fd040 != 0) {
      if ((*piVar11 < DAT_1469fd060) && (_Init_thread_header(&DAT_1469fd060), DAT_1469fd060 == -1))
      {
        uVar9 = FCommandLine::Get();
        DAT_1469fd05c = FParse::Param(uVar9,L"AllowDX12UserPSOCache");
        _Init_thread_footer(&DAT_1469fd060);
      }
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd040,DAT_1469fd05c != '\0');
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd020,DAT_1469fd05c != '\0');
    }
    if (DAT_1469fd050 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd050,0);
    }
  }
  return;
}



// FUNCTION 141a60890 FUN_141a60890 body=415 status=ok
// SIG undefined FUN_141a60890(void)

void FUN_141a60890(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar5 = (longlong *)0x0;
  local_18 = &DAT_1469f6750;
  local_10 = 0;
  plVar3 = (longlong *)(lVar1 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res10,&local_18);
  plVar4 = plVar5;
  if (local_res10[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar3);
  }
  plVar2 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (*(char *)(*(longlong *)(*plVar2 + 0x48) + 0x28) == '\0') {
    FUN_1419f3850();
  }
  local_18 = &DAT_1469f6750;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res10,&local_18);
  plVar4 = plVar5;
  if (local_res10[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar3);
  }
  plVar2 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = plVar5;
  }
  if (*(char *)(*(longlong *)(*plVar2 + 0x48) + 0x28) == '\0') {
    FUN_1419f3850();
  }
  local_10 = 0;
  if ((DAT_146ab62cc & 0xfffffffb) == 0) {
    local_18 = &DAT_1469f87d0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res10,&local_18);
    plVar4 = plVar5;
    if (local_res10[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar3);
    }
    plVar2 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar2 = plVar5;
    }
    if (*(char *)(*(longlong *)(*plVar2 + 0x48) + 0x28) == '\0') {
      FUN_1419f3850();
    }
    local_18 = &DAT_1469f87d0;
  }
  else {
    local_18 = &DAT_1469f8d10;
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res10,&local_18);
  plVar4 = plVar5;
  if (local_res10[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar3);
  }
  plVar3 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar5;
  }
  if (*(char *)(*(longlong *)(*plVar3 + 0x48) + 0x28) == '\0') {
    FUN_1419f3850();
  }
  return;
}



// FUNCTION 141a60a30 FUN_141a60a30 body=220 status=ok
// SIG undefined FUN_141a60a30(void)

void FUN_141a60a30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x738) + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x738) + 0x30) = lVar1 + 1;
  if (DAT_146ab6383 != '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x738);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144da7180;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[3] = uVar2;
    puVar4[4] = lVar1;
    return;
  }
  FUN_141a7d140(*(undefined8 *)(param_1 + 0x738),0,lVar1);
  return;
}



// FUNCTION 141a60b10 FUN_141a60b10 body=420 status=ok
// SIG undefined FUN_141a60b10(void)

void FUN_141a60b10(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    lVar5 = *(longlong *)(param_1[1] + 0xd50);
    lVar6 = **(longlong **)(lVar5 + 0x5d8);
    FUN_141a52670(*(undefined8 *)(lVar6 + 0x468));
    iVar1 = *(int *)(lVar5 + 0x28);
    *(int *)(lVar5 + 0x28) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x2c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x20,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar5 + 0x20));
    *puVar4 = &PTR_FUN_144da6378;
    lVar5 = *(longlong *)(lVar6 + 0x468);
    puVar4[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  lVar5 = param_1[4];
  lVar6 = (longlong)*(int *)(param_1 + 5) * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    lVar2 = *(longlong *)(param_1[1] + 0xd50);
    iVar1 = *(int *)(lVar2 + 0x28);
    *(int *)(lVar2 + 0x28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x2c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x20,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x20));
    *puVar4 = &PTR_FUN_144da6378;
    lVar2 = *(longlong *)(lVar5 + 8);
    puVar4[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141a5f4e0(param_1 + 4,0);
  lVar5 = *(longlong *)(param_1[1] + 0xd50);
  if (param_2 == param_3 + -1) {
    if (((DAT_1464c1130 == 1) ||
        (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0xd8),
        cVar3 = FUN_141a75550(lVar6,*(undefined8 *)(lVar6 + 0x38)), cVar3 != '\0')) &&
       (0 < *(int *)(lVar5 + 0x28))) {
      (**(code **)(**(longlong **)(lVar5 + 0x30) + 8))(*(longlong **)(lVar5 + 0x30),lVar5 + 0x20,0);
      FUN_141a5f4e0(lVar5 + 0x20,0);
    }
    FUN_141a58a90(**(undefined8 **)(lVar5 + 0x5d8));
  }
                    /* WARNING: Could not recover jumptable at 0x000141a60cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 141a60cc0 FUN_141a60cc0 body=32 status=ok
// SIG undefined FUN_141a60cc0(void)

ulonglong FUN_141a60cc0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x240) != '\0') {
    *(undefined1 *)(param_1 + 0x240) = 0;
    *(longlong *)(param_1 + 0x48) = param_1 + 0x60;
    uVar1 = FUN_141a5fe20();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141a60ce0 FUN_141a60ce0 body=714 status=ok
// SIG undefined FUN_141a60ce0(void)

void FUN_141a60ce0(longlong param_1,undefined8 param_2,uint param_3,ushort *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  ushort uVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar10 = param_3 & 0xffffff5f;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x20) != 2) {
    uVar10 = param_3;
  }
  if (((((char)param_4[2] == '\0') && (*param_4 == 0)) && ((char)param_4[3] == '\0')) &&
     ((uint)*(byte *)((longlong)param_4 + 7) * (uint)*(byte *)((longlong)param_4 + 5) *
      (uint)param_4[1] == (uint)(byte)param_4[6] * (uint)param_4[5] * (uint)(byte)param_4[4])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar7 = FUN_141a55b20(param_1,param_2);
  if ((bVar3) && (cVar4 = CResourceState::AreAllSubresourcesSame(uVar7), cVar4 != '\0')) {
    uVar5 = CResourceState::GetSubresourceState(uVar7,0xffffffff);
    if (uVar5 == 0xffffffff) {
      FD3D12CommandListHandle::AddPendingResourceBarrier(param_1,param_2,param_3,0xffffffff);
    }
    else {
      if ((uVar5 == 0x10) && (uVar10 == 0x20)) {
        return;
      }
      if (uVar5 == uVar10) {
        return;
      }
      if (((uVar5 | uVar10) == uVar5) && (uVar10 != 0)) {
        return;
      }
      FUN_141a4f5b0(param_1,param_2,uVar5,uVar10,0xffffffff);
      param_3 = uVar10;
    }
LAB_141a60f93:
    CResourceState::SetResourceState(uVar7,param_3);
    return;
  }
  bVar9 = (byte)param_4[3];
  do {
    uVar11 = *param_4;
    do {
      if ((uVar11 == *param_4) && (bVar9 == *(byte *)((longlong)param_4 + 7))) {
        if (!bVar3) {
          return;
        }
        goto LAB_141a60f93;
      }
      iVar8 = ((uint)param_4[5] * (uint)bVar9 + (uint)uVar11) * (uint)(byte)param_4[4];
      uVar5 = (uint)(byte)param_4[2] + iVar8;
      if (uVar5 < (uint)*(byte *)((longlong)param_4 + 5) + iVar8) {
        do {
          uVar6 = CResourceState::GetSubresourceState(uVar7,uVar5);
          if (uVar6 == 0xffffffff) {
            lVar2 = *(longlong *)(param_1 + 8);
            iVar8 = *(int *)(lVar2 + 0xa0);
            *(int *)(lVar2 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar2 + 0xa4) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x98,iVar8);
            }
            local_58 = (undefined4)param_2;
            uStack_54 = (undefined4)((ulonglong)param_2 >> 0x20);
            puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar8 * 0x10);
            *puVar1 = local_58;
            puVar1[1] = uStack_54;
            puVar1[2] = param_3;
            puVar1[3] = uVar5;
            CResourceState::SetSubresourceState(uVar7,uVar5,param_3);
          }
          else if ((uVar6 == 0x10) && (uVar10 == 0x20)) {
LAB_141a60f00:
            bVar3 = false;
          }
          else if (uVar6 != uVar10) {
            if (((uVar6 | uVar10) == uVar6) && (uVar10 != 0)) goto LAB_141a60f00;
            FUN_141a4f5b0(param_1,param_2,uVar6,uVar10,uVar5);
            CResourceState::SetSubresourceState(uVar7,uVar5,uVar10);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < ((uint)param_4[5] * (uint)bVar9 + (uint)uVar11) * (uint)(byte)param_4[4] +
                         (uint)*(byte *)((longlong)param_4 + 5));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_4[1]);
    bVar9 = bVar9 + 1;
  } while( true );
}



// FUNCTION 141a60fb0 FUN_141a60fb0 body=411 status=ok
// SIG undefined FUN_141a60fb0(void)

void FUN_141a60fb0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar9 = param_3 & 0xffffff5f;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x20) != 2) {
    uVar9 = param_3;
  }
  uVar7 = FUN_141a55b20();
  if ((param_4 == -1) && (cVar5 = CResourceState::AreAllSubresourcesSame(uVar7), cVar5 == '\0')) {
    bVar2 = *(byte *)(param_2 + 0x7e);
    uVar8 = 0;
    if (bVar2 != 0) {
      do {
        uVar6 = CResourceState::GetSubresourceState(uVar7,uVar8);
        if (uVar6 == 0xffffffff) {
          lVar4 = *(longlong *)(param_1 + 8);
          iVar3 = *(int *)(lVar4 + 0xa0);
          *(int *)(lVar4 + 0xa0) = iVar3 + 1;
          if (*(int *)(lVar4 + 0xa4) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x98,iVar3);
          }
          local_38 = (undefined4)param_2;
          uStack_34 = (undefined4)((ulonglong)param_2 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar3 * 0x10);
          *puVar1 = local_38;
          puVar1[1] = uStack_34;
          puVar1[2] = param_3;
          puVar1[3] = uVar8;
          uVar6 = param_3;
LAB_141a610a3:
          CResourceState::SetSubresourceState(uVar7,uVar8,uVar6);
        }
        else if (uVar6 != uVar9) {
          FUN_141a4f5b0(param_1,param_2,uVar6,uVar9,uVar8);
          uVar6 = uVar9;
          goto LAB_141a610a3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar2);
    }
    CResourceState::SetResourceState(uVar7,param_3);
  }
  else {
    uVar8 = CResourceState::GetSubresourceState(uVar7,param_4);
    if (uVar8 == 0xffffffff) {
      FD3D12CommandListHandle::AddPendingResourceBarrier(param_1,param_2,param_3,param_4);
      uVar9 = param_3;
    }
    else {
      if ((uVar8 == 0x10) && (uVar9 == 0x20)) {
        return;
      }
      if (uVar8 == uVar9) {
        return;
      }
      if (((uVar8 | uVar9) == uVar8) && (uVar9 != 0)) {
        return;
      }
      FUN_141a4f5b0(param_1,param_2,uVar8,uVar9,param_4);
    }
    CResourceState::SetSubresourceState(uVar7,param_4,uVar9);
  }
  return;
}



// FUNCTION 141a61150 FUN_141a61150 body=640 status=ok
// SIG undefined FUN_141a61150(void)

undefined8 FUN_141a61150(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong lVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  uVar14 = (ulonglong)param_2;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((param_3 != 0) && (*(uint *)(param_1 + 100) % param_3 != 0)) {
    param_2 = param_3 + param_2;
  }
  uVar9 = *(uint *)(param_1 + 100);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  uVar6 = 0;
  iVar13 = *(int *)(param_1 + 0xb0);
  uVar9 = ((uVar9 - 1) + param_2 & -uVar9) / uVar9;
  lVar8 = 0xffffffff;
  iVar7 = -1;
  iVar5 = 0;
  uVar12 = uVar6;
  lVar1 = lVar2;
  while (lVar1 != lVar2 + (longlong)iVar13 * 8) {
    uVar11 = *(uint *)(lVar2 + 4 + uVar6);
    if (uVar9 <= uVar11) {
      if (((uint)uVar12 == 0) || (uVar11 < (uint)uVar12)) {
        uVar12 = (ulonglong)uVar11;
        lVar8 = (longlong)uVar6 >> 3;
      }
      iVar7 = (int)lVar8;
      if (uVar11 == uVar9) break;
    }
    iVar7 = (int)lVar8;
    uVar6 = uVar6 + 8;
    lVar1 = uVar6 + lVar2;
  }
  local_res8 = 0;
  if ((iVar7 < 0) || (iVar13 <= iVar7)) {
    local_res8._4_4_ = 0;
    local_res8._0_4_ = 0;
    iVar15 = (int)local_res8;
    uVar9 = local_res8._4_4_;
  }
  else {
    lVar1 = (longlong)iVar7 * 8;
    uVar11 = *(uint *)(lVar1 + 4 + lVar2);
    iVar15 = *(int *)(lVar1 + lVar2);
    if (uVar11 == uVar9) {
      iVar4 = (iVar13 - iVar7) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + lVar2),(void *)(lVar2 + (longlong)(iVar7 + 1) * 8),
                   (longlong)iVar4 << 3);
        iVar13 = *(int *)(param_1 + 0xb0);
      }
      *(int *)(param_1 + 0xb0) = iVar13 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    }
    else {
      *(uint *)(lVar1 + lVar2) = iVar15 + uVar9;
      *(uint *)(lVar1 + 4 + lVar2) = uVar11 - uVar9;
    }
  }
  LOCK();
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) - uVar9;
  UNLOCK();
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  else {
    iVar13 = *(int *)(param_1 + 100);
    uVar11 = iVar13 * iVar15;
    if ((param_3 != 0) && (uVar11 % param_3 != 0)) {
      iVar5 = (int)((((ulonglong)uVar11 - 1) + (ulonglong)param_3) / (ulonglong)param_3) * param_3 -
              uVar11;
    }
    *(int *)(param_4 + 0x2c) = iVar15;
    uVar6 = (ulonglong)(iVar5 + uVar11);
    *(uint *)(param_4 + 0x30) = uVar9;
    *(undefined4 *)(param_4 + 8) = 2;
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_1 + 0x10);
    *(ulonglong *)(param_4 + 0x60) = uVar14;
    *(ulonglong *)(param_4 + 0x68) = uVar14;
    *(ulonglong *)(param_4 + 0x70) = (ulonglong)(iVar13 * uVar9);
    *(longlong *)(param_4 + 0x18) = param_1;
    *(ulonglong *)(param_4 + 0x48) = uVar6;
    if (*(int *)(param_1 + 0x74) == 2) {
      FStringTable::SetOwnerAsset(param_4,*(undefined8 *)(param_1 + 0x88));
      *(ulonglong *)(param_4 + 0x40) = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0xd0) + uVar6;
      if (*(int *)(param_1 + 0x28) == 2) {
        *(ulonglong *)(param_4 + 0x38) = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0xd8) + uVar6
        ;
      }
    }
    FUN_141a7d380(param_4);
    if ((*(char *)(param_1 + 0x78) != '\0') &&
       (local_res8 = *(longlong *)(param_4 + 0x20), local_res8 != 0)) {
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(param_1 + 0xb8,local_res10,&local_res8,0);
    }
    uVar10 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar10;
}



// FUNCTION 141a613d0 FUN_141a613d0 body=722 status=ok
// SIG undefined FUN_141a613d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_141a613d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  BOOL BVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined1 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 local_470;
  int iStack_468;
  undefined4 uStack_464;
  undefined8 local_460 [128];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  local_484 = param_2;
  local_480 = param_3;
  local_478 = param_4;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  puVar9 = (undefined8 *)0x0;
  puVar1 = (ulonglong *)(param_1 + 0x80);
  local_58._0_4_ = 0;
  plVar14 = (longlong *)*puVar1;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  puVar11 = (undefined8 *)((longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff);
  if (plVar14 + *(int *)(param_1 + 0x88) < plVar14) {
    puVar11 = puVar9;
  }
  puVar12 = puVar9;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      uVar4 = local_58;
      local_470 = *plVar14;
      LOCK();
      iStack_468 = *(int *)(local_470 + 0x108);
      if (iStack_468 == 0) {
        *(int *)(local_470 + 0x108) = 0;
        iStack_468 = 0;
      }
      UNLOCK();
      lVar13 = (longlong)(int)local_58;
      uStack_464 = CONCAT31(uStack_464._1_3_,*(undefined1 *)(local_470 + 0x10c));
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (local_58._4_4_ < iVar8) {
        FUN_141a5f5d0(local_460,uVar4 & 0xffffffff);
      }
      puVar10 = local_460;
      if (local_60 != (undefined8 *)0x0) {
        puVar10 = local_60;
      }
      plVar14 = plVar14 + 1;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      puVar10 = puVar10 + lVar13 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_470;
      *(undefined4 *)((longlong)puVar10 + 4) = local_470._4_4_;
      *(int *)(puVar10 + 1) = iStack_468;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_464;
    } while (puVar12 != puVar11);
  }
  puVar11 = local_460;
  if (local_60 != (undefined8 *)0x0) {
    puVar11 = puVar9;
  }
  FUN_141a4a810((ulonglong)puVar11 | (ulonglong)local_60,
                (longlong)(int)local_58 * 0x10 + ((ulonglong)puVar11 | (ulonglong)local_60),
                (longlong)(int)local_58,local_488);
  uVar3 = local_480;
  uVar2 = local_484;
  puVar11 = local_460;
  if (local_60 != (undefined8 *)0x0) {
    puVar11 = local_60;
  }
  puVar12 = puVar11 + (longlong)(int)local_58 * 2;
  do {
    if (puVar11 == puVar12) {
      lVar13 = operator_new(0x110);
      if (lVar13 != 0) {
        local_490 = *(undefined4 *)(param_1 + 0x74);
        local_4b8 = *(undefined4 *)(param_1 + 0x34);
        local_498 = *(undefined4 *)(param_1 + 0x70);
        local_4a0 = *(undefined1 *)(param_1 + 0x68);
        local_4a8 = *(undefined4 *)(param_1 + 0x10);
        local_4b0 = *(undefined4 *)(param_1 + 0x30);
        local_4c0 = *(undefined4 *)(param_1 + 0x6c);
        local_4c8 = *(undefined4 *)(param_1 + 100);
        local_4d0 = *(undefined4 *)(param_1 + 0x28);
        local_4d8 = *(undefined4 *)(param_1 + 0x60);
        puVar9 = (undefined8 *)
                 FUN_141a4b090(lVar13,param_1,*(undefined8 *)(param_1 + 8),param_1 + 0x18);
      }
      FUN_141a56370(puVar9);
      iVar8 = *(int *)(param_1 + 0x88);
      *(int *)(param_1 + 0x88) = iVar8 + 1;
      if (*(int *)(param_1 + 0x8c) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar8);
      }
      *(undefined8 **)(*puVar1 + (longlong)iVar8 * 8) = puVar9;
      uVar6 = FUN_141a61150(puVar9,uVar2,uVar3,local_478);
LAB_141a61659:
      if (local_60 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      return uVar6;
    }
    cVar5 = FUN_141a61150(*puVar11,uVar2,uVar3,local_478);
    if (cVar5 != '\0') {
      uVar6 = 1;
      goto LAB_141a61659;
    }
    puVar11 = puVar11 + 2;
  } while( true );
}



// FUNCTION 141a616b0 FUN_141a616b0 body=713 status=ok
// SIG undefined FUN_141a616b0(void)

void FUN_141a616b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  longlong local_58 [3];
  
  if ((*(int *)(DAT_1469fcfb8 + 4) == 0) && (0 < *(int *)(param_1 + 0x6e0))) {
    local_res8[0] = 0x7fffffff;
    FUN_141a58140(param_1 + 0x6c0,local_res8,param_1 + 0x760,param_1 + 0x710);
  }
  lVar2 = FUN_141a50fc0(param_1 + 0x6c0);
  if (lVar2 < 1) {
    if ((lVar2 < 0) && (lVar2 = -lVar2, *(int *)(DAT_1469fcfa0 + 4) == 0)) {
      local_res18 = lVar2;
      local_58[0] = lVar2;
      if (*(longlong *)(param_1 + 0x6c8) != 0) {
        FUN_141a5f6e0(*(longlong *)(param_1 + 0x6c8) + 0x10,local_58);
      }
      if (*(longlong *)(param_1 + 0x6d0) != 0) {
        FUN_141a5f6e0(*(longlong *)(param_1 + 0x6d0) + 0x10,local_58);
      }
      if (*(longlong *)(param_1 + 0x6d8) != 0) {
        FUN_141a5f6e0(*(longlong *)(param_1 + 0x6d8) + 0x10,local_58);
      }
      plVar6 = (longlong *)(param_1 + 0x8b8);
      if (plVar6 != (longlong *)(param_1 + 0x938)) {
        do {
          lVar1 = *plVar6;
          if ((lVar1 != 0) && (0 < lVar2)) {
            puVar3 = *(undefined8 **)(lVar1 + 8);
            uVar5 = (longlong)*(int *)(lVar1 + 0x10) & 0x1fffffffffffffff;
            if (puVar3 + *(int *)(lVar1 + 0x10) < puVar3) {
              uVar5 = 0;
            }
            uVar4 = 0;
            if (uVar5 != 0) {
              do {
                if (0 < lVar2) {
                  FUN_141a5f6e0(*puVar3,&local_res18);
                  lVar2 = local_res18;
                }
                puVar3 = puVar3 + 1;
                uVar4 = uVar4 + 1;
              } while (uVar4 != uVar5);
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != (longlong *)(param_1 + 0x938));
      }
      if (0 < *(int *)(param_1 + 0x6e4)) {
        local_res10[0] = 0x7fffffff;
        FUN_141a58140(param_1 + 0x6c0,local_res10,param_1 + 0x800,param_1 + 0x7b0);
      }
    }
  }
  else if (*(int *)(DAT_1469fcf88 + 4) == 0) {
    local_res18 = lVar2;
    local_res20 = lVar2;
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      FUN_141a54a40(*(longlong *)(param_1 + 0x6c8) + 0x10,&local_res20);
    }
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      FUN_141a54a40(*(longlong *)(param_1 + 0x6d0) + 0x10,&local_res20);
    }
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      FUN_141a54a40(*(longlong *)(param_1 + 0x6d8) + 0x10,&local_res20);
    }
    plVar6 = (longlong *)(param_1 + 0x8b8);
    if (plVar6 != (longlong *)(param_1 + 0x938)) {
      do {
        lVar1 = *plVar6;
        if ((lVar1 != 0) && (0 < lVar2)) {
          puVar3 = *(undefined8 **)(lVar1 + 8);
          uVar5 = (longlong)*(int *)(lVar1 + 0x10) & 0x1fffffffffffffff;
          if (puVar3 + *(int *)(lVar1 + 0x10) < puVar3) {
            uVar5 = 0;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            do {
              if (0 < lVar2) {
                FUN_141a54a40(*puVar3,&local_res18);
                lVar2 = local_res18;
              }
              puVar3 = puVar3 + 1;
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar5);
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != (longlong *)(param_1 + 0x938));
    }
  }
  return;
}



// FUNCTION 141a61980 FUN_141a61980 body=783 status=ok
// SIG undefined FUN_141a61980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a61980(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  ushort local_98 [2];
  undefined4 local_94 [5];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50 [2];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar8 = *(longlong *)(param_1 + 0x7e0);
  lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0xd0);
  if (*(char *)(param_1 + 0x7e8) != '\0') {
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
    (**(code **)(*plVar4 + 0xe8))(plVar4,*(undefined8 *)(lVar3 + 8));
    *(undefined1 *)(param_1 + 0x7e8) = 0;
    *(undefined8 *)(param_1 + 0x818) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x1782) = 0xffff;
    *(undefined2 *)(param_1 + 0x1aaa) = 0xffff;
    *(undefined2 *)(param_1 + 0x1472) = 0xffff;
    lVar8 = *(longlong *)(param_1 + 0x7e0);
  }
  cVar5 = *(char *)(param_1 + 0x1db8);
  lVar7 = FUN_141a73380(*(undefined8 *)(lVar8 + 0x20));
  lVar8 = *(longlong *)(param_1 + 0x1db0);
  if (lVar8 == lVar7) {
    if (cVar5 == '\0') goto LAB_141a61a64;
  }
  else {
    *(longlong *)(param_1 + 0x1db0) = lVar7;
    lVar8 = lVar7;
  }
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x468) + 0x28);
  (**(code **)(*plVar4 + 200))(plVar4,lVar8);
  *(undefined1 *)(param_1 + 0x1db8) = 0;
LAB_141a61a64:
  iVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28) + 0x40))();
  if (iVar6 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x328))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x7ec));
  }
  FUN_141a6b320(param_1,lVar3,5);
  local_78 = 0;
  local_80 = 0;
  local_80._4_4_ = 0;
  uVar10 = 0;
  local_50[1] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_40 = 0;
  uVar12 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uVar9 = local_80._4_4_;
  do {
    uVar1 = *(uint *)(param_1 + 0x1e18);
    local_98[0] = (1 << ((byte)uVar1 & 0x1f)) - 1U & *(ushort *)(param_1 + 0x1782);
    uVar11 = 0;
    if ((local_98[0] != 0) && (uVar10 = uVar1, uVar11 = uVar1, *(int *)(param_1 + 0x30) < 3)) {
      uVar10 = (uint)*(byte *)(lVar3 + 0x55);
      uVar11 = (uint)*(byte *)(lVar3 + 0x55);
    }
    local_50[0] = (1L << ((byte)*(uint *)(param_1 + 0x1de8) & 0x3f)) - 1U &
                  *(ulonglong *)(param_1 + 0x818);
    if (local_50[0] != 0) {
      uVar9 = *(uint *)(param_1 + 0x1de8);
      if (*(int *)(param_1 + 0x30) == 1) {
        uVar9 = (uint)*(byte *)(lVar3 + 0x53);
      }
      uVar11 = uVar11 + uVar9;
    }
    local_40 = CONCAT22((1 << ((byte)*(undefined4 *)(param_1 + 0x1e00) & 0x1f)) - 1U &
                        *(ushort *)(param_1 + 0x1472),(undefined2)local_40);
    cVar5 = FUN_141a512b0(*(undefined8 *)(param_1 + 0x1e60),uVar11);
    if ((cVar5 != '\0') ||
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x1e60) + 8))(), cVar5 == '\0')) break;
    uVar11 = 0;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 2);
  local_94[0] = FUN_141a5f440(*(undefined8 *)(param_1 + 0x1e60),uVar11);
  if (local_98[0] != 0) {
    local_a8 = local_94;
    FUN_141a4a030(param_1 + 0x1e20,param_1 + 0x1778,local_98,uVar10);
  }
  if (local_50[0] != 0) {
    local_a8 = local_94;
    FUN_141a48490(param_1 + 0x1e20,param_1 + 0x7f0,local_50,uVar9);
  }
  if (local_40._2_2_ != 0) {
    FUN_141a46db0(param_1 + 0x1e20,param_1 + 0x1468,(longlong)&local_40 + 2);
  }
  lVar2 = *(longlong *)(lVar2 + 0x468);
  if (*(int *)(lVar2 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar2 + 0x28) + 0xd0))
              (*(longlong **)(lVar2 + 0x28),*(int *)(lVar2 + 0x100),*(undefined8 *)(lVar2 + 0xf8));
    *(undefined4 *)(lVar2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 141a61c90 FUN_141a61c90 body=1791 status=ok
// SIG undefined FUN_141a61c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a61c90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_b8;
  ushort local_b4 [2];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50 [2];
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  ushort local_38 [4];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x38);
  lVar4 = 0;
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0xd0);
  }
  local_90 = lVar1;
  if (*(char *)(param_1 + 0x40) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined8 *)(lVar4 + 8));
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x7f0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x7f8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x800) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x808) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x810) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x1780) = 0xffff;
    *(undefined8 *)(param_1 + 0x1778) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x1aa0) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x1aa8) = 0xffff;
    *(undefined8 *)(param_1 + 0x1468) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x1470) = 0xffff;
    lVar6 = *(longlong *)(param_1 + 0x38);
  }
  cVar3 = *(char *)(param_1 + 0x1db8);
  lVar5 = FUN_141a73380(*(undefined8 *)(lVar6 + 0x120));
  lVar6 = *(longlong *)(param_1 + 0x1db0);
  if (lVar6 == lVar5) {
    if (cVar3 == '\0') goto LAB_141a61dce;
  }
  else {
    *(longlong *)(param_1 + 0x1db0) = lVar5;
    lVar6 = lVar5;
  }
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x468) + 0x28);
  (**(code **)(*plVar2 + 200))(plVar2,lVar6);
  *(undefined1 *)(param_1 + 0x1db8) = 0;
LAB_141a61dce:
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_141a60220(param_1 + 0x1e20,param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(longlong *)(param_1 + 0x530) != 0) {
      FUN_141a5ff10(param_1 + 0x1e20,param_1 + 0x520);
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  if (*(char *)(param_1 + 0x23) != '\0') {
    FUN_141a600d0(param_1 + 0x1e20,param_1 + 0x4f0,*(undefined4 *)(param_1 + 0x4e8),param_1 + 0x510)
    ;
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xa8))(plVar2,*(undefined4 *)(param_1 + 0x58),param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  if (*(char *)(param_1 + 0x26) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined4 *)(param_1 + 0x73c),param_1 + 0x63c);
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  if (*(char *)(param_1 + 0x27) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xa0))(plVar2,*(undefined4 *)(param_1 + 0x538));
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined4 *)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    FUN_141a5ff30(param_1 + 0x1e20,param_1 + 0x780,*(undefined4 *)(param_1 + 0x7c0),
                  *(undefined8 *)(param_1 + 0x7c8));
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x318))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 2000),
               *(undefined4 *)(param_1 + 0x7d4));
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 800))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x7d8));
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  FUN_141a6b320(param_1,lVar4,0,5);
  uVar10 = 0;
  local_a0 = param_1 + 0x7f0;
  uVar12 = 0;
  local_50[1] = 0;
  local_80 = 0;
  local_98 = param_1 + 0x1468;
  local_88 = 0;
  local_88._4_4_ = 0;
  local_ac = 0;
  local_38[1] = 0;
  local_78 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uVar8 = local_88._4_4_;
  uVar9 = uVar12;
  do {
    uVar11 = *(uint *)(param_1 + 0x1e10);
    local_b4[0] = (1 << ((byte)uVar11 & 0x1f)) - 1U & *(ushort *)(param_1 + 0x177e);
    uVar7 = 0;
    if ((local_b4[0] != 0) && (uVar10 = uVar11, uVar7 = uVar11, *(int *)(param_1 + 0x30) < 3)) {
      uVar10 = (uint)*(byte *)(lVar4 + 0x45);
      uVar7 = (uint)*(byte *)(lVar4 + 0x45);
    }
    uVar11 = *(uint *)(param_1 + 0x1dd4);
    local_70 = (1L << ((byte)uVar11 & 0x3f)) - 1U & *(ulonglong *)(param_1 + 0x7f0);
    if (local_70 != 0) {
      if (*(int *)(param_1 + 0x30) == 1) {
        uVar11 = (uint)*(byte *)(lVar4 + 0x2b);
      }
      uVar7 = uVar7 + uVar11;
      uVar12 = uVar11;
    }
    local_40 = (1 << ((byte)*(undefined4 *)(param_1 + 0x1dec) & 0x1f)) - 1U &
               *(ushort *)(param_1 + 0x1468);
    local_68 = (1L << ((byte)*(uint *)(param_1 + 0x1dd8) & 0x3f)) - 1U &
               *(ulonglong *)(param_1 + 0x7f8);
    if (local_68 != 0) {
      uVar8 = *(uint *)(param_1 + 0x1dd8);
      if (*(int *)(param_1 + 0x30) == 1) {
        uVar8 = (uint)*(byte *)(lVar4 + 0x33);
      }
      uVar7 = uVar7 + uVar8;
    }
    local_3e = (1 << ((byte)*(undefined4 *)(param_1 + 0x1df0) & 0x1f)) - 1U &
               *(ushort *)(param_1 + 0x146a);
    local_60 = (1L << ((byte)*(uint *)(param_1 + 0x1ddc) & 0x3f)) - 1U &
               *(ulonglong *)(param_1 + 0x800);
    if (local_60 != 0) {
      uVar9 = *(uint *)(param_1 + 0x1ddc);
      if (*(int *)(param_1 + 0x30) == 1) {
        uVar9 = (uint)*(byte *)(lVar4 + 0x3b);
      }
      uVar7 = uVar7 + uVar9;
    }
    local_3c = (1 << ((byte)*(undefined4 *)(param_1 + 0x1df4) & 0x1f)) - 1U &
               *(ushort *)(param_1 + 0x146c);
    local_58 = (1L << ((byte)*(uint *)(param_1 + 0x1de0) & 0x3f)) - 1U &
               *(ulonglong *)(param_1 + 0x808);
    if (local_58 != 0) {
      local_ac = *(uint *)(param_1 + 0x1de0);
      if (*(int *)(param_1 + 0x30) == 1) {
        local_ac = (uint)*(byte *)(lVar4 + 0x43);
      }
      uVar7 = uVar7 + local_ac;
    }
    local_3a = (1 << ((byte)*(undefined4 *)(param_1 + 0x1df8) & 0x1f)) - 1U &
               *(ushort *)(param_1 + 0x146e);
    local_50[0] = (1L << ((byte)*(uint *)(param_1 + 0x1de4) & 0x3f)) - 1U &
                  *(ulonglong *)(param_1 + 0x810);
    if (local_50[0] != 0) {
      local_b0 = *(uint *)(param_1 + 0x1de4);
      if (*(int *)(param_1 + 0x30) == 1) {
        local_b0 = (uint)*(byte *)(lVar4 + 0x4b);
      }
      uVar7 = uVar7 + local_b0;
    }
    local_38[0] = (1 << ((byte)*(undefined4 *)(param_1 + 0x1dfc) & 0x1f)) - 1U &
                  *(ushort *)(param_1 + 0x1470);
    cVar3 = FUN_141a512b0(*(undefined8 *)(param_1 + 0x1e60),uVar7);
    if ((cVar3 != '\0') ||
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1e60) + 8))(), cVar3 == '\0')) break;
    local_a8 = local_a8 + 1;
    uVar7 = 0;
  } while (local_a8 < 2);
  local_b8 = FUN_141a5f440(*(undefined8 *)(param_1 + 0x1e60),uVar7);
  lVar1 = param_1 + 0x1e20;
  if (local_b4[0] != 0) {
    local_c8 = &local_b8;
    FUN_141a49e60(lVar1,param_1 + 0x1778,local_b4,uVar10);
  }
  lVar6 = local_a0;
  if (local_70 != 0) {
    local_c8 = &local_b8;
    FUN_141a486a0(lVar1,local_a0,&local_70,uVar12);
  }
  if (local_68 != 0) {
    local_c8 = &local_b8;
    FUN_141a47c50(lVar1,lVar6,&local_68,uVar8);
  }
  if (local_60 != 0) {
    local_c8 = &local_b8;
    FUN_141a47e60(lVar1,lVar6,&local_60,uVar9);
  }
  if (local_50[0] != 0) {
    local_c8 = &local_b8;
    FUN_141a48280(lVar1,lVar6,local_50,local_b0);
  }
  if (local_58 != 0) {
    local_c8 = &local_b8;
    FUN_141a48070(lVar1,lVar6,&local_58,local_ac);
  }
  lVar6 = local_98;
  if (local_40 != 0) {
    FUN_141a46e70(lVar1,local_98,&local_40);
  }
  if (local_3e != 0) {
    FUN_141a46ab0(lVar1,lVar6,&local_3e);
  }
  if (local_3c != 0) {
    FUN_141a46b70(lVar1,lVar6,&local_3c);
  }
  if (local_38[0] != 0) {
    FUN_141a46cf0(lVar1,lVar6,local_38);
  }
  if (local_3a != 0) {
    FUN_141a46c30(lVar1,lVar6,&local_3a);
  }
  lVar1 = *(longlong *)(local_90 + 0x468);
  if (*(int *)(lVar1 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x28) + 0xd0))
              (*(longlong **)(lVar1 + 0x28),*(int *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0xf8));
    *(undefined4 *)(lVar1 + 0x100) = 0;
  }
  return;
}



// FUNCTION 141a623a0 FUN_141a623a0 body=345 status=ok
// SIG undefined FUN_141a623a0(void)

longlong FUN_141a623a0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar5 = param_2[1];
  *local_20 = *param_2;
  local_20[1] = uVar5;
  uVar5 = param_2[3];
  local_20[2] = param_2[2];
  local_20[3] = uVar5;
  uVar5 = param_2[5];
  local_20[4] = param_2[4];
  local_20[5] = uVar5;
  uVar5 = param_2[7];
  local_20[6] = param_2[6];
  local_20[7] = uVar5;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 9);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(local_20 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)local_20 + 0x44) = uVar1;
  *(undefined4 *)(local_20 + 9) = uVar2;
  *(undefined4 *)((longlong)local_20 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x5c);
  local_20[0xc] = 0;
  *(undefined4 *)(local_20 + 10) = uVar1;
  *(undefined4 *)((longlong)local_20 + 0x54) = uVar2;
  *(undefined4 *)(local_20 + 0xb) = uVar3;
  *(undefined4 *)((longlong)local_20 + 0x5c) = uVar4;
  *(undefined4 *)(local_20 + 0xd) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    FUN_141a71fe0(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x70 + *param_1),local_20,0x68);
      TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_141a624cf;
    }
  }
  cVar6 = TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  local_res8[0] = local_28[0];
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)local_20[0xb] >> 0x20) * 0x17 + (int)local_20[0xb] &
            (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x6c) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0xd) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         local_28[0];
  }
LAB_141a624cf:
  return *param_1 + 0x60 + (longlong)local_res8[0] * 0x70;
}



// FUNCTION 141a62500 FUN_141a62500 body=335 status=ok
// SIG undefined FUN_141a62500(void)

longlong FUN_141a62500(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar4 = param_2[1];
  *local_20 = *param_2;
  local_20[1] = uVar4;
  uVar4 = param_2[3];
  local_20[2] = param_2[2];
  local_20[3] = uVar4;
  uVar4 = param_2[5];
  local_20[4] = param_2[4];
  local_20[5] = uVar4;
  uVar4 = param_2[7];
  local_20[6] = param_2[6];
  local_20[7] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 9);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(local_20 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)local_20 + 0x44) = uVar1;
  *(undefined4 *)(local_20 + 9) = uVar2;
  *(undefined4 *)((longlong)local_20 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(local_20 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)local_20 + 0x54) = uVar1;
  *(undefined4 *)(local_20 + 0xb) = uVar2;
  *(undefined4 *)((longlong)local_20 + 0x5c) = uVar3;
  local_20[0xc] = *param_3;
  *(undefined4 *)(local_20 + 0xd) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    FUN_141a71fe0(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x70 + *param_1),local_20,0x68);
      TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_141a6262b;
    }
  }
  cVar5 = TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  local_res8[0] = local_28[0];
  if (cVar5 == '\0') {
    uVar7 = (int)((ulonglong)local_20[0xb] >> 0x20) * 0x17 + (int)local_20[0xb] &
            (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x6c) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0xd) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         local_28[0];
  }
LAB_141a6262b:
  return *param_1 + 0x60 + (longlong)local_res8[0] * 0x70;
}



// FUNCTION 141a62650 FUN_141a62650 body=601 status=ok
// SIG undefined FUN_141a62650(void)

int * FUN_141a62650(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  int local_48 [2];
  undefined8 *local_40;
  
  FUN_141a6ad90(param_1,local_48);
  lVar10 = 6;
  param_3 = (undefined8 *)*param_3;
  *param_2 = local_48[0];
  puVar6 = local_40;
  do {
    puVar14 = param_3;
    puVar8 = puVar6;
    uVar5 = puVar14[1];
    *puVar8 = *puVar14;
    puVar8[1] = uVar5;
    uVar5 = puVar14[3];
    puVar8[2] = puVar14[2];
    puVar8[3] = uVar5;
    uVar5 = puVar14[5];
    puVar8[4] = puVar14[4];
    puVar8[5] = uVar5;
    uVar5 = puVar14[7];
    puVar8[6] = puVar14[6];
    puVar8[7] = uVar5;
    uVar5 = puVar14[9];
    puVar8[8] = puVar14[8];
    puVar8[9] = uVar5;
    uVar5 = puVar14[0xb];
    puVar8[10] = puVar14[10];
    puVar8[0xb] = uVar5;
    uVar5 = puVar14[0xd];
    puVar8[0xc] = puVar14[0xc];
    puVar8[0xd] = uVar5;
    uVar5 = puVar14[0xf];
    puVar8[0xe] = puVar14[0xe];
    puVar8[0xf] = uVar5;
    lVar10 = lVar10 + -1;
    puVar6 = puVar8 + 0x10;
    param_3 = puVar14 + 0x10;
  } while (lVar10 != 0);
  uVar1 = *(undefined4 *)(puVar14 + 0x10);
  uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
  uVar3 = *(undefined4 *)(puVar14 + 0x11);
  uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
  bVar16 = false;
  local_40[0x62] = 0;
  *(undefined4 *)(puVar8 + 0x10) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uVar2;
  *(undefined4 *)(puVar8 + 0x11) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x8c) = uVar4;
  *(undefined4 *)(local_40 + 99) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    if (iVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar9 +
                       ((longlong)
                        ((int)((ulonglong)local_40[0x61] >> 0x20) * 0x17 + (int)local_40[0x61]) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        lVar10 = *param_1;
        do {
          lVar12 = (longlong)iVar11 * 800 + lVar10;
          cVar7 = equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                            (local_res8,lVar12,local_40);
          if (cVar7 != '\0') goto LAB_141a627b1;
          iVar11 = *(int *)(lVar12 + 0x318);
        } while (iVar11 != -1);
      }
    }
    iVar11 = -1;
LAB_141a627b1:
    bVar16 = iVar11 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 800 + *param_1),local_40,0x318);
      FUN_141a7c580(param_1,local_48[0],1);
      *param_2 = iVar11;
      goto LAB_141a62875;
    }
  }
  cVar7 = FUN_141a6ca50(param_1,iVar15,0);
  if (cVar7 == '\0') {
    uVar13 = (int)((ulonglong)local_40[0x61] >> 0x20) * 0x17 + (int)local_40[0x61] &
             (int)param_1[9] - 1U;
    *(uint *)((longlong)local_40 + 0x31c) = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(local_40 + 99) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
LAB_141a62875:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141a628b0 FUN_141a628b0 body=749 status=ok
// SIG undefined FUN_141a628b0(void)

int * FUN_141a628b0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar2) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator>::
      ~TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141a62b74;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) * 0x17 + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_1407f8e20(param_1);
  }
LAB_141a62b74:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141a62ba0 FUN_141a62ba0 body=764 status=ok
// SIG undefined FUN_141a62ba0(void)

int * FUN_141a62ba0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined4 *_Src;
  uint *puVar18;
  int iVar19;
  bool local_res8;
  
  iVar11 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar13 = *(int *)((longlong)iVar19 * 0x20 + 4 + *param_1);
    iVar14 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar13 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar19;
  local_res8 = false;
  lVar9 = (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar18 = (uint *)((longlong)plVar10 + lVar9);
  *puVar18 = *puVar18 | 1 << ((byte)iVar19 & 0x1f);
  puVar1 = (undefined4 *)*param_3;
  lVar12 = (longlong)iVar19 * 0x20;
  _Src = (undefined4 *)(*param_1 + lVar12);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined8 *)param_3[1];
  *_Src = *puVar1;
  _Src[1] = uVar4;
  _Src[2] = uVar5;
  _Src[3] = uVar6;
  *(undefined8 *)(_Src + 4) = *puVar2;
  _Src[6] = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar14 = iVar17;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)_Src[2]) * 4);
      if (iVar13 != -1) {
        lVar15 = *param_1;
        do {
          lVar15 = (longlong)iVar13 * 0x20 + lVar15;
          cVar7 = FUN_141a690d0(lVar15,_Src);
          iVar14 = iVar13;
          if (cVar7 != '\0') break;
          iVar13 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_1;
          iVar14 = iVar17;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar14 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0x20 + *param_1),_Src,0x18);
      bVar3 = (byte)iVar19 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar19;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar12 + 4 + lVar15) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar19;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar18 = (uint *)((longlong)plVar10 + lVar9);
      *puVar18 = *puVar18 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141a62e6a;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar7 = '\0';
    if (uVar8 != 0) {
      iVar11 = 0x1f - iVar17;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar7 = '\x1f' - (char)iVar17;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & _Src[2];
    _Src[7] = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[6] = *(undefined4 *)
               ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_141a7b830(param_1);
  }
LAB_141a62e6a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141a62ea0 FUN_141a62ea0 body=798 status=ok
// SIG undefined FUN_141a62ea0(void)

int * FUN_141a62ea0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool local_res8;
  
  iVar11 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar18 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar18);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar18 = (int)param_1[6];
    iVar14 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar18 * 0x48);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x48) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar18;
  local_res8 = false;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  uVar7 = puVar3[1];
  puVar1 = (uint *)(*param_1 + (longlong)iVar18 * 0x48);
  puVar4 = (undefined8 *)param_3[1];
  *(undefined8 *)puVar1 = *puVar3;
  *(undefined8 *)(puVar1 + 2) = uVar7;
  uVar7 = puVar3[3];
  *(undefined8 *)(puVar1 + 4) = puVar3[2];
  *(undefined8 *)(puVar1 + 6) = uVar7;
  uVar16 = *(uint *)((longlong)puVar3 + 0x24);
  uVar9 = *(uint *)(puVar3 + 5);
  uVar6 = *(uint *)((longlong)puVar3 + 0x2c);
  puVar1[8] = *(uint *)(puVar3 + 4);
  puVar1[9] = uVar16;
  puVar1[10] = uVar9;
  puVar1[0xb] = uVar6;
  puVar1[0xc] = *(uint *)(puVar3 + 6);
  *(undefined8 *)(puVar1 + 0xe) = *puVar4;
  *puVar4 = 0;
  puVar1[0x10] = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar14 = iVar17;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar13 != -1) {
        lVar12 = *param_1;
        do {
          pvVar2 = (void *)(lVar12 + (longlong)iVar13 * 0x48);
          iVar8 = _guard_xfg_dispatch_icall_nop(pvVar2,puVar1,0x34);
          iVar14 = iVar13;
          if (iVar8 == 0) break;
          iVar13 = *(int *)((longlong)pvVar2 + 0x40);
          lVar12 = *param_1;
          iVar14 = iVar17;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar14 != -1;
    if (local_res8) {
      pvVar2 = (void *)(*param_1 + (longlong)iVar14 * 0x48);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>((longlong)pvVar2 + 0x38);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar1,0x40);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar11;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)iVar11 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar12 + 4 + (longlong)iVar11 * 0x48) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_141a6318f;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar15 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar17;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar15 = '\x1f' - (char)iVar17;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & *puVar1;
    puVar1[0x11] = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar1[0x10] = *(uint *)((longlong)plVar10 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>,TDefaultMapHashableKeyFuncs<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141a6318f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141a631c0 FUN_141a631c0 body=591 status=ok
// SIG undefined FUN_141a631c0(void)

int * FUN_141a631c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  int local_38 [2];
  undefined8 *local_30;
  
  FUN_141a6ad90(param_1,local_38);
  lVar10 = 6;
  puVar1 = (undefined8 *)param_3[1];
  param_3 = (undefined8 *)*param_3;
  *param_2 = local_38[0];
  puVar6 = local_30;
  do {
    puVar14 = param_3;
    puVar8 = puVar6;
    uVar5 = puVar14[1];
    *puVar8 = *puVar14;
    puVar8[1] = uVar5;
    uVar5 = puVar14[3];
    puVar8[2] = puVar14[2];
    puVar8[3] = uVar5;
    uVar5 = puVar14[5];
    puVar8[4] = puVar14[4];
    puVar8[5] = uVar5;
    uVar5 = puVar14[7];
    puVar8[6] = puVar14[6];
    puVar8[7] = uVar5;
    uVar5 = puVar14[9];
    puVar8[8] = puVar14[8];
    puVar8[9] = uVar5;
    uVar5 = puVar14[0xb];
    puVar8[10] = puVar14[10];
    puVar8[0xb] = uVar5;
    uVar5 = puVar14[0xd];
    puVar8[0xc] = puVar14[0xc];
    puVar8[0xd] = uVar5;
    uVar5 = puVar14[0xf];
    puVar8[0xe] = puVar14[0xe];
    puVar8[0xf] = uVar5;
    lVar10 = lVar10 + -1;
    puVar6 = puVar8 + 0x10;
    param_3 = puVar14 + 0x10;
  } while (lVar10 != 0);
  uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
  uVar3 = *(undefined4 *)(puVar14 + 0x11);
  uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
  bVar16 = false;
  *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
  *(undefined4 *)((longlong)puVar8 + 0x84) = uVar2;
  *(undefined4 *)(puVar8 + 0x11) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x8c) = uVar4;
  local_30[0x62] = *puVar1;
  *(undefined4 *)(local_30 + 99) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    if (iVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar9 +
                       ((longlong)
                        ((int)((ulonglong)local_30[0x61] >> 0x20) * 0x17 + (int)local_30[0x61]) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        lVar10 = *param_1;
        do {
          lVar12 = (longlong)iVar11 * 800 + lVar10;
          cVar7 = equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                            (local_res8,lVar12,local_30);
          if (cVar7 != '\0') goto LAB_141a63321;
          iVar11 = *(int *)(lVar12 + 0x318);
        } while (iVar11 != -1);
      }
    }
    iVar11 = -1;
LAB_141a63321:
    bVar16 = iVar11 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 800 + *param_1),local_30,0x318);
      FUN_141a7c580(param_1,local_38[0],1);
      *param_2 = iVar11;
      goto LAB_141a633e5;
    }
  }
  cVar7 = FUN_141a6ca50(param_1,iVar15,0);
  if (cVar7 == '\0') {
    uVar13 = (int)((ulonglong)local_30[0x61] >> 0x20) * 0x17 + (int)local_30[0x61] &
             (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x31c) = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 99) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
LAB_141a633e5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141a63410 FUN_141a63410 body=693 status=ok
// SIG undefined FUN_141a63410(void)

int * FUN_141a63410(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *_Buf2;
  void *_Buf1;
  int iVar15;
  bool bVar16;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x30);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  puVar11 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  bVar16 = false;
  _Buf2 = (undefined4 *)((longlong)iVar14 * 0x30 + *param_1);
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  *_Buf2 = *puVar11;
  _Buf2[1] = uVar4;
  _Buf2[2] = uVar5;
  _Buf2[3] = uVar6;
  *(undefined8 *)(_Buf2 + 4) = *(undefined8 *)(puVar11 + 4);
  *(undefined1 *)(_Buf2 + 6) = *(undefined1 *)(puVar11 + 6);
  *(undefined8 *)(_Buf2 + 8) = *puVar2;
  _Buf2[10] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar14 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar9 = GetTypeHash(_Buf2);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar9) * 4);
      if (iVar9 != -1) {
        lVar13 = *param_1;
        do {
          _Buf1 = (void *)((longlong)iVar9 * 0x30 + lVar13);
          iVar8 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,0x19);
          iVar14 = iVar9;
          if (iVar8 == 0) break;
          iVar9 = *(int *)((longlong)_Buf1 + 0x28);
          lVar13 = *param_1;
          iVar14 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar14 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0x30 + *param_1),_Buf2,0x28);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar9;
      }
      puVar11 = (undefined4 *)((longlong)iVar9 * 0x30 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar11[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141a63698;
    }
  }
  cVar7 = TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar15 = *param_2;
    uVar10 = GetTypeHash(_Buf2);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Buf2[0xb] = uVar10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Buf2[10] = *(undefined4 *)
                 ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar15;
  }
LAB_141a63698:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141a636d0 FUN_141a636d0 body=665 status=ok
// SIG undefined FUN_141a636d0(void)

int * FUN_141a636d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar10 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
  plVar5 = (longlong *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *plVar10 = lVar2;
  plVar10[1] = *plVar5;
  *(undefined4 *)(plVar10 + 2) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x18) == lVar2) goto LAB_141a6383b;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_141a6383b:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),plVar10,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_141a63940;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar10 >> 0x20) * 0x17 + (int)*plVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x14) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141a63940:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141a63970 FUN_141a63970 body=948 status=ok
// SIG undefined FUN_141a63970(void)

void FUN_141a63970(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar11;
  
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  uVar5 = param_2[8];
  if (*param_2 != 0) {
    do {
      uVar14 = 6;
      piVar12 = (int *)(uVar11 * 0x20 + *(longlong *)(param_2 + 2));
      switch(piVar12[6]) {
      case 0:
        break;
      case 1:
        uVar14 = 0;
        break;
      case 2:
        uVar14 = 1;
        break;
      case 3:
        uVar14 = 2;
        break;
      case 4:
        uVar14 = 4;
        break;
      case 5:
        uVar14 = 3;
        break;
      default:
        goto switchD_141a63a36_default;
      }
switchD_141a63a36_default:
      if ((*(char *)(param_1 + 0x30) == '\0') && (((uVar5 >> 1 & 1) != 0 || (1 < (uint)piVar12[6])))
         ) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x30) = uVar7;
      if ((*(char *)(param_1 + 0x38) == '\0') &&
         (((uVar5 >> 2 & 1) != 0 || ((piVar12[6] & 0xfffffffdU) != 0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x38) = uVar7;
      if ((*(char *)(param_1 + 0x40) == '\0') &&
         (((uVar5 >> 3 & 1) != 0 || ((piVar12[6] != 0 && (piVar12[6] != 3)))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x40) = uVar7;
      if ((*(char *)(param_1 + 0x50) == '\0') &&
         (((uVar5 >> 4 & 1) != 0 || ((piVar12[6] & 0xfffffffbU) != 0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x50) = uVar7;
      if ((*(char *)(param_1 + 0x48) == '\0') &&
         (((uVar5 >> 5 & 1) != 0 || ((piVar12[6] != 0 && (piVar12[6] != 5)))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x48) = uVar7;
      if ((*(char *)(param_1 + 0x58) == '\0') && (piVar12[6] != 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0x58) = uVar7;
      uVar10 = (uint)uVar14;
      if (*piVar12 == 0) {
        piVar12 = *(int **)(piVar12 + 4);
        iVar6 = *piVar12;
        if (iVar6 == 0) {
          uVar7 = (undefined1)piVar12[1];
          if (uVar10 == 6) {
            *(undefined1 *)(param_1 + 0x2b) = uVar7;
            *(undefined1 *)(param_1 + 0x33) = uVar7;
            *(undefined1 *)(param_1 + 0x3b) = uVar7;
            *(undefined1 *)(param_1 + 0x43) = uVar7;
            *(undefined1 *)(param_1 + 0x4b) = uVar7;
            *(undefined1 *)(param_1 + 0x53) = uVar7;
          }
          else {
            *(undefined1 *)(param_1 + 0x2b + uVar14 * 8) = uVar7;
          }
          FUN_141a7cd30(param_1,uVar14,uVar11 & 0xff);
        }
        else if (iVar6 == 1) {
          uVar7 = (undefined1)piVar12[1];
          if (uVar10 == 6) {
            *(undefined1 *)(param_1 + 0x2d) = uVar7;
            *(undefined1 *)(param_1 + 0x35) = uVar7;
            *(undefined1 *)(param_1 + 0x3d) = uVar7;
            *(undefined1 *)(param_1 + 0x45) = uVar7;
            *(undefined1 *)(param_1 + 0x4d) = uVar7;
            *(undefined1 *)(param_1 + 0x55) = uVar7;
            *(char *)(param_1 + 0x28) = (char)uVar11;
            *(undefined1 *)(param_1 + 0x5a) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x2d + uVar14 * 8) = uVar7;
            *(char *)(param_1 + 0x28) = (char)uVar11;
            *(undefined1 *)(param_1 + 0x5a) = 1;
          }
        }
        else if (iVar6 == 2) {
          cVar4 = (char)piVar12[1];
          if (uVar10 == 6) {
            *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + cVar4;
            *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + cVar4;
            *(char *)(param_1 + 0x3a) = *(char *)(param_1 + 0x3a) + cVar4;
            *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x42) + cVar4;
            *(char *)(param_1 + 0x4a) = *(char *)(param_1 + 0x4a) + cVar4;
            *(char *)(param_1 + 0x52) = *(char *)(param_1 + 0x52) + cVar4;
          }
          else {
            pcVar3 = (char *)(param_1 + 0x2a + uVar14 * 8);
            *pcVar3 = *pcVar3 + cVar4;
          }
          FUN_141a7c900(param_1,uVar14,uVar11 & 0xff);
          iVar6 = piVar12[1];
          uVar13 = piVar12[2];
          if (uVar10 == 6) {
            uVar10 = 5;
            uVar14 = 0;
          }
          uVar9 = (uint)uVar14;
          while (uVar9 <= uVar10) {
            if (uVar13 < iVar6 + uVar13) {
              lVar1 = param_1 + uVar14 * 8;
              uVar8 = (uint)*(ushort *)(lVar1 + 0x2e);
              uVar9 = uVar13;
              do {
                uVar8 = uVar8 & 0xffff | 1 << (uVar9 & 0x1f);
                uVar9 = uVar9 + 1;
              } while (uVar9 < iVar6 + uVar13);
              *(short *)(lVar1 + 0x2e) = (short)uVar8;
            }
            uVar9 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar9;
          }
        }
        else if (iVar6 == 3) {
          uVar7 = (undefined1)piVar12[1];
          if (uVar10 == 6) {
            *(undefined1 *)(param_1 + 0x2c) = uVar7;
            *(undefined1 *)(param_1 + 0x34) = uVar7;
            *(undefined1 *)(param_1 + 0x3c) = uVar7;
            *(undefined1 *)(param_1 + 0x44) = uVar7;
            *(undefined1 *)(param_1 + 0x4c) = uVar7;
            *(undefined1 *)(param_1 + 0x54) = uVar7;
            FUN_141a7cdc0(param_1,uVar14,uVar11 & 0xff);
          }
          else {
            *(undefined1 *)(param_1 + 0x2c + uVar14 * 8) = uVar7;
            FUN_141a7cdc0(param_1,uVar14,uVar11 & 0xff);
          }
        }
      }
      else if (*piVar12 == 2) {
        if (uVar10 == 6) {
          *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + '\x01';
          *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + '\x01';
          *(char *)(param_1 + 0x3a) = *(char *)(param_1 + 0x3a) + '\x01';
          *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x42) + '\x01';
          *(char *)(param_1 + 0x4a) = *(char *)(param_1 + 0x4a) + '\x01';
          *(char *)(param_1 + 0x52) = *(char *)(param_1 + 0x52) + '\x01';
        }
        else {
          pcVar3 = (char *)(param_1 + 0x2a + uVar14 * 8);
          *pcVar3 = *pcVar3 + '\x01';
        }
        if (piVar12[2] == 0) {
          FUN_141a7c850(param_1,uVar14,uVar11 & 0xff);
        }
        if (uVar10 == 6) {
          uVar10 = 5;
          uVar14 = 0;
        }
        uVar13 = (uint)uVar14;
        while (uVar13 <= uVar10) {
          lVar2 = uVar14 * 8;
          lVar1 = uVar14 * 8;
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          *(ushort *)(param_1 + lVar1 + 0x2e) =
               *(ushort *)(param_1 + 0x2e + lVar2) | (ushort)(1 << (piVar12[2] & 0x1fU));
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *param_2);
  }
  return;
}



// FUNCTION 141a63d40 FUN_141a63d40 body=2361 status=ok
// SIG undefined FUN_141a63d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffc68 : 0x000141a641c2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_141a63d40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined *param_5,longlong param_6,longlong param_7,int *param_8,int *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_3d8 [32];
  ulonglong local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined *local_398;
  undefined4 local_390;
  uint local_388;
  ulonglong local_380 [2];
  uint local_370;
  longlong local_368;
  undefined8 local_358;
  longlong *plStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_30c;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined4 local_2a4;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined1 local_258 [384];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_380[0] = local_380[0] & 0xffffffff00000000;
  local_388 = *(uint *)(param_1 + 0x538);
  local_398 = param_5;
  uVar17 = 0x10;
  if ((int)local_388 < 0x11) {
    uVar17 = local_388;
  }
  local_370 = 0;
  local_368 = param_3;
  if (0 < (int)uVar17) {
    _guard_xfg_dispatch_icall_nop(local_258,(void *)(param_1 + 0x53c),(longlong)(int)uVar17 * 0x18);
  }
  if ((int)uVar17 < (int)local_388) {
    _guard_xfg_dispatch_icall_nop
              (local_258 + (longlong)(int)uVar17 * 0x18,0,(longlong)(int)(local_388 - uVar17) * 0x18
              );
  }
  local_30c = 0x26;
  local_318 = 0;
  local_358 = 0;
  plStack_350 = (longlong *)0x0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = (longlong *)0x0;
  uStack_330 = 0;
  local_310 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_328 = FUN_1404a0ce0();
  local_320 = FUN_140985530();
  if (param_4 != 0) {
    FUN_141a52eb0(param_1,param_4 + 0x80);
  }
  if ((((*param_9 == 0) && (param_9[1] == 0)) &&
      ((longlong)param_9[2] == *(longlong *)(param_7 + 0x10))) &&
     (param_9[3] == *(int *)(param_7 + 0x18))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((*(byte *)(param_7 + 0x30) & 2) == 0) {
    if (bVar7) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),0,0);
      }
      iVar9 = *(int *)(param_5 + 0x44);
      if (iVar9 == 4) {
LAB_141a640c3:
        FUN_141a60fb0(param_1 + 0x460,*(undefined8 *)(*(longlong *)(param_5 + 0x28) + 0x10),4,
                      *(undefined4 *)(param_5 + 0x48));
      }
      else if (iVar9 == 5) {
        FUN_141a60ce0(param_1 + 0x460,*(undefined8 *)(*(longlong *)(param_5 + 0x28) + 0x10),4,
                      param_5 + 0x30);
      }
      else if ((iVar9 == 6) || (iVar9 == 8)) goto LAB_141a640c3;
      lVar10 = *(longlong *)(param_1 + 0x468);
      if (*(int *)(lVar10 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))
                  (*(longlong **)(lVar10 + 0x28),*(int *)(lVar10 + 0x100),
                   *(undefined8 *)(lVar10 + 0xf8));
        *(undefined4 *)(lVar10 + 0x100) = 0;
        lVar10 = *(longlong *)(param_1 + 0x468);
      }
      *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
      local_3b8 = 0;
      local_380[0] = 0;
      local_380[1] = 0;
      (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x180))
                (*(longlong **)(lVar10 + 0x28),*(undefined8 *)(param_5 + 0x10),local_380,0);
    }
    *(undefined1 *)(param_1 + 0x502) = 1;
    *(undefined8 *)(param_1 + 0xca8) = 0;
    *(undefined8 *)(param_1 + 0xc68) = 0;
    *(undefined8 *)(param_1 + 0xc70) = 0;
    *(undefined8 *)(param_1 + 0xc78) = 0;
    *(undefined8 *)(param_1 + 0xc80) = 0;
    *(undefined8 *)(param_1 + 0xc88) = 0;
    *(undefined8 *)(param_1 + 0xc90) = 0;
    *(undefined8 *)(param_1 + 0xc98) = 0;
    *(undefined **)(param_1 + 0xc60) = local_398;
    *(uint *)(param_1 + 0xca0) = (uint)(local_398 != (undefined *)0x0);
    local_318 = FUN_1409853f0();
    if (param_4 == 0) goto LAB_141a64200;
    local_304 = CONCAT44(local_304._4_4_,*(undefined4 *)(param_4 + 0x3c));
    local_2e8 = CONCAT44(*(undefined4 *)(param_4 + 0x40),(undefined4)local_2e8);
  }
  else {
    if (bVar7) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),0,0);
      }
      iVar9 = *(int *)(param_6 + 0x44);
      lVar10 = *(longlong *)(*(longlong *)(param_6 + 0x28) + 0x10);
      if (iVar9 == 3) {
LAB_141a63f33:
        if (*(byte *)(lVar10 + 0x7d) < 2) {
          FUN_141a60fb0(param_1 + 0x460,lVar10,0x10,*(undefined4 *)(param_6 + 0x4c));
        }
        else {
LAB_141a63f39:
          FUN_141a60ce0(param_1 + 0x460,lVar10,0x10,param_6 + 0x30);
        }
      }
      else {
        if (iVar9 == 4) goto LAB_141a63f39;
        if (iVar9 == 5) goto LAB_141a63f33;
        if (iVar9 == 6) goto LAB_141a63f39;
      }
      lVar10 = *(longlong *)(param_1 + 0x468);
      if (*(int *)(lVar10 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))
                  (*(longlong **)(lVar10 + 0x28),*(int *)(lVar10 + 0x100),
                   *(undefined8 *)(lVar10 + 0xf8));
        *(undefined4 *)(lVar10 + 0x100) = 0;
        lVar10 = *(longlong *)(param_1 + 0x468);
      }
      *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
      local_3a8 = 0;
      local_3b0 = 0;
      local_3b8 = local_3b8 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x178))
                (*(longlong **)(lVar10 + 0x28),*(undefined8 *)(param_6 + 0x10),3,0);
    }
    local_380[0] = 0;
    *(undefined1 *)(param_1 + 0x502) = 1;
    *(longlong *)(param_1 + 0xca8) = param_6;
    *(undefined8 *)(param_1 + 0xc68) = 0;
    *(undefined8 *)(param_1 + 0xc70) = 0;
    *(undefined8 *)(param_1 + 0xc78) = 0;
    *(undefined8 *)(param_1 + 0xc80) = 0;
    *(undefined8 *)(param_1 + 0xc88) = 0;
    *(undefined8 *)(param_1 + 0xc90) = 0;
    *(undefined8 *)(param_1 + 0xc98) = 0;
    *(undefined8 *)(param_1 + 0xc60) = 0;
    *(undefined4 *)(param_1 + 0xca0) = 0;
    local_318 = FUN_141a15460();
    if (param_4 == 0) goto LAB_141a64200;
    local_2b4 = *(undefined8 *)(param_4 + 0x3c);
  }
  local_2a4 = CONCAT22(local_2a4._2_2_,*(undefined2 *)(param_4 + 0x38));
LAB_141a64200:
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68);
  }
  uVar1 = *(undefined4 *)(param_7 + 0x18);
  uVar2 = *(undefined4 *)(param_7 + 0x10);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59420;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar2;
  *(undefined4 *)(puVar13 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  iVar9 = *param_8;
  iVar3 = param_8[1];
  iVar4 = param_8[2];
  iVar5 = param_8[3];
  fVar19 = (float)*(longlong *)(param_7 + 0x10);
  if (*(longlong *)(param_7 + 0x10) < 0) {
    fVar19 = fVar19 + 1.8446744e+19;
  }
  fVar20 = 2.0 / (float)*(uint *)(param_7 + 0x18);
  fVar21 = (float)*param_9 * (2.0 / fVar19) - 1.0;
  fVar22 = (float)param_9[2] * (2.0 / fVar19) - 1.0;
  fVar23 = 1.0 - (float)param_9[1] * fVar20;
  fVar19 = 1.0 - (float)param_9[3] * fVar20;
  lVar10 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar11 = (longlong *)0x0;
  local_398 = &DAT_1469f8fb0;
  local_390 = 0;
  plVar16 = (longlong *)(lVar10 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar16,local_380,&local_398);
  plVar14 = plVar11;
  if ((int)local_380[0] != -1) {
    plVar14 = (longlong *)((longlong)(int)local_380[0] * 0x20 + *plVar16);
  }
  local_390 = 0;
  plVar15 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar15 = plVar11;
  }
  local_398 = &DAT_1469f87d0;
  lVar10 = *plVar15;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar16,local_380,&local_398);
  plVar14 = plVar11;
  if ((int)local_380[0] != -1) {
    plVar14 = (longlong *)((longlong)(int)local_380[0] * 0x20 + *plVar16);
  }
  plVar16 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar16 = plVar11;
  }
  lVar6 = *plVar16;
  local_358 = DAT_146534c78;
  if (lVar10 == 0) {
    local_398 = (undefined *)0x0;
    uVar17 = 1;
    plStack_350 = plVar11;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    plStack_350 = *(longlong **)(lVar10 + 0x38);
    uVar17 = local_370;
  }
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
  }
  if (lVar6 == 0) {
    uVar17 = uVar17 | 2;
    local_398 = (undefined *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    plVar11 = *(longlong **)(lVar10 + 0x40);
  }
  local_338 = plVar11;
  if ((uVar17 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
  }
  local_30c = CONCAT44(local_30c._4_4_,1);
  FUN_141ed6ac0(param_2,&local_358,0,1);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144da0be8;
  uVar8 = _DAT_1464aa6c8;
  puVar13[2] = _DAT_1464aa6c0;
  puVar13[3] = uVar8;
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  lVar10 = local_368;
  FUN_141a65250(param_1 + 0x4e0,*(undefined8 *)(local_368 + 0x110),*(undefined2 *)(lVar6 + 0xc0));
  local_3b8 = CONCAT44(local_3b8._4_4_,0x10);
  local_298 = fVar22;
  local_294 = fVar23;
  local_290 = (float)iVar4;
  local_28c = (float)iVar3;
  local_288 = fVar22;
  local_284 = fVar19;
  local_280 = (float)iVar4;
  local_27c = (float)iVar5;
  local_278 = fVar21;
  local_274 = fVar23;
  local_270 = (float)iVar9;
  local_26c = (float)iVar3;
  local_268 = fVar21;
  local_264 = fVar19;
  local_260 = (float)iVar9;
  local_25c = (float)iVar5;
  FUN_141a14d80(param_2,1,2,&local_298);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  FUN_141a52eb0(param_1,lVar10 + 0x80);
  FUN_141a52bb0(param_1);
  uVar17 = local_388;
  uVar18 = (ulonglong)local_388;
  if ((*(uint *)(param_1 + 0x538) != local_388) ||
     (iVar9 = _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x53c),local_258,uVar18 * 0x18),
     iVar9 != 0)) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x53c),local_258,uVar18 * 0x18);
    *(uint *)(param_1 + 0x538) = uVar17;
    *(undefined1 *)(param_1 + 0x505) = 1;
    FUN_141a7d880(param_1 + 0x4e0);
  }
  return;
}



// FUNCTION 141a64690 FUN_141a64690 body=2379 status=ok
// SIG undefined FUN_141a64690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffc68 : 0x000141a64b12 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_141a64690(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined *param_5,longlong param_6,longlong param_7,int *param_8,int *param_9,
                  undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_3d8 [32];
  ulonglong local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined *local_398;
  undefined4 local_390;
  uint local_388;
  ulonglong local_380 [2];
  uint local_370;
  longlong local_368;
  undefined8 local_358;
  longlong *plStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_30c;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined4 local_2a4;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined1 local_258 [384];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_380[0] = local_380[0] & 0xffffffff00000000;
  local_388 = *(uint *)(param_1 + 0x538);
  local_398 = param_5;
  uVar17 = 0x10;
  if ((int)local_388 < 0x11) {
    uVar17 = local_388;
  }
  local_370 = 0;
  local_368 = param_3;
  if (0 < (int)uVar17) {
    _guard_xfg_dispatch_icall_nop(local_258,(void *)(param_1 + 0x53c),(longlong)(int)uVar17 * 0x18);
  }
  if ((int)uVar17 < (int)local_388) {
    _guard_xfg_dispatch_icall_nop
              (local_258 + (longlong)(int)uVar17 * 0x18,0,(longlong)(int)(local_388 - uVar17) * 0x18
              );
  }
  local_30c = 0x26;
  local_318 = 0;
  local_358 = 0;
  plStack_350 = (longlong *)0x0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = (longlong *)0x0;
  uStack_330 = 0;
  local_310 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_328 = FUN_1404a0ce0();
  local_320 = FUN_140985530();
  if (param_4 != 0) {
    FUN_141a52eb0(param_1,param_4 + 0x80);
  }
  if ((((*param_9 == 0) && (param_9[1] == 0)) &&
      ((longlong)param_9[2] == *(longlong *)(param_7 + 0x10))) &&
     (param_9[3] == *(int *)(param_7 + 0x18))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((*(byte *)(param_7 + 0x30) & 2) == 0) {
    if (bVar7) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),0,0);
      }
      iVar9 = *(int *)(param_5 + 0x44);
      if (iVar9 == 4) {
LAB_141a64a13:
        FUN_141a60fb0(param_1 + 0x460,*(undefined8 *)(*(longlong *)(param_5 + 0x28) + 0x10),4,
                      *(undefined4 *)(param_5 + 0x48));
      }
      else if (iVar9 == 5) {
        FUN_141a60ce0(param_1 + 0x460,*(undefined8 *)(*(longlong *)(param_5 + 0x28) + 0x10),4,
                      param_5 + 0x30);
      }
      else if ((iVar9 == 6) || (iVar9 == 8)) goto LAB_141a64a13;
      lVar10 = *(longlong *)(param_1 + 0x468);
      if (*(int *)(lVar10 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))
                  (*(longlong **)(lVar10 + 0x28),*(int *)(lVar10 + 0x100),
                   *(undefined8 *)(lVar10 + 0xf8));
        *(undefined4 *)(lVar10 + 0x100) = 0;
        lVar10 = *(longlong *)(param_1 + 0x468);
      }
      *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
      local_3b8 = 0;
      local_380[0] = 0;
      local_380[1] = 0;
      (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x180))
                (*(longlong **)(lVar10 + 0x28),*(undefined8 *)(param_5 + 0x10),local_380,0);
    }
    *(undefined1 *)(param_1 + 0x502) = 1;
    *(undefined8 *)(param_1 + 0xca8) = 0;
    *(undefined8 *)(param_1 + 0xc68) = 0;
    *(undefined8 *)(param_1 + 0xc70) = 0;
    *(undefined8 *)(param_1 + 0xc78) = 0;
    *(undefined8 *)(param_1 + 0xc80) = 0;
    *(undefined8 *)(param_1 + 0xc88) = 0;
    *(undefined8 *)(param_1 + 0xc90) = 0;
    *(undefined8 *)(param_1 + 0xc98) = 0;
    *(undefined **)(param_1 + 0xc60) = local_398;
    *(uint *)(param_1 + 0xca0) = (uint)(local_398 != (undefined *)0x0);
    local_318 = FUN_1409853f0();
    if (param_4 == 0) goto LAB_141a64b50;
    local_304 = CONCAT44(local_304._4_4_,*(undefined4 *)(param_4 + 0x3c));
    local_2e8 = CONCAT44(*(undefined4 *)(param_4 + 0x40),(undefined4)local_2e8);
  }
  else {
    if (bVar7) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),0,0);
      }
      iVar9 = *(int *)(param_6 + 0x44);
      lVar10 = *(longlong *)(*(longlong *)(param_6 + 0x28) + 0x10);
      if (iVar9 == 3) {
LAB_141a64883:
        if (*(byte *)(lVar10 + 0x7d) < 2) {
          FUN_141a60fb0(param_1 + 0x460,lVar10,0x10,*(undefined4 *)(param_6 + 0x4c));
        }
        else {
LAB_141a64889:
          FUN_141a60ce0(param_1 + 0x460,lVar10,0x10,param_6 + 0x30);
        }
      }
      else {
        if (iVar9 == 4) goto LAB_141a64889;
        if (iVar9 == 5) goto LAB_141a64883;
        if (iVar9 == 6) goto LAB_141a64889;
      }
      lVar10 = *(longlong *)(param_1 + 0x468);
      if (*(int *)(lVar10 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))
                  (*(longlong **)(lVar10 + 0x28),*(int *)(lVar10 + 0x100),
                   *(undefined8 *)(lVar10 + 0xf8));
        *(undefined4 *)(lVar10 + 0x100) = 0;
        lVar10 = *(longlong *)(param_1 + 0x468);
      }
      *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
      local_3a8 = 0;
      local_3b0 = 0;
      local_3b8 = local_3b8 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x178))
                (*(longlong **)(lVar10 + 0x28),*(undefined8 *)(param_6 + 0x10),3,0);
    }
    local_380[0] = 0;
    *(undefined1 *)(param_1 + 0x502) = 1;
    *(longlong *)(param_1 + 0xca8) = param_6;
    *(undefined8 *)(param_1 + 0xc68) = 0;
    *(undefined8 *)(param_1 + 0xc70) = 0;
    *(undefined8 *)(param_1 + 0xc78) = 0;
    *(undefined8 *)(param_1 + 0xc80) = 0;
    *(undefined8 *)(param_1 + 0xc88) = 0;
    *(undefined8 *)(param_1 + 0xc90) = 0;
    *(undefined8 *)(param_1 + 0xc98) = 0;
    *(undefined8 *)(param_1 + 0xc60) = 0;
    *(undefined4 *)(param_1 + 0xca0) = 0;
    local_318 = FUN_141a15460();
    if (param_4 == 0) goto LAB_141a64b50;
    local_2b4 = *(undefined8 *)(param_4 + 0x3c);
  }
  local_2a4 = CONCAT22(local_2a4._2_2_,*(undefined2 *)(param_4 + 0x38));
LAB_141a64b50:
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68);
  }
  uVar1 = *(undefined4 *)(param_7 + 0x18);
  uVar2 = *(undefined4 *)(param_7 + 0x10);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59420;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar2;
  *(undefined4 *)(puVar13 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  iVar9 = *param_8;
  iVar3 = param_8[1];
  iVar4 = param_8[2];
  iVar5 = param_8[3];
  fVar19 = (float)*(longlong *)(param_7 + 0x10);
  if (*(longlong *)(param_7 + 0x10) < 0) {
    fVar19 = fVar19 + 1.8446744e+19;
  }
  fVar20 = 2.0 / (float)*(uint *)(param_7 + 0x18);
  fVar21 = (float)*param_9 * (2.0 / fVar19) - 1.0;
  fVar22 = (float)param_9[2] * (2.0 / fVar19) - 1.0;
  fVar23 = 1.0 - (float)param_9[1] * fVar20;
  fVar19 = 1.0 - (float)param_9[3] * fVar20;
  lVar10 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar11 = (longlong *)0x0;
  local_398 = &DAT_1469f8fb0;
  local_390 = 0;
  plVar15 = (longlong *)(lVar10 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,local_380,&local_398);
  plVar14 = plVar11;
  if ((int)local_380[0] != -1) {
    plVar14 = (longlong *)((longlong)(int)local_380[0] * 0x20 + *plVar15);
  }
  local_390 = 0;
  plVar16 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar16 = plVar11;
  }
  local_398 = &DAT_1469f8e60;
  lVar10 = *plVar16;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,local_380,&local_398);
  plVar14 = plVar11;
  if ((int)local_380[0] != -1) {
    plVar14 = (longlong *)((longlong)(int)local_380[0] * 0x20 + *plVar15);
  }
  plVar15 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar15 = plVar11;
  }
  lVar6 = *plVar15;
  local_358 = DAT_146534c78;
  if (lVar10 == 0) {
    local_398 = (undefined *)0x0;
    uVar17 = 1;
    plStack_350 = plVar11;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    plStack_350 = *(longlong **)(lVar10 + 0x38);
    uVar17 = local_370;
  }
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
  }
  if (lVar6 == 0) {
    uVar17 = uVar17 | 2;
    local_398 = (undefined *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    plVar11 = *(longlong **)(lVar10 + 0x40);
  }
  local_338 = plVar11;
  if ((uVar17 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
  }
  local_30c = CONCAT44(local_30c._4_4_,1);
  FUN_141ed6ac0(param_2,&local_358,0,1);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144da0be8;
  uVar8 = _DAT_1464aa6c8;
  puVar13[2] = _DAT_1464aa6c0;
  puVar13[3] = uVar8;
  FResolveSingleSamplePS::SetParameters(lVar6,param_2,param_10);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  lVar10 = local_368;
  FUN_141a65250(param_1 + 0x4e0,*(undefined8 *)(local_368 + 0x110),*(undefined2 *)(lVar6 + 0xc0));
  local_3b8 = CONCAT44(local_3b8._4_4_,0x10);
  local_298 = fVar22;
  local_294 = fVar23;
  local_290 = (float)iVar4;
  local_28c = (float)iVar3;
  local_288 = fVar22;
  local_284 = fVar19;
  local_280 = (float)iVar4;
  local_27c = (float)iVar5;
  local_278 = fVar21;
  local_274 = fVar23;
  local_270 = (float)iVar9;
  local_26c = (float)iVar3;
  local_268 = fVar21;
  local_264 = fVar19;
  local_260 = (float)iVar9;
  local_25c = (float)iVar5;
  FUN_141a14d80(param_2,1,2,&local_298);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  FUN_141a52eb0(param_1,lVar10 + 0x80);
  FUN_141a52bb0(param_1);
  uVar17 = local_388;
  uVar18 = (ulonglong)local_388;
  if ((*(uint *)(param_1 + 0x538) != local_388) ||
     (iVar9 = _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x53c),local_258,uVar18 * 0x18),
     iVar9 != 0)) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x53c),local_258,uVar18 * 0x18);
    *(uint *)(param_1 + 0x538) = uVar17;
    *(undefined1 *)(param_1 + 0x505) = 1;
    FUN_141a7d880(param_1 + 0x4e0);
  }
  return;
}



// FUNCTION 141a64ff0 FUN_141a64ff0 body=299 status=ok
// SIG undefined FUN_141a64ff0(void)

void FUN_141a64ff0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0xa20) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1428) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1428) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1428) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x1454) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0xa20,param_2);
    *(ulonglong *)(param_1 + 0x7f8) = *(ulonglong *)(param_1 + 0x7f8) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a65120 FUN_141a65120 body=299 status=ok
// SIG undefined FUN_141a65120(void)

void FUN_141a65120(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0xc20) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1430) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1430) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1430) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x1458) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0xc20,param_2);
    *(ulonglong *)(param_1 + 0x800) = *(ulonglong *)(param_1 + 0x800) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a65250 FUN_141a65250 body=299 status=ok
// SIG undefined FUN_141a65250(void)

void FUN_141a65250(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0xe20) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1438) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1438) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1438) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x145c) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0xe20,param_2);
    *(ulonglong *)(param_1 + 0x808) = *(ulonglong *)(param_1 + 0x808) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a65380 FUN_141a65380 body=299 status=ok
// SIG undefined FUN_141a65380(void)

void FUN_141a65380(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0x1020) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1440) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1440) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1440) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x1460) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x1020,param_2);
    *(ulonglong *)(param_1 + 0x810) = *(ulonglong *)(param_1 + 0x810) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a654b0 FUN_141a654b0 body=299 status=ok
// SIG undefined FUN_141a654b0(void)

void FUN_141a654b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0x1220) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1448) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1448) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1448) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x1464) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x1220,param_2);
    *(ulonglong *)(param_1 + 0x818) = *(ulonglong *)(param_1 + 0x818) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a655e0 FUN_141a655e0 body=299 status=ok
// SIG undefined FUN_141a655e0(void)

void FUN_141a655e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = param_1 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0x820) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x1420) & ~(1L << (param_3 & 0x3f));
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 0;
      uVar2 = *(ulonglong *)(param_1 + 0x1420) | 1L << (param_3 & 0x3f);
    }
    *(ulonglong *)(param_1 + 0x1420) = uVar2;
    if (uVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x20;
      if (uVar2 < 0x100000000) {
        iVar3 = 0;
      }
      uVar5 = uVar2 >> 0x20;
      if (uVar2 < 0x100000000) {
        uVar5 = uVar2;
      }
      if (0xffff < uVar5) {
        uVar5 = uVar5 >> 0x10;
        iVar3 = iVar3 + 0x10;
      }
      iVar4 = iVar3 + 8;
      if (uVar5 < 0x100) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 4;
      if (uVar2 < 0x10) {
        iVar3 = iVar4;
      }
      uVar5 = uVar2 >> 4;
      if (uVar2 < 0x10) {
        uVar5 = uVar2;
      }
      iVar4 = iVar3 + 2;
      if (uVar5 < 4) {
        iVar4 = iVar3;
      }
      uVar2 = uVar5 >> 2;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      iVar3 = iVar4 + 1;
      if (uVar2 < 2) {
        iVar3 = iVar4;
      }
      if (uVar2 == 0) {
        iVar3 = 0;
      }
    }
    *(int *)(param_1 + 0x1450) = iVar3;
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x820,param_2);
    *(ulonglong *)(param_1 + 0x7f0) = *(ulonglong *)(param_1 + 0x7f0) | 1L << (param_3 & 0x3f);
  }
  return;
}



// FUNCTION 141a65710 FUN_141a65710 body=478 status=ok
// SIG undefined FUN_141a65710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a65710(longlong param_1,uint param_2,uint param_3,longlong *param_4,int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *(uint *)(param_1 + 0x1a94) = param_2;
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3;
    do {
      lVar1 = *param_4;
      *(longlong *)(param_1 + 0x1908 + (ulonglong)param_2 * 8) = lVar1;
      *(ushort *)(param_1 + 0x177e) =
           *(ushort *)(param_1 + 0x177e) | (ushort)(1 << (param_2 & 0x1f));
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x80) != 0)) &&
         ((*(char *)(lVar1 + 0x88) == '\0' || (*param_5 != -1)))) {
        local_c8 = *(undefined8 *)(param_1 + 0x10);
        iVar5 = 0;
        local_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        piVar3 = (int *)FUN_141a501d0(*(longlong *)(param_1 + 0x18) + 0x1c0,4,&local_c8);
        if ((*(char *)(lVar1 + 0x88) != '\0') || (*param_5 != -1)) {
          iVar5 = *param_5;
        }
        *piVar3 = iVar5;
        local_d0 = 4;
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x468) + 0x28);
        local_d8 = local_80;
        (**(code **)(*plVar2 + 0x78))
                  (plVar2,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + 0x18),0,
                   *(undefined8 *)(local_b8 + 0x18));
        *(undefined1 *)(lVar1 + 0x88) = 1;
        FUN_141a7bb70(&local_c8);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 141a658f0 FUN_141a658f0 body=479 status=ok
// SIG undefined FUN_141a658f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a658f0(longlong param_1,uint param_2,uint param_3,longlong *param_4,int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar3 = *(uint *)(param_1 + 0x1a9c);
  if (param_2 <= *(uint *)(param_1 + 0x1a9c)) {
    uVar3 = param_2;
  }
  *(uint *)(param_1 + 0x1a9c) = uVar3;
  if (param_3 != 0) {
    uVar5 = (ulonglong)param_3;
    do {
      lVar1 = *param_4;
      *(longlong *)(param_1 + 0x1a08 + (ulonglong)param_2 * 8) = lVar1;
      *(ushort *)(param_1 + 0x1782) =
           *(ushort *)(param_1 + 0x1782) | (ushort)(1 << (param_2 & 0x1f));
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x80) != 0)) &&
         ((*(char *)(lVar1 + 0x88) == '\0' || (*param_5 != -1)))) {
        local_c8 = *(undefined8 *)(param_1 + 0x10);
        iVar6 = 0;
        local_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        piVar4 = (int *)FUN_141a501d0(*(longlong *)(param_1 + 0x18) + 0x1c0,4,&local_c8);
        if ((*(char *)(lVar1 + 0x88) != '\0') || (*param_5 != -1)) {
          iVar6 = *param_5;
        }
        *piVar4 = iVar6;
        local_d0 = 4;
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x468) + 0x28);
        local_d8 = local_80;
        (**(code **)(*plVar2 + 0x78))
                  (plVar2,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + 0x18),0,
                   *(undefined8 *)(local_b8 + 0x18));
        *(undefined1 *)(lVar1 + 0x88) = 1;
        FUN_141a7bb70(&local_c8);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141a65ad0 FUN_141a65ad0 body=338 status=ok
// SIG undefined FUN_141a65ad0(void)

undefined8 * FUN_141a65ad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x35,0,0x300);
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  lVar2 = 0x30;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xf5] = 0;
  puVar1 = param_1 + 0xfd;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0);
  FUN_141a6c470(param_1 + 0xf7);
  param_1[0x286] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x287) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x288,0,0x300);
  param_1[0x2e8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2e9) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x2ea,0,0x300);
  puVar1 = param_1 + 0x34a;
  lVar2 = 6;
  if (puVar1 <= param_1 + 0x34d) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)puVar1 = 0xffffffff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 4);
    }
  }
  param_1[0x34d] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x34e) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x34f,0,0x300);
  return param_1;
}



// FUNCTION 141a65c30 FUN_141a65c30 body=52 status=ok
// SIG undefined FUN_141a65c30(void)

void FUN_141a65c30(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0x10000;
  param_1[1] = 0x1000100;
                    /* WARNING: Could not recover jumptable at 0x000141a65c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&LAB_141a65d90 + (longlong)(*(int *)(param_2 + 4) + -1) * 4)))();
  return;
}



// FUNCTION 141a65dc0 FUN_141a65dc0 body=86 status=ok
// SIG undefined FUN_141a65dc0(void)

void FUN_141a65dc0(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0x10000;
  *(undefined2 *)((longlong)param_1 + 6) = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141a65e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_141a65f9c + (longlong)(*(int *)(param_2 + 4) + -1) * 4)))();
  return;
}



// FUNCTION 141a65fc0 FUN_141a65fc0 body=86 status=ok
// SIG undefined FUN_141a65fc0(void)

void FUN_141a65fc0(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0x10000;
  *(undefined2 *)((longlong)param_1 + 6) = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141a66014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_141a66178 + (longlong)(*(int *)(param_2 + 4) + -1) * 4)))();
  return;
}



// FUNCTION 141a661a0 FUN_141a661a0 body=543 status=ok
// SIG undefined FUN_141a661a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a661a0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined4 local_78 [2];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_143f3ece8;
  local_88 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_8;
  *param_1 = &PTR_FUN_144daa6b8;
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_5;
  local_90 = param_1;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink();
  LOCK();
  UNLOCK();
  lVar5 = DAT_1469fd1a8 + 1;
  DAT_1469fd1a8 = DAT_1469fd1a8 + 1;
  param_1[0x17] = lVar5;
  uVar4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x418);
  }
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  lVar5 = param_2 + 0x18;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  param_1[0xc] = lVar5;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_3 + 0xc4);
  }
  *(undefined1 *)(param_1 + 0x16) = uVar3;
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_5 + 0xc0);
  }
  *(undefined1 *)((longlong)param_1 + 0xb1) = uVar3;
  if (param_6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_6 + 0xc0);
  }
  *(undefined1 *)((longlong)param_1 + 0xb2) = uVar3;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_4 + 0xc0);
  }
  *(undefined1 *)((longlong)param_1 + 0xb3) = uVar3;
  if (param_7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_7 + 0xf1);
  }
  *(undefined1 *)((longlong)param_1 + 0xb4) = uVar3;
  if (param_2 == 0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x428);
    param_1[0xe] = *(undefined8 *)(param_2 + 0x420);
    param_1[0xf] = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x438);
    param_1[0x10] = *(undefined8 *)(param_2 + 0x430);
    param_1[0x11] = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0x444);
    uVar1 = *(undefined4 *)(param_2 + 0x448);
    uVar2 = *(undefined4 *)(param_2 + 0x44c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x440);
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
    *(undefined4 *)(param_1 + 0x13) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
    uVar6 = *(undefined8 *)(param_2 + 0x458);
    param_1[0x14] = *(undefined8 *)(param_2 + 0x450);
    param_1[0x15] = uVar6;
  }
  lVar5 = *(longlong *)(param_1[3] + 0x10);
  local_78[0] = *(undefined4 *)(lVar5 + 0x34);
  FUN_141a8afc0(local_78,param_1,local_70);
  uVar6 = FD3D12RootSignatureManager::GetRootSignature(lVar5 + 400,local_70);
  param_1[0x18] = uVar6;
  FCachedBoundShaderStateLink_Threadsafe::AddToCache(param_1 + 4);
  return param_1;
}



// FUNCTION 141a663c0 FUN_141a663c0 body=98 status=ok
// SIG undefined FUN_141a663c0(void)

undefined8 * FUN_141a663c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[8] = param_2;
  *param_1 = &PTR_FUN_144daa758;
  param_1[6] = &PTR_LAB_144daa798;
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 141a66430 FD3D12CommandAllocatorManager body=112 status=ok
// SIG undefined FD3D12CommandAllocatorManager(void)

undefined8 *
FD3D12CommandAllocatorManager::FD3D12CommandAllocatorManager
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  param_1[5] = puVar2;
  param_1[4] = puVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  *(undefined4 *)(param_1 + 0xb) = *param_3;
  return param_1;
}



// FUNCTION 141a664a0 FUN_141a664a0 body=359 status=ok
// SIG undefined FUN_141a664a0(void)

undefined8 *
FUN_141a664a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144daa740;
  puVar3 = (undefined8 *)0x0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = &PTR_FUN_144da6378;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[0xb] = puVar2;
  param_1[10] = puVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  param_1[0x13] = puVar3;
  param_1[0x12] = puVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xe4) = param_4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x22),4000);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 141a66610 FD3D12DeferredDeletionQueue body=140 status=ok
// SIG undefined FD3D12DeferredDeletionQueue(void)

undefined8 *
FD3D12DeferredDeletionQueue::FD3D12DeferredDeletionQueue(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar3 = (undefined8 *)0x0;
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[9] = puVar2;
  param_1[8] = puVar2;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  param_1[0xd] = puVar3;
  param_1[0xc] = puVar3;
  return param_1;
}



// FUNCTION 141a666a0 FUN_141a666a0 body=90 status=ok
// SIG undefined FUN_141a666a0(void)

undefined8 * FUN_141a666a0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144daa670;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 141a66700 FUN_141a66700 body=1540 status=ok
// SIG undefined FUN_141a66700(void)

/* WARNING: Removing unreachable block (ram,0x000141a66ba4) */
/* WARNING: Removing unreachable block (ram,0x000141a66bbd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141a66700(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *local_28;
  int local_20;
  
  lVar12 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_144daa7b8;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  iVar10 = *(int *)(param_2 + 1);
  pvVar7 = (void *)*param_2;
  *(int *)(param_1 + 0xb) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 10,iVar10,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[10],pvVar7,(longlong)iVar10 << 3);
  }
  param_1[0xf] = 0xffffffffffffffff;
  DAT_1469fd070 = param_1;
  iVar5 = FUN_1416a5810();
  iVar10 = *(int *)(param_1 + 8);
  iVar9 = iVar10 + iVar5;
  *(int *)(param_1 + 8) = iVar9;
  if (*(int *)((longlong)param_1 + 0x44) < iVar9) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 7);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[7] + (longlong)iVar10 * 8),0,(longlong)iVar5 << 3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(longlong *)param_1[10] + 0x4c);
  lVar1 = DAT_1469fd128;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar6 == DAT_1468c21c0) goto LAB_141a6680f;
  }
  else {
LAB_141a6680f:
    lVar8 = lVar12;
  }
  iVar10 = 0;
  if (-1 < *(int *)(lVar8 + lVar1)) {
    iVar10 = *(int *)(lVar8 + lVar1);
  }
  *(int *)(param_1 + 0xe) = iVar10 << 0x14;
  pvVar7 = (void *)FMemory::Malloc();
  param_1[0xd] = pvVar7;
  _guard_xfg_dispatch_icall_nop(pvVar7,0,(ulonglong)*(uint *)(param_1 + 0xe));
  DAT_146ab6310 = 0;
  DAT_146ab6308 = 0;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_146ab6310,
             &DAT_1468e2360);
  lVar1 = DAT_1469fd140;
  DAT_1464ca1cc = 0;
  DAT_1464ca1f4 = 2;
  DAT_1464ca21c = 0x5a;
  DAT_1464ca244 = 0x3d;
  DAT_1464ca26c = 0x38;
  DAT_1464ca294 = 0x46;
  DAT_1464ca2bc = 0x49;
  DAT_1464ca2e4 = 0x4c;
  _DAT_1464ca7e4 = 0x50;
  DAT_1464ca30c = 0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_141a6690b;
  }
  lVar8 = lVar12;
LAB_141a6690b:
  lVar2 = DAT_1469fd158;
  DAT_1464ca388 = 1;
  if (*(int *)(lVar8 + lVar1) == 0) {
    DAT_1464ca384 = 0x2c;
    DAT_1464ca37c = 4;
    _DAT_1464ca8ac = 0x2f;
    DAT_1464ca8a4 = 4;
  }
  else {
    DAT_1464ca384 = 0x13;
    DAT_1464ca37c = 5;
    _DAT_1464ca8ac = 0x16;
    DAT_1464ca8a4 = 5;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar12 = 4;
  }
  DAT_1464ca3b0 = 1;
  if (*(int *)(lVar2 + lVar12) == 0) {
    DAT_1464ca3ac = 0x35;
    DAT_1464ca3a4 = 2;
  }
  else {
    DAT_1464ca3ac = 0x27;
    DAT_1464ca3a4 = 4;
  }
  DAT_1464ca3d4 = 0x29;
  for (iVar10 = 0x1f; 0x4000U >> iVar10 == 0; iVar10 = iVar10 + -1) {
  }
  DAT_1464ca3fc = 0x23;
  DAT_1464ca424 = 0x22;
  _DAT_1464ca44c = 0x22;
  _DAT_1464ca474 = 0x10;
  _DAT_1464ca49c = 0x18;
  _DAT_1464ca4c4 = 0xb;
  _DAT_1464ca4ec = 0x2c;
  _DAT_1464ca514 = 0x36;
  _DAT_1464ca53c = 0x36;
  DAT_1464ca334 = 0x1a;
  DAT_1464ca32c = 4;
  DAT_1464ca35c = 10;
  DAT_1464ca354 = 8;
  _DAT_1464ca5dc = 0x1a;
  DAT_1464ca5e0 = 1;
  DAT_1464ca5d4 = 4;
  _DAT_1464ca58c = 0x33;
  _DAT_1464ca564 = 0x53;
  _DAT_1464ca5b4 = 0x42;
  _DAT_1464ca604 = 0x41;
  DAT_1464ca62c = 0x2a;
  _DAT_1464ca654 = 0x2b;
  DAT_1464ca6cc = 0x39;
  _DAT_1464ca6f4 = 0x3b;
  _DAT_1464ca71c = 0xc;
  _DAT_1464ca744 = 0xe;
  _DAT_1464ca76c = 0x55;
  _DAT_1464ca794 = 0x1b;
  _DAT_1464cab2c = 0x1e;
  _DAT_1464cab54 = 0x1f;
  _DAT_1464ca80c = 0x31;
  _DAT_1464ca94c = 3;
  _DAT_1464ca974 = 0x24;
  _DAT_1464caa64 = 0x5f;
  _DAT_1464caa8c = 0x61;
  _DAT_1464caab4 = 0x3e;
  _DAT_1464cabcc = 0x56;
  _DAT_1464cab7c = 0xb;
  _DAT_1464caba4 = 0xd;
  DAT_146ab62e8 = 1;
  DAT_1464c9c64 = 0x4000;
  _DAT_1464c9c68 = 0x4000;
  _DAT_1464c9c28 = 0x800;
  DAT_146ab6329 = 1;
  for (iVar5 = 0x1f; 0x3fffU >> iVar5 == 0; iVar5 = iVar5 + -1) {
  }
  DAT_1464c9c5c = 0x4000;
  DAT_1464c9c60 = 0x4000;
  DAT_1464c9c0c = (~((0x1f - iVar10) * 0x4000000 >> 0x1f) & 0x20U - (0x1f - iVar5)) + 1;
  DAT_146ab6326 = 1;
  DAT_146ab6328 = 1;
  if (0xd < DAT_1464c9c0c) {
    DAT_1464c9c0c = 0xe;
  }
  DAT_146ab62df = 1;
  DAT_146ab62ff = 1;
  DAT_146ab62f2 = 1;
  DAT_146ab62e0 = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd1e8) && (_Init_thread_header(&DAT_1469fd1e8), DAT_1469fd1e8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fd1e0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GPUStatsMaxQueriesPerFrame");
    _Init_thread_footer(&DAT_1469fd1e8);
  }
  plVar3 = DAT_1469fd1e0;
  if (DAT_1469fd1e0 != (longlong *)0x0) {
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,0x400);
    puVar11 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar11 = local_28;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar11,0x8000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  DAT_1464c9c58 = 1;
  return param_1;
}



// FUNCTION 141a66d10 FUN_141a66d10 body=131 status=ok
// SIG undefined FUN_141a66d10(void)

undefined8 * FUN_141a66d10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_144daa728;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 141a66da0 FD3D12GeometryShader body=195 status=ok
// SIG undefined FD3D12GeometryShader(void)

undefined8 * FD3D12GeometryShader::FD3D12GeometryShader(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144daa698;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 141a66e70 FUN_141a66e70 body=473 status=ok
// SIG undefined FUN_141a66e70(void)

undefined8 *
FUN_141a66e70(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144daa5f0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  uVar2 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar2;
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  uVar2 = param_2[5];
  param_1[7] = param_2[4];
  param_1[8] = uVar2;
  uVar2 = param_2[7];
  param_1[9] = param_2[6];
  param_1[10] = uVar2;
  uVar2 = param_2[9];
  param_1[0xb] = param_2[8];
  param_1[0xc] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xd] = param_2[10];
  param_1[0xe] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xf] = param_2[0xc];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0x11] = param_2[0xe];
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x13] = param_2[0x10];
  param_1[0x14] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x15] = param_2[0x12];
  param_1[0x16] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x17] = param_2[0x14];
  param_1[0x18] = uVar2;
  param_1[0x19] = param_2[0x16];
  param_1[0x1a] = *(undefined8 *)(param_3 + 0xc0);
  param_1[0x24] = param_4;
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  param_1[0x1b] = *(undefined8 *)(param_3 + 0x70);
  param_1[0x1c] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  param_1[0x1d] = *(undefined8 *)(param_3 + 0x80);
  param_1[0x1e] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  param_1[0x1f] = *(undefined8 *)(param_3 + 0x90);
  param_1[0x20] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0xa8);
  param_1[0x21] = *(undefined8 *)(param_3 + 0xa0);
  param_1[0x22] = uVar2;
  if ((param_1[4] == 0) || (*(char *)(param_1[4] + 0xc4) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x23) = uVar3;
  if ((param_1[7] == 0) || (*(char *)(param_1[7] + 0xc0) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11b) = uVar3;
  if ((param_1[5] == 0) || (*(char *)(param_1[5] + 0xc0) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x119) = uVar3;
  if ((param_1[6] == 0) || (*(char *)(param_1[6] + 0xc0) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11a) = uVar3;
  if ((param_1[8] == 0) || (*(char *)(param_1[8] + 0xf1) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11c) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x11d) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141a67050 FUN_141a67050 body=1116 status=ok
// SIG undefined FUN_141a67050(void)

/* WARNING: Removing unreachable block (ram,0x000141a672f8) */

undefined8 * FUN_141a67050(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  
  param_1[1] = param_2;
  plVar1 = param_1 + 0x34;
  *param_1 = &PTR_FUN_144daa600;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *plVar1 = 0;
  param_1[0x35] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x36),4000);
  param_1[0x3b] = 0;
  plVar2 = param_1 + 0x45;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *plVar2 = 0;
  param_1[0x46] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x47),4000);
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4c));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4d));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4e));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4f));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x50),4000);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  lVar4 = cpuid_Version_info(1);
  uVar5 = *(uint *)(lVar4 + 0xc);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  DAT_1469fd114 = (byte)(uVar5 >> 0x14) & 1;
  param_1[0x79] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  uVar6 = FUN_1415ab270(1);
  param_1[0x69] = uVar6;
  uVar6 = FUN_1415ab270(1);
  param_1[0x6a] = uVar6;
  (**(code **)(*(longlong *)param_1[0x69] + 0x18))();
  (**(code **)(*(longlong *)param_1[0x6a] + 0x18))();
  plVar7 = (longlong *)FTaskGraphInterface::Get();
  uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  if (*(int *)((longlong)param_1 + 0x1ac) < (int)uVar5) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,uVar5);
  }
  if (*(int *)((longlong)param_1 + 0x234) < (int)uVar5) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,uVar5);
  }
  if (uVar5 != 0) {
    uVar10 = (ulonglong)uVar5;
    do {
      puVar8 = (undefined1 *)operator_new(0x20);
      puVar9 = (undefined1 *)0x0;
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 1;
        uVar6 = FUN_1415ab270(1);
        *(undefined8 *)(puVar8 + 8) = uVar6;
        *(undefined4 *)(puVar8 + 0x10) = 1;
        *(undefined8 *)(puVar8 + 0x18) = 0;
        (**(code **)(**(longlong **)(puVar8 + 8) + 0x18))();
        puVar9 = puVar8;
      }
      iVar3 = *(int *)(param_1 + 0x35);
      *(int *)(param_1 + 0x35) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x1ac) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      *(undefined1 **)(*plVar1 + (longlong)iVar3 * 8) = puVar9;
      puVar8 = (undefined1 *)operator_new(0x20);
      puVar9 = (undefined1 *)0x0;
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 1;
        uVar6 = FUN_1415ab270(1);
        *(undefined8 *)(puVar8 + 8) = uVar6;
        *(undefined4 *)(puVar8 + 0x10) = 1;
        *(undefined8 *)(puVar8 + 0x18) = 0;
        (**(code **)(**(longlong **)(puVar8 + 8) + 0x18))();
        puVar9 = puVar8;
      }
      iVar3 = *(int *)(param_1 + 0x46);
      *(int *)(param_1 + 0x46) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x234) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
      }
      *(undefined1 **)(*plVar2 + (longlong)iVar3 * 8) = puVar9;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 141a674b0 FUN_141a674b0 body=34 status=ok
// SIG undefined FUN_141a674b0(void)

undefined8 *
FUN_141a674b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = param_4;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 141a674e0 FUN_141a674e0 body=34 status=ok
// SIG undefined FUN_141a674e0(void)

undefined8 *
FUN_141a674e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = param_4;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 141a67510 FUN_141a67510 body=338 status=ok
// SIG undefined FUN_141a67510(void)

undefined8 *
FUN_141a67510(undefined8 *param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x24)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(int *)(param_1 + 7) = param_5;
  *(int *)((longlong)param_1 + 0x3c) = param_5 + -1;
  *(int *)((longlong)param_1 + 0x4c) = param_4 + -1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (*param_3 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(int *)((longlong)param_1 + 0x54) = *param_3;
  *(int *)(param_1 + 0xb) = param_4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(int *)((longlong)param_1 + 0x24) < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  iVar3 = *(int *)(param_1 + 7);
  if (*(int *)((longlong)param_1 + 0x34) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 5);
    iVar3 = *(int *)(param_1 + 7);
  }
  iVar1 = *(int *)(param_1 + 6);
  iVar2 = iVar1 + iVar3;
  *(int *)(param_1 + 6) = iVar2;
  if (*(int *)((longlong)param_1 + 0x34) < iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 5);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar1 * 0x20 + param_1[5]),0,(longlong)iVar3 << 5);
  return param_1;
}



// FUNCTION 141a67670 FUN_141a67670 body=452 status=ok
// SIG undefined FUN_141a67670(void)

undefined8 *
FUN_141a67670(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined8 *param_5,longlong *param_6,undefined1 param_7,undefined4 *param_8)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  short sVar10;
  
  *param_1 = &PTR_FUN_1440104c8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144daa668;
  param_1[3] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  lVar2 = *param_6;
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = param_7;
  uVar9 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar9;
  uVar9 = param_5[3];
  param_1[8] = param_5[2];
  param_1[9] = uVar9;
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar5 = *(undefined4 *)(param_5 + 5);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0x2c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  param_1[0xc] = param_5[6];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  iVar8 = FUN_141a71f60(*(undefined4 *)(param_1 + 10));
  if ((iVar8 == 0x13) || (uVar7 = 1, iVar8 == 0x2c)) {
    uVar7 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x7d) = uVar7;
  *(undefined2 *)((longlong)param_1 + 0x7e) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  uVar4 = param_8[1];
  uVar5 = param_8[2];
  uVar6 = param_8[3];
  *(undefined4 *)(param_1 + 0x17) = *param_8;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar6;
  *(undefined4 *)(param_1 + 0x19) = param_8[4];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (((longlong *)param_1[3] != (longlong *)0x0) && (*(int *)(param_1 + 6) == 1)) {
    uVar9 = (**(code **)(*(longlong *)param_1[3] + 0x58))();
    param_1[0x1a] = uVar9;
  }
  sVar10 = 1;
  if (*(int *)(param_1 + 6) != 4) {
    sVar10 = *(short *)((longlong)param_1 + 0x4c);
  }
  *(ushort *)((longlong)param_1 + 0x7e) =
       (ushort)*(byte *)((longlong)param_1 + 0x7d) * sVar10 * *(short *)((longlong)param_1 + 0x4e);
  FUN_141a704a0(param_1);
  if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
    CResourceState::Initialize(param_1 + 0x10,*(undefined2 *)((longlong)param_1 + 0x7e));
    CResourceState::SetResourceState(param_1 + 0x10,param_4);
  }
  puVar3 = (undefined8 *)*param_6;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return param_1;
}



// FUNCTION 141a67840 FUN_141a67840 body=69 status=ok
// SIG undefined FUN_141a67840(void)

undefined8 * FUN_141a67840(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 141a67890 FUN_141a67890 body=1396 status=ok
// SIG undefined FUN_141a67890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_141a67890(int *param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_78 [16];
  int local_68 [2];
  int *local_60;
  longlong local_58;
  int *local_50;
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)local_78;
  local_60 = local_68;
  local_50 = param_1;
  uVar8 = 0;
  local_48[4] = 3;
  local_48[5] = 5;
  local_68[0] = 0;
  *param_1 = 0;
  local_68[1] = 2;
  local_58 = 2;
  local_48[0] = 1;
  local_48[1] = 0;
  local_48[2] = 4;
  local_48[3] = 2;
  do {
    lVar12 = 6;
    iVar4 = *local_60;
    piVar11 = local_48;
    do {
      iVar5 = *piVar11;
      pbVar1 = (byte *)(param_2 + (longlong)iVar5 * 4);
      if (iVar4 == 0) {
        bVar3 = pbVar1[2];
        uVar13 = uVar8;
        if (bVar3 != 0) {
          piVar2 = param_1 + (uVar8 + 0x2b) * 6;
          *piVar2 = 0;
          piVar2[1] = (uint)bVar3;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = (1 < param_3) + 4;
          piVar2[5] = -1;
          switch(iVar5) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 5;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
            iVar6 = 3;
            break;
          case 4:
            iVar6 = 4;
            break;
          case 5:
            iVar6 = 0;
            break;
          default:
            iVar6 = -1;
          }
          uVar13 = (ulonglong)((int)uVar8 + 1);
          param_1[uVar8 * 8 + 2] = 0;
          param_1[uVar8 * 8 + 8] = iVar6;
          param_1[uVar8 * 8 + 4] = 1;
          *(int **)(param_1 + uVar8 * 8 + 6) = piVar2;
          *param_1 = *param_1 + 1;
        }
        bVar3 = pbVar1[1];
        uVar8 = uVar13;
        if (0x10 < bVar3) {
          piVar2 = param_1 + (uVar13 + 0x2b) * 6;
          *piVar2 = 2;
          piVar2[1] = bVar3 - 0x10;
          piVar2[2] = 0x10;
          piVar2[3] = 0;
          piVar2[4] = (2 < param_3) + 4;
          piVar2[5] = -1;
          switch(iVar5) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 5;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
            iVar6 = 3;
            break;
          case 4:
            iVar6 = 4;
            break;
          case 5:
            iVar6 = 0;
            break;
          default:
            iVar6 = -1;
          }
          uVar8 = (ulonglong)((int)uVar13 + 1);
          param_1[uVar13 * 8 + 2] = 0;
          param_1[uVar13 * 8 + 8] = iVar6;
          param_1[uVar13 * 8 + 4] = 1;
          *(int **)(param_1 + uVar13 * 8 + 6) = piVar2;
          *param_1 = *param_1 + 1;
        }
        bVar3 = *pbVar1;
        uVar13 = uVar8;
        if (bVar3 != 0) {
          piVar2 = param_1 + (uVar8 + 0x2b) * 6;
          *piVar2 = 3;
          piVar2[1] = (uint)bVar3;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = (uint)(1 < param_3);
          piVar2[5] = -1;
          switch(iVar5) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 5;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
            iVar6 = 3;
            break;
          case 4:
            iVar6 = 4;
            break;
          case 5:
            iVar6 = 0;
            break;
          default:
            iVar6 = -1;
          }
          uVar13 = (ulonglong)((int)uVar8 + 1);
          param_1[uVar8 * 8 + 2] = 0;
          param_1[uVar8 * 8 + 8] = iVar6;
          param_1[uVar8 * 8 + 4] = 1;
          *(int **)(param_1 + uVar8 * 8 + 6) = piVar2;
          *param_1 = *param_1 + 1;
        }
        bVar3 = pbVar1[3];
        uVar8 = uVar13;
        if (bVar3 != 0) {
          iVar6 = 0;
          param_1[(uVar13 + 0x2b) * 6] = 1;
          piVar2 = param_1 + (uVar13 + 0x2b) * 6;
          piVar2[1] = (uint)bVar3;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = (2 < param_3) + 2;
          piVar2[5] = -1;
          switch(iVar5) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 5;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
            iVar6 = 3;
            break;
          case 4:
            iVar6 = 4;
            break;
          case 5:
            break;
          default:
            iVar6 = -1;
          }
          uVar8 = (ulonglong)((int)uVar13 + 1);
          param_1[uVar13 * 8 + 2] = 0;
          param_1[uVar13 * 8 + 8] = iVar6;
          param_1[uVar13 * 8 + 4] = 1;
          *(int **)(param_1 + uVar13 * 8 + 6) = piVar2;
          *param_1 = *param_1 + 1;
        }
      }
      else if ((iVar4 == 2) && (uVar10 = 0, uVar13 = uVar8, pbVar1[1] != 0)) {
        do {
          uVar8 = uVar13;
          if (0xf < uVar10) break;
          switch(iVar5) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 5;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
            iVar6 = 3;
            break;
          case 4:
            iVar6 = 4;
            break;
          case 5:
            iVar6 = 0;
            break;
          default:
            iVar6 = -1;
          }
          uVar8 = (ulonglong)((int)uVar13 + 1);
          param_1[uVar13 * 8 + 2] = 2;
          param_1[uVar13 * 8 + 8] = iVar6;
          param_1[uVar13 * 8 + 4] = uVar10;
          uVar10 = uVar10 + 1;
          param_1[uVar13 * 8 + 5] = 0;
          param_1[uVar13 * 8 + 6] = 8;
          *param_1 = *param_1 + 2;
          uVar13 = uVar8;
        } while (uVar10 < pbVar1[1]);
      }
      piVar11 = piVar11 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar12 = 6;
    local_60 = local_60 + 1;
    local_58 = local_58 + -1;
    if (local_58 == 0) {
      piVar11 = local_48;
      uVar10 = (uint)(*(char *)(param_2 + 0x18) != '\0');
      do {
        lVar9 = (longlong)*piVar11;
        if ((((*(char *)(param_2 + 2 + lVar9 * 4) == '\0') &&
             (*(char *)(param_2 + 1 + lVar9 * 4) == '\0')) &&
            (*(char *)(param_2 + 3 + lVar9 * 4) == '\0')) &&
           (*(char *)(param_2 + lVar9 * 4) == '\0')) {
          switch(*piVar11) {
          case 0:
            uVar7 = 2;
            break;
          case 1:
            uVar7 = 0x20;
            break;
          case 2:
            uVar7 = 4;
            break;
          case 3:
            uVar7 = 8;
            break;
          case 4:
            uVar7 = 0x10;
            break;
          case 5:
            uVar7 = 0;
            break;
          default:
            uVar7 = 0xffffffff;
          }
          uVar10 = uVar10 | uVar7;
        }
        piVar11 = piVar11 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      param_1[0x1c8] = 0;
      param_1[0x1ca] = 0;
      param_1[0x1cb] = 0;
      *(int **)(param_1 + 0x1c6) = param_1 + 2;
      param_1[0x1c2] = 2;
      param_1[0x1c4] = (int)uVar8;
      param_1[0x1cc] = uVar10;
      return param_1;
    }
  } while( true );
}



// FUNCTION 141a67ea0 FUN_141a67ea0 body=57 status=ok
// SIG undefined FUN_141a67ea0(void)

undefined8 * FUN_141a67ea0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144da6560;
  FUN_141a65ad0(param_1 + 7);
  FUN_141a4bc80(param_1 + 0x3c4);
  return param_1;
}



// FUNCTION 141a67ee0 ~TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator> body=111 status=ok
// SIG undefined ~TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator>(void)

void TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator>::
     ~TArray<TRefCountPtr<FD3D12SegHeap>,FDefaultAllocator>(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 1);
  plVar4 = (longlong *)*param_1;
  if (iVar5 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar4;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  return;
}



// FUNCTION 141a67f50 FUN_141a67f50 body=161 status=ok
// SIG undefined FUN_141a67f50(void)

void FUN_141a67f50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = (undefined8 *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    do {
      *puVar4 = &PTR_FUN_144da6378;
      if (puVar4[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar4[1] + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (lVar3 = puVar4[1], lVar3 != 0)) {
          FUN_141a4db60(lVar3);
          FMemory::operator_delete(lVar3,0x110);
        }
      }
      puVar4 = puVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar4);
  return;
}



// FUNCTION 141a68000 FUN_141a68000 body=165 status=ok
// SIG undefined FUN_141a68000(void)

void FUN_141a68000(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  while (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar3 != 0) {
      *(undefined ***)(lVar3 + 8) = &PTR_FUN_144da6378;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) {
          FUN_141a4db60(lVar4);
          FMemory::operator_delete(lVar4,0x110);
        }
      }
      FMemory::operator_delete(lVar3,0x18);
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141a680b0 FUN_141a680b0 body=175 status=ok
// SIG undefined FUN_141a680b0(void)

void FUN_141a680b0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x58);
    LOCK();
    piVar1 = (int *)(lVar5 + 0x60);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(lVar5 + 0x68) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000141a68156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar6)(puVar6,1);
        return;
      }
      LOCK();
      bVar7 = *(int *)(lVar5 + 100) == 0;
      if (bVar7) {
        *(int *)(lVar5 + 100) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar6;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141a68160 FUN_141a68160 body=100 status=ok
// SIG undefined FUN_141a68160(void)

void FUN_141a68160(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141a7c7a0(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a681d0 ~FD3D12DeferredDeletionQueue body=332 status=ok
// SIG undefined ~FD3D12DeferredDeletionQueue(void)

void FD3D12DeferredDeletionQueue::~FD3D12DeferredDeletionQueue(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  
  do {
    if (**(longlong **)(param_1 + 0x68) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
      while (lVar1 != 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = *puVar4;
        FMemory::operator_delete(puVar4,0x10);
        lVar1 = *(longlong *)(param_1 + 0x68);
      }
      lVar1 = *(longlong *)(param_1 + 0x48);
      while (lVar1 != 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x48) = *puVar4;
        FMemory::operator_delete(puVar4,0x18);
        lVar1 = *(longlong *)(param_1 + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x000141a68315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      return;
    }
    plVar6 = *(longlong **)(**(longlong **)(param_1 + 0x68) + 8);
    lVar1 = **(longlong **)(param_1 + 0x68);
    if (lVar1 != 0) {
      plVar6 = *(longlong **)(lVar1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      *(longlong *)(param_1 + 0x68) = lVar1;
      *(undefined8 *)(lVar1 + 8) = 0;
      FMemory::operator_delete(uVar2,0x10);
    }
    plVar3 = (longlong *)plVar6[8];
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      bVar7 = (int)plVar6[6] == 0;
      if (bVar7) {
        *(int *)(plVar6 + 6) = 0;
      }
      UNLOCK();
      if (!bVar7) {
        FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(plVar6);
      }
code_r0x000141a68274:
      if (plVar6[8] != 0) {
        (**(code **)(*(longlong *)plVar6[7] + 0x20))((longlong *)plVar6[7],0xffffffff,0);
        goto LAB_141a6828c;
      }
    }
    else {
      cVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,plVar6);
      if (cVar5 == '\0') goto code_r0x000141a68274;
      FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(plVar6);
      if ((longlong *)plVar6[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[7] + 0x10))();
      }
LAB_141a6828c:
      plVar6[8] = 0;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,1);
  } while( true );
}



// FUNCTION 141a68320 FUN_141a68320 body=44 status=ok
// SIG undefined FUN_141a68320(void)

void FUN_141a68320(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144daa670;
  FUN_141a7bb70(param_1 + 2);
  *param_1 = &PTR_FUN_144da60b0;
  return;
}



// FUNCTION 141a68350 FUN_141a68350 body=50 status=ok
// SIG undefined FUN_141a68350(void)

void FUN_141a68350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144daa728;
  FUN_141a702a0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141a68390 FUN_141a68390 body=873 status=ok
// SIG undefined FUN_141a68390(void)

void FUN_141a68390(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144daa5f0;
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar6 = lVar7;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar6 = lVar7;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar6 = lVar7;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar6 = lVar7;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[7];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar6 = lVar7;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar5 != 0) {
            lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar7 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141a68700 FUN_141a68700 body=630 status=ok
// SIG undefined FUN_141a68700(void)

void FUN_141a68700(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_1 = &PTR__scalar_deleting_destructor__144da6250;
  param_1[1] = &PTR_LAB_144da6270;
  param_1[6] = &PTR_LAB_144da6278;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x40);
  plVar7 = (longlong *)param_1[0x3a];
  iVar8 = *(int *)(param_1 + 0x3b);
  plVar9 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = param_1 + 0x39;
  }
  if (iVar8 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar9;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar10) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar10) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar9 = plVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    plVar7 = (longlong *)param_1[0x3a];
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  plVar7 = (longlong *)param_1[0x32];
  iVar8 = *(int *)(param_1 + 0x33);
  plVar9 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = param_1 + 0x31;
  }
  if (iVar8 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar9;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar10) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar10) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar9 = plVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    plVar7 = (longlong *)param_1[0x32];
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  FUN_141a7bb70(param_1 + 0x1a);
  FUN_141a7bb70(param_1 + 8);
  param_1[6] = &PTR_FUN_144da60b0;
  param_1[1] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141a68980 FUN_141a68980 body=891 status=ok
// SIG undefined FUN_141a68980(void)

void FUN_141a68980(undefined8 *param_1)

{
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  *param_1 = &PTR_FUN_144daa600;
  FUN_141a6ba20();
  iVar4 = 0;
  if (param_1[0x69] != 0) {
    FUN_1415b5910();
    param_1[0x69] = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1415b5910();
    param_1[0x6a] = 0;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  iVar2 = iVar4;
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  }
  for (; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x35))); iVar2 = iVar2 + 1) {
    lVar6 = *(longlong *)(param_1[0x34] + (longlong)iVar2 * 8);
    if (lVar6 != 0) {
      (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))();
      FUN_1415b5910(*(undefined8 *)(lVar6 + 8));
      FMemory::operator_delete(lVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x34,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  }
  for (; (-1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x46))); iVar4 = iVar4 + 1) {
    lVar6 = *(longlong *)(param_1[0x45] + (longlong)iVar4 * 8);
    if (lVar6 != 0) {
      (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))();
      FUN_1415b5910(*(undefined8 *)(lVar6 + 8));
      FMemory::operator_delete(lVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (*(int *)((longlong)param_1 + 0x234) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x45,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  lVar6 = 2;
  plVar7 = param_1 + 0x84;
  do {
    plVar5 = (longlong *)plVar7[-2];
    lVar6 = lVar6 + -1;
    uVar8 = (longlong)(int)plVar7[-1] & 0x1fffffffffffffff;
    if (plVar5 + (int)plVar7[-1] < plVar5) {
      uVar8 = 0;
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar8);
      plVar5 = (longlong *)plVar7[-2];
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (plVar7[-0xc] != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + -0xc;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  FUN_141a68160(param_1 + 0x55);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  if (param_1[0x45] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3b);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FUN_141a68160(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  return;
}



// FUNCTION 141a68d00 FUN_141a68d00 body=131 status=ok
// SIG undefined FUN_141a68d00(void)

void FUN_141a68d00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x18);
    (**(code **)(*plVar3 + 0x48))(plVar3,0,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
  }
  FUN_140590de0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141a68d90 thunk_FUN_141a7bb70 body=5 status=ok
// SIG undefined thunk_FUN_141a7bb70(void)

void thunk_FUN_141a7bb70(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 1) {
    if (*(char *)((longlong)param_1 + 0x79) != '\0') {
      FUN_141a6ae70(param_1,1);
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    }
    iVar3 = (int)param_1[5];
    if ((iVar3 == 9) || (iVar3 == 8)) {
      FUN_141a5efd0(*param_1 + 0x6c0,param_1);
      iVar3 = (int)param_1[5];
    }
    if (iVar3 == 9) {
      LOCK();
      bVar4 = DAT_1469fd110 == 0;
      if (bVar4) {
        DAT_1469fd110 = 0;
      }
      UNLOCK();
      if (!bVar4) {
        FD3D12RefCount::Release(param_1[2]);
        return;
      }
    }
  }
  else {
    if (iVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000141a7bbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],param_1);
      return;
    }
    if (iVar3 != 4) {
      return;
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (*(char *)((longlong)puVar2 + 0xb6) != '\0') {
    FUN_141a70ed0(*(longlong *)(*param_1 + 0x10) + 0x740,puVar2);
    return;
  }
  LOCK();
  piVar1 = (int *)(puVar2 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar3 == 1) && (puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141a7bc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 141a68da0 ~FD3D12RootSignatureManager body=501 status=ok
// SIG undefined ~FD3D12RootSignatureManager(void)

void FD3D12RootSignatureManager::~FD3D12RootSignatureManager(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x58);
  puStack_28 = (uint *)(param_1 + 0x40);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar6 = *puVar7;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar6 == 0) {
      lVar5 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar3) goto LAB_141a68e5d;
      uVar6 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_141a68e5d:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x58);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar5 = *(longlong *)(*plVar1 + 0x20 + (longlong)iStack_5c * 0x30);
      if (lVar5 != 0) {
        if (*(longlong **)(lVar5 + 0x60) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar5 + 0x60) + 0x10))();
        }
        if (*(longlong **)(lVar5 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar5 + 8) + 0x10))();
        }
        FMemory::operator_delete(lVar5,0x68);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
                    /* WARNING: Could not recover jumptable at 0x000141a68f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 141a68fa0 ~FDiskCacheInterface body=141 status=ok
// SIG undefined ~FDiskCacheInterface(void)

void FDiskCacheInterface::~FDiskCacheInterface(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)param_1[10];
  uVar2 = (longlong)(int)param_1[0xb] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_1[0xb] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
    plVar1 = (longlong *)param_1[10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a69030 FUN_141a69030 body=14 status=ok
// SIG undefined FUN_141a69030(void)

void FUN_141a69030(undefined4 param_1)

{
  FUN_141a6b0c0(&DAT_1469fd078,param_1);
  return;
}



// FUNCTION 141a69040 FUN_141a69040 body=15 status=ok
// SIG undefined FUN_141a69040(void)

void FUN_141a69040(undefined8 param_1)

{
  FUN_1415b1b00(&DAT_1469fd078,param_1);
  return;
}



// FUNCTION 141a69050 FUN_141a69050 body=124 status=ok
// SIG undefined FUN_141a69050(void)

longlong FUN_141a69050(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)) {
        FUN_141a4db60(lVar3);
        FMemory::operator_delete(lVar3,0x110);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 8) = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 141a690d0 FUN_141a690d0 body=448 status=ok
// SIG undefined FUN_141a690d0(void)

ulonglong FUN_141a690d0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  puVar2 = (ulonglong *)*param_2;
  puVar3 = (ulonglong *)*param_1;
  uVar4 = *puVar2;
  if (((((((*puVar3 == uVar4) && (uVar4 = puVar2[1], puVar3[1] == uVar4)) &&
         (uVar4 = puVar2[4], puVar3[4] == uVar4)) &&
        ((uVar4 = puVar2[5], puVar3[5] == uVar4 && (uVar4 = puVar2[3], puVar3[3] == uVar4)))) &&
       ((uVar4 = puVar2[2], puVar3[2] == uVar4 &&
        ((uVar4 = puVar2[6], puVar3[6] == uVar4 && (uVar4 = puVar2[7], puVar3[7] == uVar4)))))) &&
      (uVar4 = puVar2[8], puVar3[8] == uVar4)) &&
     (((uVar4 = 0, (char)puVar3[9] == (char)puVar2[9] &&
       (uVar4 = (ulonglong)*(uint *)((longlong)puVar2 + 0x4c),
       *(uint *)((longlong)puVar3 + 0x4c) == *(uint *)((longlong)puVar2 + 0x4c))) &&
      (uVar4 = (ulonglong)(uint)puVar2[10], (uint)puVar3[10] == (uint)puVar2[10])))) {
    uVar7 = 0;
    puVar5 = (uint *)((longlong)puVar3 + 0x54);
    uVar9 = 0;
    lVar8 = (longlong)puVar2 - (longlong)puVar3;
    do {
      uVar4 = (ulonglong)*(uint *)(lVar8 + (longlong)puVar5);
      if (*puVar5 != *(uint *)(lVar8 + (longlong)puVar5)) goto LAB_141a6928d;
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 < 8);
    uVar9 = 0;
    puVar5 = (uint *)((longlong)puVar3 + 0x74);
    do {
      uVar4 = (ulonglong)*(uint *)((longlong)puVar5 + lVar8);
      if (*puVar5 != *(uint *)((longlong)puVar5 + lVar8)) goto LAB_141a6928d;
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 < 8);
    uVar9 = 0;
    pcVar6 = (char *)((longlong)puVar3 + 0x94);
    do {
      uVar4 = 0;
      if (*pcVar6 != pcVar6[lVar8]) goto LAB_141a6928d;
      uVar9 = uVar9 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar9 < 8);
    pcVar6 = (char *)((longlong)puVar3 + 0x9c);
    do {
      uVar4 = 0;
      if (*pcVar6 != pcVar6[lVar8]) goto LAB_141a6928d;
      uVar7 = uVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar7 < 8);
    uVar4 = (ulonglong)*(uint *)((longlong)puVar2 + 0xa4);
    if ((((*(uint *)((longlong)puVar3 + 0xa4) == *(uint *)((longlong)puVar2 + 0xa4)) &&
         (uVar4 = (ulonglong)(uint)puVar2[0x15], (uint)puVar3[0x15] == (uint)puVar2[0x15])) &&
        ((uVar4 = 0, *(char *)((longlong)puVar3 + 0xac) == *(char *)((longlong)puVar2 + 0xac) &&
         ((uVar4 = 0, *(char *)((longlong)puVar3 + 0xad) == *(char *)((longlong)puVar2 + 0xad) &&
          (uVar4 = 0, *(char *)((longlong)puVar3 + 0xae) == *(char *)((longlong)puVar2 + 0xae)))))))
       && ((uVar4 = 0, *(char *)((longlong)puVar3 + 0xaf) == *(char *)((longlong)puVar2 + 0xaf) &&
           (uVar4 = (ulonglong)(uint)puVar2[0x16], (uint)puVar3[0x16] == (uint)puVar2[0x16])))) {
      uVar1 = *(ushort *)((longlong)puVar2 + 0xb4);
      uVar4 = (ulonglong)uVar1;
      if (*(ushort *)((longlong)puVar3 + 0xb4) == uVar1) {
        return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
      }
    }
  }
LAB_141a6928d:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141a69290 FUN_141a69290 body=133 status=ok
// SIG undefined FUN_141a69290(void)

void FUN_141a69290(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(200);
  if (lVar1 != 0) {
    FUN_141a661a0(lVar1,*(undefined8 *)*param_1,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],
                  *(undefined8 *)param_1[3],*(undefined8 *)param_1[4],*(undefined8 *)param_1[5],
                  *(undefined8 *)(**(longlong **)(param_1[6] + 0x50) + 0xd50));
    return;
  }
  return;
}



// FUNCTION 141a69320 FUN_141a69320 body=159 status=ok
// SIG undefined FUN_141a69320(void)

void FUN_141a69320(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(*param_1 + 0x18) = 0;
  uVar2 = *(uint *)param_1[1];
  if (uVar2 < *(uint *)param_1[2]) {
    do {
      uVar3 = (ulonglong)uVar2;
      *(ushort *)(param_1[4] + uVar3 * 2) =
           (1 << ((byte)*(undefined4 *)(param_1[3] + 0x1dbc + uVar3 * 4) & 0x1f)) - 1U &
           *(ushort *)(param_1[5] + uVar3 * 2);
      if (*(short *)(param_1[4] + uVar3 * 2) != 0) {
        if (*(int *)(param_1[3] + 0x30) == 1) {
          *(uint *)(*param_1 + uVar3 * 4) =
               (uint)*(byte *)(*(longlong *)param_1[6] + 0x2c + uVar3 * 8);
        }
        else {
          *(undefined4 *)(*param_1 + uVar3 * 4) = *(undefined4 *)(param_1[3] + 0x1dbc + uVar3 * 4);
        }
        piVar1 = (int *)(*param_1 + 0x18);
        *piVar1 = *piVar1 + *(int *)(*param_1 + uVar3 * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)param_1[2]);
  }
  return;
}



// FUNCTION 141a693c0 operator() body=1358 status=ok
// SIG undefined operator()(void)

ulonglong equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                    (undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  
  pcVar11 = *(char **)(param_3 + 0x28);
  if (((((*(char **)(param_2 + 0x28) == pcVar11) &&
        (pcVar11 = *(char **)(param_3 + 0x18), *(char **)(param_2 + 0x18) == pcVar11)) &&
       (pcVar11 = *(char **)(param_3 + 0x58), *(char **)(param_2 + 0x58) == pcVar11)) &&
      (((pcVar11 = *(char **)(param_3 + 0x38), *(char **)(param_2 + 0x38) == pcVar11 &&
        (pcVar11 = *(char **)(param_3 + 0x48), *(char **)(param_2 + 0x48) == pcVar11)) &&
       ((uVar5 = *(uint *)(param_2 + 0x238), uVar5 == *(uint *)(param_3 + 0x238) &&
        ((uVar17 = *(uint *)(param_2 + 0x268), uVar17 == *(uint *)(param_3 + 0x268) &&
         (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x26c),
         *(uint *)(param_2 + 0x26c) == *(uint *)(param_3 + 0x26c))))))))) &&
     ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x244),
      *(uint *)(param_2 + 0x244) == *(uint *)(param_3 + 0x244) &&
      ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x290),
       *(uint *)(param_2 + 0x290) == *(uint *)(param_3 + 0x290) &&
       (pcVar11 = *(char **)(param_3 + 8), *(char **)(param_2 + 8) == pcVar11)))))) {
    iVar10 = ::_guard_xfg_dispatch_icall_nop
                       ((void *)(param_2 + 0x80),(void *)(param_3 + 0x80),0x148);
    pcVar11 = (char *)CONCAT44(extraout_var,iVar10);
    if ((iVar10 == 0) &&
       (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x1c8),
       *(uint *)(param_2 + 0x1c8) == *(uint *)(param_3 + 0x1c8))) {
      iVar10 = ::_guard_xfg_dispatch_icall_nop
                         ((void *)(param_2 + 0x1cc),(void *)(param_3 + 0x1cc),0x2c);
      pcVar11 = (char *)CONCAT44(extraout_var_00,iVar10);
      if (iVar10 == 0) {
        iVar10 = ::_guard_xfg_dispatch_icall_nop
                           ((void *)(param_2 + 0x1f8),(void *)(param_3 + 0x1f8),0x38);
        pcVar11 = (char *)CONCAT44(extraout_var_01,iVar10);
        if ((((((iVar10 == 0) &&
               (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x240),
               *(uint *)(param_2 + 0x240) == *(uint *)(param_3 + 0x240))) &&
              (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x278),
              *(uint *)(param_2 + 0x278) == *(uint *)(param_3 + 0x278))) &&
             ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x7c),
              *(uint *)(param_2 + 0x7c) == *(uint *)(param_3 + 0x7c) &&
              (uVar6 = *(uint *)(param_2 + 0x68), uVar6 == *(uint *)(param_3 + 0x68))))) &&
            (uVar7 = *(uint *)(param_2 + 0x78), uVar7 == *(uint *)(param_3 + 0x78))) &&
           ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x270),
            *(uint *)(param_2 + 0x270) == *(uint *)(param_3 + 0x270) &&
            (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x274),
            *(uint *)(param_2 + 0x274) == *(uint *)(param_3 + 0x274))))) {
          uVar18 = 0;
          uVar13 = 0;
          if (uVar17 != 0) {
            puVar12 = (uint *)(param_3 + 0x248);
            do {
              pcVar11 = (char *)(ulonglong)*puVar12;
              if (*(uint *)((param_2 - param_3) + (longlong)puVar12) != *puVar12)
              goto LAB_141a698f3;
              uVar13 = uVar13 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar13 < uVar17);
          }
          pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x298);
          if (((((*(uint *)(param_2 + 0x298) == *(uint *)(param_3 + 0x298)) &&
                (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x29c),
                *(uint *)(param_2 + 0x29c) == *(uint *)(param_3 + 0x29c))) &&
               (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2a0),
               *(uint *)(param_2 + 0x2a0) == *(uint *)(param_3 + 0x2a0))) &&
              (((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2a4),
                *(uint *)(param_2 + 0x2a4) == *(uint *)(param_3 + 0x2a4) &&
                (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2a8),
                *(uint *)(param_2 + 0x2a8) == *(uint *)(param_3 + 0x2a8))) &&
               ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2e8),
                *(uint *)(param_2 + 0x2e8) == *(uint *)(param_3 + 0x2e8) &&
                ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2ec),
                 *(uint *)(param_2 + 0x2ec) == *(uint *)(param_3 + 0x2ec) &&
                 (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2f0),
                 *(uint *)(param_2 + 0x2f0) == *(uint *)(param_3 + 0x2f0))))))))) &&
             (((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2f4),
               *(uint *)(param_2 + 0x2f4) == *(uint *)(param_3 + 0x2f4) &&
               ((((((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2f8),
                    *(uint *)(param_2 + 0x2f8) == *(uint *)(param_3 + 0x2f8) &&
                    (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2d4),
                    *(uint *)(param_2 + 0x2d4) == *(uint *)(param_3 + 0x2d4))) &&
                   (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2d8),
                   *(uint *)(param_2 + 0x2d8) == *(uint *)(param_3 + 0x2d8))) &&
                  ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2dc),
                   *(uint *)(param_2 + 0x2dc) == *(uint *)(param_3 + 0x2dc) &&
                   (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2e0),
                   *(uint *)(param_2 + 0x2e0) == *(uint *)(param_3 + 0x2e0))))) &&
                 ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2e4),
                  *(uint *)(param_2 + 0x2e4) == *(uint *)(param_3 + 0x2e4) &&
                  ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2ac),
                   *(uint *)(param_2 + 0x2ac) == *(uint *)(param_3 + 0x2ac) &&
                   (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2b0),
                   *(uint *)(param_2 + 0x2b0) == *(uint *)(param_3 + 0x2b0))))))) &&
                (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2b4),
                *(uint *)(param_2 + 0x2b4) == *(uint *)(param_3 + 0x2b4))))) &&
              (((((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2b8),
                  *(uint *)(param_2 + 0x2b8) == *(uint *)(param_3 + 0x2b8) &&
                  (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 700),
                  *(uint *)(param_2 + 700) == *(uint *)(param_3 + 700))) &&
                 (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2c0),
                 *(uint *)(param_2 + 0x2c0) == *(uint *)(param_3 + 0x2c0))) &&
                ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2c4),
                 *(uint *)(param_2 + 0x2c4) == *(uint *)(param_3 + 0x2c4) &&
                 (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2c8),
                 *(uint *)(param_2 + 0x2c8) == *(uint *)(param_3 + 0x2c8))))) &&
               ((pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2cc),
                *(uint *)(param_2 + 0x2cc) == *(uint *)(param_3 + 0x2cc) &&
                (pcVar11 = (char *)(ulonglong)*(uint *)(param_3 + 0x2d0),
                *(uint *)(param_2 + 0x2d0) == *(uint *)(param_3 + 0x2d0))))))))) {
            lVar16 = *(longlong *)(param_2 + 0x60);
            lVar8 = *(longlong *)(param_3 + 0x60);
            if ((lVar16 != lVar8) && (uVar6 != 0)) {
              uVar14 = 0;
              do {
                uVar17 = *(uint *)(lVar8 + uVar14 * 0x18);
                pcVar11 = (char *)(ulonglong)uVar17;
                if ((((*(uint *)(lVar16 + uVar14 * 0x18) != uVar17) ||
                     (uVar17 = *(uint *)(lVar8 + 0x10 + uVar14 * 0x18),
                     pcVar11 = (char *)(ulonglong)uVar17,
                     *(uint *)(lVar16 + 0x10 + uVar14 * 0x18) != uVar17)) ||
                    (pcVar11 = (char *)0x0,
                    *(char *)(lVar16 + 0x14 + uVar14 * 0x18) !=
                    *(char *)(lVar8 + 0x14 + uVar14 * 0x18))) ||
                   ((pcVar11 = (char *)0x0,
                    *(char *)(lVar16 + 0x15 + uVar14 * 0x18) !=
                    *(char *)(lVar8 + 0x15 + uVar14 * 0x18) ||
                    (pcVar11 = (char *)0x0,
                    *(char *)(lVar16 + 0x16 + uVar14 * 0x18) !=
                    *(char *)(lVar8 + 0x16 + uVar14 * 0x18))))) goto LAB_141a698f3;
                pcVar11 = *(char **)(lVar16 + 8 + uVar14 * 0x18);
                pcVar9 = *(char **)(lVar8 + 8 + uVar14 * 0x18);
                if (pcVar11 != pcVar9) {
                  lVar15 = (longlong)pcVar9 - (longlong)pcVar11;
                  do {
                    cVar3 = *pcVar11;
                    cVar4 = pcVar11[lVar15];
                    if (cVar3 != cVar4) break;
                    pcVar11 = pcVar11 + 1;
                  } while (cVar4 != '\0');
                  if (cVar3 != cVar4) goto LAB_141a698f3;
                }
                uVar17 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar17;
              } while (uVar17 < uVar6);
            }
            if ((*(longlong *)(param_2 + 0x70) != *(longlong *)(param_3 + 0x70)) && (uVar7 != 0)) {
              uVar14 = 0;
              do {
                uVar17 = *(uint *)(uVar14 * 4 + *(longlong *)(param_3 + 0x70));
                pcVar11 = (char *)(ulonglong)uVar17;
                if (*(uint *)(uVar14 * 4 + *(longlong *)(param_2 + 0x70)) != uVar17)
                goto LAB_141a698f3;
                uVar17 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar17;
              } while (uVar17 < uVar7);
            }
            if ((*(longlong *)(param_2 + 0x230) != *(longlong *)(param_3 + 0x230)) && (uVar5 != 0))
            {
              do {
                puVar1 = (undefined8 *)((ulonglong)uVar18 * 0x20 + *(longlong *)(param_3 + 0x230));
                puVar2 = (undefined8 *)((ulonglong)uVar18 * 0x20 + *(longlong *)(param_2 + 0x230));
                pcVar11 = (char *)(ulonglong)*(uint *)(puVar1 + 1);
                if (((*(uint *)(puVar2 + 1) != *(uint *)(puVar1 + 1)) ||
                    (((pcVar11 = (char *)(ulonglong)*(uint *)((longlong)puVar1 + 0xc),
                      *(uint *)((longlong)puVar2 + 0xc) != *(uint *)((longlong)puVar1 + 0xc) ||
                      (pcVar11 = (char *)(ulonglong)*(uint *)(puVar1 + 2),
                      *(uint *)(puVar2 + 2) != *(uint *)(puVar1 + 2))) ||
                     (pcVar11 = (char *)(ulonglong)*(uint *)((longlong)puVar1 + 0x14),
                     *(uint *)((longlong)puVar2 + 0x14) != *(uint *)((longlong)puVar1 + 0x14))))) ||
                   ((pcVar11 = (char *)(ulonglong)*(uint *)(puVar1 + 3),
                    *(uint *)(puVar2 + 3) != *(uint *)(puVar1 + 3) ||
                    (pcVar11 = (char *)(ulonglong)*(uint *)((longlong)puVar1 + 0x1c),
                    *(uint *)((longlong)puVar2 + 0x1c) != *(uint *)((longlong)puVar1 + 0x1c)))))
                goto LAB_141a698f3;
                pcVar11 = (char *)*puVar2;
                if (pcVar11 != (char *)*puVar1) {
                  lVar16 = (longlong)*puVar1 - (longlong)pcVar11;
                  do {
                    cVar3 = *pcVar11;
                    cVar4 = pcVar11[lVar16];
                    if (cVar3 != cVar4) break;
                    pcVar11 = pcVar11 + 1;
                  } while (cVar4 != '\0');
                  if (cVar3 != cVar4) goto LAB_141a698f3;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar5);
            }
            return CONCAT71((int7)((ulonglong)pcVar11 >> 8),1);
          }
        }
      }
    }
  }
LAB_141a698f3:
  return (ulonglong)pcVar11 & 0xffffffffffffff00;
}



// FUNCTION 141a69930 `scalar_deleting_destructor' body=135 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_Abandon_144daafb8;
  FUN_1415b5910(param_1[7]);
  param_1[7] = 0;
  lVar1 = param_1[5];
  while (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[5];
    param_1[5] = *puVar2;
    FMemory::operator_delete(puVar2,0x18);
    lVar1 = param_1[5];
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141a699c0 FUN_141a699c0 body=89 status=ok
// SIG undefined FUN_141a699c0(void)

undefined8 * FUN_141a699c0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144daa6c0;
  FUN_141a55350(param_1[1] + 0xb0,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141a69a20 FUN_141a69a20 body=43 status=ok
// SIG undefined FUN_141a69a20(void)

undefined8 * FUN_141a69a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141a69a50 FUN_141a69a50 body=96 status=ok
// SIG undefined FUN_141a69a50(void)

undefined8 * FUN_141a69a50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144daa6b8;
  FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache(param_1 + 4);
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(param_1 + 4);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a69ab0 FUN_141a69ab0 body=115 status=ok
// SIG undefined FUN_141a69ab0(void)

longlong FUN_141a69ab0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_141a67f50(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144da0c80;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141a69b30 FUN_141a69b30 body=230 status=ok
// SIG undefined FUN_141a69b30(void)

undefined8 * FUN_141a69b30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_144daa740;
  FUN_141a6ffc0();
  puVar3 = (undefined8 *)param_1[0x29];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0x28];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1b);
  FD3D12CommandAllocatorManager::~FD3D12CommandAllocatorManager(param_1 + 0xe);
  FUN_141a68000(param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141a69c20 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12ComputePipelineState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144daa5f8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141a69c70 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12ComputeShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141a69d10 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D12DomainShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a69db0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWwiseExternalSourceFileState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144daa670;
  FUN_141a7bb70(param_1 + 2);
  *param_1 = &PTR_FUN_144da60b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141a69e00 FUN_141a69e00 body=119 status=ok
// SIG undefined FUN_141a69e00(void)

undefined8 * FUN_141a69e00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144daa7b8;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141a69e80 FUN_141a69e80 body=118 status=ok
// SIG undefined FUN_141a69e80(void)

undefined8 * FUN_141a69e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144daa728;
  FUN_141a702a0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_1415b1b00(&DAT_1469fd078,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141a69f00 `scalar_deleting_destructor' body=220 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12GeometryShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144daa698;
  if (param_1[0x1c] != 0) {
    FMemory::operator_delete();
    param_1[0x1c] = 0;
  }
  if (param_1[0x1d] != 0) {
    FMemory::operator_delete();
    param_1[0x1d] = 0;
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141a69fe0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a68390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141a6a020 FUN_141a6a020 body=102 status=ok
// SIG undefined FUN_141a6a020(void)

undefined8 * FUN_141a6a020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144daa660;
  FUN_141a703f0();
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141a6a090 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FUGSlateStyleSet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a68980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x420);
  }
  return param_1;
}



// FUNCTION 141a6a0d0 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D12PixelShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a6a170 FUN_141a6a170 body=43 status=ok
// SIG undefined FUN_141a6a170(void)

undefined8 * FUN_141a6a170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141a6a1a0 FUN_141a6a1a0 body=134 status=ok
// SIG undefined FUN_141a6a1a0(void)

undefined8 * FUN_141a6a1a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  param_1[8] = &PTR_FUN_144da6378;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (lVar3 = param_1[9], lVar3 != 0)) {
      FUN_141a4db60(lVar3);
      FMemory::operator_delete(lVar3,0x110);
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141a6a230 FUN_141a6a230 body=100 status=ok
// SIG undefined FUN_141a6a230(void)

undefined8 * FUN_141a6a230(undefined8 *param_1,uint param_2)

{
  param_1[0xb] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR_FUN_144daa6c0;
  FUN_141a55350(param_1[1] + 0xb0,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141a6a2a0 FUN_141a6a2a0 body=185 status=ok
// SIG undefined FUN_141a6a2a0(void)

undefined8 * FUN_141a6a2a0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong local_res8 [2];
  
  *param_1 = &PTR_FUN_144daa668;
  lVar3 = param_1[4];
  if (((lVar3 != 0) && (*(char *)(param_1 + 5) != '\0')) && (*(char *)(lVar3 + 0x6c) != '\0')) {
    param_1[4] = 0;
    local_res8[0] = lVar3;
    FUN_141a6f9f0(local_res8,0);
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)param_1[4];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141a6a360 FUN_141a6a360 body=107 status=ok
// SIG undefined FUN_141a6a360(void)

undefined8 * FUN_141a6a360(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144daa620;
  if (param_1[4] != 0) {
    FUN_141a55350(param_1[3] + 0x290,param_1[4],*(undefined4 *)(param_1 + 5));
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a6a3d0 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D12VertexShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141a6a470 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::Abandon(longlong param_1)

{
  DoWork();
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a6a48f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141a6a4a0 FUN_141a6a4a0 body=683 status=ok
// SIG undefined FUN_141a6a4a0(void)

void FUN_141a6a4a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_res8 [2];
  int local_58;
  int local_54;
  int local_50 [2];
  undefined8 *local_48;
  undefined8 *local_40;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x278);
  AcquireSRWLockShared(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x100);
  FUN_141a71fe0(plVar1,local_res8,param_2);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (local_res8[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res8[0] * 0x70 + *plVar1);
  }
  puVar4 = puVar5 + 0xc;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  ReleaseSRWLockShared(SRWLock);
  if (puVar4 == (undefined8 *)0x0) {
    AcquireSRWLockExclusive(SRWLock);
    FUN_141a71fe0(plVar1,&local_58,param_2);
    puVar5 = puVar6;
    if (local_58 != -1) {
      puVar5 = (undefined8 *)((longlong)local_58 * 0x70 + *plVar1);
    }
    puVar4 = puVar5 + 0xc;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = puVar6;
    }
    if (puVar4 == (undefined8 *)0x0) {
      FUN_141a71fe0(param_1 + 0x2f8,&local_54,param_2);
      puVar5 = puVar6;
      if (local_54 != -1) {
        puVar5 = (undefined8 *)((longlong)local_54 * 0x70 + *(longlong *)(param_1 + 0x2f8));
      }
      puVar4 = puVar5 + 0xc;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = puVar6;
      }
      if (puVar4 == (undefined8 *)0x0) {
        FUN_141a623a0(param_1 + 0x2f8,param_2);
      }
      ReleaseSRWLockExclusive(SRWLock);
      if (puVar4 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)operator_new(0x20);
        local_48 = puVar6;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *(undefined8 *)(param_1 + 8);
          puVar5[1] = 0;
          puVar5[2] = 0;
          *(undefined4 *)(puVar5 + 3) = 0;
          local_48 = puVar5;
        }
        local_40 = local_48;
        if (*(int *)(param_4 + 8) != 0) {
          plVar7 = (longlong *)param_4[6];
          if ((longlong *)param_4[6] == (longlong *)0x0) {
            plVar7 = param_4 + 2;
          }
          if (plVar7 != (longlong *)0x0) {
            puVar6 = (undefined8 *)(**(code **)(*plVar7 + 8))();
          }
        }
        (*(code *)*param_4)(puVar6,&local_40,param_2);
        AcquireSRWLockExclusive(SRWLock);
        FUN_141a7c210(param_1 + 0x2f8,param_2);
        FUN_141a62500(plVar1,param_2,&local_48);
        ReleaseSRWLockExclusive(SRWLock);
        (**(code **)(**(longlong **)(param_1 + 0x350) + 0x10))();
      }
      else {
        do {
          LOCK();
          *(int *)(param_1 + 0x35c) = *(int *)(param_1 + 0x35c) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(param_1 + 0x350) + 0x20))
                    (*(longlong **)(param_1 + 0x350),0xffffffff,0);
          LOCK();
          piVar2 = (int *)(param_1 + 0x35c);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))();
          }
          AcquireSRWLockShared(SRWLock);
          FUN_141a71fe0(plVar1,local_50);
          puVar5 = puVar6;
          if (local_50[0] != -1) {
            puVar5 = (undefined8 *)((longlong)local_50[0] * 0x70 + *plVar1);
          }
          puVar4 = puVar5 + 0xc;
          if (puVar5 == (undefined8 *)0x0) {
            puVar4 = puVar6;
          }
          ReleaseSRWLockShared(SRWLock);
        } while (puVar4 == (undefined8 *)0x0);
        local_48 = (undefined8 *)*puVar4;
      }
      *param_3 = local_48;
    }
    else {
      *param_3 = *puVar4;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  else {
    *param_3 = *puVar4;
  }
  return;
}



// FUNCTION 141a6a750 FUN_141a6a750 body=742 status=ok
// SIG undefined FUN_141a6a750(void)

void FUN_141a6a750(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_res8 [2];
  int local_78;
  int local_74;
  int local_70 [2];
  undefined8 *local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x268);
  AcquireSRWLockShared(SRWLock);
  plVar1 = (longlong *)(param_1 + 0xb0);
  FUN_141a720f0(plVar1,local_res8,param_2);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (local_res8[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res8[0] * 800 + *plVar1);
  }
  puVar4 = puVar5 + 0x62;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  ReleaseSRWLockShared(SRWLock);
  if (puVar4 == (undefined8 *)0x0) {
    AcquireSRWLockExclusive(SRWLock);
    FUN_141a720f0(plVar1,&local_78,param_2);
    puVar5 = puVar6;
    if (local_78 != -1) {
      puVar5 = (undefined8 *)((longlong)local_78 * 800 + *plVar1);
    }
    puVar4 = puVar5 + 0x62;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = puVar6;
    }
    if (puVar4 == (undefined8 *)0x0) {
      FUN_141a720f0(param_1 + 0x2a8,&local_74,param_2);
      puVar5 = puVar6;
      if (local_74 != -1) {
        puVar5 = (undefined8 *)((longlong)local_74 * 800 + *(longlong *)(param_1 + 0x2a8));
      }
      puVar4 = puVar5 + 0x62;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = puVar6;
      }
      if (puVar4 == (undefined8 *)0x0) {
        local_58 = param_2;
        FUN_141a62650(param_1 + 0x2a8,local_60,&local_58,0);
      }
      ReleaseSRWLockExclusive(SRWLock);
      if (puVar4 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)operator_new(0x20);
        local_68 = puVar6;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *(undefined8 *)(param_1 + 8);
          puVar5[1] = 0;
          puVar5[2] = 0;
          *(undefined4 *)(puVar5 + 3) = 0;
          local_68 = puVar5;
        }
        local_50 = local_68;
        if (*(int *)(param_4 + 8) != 0) {
          plVar7 = (longlong *)param_4[6];
          if ((longlong *)param_4[6] == (longlong *)0x0) {
            plVar7 = param_4 + 2;
          }
          if (plVar7 != (longlong *)0x0) {
            puVar6 = (undefined8 *)(**(code **)(*plVar7 + 8))();
          }
        }
        (*(code *)*param_4)(puVar6,&local_50,param_2);
        AcquireSRWLockExclusive(SRWLock);
        FUN_141a7c3c0(param_1 + 0x2a8,param_2);
        local_40 = &local_68;
        local_48 = param_2;
        FUN_141a631c0(plVar1,local_5c,&local_48,0);
        ReleaseSRWLockExclusive(SRWLock);
        (**(code **)(**(longlong **)(param_1 + 0x348) + 0x10))();
      }
      else {
        do {
          LOCK();
          *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(param_1 + 0x348) + 0x20))
                    (*(longlong **)(param_1 + 0x348),0xffffffff,0);
          LOCK();
          piVar2 = (int *)(param_1 + 0x358);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(**(longlong **)(param_1 + 0x348) + 0x18))();
          }
          AcquireSRWLockShared(SRWLock);
          FUN_141a720f0(plVar1,local_70);
          puVar5 = puVar6;
          if (local_70[0] != -1) {
            puVar5 = (undefined8 *)((longlong)local_70[0] * 800 + *plVar1);
          }
          puVar4 = puVar5 + 0x62;
          if (puVar5 == (undefined8 *)0x0) {
            puVar4 = puVar6;
          }
          ReleaseSRWLockShared(SRWLock);
        } while (puVar4 == (undefined8 *)0x0);
        local_68 = (undefined8 *)*puVar4;
      }
      *param_3 = local_68;
    }
    else {
      *param_3 = *puVar4;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  else {
    *param_3 = *puVar4;
  }
  return;
}



// FUNCTION 141a6aa50 FUN_141a6aa50 body=371 status=ok
// SIG undefined FUN_141a6aa50(void)

longlong * FUN_141a6aa50(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res20 [8];
  longlong *local_38;
  longlong *local_30;
  longlong **local_28;
  
  local_res10 = param_2;
  plVar5 = (longlong *)operator_new(0x28);
  plVar7 = (longlong *)0x0;
  local_38 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f3ece8;
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144daa5f8;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    *(undefined2 *)(plVar5 + 2) = 0x100;
    plVar5[3] = local_res10;
    if (local_res10 != 0) {
      LOCK();
      *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
      UNLOCK();
    }
    plVar5[4] = param_3;
    local_38 = plVar5;
  }
  LOCK();
  *(int *)(local_38 + 1) = (int)local_38[1] + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x270));
  local_30 = &local_res10;
  local_28 = &local_38;
  TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
            (param_1 + 0x60,local_res20,&local_30,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x270));
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1d8,local_res8,local_res10);
  plVar5 = plVar7;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)local_res8[0] * 0x18);
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  lVar3 = *plVar6;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x1d8,local_res10);
    FUN_141a727b0(lVar3,param_1 + 0x228);
  }
  else {
    *(longlong **)(lVar3 + 0x18) = local_38;
    (**(code **)(**(longlong **)(lVar3 + 8) + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return local_38;
}



// FUNCTION 141a6abd0 FUN_141a6abd0 body=436 status=ok
// SIG undefined FUN_141a6abd0(void)

longlong *
FUN_141a6abd0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_res18;
  longlong *local_38;
  longlong local_30;
  longlong **local_28;
  longlong **local_20;
  
  lVar4 = operator_new(0x128);
  plVar7 = (longlong *)0x0;
  local_res18 = plVar7;
  if (lVar4 != 0) {
    local_res18 = (longlong *)FUN_141a66e70(lVar4,param_2,param_4,param_5);
  }
  LOCK();
  *(int *)(local_res18 + 1) = (int)local_res18[1] + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x260));
  local_38 = local_res18 + 3;
  local_28 = &local_38;
  local_20 = &local_res18;
  local_30 = param_3;
  FUN_141a62ba0(param_1 + 0x10,local_res8,&local_28,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x260));
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  }
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar4 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar4 = param_1 + 0x188;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x198) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x150);
      do {
        plVar6 = (longlong *)(lVar4 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x18) == param_3) {
          if (iVar3 != -1) goto LAB_141a6ad13;
          break;
        }
        iVar3 = (int)plVar6[2];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar7;
LAB_141a6ad13:
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  lVar4 = *plVar5;
  LOCK();
  piVar1 = (int *)(lVar4 + 0x10);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::Remove((longlong *)(param_1 + 0x150),param_3);
    FUN_141a727b0(lVar4,param_1 + 0x1a0);
  }
  else {
    *(longlong **)(lVar4 + 0x18) = local_res18;
    (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  return local_res18;
}



// FUNCTION 141a6ad90 FUN_141a6ad90 body=219 status=ok
// SIG undefined FUN_141a6ad90(void)

int * FUN_141a6ad90(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      FUN_141a7c700(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 800 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 800 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 800 + *param_1;
  return param_2;
}



// FUNCTION 141a6ae70 FUN_141a6ae70 body=513 status=ok
// SIG undefined FUN_141a6ae70(void)

void FUN_141a6ae70(longlong param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  lVar1 = ((ulonglong)param_2 ^ 1) * 2 + -1;
  if (iVar2 == 8) {
    if ((*(int *)(param_1 + 8) == 1) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
      if ((*(int *)(lVar3 + 0xb8) == 1) ||
         ((*(int *)(lVar3 + 0xb8) == 4 && (*(int *)(lVar3 + 0xc0) == 2)))) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      FUN_141a4f8d0(uVar4,8,*(longlong *)(param_1 + 0x68) * lVar1);
      return;
    }
  }
  else if (iVar2 == 9) {
    if (((*(int *)(param_1 + 8) == 1) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x20) == 0)) {
      if ((*(int *)(lVar3 + 0xb8) != 1) &&
         ((*(int *)(lVar3 + 0xb8) != 4 || (*(int *)(lVar3 + 0xc0) != 2)))) {
        FUN_141a4f8d0(0,9,*(longlong *)(param_1 + 0x68) * lVar1);
        return;
      }
      FUN_141a4f8d0(1,9,*(longlong *)(param_1 + 0x68) * lVar1);
      return;
    }
  }
  else if (iVar2 == 10) {
    if ((*(int *)(param_1 + 8) == 1) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
      if ((*(int *)(lVar3 + 0xb8) != 1) &&
         ((*(int *)(lVar3 + 0xb8) != 4 || (*(int *)(lVar3 + 0xc0) != 2)))) {
        FUN_141a4f8d0(0,10,*(longlong *)(param_1 + 0x68) * lVar1);
        return;
      }
      FUN_141a4f8d0(1,10,*(longlong *)(param_1 + 0x68) * lVar1);
      return;
    }
  }
  else if (iVar2 == 0xb) {
    if ((*(int *)(param_1 + 8) == 1) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
      if ((*(int *)(lVar3 + 0xb8) != 1) &&
         ((*(int *)(lVar3 + 0xb8) != 4 || (*(int *)(lVar3 + 0xc0) != 2)))) {
        FUN_141a4f8d0(0,0xb,*(longlong *)(param_1 + 0x68) * lVar1);
        return;
      }
      FUN_141a4f8d0(1,0xb,*(longlong *)(param_1 + 0x68) * lVar1);
      return;
    }
  }
  else if (((iVar2 == 0xc) && (*(int *)(param_1 + 8) == 1)) &&
          (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
    if ((*(int *)(lVar3 + 0xb8) != 1) &&
       ((*(int *)(lVar3 + 0xb8) != 4 || (*(int *)(lVar3 + 0xc0) != 2)))) {
      FUN_141a4f8d0(0,0xc,*(longlong *)(param_1 + 0x68) * lVar1);
      return;
    }
    FUN_141a4f8d0(1,0xc,*(longlong *)(param_1 + 0x68) * lVar1);
    return;
  }
  return;
}



// FUNCTION 141a6b080 FUN_141a6b080 body=55 status=ok
// SIG undefined FUN_141a6b080(void)

uint FUN_141a6b080(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x4c) + 1;
  uVar2 = 0;
  if (uVar1 < *(uint *)(param_1 + 0x58)) {
    uVar2 = uVar1;
  }
  if (uVar2 < *(uint *)(param_1 + 8)) {
    FUN_141a70af0();
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x4c) = uVar2;
  return uVar2;
}



// FUNCTION 141a6b0c0 FUN_141a6b0c0 body=595 status=ok
// SIG undefined FUN_141a6b0c0(void)

ulonglong FUN_141a6b0c0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x4000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 7) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x80);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x80;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 141a6b320 FUN_141a6b320 body=1122 status=ok
// SIG undefined FUN_141a6b320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141a6b320(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 local_res10 [2];
  uint local_res20 [2];
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 local_188 [2];
  uint local_180 [2];
  longlong local_178;
  undefined8 *local_170;
  uint *local_168;
  uint *local_160;
  longlong local_158;
  short *local_150;
  longlong local_148;
  undefined8 *local_140;
  uint local_138;
  undefined2 local_134 [82];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  _local_68 = 0;
  lVar1 = param_1 + 0x1aa0;
  local_60 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_170 = &local_88;
  local_168 = local_180;
  local_160 = local_res20;
  local_150 = &local_68;
  local_140 = local_res10;
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  local_180[0] = param_3;
  local_158 = param_1;
  local_148 = lVar1;
  FUN_141a69320(&local_170);
  if (*(char *)(param_1 + 0x2060) == '\0') {
LAB_141a6b514:
    plVar4 = *(longlong **)(param_1 + 0x1e68);
    cVar5 = FUN_141a512b0(plVar4,local_70);
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*plVar4 + 8))(plVar4), cVar5 != '\0')) {
      FUN_141a69320(&local_170);
    }
    local_188[0] = FUN_141a5f440(plVar4,local_70);
    if (local_180[0] == 5) {
      if (local_60._2_2_ != 0) {
        local_198 = local_188;
        FUN_141a49730(param_1 + 0x1e20,lVar1,(longlong)&local_60 + 2,local_78._4_4_);
      }
    }
    else {
      if (local_68 != 0) {
        local_198 = local_188;
        FUN_141a49ad0(param_1 + 0x1e20,lVar1,&local_68,local_88 & 0xffffffff);
      }
      if (sStack_66 != 0) {
        local_198 = local_188;
        FUN_141a488b0(param_1 + 0x1e20,lVar1,&sStack_66,local_88._4_4_);
      }
      if (sStack_64 != 0) {
        local_198 = local_188;
        FUN_141a48c50(param_1 + 0x1e20,lVar1,&sStack_64,local_80 & 0xffffffff);
      }
      if ((short)local_60 != 0) {
        local_198 = local_188;
        FUN_141a49390(param_1 + 0x1e20,lVar1,&local_60,local_78 & 0xffffffff);
      }
      if (sStack_62 != 0) {
        local_198 = local_188;
        FUN_141a48ff0(param_1 + 0x1e20,lVar1,&sStack_62,local_80._4_4_);
      }
    }
    UGameUserSettings::SetPostProcessingQuality(plVar4,local_188[0]);
  }
  else {
    local_178 = *(longlong *)(param_1 + 0x18);
    uVar15 = local_180[0];
    uVar8 = local_res20[0];
    if (local_180[0] < local_res20[0]) {
      do {
        uVar13 = (ulonglong)uVar15;
        if ((&local_68)[uVar13] != 0) {
          local_138 = *(uint *)((longlong)&local_88 + uVar13 * 4);
          if (local_138 != 0) {
            uVar10 = 0;
            local_90 = 0;
            if (local_138 != 0) {
              do {
                lVar7 = *(longlong *)(uVar13 * 0x80 + lVar1 + 0x10 + uVar10 * 8);
                if (lVar7 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined2 *)(lVar7 + 0x2c);
                }
                uVar3 = *(ushort *)(uVar13 * 2 + lVar1);
                uVar8 = (uint)uVar10;
                local_134[uVar10] = uVar11;
                uVar9 = uVar8 + 1;
                uVar10 = (ulonglong)uVar9;
                *(ushort *)(uVar13 * 2 + lVar1) = uVar3 & ~(ushort)(1 << (uVar8 & 0x1f));
              } while (uVar9 < *(uint *)((longlong)&local_88 + uVar13 * 4));
            }
            if (*(int *)(param_1 + 0x2018) != *(int *)(param_1 + 0x2044)) {
              iVar6 = FUN_141a55be0(&local_138);
              uVar8 = local_138;
              lVar7 = *(longlong *)(param_1 + 0x2050);
              if (*(longlong *)(param_1 + 0x2050) == 0) {
                lVar7 = param_1 + 0x2048;
              }
              uVar9 = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x2058) - 1U & (longlong)iVar6
                                        ) * 4);
              if (uVar9 != 0xffffffff) {
                lVar7 = *(longlong *)(param_1 + 0x2010);
                while( true ) {
                  puVar14 = (uint *)((longlong)(int)uVar9 * 0xb8 + lVar7);
                  if ((*puVar14 == uVar8) &&
                     (iVar6 = _guard_xfg_dispatch_icall_nop
                                        (puVar14 + 1,local_134,(ulonglong)*puVar14 * 2), iVar6 == 0)
                     ) break;
                  uVar9 = puVar14[0x2c];
                  if (uVar9 == 0xffffffff) goto LAB_141a6b4fa;
                }
                if ((uVar9 != 0xffffffff) && (puVar14 != (uint *)0x0)) {
                  if (uVar15 == 5) {
                    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xcc0);
                    if (lVar7 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0xd0);
                    }
                    plVar4 = *(longlong **)(*(longlong *)(local_178 + 0x468) + 0x28);
                    (**(code **)(*plVar4 + 0xf8))
                              (plVar4,*(undefined1 *)(lVar7 + 0x27),*(undefined8 *)(puVar14 + 0x2a))
                    ;
                  }
                  else {
                    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x518);
                    lVar12 = 0;
                    if (lVar7 != 0) {
                      lVar12 = *(longlong *)(lVar7 + 0xd0);
                    }
                    switch(uVar15) {
                    case 0:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x17);
                      break;
                    case 1:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x1f);
                      break;
                    case 2:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x23);
                      break;
                    case 3:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x13);
                      break;
                    case 4:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x1b);
                      break;
                    case 5:
                      uVar13 = (ulonglong)*(byte *)(lVar12 + 0x27);
                      break;
                    default:
                      uVar13 = 0xffffffff;
                    }
                    plVar4 = *(longlong **)(*(longlong *)(local_178 + 0x468) + 0x28);
                    (**(code **)(*plVar4 + 0x100))(plVar4,uVar13,*(undefined8 *)(puVar14 + 0x2a));
                  }
                  puVar2 = (ushort *)(lVar1 + (longlong)(int)uVar15 * 2);
                  *puVar2 = *puVar2 | -1 << ((byte)local_138 & 0x1f);
                  uVar8 = local_res20[0];
                  goto LAB_141a6b67d;
                }
              }
            }
LAB_141a6b4fa:
            cVar5 = FUN_141a60cc0(param_1 + 0x1e20);
            if (cVar5 != '\0') {
              FUN_141a69320(&local_170);
            }
            goto LAB_141a6b514;
          }
        }
LAB_141a6b67d:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar8);
    }
  }
  return;
}



// FUNCTION 141a6b7a0 FUN_141a6b7a0 body=111 status=ok
// SIG undefined FUN_141a6b7a0(void)

uint FUN_141a6b7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_1 + 0x4c) + 1;
  uVar3 = 0;
  if (uVar2 < *(uint *)(param_1 + 0x58)) {
    uVar3 = uVar2;
  }
  if (uVar3 < *(uint *)(param_1 + 8)) {
    FUN_141a70af0();
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x4c) = uVar3;
  *(int *)(param_2 + 0x2c58) = *(int *)(param_2 + 0x2c58) + 1;
  if (*(int *)(param_1 + 0x60) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x468) + 0x28);
    (**(code **)(*plVar1 + 0x1a0))(plVar1,*(undefined8 *)(param_1 + 0x68),0,uVar3);
  }
  return uVar3;
}



// FUNCTION 141a6b810 FUN_141a6b810 body=441 status=ok
// SIG undefined FUN_141a6b810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a6b810(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  DAT_146ab6340 = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xd50) + 0x30) + 0x18);
  iVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,&DAT_146ab6340);
  if (iVar2 < 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141a94000(iVar2,
                  "ParentAdapter->GetDevice()->GetCommandListManager().GetTimestampFrequency(&GTimingFrequency)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp",0x253
                  ,0,&local_28);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd50) + 0x30);
  plVar1 = *(longlong **)(lVar3 + 0x18);
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_res8);
  QueryPerformanceFrequency(&local_res18);
  plVar1 = *(longlong **)(lVar3 + 0x18);
  iVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,&local_res10,&local_res20);
  if (iVar2 < 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141a94000(iVar2,"D3DCommandQueue->GetClockCalibration(&GPUTimestamp, &CPUTimestamp)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                  ,0x217,0,&local_28);
  }
  dVar5 = (double)local_res8;
  if (local_res8 < 0) {
    dVar5 = dVar5 + 1.8446744073709552e+19;
  }
  dVar6 = (double)local_res10;
  if (local_res10 < 0) {
    dVar6 = dVar6 + 1.8446744073709552e+19;
  }
  dVar6 = (1000000.0 / dVar5) * dVar6;
  lVar3 = 0;
  if ((9.223372036854776e+18 <= dVar6) &&
     (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
    lVar3 = -0x8000000000000000;
  }
  dVar5 = (double)local_res20;
  if (local_res20 < 0) {
    dVar5 = dVar5 + 1.8446744073709552e+19;
  }
  dVar5 = (1000000.0 / (double)local_res18.QuadPart) * dVar5;
  lVar4 = 0;
  if ((9.223372036854776e+18 <= dVar5) &&
     (dVar5 = dVar5 - 9.223372036854776e+18, dVar5 < 9.223372036854776e+18)) {
    lVar4 = -0x8000000000000000;
  }
  _DAT_146ab6348 = (longlong)dVar6 + lVar3;
  _DAT_146ab6350 = (longlong)dVar5 + lVar4;
  return;
}



// FUNCTION 141a6b9d0 FUN_141a6b9d0 body=38 status=ok
// SIG undefined FUN_141a6b9d0(void)

longlong * FUN_141a6b9d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141a69290(param_2);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141a6ba20 FUN_141a6ba20 body=2546 status=ok
// SIG undefined FUN_141a6ba20(void)

void FUN_141a6ba20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_1c0;
  uint uStack_1bc;
  uint uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  uint uStack_19c;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  uint uStack_17c;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  uint uStack_15c;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 uStack_138;
  uint *puStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  int local_118;
  uint local_108;
  uint uStack_104;
  uint local_100;
  int local_f8;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x260));
  uVar9 = *(uint *)(param_1 + 0x38);
  puVar15 = (uint *)(param_1 + 0x20);
  local_1c0 = 0;
  uStack_1bc = 1;
  uStack_1ac = 0;
  iStack_1a8 = 0;
  if (uVar9 != 0) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar11 = *puVar14;
    iStack_1a8 = 0;
    local_1c0 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_1c0;
      iStack_1a8 = iStack_1a8 + 0x20;
      iVar13 = local_1c0 + 1;
      bVar16 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1c0;
      local_1c0 = iVar13;
      if (bVar16) goto LAB_141a6bb07;
      uVar11 = puVar14[lVar12 + 1];
    }
    uStack_1bc = uVar11 - 1 & uVar11 ^ uVar11;
    iVar13 = 0x1f;
    if (uStack_1bc != 0) {
      for (; uStack_1bc >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_1bc == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_1ac = (iStack_1a8 - iVar13) + 0x1f;
    if ((int)uVar9 < (int)uStack_1ac) {
LAB_141a6bb07:
      uStack_1ac = uVar9;
    }
  }
  uStack_104 = *(uint *)(param_1 + 0x38);
  uStack_138 = CONCAT44(uStack_1bc,local_1c0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_1ac;
  uStack_120 = CONCAT44(uStack_1a4,iStack_1a8);
  local_118 = (int)uStack_104 >> 5;
  local_108 = -1 << ((byte)uStack_104 & 0x1f);
  local_100 = uStack_104 & 0xffffffe0;
  puStack_130 = puVar15;
  local_78 = plVar1;
  uStack_70 = uStack_138;
  local_68 = puVar15;
  local_58 = uStack_120;
  uStack_128 = uStack_60;
  uStack_124 = uStack_5c;
  uVar11 = uStack_104;
  if (uStack_104 != uVar9) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar11 = puVar14[local_118] & local_108;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_118;
      local_100 = local_100 + 0x20;
      iVar13 = local_118 + 1;
      bVar16 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar13;
      if (bVar16) goto LAB_141a6bc02;
      uVar11 = puVar14[lVar12 + 1];
      local_108 = 0xffffffff;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar13 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_104 = (local_100 - iVar13) + 0x1f;
    uVar11 = uStack_104;
    if ((int)uVar9 < (int)uStack_104) {
LAB_141a6bc02:
      uStack_104 = uVar9;
      uVar11 = uVar9;
    }
  }
  while (((uStack_5c != uVar11 || (local_68 != puVar15)) || (local_78 != plVar1))) {
    puVar3 = *(undefined8 **)((longlong)(int)uStack_5c * 0x20 + 0x10 + *local_78);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    iVar13 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))
         ) {
        LOCK();
        bVar16 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar16) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar16) {
          uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar9 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar12 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    uStack_60 = uStack_60 & ~uStack_70._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  FUN_14089dba0(plVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x260));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x270));
  uStack_19c = 1;
  local_1a0 = 0;
  uVar9 = *(uint *)(param_1 + 0x88);
  puVar15 = (uint *)(param_1 + 0x70);
  uStack_18c = 0;
  iStack_188 = 0;
  if (uVar9 != 0) {
    puVar14 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar11 = *puVar14;
    iStack_188 = 0;
    local_1a0 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_1a0;
      iStack_188 = iStack_188 + 0x20;
      iVar13 = local_1a0 + 1;
      bVar16 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1a0;
      local_1a0 = iVar13;
      if (bVar16) goto LAB_141a6bde8;
      uVar11 = puVar14[lVar12 + 1];
    }
    uStack_19c = uVar11 - 1 & uVar11 ^ uVar11;
    local_88 = 0x1f;
    if (uStack_19c != 0) {
      for (; uStack_19c >> local_88 == 0; local_88 = local_88 + -1) {
      }
    }
    if (uStack_19c == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_88;
    }
    uStack_18c = (iStack_188 - iVar13) + 0x1f;
    if ((int)uVar9 < (int)uStack_18c) {
LAB_141a6bde8:
      uStack_18c = uVar9;
    }
  }
  uStack_e4 = *(uint *)(param_1 + 0x88);
  uStack_138 = CONCAT44(uStack_19c,local_1a0);
  uStack_128 = 0xffffffff;
  uStack_124 = uStack_18c;
  uStack_120 = CONCAT44(uStack_184,iStack_188);
  local_f8 = (int)uStack_e4 >> 5;
  local_e8 = -1 << ((byte)uStack_e4 & 0x1f);
  local_e0 = uStack_e4 & 0xffffffe0;
  puStack_130 = puVar15;
  uVar11 = uStack_e4;
  if (uStack_e4 != uVar9) {
    puVar14 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar11 = puVar14[local_f8] & local_e8;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_f8;
      local_e0 = local_e0 + 0x20;
      iVar13 = local_f8 + 1;
      bVar16 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar13;
      if (bVar16) goto LAB_141a6bed3;
      uVar11 = puVar14[lVar12 + 1];
      local_e8 = 0xffffffff;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    local_84 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_84 == 0; local_84 = local_84 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_84;
    }
    uStack_e4 = (local_e0 - iVar13) + 0x1f;
    uVar11 = uStack_e4;
    if ((int)uVar9 < (int)uStack_e4) {
LAB_141a6bed3:
      uStack_e4 = uVar9;
      uVar11 = uVar9;
    }
  }
  while ((uStack_124 != uVar11 || (puStack_130 != puVar15))) {
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)(int)uStack_124 * 0x18 + 8);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    iVar13 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))
         ) {
        LOCK();
        bVar16 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar16) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar16) {
          uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar9 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar12 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    uStack_128 = uStack_128 & ~uStack_138._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset((longlong *)(param_1 + 0x60));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x270));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x268));
  plVar1 = (longlong *)(param_1 + 0xb0);
  iStack_16c = 0;
  iStack_168 = 0;
  iVar13 = *(int *)(param_1 + 0xd8);
  local_c8 = (uint *)(param_1 + 0xc0);
  local_180 = 0;
  uStack_17c = 1;
  if (iVar13 != 0) {
    puVar15 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar15 = local_c8;
    }
    uVar9 = *puVar15;
    iStack_168 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)local_180;
      iStack_168 = iStack_168 + 0x20;
      iVar10 = local_180 + 1;
      bVar16 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180;
      local_180 = iVar10;
      if (bVar16) goto LAB_141a6c094;
      uVar9 = puVar15[lVar12 + 1];
    }
    uStack_17c = uVar9 - 1 & uVar9 ^ uVar9;
    local_80 = 0x1f;
    if (uStack_17c != 0) {
      for (; uStack_17c >> local_80 == 0; local_80 = local_80 + -1) {
      }
    }
    if (uStack_17c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_80;
    }
    iStack_16c = (iStack_168 - iVar10) + 0x1f;
    if (iVar13 < iStack_16c) {
LAB_141a6c094:
      iStack_16c = iVar13;
    }
  }
  uStack_d0 = CONCAT44(uStack_17c,local_180);
  auVar6._4_8_ = uStack_d0;
  auVar6._0_4_ = iStack_16c;
  auVar17._0_8_ = auVar6._0_8_ << 0x20;
  auVar17._8_4_ = iStack_168;
  auVar17._12_4_ = uStack_164;
  local_b8 = auVar17._8_8_;
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_16c;
  local_d8 = plVar1;
  if (iStack_16c < iVar13) {
    do {
      lVar12 = *(longlong *)((longlong)iStack_bc * 800 + 0x310 + *local_d8);
      if (lVar12 != 0) {
        if (*(longlong *)(lVar12 + 0x10) != 0) {
          lVar4 = *(longlong *)(lVar12 + 0x10);
          plVar5 = *(longlong **)(lVar4 + 0x40);
          if (plVar5 == (longlong *)0x0) {
            LOCK();
            bVar16 = *(int *)(lVar4 + 0x30) == 0;
            if (bVar16) {
              *(int *)(lVar4 + 0x30) = 0;
            }
            UNLOCK();
            if (!bVar16) {
              FUN_141a96040(lVar4 + 8);
              LOCK();
              *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
              UNLOCK();
            }
code_r0x000141a6c163:
            if (*(longlong *)(lVar4 + 0x40) != 0) {
              (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x20))
                        (*(longlong **)(lVar4 + 0x38),0xffffffff,0);
              goto LAB_141a6c17b;
            }
          }
          else {
            cVar8 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
            if (cVar8 == '\0') goto code_r0x000141a6c163;
            FUN_141a96040(lVar4 + 8);
            LOCK();
            *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
            UNLOCK();
            if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
            }
LAB_141a6c17b:
            *(undefined8 *)(lVar4 + 0x40) = 0;
          }
          plVar5 = *(longlong **)(lVar12 + 0x10);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,1);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
        }
        if (*(longlong **)(lVar12 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar12 + 8) + 0x10))();
        }
        FMemory::operator_delete(lVar12,0x20);
      }
      uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
    } while (iStack_bc < (int)local_c8[6]);
  }
  FUN_141a709b0(plVar1,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x268));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x278));
  plVar1 = (longlong *)(param_1 + 0x100);
  iVar13 = *(int *)(param_1 + 0x128);
  local_a0 = (uint *)(param_1 + 0x110);
  local_160 = 0;
  uStack_15c = 1;
  iStack_14c = 0;
  iStack_148 = 0;
  if (iVar13 != 0) {
    puVar15 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar15 = local_a0;
    }
    uVar9 = *puVar15;
    iStack_148 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)local_160;
      iStack_148 = iStack_148 + 0x20;
      iVar10 = local_160 + 1;
      bVar16 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_160;
      local_160 = iVar10;
      if (bVar16) goto LAB_141a6c2b3;
      uVar9 = puVar15[lVar12 + 1];
    }
    uStack_15c = uVar9 - 1 & uVar9 ^ uVar9;
    local_7c = 0x1f;
    if (uStack_15c != 0) {
      for (; uStack_15c >> local_7c == 0; local_7c = local_7c + -1) {
      }
    }
    if (uStack_15c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_7c;
    }
    iStack_14c = (iStack_148 - iVar10) + 0x1f;
    if (iVar13 < iStack_14c) {
LAB_141a6c2b3:
      iStack_14c = iVar13;
    }
  }
  uStack_a8 = CONCAT44(uStack_15c,local_160);
  auVar7._4_8_ = uStack_a8;
  auVar7._0_4_ = iStack_14c;
  auVar18._0_8_ = auVar7._0_8_ << 0x20;
  auVar18._8_4_ = iStack_148;
  auVar18._12_4_ = uStack_144;
  local_90 = auVar18._8_8_;
  uStack_98 = 0xffffffff;
  iStack_94 = iStack_14c;
  local_b0 = plVar1;
  if (iStack_14c < iVar13) {
    do {
      lVar12 = *(longlong *)((longlong)iStack_94 * 0x70 + 0x60 + *local_b0);
      if (lVar12 != 0) {
        if (*(longlong *)(lVar12 + 0x10) != 0) {
          lVar4 = *(longlong *)(lVar12 + 0x10);
          plVar5 = *(longlong **)(lVar4 + 0x40);
          if (plVar5 == (longlong *)0x0) {
            LOCK();
            bVar16 = *(int *)(lVar4 + 0x30) == 0;
            if (bVar16) {
              *(int *)(lVar4 + 0x30) = 0;
            }
            UNLOCK();
            if (!bVar16) {
              FUN_141a96040(lVar4 + 8);
              LOCK();
              *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
              UNLOCK();
            }
code_r0x000141a6c37c:
            if (*(longlong *)(lVar4 + 0x40) != 0) {
              (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x20))
                        (*(longlong **)(lVar4 + 0x38),0xffffffff,0);
              goto LAB_141a6c394;
            }
          }
          else {
            cVar8 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
            if (cVar8 == '\0') goto code_r0x000141a6c37c;
            FUN_141a96040(lVar4 + 8);
            LOCK();
            *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
            UNLOCK();
            if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
            }
LAB_141a6c394:
            *(undefined8 *)(lVar4 + 0x40) = 0;
          }
          plVar5 = *(longlong **)(lVar12 + 0x10);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,1);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
        }
        if (*(longlong **)(lVar12 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar12 + 8) + 0x10))();
        }
        FMemory::operator_delete(lVar12,0x20);
      }
      uStack_98 = uStack_98 & ~uStack_a8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a8);
    } while (iStack_94 < (int)local_a0[6]);
  }
  TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000141a6c40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x278));
  return;
}



// FUNCTION 141a6c420 FUN_141a6c420 body=74 status=ok
// SIG undefined FUN_141a6c420(void)

void FUN_141a6c420(longlong param_1)

{
  FUN_141a7bb70();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141a6c470 FUN_141a6c470 body=191 status=ok
// SIG undefined FUN_141a6c470(void)

void FUN_141a6c470(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2 * 8);
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 < 6);
  puVar4 = (undefined4 *)(param_1 + 0xc60);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  lVar3 = 6;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xc40) = 0;
  *(undefined8 *)(param_1 + 0xc48) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  *(undefined8 *)(param_1 + 0xc58) = 0;
  lVar2 = 6;
  if (puVar4 <= (undefined4 *)(param_1 + 0xc78)) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  param_1 = param_1 + 0x30;
  do {
    lVar2 = 0x40;
    do {
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
      param_1 = param_1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141a6c530 FUN_141a6c530 body=911 status=ok
// SIG undefined FUN_141a6c530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a6c530(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_141a6c470(param_1 + 0x7f0);
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined8 *)(param_1 + 0x1468) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1470) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1478),0,0x300);
  *(undefined8 *)(param_1 + 0x1778) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1780) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1788),0,0x300);
  puVar9 = (undefined4 *)(param_1 + 0x1a88);
  lVar7 = 0;
  lVar8 = 6;
  if (puVar9 <= (undefined4 *)(param_1 + 0x1aa0)) {
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x1aa0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1aa8) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1ab0),0,0x300);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1dbc),0,0x60);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x5c),0,0x180);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x7ec) = 4;
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar10) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar10) {
          uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
          lVar8 = lVar7;
          if (uVar6 != 0) {
            lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar8 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3);
      }
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x7e0);
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar10) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar10) {
          uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar6 != 0) {
            lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar7 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1db0) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  uVar4 = DAT_1464c9c64;
  uStack_28 = DAT_1464c9c64;
  uStack_24 = DAT_1464c9c64;
  local_30 = 0;
  if (((*(int *)(param_1 + 0x73c) != 1) || (*(longlong *)(param_1 + 0x53c) != 0)) ||
     (*(longlong *)(param_1 + 0x544) != CONCAT44(DAT_1464c9c64,DAT_1464c9c64))) {
    *(undefined4 *)(param_1 + 0x53c) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x544) = uVar4;
    *(undefined4 *)(param_1 + 0x548) = uVar4;
    *(undefined4 *)(param_1 + 0x73c) = 1;
    FUN_141a7d880(param_1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1e0),0,0x300);
  *(undefined4 *)(param_1 + 0x4e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 141a6c8c0 FUN_141a6c8c0 body=90 status=ok
// SIG undefined FUN_141a6c8c0(void)

undefined8 FUN_141a6c8c0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 2:
    return 0x10;
  case 10:
  case 0xb:
    return 8;
  case 0x13:
  case 0x14:
  case 0x15:
    return 5;
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x23:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x57:
  case 0x5a:
    return 4;
  case 0x35:
    return 2;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 141a6c9a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_141a7b1c0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a6ca50 FUN_141a6ca50 body=161 status=ok
// SIG undefined FUN_141a6ca50(void)

undefined8 FUN_141a6ca50(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_141a7b3e0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a6cb00 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a6cbb0 FUN_141a6cbb0 body=4101 status=ok
// SIG undefined FUN_141a6cbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a6cbb0(int param_1,uint param_2,uint param_3,uint *param_4,int param_5,longlong param_6,
                  longlong param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  undefined1 *puVar14;
  float fVar15;
  ushort *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 local_res8;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar1 = *(undefined1 *)(param_7 + 8);
  uVar27 = (ulonglong)param_2;
  local_res8 = (float)CONCAT31(local_res8._1_3_,uVar1);
  if (param_1 == 0x35) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        puVar16 = (ushort *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
        puVar10 = (undefined4 *)(param_6 + (ulonglong)(uVar26 * param_2) * 4);
        uVar18 = uVar27;
        if (param_2 != 0) {
          do {
            local_118._4_4_ = (float)*puVar16 * 1.5259022e-05;
            local_118._0_4_ = local_118._4_4_;
            fStack_110 = (float)local_118._4_4_;
            fStack_10c = 1.0;
            puVar9 = (undefined4 *)FLinearColor::Quantize(local_118,&local_res8);
            puVar16 = puVar16 + 1;
            *puVar10 = *puVar9;
            uVar18 = uVar18 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 - 0x1bU < 2) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          puVar14 = (undefined1 *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
          uVar18 = uVar27;
          do {
            local_res8 = (float)CONCAT13(puVar14[3],
                                         CONCAT21(CONCAT11(*puVar14,puVar14[1]),puVar14[2]));
            *(float *)(puVar14 + 4 +
                      (((ulonglong)(uVar26 * param_2) * 4 - (ulonglong)(uVar26 * param_5)) -
                      (longlong)param_4) + param_6 + -4) = local_res8;
            uVar18 = uVar18 - 1;
            puVar14 = puVar14 + 4;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if ((param_1 - 0x5aU < 2) || (param_1 == 0x57)) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_6 + (ulonglong)(uVar26 * param_2) * 4),
                   (void *)((ulonglong)(uVar26 * param_5) + (longlong)param_4),uVar27 << 2);
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 == 0x18) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        puVar17 = (uint *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          lVar11 = (ulonglong)(uVar26 * param_2) * 4 - (longlong)puVar17;
          uVar18 = uVar27;
          do {
            uVar6 = *puVar17;
            local_118._4_4_ = (float)(uVar6 >> 10 & 0x3ff) * 0.0009775171;
            local_118._0_4_ = (float)(uVar6 & 0x3ff) * 0.0009775171;
            fStack_110 = (float)(uVar6 >> 0x14 & 0x3ff) * 0.0009775171;
            fStack_10c = (float)(uVar6 >> 0x1e) * 0.33333334;
            puVar10 = (undefined4 *)FLinearColor::Quantize(local_118,&local_res8);
            puVar17 = puVar17 + 1;
            *(undefined4 *)(param_6 + lVar11 + -4 + (longlong)puVar17) = *puVar10;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 == 10) {
    fVar38 = 1.0;
    fVar34 = 1.0;
    fVar35 = 1.0;
    fVar36 = 1.0;
    local_e8 = 1.0;
    local_e4 = 1.0;
    fVar33 = 0.0;
    local_e0 = 1.0;
    fVar37 = 0.0;
    local_108 = 0.0;
    fVar39 = 0.0;
    param_7._0_4_ = 0.0;
    fVar40 = 0.0;
    if (param_3 != 0) {
      do {
        puVar16 = (ushort *)((ulonglong)(uint)(param_5 * (int)local_108) + (longlong)param_4);
        local_118 = (undefined1  [8])puVar16;
        uVar18 = uVar27;
        if (param_2 != 0) {
          do {
            uVar3 = *puVar16;
            uVar4 = puVar16[1];
            uVar5 = puVar16[2];
            uVar19 = ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000;
            fVar32 = (float)(uVar3 & 0x3ff) * 8192.0;
            uVar6 = (int)ROUND((fVar32 + fVar32) - 0.5) >> 1;
            uVar26 = 0x7fffff;
            if (uVar6 < 0x800000) {
              uVar26 = uVar6;
            }
            uVar6 = (uVar3 & 0xffff8000) << 0x10;
            uVar23 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000;
            fVar32 = (float)(uVar19 | uVar6 | uVar26 & 0x7fffff);
            if (fVar37 <= fVar32) {
              fVar32 = fVar37;
            }
            fVar37 = fVar32;
            uVar25 = (uVar4 & 0xffff8000) << 0x10;
            fVar32 = (float)(uVar4 & 0x3ff) * 8192.0;
            uVar7 = (int)ROUND((fVar32 + fVar32) - 0.5) >> 1;
            uVar22 = 0x7fffff;
            if (uVar7 < 0x800000) {
              uVar22 = uVar7;
            }
            fVar32 = (float)(uVar23 | uVar22 & 0x7fffff | uVar25);
            if (fVar39 <= fVar32) {
              fVar32 = fVar39;
            }
            fVar39 = fVar32;
            fVar32 = (float)(uVar5 & 0x3ff) * 8192.0;
            uVar8 = (int)ROUND((fVar32 + fVar32) - 0.5) >> 1;
            uVar7 = 0x7fffff;
            if (uVar8 < 0x800000) {
              uVar7 = uVar8;
            }
            fVar21 = (float)(uVar7 & 0x7fffff | ((uVar5 >> 10 & 0x1f) + 0x70) * 0x800000 |
                            (uVar5 & 0xffff8000) << 0x10);
            uVar3 = puVar16[3];
            fVar32 = fVar21;
            if (fVar40 <= fVar21) {
              fVar32 = fVar40;
            }
            fVar40 = fVar32;
            fVar32 = (float)(uVar3 & 0x3ff) * 8192.0;
            uVar8 = (int)ROUND((fVar32 + fVar32) - 0.5) >> 1;
            uVar7 = 0x7fffff;
            if (uVar8 < 0x800000) {
              uVar7 = uVar8;
            }
            fVar20 = (float)(uVar19 | uVar6 | uVar26 & 0x7fffff);
            fVar15 = (float)(uVar7 & 0x7fffff | ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 |
                            (uVar3 & 0xffff8000) << 0x10);
            fVar24 = (float)(uVar23 | uVar22 & 0x7fffff | uVar25);
            puVar16 = puVar16 + 4;
            fVar32 = fVar15;
            if (fVar33 <= fVar15) {
              fVar32 = fVar33;
            }
            fVar33 = fVar32;
            if (fVar20 <= fVar38) {
              fVar20 = fVar38;
            }
            fVar38 = fVar20;
            if (fVar24 <= fVar34) {
              fVar24 = fVar34;
            }
            fVar34 = fVar24;
            if (fVar21 <= fVar35) {
              fVar21 = fVar35;
            }
            fVar35 = fVar21;
            if (fVar15 <= fVar36) {
              fVar15 = fVar36;
            }
            fVar36 = fVar15;
            uVar18 = uVar18 - 1;
            param_7._0_4_ = fVar33;
            local_e8 = fVar34;
            local_e4 = fVar35;
            local_e0 = fVar36;
          } while (uVar18 != 0);
        }
        local_108 = (float)((int)local_108 + 1);
      } while ((uint)local_108 < param_3);
      uVar26 = 0;
      if (param_3 != 0) {
        do {
          puVar16 = (ushort *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
          puVar10 = (undefined4 *)(param_6 + (ulonglong)(uVar26 * param_2) * 4);
          if (param_2 != 0) {
            uVar18 = uVar27;
            fVar32 = fVar33;
            do {
              uVar3 = puVar16[3];
              fVar21 = (float)(uVar3 & 0x3ff) * 8192.0;
              uVar19 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
              uVar6 = 0x7fffff;
              if (uVar19 < 0x800000) {
                uVar6 = uVar19;
              }
              fVar21 = (float)(uVar6 & 0x7fffff | ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 |
                              (uVar3 & 0xffff8000) << 0x10);
              uVar3 = puVar16[2];
              local_f8._0_4_ = fVar21;
              fVar20 = (float)(uVar3 & 0x3ff) * 8192.0;
              uVar19 = (int)ROUND((fVar20 + fVar20) - 0.5) >> 1;
              uVar6 = 0x7fffff;
              if (uVar19 < 0x800000) {
                uVar6 = uVar19;
              }
              local_dc = (float)(uVar6 & 0x7fffff | ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                (uVar3 & 0xffff8000) << 0x10);
              uVar3 = puVar16[1];
              fVar20 = (float)(uVar3 & 0x3ff) * 8192.0;
              uVar19 = (int)ROUND((fVar20 + fVar20) - 0.5) >> 1;
              uVar6 = 0x7fffff;
              if (uVar19 < 0x800000) {
                uVar6 = uVar19;
              }
              local_108 = (float)(uVar6 & 0x7fffff | ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                 (uVar3 & 0xffff8000) << 0x10);
              uVar3 = *puVar16;
              fVar20 = (float)(uVar3 & 0x3ff) * 8192.0;
              uVar19 = (int)ROUND((fVar20 + fVar20) - 0.5) >> 1;
              uVar6 = 0x7fffff;
              if (uVar19 < 0x800000) {
                uVar6 = uVar19;
              }
              local_124 = (local_108 - fVar39) / (fVar34 - fVar39);
              local_res8 = (float)(uVar6 & 0x7fffff | ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                  (uVar3 & 0xffff8000) << 0x10);
              local_128 = (local_res8 - fVar37) / (fVar38 - fVar37);
              local_11c = (fVar21 - fVar32) / (fVar36 - fVar33);
              local_120 = (local_dc - fVar40) / (fVar35 - fVar40);
              FLinearColor::ToFColor(&local_128,local_118,uVar1);
              puVar16 = puVar16 + 4;
              *puVar10 = local_118._0_4_;
              puVar10 = puVar10 + 1;
              uVar18 = uVar18 - 1;
              fVar32 = (float)param_7;
            } while (uVar18 != 0);
          }
          uVar26 = uVar26 + 1;
          fVar33 = (float)param_7;
          fVar34 = local_e8;
          fVar35 = local_e4;
          fVar36 = local_e0;
        } while (uVar26 < param_3);
      }
    }
  }
  else if (param_1 == 0x1a) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        puVar17 = (uint *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          lVar11 = (ulonglong)(uVar26 * param_2) * 4 - (longlong)puVar17;
          uVar18 = uVar27;
          do {
            auVar30 = _local_118;
            uVar6 = *puVar17;
            local_11c = 1.0;
            fVar40 = (float)(uVar6 & 0x3f) * 262144.0;
            uVar23 = (int)ROUND((fVar40 + fVar40) - 0.5) >> 1;
            uVar19 = 0x7fffff;
            if (uVar23 < 0x800000) {
              uVar19 = uVar23;
            }
            local_128 = (float)(uVar19 & 0x7fffff | ((uVar6 & 0x7c0) + 0x1c00) * 0x20000);
            fVar40 = (float)(uVar6 >> 0xb & 0x3f) * 131072.0;
            uVar23 = (int)ROUND((fVar40 + fVar40) - 0.5) >> 1;
            uVar19 = 0x7fffff;
            if (uVar23 < 0x800000) {
              uVar19 = uVar23;
            }
            local_124 = (float)(uVar19 & 0x7fffff | ((uVar6 & 0x3e0000) + 0xe00000) * 0x40);
            local_118._4_4_ = local_124;
            local_118._0_4_ = local_128;
            fVar40 = (float)(uVar6 >> 0x16 & 0x1f) * 131072.0;
            uVar23 = (int)ROUND((fVar40 + fVar40) - 0.5) >> 1;
            uVar19 = 0x7fffff;
            if (uVar23 < 0x800000) {
              uVar19 = uVar23;
            }
            local_120 = (float)(uVar19 & 0x7fffff | (uVar6 >> 4) + 0x38000000 & 0x7f800000);
            fStack_10c = auVar30._12_4_;
            fStack_110 = local_120;
            FLinearColor::ToFColor(&local_128,&local_res8,uVar1);
            *(float *)(param_6 + lVar11 + (longlong)puVar17) = local_res8;
            puVar17 = puVar17 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 == 2) {
    uVar6 = 0;
    _local_f8 = _DAT_143f39af0;
    auVar30 = _local_f8;
    local_f8._4_4_ = DAT_143f39af0._4_4_;
    uVar26 = 0;
    local_f8._0_4_ = (undefined4)DAT_143f39af0;
    fStack_ec = DAT_143f39af0._12_4_;
    fStack_f0 = DAT_143f39af0._8_4_;
    fStack_10c = 0.0;
    fStack_110 = 0.0;
    fVar33 = 0.0;
    fVar40 = 0.0;
    local_res8 = (float)local_f8._4_4_;
    param_7._0_4_ = (float)local_f8._0_4_;
    fVar38 = fStack_110;
    fVar34 = fStack_10c;
    fVar36 = fStack_ec;
    fVar39 = fStack_f0;
    fVar37 = (float)local_f8._4_4_;
    fVar35 = (float)local_f8._0_4_;
    if (param_3 != 0) {
      do {
        pfVar12 = (float *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
        uVar18 = uVar27;
        if (param_2 != 0) {
          do {
            fVar32 = *pfVar12;
            if (fVar32 <= fVar40) {
              fVar40 = fVar32;
            }
            fVar21 = pfVar12[1];
            if (fVar21 <= fVar33) {
              fVar33 = fVar21;
            }
            fVar20 = pfVar12[2];
            if (fVar20 <= fVar38) {
              fVar38 = fVar20;
            }
            fVar24 = pfVar12[3];
            if (fVar24 <= fVar34) {
              fVar34 = fVar24;
            }
            if (fVar35 <= fVar32) {
              fVar35 = fVar32;
            }
            if (fVar37 <= fVar21) {
              fVar37 = fVar21;
            }
            if (fVar39 <= fVar20) {
              fVar39 = fVar20;
            }
            if (fVar36 <= fVar24) {
              fVar36 = fVar24;
            }
            pfVar12 = pfVar12 + 4;
            uVar18 = uVar18 - 1;
            local_res8 = fVar37;
            param_7._0_4_ = fVar35;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
      _local_118 = ZEXT816(0);
      _local_f8 = auVar30;
      if (param_3 != 0) {
        do {
          puVar10 = (undefined4 *)(param_6 + (ulonglong)(uVar6 * param_2) * 4);
          if (param_2 != 0) {
            pfVar12 = (float *)(param_4 + 2);
            fVar32 = fVar35 - fVar40;
            fVar21 = fVar37 - fVar33;
            uVar18 = uVar27;
            do {
              local_128 = (pfVar12[-2] - fVar40) / fVar32;
              local_124 = (pfVar12[-1] - fVar33) / fVar21;
              local_120 = (*pfVar12 - fVar38) / (fVar39 - fVar38);
              local_11c = (pfVar12[1] - fVar34) / (fVar36 - fVar34);
              FLinearColor::ToFColor(&local_128,local_118,uVar1);
              pfVar12 = pfVar12 + 4;
              *puVar10 = local_118._0_4_;
              puVar10 = puVar10 + 1;
              uVar18 = uVar18 - 1;
              fVar37 = local_res8;
              fVar35 = (float)param_7;
            } while (uVar18 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_3);
      }
    }
  }
  else if (param_1 == 0x2c) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          lVar11 = (ulonglong)(param_2 * uVar26) * 4;
          if (*(char *)(param_7 + 0x10) == '\0') {
            uVar18 = uVar27;
            puVar17 = param_4;
            do {
              auVar28._0_8_ = FUN_141a28930(param_7,(float)(*puVar17 & 0xffffff) * 5.9604645e-08);
              auVar28._8_8_ = extraout_XMM0_Qb;
              if (1.0 <= (float)auVar28._0_8_) {
                auVar29._4_12_ = auVar28._4_12_;
                auVar29._0_4_ = 0x3f800000;
                auVar28._0_8_ = auVar29._0_8_;
              }
              local_11c = 0.0;
              local_128 = (float)auVar28._0_8_;
              local_124 = local_128;
              local_120 = local_128;
              puVar10 = (undefined4 *)FLinearColor::ToFColor(&local_128,local_118,uVar1);
              *(undefined4 *)((longlong)puVar17 + param_6 + (lVar11 - (longlong)param_4)) = *puVar10
              ;
              uVar18 = uVar18 - 1;
              puVar17 = puVar17 + 1;
            } while (uVar18 != 0);
          }
          else {
            local_res8 = -1.7014118e+38;
            puVar10 = (undefined4 *)(lVar11 + param_6);
            uVar18 = uVar27;
            do {
              uVar2 = *(undefined1 *)
                       ((longlong)param_4 + ((ulonglong)(param_2 * uVar26) * -4 - param_6) + 3 +
                       (longlong)puVar10);
              local_res8 = (float)CONCAT31(CONCAT21(CONCAT11(local_res8._3_1_,uVar2),uVar2),uVar2);
              *puVar10 = local_res8;
              uVar18 = uVar18 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 != 0);
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 == 0x13) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        lVar11 = (ulonglong)(uVar26 * param_5) + (longlong)param_4;
        if (param_2 != 0) {
          lVar13 = (ulonglong)(uVar26 * param_2) * 4 - lVar11;
          uVar18 = uVar27;
          do {
            auVar30._0_8_ = FUN_141a28930(param_7);
            auVar30._8_8_ = extraout_XMM0_Qb_00;
            if (1.0 <= (float)auVar30._0_8_) {
              auVar31._4_12_ = auVar30._4_12_;
              auVar31._0_4_ = 0x3f800000;
              auVar30._0_8_ = auVar31._0_8_;
            }
            local_11c = 0.0;
            local_128 = (float)auVar30._0_8_;
            local_124 = local_128;
            local_120 = local_128;
            FLinearColor::ToFColor(&local_128,&local_res8,uVar1);
            *(float *)(lVar11 + param_6 + lVar13) = local_res8;
            lVar11 = lVar11 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if (param_1 == 0xb) {
    uVar26 = 0;
    if (param_3 != 0) {
      do {
        puVar16 = (ushort *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
        puVar10 = (undefined4 *)(param_6 + (ulonglong)(uVar26 * param_2) * 4);
        uVar18 = uVar27;
        if (param_2 != 0) {
          do {
            local_128 = (float)*puVar16 * 1.5259022e-05;
            local_124 = (float)puVar16[1] * 1.5259022e-05;
            local_120 = (float)puVar16[2] * 1.5259022e-05;
            local_11c = (float)puVar16[3] * 1.5259022e-05;
            puVar9 = (undefined4 *)FLinearColor::Quantize(&local_128,&local_res8);
            puVar16 = puVar16 + 4;
            *puVar10 = *puVar9;
            uVar18 = uVar18 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar18 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < param_3);
    }
  }
  else if ((param_1 == 0x23) && (uVar26 = 0, param_3 != 0)) {
    do {
      puVar16 = (ushort *)((ulonglong)(uVar26 * param_5) + (longlong)param_4);
      if (param_2 != 0) {
        puVar10 = (undefined4 *)((ulonglong)(uVar26 * param_2) * 4 + param_6);
        uVar18 = uVar27;
        do {
          local_120 = 0.0;
          local_11c = 1.0;
          local_128 = (float)*puVar16 * 1.5259022e-05;
          local_124 = (float)*(ushort *)
                              ((longlong)param_4 +
                               (((ulonglong)(uVar26 * param_5) + (ulonglong)(uVar26 * param_2) * -4)
                               - param_6) + 2 + (longlong)puVar10) * 1.5259022e-05;
          puVar9 = (undefined4 *)FLinearColor::Quantize(&local_128,&local_res8);
          puVar16 = puVar16 + 2;
          *puVar10 = *puVar9;
          uVar18 = uVar18 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar18 != 0);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < param_3);
  }
  return;
}



// FUNCTION 141a6dbc0 FUN_141a6dbc0 body=1710 status=ok
// SIG undefined FUN_141a6dbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a6dbc0(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong *local_1b0;
  undefined *local_1a8;
  longlong **local_1a0;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  undefined **local_170;
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  ulonglong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [32];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_188 = param_1[2];
  uVar14 = (ulonglong)param_3;
  lVar2 = *(longlong *)(local_188 + 0x10);
  local_180 = lVar2;
  puVar7 = (undefined8 *)FUN_141a6b0c0(&DAT_1469fd078,0x80);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    FName::FName(&local_120,L"Command List Fence",1);
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[3] = local_120;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = lVar2;
    *puVar7 = &PTR_FUN_144daa728;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 9));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar7 + 9),4000);
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  puVar13 = (undefined8 *)0x0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1b,puVar7);
  FUN_141a6e860(param_1[0x1b]);
  lVar12 = local_188;
  local_c0 = *(undefined4 *)(param_1 + 0x1c);
  local_b8 = 0;
  local_bc = param_4;
  plVar8 = (longlong *)
           (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x748))
                     (*(longlong **)(lVar2 + 0x10),local_188,&local_c0);
  plVar3 = (longlong *)param_1[3];
  param_1[3] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1[3]);
  if (param_3 != 0) {
    uVar9 = mu::Mesh::GetFaceBuffers(lVar12);
    FUN_141a4b250(local_e0,uVar9,param_1 + 0x1c);
    do {
      local_170 = &PTR_FUN_144da6378;
      local_168 = 0;
      local_1b8 = param_1;
      FUN_141a531d0(&local_170,param_1[2],*(undefined4 *)(param_1 + 0x1c),local_e0);
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      }
      puVar7 = (undefined8 *)operator_new(0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = &PTR_FUN_144da6378;
        puVar7[2] = local_168;
        if (local_168 != 0) {
          LOCK();
          *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
          UNLOCK();
        }
        puVar11 = (undefined8 *)param_1[10];
        param_1[10] = puVar7;
        *puVar11 = puVar7;
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      lVar2 = local_168;
      local_170 = &PTR_FUN_144da6378;
      if (local_168 != 0) {
        LOCK();
        piVar1 = (int *)(local_168 + 8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (local_168 != 0)) {
          FUN_141a4db60(local_168);
          FMemory::operator_delete(lVar2,0x110);
        }
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    FUN_141a4d880(local_e0);
    lVar12 = local_188;
  }
  if (*(int *)(local_180 + 0x40) != 0) {
    local_190 = (longlong *)0x0;
    puVar7 = (undefined8 *)mu::Mesh::GetFaceBuffers(lVar12);
    if (local_190 != (longlong *)0x0) {
      (**(code **)(*local_190 + 0x10))();
    }
    iVar5 = (**(code **)*puVar7)(puVar7,&DAT_144daaf88,&local_190);
    if (-1 < iVar5) {
      iVar5 = *(int *)(*(longlong *)(param_1[2] + 0x10) + 0xb58);
      iVar6 = 0x400;
      if ((0 < iVar5) && (iVar6 = 0x400, iVar5 < 0x401)) {
        iVar6 = iVar5;
      }
      uVar14 = (ulonglong)(uint)(iVar6 * 4);
      pvVar10 = VirtualAlloc((LPVOID)0x0,(ulonglong)(uint)(iVar6 * 4),0x1000,4);
      param_1[0x27] = pvVar10;
      if (pvVar10 != (LPVOID)0x0) {
        local_160 = (longlong *)0x0;
        iVar5 = (**(code **)(*local_190 + 0x180))(local_190,pvVar10,&DAT_144daaf98,&local_160);
        if (iVar5 < 0) {
          VirtualFree((LPVOID)param_1[0x27],0,0x8000);
          param_1[0x27] = 0;
        }
        else {
          puVar11 = (undefined8 *)operator_new(0x70);
          puVar7 = puVar13;
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &PTR_FUN_1440104c8;
            *(undefined4 *)(puVar11 + 1) = 0;
            puVar11[2] = lVar12;
            *puVar11 = &PTR_FUN_144daa660;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[10] = 0;
            puVar11[0xb] = 0;
            puVar11[0xc] = 1;
            *(undefined4 *)(puVar11 + 0xd) = 0;
            *(undefined2 *)((longlong)puVar11 + 0x6c) = 0;
            *(undefined1 *)((longlong)puVar11 + 0x6e) = 0;
            puVar7 = puVar11;
          }
          puVar11 = (undefined8 *)param_1[0x28];
          param_1[0x28] = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
            UNLOCK();
          }
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar11 + 1);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)*puVar11)();
            }
          }
          plVar3 = local_160;
          if (local_160 != (longlong *)0x0) {
            (**(code **)(*local_160 + 8))(local_160);
          }
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          lVar2 = param_1[0x28];
          *(undefined4 *)(lVar2 + 0x28) = 0;
          if (*(int *)(lVar2 + 0x2c) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0x20,0);
          }
          *(undefined1 *)(lVar2 + 0x6e) = 0;
          plVar8 = *(longlong **)(lVar2 + 0x18);
          *(longlong **)(lVar2 + 0x18) = plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          *(undefined8 *)(lVar2 + 0x30) = local_110;
          *(undefined8 *)(lVar2 + 0x38) = uStack_108;
          *(undefined4 *)(lVar2 + 0x68) = 0;
          *(undefined2 *)(lVar2 + 0x6c) = 0;
          *(undefined4 *)(lVar2 + 0x40) = (undefined4)local_100;
          *(undefined4 *)(lVar2 + 0x44) = local_100._4_4_;
          *(undefined4 *)(lVar2 + 0x48) = (undefined4)uStack_f8;
          *(undefined4 *)(lVar2 + 0x4c) = uStack_f8._4_4_;
          *(int *)(lVar2 + 0x60) = (int)local_110;
          *(undefined4 *)(lVar2 + 0x50) = (undefined4)local_f0;
          *(undefined4 *)(lVar2 + 0x54) = local_f0._4_4_;
          *(undefined4 *)(lVar2 + 0x58) = (undefined4)uStack_e8;
          *(undefined4 *)(lVar2 + 0x5c) = uStack_e8._4_4_;
          *(int *)(lVar2 + 100) = (int)local_110;
          FUN_141a4f8d0(*(undefined1 *)(lVar2 + 0x6e),0,*(undefined8 *)(lVar2 + 0x30));
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
          puVar7 = (undefined8 *)param_1[0x29];
          uStack_13c = 0x10001;
          uStack_138 = 0;
          local_158 = 1;
          uStack_150 = 0;
          uStack_140 = 1;
          uStack_134 = 1;
          uStack_12c = 1;
          local_128 = 0x10;
          param_1[0x29] = 0;
          local_b0 = CONCAT44(uStack_154,1);
          uStack_98 = 0x1000100000001;
          uStack_a8 = 0;
          local_80 = CONCAT44(uStack_124,0x10);
          local_90 = 0;
          uStack_8c = 1;
          uStack_88 = 0;
          uStack_84 = 1;
          local_148 = uVar14;
          local_a0 = uVar14;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 1);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)*puVar7)();
            }
          }
          local_1a0 = &local_178;
          lVar2 = param_1[0x28];
          local_178 = (longlong *)0x0;
          plVar8 = *(longlong **)(lVar2 + 0x18);
          local_1a8 = &DAT_144da7250;
          local_1b0 = (longlong *)0x0;
          local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x400);
          iVar5 = (**(code **)(**(longlong **)(local_180 + 0x18) + 0xe8))
                            (*(longlong **)(local_180 + 0x18),plVar8,0,&local_b0);
          if (-1 < iVar5) {
            local_188 = *(longlong *)(lVar2 + 0x10);
            (**(code **)(*plVar8 + 0x40))(plVar8,local_78);
            lVar12 = operator_new(0xe8);
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
              local_1a0 = local_70;
              local_1b0 = &local_118;
              local_1a8 = (undefined *)((ulonglong)local_1a8 & 0xffffffffffffff00);
              local_1b8 = &local_b0;
              local_118 = lVar2;
              puVar13 = (undefined8 *)FUN_141a67670(lVar12,local_188,local_178,0x400);
            }
            param_1[0x29] = puVar13;
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (local_178 != (longlong *)0x0) {
            (**(code **)(*local_178 + 0x10))();
          }
          if (iVar5 < 0) {
            puVar7 = (undefined8 *)param_1[0x28];
            param_1[0x28] = 0;
            if (puVar7 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar7 + 1);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
            VirtualFree((LPVOID)param_1[0x27],0,0x8000);
            param_1[0x27] = 0;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (local_190 != (longlong *)0x0) {
      (**(code **)(*local_190 + 0x10))();
    }
  }
  return;
}



// FUNCTION 141a6e270 FUN_141a6e270 body=380 status=ok
// SIG undefined FUN_141a6e270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a6e270(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,uint param_5
             ,uint param_6,undefined8 param_7,undefined8 *param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  uint local_128;
  uint local_120;
  uint local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_e8 = (ulonglong)param_5;
  uStack_cc = 1;
  uStack_c8 = 0;
  local_90._0_4_ = 0;
  local_f8 = 1;
  uStack_e0 = 1;
  uStack_dc = 0x10001;
  uStack_d4 = 1;
  if ((param_6 & 8) != 0) {
    local_90._0_4_ = 4;
  }
  uStack_f0 = 0;
  local_c0 = 1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = param_5;
  uStack_ac = 0;
  uStack_a8 = 1;
  uStack_a4 = 0x10001;
  local_a0 = 0;
  uStack_9c = 1;
  uStack_98 = 0;
  uStack_94 = 1;
  if ((param_6 >> 9 & 1) == 0) {
    local_90._0_4_ = (uint)local_90 | 8;
  }
  local_90 = CONCAT44(uStack_c4,(uint)local_90);
  local_108 = (param_6 & 6) != 0;
  local_88[0] = 1;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = param_5;
  uStack_74 = 0;
  uStack_70 = 1;
  uStack_6c = 0x10001;
  local_68 = 0;
  uStack_64 = 1;
  uStack_60 = 0;
  uStack_5c = 1;
  local_58 = local_90;
  local_110 = param_7;
  local_118 = param_6;
  local_120 = param_5;
  local_128 = param_4;
  lVar2 = FUN_141a44de0(*(undefined8 *)param_1[10],param_3,local_88,4);
  if (*(char *)(lVar2 + 0xb8) != '\0') {
    *(undefined1 *)(lVar2 + 0x19) = 0;
  }
  lVar1 = lVar2 + 8;
  local_120 = 1;
  local_128 = param_5;
  uVar3 = (**(code **)(*param_1 + 0x4f8))(param_1,param_3,lVar1,0);
  *param_8 = uVar3;
  AK::MemoryMgr::StartProfileThreadUsage((int)lVar2 + 0x40);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a6e3f0 FUN_141a6e3f0 body=250 status=ok
// SIG undefined FUN_141a6e3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a6e3f0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_a8 [2];
  int local_a0 [6];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[4] = 1;
  local_a0[3] = 1;
  if (param_4 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    local_88 = 1;
    uStack_70 = 1;
    uStack_64 = 1;
    uStack_5c = 1;
    local_58 = param_5;
    uStack_6c = 0x10001;
    uStack_68 = 0;
    local_a8[0] = 0x400;
    if (param_2 != 3) {
      local_a8[0] = 0xac3;
    }
    uStack_80 = 0;
    local_50 = CONCAT44(uStack_84,1);
    uStack_38 = 0x1000100000001;
    uStack_48 = 0;
    local_20 = CONCAT44(uStack_54,param_5);
    local_30 = 0;
    uStack_2c = 1;
    uStack_28 = 0;
    uStack_24 = 1;
    if (param_2 == 2) {
      uVar1 = 0xb;
    }
    else if (param_2 == 3) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = 10;
    }
    local_c8 = local_a8;
    local_c0 = 0;
    local_b8 = param_4;
    local_a0[0] = param_2;
    local_78 = param_3;
    local_40 = param_3;
    uVar1 = FUN_141a6e5e0(0,&local_50,local_a0,uVar1);
  }
  return uVar1;
}



// FUNCTION 141a6e4f0 FUN_141a6e4f0 body=98 status=ok
// SIG undefined FUN_141a6e4f0(void)

void FUN_141a6e4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x8f00);
  if (lVar1 != 0) {
    FUN_141a4b300(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 141a6e560 FUN_141a6e560 body=125 status=ok
// SIG undefined FUN_141a6e560(void)

undefined8 FUN_141a6e560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res20 = 0;
  plVar2 = (longlong *)mu::Mesh::GetFaceBuffers(param_2);
  iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_3,&DAT_144daafe0,&local_res20);
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,
                  "Device->GetDevice()->CreateCommandQueue(&Desc, IID_PPV_ARGS(&pCommandQueue))",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp",0x127,0,
                  &local_18);
  }
  return local_res20;
}



// FUNCTION 141a6e5e0 FUN_141a6e5e0 body=573 status=ok
// SIG undefined FUN_141a6e5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141a6e5e0(longlong param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 *param_5,
                 undefined8 *param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  int *local_98;
  undefined8 *local_90;
  undefined *local_88;
  longlong **local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_7 == (longlong *)0x0) {
    return -0x7fffbffd;
  }
  local_68 = *param_3;
  iStack_64 = param_3[1];
  iStack_60 = param_3[2];
  iStack_5c = param_3[3];
  local_58 = param_3[4];
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  }
  if (((local_68 == 1) && (*param_2 == 1)) &&
     (cVar6 = FUN_141a576c0(param_4,*(undefined8 *)(param_2 + 4)), cVar6 == '\0')) {
    local_68 = 4;
    iStack_60 = 1;
    iStack_64 = 1;
  }
  local_80 = &local_78;
  lVar10 = 0;
  local_88 = &DAT_144da7250;
  local_78 = (longlong *)0x0;
  local_90 = param_6;
  local_98 = (int *)CONCAT44(local_98._4_4_,*param_5);
  iVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))
                    (*(longlong **)(param_1 + 0x18),&local_68,0,param_2);
  plVar5 = local_78;
  if (iVar8 < 0) {
    if (local_68 == 1) {
      plVar1 = *(longlong **)(param_1 + 0x18);
      local_68 = 4;
      iStack_64 = 1;
      iStack_60 = 1;
      local_78 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      local_80 = &local_78;
      local_88 = &DAT_144da7250;
      local_90 = param_6;
      local_98 = (int *)CONCAT44(local_98._4_4_,*param_5);
      iVar8 = (**(code **)(*plVar1 + 0xd8))(plVar1,&local_68,0,param_2);
    }
    if (iVar8 < 0) goto LAB_141a6e7d2;
  }
  lVar9 = operator_new(0xe8);
  if (lVar9 != 0) {
    local_80 = (longlong **)&local_68;
    local_90 = &local_70;
    local_88 = (undefined *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_70 = 0;
    local_98 = param_2;
    lVar10 = FUN_141a67670(lVar9,*(undefined8 *)(param_1 + 0xd50),local_78,*param_5);
  }
  *param_7 = lVar10;
  LOCK();
  *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
  UNLOCK();
  if (param_6 != (undefined8 *)0x0) {
    lVar10 = *param_7;
    uVar2 = *(undefined4 *)((longlong)param_6 + 4);
    uVar3 = *(undefined4 *)(param_6 + 1);
    uVar4 = *(undefined4 *)((longlong)param_6 + 0xc);
    *(undefined4 *)(lVar10 + 0x68) = *(undefined4 *)param_6;
    *(undefined4 *)(lVar10 + 0x6c) = uVar2;
    *(undefined4 *)(lVar10 + 0x70) = uVar3;
    *(undefined4 *)(lVar10 + 0x74) = uVar4;
    *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(param_6 + 2);
    *(undefined1 *)(lVar10 + 0x7c) = 1;
  }
LAB_141a6e7d2:
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  return iVar8;
}



// FUNCTION 141a6e820 CreateComputeShader_RenderThread body=30 status=ok
// SIG undefined CreateComputeShader_RenderThread(void)

undefined8
FD3D12DynamicRHI::CreateComputeShader_RenderThread
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6e840 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141a77610(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6e860 FUN_141a6e860 body=464 status=ok
// SIG undefined FUN_141a6e860(void)

void FUN_141a6e860(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  BOOL BVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  HANDLE pvVar10;
  undefined8 uVar11;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
  }
  if (**(longlong **)(lVar2 + 0x6f8) != 0) {
    plVar9 = *(longlong **)(**(longlong **)(lVar2 + 0x6f8) + 8);
    uVar8 = (**(code **)(*(longlong *)plVar9[2] + 0x40))();
    if ((ulonglong)plVar9[1] <= uVar8) {
      lVar3 = **(longlong **)(lVar2 + 0x6f8);
      if (lVar3 != 0) {
        plVar9 = *(longlong **)(lVar3 + 8);
        uVar11 = *(undefined8 *)(lVar2 + 0x6f8);
        *(longlong *)(lVar2 + 0x6f8) = lVar3;
        *(undefined8 *)(lVar3 + 8) = 0;
        FMemory::operator_delete(uVar11,0x10);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
      goto LAB_141a6e9b7;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
  plVar9 = (longlong *)operator_new(0x20);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x6c0);
    plVar1 = plVar9 + 2;
    *plVar9 = lVar2;
    plVar9[1] = 0;
    *plVar1 = 0;
    plVar9[3] = -1;
    pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    plVar9[3] = (longlong)pvVar10;
    plVar4 = (longlong *)*plVar1;
    plVar5 = *(longlong **)(lVar2 + 0x18);
    *plVar1 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    iVar7 = (**(code **)(*plVar5 + 0x120))(plVar5,0,0,&DAT_144daaf78,plVar1);
    if (iVar7 < 0) {
      local_38 = 0;
      local_30 = 0;
      FUN_141a94000(iVar7,
                    "Parent->GetD3DDevice()->CreateFence(InitialValue, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(Fence.GetInitReference()))"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                    ,0x3c,0,&local_38);
    }
  }
LAB_141a6e9b7:
  *(longlong **)(param_1 + 0x78) = plVar9;
  uVar11 = (**(code **)(*(longlong *)plVar9[2] + 0x40))();
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,local_28);
  AK::MemoryMgr::StartProfileThreadUsage((long)plVar9[2]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x70) + 1;
  return;
}



// FUNCTION 141a6ea30 CreateGeometryShaderWithStreamOutput_RenderThread body=63 status=ok
// SIG undefined CreateGeometryShaderWithStreamOutput_RenderThread(void)

undefined8
FOpenGLDynamicRHI::CreateGeometryShaderWithStreamOutput_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_141a77bd0(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 141a6ea70 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141a77930(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6ea90 FUN_141a6ea90 body=1028 status=ok
// SIG undefined FUN_141a6ea90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a6ebf6) */
/* WARNING: Removing unreachable block (ram,0x000141a6ec03) */
/* WARNING: Removing unreachable block (ram,0x000141a6ecd7) */
/* WARNING: Removing unreachable block (ram,0x000141a6ece4) */

undefined8 *
FUN_141a6ea90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,char param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 *local_c8 [2];
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  puVar11 = (undefined8 *)0x0;
  local_90 = param_5;
  local_c8[0] = (undefined8 *)0x0;
  local_70 = *(undefined4 *)(param_3 + 2);
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_68 = *(undefined4 *)(param_3 + 3);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_60 = *(undefined4 *)(param_3 + 4);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_58 = *(undefined4 *)(param_3 + 5);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_a8 = param_3;
  if (param_8 != '\0') {
    ppuVar9 = (undefined8 **)FUN_141a6f670(&local_b0,param_1,&local_80);
    if (local_c8 != ppuVar9) {
      puVar11 = *ppuVar9;
      *ppuVar9 = (undefined8 *)0x0;
      local_c8[0] = puVar11;
    }
    if (local_b0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b0 + 1);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar8 == 1) && (local_b0 != (undefined8 *)0x0)) {
        (**(code **)*local_b0)(local_b0,1);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(local_c8[0] + 0xd) = param_4;
      *param_2 = local_c8[0];
      return param_2;
    }
  }
  puVar11 = (undefined8 *)0x0;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  }
  if (((int)uStack_78 == 1) && (cVar6 = FUN_141a576c0(param_4,*local_a8), cVar6 == '\0')) {
    local_70 = 1;
    uStack_78 = 0x100000004;
    if (param_8 != '\0') {
      ppuVar9 = (undefined8 **)FUN_141a6f670(&local_a0,param_1,&local_80);
      if (local_c8 != ppuVar9) {
        puVar11 = *ppuVar9;
        *ppuVar9 = (undefined8 *)0x0;
        local_c8[0] = puVar11;
      }
      if (local_a0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_a0 + 1);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (local_a0 != (undefined8 *)0x0)) {
          (**(code **)*local_a0)(local_a0,1);
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined4 *)(local_c8[0] + 0xd) = param_4;
        *param_2 = local_c8[0];
        goto LAB_141a6ee64;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
  local_b8 = (longlong *)0x0;
  iVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe0))
                    (*(longlong **)(param_1 + 0x18),&local_80,&DAT_144daaf98,&local_b8);
  if (iVar8 < 0) {
    if ((int)uStack_78 != 1) {
LAB_141a6ed68:
      if (-1 < iVar8) goto LAB_141a6ed70;
      goto LAB_141a6ee4d;
    }
    local_70 = 1;
    uStack_78 = 0x100000004;
    if (param_8 == '\0') {
LAB_141a6ed32:
      plVar5 = local_b8;
      plVar2 = *(longlong **)(param_1 + 0x18);
      local_b8 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      iVar8 = (**(code **)(*plVar2 + 0xe0))(plVar2,&local_80,&DAT_144daaf98,&local_b8);
      goto LAB_141a6ed68;
    }
    ppuVar9 = (undefined8 **)FUN_141a6f670(&local_98,param_1,&local_80);
    if (local_c8 != ppuVar9) {
      puVar11 = *ppuVar9;
      *ppuVar9 = (undefined8 *)0x0;
      local_c8[0] = puVar11;
    }
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_98 + 1);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar8 == 1) && (local_98 != (undefined8 *)0x0)) {
        (**(code **)*local_98)(local_98,1);
      }
    }
    if (puVar11 == (undefined8 *)0x0) goto LAB_141a6ed32;
    *(undefined4 *)(local_c8[0] + 0xd) = param_4;
    *param_2 = local_c8[0];
  }
  else {
LAB_141a6ed70:
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar11 = local_c8[0];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0xd50);
      *puVar10 = &PTR_FUN_1440104c8;
      *(undefined4 *)(puVar10 + 1) = 0;
      puVar10[2] = uVar3;
      *puVar10 = &PTR_FUN_144daa660;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 1;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined2 *)((longlong)puVar10 + 0x6c) = 0;
      *(undefined1 *)((longlong)puVar10 + 0x6e) = 0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar10;
    if (local_c8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c8[0] + 1);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        puVar4 = (undefined8 *)*local_c8[0];
        local_c8[0] = puVar10;
        (*(code *)*puVar4)(puVar11,1);
        puVar4 = local_c8[0];
      }
    }
    local_c8[0] = puVar4;
    local_88 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    local_d8 = param_7;
    local_e0 = param_6;
    local_e8 = local_90;
    FUN_141a7cac0(puVar10,&local_88,&local_80,param_4);
LAB_141a6ee4d:
    *param_2 = local_c8[0];
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
LAB_141a6ee64:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd60));
  return param_2;
}



// FUNCTION 141a6eea0 FUN_141a6eea0 body=308 status=ok
// SIG undefined FUN_141a6eea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a6eea0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,uint param_5,
             uint param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c8 = (ulonglong)param_5;
  uStack_ac = 1;
  uStack_a8 = 0;
  local_70._0_4_ = 0;
  uStack_d0 = 0;
  uStack_bc = 0x10001;
  if ((param_6 & 8) != 0) {
    local_70._0_4_ = 4;
  }
  local_d8 = 1;
  uStack_c0 = 1;
  uStack_b4 = 1;
  local_a0 = 1;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = param_5;
  uStack_8c = 0;
  uStack_88 = 1;
  uStack_84 = 0x10001;
  local_80 = 0;
  uStack_7c = 1;
  uStack_78 = 0;
  uStack_74 = 1;
  if ((param_6 >> 9 & 1) == 0) {
    local_70._0_4_ = (uint)local_70 | 8;
  }
  local_70 = CONCAT44(uStack_a4,(uint)local_70);
  local_e8 = 0;
  local_f0 = param_7;
  local_f8 = param_6;
  local_100 = param_5;
  local_68[0] = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = param_5;
  uStack_54 = 0;
  uStack_50 = 1;
  uStack_4c = 0x10001;
  local_48 = 0;
  uStack_44 = 1;
  uStack_40 = 0;
  uStack_3c = 1;
  local_38 = local_70;
  local_108 = param_4;
  lVar1 = FUN_141a44de0(**(undefined8 **)(param_1 + 0x50),param_3,local_68,4);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *(undefined1 *)(lVar1 + 0x19) = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)lVar1 + 0x40);
  *param_2 = lVar1 + 8;
  if (lVar1 + 8 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a6efe0 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141a78570(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6f000 FUN_141a6f000 body=369 status=ok
// SIG undefined FUN_141a6f000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141a6f000(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,longlong *param_7,undefined1 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined *local_a8;
  longlong **local_a0;
  longlong *local_98;
  longlong local_90;
  undefined1 local_88 [8];
  longlong *local_80 [5];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_7 == (longlong *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    local_a0 = &local_98;
    local_a8 = &DAT_144da7250;
    lVar5 = 0;
    local_98 = (longlong *)0x0;
    plVar1 = *(longlong **)(param_3 + 0x18);
    local_b0 = (longlong *)0x0;
    local_b8 = CONCAT44(local_b8._4_4_,*param_5);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe8))
                      (*(longlong **)(param_1 + 0x18),plVar1,param_4,param_2);
    if (-1 < iVar3) {
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      (**(code **)(*plVar1 + 0x40))(plVar1,local_88);
      lVar4 = operator_new(0xe8);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
        UNLOCK();
        local_a0 = local_80;
        local_a8 = (undefined *)CONCAT71(local_a8._1_7_,param_8);
        local_b0 = &local_90;
        local_b8 = param_2;
        local_90 = param_3;
        lVar5 = FUN_141a67670(lVar4,uVar2,local_98,*param_5);
      }
      *param_7 = lVar5;
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  return iVar3;
}



// FUNCTION 141a6f180 FUN_141a6f180 body=229 status=ok
// SIG undefined FUN_141a6f180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a6f180(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  bVar1 = *(char *)(param_1 + 0x6e) == '\0';
  local_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_34 = *(undefined4 *)(param_1 + 0x44);
  uStack_30 = *(undefined4 *)(param_1 + 0x48);
  uStack_2c = *(undefined4 *)(param_1 + 0x4c);
  local_28 = *(undefined4 *)(param_1 + 0x50);
  uStack_24 = *(undefined4 *)(param_1 + 0x54);
  uStack_20 = *(undefined4 *)(param_1 + 0x58);
  uStack_1c = *(undefined4 *)(param_1 + 0x5c);
  if (bVar1) {
    uStack_40 = 1;
  }
  else {
    uStack_40 = 0x100000004;
  }
  local_38 = (uint)!bVar1;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_68 = &DAT_143f3eda8;
  }
  else {
    local_68 = *(undefined2 **)(param_1 + 0x20);
  }
  local_60 = *(undefined1 *)(param_1 + 0x6c);
  local_58 = *(undefined1 *)(param_1 + 0x6d);
  local_50 = 1;
  FUN_141a6ea90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),param_2,&local_48,
                *(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(*param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*param_2 + 100) = *(undefined4 *)(param_1 + 100);
  return param_2;
}



// FUNCTION 141a6f270 FUN_141a6f270 body=953 status=ok
// SIG undefined FUN_141a6f270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a6f270(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  uint *local_80;
  undefined8 **local_78;
  undefined1 local_70 [8];
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  bVar1 = param_2[1];
  puVar8 = (undefined8 *)0x0;
  local_68 = 0;
  local_54 = 0;
  local_5c = 4;
  uVar12 = 1;
  if (bVar1 == 1) {
    local_64 = 3;
  }
  else if (bVar1 == 2) {
    local_64 = 2;
  }
  else {
    local_64 = local_5c;
    if (bVar1 != 3) {
      local_64 = 1;
    }
  }
  bVar1 = param_2[2];
  if (bVar1 == 1) {
    local_60 = 3;
  }
  else if (bVar1 == 2) {
    local_60 = 2;
  }
  else {
    local_60 = local_5c;
    if (bVar1 != 3) {
      local_60 = 1;
    }
  }
  bVar1 = param_2[3];
  if (bVar1 == 1) {
    local_5c = 3;
  }
  else if (bVar1 == 2) {
    local_5c = 2;
  }
  else if (bVar1 != 3) {
    local_5c = uVar12;
  }
  local_58 = *(undefined4 *)(param_2 + 4);
  iVar10 = *(int *)(param_2 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcd28) && (_Init_thread_header(&DAT_1469fcd28), DAT_1469fcd28 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
    puVar7 = puVar8;
    if (plVar9 != (longlong *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_1469fcd20 = puVar7;
    _Init_thread_footer(&DAT_1469fcd28);
  }
  iVar5 = *(int *)((longlong)DAT_1469fcd20 + 4);
  if (0 < iVar10) {
    iVar5 = iVar10;
  }
  if (iVar5 < 1) {
    local_54 = 1;
  }
  else {
    local_54 = 0x10;
    if (iVar5 < 0x10) {
      local_54 = iVar5;
    }
  }
  bVar1 = *param_2;
  local_3c = *(undefined4 *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  bVar2 = param_2[0x18];
  if (bVar1 == 0) {
    local_68 = -(uint)(bVar2 != 0) & 0x80;
  }
  else if (bVar1 == 1) {
    local_68 = 0x14;
    if (bVar2 != 0) {
      local_68 = 0x94;
    }
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 < 3) || (4 < bVar1)) goto LAB_141a6f3f3;
      if (local_54 != 1) {
        local_68 = 0x55;
        if (bVar2 != 0) {
          local_68 = 0xd5;
        }
        goto LAB_141a6f3f3;
      }
    }
    local_68 = 0x15;
    if (bVar2 != 0) {
      local_68 = 0x95;
    }
  }
LAB_141a6f3f3:
  local_a8[0] = *(undefined4 *)(param_2 + 0x14);
  FLinearColor::FLinearColor(&local_98,local_a8);
  local_4c = local_98;
  uStack_48 = uStack_94;
  uStack_44 = uStack_90;
  uStack_40 = uStack_8c;
  if (param_2[0x18] == 1) {
    uVar12 = 2;
  }
  local_50 = uVar12;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd160);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd160);
  }
  if (*(int *)(param_1 + 0x638) != *(int *)(param_1 + 0x664)) {
    lVar6 = *(longlong *)(param_1 + 0x670);
    if (*(longlong *)(param_1 + 0x670) == 0) {
      lVar6 = param_1 + 0x668;
    }
    iVar10 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x678) - 1U & (longlong)(int)local_68) *
                              4);
    if (iVar10 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x630);
      do {
        puVar7 = (undefined8 *)(lVar6 + (longlong)iVar10 * 0x48);
        iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,&local_68,0x34);
        if (iVar5 == 0) {
          if (iVar10 != -1) goto LAB_141a6f4b3;
          break;
        }
        iVar10 = *(int *)(puVar7 + 8);
      } while (iVar10 != -1);
    }
  }
  puVar7 = puVar8;
LAB_141a6f4b3:
  puVar11 = puVar7 + 7;
  if (puVar7 == (undefined8 *)0x0) {
    puVar11 = puVar8;
  }
  if (puVar11 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x30);
    if (puVar7 != (undefined8 *)0x0) {
      uVar3 = *(undefined2 *)(param_1 + 0x680);
      *puVar7 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined2 *)(puVar7 + 2) = 0x100;
      puVar7[3] = param_1;
      *puVar7 = &PTR_FUN_144daa620;
      *(undefined2 *)((longlong)puVar7 + 0x2c) = uVar3;
      puVar7[4] = 0;
      puVar8 = (undefined8 *)
               FDescriptorHeapManager::AllocateHeapSlot(param_1 + 0x290,local_70,puVar7 + 5);
      puVar7[4] = *puVar8;
      FD3D12Device::CreateSamplerInternal(puVar7[3],&local_68);
      puVar8 = puVar7;
    }
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    local_80 = &local_68;
    local_78 = &local_a0;
    local_a0 = puVar8;
    FUN_141a62ea0((longlong *)(param_1 + 0x630),local_88,&local_80,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
    *(int *)(param_1 + 0x680) = *(int *)(param_1 + 0x680) + 1;
  }
  else {
    puVar8 = (undefined8 *)*puVar11;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd160);
  return puVar8;
}



// FUNCTION 141a6f630 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141a8fad0(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6f650 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141a78b60(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141a6f670 FUN_141a6f670 body=710 status=ok
// SIG undefined FUN_141a6f670(void)

longlong * FUN_141a6f670(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  undefined8 local_res10;
  int local_res18;
  int local_res20;
  
  puVar10 = (ulonglong *)0x0;
  *param_1 = 0;
  uVar9 = *param_3 + -1 + param_3[4] & ~(param_3[4] - 1U);
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xd88));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xd88));
  }
  if (*(int *)(param_2 + 0xdc0) != *(int *)(param_2 + 0xdec)) {
    lVar6 = *(longlong *)(param_2 + 0xdf8);
    if (*(longlong *)(param_2 + 0xdf8) == 0) {
      lVar6 = param_2 + 0xdf0;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)(uVar9 >> 0x20) * 0x17 + (int)uVar9) &
                             (longlong)*(int *)(param_2 + 0xe00) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x20 + *(longlong *)(param_2 + 0xdb8));
        if (*puVar8 == uVar9) {
          if (iVar5 != -1) goto LAB_141a6f741;
          break;
        }
        iVar5 = (int)puVar8[3];
      } while (iVar5 != -1);
    }
  }
  puVar8 = puVar10;
LAB_141a6f741:
  puVar12 = puVar8 + 1;
  if (puVar8 == (ulonglong *)0x0) {
    puVar12 = puVar10;
  }
  if ((puVar12 != (ulonglong *)0x0) && (0 < (int)puVar12[1])) {
    local_res20 = (int)param_3[1];
    local_res18 = *(int *)((longlong)param_3 + 0xc);
    local_res10 = CONCAT44(local_res10._4_4_,(int)param_3[5]);
    plVar11 = (longlong *)*puVar12;
    do {
      lVar6 = *plVar11;
      iVar5 = (int)puVar10;
      if (*(int *)(lVar6 + 0x58) == (int)param_3[5] &&
          ((*(int *)(lVar6 + 0x40) == (int)param_3[2] &&
           (*(int *)(lVar6 + 0x38) == local_res20 && *(int *)(lVar6 + 0x3c) == local_res18)) &&
          *(longlong *)(lVar6 + 0x50) == param_3[4])) {
        puVar3 = (undefined8 *)*param_1;
        lVar6 = (longlong)iVar5 * 8;
        lVar2 = ((longlong *)*puVar12)[iVar5];
        *param_1 = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        LOCK();
        *(longlong *)(param_2 + 0xdb0) = *(longlong *)(param_2 + 0xdb0) - uVar9;
        UNLOCK();
        puVar3 = *(undefined8 **)(lVar6 + *puVar12);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar7 == 1) && (puVar3 != (undefined8 *)0x0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        iVar7 = (int)puVar12[1];
        iVar5 = (iVar7 - iVar5) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*puVar12 + lVar6),(void *)(*puVar12 + (longlong)(iVar7 - iVar5) * 8),
                     (longlong)iVar5 << 3);
          iVar7 = (int)puVar12[1];
        }
        *(int *)(puVar12 + 1) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar12);
        break;
      }
      puVar10 = (ulonglong *)(ulonglong)(iVar5 + 1U);
      plVar11 = plVar11 + 1;
    } while ((int)(iVar5 + 1U) < (int)puVar12[1]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xd88));
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0x68) = 0;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x6d) == '\0') {
      local_res10 = *(undefined8 *)(lVar6 + 0x18);
      plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10) + 0x18);
      iVar5 = (**(code **)(*plVar11 + 0x110))(plVar11,1,&local_res10);
      if (iVar5 < 0) {
        puVar3 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 141a6f940 FUN_141a6f940 body=166 status=ok
// SIG undefined FUN_141a6f940(void)

undefined1 FUN_141a6f940(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1469fd1b4 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) {
    return DAT_1469fd1b0;
  }
  _Init_thread_header(&DAT_1469fd1b4);
  if (DAT_1469fd1b4 != -1) {
    return DAT_1469fd1b0;
  }
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"d3ddebug");
  if (cVar1 == '\0') {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"d3debug");
    if (cVar1 == '\0') {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"dxdebug");
      DAT_1469fd1b0 = 0;
      if (cVar1 == '\0') goto LAB_141a6f9d2;
    }
  }
  DAT_1469fd1b0 = 1;
LAB_141a6f9d2:
  _Init_thread_footer(&DAT_1469fd1b4);
  return DAT_1469fd1b0;
}



// FUNCTION 141a6f9f0 FUN_141a6f9f0 body=457 status=ok
// SIG undefined FUN_141a6f9f0(void)

void FUN_141a6f9f0(longlong *param_1,char param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  ulonglong *local_res20;
  
  if (((param_2 != '\0') || (DAT_146ab62c8 != '\0')) &&
     (lVar6 = *param_1, *(char *)(lVar6 + 0x6c) != '\0')) {
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10);
    local_res8 = *(longlong *)(lVar6 + 0x30) + 0xffffU & 0xffffffffffff0000;
    if (*(char *)(lVar6 + 0x6d) == '\0') {
      local_res18 = *(undefined8 *)(lVar6 + 0x18);
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10) + 0x18);
      (**(code **)(*plVar8 + 0x118))(plVar8,1,&local_res18);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0xd88);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    LOCK();
    *(longlong *)(lVar2 + 0xdb0) = *(longlong *)(lVar2 + 0xdb0) + local_res8;
    UNLOCK();
    plVar8 = (longlong *)(lVar2 + 0xdb8);
    if (*(int *)(lVar2 + 0xdc0) != *(int *)(lVar2 + 0xdec)) {
      lVar6 = *(longlong *)(lVar2 + 0xdf8);
      if (*(longlong *)(lVar2 + 0xdf8) == 0) {
        lVar6 = lVar2 + 0xdf0;
      }
      iVar5 = *(int *)(lVar6 + ((longlong)((int)(local_res8 >> 0x20) * 0x17 + (int)local_res8) &
                               (longlong)*(int *)(lVar2 + 0xe00) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          puVar7 = (ulonglong *)((longlong)iVar5 * 0x20 + *plVar8);
          if (*puVar7 == local_res8) {
            if ((iVar5 != -1) && (puVar7 != (ulonglong *)0x0)) goto LAB_141a6fb3e;
            break;
          }
          iVar5 = (int)puVar7[3];
        } while (iVar5 != -1);
      }
    }
    local_res20 = &local_res8;
    FUN_141a628b0(plVar8,local_res10,&local_res20,0);
    puVar7 = (ulonglong *)((longlong)local_res10[0] * 0x20 + *plVar8);
LAB_141a6fb3e:
    iVar5 = (int)puVar7[2];
    *(int *)(puVar7 + 2) = iVar5 + 1;
    if (*(int *)((longlong)puVar7 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar7 + 1,iVar5);
    }
    *(longlong *)(puVar7[1] + (longlong)iVar5 * 8) = *param_1;
    *param_1 = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141a6fbb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a6fbc0 D3DX12SerializeVersionedRootSignature body=734 status=ok
// SIG undefined D3DX12SerializeVersionedRootSignature(void)

LPVOID D3DX12SerializeVersionedRootSignature
                 (int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LPVOID pvVar5;
  HANDLE pvVar6;
  LPVOID lpMem;
  LPVOID pvVar7;
  longlong lVar8;
  int *piVar9;
  LPVOID pvVar10;
  uint uVar11;
  LPVOID pvVar12;
  LPVOID pvVar13;
  uint local_68 [2];
  LPVOID local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  
  pvVar5 = (LPVOID)0x0;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return (LPVOID)0x80070057;
    }
    pvVar5 = (LPVOID)D3D12SerializeVersionedRootSignature(param_1,param_3,param_4);
    return pvVar5;
  }
  if (*param_1 == 1) {
    pvVar5 = (LPVOID)_guard_xfg_dispatch_icall_nop(param_1 + 2,1);
    return pvVar5;
  }
  if (*param_1 != 2) {
    return (LPVOID)0x80070057;
  }
  uVar4 = param_1[2];
  lpMem = pvVar5;
  if ((ulonglong)uVar4 != 0) {
    pvVar6 = GetProcessHeap();
    lpMem = HeapAlloc(pvVar6,0,(ulonglong)uVar4 << 5);
    if (lpMem == (LPVOID)0x0) {
      return (LPVOID)0x8007000e;
    }
  }
  uVar4 = 0;
  pvVar12 = pvVar5;
  pvVar13 = pvVar5;
  if (param_1[2] != 0) {
    do {
      lVar8 = (longlong)pvVar12 * 0x20;
      puVar1 = (undefined4 *)(lVar8 + (longlong)lpMem);
      *puVar1 = *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 4));
      puVar1[6] = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0x18 + lVar8);
      piVar9 = (int *)(*(longlong *)(param_1 + 4) + lVar8);
      iVar3 = *piVar9;
      if (iVar3 == 0) {
        uVar4 = piVar9[2];
        lVar8 = (ulonglong)uVar4 * 5;
        pvVar7 = pvVar5;
        if ((lVar8 != 0) && (-1 < (int)pvVar13)) {
          pvVar6 = GetProcessHeap();
          pvVar7 = HeapAlloc(pvVar6,0,(ulonglong)uVar4 * 0x14);
          uVar4 = piVar9[2];
        }
        if ((lVar8 != 0) && (pvVar7 == (LPVOID)0x0)) {
          pvVar13 = (LPVOID)0x8007000e;
        }
        if ((-1 < (int)pvVar13) && (pvVar10 = pvVar5, uVar4 != 0)) {
          do {
            uVar11 = (int)pvVar10 + 1;
            lVar8 = (longlong)pvVar10 * 0x18;
            puVar2 = (undefined4 *)((longlong)pvVar7 + (longlong)pvVar10 * 0x14);
            puVar2[2] = *(undefined4 *)(lVar8 + 8 + *(longlong *)(piVar9 + 4));
            puVar2[1] = *(undefined4 *)(lVar8 + 4 + *(longlong *)(piVar9 + 4));
            puVar2[4] = *(undefined4 *)(lVar8 + 0x14 + *(longlong *)(piVar9 + 4));
            *puVar2 = *(undefined4 *)(lVar8 + *(longlong *)(piVar9 + 4));
            puVar2[3] = *(undefined4 *)(lVar8 + 0xc + *(longlong *)(piVar9 + 4));
            uVar4 = piVar9[2];
            pvVar10 = (LPVOID)(ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
        *(LPVOID *)(puVar1 + 4) = pvVar7;
LAB_141a6fdb8:
        puVar1[2] = uVar4;
      }
      else {
        if (iVar3 == 1) {
          puVar1[4] = piVar9[4];
          puVar1[3] = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0xc + lVar8);
          uVar4 = *(uint *)(*(longlong *)(param_1 + 4) + 8 + lVar8);
          goto LAB_141a6fdb8;
        }
        if (iVar3 - 2U < 3) {
          puVar1[3] = piVar9[3];
          uVar4 = *(uint *)(*(longlong *)(param_1 + 4) + 8 + lVar8);
          goto LAB_141a6fdb8;
        }
      }
      uVar4 = param_1[2];
      uVar11 = (int)pvVar12 + 1;
      pvVar12 = (LPVOID)(ulonglong)uVar11;
    } while (uVar11 < uVar4);
    if ((int)pvVar13 < 0) goto LAB_141a6fe1e;
  }
  local_58 = param_1[6];
  local_50 = *(undefined8 *)(param_1 + 8);
  local_48 = param_1[10];
  local_68[0] = uVar4;
  local_60 = lpMem;
  uVar4 = _guard_xfg_dispatch_icall_nop(local_68,1,param_3,param_4);
  pvVar13 = (LPVOID)(ulonglong)uVar4;
LAB_141a6fe1e:
  if (lpMem != (LPVOID)0x0) {
    if (param_1[2] != 0) {
      do {
        if (*(int *)((longlong)pvVar5 * 0x20 + *(longlong *)(param_1 + 4)) == 0) {
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,*(LPVOID *)((longlong)pvVar5 * 0x20 + 0x10 + (longlong)lpMem));
        }
        uVar4 = (int)pvVar5 + 1;
        pvVar5 = (LPVOID)(ulonglong)uVar4;
      } while (uVar4 < (uint)param_1[2]);
    }
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,lpMem);
  }
  return pvVar13;
}



// FUNCTION 141a6fea0 FUN_141a6fea0 body=275 status=ok
// SIG undefined FUN_141a6fea0(void)

undefined8 FUN_141a6fea0(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  longlong lVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined1 local_28 [16];
  
  BVar6 = TryEnterCriticalSection(param_1);
  if (BVar6 == 0) {
    EnterCriticalSection(param_1);
  }
  *(int *)&param_1[1].LockSemaphore = *(int *)&param_1[1].LockSemaphore + -1;
  pvVar3 = *(HANDLE *)param_1[1].OwningThread;
  if (pvVar3 == (HANDLE)0x0) {
    uVar7 = 0;
  }
  else {
    FUN_141a69050(param_2,(undefined1 *)((longlong)pvVar3 + 8));
    pvVar4 = param_1[1].OwningThread;
    param_1[1].OwningThread = pvVar3;
    if ((undefined1 *)((longlong)pvVar3 + 8) != local_28) {
      if (*(longlong *)((longlong)pvVar3 + 0x10) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)pvVar3 + 0x10) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (lVar5 = *(longlong *)((longlong)pvVar3 + 0x10), lVar5 != 0)) {
          FUN_141a4db60(lVar5);
          FMemory::operator_delete(lVar5,0x110);
        }
      }
      *(undefined8 *)((longlong)pvVar3 + 0x10) = 0;
    }
    if (pvVar4 != (HANDLE)0x0) {
      *(undefined ***)((longlong)pvVar4 + 8) = &PTR_FUN_144da6378;
      if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (lVar5 = *(longlong *)((longlong)pvVar4 + 0x10), lVar5 != 0)) {
          FUN_141a4db60(lVar5);
          FMemory::operator_delete(lVar5,0x110);
        }
      }
      FMemory::operator_delete(pvVar4,0x18);
    }
    uVar7 = 1;
  }
  LeaveCriticalSection(param_1);
  return uVar7;
}



// FUNCTION 141a6ffc0 FUN_141a6ffc0 body=736 status=ok
// SIG undefined FUN_141a6ffc0(void)

void FUN_141a6ffc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  BOOL BVar8;
  undefined8 uVar9;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd8);
    FUN_141a97610(lVar3,*(undefined4 *)(param_1 + 0xe4),*(undefined8 *)(lVar3 + 0x30));
    uVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x78) + 0x10) + 0x40))();
    *(longlong *)(lVar3 + 0x30) = *(longlong *)(lVar3 + 0x30) + 1;
    *(undefined8 *)(lVar3 + 0x70) = uVar9;
    *(undefined8 *)(lVar3 + 0x40) = uVar9;
    FUN_141a98990(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(lVar3 + 0x38));
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  local_40 = 0;
  while( true ) {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    }
    lVar3 = **(longlong **)(param_1 + 0x58);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    if (lVar3 == 0) break;
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    lVar3 = **(longlong **)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (local_48 != (undefined1 *)(lVar3 + 8)) {
        if (local_40 != 0) {
          LOCK();
          piVar1 = (int *)(local_40 + 8);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FUN_141a4db60(local_40);
            FMemory::operator_delete(local_40);
          }
        }
        lVar5 = *(longlong *)(lVar3 + 0x10);
        local_40 = 0;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
          local_40 = lVar5;
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x58);
      *(longlong *)(param_1 + 0x58) = lVar3;
      if ((undefined1 *)(lVar3 + 8) != local_38) {
        if (*(longlong *)(lVar3 + 0x10) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 8);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 != 0)) {
            FUN_141a4db60(lVar6);
            FMemory::operator_delete(lVar6);
          }
        }
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      if (lVar5 != 0) {
        *(undefined ***)(lVar5 + 8) = &PTR_FUN_144da6378;
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar5 + 0x10) + 8);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 != 0)) {
            FUN_141a4db60(lVar3);
            FMemory::operator_delete(lVar3,0x110);
          }
        }
        FMemory::operator_delete(lVar5);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_141a702a0();
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xd8,0);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x148);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar7)(puVar7,1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    VirtualFree(*(LPVOID *)(param_1 + 0x138),0,0x8000);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (local_40 != 0) {
    LOCK();
    piVar1 = (int *)(local_40 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4db60(local_40);
      FMemory::operator_delete(local_40,0x110);
    }
  }
  return;
}



// FUNCTION 141a702a0 FUN_141a702a0 body=179 status=ok
// SIG undefined FUN_141a702a0(void)

void FUN_141a702a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
    }
    *(longlong *)(lVar1 + 8) = lVar6;
    puVar5 = (undefined8 *)operator_new(0x10);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = lVar1;
      puVar3 = *(undefined8 **)(lVar2 + 0x6f0);
      *(undefined8 **)(lVar2 + 0x6f0) = puVar5;
      *puVar3 = puVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x6c8));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 141a70360 Destroy body=133 status=ok
// SIG undefined Destroy(void)

void FD3D12FenceCorePool::Destroy(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  while (lVar1 = **(longlong **)(param_1 + 0x38), lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x38) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    FMemory::operator_delete(uVar3,0x10);
    if (lVar2 != 0) {
      if (*(undefined1 **)(lVar2 + 0x18) != &DAT_ffffffffffffffff) {
        CloseHandle(*(undefined1 **)(lVar2 + 0x18));
        *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
      }
      if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))();
      }
      FMemory::operator_delete(lVar2,0x20);
    }
  }
  return;
}



// FUNCTION 141a703f0 FUN_141a703f0 body=42 status=ok
// SIG undefined FUN_141a703f0(void)

void FUN_141a703f0(longlong param_1)

{
  FUN_141a4f8d0(*(undefined1 *)(param_1 + 0x6e),*(undefined4 *)(param_1 + 0x68),
                -*(longlong *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 141a70420 FUN_141a70420 body=120 status=ok
// SIG undefined FUN_141a70420(void)

void FUN_141a70420(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x18);
    (**(code **)(*plVar3 + 0x48))(plVar3,0,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141a7048f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a704a0 FUN_141a704a0 body=338 status=ok
// SIG undefined FUN_141a704a0(void)

void FUN_141a704a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar5 = (uVar1 & 1) * 2 | uVar1 & 4;
  uVar6 = uVar1 & 2;
  uVar1 = ~(uVar1 >> 3) & 1;
  uVar2 = -(uint)(uVar5 != 0 || uVar6 != 0) & 0x10;
  uVar3 = uVar2 | uVar1 | uVar6;
  *(byte *)(param_1 + 0xb5) = (byte)(uVar3 >> 1) & 1;
  if (uVar2 == 0) goto LAB_141a705a6;
  if ((uVar5 * 2 & 4) == 0) {
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 8;
      goto LAB_141a7058e;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x10;
    uVar4 = 0xe0;
    if (uVar1 == 0) {
      uVar4 = 0x20;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 4;
LAB_141a7058e:
    uVar4 = 0xc0;
    if (uVar1 == 0) {
      uVar4 = 0xfffffffe;
    }
  }
  *(undefined4 *)(param_1 + 0xac) = uVar4;
LAB_141a705a6:
  if (*(int *)(param_1 + 0x30) == 1) {
    if (uVar2 == 0) {
      *(undefined1 *)(param_1 + 0xb4) = 0;
      uVar4 = 0xac3;
      if (*(int *)(param_1 + 0xb8) == 3) {
        uVar4 = 0x400;
      }
      *(undefined4 *)(param_1 + 0xa8) = uVar4;
      return;
    }
  }
  else if (((byte)uVar3 & 0x11) == 1) {
    *(undefined4 *)(param_1 + 0xa8) = 0xc0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 141a70600 FUN_141a70600 body=22 status=ok
// SIG undefined FUN_141a70600(void)

void FUN_141a70600(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1aa0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1aa8) = 0xffffffff;
  return;
}



// FUNCTION 141a70620 FUN_141a70620 body=164 status=ok
// SIG undefined FUN_141a70620(void)

void FUN_141a70620(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x1db8) = 1;
  *(undefined1 *)(param_1 + 0x7e8) = 1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x1010101;
  *(undefined4 *)(param_1 + 0x25) = 0x1010101;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x2a) = DAT_146ab62ec;
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x7f0 + lVar2 * 8);
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 < 6);
  *(undefined8 *)(param_1 + 0x1778) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1780) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1468) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1470) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1aa0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1aa8) = 0xffffffff;
  return;
}



// FUNCTION 141a706d0 FUN_141a706d0 body=324 status=ok
// SIG undefined FUN_141a706d0(void)

void FUN_141a706d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x1db8) = 1;
  *(undefined1 *)(param_1 + 0x7e8) = 1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 0x4e4) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(int *)(param_1 + 0x4e8) != 0) {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  if ((*(int *)(param_1 + 0x7c0) != 0) || (*(longlong *)(param_1 + 0x7c8) != 0)) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  if (*(int *)(param_1 + 0x73c) != 0) {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  if (*(int *)(param_1 + 0x538) != 0) {
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  if ((((*(float *)(param_1 + 0x48) != 1.0) || (*(float *)(param_1 + 0x4c) != 1.0)) ||
      (*(float *)(param_1 + 0x50) != 1.0)) || (*(float *)(param_1 + 0x54) != 1.0)) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  if ((*(float *)(param_1 + 2000) != 0.0) || (*(float *)(param_1 + 0x7d4) != 1.0)) {
    *(undefined1 *)(param_1 + 0x2a) = DAT_146ab62ec;
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x7f0 + lVar2 * 8);
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 < 6);
  *(undefined8 *)(param_1 + 0x1778) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1780) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1468) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1470) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1aa0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1aa8) = 0xffffffff;
  return;
}



// FUNCTION 141a70820 FUN_141a70820 body=74 status=ok
// SIG undefined FUN_141a70820(void)

void FUN_141a70820(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x7f0 + lVar2 * 8);
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 < 6);
  *(undefined8 *)(param_1 + 0x1778) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1780) = 0xffffffff;
  return;
}



// FUNCTION 141a70870 DoWork body=126 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  while (lVar3 = **(longlong **)(param_1 + 0x28), lVar3 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar3;
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar3 + 0x14) = 0;
    FMemory::operator_delete(uVar4,0x18);
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  UNLOCK();
  return;
}



// FUNCTION 141a708f0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141a709b0 FUN_141a709b0 body=181 status=ok
// SIG undefined FUN_141a709b0(void)

void FUN_141a709b0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_141a7c7a0();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_141a6ca50(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141a70a70 FUN_141a70a70 body=113 status=ok
// SIG undefined FUN_141a70a70(void)

void FUN_141a70a70(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  
  *(int *)(param_2 + 0x2c58) = *(int *)(param_2 + 0x2c58) + 1;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x468) + 0x28);
  (**(code **)(*plVar2 + 0x1a8))
            (plVar2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),param_3);
  if (param_4 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = param_4;
  }
  return;
}



// FUNCTION 141a70af0 FUN_141a70af0 body=505 status=ok
// SIG undefined FUN_141a70af0(void)

void FUN_141a70af0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar4;
    uVar11 = 0;
    plVar1 = (longlong *)(param_1 + 0x18);
    iVar4 = iVar4 + -1 + *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0xc) = iVar4;
    *(int *)(param_1 + 0x44) = iVar4;
    uVar5 = *(int *)(param_1 + 0x3c) + 1;
    if (*(uint *)(param_1 + 0x38) <= uVar5) {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0x3c) = uVar5;
    piVar8 = (int *)((longlong)(int)uVar5 * 0x20 + *(longlong *)(param_1 + 0x28));
    *piVar8 = *(int *)(param_1 + 8);
    plVar2 = (longlong *)(piVar8 + 4);
    piVar8[1] = *(int *)(param_1 + 0xc);
    piVar8[2] = *(int *)(param_1 + 0x10);
    *(undefined1 *)(piVar8 + 3) = *(undefined1 *)(param_1 + 0x14);
    if (plVar2 != plVar1) {
      iVar4 = *(int *)(param_1 + 0x20);
      _Src = (void *)*plVar1;
      piVar8[6] = iVar4;
      if ((iVar4 == 0) && (piVar8[7] == 0)) {
        piVar8[7] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar2,iVar4);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar4 << 3);
      }
    }
    uVar7 = *(int *)(param_1 + 0x3c) + 1;
    uVar5 = 0;
    if (uVar7 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar7;
    }
    puVar9 = (undefined4 *)((longlong)(int)uVar5 * 0x20 + *(longlong *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x40) = *puVar9;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - puVar9[2];
    *(int *)(param_2 + 0x2c58) = *(int *)(param_2 + 0x2c58) + 1;
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x468) + 0x28);
    (**(code **)(*plVar2 + 0x1b0))
              (plVar2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),
               *(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),
               *(int *)(param_1 + 0x50) * *(int *)(param_1 + 8));
    uVar10 = uVar11;
    uVar12 = uVar11;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        lVar3 = *(longlong *)(uVar12 + *plVar1);
        FUN_141a69050(lVar3 + 0x40,param_2 + 0x460);
        uVar6 = uVar11;
        if (*(longlong *)(param_2 + 0x468) != 0) {
          uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x468) + 0x40);
        }
        *(ulonglong *)(lVar3 + 0x50) = uVar6;
        uVar5 = (int)uVar10 + 1;
        *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) | 2;
        uVar10 = (ulonglong)uVar5;
        uVar12 = uVar12 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x20));
    }
    if (DAT_1469fd1c8 == '\0') {
      DAT_1469fd1c8 = '\x01';
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
      }
      uVar7 = *(int *)(param_1 + 0x4c) + 1;
      *(undefined1 *)(param_1 + 0x14) = 1;
      uVar5 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x58)) {
        uVar5 = uVar7;
      }
      *(uint *)(param_1 + 8) = uVar5;
    }
  }
  return;
}



// FUNCTION 141a70cf0 FUN_141a70cf0 body=350 status=ok
// SIG undefined FUN_141a70cf0(void)

void FUN_141a70cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    iVar7 = *(int *)(param_1 + 0x1c);
    iVar5 = iVar7 * 2;
    lVar2 = **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd50) + 0x5d8);
    *(int *)(lVar2 + 0x2c58) = *(int *)(lVar2 + 0x2c58) + 2;
    if (*(char *)(param_1 + 0x24) == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x30);
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(lVar1 + 8),2,iVar5 + 1);
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
      (**(code **)(*plVar3 + 0x1b0))
                (plVar3,*(undefined8 *)(lVar1 + 8),2,iVar5,2,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),iVar7 << 4);
    }
    else {
      uVar4 = FUN_141a6b7a0(DAT_1469fd220,lVar2);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      lVar1 = DAT_1469fd220;
      *(int *)(lVar2 + 0x2c58) = *(int *)(lVar2 + 0x2c58) + 1;
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
      (**(code **)(*plVar3 + 0x1a8))
                (plVar3,*(undefined8 *)(lVar1 + 0x68),*(undefined4 *)(lVar1 + 0x60),uVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x38) + ((longlong)iVar5 + 1) * 0x18;
    FUN_141a69050(lVar1,lVar2 + 0x460);
    uVar6 = 0;
    if (*(longlong *)(lVar2 + 0x468) != 0) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 0x468) + 0x40);
    }
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    iVar5 = *(int *)(param_1 + 0x20) + 1;
    *(undefined1 *)(param_1 + 0x50) = 0;
    iVar7 = *(int *)(param_1 + 0x18);
    if (iVar5 <= *(int *)(param_1 + 0x18)) {
      iVar7 = iVar5;
    }
    *(int *)(param_1 + 0x20) = iVar7;
  }
  return;
}



// FUNCTION 141a70e50 FUN_141a70e50 body=125 status=ok
// SIG undefined FUN_141a70e50(void)

void FUN_141a70e50(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = &PTR_FUN_144da6378;
    lVar1 = *(longlong *)(param_2 + 8);
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined8 **)&param_1[1].LockCount;
    *(undefined8 **)&param_1[1].LockCount = puVar4;
    *puVar2 = puVar4;
  }
  *(int *)&param_1[1].LockSemaphore = *(int *)&param_1[1].LockSemaphore + 1;
                    /* WARNING: Could not recover jumptable at 0x000141a70ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 141a70ed0 FUN_141a70ed0 body=119 status=ok
// SIG undefined FUN_141a70ed0(void)

void FUN_141a70ed0(longlong *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x738) + 0x30);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    local_18 = (undefined4)param_2;
    uStack_14 = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_10 = (undefined4)uVar1;
    uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = local_18;
    *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_14;
    *(undefined4 *)(puVar4 + 2) = uStack_10;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_c;
    puVar2 = (undefined8 *)param_1[8];
    param_1[8] = (longlong)puVar4;
    *puVar2 = puVar4;
  }
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
                    /* WARNING: Could not recover jumptable at 0x000141a70f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a70f50 EnsureCompletion body=148 status=ok
// SIG undefined EnsureCompletion(void)

void FAsyncTask<FD3D12PipelineStateWorker>::EnsureCompletion(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0x30) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0x30) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        FUN_141a96040(param_1 + 8);
        LOCK();
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        UNLOCK();
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        FUN_141a96040(param_1 + 8);
        LOCK();
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
          *(undefined8 *)(param_1 + 0x40) = 0;
          return;
        }
        goto LAB_141a70fd5;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),0xffffffff,0)
  ;
LAB_141a70fd5:
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 141a70ff0 FUN_141a70ff0 body=129 status=ok
// SIG undefined FUN_141a70ff0(void)

void FUN_141a70ff0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = &PTR_FUN_144da6378;
  lVar1 = *(longlong *)(param_2 + 8);
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 8))(param_1,&local_18,param_3);
  FUN_141a4cff0(&local_18);
  return;
}



// FUNCTION 141a71080 FUN_141a71080 body=3799 status=ok
// SIG undefined FUN_141a71080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a71080(longlong param_1,longlong *param_2,char param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  BOOL BVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined **ppuVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_1968 [32];
  undefined8 local_1948;
  undefined8 *local_1940;
  char local_1938;
  longlong local_1930;
  int local_1928;
  longlong local_1920;
  undefined8 local_1918;
  undefined8 uStack_1910;
  undefined **local_1908;
  undefined **local_1900;
  undefined8 local_18f8;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  longlong local_18d8;
  undefined8 local_18d0;
  undefined8 local_18c8;
  undefined8 local_18c0;
  undefined4 uStack_18b8;
  undefined4 uStack_18b4;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  undefined8 local_18a8;
  undefined4 uStack_18a0;
  undefined4 uStack_189c;
  undefined4 uStack_1898;
  undefined4 uStack_1894;
  undefined8 local_1888 [256];
  uint local_1088;
  undefined8 local_1078 [256];
  uint local_878;
  undefined **local_868;
  undefined **local_860 [4];
  undefined8 local_840;
  undefined **local_838;
  undefined8 local_830;
  undefined **local_828;
  undefined8 local_820;
  undefined **local_818;
  undefined8 local_810;
  undefined **local_808;
  undefined8 local_800;
  undefined **local_7f8;
  undefined8 local_7f0;
  undefined **local_7e8;
  undefined8 local_7e0;
  undefined **local_7d8;
  undefined8 local_7d0;
  undefined **local_7c8;
  undefined8 local_7c0;
  undefined **local_7b8;
  undefined8 local_7b0;
  undefined **local_7a8;
  undefined8 local_7a0;
  undefined **local_798;
  undefined8 local_790;
  undefined **local_788;
  undefined8 local_780;
  undefined **local_778;
  undefined8 local_770;
  undefined **local_768;
  undefined8 local_760;
  undefined **local_758;
  undefined8 local_750;
  undefined **local_748;
  undefined8 local_740;
  undefined **local_738;
  undefined8 local_730;
  undefined **local_728;
  undefined8 local_720;
  undefined **local_718;
  undefined8 local_710;
  undefined **local_708;
  undefined8 local_700;
  undefined **local_6f8;
  undefined8 local_6f0;
  undefined **local_6e8;
  undefined8 local_6e0;
  undefined **local_6d8;
  undefined8 local_6d0;
  undefined **local_6c8;
  undefined8 local_6c0;
  undefined **local_6b8;
  undefined8 local_6b0;
  undefined **local_6a8;
  undefined8 local_6a0;
  undefined **local_698;
  undefined8 local_690;
  undefined **local_688;
  undefined8 local_680;
  undefined **local_678;
  undefined8 local_670;
  undefined **local_668;
  undefined8 local_660;
  undefined **local_658;
  undefined8 local_650;
  undefined **local_648;
  undefined8 local_640;
  undefined **local_638;
  undefined8 local_630;
  undefined **local_628;
  undefined8 local_620;
  undefined **local_618;
  undefined8 local_610;
  undefined **local_608;
  undefined8 local_600;
  undefined **local_5f8;
  undefined8 local_5f0;
  undefined **local_5e8;
  undefined8 local_5e0;
  undefined **local_5d8;
  undefined8 local_5d0;
  undefined **local_5c8;
  undefined8 local_5c0;
  undefined **local_5b8;
  undefined8 local_5b0;
  undefined **local_5a8;
  undefined8 local_5a0;
  undefined **local_598;
  undefined8 local_590;
  undefined **local_588;
  undefined8 local_580;
  undefined **local_578;
  undefined8 local_570;
  undefined **local_568;
  undefined8 local_560;
  undefined **local_558;
  undefined8 local_550;
  undefined **local_548;
  undefined8 local_540;
  undefined **local_538;
  undefined8 local_530;
  undefined **local_528;
  undefined8 local_520;
  undefined **local_518;
  undefined8 local_510;
  undefined **local_508;
  undefined8 local_500;
  undefined **local_4f8;
  undefined8 local_4f0;
  undefined **local_4e8;
  undefined8 local_4e0;
  undefined **local_4d8;
  undefined8 local_4d0;
  undefined **local_4c8;
  undefined8 local_4c0;
  undefined **local_4b8;
  undefined8 local_4b0;
  undefined **local_4a8;
  undefined8 local_4a0;
  undefined **local_498;
  undefined8 local_490;
  undefined **local_488;
  undefined8 local_480;
  undefined **local_478;
  undefined8 local_470;
  undefined **local_468;
  undefined8 local_460;
  undefined **local_458;
  undefined8 local_450;
  undefined **local_448;
  undefined8 local_440;
  undefined **local_438;
  undefined8 local_430;
  undefined **local_428;
  undefined8 local_420;
  undefined **local_418;
  undefined8 local_410;
  undefined **local_408;
  undefined8 local_400;
  undefined **local_3f8;
  undefined8 local_3f0;
  undefined **local_3e8;
  undefined8 local_3e0;
  undefined **local_3d8;
  undefined8 local_3d0;
  undefined **local_3c8;
  undefined8 local_3c0;
  undefined **local_3b8;
  undefined8 local_3b0;
  undefined **local_3a8;
  undefined8 local_3a0;
  undefined **local_398;
  undefined8 local_390;
  undefined **local_388;
  undefined8 local_380;
  undefined **local_378;
  undefined8 local_370;
  undefined **local_368;
  undefined8 local_360;
  undefined **local_358;
  undefined8 local_350;
  undefined **local_348;
  undefined8 local_340;
  undefined **local_338;
  undefined8 local_330;
  undefined **local_328;
  undefined8 local_320;
  undefined **local_318;
  undefined8 local_310;
  undefined **local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined **local_2c8;
  undefined8 local_2c0;
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined **local_298;
  undefined8 local_290;
  undefined **local_288;
  undefined8 local_280;
  undefined **local_278;
  undefined8 local_270;
  undefined **local_268;
  undefined8 local_260;
  undefined **local_258;
  undefined8 local_250;
  undefined **local_248;
  undefined8 local_240;
  undefined **local_238;
  undefined8 local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined **local_208;
  undefined8 local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined **local_78;
  longlong local_70 [7];
  
  local_70[1] = DAT_1468387a8 ^ (ulonglong)auStack_1968;
  iVar8 = (int)param_2[1];
  lVar13 = (longlong)iVar8;
  bVar6 = false;
  uVar18 = 0;
  if (0 < iVar8) {
    plVar11 = (longlong *)(*param_2 + 8);
    uVar12 = uVar18;
    do {
      if (0 < *(int *)(*plVar11 + 0xa0)) {
        bVar6 = true;
        break;
      }
      uVar12 = uVar12 + 1;
      plVar11 = plVar11 + 2;
    } while ((longlong)uVar12 < lVar13);
  }
  local_18f8 = 0xffffffffffffffff;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
  local_1928 = 0;
  lVar19 = *(longlong *)(lVar20 + 0xd8);
  local_1938 = param_3;
  local_1930 = lVar19;
  local_1920 = lVar20;
  local_18d8 = param_1;
  _guard_xfg_dispatch_icall_nop(local_1888,0,0x804);
  _guard_xfg_dispatch_icall_nop(local_1078,0,0x804);
  local_860[0] = (undefined **)0x0;
  local_868 = &PTR_FUN_144da6378;
  local_860[1] = &PTR_FUN_144da6378;
  local_860[3] = &PTR_FUN_144da6378;
  local_838 = &PTR_FUN_144da6378;
  local_828 = &PTR_FUN_144da6378;
  local_818 = &PTR_FUN_144da6378;
  local_808 = &PTR_FUN_144da6378;
  local_7f8 = &PTR_FUN_144da6378;
  local_7e8 = &PTR_FUN_144da6378;
  local_7d8 = &PTR_FUN_144da6378;
  local_7c8 = &PTR_FUN_144da6378;
  local_7b8 = &PTR_FUN_144da6378;
  local_7a8 = &PTR_FUN_144da6378;
  local_798 = &PTR_FUN_144da6378;
  local_788 = &PTR_FUN_144da6378;
  local_778 = &PTR_FUN_144da6378;
  local_768 = &PTR_FUN_144da6378;
  local_758 = &PTR_FUN_144da6378;
  local_748 = &PTR_FUN_144da6378;
  local_738 = &PTR_FUN_144da6378;
  local_728 = &PTR_FUN_144da6378;
  local_718 = &PTR_FUN_144da6378;
  local_708 = &PTR_FUN_144da6378;
  local_6f8 = &PTR_FUN_144da6378;
  local_6e8 = &PTR_FUN_144da6378;
  local_6d8 = &PTR_FUN_144da6378;
  local_6c8 = &PTR_FUN_144da6378;
  local_6b8 = &PTR_FUN_144da6378;
  local_6a8 = &PTR_FUN_144da6378;
  local_698 = &PTR_FUN_144da6378;
  local_688 = &PTR_FUN_144da6378;
  local_678 = &PTR_FUN_144da6378;
  local_860[2] = (undefined **)0x0;
  local_840 = 0;
  local_830 = 0;
  local_820 = 0;
  local_810 = 0;
  local_800 = 0;
  local_7f0 = 0;
  local_7e0 = 0;
  local_7d0 = 0;
  local_7c0 = 0;
  local_7b0 = 0;
  local_7a0 = 0;
  local_790 = 0;
  local_780 = 0;
  local_770 = 0;
  local_760 = 0;
  local_750 = 0;
  local_740 = 0;
  local_730 = 0;
  local_720 = 0;
  local_710 = 0;
  local_700 = 0;
  local_6f0 = 0;
  local_6e0 = 0;
  local_6d0 = 0;
  local_6c0 = 0;
  local_6b0 = 0;
  local_6a0 = 0;
  local_690 = 0;
  local_680 = 0;
  local_670 = 0;
  local_668 = &PTR_FUN_144da6378;
  local_660 = 0;
  local_658 = &PTR_FUN_144da6378;
  local_650 = 0;
  local_648 = &PTR_FUN_144da6378;
  local_640 = 0;
  local_638 = &PTR_FUN_144da6378;
  local_630 = 0;
  local_628 = &PTR_FUN_144da6378;
  local_620 = 0;
  local_618 = &PTR_FUN_144da6378;
  local_610 = 0;
  local_608 = &PTR_FUN_144da6378;
  local_600 = 0;
  local_5f8 = &PTR_FUN_144da6378;
  local_5f0 = 0;
  local_5e8 = &PTR_FUN_144da6378;
  local_5e0 = 0;
  local_5d8 = &PTR_FUN_144da6378;
  local_5d0 = 0;
  local_5c8 = &PTR_FUN_144da6378;
  local_5c0 = 0;
  local_5b8 = &PTR_FUN_144da6378;
  local_5b0 = 0;
  local_5a8 = &PTR_FUN_144da6378;
  local_5a0 = 0;
  local_598 = &PTR_FUN_144da6378;
  local_590 = 0;
  local_588 = &PTR_FUN_144da6378;
  local_580 = 0;
  local_578 = &PTR_FUN_144da6378;
  local_570 = 0;
  local_568 = &PTR_FUN_144da6378;
  local_560 = 0;
  local_558 = &PTR_FUN_144da6378;
  local_550 = 0;
  local_548 = &PTR_FUN_144da6378;
  local_540 = 0;
  local_538 = &PTR_FUN_144da6378;
  local_530 = 0;
  local_528 = &PTR_FUN_144da6378;
  local_520 = 0;
  local_518 = &PTR_FUN_144da6378;
  local_510 = 0;
  local_508 = &PTR_FUN_144da6378;
  local_500 = 0;
  local_4f8 = &PTR_FUN_144da6378;
  local_4f0 = 0;
  local_4e8 = &PTR_FUN_144da6378;
  local_4e0 = 0;
  local_4d8 = &PTR_FUN_144da6378;
  local_4d0 = 0;
  local_4c8 = &PTR_FUN_144da6378;
  local_4c0 = 0;
  local_4b8 = &PTR_FUN_144da6378;
  local_4b0 = 0;
  local_4a8 = &PTR_FUN_144da6378;
  local_4a0 = 0;
  local_498 = &PTR_FUN_144da6378;
  local_490 = 0;
  local_488 = &PTR_FUN_144da6378;
  local_480 = 0;
  local_478 = &PTR_FUN_144da6378;
  local_470 = 0;
  local_468 = &PTR_FUN_144da6378;
  local_460 = 0;
  local_458 = &PTR_FUN_144da6378;
  local_450 = 0;
  local_448 = &PTR_FUN_144da6378;
  local_440 = 0;
  local_438 = &PTR_FUN_144da6378;
  local_430 = 0;
  local_428 = &PTR_FUN_144da6378;
  local_420 = 0;
  local_418 = &PTR_FUN_144da6378;
  local_410 = 0;
  local_408 = &PTR_FUN_144da6378;
  local_400 = 0;
  local_3f8 = &PTR_FUN_144da6378;
  local_3f0 = 0;
  local_3e8 = &PTR_FUN_144da6378;
  local_3e0 = 0;
  local_3d8 = &PTR_FUN_144da6378;
  local_3d0 = 0;
  local_3c8 = &PTR_FUN_144da6378;
  local_3c0 = 0;
  local_3b8 = &PTR_FUN_144da6378;
  local_3b0 = 0;
  local_3a8 = &PTR_FUN_144da6378;
  local_3a0 = 0;
  local_398 = &PTR_FUN_144da6378;
  local_390 = 0;
  local_388 = &PTR_FUN_144da6378;
  local_380 = 0;
  local_378 = &PTR_FUN_144da6378;
  local_370 = 0;
  local_368 = &PTR_FUN_144da6378;
  local_360 = 0;
  local_358 = &PTR_FUN_144da6378;
  local_350 = 0;
  local_348 = &PTR_FUN_144da6378;
  local_340 = 0;
  local_338 = &PTR_FUN_144da6378;
  local_330 = 0;
  local_328 = &PTR_FUN_144da6378;
  local_320 = 0;
  local_318 = &PTR_FUN_144da6378;
  local_310 = 0;
  local_308 = &PTR_FUN_144da6378;
  local_300 = 0;
  local_2f8 = &PTR_FUN_144da6378;
  local_2f0 = 0;
  local_2e8 = &PTR_FUN_144da6378;
  local_2e0 = 0;
  local_2d8 = &PTR_FUN_144da6378;
  local_2d0 = 0;
  local_2c8 = &PTR_FUN_144da6378;
  local_2c0 = 0;
  local_2b8 = &PTR_FUN_144da6378;
  local_2b0 = 0;
  local_2a8 = &PTR_FUN_144da6378;
  local_2a0 = 0;
  local_298 = &PTR_FUN_144da6378;
  local_290 = 0;
  local_288 = &PTR_FUN_144da6378;
  local_280 = 0;
  local_278 = &PTR_FUN_144da6378;
  local_270 = 0;
  local_268 = &PTR_FUN_144da6378;
  local_260 = 0;
  local_258 = &PTR_FUN_144da6378;
  local_250 = 0;
  local_248 = &PTR_FUN_144da6378;
  local_240 = 0;
  local_238 = &PTR_FUN_144da6378;
  local_230 = 0;
  local_228 = &PTR_FUN_144da6378;
  local_220 = 0;
  local_218 = &PTR_FUN_144da6378;
  local_210 = 0;
  local_208 = &PTR_FUN_144da6378;
  local_200 = 0;
  local_1f8 = &PTR_FUN_144da6378;
  local_1f0 = 0;
  local_1e8 = &PTR_FUN_144da6378;
  local_1e0 = 0;
  local_1d8 = &PTR_FUN_144da6378;
  local_1d0 = 0;
  local_1c8 = &PTR_FUN_144da6378;
  local_1c0 = 0;
  local_1b8 = &PTR_FUN_144da6378;
  local_1b0 = 0;
  local_1a8 = &PTR_FUN_144da6378;
  local_1a0 = 0;
  local_198 = &PTR_FUN_144da6378;
  local_190 = 0;
  local_188 = &PTR_FUN_144da6378;
  local_180 = 0;
  local_178 = &PTR_FUN_144da6378;
  local_170 = 0;
  local_168 = &PTR_FUN_144da6378;
  local_160 = 0;
  local_158 = &PTR_FUN_144da6378;
  local_150 = 0;
  local_148 = &PTR_FUN_144da6378;
  local_140 = 0;
  local_138 = &PTR_FUN_144da6378;
  local_130 = 0;
  local_128 = &PTR_FUN_144da6378;
  local_120 = 0;
  local_118 = &PTR_FUN_144da6378;
  local_110 = 0;
  local_108 = &PTR_FUN_144da6378;
  local_100 = 0;
  local_f8 = &PTR_FUN_144da6378;
  local_f0 = 0;
  local_e8 = &PTR_FUN_144da6378;
  local_e0 = 0;
  local_d8 = &PTR_FUN_144da6378;
  local_d0 = 0;
  local_c8 = &PTR_FUN_144da6378;
  local_c0 = 0;
  local_b8 = &PTR_FUN_144da6378;
  local_b0 = 0;
  local_a8 = &PTR_FUN_144da6378;
  local_a0 = 0;
  local_98 = &PTR_FUN_144da6378;
  local_90 = 0;
  local_88 = &PTR_FUN_144da6378;
  local_80 = 0;
  local_78 = &PTR_FUN_144da6378;
  local_70[0] = 0;
  if (bVar6) {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
    }
    if (0 < (int)param_2[1]) {
      lVar13 = 0;
      pppuVar16 = local_860;
      do {
        local_1918 = *param_2 + lVar13;
        local_1908 = &PTR_FUN_144da6378;
        local_1900 = (undefined **)0x0;
        iVar8 = FUN_141a73860(lVar20,local_1918,&local_1908);
        ppuVar14 = local_1900;
        if (iVar8 != 0) {
          if (pppuVar16 + -1 != &local_1908) {
            ppuVar14 = *pppuVar16;
            if (ppuVar14 != (undefined **)0x0) {
              LOCK();
              ppuVar1 = ppuVar14 + 1;
              iVar8 = *(int *)ppuVar1;
              *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                FUN_141a4db60(ppuVar14);
                FMemory::operator_delete(ppuVar14);
              }
            }
            *pppuVar16 = (undefined **)0x0;
            if (local_1900 != (undefined **)0x0) {
              *pppuVar16 = local_1900;
              LOCK();
              *(int *)(local_1900 + 1) = *(int *)(local_1900 + 1) + 1;
              UNLOCK();
            }
          }
          ppuVar14 = local_1900;
          local_1928 = local_1928 + 1;
          pppuVar16 = pppuVar16 + 2;
          if (*(char *)(local_1900 + 10) == '\0') {
            plVar11 = (longlong *)local_1900[5];
            if (*(int *)(local_1900 + 0x20) != 0) {
              (**(code **)(*plVar11 + 0xd0))(plVar11,*(int *)(local_1900 + 0x20),local_1900[0x1f]);
              *(undefined4 *)(ppuVar14 + 0x20) = 0;
              plVar11 = (longlong *)ppuVar14[5];
            }
            iVar8 = (**(code **)(*plVar11 + 0x48))();
            if (iVar8 < 0) {
              local_1940 = &local_18d0;
              local_18d0 = 0;
              local_18c8 = 0;
              local_1948 = 0;
              FUN_141a94000(iVar8,"CommandList->Close()",
                            "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h"
                            ,0x46);
            }
            *(undefined1 *)(ppuVar14 + 10) = 1;
          }
          if (*(int *)(param_1 + 0xe0) == 2) {
            _guard_xfg_dispatch_icall_nop(local_1078,0,0x804);
            lpCriticalSection = (LPCRITICAL_SECTION)(local_1920 + 0x110);
            local_1078[local_878] = ppuVar14[5];
            local_878 = local_878 + 1;
            BVar7 = TryEnterCriticalSection(lpCriticalSection);
            if (BVar7 == 0) {
              EnterCriticalSection(lpCriticalSection);
            }
            (**(code **)(**(longlong **)(local_1920 + 0x18) + 0x50))
                      (*(longlong **)(local_1920 + 0x18),local_878,local_1078);
            FUN_141a97610(local_1930,*(undefined4 *)(local_1920 + 0xe4),
                          *(undefined8 *)(local_1930 + 0x30));
            uVar9 = (**(code **)(**(longlong **)(*(longlong *)(local_1930 + 0x78) + 0x10) + 0x40))()
            ;
            *(longlong *)(local_1930 + 0x30) = *(longlong *)(local_1930 + 0x30) + 1;
            *(undefined8 *)(local_1930 + 0x70) = uVar9;
            *(undefined8 *)(local_1930 + 0x40) = uVar9;
            local_18f8 = *(undefined8 *)(local_1930 + 0x38);
            LeaveCriticalSection(lpCriticalSection);
            lVar20 = local_1930;
            plVar11 = (longlong *)
                      FUN_141a55960(*(undefined8 *)(*(longlong *)(local_1930 + 0x28) + 0xd50),
                                    *(undefined4 *)(param_1 + 0xe4));
            iVar8 = (**(code **)(*plVar11 + 0x78))
                              (plVar11,*(undefined8 *)(*(longlong *)(lVar20 + 0x78) + 0x10),
                               local_18f8);
            if (iVar8 < 0) {
              local_1940 = &local_18e8;
              local_1948 = 0;
              local_18e8 = 0;
              uStack_18e0 = 0;
              FUN_141a94000(iVar8,"CommandQueue->Wait(FenceCore->GetFence(), FenceValue)",
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                            ,0xdc);
            }
          }
          else {
            local_1888[local_1088] = ppuVar14[5];
            local_1088 = local_1088 + 1;
          }
        }
        local_1888[local_1088] = *(undefined8 *)(*(longlong *)(local_1918 + 8) + 0x28);
        local_1088 = local_1088 + 1;
        local_1908 = &PTR_FUN_144da6378;
        if (ppuVar14 != (undefined **)0x0) {
          LOCK();
          ppuVar14 = ppuVar14 + 1;
          iVar8 = *(int *)ppuVar14;
          *(int *)ppuVar14 = *(int *)ppuVar14 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FUN_141a4db60(local_1900);
            FMemory::operator_delete(local_1900,0x110);
          }
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        lVar13 = lVar13 + 0x10;
        lVar20 = local_1920;
        lVar19 = local_1930;
      } while ((int)uVar17 < (int)param_2[1]);
    }
    lVar13 = *(longlong *)(param_1 + 0xd8);
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
              (*(longlong **)(param_1 + 0x18),local_1088,local_1888);
    FUN_141a97610(lVar13,*(undefined4 *)(param_1 + 0xe4),*(undefined8 *)(lVar13 + 0x30));
    uVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x78) + 0x10) + 0x40))();
    *(longlong *)(lVar13 + 0x30) = *(longlong *)(lVar13 + 0x30) + 1;
    *(undefined8 *)(lVar13 + 0x70) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar9;
    uVar9 = *(undefined8 *)(lVar13 + 0x38);
    local_1930 = uVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    lVar13 = *(longlong *)(param_1 + 0xd8);
    local_1918._0_4_ = (undefined4)lVar13;
    uVar21 = (undefined4)local_1918;
    local_1918._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
    uVar22 = local_1918._4_4_;
    uStack_1910._0_4_ = (undefined4)uVar9;
    uVar23 = (undefined4)uStack_1910;
    uStack_1910._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar24 = uStack_1910._4_4_;
    if (*(int *)(param_1 + 0xe0) == 2) {
      uStack_1910 = local_18f8;
      uVar9 = uStack_1910;
      local_1918._0_4_ = (undefined4)lVar19;
      uVar25 = (undefined4)local_1918;
      local_1918._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
      uVar26 = local_1918._4_4_;
      uStack_1910._0_4_ = (undefined4)local_18f8;
      uVar27 = (undefined4)uStack_1910;
      uStack_1910._4_4_ = (undefined4)((ulonglong)local_18f8 >> 0x20);
      uVar28 = uStack_1910._4_4_;
      local_1918 = lVar19;
      uStack_1910 = uVar9;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
    }
    else {
      local_1918 = lVar13;
      uStack_1910 = uVar9;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
      uVar25 = uVar21;
      uVar26 = uVar22;
      uVar27 = uVar23;
      uVar28 = uVar24;
    }
  }
  else {
    if (0 < iVar8) {
      plVar11 = (longlong *)(*param_2 + 8);
      do {
        lVar20 = *plVar11;
        plVar11 = plVar11 + 2;
        local_1888[local_1088] = *(undefined8 *)(lVar20 + 0x28);
        local_1088 = local_1088 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = *(longlong *)(param_1 + 0xd8);
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
              (*(longlong **)(param_1 + 0x18),local_1088,local_1888);
    FUN_141a97610(lVar13,*(undefined4 *)(param_1 + 0xe4),*(undefined8 *)(lVar13 + 0x30));
    uVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x78) + 0x10) + 0x40))();
    *(longlong *)(lVar13 + 0x30) = *(longlong *)(lVar13 + 0x30) + 1;
    *(undefined8 *)(lVar13 + 0x70) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar9;
    uVar9 = *(undefined8 *)(lVar13 + 0x38);
    local_1930 = uVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    local_18e8._0_4_ = (undefined4)uVar3;
    local_18e8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_18e0._0_4_ = (undefined4)uVar9;
    uStack_18e0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar21 = (undefined4)local_18e8;
    uVar22 = local_18e8._4_4_;
    uVar23 = (undefined4)uStack_18e0;
    uVar24 = uStack_18e0._4_4_;
    uVar25 = (undefined4)local_18e8;
    uVar26 = local_18e8._4_4_;
    uVar27 = (undefined4)uStack_18e0;
    uVar28 = uStack_18e0._4_4_;
    local_18e8 = uVar3;
    uStack_18e0 = uVar9;
  }
  iVar8 = 0;
  if (0 < (int)param_2[1]) {
    lVar13 = param_1 + 0x20;
    lVar20 = 0;
    do {
      lVar15 = *param_2 + lVar20;
      lVar19 = *(longlong *)(lVar15 + 8);
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x70));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x70));
      }
      local_18c0 = *(undefined8 *)(lVar19 + 0x40);
      uStack_18b8 = uVar21;
      uStack_18b4 = uVar22;
      uStack_18b0 = uVar23;
      uStack_18ac = uVar24;
      puVar10 = (undefined8 *)operator_new(0x20);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = (undefined4)local_18c0;
        *(undefined4 *)((longlong)puVar10 + 0xc) = local_18c0._4_4_;
        *(undefined4 *)(puVar10 + 2) = uStack_18b8;
        *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_18b4;
        puVar10[3] = CONCAT44(uStack_18ac,uStack_18b0);
        puVar4 = *(undefined8 **)(lVar19 + 0x60);
        *(undefined8 **)(lVar19 + 0x60) = puVar10;
        *puVar4 = puVar10;
      }
      *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x70));
      lVar19 = *(longlong *)(lVar19 + 0x38);
      *(undefined4 *)(lVar19 + 8) = uVar21;
      *(undefined4 *)(lVar19 + 0xc) = uVar22;
      *(undefined4 *)(lVar19 + 0x10) = uVar23;
      *(undefined4 *)(lVar19 + 0x14) = uVar24;
      LOCK();
      piVar2 = (int *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x38) + 0x18);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      FUN_141a70e50(lVar13,lVar15);
      iVar8 = iVar8 + 1;
      lVar20 = lVar20 + 0x10;
      param_1 = local_18d8;
    } while (iVar8 < (int)param_2[1]);
  }
  lVar13 = local_1920;
  lVar20 = (longlong)local_1928;
  if (0 < lVar20) {
    pppuVar16 = &local_868;
    do {
      ppuVar14 = pppuVar16[1];
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(ppuVar14 + 0xe));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(ppuVar14 + 0xe));
      }
      local_18a8 = ppuVar14[8];
      uStack_18a0 = uVar25;
      uStack_189c = uVar26;
      uStack_1898 = uVar27;
      uStack_1894 = uVar28;
      puVar10 = (undefined8 *)operator_new(0x20);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = (undefined4)local_18a8;
        *(undefined4 *)((longlong)puVar10 + 0xc) = local_18a8._4_4_;
        *(undefined4 *)(puVar10 + 2) = uStack_18a0;
        *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_189c;
        puVar10[3] = CONCAT44(uStack_1894,uStack_1898);
        puVar4 = (undefined8 *)ppuVar14[0xc];
        ppuVar14[0xc] = (undefined *)puVar10;
        *puVar4 = puVar10;
      }
      ppuVar14[8] = ppuVar14[8] + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(ppuVar14 + 0xe));
      puVar5 = ppuVar14[7];
      *(undefined4 *)(puVar5 + 8) = uVar25;
      *(undefined4 *)(puVar5 + 0xc) = uVar26;
      *(undefined4 *)(puVar5 + 0x10) = uVar27;
      *(undefined4 *)(puVar5 + 0x14) = uVar28;
      LOCK();
      *(int *)(ppuVar14[7] + 0x18) = *(int *)(ppuVar14[7] + 0x18) + -1;
      UNLOCK();
      FUN_141a70e50(lVar13 + 0x20,pppuVar16);
      pppuVar16 = pppuVar16 + 2;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (local_1938 != '\0') {
    FUN_141a98990(*(undefined8 *)(param_1 + 0xd8),local_1930);
  }
  lVar13 = 0x80;
  plVar11 = local_70 + 1;
  do {
    lVar13 = lVar13 + -1;
    plVar11[-2] = (longlong)&PTR_FUN_144da6378;
    if (plVar11[-1] != 0) {
      LOCK();
      piVar2 = (int *)(plVar11[-1] + 8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar8 == 1) && (lVar20 = plVar11[-1], lVar20 != 0)) {
        FUN_141a4db60(lVar20);
        FMemory::operator_delete(lVar20,0x110);
      }
    }
    plVar11 = plVar11 + -2;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 141a71f60 FUN_141a71f60 body=66 status=ok
// SIG undefined FUN_141a71f60(void)

undefined4 FUN_141a71f60(undefined4 param_1)

{
  switch(param_1) {
  case 0x14:
  case 0x16:
    return 0x13;
  default:
    return param_1;
  case 0x28:
    return 0x27;
  case 0x2d:
  case 0x2f:
    return 0x2c;
  case 0x37:
    return 0x35;
  }
}



// FUNCTION 141a71fe0 FUN_141a71fe0 body=263 status=ok
// SIG undefined FUN_141a71fe0(void)

int * FUN_141a71fe0(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     ((int)((ulonglong)*(undefined8 *)(param_3 + 0x58) >> 0x20) * 0x17 +
                     (int)*(undefined8 *)(param_3 + 0x58)) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x70;
        if ((((((*(longlong *)(lVar4 + 0x18 + lVar1) == *(longlong *)(param_3 + 0x18)) &&
               (*(int *)(lVar4 + 0x38 + lVar1) == *(int *)(param_3 + 0x38))) &&
              (*(longlong *)(lVar4 + 8 + lVar1) == *(longlong *)(param_3 + 8))) &&
             ((*(int *)(lVar4 + 0x20 + lVar1) == *(int *)(param_3 + 0x20) &&
              (*(int *)(lVar4 + 0x40 + lVar1) == *(int *)(param_3 + 0x40))))) &&
            ((*(int *)(lVar4 + 0x44 + lVar1) == *(int *)(param_3 + 0x44) &&
             ((*(int *)(lVar4 + 0x48 + lVar1) == *(int *)(param_3 + 0x48) &&
              (*(int *)(lVar4 + 0x4c + lVar1) == *(int *)(param_3 + 0x4c))))))) &&
           (*(int *)(lVar4 + 0x50 + lVar1) == *(int *)(param_3 + 0x50))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x68 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a720f0 FUN_141a720f0 body=173 status=ok
// SIG undefined FUN_141a720f0(void)

int * FUN_141a720f0(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     ((int)((ulonglong)*(undefined8 *)(param_3 + 0x308) >> 0x20) * 0x17 +
                     (int)*(undefined8 *)(param_3 + 0x308)) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 800 + lVar1;
        cVar2 = equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                          (local_res8,lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar5 + 0x318);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a721a0 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *_Buf1;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        _Buf1 = (void *)((longlong)iVar2 * 0x30 + lVar1);
        iVar3 = ::_guard_xfg_dispatch_icall_nop(_Buf1,param_3,0x19);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)_Buf1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a72260 FUN_141a72260 body=565 status=ok
// SIG undefined FUN_141a72260(void)

undefined8 FUN_141a72260(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 **local_48;
  
  puVar7 = (undefined8 *)0x0;
  local_res10 = param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x270));
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x60,local_res8,local_res10);
  puVar6 = puVar7;
  if (local_res8[0] != -1) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)local_res8[0] * 0x18);
  }
  puVar4 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = puVar7;
  }
  if (puVar4 == (undefined8 *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x238);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x1d8,local_res18,local_res10);
    puVar6 = puVar7;
    if (local_res18[0] != -1) {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)local_res18[0] * 0x18);
    }
    puVar4 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = puVar7;
    }
    if (puVar4 == (undefined8 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x230);
      if (iVar2 < 1) {
        local_58 = (undefined1 *)operator_new(0x20);
        if (local_58 == (undefined1 *)0x0) {
          local_58 = (undefined1 *)0x0;
        }
        else {
          *local_58 = 0;
          uVar5 = FUN_1415ab270(1);
          *(undefined8 *)(local_58 + 8) = uVar5;
          *(undefined4 *)(local_58 + 0x10) = 1;
          *(undefined8 *)(local_58 + 0x18) = 0;
          (**(code **)(**(longlong **)(local_58 + 8) + 0x18))();
        }
      }
      else {
        local_58 = *(undefined1 **)(*(longlong *)(param_1 + 0x228) + -8 + (longlong)iVar2 * 8);
        *(int *)(param_1 + 0x230) = iVar2 + -1;
      }
      local_50 = &local_res10;
      local_48 = &local_58;
      FUN_1405c0510(param_1 + 0x1d8,local_res20,&local_50,0);
    }
    else {
      puVar7 = (undefined8 *)*puVar4;
      LOCK();
      *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x270));
    if (puVar7 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      (**(code **)(*(longlong *)puVar7[1] + 0x20))((longlong *)puVar7[1],0xffffffff,0);
      uVar5 = puVar7[3];
      LOCK();
      piVar1 = (int *)(puVar7 + 2);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        BVar3 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar3 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x1d8,local_res10);
        FUN_141a727b0(puVar7,param_1 + 0x228);
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    return uVar5;
  }
  uVar5 = *puVar4;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x270));
  return uVar5;
}



// FUNCTION 141a724a0 FUN_141a724a0 body=687 status=ok
// SIG undefined FUN_141a724a0(void)

undefined8 FUN_141a724a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  char cVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 **local_30;
  
  lVar5 = FUN_141a74790(param_2,0xb8);
  *param_3 = lVar5;
  puVar10 = (undefined8 *)0x0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x260));
  local_40 = *param_3;
  local_48 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar5 = param_1 + 0x48;
    }
    iVar9 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)local_40) * 4
                    );
    if (iVar9 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      do {
        puVar11 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar5);
        cVar3 = FUN_141a690d0(puVar11,&local_48);
        if (cVar3 != '\0') {
          if (iVar9 != -1) goto LAB_141a7255d;
          break;
        }
        iVar9 = *(int *)(puVar11 + 3);
      } while (iVar9 != -1);
    }
  }
  puVar11 = puVar10;
LAB_141a7255d:
  puVar7 = puVar11 + 2;
  if (puVar11 == (undefined8 *)0x0) {
    puVar7 = puVar10;
  }
  if (puVar7 == (undefined8 *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1b0);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar2 = (longlong *)(param_1 + 0x150);
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar5 = *param_3;
      lVar6 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar6 = param_1 + 0x188;
      }
      iVar9 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5) &
                               (longlong)*(int *)(param_1 + 0x198) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          puVar11 = (undefined8 *)(*plVar2 + (longlong)iVar9 * 0x18);
          if (*(longlong *)(*plVar2 + (longlong)iVar9 * 0x18) == lVar5) {
            if (iVar9 != -1) goto LAB_141a72614;
            break;
          }
          iVar9 = *(int *)(puVar11 + 2);
        } while (iVar9 != -1);
      }
    }
    puVar11 = puVar10;
LAB_141a72614:
    puVar7 = puVar11 + 1;
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = puVar10;
    }
    if (puVar7 == (undefined8 *)0x0) {
      iVar9 = *(int *)(param_1 + 0x1a8);
      if (iVar9 < 1) {
        local_res10 = (undefined1 *)operator_new(0x20);
        if (local_res10 == (undefined1 *)0x0) {
          local_res10 = (undefined1 *)0x0;
        }
        else {
          *local_res10 = 0;
          uVar8 = FUN_1415ab270(1);
          *(undefined8 *)(local_res10 + 8) = uVar8;
          *(undefined4 *)(local_res10 + 0x10) = 1;
          *(undefined8 *)(local_res10 + 0x18) = 0;
          (**(code **)(**(longlong **)(local_res10 + 8) + 0x18))();
        }
      }
      else {
        local_res10 = *(undefined1 **)(*(longlong *)(param_1 + 0x1a0) + -8 + (longlong)iVar9 * 8);
        *(int *)(param_1 + 0x1a8) = iVar9 + -1;
      }
      local_30 = &local_res10;
      local_38 = param_3;
      FUN_141a636d0(plVar2,local_res8,&local_38,0);
    }
    else {
      puVar10 = (undefined8 *)*puVar7;
      LOCK();
      *(int *)(puVar10 + 2) = *(int *)(puVar10 + 2) + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x260));
    if (puVar10 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      (**(code **)(*(longlong *)puVar10[1] + 0x20))((longlong *)puVar10[1],0xffffffff,0);
      uVar8 = puVar10[3];
      LOCK();
      piVar1 = (int *)(puVar10 + 2);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        BVar4 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar4 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
        ::Remove(plVar2,*param_3);
        FUN_141a727b0(puVar10,param_1 + 0x1a0);
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  else {
    uVar8 = *puVar7;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x260));
  }
  return uVar8;
}



// FUNCTION 141a72750 FUN_141a72750 body=27 status=ok
// SIG undefined FUN_141a72750(void)

void FUN_141a72750(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x2c) == '\0') && (param_2 == '\0')) {
    return;
  }
  FUN_141a4f650(*(longlong *)(param_1 + 0x18) + 0x460);
  return;
}



// FUNCTION 141a72770 FUN_141a72770 body=56 status=ok
// SIG undefined FUN_141a72770(void)

void FUN_141a72770(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x28) + 0xd0))
              (*(longlong **)(lVar1 + 0x28),*(int *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0xf8));
    *(undefined4 *)(lVar1 + 0x100) = 0;
  }
  return;
}


