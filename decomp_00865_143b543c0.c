// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b543c0 FUN_143b543c0 body=58 status=ok
// SIG undefined FUN_143b543c0(void)

void FUN_143b543c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b54400 FUN_143b54400 body=3448 status=ok
// SIG undefined FUN_143b54400(void)

void FUN_143b54400(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *_Str1;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_res18;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_d8;
  int local_c8;
  double local_a0;
  double local_98;
  double local_88;
  
  if (param_3 != 0) {
    FUN_143b4eb20(param_1,param_4);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 == '\0') {
      switch(param_2) {
      case 0:
      case 5:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x15:
        iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_4);
        iVar5 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_4);
        iVar5 = (iVar5 - iVar4) + 1;
        iVar6 = FUN_143b536c0(param_1,param_2);
        local_108 = ((iVar6 + param_3) - iVar4) % iVar5;
        if (local_108 < 0) {
          local_108 = local_108 + iVar5;
        }
        FUN_143b55270(param_1,param_2,local_108 + iVar4);
        break;
      case 1:
      case 0x11:
        bVar1 = false;
        iVar4 = FUN_143b512d0(param_1,0,param_4);
        local_res18 = param_3;
        if (iVar4 == 0) {
          _Str1 = (char *)(**(code **)(*param_1 + 0xb0))(param_1);
          iVar5 = _guard_xfg_dispatch_icall_nop(_Str1,"gregorian");
          if (((iVar5 == 0) || (iVar5 = _guard_xfg_dispatch_icall_nop(_Str1,"roc"), iVar5 == 0)) ||
             (iVar5 = _guard_xfg_dispatch_icall_nop(_Str1,"coptic"), iVar5 == 0)) {
            local_res18 = -param_3;
            bVar1 = true;
          }
        }
        local_114 = FUN_143b536c0(param_1,param_2);
        local_114 = local_114 + local_res18;
        if ((iVar4 < 1) && (local_114 < 1)) {
          if (bVar1) {
            local_114 = 1;
          }
        }
        else {
          iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_4);
          if (iVar4 < 0x8000) {
            if (local_114 < 1) {
              local_114 = iVar4 - -local_114 % iVar4;
            }
            else if (iVar4 < local_114) {
              local_114 = (local_114 + -1) % iVar4 + 1;
            }
          }
          else if (local_114 < 1) {
            local_114 = 1;
          }
        }
        FUN_143b55270(param_1,param_2,local_114);
        (**(code **)(*param_1 + 0x158))(param_1,2,param_4);
        (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
        break;
      case 2:
        iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,2,param_4);
        iVar5 = FUN_143b536c0(param_1,2);
        local_e4 = (iVar5 + param_3) % (iVar4 + 1);
        if (local_e4 < 0) {
          local_e4 = local_e4 + 1 + iVar4;
        }
        FUN_143b55270(param_1,2,local_e4);
        (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
        break;
      case 3:
        local_f0 = FUN_143b536c0(param_1,7);
        iVar4 = FUN_143b52200(param_1);
        local_f0 = local_f0 - iVar4;
        if (local_f0 < 0) {
          local_f0 = local_f0 + 7;
        }
        iVar4 = FUN_143b536c0(param_1,6);
        local_100 = ((local_f0 - iVar4) + 1) % 7;
        if (local_100 < 0) {
          local_100 = local_100 + 7;
        }
        bVar3 = FUN_143b52620(param_1);
        if (7 - local_100 < (int)(uint)bVar3) {
          local_e8 = 8 - local_100;
        }
        else {
          local_e8 = 1 - local_100;
        }
        iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,6,param_4);
        iVar5 = FUN_143b536c0(param_1,6);
        iVar6 = ((iVar4 + 7) - ((iVar4 - iVar5) + local_f0) % 7) - local_e8;
        iVar5 = FUN_143b536c0(param_1,6);
        local_110 = ((iVar5 + param_3 * 7) - local_e8) % iVar6;
        if (local_110 < 0) {
          local_110 = local_110 + iVar6;
        }
        local_110 = local_110 + local_e8;
        if (local_110 < 1) {
          local_110 = 1;
        }
        if (iVar4 < local_110) {
          local_110 = iVar4;
        }
        FUN_143b55270(param_1,6,local_110);
        FUN_143b4e930(param_1,2);
        break;
      case 4:
        local_f8 = FUN_143b536c0(param_1,7);
        iVar4 = FUN_143b52200(param_1);
        local_f8 = local_f8 - iVar4;
        if (local_f8 < 0) {
          local_f8 = local_f8 + 7;
        }
        iVar4 = FUN_143b536c0(param_1,5);
        local_104 = ((local_f8 - iVar4) + 1) % 7;
        if (local_104 < 0) {
          local_104 = local_104 + 7;
        }
        bVar3 = FUN_143b52620(param_1);
        if (7 - local_104 < (int)(uint)bVar3) {
          local_ec = 8 - local_104;
        }
        else {
          local_ec = 1 - local_104;
        }
        iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,5,param_4);
        iVar5 = FUN_143b536c0(param_1,5);
        iVar6 = ((iVar4 + 7) - ((iVar4 - iVar5) + local_f8) % 7) - local_ec;
        iVar5 = FUN_143b536c0(param_1,5);
        local_10c = ((iVar5 + param_3 * 7) - local_ec) % iVar6;
        if (local_10c < 0) {
          local_10c = local_10c + iVar6;
        }
        local_10c = local_10c + local_ec;
        if (local_10c < 1) {
          local_10c = 1;
        }
        if (iVar4 < local_10c) {
          local_10c = iVar4;
        }
        FUN_143b55270(param_1,5,local_10c);
        break;
      case 6:
        iVar4 = FUN_143b536c0(param_1,6);
        dVar7 = (double)FUN_143b53730(param_1);
        dVar7 = dVar7 - (double)(iVar4 + -1) * 86400000.0;
        iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,6,param_4);
        dVar8 = (double)FUN_143b53730(param_1);
        local_98 = (double)FUN_143a917d0((dVar8 + (double)param_3 * 86400000.0) - dVar7,
                                         (double)iVar4 * 86400000.0);
        if (local_98 < 0.0) {
          local_98 = local_98 + (double)iVar4 * 86400000.0;
        }
        FUN_143b55580(param_1,local_98 + dVar7,param_4);
        break;
      case 7:
      case 0x12:
        local_fc = FUN_143b536c0(param_1,param_2);
        if (param_2 == 7) {
          local_c8 = FUN_143b52200(param_1);
        }
        else {
          local_c8 = 1;
        }
        local_fc = local_fc - local_c8;
        if (local_fc < 0) {
          local_fc = local_fc + 7;
        }
        dVar7 = (double)FUN_143b53730(param_1);
        dVar7 = dVar7 - (double)local_fc * 86400000.0;
        dVar8 = (double)FUN_143b53730(param_1);
        local_88 = (double)FUN_143a917d0((dVar8 + (double)param_3 * 86400000.0) - dVar7,
                                         0x41c2064200000000);
        if (local_88 < 0.0) {
          local_88 = local_88 + 604800000.0;
        }
        FUN_143b55580(param_1,local_88 + dVar7,param_4);
        break;
      case 8:
        iVar4 = FUN_143b536c0(param_1,5);
        iVar4 = (iVar4 + -1) / 7;
        iVar5 = (**(code **)(*param_1 + 0xa8))(param_1,5,param_4);
        iVar6 = FUN_143b536c0(param_1,5);
        dVar7 = (double)FUN_143b53730(param_1,(longlong)(iVar5 - iVar6) % 7 & 0xffffffff);
        dVar7 = dVar7 - (double)iVar4 * 604800000.0;
        dVar9 = (double)(iVar4 + 1 + (iVar5 - iVar6) / 7) * 604800000.0;
        dVar8 = (double)FUN_143b53730(param_1);
        local_a0 = (double)FUN_143a917d0((dVar8 + (double)param_3 * 604800000.0) - dVar7,dVar9);
        if (local_a0 < 0.0) {
          local_a0 = local_a0 + dVar9;
        }
        FUN_143b55580(param_1,local_a0 + dVar7,param_4);
        break;
      case 10:
      case 0xb:
        dVar7 = (double)FUN_143b52840(param_1,param_4);
        iVar4 = FUN_143b536c0(param_1,param_2);
        iVar5 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
        local_d8 = (iVar4 + param_3) % (iVar5 + 1);
        if (local_d8 < 0) {
          local_d8 = local_d8 + 1 + iVar5;
        }
        FUN_143b55580(param_1,dVar7 + (double)((local_d8 - iVar4) * 3600000),param_4);
        break;
      default:
        *param_4 = 1;
        break;
      case 0x13:
        iVar4 = FUN_143b536c0(param_1,param_2);
        FUN_143b55270(param_1,param_2,iVar4 + param_3);
        (**(code **)(*param_1 + 0x158))(param_1,2,param_4);
        (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
        break;
      case 0x14:
        iVar4 = FUN_143b536c0(param_1,param_2);
        FUN_143b55270(param_1,param_2,iVar4 + param_3);
      }
    }
  }
  return;
}



// FUNCTION 143b551d0 FUN_143b551d0 body=148 status=ok
// SIG undefined FUN_143b551d0(void)

void FUN_143b551d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_143b55270(param_1,1,param_2);
  FUN_143b55270(param_1,2,param_3);
  FUN_143b55270(param_1,5,param_4);
  FUN_143b55270(param_1,0xb,param_5);
  FUN_143b55270(param_1,0xc,param_6);
  FUN_143b55270(param_1,0xd,param_7);
  return;
}



// FUNCTION 143b55270 FUN_143b55270 body=207 status=ok
// SIG undefined FUN_143b55270(void)

void FUN_143b55270(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_18 [6];
  
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_18[0] = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,local_18);
  }
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc) = param_3;
  if (*(int *)((longlong)param_1 + 0xdc) == 10000) {
    FUN_143b54040(param_1);
  }
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0x80) =
       *(undefined4 *)((longlong)param_1 + 0xdc);
  *(int *)((longlong)param_1 + 0xdc) = *(int *)((longlong)param_1 + 0xdc) + 1;
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143b55340 FUN_143b55340 body=65 status=ok
// SIG undefined FUN_143b55340(void)

void FUN_143b55340(longlong param_1,int param_2)

{
  if (((*(int *)(param_1 + 0x100) != param_2) && (0 < param_2)) && (param_2 < 8)) {
    *(int *)(param_1 + 0x100) = param_2;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 143b55390 FUN_143b55390 body=26 status=ok
// SIG undefined FUN_143b55390(void)

void FUN_143b55390(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 143b553b0 FUN_143b553b0 body=88 status=ok
// SIG undefined FUN_143b553b0(void)

void FUN_143b553b0(longlong param_1,byte param_2)

{
  undefined1 local_res10;
  
  if (param_2 == 0) {
    local_res10 = 1;
  }
  else {
    local_res10 = param_2;
    if (7 < param_2) {
      local_res10 = 7;
    }
  }
  if (*(byte *)(param_1 + 0x104) != local_res10) {
    *(byte *)(param_1 + 0x104) = local_res10;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 143b55410 FUN_143b55410 body=252 status=ok
// SIG undefined FUN_143b55410(void)

void FUN_143b55410(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int local_res10;
  
  uVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  uVar1 = FUN_143b51c90(uVar2);
  local_res10 = param_2;
  switch(uVar1) {
  case 4:
    local_res10 = param_2 + -0x26e;
    break;
  case 5:
  case 6:
  case 0xf:
  case 0x10:
  case 0x11:
    local_res10 = FUN_143b511c0(param_2);
    break;
  case 7:
    local_res10 = param_2 + 0xeb0;
    break;
  case 8:
    local_res10 = param_2 + 0xa4d;
    break;
  case 9:
    local_res10 = param_2 + -0x4f;
    break;
  case 10:
    local_res10 = param_2 + -0x11c;
    break;
  case 0xb:
    local_res10 = param_2 + -8;
    break;
  case 0xc:
    local_res10 = param_2 + 0x1574;
    break;
  case 0xe:
    local_res10 = param_2 + 0x91d;
  }
  FUN_143b55270(param_1,0x13,local_res10);
  return;
}



// FUNCTION 143b55550 FUN_143b55550 body=46 status=ok
// SIG undefined FUN_143b55550(void)

void FUN_143b55550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b55580(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b55580 FUN_143b55580 body=319 status=ok
// SIG undefined FUN_143b55580(void)

void FUN_143b55580(longlong param_1,double param_2,undefined4 *param_3)

{
  char cVar1;
  double local_res10;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 <= 1.838821689216e+17) {
      local_res10 = param_2;
      if (param_2 < -1.84303902528e+17) {
        cVar1 = FUN_143b53980(param_1);
        if (cVar1 == '\0') {
          *param_3 = 1;
          return;
        }
        local_res10 = -1.84303902528e+17;
      }
    }
    else {
      cVar1 = FUN_143b53980(param_1);
      if (cVar1 == '\0') {
        *param_3 = 1;
        return;
      }
      local_res10 = 1.838821689216e+17;
    }
    *(double *)(param_1 + 0xe0) = local_res10;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    for (local_18 = 0; local_18 < 0x17; local_18 = local_18 + 1) {
      *(undefined4 *)(param_1 + 0xc + (longlong)local_18 * 4) = 0;
      *(undefined4 *)(param_1 + 0x80 + (longlong)local_18 * 4) = 0;
      *(undefined1 *)(param_1 + 0x68 + (longlong)local_18) = 0;
    }
  }
  return;
}



// FUNCTION 143b556c0 FUN_143b556c0 body=48 status=ok
// SIG undefined FUN_143b556c0(void)

void FUN_143b556c0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  FUN_143b4e8a0(param_1,uVar1);
  return;
}



// FUNCTION 143b556f0 FUN_143b556f0 body=1730 status=ok
// SIG undefined FUN_143b556f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b556f0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_9a8 [32];
  undefined8 local_988;
  int *local_978;
  undefined4 local_970 [2];
  longlong local_968;
  undefined8 local_960;
  int local_958 [2];
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined1 local_918 [32];
  undefined1 local_8f8 [16];
  undefined8 local_8e8;
  undefined1 local_8d8 [384];
  undefined1 local_758 [384];
  undefined1 local_5d8 [384];
  undefined1 local_458 [384];
  undefined1 local_2d8 [384];
  undefined1 local_158;
  undefined1 local_157 [159];
  undefined1 local_b8;
  undefined1 local_b7 [159];
  ulonglong local_18;
  
  local_8e8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_9a8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined1 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 7;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 1;
  *(undefined4 *)(param_1 + 0x114) = 86400000;
  local_158 = 0;
  puVar6 = local_157;
  for (lVar5 = 0x9c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_970[0] = 0;
  uVar2 = FUN_143a8c200(param_2);
  FUN_143e1c7c0(uVar2,&local_158,0x9d,local_970);
  FUN_143a8b2a0(local_5d8,&local_158);
  FUN_143a8aad0(local_8d8);
  pcVar3 = (char *)FUN_143b52030(param_2);
  sVar4 = _guard_xfg_dispatch_icall_nop(pcVar3);
  if (sVar4 == 0) {
LAB_143b55874:
    local_b8 = 0;
    puVar6 = local_b7;
    for (lVar5 = 0x9c; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_970[0] = 0;
    uVar2 = FUN_143a8c200(param_2);
    FUN_143e1c720(uVar2,&local_b8,0x9d,local_970);
    FUN_143a8b2a0(local_758,&local_b8);
    local_930 = FUN_143b52030(local_758);
    uVar2 = FUN_143accb70(local_758);
    local_988 = 0;
    local_938 = FUN_143a8a690(local_2d8,uVar2,local_930,0);
    local_928 = local_938;
    FUN_143a8adb0(local_8d8,local_938);
    FUN_143a8acf0(local_2d8);
    FUN_143a8acf0(local_758);
  }
  else {
    pcVar3 = (char *)FUN_143b52800(param_2);
    sVar4 = _guard_xfg_dispatch_icall_nop(pcVar3);
    if (sVar4 != 0) {
      pcVar3 = (char *)FUN_143b52800(local_5d8);
      sVar4 = _guard_xfg_dispatch_icall_nop(pcVar3);
      if (sVar4 == 0) goto LAB_143b55874;
    }
    local_948 = FUN_143a8a610(local_458,param_2);
    local_940 = local_948;
    FUN_143a8adb0(local_8d8,local_948);
    FUN_143a8acf0(local_458);
  }
  FUN_143b91920(local_918,local_8d8,param_3,param_4);
  local_950 = FUN_143b92290(local_918,"monthNames",param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 == '\0') {
    *param_4 = -0x80;
    FUN_143b919a0(local_918);
    FUN_143a8acf0(local_8d8);
    FUN_143a8acf0(local_5d8);
  }
  else {
    FUN_143a9f4f0(local_8f8,param_1 + 0x128,param_1 + 0x1c5);
    local_920 = FUN_143aa4780(local_950,0,param_4);
    uVar2 = FUN_143aa4780(local_950,1,param_4);
    FUN_143acfd80(local_8f8,uVar2,local_920);
    local_968 = FUN_143aa56e0(0,"supplementalData",param_4);
    FUN_143aa37c0(local_968,"weekData",local_968,param_4);
    uVar2 = FUN_143b52030(local_8d8);
    local_960 = FUN_143aa37c0(local_968,uVar2,0,param_4);
    if ((*param_4 == 2) && (local_968 != 0)) {
      *param_4 = 0;
      local_960 = FUN_143aa37c0(local_968,&DAT_145cf4668,0,param_4);
    }
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      local_978 = (int *)FUN_143aa4640(local_960,local_958,param_4);
      cVar1 = FUN_143a8b110(*param_4);
      if ((((((cVar1 == '\0') || (local_958[0] != 6)) || (*local_978 < 1)) ||
           ((7 < *local_978 || (local_978[1] < 1)))) ||
          ((7 < local_978[1] || ((local_978[2] < 1 || (7 < local_978[2])))))) ||
         ((local_978[4] < 1 || (7 < local_978[4])))) {
        *param_4 = 3;
      }
      else {
        *(int *)(param_1 + 0x100) = *local_978;
        *(char *)(param_1 + 0x104) = (char)local_978[1];
        *(int *)(param_1 + 0x108) = local_978[2];
        *(int *)(param_1 + 0x10c) = local_978[3];
        *(int *)(param_1 + 0x110) = local_978[4];
        *(int *)(param_1 + 0x114) = local_978[5];
      }
    }
    else {
      *param_4 = -0x80;
    }
    FUN_143aa2ef0(local_960);
    FUN_143aa2ef0(local_968);
    FUN_143b919a0(local_918);
    FUN_143a8acf0(local_8d8);
    FUN_143a8acf0(local_5d8);
  }
  return;
}



// FUNCTION 143b55dc0 FUN_143b55dc0 body=121 status=ok
// SIG undefined FUN_143b55dc0(void)

void FUN_143b55dc0(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xd8))(param_1,param_2);
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b53980(param_1);
    if ((cVar1 != '\0') || (*(char *)((longlong)param_1 + 10) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 143b55e40 FUN_143b55e40 body=355 status=ok
// SIG undefined FUN_143b55e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b55e40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    for (local_b8 = 0; (&PTR_s_gregorian_145d0deb0)[local_b8] != (undefined *)0x0;
        local_b8 = local_b8 + 1) {
      FUN_143a8dbd0(local_88,0x40);
      local_a0 = FUN_143a8d4f0(local_60,1,L"calendar=",0xffffffff);
      local_98 = local_a0;
      FUN_143a8e070(local_88,local_a0);
      FUN_143a8dc60(local_60);
      local_b0 = FUN_143a8d9f0(local_38,(&PTR_s_gregorian_145d0deb0)[local_b8],0xffffffff,0);
      local_a8 = local_b0;
      FUN_143a8e070(local_88,local_b0);
      FUN_143a8dc60(local_38);
      FUN_143acdfd0(param_2,local_88,param_1,param_3);
      FUN_143a8dc60(local_88);
    }
  }
  return;
}



// FUNCTION 143b55fb0 FUN_143b55fb0 body=47 status=ok
// SIG undefined FUN_143b55fb0(void)

void FUN_143b55fb0(void *param_1,void *param_2,int param_3)

{
  _guard_xfg_dispatch_icall_nop(param_2,param_1,(longlong)param_3);
  return;
}



// FUNCTION 143b55fe0 FUN_143b55fe0 body=51 status=ok
// SIG undefined FUN_143b55fe0(void)

void FUN_143b55fe0(void *param_1,void *param_2,int param_3)

{
  _guard_xfg_dispatch_icall_nop(param_2,param_1,(longlong)param_3 << 2);
  return;
}



// FUNCTION 143b56020 FUN_143b56020 body=74 status=ok
// SIG undefined FUN_143b56020(void)

void FUN_143b56020(longlong param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc + (longlong)param_2 * 4);
  if ((iVar1 < param_3) || (param_4 < iVar1)) {
    *param_5 = 1;
  }
  return;
}



// FUNCTION 143b56070 FUN_143b56070 body=490 status=ok
// SIG undefined FUN_143b56070(void)

void FUN_143b56070(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 5) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar3 = FUN_143b536c0(param_1,2);
    uVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar3);
    FUN_143b56020(param_1,5,1,uVar2,param_3);
  }
  else if (param_2 == 6) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar2);
    FUN_143b56020(param_1,6,1,uVar2,param_3);
  }
  else if (param_2 == 8) {
    iVar1 = FUN_143b536c0(param_1,8);
    if (iVar1 == 0) {
      *param_3 = 1;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x70))(param_1,8);
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,8);
      FUN_143b56020(param_1,8,uVar3,uVar2,param_3);
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    FUN_143b56020(param_1,param_2,uVar3,uVar2,param_3);
  }
  return;
}



// FUNCTION 143b56260 FUN_143b56260 body=115 status=ok
// SIG undefined FUN_143b56260(void)

void FUN_143b56260(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    cVar1 = FUN_143a8b110(*param_2);
    if ((cVar1 == '\0') || (0x16 < local_18)) break;
    if (1 < *(int *)((longlong)param_1 + (longlong)local_18 * 4 + 0x80)) {
      (**(code **)(*param_1 + 0x130))(param_1,local_18,param_2);
    }
    local_18 = local_18 + 1;
  }
  return;
}



// FUNCTION 143b562e0 FUN_143b562e0 body=47 status=ok
// SIG undefined FUN_143b562e0(void)

void FUN_143b562e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_143b56310(param_1,param_2,param_2,param_3);
  return;
}



// FUNCTION 143b56310 FUN_143b56310 body=156 status=ok
// SIG undefined FUN_143b56310(void)

int FUN_143b56310(undefined8 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_143b52200(param_1);
  local_18 = (((param_4 - iVar2) - param_3) + 1) % 7;
  if (local_18 < 0) {
    local_18 = local_18 + 7;
  }
  iVar2 = param_2 + -1 + local_18;
  local_14 = iVar2 / 7;
  bVar1 = FUN_143b52620(param_1,(longlong)iVar2 % 7 & 0xffffffff);
  if ((int)(uint)bVar1 <= 7 - local_18) {
    local_14 = local_14 + 1;
  }
  return local_14;
}



// FUNCTION 143b563b0 FUN_143b563b0 body=110 status=ok
// SIG undefined FUN_143b563b0(void)

undefined8 FUN_143b563b0(void)

{
  if (DAT_146bc7f20 != (undefined8 *)0x0) {
    if (DAT_146bc7f20 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7f20)(DAT_146bc7f20,1);
    }
    DAT_146bc7f20 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc7f28);
  return 1;
}



// FUNCTION 143b56420 FUN_143b56420 body=147 status=ok
// SIG undefined FUN_143b56420(void)

undefined8 *
FUN_143b56420(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b69a00(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::DateFormat::vftable;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x100;
  FUN_143b56620(param_1,param_2);
  return param_1;
}



// FUNCTION 143b564c0 FUN_143b564c0 body=120 status=ok
// SIG undefined FUN_143b564c0(void)

undefined8 * FUN_143b564c0(undefined8 *param_1)

{
  FUN_143b69a50(param_1);
  *param_1 = icu_53::DateFormat::vftable;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x100;
  return param_1;
}



// FUNCTION 143b56540 FUN_143b56540 body=213 status=ok
// SIG undefined FUN_143b56540(void)

void FUN_143b56540(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::DateFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x29];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x2a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x158);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b56620 FUN_143b56620 body=385 status=ok
// SIG undefined FUN_143b56620(void)

longlong FUN_143b56620(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x148);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(longlong *)(param_2 + 0x148) == 0) {
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0x10))
                        (*(undefined8 *)(param_2 + 0x148));
      *(undefined8 *)(param_1 + 0x148) = uVar2;
    }
    if (*(longlong *)(param_2 + 0x150) == 0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x150) + 0x18))
                        (*(undefined8 *)(param_2 + 0x150));
      *(undefined8 *)(param_1 + 0x150) = uVar2;
    }
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
              (param_1 + 0x158,param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  return param_1;
}



// FUNCTION 143b567b0 FUN_143b567b0 body=244 status=ok
// SIG undefined FUN_143b567b0(void)

undefined1 FUN_143b567b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  if (param_1 == param_2) {
LAB_143b56895:
    local_18 = 1;
  }
  else {
    cVar1 = FUN_143ab1dd0(param_1,param_2);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x148) != 0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x20))
                        (*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x148));
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))
                          (*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_2 + 0x150));
        if ((cVar1 != '\0') && (*(int *)(param_1 + 0x15c) == *(int *)(param_2 + 0x15c)))
        goto LAB_143b56895;
      }
    }
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b568b0 FUN_143b568b0 body=54 status=ok
// SIG undefined FUN_143b568b0(void)

undefined8 FUN_143b568b0(undefined8 param_1,uint param_2)

{
  FUN_143b56540(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b568f0 FUN_143b568f0 body=107 status=ok
// SIG undefined FUN_143b568f0(void)

void FUN_143b568f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 143b56960 FUN_143b56960 body=128 status=ok
// SIG undefined FUN_143b56960(void)

void FUN_143b56960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong **)(param_1 + 0x150) = param_2;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  return;
}



// FUNCTION 143b569e0 FUN_143b569e0 body=56 status=ok
// SIG undefined FUN_143b569e0(void)

void FUN_143b569e0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_143b4e8a0(*(undefined8 *)(param_1 + 0x148),param_2);
  }
  return;
}



// FUNCTION 143b56a20 FUN_143b56a20 body=1109 status=ok
// SIG undefined FUN_143b56a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b56a20(undefined4 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 local_108 [2];
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  int local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_28;
  undefined8 local_20;
  char local_18 [8];
  ulonglong local_10;
  
  local_20 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108[0] = 0;
  local_118 = local_108;
  local_e0 = FUN_143a8b730(param_3,"compat",local_18,8);
  if ((0 < local_e0) && (iVar2 = _guard_xfg_dispatch_icall_nop(local_18,"host"), iVar2 == 0)) {
    local_98 = FUN_143a8d310(800);
    if (local_98 == 0) {
      local_c0 = (undefined8 *)0x0;
    }
    else {
      local_118 = local_108;
      local_c0 = (undefined8 *)FUN_143bae460(local_98,param_1,param_2,param_3);
    }
    local_70 = local_c0;
    local_a0 = local_c0;
    cVar1 = FUN_143a8b110(local_108[0]);
    if (cVar1 != '\0') {
      return local_a0;
    }
    local_80 = local_a0;
    local_f8 = local_a0;
    if (local_a0 == (undefined8 *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = (**(code **)*local_a0)(local_a0,1);
    }
  }
  if ((param_2 != -1) && ((param_2 - 4U & 0x80) != 0)) {
    local_b0 = FUN_143a8d310(0x368);
    if (local_b0 == 0) {
      local_90 = (undefined8 *)0x0;
    }
    else {
      local_118 = local_108;
      local_90 = (undefined8 *)FUN_143babd60(local_b0,param_1,param_2 + -4,param_3);
    }
    local_40 = local_90;
    local_c8 = local_90;
    cVar1 = FUN_143a8b110(local_108[0]);
    if (cVar1 != '\0') {
      return local_c8;
    }
    local_50 = local_c8;
    local_f0 = local_c8;
    if (local_c8 == (undefined8 *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = (**(code **)*local_c8)(local_c8,1);
    }
    local_108[0] = 0;
  }
  local_b8 = FUN_143a8d310(0x390);
  if (local_b8 == 0) {
    local_a8 = (undefined8 *)0x0;
  }
  else {
    local_118 = local_108;
    local_a8 = (undefined8 *)FUN_143ba0830(local_b8,param_1,param_2,param_3);
  }
  local_78 = local_a8;
  local_100 = local_a8;
  cVar1 = FUN_143a8b110(local_108[0]);
  if (cVar1 == '\0') {
    local_68 = local_100;
    local_e8 = local_100;
    if (local_100 == (undefined8 *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = (**(code **)*local_100)(local_100,1);
    }
    local_108[0] = 0;
    local_d0 = FUN_143a8d310(0x390);
    if (local_d0 == 0) {
      local_88 = (undefined8 *)0x0;
    }
    else {
      local_88 = (undefined8 *)FUN_143ba0590(local_d0,param_3,local_108);
    }
    local_48 = local_88;
    local_100 = local_88;
    cVar1 = FUN_143a8b110(local_108[0]);
    if (cVar1 == '\0') {
      local_28 = local_100;
      local_d8 = local_100;
      if (local_100 != (undefined8 *)0x0) {
        (**(code **)*local_100)(local_100,1);
      }
      local_100 = (undefined8 *)0x0;
    }
  }
  return local_100;
}



// FUNCTION 143b56e80 FUN_143b56e80 body=55 status=ok
// SIG undefined FUN_143b56e80(void)

void FUN_143b56e80(int param_1,undefined8 param_2)

{
  undefined4 local_res8;
  
  local_res8 = param_1;
  if (param_1 != -1) {
    local_res8 = param_1 + 4;
  }
  FUN_143b56a20(0xffffffff,local_res8,param_2);
  return;
}



// FUNCTION 143b56ec0 FUN_143b56ec0 body=58 status=ok
// SIG undefined FUN_143b56ec0(void)

void FUN_143b56ec0(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 local_res8;
  
  local_res8 = param_1;
  if (param_1 != -1) {
    local_res8 = param_1 + 4;
  }
  FUN_143b56a20(param_2,local_res8,param_3);
  return;
}



// FUNCTION 143b56f00 FUN_143b56f00 body=37 status=ok
// SIG undefined FUN_143b56f00(void)

void FUN_143b56f00(undefined4 param_1,undefined8 param_2)

{
  FUN_143b56a20(param_1,0xffffffff,param_2);
  return;
}



// FUNCTION 143b56f30 FUN_143b56f30 body=93 status=ok
// SIG undefined FUN_143b56f30(void)

undefined8 FUN_143b56f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  FUN_143b36810(local_28,0);
  uVar1 = FUN_143b56f90(param_1,param_2,param_3,local_28);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  return uVar1;
}



// FUNCTION 143b56f90 FUN_143b56f90 body=241 status=ok
// SIG undefined FUN_143b56f90(void)

undefined8 FUN_143b56f90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_38 [2];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  if ((param_1[0x29] != 0) &&
     (local_30 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(param_1[0x29]),
     local_30 != (undefined8 *)0x0)) {
    local_38[0] = 0;
    FUN_143b55550(local_30,param_2,local_38);
    cVar1 = FUN_143a8b110(local_38[0]);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x40))(param_1,local_30,param_3,param_4);
    }
    local_20 = local_30;
    local_28 = local_30;
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  return param_3;
}



// FUNCTION 143b57090 FUN_143b57090 body=255 status=ok
// SIG undefined FUN_143b57090(void)

undefined8
FUN_143b57090(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((param_1[0x29] != 0) &&
     (puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(param_1[0x29]),
     puVar2 != (undefined8 *)0x0)) {
    FUN_143b55550(puVar2,param_2,param_5);
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1,puVar2,param_3,param_4,param_5);
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_3;
}



// FUNCTION 143b57190 FUN_143b57190 body=64 status=ok
// SIG undefined FUN_143b57190(void)

undefined8
FUN_143b57190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    *param_5 = 0x10;
  }
  return param_3;
}



// FUNCTION 143b571d0 FUN_143b571d0 body=206 status=ok
// SIG undefined FUN_143b571d0(void)

undefined8
FUN_143b571d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  double local_10;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    iVar2 = FUN_143b695b0(param_2);
    if (iVar2 == 0) {
      local_10 = (double)FUN_143b381e0(param_2);
    }
    else if (iVar2 == 1) {
      local_10 = (double)FUN_143b381e0(param_2);
    }
    else {
      if (iVar2 != 2) {
        *param_5 = 1;
        return param_3;
      }
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_2);
      local_10 = (double)iVar2;
    }
    param_3 = FUN_143b56f90(param_1,local_10,param_3,param_4);
  }
  return param_3;
}



// FUNCTION 143b572a0 FUN_143b572a0 body=216 status=ok
// SIG undefined FUN_143b572a0(void)

undefined8
FUN_143b572a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  double local_10;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    iVar2 = FUN_143b695b0(param_2);
    if (iVar2 == 0) {
      local_10 = (double)FUN_143b381e0(param_2);
    }
    else if (iVar2 == 1) {
      local_10 = (double)FUN_143b381e0(param_2);
    }
    else {
      if (iVar2 != 2) {
        *param_5 = 1;
        return param_3;
      }
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_2);
      local_10 = (double)iVar2;
    }
    param_3 = FUN_143b57090(param_1,local_10,param_3,param_4,param_5);
  }
  return param_3;
}



// FUNCTION 143b57380 FUN_143b57380 body=46 status=ok
// SIG undefined FUN_143b57380(void)

void FUN_143b57380(longlong param_1,undefined4 param_2)

{
  icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::get(param_1 + 0x158,param_2);
  return;
}



// FUNCTION 143b573b0 FUN_143b573b0 body=18 status=ok
// SIG undefined FUN_143b573b0(void)

undefined8 FUN_143b573b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 143b573d0 FUN_143b573d0 body=79 status=ok
// SIG undefined FUN_143b573d0(void)

undefined4 FUN_143b573d0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x15c);
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b57420 FUN_143b57420 body=53 status=ok
// SIG undefined FUN_143b57420(void)

void FUN_143b57420(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x148) == 0) {
    FUN_143b4ac10();
  }
  else {
    FUN_143b528b0(*(undefined8 *)(param_1 + 0x148));
  }
  return;
}



// FUNCTION 143b57460 FUN_143b57460 body=50 status=ok
// SIG undefined FUN_143b57460(void)

ulonglong FUN_143b57460(ulonglong param_1)

{
  if (*(longlong *)(param_1 + 0x148) == 0) {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    param_1 = FUN_143b53980(*(undefined8 *)(param_1 + 0x148));
  }
  return param_1;
}



// FUNCTION 143b574a0 FUN_143b574a0 body=151 status=ok
// SIG undefined FUN_143b574a0(void)

ulonglong FUN_143b574a0(longlong *param_1)

{
  char cVar1;
  byte local_18;
  undefined4 local_14 [5];
  
  if (param_1[0x29] != 0) {
    local_14[0] = 0;
    cVar1 = FUN_143b53980(param_1[0x29]);
    if (((cVar1 == '\0') ||
        (cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,0,local_14), cVar1 == '\0')) ||
       (cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,local_14), cVar1 == '\0')) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    return (ulonglong)local_18;
  }
  return (ulonglong)param_1 & 0xffffffffffffff00;
}



// FUNCTION 143b57540 FUN_143b57540 body=322 status=ok
// SIG undefined FUN_143b57540(void)

undefined8 FUN_143b57540(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_20 = 0;
  if ((param_1[0x29] != 0) &&
     (local_30 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(param_1[0x29]),
     local_30 != (undefined8 *)0x0)) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_3);
    FUN_143b4e9d0(local_30);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,local_30,param_3);
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_3);
    if (iVar3 != iVar2) {
      local_34 = 0;
      local_20 = FUN_143b52810(local_30,&local_34);
      cVar1 = FUN_143a8b0e0(local_34);
      if (cVar1 != '\0') {
        FUN_143b0fce0(param_3,iVar2);
        FUN_143b44cd0(param_3,iVar2);
        local_20 = 0;
      }
    }
    local_18 = local_30;
    local_28 = local_30;
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  return local_20;
}



// FUNCTION 143b57690 FUN_143b57690 body=149 status=ok
// SIG undefined FUN_143b57690(void)

undefined8 FUN_143b57690(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_20 [32];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143b16ce0(local_20,0);
    uVar3 = FUN_143b57540(param_1,param_2,local_20);
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_20);
    if (iVar2 == 0) {
      *param_3 = 1;
    }
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b57730 FUN_143b57730 body=62 status=ok
// SIG undefined FUN_143b57730(void)

void FUN_143b57730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b57540(param_1,param_2,param_4);
  FUN_143b696e0(param_3,uVar1);
  return;
}



// FUNCTION 143b57770 FUN_143b57770 body=106 status=ok
// SIG undefined FUN_143b57770(void)

longlong FUN_143b57770(longlong param_1,undefined4 param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_1415e7db0(param_1 + 0x158,(int)param_3);
  if (cVar1 == '\0') {
    *param_4 = 1;
  }
  else {
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::set(param_1 + 0x158,param_2,(int)param_3)
    ;
  }
  return param_1;
}



// FUNCTION 143b577e0 FUN_143b577e0 body=72 status=ok
// SIG undefined FUN_143b577e0(void)

void FUN_143b577e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,lVar1);
  }
  return;
}



// FUNCTION 143b57830 FUN_143b57830 body=55 status=ok
// SIG undefined FUN_143b57830(void)

void FUN_143b57830(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_143b55390(*(undefined8 *)(param_1 + 0x148),param_2);
  }
  return;
}



// FUNCTION 143b57870 FUN_143b57870 body=84 status=ok
// SIG undefined FUN_143b57870(void)

void FUN_143b57870(longlong param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 >> 8 == 1) {
      *(uint *)(param_1 + 0x15c) = param_2;
    }
    else {
      *param_3 = 1;
    }
  }
  return;
}



// FUNCTION 143b578d0 FUN_143b578d0 body=124 status=ok
// SIG undefined FUN_143b578d0(void)

void FUN_143b578d0(longlong *param_1,undefined1 param_2)

{
  undefined4 local_18 [6];
  
  if (param_1[0x29] != 0) {
    FUN_143b55390(param_1[0x29],param_2);
    local_18[0] = 0;
    (**(code **)(*param_1 + 0xd0))(param_1,0,1,local_18);
    (**(code **)(*param_1 + 0xd0))(param_1,1,1,local_18);
  }
  return;
}



// FUNCTION 143b57950 FUN_143b57950 body=72 status=ok
// SIG undefined FUN_143b57950(void)

void FUN_143b57950(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x98))(param_1,lVar1);
  }
  return;
}



// FUNCTION 143b579a0 FUN_143b579a0 body=56 status=ok
// SIG undefined FUN_143b579a0(void)

void FUN_143b579a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_143b556c0(*(undefined8 *)(param_1 + 0x148),param_2);
  }
  return;
}



// FUNCTION 143b579e0 FUN_143b579e0 body=39 status=ok
// SIG undefined FUN_143b579e0(void)

void FUN_143b579e0(double param_1,int param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,(double)param_2);
  return;
}



// FUNCTION 143b57a10 FUN_143b57a10 body=394 status=ok
// SIG undefined FUN_143b57a10(void)

undefined8 * FUN_143b57a10(undefined8 *param_1,longlong param_2)

{
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *param_1 = icu_53::AndConstraint::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    local_48[0] = 0;
    local_40 = FUN_143a8d310(0x20);
    if (local_40 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143e1c860(local_40,local_48);
    }
    local_20 = local_38;
    param_1[3] = local_38;
    FUN_143e1cac0(param_1[3],*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    param_1[5] = 0;
  }
  else {
    local_30 = FUN_143a8d310(0x30);
    if (local_30 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143b57a10(local_30,*(undefined8 *)(param_2 + 0x28));
    }
    param_1[5] = local_28;
  }
  return param_1;
}



// FUNCTION 143b57ba0 FUN_143b57ba0 body=118 status=ok
// SIG undefined FUN_143b57ba0(void)

undefined8 * FUN_143b57ba0(undefined8 *param_1)

{
  *param_1 = icu_53::AndConstraint::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143b57c20 FUN_143b57c20 body=155 status=ok
// SIG undefined FUN_143b57c20(void)

undefined8 * FUN_143b57c20(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  return param_1;
}



// FUNCTION 143b57cc0 FUN_143b57cc0 body=41 status=ok
// SIG undefined FUN_143b57cc0(void)

undefined8 FUN_143b57cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_143b5abe0(param_1,param_2);
  return param_1;
}



// FUNCTION 143b57cf0 FUN_143b57cf0 body=69 status=ok
// SIG undefined FUN_143b57cf0(void)

undefined8 FUN_143b57cf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b59ad0(param_2,param_3);
  FUN_143b5ac30(param_1,param_2,param_3,uVar1);
  return param_1;
}



// FUNCTION 143b57d40 FUN_143b57d40 body=38 status=ok
// SIG undefined FUN_143b57d40(void)

undefined8 FUN_143b57d40(undefined8 param_1)

{
  FUN_143b5ac30(param_1,0,0,0);
  return param_1;
}



// FUNCTION 143b57d70 FUN_143b57d70 body=266 status=ok
// SIG undefined FUN_143b57d70(void)

undefined8 * FUN_143b57d70(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_40;
  undefined8 local_30;
  
  *param_1 = icu_53::OrConstraint::vftable;
  if (*(longlong *)(param_2 + 8) == 0) {
    param_1[1] = 0;
  }
  else {
    lVar1 = FUN_143a8d310(0x30);
    if (lVar1 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143b57a10(lVar1,*(undefined8 *)(param_2 + 8));
    }
    param_1[1] = local_40;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    param_1[2] = 0;
  }
  else {
    lVar1 = FUN_143a8d310(0x18);
    if (lVar1 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143b57d70(lVar1,*(undefined8 *)(param_2 + 0x10));
    }
    param_1[2] = local_30;
  }
  return param_1;
}



// FUNCTION 143b57e80 _MallocaArrayHolder<> body=52 status=ok
// SIG undefined _MallocaArrayHolder<>(void)

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl Concurrency::details::_MallocaArrayHolder<class Concurrency::Context *
   __ptr64>::_MallocaArrayHolder<class Concurrency::Context * __ptr64>(void) __ptr64
    public: __cdecl Concurrency::details::_MallocaArrayHolder<class Concurrency::event *
   __ptr64>::_MallocaArrayHolder<class Concurrency::event * __ptr64>(void) __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 * _MallocaArrayHolder<>(undefined8 *param_1)

{
  *param_1 = icu_53::OrConstraint::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143b57ec0 FUN_143b57ec0 body=502 status=ok
// SIG undefined FUN_143b57ec0(void)

undefined8 * FUN_143b57ec0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::PluralKeywordEnumeration::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_143b08f70(param_1 + 0xd,param_3);
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    FUN_143ab38b0(param_1 + 0xd,FUN_143a8d350);
    bVar1 = true;
    for (local_50 = param_2; local_50 != 0; local_50 = *(longlong *)(local_50 + 0x30)) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_143a8d3a0(lVar3,local_50 + 8);
      }
      FUN_143b09430(param_1 + 0xd,local_30,param_3);
      cVar2 = FUN_143a8b0e0(*param_3);
      if (cVar2 != '\0') {
        return param_1;
      }
      cVar2 = FUN_143b0fc90(local_50 + 8,L"other",5);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
    }
    if (bVar1) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_143a8dad0(lVar3,L"other");
      }
      FUN_143b09430(param_1 + 0xd,local_40,param_3);
    }
  }
  return param_1;
}



// FUNCTION 143b580c0 FUN_143b580c0 body=137 status=ok
// SIG undefined FUN_143b580c0(void)

undefined8 * FUN_143b580c0(undefined8 *param_1)

{
  *param_1 = icu_53::PluralRuleParser::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_143a8ac30(param_1 + 3);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b58150 FUN_143b58150 body=78 status=ok
// SIG undefined FUN_143b58150(void)

undefined8 * FUN_143b58150(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::PluralRules::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143b581a0 FUN_143b581a0 body=93 status=ok
// SIG undefined FUN_143b581a0(void)

undefined8 *
FUN_143b581a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::PluralRules::vftable;
  param_1[1] = 0;
  FUN_143b58860(param_1,param_2);
  return param_1;
}



// FUNCTION 143b58200 FUN_143b58200 body=389 status=ok
// SIG undefined FUN_143b58200(void)

undefined8 * FUN_143b58200(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_40;
  undefined8 local_30;
  
  *param_1 = icu_53::RuleChain::vftable;
  FUN_143a8d3a0(param_1 + 1,param_2 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_143a8d3a0(param_1 + 8,param_2 + 0x40);
  FUN_143a8d3a0(param_1 + 0xd,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    lVar1 = FUN_143a8d310(0x18);
    if (lVar1 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143b57d70(lVar1,*(undefined8 *)(param_2 + 0x38));
    }
    param_1[7] = local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar1 = FUN_143a8d310(0x98);
    if (lVar1 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143b58200(lVar1,*(undefined8 *)(param_2 + 0x30));
    }
    param_1[6] = local_30;
  }
  return param_1;
}



// FUNCTION 143b58390 FUN_143b58390 body=146 status=ok
// SIG undefined FUN_143b58390(void)

undefined8 * FUN_143b58390(undefined8 *param_1)

{
  *param_1 = icu_53::RuleChain::vftable;
  FUN_143a8ac30(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_143a8ac30(param_1 + 8);
  FUN_143a8ac30(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  return param_1;
}



// FUNCTION 143b58430 FUN_143b58430 body=63 status=ok
// SIG undefined FUN_143b58430(void)

_AfxBindHost * FUN_143b58430(_AfxBindHost *param_1,undefined8 param_2)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = icu_53::SharedPluralRules::vftable;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



// FUNCTION 143b58470 FUN_143b58470 body=188 status=ok
// SIG undefined FUN_143b58470(void)

void FUN_143b58470(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::AndConstraint::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1[5] != 0) && (puVar1 = (undefined8 *)param_1[5], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 143b58530 FUN_143b58530 body=200 status=ok
// SIG undefined FUN_143b58530(void)

void FUN_143b58530(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::OrConstraint::vftable;
  if ((param_1[1] != 0) && (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1[2] != 0) && (puVar1 = (undefined8 *)param_1[2], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 143b58600 FUN_143b58600 body=56 status=ok
// SIG undefined FUN_143b58600(void)

void FUN_143b58600(undefined8 *param_1)

{
  *param_1 = icu_53::PluralKeywordEnumeration::vftable;
  FUN_143b091e0(param_1 + 0xd);
  FUN_143ab1d60(param_1);
  return;
}



// FUNCTION 143b58640 FUN_143b58640 body=46 status=ok
// SIG undefined FUN_143b58640(void)

void FUN_143b58640(undefined8 *param_1)

{
  *param_1 = icu_53::PluralRuleParser::vftable;
  FUN_143a8dc60(param_1 + 3);
  return;
}



// FUNCTION 143b58670 FUN_143b58670 body=118 status=ok
// SIG undefined FUN_143b58670(void)

void FUN_143b58670(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::PluralRules::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b586f0 FUN_143b586f0 body=230 status=ok
// SIG undefined FUN_143b586f0(void)

void FUN_143b586f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::RuleChain::vftable;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0xd);
  FUN_143a8dc60(param_1 + 8);
  FUN_143a8dc60(param_1 + 1);
  return;
}



// FUNCTION 143b587e0 FUN_143b587e0 body=118 status=ok
// SIG undefined FUN_143b587e0(void)

void FUN_143b587e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::SharedPluralRules::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b58860 FUN_143b58860 body=226 status=ok
// SIG undefined FUN_143b58860(void)

longlong FUN_143b58860(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_38;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar2 = FUN_143a8d310(0x98);
      if (lVar2 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143b58200(lVar2,*(undefined8 *)(param_2 + 8));
      }
      *(undefined8 *)(param_1 + 8) = local_38;
    }
  }
  return param_1;
}



// FUNCTION 143b58950 FUN_143b58950 body=696 status=ok
// SIG undefined FUN_143b58950(void)

undefined1 FUN_143b58950(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_78 = 0;
  if (param_1 == param_2) {
    return 1;
  }
  uVar3 = FUN_143b59ec0(param_1,&local_78);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_68,uVar3);
  uVar3 = FUN_143b59ec0(param_2,&local_78);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_60,uVar3);
  cVar1 = FUN_143a8b0e0(local_78);
  if (cVar1 != '\0') {
    local_70 = 0;
    FUN_143b36bb0(local_60);
    FUN_143b36bb0(local_68);
    return local_70;
  }
  local_38 = (longlong *)FUN_143a8b510(local_68);
  local_20 = (longlong *)FUN_143a8b510(local_60);
  local_50 = (**(code **)(*local_20 + 0x18))(local_20,&local_78);
  local_18 = *local_38;
  iVar2 = (**(code **)(local_18 + 0x18))(local_38,&local_78);
  if (iVar2 != local_50) {
    local_6f = 0;
    FUN_143b36bb0(local_60);
    FUN_143b36bb0(local_68);
    return local_6f;
  }
  local_48 = (longlong *)FUN_143a8b510(local_68);
  (**(code **)(*local_48 + 0x38))(local_48,&local_78);
  do {
    local_28 = (longlong *)FUN_143a8b510(local_68);
    local_58 = (**(code **)(*local_28 + 0x30))(local_28,&local_78);
    if (local_58 == 0) {
      local_40 = (longlong *)FUN_143a8b510(local_60);
      (**(code **)(*local_40 + 0x38))(local_40,&local_78);
      do {
        local_30 = (longlong *)FUN_143a8b510(local_60);
        local_58 = (**(code **)(*local_30 + 0x30))(local_30,&local_78);
        if (local_58 == 0) {
          cVar1 = FUN_143a8b0e0(local_78);
          if (cVar1 != '\0') {
            local_73 = 0;
            FUN_143b36bb0(local_60);
            FUN_143b36bb0(local_68);
            return local_73;
          }
          local_71 = 1;
          FUN_143b36bb0(local_60);
          FUN_143b36bb0(local_68);
          return local_71;
        }
        cVar1 = FUN_143b5b220(param_1,local_58);
      } while (cVar1 != '\0');
      local_74 = 0;
      FUN_143b36bb0(local_60);
      FUN_143b36bb0(local_68);
      return local_74;
    }
    cVar1 = FUN_143b5b220(param_2,local_58);
  } while (cVar1 != '\0');
  local_72 = 0;
  FUN_143b36bb0(local_60);
  FUN_143b36bb0(local_68);
  return local_72;
}



// FUNCTION 143b58c10 FUN_143b58c10 body=54 status=ok
// SIG undefined FUN_143b58c10(void)

undefined8 FUN_143b58c10(undefined8 param_1,uint param_2)

{
  FUN_143b58470(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58c50 FUN_143b58c50 body=54 status=ok
// SIG undefined FUN_143b58c50(void)

undefined8 FUN_143b58c50(undefined8 param_1,uint param_2)

{
  FUN_143b58530(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58c90 FUN_143b58c90 body=54 status=ok
// SIG undefined FUN_143b58c90(void)

undefined8 FUN_143b58c90(undefined8 param_1,uint param_2)

{
  FUN_143b58600(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58cd0 FUN_143b58cd0 body=54 status=ok
// SIG undefined FUN_143b58cd0(void)

undefined8 FUN_143b58cd0(undefined8 param_1,uint param_2)

{
  FUN_143b58640(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58d10 FUN_143b58d10 body=54 status=ok
// SIG undefined FUN_143b58d10(void)

undefined8 FUN_143b58d10(undefined8 param_1,uint param_2)

{
  FUN_143b58670(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58d50 FUN_143b58d50 body=54 status=ok
// SIG undefined FUN_143b58d50(void)

undefined8 FUN_143b58d50(undefined8 param_1,uint param_2)

{
  FUN_143b586f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58d90 FUN_143b58d90 body=54 status=ok
// SIG undefined FUN_143b58d90(void)

undefined8 FUN_143b58d90(undefined8 param_1,uint param_2)

{
  FUN_143b587e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b58dd0 FUN_143b58dd0 body=105 status=ok
// SIG undefined FUN_143b58dd0(void)

undefined8 FUN_143b58dd0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x30);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b57ba0(lVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = local_20;
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 143b58e40 FUN_143b58e40 body=143 status=ok
// SIG undefined FUN_143b58e40(void)

undefined8 FUN_143b58e40(longlong param_1)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_28;
  
  for (local_38 = param_1; *(longlong *)(local_38 + 0x10) != 0;
      local_38 = *(longlong *)(local_38 + 0x10)) {
  }
  lVar1 = FUN_143a8d310(0x30);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_143b57ba0(lVar1);
  }
  *(undefined8 *)(local_38 + 8) = local_28;
  return *(undefined8 *)(local_38 + 8);
}



// FUNCTION 143b58ed0 FUN_143b58ed0 body=100 status=ok
// SIG undefined FUN_143b58ed0(void)

void FUN_143b58ed0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b598f0(param_1,*(int *)(param_1 + 8) + 1,param_3);
  if (cVar1 != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 4) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// FUNCTION 143b58f40 FUN_143b58f40 body=135 status=ok
// SIG undefined FUN_143b58f40(void)

void FUN_143b58f40(longlong param_1,int param_2)

{
  int local_18;
  
  param_2 = param_2 - *(int *)(param_1 + 8);
  if (0 < param_2) {
    local_18 = 0;
    while ((local_18 < param_2 && (*(longlong *)(param_1 + 0x10) < 100000000000000000))) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) * 10;
      local_18 = local_18 + 1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  }
  return;
}



// FUNCTION 143b58fd0 FUN_143b58fd0 body=227 status=ok
// SIG undefined FUN_143b58fd0(void)

undefined8 FUN_143b58fd0(ushort param_1)

{
  undefined8 uVar1;
  
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return 1;
  }
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    return 10;
  }
  if (param_1 < 0x2027) {
    if (param_1 == 0x2026) {
      return 9;
    }
    switch(param_1) {
    case 0x20:
      uVar1 = 4;
      break;
    case 0x21:
      uVar1 = 0x11;
      break;
    default:
      goto switchD_143b5905b_caseD_22;
    case 0x25:
      uVar1 = 0xd;
      break;
    case 0x2c:
      uVar1 = 2;
      break;
    case 0x2e:
      uVar1 = 7;
      break;
    case 0x3a:
      uVar1 = 5;
      break;
    case 0x3b:
      uVar1 = 3;
      break;
    case 0x3d:
      uVar1 = 0x10;
      break;
    case 0x40:
      uVar1 = 6;
      break;
    case 0x7e:
      uVar1 = 0x12;
    }
  }
  else {
switchD_143b5905b_caseD_22:
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143b59140 FUN_143b59140 body=807 status=ok
// SIG undefined FUN_143b59140(void)

void FUN_143b59140(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x44) != 3)) {
      uVar2 = FUN_143b59c40(param_1 + 0x18,*(undefined4 *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = uVar2;
    }
    switch(*(undefined4 *)(param_1 + 0x44)) {
    case 0:
    case 3:
      if ((*(int *)(param_1 + 0x40) != 10) && (*(int *)(param_1 + 0x40) != 0x1c)) {
        *param_2 = 0x10100;
      }
      break;
    case 1:
      if ((((*(int *)(param_1 + 0x40) != 8) && (*(int *)(param_1 + 0x40) != 3)) &&
          ((((*(int *)(param_1 + 0x40) != 0x14 &&
             ((((*(int *)(param_1 + 0x40) != 0xe && (*(int *)(param_1 + 0x40) != 0xf)) &&
               (*(int *)(param_1 + 0x40) != 0x10)) &&
              ((*(int *)(param_1 + 0x40) != 0x11 && (*(int *)(param_1 + 0x40) != 0x13)))))) &&
            (*(int *)(param_1 + 0x40) != 0xb)) &&
           ((*(int *)(param_1 + 0x40) != 0xc && (*(int *)(param_1 + 0x40) != 2)))))) &&
         ((*(int *)(param_1 + 0x40) != 6 && (*(int *)(param_1 + 0x40) != 0x1c)))) {
        *param_2 = 0x10100;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x40) != 1) {
        *param_2 = 0x10100;
      }
      break;
    default:
      *param_2 = 0x10100;
      break;
    case 5:
      if ((((*(int *)(param_1 + 0x40) != 0x15) && (*(int *)(param_1 + 0x40) != 0x16)) &&
          (*(int *)(param_1 + 0x40) != 0x17)) &&
         (((*(int *)(param_1 + 0x40) != 0x19 && (*(int *)(param_1 + 0x40) != 0x18)) &&
          (*(int *)(param_1 + 0x40) != 6)))) {
        *param_2 = 0x10100;
      }
      break;
    case 6:
      if ((*(int *)(param_1 + 0x40) != 0x1a) && (*(int *)(param_1 + 0x40) != 0x1b)) {
        *param_2 = 0x10100;
      }
      break;
    case 8:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
      if (*(int *)(param_1 + 0x40) != 1) {
        *param_2 = 0x10100;
      }
      break;
    case 10:
      if (*(int *)(param_1 + 0x40) != 5) {
        *param_2 = 0x10100;
      }
      break;
    case 0xb:
    case 0xc:
      if (((*(int *)(param_1 + 0x40) != 0x15) && (*(int *)(param_1 + 0x40) != 0x16)) &&
         ((*(int *)(param_1 + 0x40) != 0x17 &&
          ((*(int *)(param_1 + 0x40) != 0x19 && (*(int *)(param_1 + 0x40) != 0x18)))))) {
        *param_2 = 0x10100;
      }
      break;
    case 0xe:
      if (((*(int *)(param_1 + 0x40) != 1) && (*(int *)(param_1 + 0x40) != 0xf)) &&
         (*(int *)(param_1 + 0x40) != 0x13)) {
        *param_2 = 0x10100;
      }
      break;
    case 0x14:
      if ((*(int *)(param_1 + 0x40) != 1) && (*(int *)(param_1 + 0x40) != 0xe)) {
        *param_2 = 0x10100;
      }
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      if (((((*(int *)(param_1 + 0x40) != 0x14) && (*(int *)(param_1 + 0x40) != 0xd)) &&
           (*(int *)(param_1 + 0x40) != 0xf)) &&
          ((*(int *)(param_1 + 0x40) != 0xe && (*(int *)(param_1 + 0x40) != 0x13)))) &&
         ((*(int *)(param_1 + 0x40) != 0x10 && (*(int *)(param_1 + 0x40) != 0x11)))) {
        *param_2 = 0x10100;
      }
    }
  }
  return;
}



// FUNCTION 143b594d0 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x10);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b581a0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b59530 FUN_143b59530 body=36 status=ok
// SIG undefined FUN_143b59530(void)

void FUN_143b59530(longlong param_1)

{
  TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
  ::GetIndex(param_1 + 0x68);
  return;
}



// FUNCTION 143b59560 FUN_143b59560 body=110 status=ok
// SIG undefined FUN_143b59560(void)

undefined8 FUN_143b59560(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18 [3];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      local_18[0] = 0;
      uVar2 = FUN_143a8c200(param_1);
      FUN_143b5ab30(uVar2,local_18,param_3);
    }
    else {
      *param_3 = 0x10;
      local_18[0] = 0;
    }
  }
  else {
    local_18[0] = 0;
  }
  return local_18[0];
}



// FUNCTION 143b595d0 FUN_143b595d0 body=373 status=ok
// SIG undefined FUN_143b595d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b595d0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_1f8 = 0;
    FUN_143a8a690(local_198,param_1,0,0);
    local_1d8 = (undefined8 *)FUN_143b5adc0(local_198,0,param_2);
    FUN_143a8acf0(local_198);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_1c8 = FUN_143a8d310(0x18);
      if (local_1c8 == 0) {
        local_1d0 = 0;
      }
      else {
        local_1d0 = FUN_143b58430(local_1c8,local_1d8);
      }
      local_1c0 = local_1d0;
      local_1e0 = local_1d0;
      if (local_1d0 == 0) {
        *param_2 = 7;
        local_1b0 = local_1d8;
        local_1e8 = local_1d8;
        if (local_1d8 != (undefined8 *)0x0) {
          (**(code **)*local_1d8)(local_1d8,1);
        }
        local_1d0 = 0;
      }
    }
    else {
      local_1d0 = 0;
    }
  }
  else {
    local_1d0 = 0;
  }
  return local_1d0;
}



// FUNCTION 143b59750 FUN_143b59750 body=307 status=ok
// SIG undefined FUN_143b59750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b59750(double param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  double local_38;
  char local_30 [18];
  char local_1e [14];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  dVar4 = _guard_xfg_dispatch_icall_nop(param_1);
  local_48 = 0;
  while( true ) {
    if (3 < local_48) {
      local_30[0] = '\0';
      pcVar3 = local_30;
      for (lVar2 = 0x1d; pcVar3 = pcVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
        *pcVar3 = '\0';
      }
      sprintf(local_30,"%1.15e",dVar4);
      iVar1 = atoi(local_1e);
      local_44 = 0xf;
      for (local_40 = 0x10; local_30[local_40] == '0'; local_40 = local_40 + -1) {
        local_44 = local_44 + -1;
      }
      return local_44 - iVar1;
    }
    local_38 = dVar4 * (double)*(int *)(&DAT_146832928 + (longlong)local_48 * 4);
    dVar5 = floor(local_38);
    if (local_38 == dVar5) break;
    local_48 = local_48 + 1;
  }
  return local_48;
}



// FUNCTION 143b59890 FUN_143b59890 body=86 status=ok
// SIG undefined FUN_143b59890(void)

undefined4 FUN_143b59890(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  if (((param_2 < 0) || (*(int *)(param_1 + 8) < 1)) || (*(int *)(param_1 + 8) - param_2 < 1)) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4);
  }
  return local_18;
}



// FUNCTION 143b598f0 FUN_143b598f0 body=67 status=ok
// SIG undefined FUN_143b598f0(void)

undefined8 FUN_143b598f0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0xc) < param_2)) {
    uVar1 = FUN_143e1cb50(param_1,param_2,param_3);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143b59940 FUN_143b59940 body=36 status=ok
// SIG undefined FUN_143b59940(void)

void FUN_143b59940(undefined8 param_1,undefined8 param_2)

{
  FUN_143b59970(param_1,0,param_2);
  return;
}



// FUNCTION 143b59970 FUN_143b59970 body=155 status=ok
// SIG undefined FUN_143b59970(void)

longlong FUN_143b59970(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar3 = FUN_143b59560(param_1,0,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(uVar3);
      lVar2 = CreateInternalContext(uVar4);
      FUN_143e1a1c0(uVar3);
      if (lVar2 == 0) {
        *param_3 = 7;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = FUN_143b5adc0(param_1,param_2,param_3);
  }
  return lVar2;
}



// FUNCTION 143b59a10 FUN_143b59a10 body=128 status=ok
// SIG undefined FUN_143b59a10(void)

double FUN_143b59a10(double *param_1,int param_2)

{
  double dVar1;
  
  if (param_2 == 0x15) {
    dVar1 = *param_1;
  }
  else if (param_2 == 0x16) {
    dVar1 = (double)(longlong)param_1[4];
  }
  else if (param_2 == 0x17) {
    dVar1 = (double)(longlong)param_1[2];
  }
  else if (param_2 == 0x18) {
    dVar1 = (double)*(int *)(param_1 + 1);
  }
  else if (param_2 == 0x19) {
    dVar1 = (double)(longlong)param_1[3];
  }
  else {
    dVar1 = *param_1;
  }
  return dVar1;
}



// FUNCTION 143b59a90 FUN_143b59a90 body=19 status=ok
// SIG undefined FUN_143b59a90(void)

void FUN_143b59a90(void)

{
  FUN_143b5abc0();
  return;
}



// FUNCTION 143b59ab0 FUN_143b59ab0 body=19 status=ok
// SIG undefined FUN_143b59ab0(void)

void FUN_143b59ab0(void)

{
  FUN_143b5abd0();
  return;
}



// FUNCTION 143b59ad0 FUN_143b59ad0 body=354 status=ok
// SIG undefined FUN_143b59ad0(void)

longlong FUN_143b59ad0(double param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  if ((((param_2 == 0) || (dVar3 = floor(param_1), param_1 == dVar3)) ||
      (cVar1 = FUN_143a919d0(param_1), cVar1 != '\0')) ||
     (cVar1 = FUN_143a91a60(param_1), cVar1 != '\0')) {
    lVar2 = 0;
  }
  else {
    dVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    dVar4 = floor(dVar3);
    dVar3 = dVar3 - dVar4;
    if (param_2 == 1) {
      lVar2 = (longlong)(dVar3 * 10.0 + 0.5);
    }
    else if (param_2 == 2) {
      lVar2 = (longlong)(dVar3 * 100.0 + 0.5);
    }
    else if (param_2 == 3) {
      lVar2 = (longlong)(dVar3 * 1000.0 + 0.5);
    }
    else {
      dVar4 = _guard_xfg_dispatch_icall_nop(10.0,(double)param_2);
      dVar3 = floor(dVar3 * dVar4 + 0.5);
      if (dVar3 <= 9.223372036854776e+18) {
        lVar2 = (longlong)dVar3;
      }
      else {
        lVar2 = 0x7fffffffffffffff;
      }
    }
  }
  return lVar2;
}



// FUNCTION 143b59c40 FUN_143b59c40 body=626 status=ok
// SIG undefined FUN_143b59c40(void)

int FUN_143b59c40(undefined8 param_1,int param_2)

{
  char cVar1;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 == 10) {
    cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f3ec,1);
    if (cVar1 == '\0') {
      local_res10 = 0x15;
    }
    else {
      cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f40c,1);
      if (cVar1 == '\0') {
        local_res10 = 0x16;
      }
      else {
        cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f438,1);
        if (cVar1 == '\0') {
          local_res10 = 0x17;
        }
        else {
          cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f43c,1);
          if (cVar1 == '\0') {
            local_res10 = 0x19;
          }
          else {
            cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f440,1);
            if (cVar1 == '\0') {
              local_res10 = 0x18;
            }
            else {
              cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f418,2);
              if (cVar1 == '\0') {
                local_res10 = 0x14;
              }
              else {
                cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f428,3);
                if (cVar1 == '\0') {
                  local_res10 = 0xb;
                }
                else {
                  cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f404,2);
                  if (cVar1 == '\0') {
                    local_res10 = 0xf;
                  }
                  else {
                    cVar1 = FUN_143b0fc90(param_1,L"within",6);
                    if (cVar1 == '\0') {
                      local_res10 = 0x13;
                    }
                    else {
                      cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f410,3);
                      if (cVar1 == '\0') {
                        local_res10 = 0xe;
                      }
                      else {
                        cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f420,3);
                        if (cVar1 == '\0') {
                          local_res10 = 0xd;
                        }
                        else {
                          cVar1 = FUN_143b0fc90(param_1,&DAT_145d0f430,2);
                          if (cVar1 == '\0') {
                            local_res10 = 0xc;
                          }
                          else {
                            cVar1 = FUN_143b0fc90(param_1,L"decimal",7);
                            if (cVar1 == '\0') {
                              local_res10 = 0x1a;
                            }
                            else {
                              cVar1 = FUN_143b0fc90(param_1,L"integer",7);
                              if (cVar1 == '\0') {
                                local_res10 = 0x1b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_res10;
}



// FUNCTION 143b59ec0 FUN_143b59ec0 body=229 status=ok
// SIG undefined FUN_143b59ec0(void)

undefined8 * FUN_143b59ec0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_38;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x90);
    if (lVar2 == 0) {
      local_38 = (undefined8 *)0x0;
    }
    else {
      local_38 = (undefined8 *)FUN_143b57ec0(lVar2,*(undefined8 *)(param_1 + 8),param_2);
    }
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)*local_38)(local_38,1);
      }
      local_38 = (undefined8 *)0x0;
    }
  }
  else {
    local_38 = (undefined8 *)0x0;
  }
  return local_38;
}



// FUNCTION 143b59fb0 FUN_143b59fb0 body=1018 status=ok
// SIG undefined FUN_143b59fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b59fb0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  int local_68;
  undefined2 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    while (iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8)), *(int *)(param_1 + 0x10) < iVar3) {
      local_64 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
      uVar4 = FUN_143b58fd0(local_64);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      if (*(int *)(param_1 + 0x40) != 4) break;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
    if (*(int *)(param_1 + 0x10) < iVar3) {
      local_68 = *(int *)(param_1 + 0x10);
      local_60 = *(int *)(param_1 + 0x40) + -1;
      switch(local_60) {
      case 0:
        while (*(int *)(param_1 + 0x40) == 1) {
          local_68 = local_68 + 1;
          iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
          if (iVar3 <= local_68) break;
          local_64 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),local_68);
          uVar4 = FUN_143b58fd0(local_64);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
        }
        *(undefined4 *)(param_1 + 0x40) = 1;
        break;
      case 1:
      case 2:
      case 4:
      case 5:
      case 8:
      case 0xc:
      case 0xf:
      case 0x11:
        local_68 = local_68 + 1;
        break;
      default:
        *param_2 = 0x10100;
        local_68 = local_68 + 1;
        break;
      case 6:
        local_58 = local_68 + 1;
        iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
        if ((local_58 < iVar3) &&
           (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),local_68 + 1), sVar2 == 0x2e)) {
          local_5c = local_68 + 2;
          iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
          if ((local_5c < iVar3) &&
             (sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),local_68 + 2), sVar2 == 0x2e)) {
            *(undefined4 *)(param_1 + 0x40) = 9;
            local_68 = local_68 + 3;
          }
          else {
            local_68 = local_68 + 2;
            *(undefined4 *)(param_1 + 0x40) = 8;
          }
        }
        else {
          local_68 = local_68 + 1;
        }
        break;
      case 9:
        while (*(int *)(param_1 + 0x40) == 10) {
          local_68 = local_68 + 1;
          iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
          if (iVar3 <= local_68) break;
          local_64 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),local_68);
          uVar4 = FUN_143b58fd0(local_64);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
        }
        *(undefined4 *)(param_1 + 0x40) = 10;
        break;
      case 0x10:
        sVar2 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 8),local_68 + 1);
        if (sVar2 == 0x3d) {
          local_68 = local_68 + 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 0;
          local_68 = local_68 + 1;
        }
      }
      local_50 = FUN_143a8d470(local_38,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10)
                               ,local_68 - *(int *)(param_1 + 0x10));
      local_48 = local_50;
      FUN_143a8dcd0(param_1 + 0x18,local_50);
      FUN_143a8dc60(local_38);
      *(int *)(param_1 + 0x10) = local_68;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0x1c;
    }
  }
  return;
}



// FUNCTION 143b5a400 FUN_143b5a400 body=159 status=ok
// SIG undefined FUN_143b5a400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b5a400(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  int local_a8;
  ulonglong local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_143a904f0(param_1);
  local_b0 = 0;
  local_b8 = 0x80;
  local_a8 = FUN_143a8f880(param_1,0,uVar1,local_98);
  local_a0 = (ulonglong)local_a8;
  if (local_a0 < 0x80) {
    local_98[local_a0] = '\0';
    atoi(local_98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143b5a4a0 FUN_143b5a4a0 body=1666 status=ok
// SIG undefined FUN_143b5a4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b5a4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  int local_2c4;
  undefined1 local_2c0 [8];
  int local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0 [8];
  int local_2a8;
  longlong local_2a0;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  int local_288;
  char *local_280;
  undefined8 local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  undefined1 local_258 [40];
  undefined1 local_230 [40];
  undefined1 local_208 [40];
  undefined1 local_1e0 [40];
  char local_1b8 [160];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_260 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_2c8 = 0;
  FUN_143a8ac30(local_258);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    uVar3 = FUN_143aa56e0(0,"plurals",param_5);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_2c0,uVar3)
    ;
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      local_2a8 = param_4;
      if (param_4 == 0) {
        local_280 = "locales";
      }
      else {
        if (param_4 != 1) {
          *param_5 = 1;
          FUN_143a8d3a0(param_2,local_258);
          local_2c8 = local_2c8 | 1;
          FUN_143b36c80(local_2c0);
          FUN_143a8dc60(local_258);
          return param_2;
        }
        local_280 = "locales_ordinals";
      }
      uVar3 = FUN_143a8b510(local_2c0);
      uVar3 = FUN_143aa37c0(uVar3,local_280,0,param_5);
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_2b0,uVar3)
      ;
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        local_2c4 = 0;
        local_270 = FUN_143a8c200(param_3);
        uVar3 = FUN_143a8b510(local_2b0);
        local_2a0 = FUN_143aa5130(uVar3,local_270,&local_2c4,param_5);
        if (local_2a0 == 0) {
          local_2b4 = 0;
          local_268 = (char *)FUN_143a8c200(param_3);
          _guard_xfg_dispatch_icall_nop(local_1b8,local_268);
          while (iVar2 = FUN_143a972c0(local_1b8,local_1b8,0x9d,&local_2b4), 0 < iVar2) {
            local_2c4 = 0;
            uVar3 = FUN_143a8b510(local_2b0);
            local_2a0 = FUN_143aa5130(uVar3,local_1b8,&local_2c4,&local_2b4);
            if (local_2a0 != 0) {
              *param_5 = 0;
              break;
            }
            local_2b4 = 0;
          }
        }
        if (local_2a0 == 0) {
          FUN_143a8d3a0(param_2,local_258);
          local_2c8 = local_2c8 | 1;
          FUN_143b36c80(local_2b0);
          FUN_143b36c80(local_2c0);
          FUN_143a8dc60(local_258);
        }
        else {
          FUN_143ab5770(local_2a0,local_118,local_2c4 + 1);
          uVar3 = FUN_143a8b510(local_2c0);
          uVar3 = FUN_143aa37c0(uVar3,"rules",0,param_5);
          UE4Tuple_Private::
          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                    (local_298,uVar3);
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 == '\0') {
            uVar3 = FUN_143a8b510(local_298);
            uVar3 = FUN_143aa37c0(uVar3,local_118,0,param_5);
            UE4Tuple_Private::
            TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
            TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                      (local_290,uVar3);
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 == '\0') {
              uVar3 = FUN_143a8b510(local_290);
              local_288 = FUN_143aa4d80(uVar3);
              FUN_143a8ac30(local_230);
              local_278 = 0;
              for (local_2b8 = 0; local_2b8 < local_288; local_2b8 = local_2b8 + 1) {
                uVar3 = FUN_143a8b510(local_290);
                FUN_143b5c050(local_1e0,uVar3,&local_278,param_5);
                FUN_143a8d9f0(local_208,local_278,0xffffffff,0);
                FUN_143a8e070(local_230,local_208);
                FUN_143acc590(local_230,0x3a);
                FUN_143a8e070(local_230,local_1e0);
                FUN_143acc590(local_230,0x3b);
                FUN_143a8dc60(local_208);
                FUN_143a8dc60(local_1e0);
              }
              FUN_143a8d3a0(param_2,local_230);
              local_2c8 = local_2c8 | 1;
              FUN_143a8dc60(local_230);
              FUN_143b36c80(local_290);
              FUN_143b36c80(local_298);
              FUN_143b36c80(local_2b0);
              FUN_143b36c80(local_2c0);
              FUN_143a8dc60(local_258);
            }
            else {
              FUN_143a8d3a0(param_2,local_258);
              local_2c8 = local_2c8 | 1;
              FUN_143b36c80(local_290);
              FUN_143b36c80(local_298);
              FUN_143b36c80(local_2b0);
              FUN_143b36c80(local_2c0);
              FUN_143a8dc60(local_258);
            }
          }
          else {
            FUN_143a8d3a0(param_2,local_258);
            local_2c8 = local_2c8 | 1;
            FUN_143b36c80(local_298);
            FUN_143b36c80(local_2b0);
            FUN_143b36c80(local_2c0);
            FUN_143a8dc60(local_258);
          }
        }
      }
      else {
        FUN_143a8d3a0(param_2,local_258);
        local_2c8 = local_2c8 | 1;
        FUN_143b36c80(local_2b0);
        FUN_143b36c80(local_2c0);
        FUN_143a8dc60(local_258);
      }
    }
    else {
      FUN_143a8d3a0(param_2,local_258);
      local_2c8 = local_2c8 | 1;
      FUN_143b36c80(local_2c0);
      FUN_143a8dc60(local_258);
    }
  }
  else {
    FUN_143a8d3a0(param_2,local_258);
    local_2c8 = local_2c8 | 1;
    FUN_143a8dc60(local_258);
  }
  return param_2;
}



// FUNCTION 143b5ab30 FUN_143b5ab30 body=134 status=ok
// SIG undefined FUN_143b5ab30(void)

void FUN_143b5ab30(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143aa29a0(&DAT_146bc7f68,FUN_143b5bbf0,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a8ab50(local_18,&DAT_146bc7f38);
    FUN_143b366a0(DAT_146bc7f30,param_1,param_2,param_3);
    FUN_143a8ad90(local_18);
  }
  return;
}



// FUNCTION 143b5abc0 FUN_143b5abc0 body=8 status=ok
// SIG undefined FUN_143b5abc0(void)

undefined * FUN_143b5abc0(void)

{
  return &DAT_146bc7f71;
}



// FUNCTION 143b5abd0 FUN_143b5abd0 body=8 status=ok
// SIG undefined FUN_143b5abd0(void)

undefined * FUN_143b5abd0(void)

{
  return &DAT_146bc7f70;
}



// FUNCTION 143b5abe0 FUN_143b5abe0 body=74 status=ok
// SIG undefined FUN_143b5abe0(void)

void FUN_143b5abe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_143b59750(param_2);
  uVar1 = FUN_143b59ad0(param_2,uVar2);
  FUN_143b5ac30(param_1,param_2,uVar2,uVar1);
  return;
}



// FUNCTION 143b5ac30 FUN_143b5ac30 body=397 status=ok
// SIG undefined FUN_143b5ac30(void)

void FUN_143b5ac30(double *param_1,double param_2,undefined4 param_3,double param_4)

{
  char cVar1;
  double dVar2;
  undefined4 local_res18;
  double local_res20;
  undefined1 local_17;
  double local_10;
  
  *(bool *)((longlong)param_1 + 0x29) = param_2 < 0.0;
  dVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  *param_1 = dVar2;
  cVar1 = FUN_143a919d0(*param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143a91a60(*param_1), cVar1 == '\0')) {
    local_17 = 0;
  }
  else {
    local_17 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2a) = local_17;
  if (*(char *)((longlong)param_1 + 0x2a) == '\0') {
    param_1[4] = (double)(longlong)*param_1;
    *(bool *)(param_1 + 5) = *param_1 == (double)(longlong)param_1[4];
    local_res18 = param_3;
    local_res20 = param_4;
  }
  else {
    local_res18 = 0;
    local_res20 = 0.0;
    param_1[4] = 0.0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 1) = local_res18;
  param_1[2] = local_res20;
  if (local_res20 == 0.0) {
    param_1[3] = 0.0;
  }
  else {
    for (local_10 = local_res20; (longlong)local_10 % 10 == 0;
        local_10 = (double)((longlong)local_10 / 10)) {
    }
    param_1[3] = local_10;
  }
  return;
}



// FUNCTION 143b5adc0 FUN_143b5adc0 body=549 status=ok
// SIG undefined FUN_143b5adc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b5adc0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined8 *local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [40];
  undefined1 local_a8 [48];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_d8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 < 2) {
      local_118 = FUN_143a8d310(0x10);
      if (local_118 == 0) {
        local_110 = (undefined8 *)0x0;
      }
      else {
        local_110 = (undefined8 *)FUN_143b58150(local_118,param_3);
      }
      local_e0 = local_110;
      local_128 = local_110;
      if ((local_110 == (undefined8 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
        local_f8 = local_128;
        local_120 = local_128;
        if (local_128 != (undefined8 *)0x0) {
          (**(code **)*local_128)(local_128,1);
        }
        local_100 = (undefined8 *)0x0;
      }
      else {
        local_138 = param_3;
        FUN_143b5a4a0(local_128,local_d0,param_1,param_2);
        iVar2 = FUN_143a904f0(local_d0);
        if (iVar2 == 0) {
          local_f0 = FUN_143a8dad0(local_a8,L"other: n");
          local_e8 = local_f0;
          FUN_143a8dcd0(local_d0,local_f0);
          FUN_143a8dc60(local_a8);
          *param_3 = 0;
        }
        FUN_143b580c0(local_78);
        FUN_143b5b280(local_78,local_d0,local_128,param_3);
        local_100 = local_128;
        FUN_143b58640(local_78);
        FUN_143a8dc60(local_d0);
      }
    }
    else {
      *param_3 = 1;
      local_100 = (undefined8 *)0x0;
    }
  }
  else {
    local_100 = (undefined8 *)0x0;
  }
  return local_100;
}



// FUNCTION 143b5aff0 FUN_143b5aff0 body=404 status=ok
// SIG undefined FUN_143b5aff0(void)

char FUN_143b5aff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  double dVar2;
  char local_17;
  int local_14;
  double local_10;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    local_17 = '\x01';
  }
  else {
    local_10 = (double)FUN_143b59a10(param_2,*(undefined4 *)(param_1 + 0x24),param_3,param_4,1);
    if ((*(char *)(param_1 + 0x21) == '\0') ||
       (dVar2 = (double)FUN_143a917b0(local_10), local_10 == dVar2)) {
      if (*(int *)(param_1 + 8) == 1) {
        local_10 = (double)FUN_143b579e0(local_10,*(undefined4 *)(param_1 + 0xc));
      }
      if (*(longlong *)(param_1 + 0x18) == 0) {
        if ((*(int *)(param_1 + 0x10) == -1) || (local_10 == (double)*(int *)(param_1 + 0x10))) {
          local_17 = '\x01';
        }
        else {
          local_17 = '\0';
        }
      }
      else {
        local_17 = '\0';
        for (local_14 = 0;
            iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(*(undefined8 *)(param_1 + 0x18)), local_14 < iVar1;
            local_14 = local_14 + 2) {
          iVar1 = FUN_143b59890(*(undefined8 *)(param_1 + 0x18),local_14);
          if (((double)iVar1 <= local_10) &&
             (iVar1 = FUN_143b59890(*(undefined8 *)(param_1 + 0x18),local_14 + 1),
             local_10 <= (double)iVar1)) {
            local_17 = '\x01';
            break;
          }
        }
      }
    }
    else {
      local_17 = '\0';
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      local_17 = local_17 == '\0';
    }
  }
  return local_17;
}



// FUNCTION 143b5b190 FUN_143b5b190 body=143 status=ok
// SIG undefined FUN_143b5b190(void)

char FUN_143b5b190(longlong param_1,undefined8 param_2)

{
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = '\0';
  local_18 = param_1;
  while ((local_18 != 0 && (local_28 == '\0'))) {
    local_28 = '\x01';
    local_20 = *(longlong *)(local_18 + 8);
    while ((local_20 != 0 && (local_28 != '\0'))) {
      local_28 = FUN_143b5aff0(local_20,param_2);
      local_20 = *(longlong *)(local_20 + 0x28);
    }
    local_18 = *(longlong *)(local_18 + 0x10);
  }
  return local_28;
}



// FUNCTION 143b5b220 FUN_143b5b220 body=90 status=ok
// SIG undefined FUN_143b5b220(void)

bool FUN_143b5b220(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_143b0fc90(param_2,L"other",5);
  if (cVar1 == '\0') {
    bVar3 = true;
  }
  else {
    lVar2 = FUN_143b5bdc0(param_1,param_2);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 143b5b280 FUN_143b5b280 body=2302 status=ok
// SIG undefined FUN_143b5b280(void)

void FUN_143b5b280(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_a0;
  longlong local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_48;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 8) = param_2;
    do {
      iVar2 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
      if (iVar2 <= *(int *)(param_1 + 0x10)) {
        return;
      }
      FUN_143b59fb0(param_1,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        return;
      }
      FUN_143b59140(param_1,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        return;
      }
      switch(*(undefined4 *)(param_1 + 0x40)) {
      case 1:
        if ((*(int *)(*(longlong *)(param_1 + 0x48) + 8) == 1) &&
           (*(int *)(*(longlong *)(param_1 + 0x48) + 0xc) == -1)) {
          uVar4 = FUN_143b5a400(param_1 + 0x18);
          *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0xc) = uVar4;
        }
        else if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) == 0) {
          uVar4 = FUN_143b5a400(param_1 + 0x18);
          *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10) = uVar4;
        }
        else {
          iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),
                                *(undefined4 *)(param_1 + 0x58));
          if (iVar2 == -1) {
            uVar4 = FUN_143b5a400(param_1 + 0x18);
            FUN_143e1cd90(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),uVar4,
                          *(undefined4 *)(param_1 + 0x58));
            uVar4 = FUN_143b5a400(param_1 + 0x18);
            FUN_143e1cd90(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),uVar4,
                          *(undefined4 *)(param_1 + 0x5c));
          }
          else {
            uVar4 = FUN_143b5a400(param_1 + 0x18);
            FUN_143e1cd90(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),uVar4,
                          *(undefined4 *)(param_1 + 0x5c));
            iVar2 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),
                                  *(undefined4 *)(param_1 + 0x58));
            iVar3 = FUN_143b59890(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),
                                  *(undefined4 *)(param_1 + 0x5c));
            if (iVar3 < iVar2) {
              *param_4 = 0x10100;
            }
          }
        }
        break;
      case 2:
        if ((*(longlong *)(param_1 + 0x48) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) == 0)) {
          *param_4 = 0x10100;
        }
        else {
          uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18));
          *(undefined4 *)(param_1 + 0x58) = uVar4;
          FUN_143b58ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),0xffffffff,param_4);
          uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18));
          *(undefined4 *)(param_1 + 0x5c) = uVar4;
          FUN_143b58ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),0xffffffff,param_4);
        }
        break;
      case 10:
        lVar6 = FUN_143a8d310(0x98);
        if (lVar6 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_143b58390(lVar6);
        }
        if (local_48 == 0) {
          *param_4 = 7;
        }
        else {
          FUN_143a8dcd0(local_48 + 8,param_1 + 0x18);
          if (*(longlong *)(param_3 + 8) == 0) {
            *(longlong *)(param_3 + 8) = local_48;
          }
          else {
            local_90 = *(longlong *)(param_3 + 8);
            while ((*(longlong *)(local_90 + 0x30) != 0 &&
                   (cVar1 = FUN_143b0fc90(*(longlong *)(local_90 + 0x30) + 8,L"other",5),
                   cVar1 != '\0'))) {
              local_90 = *(longlong *)(local_90 + 0x30);
            }
            *(undefined8 *)(local_48 + 0x30) = *(undefined8 *)(local_90 + 0x30);
            *(longlong *)(local_90 + 0x30) = local_48;
          }
          lVar6 = FUN_143a8d310(0x18);
          if (lVar6 == 0) {
            local_78 = 0;
          }
          else {
            local_78 = _MallocaArrayHolder<>(lVar6);
          }
          *(undefined8 *)(local_48 + 0x38) = local_78;
          uVar5 = FUN_143b58e40(local_78);
          *(undefined8 *)(param_1 + 0x48) = uVar5;
          *(longlong *)(param_1 + 0x50) = local_48;
        }
        break;
      case 0xb:
        uVar5 = FUN_143b58dd0(*(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        break;
      case 0xc:
        for (local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38);
            *(longlong *)(local_a0 + 0x10) != 0; local_a0 = *(longlong *)(local_a0 + 0x10)) {
        }
        lVar6 = FUN_143a8d310(0x18);
        if (lVar6 == 0) {
          local_70 = 0;
        }
        else {
          local_70 = _MallocaArrayHolder<>(lVar6);
        }
        *(undefined8 *)(local_a0 + 0x10) = local_70;
        lVar6 = *(longlong *)(local_a0 + 0x10);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        uVar5 = FUN_143b58e40(lVar6);
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        break;
      case 0xd:
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8) = 1;
        break;
      case 0xe:
        *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x20) = 1;
        break;
      case 0x11:
        *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x20) = 1;
      case 0xf:
      case 0x10:
      case 0x13:
        lVar6 = FUN_143a8d310(0x20);
        if (lVar6 == 0) {
          local_80 = 0;
        }
        else {
          local_80 = FUN_143e1c860(lVar6,param_4);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18) = local_80;
        FUN_143b58ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),0xffffffff,param_4);
        FUN_143b58ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),0xffffffff,param_4);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10) = 0x7fffffff;
        *(bool *)(*(longlong *)(param_1 + 0x48) + 0x21) = *(int *)(param_1 + 0x40) != 0x13;
        break;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x24) = *(undefined4 *)(param_1 + 0x40);
        break;
      case 0x1a:
        while( true ) {
          FUN_143b59fb0(param_1,param_4);
          cVar1 = FUN_143a8b0e0(*param_4);
          if (((cVar1 != '\0') || (*(int *)(param_1 + 0x40) == 3)) ||
             ((*(int *)(param_1 + 0x40) == 0x1c || (*(int *)(param_1 + 0x40) == 6)))) break;
          if (*(int *)(param_1 + 0x40) == 9) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x90) = 1;
          }
          else {
            FUN_143a8e070(*(longlong *)(param_1 + 0x50) + 0x40,param_1 + 0x18);
          }
        }
        break;
      case 0x1b:
        while( true ) {
          FUN_143b59fb0(param_1,param_4);
          cVar1 = FUN_143a8b0e0(*param_4);
          if ((((cVar1 != '\0') || (*(int *)(param_1 + 0x40) == 3)) ||
              (*(int *)(param_1 + 0x40) == 0x1c)) || (*(int *)(param_1 + 0x40) == 6)) break;
          if (*(int *)(param_1 + 0x40) == 9) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x91) = 1;
          }
          else {
            FUN_143a8e070(*(longlong *)(param_1 + 0x50) + 0x68,param_1 + 0x18);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
      cVar1 = FUN_143a8b0e0(*param_4);
    } while (cVar1 == '\0');
  }
  return;
}



// FUNCTION 143b5bbf0 FUN_143b5bbf0 body=224 status=ok
// SIG undefined FUN_143b5bbf0(void)

void FUN_143b5bbf0(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_38;
  
  FUN_143b68380(0xf,FUN_143b5c0d0);
  lVar2 = FUN_143a8d310(0x30);
  if (lVar2 == 0) {
    local_38 = (undefined8 *)0x0;
  }
  else {
    local_38 = (undefined8 *)FUN_143b36b50(lVar2,100,FUN_143b595d0,param_1);
  }
  DAT_146bc7f30 = local_38;
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 != '\0') {
    if (DAT_146bc7f30 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7f30)(DAT_146bc7f30,1);
    }
    DAT_146bc7f30 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 143b5bcd0 FUN_143b5bcd0 body=193 status=ok
// SIG undefined FUN_143b5bcd0(void)

char FUN_143b5bcd0(undefined8 param_1,double param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  char local_18;
  int local_14;
  
  local_18 = '\0';
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  local_14 = 0;
  do {
    if (3 < local_14) {
LAB_143b5bd57:
      if (local_18 != '\0') {
        uVar2 = FUN_143b59ad0(dVar3,local_14);
        FUN_143b5ac30(param_1,dVar3,local_14,uVar2);
      }
      return local_18;
    }
    iVar1 = *(int *)(&DAT_146832928 + (longlong)local_14 * 4);
    dVar4 = floor(dVar3 * (double)iVar1);
    if (dVar3 * (double)iVar1 == dVar4) {
      local_18 = '\x01';
      goto LAB_143b5bd57;
    }
    local_14 = local_14 + 1;
  } while( true );
}



// FUNCTION 143b5bda0 FUN_143b5bda0 body=23 status=ok
// SIG undefined FUN_143b5bda0(void)

void FUN_143b5bda0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143b5bdc0 FUN_143b5bdc0 body=95 status=ok
// SIG undefined FUN_143b5bdc0(void)

longlong FUN_143b5bdc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_18;
  
  local_18 = *(longlong *)(param_1 + 8);
  while ((local_18 != 0 && (cVar1 = FUN_143a8dd00(local_18 + 8,param_2), cVar1 == '\0'))) {
    local_18 = *(longlong *)(local_18 + 0x30);
  }
  return local_18;
}



// FUNCTION 143b5be20 FUN_143b5be20 body=127 status=ok
// SIG undefined FUN_143b5be20(void)

undefined8 FUN_143b5be20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_143a8d4f0(param_2,1,L"other: n",0xffffffff);
  }
  else {
    FUN_143b5bf10(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,0);
  }
  return param_2;
}



// FUNCTION 143b5beb0 FUN_143b5beb0 body=86 status=ok
// SIG undefined FUN_143b5beb0(void)

undefined8
FUN_143b5beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_R8;
  undefined1 local_40 [64];
  
  uVar1 = FUN_143b57cc0(local_40,param_3,in_R8,param_4,0);
  FUN_143b5be20(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 143b5bf10 FUN_143b5bf10 body=188 status=ok
// SIG undefined FUN_143b5bf10(void)

undefined8 FUN_143b5bf10(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_10;
  
  uVar2 = 0;
  local_10 = param_1;
  if (*(char *)(param_3 + 0x2a) == '\0') {
    for (; local_10 != 0; local_10 = *(longlong *)(local_10 + 0x30)) {
      cVar1 = FUN_143b5b190(*(undefined8 *)(local_10 + 0x38),param_3);
      if (cVar1 != '\0') {
        FUN_143a8d3a0(param_2,local_10 + 8);
        return param_2;
      }
    }
  }
  FUN_143a8d4f0(param_2,1,L"other",5,uVar2);
  return param_2;
}



// FUNCTION 143b5bfd0 FUN_143b5bfd0 body=120 status=ok
// SIG undefined FUN_143b5bfd0(void)

undefined8 FUN_143b5bfd0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_143a8b110(*param_2);
  if ((cVar2 != '\0') &&
     (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 0x68), *(int *)(param_1 + 0x60) < iVar3)) {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    uVar4 = FUN_143b09610(param_1 + 0x68,uVar1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143b5c050 FUN_143b5c050 body=113 status=ok
// SIG undefined FUN_143b5c050(void)

undefined8
FUN_143b5c050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = FUN_143aa4b20(param_2,&local_18,param_3,param_4);
  FUN_143a8d4f0(param_1,1,local_10,local_18);
  return param_1;
}



// FUNCTION 143b5c0d0 FUN_143b5c0d0 body=110 status=ok
// SIG undefined FUN_143b5c0d0(void)

undefined8 FUN_143b5c0d0(void)

{
  FUN_143a9a9f0(&DAT_146bc7f68);
  if (DAT_146bc7f30 != (undefined8 *)0x0) {
    if (DAT_146bc7f30 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7f30)(DAT_146bc7f30,1);
    }
    DAT_146bc7f30 = (undefined8 *)0x0;
  }
  return 1;
}



// FUNCTION 143b5c140 FUN_143b5c140 body=189 status=ok
// SIG undefined FUN_143b5c140(void)

undefined8 *
FUN_143b5c140(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_143b4d7f0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::GregorianCalendar::vftable;
  param_1[0x4d] = 0xc2a63a0d36a80000;
  *(undefined4 *)(param_1 + 0x4e) = 0x231519;
  param_1[0x4f] = param_1[0x4d];
  *(undefined4 *)(param_1 + 0x50) = 0x62e;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)((longlong)param_1 + 0x289) = 0;
  uVar1 = FUN_143b52670();
  FUN_143b55580(param_1,uVar1,param_2);
  return param_1;
}



// FUNCTION 143b5c200 FUN_143b5c200 body=196 status=ok
// SIG undefined FUN_143b5c200(void)

undefined8 * FUN_143b5c200(undefined8 *param_1,longlong param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::GregorianCalendar::vftable;
  param_1[0x4d] = *(undefined8 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x270);
  param_1[0x4f] = *(undefined8 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x280);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x288);
  *(undefined1 *)((longlong)param_1 + 0x289) = *(undefined1 *)(param_2 + 0x289);
  return param_1;
}



// FUNCTION 143b5c2d0 FUN_143b5c2d0 body=207 status=ok
// SIG undefined FUN_143b5c2d0(void)

undefined8 *
FUN_143b5c2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::GregorianCalendar::vftable;
  param_1[0x4d] = 0xc2a63a0d36a80000;
  *(undefined4 *)(param_1 + 0x4e) = 0x231519;
  param_1[0x4f] = param_1[0x4d];
  *(undefined4 *)(param_1 + 0x50) = 0x62e;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)((longlong)param_1 + 0x289) = 0;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b5c3a0 FUN_143b5c3a0 body=207 status=ok
// SIG undefined FUN_143b5c3a0(void)

undefined8 *
FUN_143b5c3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a8b650(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4d970(param_1,param_2,uVar1,param_3);
  *param_1 = icu_53::GregorianCalendar::vftable;
  param_1[0x4d] = 0xc2a63a0d36a80000;
  *(undefined4 *)(param_1 + 0x4e) = 0x231519;
  param_1[0x4f] = param_1[0x4d];
  *(undefined4 *)(param_1 + 0x50) = 0x62e;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)((longlong)param_1 + 0x289) = 0;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b5c470 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::GregorianCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b5c4a0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b5c4e0 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x290);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b5c200(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b5c540 FUN_143b5c540 body=41 status=ok
// SIG undefined FUN_143b5c540(void)

undefined8 FUN_143b5c540(void)

{
  FUN_143a9aa60(&DAT_146bc7f78,FUN_143b5d2b0);
  return DAT_146832940;
}



// FUNCTION 143b5c570 FUN_143b5c570 body=39 status=ok
// SIG undefined FUN_143b5c570(void)

undefined4 FUN_143b5c570(void)

{
  FUN_143a9aa60(&DAT_146bc7f78,FUN_143b5d2b0);
  return DAT_146832948;
}



// FUNCTION 143b5c5a0 FUN_143b5c5a0 body=511 status=ok
// SIG undefined FUN_143b5c5a0(void)

ulonglong FUN_143b5c5a0(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint local_48;
  uint local_38;
  
  if (param_2 == 1) {
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
      if (puVar6 == (undefined8 *)0x0) {
        *param_3 = 7;
        uVar7 = 0;
      }
      else {
        FUN_143b55390(puVar6,1);
        iVar2 = FUN_143b512d0(puVar6,0,param_3);
        uVar8 = FUN_143b52810(puVar6,param_3);
        local_48 = 1;
        uVar4 = local_48;
        local_38 = 0x225c7;
        while (local_48 = uVar4, (int)(local_48 + 1) < (int)local_38) {
          uVar3 = (int)(local_48 + local_38) / 2;
          FUN_143b55270(puVar6,1,uVar3);
          uVar4 = FUN_143b512d0(puVar6,1,param_3);
          if ((uVar4 != uVar3) ||
             (iVar5 = FUN_143b512d0(puVar6,0,param_3), uVar4 = uVar3, iVar5 != iVar2)) {
            FUN_143b55550(puVar6,uVar8,param_3);
            uVar4 = local_48;
            local_38 = uVar3;
          }
        }
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        uVar7 = (ulonglong)local_48;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = FUN_143b51560(param_1,param_2,param_3);
  }
  return uVar7;
}



// FUNCTION 143b5c7a0 FUN_143b5c7a0 body=43 status=ok
// SIG undefined FUN_143b5c7a0(void)

void FUN_143b5c7a0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  return;
}



// FUNCTION 143b5c7d0 FUN_143b5c7d0 body=19 status=ok
// SIG undefined FUN_143b5c7d0(void)

void FUN_143b5c7d0(void)

{
  FUN_143b5c890();
  return;
}



// FUNCTION 143b5c7f0 FUN_143b5c7f0 body=150 status=ok
// SIG undefined FUN_143b5c7f0(void)

void FUN_143b5c7f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  FUN_143b4eb20(param_1,param_2);
  dVar3 = (double)FUN_143b53730(param_1);
  iVar1 = FUN_143b536c0(param_1,0xf);
  iVar2 = FUN_143b536c0(param_1,0x10);
  FUN_143b512a0(dVar3 / 1000.0 + (double)((iVar1 + iVar2) / 1000),0x40f5180000000000);
  return;
}



// FUNCTION 143b5c890 FUN_143b5c890 body=8 status=ok
// SIG undefined FUN_143b5c890(void)

undefined * FUN_143b5c890(void)

{
  return &DAT_146bc7f80;
}



// FUNCTION 143b5c8a0 FUN_143b5c8a0 body=13 status=ok
// SIG undefined FUN_143b5c8a0(void)

char * FUN_143b5c8a0(void)

{
  return "gregorian";
}



// FUNCTION 143b5c8b0 FUN_143b5c8b0 body=74 status=ok
// SIG undefined FUN_143b5c8b0(void)

int FUN_143b5c8b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143b91df0(param_1 + -1,400);
  iVar2 = FUN_143b91df0(param_1 + -1,100);
  return (iVar1 - iVar2) + 2;
}



// FUNCTION 143b5c900 FUN_143b5c900 body=697 status=ok
// SIG undefined FUN_143b5c900(void)

void FUN_143b5c900(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint local_44;
  int local_40;
  short local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_20;
  undefined1 local_c [12];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 < *(int *)(param_1 + 0x270)) {
      local_44 = FUN_143b91e30((double)(param_2 + -0x1a4450) * 4.0 + 1464.0,0x5b5,local_c);
      iVar2 = FUN_143b91df0(local_44 - 1,4);
      local_40 = (param_2 + -0x1a4450) - ((local_44 - 1) * 0x16d + iVar2);
      bVar3 = (local_44 & 3) != 0;
      local_2c = 0;
      if (bVar3) {
        local_20 = 0x3b;
      }
      else {
        local_20 = 0x3c;
      }
      if (local_20 <= local_40) {
        if (bVar3) {
          local_34 = 2;
        }
        else {
          local_34 = 1;
        }
        local_2c = local_34;
      }
      local_38 = ((local_40 + local_2c) * 0xc + 6) / 0x16f;
      if (bVar3) {
        local_3c = *(short *)(&DAT_145d0f940 + (longlong)local_38 * 2);
      }
      else {
        local_3c = *(short *)(&DAT_145d0f958 + (longlong)local_38 * 2);
      }
      local_28 = (local_40 - local_3c) + 1;
      local_40 = local_40 + 1;
    }
    else {
      local_38 = FUN_143b52290(param_1);
      local_28 = FUN_143b52250(param_1);
      local_40 = FUN_143b52270(param_1);
      local_44 = FUN_143b522b0(param_1);
    }
    if ((local_44 == *(uint *)(param_1 + 0x280)) && (*(int *)(param_1 + 0x270) <= param_2)) {
      iVar2 = FUN_143b5c8b0(local_44);
      local_40 = local_40 + iVar2;
    }
    FUN_143b53750(param_1,2,local_38);
    FUN_143b53750(param_1,5,local_28);
    FUN_143b53750(param_1,6,local_40);
    FUN_143b53750(param_1,0x13,local_44);
    bVar3 = (int)local_44 < 1;
    if (bVar3) {
      local_44 = 1 - local_44;
    }
    FUN_143b53750(param_1,0,!bVar3);
    FUN_143b53750(param_1,1,local_44);
  }
  return;
}



// FUNCTION 143b5cbc0 FUN_143b5cbc0 body=371 status=ok
// SIG undefined FUN_143b5cbc0(void)

ulonglong FUN_143b5cbc0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint local_28;
  
  *(undefined1 *)(param_1 + 0x289) = 0;
  local_28 = FUN_143b52b10(param_1,param_2);
  if (((param_2 == 3) && (iVar1 = FUN_143b536c0(param_1,0x13), iVar1 == *(int *)(param_1 + 0x280)))
     && (*(int *)(param_1 + 0x270) <= (int)local_28)) {
    *(undefined1 *)(param_1 + 0x289) = 1;
    uVar3 = FUN_143b52b10(param_1,3);
  }
  else {
    if ((*(char *)(param_1 + 0x288) == '\x01') != *(int *)(param_1 + 0x270) <= (int)local_28) {
      *(undefined1 *)(param_1 + 0x289) = 1;
      local_28 = FUN_143b52b10(param_1,param_2);
    }
    if ((*(char *)(param_1 + 0x288) != '\0') &&
       (iVar1 = FUN_143b536c0(param_1,0x13), iVar1 == *(int *)(param_1 + 0x280))) {
      uVar2 = FUN_143b536c0(param_1,0x13);
      iVar1 = FUN_143b5c8b0(uVar2);
      if (param_2 == 6) {
        local_28 = local_28 - iVar1;
      }
      else if (param_2 == 4) {
        local_28 = local_28 + 0xe;
      }
    }
    uVar3 = (ulonglong)local_28;
  }
  return uVar3;
}



// FUNCTION 143b5cd40 FUN_143b5cd40 body=473 status=ok
// SIG undefined FUN_143b5cd40(void)

int FUN_143b5cd40(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int local_res10;
  int local_res18 [2];
  undefined1 local_res20;
  short local_22;
  int local_20;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  uVar2 = local_res10 >> 0x1f & 3;
  bVar3 = (local_res10 + uVar2 & 3) == uVar2;
  local_20 = FUN_143b91df0(local_res10 + -1,4);
  local_20 = (local_res10 + -1) * 0x16d + 0x1a444f + local_20;
  *(bool *)(param_1 + 0x288) = *(int *)(param_1 + 0x280) <= local_res10;
  if (*(char *)(param_1 + 0x289) != '\0') {
    *(bool *)(param_1 + 0x288) = *(char *)(param_1 + 0x288) == '\0';
  }
  if (*(char *)(param_1 + 0x288) != '\0') {
    if ((bVar3) && ((local_res10 % 100 != 0 || (local_res10 % 400 == 0)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    iVar1 = FUN_143b5c8b0(local_res10);
    local_20 = local_20 + iVar1;
  }
  if (local_res18[0] != 0) {
    if (bVar3) {
      local_22 = *(short *)(&DAT_145d0f958 + (longlong)local_res18[0] * 2);
    }
    else {
      local_22 = *(short *)(&DAT_145d0f940 + (longlong)local_res18[0] * 2);
    }
    local_20 = local_20 + local_22;
  }
  return local_20;
}



// FUNCTION 143b5cf20 FUN_143b5cf20 body=378 status=ok
// SIG undefined FUN_143b5cf20(void)

int FUN_143b5cf20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  
  local_24 = 0x13;
  if (*(int *)((longlong)param_1 + 0xcc) < *(int *)((longlong)param_1 + 0x84)) {
    local_24 = 1;
  }
  if (*(int *)((longlong)param_1 + (longlong)local_24 * 4 + 0x80) <
      *(int *)((longlong)param_1 + 0xc4)) {
    local_24 = 0x11;
  }
  if (local_24 == 1) {
    iVar3 = FUN_143b536e0(param_1,0,1,param_4,0x7b2);
    if (iVar3 == 0) {
      iVar3 = FUN_143b536e0(param_1,1,1);
      iVar3 = 1 - iVar3;
    }
    else {
      iVar3 = FUN_143b536e0(param_1,1,0x7b2);
    }
  }
  else if (local_24 == 0x11) {
    uVar1 = FUN_143b536c0(param_1,3);
    uVar2 = FUN_143b536c0(param_1,0x11);
    iVar3 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,uVar1);
  }
  else if (local_24 == 0x13) {
    iVar3 = FUN_143b536e0(param_1,0x13,0x7b2,param_4,0x7b2);
  }
  else {
    iVar3 = 0x7b2;
  }
  return iVar3;
}



// FUNCTION 143b5d0a0 FUN_143b5d0a0 body=84 status=ok
// SIG undefined FUN_143b5d0a0(void)

void FUN_143b5d0a0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_res10;
  
  iVar1 = FUN_143b536e0(param_1,0,1);
  local_res10 = param_2;
  if (iVar1 == 0) {
    local_res10 = 1 - param_2;
  }
  FUN_143b531f0(param_1,local_res10,param_3);
  return;
}



// FUNCTION 143b5d100 FUN_143b5d100 body=45 status=ok
// SIG undefined FUN_143b5d100(void)

undefined4 FUN_143b5d100(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d0f990 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b5d130 FUN_143b5d130 body=138 status=ok
// SIG undefined FUN_143b5d130(void)

int FUN_143b5d130(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int local_res10;
  int local_res18 [4];
  char local_18;
  
  local_res18[0] = param_3;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  cVar1 = FUN_143b5d420(param_1,local_res10);
  if (cVar1 == '\0') {
    local_18 = (&DAT_145d0f970)[local_res18[0]];
  }
  else {
    local_18 = (&DAT_145d0f980)[local_res18[0]];
  }
  return (int)local_18;
}



// FUNCTION 143b5d1c0 FUN_143b5d1c0 body=61 status=ok
// SIG undefined FUN_143b5d1c0(void)

undefined4 FUN_143b5d1c0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b5d420(param_1,param_2);
  if (cVar1 == '\0') {
    local_18 = 0x16d;
  }
  else {
    local_18 = 0x16e;
  }
  return local_18;
}



// FUNCTION 143b5d200 FUN_143b5d200 body=174 status=ok
// SIG undefined FUN_143b5d200(void)

uint FUN_143b5d200(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  uVar2 = (uint)cVar1;
  if (uVar2 == 0) {
    plVar4 = (longlong *)FUN_143b528b0(param_1);
    cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    uVar2 = 0;
    if (cVar1 != '\0') {
      FUN_143b4eb20(param_1,param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        iVar3 = FUN_143b536c0(param_1,0x10);
        local_18 = (uint)(iVar3 != 0);
        return local_18;
      }
      return 0;
    }
  }
  return uVar2 & 0xffffff00;
}



// FUNCTION 143b5d2b0 FUN_143b5d2b0 body=206 status=ok
// SIG undefined FUN_143b5d2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b5d2b0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined1 local_2a8 [656];
  ulonglong local_18;
  
  local_2b0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_2b8[0] = 0;
  FUN_143b5c140(local_2a8,local_2b8);
  cVar1 = FUN_143a8b110(local_2b8[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_2a8,uVar2,local_2b8);
    FUN_143b4e270(local_2a8,1,0xffffffb0,local_2b8);
    DAT_146832940 = FUN_143b52810(local_2a8,local_2b8);
    DAT_146832948 = FUN_143b512d0(local_2a8,1,local_2b8);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_2a8);
  return;
}



// FUNCTION 143b5d380 FUN_143b5d380 body=63 status=ok
// SIG undefined FUN_143b5d380(void)

undefined4 FUN_143b5d380(undefined8 param_1)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b539a0(param_1,0);
  if (cVar1 == '\0') {
    local_18 = 1;
  }
  else {
    local_18 = FUN_143b536c0(param_1,0);
  }
  return local_18;
}



// FUNCTION 143b5d3c0 FUN_143b5d3c0 body=88 status=ok
// SIG undefined FUN_143b5d3c0(void)

undefined1 FUN_143b5d3c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143b537f0(param_1,param_2);
  if ((cVar1 == '\0') || (*(double *)(param_1 + 0x268) != *(double *)(param_2 + 0x268))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b5d420 FUN_143b5d420 body=149 status=ok
// SIG undefined FUN_143b5d420(void)

bool FUN_143b5d420(longlong param_1,uint param_2)

{
  bool local_10;
  
  if ((int)param_2 < *(int *)(param_1 + 0x280)) {
    local_10 = (param_2 & 3) == 0;
  }
  else if (((param_2 & 3) == 0) && (((int)param_2 % 100 != 0 || ((int)param_2 % 400 == 0)))) {
    local_10 = true;
  }
  else {
    local_10 = false;
  }
  return local_10;
}



// FUNCTION 143b5d4c0 FUN_143b5d4c0 body=65 status=ok
// SIG undefined FUN_143b5d4c0(void)

void FUN_143b5d4c0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b536c0(param_1,0x13);
  (**(code **)(*param_1 + 0x108))(param_1,uVar1,param_2);
  return;
}



// FUNCTION 143b5d510 FUN_143b5d510 body=91 status=ok
// SIG undefined FUN_143b5d510(void)

int FUN_143b5d510(undefined8 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char local_18;
  
  cVar1 = FUN_143b5d420(param_1,param_3);
  if (cVar1 == '\0') {
    local_18 = (&DAT_145d0f970)[param_2];
  }
  else {
    local_18 = (&DAT_145d0f980)[param_2];
  }
  return (int)local_18;
}



// FUNCTION 143b5d570 FUN_143b5d570 body=1807 status=ok
// SIG undefined FUN_143b5d570(void)

void FUN_143b5d570(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_84;
  int local_80;
  int local_70;
  double local_68;
  int local_60;
  double local_50;
  
  if ((param_3 != 0) && (cVar2 = FUN_143a8b0e0(*param_4), cVar2 == '\0')) {
    bVar1 = false;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0.0;
    iVar4 = FUN_143b512d0(param_1,0x13,param_4);
    if ((iVar4 == (int)param_1[0x50]) && ((3 < param_2 && (param_2 < 6)))) {
      uVar5 = FUN_143b536c0(param_1,2);
      iVar4 = (**(code **)(*param_1 + 0x198))(param_1,uVar5);
      local_68 = (double)FUN_143b53730(param_1);
      if (local_68 < (double)param_1[0x4d]) {
        local_60 = 0;
      }
      else {
        local_60 = 10;
      }
      local_70 = FUN_143b536c0(param_1,5);
      local_70 = local_70 - local_60;
      local_68 = local_68 - (double)(local_70 + -1) * 86400000.0;
      if ((local_68 < (double)param_1[0x4d]) &&
         (local_80 = iVar4 + -10, (double)param_1[0x4d] <= local_68 + (double)local_80 * 86400000.0)
         ) {
        bVar1 = true;
      }
    }
    if (param_2 == 3) {
      local_a0 = FUN_143b512d0(param_1,3,param_4);
      iVar4 = FUN_143b512d0(param_1,0x11,param_4);
      local_94 = FUN_143b536c0(param_1,6);
      iVar6 = FUN_143b536c0(param_1,2);
      if (iVar6 == 0) {
        if (0x33 < local_a0) {
          iVar6 = (**(code **)(*param_1 + 0x110))(param_1,iVar4);
          local_94 = local_94 + iVar6;
        }
      }
      else if (local_a0 == 1) {
        iVar6 = (**(code **)(*param_1 + 0x110))(param_1,iVar4 + -1);
        local_94 = local_94 - iVar6;
      }
      local_a0 = local_a0 + param_3;
      if ((local_a0 < 1) || (0x34 < local_a0)) {
        local_8c = (**(code **)(*param_1 + 0x110))(param_1,iVar4);
        iVar6 = FUN_143b536c0(param_1,7);
        iVar7 = FUN_143b52200(param_1);
        local_98 = (((local_8c - local_94) + iVar6) - iVar7) % 7;
        if (local_98 < 0) {
          local_98 = local_98 + 7;
        }
        bVar3 = FUN_143b52620(param_1);
        if ((int)(uint)bVar3 <= 6 - local_98) {
          local_8c = local_8c + -7;
        }
        iVar6 = FUN_143b562e0(param_1,local_8c,local_98 + 1);
        local_a0 = (local_a0 + -1 + iVar6) % iVar6 + 1;
      }
      FUN_143b55270(param_1,3,local_a0);
      FUN_143b55270(param_1,0x11,iVar4);
    }
    else if (param_2 == 4) {
      if (bVar1) {
        local_90 = FUN_143b536c0(param_1,7);
        iVar4 = FUN_143b52200(param_1);
        local_90 = local_90 - iVar4;
        if (local_90 < 0) {
          local_90 = local_90 + 7;
        }
        local_9c = ((local_90 - local_70) + 1) % 7;
        if (local_9c < 0) {
          local_9c = local_9c + 7;
        }
        bVar3 = FUN_143b52620(param_1);
        if (7 - local_9c < (int)(uint)bVar3) {
          local_84 = 8 - local_9c;
        }
        else {
          local_84 = 1 - local_9c;
        }
        iVar4 = ((local_80 + 7) - ((local_80 - local_70) + local_90) % 7) - local_84;
        local_a4 = ((local_70 + param_3 * 7) - local_84) % iVar4;
        if (local_a4 < 0) {
          local_a4 = local_a4 + iVar4;
        }
        local_a4 = local_a4 + local_84;
        if (local_a4 < 1) {
          local_a4 = 1;
        }
        if (local_80 < local_a4) {
          local_a4 = local_80;
        }
        FUN_143b55580(param_1,local_68 + (double)(local_a4 + -1) * 86400000.0,param_4);
      }
      else {
        FUN_143b54400(param_1,4,param_3,param_4);
      }
    }
    else if (param_2 == 5) {
      if (bVar1) {
        dVar8 = (double)FUN_143b53730(param_1);
        local_50 = (double)FUN_143a917d0((dVar8 - local_68) + (double)param_3 * 86400000.0,
                                         (double)local_80 * 86400000.0);
        if (local_50 < 0.0) {
          local_50 = local_50 + (double)local_80 * 86400000.0;
        }
        FUN_143b55580(param_1,local_68 + local_50,param_4);
      }
      else {
        FUN_143b54400(param_1,5,param_3,param_4);
      }
    }
    else {
      FUN_143b54400(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 143b5dc90 FUN_143b5dc90 body=40 status=ok
// SIG undefined FUN_143b5dc90(void)

void * FUN_143b5dc90(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x20);
  return param_1;
}



// FUNCTION 143b5dcc0 FUN_143b5dcc0 body=108 status=ok
// SIG undefined FUN_143b5dcc0(void)

undefined8 *
FUN_143b5dcc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::RegexPattern::vftable;
  FUN_143a8ac30(param_1 + 5);
  FUN_143b5e740(param_1);
  FUN_143b5de10(param_1,param_2);
  return param_1;
}



// FUNCTION 143b5dd30 CMFCFilterChunkValueImpl body=83 status=ok
// SIG undefined CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl * this)

/* Library Function - Single Match
    public: __cdecl CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

CMFCFilterChunkValueImpl * __thiscall
CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl *this)

{
  GetTestRenderTransformPivot(this);
  *(undefined ***)this = icu_53::RegexPattern::vftable;
  FUN_143a8ac30(this + 0x28);
  FUN_143b5e740(this);
  return this;
}



// FUNCTION 143b5dd90 ~_Locimp body=78 status=ok
// SIG void ~_Locimp(_Locimp * this)

/* Library Function - Single Match
    protected: virtual __cdecl std::locale::_Locimp::~_Locimp(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug, Visual Studio 2010 Release */

void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this)

{
  *(undefined ***)this = icu_53::RegexPattern::vftable;
  FUN_143b5f060(this);
  FUN_143a8dc60(this + 0x28);
  RtAudioError::~RtAudioError(this);
  return;
}



// FUNCTION 143b5dde0 FUN_143b5dde0 body=43 status=ok
// SIG undefined FUN_143b5dde0(void)

void FUN_143b5dde0(void *param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2,0x20);
  return;
}



// FUNCTION 143b5de10 FUN_143b5de10 body=1403 status=ok
// SIG undefined FUN_143b5de10(void)

longlong FUN_143b5de10(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  int local_88;
  undefined4 local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    FUN_143b5f060(param_1);
    FUN_143b5e740(param_1);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar3 = FUN_143b07330(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),0,1,
                            param_1 + 0x60);
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    else {
      local_48 = FUN_143a8d310(0x28);
      if (local_48 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_143a8d3a0(local_48,*(undefined8 *)(param_2 + 0x10));
      }
      local_38 = local_60;
      *(undefined8 *)(param_1 + 0x10) = local_60;
      local_84 = 0;
      uVar3 = FUN_143b07bf0(0,*(undefined8 *)(param_1 + 0x10),&local_84);
      *(undefined8 *)(param_1 + 8) = uVar3;
      cVar2 = FUN_143a8b0e0(local_84);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x60) = 7;
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    FUN_143a8dcd0(param_1 + 0x28,param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    FUN_143b12150(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xa0));
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    FUN_143b5dde0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0xb0));
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    FUN_143e1d040(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),param_1 + 0x60);
    FUN_143e1cac0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x70),param_1 + 0x60);
    local_80 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(*(undefined8 *)(param_2 + 0x50));
    local_40 = (ulonglong)local_80;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_40;
    uVar3 = SUB168(ZEXT816(0x20) * auVar1,0);
    if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    local_78 = FUN_143a8d310(uVar3);
    if (local_78 == 0) {
      local_70 = 0;
    }
    else {
      _vector_constructor_iterator_(local_78,0x20,local_40,FUN_143b5dc90);
      local_70 = local_78;
    }
    local_20 = local_70;
    *(longlong *)(param_1 + 0x58) = local_70;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 7;
    }
    else {
      local_88 = 1;
      while( true ) {
        if (local_80 <= local_88) {
          return param_1;
        }
        cVar2 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x60));
        if (cVar2 != '\0') {
          return param_1;
        }
        local_30 = FUN_143b09610(*(undefined8 *)(param_2 + 0x50),local_88);
        local_58 = FUN_143a8d310(0x58);
        if (local_58 == 0) {
          local_50 = 0;
        }
        else {
          local_50 = FUN_143b11bb0(local_58,local_30);
        }
        local_28 = local_50;
        local_68 = local_50;
        if (local_50 == 0) break;
        FUN_143b09430(*(undefined8 *)(param_1 + 0x50),local_50,param_1 + 0x60);
        FUN_143b5dde0((longlong)local_88 * 0x20 + *(longlong *)(param_1 + 0x58),
                      (longlong)local_88 * 0x20 + *(longlong *)(param_2 + 0x58));
        local_88 = local_88 + 1;
      }
      *(undefined4 *)(param_1 + 0x60) = 7;
    }
  }
  return param_1;
}



// FUNCTION 143b5e390 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl CFileFind::`scalar deleting destructor'(unsigned int)
   __ptr64
    public: virtual void * __ptr64 __cdecl CMFCFilterChunkValueImpl::`scalar deleting
   destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl CSmartDockingManager::`scalar deleting
   destructor'(unsigned int) __ptr64
    protected: virtual void * __ptr64 __cdecl std::locale::_Locimp::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug, Visual Studio 2010 Release */

_Locimp * FID_conflict__scalar_deleting_destructor_(_Locimp *param_1,uint param_2)

{
  std::locale::_Locimp::~_Locimp(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e3d0 FUN_143b5e3d0 body=102 status=ok
// SIG undefined FUN_143b5e3d0(void)

undefined8 FUN_143b5e3d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_30;
  
  lVar1 = FUN_143a8d310(0xc0);
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143b5dcc0(lVar1,param_1);
  }
  return local_30;
}



// FUNCTION 143b5e440 FUN_143b5e440 body=600 status=ok
// SIG undefined FUN_143b5e440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b5e440(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  CMFCFilterChunkValueImpl *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined8 local_218;
  undefined1 local_208 [496];
  ulonglong local_18;
  
  local_218 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_228 = 0x3bf;
    if ((param_2 & 0xfffffc40) == 0) {
      if ((param_2 & 0x80) == 0) {
        local_258 = (CMFCFilterChunkValueImpl *)FUN_143a8d310(0xc0);
        if (local_258 == (CMFCFilterChunkValueImpl *)0x0) {
          local_260 = (undefined8 *)0x0;
        }
        else {
          local_260 = (undefined8 *)CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(local_258);
        }
        local_250 = local_260;
        local_278 = local_260;
        if (local_260 == (undefined8 *)0x0) {
          *param_4 = 7;
          local_230 = (undefined8 *)0x0;
        }
        else {
          cVar1 = FUN_143a8b0e0(*(undefined4 *)(local_260 + 0xc));
          if (cVar1 == '\0') {
            *(uint *)(local_278 + 3) = param_2;
            FUN_143bc3c30(local_208,local_278,param_4);
            FUN_143bc40a0(local_208,param_1,param_3,param_4);
            cVar1 = FUN_143a8b0e0(*param_4);
            if (cVar1 != '\0') {
              local_248 = local_278;
              local_268 = local_278;
              if (local_278 == (undefined8 *)0x0) {
                local_240 = 0;
              }
              else {
                local_240 = (**(code **)*local_278)(local_278,1);
              }
              local_278 = (undefined8 *)0x0;
            }
            local_230 = local_278;
            FUN_143bc3dc0(local_208);
          }
          else {
            *param_4 = *(undefined4 *)(local_278 + 0xc);
            local_238 = local_278;
            local_270 = local_278;
            if (local_278 != (undefined8 *)0x0) {
              (**(code **)*local_278)(local_278,1);
            }
            local_230 = (undefined8 *)0x0;
          }
        }
      }
      else {
        *param_4 = 0x10305;
        local_230 = (undefined8 *)0x0;
      }
    }
    else {
      *param_4 = 0x1030b;
      local_230 = (undefined8 *)0x0;
    }
  }
  else {
    local_230 = (undefined8 *)0x0;
  }
  return local_230;
}



// FUNCTION 143b5e6a0 FUN_143b5e6a0 body=90 status=ok
// SIG undefined FUN_143b5e6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b5e6a0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143b5e440(param_1,param_2,local_68,param_3);
  return;
}



// FUNCTION 143b5e700 FUN_143b5e700 body=14 status=ok
// SIG undefined FUN_143b5e700(void)

undefined4 FUN_143b5e700(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 143b5e710 FUN_143b5e710 body=19 status=ok
// SIG undefined FUN_143b5e710(void)

void FUN_143b5e710(void)

{
  FUN_143b5e730();
  return;
}



// FUNCTION 143b5e730 FUN_143b5e730 body=8 status=ok
// SIG undefined FUN_143b5e730(void)

undefined * FUN_143b5e730(void)

{
  return &DAT_146bc7f81;
}



// FUNCTION 143b5e740 FUN_143b5e740 body=1010 status=ok
// SIG undefined FUN_143b5e740(void)

void FUN_143b5e740(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_143a90910(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar2 = FUN_143a8d310(0x20);
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_143e1ce70(lVar2,param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x20) = local_78;
  lVar2 = FUN_143a8d310(0x20);
  if (lVar2 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_143e1c860(lVar2,param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x70) = local_68;
  lVar2 = FUN_143a8d310(0x28);
  if (lVar2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_143b08f70(lVar2,param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x50) = local_58;
  lVar2 = FUN_143a8d310(0x58);
  if (lVar2 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_143b11ea0(lVar2);
  }
  *(undefined8 *)(param_1 + 0xa0) = local_88;
  lVar2 = FUN_143a8d310(0x20);
  if (lVar2 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_143b5dc90(lVar2);
  }
  *(undefined8 *)(param_1 + 0xb0) = local_70;
  cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x60));
  if (cVar1 == '\0') {
    if ((((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
        (*(longlong *)(param_1 + 0x50) == 0)) ||
       ((*(longlong *)(param_1 + 0xa0) == 0 || (*(longlong *)(param_1 + 0xb0) == 0)))) {
      *(undefined4 *)(param_1 + 0x60) = 7;
    }
    else {
      FUN_143b093b0(*(undefined8 *)(param_1 + 0x50),0,param_1 + 0x60);
    }
  }
  return;
}



// FUNCTION 143b5eb40 FUN_143b5eb40 body=204 status=ok
// SIG undefined FUN_143b5eb40(void)

longlong FUN_143b5eb40(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_28;
  
  uVar3 = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 0x60));
    if (cVar1 == '\0') {
      lVar2 = FUN_143a8d310(0x148);
      if (lVar2 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143baf880(lVar2,param_1,param_3,param_4,uVar3);
      }
      if (local_28 == 0) {
        *param_2 = 7;
        local_28 = 0;
      }
    }
    else {
      *param_2 = *(undefined4 *)(param_1 + 0x60);
      local_28 = 0;
    }
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143b5ec10 FUN_143b5ec10 body=105 status=ok
// SIG undefined FUN_143b5ec10(void)

longlong * FUN_143b5ec10(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,param_3);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = *param_3;
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
  }
  return plVar1;
}



// FUNCTION 143b5ec80 FUN_143b5ec80 body=417 status=ok
// SIG undefined FUN_143b5ec80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b5ec80(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      FUN_143a8ac30(param_2);
    }
    else {
      local_64 = 0;
      local_58 = FUN_143b07900(*(undefined8 *)(param_1 + 8));
      local_70 = &local_64;
      local_78 = 0;
      local_60 = FUN_143b076d0(*(undefined8 *)(param_1 + 8),0,local_58,0);
      FUN_143a8ac30(local_40);
      local_64 = 0;
      local_50 = FUN_143a8fd90(local_40,local_60);
      local_70 = &local_64;
      local_78 = local_60;
      FUN_143b076d0(*(undefined8 *)(param_1 + 8),0,local_58,local_50);
      FUN_143a90820(local_40,local_60);
      FUN_143a8d3a0(param_2,local_40);
      local_68 = local_68 | 1;
      FUN_143a8dc60(local_40);
    }
  }
  else {
    FUN_143a8d3a0(param_2,*(undefined8 *)(param_1 + 0x10));
  }
  return param_2;
}



// FUNCTION 143b5ee30 FUN_143b5ee30 body=100 status=ok
// SIG undefined FUN_143b5ee30(void)

undefined8 FUN_143b5ee30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    *param_2 = 0;
    if (*(longlong *)(param_1 + 8) == 0) {
      FUN_143bcf760(param_2);
      uVar2 = *(undefined8 *)(DAT_146bc8478 + 0x5d8);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b5eea0 FUN_143b5eea0 body=223 status=ok
// SIG undefined FUN_143b5eea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b5eea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168 [316];
  undefined4 local_2c;
  ulonglong local_18;
  
  local_170 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143baf880(local_168,param_1);
    local_178 = 0;
    cVar1 = FUN_143a8b110(local_2c);
    if (cVar1 != '\0') {
      local_188 = param_5;
      local_178 = FUN_143bc2480(local_168,param_2,param_3,param_4);
    }
    local_174 = local_178;
    FUN_143baf950(local_168);
  }
  else {
    local_174 = 0;
  }
  return local_174;
}



// FUNCTION 143b5ef80 FUN_143b5ef80 body=223 status=ok
// SIG undefined FUN_143b5ef80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b5ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168 [316];
  undefined4 local_2c;
  ulonglong local_18;
  
  local_170 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143baf880(local_168,param_1);
    local_178 = 0;
    cVar1 = FUN_143a8b110(local_2c);
    if (cVar1 != '\0') {
      local_188 = param_5;
      local_178 = FUN_143bc26f0(local_168,param_2,param_3,param_4);
    }
    local_174 = local_178;
    FUN_143baf950(local_168);
  }
  else {
    local_174 = 0;
  }
  return local_174;
}



// FUNCTION 143b5f060 FUN_143b5f060 body=822 status=ok
// SIG undefined FUN_143b5f060(void)

void FUN_143b5f060(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int local_b8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  for (local_b8 = 1;
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x50)), local_b8 < iVar1; local_b8 = local_b8 + 1
      ) {
    puVar2 = (undefined8 *)FUN_143b09610(*(undefined8 *)(param_1 + 0x50),local_b8);
    if ((puVar2 != (undefined8 *)0x0) && (puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_143a8d330(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_143a8d330(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_143b07390(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143b5f3a0 FUN_143b5f3a0 body=40 status=ok
// SIG undefined FUN_143b5f3a0(void)

bool FUN_143b5f3a0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) == 0;
}



// FUNCTION 143b5f3d0 FUN_143b5f3d0 body=526 status=ok
// SIG undefined FUN_143b5f3d0(void)

longlong FUN_143b5f3d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined4 local_60 [2];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_143aa5b10("icudt53l-coll",param_1,param_3);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_68,uVar2);
    uVar2 = FUN_143a8b510(local_68);
    uVar2 = FUN_143aa37c0(uVar2,"collations",0,param_3);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_70,uVar2);
    uVar2 = FUN_143a8b510(local_70);
    uVar2 = FUN_143aa3350(uVar2,param_2,0,param_3);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_78,uVar2);
    uVar2 = FUN_143a8b510(local_78);
    local_40 = FUN_143aa5130(uVar2,"Sequence",local_60,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      local_48 = FUN_143a8d310(0x28);
      if (local_48 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_143a8db50(local_48,local_40,local_60[0]);
      }
      local_20 = local_50;
      local_58 = local_50;
      if (local_50 == 0) {
        *param_3 = 7;
        local_38 = 0;
        FUN_143b36c80(local_78);
        FUN_143b36c80(local_70);
        FUN_143b36c80(local_68);
        local_30 = local_38;
      }
      else {
        local_28 = local_50;
        FUN_143b36c80(local_78);
        FUN_143b36c80(local_70);
        FUN_143b36c80(local_68);
        local_30 = local_28;
      }
    }
    else {
      local_30 = 0;
      FUN_143b36c80(local_78);
      FUN_143b36c80(local_70);
      FUN_143b36c80(local_68);
    }
  }
  else {
    local_30 = 0;
  }
  return local_30;
}



// FUNCTION 143b5f5e0 FUN_143b5f5e0 body=3755 status=ok
// SIG undefined FUN_143b5f5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b5fad9) */

longlong FUN_143b5f5e0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined1 auStack_4f8 [32];
  int *local_4d8;
  char local_4c8;
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [8];
  CHeapPtrBase<wchar_t,ATL::CComAllocator> local_4b0 [8];
  undefined1 local_4a8 [8];
  undefined1 local_4a0 [8];
  undefined4 local_498;
  int local_494;
  longlong local_490;
  undefined4 local_488 [2];
  char *local_480;
  int local_478;
  int local_474;
  undefined1 local_470 [8];
  undefined4 local_468 [2];
  char *local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined1 local_450 [8];
  longlong local_448;
  undefined8 local_440;
  undefined8 local_438;
  char *local_430;
  ulonglong local_428;
  undefined1 local_420 [8];
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  longlong local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  undefined1 local_338 [384];
  undefined1 local_1b8 [384];
  char local_38 [16];
  char local_28 [16];
  ulonglong local_18;
  
  local_348 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  local_490 = FUN_143b68090(param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_460 = (char *)FUN_143a8c200(param_1);
    if ((*local_460 == '\0') ||
       (iVar2 = _guard_xfg_dispatch_icall_nop(local_460,"root"), iVar2 == 0)) {
      uVar3 = FUN_143a8c210();
      FUN_143a8adb0(param_2,uVar3);
    }
    else {
      uVar3 = FUN_143aa5b10("icudt53l-coll",local_460,param_3);
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_4b8,uVar3)
      ;
      if (*param_3 == 2) {
        *param_3 = -0x7f;
        uVar3 = FUN_143a8c210();
        FUN_143a8adb0(param_2,uVar3);
        local_400 = local_490;
        FUN_143b36c80(local_4b8);
        local_490 = local_400;
      }
      else {
        uVar3 = FUN_143a8b510(local_4b8);
        local_430 = (char *)FUN_143aa4780(uVar3,0,param_3);
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 == '\0') {
          local_4d8 = (int *)0x0;
          local_418 = FUN_143a8a690(local_338,local_430,0,0);
          local_390 = local_418;
          FUN_143a8adb0(param_2,local_418);
          FUN_143a8acf0(local_338);
          uVar3 = FUN_143a8b510(local_4b8);
          uVar3 = FUN_143aa37c0(uVar3,"collations",0,param_3);
          UE4Tuple_Private::
          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                    (local_4c0,uVar3);
          if (*param_3 == 2) {
            *param_3 = -0x7f;
            local_3f0 = local_490;
            FUN_143b36c80(local_4c0);
            FUN_143b36c80(local_4b8);
            local_490 = local_3f0;
          }
          else {
            cVar1 = FUN_143a8b0e0(*param_3);
            if (cVar1 == '\0') {
              local_4d8 = param_3;
              local_494 = FUN_143a8b730(param_1,"collation",local_38,0xf);
              cVar1 = FUN_143a8b0e0(*param_3);
              if (cVar1 == '\0') {
                local_428 = (ulonglong)local_494;
                if (0xf < local_428) {
                    /* WARNING: Subroutine does not return */
                  __report_rangecheckfailure();
                }
                local_38[local_428] = '\0';
                local_498 = 0;
                uVar3 = FUN_143a8b510(local_4c0);
                uVar3 = FUN_143aa3350(uVar3,"default",0,&local_498);
                UE4Tuple_Private::
                TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
                TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                          (local_450,uVar3);
                uVar3 = FUN_143a8b510(local_450);
                local_380 = FUN_143aa5430(uVar3,&local_474,&local_498);
                cVar1 = FUN_143a8b110(local_498);
                if ((cVar1 == '\0') || (0xf < local_474)) {
                  _guard_xfg_dispatch_icall_nop(local_28,"standard");
                }
                else {
                  FUN_143ab5770(local_380,local_28,local_474 + 1);
                }
                FUN_143b36c80(local_450);
                if ((local_494 == 0) ||
                   (iVar2 = _guard_xfg_dispatch_icall_nop(local_38,"default"), iVar2 == 0)) {
                  _guard_xfg_dispatch_icall_nop(local_38,local_28);
                }
                local_4c8 = '\0';
                uVar3 = FUN_143a8b510(local_4c0);
                uVar3 = FUN_143aa3350(uVar3,local_38,0,param_3);
                UE4Tuple_Private::
                TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
                TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                          (local_4b0,uVar3);
                if (((*param_3 == 2) && (6 < local_494)) &&
                   (iVar2 = strncmp(local_38,"search",6), iVar2 == 0)) {
                  local_4c8 = '\x01';
                  local_438 = 6;
                  local_38[6] = 0;
                  *param_3 = 0;
                  uVar3 = FUN_143a8b510(local_4c0);
                  pwVar4 = (wchar_t *)FUN_143aa3350(uVar3,local_38,0,param_3);
                  ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_4b0,pwVar4);
                }
                if ((*param_3 == 2) &&
                   (iVar2 = _guard_xfg_dispatch_icall_nop(local_38,local_28), iVar2 != 0)) {
                  local_4c8 = '\x01';
                  _guard_xfg_dispatch_icall_nop(local_38,local_28);
                  *param_3 = 0;
                  uVar3 = FUN_143a8b510(local_4c0);
                  pwVar4 = (wchar_t *)FUN_143aa3350(uVar3,local_38,0,param_3);
                  ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_4b0,pwVar4);
                }
                if ((*param_3 == 2) &&
                   (iVar2 = _guard_xfg_dispatch_icall_nop(local_38,"standard"), iVar2 != 0)) {
                  local_4c8 = '\x01';
                  _guard_xfg_dispatch_icall_nop(local_38,"standard");
                  *param_3 = 0;
                  uVar3 = FUN_143a8b510(local_4c0);
                  pwVar4 = (wchar_t *)FUN_143aa3350(uVar3,local_38,0,param_3);
                  ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_4b0,pwVar4);
                }
                if (*param_3 == 2) {
                  *param_3 = -0x7f;
                  local_3d0 = local_490;
                  FUN_143b36c80(local_4b0);
                  FUN_143b36c80(local_4c0);
                  FUN_143b36c80(local_4b8);
                  local_490 = local_3d0;
                }
                else {
                  cVar1 = FUN_143a8b0e0(*param_3);
                  if (cVar1 == '\0') {
                    local_448 = FUN_143a8d310(0x208);
                    if (local_448 == 0) {
                      local_440 = 0;
                    }
                    else {
                      local_440 = FUN_143bd0ca0(local_448,*(undefined8 *)(local_490 + 0x18));
                    }
                    local_3c0 = local_440;
                    UE4Tuple_Private::
                    TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
                    TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                              (local_4a8,local_440);
                    cVar1 = FUN_143b1fd90(local_4a8);
                    if (cVar1 == '\0') {
                      uVar3 = FUN_143a8b510(local_4a8);
                      cVar1 = FUN_143b5f3a0(uVar3);
                      if (cVar1 == '\0') {
                        uVar3 = FUN_143a8b510(local_4b0);
                        local_480 = (char *)FUN_143aa4780(uVar3,0,param_3);
                        cVar1 = FUN_143a8b0e0(*param_3);
                        if (cVar1 != '\0') {
                          local_3b0 = 0;
                          FUN_143b36bb0(local_4a8);
                          FUN_143b36c80(local_4b0);
                          FUN_143b36c80(local_4c0);
                          FUN_143b36c80(local_4b8);
                          return local_3b0;
                        }
                        if (((*local_480 == '\0') ||
                            (iVar2 = _guard_xfg_dispatch_icall_nop(local_480,"root"), iVar2 == 0))
                           && (iVar2 = _guard_xfg_dispatch_icall_nop(local_38,"standard"),
                              iVar2 == 0)) {
                          if (local_4c8 != '\0') {
                            *param_3 = -0x7f;
                          }
                          local_350 = local_490;
                          FUN_143b36bb0(local_4a8);
                          FUN_143b36c80(local_4b0);
                          FUN_143b36c80(local_4c0);
                          FUN_143b36c80(local_4b8);
                          return local_350;
                        }
                        local_4d8 = (int *)0x0;
                        local_410 = FUN_143a8a690(local_1b8,local_480,0,0);
                        local_3a0 = local_410;
                        lVar5 = FUN_143a8b510(local_4a8);
                        FUN_143a8adb0(lVar5 + 0x48,local_410);
                        FUN_143a8acf0(local_1b8);
                        uVar3 = FUN_143a8b510(local_4b0);
                        uVar3 = FUN_143aa37c0(uVar3,"%%CollationBin",0,param_3);
                        UE4Tuple_Private::
                        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                        ::
                        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                                  (local_4a0,uVar3);
                        uVar3 = FUN_143a8b510(local_4a0);
                        local_3f8 = FUN_143aa3040(uVar3,local_468,param_3);
                        cVar1 = FUN_143a8b0e0(*param_3);
                        if (cVar1 != '\0') {
                          local_408 = 0;
                          FUN_143b36c80(local_4a0);
                          FUN_143b36bb0(local_4a8);
                          FUN_143b36c80(local_4b0);
                          FUN_143b36c80(local_4c0);
                          FUN_143b36c80(local_4b8);
                          return local_408;
                        }
                        uVar3 = FUN_143a8b510(local_4a8);
                        local_4d8 = param_3;
                        FUN_143bcf9e0(local_490,local_3f8,local_468[0],uVar3);
                        cVar1 = FUN_143a8b0e0(*param_3);
                        if (cVar1 != '\0') {
                          local_3e8 = 0;
                          FUN_143b36c80(local_4a0);
                          FUN_143b36bb0(local_4a8);
                          FUN_143b36c80(local_4b0);
                          FUN_143b36c80(local_4c0);
                          FUN_143b36c80(local_4b8);
                          return local_3e8;
                        }
                        local_458 = 0;
                        uVar3 = FUN_143a8b510(local_4b0);
                        local_3d8 = FUN_143aa5130(uVar3,"Sequence",&local_454,&local_458);
                        cVar1 = FUN_143a8b110(*param_3);
                        if (cVar1 != '\0') {
                          lVar5 = FUN_143a8b510(local_4a8);
                          FUN_143a90d80(lVar5 + 0x20,1,local_3d8,local_454);
                        }
                        iVar2 = _guard_xfg_dispatch_icall_nop(local_38,local_28);
                        if (iVar2 != 0) {
                          FUN_143a8cfb0(param_2,"collation",local_38,param_3);
                          cVar1 = FUN_143a8b0e0(*param_3);
                          if (cVar1 != '\0') {
                            local_3c8 = 0;
                            FUN_143b36c80(local_4a0);
                            FUN_143b36bb0(local_4a8);
                            FUN_143b36c80(local_4b0);
                            FUN_143b36c80(local_4c0);
                            FUN_143b36c80(local_4b8);
                            return local_3c8;
                          }
                        }
                        iVar2 = _guard_xfg_dispatch_icall_nop(local_480,local_430);
                        if (iVar2 != 0) {
                          uVar3 = FUN_143aa5b10("icudt53l-coll",local_480,param_3);
                          UE4Tuple_Private::
                          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                          ::
                          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                                    (local_470,uVar3);
                          cVar1 = FUN_143a8b0e0(*param_3);
                          if (cVar1 != '\0') {
                            local_3b8 = 0;
                            FUN_143b36c80(local_470);
                            FUN_143b36c80(local_4a0);
                            FUN_143b36bb0(local_4a8);
                            FUN_143b36c80(local_4b0);
                            FUN_143b36c80(local_4c0);
                            FUN_143b36c80(local_4b8);
                            return local_3b8;
                          }
                          local_488[0] = 0;
                          uVar3 = FUN_143a8b510(local_470);
                          uVar3 = FUN_143aa3350(uVar3,"collations/default",0,local_488);
                          UE4Tuple_Private::
                          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                          ::
                          TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                                    (local_420,uVar3);
                          uVar3 = FUN_143a8b510(local_420);
                          local_3a8 = FUN_143aa5430(uVar3,&local_478,local_488);
                          cVar1 = FUN_143a8b110(local_488[0]);
                          if ((cVar1 == '\0') || (0xf < local_478)) {
                            _guard_xfg_dispatch_icall_nop(local_28,"standard");
                          }
                          else {
                            FUN_143ab5770(local_3a8,local_28,local_478 + 1);
                          }
                          FUN_143b36c80(local_420);
                          FUN_143b36c80(local_470);
                        }
                        iVar2 = _guard_xfg_dispatch_icall_nop(local_38,local_28);
                        if (iVar2 != 0) {
                          lVar5 = FUN_143a8b510(local_4a8);
                          FUN_143a8cfb0(lVar5 + 0x48,"collation",local_38,param_3);
                          cVar1 = FUN_143a8b0e0(*param_3);
                          if (cVar1 != '\0') {
                            local_398 = 0;
                            FUN_143b36c80(local_4a0);
                            FUN_143b36bb0(local_4a8);
                            FUN_143b36c80(local_4b0);
                            FUN_143b36c80(local_4c0);
                            FUN_143b36c80(local_4b8);
                            return local_398;
                          }
                        }
                        if (local_4c8 != '\0') {
                          *param_3 = -0x7f;
                        }
                        local_388 = FUN_143b20430(local_4b8);
                        lVar5 = FUN_143a8b510(local_4a8);
                        *(undefined8 *)(lVar5 + 0x1e0) = local_388;
                        local_378 = FUN_143b20430(local_4a8);
                        FUN_143b36c80(local_4a0);
                        FUN_143b36bb0(local_4a8);
                        FUN_143b36c80(local_4b0);
                        FUN_143b36c80(local_4c0);
                        FUN_143b36c80(local_4b8);
                        return local_378;
                      }
                    }
                    *param_3 = 7;
                    local_370 = 0;
                    FUN_143b36bb0(local_4a8);
                    FUN_143b36c80(local_4b0);
                    FUN_143b36c80(local_4c0);
                    FUN_143b36c80(local_4b8);
                    local_490 = local_370;
                  }
                  else {
                    local_360 = 0;
                    FUN_143b36c80(local_4b0);
                    FUN_143b36c80(local_4c0);
                    FUN_143b36c80(local_4b8);
                    local_490 = local_360;
                  }
                }
              }
              else {
                *param_3 = 1;
                local_3e0 = 0;
                FUN_143b36c80(local_4c0);
                FUN_143b36c80(local_4b8);
                local_490 = local_3e0;
              }
            }
            else {
              local_368 = 0;
              FUN_143b36c80(local_4c0);
              FUN_143b36c80(local_4b8);
              local_490 = local_368;
            }
          }
        }
        else {
          local_358 = 0;
          FUN_143b36c80(local_4b8);
          local_490 = local_358;
        }
      }
    }
  }
  else {
    local_490 = 0;
  }
  return local_490;
}



// FUNCTION 143b60490 FUN_143b60490 body=107 status=ok
// SIG undefined FUN_143b60490(void)

void FUN_143b60490(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143aa3a20(param_1,param_2,"icudt53l-coll","collations",param_3,param_4,param_5,1,param_6);
  return;
}



// FUNCTION 143b60500 FUN_143b60500 body=50 status=ok
// SIG undefined FUN_143b60500(void)

void FUN_143b60500(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_143e1a1c0(*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143b60540 FUN_143b60540 body=182 status=ok
// SIG undefined FUN_143b60540(void)

longlong FUN_143b60540(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_20;
  
  lVar3 = *param_1;
  iVar1 = FUN_143e1a1a0(lVar3);
  if (1 < iVar1) {
    lVar2 = FUN_143a8d310(0x338);
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143bdd790(lVar2,lVar3);
    }
    if (local_20 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_143e1a1c0(lVar3);
      *param_1 = local_20;
      FUN_143e1a120(local_20);
      lVar3 = local_20;
    }
  }
  return lVar3;
}



// FUNCTION 143b60600 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::ByteSink::vftable;
  return param_1;
}



// FUNCTION 143b60620 FUN_143b60620 body=47 status=ok
// SIG undefined FUN_143b60620(void)

undefined4 * FUN_143b60620(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_143b36700(param_1 + 2);
  return param_1;
}



// FUNCTION 143b60650 FUN_143b60650 body=174 status=ok
// SIG undefined FUN_143b60650(void)

undefined8 * FUN_143b60650(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationIterator::vftable;
  param_1[1] = *param_2;
  param_1[2] = param_2;
  FUN_143b60620(param_1 + 3);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x184) = param_3;
  return param_1;
}



// FUNCTION 143b60700 FUN_143b60700 body=97 status=ok
// SIG undefined FUN_143b60700(void)

undefined8 * FUN_143b60700(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143b64490(param_2);
  uVar2 = FUN_143b64300(param_2);
  FUN_143b61040(param_1,uVar2,uVar1);
  *param_1 = icu_53::CollationKeyByteSink::vftable;
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 143b60770 FUN_143b60770 body=207 status=ok
// SIG undefined FUN_143b60770(void)

undefined8 *
FUN_143b60770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  FUN_143b11ea0(param_1 + 5);
  FUN_143b11ea0(param_1 + 0x10);
  FUN_143a8ac30(param_1 + 0x1b);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 143b60840 FUN_143b60840 body=156 status=ok
// SIG undefined FUN_143b60840(void)

undefined8 *
FUN_143b60840(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_143b61120(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::FCDUIterCollationIterator::vftable;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = param_5;
  param_1[0x34] = *(undefined8 *)(param_2 + 0x30);
  FUN_143a8ac30(param_1 + 0x35);
  return param_1;
}



// FUNCTION 143b608e0 FUN_143b608e0 body=108 status=ok
// SIG undefined FUN_143b608e0(void)

_Ref_count_base *
FUN_143b608e0(_Ref_count_base *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  std::tr1::_Ref_count_base::_Ref_count_base(param_1);
  *(undefined ***)param_1 = icu_53::_anon_86DC57F0::FCDUIterNFDIterator::vftable;
  FUN_143b60840(param_1 + 0x20,param_2,0,param_3,param_4);
  return param_1;
}



// FUNCTION 143b60950 FUN_143b60950 body=224 status=ok
// SIG undefined FUN_143b60950(void)

undefined8 *
FUN_143b60950(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_143b611c0(param_1,param_2,param_3,param_4,param_5,param_6,0xfffffffffffffffe);
  *param_1 = icu_53::FCDUTF16CollationIterator::vftable;
  param_1[0x34] = param_4;
  param_1[0x35] = param_5;
  param_1[0x36] = 0;
  param_1[0x37] = param_6;
  param_1[0x38] = *(undefined8 *)(param_2 + 0x30);
  FUN_143a8ac30(param_1 + 0x39);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  return param_1;
}



// FUNCTION 143b60a30 FUN_143b60a30 body=544 status=ok
// SIG undefined FUN_143b60a30(void)

undefined8 * FUN_143b60a30(undefined8 *param_1,undefined8 param_2,longlong param_3,short *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_68 [2];
  short *local_60;
  undefined8 local_58;
  undefined1 local_48 [72];
  
  local_58 = 0xfffffffffffffffe;
  FUN_143b61240(param_1,0,0);
  *param_1 = icu_53::_anon_86DC57F0::FCDUTF16NFDIterator::vftable;
  FUN_143a8ac30(param_1 + 6);
  local_68[0] = 0;
  local_60 = (short *)FUN_143b25b90(param_2,param_3,param_4,0,local_68);
  cVar1 = FUN_143a8b0e0(local_68[0]);
  if (cVar1 == '\0') {
    if ((local_60 == param_4) || ((param_4 == (short *)0x0 && (*local_60 == 0)))) {
      param_1[4] = param_3;
      param_1[5] = local_60;
    }
    else {
      FUN_143ab21b0(param_1 + 6,param_3,(longlong)local_60 - param_3 >> 1 & 0xffffffff);
      FUN_143b108e0(local_48,param_2,param_1 + 6);
      uVar2 = FUN_143a904f0(param_1 + 6);
      cVar1 = FUN_143b24df0(local_48,uVar2,local_68);
      if (cVar1 != '\0') {
        FUN_143b25b90(param_2,local_60,param_4,local_48,local_68);
      }
      FUN_143b10950(local_48);
      cVar1 = FUN_143a8b110(local_68[0]);
      if (cVar1 != '\0') {
        uVar4 = FUN_143a8fe10(param_1 + 6);
        param_1[4] = uVar4;
        iVar3 = FUN_143a904f0(param_1 + 6);
        param_1[5] = param_1[4] + (longlong)iVar3 * 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 143b60c50 FUN_143b60c50 body=172 status=ok
// SIG undefined FUN_143b60c50(void)

undefined8 *
FUN_143b60c50(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  FUN_143b612a0(param_1,param_2,param_3,param_4,param_5,param_6,0xfffffffffffffffe);
  *param_1 = icu_53::FCDUTF8CollationIterator::vftable;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = param_5;
  param_1[0x35] = *(undefined8 *)(param_2 + 0x30);
  FUN_143a8ac30(param_1 + 0x36);
  return param_1;
}



// FUNCTION 143b60d00 FUN_143b60d00 body=116 status=ok
// SIG undefined FUN_143b60d00(void)

_Ref_count_base *
FUN_143b60d00(_Ref_count_base *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  std::tr1::_Ref_count_base::_Ref_count_base(param_1);
  *(undefined ***)param_1 = icu_53::_anon_86DC57F0::FCDUTF8NFDIterator::vftable;
  FUN_143b60c50(param_1 + 0x20,param_2,0,param_3,0,param_4,uVar1);
  return param_1;
}



// FUNCTION 143b60d80 FUN_143b60d80 body=64 status=ok
// SIG undefined FUN_143b60d80(void)

undefined8 * FUN_143b60d80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143b61040(param_1,param_2,param_3);
  *param_1 = icu_53::_anon_86DC57F0::FixedSortKeyByteSink::vftable;
  return param_1;
}



// FUNCTION 143b60dc0 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::CollationKeys::LevelCallback::vftable;
  return param_1;
}



// FUNCTION 143b60de0 _Ref_count_base body=50 status=ok
// SIG undefined _Ref_count_base(_Ref_count_base * this)

/* Library Function - Single Match
    protected: __cdecl std::tr1::_Ref_count_base::_Ref_count_base(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

_Ref_count_base * __thiscall std::tr1::_Ref_count_base::_Ref_count_base(_Ref_count_base *this)

{
  *(undefined ***)this = icu_53::_anon_86DC57F0::NFDIterator::vftable;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  return this;
}



// FUNCTION 143b60e20 FUN_143b60e20 body=107 status=ok
// SIG undefined FUN_143b60e20(void)

undefined8 * FUN_143b60e20(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::_anon_86DC57F0::PartLevelCallback::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 1;
  uVar1 = FUN_143b61ef0(param_1[1]);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  return param_1;
}



// FUNCTION 143b60e90 FUN_143b60e90 body=193 status=ok
// SIG undefined FUN_143b60e90(void)

undefined8 * FUN_143b60e90(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  FUN_143b35650(param_1);
  *param_1 = icu_53::RuleBasedCollator::vftable;
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  param_1[3] = param_2;
  FUN_143a8a610(param_1 + 4,param_3);
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  FUN_143e1a120(param_1[2]);
  FUN_143e1a120(param_1[3]);
  return param_1;
}



// FUNCTION 143b60f60 FUN_143b60f60 body=219 status=ok
// SIG undefined FUN_143b60f60(void)

undefined8 *
FUN_143b60f60(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b35610(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::RuleBasedCollator::vftable;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  FUN_143a8a610(param_1 + 4,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x198);
  *(undefined1 *)((longlong)param_1 + 0x19c) = *(undefined1 *)(param_2 + 0x19c);
  FUN_143e1a120(param_1[2]);
  FUN_143e1a120(param_1[3]);
  return param_1;
}



// FUNCTION 143b61040 FUN_143b61040 body=104 status=ok
// SIG undefined FUN_143b61040(void)

undefined8 * FUN_143b61040(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::SortKeyByteSink::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 143b610b0 FUN_143b610b0 body=105 status=ok
// SIG undefined FUN_143b610b0(void)

undefined8 * FUN_143b610b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_143a8ac30(param_1 + 3);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143b61120 FUN_143b61120 body=87 status=ok
// SIG undefined FUN_143b61120(void)

undefined8 *
FUN_143b61120(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  FUN_143b60650(param_1,param_2,param_3);
  *param_1 = icu_53::UIterCollationIterator::vftable;
  param_1[0x31] = param_4;
  return param_1;
}



// FUNCTION 143b61180 _Ref_count<__ExceptionPtr> body=63 status=ok
// SIG undefined _Ref_count<__ExceptionPtr>(_Ref_count<__ExceptionPtr> * this, __ExceptionPtr * param_1)

/* Library Function - Single Match
    public: __cdecl std::tr1::_Ref_count<class __ExceptionPtr>::_Ref_count<class
   __ExceptionPtr>(class __ExceptionPtr * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

_Ref_count<__ExceptionPtr> * __thiscall
std::tr1::_Ref_count<__ExceptionPtr>::_Ref_count<__ExceptionPtr>
          (_Ref_count<__ExceptionPtr> *this,__ExceptionPtr *param_1)

{
  _Ref_count_base::_Ref_count_base((_Ref_count_base *)this);
  *(undefined ***)this = icu_53::_anon_86DC57F0::UIterNFDIterator::vftable;
  *(__ExceptionPtr **)(this + 0x20) = param_1;
  return this;
}



// FUNCTION 143b611c0 FUN_143b611c0 body=121 status=ok
// SIG undefined FUN_143b611c0(void)

undefined8 *
FUN_143b611c0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_143b60650(param_1,param_2,param_3);
  *param_1 = icu_53::UTF16CollationIterator::vftable;
  param_1[0x31] = param_4;
  param_1[0x32] = param_5;
  param_1[0x33] = param_6;
  return param_1;
}



// FUNCTION 143b61240 FUN_143b61240 body=82 status=ok
// SIG undefined FUN_143b61240(void)

_Ref_count_base * FUN_143b61240(_Ref_count_base *param_1,undefined8 param_2,undefined8 param_3)

{
  std::tr1::_Ref_count_base::_Ref_count_base(param_1);
  *(undefined ***)param_1 = icu_53::_anon_86DC57F0::UTF16NFDIterator::vftable;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return param_1;
}



// FUNCTION 143b612a0 FUN_143b612a0 body=117 status=ok
// SIG undefined FUN_143b612a0(void)

undefined8 *
FUN_143b612a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  FUN_143b60650(param_1,param_2,param_3);
  *param_1 = icu_53::UTF8CollationIterator::vftable;
  param_1[0x31] = param_4;
  *(undefined4 *)(param_1 + 0x32) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x194) = param_6;
  return param_1;
}



// FUNCTION 143b61320 FUN_143b61320 body=92 status=ok
// SIG undefined FUN_143b61320(void)

_Ref_count_base * FUN_143b61320(_Ref_count_base *param_1,undefined8 param_2,undefined4 param_3)

{
  std::tr1::_Ref_count_base::_Ref_count_base(param_1);
  *(undefined ***)param_1 = icu_53::_anon_86DC57F0::UTF8NFDIterator::vftable;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return param_1;
}



// FUNCTION 143b61380 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CollationKeyByteSink::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b613b0 FUN_143b613b0 body=69 status=ok
// SIG undefined FUN_143b613b0(void)

void FUN_143b613b0(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0xd8);
  FUN_143b11ff0(param_1 + 0x80);
  FUN_143b11ff0(param_1 + 0x28);
  return;
}



// FUNCTION 143b61400 FUN_143b61400 body=41 status=ok
// SIG undefined FUN_143b61400(void)

void FUN_143b61400(longlong param_1)

{
  CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl((CMFCRibbonRichEditCtrl *)(param_1 + 0x20));
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b61430 FUN_143b61430 body=41 status=ok
// SIG undefined FUN_143b61430(void)

void FUN_143b61430(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x30);
  operator_delete(param_1);
  return;
}



// FUNCTION 143b61460 FUN_143b61460 body=41 status=ok
// SIG undefined FUN_143b61460(void)

void FUN_143b61460(longlong param_1)

{
  CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl((CMFCRibbonRichEditCtrl *)(param_1 + 0x20));
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b61490 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::_anon_86DC57F0::FixedSortKeyByteSink::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b614c0 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::_anon_86DC57F0::NFDIterator::vftable;
  return;
}



// FUNCTION 143b614e0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::_anon_86DC57F0::PartLevelCallback::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b61510 FUN_143b61510 body=103 status=ok
// SIG undefined FUN_143b61510(void)

void FUN_143b61510(undefined8 *param_1)

{
  *param_1 = icu_53::RuleBasedCollator::vftable;
  FUN_143b60500(param_1 + 2);
  FUN_143b60500(param_1 + 3);
  FUN_143a8acf0(param_1 + 4);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b61580 ~FMovieSceneSegment body=31 status=ok
// SIG undefined ~FMovieSceneSegment(void)

void FMovieSceneSegment::~FMovieSceneSegment(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x18);
  return;
}



// FUNCTION 143b615a0 operator_delete body=24 status=ok
// SIG undefined operator_delete(void)

void operator_delete(undefined8 param_1)

{
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b615c0 FUN_143b615c0 body=612 status=ok
// SIG undefined FUN_143b615c0(void)

undefined8 FUN_143b615c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_143ab1dd0(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_143b61830(param_1[2],param_2[2]);
      if (cVar1 == '\0') {
        if (param_1[1] == param_2[1]) {
          uVar2 = 1;
        }
        else {
          bVar3 = *(longlong *)(param_1[1] + 0x20) == 0;
          bVar4 = *(longlong *)(param_2[1] + 0x20) == 0;
          if (bVar3 == bVar4) {
            if ((((bVar3) || (cVar1 = FUN_143a903a0(param_1[3] + 0x20), cVar1 == '\0')) &&
                ((bVar4 || (cVar1 = FUN_143a903a0(param_2[3] + 0x20), cVar1 == '\0')))) &&
               (cVar1 = FUN_143a8dd00(param_1[3] + 0x20,param_2[3] + 0x20), cVar1 != '\0')) {
              uVar2 = 1;
            }
            else {
              local_38[0] = 0;
              uVar2 = (**(code **)(*param_1 + 0xf0))(param_1,local_38);
              UE4Tuple_Private::
              TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
              TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                        (local_30,uVar2);
              uVar2 = (**(code **)(*param_2 + 0xf0))(param_2,local_38);
              UE4Tuple_Private::
              TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
              TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                        (local_28,uVar2);
              cVar1 = FUN_143a8b0e0(local_38[0]);
              if (cVar1 == '\0') {
                local_20 = FUN_143a8b510(local_28);
                uVar2 = FUN_143a8b510(local_30);
                cVar1 = FUN_143b61870(uVar2,local_20);
                if (cVar1 == '\0') {
                  FUN_143b36bb0(local_28);
                  FUN_143b36bb0(local_30);
                  uVar2 = 1;
                }
                else {
                  FUN_143b36bb0(local_28);
                  FUN_143b36bb0(local_30);
                  uVar2 = 0;
                }
              }
              else {
                FUN_143b36bb0(local_28);
                FUN_143b36bb0(local_30);
                uVar2 = 0;
              }
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143b61830 FUN_143b61830 body=58 status=ok
// SIG undefined FUN_143b61830(void)

bool FUN_143b61830(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143bdd950(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143b61870 FUN_143b61870 body=64 status=ok
// SIG undefined FUN_143b61870(void)

bool FUN_143b61870(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143b618b0 FUN_143b618b0 body=28 status=ok
// SIG undefined FUN_143b618b0(void)

longlong FUN_143b618b0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 8;
}



// FUNCTION 143b618d0 FUN_143b618d0 body=54 status=ok
// SIG undefined FUN_143b618d0(void)

undefined8 FUN_143b618d0(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61910 FUN_143b61910 body=54 status=ok
// SIG undefined FUN_143b61910(void)

undefined8 FUN_143b61910(undefined8 param_1,uint param_2)

{
  FUN_143bd6570(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61950 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61990 FUN_143b61990 body=54 status=ok
// SIG undefined FUN_143b61990(void)

CMFCRibbonRichEditCtrl * FUN_143b61990(CMFCRibbonRichEditCtrl *param_1,uint param_2)

{
  CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b619d0 FUN_143b619d0 body=54 status=ok
// SIG undefined FUN_143b619d0(void)

undefined8 FUN_143b619d0(undefined8 param_1,uint param_2)

{
  FUN_143b61400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b61a10 FUN_143b61a10 body=54 status=ok
// SIG undefined FUN_143b61a10(void)

CMFCRibbonRichEditCtrl * FUN_143b61a10(CMFCRibbonRichEditCtrl *param_1,uint param_2)

{
  CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61a50 FUN_143b61a50 body=54 status=ok
// SIG undefined FUN_143b61a50(void)

undefined8 FUN_143b61a50(undefined8 param_1,uint param_2)

{
  FUN_143b61430(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b61a90 FUN_143b61a90 body=54 status=ok
// SIG undefined FUN_143b61a90(void)

CMFCRibbonRichEditCtrl * FUN_143b61a90(CMFCRibbonRichEditCtrl *param_1,uint param_2)

{
  CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61ad0 FUN_143b61ad0 body=54 status=ok
// SIG undefined FUN_143b61ad0(void)

undefined8 FUN_143b61ad0(undefined8 param_1,uint param_2)

{
  FUN_143b61460(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b61b10 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61b50 FUN_143b61b50 body=54 status=ok
// SIG undefined FUN_143b61b50(void)

undefined8 FUN_143b61b50(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61b90 FUN_143b61b90 body=54 status=ok
// SIG undefined FUN_143b61b90(void)

undefined8 FUN_143b61b90(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b61bd0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61c10 FUN_143b61c10 body=54 status=ok
// SIG undefined FUN_143b61c10(void)

undefined8 FUN_143b61c10(undefined8 param_1,uint param_2)

{
  FUN_143b61510(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61c50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61c90 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b61cd0 FUN_143b61cd0 body=54 status=ok
// SIG undefined FUN_143b61cd0(void)

undefined8 FUN_143b61cd0(undefined8 param_1,uint param_2)

{
  operator_delete(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b61d10 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}


